// Your code here...
#include<stdio.h>
int main()
{
    char a;
    scanf("%s", &a);
    if(a = 'a' || a = 'e' || a = 'i' || a = 'o' || a = 'u' a = 'A' || a = 'E' || a = 'I' || a = 'O' || a = 'U'){
        printf("Vowel");
    }
    esle if(a>='a' && a<='z') || (a>='A' && a<='Z'){
        printf("Consonant");
    }
    esle if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}