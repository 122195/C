//#include <stdio.h>
//
//int main()
//{
//	// 1.定义float、double、long double数据类型的变量
//	// float 单精度小数（精确到小数后6位）windows占4个字节（38位）
//	float a = 3.14F;
//	printf("%.2f\n", a); // .2表示取到小数后2位，默认是6位
//
//	// double 双精度小数（精确到小数点后15位）windows占8个字节（308位）
//	double b = 1.78;
//	printf("%.2lf\n",b); // 打印double类型f前面必须写l
//
//	// long double 高精度小数（精确到小数点后18~19位）windows占8个字节 其他占（12或16个字节）
//	long double c = 3.1415926L; // 数值后面必须加L
//	printf("%.2lf\n", c);
//
//	// 2.利用sizeof测量每一种数据类型占用多少字节
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n",sizeof(long double));
//
//	// 3.小数的数据类型无法跟unsinged组合使用
//	return 0;
//}