/*
//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
 */

/*
//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//90-100: Grade A.
//80-89: Grade B.
//70-79: Grade C.
//60-69: Grade D.
//below 60: Grade F.

#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage <= 79) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage <= 69) {
        printf("Grade D\n");
    } else if (percentage >= 0 && percentage < 60) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage entered.\n");
    }

    return 0;
}
 */