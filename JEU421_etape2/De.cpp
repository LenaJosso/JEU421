#include "De.h"
#include <iostream>
#include <random>

using namespace std;

int De::lancerDe(int faceDe) {
	nbDe = rand() % faceDe + 1;
	return faceDe;
};
