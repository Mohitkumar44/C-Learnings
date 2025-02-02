#include <stdio.h>
int sum(int no);
int sum(int no){
    if (no == 0){
        return 0;
    }
    return no + sum(no-1);
}
int main(){
    int no = 10;
    printf("Sun of No.from 0 to %d is %d",no,sum(no));
    return 0;
}