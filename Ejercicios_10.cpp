#include <iostream>
#include <string>

using namespace std;

int main() {
    float r1, r2, r3, tiempo, puntajeBase, bonificacion, penalizacion, puntajeFinal;
    int errores;
    string extra, copia, nivel, observacion = "";

    cout << "Puntaje Reto 1: "; cin >> r1;
    cout << "Puntaje Reto 2: "; cin >> r2;
    cout << "Puntaje Reto 3: "; cin >> r3;
    cout << "Numero de errores: "; cin >> errores;
    cout << "Tiempo total (min): "; cin >> tiempo;
    cout << "Resolvio desafio extra? (1:Si/2:No): "; cin >> extra;
    cout << "Descalificado por copia? (1:Si/2:No): "; cin >> copia;

    puntajeBase = r1 + r2 + r3;

    penalizacion = errores * 4;

    bonificacion = 0;
    if (extra == "1" || extra == "1" || extra == "1") {
        bonificacion += 15;
    }
    if (tiempo < 30) {
        bonificacion += 10;
    }

    puntajeFinal = puntajeBase - penalizacion + bonificacion;
    if (puntajeFinal < 0) {
        puntajeFinal = 0;
    }

    if (copia == "1" || copia == "1" || copia == "1") {
        nivel = "Descalificado";
    } else {
        if (puntajeFinal >= 90) nivel = "Experto";
        else if (puntajeFinal >= 70) nivel = "Avanzado";
        else if (puntajeFinal >= 50) nivel = "Intermedio";
        else if (puntajeFinal >= 30) nivel = "Basico";
        else nivel = "Principiante";
    }

    if (puntajeFinal >= 70 && errores > 5) {
        observacion = "Resultado inconsistente: revisar calidad de resolucion";
    }

    cout << "\--- RESULTADOS ---" << endl;
    cout << "Puntaje Base: " << puntajeBase << endl;
    cout << "Penalizacion: " << penalizacion << endl;
    cout << "Bonificacion: " << bonificacion << endl;
    cout << "Puntaje Final: " << puntajeFinal << endl;
    cout << "Nivel: " << nivel << endl;
    if (observacion != "") cout << "Observacion: " << observacion << endl;

    return 0;
}
