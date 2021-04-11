#define CLK 12 //It is D6
#define DIO 13 //It is D7 const 
int ProxSensor1=5;// d1 const 
int ProxSensor2=4;// d2 const 
int relay = 2; //d4 = time2
//time1-time2> 0 : Enter
//time1-tim2 <0 : Exit
int wait = 0; 
int count = 0; 
int i = 0;

void setup()
{
pinMode(LED_BUILTIN, OUTPUT);          // Pin 13 has an LED connected on most
Arduino boards:
pinMode(ProxSensor1,INPUT);
pinMode(ProxSensor2,INPUT);//Pin 2 is connected to the output of proximity sensor pinMode(relay, OUTPUT); // initialize pin as OUTPUT
Serial.begin(9600);
}
void loop()
{
long state = digitalRead(ProxSensor1);
// Serial.println(state);
long state2 = digitalRead(ProxSensor2);
long time1 = 0;
long time2 = 0; 
if(state == LOW && wait == 0)      //Check the sensor output
{
digitalWrite(LED_BUILTIN, LOW); 
time1 = millis();// set the LED on 
Serial.print("1 "); 
Serial.println(time1);
wait = 1;
}
if(state == LOW && wait == 2)      //Check the sensor output
{
digitalWrite(LED_BUILTIN, LOW);   // set the LED on 
time2 = millis();
Serial.print("2 ");
Serial.println(time2); 
count--; 
Serial.print("Exit"); 
Serial.println(count); 
wait = 0; 
delay(1000);
}
/*else
{
digitalWrite(LED_BUILTIN, HIGH);    // set the LED off
Serial.println(0)
delay(500);
}*/
if(state2 == LOW && wait == 0)      //Check the sensor output
{
digitalWrite(LED_BUILTIN, LOW);   // set the LED on 
time2 = millis();
Serial.print("2 ");
Serial.println(time2);
wait = 2;
}
if(state2 == LOW && wait == 1)      //Check the sensor output
{
digitalWrite(LED_BUILTIN, LOW);   // set the LED on 
time2 = millis();
Serial.print("1 ");
Serial.println(time2); 
count++; 
Serial.print("Enter"); 
Serial.println(count); 
wait = 0; 
delay(1000);
}
/*else
{
digitalWrite(LED_BUILTIN, HIGH);    // set the LED off
Serial.println(0);
delay(500);
}*/
/*
if(time1-time2 > 0)
{
Serial.print("Enter"); 
count++; 
Serial.println(count);
}
if(time1-time2 < 0)
{
Serial.print("Exit"); 
Serial.println(count); 
count--;
}*/
if(count == -1) 
count = 0; 
if(count > 0)
 	digitalWrite(relay, HIGH); // turn relay on
else
 	digitalWrite(relay, LOW); // turn relay off

//display.showNumberDec(i++);
if (i > 9999)
	i=0;
} 
