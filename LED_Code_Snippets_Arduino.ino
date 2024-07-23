
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);  // LED 1
  pinMode(3, OUTPUT);  // LED 2 
  pinMode(4, OUTPUT);  // LED 3 
}

// the loop function runs over and over again forever
void loop() {
  delay(500);
  digitalWrite(2, HIGH); //Turns voltage on
  delay(1000);
  digitalWrite(2, LOW);  // Turns voltage off
  delay(1000);           // Delays the process
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
}

/*

 //This displays the number 7 using a 7 segment LED 
 
  const int segmentA = 2;
  const int segmentB = 3;
  const int segmentC = 4;

void setup() {
  
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);

  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);


}
void loop() {
    
    
 }
 */
