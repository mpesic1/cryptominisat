/****************************************************************************************[Solver.h]
MiniSat -- Copyright (c) 2003-2006, Niklas Een, Niklas Sorensson
glucose -- Gilles Audemard, Laurent Simon (2008)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**************************************************************************************************/

#define RATIOREMOVECLAUSES 3
#define NBCLAUSESBEFOREREDUCE 20000
#define DYNAMICNBLEVEL
#define UPDATEVARACTIVITY
#define PERCENTAGEPERFORMREPLACE 0.02
#define PERCENTAGECLEANCLAUSES 0.01
#define MAX_CLAUSENUM_XORFIND 5000000
#define BINARY_TO_XOR_APPROX 2.0
#define FULLRESTART_MULTIPLIER 250.0
#define FULLRESTART_MULTIPLIER_MULTIPLIER 3.5
#define RESTART_TYPE_DECIDER_FROM 2
#define RESTART_TYPE_DECIDER_UNTIL 7
//#define VERBOSE_DEBUG_XOR
//#define VERBOSE_DEBUG
