
int post;
const int max = 1023;
const int led1{26} , led2{28}, led3{30}, led4{32} ,led5{34}, led6{36}, led7{38};

int tab[7] = {led1, led2, led3, led4, led5, led6,led7};
void setup() {
  // put your setup code here, to run once:
  for(int i{}; i <= 7; ++i)
  {
    pinMode(tab[i], OUTPUT);
  }
}

void loop() {
  float valeur = analogRead(1);
  post = (7*valeur) / max;
  for(int i = 0 ; i <= 7; ++i)
  {
    if(i <= post)
    { 
      digitalWrite(tab[i], HIGH);
    }
    else
    { 
      digitalWrite(tab[i], LOW);
    }
  }
  


}
