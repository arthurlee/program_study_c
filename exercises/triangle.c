/*
	打印三角形，贴着左边，如下：

	*
	**
	***
	****
	*****
*/

#include <stdio.h>

int main() {
	for(int i = 0; i < 11; i++) {
		for(int j = i + 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}