//muestra pregunta y respondes
#include <iostream>
#include <string>

using namespace std;

int main() {
    string respuesta1, respuesta2;

    // Pregunta 1
    cout << "¿Quién descubrió América?" << endl;
    cout << "A) Paco" << endl;
    cout << "B) Manolo" << endl;
    cout << "C) Colon" << endl;
    cout << "Introduce tu respuesta (A, B, C): ";
    cin >> respuesta1;

    // Pregunta 2
    cout << "\n¿Qué río pasa por Salamanca?" << endl;
    cout << "A) Ter" << endl;
    cout << "B) Besos" << endl;
    cout << "C) Tormes" << endl;
    cout << "Introduce tu respuesta (A, B, C): ";
    cin >> respuesta2;
      // Verificar respuestas
    bool respuestaCorrecta1 = (respuesta1 == "C" || respuesta1 == "c");
    bool respuestaCorrecta2 = (respuesta2 == "C" || respuesta2 == "c");

    // Mostrar resultados
    cout << "\nResultados:" << endl;
    if (respuestaCorrecta1) {
        cout << "Pregunta 1: Correcto!" << endl;
    } else {
        cout << "Pregunta 1: Incorrecto. La respuesta correcta es C) Colon." << endl;
    }

    if (respuestaCorrecta2) {
        cout << "Pregunta 2: Correcto!" << endl;
    } else {
        cout << "Pregunta 2: Incorrecto. La respuesta correcta es C) Tormes." << endl;
    }

    return 0;
}