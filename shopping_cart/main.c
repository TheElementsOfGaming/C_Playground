#include <stdio.h>
#include <string.h>

int main () {
    char item[50] = "";
    int itemQuantity = 0;
    float itemPrice = 0.0f;
    char currency = '$';
    float cartTotal = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    
    printf("What is the price for each?: ");
    scanf("%f", &itemPrice);
    
    printf("How many are you buying?: ");
    scanf("%d", &itemQuantity);

    cartTotal = itemPrice * itemQuantity;

    printf("\nYou have bought %d %s/s\n", itemQuantity, item);
    printf("The total is: %c%.2f\n", currency, cartTotal);
}