int thresholdValue = 600; // Setting the gas threshold  
int buzzerPin = 9; // Buzzer pin
int sensorValue; // The data read from sensor

void setup() {
  pinMode(buzzerPin, OUTPUT); // Setting the buzzer pin as an output
  Serial.begin(9600);
}

void loop() {
  deger = analogRead(A0); // Reading the analog data from sensor
  if (deger > thresholdValue) { // If the value read from sensor bigger than threshold value, buzzer will go on
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  } else { // If the value read from sensor lower than threshold value, buzzer will go off
    digitalWrite(buzzerPin, LOW);
  }
   Serial.println(sensorValue);  
}
