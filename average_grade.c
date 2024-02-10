#include <stdio.h>

int main() {
    // declaration of variables 
    int grade ;
    int totalSum =0 , gradesCount = 0;
    printf("Please enter your grades or '-1' to stop: ");
    scanf("%d",&grade);
    // applying while loop 
    while(grade!=-1){
        totalSum=totalSum+grade;
        gradesCount++;
        printf("Please enter your grades or '-1' to stop : ");
        scanf("%d",&grade);
    }
    printf("You've entered %d grades ! \n",gradesCount);
    printf("Your AVERAGE GRADE is %f \n",(float)totalSum/gradesCount);
    

    return 0;
}
