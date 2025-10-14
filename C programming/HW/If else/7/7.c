// VOWEL OR CONSONENT
#include<stdio.h>

int main()
{
    char vowel;
    scanf("%c",vowel);

   if (vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U' ||vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
    {
        printf("This is vowel\n");
    }

    else
    {
        printf("consonent");
    }

    return 0;
}
