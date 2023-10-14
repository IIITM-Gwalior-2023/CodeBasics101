// print fibonacci upto n
#include <stdio.h>

int main() {
    int index;
    printf("Enter a index number: ");
    scanf("%d", &index);
    int num1=0;
    int num2=1;

    for (int i=0; i< index ;i++){
        printf("%d ",num1);
        num2=num1+num2;
        num1=num2-num1;
    }
    printf("\n");
    return 0;
}


