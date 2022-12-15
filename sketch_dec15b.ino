int ledpin = 1;
int ledpin2 = 2;
int switchPin = 3;
bool led1 = "FALSE";
bool led2 = "TRUE";

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(switchPin);
  if (a == 1){
    if(led1 = "TRUE"){
      if(led2 = "TRUE"){
        bool led1 = "FALSE";
        bool led2 = "FALSE";
      }
      else{
        bool led1 = "FALSE";
        bool led2 = "TRUE";

      }
    }
    else{
      if(led2 = "TRUE"){
        bool led1 = "TRUE";
        bool led2 = "FALSE";
      }
      else{
        bool led1 = "TRUE";
        bool led2 = "TRUE";

    }
      
    }
  }
  digitalWrite(ledpin,led1);
  digitalWrite(ledpin2,led2); 
}
