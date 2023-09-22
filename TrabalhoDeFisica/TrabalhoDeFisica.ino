#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); // RX, TX

int led1 = 4;
int led2 = 5;
int led3 = 6;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Inicialize a comunicação serial com o módulo Bluetooth
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read(); // Ler o comando do celular

    // Verificar o comando recebido e controlar os LEDs
    if (command == '1') {
      digitalWrite(led1, HIGH);
    } else if (command == '2') {
      digitalWrite(led2, HIGH);
    } else if (command == '3') {
      digitalWrite(led3, HIGH);
    } else if (command == '0') {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
}
}
}
