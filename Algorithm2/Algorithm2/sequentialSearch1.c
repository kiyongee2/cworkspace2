#include <stdio.h>
/*
   ���� Ž��(Sequential Search)
   - �迭�� ù��° ��Һ��� �ϳ��� �˻�
   - ã�� ���� ������ ��ġ ���
*/
int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int i;
	int x = 10;  //ã�� ��
	int found = 0; //����(���)

	//�ݺ� - Ž��
	for (i = 0; i < 9; i++) {
		if (a[i] == x) {
			printf("%d��(��) a[%d]�� �ֽ��ϴ�.\n", x, i);
			found = 1;
			break;
		}
	}

	if (!found)
		printf("%d��(��) �����ϴ�.\n", x);

	return 0;
}