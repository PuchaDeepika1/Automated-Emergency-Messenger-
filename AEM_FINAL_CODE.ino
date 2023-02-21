  03const int analogPin = A0;
void setup() 
{
 Serial.begin(9600);
 delay(1000);
}

void loop() 
{
  int sensorValue = analogRead(analogPin);
  if(sensorValue > 500 && sensorValue < 1022)
  {
    Serial.println(sensorValue);
    delay(1000);
    Serial.println("ATD+917330811666;");
    delay(10000);
    Serial.println("AT+CMGF=1");
    delay(1000);
    Serial.println("AT+CMGS=\"+917330811666\"\r");
    delay(1000);
    Serial.println("ACCIDENT HAS BEEN MET");
    delay(1000);
    Serial.println("NEED HELP");
    delay(1000);
    Serial.println((char)26);
  }
}
