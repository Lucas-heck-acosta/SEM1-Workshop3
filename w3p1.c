/*
*****************************************************************************
                          Workshop - #3 (P1)
Full Name  : Lucas Heck Acosta 
Student ID#: 165041211
Email      : lheck-acosta@myseneca.ca
Section    : NKK
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const int product1_ID = 111, product2_ID = 222, product3_ID = 111;
    const double product1_price = 111.49, product2_price = 222.99, product3_price = 334.49;
    const char product1_tax = 'Y', product2_tax = 'N', product3_tax = 'N';
    const double average_price = (product1_price + product2_price + product3_price) / 3;

    //------------------------------------------------------------------------------------------------------------

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%i)\n", product1_ID);
    printf("  Taxed: %c\n", product1_tax);
    printf("  Price: $%.4f\n", product1_price);
    printf("\n");
    printf("Product-2 (ID:%i)\n", product2_ID);
    printf("  Taxed: %c\n", product2_tax);
    printf("  Price: $%.4f\n", product2_price);
    printf("\n");
    printf("Product-3 (ID:%i)\n", product3_ID);
    printf("  Taxed: %c\n", product3_tax);
    printf("  Price: $%.4f\n", product3_price);
    printf("\n");
    printf("The average of all prices is: $%.4f\n", average_price);

    //------------------------------------------------------------------------------------------------------------

    printf("\n");
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n");

    printf("\n");

    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %i\n", product1_tax == 'Y');
    printf("\n");
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %i\n", product2_tax == 'N' && product3_tax == 'N');
    printf("\n");
    printf("3. Is product 3 less than testValue ($%.2f)? -> %i\n",testValue, product3_price < average_price);
    printf("\n");
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %i\n", product3_price > (product1_price + product2_price));
    printf("\n");
    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %i (price difference: $%.2f)\n", product1_price >= (product3_price - product2_price), product3_price - product2_price);
    printf("\n");
    printf("6. Is the price of product 2 equal to or more than the average price? -> %i\n", product2_price >= average_price);
    printf("\n");
    printf("7. Based on product ID, product 1 is unique -> %i\n", product1_ID != product2_ID && product1_ID != product3_ID);
    printf("\n");
    printf("8. Based on product ID, product 2 is unique -> %i\n", product2_ID != product1_ID && product2_ID != product3_ID);
    printf("\n");
    printf("9. Based on product ID, product 3 is unique -> %i\n", product3_ID != product1_ID && product3_ID != product2_ID);


    return 0;
}