//#include <stdio.h>
//
//int main()
//{
//	// 1.����short��int��long��long long�����������͵ı���
//	// ��ʽ���������� ������ = ����ֵ	
//	// short ������ windows��ռ2���ֽڣ�-32768~32767��
//	short a = 10;
//	printf("%d\n", a);
//
//	// int ���� windows��ռ4���ֽڣ�-2147483647~2147483647��
//	int b = 100;
//	printf("%d\n", b);
//
//	// long ������ Windows��ռ4���ֽڣ�-2147483647~2147483647��
//	//			   Linux��ռ8���ֽ�
//	long c = 1000L;
//	printf("%ld\n", c);
//
//	// long long �������� Windows��ռ8���ֽڣ�19λ����
//	long long d = 10000LL;
//	printf("%lld\n", d);
//
//	// 2.�з����������޷��������Ķ������
//	// signed�з��� ���� ����
//	// unsigned �޷��� ���� ����
//	signed int e = -100; // signed ����ʡ�Բ�д
//	printf("%d\n", e);
//
//	// ����һ��������ʾ���
//	unsigned int f = 999;
//	printf("%u\n", f); // %u��ʾ��unsigned����޷���
//	return 0;
//}