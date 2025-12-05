#include <stdio.h>

#define max 50

int suma(int arr[], int n) {
    int i, s = 0;
    for (i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}

int main(void) {
    int n, i;
    int arr[max];

    printf("Ingrese la cantidad de numeros (max %d): ", max);
    if (scanf("%d", &n) != 1) return 1;
    if (n < 1 || n > max) {
        printf("Tamano invalido.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    int total = suma(arr, n);
    printf("La suma es : %d\n", total);

    return 0;
}
