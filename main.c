// A program that calculates the change a customer receives-
// pennies,nickels,dimes,quarters, and dollars.




#include <stdio.h>

float getInputCustOwes();
float getInputCustPays();
float calcChange(customerChange);

int main()
{
    float customerOwes;
    float customerPaid;
    float customerChange;

    float dollar;
    float penny;
    float nickel;
    float dime;
    float quarter;

    printf("\nEnter the amount owed please.");
        scanf("%f", &customerOwes);
    printf("\nEnter the amount paid please.");
        scanf("%f", &customerPaid);
    customerChange = customerPaid - customerOwes;
    printf("\nCustomer change is %.2f",customerChange);
{

        while (customerChange >= 1.00) {
        (dollar = dollar +1);
        (customerChange = customerChange -1.00);
        }


        while (customerChange >= 0.25) {
        quarter = quarter +1;
        customerChange = customerChange -0.25;
        }


        while (customerChange >= 0.10) {
        dime = dime +1;
        customerChange = customerChange -0.10;
        }

        while (customerChange >= 0.05) {
        nickel = nickel +1;
        customerChange = customerChange -0.05;
        }

        while (customerChange >= 0.01) {
        customerChange = customerChange -0.01;
        penny = penny +1;
        }
}
            if (customerChange = 0.01)
                penny = penny +1;
            customerChange = customerChange -0.01;

            printf("\nDenominations of change back:");
            printf("\n%.0f dollars",dollar);
            printf("\n%.0f quarters",quarter);
            printf("\n%.0f dimes",dime);
            printf("\n%.0f nickels",nickel);
            printf("\n%.0f pennies",penny);

    return 0;
}

float getCustomerOwes()

   {
       float customerOwes;
       printf("\nEnter the amount owed please.");
       scanf("%f",&customerOwes);
    return customerOwes;

   }


float getCustomerPaid()

    {
        float customerPaid;
        printf("\nEnter amount paid please.");
        scanf("%f",&customerPaid);
    return customerPaid;

    }

float calcChange()

    {
    float customerOwes;
    float customerPaid;
    float customerChange;

    float dollar;
    float penny;
    float nickel;
    float dime;
    float quarter;

        (customerChange = customerPaid - customerOwes);
        printf("\nCustomer change is %.2f",customerChange);
        while (customerChange >= 1.00) {
        (dollar = dollar +1);
        (customerChange = customerChange -1.00);
        }


        while (customerChange >= 0.25) {
        quarter = quarter +1;
        customerChange = customerChange -0.25;
        }


        while (customerChange >= 0.10) {
        dime = dime +1;
        customerChange = customerChange -0.10;
        }

        while (customerChange >= 0.05) {
        nickel = nickel +1;
        customerChange = customerChange -0.05;
        }

        while (customerChange >= 0.01) {
        customerChange = customerChange -0.01;
        penny = penny +1;
        }

            if (customerChange = 0.01)
                penny = penny +1;
            customerChange = customerChange -0.01;

            printf("\nDenominations of change back:");
            printf("\n%.0f dollars",dollar);
            printf("\n%.0f quarters",quarter);
            printf("\n%.0f dimes",dime);
            printf("\n%.0f nickels",nickel);
            printf("\n%.0f pennies",penny);
        return customerChange;
    }







