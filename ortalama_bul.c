# include <stdio.h>
# include <stdlib.h>
/*
girilen sayıların aritmetik ortalamasını alır
*/

int main(){
    int eleman_sayisi = 0 ;
    int toplam = 0 ;
    int girilen_sayi = 1 ;
    while (girilen_sayi != 0){
        scanf("%d" , &girilen_sayi) ;
        if(girilen_sayi == 0){
            break ;
        }
        toplam = toplam + girilen_sayi ;
        eleman_sayisi = eleman_sayisi +1 ;

    }
    float ortalama = (float) toplam/ eleman_sayisi ;
    printf("%f" , ortalama);



return 0 ;
}

