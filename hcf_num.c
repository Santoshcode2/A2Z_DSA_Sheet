#include<stdio.h>
int main(){
    int n1,n2,i,c;
    printf("enter the number: \n");
    scanf("%d  %d ",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            c++;
        }
    } 
    printf("hcf of two numbers are :%d  %d",c,i);
    return 0;
}
