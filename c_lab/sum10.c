#include <stdio.h>

int main() {
    int sum = 0, num;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}
