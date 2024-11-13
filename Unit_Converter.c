#include <stdio.h>

void lengthConversion();
void weightConversion();
void temperatureConversion();

int main() {
    int choice;

    printf("Unit Converter\n");
    printf("1. Length Conversion\n");
    printf("2. Weight Conversion\n");
    printf("3. Temperature Conversion\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            lengthConversion();
            break;
        case 2:
            weightConversion();
            break;
        case 3:
            temperatureConversion();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}

void lengthConversion() {
    int choice;
    double value;

    printf("\nLength Conversion:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Meters to Centimeters\n");
    printf("4. Centimeters to Meters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value to convert: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2f meters = %.2f kilometers\n", value, value / 1000);
            break;
        case 2:
            printf("%.2f kilometers = %.2f meters\n", value, value * 1000);
            break;
        case 3:
            printf("%.2f meters = %.2f centimeters\n", value, value * 100);
            break;
        case 4:
            printf("%.2f centimeters = %.2f meters\n", value, value / 100);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void weightConversion() {
    int choice;
    double value;

    printf("\nWeight Conversion:\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Pounds to Kilograms\n");
    printf("4. Kilograms to Pounds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value to convert: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2f kilograms = %.2f grams\n", value, value * 1000);
            break;
        case 2:
            printf("%.2f grams = %.2f kilograms\n", value, value / 1000);
            break;
        case 3:
            printf("%.2f pounds = %.2f kilograms\n", value, value * 0.453592);
            break;
        case 4:
            printf("%.2f kilograms = %.2f pounds\n", value, value / 0.453592);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void temperatureConversion() {
    int choice;
    double value;

    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value to convert: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, (value * 9 / 5) + 32);
            break;
        case 2:
            printf("%.2f Fahrenheit = %.2f Celsius\n", value, (value - 32) * 5 / 9);
            break;
        case 3:
            printf("%.2f Celsius = %.2f Kelvin\n", value, value + 273.15);
            break;
        case 4:
            printf("%.2f Kelvin = %.2f Celsius\n", value, value - 273.15);
            break;
        default:
            printf("Invalid choice.\n");
    }
}
