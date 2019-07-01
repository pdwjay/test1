#include<stdio.h>
int main()
{
	int ch[10];
	int i=0;
	int n=0;
	int sum=0;
	double average=0;
	printf("please enter your sum\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",&ch[i]);
		sum=sum+ch[i];
		
		
	}
	average=sum/10.0;
	printf("%f\n",average);
	for(i=0;i<9;i++)
	{
		if(ch[i]>average)
		printf("%d\n",&ch[i]);
		
	}
	return 0;
}
