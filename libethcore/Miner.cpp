// This source code is licenced under GNU General Public License, Version 3.

#include "Miner.h"
#include "EthashAux.h"

using namespace dev;
using namespace eth;

unsigned dev::eth::Miner::s_dagLoadMode = 0;

unsigned dev::eth::Miner::s_dagLoadIndex = 0;

unsigned dev::eth::Miner::s_dagCreateDevice = 0;

uint8_t* dev::eth::Miner::s_dagInHostMemory = NULL;

bool g_logSwitchTime = false;
bool g_logJson = false;


