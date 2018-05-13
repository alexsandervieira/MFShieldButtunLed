
#define BTN_1 A1
#define BTN_2 A2
#define BTN_3 A3

const int LED_1 = 13;
const int LED_2 = 12;
const int LED_3 = 11;

void setup() {
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, HIGH);
    digitalWrite(LED_3, HIGH);
}

void loop() {

    if (!digitalRead(BTN_1)) {
        digitalWrite(LED_1, LOW);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
    }

    if (!digitalRead(BTN_2)) {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, LOW);
        digitalWrite(LED_3, HIGH);
    }

    if (!digitalRead(BTN_3)) {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, LOW);
    }

}
