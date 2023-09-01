# include<stdio.h>
# include<math.h>
# include<string.h>
# include<stdio.h>
# include<stdlib.h>

int main(){
    char expression[]= "1+2+3-5*9*8/2";
    int i=0;
    int result=0;
    int num;

    for(expression[i];expression[i]!='\0';i++){
        char holder = expression[i];
        if (holder!='+' || holder!='-' || holder!='*' || holder!='/'){
            int num = atoi(holder);

        }
        if (holder=='+' || holder=='-' || holder=='*' || holder=='/'){
            switch (holder)
            {
            case '+':
                result = result+num;
                break;
            case '-':
                result =result-num;
                break;
            case '*':
                result = result*num;
                break;
            case '/':
                result = result/num;
                break;
            default:
                break;
            }
        }
        printf(" %d", result );
        
    }
    return 0;
}


