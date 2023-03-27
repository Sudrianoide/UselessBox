#include <Servo.h>

Servo doorServo;
Servo fingerServo;

int swPin = 2;
int pos = 0;
int selectedMove = 0;

void setup() {
  pinMode(swPin, INPUT);
  doorServo.attach(9);
  fingerServo.attach(10);
  doorServo.write(80);
  fingerServo.write(180);
}


void loop() {
  if (digitalRead(swPin) == HIGH) {
    if (selectedMove > 6) {
      selectedMove = 0;
    }
    switch (selectedMove) {
      case 0:
        simpleClose();
        break;
      case 1:
        crazydoor();
        break;
      case 2:
        trollClose();
        break;
      case 3 :
        fake();
        break;
      case 4 :
        mimoun();
        break;
      case 5 :
        comte();
        break;
    }

    selectedMove += 1;  //swith to next move
  }
}


void simpleClose() {
  doorServo.write(150);
  delay(600);
  fingerServo.write(10);
  delay(600);
  fingerServo.write(180);
  delay(600);
  doorServo.write(80);
}

void trollClose() {
  doorServo.write(150);
  delay(600);
  fingerServo.write(15);
  delay(600);
  fingerServo.write(180);
  delay(600);
  doorServo.write(80);
  delay(2000);
  doorServo.write(150);
  delay(1000);
  doorServo.write(80);
  delay(2000);
  doorServo.write(150);
  delay(500);
  fingerServo.write(10);
  delay(600);
  fingerServo.write(180);
  delay(600);
  doorServo.write(80);
}

void crazydoor() {
  doorServo.write(125);
  delay(150);

  doorServo.write(80);
  delay(800);

  doorServo.write(110);
  delay(700);

  doorServo.write(80);
  delay(1000);

  doorServo.write(155);
  delay(500);


  fingerServo.write(10);
  delay(600);

  fingerServo.write(180);
  delay(600);

  doorServo.write(80);
}
void fake(){
  doorServo.write(150);
  delay(250);

  fingerServo.write(15);
  delay(700);
  fingerServo.write(180);
  delay(700);
  fingerServo.write(15);
  delay(700);
  fingerServo.write(180);
  delay(700);
  fingerServo.write(15);
  delay(700);
  fingerServo.write(180);
  delay(700);

  doorServo.write(80);
  delay(650);

  doorServo.write(150);
  delay(500);

  fingerServo.write(10);
  delay(550);

  fingerServo.write(180);
  delay(550);

  doorServo.write(80);
  delay(550);

  doorServo.write(125);
  delay(550);

  doorServo.write(80);


}

void mimoun(){
  doorServo.write(150);
  delay(600);
  doorServo.write(80);
  delay(600);

  doorServo.write(150);
  delay(600);
  doorServo.write(80);
  delay(600);

  doorServo.write(150);
  delay(600);
  doorServo.write(80);
  delay(600);

  doorServo.write(150);
  delay(600);
  doorServo.write(80);
  delay(600);

  doorServo.write(150);
  delay(600);
  fingerServo.write(10);
  delay(600);
  fingerServo.write(180);
  delay(600);
  doorServo.write(80);



}
void comte (){
  doorServo.write(115);
  delay(500);
  doorServo.write(80);
  delay(500);
  doorServo.write(150);
  delay(500);
  fingerServo.write(15);
  delay(500);
  fingerServo.write(180);
  delay(500);
  fingerServo.write(50);
  delay(500);
  fingerServo.write(180);
  delay(500);
  doorServo.write(80);
  delay(500);
  doorServo.write(150);
  delay(500);
  fingerServo.write(10);
  delay(500);
  fingerServo.write(180);
  delay(500);
  doorServo.write(80);



}
