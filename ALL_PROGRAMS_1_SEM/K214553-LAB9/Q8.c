#include <stdio.h>
int main()
{
    float tray[5][9] = {0}, sum;
    int row, col;
    for (row = 0; row < 5; row++)
    {
        sum = 0;
        for (col = 0; col < 9; col++)
        {
            switch (col)
            {
            case 0:
                printf("\nEnter id: ");
                scanf("%f", &tray[row][col]);

                break;
            case 1:
                printf("\nStudent %d Enter marks for AP: ", row + 1);
                scanf("%f", &tray[row][col]);
                sum += tray[row][col];
                break;
            case 2:
                printf("\nStudent %d Enter marks for CAL: ", row + 1);
                scanf("%f", &tray[row][col]);
                sum += tray[row][col];
                break;
            case 3:
                printf("\nStudent %d Enter marks for PF: ", row + 1);
                scanf("%f", &tray[row][col]);
                sum += tray[row][col];
                break;
            case 4:
                printf("\nStudent %d Enter marks for IRS: ", row + 1);
                scanf("%f", &tray[row][col]);
                sum += tray[row][col];
                break;
            case 5:
                printf("\nStudent %d Enter marks for ECC: ", row + 1);
                scanf("%f", &tray[row][col]);
                sum += tray[row][col];
                break;
            case 6:
                tray[row][col] == 500;
                break;
            case 7:
                //SINCE THIS IS A NO INPUT CASE IT WILL BE OMITTED LATER.
                // printf("\nSum of student %d is %f", row + 1, sum);
                tray[row][col] = sum;
                break;
            case 8:

                //printf("\nPercentage of student %d is %f", row + 1, sum / 500 * 100);
                tray[row][col] = (sum / 500 * 100);
                // printf("\nPercentage of student %d is %f",row+1,tray[row][col]);

                break;
            default:
                printf("\nERROR:(");

                break;
            }
        }
    }
    printf("_____________________________________________________________________");
    printf("\n| ID  |  AP  |  CAL  |  PF  |  IRS  |  ECC  |  TOTAL  |  OBT  |  %PER |\n");
    for (row = 0; row < 5; row++)
    {
        printf("|k21-%.0f |  %.1f |  %.1f |  %.1f |  %.1f |  %.1f |  %.1f |  %.1f |  %.1f|\n", tray[row][0], tray[row][1], tray[row][2], tray[row][3], tray[row][4], tray[row][5], tray[row][6], tray[row][7], tray[row][8]);
    }
    printf("_____________________________________________________________________");
}
