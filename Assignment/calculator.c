# include<stdio.h>
# include<math.h>
# include<string.h>
# include<stdio.h>
# include<stdlib.h>

int main(){
    char expression[100];
    printf("Enter your equation(only integer values):>> ");
    scanf("%s",&expression);
    int i;                                          //incriment 
    float result;                                   //result
    float num, cycle, placeholder;                  //'num' for digits, 'cycle' for number of digits(137)=3, 'placeholder' for holding the previous digit.helps in combining digits to form number.   
    char sign;                                      //holds the operator.

    for(i=0;expression[i]!='\0';i++){               //loop to get evey charac. of the expression
        char holder[2] = { expression[i],'\0'};      // gets the 'i' value from expression (i=2 expp.=10+1, holder=0)
        if (i==0){
            result = atoi(holder);                   // change holder char to int and assing it to result  1>>1, +-*/>>0              
            placeholder=result;                        //holds the result
        }
        if (holder[0]!='+' && holder[0]!='-' && holder[0]!='*' && holder[0]!='/'){      //checks the holder for number
            cycle=cycle+1;                                                                 
            num = atoi(holder);                                                             
            
            switch (sign)                                                                   //claculation
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
                if (cycle>1){                                                   //converts single small digts to larger multiple digit number
                    result = (placeholder*10)+num;
                    placeholder=num;
                }
                break;
            }
        }

        if (holder[0]=='+' || holder[0]=='-' || holder[0]=='*' || holder[0]=='/'){  //asigns sign and resets cycle
            sign= holder[0];
            cycle=0;
            }
        
    }
    printf("The value of expression>> %s = %f", expression, result );         
    return 0;
}


