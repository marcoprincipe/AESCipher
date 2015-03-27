/*
 * AESCipher.h
 *
 *  Created on: Mar 27, 2015
 *      Author: marcoprincipe
 */

#ifndef AESCIPHER_H_
#define AESCIPHER_H_

/////////////////////////////////////////////////////////////////////////////////////
// Includes used
/////////////////////////////////////////////////////////////////////////////////////

#include "types.h"

/////////////////////////////////////////////////////////////////////////////////////
// Abstract class to implement the AES cipher modes
/////////////////////////////////////////////////////////////////////////////////////

class AESCipher {

	public:

		// Default classe constructor

		AESCipher();

		// Class destructor

		virtual ~AESCipher();

		// Create the state

		VOID CreateState (UBYTE * input, UBYTE * output);

		// Shift rows state

		VOID ShiftRows(UBYTE * input, UBYTE * output);

		// Substitute the bytes of array

		VOID SubBytes(UBYTE * input, UBYTE * output);

};

#endif /* AESCIPHER_H_ */
