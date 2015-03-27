#include <stdio.h>
#include <memory.h>

#include "Utils.h"
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

// Shift rows state

VOID AESCipher::ShiftRows(UBYTE * input, UBYTE * output) {

	UWORD uword1 = Utils::UBytesToUWord(input +  0);
	UWORD uword2 = Utils::UBytesToUWord(input +  4);
	UWORD uword3 = Utils::UBytesToUWord(input +  8);
	UWORD uword4 = Utils::UBytesToUWord(input + 12);

	uword1 = Utils::RotateRight(uword1, 0);
	uword2 = Utils::RotateRight(uword2, 1);
	uword3 = Utils::RotateRight(uword3, 2);
	uword4 = Utils::RotateRight(uword4, 3);

	Utils::UWordToUBytes(uword1, output +  0);
	Utils::UWordToUBytes(uword2, output +  4);
	Utils::UWordToUBytes(uword3, output +  8);
	Utils::UWordToUBytes(uword4, output + 12);

}

// Substitute the bytes of array

VOID AESCipher::SubBytes(UBYTE * input, UBYTE * output) {

	for (INT index = 0; index < 16; index++) {

		output[index] = Utils::GetUByteFromSBox(input[index]);

	}

}

// Class destructor

AESCipher::~AESCipher() {

}
