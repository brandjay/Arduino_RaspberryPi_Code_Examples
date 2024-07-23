
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  delay(500);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
}
