#include <stdio.h>

int main() {
	int num = 10;
	printf("num = %d\n",num); // ���������ֵnum = 10
	// %p:ռλ������ʾ��ַ
	printf("&num = %p\n", &num);
	
	// ��ָ�������ֵ
	int* p1;
	p1 = &num;
	printf("%p\n", p1);
}