int buzzer = 6;
int smokeA0 = A0;
int sensorThreshold = 3699;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
 
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  if (analogSensor > sensorThreshold)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    
    tone(buzzer, 800, 200);
  }
  else
  {
    
    digitalWrite(LED_BUILTIN, LOW);
    noTone(buzzer);
  }
  delay(100);
}
