/*
	打印一个去掉一条对角线的正方形，如下：

  * * * * * 
*   * * * *  
* *   * * * 
* * *   * * 
* * * *   * 
* * * * *   
*/

// 复杂的方法

#include <stdio.h>

int main() {
	int lines = 5;

	for (int i = 1; i <= lines; i++) {
		// 前面的*
		for (int j = 0; j < i - 1; j++) {
			printf("*");
		}

		// 中间的空格
		printf(" ");

		// 后面的*
		for (int j = 0; j < lines - i; j++) {
			printf("*");
		}
		
		// 换行
		printf("\n");
	}

	return 0;
}