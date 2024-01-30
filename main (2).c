/* Bu işaret ile başlarsak yorum satırı*/

/*# işareti ile başlayn  kütüphane ekleme*/
#include <stdio.h>

/* Ana program bloğu */
int main (){
     
     /*Değişkenleri Belirledik*/
     
     int sayı1 , sayı2;
     int toplam, fark, carpım, mod;
     float bolum;
     
     
     /*
     Kullanıcıdan iki sayı alma işlemi 
     */
     printf ("Lütfen iki sayı giriniz");
     scanf ("%d%d", &sayı1 ,&sayı2);
     
     
     /* Tüm aritmetik işlerimleri gereçekleştir*/
     toplam= sayı1 + sayı2 ;
     fark= sayı1 - sayı2 ;
     carpım = sayı1 * sayı2;
     bolum =(float) sayı1 / sayı2 ;
     mod = sayı1 %sayı2 ;
     
     /*Sonuçları yazdır*/
     printf("Toplam = %d\n", toplam);
     printf("Fark = %d\n", fark);
     printf("Çarpım = %d\n", carpım);
     printf("Bölme = %f\n", bolum);
     printf("Kalan veya modulo = %d", mod);
     
     return 0;
     
     
     
}