#include<stdio.h>
#include<stdio.h>
int main()
{
	char name1[100],name2[100],name3[100],ch='B';
	char *x;
	printf("Enter first string:\n");
	scanf("%s",name1);
	printf("Enter second string:\n");
	scanf("%s",name2);
	printf("strlen():%ld\n",strlen(name1));
	printf("strcat():%s\n",strcat(name1,name2));
	strcpy(name3,name1);
	printf("strcpy():%s\n",strcpy(name2));
	printf("strcmp():%d\n",strcmp(name1,name2));
	printf("strlwr():%s\n",strlwr(name1));
	printf("strupr():%s\n",strupr(name1));
	x=strchr(name1,ch);
	printf("strchr():string after ch is %s\n",x);
	x=strstr(name1,name2);
	printf("strstr():%s\n",x);
	return 0;
}
