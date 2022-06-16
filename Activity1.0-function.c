#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id[30];
    int unit;
    float charge, amount,change,surcharge = 0;
    printf("customer ID# : ");
    gets(id);
    printf("Enter the unit consumed : ");
    scanf("%d",&unit);
    printf("\n[Electricity Bill]\n");
    printf("customer ID#                           :%s\n", id);
    printf("unit consumed                          :%d\n", unit);
    {
        if (unit <=199)
        {
            charge = 1.50;
            amount = unit * charge;
            printf("Unit charges @P. 1.50 per unit    :P %.02f", amount);
        }
        else if (unit >= 250 && unit < 450)
        {
            charge = 1.60;
            amount = unit * charge;
            printf("Unit charges @P. 1.60 per unit    :P %.02f", amount);
        }
        else if (unit >=450 && unit <600)
        {
            charge = 1.85;
            amount = unit * charge;
            printf("Unit charges @P. 1.85 per unit    :P %.02f", amount);
        }
        else if (unit >=600)
        {
            charge = 2.00;
            amount = unit * charge;
            printf("Unit charges @P.2.00 per unit          :P %.02f", amount);
        }
    }
    if (amount > 400)
    {
        surcharge = (amount * 10 / 100.0);
        printf("\nSurcharge Amount                       :P %.02f\n", surcharge);
        change = amount + surcharge;
        printf("Total Customer Bill                    :P %.02f",change);
    }
    if (amount < 100)
    {
        change = 100;
        printf("\n Total Customer Bill 100.");

        return 0;
    }
}
