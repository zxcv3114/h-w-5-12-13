#include <stdio.h>
#include<stdlib.h>
void oii(char* t,int i);
int main()
{
	char k[100];
	int i;
	scanf_s("%s",k,100);
	i = strlen(k)-1;
	oii(k, i);
	system("pause");
	return 0;
}
void oii(char* t, int i)
{
	if (i == 0)
	{
		printf("%c", t[i]);
}
	else
	{
		printf("%c", t[i]);
		oii(t, i - 1);
	}
}