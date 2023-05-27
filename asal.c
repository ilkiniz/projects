# include <stdio.h>
# include <stdlib.h>

void asal_check();
int main(){
    int number ;
    printf("sayi giriniz :  ") ;
    scanf("%d" , &number ) ;
    asal_check(number);




    return 0 ;

}

void asal_check(int x){
    int flag = 0 ;
    int i ;
    for(i = 2 ; i<x ;i++ ){
        if(x%i == 0){
            flag = 1 ;
        }
    }
    if(flag == 1){
        printf("asal değil\n") ;


    }else{
        printf("asal\n") ;
    }

}