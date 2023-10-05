
// C program implementing the NAND gate
  
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
  
    int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int c[5] = { 0, 0, 1, 1, 1 };
    int i, ans;
  
    for (i = 0; i < 5; i++) {
        ans = !(a[i] * b[i] * c[i]);
        printf("\n %d NAND %d NAND %d = %d",
               a[i], b[i], c[i], ans);
    }
}