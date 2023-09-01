# include<stdio.h>
# include<math.h>
# include<string.h>
# include<stdlib.h>
void sign_identifier();

int main(){
    sign_identifier();


    return 0;
}

void sign_identifier(){
    char expression[] = "2+1+3*4";
    char symbol[] = "+-*/";

    char *sign = strtok(expression, symbol);
    int result = atoi(sign);

    while (sign!=NULL){
        sign = strtok(NULL, symbol);
        
        if (sign!=NULL){
            char operator = sign[0];

            sign = strtok(NULL, symbol);
            int number = atoi(sign);
            switch (operator)
            {
            case '+':
                result +=number;
                break;
            case '-':
                result -=number;
                break;
            case '*':
                result *=number;
                break;
            case '/':
                result /=number;
                break;
            
            default:
                printf("INVALID INPUT!\n");
                break;
            }

        }
    }
    printf(" %d", result);

}