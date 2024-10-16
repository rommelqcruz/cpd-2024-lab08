#ifndef ESTANDAR_H
#define ESTANDAR_H

#include "histogram.h"
#include <mutex>

class Estandar : public Histogram {
 public:
  std::vector<int> calculate(const int*, const int, const int) override;
  void calcular_histograma(int* histograma, int inicio, int fin, const int* input, std::mutex mtx);
};

#endif