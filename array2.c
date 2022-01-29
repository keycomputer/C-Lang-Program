#include<stdio.h>
int main()
{
	float perc[100];
	float sum =0 , avg;
	int n, i;	
	printf("Enter no of students :: ");
	scanf("%d", &n);
	
	for(i= 0;i<n;i++)
	{
		printf("Enter percentage of %d :: ", i+1);
		scanf("%f",&perc[i]);
		sum += perc[i];
	}
	avg = sum / n;
	for(i= 0;i<n;i++)
	{
		printf("Percentage of %d :: %f\n", i+1, perc[i]);
	}
	printf("Average  = %0.2f", avg);
}
