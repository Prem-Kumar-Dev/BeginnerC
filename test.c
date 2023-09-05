# include<stdio.h>
# include<math.h>
# include<string.h>
# include<stdio.h>
# include<stdlib.h>

int main(){
    char expression[100];
    printf("Enter your equation:>> ");
    scanf("%s",&expression);
    int i;
    float result;
    float num, cycle, placeholder;
    char sign;

    for(i=0;expression[i]!='\0';i++){
        char holder[2] = { expression[i],'\0'};
        if (i==0){
            result = atoi(holder);
            placeholder=result;
        }
        if (holder[0]!='+' && holder[0]!='-' && holder[0]!='*' && holder[0]!='/'){
            cycle=cycle+1;
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
                if (cycle>1){
                    result = (placeholder*10)+num;
                    placeholder=num;
                }
                break;
            }
        }

        if (holder[0]=='+' || holder[0]=='-' || holder[0]=='*' || holder[0]=='/'){
            sign= holder[0];
            cycle=0;
            }
        
    }
    printf(" %f", result );
    return 0;
}


