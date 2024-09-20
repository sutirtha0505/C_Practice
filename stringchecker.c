#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int vc=0, cc=0, chc=0, wc=0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vc++;
        }
        else if(((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) && (str[i]!='A' || str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U' || str[i]!='a' || str[i]!='e'|| str[i]!='i' || str[i]!='o' || str[i]!='u')){
            cc++;
        }
        if (str[i]==32 || str[i]== strlen(str)-1)
        {
            wc++;
        } else{
            chc++;
        }
        

    }
    printf("Vowetl count: %d\n", vc);
    printf("Consonant count: %d\n", cc);
    printf("Character count: %d\n", chc);
    printf("Word count: %d\n", wc);
}