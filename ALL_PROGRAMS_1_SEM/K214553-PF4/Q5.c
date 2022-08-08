#include <stdio.h>
void sort(int[], int);
int main()
{
    int i, size;
    printf("\nHow many values you want to enter? ");
    scanf("%d", &size);
    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    sort(array, size);
}
void sort(int arr[], int sz)
{
    int i, j, temp;
    for (i = 0; i <= sz; i++)
    {
        for (j = i + 1; j < sz; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray: ");
    for (i = 0; i < sz; i++)
    {
        printf(" %d ", arr[i]);
    }
}
