def maksimal (a, b):
    c =a
    if a>b:
        c =a
    elif b>a:
        c = b
    
    return c

def minimal (a,b):
    d = a
    if a>b:
        d = b
    elif b>a:
        d = a
    
    return d

maks = -1000
min = 1000
banyaknya_input = input()

banyaknya_input = int(banyaknya_input)
for _ in range(banyaknya_input):


    nilai = input()
    nilai = int(nilai)
    maks = maksimal(maks, nilai)
    min = minimal(min, nilai)

print(f"{maks} {min}")

