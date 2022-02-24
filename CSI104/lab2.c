#include <stdio.h>

void function1 (){
  int t;
  float v,g,s,S;
  printf("How many minutes did you drive?\n");
  scanf("%d",&t);
  printf("What was the average speed of the car during that time?\n");
  scanf("%f",&v);
  printf("How many gallons of gas did your car use?\n");
  scanf("%f", &g);
  s=v*t/60;
  S=s/g;
  printf("Your car averaged %.2f miles per gallon.",S);
}
void function2(){
  float r,S;
  int l;
  printf("What is the radius of your tires, in inches?\n");
  scanf("%f",&r);
  printf("How many revolutions did your car's tires make?\n");
  scanf("%d",&l);
  float pi=3.14;
  // Inches to Miles 1Inche = 1/63360 mile;
  // Chu vi 2 pi r
  S=l*pi*2*r*1/63360; //S =Số vòng * chu vi 
  printf("Your car traveled %.2f miles.",S);
}
void function3(){
  float r,g,s,S;
  int l;
  printf("What is the radius of your tires, in inches?\n");
  scanf("%f",&r);
  printf("How many revolutions did your car's tires make?\n");
  scanf("%d",&l);
  printf("How many gallons of gas did your car use?\n");
  scanf("%f", &g);
  float pi=3.14;
  // Inches to Miles 1Inche = 1/63360 mile;
  // Chu vi 2 pi r
  s=l*pi*2*r*1/63360; //s =Số vòng * chu vi 
  S=s/g;
  printf("Your car averaged %.2f miles per gallon.",S);
}
int main() {
  int choice;
    printf("\n=========MENU==========\n");
    printf("1- Calculating Fuel Economy\n");
    printf("2- Calculating Distance Traveled\n");
    printf("3- Revised Fuel Economy Calculation\n");
    printf("(Anykey to quit)\n");
    printf("Select an operation:");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      function1();
      break;
    case 2:
      function2();
      break;
    case 3:
      function3();
      break;
    default:
      break;
    }
  return 0;
}