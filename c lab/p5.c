#include <stdio.h>

int main() {
    char name[50];
    int units;
    float bill = 0.0, surcharge = 0.0;

    // Input user name and units consumed
    printf("Enter the user name: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on units
    if (units <= 200) {
        bill = units * 0.80;
    } else if (units <= 300) {
        bill = (200 * 0.80) + ((units - 200) * 0.90);
    } else {
        bill = (200 * 0.80) + (100 * 0.90) + ((units - 300) * 1.00);
    }

    // Add minimum meter charge
    bill += 100;

    // Apply surcharge if bill exceeds Rs. 400
    if (bill >= 400) {
        surcharge = bill * 0.15; // 15% surcharge
        bill += surcharge;
    }

    // Print the result
    printf("\nUser Name: %s\n", name);
    printf("Total Units Consumed: %d\n", units);
    printf("Surcharge (if any): Rs. %.2f\n", surcharge);
    printf("Total Bill Amount: Rs. %.2f\n", bill);

    return 0; // Indicating successful execution
}
