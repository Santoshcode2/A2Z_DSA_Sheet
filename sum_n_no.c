#include<stdio.h>
int main(){
    int n,s=0,cbe;
    printf("enter no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
          cbe=i*i*i;
          s=s+cbe;
    }
    printf("sum of cube 0f %d natural no: %d",n,s);
    return 0;
}