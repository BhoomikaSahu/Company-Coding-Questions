#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getTax(char* input1, char* input2, int input3[], int input4[]){

    int tax = 0, len = (int) sizeof(input3) / sizeof(input3[0]);

    //if(input1 == input2){
    if(!(strcmp(input1, input2))){

        for(int i=0; i<len; i++){
            if(input3[i]>9 && input3[i]<100){
                tax = ((input3[i]*0.2) * input4[i]) + tax;
            }
            else if(input3[i]>99){
                tax = ((input3[i]*0.3) * input4[i]) + tax;
            }
        }
    }
    else{
        for(int i=0; i<5; i++){
            if(input3[i]>9 && input3[i]<100){
                tax = ((input3[i]*0.1) * input4[i]) + tax;
            }
            else if(input3[i]>99){
                tax = ((input3[i]*0.2) * input4[i]) + tax;
            }
        }

    }
    return tax;
}

int main(){
    char input1[3], input2[3];
    int tax;
    int input3[] = {110};
    int input4[] = {2};
    scanf("%s%s", input1, input2);
    tax = getTax(input1, input2, input3, input4);
    printf("%d", tax);
    return 0;
}