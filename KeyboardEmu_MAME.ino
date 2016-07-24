/************************************************
 * Name: KeyboardEmu_MAME
 * Author: Edward Zamora
 * Version: 1.1
 * Arduino Version: 1.6.8
 * Last Updated: 7/21/2016
 * Description: 
 * Short script that converts joystick/button inputs
 * input keyboard presses. Currently uses some 
 * version of MAME standards but needs to be updated
 * to latest version. Single player into. Must be 
 * used on Arduino Leonardo or Micro.
 */

#include <Keyboard.h>

void setup() {  
  Keyboard.begin();  

  // Array that stores pin locations for inputs
  int buttons [] = {2,3,4,5,6,7,8,9,14,15};
  int numInputs = sizeof(buttons);

  // Use loop for cleaner code
  for (int i=0; i <numInputs; i++)
  {
    pinMode(buttons[i],INPUT_PULLUP);
  }  
  //Joystick and buttons pin allocations  
 /*  pinMode(2, INPUT_PULLUP); //Joystick Up  
  pinMode(3, INPUT_PULLUP); //Joystick Down  
  pinMode(4, INPUT_PULLUP); //Joystick Left  
  pinMode(5, INPUT_PULLUP); //Joystick Right  
  pinMode(6, INPUT_PULLUP); //Button 1  
  pinMode(7, INPUT_PULLUP); //Button 2  
  pinMode(8, INPUT_PULLUP); //Button 3  
  pinMode(9, INPUT_PULLUP); //Button 4  
  pinMode(14, INPUT_PULLUP); //Coin  
  pinMode(15, INPUT_PULLUP); //Start  
  */
}  
  
  
void loop() 
{  
  // Button labels:  
  int joystickUp = digitalRead(5); 
  int joystickDown = digitalRead(4);
  int joystickLeft = digitalRead(2);  
  int joystickRight = digitalRead(3);  
  int button1 = digitalRead(6);  
  int button2 = digitalRead(7);  
  int button3 = digitalRead(8);  
  int button4 = digitalRead(9);  
  int coin = digitalRead(14);  
  int start = digitalRead(15);  
  // delay(10);
  
// Joystick Up - Arrow Up Key
  if (joystickUp == LOW)  
  {
    Keyboard.press(218);
  }
  else 
  {
    Keyboard.release(218);
  }

  // Joystick Down - Arrow Down Key
  if (joystickDown == LOW) 
  {
    Keyboard.press(217);
  }
  else 
  {
    Keyboard.release(217);
  }

  // Joystick Left - Arrow Left Key
  if (joystickLeft == LOW) {
    Keyboard.press(216);
  }
  else {
    Keyboard.release(216);
  }

  // Joystick Right - Arrow Right Key
  if (joystickRight == LOW) {
    Keyboard.press(215);
  }
  else {
    Keyboard.release(215);
  }

  // Button 1 - Left CTRL
  if (button1 == LOW) {
    Keyboard.press(128);
  }
  else {
    Keyboard.release(128);
  }

  // Button 2 - Left ALT
  if (button2 == LOW) {
    Keyboard.press(130);
  }
  else {
    Keyboard.release(130);
  }

  // Button 3 - Left CTRL
  if (button3 == LOW) {
    Keyboard.press(32);
  }
  else {
    Keyboard.release(32);
  }

  // Button 4 - Left CTRL
  if (button4 == LOW) {
    Keyboard.press(129);
  }
  else {
    Keyboard.release(129);
  }

  // Coin - 5
  if (coin == LOW) {
    Keyboard.press(53);
  }
  else {
    Keyboard.release(53);
  }

  // Start - 1
  if (start == LOW) {
    Keyboard.press(49);
  }
  else {
    Keyboard.release(49);
  }
  
}
