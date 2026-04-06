#include <stdio.h>

void nextGreater(int arr[], int n) {
    int stack[n], top = -1;

    stack[++top] = arr[0];

    for(int i = 1; i < n; i++) {
        while(top != -1 && arr[i] > stack[top]) {
            printf("%d -> %d\n", stack[top], arr[i]);
            top--;
        }
        stack[++top] = arr[i];
    }

    while(top != -1) {
        printf("%d -> -1\n", stack[top]);
        top--;
    }
}

int main() {
    int arr[] = {4,5,2,10,8};
    int n = 5;

    nextGreater(arr, n);
    return 0;
}
