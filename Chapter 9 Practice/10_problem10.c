#include <stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
}date;

void compare(date day1, date day2)
{
    if (day1.year > day2.year)
    {
        printf("First date is Latest");
    }
    else if (day1.year < day2.year)
    {
        printf("Second date is Latest");
    }
    else
    {
        if (day1.month > day2.month)
        {
            printf("First date is Latest");
        }
        else if (day1.month < day2.month)
        {
            printf("Second date is Latest");
        }
        else
        {
            if (day1.day > day2.day)
            {
                printf("First date is Latest");
            }
            else if (day1.day < day2.day)
            {
                printf("Second date is Latest");
            }
            else
            {
                printf("Both dates are equal");
            }
        }
    }
}

int main()
{
    date day1, day2;
    {
        printf("Enter First Date : ");
        scanf("%d %d %d", &day1.day, &day1.month, &day1.year);
        printf("Enter Second Date : ");
        scanf("%d %d %d", &day2.day, &day2.month, &day2.year);
    }
    compare(day1,day2);
    return 0;
}