#include <iostream>

void printDivisors(int num) 
{
    printf("\n%d�� ���: ", num);
    
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
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);
    printDivisors(num);
    return 0;
}
