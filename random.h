#ifndef _RANDOM_H
#define _RANDOM_H

#include <stdlib.h>
#include <time.h>

void initSeed();
double randomDouble(double, double);
int randomInteger(int, int);
float randomFloat(float low, float high);

#endif
