#include<stdio.h>

int stringComp(char *str1,char *str2){
    while(*str1 && (*str1==*str2)){
        str1++;
        str2++;
    }
    return (*str1==*str2);
}

void stringConcat(char *str1,char *str2,char *rslt){
    while(*str1){
        *rslt++ = *str1++;
    }
    while(*str2){
        *rslt++ = *str2++;
    }
    *rslt = '\0';
}

int stringLengh(char *str){
    int lenght=0;
    while(*str++){
        lenght++;
    }
    return lenght;
}

int main(){
    char str1[20],str2[20],rslt[20];
    printf("Enter string 1");
    scanf("%99s",str1);
    printf("Enter string 2");
    scanf("%99s",str2);
    if(stringComp(str1,str2)){
        printf("strings are equal \n");
    }else{
        printf("strings are not equal \n");
    }
    stringConcat(str1,str2,rslt);
    printf("Concatenated string %s",rslt);
    printf("String lenght %d",stringLengh(rslt));
}