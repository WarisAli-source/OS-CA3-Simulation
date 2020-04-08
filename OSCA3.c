#include<stdio.h>
int main()
{
	int i, type[20],n;
	int resptime[20];
	printf("Number of process: ");
	scanf("%d",&n);
	printf("Enter the data\n");
	for(i=0;i<n;i++)
	{
		printf("Response time of P%d (in milliseconds): ",i);
		scanf("%d",&resptime[i]);
		if(resptime[i]<1000)
		{
			type[i]=1;
		}
		else
		{
			type[i]=0;
		}
	}
	printf("Process Number\tResponse Time\tType\t\tPriority");
	for(i=0;i<n;i++)
	{
		printf("\nP%d\t\t%dms\t\t",i,resptime[i]);
		if(type[i]==1)
		{
			printf("Interactive\tHigh");
		}
		else
		{
			printf("Non-Interactive\tLow");
		}
	}
}
