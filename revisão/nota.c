#include<stdio.h>
#include<stdlib.h>

int main() {
    int T, B, areaTotal;
    double pedacoEdu, pedacoDai, areaMetade;
    scanf("%d %d", &T, &B);

    areaTotal = 70 * 160;
    areaMetade = areaTotal / 2;

    pedacoEdu = ((B + T) * 70) / 2;
    pedacoDai = areaTotal - pedacoEdu;

    if (pedacoEdu == areaMetade) {
        printf("0");
        return 0;
    }

    if (pedacoEdu > pedacoDai) {
        printf("1");
    } else {
        printf("2");
    }

    return 0;
}