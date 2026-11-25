#include <stdio.h>
#include <string.h>

int main(){

    char name[50]="";
    char item[50]="";
    float price=0.0f;
    int quantity=0;
    float total=0.0f;

    printf("Name of the customer: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';

    printf("What items do you want: ");
    fgets(item, sizeof(item),stdin);
    item[strlen(item) - 1] = '\0';
    
    printf("What is the price of the item: ");
    scanf("%f", &price);

    printf("Item quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\n----------BILL----------\n");
    printf("Customer Name: %s\n",name);
    printf("Items: %s\n",item);
    printf("price: $%.2f\n",price);
    printf("Quantity: %d\n",quantity);
   printf("Your Total: $%.2f\n", total);
    printf("\n-------Thank you for shopping!!!----------\n");

    return 0;
}