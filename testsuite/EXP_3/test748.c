
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x23 = -1;
int64_t x25 = -1LL;
volatile int32_t x27 = 69447;
volatile int64_t t2 = 348434602143LL;
uint8_t x34 = UINT8_MAX;
volatile int32_t t3 = -1;
volatile int8_t x37 = -1;
int64_t x38 = INT64_MAX;
int32_t x39 = INT32_MAX;
volatile uint64_t t5 = 7790525LLU;
int32_t x53 = INT32_MIN;
uint16_t x81 = 2452U;
int16_t x82 = 1022;
volatile int8_t x93 = 1;
int32_t t13 = -212734;
uint32_t x146 = 101483U;
volatile int64_t x165 = INT64_MIN;
volatile uint64_t x186 = UINT64_MAX;
static uint16_t x212 = UINT16_MAX;
int64_t x214 = INT64_MIN;
static int16_t x216 = INT16_MIN;
int32_t x225 = INT32_MAX;
volatile uint64_t t24 = 93692LLU;
int16_t x235 = INT16_MIN;
int32_t x236 = INT32_MIN;
int32_t t25 = 0;
int32_t x247 = INT32_MIN;
uint16_t x250 = 14U;
int64_t x251 = -1LL;
int8_t x252 = INT8_MAX;
int64_t t27 = 21847540926LL;
volatile int16_t x265 = -1;
static volatile int64_t t29 = INT64_MAX;
static volatile int64_t x283 = INT64_MIN;
uint64_t x284 = UINT64_MAX;
volatile uint64_t t32 = 23406645005356LLU;
static int16_t x289 = -1;
uint32_t x293 = 340290150U;
int32_t t35 = -1091007;
static int16_t x303 = -1736;
static volatile int32_t t36 = 241175816;
volatile uint32_t x339 = 8U;
volatile uint64_t t40 = 176847514070LLU;
static volatile int64_t x348 = INT64_MIN;
static int32_t t42 = -10534443;
uint16_t x380 = 13U;
volatile uint8_t x390 = 30U;
int64_t x406 = INT64_MIN;
uint64_t x423 = 388240676905550786LLU;
int64_t x429 = INT64_MAX;
int64_t x463 = INT64_MIN;
uint64_t x489 = 135871LLU;
uint64_t t56 = 28923LLU;
static uint16_t x499 = UINT16_MAX;
int32_t x500 = INT32_MIN;
volatile int32_t t57 = -395385041;
volatile uint8_t x507 = 75U;
static volatile int64_t t59 = -9567444705512LL;
int64_t t60 = 2028449LL;
static int16_t x556 = INT16_MIN;
volatile uint8_t x570 = UINT8_MAX;
volatile uint32_t x583 = 454309U;
volatile int32_t x584 = -246632401;
volatile int32_t x609 = INT32_MIN;
int16_t x647 = 0;
int16_t x648 = INT16_MIN;
static int64_t x653 = 0LL;
static int16_t x654 = -2041;
static volatile int16_t x658 = INT16_MIN;
volatile int32_t t73 = 7823534;
static volatile int64_t x669 = -1LL;
int32_t x685 = INT32_MAX;
uint64_t x702 = 329589051879758191LLU;
static volatile uint64_t x714 = 562256210689321492LLU;
int64_t x715 = INT64_MIN;
static uint8_t x733 = 3U;
int32_t x734 = 1;
static uint32_t x735 = 1851U;
int8_t x737 = 1;
static int32_t t81 = 0;
int16_t x747 = -1;
volatile int16_t x752 = INT16_MAX;
static int64_t t85 = -3455104646LL;
int16_t x791 = INT16_MAX;
static int32_t t86 = 19;
uint64_t x794 = UINT64_MAX;
volatile int64_t x796 = INT64_MIN;
static int16_t x801 = 673;
int32_t x817 = INT32_MIN;
static volatile int8_t x820 = -5;
uint64_t t91 = 534070726370281138LLU;
uint8_t x849 = 12U;
volatile int16_t x850 = -63;
uint16_t x858 = 8U;
static int32_t t97 = 6;
static uint16_t x913 = 0U;
uint64_t t99 = 11LLU;
uint32_t x948 = UINT32_MAX;
int8_t x954 = -7;
static volatile uint64_t x968 = 1024629215983982725LLU;
int8_t x978 = 7;
uint32_t x1011 = 112389U;
int32_t x1031 = INT32_MIN;
volatile uint64_t x1049 = 42041549LLU;
int16_t x1051 = -15538;
int16_t x1062 = 2404;
int16_t x1064 = 146;
static int64_t x1076 = INT64_MIN;
int32_t t116 = 371576610;
static int8_t x1095 = INT8_MIN;
volatile int64_t t118 = 106LL;
int16_t x1101 = 63;
int32_t t121 = 550311;
int8_t x1131 = -1;
volatile uint8_t x1142 = 4U;
static int16_t x1192 = INT16_MIN;
uint32_t t132 = 675840817U;
volatile int64_t t133 = 1542956821046LL;
static int8_t x1225 = INT8_MIN;
static int8_t x1249 = INT8_MIN;
static volatile uint16_t x1267 = 931U;
volatile uint16_t x1277 = 2U;
static int64_t x1281 = 58538035498198LL;
static uint32_t t144 = 4U;
static uint32_t x1310 = UINT32_MAX;
volatile uint64_t t145 = 122345299547409LLU;
static int16_t x1323 = 7;
static uint16_t x1327 = UINT16_MAX;
int64_t x1328 = -362973530402LL;
uint16_t x1337 = 55U;
int64_t x1341 = INT64_MAX;
uint32_t x1359 = 857051802U;
int32_t x1360 = INT32_MIN;
uint64_t x1372 = 21576681599LLU;
volatile int64_t x1390 = -1LL;
static volatile uint64_t t156 = 139135796362377LLU;
int8_t x1401 = -1;
int8_t x1403 = INT8_MIN;
static volatile int64_t x1406 = INT64_MAX;
volatile int64_t t158 = 0LL;
volatile int16_t x1411 = -3;
volatile uint64_t t159 = 4503LLU;
int8_t x1413 = INT8_MAX;
int8_t x1415 = INT8_MIN;
int16_t x1416 = 424;
static int32_t x1426 = 16039641;
uint32_t x1427 = UINT32_MAX;
int64_t t161 = 17430694520317LL;
uint32_t x1429 = UINT32_MAX;
int64_t x1454 = 1275462791781145362LL;
uint32_t x1455 = UINT32_MAX;
int16_t x1468 = INT16_MAX;
uint32_t x1495 = 621657U;
int64_t x1504 = INT64_MIN;
volatile int16_t x1509 = 12;
volatile uint32_t t169 = 68359477U;
volatile uint64_t x1526 = UINT64_MAX;
int32_t x1527 = INT32_MAX;
volatile uint64_t t171 = 6761828105LLU;
int64_t x1539 = -1LL;
volatile uint8_t x1555 = 12U;
static uint8_t x1558 = UINT8_MAX;
volatile int32_t t174 = 2268483;
uint32_t x1579 = 252U;
int32_t x1581 = INT32_MIN;
static uint8_t x1582 = 16U;
uint64_t x1583 = 505375529633LLU;
volatile int32_t t177 = 39;
static uint32_t x1593 = 361U;
uint64_t x1601 = 231LLU;
int8_t x1603 = -50;
volatile int32_t x1621 = INT32_MAX;
uint8_t x1665 = 7U;
uint64_t x1666 = UINT64_MAX;
volatile uint64_t t188 = 314708LLU;
volatile int16_t x1672 = INT16_MIN;
volatile uint64_t t189 = 224547519092731229LLU;
uint64_t x1693 = 1LLU;
int64_t x1698 = INT64_MAX;
int64_t x1700 = INT64_MIN;
int64_t x1701 = 54077205801542724LL;
volatile int64_t x1708 = INT64_MIN;
volatile int32_t t194 = -18394;
volatile int16_t x1716 = INT16_MIN;
int16_t x1750 = 3043;
volatile int8_t x1761 = INT8_MIN;
int8_t x1762 = INT8_MAX;
int8_t x1763 = INT8_MIN;


