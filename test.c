# include<stdio.h>
# include<math.h>
# include<string.h>
# include<stdio.h>
# include<stdlib.h>

int main(){
    char expression[]= "1+2+3-5*9*8/2";
    int i;
    int result;
    int num;
    char sign;

    for(i=0;expression[i]!='\0';i++){
        char holder[2] = { expression[i],'\0'};

        if (i==0){
            result = atoi(holder);
        }
        if (holder[0]!='+' && holder[0]!='-' && holder[0]!='*' && holder[0]!='/'){
            num = atoi(holder);
            switch (sign)
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
        if (holder[0]=='+' || holder[0]=='-' || holder[0]=='*' || holder[0]=='/'){
            sign= holder[0];
            }
        printf(" %d", result );
        
    }
    return 0;
}


