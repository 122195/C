//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	// һ���棬�ַ�������Կ�����ͨ������
//	char arr[] = { 'a','b','c','d' };
//	// ��һ���棬�ַ��������洢��char���͵������У��ַ����������'\0'�ַ���������ʾһ���ַ����Ľ���
//	// ��ʽ1: ��׼д��
//	char str1[6] = { 'a','b','c','\0'};
//	// ��ʽ2����д��
//	// �Զ���ĩβ���'\0'�ַ�
//	char str2[12] = { "hello world" }; // ע��ʹ��˫���ţ��ǵ�����
//	// ����
//	char str3[12] = "hello world"; // ����ʡ��һ��{}����ʼ������Ԫ��
//	//��ʽ3����һ����
//	char str4[] = { "hello world" };
//	char str5[] = "hello world";
//	puts(str5); // ��������ַ����������Զ����һ��\n
//
//	//�ַ�����Ӧ���ַ�����ĳ���
//	printf("%d\n", sizeof(str4) / sizeof(char)); // 12
//	printf("%d\n",sizeof(str5) / sizeof(char)); // 12
//
//	// �ַ����ĳ���
//	printf("%d\n", strlen(str4));//11
//	printf("%d\n", strlen(str5));//11
//}