#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	int result;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	result=strcmp(str1,str2);
	if(result==0)
	printf("strings are equal");
	else
	printf("strings are not equal");
	return 0;
}
