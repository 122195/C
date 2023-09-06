#include <stdio.h>
// 在C语言中，cosnt修饰的a，本质是变量，但是不能被修改，有常量的属性	
int main() {
	const int a = 10; // 添加cosnt之后变量不能被改变
	//a = 20;
	printf("%d\n", a);
	return 0;
}