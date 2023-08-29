# include<stdio.h>
# include<math.h>

int main(){
    // int i=0;
    // int a;
    // printf("Last Number:");
    // scanf("%d", &a);
    // while (i<=a)
    // {
    //     printf("%d ", i++);
    // }

    int a;
    int sum=0;
    printf("Enter Number:");
    scanf("%d",&a);
    int i = 1;
    while(i<=a){
        sum+=i;
        i++;

    }
    printf("Sum: %d", sum);
    
    return 0;
}