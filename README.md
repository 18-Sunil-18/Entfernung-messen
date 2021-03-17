# Entfernung-messen
Aufgabe: Mit den Ultraschallsensor HC-SR04 und einem Arduino Mikrocontroller soll eine Entfernung gemessen und mit dem „serial-monitor“ angezeigt werden.

Material: Mikrocontroller-Board / Kabel / Breadboard / Hc-SR04 Ultraschallsensor 

Wie funktioniert der Ultraschallsensor?

Der Sensor hat vier Anschlüsse: a) 5V(+) b) GND (–) c) echo d) trigger

Die Anschlüsse 5V und GND verstehen sich von selbst, sie versorgen den Sensor mit Energie.

Der Pin „trigger“ bekommt vom Mikrocontroller-Board ein kurzes Signal (5V), wodurch eine Schallwelle vom Ultraschallsensor ausgelöst wird. Sobald die Schallwelle gegen eine Wand oder sonstigen Gegenstand stößt, wird sie reflektiert und kommt irgendwann auch wieder zum Ultraschallsensor zurück. Sobald der Sensor diese zurückgekehrte Schallwelle erkennt, sendet der Sensor auf dem „echo“ Pin ein 5V Signal an das Mikrocontroller-Board. Dieser misst dann lediglich die Zeit zwischen dem Aussenden und der Rückkehr der Schallwelle und rechnet diese Zeit dann in eine Entfernung um. Auf gehts!


Weitere Infos unter: https://funduino.de/nr-10-entfernung-messen
