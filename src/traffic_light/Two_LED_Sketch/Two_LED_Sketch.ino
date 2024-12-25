int GREEN = 13;
int YELLOW = 12;

void setup(){

  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
}

void loop(){
  digitalWrite(GREEN, HIGH);
  delay(5000);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW,LOW);
  
}