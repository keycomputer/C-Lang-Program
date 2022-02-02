#include<stdio.h>
// Binary Search   sorted O(log n)

int main()
{
	int arr[100], n, i, elem, l, u, m;
	
	printf("Enter n :: ");
	scanf("%d", &n);
	printf("Enter elements ::\n ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	// 
	l=0;
	u=n-1;
	
	printf("Enter elem you want to search :: ");
	scanf("%d",&elem);
	
	while(l<=u)
	{
		m = (l+u)/2;
		if(arr[m]== elem)
		{
			printf("Found");
			break;
		}
		else if (arr[m] > elem)
			u = m -1;
		else
		    l = m + 1;	    
	}
	if( l > u)
		printf("Not Found ");	
}

