#pragma once
#include "xdr/Dpchain-ledger-entries.h"
#include "xdr/Dpchain-ledger.h"
#include "xdr/Dpchain-overlay.h"
#include "xdr/Dpchain-transaction.h"
#include "xdr/Dpchain-types.h"

namespace dpchain
{

std::string xdr_printer(const PublicKey& pk);
}
