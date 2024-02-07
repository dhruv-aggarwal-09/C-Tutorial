#include <stdio.h>

int main(){

// 01-02-2024
// 1. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
    // int first, second, result;
    // printf("Enter first integer: ");
    // scanf("%d", &first);
    // printf("Enter second integer: ");
    // scanf("%d", &second);

    // result = first + second;
    // printf("The sum of two integers are: %d\n", result);


// 2. Write a C program that accepts two integers from the user and calculates the product of the two integers.
    // int first, second, product;
    // printf("Enter first interger:");
    // scanf("%d", &first);
    // printf("Enter second integer:");
    // scanf("%d", &second);

    // product = first * second;
    // printf("The product of two integers are: %d\n", product);


// 3. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
    // float item1, item2, weight1, weight2, average;

    // printf("Enter the first weight of items:");
    // scanf("%f", &weight1);
    // printf("Enter the first number of items:");
    // scanf("%f", &item1);
    

    // printf("Enter the second weight of items:");
    // scanf("%f", &weight2);
    // printf("Enter the second number of items:");
    // scanf("%f", &item2);

    // average = ((weight1*item1) + (weight2*item2)) / (item1 + item2);
    // printf("The expected result is:%f", average);

// 4. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
    // char id[10];
    // int working_hrs;
    // double amount, salary;

    // printf("Enter the Employees ID(Max. 10 chars):\n");
    // scanf("%s", &id);

    // printf("Enter the working hrs:\n");
    // scanf("%d", &working_hrs);

    // printf("Enter Salary amount/hr:\n");
    // scanf("%lf", &amount);

    // salary = amount * working_hrs;

    // printf("Employees ID = %s\nSalary = U$ %.2lf\n", id, salary);

// 5. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
    int distance;
    float fuel;
    float average;

    printf("Enter total distance in km:\n");
    scanf("%d", &distance);

    printf("Enter total fuel spent in liters:\n");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("Average consumption (km/lt) %.2f", average);

    return 0;
}