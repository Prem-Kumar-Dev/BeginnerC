# include<stdio.h>
# include<math.h>

int main(){
    /*int age;
    printf("Enter your age:");

    if(( scanf("%d", &age)==0)){
        printf("Wrong format\n");
    }
    else if (age>= 18){
        printf("Adult \n");
        printf("They can vote\n");
    }
    else if (age <= 18 && age >= 13){
        printf("Teenager\n");
    }
    
    else{
        printf("Child\n\n");
    }*/
//Ternary Operator

    //Condition ? ToDo if TRUE : ToDo if FALSE;
    int age;
    printf("Enter your age:");
    scanf("%d",&age)==0 ? printf("Wrong Format\n\n") : age>=18 ? printf("Adult\nThey can vote\n\n") : age <=18 && age >= 13 ? printf("Teenager\n\n") : printf("Child\n\n");

//Switch
    char day; //M-monday t-tuesday
    printf("Enter day(M-S)");
    scanf(" %c",&day);

    switch (day) {
        case 'M' : printf("Monday\n");
                break;
        case 't' : printf("Tuesday\n");
                break;
        case 'W' : printf("Wednesday\n");
                break;
        case 'T' : printf("Thursday\n");
                break;
        case 'F' : printf("Friday\n");
                break;
        case 's' : printf("Saturday\n");
                break;
        case 'S' : printf("Sunday\n");
                break;
        default : printf("Not a valid day. \n");
    }



    char ch;
    printf("Enter a character\n");
    scanf(" %c", &ch);

    if(ch>='A' && ch <= 'Z' ){
        printf("UPPERCASE");
    }
    else if (ch >='a' && ch <= 'z'){
        printf("LOWERCASE");
    }
    else {
        printf("Not a Valid Input!");
    }

    return 0;
}


