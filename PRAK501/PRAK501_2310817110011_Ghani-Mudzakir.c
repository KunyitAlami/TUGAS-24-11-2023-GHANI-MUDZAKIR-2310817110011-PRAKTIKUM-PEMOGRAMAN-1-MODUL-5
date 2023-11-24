#include <stdio.h>

int BilanganPalingBesar(int a, int b, int c, int d)
{
    int coba_satu, coba_dua, coba_tiga;

    // cek 2 bilangan pertama
    if (a>b)
    {
        coba_satu = a;
    }
    else if (b>a)
    {
        coba_satu = b;
    }

    // cek 2 bilangan kedua
    if (c>d)
    {
        coba_dua = c;
    }
    else if (d>c)
    {
        coba_dua = d;
    }

    // cek bilangan terakhir
    if (coba_satu>coba_dua)
    {
        coba_tiga = coba_satu;
    }
    else if (coba_dua>coba_satu)
    {
        coba_tiga = coba_dua;
    }
    
    return coba_tiga;
}

int main() 
{
    int bil1, bil2, bil3, bil4; 
    scanf("%d %d %d %d", &bil1, &bil2, &bil3, &bil4);
    int hasil = BilanganPalingBesar(bil1, bil2, bil3, bil4);
    printf("%d", hasil); 
    return 0;
}