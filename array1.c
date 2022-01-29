
#include<stdio.h>
int main()

{
	int marks[5] , i;
//	int marks2[5] = {99,98,78,56,78};
//	int marks3[] = {67,78,46,86};
	printf("Enter five sub marks ");
	//scanf("%d%d%d%d%d", &marks[0], &marks[1],&marks[2],&marks[3],&marks[4]);
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",marks[i]);
	}
	
}
