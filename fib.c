#include<stdio.h>
int main(){
    int x=0,y=1,n;
    printf("enter number ");
    scanf("%d",&n);
    printf("%d %d ",x,y);
    for(int i=2;i<=n;i++){
        int z=x+y;
        printf(" %d ",z);
            x=y;
            y=z;
    }
    return 0;
}
