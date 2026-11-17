#include <stdio.h>

int main() {
    int ward, days, age, insurance;
    float rate, total, discount = 0, cover = 0, payment;

    printf("Select Ward Type:\n");
    printf("1. General Ward - Rs. 2000/day\n");
    printf("2. Private Ward - Rs. 4000/day\n");
    printf("3. ICU Ward - Rs. 8000/day\n");

    printf("Enter ward choice (1-3): ");
    scanf("%d", &ward);

    printf("Enter number of days: ");
    scanf("%d", &days);

    printf("Enter patient age: ");
    scanf("%d", &age);

    printf("Insurance available? (1-Yes, 0-No): ");
    scanf("%d", &insurance);

    switch(ward) {
        case 1:
            rate = 2000;
            break;
        case 2:
            rate = 4000;
            break;
        case 3:
            rate = 8000;
            break;
        default:
            printf("Invalid ward choice\n");
            return 0;
    }

    total = rate * days;

    if(age >= 60)
        discount = total * 0.10;

    total -= discount;

    if(insurance == 1) {
        cover = total * 0.70;

        if(cover > 50000)
            cover = 50000;
    }

    payment = total - cover;

    printf("\nTotal Bill         : Rs. %.2f", rate * days);
    printf("\nAfter Discount     : Rs. %.2f", total);
    printf("\nInsurance Coverage : Rs. %.2f", cover);
    printf("\nPatient Pays       : Rs. %.2f", payment);

    return 0;
}