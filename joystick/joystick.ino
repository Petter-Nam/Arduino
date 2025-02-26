#define VRX A0
#define VRY A1
#define SW 7
enum {
  LED_NORTH = 2,
  LED_WEST,
  LED_SOUTH,
  LED_EAST
};

void setup() {
    Serial.begin(115200);
    pinMode(LED_NORTH, OUTPUT);
    pinMode(LED_WEST, OUTPUT);
    pinMode(LED_EAST, OUTPUT);
    pinMode(LED_SOUTH, OUTPUT);
    pinMode(SW, INPUT_PULLUP);
}

void loop() {
    int xVal = analogRead(VRX);
    int yVal = analogRead(VRY);
    int btn = digitalRead(SW);
    digitalWrite(LED_NORTH, 0);
    digitalWrite(LED_EAST, 0);
    digitalWrite(LED_SOUTH, 0);
    digitalWrite(LED_WEST, 0);

    Serial.print("X: ");
    Serial.print(xVal);
    Serial.print("\tY: ");
    Serial.print(yVal);
    Serial.print("\tB: ");
    Serial.println(btn);
    (xVal >= 1 ||  xVal <= 1023) && (yVal == 0) && btn == 0 ? digitalWrite(LED_NORTH, 1) :
    (xVal == 0) && (yVal >= 1 || yVal <= 1022) && btn == 0? digitalWrite(LED_WEST, 1) :
    (xVal >= 0 || xVal <= 1023) && (yVal == 1023) && btn == 0? digitalWrite(LED_SOUTH, 1) : digitalWrite(LED_EAST, 1);  

    delay(100);
}

