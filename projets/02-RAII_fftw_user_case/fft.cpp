#include <iostream>
#include <vector>
#include <cmath>
#include <fftw3.h>

class FFT{

private:
  double* in ;
  fftw_complex* out;
  fftw_plan planfwd;
  fftw_plan planbwd;

public:

  FFT(int N){
    in = (double*) fftw_malloc(sizeof(double)*N);
    out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * (N/2 + 1));
  }
  ~FFT{
    fftw_free(in);
    fftw_free(out);
    fftw_destroy_plan(plan_fwd);
    fftw_destroy_plan(plan_bwd);
  }


}






// Différence max pour des vecteurs de double
double max_abs_diff_double(const std::vector<double>& a, const std::vector<double>& b) {
    if (a.size() != b.size()) return INFINITY;
    double emax = 0.0;
    for (size_t i = 0; i < a.size(); ++i) {
        double e = std::fabs(a[i] - b[i]);
        if (e > emax) emax = e;
    }
    return emax;
}

// ----------------------------
// FFT 1D (réel -> complexe -> réel)
// ----------------------------
void demo_fft_1d(size_t N) {
    std::cout << "\n=== FFT 1D (R2C/C2R) N=" << N << " ===\n";

    // Allocation
    double* in  = (double*) fftw_malloc(sizeof(double) * N);
    fftw_complex* out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * (N/2 + 1));

    // Signal test: somme de sinus/cosinus
    std::vector<double> ref(N);
    for (size_t i = 0; i < N; ++i) {
        double x = double(i) / double(N);
        ref[i] = std::sin(2.0 * M_PI * 5.0 * x) + 0.5 * std::cos(2.0 * M_PI * 12.0 * x);
        in[i] = ref[i];
    }

    // Plans
    fftw_plan plan_fwd = fftw_plan_dft_r2c_1d((int)N, in, out, FFTW_ESTIMATE);
    fftw_plan plan_bwd = fftw_plan_dft_c2r_1d((int)N, out, in, FFTW_ESTIMATE);

    // Aller
    fftw_execute(plan_fwd);

    // Retour
    fftw_execute(plan_bwd);

    // Normalisation (FFTW ne normalise pas)
    std::vector<double> rec(N);
    for (size_t i = 0; i < N; ++i) rec[i] = in[i] / double(N);

    // Erreur
    double err = max_abs_diff_double(ref, rec);
    std::cout << "Erreur max reconstruction (1D) = " << err << "\n";

    // Nettoyage
    fftw_destroy_plan(plan_fwd);
    fftw_destroy_plan(plan_bwd);
    fftw_free(in);
    fftw_free(out);
}


