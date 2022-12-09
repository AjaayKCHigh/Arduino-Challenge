int ledpin = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin,"TRUE");
  delay(2000);
  digitalWrite(ledpin,"FALSE");
  delay(2000);
}
