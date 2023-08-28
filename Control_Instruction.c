# include<stdio.h>
# include<math.h>

int main(){
    char cha;
    printf("Enter a character");
    scanf("%c", &cha);

    if(cha>='A' && cha <= 'Z' ){
        printf("UPPERCASE");
    }
    else if (cha >='a' && cha <= 'z'){
        printf("LOWERCASE");
    }
    return 0;
}