#include <stdio.h>

int main()

{
    char ch;
    printf("Input a letter: ");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Your letter is vowel.\n");
    }
    else
    {
        printf("Your letter is consonant.\n");
    }
    
    
}