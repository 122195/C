#include <stdio.h>

int main() {
	int num = 10;
	printf("num = %d\n",num); // 输出变量的值num = 10
	// %p:占位符，表示地址
	printf("&num = %p\n", &num);
	
	// 给指针变量赋值
	int* p1;
	p1 = &num;
	printf("%p\n", p1);
}