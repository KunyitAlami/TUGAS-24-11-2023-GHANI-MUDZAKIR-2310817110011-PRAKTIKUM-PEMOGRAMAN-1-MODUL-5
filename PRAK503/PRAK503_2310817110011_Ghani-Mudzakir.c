#include <stdio.h>

int maksimal(int a, int b){
    int c = a;
    if (b>a)
    {
        c = b;
    }
    else if (a>b)
    {
        c = a;
    }
    return c;
}
int minimal (int a, int b){
    int d = a;
    if (b>a)
    {
        d = a;
    }
    else if (a>b)
    {
        d = b;
    }
    return d;

}

int main()
{
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    scanf("%d", &bilangan);
    while(batas < bilangan)
    {
        int nilai;
        scanf("%d", &nilai); 
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
    }
    printf("\n%d %d",maks,minim);
 
    return 0;
}

