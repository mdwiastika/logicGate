#include <stdio.h>
int main()
{
    int x = 1;
    switch (x)
    {
    case 1:
        x += 3;
    case 2:
        x += 2;
    default:
        x += 1;
    }
    printf("\n%d\n", x);
}