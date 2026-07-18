/*
 * Police lights simulation for ESP32 using Arduino framework.
 * Sets two GPIO pins as outputs and alternates them on and off to simulate police lights.
 */

#include <Arduino.h>

#define LED_PIN_1 16
#define LED_PIN_2 18
#define DELAY 500

void setup(void)
{
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
}


void loop(void)
{
  //Phase 1
  digitalWrite(LED_PIN_1, HIGH);
  digitalWrite(LED_PIN_2, LOW);
  delay(DELAY);
  
  //Phase 2
  digitalWrite(LED_PIN_1, LOW);
  digitalWrite(LED_PIN_2, HIGH);
  delay(DELAY);
} 