/*
	打印一个去掉另一条对角线的正方形，如下：

* * * * *   
* * * *   *  
* * *   * * 
* *   * * * 
*   * * * * 
  * * * * *
   
*/

// 巧妙的算法，利用 i==j 的时候为空格的特点

#include <stdio.h>

int main() {
	int square = 5;
	for (int i = square; i > 0; i--){
		for (int j = square; j > 0; j--){
			if (i + j == square + 1) {
				printf(" ");
			} else {
				printf("*");
			}			
		}
		printf("\n");
	}

	return 0;
}
