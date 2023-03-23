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
    if (selectedMove > 3) {
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
    }

    selectedMove += 1;  //swith to next move
  }
}


void simpleClose() {
  doorServo.write(150);
  fingerServo.write(10);
  delay(600);
  fingerServo.write(180);
  delay(600);
  doorServo.write(80);
}

void trollClose() {
  doorServo.write(150);
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
  delay(15);


  fingerServo.write(10);
  delay(600);

  fingerServo.write(180);
  delay(600);

  doorServo.write(80);
}


//open door,move finger very slowly forward and back to hiding very slowly, then quickly close door
void slow() {

  //Moving door
  for (pos = 80; pos < 155; pos += 1) {
    doorServo.write(pos);
    delay(30);
  }

  //Moving hand
  for (pos = 0; pos < 129; pos += 1) {
    fingerServo.write(pos);
    delay(30);
  }

  //hiding hand
  for (pos = 129; pos >= 0; pos -= 1) {
    fingerServo.write(pos);
    delay(30);
  }

  //hiding door
  for (pos = 155; pos >= 125; pos -= 1) {
    doorServo.write(pos);
    delay(30);
  }
  delay(100);
  for (pos = 125; pos >= 80; pos -= 4) {
    doorServo.write(pos);
    delay(15);
  }
}

//serious

void serious() {

  //Moving door
  for (pos = 80; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }

  //Moving hand
  for (pos = 0; pos < 70; pos += 1) {
    fingerServo.write(pos);
    delay(15);
  }
  delay(800);


  //hiding door
  for (pos = 155; pos >= 130; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }

  //hiding door
  for (pos = 130; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }
  //hiding door
  for (pos = 155; pos >= 130; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }
  //hiding door
  for (pos = 130; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }

  fingerServo.write(40);
  delay(1000);

  //Moving hand
  for (pos = 40; pos < 129; pos += 4) {
    fingerServo.write(pos);
    delay(15);
  }

  //hiding hand
  for (pos = 129; pos >= 0; pos -= 4) {
    fingerServo.write(pos);
    delay(15);
  }


  for (pos = 120; pos >= 80; pos -= 1) {
    doorServo.write(pos);
    delay(15);
  }
}

void trollClose1() {
  //Moving door
  for (pos = 80; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }

  //Moving hand
  for (pos = 0; pos < 127; pos += 4) {
    fingerServo.write(pos);
    delay(15);
  }
  //hiding door
  for (pos = 155; pos >= 130; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }
  delay(2000);

  for (pos = 130; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }

  for (pos = 155; pos >= 140; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }
  for (pos = 140; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }
  delay(500);
  //hiding hand
  for (pos = 127; pos >= 0; pos -= 4) {
    fingerServo.write(pos);
    delay(15);
  }

  //hiding door
  for (pos = 155; pos >= 80; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }
}

void matrix() {

  //Moving door
  for (pos = 80; pos < 155; pos += 3) {
    doorServo.write(pos);
    delay(15);
  }

  //Moving hand
  for (pos = 0; pos < 80; pos += 4) {
    fingerServo.write(pos);
    delay(15);
  }

  for (pos = 80; pos < 129; pos += 1) {
    fingerServo.write(pos);
    delay(30);
  }
  delay(300);

  for (pos = 129; pos >= 0; pos -= 4) {
    fingerServo.write(pos);
    delay(10);
  }

  //hiding door
  for (pos = 155; pos >= 80; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }
}

void sneak() {
  //Moving door
  for (pos = 80; pos < 130; pos += 1) {
    doorServo.write(pos);
    delay(30);
  }
  delay(2000);

  //Moving hand
  for (pos = 0; pos < 40; pos += 1) {
    fingerServo.write(pos);
    delay(30);
  }

  delay(500);

  for (pos = 130; pos < 155; pos += 4) {
    doorServo.write(pos);
    delay(15);
  }
  delay(100);

  for (pos = 40; pos < 90; pos += 4) {
    fingerServo.write(pos);
    delay(15);
  }
  delay(500);
  //hiding hand
  for (pos = 90; pos >= 70; pos -= 4) {
    fingerServo.write(pos);
    delay(15);
  }
  delay(100);
  for (pos = 70; pos < 90; pos += 4) {

    fingerServo.write(pos);
    delay(15);
  }
  delay(100);
  for (pos = 90; pos >= 70; pos -= 4) {
    fingerServo.write(pos);
    delay(15);
  }
  delay(100);

  for (pos = 70; pos < 129; pos += 4) {

    fingerServo.write(pos);
    delay(15);
  }

  for (pos = 129; pos >= 0; pos -= 4) {
    fingerServo.write(pos);
    delay(15);
  }
  //hiding door
  for (pos = 155; pos >= 80; pos -= 3) {
    doorServo.write(pos);
    delay(15);
  }
}
