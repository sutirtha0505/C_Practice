#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Entered string is : %s\n", str);
    for(int i = 0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    printf("Reverse if the string\n: ");

    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("%c", str[strlen(str)-i-1]);
    }
    
}