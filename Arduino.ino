void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  delay(1000);
  Serial.println("Initialized system!");
  pinMode(13, OUTPUT);
}

void loop() {
  // delay(1000);
  // Serial.println("test");
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
