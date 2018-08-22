
const int lightSensor = 0;

void setup() {
  Serial.begin(9600);
  pinMode(lightSensor, INPUT);
  
}

void loop() {

  /// see diagram here https://maker.pro/storage/rxLovpz/rxLovpzpwzU9Nfo3lCQLFSifq9YqPH77iOAxS7uF.jpeg

  int sensorInput = analogRead(lightSensor);    //read the analog sensor and store it
  Serial.print("Light sensor reading ");
  Serial.println(sensorInput);
  delay(200);
  
}
