void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  //int a = 13;
  
}
void loop() {
  // put your main code here, to run repeatedly:
  //delay(2000);
  //digitalWrite(13, LOW);
  //delay(1000);
   if (5 < 6 ){
    digitalWrite( 13, HIGH);
    delay(800);
    digitalWrite(13, LOW);
    delay(300);
  }
  else {
    digitalWrite(13, LOW);
    
    }
}
