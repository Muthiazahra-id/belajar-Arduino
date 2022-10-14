int led=2;
int button=4;
void setup() {
  // put your setup code here, to run once:
  pinMode (led,OUTPUT);
  pinMode (button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalWrite(button)=HIGH){
      digitalWrite(led,HIGH);
  }
  else{
  digitalWrite(led,LOW);
  }
}
