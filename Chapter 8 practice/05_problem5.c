#include <stdio.h>
int mystrlen(char source[]);
int mystrlen(char source[]){
    int i=0,length;
    char c = source[i];
    while (c!='\0')
    {
        c = source[i];
        i++;
    }
    length = i-1;
    return length;
}
void mystrcopy(char target[],char source[]);
void mystrcopy(char target[],char source[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)]='\0';
    
}
int main(){
    char source[]="harry";
    char target[30];
    mystrcopy(target,source);
    printf("%s %s",source,target);
    return 0;
}