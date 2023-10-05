// Program implementasi gerbang AND menggunakan operator *
  
#include <stdio.h>
  
int main()
{
    int a[4] = { 0, 0, 1, 1 };
    int b[4] = { 0, 1, 0, 1 };
    int c[4] = { 1, 0, 0, 1 };
    int i, product;
  
    for (i = 0; i < 4; i++) {
  
        // menggunakan perkalian product
        product = a[i] * b[i] * c[i];
  
        printf("\n %d AND %d AND %d = %d",
               a[i], b[i], c[i], product);
    }
    printf("\n");
}