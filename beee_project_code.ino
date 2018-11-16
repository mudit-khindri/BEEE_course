
int sensorPin = 2          // Set up a PIR sensor pin
int swPin = 8          // Set up a PIR sensor pin
int pirState = LOW
int val = 0;
int val1 = 0;
int buzzerPin = 3;           //Set up a Relay pin

void setup() {
              pinMode(sensorPin, INPUT);
              pinMode(swPin, INPUT);
              pinMode(relayPin, OUTPUT);
              Serial.begin(9600)
              }

                    void loop() 
                    {
                    val = digitalRead(sensorPin);  // read input value
                    val1 = digitalRead(swPin);  // read input value
                    
                    if (val1 == HIGH) 
                    {
                            if (val == HIGH) 
                            {            // check if the input is HIGH
                            digitalWrite(buzzerPin, HIGH);  // turn Relay ON
                            delay(3000);
                             }
                    
                    } 
                    else
                    {
                    digitalWrite(relayPin, LOW); // turn Relay OFF
                    delay(150)
                    }
                    }
