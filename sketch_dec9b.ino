int ledpin = 1;
int ledpin2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin,"TRUE");
  digitalWrite(ledpin2,"FALSE");
  delay(2000);
  digitalWrite(ledpin,"FALSE");
  digitalWrite(ledpin2,"TRUE");
  delay(2000);
}