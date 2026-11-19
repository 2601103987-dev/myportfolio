#include <stdio.h>

int main (){

int total_distance_traveled;
int total_travel_time_in_minutes;
int fuel_efficiency;
float fuel_price_per_liter;
int number_of_packages_delivered;
float driver_payment_per_hour;
float additional_delivery_expenses;
float fuel_consumed;
float fuel_cost;
float total_travel_time_in_hours;
float driver_payment;
float total_delivery_cost;
float cost_per_package;
float average_speed;

//input
printf("Enter Total distance traveled (km): ");
scanf("%d",&total_distance_traveled);

printf("Enter Total travel time (minutes): ");
scanf("%d",&total_travel_time_in_minutes);

printf("Enter Fuel efficiency (km/L): ");
scanf("%d",&fuel_efficiency);

printf("Enter Fuel price per liter: ");
scanf("%f",&fuel_price_per_liter);

printf("Enter Number of packages delivered: ");
scanf("%d",&number_of_packages_delivered);

printf("Enter Driver payment per hour: ");
scanf("%f",&driver_payment_per_hour);

printf("Enter Additional delivery expenses: ");
scanf("%f",&additional_delivery_expenses);

//process
fuel_consumed= (float) total_distance_traveled / fuel_efficiency;
fuel_cost= fuel_consumed * fuel_price_per_liter;
total_travel_time_in_hours= total_travel_time_in_minutes / 60.0;
driver_payment= total_travel_time_in_hours * driver_payment_per_hour;
total_delivery_cost= fuel_cost + driver_payment + additional_delivery_expenses;
cost_per_package= total_delivery_cost / number_of_packages_delivered;
average_speed= total_distance_traveled / total_travel_time_in_hours;

//output
printf("\n==================================================\n");
printf("\n\t\tDELIVERY TRIP REPORT \n");
printf("\n==================================================\n");
printf("\n Total Distance      : %d km",total_distance_traveled);
printf("\n Travel Time         : %.2f hours",total_travel_time_in_hours);
printf("\n Fuel Consumed       : %.2f liters",fuel_consumed);
printf("\n Fuel Cost           : PHP %.2f",fuel_cost);
printf("\n Driver Payment      : PHP %.2f",driver_payment);
printf("\n Additional Expenses : PHP %.2f",additional_delivery_expenses);
printf("\n------------------------------------\n");
printf("\n Total Delivery Cost : PHP %.2f",total_delivery_cost);
printf("\n Cost per Package    : PHP %.2f",cost_per_package);
printf("\n Average Speed       : %.2f km/h",average_speed);
printf("\n==================================================\n");
return 0;
}
