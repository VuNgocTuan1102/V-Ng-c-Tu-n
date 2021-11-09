#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void lockitu(char s)
{
	if((s>='a') && (s<='z'))
	{
		printf("Chu cai thuong");
	}
	else if((s>='A') && (s<='Z'))	
	{
		printf("Chu cai in hoa");
	}
	else
	{
		printf("Ki tu khac");
	}
}
int main()
{
	char s[0];
	printf("Nhap ki tu : \n ");
	scanf("%c",&s);
	lockitu(s[0]);
	return 0;
}

