//#include <stdio.h>
//
//int main() {
//	// 定义方式1：
//	int a[3][4]; // 二维数组
//
//	/*
//		逻辑上理解1：对于二维数组的理解，可以看作是由一维数组嵌套而成的，即一维数组array1又作为另一个一维数组array2的元素而存在
//		逻辑上的理解2：二维数组理解为一个矩阵，如上述定义的数组a，就是一个3行4列的矩阵
//		内存上的理解：在'内存'中，各元素是连续存放的，不是二维的，是线性的，是按行存放的
//	*/
//
//	// 关于长度的测试
//	printf("%d\n", sizeof(a)); // 获取二维数组a占用的字节数：48
//	printf("%d\n", sizeof(a) / sizeof(int)); // 获取二维数组元素的个数：12
//
//	// 给指定索引位置的元素赋值
//	a[0][0] = 10;
//	a[0][1] = 20;
//	a[0][2] = 30;
//	a[0][3] = 30;
//	a[1][0] = 10;
//	a[1][1] = 20;
//	a[1][2] = 30;
//	a[1][3] = 40;
//	a[2][0] = 10;
//	a[2][1] = 20;
//	a[2][2] = 30;
//	a[2][3] = 40;
//
//	// 遍历数组
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	// 获取各个数组元素的地址
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("a[%d][%d] = %p\n",i,j,&a[i][j]);
//		}
//		printf("\n");
//	}
//
//	// 定义方式2：声明数组的同时，给所有的数组元素赋值
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//
//	// 测试地址
//	printf("%p\n", arr[0]);
//	printf("%p\n", arr[0]+1);
//	printf("%p\n", arr[0]+2);
//	printf("%p\n", arr[0]+3);
//
//
//	// 定义方式3：部分元素赋值
//	// 没有赋值的位置，自动赋值为"零"
//	int arr1[2][2] = { [0] [0] = 1,[1][0] = 2 };
//	for (int i = 0;i < 2;i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%d ",arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	// 定于方式4：使用单层大括号赋值
//	int arr2[2][4] = { 1,2,3,4,5,6,7,8 };
//
//	// 定义方式5：方式4的简化
//	int arr3[][4] = { 1,2,3,4,5,6,7,8 };
//	int arr4[][4] = { {1,2,3,4},{ 5,6,7,8 } };
//	int arr4[][4] = { 1,2,3,4, 5,6,7 }; // 没有赋值的位置，自动赋值为零
//}