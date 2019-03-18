/* BLINKING A LED */

// A "function" is a named block of code, that performs a specific,
// well, function. Many useful functions are already built-in to
// the Arduino; others you'll name and write yourself for your
// own purposes.

// All Arduino sketches MUST have two specific functions, named
// "setup()" and "loop()". The Arduino runs these functions
// automatically when it starts up or if you press the reset
// button. You'll typically fill these function "shells" with your
// own code. Let's get started!


// The setup() function runs once when the sketch starts.
// You'll use it for things you need to do first, or only once:

// led_pin is a variable (a name that holds a value [every time 'led_pin' is used, the computer views it as 13] )
// 'int' represents the type of value that the computer will expect to get from 'led_pin', an integer
int led_pin = 13;

void setup()
{
  // The Arduino has 13 digital input/output pins. These pins
  // can be configured as either inputs or outputs. We set this
  // up with a built-in function called pinMode().

  // The pinMode() function takes two values, which you type in
  // the parenthesis after the function name. The first value is
  // a pin number, the second value is the word INPUT or OUTPUT.
  
  // Here we'll set up pin 13 (the one connected to a LED) to be
  // an output. We're doing this because we need to send voltage
  // "out" of the Arduino to the LED.

  pinMode(led_pin, OUTPUT);
}


// After setup() finishes, the loop() function runs over and over
// again, forever (or until you turn off or reset the Arduino).
// This is usually where the bulk of your program lives:

void loop()
{
  // The 13 digital pins on your Arduino are great at inputting
  // and outputting on/off, or "digital" signals. These signals
  // will always be either 5 Volts (which we call "HIGH"), or
  // 0 Volts (which we call "LOW").

  // Because we have an LED connected to pin 13, if we make that
  // output HIGH, the LED will get voltage and light up. If we make
  // that output LOW, the LED will have no voltage and turn off.

  // digitalWrite() is the built-in function we use to make an
  // output pin HIGH or LOW. It takes two values; a pin number,
  // followed by the word HIGH or LOW:

  digitalWrite(13, HIGH);   // Turn on the LED

  // delay() is a function that pauses for a given amount of time.
  // It takes one value, the amount of time to wait, measured in
  // milliseconds. There are 1000 milliseconds in a second, so if
  // you delay(1000), it will pause for exactly one second:
  
  delay(1000);              // Wait for one second
  
  digitalWrite(13, LOW);    // Turn off the LED
  
  delay(1000);              // Wait for one second

  // All together, the above code turns the LED on, waits one
  // second, turns it off, and waits another second.

  // When the computer gets to the end of the loop() function,
  // it starts loop() over again. So this program will continue
  // blinking the LED on and off!
}
