#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002], word[100];
    int i, j, length, is_word_started;

    gets(s);
    length= strlen(s);
    is_word_started = 0;

    for(i=0, j=0; i<=length; i++, j++){
        if(s[i]>='a' && s[i]<='z'){
            if(is_word_started==0){
                is_word_started=1;
                word[j]= 'A' + (s[i]-'a');
            }
            else{
                word[j] = s[i];
            }
        }
        else if(s[i]>='A' && s[i]<='Z'){
            if(is_word_started==0){
                is_word_started=1;
            }
                word[j] = s[i];
            }
        else if(s[i] >='0' && s[i] <='9'){
            if(is_word_started==0){
                is_word_started=1;
            }
            word[j]= s[i];
        }
        else{
            if(is_word_started==1){
                is_word_started=0;
                word[j]='\0';
                printf("%s\n", word);
                j=-1;
            }
        }
    }

    return 0;
}
