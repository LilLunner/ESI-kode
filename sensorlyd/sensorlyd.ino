int lys=3;

void setup() {
    pinMode(lys, OUTPUT);

}

void loop() {
    digitalWrite(lys, HIGH);
    delay(1000);
    digitalWrite(lys, LOW);
    delay(1000);
}