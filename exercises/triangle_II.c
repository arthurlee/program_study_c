/*
	打印三角形，贴着左边，如下：

	*
	***
	*****
	*******
	*********
*/

/*
#include <stdio.h>

int main() {

	printf("*\n");
	for(int i = 0; i < 4; i++) {
		printf("*");
		for(int j = i + 1; j > 0; j--) {
			printf("**");
		}
		printf("\n");
	}

	return 0;
} 
*/

#include <stdio.h>

int main() {
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = 2 * i - 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}