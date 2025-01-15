#include <stdio.h>
int main() {
    int data[6] = {77, 42, 5, 101, 77, 12};
    int PTR;

    for (int K = 1; K <= 5; K++) {
        PTR = 1;
        while (PTR < 5) { 
            if (data[PTR] < data[PTR + 1]) {
                data[PTR] = data[PTR + 1]; 
            }
            PTR++;
        }
        printf("%d ", data[PTR - 1]);
    }

    return 0;
}

