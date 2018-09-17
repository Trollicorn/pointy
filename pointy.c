#include <stdio.h>

int main(){

	unsigned int n = 2500000000; // 2.5 billion

	char *p = &n; 

	printf("the int: %x \n", n);

    // print indivual bytes
	for (int i = 0; i < 4; ++i){
		printf("byte %d: %hhx\n", i, *p);
		p++;
	}

	p = &n; //reset to n;

	for (int i = 0; i < 4; ++i){
		*p++;
		p++;
	}

	printf("the int1x: %x \n", n);
	printf("the int1d: %d \n", n);

	p = &n;

	for (int i = 0; i < 4; ++i){
		*p += 16;
		p++;
	}

	printf("the int16x: %x \n", n);
	printf("the int16d: %d \n", n);

	return 0;
}