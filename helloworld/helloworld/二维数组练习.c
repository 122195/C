//#include <stdio.h>
//#define ROWS 3
//#define COLS 4
//
//int main() {
//	// 练习1：获取所有元素的和
//	// 定义二维数组
//
//	int arr1[ROWS][COLS] = { {3,5,8},{12,9},{7,0,6,4} };
//	//遍历二维数组，获取每个元素值，累加到变量sum中
//	int sum = 0;
//	for (int i = 0; i < ROWS;i++) {
//		for (int j = 0; j < COLS; j++) {
//			sum += arr1[i][j];
//		}
//	}
//	printf("数组元素的和是：%d\n", sum);
//
//	// 练习2：求二维数组最大值以及对应的行列角标
//	int a[ROWS][COLS] = { {1,   2,  3,  4},{9,   8,  7,  6},{-10, 10, -5, 2} };
//
//	int max = a[0][0];
//	int maxROW = 0;
//	int maxCOL = 0;
//	for (int i = 0; i < ROWS;i++) {
//		for (int j = 0; j < COLS; j++) {
//			if (max < a[i][j]) {
//				max = a[i][j];
//				maxROW = i;
//				maxCOL = j;
//			}
//		}
//	}
//	printf("最大值是：%d\n",max);
//	printf("行角标是：%d\n",maxROW);
//	printf("列角标是：%d\n",maxCOL);
//
//	// 练习3：将一个二维数组行和列的元素互换，存到另一个二维数组中。
//	// 声明数组a,b
//	int a1[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2];
//	for (int i = 0;i<2;i++) {
//		for (int j = 0; j < 3; j++) {
//			b[j][i] = a1[i][j];
//		}
//	}
//
//	// 遍历数组a
//	printf("遍历数组a\n");
//	for (int i = 0; i < 2;i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d", a1[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//	// 遍历数组b
//	printf("遍历数组b\n");
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%d", b[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//	// 练习4：输出10行杨辉三角
//	// 1.声明二维数组，对应着杨辉三角
//	int YangHui[10][10];
//	// 2.给二维数组的每个元素赋值
//	for (int i = 0 ;i <10;i++) {
//		// 每行的首尾元素赋值为1
//		YangHui[i][0] = 1;
//		YangHui[i][i] = 1;
//		// 每行的非首尾元素赋值为：yanghui[i][j]=yanghui[i-1][j-1]+yanghui[i-1][j];
//		for (int j = 1; j < i; j++) {
//			YangHui[i][j] = YangHui[i - 1][j - 1] + YangHui[i - 1][j];
//		}
//	}
//
//	// 3.遍历二维数组
//	for (int i = 0; i < 10;i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", YangHui[i][j]);
//		}
//		printf("\n");
//	}
//}