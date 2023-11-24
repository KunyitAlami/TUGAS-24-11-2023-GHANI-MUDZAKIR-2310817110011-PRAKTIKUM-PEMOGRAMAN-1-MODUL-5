def ubahNilaiKeMutlak(nilaiYangdiUbah):
    nilaiYangdiUbah = int(nilaiYangdiUbah)

    if nilaiYangdiUbah<0:
        nilaiYangdiUbah = nilaiYangdiUbah * -1
    
    return nilaiYangdiUbah

def hitungJarak(a,b,c,d):

    # kita akan menghitung nilai mutlak dari x
    jarak_x = a-c
    hasil_satu = ubahNilaiKeMutlak(jarak_x)

    # kita akan menghitung nilai mutlak dari y
    jarak_y = b-d
    hasil_dua = ubahNilaiKeMutlak(jarak_y)

    # kita akan menghitung jarak asli nya
    jarak_asli = hasil_satu +hasil_dua

    return jarak_asli

bil1, bil2, bil3, bil4 = map(int, input().split())

jarak_rill = hitungJarak(bil1, bil2, bil3, bil4)
print(jarak_rill)





