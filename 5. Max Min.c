#include<stdio.h>
int main()
{
    int a[100], i, n, min, max;
    printf("How many Numbers You need ? ");
    scanf("%d",&n);

    printf("\nEnter elements in array: ");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1; i<n; i++){
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("\nMinimum number : %d", min);
    printf("\nMaximum number : %d", max);
}
