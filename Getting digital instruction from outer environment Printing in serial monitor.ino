#define led1 4
#define button 5

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}
void loop(){
  bool state =digitalRead(button);
  digitalWrite(led1,state);

  if (state == 1){
    Serial.print("light is on");
  }
  else{
    Serial.print("light is OFF");
  }
  delay(100);
}
