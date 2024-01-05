#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    char s;
    scanf("%s\n", &s);
    printf("%s\n", &s);
 
    char* sen = malloc(50);
    fgets(sen, 50, stdin);
    printf("%s\n", sen);
    
  
    return 0; 
}