const int buttonpin = 2;
const int ledpin = 13 ;

int buttonState=0;
void setup() {
  pinMode(ledpin, OUTPUT);

  pinMode(buttonpin, INPUT);

}

void loop() {
  buttonState = digitalRead(buttonpin);
  if(buttonState == HIGH){
    digitalWrite(ledpin, HIGH);
    delay(200);
    }else {
      digitalWrite(ledpin, LOW);
      }
}
