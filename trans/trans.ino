char k;
int x,y;

void setup() {
  Serial.begin(38400);
  
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
}

void loop() {
x=analogRead(A1);
//Serial.print(x);
//Serial.print("\t");
y=analogRead(A2);
//Serial.print(y);
//Serial.println();  

if(x>590){
  Serial.write('B');
//  Serial.println("B");
  }
else if(x<465){
  Serial.write('F');
   // Serial.println("F");
}
else if(y>555){
  Serial.write('R');
   // Serial.println("R");
}
else if(y<435){
  Serial.write('L');
   // Serial.println("L");
}
 else{
  Serial.write('S');
    //Serial.println("S");
 }
delay(100);
}
