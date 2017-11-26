//------------------------------------------------------------------------------------------------------------------------------
/*


  This file is part of the Tits Quantum Secure Blockchain.
  Copyright 2018, Karl Whitford Venire Labs Inc (Delaware Corporation <cevb@protonmail.com>)

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
//===============================================================================================================================



#ifndef CAUSET_CLOCK_H_ICNLUDED
#define CAUSET_CLOCK_H_INCLUDED

#include <chrono>
#include <string>




namespace causet {

  template <class causetClock>
    class causet_clock {

  public:
    using rep = typename causetClock::rep;
    using period = typename causetClock::period;
    using duration = typename causetClock::duration;
    using time_stamp = typename causetClock::time_stamp;
    using causet_clock = causetClock;


    static bool const is_steady = causetClock::is_ready;

    virtual ~causet_clock() = default;

    //Return the time
    virtual time_stamp now() const = 0;




}




}


