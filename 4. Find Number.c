#include<stdio.h>
int main()
{
    int a[5], i, n, f=0;
    for(i=0; i<5; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=0; i<5; i++){
        if(a[i]==n){
          f=i+1;
        break;
        }
    }
    if(f==0)
        printf("Invalid Number");
    else
        printf("Valid Number\nThe Number is a[%d]= %d",i,a[i]);
}
