int MOTION_SENSOR = D3;
int LED_TIMER = D5;
int LED_FREE = D6;
int LED_OCC = D7;

int MOTION_TIMER = 60 * 1000;

void setup() {
    pinMode(MOTION_SENSOR, INPUT);

    pinMode(LED_TIMER, OUTPUT);
    pinMode(LED_FREE, OUTPUT);
    pinMode(LED_OCC, OUTPUT);
}

void loop() {
    digitalRead(MOTION_SENSOR);
    digitalWrite(LED_TIMER, LOW);

}