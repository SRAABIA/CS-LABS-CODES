#include <stdio.h>
int main()
{
    float len[9] = {150.6, 354, 172.23, 73.33, 415.15, 415.15, 415.15, 415.15}, wid[9] = {126.9, 451.51, 75.65, 707.17, 116.17, 116.17, 116.17, 116.17}, area[9] = {0}, max = 0, x = 0;
    printf("\nPlot No.   Area");
    for (int i = 0; i < 8; i++)
    {
        area[i] = len[i] * wid[i];
        printf("\n  %d       %.3f", i + 1, area[i]);
        if (area[i] > max)
        {
            max = area[i];
            x = i;
        }
    }
    printf("\n\nMAX AREA IS %.3f FOR PLOT No. %.0f\n\n", max, x + 1);
}