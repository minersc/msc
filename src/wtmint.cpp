// Copyright (c) 2014-2015 The MinerSCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "wtmint.h"
#include "main.h"
#include "uint256.h"

/*
int64 GetBlockValue(){
		return 0;	
	}
*/
namespace WTMint
{
 

	int64 GetBlockValue(int diffTime,int nBits,int nHeight, int64 nFees, uint256 prevHash)
	{
			
				//Temple - diffblock coin implmented base on difficulty 
				if (nHeight==0)
					return 0;
				
				if (nHeight==1)
					return  81480000* COIN; 

    int64_t nSubsidy = 50 * COIN;
    int halvings = nHeight / 26000;

    // Force block reward to zero when right shift is undefined.
    if (halvings >= 64)
        return nFees;

    // Subsidy is cut in half every 26000 blocks which will occur approximately 6 months.
    nSubsidy >>= halvings;

    return nSubsidy + nFees;	
				
	}
}		 
				 