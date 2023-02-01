// PWM PINS
#define pumpPin 12
#define vacuumPin 13
#define valvePin 14

// BUTTON PINS
#define inflateButton 15// inflate
#define deflateButton 0// deflate
#define emergencyStop 2// Interrupt pin for light demo
#define autoSwitch 4   // Interrupt - switch auto or manual

// SENSOR ANALOG INPUT
#define FSRPin 25   // FSR data
#define PressurePin 26// Pressure sensor

// LED OUTPUT
#define manualLEDPin 32
#define forceLEDPin 33

// === OTHER VARIABLES ===
volatile byte manualOn = HIGH;
volatile byte emergency = LOW;
int Vin = 5;

// MANUAL CONTROLS
volatile byte inflate;
volatile byte deflate;

// MOTOR SPEEDS (PWM)
int highSpd = 255;
int lowSpd = 200;

// FSR THRESHOLDS
float zeroForceLow = 1.3; // Lower bound of no force range (Volts)
float zeroForceHigh = 1.44; // Higher bound of no force range (Volts)
float motorSpdThld = 2;    // Swithching point between high and low speed (Volts) was 1.8

// PRESSURE SENSOR CUTOFF
float overInflate = 3.23; // Pressure in balloon too much

// PRESSURE SENSOR VARIABLES
// -> pressure data sheet equation => vout = vs (P*0.018+0.04) +/- pressure error * tempfactor * 0.018 * vs
//    -> vs = 5.0 +/- 0.25 vdc
//    -> pressure error +/- 1.25kpa
//    -> tempfactor = 1 for temp range of 0 to 85 deg c
float vMax = 5.25;
double pressVal;
float pErr = 1.25;

// TIMING VARIABLES
double prevInflate = 0;
double prevDeflate = 0;
double prevChange = 0;
const int debounce = 500; // In milliseconds


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
