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
		printf("在第%d的陣列中\n", mid);

	}
	
	 else if (a[d] == b)
	 {
		 printf("在第%d的陣列中\n", d);

	 }
	 else if (a[c] == b)
	 {
		 printf("在第%d的陣列中\n", c);

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

			 printf("此數不在這個陣列中");
		 }
		 else tep(a, b, c, d);
	 }
}