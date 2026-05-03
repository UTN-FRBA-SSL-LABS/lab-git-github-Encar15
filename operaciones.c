#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
// cambio de suma a const para que no sean modificados posteriormente
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */
// resta recibe dos numeros y devuelve la resta del primero menos el segundo
int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*multiplicar recibe dos valores y devuelve el producto entre ellos*/
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}