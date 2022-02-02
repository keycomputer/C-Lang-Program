#include<stdio.h>
// Linear Search    O(n)
int main()
{
	int arr[100], n, i, elem;
	
	printf("Enter n :: ");
	scanf("%d", &n);
	printf("Enter elements ::\n ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	// 
	printf("Enter elem you want to search :: ");
	scanf("%d",&elem);
	
	for(i=0;i<n;i++)
	{
		if(elem == arr[i])
		{
			printf("Data Exist ");
			break;
		}
	}
	if (i == n)
		printf("Not Found");
	
}
