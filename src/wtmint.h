// Copyright (c) 2015-2015 The IOBond developers
// Copyright (c) 2014-2015 The WTMint developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


 

#ifndef WTMINT_H
#define WTMINT_H

 
#define TO_GENESIS_BLOCK		false

#define CLIENT_VERSION_MAJOR       2
#define CLIENT_VERSION_MINOR       8
#define CLIENT_VERSION_REVISION    7
#define CLIENT_VERSION_BUILD       1

#define WTMINT_MAX_MONEY			  8400000000000000
                                 
#define WTMINT_MAX_SEND				  8400000000000000
								   
#define WTMINT_COINBASE_MATURITY 2


/*
2015-12-08 08:58:48 block.nTime = 1449564219
2015-12-08 08:58:48 block.nNonce = 2581412
2015-12-08 08:58:48 block.GetHash = 20a0d6d876d29d8092772ff24f4ede293a946109bb915f550d24dfd5bbd359f2


*/
//#define WTMINT_GENESIS_BLOCK	"0xc741436d354a9fb337fbd79e4b2750732571f00e8b78d04493f9e9283cf4ad0b" //keep the same length

#define WTMINT_GENESIS_BLOCK	"0x20a0d6d876d29d8092772ff24f4ede293a946109bb915f550d24dfd5bbd359f2"
#define WTMINT_pszTimestamp		"Miner's Coin"
#define WTMINT_scriptPubKey		"04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f"

#define WTMINT_BLOCK_nTime			1449564219
#define WTMINT_BLOCK_nNonce			2581412
#define WTMINT_BLOCK_hashMerkleRoot	"0x6e83a8f3af53069575a5de167bc1d24c893adb35d186bdec3921148c8bcb05a2"

#define WTMINT_BLOCK_nTargetTimespan 14400  //4 * 60 * 60 // : every 4 hours
#define WTMINT_BLOCK_nTargetSpacing  600 // : 10 minutes


//Magic Header
#define WTMINT_MAGIC_1	0x20
#define WTMINT_MAGIC_2	0x15
#define WTMINT_MAGIC_3	0x12
#define WTMINT_MAGIC_4	0x21

//Wallet starting letter //https://en.bitcoin.it/wiki/List_of_address_prefixes
#define WTMINT_PUBKEY_ADDRESS 50 // Dec.

#define WTMINT_RPC_PORT 12121
#define WTMINT_SERVER_PORT 12123
#define WTMINT_RPC_SUBJECT "MinersCoin"

#define WTMINT_AUX_ChainID 0x0089  //Hex
#define WTMINT_AUX_StartBlock 3
#define WTMINT_KGW_StartBlock 6000


#define WTMINT_CHKPNT_LAST_TIMESTAMP 1414056601    // * UNIX timestamp of last checkpoint block
#define WTMINT_CHKPNT_TX_QUANTITY 154911		// * total number of transactions between genesis and last checkpoint  (the tx=... number in the SetBestChain debug.log lines)
#define WTMINT_CHKPNT_ESTIMATED_TX 1500   // * estimated number of transactions per day after checkpoint
 
////////////////////////////////////////////
#include "uint256.h"
#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <map>

//////////////////////////////////////
typedef long long  int64;
typedef unsigned long long  uint64;
typedef std::map<int, uint256> MapCheckpoints;


//////////////////////////////////////
		
class uint256;


/** Block-chain checkpoints are compiled-in sanity checks.
 * They are updated every release or three.
 
 mapCheckpoints = boost::assign::map_list_of

        (  0, uint256("0xc741436d354a9fb337fbd79e4b2750732571f00e8b78d04493f9e9283cf4ad0b"))
		(  100, uint256("0xf9360dcc30cb9cea913c1dfe03989560a466c8c6faa5948cd839637f3d5f12a0"))
		(  1000, uint256("0b6c05a423705b97c3ea30279506a1afdd583077f7650d02641d2a3a37a8ea15"))
		(  10000, uint256("973266a50b103d7057acbd07d49ca2b6f981fe534dae23438828221a65188639"))
		(  100000, uint256("95dc645ee15c791b94ec4b7076d7e3922325878767921c87f154b0327a6c7c7a"))
		(  133133, uint256("2f41bc8e8d5be6952d8d49f08c5cc2015d2b9a3f1c160116ef10f1a63355abbc"))
        (  150879, uint256("abda2abf9abc0bd24e9827c5e3795e254ad1dcfaf307a4386c5b20fedc3c2df9"))
	;
 
 */
namespace WTMint
{
   
    int64 GetBlockValue(int diffTime,int nBits,int nHeight, int64 nFees, uint256 prevHash);
	
	static MapCheckpoints  mapCheckpoints = boost::assign::map_list_of

        (  0, uint256("0x062550537871c387faaa5cd91bb8a2cf4b67d3a4ec816799ecc1f5cb7fd54bcc"))
		
	;

}



#endif

