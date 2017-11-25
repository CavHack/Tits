//-----------------------------------------------------------------------------------------------------------
/*
  Author: Karl Whitford All Rights Reserved - Venire Labs Inc 2018 

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.
    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

//===============================================================================

#ifndef TITS_CORE_QUEUE_H
#define TITS_CORE_QUEUE_H

#include <tits/core/loadOracle.h>
#include <functional>

namespace tits {

  //Turing Parse Tape Machine.

  enum QueueType 

{

  //Null
  quantPACK,                    //Package.
  quantPASTSTATECHAIN,          //Previous state of Ledger
  quantPROOF_v,                 //Logical Validity of source.
  quantTRANSACTION_phi,         //Atomized Location
  quantSTATE_REQ                //Peer requests EPR confirm/txn data
  
  







}





}
