#include<stdio.h>
#include<stdlib.h>
void tep(int* a, int b,int c,int d);

int mid;
int main(void)
{
	while (1) {
		int left = 0, right = 11;
		int j;
		int n[12] = { 10,20,30,40,50,60,70,80,90,120,135,141 };
		scanf_s("%d", &j);
		tep(n, j, left, right);
	}
		system("pause");
		return 0;
	
}
void tep(int* a, int b,int c,int d)
{
	
	mid = (c + d) / 2;
	 if (a[mid] == b)
	{
		printf("�b��%d���}�C��\n", mid);

	}
	
	 else if (a[d] == b)
	 {
		 printf("�b��%d���}�C��\n", d);

	 }
	 else if (a[c] == b)
	 {
		 printf("�b��%d���}�C��\n", c);

	 }
	 else
	 {
		 if (a[mid] > b)
		 {
			 d = mid;

		 }
		 else
		 {
			 c = mid;

		 }
		 if (d - c == 1) {

			 printf("���Ƥ��b�o�Ӱ}�C��");
		 }
		 else tep(a, b, c, d);
	 }
}