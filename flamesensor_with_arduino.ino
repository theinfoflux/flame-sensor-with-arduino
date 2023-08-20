int flamesensor=2;
int buzzer=13;
void setup()
{
  Serial.begin(9600);// initialize serial communication @ 9600 baud:
  pinMode(flamesensor, INPUT); 
  pinMode(buzzer, OUTPUT);
}
void loop()
{
  
  if (digitalRead(flamesensor) == HIGH )
  {
    digitalWrite(buzzer, HIGH); // Led ON
    Serial.println("** Fire detected!!! **");
    delay(5000);
    digitalWrite(buzzer,LOW);
  }
  else
  {
    digitalWrite(buzzer, LOW); 
    Serial.println("No Fire detected");
  }
  delay(100);
}
