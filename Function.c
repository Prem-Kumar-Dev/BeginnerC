# include<stdio.h>
# include<math.h>
# include<string.h>

void printHello();  //declaration or prototype
void bye();
void indian();
void french();

int main(){

    char nationality[25];
    printf("Enter your Nationality_");
    scanf(" %s", nationality);

    printHello(); //functon_call
    
    strcmp(nationality, "indian") ==0  || strcmp(nationality, "Indian")==0 ? indian() 
    : strcmp(nationality,"french")==0 || strcmp(nationality,"French")==0 ? french() : printf("Invalid \n");
    
    bye();
    
    return 0;
}

void printHello(){   //function definition
    printf("Hello \n");
}
void bye(){
    printf("Good bye");
}
void indian(){
    printf("Namaste!\n");
}
void french(){
    printf("Bonjour!\n");
}