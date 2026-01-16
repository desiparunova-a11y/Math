#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, number, i, dC, numC, digit, digit2, m, rem, number2;
    bool isDiff;
    
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n<=0){
        return 0;
    }
    
    i=0;
    numC=0;
    dC=0;
    
    while (i<n){
        do
        {
            printf("Enter number: ");
            scanf("%d", &number);
        }
        while(number<=0);
        
        number2=number;
        while(number2>0){
            number2=number2/10;
            dC++;
        }
        
        m=1;
        isDiff=1;
        
        while(m<=dC){
            while(number>0){
                digit=number%10;
                rem=number/10;
                while(rem>0 && isDiff==1){
                    digit2=rem%10;
                    if(digit==digit2){
                        isDiff=0;
                    }
                    rem=rem/10;
                }
                number=number/10;
            }
          m++;
        }
        
        if(isDiff==1){
            numC++;
        }
        i++;
    }
    
    printf("The number of numbers with (same) digits is: %d", numC);
    
    return 0;
}

