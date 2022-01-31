#include<stdio.h>

int main()
{
	/*
	index - value
	*/
	/* Prg1 - Store elements in an array and print */
	/*int arr[100], n, i;
	printf("Enter no of elements ::  ");
	scanf("%d", &n);
	// input
	for(i=0;i<n;i++)
	{
		printf("Enter Element in %d = ", i+1);
		scanf("%d",&arr[i]);
	}
	// Output
	for(i=0;i<n;i++)
	{
		printf("Entered Element is %d = %d\n", i+1, arr[i]);
	}
	*/
	/*
	Prg2 - read numbers in an array, and print values in reverse order
	*/
	/*
	int arr[]={10,20,30,40,50}, arr2[5], n=5,i,j;
	// only print
	for(i=n-1;i>=0;i--)
		printf("%d\t ",arr[i]);
	printf("\n");
	// copy in reverse order - second array
	for(i=n-1,j=0;i>=0 && j<n ;i--,j++)
		arr[i] = arr2[j];
	for(i=0;i<n;i++)
		printf("%d\t", arr2[i]);
	
	*/
	/*Prg 3 -  Count the frequency of an element
	*/
	/*
	int arr[100], n, i, count =0, elem;
	printf("Enter no of elements :: ");
	scanf("%d", &n);
	// input elements
	printf("Enter elements ::  ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter no - you want to search :: ");
	scanf("%d", &elem);
	
	for(i=0;i<n;i++)
	{
		if (elem == arr[i])
			count++;
	}
	if (count >0)
		printf("Element - frequency  = %d", count);
	else
		printf("Element not found ");
	*/
	
	/*Prg 4 -  Display even elements 
	*/
	/*
	int arr[]={1,2,3,4,5,6,7,8,9,0} , n = 10,i;
	for (i=0;i<n;i++)
	{
		if (arr[i] % 2 == 0)  // !=
			printf("%d \t", arr[i]);
	}*/
	/*prg5 - display even index elements */
	/*
	int arr[]={1,2,3,4,5,6,7,8,9,0} , n = 10,i;
	for (i=0;i<n;i++)
	{
		if (i % 2 == 0)  // !=
			printf("%d \t", arr[i]);
	}
	*/
	/* prg6 - even elements +5 odd element *3 */
	/*int arr[]={1,2,3,4,5,6,7,8,9,0} , n = 10,i;
	printf("Original array \n ");
	for (i=0;i<n;i++)
	{
		printf("%d\t", arr[i]);
	}
	for (i=0;i<n;i++)
	{
		if (arr[i] % 2 == 0)  
			arr[i] +=5 ;
		else
			arr[i] *=3;
	}
	printf("\nModified array \n");
	for (i=0;i<n;i++)
	{
		printf("%d\t", arr[i]);
	}
	*/
	/*prg 7 - 
	input= 1 2 3 4 5 
	output=2 3 4 5 1
	
	 */
	int arr[]={1,2,3,4,5}, n= 5, i, temp;
	temp = arr[0];
	for(i=0;i<n-1;i++)
		arr[i] = arr[i+1];
	arr[n-1] = temp;
	for(i=0;i<n;i++)
		printf("%d\t", arr[i]);
	
	
	
}
