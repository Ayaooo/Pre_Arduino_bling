void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  
}


void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<13;i++){
    
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(15000);
     
  }
  delay(3000);
}
  


