#include <stdio.h>
#define SMALLER_VALUE_OF_X

#ifdef SMALLER_VALUE_OF_X
#define X 6
#else
#define X 7
#endif

int main(void) {
	printf("%d" , X);
	return 0;
}
