 #include<Arduino_FREERTOS.h>

#define RED 6
#define BLUE 7
#define Yellow 8


typedef int TaskProfiler;

TaskProfiler RedProfiler;
TaskProfiler YellowProfiler;
TaskProfiler BlueProfiler;



void setup(){

  Serail.begin(9600);
  xTaskCreate(RedControl," Red Led Task",100,NULL,1,NULL);
  xTaskCreate(BlueControl," Blue Led Task",100,NULL,1,NULL);
  xTaskCreate(YellowControl," Yellow Led Task",100,NULL,1,NULL);
}



void RedControl(void *pvParamenter){

  pinMode(RED,OUTPUT);
  while(1){
    Serial.println("This is a Red function ")

  }

}


void BlueControl(void *pvParamenter){

  pinMode(BLUE,OUTPUT);
  while(1){

        Serial.println("This is a Blue function ")

  }

}



void YellowControl(void *pvParamenter){

  pinMode(YELLOW,OUTPUT);
  while(1){
        Serial.println("This is a Yellow function ")

    
  }

}



void loop(){}

