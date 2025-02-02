#include <stdio.h>
int main(){
    int table_of = 10;
    for (int i=10;i>=1;i--){
        printf("%d X %d = %d\n",table_of,i,table_of*i);
    }
    return 0;
}