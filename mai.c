#include <stdio.h>

int main(int argc, char *argv[])
{
    float puntos[4][3] = {{0, 0, 0}, {0, 0, 3}, {3, 0, 0}, {1, 7, 1}};
    float a, b, c, d, e, f;

    float perimetro = calcularPerimetro(puntos, &a, &b, &c, &d, &e, &f);
    float area = calcularArea(a, b, c);

    printf("El perimetro del triangulo es: %.2f\n", perimetro);
    printf("El area del triangulo es: %.2f", area);

    return 0;
}

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2)
{

    float d1 = sqrt(pow((x1- x2), 2) + pow((M[0][1] - M[2][1]), 2) + pow((M[0][2] - M[2][2]), 2));
    return d1;
}
float calcularPerimetro(float puntos[4][3], float *a, float *b, float *c, float *d, float *e, float *f)
{
    *a = calcularDistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[1][0], puntos[1][1], puntos[1][2]);
    *b = calcularDistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[2][0], puntos[2][1], puntos[2][2]);
    *c = calcularDistancia(puntos[2][0], puntos[2][1], puntos[2][2], puntos[1][0], puntos[1][1], puntos[1][2]);
    *d = calcularDistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    *e = calcularDistancia(puntos[1][0], puntos[1][1], puntos[1][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    *f = calcularDistancia(puntos[2][0], puntos[2][1], puntos[2][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    float per = *a + *b + *c + *d + *e + *f;
    return per;
}

float calcularArea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}