#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, v = 0;
	scanf("%d", &q);
	w = q / 1;
	v = (q / 10) + 10;
	if (w > v)
	{
		printf("v\n");
	}
	else
	{
		printf("w\n");
	}
	return 0;
}