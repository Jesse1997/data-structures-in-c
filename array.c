#include <stdlib.h>
#include <stdio.h>

struct Array
{
    int size;
    int *start;
};

void print(struct Array arr);
int search(struct Array arr, int value);                         // Search for a value
void set_value_at_index(struct Array arr, int index, int value); // Get value at index
int get_value_at_index(struct Array arr, int index);             // Get value at index

int main()
{
    // Initialize an array of size 10
    struct Array myArray;
    myArray.size = 100;
    myArray.start = calloc(100, sizeof(int));

    // Fill up the array with 10 numbers
    for (int i = 0; i < myArray.size; i++)
    {
        set_value_at_index(myArray, i, i + 1);
    }

    // Print the array
    print(myArray);

    // Search for existing value
    int existingValue = 12;
    printf("\n\n%d exists in array at index: %d", existingValue, search(myArray, existingValue));

    // Search for non-existing value
    int nonExistingValue = -5;
    printf("\n\n%d exists in array at index: %d", nonExistingValue, search(myArray, nonExistingValue));

    return 0;
}

void print(struct Array arr)
{
    printf("[");
    for (int i = 0; i < arr.size; i++)
    {
        printf("%d, ", get_value_at_index(arr, i));
    }
    printf("]");
}

void set_value_at_index(struct Array arr, int index, int value)
{
    int *pointer = arr.start + (index * sizeof(int));
    *pointer = value;
}

int get_value_at_index(struct Array arr, int index)
{
    return *(arr.start + (index * sizeof(int)));
}

int search(struct Array arr, int value)
{
    for (int i = 0; i < arr.size; i++)
    {
        int valueSearch = get_value_at_index(arr, i);
        if (valueSearch == value)
        {
            return i;
        }
    }
    return -1;
}