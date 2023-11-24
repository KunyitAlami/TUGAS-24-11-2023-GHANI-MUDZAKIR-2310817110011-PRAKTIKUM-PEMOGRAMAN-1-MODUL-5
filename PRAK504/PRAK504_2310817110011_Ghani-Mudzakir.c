#include <stdio.h>


int reverse_bilangan(int bilangan)
{
    int balik_angka, digit_terakhir;
    balik_angka = 0;

    while (bilangan>0)
    {
        digit_terakhir = bilangan % 10 ;
        balik_angka = (balik_angka * 10) + digit_terakhir;
        bilangan = bilangan/10;
    }
    return balik_angka;
}

int main()
{
    int bil1, bil2;
    scanf("%d %d", &bil1, &bil2);

    int balik_bil1, balik_bil2;
    balik_bil1 = reverse_bilangan(bil1);
    balik_bil2 = reverse_bilangan(bil2);
    int hasilYangBelumdiBalik, hasilSesudahdiBalik;
    hasilYangBelumdiBalik = balik_bil1 + balik_bil2;
    hasilSesudahdiBalik = reverse_bilangan(hasilYangBelumdiBalik);

    printf("%d", hasilSesudahdiBalik);

    return 0; 
}


