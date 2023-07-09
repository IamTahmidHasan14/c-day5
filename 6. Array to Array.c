#include<stdio.h>
int main()
{
    int i, n, j=0, a[10], b[20];
    printf("Enter ten integers:\n");
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    printf("Find bigger than: ");
    scanf("%d",&n);
    for(i=0; i<10; i++)
        if(a[i]>n)
        {
        b[j]=a[i];
        j++;
        }
    for(i=0; i<j; i++)
        printf("b[%d]=%d\n",i,b[i]);
}
