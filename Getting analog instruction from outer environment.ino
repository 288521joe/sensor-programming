#define led 4
#define pot 34

void setup(){
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);

}
void loop(){
  int value = analogRead(pot);
  Serial.print("pot value=");
  Serial.print(value);

  if (value >= 2048){
    digitalWrite(led,HIGH);
    Serial.println("led is on");
  }
  else{
    digitalWrite(led,LOW);
    Serial.println("led is off");
  }
  delay(200);
}
