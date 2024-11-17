/* Electricity bill
Practical 2, Part 2

Shritika Gauchan */
                                                                 
#include<stdio.h>

int main()
{
    /* code */
    //define variables for previous reading, current reading, day and month
    int previousMetre, currentMetre, day, month; //sample code

    //prompt user to enter previous reading, current reading, day and month separated 
    //by a space or return;
    printf("Enter previous reading, current reading, day and month separated by a space or return, ");
    printf("and finish with a return:\n");

    //read previous metre, current metre, day and month 
    scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month);

    //display previous metre, current metre, day and month
    printf("The previous meter, current metre, day and month entered: ");
    printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);
      
    //Validation

    //current metre reading within range 0..9999
    //sample code below
    if (currentMetre < 0 || currentMetre > 9999)
        printf("Error: current meter reading out of range \n");
    
    //previous metre reading within range 0..9999
    if (previousMetre < 0 || previousMetre > 9999)
        printf("Error: previous meter reading out of range \n");
      
    //previous not greater than present
    if (previousMetre > currentMetre)
        printf("Error: previous reading is more than present reading \n"); 
        
    //electricity used not more than 1000
    if (currentMetre - previousMetre > 1000)
        printf("Error: electricity used more than 1000 \n");
       
    //month in range 1..12
    if (month < 1 || month > 12)
        printf("Error: month out of range 1..12 \n");
       
    //days in month must be correct (Jan, March etc)
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
     && (day < 1 || day > 31)) 
        printf("Error: day out of range 1..31 \n");
    
    //days in month must be correct (Apr, June etc)
    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) 
        printf("Error: day out of range 1..30 \n");
        
    //days in month must be correct (Feb – assuming 29 days) 
    if (month == 2 && (day < 1 || day > 29)) 
        printf("Error: day out of range 1..29 \n");

    return 0;
} 