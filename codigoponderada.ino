const int vermelho = 13;
const int amarelo = 12;
const int verde = 11;
const int buzzer = 2;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(vermelho, HIGH);  
  delay(6000);                      
  digitalWrite(vermelho, LOW);        
        
  digitalWrite(amarelo, HIGH);
  delay(2000);           
  digitalWrite(amarelo, LOW);

  digitalWrite(verde, HIGH);
  tone(buzzer, 300, 500);
  delay(4000);           
  digitalWrite(verde, LOW); 

  digitalWrite(amarelo, HIGH);
  delay(2000);           
  digitalWrite(amarelo, LOW);
}
