#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;
const int brakePin = 2;

void setup() {
  pinMode(brakePin, INPUT_PULLUP);
  USB.begin();
  Keyboard.begin();
  delay(3000);
}

void loop() {
  if (digitalRead(brakePin) == LOW) {
    Keyboard.press(KEY_SPACE);
  } else {
    Keyboard.release(KEY_SPACE);
  }
}
