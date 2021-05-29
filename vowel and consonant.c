#include<stdlib.h>
#include<stdio.h>
int main()
{
    char c;
    printf("enter the character : ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a' :printf("vowel");
        break;
     case 'e' :printf("vowel");
        break;
     case 'i' :printf("vowel");
        break;
     case 'o' :printf("vowel");
        break;

     case 'u' :printf("vowel");
        break;

     case 'A' :printf("vowel");
        break;
     case 'E' :printf("vowel");
        break;

     case 'I' :printf("vowel");
        break;
     case 'O' :printf("vowel");
        break;
    case 'U' :printf("vowel");
        break;
        default : {if(isalpha(c))
            printf("consonant");
        else printf("it is the other character");
        break ;}
        }
    return 0;
}
