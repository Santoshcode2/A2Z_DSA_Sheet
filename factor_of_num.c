#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter the no: ");
    scanf("%d",&n);
    printf("the factors are:");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
            printf("%d ",i);
        }
    }
    printf("\ntotal no of factors of %d is: %d",n,c);
    return 0;
} 

    