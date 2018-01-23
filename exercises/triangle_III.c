/*
	打印三角形，居中，如下：

	    *
	   ***
	  *****
	 *******
	*********
*/

#include <stdio.h>

int main() {
	int n = 5;
	for(int i = 1; i <= n; i++) {
		for(int k = n - i; k > 0; k--) {
			printf(" ");
		}
		for(int j = 2 * i - 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}