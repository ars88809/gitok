#include <stdio.h>

void main()
{
    int x = 0, res, num, bit;
    scanf("%d", &x);
    res = (65 <= x) && (x <= 87);
    printf("%d", res);
    printf("\n");
    if (scanf("%d%d", &num, &bit) != 2 || bit < 0)
        return 1;
    printf("%d\n", num & (1 << bit));
    return 0;
}
