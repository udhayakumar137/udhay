#include<stdio.h>
void main()
{
char c;
int isLowercaseVowel, isUppercaseVowel;
printf("Enter an alphabet: ");
scanf("%c",&c);
isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
printf("%c is a vowel.", c);
else
printf("%c is a consonant.", c);
return 0;
}
    
