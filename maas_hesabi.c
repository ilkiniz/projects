# include <stdio.h>
# include <stdlib.h>
# include <math.h>


int main(){
    while (1) {
        int mesai ;
        printf("calisma saati : ") ;
        scanf("%d" , &mesai) ;
        int maas = 0 ;
        if (mesai <= 10){
            maas = maas + (mesai*5) ;

        }
        else if (10 < mesai  && mesai<= 20){
            maas = maas + 50 + ((mesai-10)*3) ;

        }
        else if (mesai > 20){
            maas = maas + 80 + ((mesai-20)*2) ;
        }

        printf("%d\n" , maas) ;
    }









return 0 ;
}