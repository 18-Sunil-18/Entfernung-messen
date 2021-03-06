int trigger=7;
int echo=6;
long dauer=0;
long entfernung=0;
int piezo=5;         // Das Wort piezo ist jetzt die Zahl 5 

void setup(){
  Serial.begin (9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(piezo, OUTPUT); // Der Piezo-Lautsprecher an Pin5 soll ein Ausgang sein (Logisch, weil der ja vom Mikrokontroller-Board ja eine Spannung benötigt um zu piepsen. 
}

void loop(){
  digitalWrite(trigger, LOW);
  delay(5);
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  dauer = pulseIn(echo, HIGH);
  entfernung = (dauer/2) * 0.03432;
  if (entfernung >= 500 || entfernung <= 0)
  {
    Serial.println("Kein Messwert");
    }
    else
    {
      Serial.print(entfernung);
      Serial.println(" cm");
      }
      // Es wird eine weitere IF-Bedingung erstellt: 
      if (entfernung <= 80)  //Wenn der Wert für die Entfernung unter oder gleich 80 ist, dann ... 
      {
        digitalWrite(piezo,HIGH); // ... fange an zu piepsen.
        }
        else  // Und wenn das nicht so ist ... 
        {
          digitalWrite(piezo,LOW);  // ... dann sein leise.
          }
          delay(1000);
}
