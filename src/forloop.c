#include <stdio.h>
#include <windows.h>  // Windows
//y#include <unistd.h>   // Linux/Mac

int main() {

    // for loop = Repeat some code a limited number of times
    // for (Initialization; Condition; Update)

    for (int i = 10; i >= 0; i--) {
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}