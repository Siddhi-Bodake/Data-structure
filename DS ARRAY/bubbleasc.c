#include<stdio.h>
#define MAX 20
int main()
{
    int a[MAX];
    int i,j,n,t;
    printf("How many numbers you want to enter:");
    scanf("%d",&n);
    printf("\nEnter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input array is:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    /*Bubble sorting*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {

           if(a[j]>a[j+1])
           {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
           }
        }
    }
     //end of sorting
     printf("\n\n sorted array is:\n");
     for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
     return 0;
}