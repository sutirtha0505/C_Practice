#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100], ch;
    FILE *readfile, *writefile;
    readfile = fopen("input.txt", "r");
    writefile = fopen("output.txt", "w");

    if(readfile == NULL){
        printf("No such file or directory");
    } else{
        printf("File opened successfully");
    }

    while(1){
        ch = fgetc(readfile);
        if(ch == EOF){
            break;
        }
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 32;
        } else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        fputc(ch, writefile);
    }
    fclose(readfile);
    fclose(writefile);
}