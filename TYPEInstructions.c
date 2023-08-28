# include<stdio.h>

int main(){
    float a=5;
    float b=2;
    int c=5;
    int d=2;
    float x;
    // int e=1.99999999;
    // printf("The value of %d",e);
    
    int e= (int) 1.9999999;                                  //---> C doesn't round-off the value
    printf("The value of e is %d \n",e);                     //---> Output "1 not 1.9999999"
    
    printf("The value of %f divided by %f is %f \n",a,b,a/b);//-->real/real=real
    printf("The value of %d divided by %d is %d \n",c,d,c/d); //--> int/int=int
    
    printf("%f=%f*%f/%d+%d \n",a*b/c+d,a,b,c,d);                 //---> Op Precedence order: "*,/,%" > "+,-" > "="
    printf("%f=%f*%f/%d*%d\n",a*b/c*d,a,b,c,d);                  //----> Op associativity(same precedence): "Left to Right"
    printf("%f=%f/(%f*%d)/%d\n",a/(b*c)/d,a,b,c,d);              //----> Bracket always first
    return 0;
}