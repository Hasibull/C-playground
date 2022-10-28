#include<conio.h>
#include<stdio.h>
#include<windows.h>

int getFirstDayOfYear(int year) {
    int day = (year * 365 + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400)) % 7;

    return day;
}

int main()
{
    system("color e");
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year;

    printf("Enter your favourite year: ");
    scanf("%d", &year);
    printf("\n\n*********** Welcome to %d ***********\n", year);

    if(year % 400 == 0) {
        daysInMonth[1] = 29;
    }
    else if(year % 4 == 0 && year % 100 != 0){
        daysInMonth[1] = 29;
    }

    int totalDays, weekDay = 0;

    weekDay = getFirstDayOfYear(year);
    
    for(int i=0; i<12; i++) {
        printf("\n\n\n------------------- %s --------------------\n", months[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   ");
        HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hc, 0xfc);
        printf("Fri   Sat");
        SetConsoleTextAttribute(hc, 0x0E);
        printf("\n\n");

        for(int spaceCount=1; spaceCount<=weekDay; spaceCount++) {
            printf("      ");
        }
        totalDays = daysInMonth[i];

        for(int j=1; j<=totalDays; j++) {
            printf("%6d", j);
            weekDay++;

            if(weekDay > 6) {
                weekDay = 0;
                printf("\n");
            }
        }
    }
}