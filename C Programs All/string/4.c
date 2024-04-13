#include<stdio.h>
int main()
{
	int count1=0,count2=0,i,j,flag;
	char str[100],search[20];
	printf("Enter the string:\n");
	scanf("%s",&str);
	printf("Enter the search substring:\n");
	scanf("%s",&search);
	while(str[count1]!='\0')
	count1++;
	while(search[count2]!='\0')
	count2++;
	for(i=0;i<=count1-count2;i++)
	{
		for(j=1;j<i+count2;j++)
		{
			flag=1;
			if(str[j]!=search[j-i])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	printf("Search successfull");
	else
	printf("Search unsuccessfull");
	return 0;
}
