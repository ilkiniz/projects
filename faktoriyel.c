#include <stdio.h>
int main(){
    
    int sayi ;
    printf("sayi giriniz :   ") ;
    scanf("%d", &sayi) ;


    int carpim = 1 ;
    int i ;
    for(i=0 ; i<sayi ; i++){
        carpim = carpim*(i+1);





    }

    printf("%d" , carpim);



    return 0 ;
}