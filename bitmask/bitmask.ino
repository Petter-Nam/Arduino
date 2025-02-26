const unsigned char led[] = {2,3,4,5,6,7,8,9};
unsigned char cnt = 0;
void setup() {
  // put your setup code here, to run once:
   
}

void loop() {
  // put your main code here, to run repeatedly:
  for (unsigned char x = 0; x <= 7; x++) {
    for (unsigned char x = 0; x <= 7; x++) {
      digitalWrite(led[x], LOW);
    }
    for (unsigned char x = 0; x <= 7; x++) {
      digitalWrite(led[x], 0x01 & (cnt >> x));
    } 
  }
  ++cnt;
  delay(1000);
}
