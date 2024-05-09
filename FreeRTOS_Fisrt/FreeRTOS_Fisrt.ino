  /* Here I am going to Write the Programs on the FreeRTOS */

#define RED 6
#define BLUE 7
#define YELLOW 8


void setup() {

  pinMode(RED,OUTPUT);
  pinMode(BLUE,OUTPUT);
  pinMode(YELLOW,OUTPUT);

}

void loop() {

  // digitalWrite(RED,HIGH);
  // digitalWrite(BLUE,HIGH);
  // digitalWrite(YELLOW,HIGH);

    digitalWrite(RED,digitalRead(RED)^1);
    digitalWrite(BLUE,digitalRead(RED)^1);
    digitalWrite(YELLOW,digitalRead(RED)^1);
    delay(50);
}
