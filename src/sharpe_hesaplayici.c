/* ============================================================================
 * Proje Adı  : Sharpe Oranı Hesaplayıcı
 * Dosya Adı  : sharpe_hesaplayici.c
 * Yazar      : Mehmet Ege Sarıgöl
 * Tarih      : 17.10.2025
 * Açıklama   : Bu program, kullanıcıdan alınan yatırım getirisi, risksiz
 * faiz oranı ve standart sapma değerlerini kullanarak Sharpe
 * Oranı'nı hesaplar. Temel girdi kontrollerini içerir.
 * ============================================================================
 */

#include <stdio.h>

int main() {
    float yatirimGetirisi, risksizFaizOrani, standartSapma;
    float sharpeOrani;

    // Program için bir başlık oluşturuldu.
    printf("\n");
    printf("====================================================\n");
    printf("||          SHARPE ORANI HESAPLAYICI v1.0         ||\n");
    printf("====================================================\n\n");



    //================ GİRDİ ALMA VE KONTROL BÖLÜMÜ ================
    // Kullanıcıdan üç temel finansal veri alınır.
    // Her girdiden sonra, girdinin sayısal olup olmadığı kontrol edilir.
    // Ayrıca standart sapmanın pozitif olması gerektiği doğrulanır.
    //===================================================================


    printf("Yatirim Getirisi Giriniz (Orn: 15): ");
    if (scanf("%f", &yatirimGetirisi) != 1) {
        printf("\n!!! HATA: Gecersiz bir deger girdiniz. Lutfen bir sayi girin. !!!\n");
        return 1; // Hata durumunda programı sonlandır.
    }

    printf("Risksiz Faiz Orani Giriniz (Orn: 5): ");
    if (scanf("%f", &risksizFaizOrani) != 1) {
        printf("\n!!! HATA: Gecersiz bir deger girdiniz. Lutfen bir sayi girin. !!!\n");
        return 1; // Hata durumunda programı sonlandır.
    }

    printf("Standart Sapma (Risk) Giriniz (Orn: 12): ");
    if (scanf("%f", &standartSapma) != 1) {
        printf("\n!!! HATA: Gecersiz bir deger girdiniz. Lutfen bir sayi girin. !!!\n");
        return 1; // Hata durumunda programı sonlandır.
    }

    if (standartSapma <= 0) {
        printf("\n!!! HATA: Standart sapma sifirdan buyuk bir deger olmalidir. !!!\n");
        return 1; // Hata durumunda programı sonlandır.
    }


    //======================== HESAPLAMA BÖLÜMÜ ========================
    // Yüzde olarak alınan değerler, formülde kullanmak üzere ondalıklı
    // sayılara dönüştürülür. (Örnek: 15 -> 0.15)
    // Ardından Sharpe Oranı formülü uygulanır.
    //====================================================================


    yatirimGetirisi = yatirimGetirisi / 100.0;
    risksizFaizOrani = risksizFaizOrani / 100.0;
    standartSapma = standartSapma / 100.0;

    sharpeOrani = (yatirimGetirisi - risksizFaizOrani) / standartSapma;



    //================ SONUÇ YAZDIRMA VE YORUMLAMA BÖLÜMÜ ================
    // Hesaplanan Sharpe Oranı ve yorumu daha belirgin bir çerçeve
    // içinde ekrana yazdırılır.
    //======================================================================

    printf("\n\n*********************************************\n");
    printf("* HESAPLAMA SONUCU           *\n");
    printf("*********************************************\n");
    printf("* Hesaplanan Sharpe Orani: %.2f\n", sharpeOrani);
    printf("* Degerlendirme: ");

    if (sharpeOrani > 3.0) {
        printf("Mukemmel\n");
    } else if (sharpeOrani > 2.0) {
        printf("Cok Iyi\n");
    } else if (sharpeOrani > 1.0) {
        printf("Iyi\n");
    } else {
        printf("Iyi degil (1'in altinda)\n");
    }
    printf("*********************************************\n\n");

    return 0; // Programın başarıyla sonlandığını bildirir.
}
