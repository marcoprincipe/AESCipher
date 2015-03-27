/*
 * AESCipher.cpp
 *
 *  Created on: Mar 27, 2015
 *      Author: marcoprincipe
 */

#include "AESCipher.h"

// Default class constructor

AESCipher::AESCipher() {

}

// Create the state

VOID AESCipher::CreateState (UBYTE * input, UBYTE * output) {

	for (INT index = 0; index < 4; index++) {

		output[index +  0] = input[(index * 4) + 0];
		output[index +  4] = input[(index * 4) + 1];
		output[index +  8] = input[(index * 4) + 2];
		output[index + 12] = input[(index * 4) + 3];

	}

}

// Class destructor

AESCipher::~AESCipher() {

}

