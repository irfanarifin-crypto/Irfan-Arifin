#include <stdio.h>

int main() {
    int totalSeconds, days, hours, minutes, seconds;

    scanf("%d", &totalSeconds);

    days = totalSeconds / 86400;
    hours = (totalSeconds % 86400) / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    if (days > 0) {
        printf("%d hari %02d:%02d:%02d\n", days, hours, minutes, seconds);
    } else {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }

    return 0;
}