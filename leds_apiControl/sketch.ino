#define R_LED 9  
#define Y_LED 11
#define G_LED 13

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(R_LED, OUTPUT);
  pinMode(Y_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {
    int ledColor = Serial.read();
    switch(ledColor){
      case 49:
        changeLedStatus(R_LED);
        break;
      case 50:
        changeLedStatus(Y_LED);
        break;
      case 51:
        changeLedStatus(G_LED);
        break;
    }
  }
}

void changeLedStatus(int pin){
  digitalWrite(pin, !digitalRead(pin));
}
