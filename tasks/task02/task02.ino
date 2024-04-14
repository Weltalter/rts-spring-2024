#include <TaskManager.h>

int state3 = LOW;
int state5 = LOW;
int state6 = LOW;
int state9 = LOW;
int state10 = LOW;
const unsigned long interval_3 = 10000;
const unsigned long interval_5 = 1000;
const unsigned long interval_6 = 500;
const unsigned long interval_9 = 100;
const unsigned long interval_10 = 50;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  taskManager.schedule(repeatMicros(interval_3), [] {
    Blink_3();
  });

  taskManager.schedule(repeatMicros(interval_5), [] {
    Blink_5();
  });

  taskManager.schedule(repeatMicros(interval_6), [] {
    Blink_6();
  });

  taskManager.schedule(repeatMicros(interval_9), [] {
    Blink_9();
  });

  taskManager.schedule(repeatMicros(interval_10), [] {
    Blink_10();
  });
}

void loop() {
  taskManager.runLoop();
}

void Blink_3(){
  if (state3 == LOW){
    state3 = HIGH;
  }
  else{
    state3 = LOW;
  }
  digitalWrite(3, state3);
}

void Blink_5(){
  if (state5 == LOW){
    state5 = HIGH;
  }
  else{
    state5 = LOW;
  }
  digitalWrite(5, state5);
}

void Blink_6(){
  if (state6 == LOW){
    state6 = HIGH;
  }
  else{
    state6 = LOW;
  }
  digitalWrite(6, state6);
}

void Blink_9(){
  if (state9 == LOW){
    state9 = HIGH;
  }
  else{
    state9 = LOW;
  }
  digitalWrite(9, state9);
}

void Blink_10(){
  if (state10 == LOW){
    state10 = HIGH;
  }
  else{
    state10 = LOW;
  }
  digitalWrite(10, state10);
}