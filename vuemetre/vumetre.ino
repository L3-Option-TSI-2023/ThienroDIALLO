
int post;
const int max = 1023;
const int led1{26};
const int led2{28};
const int led3{30};
const int led4{32};
const int led5{34};
const int led6{36};
const int led7{38};
//Je déclare un tableau pour stocker mes differentes leds
int tab[7] = {led1, led2, led3, led4, led5, led6,led7};
void setup() {
  // put your setup code here, to run once:
  for(int i{}; i < 7; ++i)
  {
    pinMode(tab[i], OUTPUT);
  }
}

void loop() {
  // on lit la valeur du poteniomètre qui est sur la bronche numero 1.
  float valeur = analogRead(1);
  
  post = (7*valeur) / max;
  for(int i = 0 ; i < 7; ++i)
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
