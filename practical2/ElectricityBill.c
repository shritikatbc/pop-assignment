/* Electricity bill
Practical 2, Part 2
This is program outline for testing to see it compiles and runs

Shritika Gauchan */
                                                                 
#include<stdio.h>

int main()
{
    /* code */
    //define variables for previous reading, current reading, day and month
    int previousMetre, currentMetre, day, month; //sample code

    //prompt user to enter previous reading, current reading, day and month separated 
    //by a space or return;
    printf("Enter previous reading, current reading, day and month separated by a space or return: \n");

    //read previous metre, current metre, day and month 
    scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month);

    //display previous metre, current metre, day and month
    printf("Previous reading: %d Current reading: %d Day: %d Month: %d\n", previousMetre, currentMetre, day, month);
      
    //Validation

    //current metre reading within range 0..9999
    //sample code below
    if (currentMetre < 0 || currentMetre > 9999)
        printf("Error: current meter reading out of range \n");
      
    //previous metre reading within range 0..9999  
    if (previousMetre < 0 || currentMetre > 9999)
    {
        printf("Error: previous meter reading out of range \n");
    }
    //previous not greater than present
    if (previousMetre > currentMetre)
    {
        printf("Error: previous meter is greater than the current meter\n");
    }
    //electricity used not more than 1000
    if (currentMetre - previousMetre > 1000)
    {
        printf("You have consumed more than 1000 units\n");
    }
    //month in range 1..12
    if (month < 1 || month > 12)
    {
        printf("Error: Invalid month\n");
    }
    //days in month must be correct (Jan, March etc) 1 3 5 7 8 /  4 6 9 11
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8)
    {
        if (day < 1 || day > 31)
        {
            printf("Error: Invalid day");
        }
    }
    
    //days in month must be correct (Apr, June etc)
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day < 1 || day > 30)
        {
            printf("Error: Invalid day");
        }
    }
        
    //days in month must be correct (Feb – assuming 29 days) 
    if (month == 2)
    {
        if (day < 1 || day > 29)
        {
            printf("Error: Invalid day");
        }
    }

    return 0;
} 