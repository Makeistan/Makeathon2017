int ldrPin=A0;
int ldrVal;
int ledPin=11;
int ledVal;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(ldrPin, INPUT);
 pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrVal=analogRead(ldrPin);
  Serial.println(ldrVal);
  ledVal=ldrVal/4;
  analogWrite(ledPin, ledVal);
  //delay(500);
}
