#define Foobar(n) \
 struct Boobaz_n { \
	int age; \
	int length; \
	int foo[n]; \
 } \

#include <stdio.h>
#include <stdlib.h>

// Scrapple to define a variable-length struct using a macro

int main(int argc, char* argv[]) {
	Foobar(10) x;
	x.age = 17;
	for(unsigned int i = 0; i < 10; ++i) {
		x.foo[i] = 0;
	}
	printf("%lu\n", sizeof(x));
	return 0;
}
