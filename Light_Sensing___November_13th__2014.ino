/*
LED sensing for Laser Harp - Prototype
Destinee Fraser
November 13th, 2014

The code so far before adding the piezo buzzers to make sound. Mainly used to make LED's function as light sensors for the lasers.
*/

// Sensors are the LEDS that react to a change in light

int sensor1 = 0;        // Sensing LED connected to analog0
int sensor2 = 1;        // Sensing LED connected to analog1
int sensor3 = 2;        // Sensing LED connected to analog2
int sensor4 = 3;        // Sensing LED connected to analog3
int sensor5 = 4;        // Sensing LED connected to analog4
int sensor6 = 5;        // Sensing LED connected to analog5
                                                
int Laser1 = 3;          // LED connected to digital3
int Laser2 = 4;          // LED connected to digital4
int Laser3 = 5;          // LED connected to digital5
int Laser4 = 6;          // LED connected to digital6
int Laser5 = 7;          // LED connected to digital7
int Laser6 = 8;          // LED connected to digital8
                       
int value1 = 0;          // Stores values from sensor1
int value2 = 0;          // Stores values from sensor2
int value3 = 0;          // Stores values from sensor3
int value4 = 0;          // Stores values from sensor4
int value5 = 0;          // Stores values from sensor5
int value6 = 0;          // Stores values from sensor6

int light = 210;         // Light threshold

void setup()
{
  Serial.begin(9600);          // Serial time
  
  pinMode(Laser1, OUTPUT);     // Sets Laser1 as an output
  pinMode(Laser2, OUTPUT);     // Sets Laser2 as an output
  pinMode(Laser3, OUTPUT);     // Sets Laser3 as an output
  pinMode(Laser4, OUTPUT);     // Sets Laser4 as an output
  pinMode(Laser5, OUTPUT);     // Sets Laser5 as an output
  pinMode(Laser6, OUTPUT);     // Sets Laser6 as an output
}

void loop()
{
  value1 = analogRead(sensor1);      // Read LED sensor1
  value2 = analogRead(sensor2);      // Read LED sensor2
  value3 = analogRead(sensor3);      // Read LED sensor3
  value4 = analogRead(sensor4);      // Read LED sensor4
  value5 = analogRead(sensor5);      // Read LED sensor5
  value6 = analogRead(sensor6);      // Read LED sensor6
  
  Serial.println(value1);            // Keep track of readings
  
  if (value1 >= light) {             
      digitalWrite(Laser1, LOW);     // If the light is on, the LED sensor will turn off
    } else {                      
      digitalWrite(Laser1, HIGH);    // If the light is blocked, the LED sensor will turn on
    }
    
  if (value2 >= light) {              
      digitalWrite(Laser2, LOW);     
    } else {                      
      digitalWrite(Laser2, HIGH);    
    }   
  if (value3 >= light) {
     digitalWrite(Laser3, LOW);
   } else {
     digitalWrite(Laser3, HIGH);
     }
  if (value4 >= light) {
     digitalWrite(Laser4, LOW);
   } else {
     digitalWrite(Laser4, HIGH);
     }
  if (value5 >= light) {
     digitalWrite (Laser5, LOW);
     } else {
     digitalWrite (Laser5, HIGH);
     }
  if (value6 >= light) {
     digitalWrite (Laser6, LOW);
     } else {
     digitalWrite (Laser6, HIGH);
     }
 }
