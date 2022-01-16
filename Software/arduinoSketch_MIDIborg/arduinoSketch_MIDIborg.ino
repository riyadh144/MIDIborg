// #################### Libraries ####################
// MCP Port expanders
#include <MCP23S17.h>

// Midi USB for instrument emulation


// #################### Constants ######################

#define pin_bankInputs 4
#define numberOfInputBanks 6
#define numberOfInputs 96

// ##################### STRUCT ########################

struct mcp_inputs
{
  bool point[numberOfInputs];
  MCP bank[numberOfInputBanks];
  
};

// #################### Type Def #######################

typedef struct mcp_inputs t_Inputs;

// ############### Variable Definition #################

t_Inputs input;

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
