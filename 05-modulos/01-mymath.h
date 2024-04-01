// esse modulo contem funcoes matematicas

int fatorial(int n) {
    int fat = 1;

    for (int i = 1; i < n; i++) {
        fat *= (i + 1);
    }
    return fat;
}

int areaQuadrado(int lado) {
    int area = lado * lado;
    return area;
}

int areaRetangulo(int lado, int base) {
    return lado * base;
}