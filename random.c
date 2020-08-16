#include "random.h"

void initSeed() {
	srand(time(NULL));
}

double randomDouble(double low, double high) {
	double d = (double) rand() / RAND_MAX;

	d *= high - low;

	return low + d;
}

int randomInteger(int low, int high) {
    return low + rand() % high;
}

float randomFloat(float low, float high) {
  float f = (float) rand() / RAND_MAX;
  f *= high - low;
  return low + f;
}
