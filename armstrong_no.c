#include<stdio.h>
int main(){
    int n,n1,r,rev=0;
    
    printf("enter the no  ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
          r=n1%10;
          rev+=(r*r*r);
          n1/=10;
    }
    if(rev==n)
        printf("yes");
    else
       printf("not");
    return 0;
}