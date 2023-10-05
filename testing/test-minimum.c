#include <stdio.h>
int main()
{
    int pangkat;
    float total = 0;

    printf("Masukkan pangkatnya: ");
    scanf("%d", &pangkat);

    for (int i = 1; i <= pangkat; i++)
    {
        total = total + 1 / pow(2, i);
        printf("%g\n", 1 / pow(2, i));
    }

    printf("%g\n", total);

    return 0;
}