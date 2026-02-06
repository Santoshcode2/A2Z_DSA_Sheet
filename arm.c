#include<stdio.h>
int main(){
int num, originalNum ,r, s= 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        r= originalNum % 10;
        s+= r* r * r;
        
       
       originalNum /= 10;
    }

    if (s== num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}