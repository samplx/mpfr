/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2018 Free Software Foundation, Inc.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

/* Generated by MPFR's tuneup.c, 2018-02-22, gcc 4.6.3
   on gcc22.fsffrance.org (Cavium Octeon II V0.1) with GMP 6.1.2,
   which defines CFLAGS='-O2 -pedantic -mabi=n32' */

#define MPFR_MULHIGH_TAB  \
 -1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,32,32,32,36,36,36,36,36,36,36,36,36,36,36,40, \
 40,40,44,44,44,44,44,44,44,44,44,48,48,52,52,52, \
 52,52,52,52,52,52,52,64,64,64,64,64,64,64,64,64, \
 72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72, \
 72,80,80,80,80,80,80,80,80,72,72,72,72,72,72,72, \
 72,80,80,80,80,105,105,105,105,105,105,105,105,105,105,105, \
 105,105,105,105,105,105,105,105,103,104,105,105,105,105,105,105, \
 105,105,105,105,105,105,105,117,117,117,117,117,117,117,117,117, \
 117,117,117,120,129,129,129,129,129,129,129,129,129,129,129,129, \
 129,129,129,129,129,129,129,129,141,141,141,141,141,141,141,141, \
 153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153, \
 153,153,153,153,153,153,153,153,153,153,153,165,165,165,165,165, \
 165,189,189,189,189,189,189,189,189,189,189,189,189,189,189,189, \
 189,189,189,189,189,189,189,189,189,189,213,213,213,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,213,213,213,237,237,237,237,237,237,237,237,237,237, \
 237,237,237,237,237,237,237,237,237,237,237,276,276,276,276,276, \
 276,276,276,276,276,276,276,276,276,276,276,276,276,276,276,276, \
 276,276,276,316,316,316,316,316,316,316,316,316,316,316,316,316, \
 316,316,316,316,316,316,316,316,316,316,316,316,316,316,316,316, \
 316,316,316,354,354,354,354,354,354,354,354,354,354,354,354,354, \
 354,354,354,354,354,354,354,354,354,354,354,354,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,456,456,456,456,456,456,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,856,832 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,0,0,0,0,0,0,0,0,8,8,9,10, \
 10,10,11,11,12,12,13,14,14,14,15,15,16,16,17,18, \
 18,18,19,19,20,20,21,22,22,22,23,23,24,24,25,25, \
 26,26,27,27,28,28,29,30,32,32,32,32,32,36,36,36, \
 36,36,36,36,36,36,40,40,40,40,40,42,44,44,44,44, \
 44,44,44,44,44,48,48,48,48,52,52,52,52,52,52,52, \
 64,64,64,64,64,64,64,64,64,64,64,64,64,64,68,72, \
 72,64,64,64,64,64,64,64,64,64,64,68,68,68,72,72, \
 72,72,72,72,72,72,72,72,72,72,72,72,72,80,80,80, \
 80,80,80,84,80,80,80,88,88,84,88,88,88,88,88,99, \
 99,99,105,99,99,105,105,99,99,105,105,105,105,105,105,105, \
 105,105,105,105,105,105,105,105,105,105,105,105,105,111,111,111, \
 111,111,117,117,117,117,117,117,117,117,123,123,123,123,105,105, \
 117,129,129,111,111,111,117,117,117,117,117,117,123,123,123,123, \
 123,123,123,123,129,129,129,129,129,129,129,129,129,129,135,135, \
 135,135,141,141,141,141,141,141,141,141,141,147,147,147,147,147, \
 153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153, \
 153,153,153,153,153,153,141,141,147,147,147,147,147,147,189,189, \
 189,189,189,189,189,189,189,189,189,189,189,189,189,189,189,189, \
 189,189,201,201,201,201,201,201,201,189,201,201,201,201,213,213, \
 213,213,213,189,189,189,189,189,189,189,189,189,189,189,189,189, \
 201,201,201,201,201,201,201,201,201,201,189,189,189,213,213,213, \
 213,213,213,213,213,213,213,213,201,201,201,201,201,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,213,213,213,213,213,213,213,213,213,213,213,213,213, \
 213,213,213,213,237,237,237,237,237,237,237,237,237,237,237,237, \
 237,237,237,237,237,237,237,237,237,237,237,237,237,237,237,249, \
 249,261,261,261,261,261,261,294,294,294,294,294,261,261,261,294, \
 294,294,294,294,294,294,294,294,294,294,294,294,294,294,294,294, \
 294,294,294,294,294,294,294,294,294,312,312,312,294,294,294,294, \
 294,312,312,312,312,312,312,312,312,312,312,312,312,312,312,312, \
 312,312,312,402,402,402,402,402,402,402,402,402,402,402,402,402, \
 402,402,402,402,402,402,402,402,402,402,402,402,402,402,402,402, \
 402,402,402,402,402,402,402,402,402,402,402,402,402,402,402,402, \
 402,402,402,402,402,402,402,402,402,402,402,402,402,402,402,402, \
 402,402,402,402,402,402,402,402,402,402,402,402,402,402,402,402, \
 402,402,402,402,402,402,402,402,402,402,402,402,402,402,402,402, \
 402,402,402,402,402,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,426,426,426,426,426,426,426, \
 426,426,426,426,426,426,426,426,426,456,504,426,426,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,536,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,536,536,504,536,536,536,536, \
 504,536,536,536,536,536,536,536,536,536,536,536,536,536,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,600,600,600,600,600,600,600,600,600,600, \
 600,600,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,632,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,624,632,632,632,632,632,632,632,632,632,632,632,632,632,632, \
 632,632,632,632,664,632,664,664,664,664,664,664,664,664,664,664, \
 664,664,664,664,664,664,664,696,664,696,696,696,696,696,696,696, \
 696,696,696,696,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,536,568,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,568,568,568,568,568,568,568 \
  
