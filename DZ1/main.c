#include <stdio.h>
#include <stdlib.h>

//input binary numbers
void inputBinary(int* a, int n)
{
    for(int i = 0; i < n; ++i)
    {
        int x;
        scanf("%d", &x);
        a[i] = x;
    }
}
//binary -> decimal
int binToDec(int x)
{
    int sum = 0, pow2 = 1;
    while(x != 0)
    {
        int digit = x%10;
        sum = sum + digit*pow2;
        pow2 = pow2*2;
        x = x/10;
    }
    return sum;
}

//print binary and decimal numberes
void printNumbers(int* bin, int* dec, int n)
{
    printf("Binary      Decimal\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%010d      %d\n", bin[i], dec[i]);
    }
}

int main()
{
    int* bin, *dec;
    int n;
    printf("Input number of binary numbers: ");
    scanf("%d", &n);
    bin = malloc(n*sizeof(int));
    inputBinary(bin, n);
    dec = malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
        dec[i] = binToDec(bin[i]);
    printNumbers(bin, dec, n);
    free(bin);
    free(dec);
    return 0;
}
    
    
