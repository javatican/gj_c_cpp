#include <stdio.h>
#include <stdlib.h>
int main() {
	long x = 123L; //L: long
	unsigned int y = 0173U; //U: unsigned
	int z= 0x7b;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	float a = 1.01F; //F: float
	double b = 2.5345634534L; //L:  double
	printf("a=%.3f\n",a);
	printf("b=%.3f\n",b);
	float e = 1.2E+6;
	printf("e=%.3f\n",e);
	return 0;
}
