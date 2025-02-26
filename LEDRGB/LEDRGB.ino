#define RED  9
#define GREEN 10
#define BLUE 11

void RGB(int red_value, int green_value, int blue_value) {
  analogWrite(RED, red_value);
  analogWrite(GREEN, green_value);
  analogWrite(BLUE, blue_value);
  delay(1000);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  RGB(255,0,0);
  RGB(0,255,0);
  RGB(0,0,255);
  RGB(255,255,0);
  RGB(255,0,255);
  RGB(0,255,255);
  RGB(255,255,255);
}
