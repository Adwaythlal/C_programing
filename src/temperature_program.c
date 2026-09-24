#include <stdio.h>
int main() {
    // Temperature conversion program
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;
    printf("Temperature Conversion Program\n");
    printf("C. celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in celcius (C) or fahrenheit (F)?: ");
    scanf(" %c", &choice);

    if(choice == 'C'){
        //C to F 
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    }
    else if(choice == 'F'){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
    }
    else{
        printf("Invalid choice! Please select C or F\n");

     }
     return 0;
}