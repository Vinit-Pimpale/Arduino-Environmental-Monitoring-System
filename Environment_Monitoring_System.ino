#include <dht.h>
#include <SoftwareSerial.h>
#define BT_SERIAL_RX 10
#define BT_SERIAL_TX 11


#define DHT11_PIN 7
dht DHT;
SoftwareSerial BluetoothSerial(BT_SERIAL_RX, BT_SERIAL_TX);
int measurePin = A5;
int ledPower = 12;
unsigned int samplingTime = 280;
unsigned int deltaTime = 40;
unsigned int sleepTime = 9680;
float voMeasured = 0;
float calcVoltage = 0;
float dustDensity = 0;
const int A_out = 0;
const int D_out = 9;
int limit;
int value;
int sensorValue;
int pin8= 8;


void setup(){
  Serial.begin(9600);
  BluetoothSerial.begin(9600);
  pinMode(ledPower,OUTPUT);
  pinMode(D_out,INPUT);
  pinMode(pin8,OUTPUT);
}


void loop(){

  
  int temp = DHT.temperature;
  int hum = DHT.humidity;
  int chk = DHT.read11(DHT11_PIN);

delay(2000);
  Serial.print("Temperature:");
  Serial.println(temp);
  Serial.print("Humidity:");
  Serial.println(hum);
  BluetoothSerial.print("Temperature:");
  BluetoothSerial.println(temp);
  BluetoothSerial.print("Humidity:");
  BluetoothSerial.println(hum);


  digitalWrite(ledPower,HIGH);
  delayMicroseconds(samplingTime);
  voMeasured = analogRead(measurePin);
  delayMicroseconds(deltaTime);
  digitalWrite(ledPower,HIGH);
  delayMicroseconds(sleepTime);
  calcVoltage = voMeasured*(5.0/1024);
  dustDensity = 0.17*calcVoltage-0.1;
  if ( dustDensity < 0)
  {
    dustDensity = 0.00;
  }
  Serial.println("Dust Density:");
  Serial.println(dustDensity);
  BluetoothSerial.print("Dust Density:"); 
  BluetoothSerial.println(dustDensity); 
  

  value = analogRead(A_out);
  limit = digitalRead(D_out);
  Serial.print("CO value:");
  BluetoothSerial.print("CO Value:"); 
  Serial.println(value);
  BluetoothSerial.println(value); 
   

  sensorValue = analogRead(1);
  Serial.println(sensorValue);
  BluetoothSerial.print("Air Quality:");
  BluetoothSerial.println(sensorValue);

   if (sensorValue> 500){
  digitalWrite(pin8,HIGH);
  }
  else{
  digitalWrite(pin8,LOW);
  }
}





