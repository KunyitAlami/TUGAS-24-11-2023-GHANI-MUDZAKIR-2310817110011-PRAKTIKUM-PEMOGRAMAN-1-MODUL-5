def cekBilanganTerbesar(a,b,c,d):
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)

    # cek bilangan pertama
    if a>b:
        coba_satu = a
    elif b>a:
        coba_satu = b
    
    # cek bilangan kedua
    if c>d:
        coba_dua =c
    elif d>c:
        coba_dua = d
    
    # cek nilai akhir
    if coba_satu>coba_dua:
        coba_tiga = coba_satu
    elif coba_dua>coba_satu:
        coba_tiga = coba_dua
    
    # kita retunr nilai dari coba_tiga
    return coba_tiga



bil1, bil2, bil3, bil4 = map(int, input().split())
hasil = cekBilanganTerbesar(bil1, bil2, bil3, bil4)
print(hasil)



