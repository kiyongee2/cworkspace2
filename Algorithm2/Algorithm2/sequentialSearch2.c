#include <stdio.h>
/*
   ���� Ž��(Sequential Search)
   - �迭�� ù��° ��Һ��� �ϳ��� �˻�
   - ã�� ���� ������ ��ġ ���
*/
void sequentialSearch(int a[], int n, int x) {
	int i;
	int found = 0; //����(���)

	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, i);
			found = 1;
			break;
		}
	}

	if (!found)
		printf("%d��(��) �����ϴ�.\n", x);
}

int main()
{
	int a[] = {5, 9, 2, 4, 8, 6, 7, 1, 3};
	int size;
	int x = 6;  //ã�� ��
	
	size = sizeof(a) / sizeof(a[0]);

	sequentialSearch(a, size, x);


	return 0;
}