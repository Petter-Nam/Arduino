const unsigned int led[] = {3,5,6};
void setup() {

}

void loop() {
  for (int n = 0; n <= 2; n++) {

    for (int t_high = 0; t_high <= 255; t_high++) {
      analogWrite(led[n], t_high);
      delay(20);
    }
      analogWrite(led[n], 0);
  }
}