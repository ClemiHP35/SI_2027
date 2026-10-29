#include "Braille.h"

Braille::Braille(){}

void Braille::Begin(int bauds){
  Serial.begin(bauds);
  Serial.println("Braille character had begin correctly");
}

std::array<int, 6> Braille::Get_Character(char Character){
  if (Character == 'a') {
    return a;
  }

  if (Character == 'b') {
    return b;
  }

  if (Character == 'c') {
    return c;
  }

  if (Character == 'd') {
    return d;
  }

  if (Character == 'e') {
    return e;
  }

  if (Character == 'f') {
    return f;
  }

  if (Character == 'g') {
    return g;
  }

  if (Character == 'h') {
    return h;
  }

  if (Character == 'i') {
    return i;
  }

  if (Character == 'j') {
    return j;
  }

  if (Character == 'k') {
    return k;
  }

  if (Character == 'l') {
    return l;
  }

  if (Character == 'm') {
    return m;
  }

  if (Character == 'n') {
    return n;
  }

  if (Character == 'o') {
    return o;
  }

  if (Character == 'p') {
    return p;
  }

  if (Character == 'q') {
    return q;
  }

  if (Character == 'r') {
    return r;
  }

  if (Character == 's') {
    return s;
  }

  if (Character == 't') {
    return t;
  }

  if (Character == 'u') {
    return u;
  }

  if (Character == 'v') {
    return v;
  }

  if (Character == 'w') {
    return w;
  }

  if (Character == 'x') {
    return x;
  }

  if (Character == 'y') {
    return y;
  }

  if (Character == 'z') {
    return z;
  }


}