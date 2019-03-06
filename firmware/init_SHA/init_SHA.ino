
#include <SHA204SWI.h>
#include <SHA204Definitions.h>

SHA204SWI sha204;
int go = 0;
int led=13;

void setup() {
  Keyboard.begin();
}

void loop() {
 if (go==0){ 
    digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
    writeconfig();
  lockconfig();
  initkeys();
  lockdata();
  Keyboard.print("Chip configured, entropy written");
  go = 1;
 digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
 delay(500);
 digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW); 
 }
  delay(2000);
}




byte derivekey(uint8_t n)
{
  uint8_t command[MAC_COUNT_LONG];
  uint8_t response[SHA204_RSP_SIZE_MAX];
  
    uint8_t ncommand[MAC_COUNT_LONG];
  
  uint8_t data[20];
  
  for (int j=0;j<20;j++){
   data[j] = j; 
  }
  
  uint8_t nresponse[SHA204_RSP_SIZE_MAX];
  
  uint8_t ret_non = sha204.nonce(&ncommand[0], &nresponse[0], 0, (uint8_t *) data);
  
  uint8_t ret_code = sha204.derive_key(&command[0], &response[0], 0, n, 0);

}

byte initkeys(){
  for (int j=0; j <= 15; j++){
          uint8_t slot = 0x01*j;
          derivekey(slot);
  }
  
}

byte lockconfig(){
  uint8_t command[MAC_COUNT_LONG];
  uint8_t response[SHA204_RSP_SIZE_MAX];
  uint8_t ret_code = sha204.lock(&command[0], &response[0], 0x80, 0x0);
}

byte lockdata(){
  uint8_t command[MAC_COUNT_LONG];
  uint8_t response[SHA204_RSP_SIZE_MAX];
  uint8_t ret_code = sha204.lock(&command[0], &response[0], 0x81, 0x0);
}

byte writeconfig()
{
  uint8_t response[SHA204_RSP_SIZE_MAX];
 uint8_t command[MAC_COUNT_LONG];
for (int j=0; j < 8; j++){
  uint8_t data[4] = {0x80 + 2*j,0x30 + 2*j, 0x80 +2*j+1, 0x30 +2*j+1};
  uint16_t address = 0x00014 + 0x0004*j;
  uint8_t ret_code = sha204.write(&command[0], &response[0], 0x00, address,&data[0],&command[0]);/*hacky, command is jsut a placeholder, not used*/
  
  for (int i=1; i<5; i++)
  {
    Serial.print(response[i], HEX);
    Serial.print(' ');
  }
    Serial.println(j);

    
  
}
  
}
