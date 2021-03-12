//define pin numbers
const int trigPin = 9;
const int echoPin = 10;

// define variables
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //Reads the echoPin, returns the sound wave time in microseconds
  duration = pulseIn(echoPin, HIGH);

  //calculate distance
  distance = duration*0.034/2;

  if(distance < 20){
    digitalWrite(13, HIGH);
    //delay(500);
    //digitalWrite(13, LOW);
    //delay(500);
  }
  else{
    digitalWrite(13, LOW);
  }

 
}
