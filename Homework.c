#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0 && n > 2){
        printf("the number is not simple");
    } else {
        for (int i = 2; i <= n * n; i++) {
            if (n % i == 0) {
                printf("the number is not simple");
            } else {
                printf("The number is simple!!!!");
            }
        }
    }
    return 0;
}