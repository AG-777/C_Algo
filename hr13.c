// program to print each word in next line from a sentence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    // Write your logic to print the tokens of the sentence here.
    for (int i = 0; i < strlen(s); i++)
    { // Or   (int i=0;s[i] == NULL; i++)  NULL or '\0'
        if (s[i] != ' ')
            printf("%c", s[i]);
        else
            printf("\n");
    }
    printf("\n");
    return 0;
}

/*
method 2
for (int i = 0; s[i] != '\0'; i++) {
    printf("%c", s[i]);

    if (s[i] == ' ') {
        printf("\n");
    }
}
*/
/*
method 3
int main(){
    char *s , *p;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    p = strtok(s," ");
    while (p != NULL)
    {
        puts( p);
        p = strtok(NULL, " - ");
    }
    return 0;
}
*/