void f0(void) {
    	volatile int16_t x5 = INT16_MAX;
	int64_t x6 = -1LL;
	uint64_t x7 = 1188LLU;
	static int64_t x8 = INT64_MIN;
	static volatile int64_t t0 = 70037607LL;

    t0 = ((x5&x6)<<(x7/x8));

    if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x21 = 228U;
	static uint32_t x22 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	uint32_t t1 = 482261U;

    t1 = ((x21&x22)<<(x23/x24));

    if (t1 != 228U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x26 = 60;
	int64_t x28 = 30493LL;

    t2 = ((x25&x26)<<(x27/x28));

    if (t2 != 240LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x33 = -1;
	uint64_t x35 = 542988LLU;
	static int8_t x36 = -1;

    t3 = ((x33&x34)<<(x35/x36));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x40 = UINT64_MAX;
	int64_t t4 = INT64_MAX;

    t4 = ((x37&x38)<<(x39/x40));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x41 = INT32_MAX;
	static volatile uint64_t x42 = UINT64_MAX;
	static volatile int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MIN;

    t5 = ((x41&x42)<<(x43/x44));

    if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 307001U;
	static int8_t x51 = -1;
	int32_t x52 = INT32_MAX;
	volatile uint32_t t6 = 2123885U;

    t6 = ((x49&x50)<<(x51/x52));

    if (t6 != 57U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x54 = INT16_MAX;
	uint32_t x55 = 76442162U;
	int16_t x56 = -1;
	volatile int32_t t7 = 154800677;

    t7 = ((x53&x54)<<(x55/x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x57 = 12U;
	uint64_t x58 = UINT64_MAX;
	static int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MAX;
	static volatile uint64_t t8 = 234978525LLU;

    t8 = ((x57&x58)<<(x59/x60));

    if (t8 != 24LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x73 = INT64_MIN;
	int16_t x74 = 1;
	static volatile int8_t x75 = -7;
	int8_t x76 = INT8_MIN;
	volatile int64_t t9 = -9346238207189804LL;

    t9 = ((x73&x74)<<(x75/x76));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint32_t x77 = 666712U;
	uint16_t x78 = 165U;
	volatile uint8_t x79 = 3U;
	volatile int32_t x80 = INT32_MIN;
	uint32_t t10 = 12973U;

    t10 = ((x77&x78)<<(x79/x80));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x83 = INT32_MIN;
	int64_t x84 = 304643458075LL;
	volatile int32_t t11 = -275449;

    t11 = ((x81&x82)<<(x83/x84));

    if (t11 != 404) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x89 = 241627U;
	volatile int16_t x90 = 255;
	int8_t x91 = 25;
	int64_t x92 = INT64_MIN;
	static volatile uint32_t t12 = 323U;

    t12 = ((x89&x90)<<(x91/x92));

    if (t12 != 219U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x94 = 87U;
	static volatile int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = UINT64_MAX;

    t13 = ((x93&x94)<<(x95/x96));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x97 = 653LL;
	static int8_t x98 = -8;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = -108;
	volatile int64_t t14 = 70LL;

    t14 = ((x97&x98)<<(x99/x100));

    if (t14 != 1296LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x117 = 1U;
	uint32_t x118 = UINT32_MAX;
	static uint64_t x119 = UINT64_MAX;
	int8_t x120 = -3;
	uint32_t t15 = 16736027U;

    t15 = ((x117&x118)<<(x119/x120));

    if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x125 = 2273962382735LLU;
	int8_t x126 = 0;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = -6;
	volatile uint64_t t16 = 5074946163881727155LLU;

    t16 = ((x125&x126)<<(x127/x128));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x145 = INT32_MIN;
	volatile uint8_t x147 = 0U;
	static uint32_t x148 = 2U;
	volatile uint32_t t17 = 69163234U;

    t17 = ((x145&x146)<<(x147/x148));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x166 = 6U;
	volatile int32_t x167 = 24;
	int8_t x168 = INT8_MIN;
	static volatile int64_t t18 = -56182237371734LL;

    t18 = ((x165&x166)<<(x167/x168));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x177 = UINT8_MAX;
	static volatile uint64_t x178 = UINT64_MAX;
	int32_t x179 = -1;
	static uint32_t x180 = 324966291U;
	uint64_t t19 = 254LLU;

    t19 = ((x177&x178)<<(x179/x180));

    if (t19 != 2088960LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x185 = -10950;
	static uint8_t x187 = 2U;
	volatile int32_t x188 = INT32_MIN;
	static volatile uint64_t t20 = 0LLU;

    t20 = ((x185&x186)<<(x187/x188));

    if (t20 != 18446744073709540666LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x209 = 7312U;
	uint16_t x210 = 1705U;
	int16_t x211 = INT16_MIN;
	volatile int32_t t21 = -35370163;

    t21 = ((x209&x210)<<(x211/x212));

    if (t21 != 1152) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x213 = INT32_MAX;
	int32_t x215 = -1;
	volatile int64_t t22 = -399537049LL;

    t22 = ((x213&x214)<<(x215/x216));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x226 = INT16_MAX;
	static uint16_t x227 = 133U;
	uint32_t x228 = UINT32_MAX;
	int32_t t23 = 56;

    t23 = ((x225&x226)<<(x227/x228));

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x229 = INT32_MAX;
	uint64_t x230 = 19840870443LLU;
	uint8_t x231 = 0U;
	static int32_t x232 = 256159;

    t24 = ((x229&x230)<<(x231/x232));

    if (t24 != 513517611LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x233 = 43466;
	static int32_t x234 = -1;

    t25 = ((x233&x234)<<(x235/x236));

    if (t25 != 43466) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x245 = 754465240944094938LLU;
	uint64_t x246 = 1043153449335928LLU;
	int64_t x248 = -16740389885178452LL;
	volatile uint64_t t26 = 5LLU;

    t26 = ((x245&x246)<<(x247/x248));

    if (t26 != 39728460737624LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x249 = -1LL;

    t27 = ((x249&x250)<<(x251/x252));

    if (t27 != 14LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x261 = -1;
	int32_t x262 = 7;
	int64_t x263 = 1LL;
	static uint32_t x264 = 978855208U;
	int32_t t28 = 5041;

    t28 = ((x261&x262)<<(x263/x264));

    if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x266 = INT64_MAX;
	int32_t x267 = -1;
	uint16_t x268 = 63U;

    t29 = ((x265&x266)<<(x267/x268));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x269 = -1;
	static int32_t x270 = INT32_MAX;
	int32_t x271 = 3;
	static volatile int32_t x272 = INT32_MAX;
	int32_t t30 = INT32_MAX;

    t30 = ((x269&x270)<<(x271/x272));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x281 = -16492726;
	int8_t x282 = 0;
	volatile int32_t t31 = 94963263;

    t31 = ((x281&x282)<<(x283/x284));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x285 = INT8_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	int8_t x287 = 6;
	static int32_t x288 = INT32_MAX;

    t32 = ((x285&x286)<<(x287/x288));

    if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x290 = 25LLU;
	int8_t x291 = -1;
	int8_t x292 = -1;
	static volatile uint64_t t33 = 326021LLU;

    t33 = ((x289&x290)<<(x291/x292));

    if (t33 != 50LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x294 = -1;
	uint64_t x295 = 5874245395714453LLU;
	int64_t x296 = INT64_MIN;
	uint32_t t34 = 3U;

    t34 = ((x293&x294)<<(x295/x296));

    if (t34 != 340290150U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = 3226526;
	uint32_t x299 = 413U;
	volatile int64_t x300 = INT64_MAX;

    t35 = ((x297&x298)<<(x299/x300));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x301 = 1U;
	int16_t x302 = INT16_MIN;
	int8_t x304 = INT8_MIN;

    t36 = ((x301&x302)<<(x303/x304));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x305 = 41U;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile int64_t x308 = INT64_MAX;
	int32_t t37 = 217016;

    t37 = ((x305&x306)<<(x307/x308));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x321 = 16159;
	uint16_t x322 = 10U;
	volatile uint8_t x323 = 2U;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t38 = -256109117;

    t38 = ((x321&x322)<<(x323/x324));

    if (t38 != 10) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x337 = 0U;
	int8_t x338 = -1;
	int8_t x340 = INT8_MIN;
	int32_t t39 = -17;

    t39 = ((x337&x338)<<(x339/x340));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x341 = UINT64_MAX;
	uint32_t x342 = 3850U;
	int32_t x343 = -250162843;
	uint64_t x344 = UINT64_MAX;

    t40 = ((x341&x342)<<(x343/x344));

    if (t40 != 3850LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x345 = 15U;
	uint64_t x346 = 118954183651479LLU;
	static int16_t x347 = -1;
	volatile uint64_t t41 = 4240871136390701LLU;

    t41 = ((x345&x346)<<(x347/x348));

    if (t41 != 7LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x349 = INT32_MAX;
	int16_t x350 = 12;
	static int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;

    t42 = ((x349&x350)<<(x351/x352));

    if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x353 = 943;
	int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t43 = 1;

    t43 = ((x353&x354)<<(x355/x356));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x377 = INT32_MIN;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = 0;
	int32_t t44 = -14603102;

    t44 = ((x377&x378)<<(x379/x380));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x389 = INT64_MIN;
	uint32_t x391 = 149774288U;
	static int8_t x392 = INT8_MIN;
	volatile int64_t t45 = -2975974250136663LL;

    t45 = ((x389&x390)<<(x391/x392));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x405 = 22737145474454043LL;
	uint16_t x407 = 12U;
	static volatile int32_t x408 = INT32_MIN;
	static volatile int64_t t46 = -3934LL;

    t46 = ((x405&x406)<<(x407/x408));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x417 = 1888376146LLU;
	volatile int8_t x418 = INT8_MIN;
	uint64_t x419 = UINT64_MAX;
	int16_t x420 = -1;
	uint64_t t47 = 6739087422722189048LLU;

    t47 = ((x417&x418)<<(x419/x420));

    if (t47 != 3776752128LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x421 = 18U;
	static int64_t x422 = INT64_MIN;
	int64_t x424 = INT64_MIN;
	int64_t t48 = -67979421LL;

    t48 = ((x421&x422)<<(x423/x424));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x430 = 0;
	int64_t x431 = -1LL;
	static int8_t x432 = INT8_MIN;
	int64_t t49 = -1295671953310194739LL;

    t49 = ((x429&x430)<<(x431/x432));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x437 = INT64_MAX;
	int8_t x438 = INT8_MAX;
	static int8_t x439 = INT8_MIN;
	static int16_t x440 = INT16_MAX;
	static int64_t t50 = -19936599LL;

    t50 = ((x437&x438)<<(x439/x440));

    if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x441 = INT32_MAX;
	int16_t x442 = 0;
	int16_t x443 = -1;
	int32_t x444 = -623;
	volatile int32_t t51 = 204821538;

    t51 = ((x441&x442)<<(x443/x444));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x453 = 0;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MIN;
	static uint8_t x456 = UINT8_MAX;
	static volatile int32_t t52 = 1;

    t52 = ((x453&x454)<<(x455/x456));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MAX;
	int16_t x460 = INT16_MAX;
	static uint32_t t53 = 1546162U;

    t53 = ((x457&x458)<<(x459/x460));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x461 = 5U;
	int8_t x462 = INT8_MIN;
	int64_t x464 = INT64_MIN;
	volatile int32_t t54 = 4838361;

    t54 = ((x461&x462)<<(x463/x464));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x469 = UINT32_MAX;
	int64_t x470 = -99960LL;
	volatile uint16_t x471 = UINT16_MAX;
	uint64_t x472 = 972300441LLU;
	volatile int64_t t55 = -1922655622LL;

    t55 = ((x469&x470)<<(x471/x472));

    if (t55 != 4294867336LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x490 = INT32_MIN;
	static uint16_t x491 = UINT16_MAX;
	int32_t x492 = INT32_MIN;

    t56 = ((x489&x490)<<(x491/x492));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x497 = INT16_MIN;
	int32_t x498 = 15974;

    t57 = ((x497&x498)<<(x499/x500));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x505 = -1;
	uint64_t x506 = 2453744295LLU;
	volatile uint8_t x508 = 37U;
	uint64_t t58 = 886116041LLU;

    t58 = ((x505&x506)<<(x507/x508));

    if (t58 != 9814977180LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x513 = 0;
	int64_t x514 = 64985LL;
	int8_t x515 = -1;
	volatile uint16_t x516 = UINT16_MAX;

    t59 = ((x513&x514)<<(x515/x516));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x517 = 425U;
	volatile int64_t x518 = INT64_MIN;
	volatile uint64_t x519 = 321793278LLU;
	int8_t x520 = INT8_MIN;

    t60 = ((x517&x518)<<(x519/x520));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x525 = 1072484713118LL;
	static int8_t x526 = INT8_MIN;
	int64_t x527 = -1LL;
	uint32_t x528 = 336253434U;
	int64_t t61 = -8420LL;

    t61 = ((x525&x526)<<(x527/x528));

    if (t61 != 1072484713088LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	uint64_t x546 = 845205573505868LLU;
	static uint8_t x547 = 0U;
	int16_t x548 = -1;
	uint64_t t62 = 20368117336604655LLU;

    t62 = ((x545&x546)<<(x547/x548));

    if (t62 != 845205573505868LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x553 = UINT32_MAX;
	static int32_t x554 = 6470923;
	int16_t x555 = 1;
	volatile uint32_t t63 = 179511097U;

    t63 = ((x553&x554)<<(x555/x556));

    if (t63 != 6470923U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x569 = INT64_MIN;
	uint8_t x571 = 0U;
	int64_t x572 = 54588363785818544LL;
	volatile int64_t t64 = -181LL;

    t64 = ((x569&x570)<<(x571/x572));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x581 = 298LLU;
	int8_t x582 = INT8_MIN;
	uint64_t t65 = 2600298427728823LLU;

    t65 = ((x581&x582)<<(x583/x584));

    if (t65 != 256LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x585 = 3;
	static int32_t x586 = INT32_MIN;
	uint64_t x587 = 4151LLU;
	int8_t x588 = -2;
	static int32_t t66 = -2027624;

    t66 = ((x585&x586)<<(x587/x588));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x601 = INT16_MIN;
	static uint16_t x602 = 26U;
	static uint32_t x603 = 456451292U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t67 = 66048119;

    t67 = ((x601&x602)<<(x603/x604));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x605 = UINT8_MAX;
	static uint8_t x606 = 7U;
	int8_t x607 = -1;
	static uint8_t x608 = UINT8_MAX;
	int32_t t68 = -307944279;

    t68 = ((x605&x606)<<(x607/x608));

    if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x610 = INT16_MAX;
	uint16_t x611 = 147U;
	static volatile int32_t x612 = INT32_MIN;
	volatile int32_t t69 = 4511529;

    t69 = ((x609&x610)<<(x611/x612));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x617 = -987372;
	volatile int64_t x618 = INT64_MAX;
	uint64_t x619 = 198429558468921LLU;
	int32_t x620 = INT32_MIN;
	static int64_t t70 = -259206LL;

    t70 = ((x617&x618)<<(x619/x620));

    if (t70 != 9223372036853788436LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x645 = 0;
	int16_t x646 = INT16_MIN;
	volatile int32_t t71 = -142779910;

    t71 = ((x645&x646)<<(x647/x648));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x655 = 143;
	uint8_t x656 = UINT8_MAX;
	volatile int64_t t72 = -629376291518544LL;

    t72 = ((x653&x654)<<(x655/x656));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	uint64_t x659 = 9571LLU;
	static int8_t x660 = -13;

    t73 = ((x657&x658)<<(x659/x660));

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x661 = 0U;
	static int8_t x662 = INT8_MAX;
	int64_t x663 = -57LL;
	static volatile int16_t x664 = -10;
	volatile int32_t t74 = 1787;

    t74 = ((x661&x662)<<(x663/x664));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x670 = 1244U;
	int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MIN;
	int64_t t75 = 4104299677LL;

    t75 = ((x669&x670)<<(x671/x672));

    if (t75 != 1244LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x686 = -1LL;
	int8_t x687 = 6;
	int16_t x688 = INT16_MAX;
	volatile int64_t t76 = 61235228747LL;

    t76 = ((x685&x686)<<(x687/x688));

    if (t76 != 2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x701 = 11478159464LL;
	volatile int64_t x703 = INT64_MIN;
	uint64_t x704 = UINT64_MAX;
	static uint64_t t77 = 443805LLU;

    t77 = ((x701&x702)<<(x703/x704));

    if (t77 != 8659570792LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x709 = INT32_MIN;
	int8_t x710 = INT8_MAX;
	volatile int64_t x711 = -1LL;
	int16_t x712 = -1;
	volatile int32_t t78 = 14279413;

    t78 = ((x709&x710)<<(x711/x712));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x713 = UINT64_MAX;
	uint64_t x716 = UINT64_MAX;
	static volatile uint64_t t79 = 32702LLU;

    t79 = ((x713&x714)<<(x715/x716));

    if (t79 != 562256210689321492LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x736 = 126U;
	volatile int32_t t80 = 48;

    t80 = ((x733&x734)<<(x735/x736));

    if (t80 != 16384) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x738 = 45U;
	uint64_t x739 = 26169383880439248LLU;
	static int8_t x740 = INT8_MIN;

    t81 = ((x737&x738)<<(x739/x740));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x745 = 985852072LLU;
	static int16_t x746 = -134;
	uint64_t x748 = UINT64_MAX;
	volatile uint64_t t82 = 2213997950157715LLU;

    t82 = ((x745&x746)<<(x747/x748));

    if (t82 != 1971703888LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x749 = 4595;
	static int64_t x750 = INT64_MIN;
	int16_t x751 = -1;
	int64_t t83 = 132363613837493048LL;

    t83 = ((x749&x750)<<(x751/x752));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x765 = 0;
	uint64_t x766 = 3433585LLU;
	uint16_t x767 = 318U;
	uint16_t x768 = 444U;
	uint64_t t84 = 13749LLU;

    t84 = ((x765&x766)<<(x767/x768));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x777 = 7U;
	static volatile int64_t x778 = INT64_MAX;
	static int8_t x779 = 14;
	uint64_t x780 = 1LLU;

    t85 = ((x777&x778)<<(x779/x780));

    if (t85 != 114688LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x789 = INT8_MAX;
	int8_t x790 = INT8_MIN;
	uint32_t x792 = UINT32_MAX;

    t86 = ((x789&x790)<<(x791/x792));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	volatile uint32_t x795 = 2U;
	static volatile uint64_t t87 = 9451731LLU;

    t87 = ((x793&x794)<<(x795/x796));

    if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x802 = 1;
	int8_t x803 = 4;
	volatile uint16_t x804 = 1U;
	int32_t t88 = 367091215;

    t88 = ((x801&x802)<<(x803/x804));

    if (t88 != 16) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x813 = -1;
	uint8_t x814 = UINT8_MAX;
	int8_t x815 = INT8_MAX;
	int16_t x816 = 50;
	int32_t t89 = 557521988;

    t89 = ((x813&x814)<<(x815/x816));

    if (t89 != 1020) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x818 = 200LL;
	int64_t x819 = -1LL;
	volatile int64_t t90 = 1958840190LL;

    t90 = ((x817&x818)<<(x819/x820));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x821 = UINT64_MAX;
	int64_t x822 = -1LL;
	volatile int8_t x823 = -1;
	uint32_t x824 = UINT32_MAX;

    t91 = ((x821&x822)<<(x823/x824));

    if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x845 = INT16_MIN;
	int64_t x846 = 4LL;
	int16_t x847 = -1;
	volatile int16_t x848 = INT16_MAX;
	int64_t t92 = -18947524411652LL;

    t92 = ((x845&x846)<<(x847/x848));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x851 = 7U;
	int8_t x852 = -30;
	int32_t t93 = -6583;

    t93 = ((x849&x850)<<(x851/x852));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x857 = UINT8_MAX;
	int32_t x859 = -1;
	volatile int32_t x860 = -579828;
	int32_t t94 = 261496283;

    t94 = ((x857&x858)<<(x859/x860));

    if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x869 = 1;
	int64_t x870 = INT64_MIN;
	int32_t x871 = INT32_MAX;
	uint32_t x872 = 178867145U;
	static int64_t t95 = 113609711176LL;

    t95 = ((x869&x870)<<(x871/x872));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x881 = INT8_MIN;
	uint32_t x882 = UINT32_MAX;
	uint64_t x883 = 225287LLU;
	int32_t x884 = -256;
	uint32_t t96 = 883098272U;

    t96 = ((x881&x882)<<(x883/x884));

    if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x905 = UINT8_MAX;
	uint16_t x906 = 582U;
	volatile uint16_t x907 = 0U;
	uint16_t x908 = 4829U;

    t97 = ((x905&x906)<<(x907/x908));

    if (t97 != 70) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x914 = INT64_MIN;
	uint8_t x915 = 1U;
	volatile int16_t x916 = INT16_MIN;
	int64_t t98 = -75828914692250708LL;

    t98 = ((x913&x914)<<(x915/x916));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x929 = -1;
	uint64_t x930 = UINT64_MAX;
	int16_t x931 = -1;
	int32_t x932 = -1;

    t99 = ((x929&x930)<<(x931/x932));

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x945 = -1;
	uint64_t x946 = 1736669LLU;
	int8_t x947 = INT8_MIN;
	volatile uint64_t t100 = 854084LLU;

    t100 = ((x945&x946)<<(x947/x948));

    if (t100 != 1736669LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x949 = 4;
	volatile int8_t x950 = INT8_MAX;
	int32_t x951 = 15;
	int32_t x952 = -49451;
	static int32_t t101 = 36311;

    t101 = ((x949&x950)<<(x951/x952));

    if (t101 != 4) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x953 = 598114U;
	static volatile uint16_t x955 = 26704U;
	int16_t x956 = INT16_MAX;
	uint32_t t102 = 286U;

    t102 = ((x953&x954)<<(x955/x956));

    if (t102 != 598112U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x957 = 0U;
	uint8_t x958 = 0U;
	int16_t x959 = -1;
	int8_t x960 = INT8_MIN;
	int32_t t103 = 170882093;

    t103 = ((x957&x958)<<(x959/x960));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x965 = 122238915876402LLU;
	int16_t x966 = INT16_MIN;
	int8_t x967 = 0;
	static uint64_t t104 = 24800708745866LLU;

    t104 = ((x965&x966)<<(x967/x968));

    if (t104 != 122238915870720LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x977 = INT8_MIN;
	static int32_t x979 = -95181429;
	int64_t x980 = INT64_MIN;
	static volatile int32_t t105 = 32527;

    t105 = ((x977&x978)<<(x979/x980));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x989 = UINT64_MAX;
	static int8_t x990 = -1;
	int8_t x991 = -1;
	uint8_t x992 = 3U;
	static uint64_t t106 = UINT64_MAX;

    t106 = ((x989&x990)<<(x991/x992));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x1009 = 5934587U;
	volatile int16_t x1010 = INT16_MIN;
	int64_t x1012 = 905580LL;
	static volatile uint32_t t107 = 11835626U;

    t107 = ((x1009&x1010)<<(x1011/x1012));

    if (t107 != 5931008U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x1025 = INT64_MIN;
	uint8_t x1026 = 116U;
	uint8_t x1027 = 117U;
	uint64_t x1028 = 1828588285LLU;
	static int64_t t108 = 2045850598119820592LL;

    t108 = ((x1025&x1026)<<(x1027/x1028));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x1029 = 16;
	int16_t x1030 = INT16_MIN;
	static int32_t x1032 = -977122848;
	static int32_t t109 = -1;

    t109 = ((x1029&x1030)<<(x1031/x1032));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x1033 = 75;
	int8_t x1034 = -1;
	volatile uint32_t x1035 = 85762617U;
	uint64_t x1036 = 488851374904857LLU;
	volatile int32_t t110 = -458254;

    t110 = ((x1033&x1034)<<(x1035/x1036));

    if (t110 != 75) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x1050 = INT16_MAX;
	static int32_t x1052 = INT32_MAX;
	volatile uint64_t t111 = 834302LLU;

    t111 = ((x1049&x1050)<<(x1051/x1052));

    if (t111 != 205LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x1053 = 0U;
	int8_t x1054 = INT8_MAX;
	int32_t x1055 = -1;
	int8_t x1056 = INT8_MAX;
	int32_t t112 = -1182;

    t112 = ((x1053&x1054)<<(x1055/x1056));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x1061 = INT64_MIN;
	int32_t x1063 = -1;
	int64_t t113 = -1039875356434288LL;

    t113 = ((x1061&x1062)<<(x1063/x1064));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x1069 = INT8_MIN;
	uint8_t x1070 = UINT8_MAX;
	uint64_t x1071 = UINT64_MAX;
	static int64_t x1072 = -657348351418677LL;
	volatile int32_t t114 = 7;

    t114 = ((x1069&x1070)<<(x1071/x1072));

    if (t114 != 256) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x1073 = 3;
	int8_t x1074 = INT8_MIN;
	uint32_t x1075 = 0U;
	static volatile int32_t t115 = 64820;

    t115 = ((x1073&x1074)<<(x1075/x1076));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x1077 = 3614;
	volatile uint16_t x1078 = UINT16_MAX;
	int32_t x1079 = INT32_MIN;
	int64_t x1080 = -275194330834533LL;

    t116 = ((x1077&x1078)<<(x1079/x1080));

    if (t116 != 3614) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x1081 = INT64_MAX;
	volatile int16_t x1082 = INT16_MIN;
	volatile uint64_t x1083 = 58734LLU;
	uint16_t x1084 = UINT16_MAX;
	int64_t t117 = 159LL;

    t117 = ((x1081&x1082)<<(x1083/x1084));

    if (t117 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x1093 = INT64_MIN;
	static volatile int8_t x1094 = 18;
	volatile uint8_t x1096 = UINT8_MAX;

    t118 = ((x1093&x1094)<<(x1095/x1096));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x1102 = UINT64_MAX;
	static uint8_t x1103 = UINT8_MAX;
	static volatile uint8_t x1104 = 109U;
	uint64_t t119 = 2998294932747618253LLU;

    t119 = ((x1101&x1102)<<(x1103/x1104));

    if (t119 != 252LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x1109 = INT8_MAX;
	volatile int8_t x1110 = INT8_MIN;
	uint64_t x1111 = 2555390857993LLU;
	volatile uint64_t x1112 = UINT64_MAX;
	int32_t t120 = -899;

    t120 = ((x1109&x1110)<<(x1111/x1112));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x1125 = 1;
	int32_t x1126 = INT32_MAX;
	uint64_t x1127 = UINT64_MAX;
	int64_t x1128 = INT64_MIN;

    t121 = ((x1125&x1126)<<(x1127/x1128));

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1129 = UINT64_MAX;
	int8_t x1130 = -4;
	int8_t x1132 = INT8_MIN;
	uint64_t t122 = 20757LLU;

    t122 = ((x1129&x1130)<<(x1131/x1132));

    if (t122 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x1133 = 953909U;
	static int64_t x1134 = INT64_MIN;
	static int16_t x1135 = INT16_MIN;
	int32_t x1136 = INT32_MIN;
	volatile int64_t t123 = 181050564556LL;

    t123 = ((x1133&x1134)<<(x1135/x1136));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x1137 = UINT32_MAX;
	static int32_t x1138 = 29542;
	int8_t x1139 = -1;
	uint16_t x1140 = 18U;
	volatile uint32_t t124 = 1015311848U;

    t124 = ((x1137&x1138)<<(x1139/x1140));

    if (t124 != 29542U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1141 = UINT8_MAX;
	static int32_t x1143 = -310;
	int16_t x1144 = INT16_MIN;
	int32_t t125 = 942971655;

    t125 = ((x1141&x1142)<<(x1143/x1144));

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1157 = -32749001LL;
	uint32_t x1158 = 26102U;
	volatile uint64_t x1159 = 6297LLU;
	int32_t x1160 = -1716033;
	int64_t t126 = -418430587782LL;

    t126 = ((x1157&x1158)<<(x1159/x1160));

    if (t126 != 16438LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1169 = -1631190;
	uint32_t x1170 = 107U;
	int8_t x1171 = -1;
	int8_t x1172 = INT8_MIN;
	uint32_t t127 = 47U;

    t127 = ((x1169&x1170)<<(x1171/x1172));

    if (t127 != 42U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1173 = UINT16_MAX;
	volatile uint32_t x1174 = UINT32_MAX;
	uint8_t x1175 = 110U;
	int64_t x1176 = -1481LL;
	volatile uint32_t t128 = 873615U;

    t128 = ((x1173&x1174)<<(x1175/x1176));

    if (t128 != 65535U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1185 = 1056748593062300265LLU;
	static int8_t x1186 = INT8_MAX;
	static uint8_t x1187 = UINT8_MAX;
	volatile uint32_t x1188 = 5808U;
	uint64_t t129 = 5791055LLU;

    t129 = ((x1185&x1186)<<(x1187/x1188));

    if (t129 != 105LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x1189 = INT8_MIN;
	volatile uint32_t x1190 = 2U;
	uint32_t x1191 = UINT32_MAX;
	uint32_t t130 = 59U;

    t130 = ((x1189&x1190)<<(x1191/x1192));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1201 = INT8_MIN;
	static volatile uint64_t x1202 = 233872747886LLU;
	uint8_t x1203 = 12U;
	static int64_t x1204 = INT64_MIN;
	uint64_t t131 = 132704607403LLU;

    t131 = ((x1201&x1202)<<(x1203/x1204));

    if (t131 != 233872747776LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1205 = 24;
	uint32_t x1206 = UINT32_MAX;
	int16_t x1207 = -1;
	int16_t x1208 = 3;

    t132 = ((x1205&x1206)<<(x1207/x1208));

    if (t132 != 24U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x1213 = INT64_MIN;
	uint32_t x1214 = 508562385U;
	static uint32_t x1215 = 73U;
	static int16_t x1216 = -1;

    t133 = ((x1213&x1214)<<(x1215/x1216));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x1221 = 12637U;
	volatile int8_t x1222 = 1;
	int32_t x1223 = INT32_MIN;
	int32_t x1224 = INT32_MIN;
	int32_t t134 = -1;

    t134 = ((x1221&x1222)<<(x1223/x1224));

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x1226 = 1U;
	int8_t x1227 = INT8_MIN;
	static volatile uint16_t x1228 = 1047U;
	static volatile int32_t t135 = -29;

    t135 = ((x1225&x1226)<<(x1227/x1228));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1241 = INT8_MAX;
	static volatile uint32_t x1242 = UINT32_MAX;
	static int32_t x1243 = INT32_MIN;
	volatile int64_t x1244 = INT64_MAX;
	volatile uint32_t t136 = 30U;

    t136 = ((x1241&x1242)<<(x1243/x1244));

    if (t136 != 127U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x1250 = UINT16_MAX;
	int16_t x1251 = -1;
	uint16_t x1252 = 29563U;
	volatile int32_t t137 = 14461579;

    t137 = ((x1249&x1250)<<(x1251/x1252));

    if (t137 != 65408) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x1253 = INT32_MIN;
	volatile int64_t x1254 = INT64_MAX;
	static uint16_t x1255 = 5737U;
	volatile int16_t x1256 = INT16_MAX;
	volatile int64_t t138 = 903938887048LL;

    t138 = ((x1253&x1254)<<(x1255/x1256));

    if (t138 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x1265 = 39428424U;
	uint16_t x1266 = UINT16_MAX;
	int64_t x1268 = INT64_MIN;
	static volatile uint32_t t139 = 154U;

    t139 = ((x1265&x1266)<<(x1267/x1268));

    if (t139 != 41288U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1273 = UINT32_MAX;
	uint8_t x1274 = 7U;
	volatile int16_t x1275 = INT16_MAX;
	uint32_t x1276 = 1486032424U;
	static volatile uint32_t t140 = 737062U;

    t140 = ((x1273&x1274)<<(x1275/x1276));

    if (t140 != 7U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1278 = -179;
	uint8_t x1279 = 96U;
	uint8_t x1280 = UINT8_MAX;
	int32_t t141 = -5;

    t141 = ((x1277&x1278)<<(x1279/x1280));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1282 = INT16_MIN;
	static int8_t x1283 = 1;
	static int8_t x1284 = INT8_MAX;
	volatile int64_t t142 = 144348209LL;

    t142 = ((x1281&x1282)<<(x1283/x1284));

    if (t142 != 58538035478528LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x1285 = 98362U;
	uint64_t x1286 = 65LLU;
	int32_t x1287 = -1;
	int16_t x1288 = -21;
	volatile uint64_t t143 = 6803LLU;

    t143 = ((x1285&x1286)<<(x1287/x1288));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x1305 = 0;
	uint32_t x1306 = UINT32_MAX;
	int32_t x1307 = -1;
	volatile int8_t x1308 = -1;

    t144 = ((x1305&x1306)<<(x1307/x1308));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1309 = UINT64_MAX;
	volatile int8_t x1311 = -23;
	uint8_t x1312 = 126U;

    t145 = ((x1309&x1310)<<(x1311/x1312));

    if (t145 != 4294967295LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1321 = UINT64_MAX;
	uint8_t x1322 = 0U;
	volatile uint16_t x1324 = UINT16_MAX;
	uint64_t t146 = 5LLU;

    t146 = ((x1321&x1322)<<(x1323/x1324));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x1325 = 861780LLU;
	static volatile uint8_t x1326 = 1U;
	static uint64_t t147 = 4036832778180LLU;

    t147 = ((x1325&x1326)<<(x1327/x1328));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1329 = -210428430527855LL;
	volatile uint32_t x1330 = UINT32_MAX;
	volatile int64_t x1331 = INT64_MAX;
	static volatile int64_t x1332 = INT64_MIN;
	int64_t t148 = -60LL;

    t148 = ((x1329&x1330)<<(x1331/x1332));

    if (t148 != 3492139665LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x1338 = -16566885LL;
	static uint32_t x1339 = 750U;
	volatile int8_t x1340 = INT8_MIN;
	volatile int64_t t149 = -115409LL;

    t149 = ((x1337&x1338)<<(x1339/x1340));

    if (t149 != 19LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1342 = INT8_MAX;
	int64_t x1343 = 795235766LL;
	int64_t x1344 = INT64_MIN;
	volatile int64_t t150 = -5580918LL;

    t150 = ((x1341&x1342)<<(x1343/x1344));

    if (t150 != 127LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1345 = INT16_MAX;
	int16_t x1346 = -1;
	static int8_t x1347 = 25;
	static volatile int64_t x1348 = INT64_MIN;
	volatile int32_t t151 = 70;

    t151 = ((x1345&x1346)<<(x1347/x1348));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1357 = -1;
	static volatile int64_t x1358 = 12348887111LL;
	int64_t t152 = 61333390933LL;

    t152 = ((x1357&x1358)<<(x1359/x1360));

    if (t152 != 12348887111LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1369 = -1;
	static uint8_t x1370 = 53U;
	uint8_t x1371 = 5U;
	volatile int32_t t153 = -117;

    t153 = ((x1369&x1370)<<(x1371/x1372));

    if (t153 != 53) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1373 = INT32_MIN;
	volatile uint8_t x1374 = 4U;
	volatile uint16_t x1375 = UINT16_MAX;
	uint64_t x1376 = 69867LLU;
	volatile int32_t t154 = -14706;

    t154 = ((x1373&x1374)<<(x1375/x1376));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1389 = UINT64_MAX;
	int16_t x1391 = -1;
	int16_t x1392 = -1022;
	volatile uint64_t t155 = UINT64_MAX;

    t155 = ((x1389&x1390)<<(x1391/x1392));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1393 = INT32_MAX;
	volatile uint64_t x1394 = 191999895512LLU;
	static uint32_t x1395 = 96738303U;
	static int16_t x1396 = INT16_MIN;

    t156 = ((x1393&x1394)<<(x1395/x1396));

    if (t156 != 873850840LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1402 = 73;
	uint8_t x1404 = UINT8_MAX;
	volatile int32_t t157 = -27471159;

    t157 = ((x1401&x1402)<<(x1403/x1404));

    if (t157 != 73) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1405 = 596U;
	uint32_t x1407 = 105740U;
	int64_t x1408 = INT64_MIN;

    t158 = ((x1405&x1406)<<(x1407/x1408));

    if (t158 != 596LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1409 = 180635LLU;
	int64_t x1410 = INT64_MIN;
	int32_t x1412 = INT32_MIN;

    t159 = ((x1409&x1410)<<(x1411/x1412));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1414 = INT32_MIN;
	static int32_t t160 = 39;

    t160 = ((x1413&x1414)<<(x1415/x1416));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1425 = INT64_MAX;
	uint32_t x1428 = 107715123U;

    t161 = ((x1425&x1426)<<(x1427/x1428));

    if (t161 != 8817885892426334208LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x1430 = -270;
	static int16_t x1431 = INT16_MIN;
	static int32_t x1432 = -65699;
	volatile uint32_t t162 = 1733306124U;

    t162 = ((x1429&x1430)<<(x1431/x1432));

    if (t162 != 4294967026U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1437 = INT64_MIN;
	volatile int64_t x1438 = 4733227197430LL;
	int64_t x1439 = -1LL;
	volatile uint16_t x1440 = 1166U;
	static int64_t t163 = 857017047931685196LL;

    t163 = ((x1437&x1438)<<(x1439/x1440));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x1441 = 519U;
	static uint16_t x1442 = 118U;
	uint64_t x1443 = 48116925863167LLU;
	int8_t x1444 = -1;
	uint32_t t164 = 256802922U;

    t164 = ((x1441&x1442)<<(x1443/x1444));

    if (t164 != 6U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1453 = INT8_MAX;
	volatile int64_t x1456 = INT64_MIN;
	int64_t t165 = -335LL;

    t165 = ((x1453&x1454)<<(x1455/x1456));

    if (t165 != 18LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1465 = 14;
	static int16_t x1466 = -1;
	static volatile uint8_t x1467 = 7U;
	int32_t t166 = 8;

    t166 = ((x1465&x1466)<<(x1467/x1468));

    if (t166 != 14) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1493 = 1;
	int64_t x1494 = INT64_MIN;
	int8_t x1496 = INT8_MIN;
	volatile int64_t t167 = -33862476115LL;

    t167 = ((x1493&x1494)<<(x1495/x1496));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1501 = 4U;
	static volatile int8_t x1502 = INT8_MIN;
	static int32_t x1503 = INT32_MIN;
	volatile int32_t t168 = 326;

    t168 = ((x1501&x1502)<<(x1503/x1504));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1510 = 1801047294U;
	volatile int32_t x1511 = -1;
	int32_t x1512 = INT32_MAX;

    t169 = ((x1509&x1510)<<(x1511/x1512));

    if (t169 != 12U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1521 = -1;
	uint32_t x1522 = 17U;
	static uint16_t x1523 = 32U;
	volatile uint64_t x1524 = UINT64_MAX;
	uint32_t t170 = 1419649U;

    t170 = ((x1521&x1522)<<(x1523/x1524));

    if (t170 != 17U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1525 = 3;
	volatile uint32_t x1528 = UINT32_MAX;

    t171 = ((x1525&x1526)<<(x1527/x1528));

    if (t171 != 3LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1537 = 39U;
	static int64_t x1538 = -11048569694514LL;
	int64_t x1540 = INT64_MIN;
	int64_t t172 = -30316227169LL;

    t172 = ((x1537&x1538)<<(x1539/x1540));

    if (t172 != 6LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1553 = UINT64_MAX;
	volatile int16_t x1554 = 1;
	uint16_t x1556 = 7336U;
	uint64_t t173 = 71867LLU;

    t173 = ((x1553&x1554)<<(x1555/x1556));

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1557 = INT16_MIN;
	uint64_t x1559 = 53013912298658LLU;
	volatile int32_t x1560 = INT32_MIN;

    t174 = ((x1557&x1558)<<(x1559/x1560));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x1565 = 48U;
	volatile int64_t x1566 = INT64_MAX;
	uint32_t x1567 = 2024536U;
	static volatile int32_t x1568 = -1;
	static volatile int64_t t175 = 583176597121371LL;

    t175 = ((x1565&x1566)<<(x1567/x1568));

    if (t175 != 48LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1577 = 4;
	int64_t x1578 = INT64_MAX;
	int32_t x1580 = -36887833;
	int64_t t176 = -69LL;

    t176 = ((x1577&x1578)<<(x1579/x1580));

    if (t176 != 4LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1584 = -1;

    t177 = ((x1581&x1582)<<(x1583/x1584));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1589 = -1LL;
	int16_t x1590 = 58;
	static int8_t x1591 = INT8_MAX;
	int8_t x1592 = INT8_MIN;
	volatile int64_t t178 = 7557122758600429LL;

    t178 = ((x1589&x1590)<<(x1591/x1592));

    if (t178 != 58LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1594 = 0;
	uint8_t x1595 = UINT8_MAX;
	int16_t x1596 = -340;
	static volatile uint32_t t179 = 94U;

    t179 = ((x1593&x1594)<<(x1595/x1596));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x1602 = -5;
	static int64_t x1604 = -13381775705370247LL;
	volatile uint64_t t180 = 27925LLU;

    t180 = ((x1601&x1602)<<(x1603/x1604));

    if (t180 != 227LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1605 = -66372LL;
	int64_t x1606 = INT64_MAX;
	int32_t x1607 = -1;
	static int32_t x1608 = INT32_MIN;
	volatile int64_t t181 = -1LL;

    t181 = ((x1605&x1606)<<(x1607/x1608));

    if (t181 != 9223372036854709436LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1613 = INT16_MAX;
	int16_t x1614 = INT16_MAX;
	int64_t x1615 = 228539LL;
	static int64_t x1616 = INT64_MIN;
	volatile int32_t t182 = 0;

    t182 = ((x1613&x1614)<<(x1615/x1616));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1622 = UINT8_MAX;
	volatile int8_t x1623 = INT8_MAX;
	static uint64_t x1624 = 77098095LLU;
	static volatile int32_t t183 = -1740712;

    t183 = ((x1621&x1622)<<(x1623/x1624));

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1625 = INT32_MIN;
	uint64_t x1626 = 48839576748519302LLU;
	int64_t x1627 = 365189776009275461LL;
	uint64_t x1628 = UINT64_MAX;
	volatile uint64_t t184 = 6086681LLU;

    t184 = ((x1625&x1626)<<(x1627/x1628));

    if (t184 != 48839576361369600LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x1633 = UINT8_MAX;
	static int32_t x1634 = -1;
	static uint8_t x1635 = 4U;
	uint8_t x1636 = UINT8_MAX;
	int32_t t185 = -1101460;

    t185 = ((x1633&x1634)<<(x1635/x1636));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1637 = 3154477;
	uint16_t x1638 = UINT16_MAX;
	static int64_t x1639 = -1LL;
	uint8_t x1640 = 95U;
	volatile int32_t t186 = -1202027;

    t186 = ((x1637&x1638)<<(x1639/x1640));

    if (t186 != 8749) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1661 = 6996253LLU;
	static int16_t x1662 = -1;
	volatile uint8_t x1663 = UINT8_MAX;
	int64_t x1664 = INT64_MIN;
	static volatile uint64_t t187 = 23160LLU;

    t187 = ((x1661&x1662)<<(x1663/x1664));

    if (t187 != 6996253LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1667 = -4;
	int32_t x1668 = INT32_MIN;

    t188 = ((x1665&x1666)<<(x1667/x1668));

    if (t188 != 7LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x1669 = 299281387480LLU;
	int64_t x1670 = INT64_MAX;
	uint8_t x1671 = 112U;

    t189 = ((x1669&x1670)<<(x1671/x1672));

    if (t189 != 299281387480LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1673 = INT16_MIN;
	uint64_t x1674 = UINT64_MAX;
	int8_t x1675 = INT8_MIN;
	volatile int16_t x1676 = INT16_MAX;
	uint64_t t190 = 295LLU;

    t190 = ((x1673&x1674)<<(x1675/x1676));

    if (t190 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1694 = INT64_MAX;
	volatile int32_t x1695 = -1;
	int64_t x1696 = INT64_MAX;
	uint64_t t191 = 446402LLU;

    t191 = ((x1693&x1694)<<(x1695/x1696));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1697 = -513359550386LL;
	int32_t x1699 = INT32_MIN;
	int64_t t192 = 484012105074LL;

    t192 = ((x1697&x1698)<<(x1699/x1700));

    if (t192 != 9223371523495225422LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1702 = UINT16_MAX;
	int32_t x1703 = INT32_MIN;
	static int64_t x1704 = INT64_MIN;
	volatile int64_t t193 = -2366LL;

    t193 = ((x1701&x1702)<<(x1703/x1704));

    if (t193 != 9284LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1705 = 21U;
	int16_t x1706 = INT16_MIN;
	int32_t x1707 = -1;

    t194 = ((x1705&x1706)<<(x1707/x1708));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1709 = -394394210LL;
	uint16_t x1710 = UINT16_MAX;
	static int8_t x1711 = 1;
	volatile int16_t x1712 = INT16_MAX;
	volatile int64_t t195 = -607527315280LL;

    t195 = ((x1709&x1710)<<(x1711/x1712));

    if (t195 != 1438LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1713 = UINT32_MAX;
	int16_t x1714 = -1;
	static int64_t x1715 = -3LL;
	uint32_t t196 = UINT32_MAX;

    t196 = ((x1713&x1714)<<(x1715/x1716));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1741 = INT64_MAX;
	volatile uint8_t x1742 = UINT8_MAX;
	uint32_t x1743 = 414U;
	volatile uint32_t x1744 = 128183781U;
	int64_t t197 = 8703645972271361LL;

    t197 = ((x1741&x1742)<<(x1743/x1744));

    if (t197 != 255LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1749 = INT32_MAX;
	uint16_t x1751 = UINT16_MAX;
	static int16_t x1752 = INT16_MAX;
	int32_t t198 = -49792;

    t198 = ((x1749&x1750)<<(x1751/x1752));

    if (t198 != 12172) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1764 = -1450;
	int32_t t199 = -313541;

    t199 = ((x1761&x1762)<<(x1763/x1764));

    if (t199 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

