#include <stdio.h>
/*
   순차 탐색(Sequential Search)
   - 배열의 첫번째 요소부터 하나씩 검사
   - 찾는 값과 같으면 위치 출력
*/
int seqSearch(int a[], int n, int x) {
	int i = 0;
	while (1) { 
		if (i == n)  //예; n=9(범위 밖)
			return -1; //검색 실패
		if (a[i] == x)
			return i;  //검색 성공
		i++;
	}
}

int main()
{
	int a[] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;
	int x = 6; //찾을 값
	int idx;   //배열의 인덱스

	size = sizeof(a) / sizeof(a[0]);

	idx = seqSearch(a, size, x); //순차 탐색 함수 호출
	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는(은) a[%d]에 있습니다.\n", x, idx);


	return 0;
}