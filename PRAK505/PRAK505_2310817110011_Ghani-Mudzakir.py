def Biodata(tahunlahir,namalengkap,asalkota):
    tahunlahir = int(tahunlahir)
    tahunSekarang = 2023
    umur = tahunSekarang-tahunlahir
    print(f"\nPerkenalkan Nama Saya : {namalengkap}")
    print(f"Umur Saya : {umur}")
    print(f"Saya adalah Angkatan : {tahunSekarang}")
    print(f"Asal Saya Dari : {asalkota}")


tahunLahir = input() 
namaLengkap = input() 
asalKota= input()
tahunLahir = int(tahunLahir)
Biodata(tahunLahir, namaLengkap, asalKota)


