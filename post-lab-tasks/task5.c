#include <stdio.h>

void takeInputs(int *salary, int *years);

int calculateBonus(int *salary, int *years);

float calculateSalary(int *salary, float *bonus);

int main(void) {
    int basicSalary, yearsOfService;

    takeInputs(&basicSalary, &yearsOfService);

    printf("Salary: [%d], Years: [%d]\n", basicSalary, yearsOfService);

    float bonus = calculateBonus(&basicSalary, &yearsOfService);

    printf("\nBonus: [%.2f]\n", bonus);

    float finalSalary = calculateSalary(&basicSalary, &bonus);

    printf("\nFinal Salary is [%.2f]\n", finalSalary);

}

void takeInputs(int *salary, int *years) {
    printf("Please Enter Your Salary, and your Years of Service: ");
    scanf("%d %d", &*salary, &*years);
}

int calculateBonus(int *salary, int *years) {
    float bonus;

    if (*years > 5) bonus = 0.15 * *salary;
    else if (*years > 3) bonus = 0.10 * *salary;
    else if (*years > 0) bonus = 0.05 * *salary;
    else printf("\nInvalid Years entered.\n");

    return bonus;
}

float calculateSalary(int *salary, float *bonus) {
    float tax = 0;

    float final_salary = *bonus + *salary;


    if (final_salary > 100000) tax = 0.05 * final_salary;

    final_salary -= tax;

    printf("\nTax is [%.2f]\n", tax);

    return final_salary;
}
