#include<stdio.h>
#include<stdlib.h>
void mix(int*y,int e);
int mx = 0;
int main(void)
{
	int j,i;
	int t[100];
	printf("¿é¤J¼Æ¶q:");
	scanf_s("%d", &j);
	for(i=0;i<j;i++)
	{
		scanf_s("%d", &t[i]);
	}
	mix(t,j-1);
	system("pause");
	return 0;
}
void mix(int* y,int e)
{
	if(e<0)
	{
		printf("%d", mx);
	}
	
	else
	{
		if (mx < y[e])
		{
			mx = y[e];
	}
		mix(y, e - 1);
	}

}