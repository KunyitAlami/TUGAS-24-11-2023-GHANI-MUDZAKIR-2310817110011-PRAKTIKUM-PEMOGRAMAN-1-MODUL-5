def balik_angka(bilangan):

    nilaiHabisdiBalik = 0
    while bilangan>0:
        angka_terakhir = bilangan%10
        nilaiHabisdiBalik = (nilaiHabisdiBalik*10) + angka_terakhir 
        bilangan = bilangan//10
    return nilaiHabisdiBalik
    


bil1, bil2 = map(int, input().split())
balik_bil1 = balik_angka(bil1)
balik_bil2 = balik_angka(bil2)
hasilSebelumdiBalik = (balik_bil1 + balik_bil2)
hasilSesudahdiBalik = (balik_angka(hasilSebelumdiBalik))
print(hasilSesudahdiBalik)



