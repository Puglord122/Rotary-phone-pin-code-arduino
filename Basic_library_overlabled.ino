const int input = 8; // the end number is what digital pin on the arduino the signal wire should be plugged into 
int pulse =0; // the total number of all pulses recieved so far 
int var = 0; // no idea what this is for but it makes things work so keep it
int t = 0; // t is the timer int 
int i = 0; // i is the number that is set to what is dialed 
// /\these are all of the required variables to run the phones code 
t++; 
// /\put this at the begining of the void loop to make the timer work 
pinMode(input,INPUT);
Serial.begin(9600);
// /\ put these under void setup 
if(pulse==X){  // x is what number this specific block is looking for, set it to the number you want to check being dialed plus one 
  if(t==X){ //checks the timer, set to 200-300
  pulse = 1; // resets the pulse after the number has been dialed 
  i = ; // sets i to number dialed 
  }}
// /\this block sets i to the number dialed by reading pulses, copy for each number you want to check for 
if(digitalRead(input)>var)
{
  var=1;
  pulse++; // adds to the pulse counter every time a pulse is detected 
  t=0; // resets timer every time a pulse is detected
}
if(digitalRead(input) == 0){var=0;} 
delay(5); // for stability 
// /\ this is the code that counts pulses, adds to pulse counter every time circut is completed 

if(t==X){  // if the timer reaches X the below code runs, measured in miliseconds 
  pulse = 1; // resets the pulse when timer reaches X
  t = 0; // resets the timer after it reaches X
// /\ this resets the pulse counter and timer after the time reaches a certian ammount  

// \/ THIS CODE IS FOR A PASSWORD LOCK BASED ON PULSE COUNTING FROM A ROTARY PHONE \/

if(pulse==X){ // x is what number this specific block is looking for, set it to the number you want to check being dialed plus one  
  if(t==X){ // checks timer, set to 300-400
  pulse = 1; // resets the pulse 
  A++; // A and B will always be the same if the correct code is inputed,  
  B = X; }} // set B = values to 1,2,3,4,5... if this is the first check code block then set B to 1, if second then B=2, number from there 
// /\ sets 2 variables when stuff is right 

if(A==X){
  if(B==X){
    pulse = 1;
    A = 0;
    B = 0;  // resets everything 
    // put servo control code here if thats what your doing, if not this is where whatever you want to hapen when correct sequence is inputed goes 
  }}
// detects if the correct code has been entered by checking if A is correct then B is correct 
