char chaine = "";
int buffer;
int boutton;
int etat;
int shift = 3;
char chaineCrypte = "";
char chaineDecrypte = "";
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  //Rouge
  pinMode(22, OUTPUT);
// Vert
pinMode(26,OUTPUT);
//Jaune
pinMode(28, OUTPUT);
//boutton poussoir
pinMode(24,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  boutton = digitalRead(24);
  if(boutton == 0) // boutton poussoir par defaut il est actif à 1
  {
    delay(300);
    if(etat== 0)
    {
      etat=1;
      //Serial.println("Etat1");
    }
  else if(etat == 1)
    {
      etat= 2;
      //Serial.println("Etat2");

    }
else if(etat == 2)
    {
      etat= 0;
      //Serial.println("Etat0");

    }   
    
  }
  while()


//lire les informations dans le buffer
buffer = Serial.available();
//Ecrire dans une chaine.
chaine = Serial.read();
//Chaine crypte
chaineCrypte = chaine + shift ;
//chaine Decrypte
chaineDecrypte = chaine - shift;

if(etat == 0)
{
  //Etat1 jaune uniquement
  digitalWrite(22, LOW);
  digitalWrite(26, LOW);
  digitalWrite(28, HIGH);
  delay(15);
  if(buffer != 00)
  {
    Serial.print(chaine);
  }
}
else if(etat == 1)
{
  //Etat2 rouge uniquement
  digitalWrite(22, HIGH);
  digitalWrite(26, LOW);
  digitalWrite(28, LOW);
  delay(15);
  if(buffer != 0)
  {
    Serial.print(chaineCrypte);
  }
  
}

else if(etat == 2)
{
  //Etat3 vert uniquement
  digitalWrite(22, LOW);
  digitalWrite(26, HIGH);
  digitalWrite(28, LOW);
  delay(15);
  if(buffer != 0)
  {
    Serial.print(chaineDecrypte);
  }
}
else
{
  digitalWrite(22, LOW);
  digitalWrite(26, LOW);
  digitalWrite(28, LOW);  
}

if(chaine == 10)
{
  Serial.println(chaine);
}
      


  
  

}
