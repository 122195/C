#include <stdio.h>
#include <stdlib.h> // �����

int main() {
	// 1. �������ӣ���ʼֵ����Ϊÿһ�����������ͨ��ǰһ�������ٽ��һϵ�и��ӵļ���õ���
	srand(1);
	for (int i = 1; i <= 5; i++) {
		// 2. ���������
		int num = rand();
		printf("%d\n", num);
	}
}