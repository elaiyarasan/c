#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float tip_cost,tax_cost;
    int total_cost;
    double meal_cost; 
    scanf("%lf", &meal_cost);
    int tip_percent; 
    scanf("%i", &tip_percent);
    int tax_percent; 
    scanf("%i", &tax_percent);
    tip_cost = meal_cost * tip_percent/100;
    tax_cost = meal_cost * tax_percent/100;
    total_cost = round(meal_cost + tip_cost+tax_cost);
    printf("The total meal cost is %d dollars.",total_cost);
    return 0;
}
