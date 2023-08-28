# include<stdio.h>
# include<math.h>

int main(){

    //Relational
    printf("True=%d & False=%d \n",69==69,69==420); //True=1(2,3,-1,-2),False=0
    printf("%d\n\n",4!=3);

    //Logical
    printf("&& = AND, || = OR, ! = NOT\n");
    printf("%d\n",5==5 && 4<2); 
    printf("%d\n",5==5 || 4<2);
    printf("%d\n",!(5==5));    //--> changes T->F or F->T
    printf("%d\n\n",5==5 && !(4<2));

    //Short-hand Operator
    int a=5; int b=3;
    a+=b; //-->a=a+b
    printf("%d",a);


    return 0;
}