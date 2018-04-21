#include <CapacitiveSensor.h>

#define speaker 11

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);
CapacitiveSensor   cs_2_12 = CapacitiveSensor(2,12);
CapacitiveSensor   cs_2_13 = CapacitiveSensor(2,13);

int recording[500];

void setup()                    
{
  cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);
  
  Serial.begin(9600);
}

void loop()                    
{
  long start = millis();
  
  long total1 =  cs_2_3.capacitiveSensor(30);
  long total2 =  cs_2_4.capacitiveSensor(30);
  long total3 =  cs_2_5.capacitiveSensor(30);
  long total4 =  cs_2_6.capacitiveSensor(30);
  long total5 =  cs_2_7.capacitiveSensor(30);
  long total6 =  cs_2_8.capacitiveSensor(30);
  long total7 =  cs_2_9.capacitiveSensor(30);
  long total8 =  cs_2_10.capacitiveSensor(30);
  long total9 =  cs_2_12.capacitiveSensor(30);
  long total10 =  cs_2_13.capacitiveSensor(30);
  
  Serial.print(millis() - start);
  Serial.print("\t");

  Serial.print(total1);
  Serial.print("\t");
  Serial.print(total2);
  Serial.print("\t");
  Serial.print(total3);
  Serial.print("\t");
  Serial.print(total4);
  Serial.print("\t");
  Serial.print(total5);
  Serial.print("\t"); 
  Serial.print(total6);
  Serial.print("\t");
  Serial.print(total7);
  Serial.print("\t");
  Serial.print(total8);
  Serial.print("\t");
  Serial.print(total9);
  Serial.print("\t");
  Serial.println(total10);
  
  if (total1 > 150) tone(speaker,523);
  if (total2 > 150) tone(speaker,587);
  if (total3 > 150) tone(speaker,659);
  if (total4 > 150) tone(speaker,698);
  if (total5 > 150) tone(speaker,784);
  if (total6 > 150) tone(speaker,880);
  if (total7 > 150) tone(speaker,988);
  if (total8 > 150)
  {
    long total1 =  cs_2_3.capacitiveSensor(30);
    long total2 =  cs_2_4.capacitiveSensor(30);
    long total3 =  cs_2_5.capacitiveSensor(30);
    long total4 =  cs_2_6.capacitiveSensor(30);
    long total5 =  cs_2_7.capacitiveSensor(30);
    long total6 =  cs_2_8.capacitiveSensor(30);
    long total7 =  cs_2_9.capacitiveSensor(30);
    long total9 =  cs_2_12.capacitiveSensor(30);

    for(int i=0;i<500;i++)
    {
      if (total1 > 150)
      {
        recording[i] = 523;
        tone(speaker,523);
      }
      if (total2 > 150)
      {
        recording[i] = 587;
        tone(speaker,587);
      }
      if (total3 > 150)
      {
        recording[i] = 659;
        tone(speaker,659);
      }
      if (total4 > 150)
      {
        recording[i] = 698;
        tone(speaker,698);
      }
      if (total5 > 150)
      {
        recording[i] = 784;
        tone(speaker,784);
      }
      if (total6 > 150)
      {
        recording[i] = 880;
        tone(speaker,880);
      }
      if (total7 > 150)
      {
        recording[i] = 988;
        tone(speaker,988);
      }
      if (total1<=150  &  total2<=150  &  total3<=150 & total4<=150  &  total5<=150  &  total6<=150 &  total7<=150)
      {
        noTone(speaker);
        recording[i] = 0;
      }
      delayMicroseconds(5);
    }
  }

  if (total1<=150  &  total2<=150  &  total3<=150 & total4<=150  &  total5<=150  &  total6<=150 &  total7<=150)
    noTone(speaker);

  delayMicroseconds(5);
}
