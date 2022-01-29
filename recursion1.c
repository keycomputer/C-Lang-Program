#include<stdio.h>

//int isprime(int n1, int n2)
//{
//	if (n1==n2)
//		return 1;
//	else if (n2 % n1 == 0)
//		return 0;
//	else
//		return(isprime(n1+1, n2));
//}
//int n1 = 2;
int isprime(int n2)
{
	static int n1 = 2;
	if (n1==n2)
		return 1;
	else if (n2 % n1 == 0)
		return 0;
	else{n1++;
		return(isprime(n2));
	}
}
int main()
{
	int num;
	printf("Enter any number ");
	scanf("%d", &num);
	if (isprime(num) == 1)
		printf("PRime number ");
	else
		printf("not a prime number ");
	return 0;
}
