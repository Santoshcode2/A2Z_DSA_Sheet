#include<stdio.h>
int main(){
   long int n,fact=1,s;
    printf("enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        s=s+fact;
    }
    printf("sum upto n factorials=  %d",s);
    return 0;
}