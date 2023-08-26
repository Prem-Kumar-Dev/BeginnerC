# include<stdio.h>

int main(){
    float length, breadth;
    printf("Enter the length of rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);
    printf("Area of ractangle of length: %f and breadth: %f is: %f",length, breadth, length*breadth);
    
    return 0;
}