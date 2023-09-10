#include <stdio.h>

int main() {
    printf("Exercise #1: Calculation of the area and perimeter of a rectangle\n");
    double a, b, S, P;

    printf("Enter the side length a: ");
    scanf("%lf", &a);

    printf("Enter the side length b: ");
    scanf("%lf", &b);

    S = a * b;
    P = 2 * (a + b);

    printf("Area of the rectangle: %.2lf\n", S);
    printf("Perimeter of a rectangle: %.2lf\n", P);

    printf("---------------------------------\n");

    printf("Exercise #2: Calculation of the cost of refueling and bonuses\n");
    double pricePerLiter, liters, totalCost, bonus;

    printf("Enter the price per liter of gasoline: ");
    scanf("%lf", &pricePerLiter);

    printf("Enter the number of liters of gasoline: ");
    scanf("%lf", &liters);

    totalCost = pricePerLiter * liters;
    bonus = 0.05 * totalCost;

    printf("The total cost of refueling: %.2lf UAH\n", totalCost);
    printf("Amount due: %.2lf UAH\n", totalCost - bonus);
    printf("Number of bonuses: %.2lf UAH\n", bonus);

    printf("---------------------------------\n");

    printf("Exercise #3: Splitting a four-digit number into separate digits\n");
    int number, firstDigit, secondDigit, thirdDigit, fourthDigit;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    fourthDigit = number % 10;
    thirdDigit = (number / 10) % 10;
    secondDigit = (number / 100) % 10;
    firstDigit = number / 1000;

    printf("The first number = %d\n", firstDigit);
    printf("The second number = %d\n", secondDigit);
    printf("The third number = %d\n", thirdDigit);
    printf("The fourth number = %d\n", fourthDigit);

    printf("---------------------------------\n");

    printf("Exercise #4: Changing the values of variables A, B, C\n");
    int A, B, C, temp;

    printf("Enter the value A: ");
    scanf("%d", &A);

    printf("\nEnter the value B: ");
    scanf("%d", &B);

    printf("\nEnter the value C: ");
    scanf("%d", &C);

    temp = A;
    A = B;
    B = C;
    C = temp;

    printf("\nNew variable values: A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}
