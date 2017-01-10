int ldrPin=A0;
int ldrVal;
int buzzerPin=11;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(ldrPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrVal=analogRead(ldrPin);
  Serial.println(ldrVal);
 // ledVal=ldrVal/4;

  if (ldrVal < 500)
  melody_1();
else
  melody_2();

}

void melody_1(){
  tone(buzzerPin, 261, 383);
  delay(192);
  tone(buzzerPin, 294, 340);
  delay(170);
  tone(buzzerPin, 329, 304);
  delay(152);
  tone(buzzerPin, 349, 286);
  delay(143);
  tone(buzzerPin, 392, 255);
  delay(128);
  tone(buzzerPin, 440, 227);
  delay(114);
  tone(buzzerPin, 493, 203);
  delay(101);
  tone(buzzerPin, 523, 191);
  delay(95);
  delay(500);
  }
void melody_2()
{
  tone(buzzerPin, 1915, 800);
  delay(100);
  tone(buzzerPin, 1700, 700);
  delay(100);
  tone(buzzerPin, 1519, 600);
  delay(100);
  tone(buzzerPin, 1432, 500);
  delay(100);
  tone(buzzerPin, 1275, 400);
  delay(100);
  tone(buzzerPin, 1136, 300);
  delay(100);
  tone(buzzerPin, 1014, 200);
  delay(100);
  tone(buzzerPin, 956, 100);
  delay(500);
  }

