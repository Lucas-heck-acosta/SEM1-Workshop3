/*
*****************************************************************************
Lucas Heck Acosta
Workshop - #3 (Part-2)
This a workshop designed to teach students how to use conditions for coding.

 Thanks for checking it
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char coffee1_type, coffee2_type, coffee3_type;
    char coffee1_grind, coffee2_grind, coffee3_grind;
    char coffee1_cream, coffee2_cream, coffee3_cream;
    char choice_strengh, choice_cream, choice_maker;

    int coffee1_bag, coffee2_bag, coffee3_bag;
    int choice_servings;
    float coffee1_temp, coffee2_temp, coffee3_temp;


    // Note:
    // You can convert Celsius to Fahrenheit given the following formula:
    // fahrenheit = (celsius * 1.8) + 32.0);

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");
    printf("\n");
    printf("Enter the coffee product information being sold today...\n");
    printf("\n");

    // coffee 1 input
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee1_type);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffee1_grind);
    
    printf("Bag weight (g): ");
    scanf("%i", &coffee1_bag);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee1_cream);

    printf("Ideal serving temperature (Celsius): ");
    scanf("%f", &coffee1_temp);
  
    // coffee 2 input
    printf("\n");
    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee2_type);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffee2_grind);

    printf("Bag weight (g): ");
    scanf("%i", &coffee2_bag);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee2_cream);

    printf("Ideal serving temperature (Celsius): ");
    scanf("%f", &coffee2_temp);

    // coffee 3 input
    printf("\n");
    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee3_type);

    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffee3_grind);

    printf("Bag weight (g): ");
    scanf("%i", &coffee3_bag);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee3_cream);

    printf("Ideal serving temperature (Celsius): ");
    scanf("%f", &coffee3_temp);
   
    //---------------------------------------------------------------------------------------
    printf("\n");

    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (coffee1_type == 'L' || coffee1_type == 'l'), (coffee1_type == 'B' || coffee1_type == 'b'), (coffee1_grind == 'C' || coffee1_grind == 'c'), (coffee1_grind == 'F' || coffee1_grind == 'f'), coffee1_bag, coffee1_bag / GRAMS_IN_LBS, (coffee1_cream == 'Y' || coffee1_cream == 'y'), coffee1_temp, ((coffee1_temp * 1.8) + 32.0));
    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (coffee2_type == 'L' || coffee2_type == 'l'), (coffee2_type == 'B' || coffee2_type == 'b'), (coffee2_grind == 'C' || coffee2_grind == 'c'), (coffee2_grind == 'F' || coffee2_grind == 'f'), coffee2_bag, coffee2_bag / GRAMS_IN_LBS, (coffee2_cream == 'Y' || coffee2_cream == 'y'), coffee2_temp, ((coffee2_temp * 1.8) + 32.0));
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (coffee3_type == 'L' || coffee3_type == 'l'), (coffee3_type == 'B' || coffee3_type == 'b'), (coffee3_grind == 'C' || coffee3_grind == 'c'), (coffee3_grind == 'F' || coffee3_grind == 'f'), coffee3_bag, coffee3_bag / GRAMS_IN_LBS, (coffee3_cream == 'Y' || coffee3_cream == 'y'), coffee3_temp, ((coffee3_temp * 1.8) + 32.0));
    printf("\n");
    //----------------------------------------------------------------------------------------
    int i; //variable just for the loop :)
    for (i = 0; i < 2; i++)
    {


        printf("Enter how you like your coffee and the coffee maker equipment you use...\n");
        printf("\n");

        printf("Coffee strength ([M]ild,[R]ich): ");
        scanf(" %c", &choice_strengh);
        printf("Do you like your coffee with cream ([Y]es,[N]o): ");
        scanf(" %c", &choice_cream);
        printf("Typical number of daily servings: ");
        scanf(" %i", &choice_servings);
        printf("Maker ([R]esidential,[C]ommercial): ");
        scanf(" %c", &choice_maker);

        printf("\n");
        printf("The below table shows how your preferences align to the available products:\n");
        printf("\n");
        printf("--------------------+--------------------+-------------+-------+--------------\n");
        printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
        printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
        printf("--+-----------------+--------------------+-------------+-------+--------------\n");
        printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((choice_strengh == 'M' || choice_strengh == 'm') && (coffee1_type == 'L' || coffee1_type == 'l')) || ((choice_strengh == 'R' || choice_strengh == 'r') && (coffee1_type == 'B' || coffee1_type == 'b')),
            ((choice_maker == 'R' || choice_maker == 'r') && (coffee1_grind == 'C' || coffee1_grind == 'c')) || ((choice_maker == 'C' || choice_maker == 'c') && (coffee1_grind == 'F' || coffee1_grind == 'f')),
            (choice_servings <= 4 && coffee1_bag == 250) || ((choice_servings >= 5 && choice_servings <= 9) && coffee1_bag == 500) || (choice_servings >= 10 && coffee1_bag == 1000),
            (((choice_cream == 'Y' || choice_cream == 'y') && (coffee1_cream == 'Y' || coffee1_cream == 'y')) || ((choice_cream == 'N' || choice_cream == 'n') && (coffee1_cream == 'n' || coffee1_cream == 'N'))),
            ((choice_maker == 'R' || choice_maker == 'r') && coffee1_temp <= 69.9) || ((choice_maker == 'C' || choice_maker == 'c') && coffee1_temp >= 70));

        printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((choice_strengh == 'M' || choice_strengh == 'm') && (coffee2_type == 'L' || coffee2_type == 'l')) || ((choice_strengh == 'R' || choice_strengh == 'r') && (coffee2_type == 'B' || coffee2_type == 'b')), ((choice_maker == 'R' || choice_maker == 'r') && (coffee2_grind == 'C' || coffee2_grind == 'c')) || ((choice_maker == 'C' || choice_maker == 'c') && (coffee2_grind == 'F' || coffee2_grind == 'f')),
            (choice_servings <= 4 && coffee2_bag == 250) || ((choice_servings >= 5 && choice_servings <= 9) && coffee2_bag == 500) || (choice_servings >= 10 && coffee2_bag == 1000), (((choice_cream == 'Y' || choice_cream == 'y') && (coffee2_cream == 'Y' || coffee2_cream == 'y')) || ((choice_cream == 'N' || choice_cream == 'n') && (coffee2_cream == 'n' || coffee2_cream == 'N'))), ((choice_maker == 'R' || choice_maker == 'r') && coffee2_temp <= 69.9) || ((choice_maker == 'C' || choice_maker == 'c') && coffee2_temp >= 70));

        printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n", ((choice_strengh == 'M' || choice_strengh == 'm') && (coffee3_type == 'L' || coffee3_type == 'l')) || ((choice_strengh == 'R' || choice_strengh == 'r') && (coffee3_type == 'B' || coffee3_type == 'b')), ((choice_maker == 'R' || choice_maker == 'r') && (coffee3_grind == 'C' || coffee3_grind == 'c')) || ((choice_maker == 'C' || choice_maker == 'c') && (coffee3_grind == 'F' || coffee3_grind == 'f')),
            (choice_servings <= 4 && coffee3_bag == 250) || ((choice_servings >= 5 && choice_servings <= 9) && coffee3_bag == 500) || (choice_servings >= 10 && coffee3_bag == 1000), (((choice_cream == 'Y' || choice_cream == 'y') && (coffee3_cream == 'Y' || coffee3_cream == 'y')) || ((choice_cream == 'N' || choice_cream == 'n') && (coffee3_cream == 'n' || coffee3_cream == 'N'))), ((choice_maker == 'R' || choice_maker == 'r') && coffee3_temp <= 69.9) || ((choice_maker == 'C' || choice_maker == 'c') && coffee3_temp >= 70));

        printf("\n");
    }
   
    printf("Hope you found a product that suits your likes!\n");



    return 0;
}