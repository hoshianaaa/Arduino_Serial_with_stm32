
uint8_t data[5] = {121,255,65,66,67};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<3;i++)Serial.write(data[i]);
  delay(100);
  for(int i=3;i<5;i++)Serial.write(data[i]);
  delay(100);
  

}
