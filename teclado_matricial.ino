#include <Keypad.h>     // importa libreria Keypad

const byte FILAS = 4;     // define numero de filas
const byte COLUMNAS = 4;    // define numero de columnas
char keys[FILAS][COLUMNAS] = {    // define la distribucion de teclas
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinesFilas[FILAS] = {9,8,7,6};   // pines correspondientes a las filas
byte pinesColumnas[COLUMNAS] = {5,4,3,2}; // pines correspondientes a las columnas

Keypad teclado = Keypad(makeKeymap(keys), pinesFilas, pinesColumnas, FILAS, COLUMNAS);  // crea objeto

char TECLA;       // almacena la tecla presionada
  
void setup()
{
 Serial.begin(9600);      // inicializa comunicacion serie
}

void loop(){
  TECLA = teclado.getKey();
  if (TECLA != NO_KEY){
    Serial.print("Presionaste la tecla: ");
    Serial.println(TECLA);
  }
}
