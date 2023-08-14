void setup() {
  //set up output for red bulb using 13 pin
  pinMode(13, OUTPUT);
  //set up output for yello bulb using 12 pin
  pinMode(12, OUTPUT);
  //set up output for green bulb using 11 pin
  pinMode(11, OUTPUT);

}

void loop() {
  
  //On red bulb using digitalwrite function and delay it 4000 seconds
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(4000);
  //On red and yellow bulbs using digitalwrite function and delay it 4000 seconds
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(4000);
  //On green bulb using digitalwrite function and delay it 4000 seconds
  digitalWrite(13,LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(4000);
  //On yellow bulb using digitalwrite function and delay it 4000 seconds
  digitalWrite(13,LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(4000);

}
