/*
	打印正方形，如下：

* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * * 
*/

#include <stdio.h>

int main() {
	int square_a = 6;
	int lines = square_a;
	for (int i = lines; i > 0; i--){
		for (int j = square_a; j > 0; j--){
			printf("* ");
		}
		printf("\n");
	}
}