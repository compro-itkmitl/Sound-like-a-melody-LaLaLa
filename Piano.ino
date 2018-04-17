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

}
