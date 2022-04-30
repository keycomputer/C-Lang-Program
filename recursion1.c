#include<stdio.h>
#include<ctype.h>
#include<string.h>

void doorandkey(char arr[])
{
    int i,j;
    for (i=0;arr[i]!='\0';i++)
    {
        //printf("%c",arr[i]);
        if(islower(arr[i]))
        {
            for(j=i+1;arr[j]!='\0';j++)
            {
                if (toupper(arr[i]) == arr[j])
                    break;
            }
            
            if(j == strlen(arr)){
                printf("NO\n");
                return;
            }
           // printf("%d \n", j);
        }
        else if(isupper(arr[i]))
        {
            j = i-1;
          for(j=i-1;j>=0;j--)
            {
                if (tolower(arr[i]) == arr[j])
                    break;
            }
            if (j==-1){
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}

int main()
{
    int n, i;
    char arr[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
    fgets(arr,99, stdin);
    doorandkey(arr);
    }

}