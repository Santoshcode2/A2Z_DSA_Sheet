#include<stdio.h>
int main(){
       int n; 
       while(n!=0){
         printf("enter the no");
         scanf("%d",&n);
         if(n%2!=0)
              break;
        }
        printf("end!");
    return 0;
}