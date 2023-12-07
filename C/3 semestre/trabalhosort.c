#include <stdio.h>
#include <stdlib.h>

void shellSort(int array[], int n) {
    int intervalo, i, j, temp;
    for (intervalo = n / 2; intervalo > 0; intervalo /= 2) {
        for (i = intervalo; i < n; i++) {
            temp = array[i];
            for (j = i; j >= intervalo && array[j - intervalo] > temp; j -= intervalo) {
                array[j] = array[j - intervalo];
            }
            array[j] = temp;
        }
    }
}

void insertionSort(int array[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = chave;
    }
}


int main() {
    int array1[] = {9, 5, 2, 7, 1};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    
    printf("Array original (Shell Sort): ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    shellSort(array1, n1);

    printf("Array ordenado (Shell Sort): ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n\n");
    
    int array2[] = {9, 5, 2, 7, 1};
    int n2 = sizeof(array2) / sizeof(array2[0]);

    printf("Array original (Insertion Sort): ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    insertionSort(array2, n2);

    printf("Array ordenado (Insertion Sort): ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
