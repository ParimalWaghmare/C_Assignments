#include <stdio.h>

int main() {
    int quantity;
    float totalprice, unitprice = 5.0;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (quantity > 50) {
        totalprice = unitprice * quantity * 0.85; // 15% discount for quantities over 50
    } else if (quantity > 30) {
        totalprice = unitprice * quantity * 0.90; // 10% discount for quantities over 30
    } else {
        totalprice = unitprice * quantity; // No discount for quantities up to 30
    }

    printf("Total Price is %.2f and Quantity is %d\n", totalprice, quantity);

    return 0;
}

