#define _CRT_SECURE_NO_WARNINGS //ִ��scanf����Ҫ�����д���д���ļ��ĵ�һ��
// ������Ϊ���ֲ�������ȫ�ֱ���
// {}�������ڲ�����ı��� = �ֲ�����
// {}�������ⲿ����ı��� = ȫ�ֱ���
// ��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ�����
#include <stdio.h>
//int b = 10; // ȫ�ֱ���
int main() {
	//short age = 20; // ����
	//int height = 180; // ���
	//float weight = 70; // ����
	//int a = 20; // �ֲ�����

	// дһ�����룬����2�������ĺ�
	// scanf ��һ�����뺯��
	int num1 = 0;
	int num2 = 0;

	// ����2������
	scanf("%d %d", &num1, &num2);
	// ���
	int sum = num1 + num2;
	// ���
	printf("%d\n", sum);
	return 0;
}