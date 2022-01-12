#include <stdio.h>
#include <locale.h>
 
int main()
{
    int num, numb;
    scanf("%d", &num);
    printf("%x - 16 cc\n", num);
    printf("%o - 8 cc\n", num);
    printf("%o - 8 cc <- 3\n", num << 3);
    printf("%o - 8 cc pobitov otric\n", ~num);
    scanf("%d", &numb);
    printf("%o - XOR 8 cc\n", num ^ numb);
    return 0;
}