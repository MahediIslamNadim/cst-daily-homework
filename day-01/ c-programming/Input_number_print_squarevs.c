#include <stdio.h>
int main() {
    int num;
    printf("Enter Your Number :");
    scanf("%d",&num);
    
    int square = num * num;
    printf("Square of %d is %d\n", num, square);
    return 0;
}
