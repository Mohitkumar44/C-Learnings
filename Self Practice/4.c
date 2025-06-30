// take 3 numbers input and tell if they can be the sides of a triangle

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("Yes, they can form a triangle.\n");
    } else {
        printf("No, they cannot form a triangle.\n");
    }

    return 0;
}
