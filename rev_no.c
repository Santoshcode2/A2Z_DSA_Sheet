#include<stdio.h>
int main(){
    int n,r,s=0;
    printf("enter the no");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("reverse of number: %d",s);
    return 0;
}