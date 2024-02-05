/**
 * C programlama dili ile dosya okuma [fgetc() ile teker teker]
 * ve içeriğini görüntüleme
**/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    /* Dosyamızın referansını tutan işaretçi */
    FILE * fPtr;

    char karakter;


    /* 
     * Dosyayı r (read - oku) modunda aç. 
     * çalışma dizininin altında "data/dosya1.txt", dosyanın güzergahı 
    */
    fPtr = fopen("data/dosya1.txt", "r");


    /* fopen(), eğer başarısız ise NULL döner */
    if(fPtr == NULL)
    {
        /* Dosya okunamadığı için programdan çık */
        printf("Dosya okunamadı.\n");
        printf("Dosyanın ilgili konumda olup olmadığını ve de erişim yetkiniz olup olmadığını kontrol ediniz.\n");
        exit(EXIT_FAILURE);
    }

    /* Dosya başarıyla açıldı mesajı */
    printf("Dosya başarıyla açıldı; içeriği okunuyor.\n\n");

    do 
    {
        /* Dosyadan bir karakter oku */
        karakter = fgetc(fPtr);

        /* Dosyadan okuduğun karakteri konsola yazdır */
        putchar(karakter);

    } while(karakter != EOF); /* Bunu, EOF (End Of File) karakterine denk gelmediğin sürece yap. */


    /* Dosyayla işimiz bitti; kendisine başka uygulamaların da erişebilmesi için serbest bırak. */
    fclose(fPtr);


    return 0;
}



/**
 * C programlama dili ile bir dosya oluşturup 
 * dosyaya yazma işlemleri
**/

#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main()
{
    /* Veri boyutunu depolayan karakter dizisi */
    char veri[VERI_BOYUTU];

    /* Dosyamıza işaret eden dosya işaretçisi */
    FILE * fPtr;


    /* 
     * Dosyayı w (write) modunda aç. 
     * "data/dosya1.txt" dosyanın güzergahı
     */
    fPtr = fopen("data/dosya1.txt", "w+"); // çalışma dizininin altında "data" isimli bir dizin
    // ve bu dizinde "dosya1.txt" adında bir dosya oluşturur.


    /* fopen(), eğer başarısız ise NULL döner */
    if(fPtr == NULL)
    {
        /* Dosya oluşturulamadığı için programdan çık */
        printf("Dosya oluşturulamadı.\n");
        exit(EXIT_FAILURE);
    }


    /* Dosyaya kaydedilecek olan girdileri kullanıcıdan al */
    printf("Dosyaya kaydedilecek olan girdiyi al : \n");
    fgets(veri, VERI_BOYUTU, stdin);


    /* Veriyi dosyaya yaz */
    fputs(veri, fPtr);


    /* Dosyayı kapat */
    fclose(fPtr);


    /* Başarı mesajını yazdır */
    printf("Dosya başarıyla oluşturuldu ve içeriği kaydedildi...) \n");


    return 0;
}