/* Programm: LED_Taster_Pulldown
    Version 1.0 25.9.2020
    Programmierer J.Schmidt

    Hardware: Arduion; Taster Pulldown an Pin 10, LED an Pin 2
*/

#define LED 2   //LED
#define Taster 10  //Pulldown

boolean eingabe = 0;  //Initialisierung der Variable, der Grundlegende Ausgangszustand

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Taster, INPUT);
  Serial.begin(9600); //Zur Kontrolle

}

void loop()
{
  eingabe = digitalRead(Taster);  //Abfrage des Tasters
  digitalWrite(LED, eingabe);      //Ausgabe an die LED

  if ( eingabe == 1)
  {
    Serial.println("LED ein");
    delay(150);

  }

  else Serial.println("LED aus");
  delay(150);

}
