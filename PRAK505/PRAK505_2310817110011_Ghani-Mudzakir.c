#include <stdio.h>

void Biodata(int tahunlahir, char namalengkap[], char asalkota[])
{
    int tahunSekarang = 2023;
    int umur = tahunSekarang-tahunlahir;
    printf("\nPerkenalkan Nama Saya : %s\n", namalengkap);
    printf("Umur Saya : %d\n", umur);
    printf("Saya adalah Angkatan : %d\n", tahunSekarang);
    printf("Asal Saya Dari : %s\n", asalkota);

}
int main() 
{
    int tahunLahir;
    char namalengkap[100], asalkota[100];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&namalengkap); 
    scanf(" %[^\n]%*c", &asalkota);
    Biodata(tahunLahir, namalengkap, asalkota);
    return 0;
}



