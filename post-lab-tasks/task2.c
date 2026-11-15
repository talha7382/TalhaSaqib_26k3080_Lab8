#include <stdio.h>


int main(void) {
    int salesData[2][3][4] = {
        {
            {31, 42, 54, 76},
            {71, 43, 52, 75},
            {91, 84, 51, 21}
        },
        {
            {22, 33, 56, 65},
            {95, 99, 86, 59},
            {39, 38, 49, 93}
        }    
    };

    int i, j, k;
    int total_sales = 0, highest_sales_ind = 0, highest_branch_ind = 0, total_branch = 0;
    int highest_sale = 0, highest_branch = 0;

    for (i = 0; i < 2; i++) {

        total_branch = 0;
        highest_sale = 0;

        printf("\n\nFor branch %d: \n", i + 1);

        for (j = 0; j < 3; j++) {
         total_sales = 0;


            for (k = 0; k < 4; k++) {
                total_sales += salesData[i][j][k];
                total_branch += salesData[i][j][k];
            }

            if (highest_sale < total_sales) {
                highest_sale = total_sales;
                highest_sales_ind = j;
            }

            printf("\nTotal quantity for product %d: [%d]", j + 1, total_sales);
        }

        if (highest_branch < total_branch) {
            highest_branch = total_branch;
            highest_branch_ind = i;
        }

        printf("\n\nHighest Sold Product: Product [%d]", highest_sales_ind + 1);
    }


    int total_in_week = 0, highest_week = 0, highest_week_ind = 0;
    for (k = 0; k < 4; k++) {
        total_in_week = 0;

        for(j = 0; j < 3; j++) {
            
            for(i = 0; i < 2; i++){
                total_in_week += salesData[i][j][k];
            }
        }

        if (highest_week < total_in_week) {
            highest_week = total_in_week;
            highest_week_ind = k;
        }

    }

    printf("\n\nHighest Overall week: [%d]", highest_week_ind + 1);

    printf("\n\nHighest Quantity Branch: [%d]", highest_branch_ind + 1);

}
