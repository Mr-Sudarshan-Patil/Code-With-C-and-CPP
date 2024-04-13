#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	char str3[20];
	int i=0,j=0;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	//insert first string
	while(str1!='\0')
	{
		str3[j]=str1[i];
		i++;
		j++;
	}
	//insert second string
	i=0;
	while(str2!='\0')
	{
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]!='\0';
	printf("concatenated string %s",str3);
	return 0;
}
