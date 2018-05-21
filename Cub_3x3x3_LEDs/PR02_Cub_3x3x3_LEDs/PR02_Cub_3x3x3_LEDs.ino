/**********************************************************************************
**                                                                               **
**                              CUB_3X3X3                                        **
**                                                                               **
** MOURAD EL FILALI                                                              **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT); 
pinMode(10, OUTPUT); 
pinMode(11, OUTPUT); 
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty

{
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);

for (int i=0; i <= 3; i++) // run loop 6 times
{
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
delay(300);
digitalWrite(3, LOW);
digitalWrite(5, LOW);
digitalWrite(2, HIGH);
digitalWrite(6, HIGH);
delay(300);
digitalWrite(2, LOW);
digitalWrite(6, LOW);
digitalWrite(1, HIGH);
digitalWrite(7, HIGH);
delay(300);
digitalWrite(1, LOW);
digitalWrite(7, LOW);
digitalWrite(0, HIGH);
digitalWrite(8, HIGH);
delay(300);
digitalWrite(0, LOW);
digitalWrite(8, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
delay(300);
digitalWrite(3, LOW);
digitalWrite(5, LOW);
digitalWrite(2, HIGH);
digitalWrite(6, HIGH);
delay(300);
digitalWrite(2, LOW);
digitalWrite(6, LOW);
digitalWrite(1, HIGH);
digitalWrite(7, HIGH);
delay(300);
digitalWrite(1, LOW);
digitalWrite(7, LOW);
digitalWrite(0, HIGH);
digitalWrite(8, HIGH);
delay(300);
digitalWrite(0, LOW);
digitalWrite(8, LOW);

}

for (int i=0; i <= 3; i++) // run loop 4 times
{
byte pins[] = {0, 1, 2, 5, 8, 7, 6, 3};
// above array of 8
{
for (int i=0; i <= 3; i++) // run loop 3 times
{
byte level[] = {11, 10, 9};
for(int i=0; i<=2; i++) // loop equals number
{ // of values in array
digitalWrite(level[i], HIGH); // write index value

for(int i=0; i<=7; i++) // loop equals number
{ // of values in array
digitalWrite(pins[i], HIGH); // write index value
delay(200); // pause 200ms
digitalWrite(pins[i], LOW); // write index value
}
digitalWrite(level[i], LOW); // write index value

}
}
}

digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);

for (int i=0; i <= 4; i++) // run loop 4 times
{

digitalWrite(0, HIGH);
delay(300);

digitalWrite(4, HIGH);
delay(300);

digitalWrite(8, HIGH);
delay(300);
digitalWrite(4, LOW);
delay(400);

digitalWrite(6, HIGH);
delay(300);

digitalWrite(4, HIGH);
delay(300);
digitalWrite(2, HIGH);
delay(300);
digitalWrite(4, LOW);
delay(400);


digitalWrite(3, HIGH);
delay(300);

digitalWrite(4, HIGH);
delay(300);

digitalWrite(5, HIGH);
delay(300);
digitalWrite(4, LOW);
delay(400);


digitalWrite(7, HIGH);
delay(300);

digitalWrite(4, HIGH);
delay(300);

digitalWrite(1, HIGH);
delay(300);


digitalWrite(0, LOW);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
delay(200);
}

digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);

for (int i=0; i <= 3; i++) // run loop 5 times
{
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);

digitalWrite(4, HIGH);
delay(500);
digitalWrite(1, HIGH);
digitalWrite(3, HIGH);
digitalWrite(5, HIGH);
digitalWrite(7, HIGH);
delay(200);
digitalWrite(9, HIGH);
digitalWrite(11, HIGH);
delay(200);
digitalWrite(0, HIGH);
digitalWrite(2, HIGH);
digitalWrite(6, HIGH);
digitalWrite(8, HIGH);
delay(500);
// all off
digitalWrite(0, LOW);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);

}
for (int i=0; i <= 4; i++) // run loop 4 times
{
digitalWrite(5, LOW);
digitalWrite(8, LOW);

digitalWrite(0, HIGH);
digitalWrite(1, HIGH);
digitalWrite(2, HIGH);
delay(300);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(6, HIGH);
delay(300);
digitalWrite(3, LOW);
digitalWrite(0, LOW);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
delay(300);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(2, HIGH);
digitalWrite(5, HIGH);
delay(300);
}
}
}




//********** Funcions *************************************************************

