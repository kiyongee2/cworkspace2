#include <stdio.h>

int func(int n) {
	if (n == 1)
		return 1;
	else
		return n * func(n - 1);
}
/*
   i=5, f(5) 5*f(4) = 120
        f(4) 4*f(3) = 24
		f(3) 3*f(2) = 6
		f(2) 2*f(1) = 2
		f(1) 1
   
   i=3  f(3) 3*f(2) = 6
		f(2) 2*f(1) = 2
		f(1) 1
   i=1  f(1) = 1
   
   */

int main() {
	int i;

	for (i = 5; i >= 0; i--) {
		if (i % 2 == 1)
			printf("func(%d) : %d\n", i, func(i));
	}
	return 0;
}