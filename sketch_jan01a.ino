int success = 12;
int failure = 11;
int input = A0;
int decision = 0;
void setup() {
  pinMode(success, OUTPUT);
  pinMode(failure, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   delay(25);
   int buttonPress = analogRead(input);
   Serial.println(buttonPress);
   if (buttonPress < 10){
     digitalWrite(failure, LOW);
     digitalWrite(success, LOW);
     decision = random(0, 2);
   } else {
     if(decision == 0)
      onSuccess();
     else   
      onFailure();
   }
}

void onSuccess() {
  digitalWrite(success, HIGH);
}

void onFailure() {
  digitalWrite(failure, HIGH);
}
