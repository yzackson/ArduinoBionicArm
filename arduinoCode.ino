/*
code developed by CoderAragon
*/

#include <Servo.h>

// ================= seleciona a posicao inicial de cada sevo
int posFT = 0; 
int posCB = 90;
int posED = 90;
int posAF = 40;
int oQueFazer = 0;

// ================= inicia um objeto para cada servo
Servo ft; // Frente Trás
Servo cb; // Cima Baixo
Servo ed; // Esquerda Direita
Servo af; // Abre fecha


void setup() {
  //================ atrela cada pino a um servo
  ft.attach(10); 
  cb.attach(9);
  ed.attach(11);
  af.attach(8);

  Serial.begin(9600);

  // =============== poe cada servo na posicao determinada no inicio
  ft.write(posFT);
  cb.write(posCB);
  ed.write(posED);
  af.write(posAF);
}

void loop() {
  while ((oQueFazer != 1) && (oQueFazer != 2) && (oQueFazer != 3) && (oQueFazer != 4)) {
    Serial.write("Selecione o que quer fazer:\n1 - girar esq/dir\n2 - frante/tras\n3 - levantar/descer\n abrir/fechar a garra");
    delay(250);
    Serial.read(oQueFazer);
    delay(    
    if(oQueFazer == 1) {
      moveED();
    } else if(oQueFazer == 2) {
      moveFT();
    } else if(oQueFazer == 3) {
      moveCB():
    } else if(oQueFazer == 4) {
      moveAF();
    } else {
      Serial.write("EI! voce digitou um numero errado. Tente de novo!\n\n");
    }
  }
}




void moveED() {
  int decisao = 0;
  Serial.write("Quer aumentar ou diminuir alguns graus? (1 - aumentar    2 - diminuir)\n\n");
  while ((decisao != 1) && (decisao != 2)) {
    decisao = Serial.read();
  }
  if (decisao == 1) {
    Serial.print("Quer aumentar quantos graus?");
    
    
    
    
    
    
