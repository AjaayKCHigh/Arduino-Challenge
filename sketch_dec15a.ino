int ledpin = 1;
int ledpin2 = 2;
int switchPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(switchPin);
  if (a == 1){
    digitalWrite(ledpin,"TRUE");
    digitalWrite(ledpin2,"FALSE"); 
  }
  else{
    digitalWrite(ledpin,"FALSE");
    digitalWrite(ledpin2,"TRUE");
  }
}
