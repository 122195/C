//#include <stdio.h>
//
//int main()
//{
//	// 1.����float��double��long double�������͵ı���
//	// float ������С������ȷ��С����6λ��windowsռ4���ֽڣ�38λ��
//	float a = 3.14F;
//	printf("%.2f\n", a); // .2��ʾȡ��С����2λ��Ĭ����6λ
//
//	// double ˫����С������ȷ��С�����15λ��windowsռ8���ֽڣ�308λ��
//	double b = 1.78;
//	printf("%.2lf\n",b); // ��ӡdouble����fǰ�����дl
//
//	// long double �߾���С������ȷ��С�����18~19λ��windowsռ8���ֽ� ����ռ��12��16���ֽڣ�
//	long double c = 3.1415926L; // ��ֵ��������L
//	printf("%.2lf\n", c);
//
//	// 2.����sizeof����ÿһ����������ռ�ö����ֽ�
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n",sizeof(long double));
//
//	// 3.С�������������޷���unsinged���ʹ��
//	return 0;
//}