#include <stdio.h>
int main(){
    char name[20];
    int units;
    float bill=0.0,surcharge=0.0;
    printf("Enter the name of the user");
    scanf("%s",&name);
    printf("Enter the units used");
    scanf("%d",&units);
    if(units<200){
        bill=units*0.80;
    }else if(units<300){
        bill=(200*0.80)+((units-200)*0.90);
    }else{
        bill=(200*0.80)+(100*0.90)+((units-300)*1.00);
    }
    bill+=100;
    if(bill>=400){
        surcharge=bill*0.15;
        bill+=surcharge;
    }
    printf("The user name %s:",name);
    printf("The units used %d:",units);
    printf("The bill name %.2f:",bill);
    printf("The surcharge name %.2f:",surcharge);
}