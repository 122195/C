//#include <stdio.h>
//#define ROWS 3
//#define COLS 4
//
//int main() {
//	// ��ϰ1����ȡ����Ԫ�صĺ�
//	// �����ά����
//
//	int arr1[ROWS][COLS] = { {3,5,8},{12,9},{7,0,6,4} };
//	//������ά���飬��ȡÿ��Ԫ��ֵ���ۼӵ�����sum��
//	int sum = 0;
//	for (int i = 0; i < ROWS;i++) {
//		for (int j = 0; j < COLS; j++) {
//			sum += arr1[i][j];
//		}
//	}
//	printf("����Ԫ�صĺ��ǣ�%d\n", sum);
//
//	// ��ϰ2�����ά�������ֵ�Լ���Ӧ�����нǱ�
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
//	printf("���ֵ�ǣ�%d\n",max);
//	printf("�нǱ��ǣ�%d\n",maxROW);
//	printf("�нǱ��ǣ�%d\n",maxCOL);
//
//	// ��ϰ3����һ����ά�����к��е�Ԫ�ػ������浽��һ����ά�����С�
//	// ��������a,b
//	int a1[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2];
//	for (int i = 0;i<2;i++) {
//		for (int j = 0; j < 3; j++) {
//			b[j][i] = a1[i][j];
//		}
//	}
//
//	// ��������a
//	printf("��������a\n");
//	for (int i = 0; i < 2;i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d", a1[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//	// ��������b
//	printf("��������b\n");
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%d", b[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//	// ��ϰ4�����10���������
//	// 1.������ά���飬��Ӧ���������
//	int YangHui[10][10];
//	// 2.����ά�����ÿ��Ԫ�ظ�ֵ
//	for (int i = 0 ;i <10;i++) {
//		// ÿ�е���βԪ�ظ�ֵΪ1
//		YangHui[i][0] = 1;
//		YangHui[i][i] = 1;
//		// ÿ�еķ���βԪ�ظ�ֵΪ��yanghui[i][j]=yanghui[i-1][j-1]+yanghui[i-1][j];
//		for (int j = 1; j < i; j++) {
//			YangHui[i][j] = YangHui[i - 1][j - 1] + YangHui[i - 1][j];
//		}
//	}
//
//	// 3.������ά����
//	for (int i = 0; i < 10;i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", YangHui[i][j]);
//		}
//		printf("\n");
//	}
//}