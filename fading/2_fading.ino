const int led1 = 2;
const int temps = 10; //Temps de pause pour chaque etat
const int minLum = 20; // luminosité minimale de la led
const int maxLum = 255; // luminosité miximale de la led
const float tensionSeuil = 2.0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
}

void loop() {
  int tensionPotentio = analogRead(1);
  int voltage = (255*tensionPotentio) / 1023 ;
  while(voltage >= tensionSeuil)
  {
    for(int i = 20; i <= 255; ++i)
    {
      analogWrite(2, i);
      delay(temps);
    }
    for(int j = maxLum; j >= minLum; --j)
    {   
      analogWrite(2,j);
      delay(temps);
    }
  }
  if(voltage < tensionSeuil)
  {
    analogWrite(2,0);
  }

}
