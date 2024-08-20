
int a = 10, b = 5;
int sum = a + b;  // Arithmetic operator
int isEqual = (a == b);  // Relational operator
int logical = (a > 5 && b < 10);  // Logical operator


// Arithmetic Operators: Used for mathematical operations like +, -, *, /, %.
Example:
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int sum = a + b;
    printf("Sum: %d\n", sum); //Sum:15

    return 0;
}


// Relational Operators: Used to compare values, such as ==, !=, >, <, >=, <=.
Example:
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Equal to
    if (a == b) {
        printf("a is equal to b.\n");
    } else {
        printf("a is not equal to b.\n");
    }

    // Not equal to
    if (a != b) {
        printf("a is not equal to b.\n");
    }

    // Greater than
    if (a > b) {
        printf("a is greater than b.\n");
    }

    // Less than
    if (a < b) {
        printf("a is less than b.\n");
    }

    // Greater than or equal to
    if (a >= b) {
        printf("a is greater than or equal to b.\n");
    }

    // Less than or equal to
    if (a <= b) {
        printf("a is less than or equal to b.\n");
    }

    return 0;
}



// Logical Operators: Used to combine multiple conditions, such as &&, ||, !.
Example:
#include <stdio.h>

int main() {
    int a = 10, b = -5;

    // Using logical AND
    if (a > 0 && b > 0) {
        printf("Both a and b are positive.\n");
    } else {
        printf("Either a or b is not positive.\n");
    }

    // Using logical OR
    if (a > 0 || b > 0) {
        printf("At least one of a or b is positive.\n");
    }

    // Using logical NOT
    if (!b) {
        printf("b is zero.\n");
    } else {
        printf("b is not zero.\n");
    }

    return 0;
}


