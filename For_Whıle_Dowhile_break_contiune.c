/**
 * C programlama dili ile verilen bir sayıya kadar tüm 
 * sayma sayıları yazdırma (for döngüsü ile)
**/

#include <stdio.h>

int main()
{
    int i, n;

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tüm sayma sayıları : \n", n);

    /*
     * Döngü sayacını 1'den başlat (i=1) 
     * n değerine kadar git (i<=n)
     * her seferinde döngü sayacını 1 artır (i++)
     * her seferinde i değerini yazdır ve alt satıra geç
     */
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}



/**
 * C programlama dili ile verilen bir sayıya kadar tüm 
 * sayma sayıları yazdırma (for ve while döngüleri ile)
**/

#include <stdio.h>

int main()
{
    int i, n;

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tüm sayma sayıları : \n", n);

    /*
     * Döngü sayacını 1'den başlat (i=1) 
     * n değerine kadar git (i<=n)
     * her seferinde döngü sayacını 1 artır (i++)
     * her seferinde i değerini yazdır ve alt satıra geç
     */
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

	printf("...\n");
	
	i=1;
    while(i<=n)
    {
        printf("%d\n", i);
		i++;
    }

    return 0;
}


/**
 * C programlama dili ile verilen bir sayıya kadar tüm 
 * sayma sayıları yazdırma (for, while ve do-while döngüleri ile)
**/

#include <stdio.h>

int main()
{
    int i, n;

    /* Kullanıcıdan üst sınır değerini al */
    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tüm sayma sayıları : \n", n);

    /*
     * Döngü sayacını 1'den başlat (i=1) 
     * n değerine kadar git (i<=n)
     * her seferinde döngü sayacını 1 artır (i++)
     * her seferinde i değerini yazdır ve alt satıra geç
     */
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
	
	printf("...\n");
	
	i=1;
    while(i<=n)
    {
        printf("%d\n", i);
		i++;
    }
    
    printf("...\n");
    
    i=1;
    do {
        printf("%d\n", i);
		i++;
    }while(i<=n);

    return 0;
}

/**
 * C programlama dilinde break komutunun işleyişi
 * for döngüsünün içerisinde
*/

#include <stdio.h>

int main() {
  int i = 0;
  
  for (i=1; i<=10; i++) 
  {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  } 
  
  return 0;
}

/**
 * C programlama dilinde break komutunun işleyişi
 * while döngüsünün içerisinde
*/

#include <stdio.h>

int main() {
  int i;
  
  i = 0;
  while (i < 10) {
    if (i == 5) {
      break;
    }
    printf("%d\n", i);
	i++;
  }
   
  return 0;
}


/**
 * C programlama dilinde continue komutunun işleyişi
*/

#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) 
  {
    if (i == 5) 
	{
      continue;
    }
    printf("%d\n", i);
  }
   
  return 0;
}


/**
 * C programlama dilinde continue komutunun işleyişi
 * while döngüsünün içerisinde
*/

#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 10) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}