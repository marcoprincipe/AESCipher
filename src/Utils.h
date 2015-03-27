/*
 * Utils.h
 *
 *  Created on: Mar 27, 2015
 *      Author: marcoprincipe
 */

#ifndef UTILS_H_
#define UTILS_H_

/////////////////////////////////////////////////////////////////////////////////////
// Includes used
/////////////////////////////////////////////////////////////////////////////////////

#include "types.h"

/////////////////////////////////////////////////////////////////////////////////////
// Class with utils methods
/////////////////////////////////////////////////////////////////////////////////////

class Utils {

	public:

		// Show the informed state

		static VOID PrintState(UBYTE * state);

		// Create a uword from byte array

		static UWORD UBytesToUWord(UBYTE * bytes);

		// Create a byte array from uword

		static VOID UWordToUBytes(UWORD uword, UBYTE * bytes);

		// Rotate a uword to right

		static UWORD RotateRight(UWORD uword, INT times);

		// Rotate a uword to left

		static UWORD RotateLeft(UWORD uword, INT times);

		// Get the ubyte from sbox table

		static UBYTE GetUByteFromSBox(UBYTE ubyte);

};

#endif /* UTILS_H_ */
