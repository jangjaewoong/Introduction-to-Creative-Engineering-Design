#define PIN_LED 7
unsigned int toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 0);
  delay(1000);
}

void loop() {
  toggle_state();
  digitalWrite(PIN_LED, 1);
  while(1){}
}

void toggle_state(){
  for(int i = 0; i<5; i++){
    digitalWrite(PIN_LED, 1);
    delay(100);
    digitalWrite(PIN_LED, 0);
    delay(100);
  }
}
