#include <iostream>

void printDivisors(int num) 
{
    printf("\n%d의 약수: ", num);
    
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");
}

int main(void) 
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    printDivisors(num);
    return 0;
}
