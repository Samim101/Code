#include<stdio.h>

struct Car{
    int price;
    //char Name[10];
    double fuel;
};
#define Car struct Car


void print_car(Car car)
{
    printf("%d %lf\n", car.price, car.fuel);
}
int main()
{
   Car car1;
   car1.price = 10;
  // car1.Name = ;
  car1.fuel = 2.5;

  print_car(car1);

}
