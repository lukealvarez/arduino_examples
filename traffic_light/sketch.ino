#define RED_LED 9  
#define YE_LED 11
#define GR_LED 13

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(YE_LED, OUTPUT);
  pinMode(GR_LED, OUTPUT);
}

void loop() {
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YE_LED, LOW);
  digitalWrite(GR_LED, LOW);
  Serial.println("Rojo encendido");
  delay(2000);

  digitalWrite(RED_LED, LOW);
  digitalWrite(YE_LED, HIGH);
  digitalWrite(GR_LED, LOW);
  Serial.println("Amarillo encendido");
  delay(500);

  digitalWrite(RED_LED, LOW);
  digitalWrite(YE_LED, LOW);
  digitalWrite(GR_LED, HIGH);
  Serial.println("Verde encendido");
  delay(3000);

}
