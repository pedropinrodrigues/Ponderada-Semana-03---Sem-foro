void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  
  delay(3000);                      
  digitalWrite(13, LOW);        
        
  digitalWrite(12, HIGH);
  delay(2000);           
  digitalWrite(12, LOW);

  digitalWrite(11, HIGH);
  tone(2, 300, 500);
  delay(4000);           
  digitalWrite(11, LOW); 
}
