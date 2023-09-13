#define PIN_LED 13
unsigned int count, toggle;
void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.print("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.print(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, !toggle);
  delay(1000);

}

int toggle_state(int toggle){
  toggle = !toggle;
  return toggle;
}
