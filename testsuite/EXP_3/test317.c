
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

uint32_t x5 = 15232U;
int8_t x9 = -32;
uint16_t x12 = 1U;
uint64_t x20 = UINT64_MAX;
int64_t x21 = 282395544620659LL;
static int64_t x24 = 101013LL;
uint16_t x27 = UINT16_MAX;
uint16_t x28 = 0U;
int32_t x33 = 3884678;
int8_t x39 = -6;
uint8_t x40 = 3U;
volatile int16_t x49 = INT16_MAX;
int8_t x50 = INT8_MIN;
int64_t x52 = -1LL;
int32_t x72 = 1843472;
uint64_t x84 = 293327591159239LLU;
int8_t x97 = INT8_MIN;
uint16_t x99 = UINT16_MAX;
static volatile int32_t x100 = 421575;
static volatile int32_t t20 = -8776;
volatile int64_t x114 = 596787LL;
int16_t x115 = INT16_MIN;
static uint8_t x119 = 2U;
int32_t t25 = -6;
int8_t x124 = 0;
static int32_t x128 = INT32_MIN;
int32_t t27 = -1;
int64_t x130 = -80742098957253LL;
volatile int64_t x132 = -4193867LL;
int32_t t28 = 238964410;
uint8_t x133 = UINT8_MAX;
static uint64_t x134 = 31116LLU;
int8_t x137 = INT8_MIN;
volatile uint64_t x140 = 39495171LLU;
uint32_t x141 = 20538944U;
int32_t t34 = -412069586;
volatile uint16_t x160 = UINT16_MAX;
volatile int32_t t35 = -155746960;
static uint32_t x167 = 1255990058U;
volatile int16_t x168 = -1;
uint8_t x169 = 2U;
static int16_t x170 = INT16_MIN;
uint16_t x175 = 537U;
int8_t x182 = INT8_MIN;
int8_t x184 = -1;
int16_t x189 = INT16_MAX;
int32_t t42 = 269;
volatile uint32_t x193 = 125074611U;
volatile int32_t x199 = INT32_MIN;
uint32_t x205 = 2U;
int8_t x211 = 0;
volatile int8_t x215 = INT8_MIN;
uint16_t x216 = 8U;
int64_t x223 = INT64_MAX;
uint64_t x225 = 5387897LLU;
int32_t x226 = INT32_MIN;
int8_t x228 = -1;
int8_t x229 = INT8_MIN;
int64_t x232 = INT64_MIN;
int32_t t51 = 405;
int32_t x233 = INT32_MIN;
volatile uint8_t x234 = UINT8_MAX;
static int16_t x237 = INT16_MIN;
int16_t x241 = -1;
uint8_t x242 = UINT8_MAX;
int32_t t54 = 148467;
int8_t x254 = 6;
uint8_t x259 = 1U;
static uint8_t x260 = 49U;
static volatile uint16_t x263 = 1356U;
volatile uint8_t x264 = 1U;
uint8_t x266 = 28U;
int8_t x267 = -1;
volatile int32_t t60 = -219879;
static int64_t x273 = -2694297150626LL;
uint16_t x281 = 421U;
int32_t x299 = INT32_MIN;
uint64_t x307 = 109LLU;
uint16_t x308 = UINT16_MAX;
int64_t x313 = INT64_MIN;
int16_t x314 = -1;
int32_t t69 = -7551140;
static uint16_t x323 = 813U;
int32_t x326 = INT32_MAX;
uint32_t x339 = 780077682U;
int16_t x340 = INT16_MIN;
int32_t t76 = 0;
int8_t x354 = INT8_MIN;
int32_t x355 = -1;
int16_t x360 = INT16_MAX;
int8_t x362 = -8;
int64_t x381 = -1LL;
int32_t x383 = -519505190;
int8_t x387 = -1;
volatile uint16_t x393 = 15272U;
static uint64_t x395 = 61461927321LLU;
volatile int64_t x398 = INT64_MAX;
uint8_t x402 = UINT8_MAX;
uint8_t x403 = 29U;
int64_t x410 = -3218619LL;
uint64_t x412 = UINT64_MAX;
volatile int32_t x413 = INT32_MAX;
volatile uint32_t x415 = 16309069U;
int16_t x417 = 4;
static volatile int32_t x418 = INT32_MIN;
int32_t t93 = 243983;
volatile int16_t x423 = INT16_MIN;
volatile uint16_t x424 = 63U;
int16_t x429 = 3925;
static int8_t x433 = INT8_MIN;
int16_t x434 = INT16_MAX;
static int32_t t97 = 248114;
static int32_t x441 = INT32_MIN;
int32_t t99 = -3456232;
static int32_t t100 = 6348;
uint8_t x449 = UINT8_MAX;
static int8_t x450 = INT8_MIN;
static int16_t x456 = INT16_MIN;
int64_t x461 = INT64_MIN;
int16_t x463 = -1;
int32_t t107 = -3628;
int16_t x478 = INT16_MAX;
uint32_t x485 = 641481U;
volatile int16_t x488 = INT16_MIN;
int32_t x490 = 866;
volatile int16_t x491 = INT16_MIN;
volatile int32_t x492 = -10554;
int16_t x494 = -1;
volatile int16_t x497 = -1;
int8_t x505 = INT8_MAX;
int16_t x507 = INT16_MAX;
static int32_t t114 = -2;
volatile uint64_t x509 = 2143100540745181LLU;
int8_t x512 = -1;
volatile int8_t x515 = INT8_MIN;
uint16_t x523 = 0U;
static volatile int32_t t117 = 1934008;
int64_t x526 = INT64_MAX;
int8_t x527 = -1;
volatile int32_t t118 = 6142;
uint32_t x534 = 4326536U;
int8_t x535 = INT8_MIN;
int32_t x539 = INT32_MIN;
int16_t x541 = -13;
static int32_t x543 = INT32_MIN;
static int16_t x545 = 189;
uint16_t x546 = 36U;
int8_t x548 = -28;
volatile int32_t t123 = 59;
volatile int16_t x554 = 1;
static volatile int32_t t125 = -245409;
int64_t x557 = 18260878LL;
uint8_t x568 = UINT8_MAX;
int32_t t127 = 419087527;
int64_t x569 = 105921644867378172LL;
int16_t x572 = 15259;
static volatile int32_t t128 = -656797;
static int64_t x577 = INT64_MIN;
int32_t x578 = -1;
int64_t x579 = INT64_MIN;
static uint64_t x581 = 2LLU;
static int64_t x584 = -1LL;
static int16_t x586 = INT16_MAX;
static volatile int32_t x590 = -222934881;
uint32_t x592 = 593635U;
int32_t x604 = -2488828;
int16_t x618 = 54;
uint32_t x619 = 2460U;
int32_t t137 = 0;
static uint8_t x622 = UINT8_MAX;
int16_t x628 = INT16_MAX;
int8_t x630 = -14;
volatile int64_t x633 = -3319444487331LL;
uint16_t x634 = 23U;
uint64_t x647 = UINT64_MAX;
static int32_t t144 = 16139;
volatile uint16_t x659 = UINT16_MAX;
volatile int32_t t145 = 7805;
int32_t x661 = INT32_MAX;
int16_t x668 = 6;
volatile uint32_t x671 = 386999896U;
volatile int16_t x675 = -383;
int32_t x676 = INT32_MIN;
int64_t x679 = -1LL;
int16_t x680 = -1;
volatile int32_t t151 = 1911;
static uint16_t x692 = UINT16_MAX;
static volatile int32_t t153 = 40117793;
static volatile int32_t t154 = 138411;
uint32_t x700 = 1600U;
volatile int8_t x704 = 0;
int16_t x709 = 1;
static uint8_t x716 = 1U;
int32_t x720 = -10614104;
int64_t x721 = INT64_MIN;
uint16_t x730 = 55U;
uint8_t x738 = 2U;
int32_t t165 = -4175064;
int8_t x742 = -26;
uint32_t x746 = UINT32_MAX;
uint8_t x749 = 8U;
int64_t x752 = -1794371329504062726LL;
int8_t x761 = INT8_MIN;
uint16_t x763 = UINT16_MAX;
volatile int32_t t171 = -1548;
int32_t x765 = 56346;
static uint64_t x768 = UINT64_MAX;
volatile int32_t t172 = -729728335;
volatile int32_t t173 = -377158;
uint8_t x774 = UINT8_MAX;
static uint32_t x780 = 198185U;
int8_t x782 = INT8_MAX;
volatile int32_t t178 = 1753;
int16_t x799 = 23;
volatile int32_t t180 = -630535817;
volatile int8_t x810 = 35;
uint32_t x814 = 673998U;
int32_t x823 = -1;
int32_t x824 = -1553;
static int8_t x826 = INT8_MIN;
int8_t x835 = INT8_MAX;
uint64_t x840 = 428LLU;
static volatile int32_t t187 = -42575251;
int64_t x845 = -1LL;
int64_t x849 = INT64_MIN;
int16_t x855 = INT16_MIN;
volatile int32_t t192 = -884439;
int64_t x876 = INT64_MAX;
volatile int32_t t193 = -117120710;
int32_t t195 = -72504221;
static uint32_t x892 = 92472U;
volatile int8_t x899 = -1;
static uint8_t x901 = UINT8_MAX;


