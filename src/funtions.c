#include <stdio.h>

void happyBirthday(char birthdayboi[], int yearsOld) {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", birthdayboi);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", yearsOld);
}

int main() {

    char name[] = "Bro";
    int age = 25;

    happyBirthday(name, age);

    return 0;
}