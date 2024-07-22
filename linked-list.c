#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int value;
    struct Node *next;
};

void print(struct Node *parent);                        // Print the values of the linkedlist
void insert(struct Node **parent, int value);           // Insert a value at start
void delete(struct Node **parent, int value);           // Delete a value
int search(struct Node *parent, int value);             // Search for a value
int get_value_at_index(struct Node *parent, int index); // Get value at index

int main()
{
    // Create a new linked list with value 6
    struct Node *parent = malloc(sizeof(struct Node));
    parent->value = 6;
    parent->next = NULL;

    // Insert 9 numbers
    for (int i = 0; i < 9; i++)
    {
        insert(&parent, i + 1);
    }

    // Print the linked list
    print(parent);

    // Delete the value 5
    delete (&parent, 5);

    // Print the linked list
    print(parent);

    // Get the value at index 2
    printf("\n\nValue at index 2: %d\n\n", get_value_at_index(parent, 2));

    // Search for value 7
    printf("\n\nValue 7 at index: %d\n\n", search(parent, 7));

    return 0;
}

void print(struct Node *parent)
{
    printf("[");
    struct Node *node = parent;

    while (node != NULL)
    {
        printf("%d, ", node->value);
        node = node->next;
    }
    printf("]\n\n");
}

void insert(struct Node **parent, int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = *parent;

    *parent = newNode;
}

void delete(struct Node **parent, int value)
{
    struct Node *current = *parent;
    struct Node *prev = NULL;

    while (current != NULL && current->value != value)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
    {
        return;
    }

    if (prev == NULL)
    {
        *parent = current->next;
    }
    else
    {
        prev->next = current->next;
    }

    free(current);
}

int get_value_at_index(struct Node *parent, int index)
{
    struct Node *node = parent;
    int count = 0;
    while (node != NULL)
    {
        if (count == index)
        {
            return node->value;
        }
        node = node->next;
        count++;
    }
    return -1;
}

int search(struct Node *parent, int value)
{
    struct Node *node = parent;
    int count = 0;
    while (node != NULL)
    {
        if (node->value == value)
        {
            return count;
        }
        node = node->next;
        count++;
    }
    return -1;
}