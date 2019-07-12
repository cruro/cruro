// Copyright (c) 2009-2010 crury Nakamoto
// Copyright (c) 2009-2018 The Cruro Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_SHUTDOWN_H
#define BITCOIN_SHUTDOWN_H

void StartShutdown();
void AbortShutdown();
bool ShutdownRequested();

#endif
