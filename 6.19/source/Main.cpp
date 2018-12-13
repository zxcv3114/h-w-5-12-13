#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int n[11] = { 0 },i,t1,t2,sum;
	srand(time (0));
	for (i = 1;i <= 36000;i++)
	{
		t1 = rand() % 6 + 1;
		t2 = rand() % 6 + 1;
		sum = t1 + t2;
		n[sum - 2]++;
	}
	for (i = 1;i <= 11;i++)
	{
		printf("%2d %5d\n", i + 1, n[i - 1]);
}
	system("pause");
	return 0;


}