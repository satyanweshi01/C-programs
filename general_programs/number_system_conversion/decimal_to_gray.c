#include <stdio.h>

#define INTEGER 32
int main()
{
    
    int n,i,size,storage[INTEGER],result[INTEGER];
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    // 0 -> 0000
    // 1 -> 0001
    // 2 -> 0011
    // 3 -> 0010
    // 4 -> 0110
    // 5 -> 0111
    // addition of binary representaiton of the given decimal value
    for (i = 0,size = sizeof(n) * 8 - 1 ; i <size; i++) { // sizeof(n) * 8 - 1 = (4*8) - 1
        int bit = (n >> i) & 1;
        // printf("%d:%d ",i,bit);
        storage[i] = bit;
    } // storage array lsb => msb
    // printf("\n");
    // gray code conversion
    //result[0] = storage[0];
    // for (i = 1; )
    // {
        
    // }
    // printing the array
    for (i = size; i>=0; i--)
    {
        printf("%d",storage[i]);
    }
    printf("\n");

    return 0;
}