#include <CapacitiveSensor.h>

#define speaker 11

  CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);
  CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);
  CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);
  CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);
  CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);
  CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);
  CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);

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
}
