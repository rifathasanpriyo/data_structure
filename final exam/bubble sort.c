#include<stdio.h>

void bubble(int a[], int size) {
    int i, j, temp;

    if (size == 1) {
        return;
    }

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    bubble(a, size - 1);

}

int main() {
    int a[] = {19, 16, 10, 7, 20};
    bubble(a, 5);
     for (int i = 0; i <5; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}
