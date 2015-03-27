#include <stdio.h>
#include "Utils.h"

// Show the informed state

VOID Utils::PrintState(UBYTE * state) {

	for (INT index = 0; index < 16; index += 4) {

		printf("0x%02X 0x%02X 0x%02X 0x%02X\n", state[index + 0], state[index + 1], state[index + 2], state[index + 3]);

	}

}


