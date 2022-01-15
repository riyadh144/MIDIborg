// #################### Libraries ####################

#include <MCP23S17.h>

// #################### Constants ######################

// ##################### STRUCT ########################



// ############### Variable Definition #################

MCP23S17 Bank1(&SPI, chipSelect, 0);
MCP23S17 Bank2(&SPI, chipSelect, 1);

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
