#include "pow.h"

int pow(int a, int b) {
	int c = a;
	for (int i = 0; i <= b; i++) {
		a = a * c;
	}
	return a;
}
