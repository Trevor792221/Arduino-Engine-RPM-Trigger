int highTime;    //integer for storing high time
int lowTime;     //integer for storing low time
int TargetRPM;   //integer for target RPM
int Cylinders;   //integer for number of cylinders
int cyl;         //integer for Cylinders / 2
float period;    //integer for storing period
float freq;      //storing frequency
float RPM;       //storing RPM

void setup() {
  Serial.begin(9600); //starts serial output with 9600 baud rate
  pinMode(4,INPUT);   //setting pin as input - this is your tach signal
  pinMode(13,OUTPUT); //setting pin as output
}

void loop() {
    TargetRPM=4000;            //sets target RPM
    Cylinders=6;               //number of cylinders
    cyl=Cylinders/2;           //Cylinders / 2
    highTime=pulseIn(4,HIGH);  //read high time
    lowTime=pulseIn(4,LOW);    //read low time
    period = highTime+lowTime; //period = highTime + lowTime
    freq=1000000/period;       //getting frequency with period is in Micro seconds
    RPM = (freq/cyl)*60;       //divide freq by number of cylinders in engine x 0.5

  if (RPM > TargetRPM) {
    digitalWrite(13, LOW);
  }                            //sets 13 low if RPM > TargetRPM
  else {
    digitalWrite(13, HIGH);
  }                            //sets 13 high if RPM < TargetRPM

    Serial.println("Target RPM: ");           //prints TargetRPM
    Serial.println(TargetRPM);

    Serial.println("Tach input signal: ");    //prints freq
    Serial.println(freq);

    Serial.println("Calculated RPM: ");       //prints RPM
    Serial.println(RPM);

    delay(100);                //100millisecond delay
}
