/*Salary Calculator) Develop a program that will determine the gross pay for each of several employees. 
The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.
 You’re given a list of the employ- ees of the company, the number of hours each employee worked last week and the hourly rate of each employee.
  Your program should input this information for each employee, and should deter- mine and display the employee's gross pay. 
  Here is a sample input/output dialog:
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
  float hr, rat, sal, ot, otPay;

  while (true) {
    printf( "Enter number of hr " );
    scanf( "%f", &hr );
    if ( hr == -1 ) {
      return 0;
    }
    printf( "Enter hourly rat of the worker ");
    scanf( "%f", &rat );

    sal = hr * rat;
    if ( hr <= 40 ) {
      printf( "sal is %.2f\n", sal );
    }

    if ( hr > 40 ) {
      ot = hr - 40;
      otPay = ot * rat / 2;
      sal = sal + otPay;
      printf( "sal is %.2f\n", sal );
    }
  }

  return 0;
}

/*
output
Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00 Salary is $390.00
Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00 Salary is $400.00
Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00 Salary is $415.00
Enter # of hours worked (-1 to end): -1
*/