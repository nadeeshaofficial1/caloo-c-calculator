#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void printMenu() {
    printf("***********************************\n");
    printf("*             CALOO               *\n");
    printf("*   C Program Calculator          *\n");
    printf("***********************************\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("***********************************\n");
    printf("Enter your choice: ");
}

int main() {
    setColor(14);
    int choice;
    float num1, num2, result;

    while (1) {
        system("cls");
        printMenu();
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting CALOO. Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        printf("Press any key to continue...\n");
        getch();
    }

    return 0;
}
