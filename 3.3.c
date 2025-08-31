#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num;
    printf("Menu:\n");
    printf("1. Check if number is Even or Odd\n");
    printf("2. Check if number is Positive or Negative\n");
    printf("3. Print Square of the number\n");
    printf("4. Print Square Root of the number\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    witch(choice) {
        case 1:
            // Even or Odd (works for integers)
            if ((int)num % 2 == 0)
                printf("The number is Even\n");
            else
                printf("The number is Odd\n");
            break;

        case 2:
            if (num > 0)
                printf("The number is Positive\n");
            else if (num < 0)
                printf("The number is Negative\n");
            else
                printf("The number is Zero\n");
            break;

        case 3:
            printf("Square of the number: %f\n", num*num);
            break;

        case 4:
            if (num < 0)
                printf("Square root of negative number is not real.\n");
            else
                printf("Square root of the number: %f\n", sqrt(num));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}