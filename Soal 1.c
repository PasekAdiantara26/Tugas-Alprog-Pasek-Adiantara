#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int values[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }

    // Implementasi algoritma pengurutan sederhana: Insertion Sort
    for (int i = 1; i < N; i++) {
        int key = values[i];
        int j = i - 1;
        while (j >= 0 && values[j] > key) {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = key;
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", values[i]);
    }

    return 0;
}