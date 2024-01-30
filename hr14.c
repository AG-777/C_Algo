#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *string = malloc(sizeof(char)*1024);
    scanf("%[^\n]",string);
    string = realloc(string,strlen(string)+1);
    char out[11] = {0,0,0,0,0,0,0,0,0,0};
    int count;
    char a;
    for (int i=0;i<10;i++){
        count =0;
        for(int j=0; string[j] != '\0'; j++){
            a = '0' + i;   //converting single digit int to char as
                            // ascii value of '0' is 48
            if (string[j]==a){
                count++;
            }
        }
        out[i] = count;
    }
    for(int r=0;r<10;r++){
        printf("%d ",out[r]);
    }
    return 0;

/*
method 2 (better)
int main() {
    char a[size];
    int freq[11]={0};
    scanf("%[^\n]%*c",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            freq[a[i]-'0']+=1;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",freq[i]);
    }
    return 0;
}
*/