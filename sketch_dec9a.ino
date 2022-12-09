int ledpin = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin,"TRUE");
  delay(1000);
  digitalWrite(ledpin,"FALSE");
  delay(1000);
}