//---------------------------------------------------------------------------------------------
/*

  Karl Whitford - Venire Labs Inc 2018 (c) Copyright All Rights Reserved 

  
   
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
// ===================================================================================

#ifndef TITS_CORE_STOCHASTICCLOCK_H_
#define TITS_CORE_STOCHASTICCLOCK_H_

#include <tits/causet/causetclock/causet_clock.h>
#include <tits/causet/utility/causetJournal.h>
#include <tits/basics/chrono.h>
#include <string>
#include <vector>



namespace tits {


  /**Keep tabs on time spent*/
  class StochasticClock : public causet::causet_clock<NetTime>




}

public: 
virtual ~StochasticClock() = default;



virtual void run (std::vector<std::string> const& whichServers) = 0;

/*Tits server time*/

virtual time_stamp closeTime() const = 0;

virtual void adjustCloseTime (std::chrono::duration<std::int32_t> amount) = 0;

virtual std::chrono::duration<std::int32_t>
nowOffset() const = 0;





