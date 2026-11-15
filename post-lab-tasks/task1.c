#include <stdio.h>

int main(void) {
    int marks[2][3][4] = {
        {
            {12, 23, 43, 64},
            {47, 91, 65, 32},
            {92, 83, 32, 74}
        },
        {
            {32, 54, 43, 65},
            {81, 42, 62, 81},
            {82, 84, 92, 54}
        }
    };

    int highest = 0, highest_index = 0, total = 0, count = 0, highest_avg_index = 0, overall_total = 0;
    float average = 0, highest_average = 0, overall_average = 0;

    int i, j, k;
    for(i = 0; i < 2; i++) {
        
        printf("\n\nFor Section %d:\n", i + 1);

        highest = 0;
        overall_total = 0;
        
        for(j = 0; j < 3; j++) {

            printf("\nFor Student %d: ", j + 1);

            total = 0;
            average = 0;
            
            for(k = 0; k < 4; k++) {
                total += marks[i][j][k];
                overall_total += total;
            }
            
            average = (float)total / 4.0;

            printf("\nTotal: [%d]\tAverage: [%.2f]\n", total, average);

            if (total > highest) {
                highest = total;
                highest_index = j;
            }
            if (average >= 50.0)
                count++;
        }

        overall_average = (float) overall_total / 3.0;

        printf("\n\nHighest scoring student is Student [%d]", highest_index + 1);

        if (highest_average > overall_average) {
            highest_average = overall_average;
            highest_avg_index = i;
        }

    }

    printf("\nHighest Overall Average Section: [%d]", highest_avg_index + 1);
}









