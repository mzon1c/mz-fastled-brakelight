// Original source of the program: http://www.pwillard.com

 
const int ledPinOne = 3; // mode 1
const int ledPinTwo = 4; // mode 2
const int ledPinThree = 5; // mode 3
const int ledPinFour = 6; // mode  4
const int modePin = 13; // mode button pin
 
int mode = 1; // Selector State (Initial state = ALL OFF)
int val = 0; // Pin 13 HIGH/LOW Status
int butState = 1; // Last Button State
int modeState = 0; // Last Mode State
boolean debug = 1; // 1 = Print Serial Enabled / 0 = disabled
 
//===============================================================
// SETUP
//===============================================================
void setup () {
 pinMode(ledPinOne, OUTPUT);
 pinMode(ledPinTwo, OUTPUT);
 pinMode(ledPinThree, OUTPUT);
 pinMode(ledPinFour, OUTPUT);
 pinMode(modePin, INPUT);
 if (debug){
 Serial.begin(9600);
 Serial.print("Initial Mode: ");
 Serial.println(mode);
 Serial.print("Setup Complete\n");
 }
}
 
//===============================================================
// Main Loop
//===============================================================
void loop() {
 
 val = digitalRead(modePin);
 
 // If we see a change in button state, increment mode value
 if (val != butState && val == HIGH){
 mode++;
 }
 
 butState = val; // Keep track of most recent button state
 
 // No need to keep setting pins *every* loop
 if (modeState != mode){
 
 // If no keys have been pressed yet don't execute
 // the switch code below
 // if (mode != 0) {
 
 switch ( mode ) {
 //case 1 is actually handled below as default
 
case 2:
 digitalWrite(ledPinOne, LOW);
 digitalWrite(ledPinTwo, HIGH);
 showState();
 break;
 case 3:
 digitalWrite(ledPinTwo, LOW);
 digitalWrite(ledPinThree, HIGH);
 showState();
 break;
  case 4:
 digitalWrite(ledPinThree, LOW);
 digitalWrite(ledPinFour, HIGH);
 showState();
 break;
 default:
 mode = 1;
 // loop back to 1 by default, seems redundant but
 // it also handles the "mode is > 3" problem
 digitalWrite(ledPinFour, LOW);
 digitalWrite(ledPinOne, HIGH);
 showState();
 break;
 } // end switch
// } // end of "if mode = 0" check
 } // end of ModeState check
 modeState = mode; // Keep track of mode recent mode value
 delay(10); // slow the loop just a bit for debounce
}
 
//===============================================================
// Subroutine
//===============================================================
void showState() {
 if (debug){
 Serial.print("Mode: ");
 Serial.println(mode);
 }
}
