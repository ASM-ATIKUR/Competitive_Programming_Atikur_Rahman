
#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002], ch;
    int i, j, length, is_word_started;

    while(NULL != gets(s)){
    length= strlen(s);
    is_word_started = 0;

    for(i=0; i<=length; i++){
        if(s[i]>='a' && s[i]<='z'){
            if(is_word_started==0){
                is_word_started=1;
                ch= 'A' + (s[i]-'a');
                printf("%c", ch);
            }
            else{
                ch = s[i];
                printf("%c", ch);
            }
        }
        else if(s[i]>='A' && s[i]<='Z' || s[i] >= '0' && s[i] <='9'){
            if(is_word_started==0){
                is_word_started=1;
            }
                ch = s[i];
                printf("%c", ch);
            }
        else{
            if(is_word_started==1){
                is_word_started=0;
                printf("\n");
            }
        }
    }
    }

    return 0;
}
