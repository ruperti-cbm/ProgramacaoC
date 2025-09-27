#include <stdio.h>

int main(){
    double numeroPreciso = 3.14159653589793;
    long double numeroMuitoPreciso = 3.14159653589793238463;

    printf("NUmero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    return 0;

}