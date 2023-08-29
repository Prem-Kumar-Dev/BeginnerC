# include<stdio.h>
# include<math.h>

int main(){
    // for (int i = 0; i<=10; i++)   //iterator ; counter (i)
    // {
    //     printf("%d ",i);
    // }
    
    // printf("\n");

    // for (char ch='a'; ch<='z';ch++) {
    //     printf("%c ", ch);
    // }

    int a;
    int sum=0;
    printf("Enter Number:");
    scanf("%d",&a);
    
    for (int i=1; i<=a; i++){
        sum+=i;
    }
    printf("Sum: %d", sum);

    
    return 0;
}