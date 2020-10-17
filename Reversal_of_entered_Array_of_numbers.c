#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("\nArray in reverse order: ");
    for(a=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
