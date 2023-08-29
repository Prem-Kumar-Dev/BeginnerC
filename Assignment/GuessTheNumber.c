# include<stdio.h>
# include<math.h>
# include<stdlib.h>
# include<time.h>

int main(){
    srand(time(NULL));
    int random_num = rand() %1000;
    int user_num;
    int tries=0;
    

    while(1){

        printf("\nGuess The Number:");
        scanf(" %d", &user_num);
        tries++;

        random_num>user_num 
        ? printf("Go Higher") 
        : random_num<user_num 
            ? printf("Go Lower") 
            :printf("You are Correct\nYou took %d tries\n", tries);
        
        if (random_num==user_num){
            break;
        }



    }



    return 0;
}