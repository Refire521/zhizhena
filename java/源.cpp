#include<stdio.h>
int strcmp(char *x,char *y)
{
	int i = 0;
	while (*x || *y) {
		if (*x > * y)return 1;
		else if (*x < *y)return -1;
		else { x++; y++; }
	}
	if (*x == 0 && *y == 0)return 0;
}
int main()
{	
	char c1[80], c2[20];
	gets_s(c1);
	gets_s(c2);
	printf("%d", strcmp(c1, c2));
	return 0;
}