# include<stdio.h>
# include<math.h>

int sum(int a, int b);

int main(){

    int a, b;
    printf("Enter 1st no.:");
    scanf("%d",&a);
    printf("Enter 2nd no.:");
    scanf("%d",&b);

    int result=sum(a,b);
    printf("The sum of %d and %d is %d",a,b,result);
    return 0;
}

int sum(int a, int b){
    int s;
    s=a+b;
    return s;


}