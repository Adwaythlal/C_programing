#include<stdio.h>
#include<string.h>
int main(){

    char item[50] = "";
    float price = 0.0f;
    int qty = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what item would you like to buy ?:");
    fgets(item, sizeof(item), stdin);
     item[strlen(item)-1]='\0';

    printf("what is the price for each ?: ");
    scanf("%f",&price);

    printf("how many would you like?:");
    scanf("%d",&qty);

    total = price*qty;

    printf("you have bought %d %s\n", qty,item);
    printf("The total is: %c%.2f", currency, total);
  

 return 0;

}