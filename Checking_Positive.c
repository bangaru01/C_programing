/*

#include<stdio.h>
int main(){
    int a; // declaring the variables
    printf("enter a value:" ); //Asking the values
    scanf("%d",&a); // reading values from the user
    printf("%d",a); // printing values
    if (a>0) {
        printf(" is positive");
        
    }
    else{
       printf(" is negative"); 
    }
    return 0;
}

*/

// Q: check number is positive, if positive check odd or even

#include<stdio.h>
int main(){
    int a; 
    printf("enter a value:" ); 
    scanf("%d",&a); 
    printf("%d",a); 
    if (a>0) {
        printf("\n is positive");
        if (a%2 == 0){
            printf("\n and is even");
        }
        else{
            printf("\n and is odd");
        }
    }
    else{
       printf("\n is negative");
       if (a%2 == 0){
            printf("\n and is even");
        }
        else{
            printf("\n and is odd");
        }
    }
    return 0;
}
