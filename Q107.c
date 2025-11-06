#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top];
}

void findPreviousGreater(int arr[], int n) {
    struct Stack* s = createStack(n);
    int* result = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        while (!isEmpty(s) && peek(s) <= arr[i]) {
            pop(s);
        }
        if (isEmpty(s)) {
            result[i] = -1;
        } else {
            result[i] = peek(s);
        }
        push(s, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(s->array);
    free(s);
    free(result);
}

int main() {
    int arr[] = {10, 4, 2, 20, 40, 12, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    findPreviousGreater(arr, n);
    return 0;
}
