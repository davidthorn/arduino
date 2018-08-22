
const int tempSenspor = 0;

int sensorInput;

int temp;
void setup() {
  Serial.begin(9600);
  pinMode(tempSenspor, INPUT);
  
}

void loop() {

  sensorInput = analogRead(0);    //read the analog sensor and store it
  float mv = ( sensorInput/1024.0)*5000; 
  float cel = mv/10;
  float farh = (cel*9)/5 + 32;
  
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);
  
}
