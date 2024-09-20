    #include <stdio.h>
    #include <string.h>

    int main(){
        char password[100];
        int caps=0, small=0, special=0, number=0;
        printf("Enter your string: ");
        scanf("%[^\n]s", password);

        for(int i=0; password[i]!='\0'; i++){
            if(password[i]>='A' && password[i]<='Z'){
                caps++;
            }
            else if(password[i]>='a' && password[i]<='z'){
                small++;
            }
            else if(password[i]=='!'|| password[i]=='@' || password[i]=='#'||password[i]=='$'|| password[i]=='%' || password[i]=='^'|| password[i]=='&'|| password[i]=='&' || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='?' || password[i]=='<' || password[i]=='>' || password[i]=='/' || password[i]=='-' || password[i]=='_'){
                special++;
            }
            else if(password[i]>=48 && password[i]<=57){
                number++;
            }
        }
        printf("Your password is : %s\n", password);
        if(strlen(password)>=6 && caps>=1 && small>=1 && special>=1 && number>=1){
            printf("Password is strong and secure. \n");
        } else {
            printf("Password isn't strong.\n");
        }
    }