//Procedual Programming lab 5
//David Nolan
//G00363191
//coded using xCode
#include <stdio.h>

int main()
{
    //variables
    int i =0;
    int NoCustomers;
    int AccNumber;
    double CreditLimit;
    double totalPurchase;
    float totalCredit = 0;
    double Balance;
    double result;
    float biggestExcess = 0;
    int  OverLimitCount = 0;
    double CompleteCredit = 0;
    
    //ask for customer number
    printf("Please enter number of customers.\n");
    scanf("%d", &NoCustomers);
    
    //start of loop
    for (i=0; i<=NoCustomers; i++)
    {
        //enter details
        printf("Please enter your credit limit, account number, your total spendings, your credit and balance for this month with a space between each item.\n");
        scanf("%lf %d %lf %f %lf", &CreditLimit, &AccNumber, &totalPurchase, &totalCredit, &Balance);
        
        //New balance calc
        result = Balance + totalPurchase - totalCredit;
        CompleteCredit = CompleteCredit +result;
        //printf("DEBUG Result: %f\n", result);
        
        //start of if
        if (result > CreditLimit)
        {
            printf("%d\tCredit limit exceeded\n",AccNumber);
            OverLimitCount++;
        }//end of if
        
        //biggest credit excess
        if(CreditLimit > biggestExcess)
        {
            biggestExcess = CreditLimit;
        }
        else
        {
            biggestExcess = biggestExcess;
        }//end of if
        
    }//end of for loop

    //final outputs
    printf("total credit: %1f\n", CompleteCredit);
    printf("Person with biggest excess: %f\n",biggestExcess);
    printf("Number of people over their limit: %1d\n",  OverLimitCount);
    
    return 0;
}
