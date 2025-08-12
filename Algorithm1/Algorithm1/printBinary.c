#include <stdio.h>

void printBin(int a) {
	if (a == 0 || a == 1)
		printf("%d", a);
	else {
		printBin(a/2);     //��
		printf("%d", a%2); //������
	}
}

/*
	   a                         ��       ������
	printBin(11), printBin(11/2), 5, 11%2, 1
	printBin(5),  printBin(5/2),  2,  5%2, 1
	printBin(2),  printBin(2/2),  1,  5%2, 0
	printBin(1),  printBin(1/2),  0,  1%2, 1
	����� ������ ��µ� ������ �ݴ�(���ø޸� ���)
*/

int main()
{
	int x = 11;

	printBin(x); //1011

	return 0;
}