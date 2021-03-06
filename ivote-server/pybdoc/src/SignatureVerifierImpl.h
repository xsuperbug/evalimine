/*
 * Copyright: Eesti Vabariigi Valimiskomisjon
 * (Estonian National Electoral Committee), www.vvk.ee
 * Derived work from libdicidocpp library
 * https://svn.eesti.ee/projektid/idkaart_public/trunk/libdigidocpp/
 * Written in 2011-2014 by Cybernetica AS, www.cyber.ee
 *
 * This work is licensed under the Creative Commons
 * Attribution-NonCommercial-NoDerivs 3.0 Unported License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-nd/3.0/.
 * */

#pragma once

#include "BDoc.h"
#include <string>

class SignatureVerifierImpl {

	public:

		SignatureVerifierImpl();
		~SignatureVerifierImpl();

		bool isSignatureOk();

		bdoc::Buffer pubkey;
		bdoc::Buffer signature;
		bdoc::Buffer hash;
		std::string error;
};
