#include <stdio.h>
#include <stdlib.h>

/*permet de donner soit les variante du code alphanumerique  7bits ( ASCII 7bits ou hexadecimal ou octal ou decimal) de la lettre taper */

int main()
{
    char caractere[] = " !#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~",
         c[] = "sa";
    int octal[93] = {40, 41, 43, 44, 45, 46, 47, 50, 51, 52, 53, 54, 55, 56, 57, 60, 61, 62, 63, 64, 65, 66, 67, 70,71, 72, 73, 74, 75, 76, 77, 100, 101,
        102, 103, 104, 105, 106, 107, 110, 111, 112, 113, 114, 115, 116, 117, 120, 121, 122, 123, 124, 125, 126, 127, 130, 131, 132, 133, 135, 136, 137,
        140, 141, 142, 143, 144, 145, 146, 147, 150, 151, 152, 153, 154, 155, 156, 157, 160, 161, 162, 163, 164, 165, 166, 167, 170, 171, 172, 173, 174,
        175, 176},

        decimal[93] = {32, 33, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
        66, 67, 68, 69, 70,71, 72, 73, 74, 75, 76, 77,78, 79,80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
        103, 104, 105, 106, 107,108, 109, 110, 111, 112, 113, 114, 115, 116, 117,118, 119, 120, 121, 122, 123, 124, 125, 126} ,

        Ascii7bit[93] = {},





        hexadecimel[93] = { };
    int i,j,n;


    printf("\n");
    for(i = 0; i < 93; i++)
    {
         printf("%d", Ascii7bit[i]);
         printf("\n");
    }
/*
    printf("%s", caractere);
    n =strlen(caractere);
   printf("%d",n);*/

    for(i = 0; i < 2; i++)
        for(j = 0; j < 93; j++)
            if(c[i]== caractere[j] )
               {
                    printf("%d",decimal[j]);
                    printf(",");
               }


    return 0;
}
