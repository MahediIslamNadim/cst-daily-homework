/*void setup() {
  pinMode(2, OUTPUT);   // GPIO2
}

void loop() {
  digitalWrite(2, LOW);   // LED ON (active LOW)
  delay(1000);
  digitalWrite(2, HIGH);  // LED OFF
  delay(1000);
} */
void setup(){
  pinMode(2, OUTPUT);
}
void loop() {
  digitalWrite(2,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGh);
  delay(2000);
}
