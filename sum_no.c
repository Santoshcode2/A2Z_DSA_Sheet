#include<stdio.h>
int main(){
    int n,r,s=0,c=0,c1=0,n1;
    printf("enter the no: ");
    scanf("%d",&n);
    printf("enter n you wnt to check");
    scanf("%d",&n1);
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
        c=c+1;
        if(r==n1){c1++;}
    }
    printf("sum of the digit :%d no of digits entered %d  no of time digit %d occur %d",s,c,n1,c1);
     return 0;
}