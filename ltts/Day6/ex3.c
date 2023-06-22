#include <stdio.h>

struct TimePeriod {
    int hours;
    int minutes;
    int seconds;
};

struct TimePeriod Difference(struct TimePeriod t1, struct TimePeriod t2) {
    struct TimePeriod diff;

    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int diffSeconds = totalSeconds1 - totalSeconds2;
    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds;
    }

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct TimePeriod t1, t2, difference;

    printf("Enter the first time period:\n");
    printf("Hours: ");
    scanf("%d", &t1.hours);
    printf("Minutes: ");
    scanf("%d", &t1.minutes);
    printf("Seconds: ");
    scanf("%d", &t1.seconds);
    printf("\nEnter the second time period:\n");
    printf("Hours: ");
    scanf("%d", &t2.hours);
    printf("Minutes: ");
    scanf("%d", &t2.minutes);
    printf("Seconds: ");
    scanf("%d", &t2.seconds);

    difference = Difference(t1, t2);

    printf("\nDifference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}
