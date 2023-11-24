#include <stdio.h>

int ubahNilaiKeMutlak(int nilaiYangdiUbah)
{
    if (nilaiYangdiUbah<0)
    {
        nilaiYangdiUbah = nilaiYangdiUbah * -1;
    }
    return nilaiYangdiUbah;

}

int hitungJarak(int a, int b, int c, int d)
{
    // kita akan menghitung nilai mutlak dari x
    int jarak_x = a-c;
    int hasil_satu = ubahNilaiKeMutlak(jarak_x);

    // kita akan menghitung nilai mutlak dari y
    int jarak_y = b-d;
    int hasil_dua = ubahNilaiKeMutlak(jarak_y);

    // kita akan menghitung jarak asli nya
    int jarak_asli = hasil_satu +hasil_dua;
}

int main()
{
    int bil1, bil2, bil3, bil4;
    scanf("%d", &bil1);
    scanf("%d", &bil2);
    scanf("%d", &bil3);
    scanf("%d", &bil4);
    int jarak_rill = hitungJarak(bil1, bil2, bil3, bil4);
    printf("%d", jarak_rill);

    return 0;
} 