#define MPFR_DIVHIGH_TAB  \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*0-15*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*16-31*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*32-47*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*48-63*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*64-79*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*80-95*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59, /*96-111*/ \
 58,59,62,60,60,60,62,62,62,62,63,72,72,72,72,72, /*112-127*/ \
 72,72,72,72,72,70,72,72,72,72,72,72,72,72,78,80, /*128-143*/ \
 80,84,80,80,79,80,80,88,80,80,88,87,80,80,88,88, /*144-159*/ \
 87,88,88,88,88,88,86,88,96,88,88,88,88,88,96,104, /*160-175*/ \
 104,96,96,96,96,96,96,104,96,104,104,104,104,104,104,100, /*176-191*/ \
 104,104,102,104,102,104,104,104,104,104,104,112,104,104,112,107, /*192-207*/ \
 112,112,112,112,112,112,112,120,112,112,128,112,112,128,124,122, /*208-223*/ \
 124,114,120,122,116,128,125,128,119,120,144,120,120,123,144,128, /*224-239*/ \
 144,126,144,128,144,144,144,144,144,144,144,144,144,144,144,144, /*240-255*/ \
 144,144,144,144,144,144,141,144,144,144,144,144,144,144,144,144, /*256-271*/ \
 144,144,144,144,144,159,144,144,144,144,144,144,144,144,160,160, /*272-287*/ \
 158,159,159,160,160,159,158,158,160,160,160,160,164,160,160,160, /*288-303*/ \
 160,159,160,160,160,160,160,158,160,160,160,160,160,160,174,176, /*304-319*/ \
 176,176,175,176,176,176,176,174,176,175,176,176,176,176,176,176, /*320-335*/ \
 176,176,173,176,176,176,186,192,176,184,176,208,191,176,192,192, /*336-351*/ \
 185,207,192,208,192,191,192,207,206,208,192,207,208,208,208,208, /*352-367*/ \
 208,208,207,208,208,208,209,208,209,209,209,208,208,208,208,208, /*368-383*/ \
 208,208,208,207,208,208,216,208,208,208,208,208,208,208,208,208, /*384-399*/ \
 208,208,209,224,207,208,208,208,208,209,208,207,208,224,224,223, /*400-415*/ \
 224,216,221,222,233,216,221,224,234,224,224,224,224,240,224,232, /*416-431*/ \
 240,240,239,243,247,224,240,246,246,240,256,256,240,256,248,256, /*432-447*/ \
 250,256,256,256,240,240,256,256,256,256,252,256,256,240,253,246, /*448-463*/ \
 254,252,256,255,255,256,256,254,256,256,256,256,288,288,256,287, /*464-479*/ \
 256,288,248,256,246,288,288,256,288,288,256,288,288,288,256,282, /*480-495*/ \
 288,288,288,256,288,288,256,256,288,256,288,288,256,256,287,288, /*496-511*/ \
 285,284,288,288,288,304,287,288,288,288,288,288,282,288,288,288, /*512-527*/ \
 288,288,288,287,286,288,288,288,288,288,288,287,288,286,287,288, /*528-543*/ \
 288,288,288,288,288,288,304,288,288,287,287,286,288,288,287,288, /*544-559*/ \
 288,288,288,287,288,287,288,288,288,288,288,288,288,288,290,320, /*560-575*/ \
 318,320,304,320,302,320,304,304,305,320,305,318,318,320,320,320, /*576-591*/ \
 318,320,319,317,320,312,316,320,318,319,320,320,320,320,318,312, /*592-607*/ \
 316,312,319,318,320,328,318,318,320,320,336,320,316,318,319,319, /*608-623*/ \
 320,318,319,320,320,320,320,319,352,350,351,352,352,352,324,351, /*624-639*/ \
 352,352,351,336,351,372,371,350,378,336,336,368,372,378,351,372, /*640-655*/ \
 378,384,384,352,352,352,378,383,352,352,384,371,384,384,372,351, /*656-671*/ \
 384,352,368,384,384,372,352,382,384,378,376,384,370,383,372,384, /*672-687*/ \
 372,384,384,378,378,417,414,417,416,384,416,416,384,416,378,416, /*688-703*/ \
 417,384,372,414,416,416,384,415,414,417,416,416,415,416,416,384, /*704-719*/ \
 417,416,416,416,416,416,416,416,416,416,416,415,416,416,416,418, /*720-735*/ \
 417,417,419,416,416,417,418,418,417,416,414,416,414,414,418,416, /*736-751*/ \
 415,418,417,416,420,416,418,416,416,416,416,417,384,416,420,417, /*752-767*/ \
 414,416,418,415,416,416,416,414,417,418,413,418,416,417,416,417, /*768-783*/ \
 417,416,418,416,416,414,416,418,417,420,414,416,415,416,416,417, /*784-799*/ \
 416,418,418,414,418,416,417,416,416,416,416,416,415,415,417,415, /*800-815*/ \
 418,420,414,418,415,416,419,415,416,416,416,415,416,417,418,418, /*816-831*/ \
 420,426,420,419,431,424,426,432,431,431,426,430,432,426,432,426, /*832-847*/ \
 426,432,432,432,432,440,432,432,448,432,432,448,432,432,444,449, /*848-863*/ \
 448,464,438,474,444,444,444,440,449,473,480,441,446,480,448,474, /*864-879*/ \
 448,448,471,466,472,448,448,447,479,472,474,448,480,448,464,449, /*880-895*/ \
 468,456,467,480,466,468,474,461,455,467,473,473,466,466,468,473, /*896-911*/ \
 480,474,471,468,462,468,467,480,478,479,480,474,479,480,478,474, /*912-927*/ \
 478,474,473,480,480,480,480,480,480,480,472,471,474,480,480,474, /*928-943*/ \
 474,480,480,480,479,492,480,479,479,480,480,480,491,480,504,512, /*944-959*/ \
 493,512,492,512,513,512,497,494,488,492,512,512,499,512,507,510, /*960-975*/ \
 504,494,512,510,512,511,512,511,512,512,512,512,513,512,512,508, /*976-991*/ \
 512,504,528,512,511,512,512,513,511,504,512,512,515,504,552,552, /*992-1007*/ \
 510,576,512,512,512,508,512,576,514,512,512,576,576,570,575,576 /*1008-1023*/ \
  
#define MPFR_MUL_THRESHOLD 5 /* limbs */
#define MPFR_SQR_THRESHOLD 8 /* limbs */
#define MPFR_DIV_THRESHOLD 5 /* limbs */
#define MPFR_EXP_2_THRESHOLD 215 /* bits */
#define MPFR_EXP_THRESHOLD 12405 /* bits */
#define MPFR_SINCOS_THRESHOLD 20831 /* bits */
#define MPFR_AI_THRESHOLD1 -19332 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 2329
#define MPFR_AI_THRESHOLD3 28997
/* Tuneup completed successfully, took 6568 seconds */
