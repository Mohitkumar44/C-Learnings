#include <stdio.h>
int main(){
    char c;
    printf("Enter Your Character : ");
    scanf("%c",&c);
    char str[]="sdxchhgfdsdfcgvbnjhgtfdxfcgvhbjnhgytfdfcgvhbnjhgytffcgvb";
    int j=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==c)
        {
            j++;
        }
        
    }
    printf("%d",j);
    
    return 0;
}