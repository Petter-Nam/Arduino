const unsigned char led_num[] = {2,3,4,5,6,7,8,9};
void setup() {
  // put your setup code here, to run once:
  for (unsigned char i = 0; i < 8; i++) pinMode(led_num[i], OUTPUT);
  for (unsigned char j = 0; j < 8; j++) digitalWrite(led_num[j], LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char cnt = 7;
  for (unsigned char i = 0; i < 4; i++) {
    digitalWrite(led_num[i], 1);
    digitalWrite(led_num[cnt], 1);
    delay(1000);
    digitalWrite(led_num[i], 0);
    digitalWrite(led_num[cnt], 0);
    cnt--;
  }
}
