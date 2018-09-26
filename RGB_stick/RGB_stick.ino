
int LED[] = {8,9,10};
int SW_pin = 2; 
int X_pin = A0; 
int Y_pin = A1; 

int klikNumber = 0;

void setup() {

  for(int i = 0; i < sizeof(LED)/sizeof(int); i++)
    pinMode(LED[i],OUTPUT);
  
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(SW_pin) == 0) klikNumber++;
    analogWrite(LED[klikNumber%3],analogRead(X_pin));

  if(analogRead(X_pin) == 0) klikNumber--;
  
  delay(500);
}
