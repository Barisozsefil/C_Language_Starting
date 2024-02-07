
/**
 * C programlama dilinde diziler


#include <stdio.h>

int main() {
  int benimDizim[] = {25, 50, 75, 100};
  benimDizim[0] = 33;

  printf("%d", benimDizim[0]);
 
  return 0;
}


/**
 * C programlama dilinde diziler üzerinde
 * döngü kurma


#include <stdio.h>

int main() {
  int benimDizim[] = {25, 50, 75, 100};
  int i ; 
  for (i = 0; i <= 3; i++) 
  {
	  printf("%d", benimDizim[i]);
  }
 
  return 0;
}

*/

/**
 * C programlama dilinde bir dizinin 
 * en büyük değerinin bulunması


#include <stdio.h>

int main() {

  int benimDizim[] = {3,8,1,7,2,9,5,4};
  int en_buyuk_deger = benimDizim[0];
  int konum = 0;

  int boyut = sizeof (benimDizim) / sizeof (benimDizim[0]);

  for(int indeks = 0; indeks < boyut ; indeks++)
  {
    if(benimDizim[indeks] > en_buyuk_deger){
      en_buyuk_deger = benimDizim[indeks];
      konum = indeks;
    }
  }

  printf("Dizinin en büyük elemanı, %d indeksli konumda bulunan %d değeridir.\n",konum,en_buyuk_deger);
  
  return 0;
}



/**
 * C programlama dilinde bir dizinin arasına 
 * eleman ekleme


#include <stdio.h>

int main() {

  int eklenecek_sayi, eklenecek_indeks;
  int BenimDizim[] = {3,4,1,9,6,2,8}; 
  int boyut = sizeof (BenimDizim) / sizeof (BenimDizim[0]);
  
  for(int indeks = 0; indeks < boyut; indeks++){
    printf("%d ",BenimDizim[indeks]);
  }

  printf("\nDiziye eklenecek sayıyı giriniz: ");
  scanf("%d",&eklenecek_sayi);
  printf("Sayının hangi indekse ekleneceğini belirtiniz: ");
  scanf("%d",&eklenecek_indeks);
  
  for(int indeks = boyut - 1; indeks > eklenecek_indeks; indeks--){
      BenimDizim[indeks] = BenimDizim[indeks-1];
  }
  BenimDizim[eklenecek_indeks] = eklenecek_sayi;

  for(int indeks = 0; indeks < boyut; indeks++){
    printf("%d ",BenimDizim[indeks]);
  }
  
  return 0;
}


/**
 * C programlama dilinde iki boyutlu diziler üzerinde
 * döngü kurma
*/

#include <stdio.h>

int main() {

	int benimMatrisim[2][3] = { {1, 4, 2}, {3, 6, 8} };

	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", benimMatrisim[i][j]);
		}
		printf("\n");
	} 
	
  return 0;
}


/**
 * C programlama dilinde üç boyutlu diziler üzerinde
 * döngü kurma
*/

#include <stdio.h>

int main() {

	int benimMatrisim[2][3][4] = { 
						  {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
						  {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}} 
						};
	int i, j, k;
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			for (k = 0; j < 4; k++)
			{
				printf("%d ", benimMatrisim[i][j][k]);
			}
			printf("\n");
		}
		printf("..........................\n");		
	} 
	
  return 0;
}
