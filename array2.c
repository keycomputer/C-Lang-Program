#include<stdio.h>
int main()
{
	float perc[100];
	float sum =0 , avg, min, max;
	int n, i, minroll, maxroll;	
	printf("Enter no of students :: ");
	scanf("%d", &n);
	
	for(i= 0;i<n;i++)
	{
		printf("Enter percentage of %d :: ", i+1);
		scanf("%f",&perc[i]);
		sum += perc[i];
	}
	min = max = perc[0]; 	
	avg = sum / n;
	for(i= 0;i<n;i++)
	{
		printf("Percentage of %d :: %f\n", i+1, perc[i]);
		if (min > perc[i])
		{
			min = perc[i];
			minroll = i;
		}
		if (max < perc[i])
		{
			max = perc[i];
			maxroll = i;
		}
	}
	printf("Average  = %0.2f", avg);
	printf("Max Percentage = %0.2f - Rollno = %d", max, maxroll+1);
	printf("Min Percentage = %0.2f - Rollno = %d", min, minroll+1);
}