void f0(void) {
    	volatile int8_t x6 = INT8_MIN;
	static int8_t x7 = INT8_MIN;
	volatile int64_t x8 = -1LL;
	volatile int32_t t0 = 136361;

    t0 = ((x5>x6)>(x7-x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x10 = 7075U;
	uint16_t x11 = 3U;
	static int32_t t1 = 6;

    t1 = ((x9>x10)>(x11-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = -1;
	uint32_t x18 = 656840525U;
	uint16_t x19 = UINT16_MAX;
	int32_t t2 = 141;

    t2 = ((x17>x18)>(x19-x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x22 = -1;
	int32_t x23 = INT32_MIN;
	int32_t t3 = 15;

    t3 = ((x21>x22)>(x23-x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = 5;
	volatile int32_t t4 = 10;

    t4 = ((x25>x26)>(x27-x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 3986123473994351LLU;
	volatile uint8_t x30 = UINT8_MAX;
	int64_t x31 = -1LL;
	uint64_t x32 = 340LLU;
	int32_t t5 = 1195653;

    t5 = ((x29>x30)>(x31-x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x34 = 63U;
	int32_t x35 = 572775299;
	int8_t x36 = INT8_MAX;
	int32_t t6 = 1;

    t6 = ((x33>x34)>(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int32_t t7 = -3;

    t7 = ((x37>x38)>(x39-x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x41 = 57U;
	uint64_t x42 = UINT64_MAX;
	static volatile int32_t x43 = INT32_MIN;
	int16_t x44 = -1;
	static volatile int32_t t8 = 71154;

    t8 = ((x41>x42)>(x43-x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x45 = 10682U;
	uint8_t x46 = UINT8_MAX;
	uint8_t x47 = UINT8_MAX;
	uint32_t x48 = 393409435U;
	int32_t t9 = -1634456;

    t9 = ((x45>x46)>(x47-x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x51 = 3;
	volatile int32_t t10 = -10942;

    t10 = ((x49>x50)>(x51-x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = UINT32_MAX;
	static int16_t x54 = 1023;
	volatile uint32_t x55 = 937527518U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -13003;

    t11 = ((x53>x54)>(x55-x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -1;
	static volatile uint32_t x58 = UINT32_MAX;
	int8_t x59 = -1;
	uint64_t x60 = 2025273341635LLU;
	volatile int32_t t12 = -15;

    t12 = ((x57>x58)>(x59-x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x65 = 14004152422279516LLU;
	int32_t x66 = 11574;
	int64_t x67 = -510LL;
	int8_t x68 = INT8_MIN;
	volatile int32_t t13 = 8;

    t13 = ((x65>x66)>(x67-x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x69 = -3331909978LL;
	static int64_t x70 = -1LL;
	volatile int8_t x71 = -1;
	int32_t t14 = 129;

    t14 = ((x69>x70)>(x71-x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	volatile int32_t x75 = INT32_MIN;
	static int32_t x76 = -1;
	volatile int32_t t15 = -6420923;

    t15 = ((x73>x74)>(x75-x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MIN;
	int8_t x78 = 14;
	int32_t x79 = 0;
	int16_t x80 = INT16_MIN;
	volatile int32_t t16 = -899874720;

    t16 = ((x77>x78)>(x79-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x81 = 4U;
	int64_t x82 = -107156921559039LL;
	uint16_t x83 = 12151U;
	volatile int32_t t17 = -55886760;

    t17 = ((x81>x82)>(x83-x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = -668;
	int16_t x90 = -90;
	int32_t x91 = INT32_MAX;
	static uint64_t x92 = 4037033385764365571LLU;
	volatile int32_t t18 = 610;

    t18 = ((x89>x90)>(x91-x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = -1LL;
	int64_t x94 = INT64_MIN;
	static uint32_t x95 = 565591U;
	uint32_t x96 = 938744U;
	volatile int32_t t19 = 210;

    t19 = ((x93>x94)>(x95-x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x98 = INT32_MIN;

    t20 = ((x97>x98)>(x99-x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	volatile uint8_t x103 = 4U;
	volatile int8_t x104 = INT8_MIN;
	int32_t t21 = 40675;

    t21 = ((x101>x102)>(x103-x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x105 = INT16_MAX;
	int64_t x106 = -114096082LL;
	int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t22 = 72778;

    t22 = ((x105>x106)>(x107-x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 53U;
	static uint64_t x111 = UINT64_MAX;
	int32_t x112 = 8;
	volatile int32_t t23 = -34432655;

    t23 = ((x109>x110)>(x111-x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x113 = -212LL;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t24 = -1465;

    t24 = ((x113>x114)>(x115-x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x117 = INT64_MAX;
	volatile int16_t x118 = -1;
	uint32_t x120 = UINT32_MAX;

    t25 = ((x117>x118)>(x119-x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	int16_t x123 = 5740;
	volatile int32_t t26 = 66211608;

    t26 = ((x121>x122)>(x123-x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MAX;
	int32_t x127 = -119052060;

    t27 = ((x125>x126)>(x127-x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x129 = INT64_MIN;
	int64_t x131 = -1LL;

    t28 = ((x129>x130)>(x131-x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MAX;
	int32_t t29 = -1264;

    t29 = ((x133>x134)>(x135-x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x138 = -3263326268114LL;
	int16_t x139 = INT16_MIN;
	volatile int32_t t30 = 765941;

    t30 = ((x137>x138)>(x139-x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = 1849;
	volatile int32_t t31 = -15472678;

    t31 = ((x141>x142)>(x143-x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x145 = 10175U;
	uint32_t x146 = 24027U;
	uint8_t x147 = 5U;
	int64_t x148 = -1LL;
	volatile int32_t t32 = -151808;

    t32 = ((x145>x146)>(x147-x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x149 = 17U;
	int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MIN;
	int8_t x152 = -5;
	volatile int32_t t33 = -5;

    t33 = ((x149>x150)>(x151-x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x153 = UINT16_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;

    t34 = ((x153>x154)>(x155-x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x157 = -1729240;
	volatile int64_t x158 = -1LL;
	uint32_t x159 = 104U;

    t35 = ((x157>x158)>(x159-x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x161 = 0U;
	int32_t x162 = 1;
	static int32_t x163 = INT32_MIN;
	uint64_t x164 = UINT64_MAX;
	static volatile int32_t t36 = -316697308;

    t36 = ((x161>x162)>(x163-x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = INT16_MIN;
	uint8_t x166 = 18U;
	int32_t t37 = -5468;

    t37 = ((x165>x166)>(x167-x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x171 = 128203127;
	int64_t x172 = -1LL;
	int32_t t38 = 1822128;

    t38 = ((x169>x170)>(x171-x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x173 = 74421LLU;
	uint16_t x174 = UINT16_MAX;
	static int64_t x176 = -180461834LL;
	static int32_t t39 = -483552173;

    t39 = ((x173>x174)>(x175-x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x181 = UINT16_MAX;
	uint32_t x183 = 7U;
	int32_t t40 = -35864;

    t40 = ((x181>x182)>(x183-x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	int64_t x188 = 64741706LL;
	volatile int32_t t41 = -36;

    t41 = ((x185>x186)>(x187-x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x190 = INT64_MIN;
	volatile int32_t x191 = -1;
	int32_t x192 = INT32_MIN;

    t42 = ((x189>x190)>(x191-x192));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x194 = 2U;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MAX;
	int32_t t43 = 252;

    t43 = ((x193>x194)>(x195-x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 29708U;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t44 = 1875051;

    t44 = ((x197>x198)>(x199-x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x206 = 2;
	int8_t x207 = 1;
	int8_t x208 = INT8_MIN;
	volatile int32_t t45 = 319;

    t45 = ((x205>x206)>(x207-x208));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x209 = UINT64_MAX;
	int8_t x210 = 3;
	int16_t x212 = INT16_MIN;
	volatile int32_t t46 = 20902;

    t46 = ((x209>x210)>(x211-x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x213 = UINT64_MAX;
	int16_t x214 = 1;
	volatile int32_t t47 = -159;

    t47 = ((x213>x214)>(x215-x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = -244107164LL;
	static uint8_t x218 = UINT8_MAX;
	static int64_t x219 = -9415136LL;
	int32_t x220 = -289;
	static volatile int32_t t48 = -2967448;

    t48 = ((x217>x218)>(x219-x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t49 = -17;

    t49 = ((x221>x222)>(x223-x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x227 = UINT64_MAX;
	int32_t t50 = -73;

    t50 = ((x225>x226)>(x227-x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;

    t51 = ((x229>x230)>(x231-x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x235 = 1U;
	uint32_t x236 = 1069148753U;
	volatile int32_t t52 = -4;

    t52 = ((x233>x234)>(x235-x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x238 = INT16_MAX;
	int32_t x239 = INT32_MIN;
	static int16_t x240 = INT16_MIN;
	static volatile int32_t t53 = -3412;

    t53 = ((x237>x238)>(x239-x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x243 = 10730LLU;
	int64_t x244 = INT64_MIN;

    t54 = ((x241>x242)>(x243-x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x245 = 754221LLU;
	int16_t x246 = 26;
	int8_t x247 = INT8_MIN;
	static uint8_t x248 = 105U;
	volatile int32_t t55 = -7685;

    t55 = ((x245>x246)>(x247-x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x249 = -68;
	static int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -61;
	static int32_t t56 = -678460;

    t56 = ((x249>x250)>(x251-x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = INT64_MAX;
	static uint8_t x255 = 17U;
	static int16_t x256 = INT16_MIN;
	int32_t t57 = 0;

    t57 = ((x253>x254)>(x255-x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x257 = INT64_MIN;
	static uint16_t x258 = 2U;
	static volatile int32_t t58 = -818886145;

    t58 = ((x257>x258)>(x259-x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = INT64_MAX;
	int8_t x262 = INT8_MIN;
	static volatile int32_t t59 = -15;

    t59 = ((x261>x262)>(x263-x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = UINT32_MAX;
	int16_t x268 = -1;

    t60 = ((x265>x266)>(x267-x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x269 = -1LL;
	int32_t x270 = INT32_MIN;
	int8_t x271 = 12;
	uint16_t x272 = 70U;
	int32_t t61 = 11;

    t61 = ((x269>x270)>(x271-x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x274 = -26;
	int8_t x275 = INT8_MIN;
	volatile uint64_t x276 = 6958889780624577LLU;
	static int32_t t62 = -842;

    t62 = ((x273>x274)>(x275-x276));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x282 = 3U;
	static int64_t x283 = INT64_MAX;
	uint32_t x284 = 38361U;
	static int32_t t63 = 57381;

    t63 = ((x281>x282)>(x283-x284));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MAX;
	static uint8_t x287 = 0U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t64 = -247499953;

    t64 = ((x285>x286)>(x287-x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x290 = 62039490LL;
	int8_t x291 = INT8_MIN;
	static uint64_t x292 = 1686142286LLU;
	static int32_t t65 = 2155;

    t65 = ((x289>x290)>(x291-x292));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x293 = UINT64_MAX;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -17431LL;
	static int32_t x296 = 108591606;
	volatile int32_t t66 = -184320010;

    t66 = ((x293>x294)>(x295-x296));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x297 = UINT64_MAX;
	uint64_t x298 = 21605673LLU;
	int64_t x300 = 512049882414913LL;
	int32_t t67 = 94670;

    t67 = ((x297>x298)>(x299-x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MIN;
	volatile int32_t t68 = -12;

    t68 = ((x305>x306)>(x307-x308));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x315 = 28;
	int32_t x316 = INT32_MAX;

    t69 = ((x313>x314)>(x315-x316));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x317 = 3;
	static volatile int32_t x318 = -55;
	int32_t x319 = INT32_MAX;
	int64_t x320 = -1LL;
	volatile int32_t t70 = -50526;

    t70 = ((x317>x318)>(x319-x320));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = INT32_MAX;
	int16_t x322 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t71 = -3712992;

    t71 = ((x321>x322)>(x323-x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = 1;
	int64_t x327 = -198546032943LL;
	volatile int32_t x328 = 3;
	static volatile int32_t t72 = 106373329;

    t72 = ((x325>x326)>(x327-x328));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = 2513323LL;
	uint64_t x330 = 33513319LLU;
	volatile uint16_t x331 = 425U;
	int8_t x332 = INT8_MIN;
	int32_t t73 = -1;

    t73 = ((x329>x330)>(x331-x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x333 = INT64_MAX;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	static int32_t x336 = INT32_MAX;
	int32_t t74 = -427708;

    t74 = ((x333>x334)>(x335-x336));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x337 = 4;
	uint8_t x338 = 9U;
	static int32_t t75 = -17796903;

    t75 = ((x337>x338)>(x339-x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = INT8_MAX;
	uint16_t x342 = 324U;
	static int64_t x343 = -241142850160767004LL;
	volatile int64_t x344 = INT64_MIN;

    t76 = ((x341>x342)>(x343-x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x349 = -1697922;
	static int64_t x350 = -6678704LL;
	static int32_t x351 = -1;
	uint64_t x352 = 6466217897524484875LLU;
	int32_t t77 = 4407;

    t77 = ((x349>x350)>(x351-x352));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x353 = 31;
	uint8_t x356 = UINT8_MAX;
	static int32_t t78 = 160;

    t78 = ((x353>x354)>(x355-x356));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x357 = 20U;
	uint64_t x358 = UINT64_MAX;
	volatile int64_t x359 = 542266816893485455LL;
	static int32_t t79 = -668;

    t79 = ((x357>x358)>(x359-x360));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x361 = -49LL;
	uint32_t x363 = 19647U;
	int32_t x364 = 0;
	static volatile int32_t t80 = 635714;

    t80 = ((x361>x362)>(x363-x364));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = INT16_MIN;
	volatile uint8_t x366 = UINT8_MAX;
	volatile uint16_t x367 = 2996U;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t81 = -2317787;

    t81 = ((x365>x366)>(x367-x368));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x369 = UINT64_MAX;
	static int16_t x370 = INT16_MAX;
	uint16_t x371 = 1U;
	uint64_t x372 = 36711731102581LLU;
	volatile int32_t t82 = 2080225;

    t82 = ((x369>x370)>(x371-x372));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x377 = -2695925181771801LL;
	volatile uint64_t x378 = 169119711132431911LLU;
	int8_t x379 = INT8_MIN;
	static uint8_t x380 = UINT8_MAX;
	volatile int32_t t83 = 613560;

    t83 = ((x377>x378)>(x379-x380));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x382 = -3107LL;
	static uint8_t x384 = 8U;
	int32_t t84 = -21;

    t84 = ((x381>x382)>(x383-x384));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MAX;
	static uint32_t x388 = 6U;
	int32_t t85 = -32;

    t85 = ((x385>x386)>(x387-x388));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x389 = 1585U;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = -7;
	static uint32_t x392 = 28U;
	int32_t t86 = 42997385;

    t86 = ((x389>x390)>(x391-x392));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x394 = -24;
	int64_t x396 = 4075619871000565201LL;
	int32_t t87 = -17898;

    t87 = ((x393>x394)>(x395-x396));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x397 = 2U;
	static int8_t x399 = -1;
	volatile int32_t x400 = INT32_MIN;
	int32_t t88 = -3;

    t88 = ((x397>x398)>(x399-x400));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x401 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t89 = 151256954;

    t89 = ((x401>x402)>(x403-x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x405 = 39U;
	volatile int64_t x406 = INT64_MAX;
	int8_t x407 = INT8_MIN;
	volatile uint32_t x408 = 1895331825U;
	int32_t t90 = -1117780;

    t90 = ((x405>x406)>(x407-x408));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x409 = -1LL;
	int16_t x411 = 1645;
	static int32_t t91 = -1;

    t91 = ((x409>x410)>(x411-x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x414 = -1;
	int32_t x416 = 2000732;
	int32_t t92 = 39286;

    t92 = ((x413>x414)>(x415-x416));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x419 = 6760U;
	int16_t x420 = INT16_MIN;

    t93 = ((x417>x418)>(x419-x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	int32_t t94 = 75;

    t94 = ((x421>x422)>(x423-x424));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x425 = 193U;
	int8_t x426 = INT8_MIN;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 101755772LLU;
	volatile int32_t t95 = 378;

    t95 = ((x425>x426)>(x427-x428));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x430 = UINT32_MAX;
	volatile uint64_t x431 = 366032396502962045LLU;
	static int64_t x432 = INT64_MAX;
	volatile int32_t t96 = 1;

    t96 = ((x429>x430)>(x431-x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x435 = 35056674LL;
	int32_t x436 = 1374;

    t97 = ((x433>x434)>(x435-x436));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x437 = 33U;
	volatile int8_t x438 = INT8_MAX;
	uint32_t x439 = UINT32_MAX;
	uint32_t x440 = UINT32_MAX;
	static int32_t t98 = -3;

    t98 = ((x437>x438)>(x439-x440));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x442 = 1933627U;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 30892885088LLU;

    t99 = ((x441>x442)>(x443-x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x445 = UINT64_MAX;
	int8_t x446 = INT8_MAX;
	int32_t x447 = -25295826;
	int8_t x448 = 1;

    t100 = ((x445>x446)>(x447-x448));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x451 = INT32_MAX;
	int16_t x452 = 9;
	int32_t t101 = 812958830;

    t101 = ((x449>x450)>(x451-x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x453 = 1056U;
	volatile uint32_t x454 = UINT32_MAX;
	volatile uint32_t x455 = UINT32_MAX;
	volatile int32_t t102 = 9;

    t102 = ((x453>x454)>(x455-x456));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = 7291;
	static int32_t x459 = INT32_MIN;
	int16_t x460 = -4173;
	int32_t t103 = -1660195;

    t103 = ((x457>x458)>(x459-x460));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x462 = INT8_MIN;
	int32_t x464 = -373;
	int32_t t104 = 15537;

    t104 = ((x461>x462)>(x463-x464));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = -3369;
	int32_t x466 = -12425354;
	static int16_t x467 = 15770;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t105 = -14157622;

    t105 = ((x465>x466)>(x467-x468));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	int8_t x470 = 8;
	uint32_t x471 = UINT32_MAX;
	uint8_t x472 = UINT8_MAX;
	int32_t t106 = 432418279;

    t106 = ((x469>x470)>(x471-x472));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x473 = INT16_MIN;
	uint32_t x474 = 1917U;
	int16_t x475 = INT16_MIN;
	static int16_t x476 = 290;

    t107 = ((x473>x474)>(x475-x476));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x477 = INT32_MAX;
	int16_t x479 = 703;
	volatile uint64_t x480 = UINT64_MAX;
	volatile int32_t t108 = 18068;

    t108 = ((x477>x478)>(x479-x480));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x481 = -1;
	static volatile int16_t x482 = INT16_MIN;
	volatile int16_t x483 = -1;
	int32_t x484 = INT32_MIN;
	int32_t t109 = -1;

    t109 = ((x481>x482)>(x483-x484));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x486 = -27341;
	int32_t x487 = INT32_MIN;
	int32_t t110 = -5;

    t110 = ((x485>x486)>(x487-x488));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x489 = -188347;
	volatile int32_t t111 = 53978464;

    t111 = ((x489>x490)>(x491-x492));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x493 = -1;
	uint8_t x495 = 121U;
	int8_t x496 = INT8_MAX;
	volatile int32_t t112 = -575;

    t112 = ((x493>x494)>(x495-x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x498 = -1;
	static volatile uint8_t x499 = 31U;
	volatile int16_t x500 = 0;
	volatile int32_t t113 = 1679366;

    t113 = ((x497>x498)>(x499-x500));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x506 = INT8_MIN;
	static int8_t x508 = INT8_MAX;

    t114 = ((x505>x506)>(x507-x508));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x510 = INT8_MAX;
	uint64_t x511 = 8198367639305221LLU;
	volatile int32_t t115 = -19;

    t115 = ((x509>x510)>(x511-x512));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x513 = UINT16_MAX;
	static int16_t x514 = 3058;
	uint8_t x516 = UINT8_MAX;
	int32_t t116 = 1789;

    t116 = ((x513>x514)>(x515-x516));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x521 = INT8_MAX;
	uint16_t x522 = UINT16_MAX;
	static uint64_t x524 = UINT64_MAX;

    t117 = ((x521>x522)>(x523-x524));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x525 = 7194;
	int16_t x528 = -838;

    t118 = ((x525>x526)>(x527-x528));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x529 = 0;
	int8_t x530 = -3;
	int32_t x531 = -152;
	volatile int64_t x532 = INT64_MIN;
	volatile int32_t t119 = -6065;

    t119 = ((x529>x530)>(x531-x532));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x536 = -1;
	volatile int32_t t120 = 631429298;

    t120 = ((x533>x534)>(x535-x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = 4;
	uint16_t x538 = UINT16_MAX;
	int8_t x540 = INT8_MIN;
	volatile int32_t t121 = -29127068;

    t121 = ((x537>x538)>(x539-x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x542 = -1;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t122 = 966995;

    t122 = ((x541>x542)>(x543-x544));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x547 = 3;

    t123 = ((x545>x546)>(x547-x548));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x549 = INT16_MAX;
	static uint64_t x550 = 1093507718525427448LLU;
	static int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MIN;
	volatile int32_t t124 = 113;

    t124 = ((x549>x550)>(x551-x552));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x553 = -1;
	uint32_t x555 = 92669926U;
	volatile int32_t x556 = INT32_MIN;

    t125 = ((x553>x554)>(x555-x556));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x558 = 10675515233168LL;
	uint16_t x559 = UINT16_MAX;
	int32_t x560 = INT32_MAX;
	int32_t t126 = -207255;

    t126 = ((x557>x558)>(x559-x560));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x565 = INT32_MAX;
	static uint32_t x566 = 1275331742U;
	static volatile int16_t x567 = -1;

    t127 = ((x565>x566)>(x567-x568));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x570 = 31;
	int32_t x571 = -446842;

    t128 = ((x569>x570)>(x571-x572));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x580 = INT16_MIN;
	int32_t t129 = -101273532;

    t129 = ((x577>x578)>(x579-x580));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x582 = 13307923U;
	int8_t x583 = INT8_MIN;
	int32_t t130 = 53;

    t130 = ((x581>x582)>(x583-x584));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x585 = 47;
	int32_t x587 = INT32_MIN;
	int8_t x588 = INT8_MIN;
	volatile int32_t t131 = 47660462;

    t131 = ((x585>x586)>(x587-x588));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x589 = 7435U;
	static uint16_t x591 = UINT16_MAX;
	int32_t t132 = 3;

    t132 = ((x589>x590)>(x591-x592));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x593 = 1047724U;
	volatile int64_t x594 = -97LL;
	uint16_t x595 = 3445U;
	volatile uint8_t x596 = 15U;
	int32_t t133 = 3;

    t133 = ((x593>x594)>(x595-x596));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x601 = -1LL;
	int32_t x602 = -107435;
	static int16_t x603 = INT16_MIN;
	int32_t t134 = -1873;

    t134 = ((x601>x602)>(x603-x604));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x605 = 24487676631LLU;
	static int8_t x606 = 3;
	volatile uint32_t x607 = 92924U;
	uint16_t x608 = UINT16_MAX;
	int32_t t135 = -1264208;

    t135 = ((x605>x606)>(x607-x608));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x609 = -1;
	uint64_t x610 = 34401177000584646LLU;
	static uint32_t x611 = 1U;
	uint8_t x612 = 25U;
	static volatile int32_t t136 = -21;

    t136 = ((x609>x610)>(x611-x612));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x617 = 327U;
	int32_t x620 = INT32_MIN;

    t137 = ((x617>x618)>(x619-x620));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x621 = 241270552U;
	uint8_t x623 = 106U;
	uint32_t x624 = 88222U;
	volatile int32_t t138 = -5083981;

    t138 = ((x621>x622)>(x623-x624));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x625 = INT8_MIN;
	volatile uint8_t x626 = UINT8_MAX;
	static uint8_t x627 = 45U;
	volatile int32_t t139 = -22528;

    t139 = ((x625>x626)>(x627-x628));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x629 = INT8_MAX;
	int32_t x631 = INT32_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t140 = -438228;

    t140 = ((x629>x630)>(x631-x632));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x635 = 148;
	static int64_t x636 = 111272LL;
	static int32_t t141 = 1620;

    t141 = ((x633>x634)>(x635-x636));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x641 = UINT32_MAX;
	volatile uint16_t x642 = 57U;
	int32_t x643 = -488;
	static volatile int64_t x644 = -1LL;
	int32_t t142 = -69;

    t142 = ((x641>x642)>(x643-x644));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x645 = INT16_MIN;
	static uint32_t x646 = 316762U;
	volatile int64_t x648 = INT64_MAX;
	int32_t t143 = 213495217;

    t143 = ((x645>x646)>(x647-x648));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x649 = 106121363936LL;
	static uint64_t x650 = 203206231510718LLU;
	uint64_t x651 = UINT64_MAX;
	int64_t x652 = INT64_MIN;

    t144 = ((x649>x650)>(x651-x652));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = -1;
	static volatile int64_t x660 = 42016912788LL;

    t145 = ((x657>x658)>(x659-x660));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x662 = 29;
	volatile uint64_t x663 = 4LLU;
	int64_t x664 = INT64_MAX;
	int32_t t146 = -42;

    t146 = ((x661>x662)>(x663-x664));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x665 = -1LL;
	int32_t x666 = 834536433;
	int16_t x667 = INT16_MIN;
	volatile int32_t t147 = -7887;

    t147 = ((x665>x666)>(x667-x668));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x669 = -1;
	int8_t x670 = -1;
	int32_t x672 = INT32_MAX;
	int32_t t148 = -172368;

    t148 = ((x669>x670)>(x671-x672));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x673 = 62;
	int64_t x674 = INT64_MIN;
	static int32_t t149 = 32347980;

    t149 = ((x673>x674)>(x675-x676));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x677 = INT8_MIN;
	static volatile uint8_t x678 = 22U;
	volatile int32_t t150 = 0;

    t150 = ((x677>x678)>(x679-x680));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x681 = UINT16_MAX;
	int64_t x682 = -1LL;
	int8_t x683 = INT8_MIN;
	volatile uint64_t x684 = UINT64_MAX;

    t151 = ((x681>x682)>(x683-x684));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x685 = INT64_MAX;
	static volatile int8_t x686 = -9;
	static int16_t x687 = 96;
	uint32_t x688 = 259593160U;
	static volatile int32_t t152 = 3856;

    t152 = ((x685>x686)>(x687-x688));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x689 = -1;
	int16_t x690 = INT16_MIN;
	int16_t x691 = INT16_MAX;

    t153 = ((x689>x690)>(x691-x692));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x693 = INT32_MIN;
	int32_t x694 = 82062062;
	int64_t x695 = 1365144LL;
	int8_t x696 = INT8_MIN;

    t154 = ((x693>x694)>(x695-x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x697 = UINT16_MAX;
	int64_t x698 = -1LL;
	static volatile int64_t x699 = -1LL;
	int32_t t155 = 420;

    t155 = ((x697>x698)>(x699-x700));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile int64_t x702 = -246659344942782LL;
	int16_t x703 = INT16_MIN;
	static volatile int32_t t156 = -46729580;

    t156 = ((x701>x702)>(x703-x704));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = -3;
	volatile uint16_t x706 = UINT16_MAX;
	int32_t x707 = -1;
	int8_t x708 = INT8_MIN;
	volatile int32_t t157 = -980968;

    t157 = ((x705>x706)>(x707-x708));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x710 = 2U;
	int16_t x711 = -1;
	int16_t x712 = INT16_MIN;
	int32_t t158 = 3942;

    t158 = ((x709>x710)>(x711-x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x713 = 215U;
	uint32_t x714 = 0U;
	uint32_t x715 = UINT32_MAX;
	volatile int32_t t159 = 3143;

    t159 = ((x713>x714)>(x715-x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x717 = -1;
	volatile int8_t x718 = -19;
	int16_t x719 = INT16_MAX;
	volatile int32_t t160 = 748668112;

    t160 = ((x717>x718)>(x719-x720));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x722 = INT64_MAX;
	int16_t x723 = INT16_MAX;
	int32_t x724 = INT32_MAX;
	volatile int32_t t161 = -14;

    t161 = ((x721>x722)>(x723-x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x725 = INT32_MAX;
	static int8_t x726 = INT8_MAX;
	uint32_t x727 = 4174U;
	int8_t x728 = -1;
	volatile int32_t t162 = -31;

    t162 = ((x725>x726)>(x727-x728));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x729 = 777188548LLU;
	int8_t x731 = INT8_MIN;
	static int8_t x732 = -1;
	int32_t t163 = -65365;

    t163 = ((x729>x730)>(x731-x732));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x733 = INT16_MIN;
	volatile int16_t x734 = 132;
	int64_t x735 = INT64_MIN;
	uint64_t x736 = UINT64_MAX;
	volatile int32_t t164 = 189555797;

    t164 = ((x733>x734)>(x735-x736));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x737 = INT16_MAX;
	uint8_t x739 = 21U;
	int8_t x740 = -1;

    t165 = ((x737>x738)>(x739-x740));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x741 = -1LL;
	volatile uint64_t x743 = UINT64_MAX;
	int8_t x744 = INT8_MAX;
	static int32_t t166 = -3;

    t166 = ((x741>x742)>(x743-x744));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x745 = -2704173;
	int16_t x747 = INT16_MIN;
	int16_t x748 = 11;
	int32_t t167 = 3;

    t167 = ((x745>x746)>(x747-x748));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x750 = -1;
	static int32_t x751 = -193671026;
	int32_t t168 = -3835853;

    t168 = ((x749>x750)>(x751-x752));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x753 = INT8_MIN;
	uint64_t x754 = UINT64_MAX;
	static int64_t x755 = 75LL;
	uint8_t x756 = 3U;
	int32_t t169 = -7417384;

    t169 = ((x753>x754)>(x755-x756));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x757 = UINT8_MAX;
	int64_t x758 = INT64_MAX;
	static volatile uint8_t x759 = 3U;
	static int16_t x760 = INT16_MIN;
	static int32_t t170 = 1886684;

    t170 = ((x757>x758)>(x759-x760));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x762 = INT16_MAX;
	volatile int16_t x764 = -1;

    t171 = ((x761>x762)>(x763-x764));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x766 = INT64_MIN;
	int8_t x767 = -5;

    t172 = ((x765>x766)>(x767-x768));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x769 = INT64_MAX;
	static uint8_t x770 = 0U;
	static int8_t x771 = INT8_MIN;
	static volatile int64_t x772 = INT64_MIN;

    t173 = ((x769>x770)>(x771-x772));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x773 = -1652194LL;
	static uint32_t x775 = UINT32_MAX;
	static volatile int8_t x776 = -1;
	int32_t t174 = 34780452;

    t174 = ((x773>x774)>(x775-x776));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x777 = INT16_MAX;
	volatile int8_t x778 = INT8_MIN;
	int32_t x779 = INT32_MIN;
	int32_t t175 = -96;

    t175 = ((x777>x778)>(x779-x780));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x781 = -1;
	int8_t x783 = -1;
	int64_t x784 = 547977329869LL;
	int32_t t176 = 0;

    t176 = ((x781>x782)>(x783-x784));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = 1U;
	int64_t x786 = -2726541478063LL;
	uint8_t x787 = 7U;
	uint32_t x788 = 290U;
	static int32_t t177 = -2;

    t177 = ((x785>x786)>(x787-x788));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x793 = 120542741209582308LLU;
	volatile int32_t x794 = INT32_MIN;
	volatile int64_t x795 = 1584347LL;
	static int8_t x796 = -1;

    t178 = ((x793>x794)>(x795-x796));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x797 = 0;
	uint32_t x798 = 117695U;
	int16_t x800 = -3560;
	int32_t t179 = -329081;

    t179 = ((x797>x798)>(x799-x800));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x805 = 1457U;
	volatile int64_t x806 = 3737109586350LL;
	int16_t x807 = INT16_MAX;
	int16_t x808 = INT16_MAX;

    t180 = ((x805>x806)>(x807-x808));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x809 = UINT8_MAX;
	uint16_t x811 = UINT16_MAX;
	int8_t x812 = INT8_MIN;
	int32_t t181 = -5563980;

    t181 = ((x809>x810)>(x811-x812));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x813 = -1;
	int16_t x815 = INT16_MAX;
	uint32_t x816 = UINT32_MAX;
	volatile int32_t t182 = 5415981;

    t182 = ((x813>x814)>(x815-x816));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x821 = INT16_MIN;
	static int16_t x822 = -1;
	int32_t t183 = 12974155;

    t183 = ((x821>x822)>(x823-x824));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x825 = UINT16_MAX;
	int64_t x827 = INT64_MIN;
	int8_t x828 = INT8_MIN;
	int32_t t184 = 62841156;

    t184 = ((x825>x826)>(x827-x828));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x829 = 0U;
	static uint32_t x830 = 1258282U;
	int16_t x831 = -6;
	int32_t x832 = -1;
	volatile int32_t t185 = 346931;

    t185 = ((x829>x830)>(x831-x832));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x833 = 53404793585863080LLU;
	static int16_t x834 = -837;
	uint8_t x836 = 0U;
	volatile int32_t t186 = -60;

    t186 = ((x833>x834)>(x835-x836));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x837 = 0;
	static uint32_t x838 = 31117912U;
	uint8_t x839 = UINT8_MAX;

    t187 = ((x837>x838)>(x839-x840));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x846 = INT32_MIN;
	int16_t x847 = 95;
	int32_t x848 = -2;
	static int32_t t188 = -21755929;

    t188 = ((x845>x846)>(x847-x848));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x850 = -1658;
	int8_t x851 = -1;
	static uint16_t x852 = 6506U;
	volatile int32_t t189 = -233899935;

    t189 = ((x849>x850)>(x851-x852));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x853 = UINT64_MAX;
	static volatile int64_t x854 = -1LL;
	int8_t x856 = -1;
	static int32_t t190 = -7461;

    t190 = ((x853>x854)>(x855-x856));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x861 = 2753246222892091LLU;
	int8_t x862 = INT8_MIN;
	int8_t x863 = INT8_MIN;
	uint32_t x864 = UINT32_MAX;
	static int32_t t191 = -239136768;

    t191 = ((x861>x862)>(x863-x864));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x869 = -5794350;
	uint64_t x870 = UINT64_MAX;
	uint8_t x871 = UINT8_MAX;
	uint64_t x872 = 1795822616328LLU;

    t192 = ((x869>x870)>(x871-x872));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x873 = INT8_MIN;
	uint8_t x874 = UINT8_MAX;
	static int64_t x875 = 511368590482LL;

    t193 = ((x873>x874)>(x875-x876));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x877 = INT16_MIN;
	uint32_t x878 = UINT32_MAX;
	int64_t x879 = -58748LL;
	int64_t x880 = INT64_MIN;
	int32_t t194 = 689679858;

    t194 = ((x877>x878)>(x879-x880));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x881 = 13;
	static int32_t x882 = INT32_MIN;
	int32_t x883 = INT32_MIN;
	static int64_t x884 = -105061LL;

    t195 = ((x881>x882)>(x883-x884));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x889 = INT64_MIN;
	volatile uint8_t x890 = 22U;
	int64_t x891 = INT64_MAX;
	volatile int32_t t196 = 7;

    t196 = ((x889>x890)>(x891-x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x893 = 5353U;
	int8_t x894 = -4;
	int16_t x895 = INT16_MAX;
	uint64_t x896 = UINT64_MAX;
	volatile int32_t t197 = 990685;

    t197 = ((x893>x894)>(x895-x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x897 = INT8_MIN;
	volatile uint16_t x898 = 10663U;
	int32_t x900 = -1;
	int32_t t198 = 174297;

    t198 = ((x897>x898)>(x899-x900));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x902 = INT16_MIN;
	int64_t x903 = INT64_MAX;
	volatile int16_t x904 = 339;
	int32_t t199 = 11827;

    t199 = ((x901>x902)>(x903-x904));

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

