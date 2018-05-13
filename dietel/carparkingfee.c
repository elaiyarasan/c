/*
Goal: Print out garage charges
Input: Hours Parked
Output: Car#, hours stayed, and charges
Requirements: An intenger
Formulas: charge = 2 + (0.5 * hoursStayed)
 
Test Plan:
     Car           Hours            Charge
     1             1.5              2.00 
     2             4.0              2.5
     3             24.0             10.00
     Total         29.5             14.50
*/
 
#include <stdio.h>

int main(void){
     
    float charge;
    float time1;
    float time2;
    float time3;
    float charges;
    char car1;
    char car2;
    char car3;
    float totalHours;
    float totalCharges;
    float hoursStayed;
     
    
     
    printf("How many hours did each car stay?\n");
    scanf("%f\n%f\n%f\n", &time1, &time2, &time3);
     
    charge = calculateCharges();
    totalHours = time1 + time2 + time3;
    totalCharges = (time1 * charge);
 
 
    printf("\n");
    printf("Car\tHours\t\tCharge\n");
    printf("1\t%f\t%f\n");
    printf("2\t%f\t%f\n");
    printf("3\t%f\t%f\n");
    printf("TOTAL\t%f\t%f\n", &totalHours, &totalCharges);
     
    system("PAUSE");    
    return 0;
}
 
     
calculateCharges(){
                       float charge;
                       float hoursStayed;
                        
                       if(hoursStayed < 3){
                       charge = 2.00;
                                   
             }
                       if(hoursStayed > 3){
                       charge = (2 + (0.5 * (hoursStayed-3)));
                                           
                        }
return charge;    
}     