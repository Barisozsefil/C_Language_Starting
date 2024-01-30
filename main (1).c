/* Bu işaret ile başlarsak yorum satırı*/

/*# işareti ile başlayn  kütüphane ekleme*/
#include <stdio.h>

/* Ana program bloğu */
int main ()
{
     int x = 5, y = 6, z = 7;
     printf ("%d", x + y + z);  /*toplu yazdırma*/ 
     printf("\n...\n");
     
     
     x = y = z= 50;
     printf ("%d", x+y+z);
     
     return 0;
}