# Prüfung SoSe 2023 Aufgabe 7
In diesem Repo befindet sich das Programm das in Aufgabe 7 der Ausarbeitung die Teil der Prüfung des Modul Programmierung im Sommersemester 2023 ist.

In diesem Programm wird beispielhaft die Nutzung von filestreams dargestellt um in eine Datei zu schreiben und aus dieser zu lesen. Dabei wir aus der Text aus der Text.txt Datei über einen Stream gelesen und ins Terminal geprintet. Anschließend werden die Zeichen in umgekehrter Reihenfolge in einen Buffer und dann in der Datei an den bereits vorhandenen Text angehängt.

Bei dem erstellten Programm wurde sich an dem Beispiel Programm aus der Vorlesung orientier. In diesem wurde ebenfalls eine Zeichenkette eingelsen und rückwärts in eine weitere Datei geschrieben.

## Editor 
Das Programm wurde in der WSL mit dem Editor vim geschrieben.

## Kompilation
Das Programm kann mit einem beliebigen Compiler einfach kompiliert werden. Ich habe hierfür gcc genutzt.

Beispiel: 
```
gcc main.c -o main.elf
```

## Ausführung 
Um das Programm auszuführen muss zur Anweisung das Programm auszuführen noch die zu bearbeitende Datei angehängt werden. Diese sollte 20 Zeichen enthalten. Als Beispiel kann die hier im Repo enthaltende Text.txt verwendet werden. 

Beispiel:
```
./main.elf text.txt
```
