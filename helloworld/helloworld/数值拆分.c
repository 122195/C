//#include <stdio.h>
//
//int main()
//{
//	// 需求：键盘录入三位数，将其拆分为个位，十位，百位，打印在控制台
//	printf("请输入一个三位数");
//	int num;
//	scanf("%d", &num);
//	printf("%d\n", num);
//	// 拆分
//	int gw = num % 10; // 个位
//	int sw = num / 10 % 10; // 十位
//	int bw = num / 100 % 10; // 百位
//	// 输入打印
//	printf("个位是：%d\n", gw);
//	printf("十位是：%d\n", sw);
//	printf("百位是：%d\n", bw);
//
//	return 0;
//}