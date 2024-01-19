#include <stdio.h>

int main() 
{
    char c;
    char word[100];
    char sentence[100];
    //to input a character
    scanf("%c",&c);  
    // to input a word
    scanf("%s",word);  // if you input here sentence then it will consume the first word while rest of the sentence will be saved in variable sentence due to next scanf
    //to consume the '\n' which was created when you pressed "ENTER" during your 2nd scanf
    getchar();
    //to input a sentence (if getchar() not added then nothing will be stored in sentence)
    scanf("%[^\n]",sentence);
    printf("%c\n%s\n%s\n", c, word, sentence);
    return 0;
}
