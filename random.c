#include "random.h"

void initSeed() {
	srand(time(NULL));
}

double randomDouble(double low, double high) {
	double d = (double) rand() / RAND_MAX;

	d *= high - low;

	return low + d;
}