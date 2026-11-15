#include <stdio.h>

void takeInputs(int *category, int *units);

float calculateBill(int *bill, float *surcharge, int category, int units);

int main(void) {
    int customerCategory, unitsConsumed, bill;
    float surcharge = 0;

    takeInputs(&customerCategory, &unitsConsumed);
    printf("Units consumed: [%d]\n", unitsConsumed);

    float final_bill = calculateBill(&bill, &surcharge, customerCategory, unitsConsumed);
    printf("\nBill: [%d]\n\nSurcharge: [%.2f]\n\nFinal Payable Amount: [%.2f]", bill, surcharge, final_bill);

}

void takeInputs(int *category, int *units) {

    printf("\nEnter 1 for Domestic, 2 for Commercial customer: ");
    scanf("%d", category);


    printf("\nEnter units you have consumed: ");
    scanf("%d", units);
}

float calculateBill(int *bill, float *surcharge, int category, int units) {
    int units_left = 0;
    switch (category) {
        case 1:
            if (units > 100) {
                units_left = units - 100;
                *bill = 100 * 15 + (units_left * 20);
            }
            else { 
                *bill = units * 15;
            }
            break;
        case 2:
            *bill = units * 25;
            break;
    }

    if (*bill > 5000)
        *surcharge = 0.05 * *bill;
    return *bill + *surcharge;
}
