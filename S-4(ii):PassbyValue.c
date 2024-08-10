#include<stdio.h>

void modifyValue(int x) {
    x = 10;
}

int main() {
    int a = 5;
    modifyValue(a);
    printf("%d\n", a);  // Output will be 5, not modified
    return 0;
}
