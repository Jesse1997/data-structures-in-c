#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE int = 100;

struct Stack
{
    int arr[100];
    int top;
};

void print(struct Stack stack);
void push(struct Stack *stack, int value);  // Push a value onto the stack
int pop(struct Stack *stack);               // Pop a value from the stack
void search(struct Stack stack, int value); // Search for a value

int main()
{
    // Initialize an empty stack
    struct Stack *stack = malloc(sizeof(struct Stack));
    stack->top = -1;

    // Push 100 numbers to stack
    for (int i = 1; i <= 100; i++)
    {
        push(stack, i);
    }

    // Print the stack
    print(*stack);

    // Pop once
    pop(stack);

    // Print the stack
    print(*stack);

    // Pop twice
    pop(stack);

    // Print the stack
    print(*stack);

    // Search for 45
    search(*stack, 45);

    // Search for 99
    search(*stack, 99);

    return 0;
}

void push(struct Stack *stack, int value)
{
    // Check if stack is full
    if (stack->top == 100 - 1)
    {
        return;
    }

    stack->arr[++stack->top] = value;
}

void print(struct Stack stack)
{
    while (stack.top != -1)
    {
        printf("%d, ", stack.arr[stack.top]);
        stack.top--;
    }
    printf("\n\n");
}

int pop(struct Stack *stack)
{
    // Check if stack is empty
    if (stack->top == -1)
    {
        return -1;
    }
    return stack->arr[stack->top--];
}

void search(struct Stack stack, int value)
{
    while (stack.top != -1)
    {
        if (stack.arr[stack.top] == value)
        {
            printf("%d found in stack", value);
            printf("\n\n");
            return;
        }
        stack.top--;
    }
    printf("%d not found in stack", value);
    printf("\n\n");
}