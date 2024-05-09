  /* Here I am going to Write the Programs on the FreeRTOS */
#include<Arduino_FreeRTOS.h>


#define RED 6
#define BLUE 7
#define YELLOW 8

typedef int TaskProfiler;

TaskProfiler redprofiler;
TaskProfiler blueprofiler;
TaskProfiler yellowprofiler;



void setup() {
  Serial.begin(9600);

/*

1) Function
2) Function name
3) Stack Size
4) Parameters for the Task
5) Prority
6) Task Handle

*/

  xTaskCreate(redledcontrol,"Red Led Task",128,NULL,1,NULL);
  xTaskCreate(blueledcontrol,"blue Led Task",128,NULL,1,NULL); 
  xTaskCreate(yellowledcontrol,"yellow Led Task",128,NULL,1,NULL); 

}

void redledcontrol(void *pvParameters){

  pinMode(RED,OUTPUT);

  while(1){
    digitalWrite(RED,digitalRead(RED)^1);
    // This is our Yellow Profiler
    redprofiler++;
    Serial.print(" Red Profiler");
    Serial.println(redprofiler);
    delay(300);

}
}


void blueledcontrol(void *pvParameters){
  pinMode(BLUE,OUTPUT);
  
  while(1){

  digitalWrite(BLUE,digitalRead(BLUE)^1);
  // This is our Yellow Profiler
  blueprofiler++;
  Serial.print(" Blue Profiler");
  Serial.println(blueprofiler);
  delay(300);

  }

}


void yellowledcontrol(void *pvParameters){

    pinMode(YELLOW,OUTPUT);

  while(1){
  digitalWrite(YELLOW,digitalRead(YELLOW)^1);
  // This is our Yellow Profiler
  yellowprofiler++;
    Serial.print(" Yellow Profiler");
    Serial.println(yellowprofiler);
    delay(300);
  

  }

}


void loop() {

  // digitalWrite(RED,HIGH);
  // digitalWrite(BLUE,HIGH);
  // digitalWrite(YELLOW,HIGH);

    // digitalWrite(RED,digitalRead(RED)^1);
    // digitalWrite(BLUE,digitalRead(RED)^1);
    // digitalWrite(YELLOW,digitalRead(RED)^1);
    // delay(50);
}
