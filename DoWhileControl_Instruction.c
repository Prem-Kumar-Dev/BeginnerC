# include<stdio.h>
# include<math.h>

int main(){
    // int i=0;
    // do{
    //     printf("%d ", i++);
    // } while (i<=10);

    int a;
    int sum=0;
    printf("Enter Number:");
    scanf("%d",&a);
    int i = 1;
    do{
        sum+=i;
        i++;

    } while(i<=a);
    printf("Sum: %d", sum);
    

    return 0;
}