#include <stdio.h>

int main()
{
	// 1.����short��int��long��long long�����������͵ı���
	// ��ʽ���������� ������ = ����ֵ	
	// short ������ windows��ռ2���ֽڣ�-32768~32767��
	short a = 10;
	printf("%d\n", a);

	// int ���� windows��ռ4���ֽڣ�-2147483647~2147483647��
	int b = 100;
	printf("%d\n", b);

	// long ������ Windows��ռ4���ֽڣ�-2147483647~2147483647��
	//			   Linux��ռ8���ֽ�
	long c = 1000L;
	printf("%ld\n", c);

	// long long �������� Windows��ռ8���ֽڣ�19λ����
	long long d = 10000LL;
	printf("%lld\n", d);
	// 2.����sizeof����ÿһ����������ռ�ö����ֽ�
	// zu��ʾ��ӡsizeof�Ĳ������sizeof(������/��������)
	// short
	printf("%zu\n", sizeof(short)); // 2���ֽ�
	// int
	printf("%zu\n", sizeof(int)); // 4���ֽ�
	// long
	printf("%zu\n", sizeof(long)); // 4���ֽ�
	// longlong
	printf("%zu\n",sizeof(long long)); // 8���ֽ�

	return 0;
}