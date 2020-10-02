/* CONTROLLING VOLUME OF ANY VIDEO USING HAND GUESTURES WITH ULTRASONIC SENSOR */
const int trigg = 6;
const int echo=5;
int dist,distL,distR;

void setup()
{
  //put your setup code to run once:
  Serial.begin(9600);  //baudrate
  pinMode(trigg,OUTPUT);
  pinMode(echo,INPUT);
}
void calculate(int trigg,int echo)
{
  digitalWrite(trigg,LOW);
  delayMicroseconds(2);
  digitalWrite(trigg,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigg,LOW);
  time_taken=pulseIn(echo,HIGH);
  dist=time_taken*0.0342/2;
  if(dist>50)
   dist=50;
 }
 
 void loop()
 {
   //put your main code here, to run repeatedly:
   calculate(trigg,echo);
   distL=dist;
   if(dist>=13 && distL<=17)
   {
      delay(100);
      calculate(trigg,echo);
      distL=dist;
      if(distL>=13 && distL<=17)
     {
        Serial.println("leftlocked");
        while(distL<=40)
      {
          calculate(trigg,echo);
          distL=dist;
          if(distL<10)
          {
             Serial.println("Vdown");
             delay(300);
          }
           if(distL>20)
           {
             Serial.println("Vup");
             delay(300);
           }
        }
       }
     }
  delay(200);
  }
        
        
