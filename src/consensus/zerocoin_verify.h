// Copyright (c) 2020 The SchillingCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SchillingCoin_CONSENSUS_ZEROCOIN_VERIFY_H
#define SchillingCoin_CONSENSUS_ZEROCOIN_VERIFY_H

#include "consensus/consensus.h"
#include "main.h"
#include "script/interpreter.h"
#include "zschchain.h"

// Public coin spend
bool RecalculateSCHSupply(int nHeightStart, bool fSkipZsch = true);
bool UpdateZSCHSupply(const CBlock& block, CBlockIndex* pindex);

#endif //SchillingCoin_CONSENSUS_ZEROCOIN_VERIFY_H
