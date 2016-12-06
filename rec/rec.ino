void setup() {
  // put your setup code here, to run once:
Serial.begin(38400);

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void forward(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  }

void backward(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  }

void right(){
  analogWrite(2,180);
  analogWrite(3,180);
  
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  }

void left(){
  analogWrite(2,180);
  analogWrite(3,180);
  
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  }

void brake(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
  
void loop() {
// put your main code here, to run repeatedly:
while(Serial.available()){
    char data = Serial.read();
    if(data == 'F')
      forward();
    else if(data == 'B')
      backward();
    else if(data == 'L')
      left();  
    else if(data == 'R')
      right();
    else if(data == 'S')
      brake();
    else;
      
}
}
