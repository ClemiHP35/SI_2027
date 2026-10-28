#include "Braille.h"

Braille::Braille(){}

void Braille::Begin(int bauds){
  Serial.begin(bauds);
  Serial.println("Braille character had begin correctly");
}

int Braille::Get_Character(char Character){
  
}