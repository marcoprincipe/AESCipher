//============================================================================
// Name        : AESCipher.cpp
// Author      : Marco Aurelio Principe Goncalves
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "AESCipher.h"

int main() {

	UBYTE input[]  = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16};
	UBYTE output[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

	AESCipher * cipher = new AESCipher();

	cipher->CreateState(input, output);

	if (cipher) {
		delete cipher;
	}

}
