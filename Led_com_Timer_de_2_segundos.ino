#define LED1 40
#define LED2 38
#define LED3 36

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
}

void loop() {
  digitalWrite(LED3,HIGH);
  delay(2000);
  digitalWrite(LED3,LOW);
  digitalWrite(LED2,HIGH);
  delay(2000);
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,HIGH);
  delay(2000);
  digitalWrite(LED1,LOW);
}
