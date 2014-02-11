 //VARIABLES
 
//LEDs
const int oneLED = 6; 
const int twoLED = 2; 
const int threeLED = 3;
const int fourLED = 4;
const int fiveLED = 5;

const int startLED = 7;
const int startButton = 8; // Green Button

int velocity = 0; //speed of the level

//Booleans
boolean startGame = false;
boolean blinkBegin = false;
boolean newLevel = false;
boolean standBy = true; //First state of the game is stand by
boolean secondPart = false; //Photo sensor task
boolean thirdPart = false; //Force sensor task

//START BUTTON
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

//PHOTO SENSOR
const int sensorPin = A5;    // pin that the sensor is attached to=
int sensorValue = 0;         // the sensor value
int sensorMin = 1023;        // minimum sensor value
int sensorMax = 0; // maximum sensor value
int readValue; // Value after mapping and constraining

//FORCE SENSOR
int fsrPin = A4;     // the FSR and 10K pulldown are connected to a0
int fsrReading;     // the analog reading from the FSR resistor divider

//PRESS BUTTON SENSOR
const int pressButtonPin = 9;
int pressButtonState;

//BUXZZER
int speakerPin = 12;

int numTones = 4;
int tones[] = {261, 261, 330, 440 }; //Song to start the game
int tonesWin[] = {262,294,330,349}; //Song when you win the level


/////////********/////////********/////////********/////////********
