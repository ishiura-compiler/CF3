
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

int16_t x3 = INT16_MAX;
static int16_t x7 = INT16_MIN;
static int32_t x8 = 3;
int64_t x15 = -1LL;
volatile int64_t t3 = 64289LL;
uint32_t x21 = UINT32_MAX;
int8_t x22 = INT8_MIN;
uint64_t t6 = 16909544251LLU;
int8_t x33 = INT8_MAX;
static int64_t x37 = INT64_MIN;
uint16_t x38 = 1641U;
static volatile uint8_t x42 = UINT8_MAX;
volatile uint64_t t10 = 15565227453607417LLU;
int32_t t12 = -171865;
int16_t x57 = -48;
volatile int64_t x62 = -86302LL;
uint64_t x72 = UINT64_MAX;
int32_t x73 = -7847;
volatile int64_t x77 = -1LL;
int64_t x80 = -48726814LL;
volatile int32_t x91 = INT32_MAX;
int8_t x96 = -1;
static int32_t x102 = -1;
uint16_t x103 = UINT16_MAX;
int64_t x113 = INT64_MIN;
int32_t x118 = -1;
int16_t x128 = INT16_MAX;
int32_t t27 = -46556;
uint32_t x137 = 138148U;
int64_t x141 = 31141686623LL;
int32_t x143 = INT32_MIN;
uint8_t x150 = 0U;
int32_t x154 = -5320;
int32_t x155 = 52146;
static uint64_t t32 = 115238641056808675LLU;
int64_t x157 = INT64_MIN;
int16_t x158 = INT16_MIN;
volatile int32_t t33 = 46;
static volatile int32_t t34 = INT32_MIN;
static volatile uint16_t x169 = 3U;
int16_t x170 = 14833;
int64_t x179 = -1751618392744LL;
static int32_t x184 = 20140;
static volatile int32_t t38 = -167266;
int64_t x189 = INT64_MIN;
int32_t x194 = INT32_MAX;
int8_t x195 = 1;
int32_t t40 = -96;
volatile int8_t x203 = -1;
uint64_t x206 = 1932475975801LLU;
static int32_t x207 = INT32_MIN;
volatile int32_t t43 = -3133890;
static volatile uint8_t x219 = 1U;
static int16_t x223 = INT16_MAX;
static volatile uint32_t t46 = 3872U;
uint16_t x225 = UINT16_MAX;
int16_t x228 = 39;
volatile uint64_t t48 = 18885119LLU;
static uint8_t x234 = UINT8_MAX;
uint8_t x235 = 19U;
uint16_t x243 = UINT16_MAX;
volatile uint16_t x244 = 1U;
int8_t x254 = INT8_MIN;
int32_t x258 = 309793200;
static int16_t x259 = 0;
uint64_t t54 = 4980LLU;
volatile int32_t x265 = INT32_MIN;
static int32_t t57 = -7;
int8_t x281 = -1;
volatile int32_t t58 = 0;
uint16_t x300 = 19U;
int64_t x302 = -2001275427LL;
uint64_t x312 = UINT64_MAX;
uint64_t t64 = 17696011LLU;
uint64_t x313 = UINT64_MAX;
volatile uint32_t x319 = UINT32_MAX;
int32_t t67 = -53;
int8_t x326 = -1;
volatile int16_t x327 = 12309;
volatile int64_t x333 = -70270334LL;
int32_t x343 = INT32_MIN;
volatile int32_t t72 = -9461286;
int64_t x359 = 4678242539254LL;
static int64_t t73 = -195390LL;
static uint8_t x373 = 25U;
volatile uint64_t x374 = 123LLU;
static uint32_t x376 = 5U;
static uint32_t t75 = 324U;
volatile int8_t x378 = 1;
volatile uint16_t x380 = 400U;
uint16_t x383 = 65U;
uint16_t x392 = 0U;
static uint32_t x405 = 10U;
uint64_t x408 = UINT64_MAX;
int16_t x410 = INT16_MAX;
static uint16_t x412 = UINT16_MAX;
static volatile int8_t x413 = INT8_MIN;
uint64_t x419 = 17889922134735LLU;
int32_t x424 = INT32_MAX;
int32_t t86 = 26962;
volatile uint8_t x432 = 3U;
static volatile int32_t x450 = -3923930;
int64_t x453 = INT64_MAX;
int16_t x459 = INT16_MAX;
int16_t x460 = 2;
volatile int32_t t92 = 47516;
int32_t t93 = -1;
int16_t x474 = INT16_MIN;
int8_t x482 = 22;
volatile int32_t x488 = -1;
uint32_t x500 = UINT32_MAX;
volatile uint64_t t99 = 153LLU;
int64_t x504 = -29839375792LL;
int32_t x508 = -61638;
uint32_t x514 = 50U;
volatile int8_t x518 = INT8_MAX;
int8_t x522 = INT8_MAX;
int32_t t106 = -410233;
int64_t x537 = INT64_MAX;
static int16_t x539 = -5968;
int64_t x543 = 1888414LL;
int64_t t109 = -1081800141795LL;
int8_t x548 = INT8_MAX;
int16_t x550 = INT16_MAX;
volatile int8_t x561 = INT8_MAX;
volatile uint8_t x574 = 1U;
volatile int32_t t117 = -6;
int8_t x581 = 4;
volatile int32_t t118 = 3;
uint8_t x601 = 0U;
static int16_t x606 = INT16_MIN;
int8_t x609 = INT8_MAX;
int64_t x610 = -1LL;
int32_t t126 = 47;
int32_t x621 = -136;
uint32_t x627 = UINT32_MAX;
uint32_t t128 = 0U;
int8_t x641 = -1;
volatile int32_t x646 = -37969515;
volatile int32_t t133 = 35;
volatile uint64_t x662 = 21211LLU;
uint8_t x664 = UINT8_MAX;
volatile int32_t t135 = -72755562;
static int8_t x665 = -1;
volatile uint64_t x672 = 240406370746LLU;
static volatile uint64_t t137 = 195295458LLU;
static int32_t x673 = INT32_MIN;
static volatile int32_t x676 = -1;
static int32_t t138 = 1239;
int16_t x678 = INT16_MIN;
int32_t t139 = INT32_MIN;
int8_t x686 = INT8_MAX;
int8_t x691 = 31;
static uint32_t x693 = 1193456087U;
static volatile int16_t x695 = INT16_MIN;
uint64_t x696 = UINT64_MAX;
volatile uint64_t t143 = 1904055823340317LLU;
volatile int32_t t144 = -396878454;
uint16_t x709 = UINT16_MAX;
int64_t x712 = -1LL;
static int8_t x715 = 0;
uint64_t t147 = 33564313591LLU;
uint16_t x719 = UINT16_MAX;
static uint8_t x728 = UINT8_MAX;
volatile uint32_t x729 = 219109U;
int8_t x734 = -1;
int64_t x736 = -27639261629728LL;
volatile uint64_t x738 = UINT64_MAX;
int16_t x740 = -1;
int16_t x741 = -2;
uint8_t x743 = UINT8_MAX;
int8_t x747 = 42;
int16_t x748 = -1;
volatile int16_t x756 = INT16_MAX;
int8_t x769 = 0;
volatile int32_t t159 = -1804356;
uint64_t x782 = UINT64_MAX;
int32_t x786 = INT32_MIN;
int64_t x798 = INT64_MIN;
int16_t x801 = -8442;
int64_t x806 = -1LL;
int8_t x819 = INT8_MIN;
int32_t x824 = 1;
static int16_t x825 = INT16_MIN;
volatile int64_t x828 = -13991268373487229LL;
volatile int32_t x837 = -13689734;
uint8_t x840 = UINT8_MAX;
volatile int8_t x847 = INT8_MIN;
volatile int8_t x856 = INT8_MAX;
volatile int64_t x858 = -1866517982452038LL;
volatile uint32_t x861 = 126507822U;
int16_t x862 = -6030;
uint64_t x869 = 289810725028LLU;
volatile uint16_t x874 = UINT16_MAX;
static int32_t x876 = -408;
volatile uint64_t t184 = 1675LLU;
volatile uint64_t x892 = UINT64_MAX;
volatile int32_t t188 = -1740951;
static int64_t t189 = 3646LL;
int16_t x909 = INT16_MAX;
uint8_t x913 = 1U;
int32_t x923 = -1;
volatile int64_t t195 = INT64_MAX;
volatile int64_t x938 = INT64_MIN;
static int32_t t198 = 8;
uint64_t x946 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MIN;
	int8_t x4 = -1;
	int32_t t0 = 2383312;

    t0 = (((x1!=x2)|x3)-x4);

    if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int32_t x6 = -1;
	int32_t t1 = 1548925;

    t1 = (((x5!=x6)|x7)-x8);

    if (t1 != -32771) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 34337087854LL;
	volatile int16_t x10 = INT16_MIN;
	volatile int8_t x11 = INT8_MIN;
	int8_t x12 = -1;
	int32_t t2 = -1;

    t2 = (((x9!=x10)|x11)-x12);

    if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	int8_t x16 = 11;

    t3 = (((x13!=x14)|x15)-x16);

    if (t3 != -12LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 194U;
	static volatile int32_t x18 = -1;
	static volatile int64_t x19 = 345987097LL;
	int16_t x20 = -1103;
	int64_t t4 = -359649322379LL;

    t4 = (((x17!=x18)|x19)-x20);

    if (t4 != 345988200LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x23 = INT64_MAX;
	volatile uint32_t x24 = 46206U;
	static int64_t t5 = 1117119424789LL;

    t5 = (((x21!=x22)|x23)-x24);

    if (t5 != 9223372036854729601LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 6994;
	uint16_t x26 = 1915U;
	uint64_t x27 = 20LLU;
	int8_t x28 = INT8_MAX;

    t6 = (((x25!=x26)|x27)-x28);

    if (t6 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -1;
	volatile int64_t t7 = 284453259247LL;

    t7 = (((x29!=x30)|x31)-x32);

    if (t7 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x34 = UINT64_MAX;
	int64_t x35 = INT64_MIN;
	volatile int16_t x36 = INT16_MIN;
	volatile int64_t t8 = 65565447520012LL;

    t8 = (((x33!=x34)|x35)-x36);

    if (t8 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = -1;
	volatile uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = -174303;

    t9 = (((x37!=x38)|x39)-x40);

    if (t9 != -256) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	volatile uint64_t x43 = 1844277LLU;
	uint32_t x44 = 2U;

    t10 = (((x41!=x42)|x43)-x44);

    if (t10 != 1844275LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MAX;
	static int32_t x46 = INT32_MIN;
	static volatile int64_t x47 = INT64_MAX;
	uint32_t x48 = 1002U;
	volatile int64_t t11 = -468393314535LL;

    t11 = (((x45!=x46)|x47)-x48);

    if (t11 != 9223372036854774805LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1LL;
	static uint16_t x54 = 10U;
	int32_t x55 = -2111;
	uint16_t x56 = UINT16_MAX;

    t12 = (((x53!=x54)|x55)-x56);

    if (t12 != -67646) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x58 = -1;
	volatile uint8_t x59 = 84U;
	int8_t x60 = 8;
	volatile int32_t t13 = -1;

    t13 = (((x57!=x58)|x59)-x60);

    if (t13 != 77) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = UINT32_MAX;
	static int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = 13132U;
	int32_t t14 = 578188363;

    t14 = (((x61!=x62)|x63)-x64);

    if (t14 != -45899) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = -1;
	uint64_t t15 = 8044939702304240LLU;

    t15 = (((x69!=x70)|x71)-x72);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x74 = INT16_MAX;
	uint16_t x75 = 7U;
	static int8_t x76 = INT8_MIN;
	int32_t t16 = -10874145;

    t16 = (((x73!=x74)|x75)-x76);

    if (t16 != 135) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x78 = -1LL;
	uint32_t x79 = 64921027U;
	volatile int64_t t17 = -28889041316050LL;

    t17 = (((x77!=x78)|x79)-x80);

    if (t17 != 113647841LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x85 = -1;
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = -1;
	int8_t x88 = 25;
	int32_t t18 = -71461889;

    t18 = (((x85!=x86)|x87)-x88);

    if (t18 != -26) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = -1;
	static int8_t x90 = INT8_MAX;
	int8_t x92 = 1;
	int32_t t19 = -1;

    t19 = (((x89!=x90)|x91)-x92);

    if (t19 != 2147483646) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = UINT32_MAX;
	int32_t x95 = -1;
	static volatile int32_t t20 = -2303;

    t20 = (((x93!=x94)|x95)-x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x97 = INT64_MIN;
	volatile uint64_t x98 = UINT64_MAX;
	static uint8_t x99 = UINT8_MAX;
	uint64_t x100 = 1418338LLU;
	volatile uint64_t t21 = 149258736376LLU;

    t21 = (((x97!=x98)|x99)-x100);

    if (t21 != 18446744073708133533LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x101 = UINT32_MAX;
	static int16_t x104 = -1;
	volatile int32_t t22 = 971953693;

    t22 = (((x101!=x102)|x103)-x104);

    if (t22 != 65536) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x114 = 3593;
	int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	volatile int32_t t23 = -26695039;

    t23 = (((x113!=x114)|x115)-x116);

    if (t23 != -2147483646) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = INT8_MIN;
	uint8_t x119 = 14U;
	int32_t x120 = 124;
	volatile int32_t t24 = 0;

    t24 = (((x117!=x118)|x119)-x120);

    if (t24 != -109) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x121 = 32U;
	static uint16_t x122 = UINT16_MAX;
	static int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MAX;
	volatile int32_t t25 = -1478402;

    t25 = (((x121!=x122)|x123)-x124);

    if (t25 != -65534) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x125 = INT16_MAX;
	uint64_t x126 = 30LLU;
	int16_t x127 = INT16_MAX;
	static int32_t t26 = 461666;

    t26 = (((x125!=x126)|x127)-x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x129 = 0;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;

    t27 = (((x129!=x130)|x131)-x132);

    if (t27 != -32639) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x138 = -1;
	static int8_t x139 = -1;
	int64_t x140 = INT64_MAX;
	int64_t t28 = INT64_MIN;

    t28 = (((x137!=x138)|x139)-x140);

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x142 = 0LL;
	volatile int64_t x144 = 101054470811614097LL;
	static int64_t t29 = -313988760453097276LL;

    t29 = (((x141!=x142)|x143)-x144);

    if (t29 != -101054472959097744LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x145 = 141U;
	uint16_t x146 = 2386U;
	uint32_t x147 = 83444541U;
	volatile uint32_t x148 = 8095726U;
	uint32_t t30 = 15352156U;

    t30 = (((x145!=x146)|x147)-x148);

    if (t30 != 75348815U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = -1675463977429900LL;
	uint8_t x151 = 103U;
	uint64_t x152 = 111LLU;
	uint64_t t31 = 15839053956865994LLU;

    t31 = (((x149!=x150)|x151)-x152);

    if (t31 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x153 = -75;
	volatile uint64_t x156 = 103842114860LLU;

    t32 = (((x153!=x154)|x155)-x156);

    if (t32 != 18446743969867488903LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x159 = UINT8_MAX;
	static uint16_t x160 = UINT16_MAX;

    t33 = (((x157!=x158)|x159)-x160);

    if (t33 != -65280) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = INT16_MIN;
	static int32_t x166 = -1;
	int32_t x167 = INT32_MIN;
	uint8_t x168 = 1U;

    t34 = (((x165!=x166)|x167)-x168);

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x171 = UINT32_MAX;
	int8_t x172 = INT8_MIN;
	volatile uint32_t t35 = 264080U;

    t35 = (((x169!=x170)|x171)-x172);

    if (t35 != 127U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x177 = INT32_MAX;
	uint64_t x178 = UINT64_MAX;
	volatile int16_t x180 = -1;
	volatile int64_t t36 = -7901406LL;

    t36 = (((x177!=x178)|x179)-x180);

    if (t36 != -1751618392742LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x181 = 21U;
	int64_t x182 = INT64_MIN;
	int8_t x183 = 42;
	int32_t t37 = -72392357;

    t37 = (((x181!=x182)|x183)-x184);

    if (t37 != -20097) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = INT32_MAX;
	int16_t x186 = 0;
	static int32_t x187 = -1;
	static uint16_t x188 = 7U;

    t38 = (((x185!=x186)|x187)-x188);

    if (t38 != -8) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x190 = INT16_MIN;
	volatile int8_t x191 = 1;
	int32_t x192 = 60;
	static int32_t t39 = -2131926;

    t39 = (((x189!=x190)|x191)-x192);

    if (t39 != -59) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x193 = 1642988772519891354LLU;
	uint16_t x196 = 22U;

    t40 = (((x193!=x194)|x195)-x196);

    if (t40 != -21) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = INT32_MIN;
	volatile int16_t x198 = INT16_MAX;
	static int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	static volatile int64_t t41 = INT64_MIN;

    t41 = (((x197!=x198)|x199)-x200);

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = INT32_MAX;
	uint16_t x202 = 2735U;
	int16_t x204 = INT16_MIN;
	int32_t t42 = -22145358;

    t42 = (((x201!=x202)|x203)-x204);

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x205 = -1;
	volatile uint8_t x208 = 0U;

    t43 = (((x205!=x206)|x207)-x208);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x209 = -19619;
	int32_t x210 = INT32_MIN;
	volatile int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	uint64_t t44 = 3518LLU;

    t44 = (((x209!=x210)|x211)-x212);

    if (t44 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x217 = UINT64_MAX;
	uint32_t x218 = UINT32_MAX;
	static int32_t x220 = 734;
	int32_t t45 = 2442769;

    t45 = (((x217!=x218)|x219)-x220);

    if (t45 != -733) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x221 = INT16_MAX;
	static uint64_t x222 = 48LLU;
	static uint32_t x224 = 21683627U;

    t46 = (((x221!=x222)|x223)-x224);

    if (t46 != 4273316436U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x226 = INT64_MIN;
	uint8_t x227 = 94U;
	volatile int32_t t47 = 157835;

    t47 = (((x225!=x226)|x227)-x228);

    if (t47 != 56) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x229 = -1;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = -1;

    t48 = (((x229!=x230)|x231)-x232);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = -255974012;
	uint16_t x236 = 39U;
	static volatile int32_t t49 = 57434;

    t49 = (((x233!=x234)|x235)-x236);

    if (t49 != -20) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = UINT8_MAX;
	static int16_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = -4LL;
	volatile int64_t t50 = 0LL;

    t50 = (((x237!=x238)|x239)-x240);

    if (t50 != 65539LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x241 = -1716;
	volatile int8_t x242 = 0;
	volatile int32_t t51 = -924022718;

    t51 = (((x241!=x242)|x243)-x244);

    if (t51 != 65534) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x249 = -1;
	uint64_t x250 = 240531752LLU;
	int32_t x251 = 0;
	volatile uint64_t x252 = UINT64_MAX;
	volatile uint64_t t52 = 97022157940756LLU;

    t52 = (((x249!=x250)|x251)-x252);

    if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x253 = 206U;
	static uint64_t x255 = 16709775LLU;
	int64_t x256 = -1LL;
	static volatile uint64_t t53 = 135735948736LLU;

    t53 = (((x253!=x254)|x255)-x256);

    if (t53 != 16709776LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x257 = UINT64_MAX;
	uint64_t x260 = UINT64_MAX;

    t54 = (((x257!=x258)|x259)-x260);

    if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x261 = 9U;
	int64_t x262 = INT64_MIN;
	int64_t x263 = -60153893891545LL;
	int32_t x264 = INT32_MIN;
	static int64_t t55 = -175104LL;

    t55 = (((x261!=x262)|x263)-x264);

    if (t55 != -60151746407897LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x266 = 50U;
	int64_t x267 = 3LL;
	int8_t x268 = INT8_MAX;
	volatile int64_t t56 = 13LL;

    t56 = (((x265!=x266)|x267)-x268);

    if (t56 != -124LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x269 = INT32_MIN;
	uint32_t x270 = 3U;
	uint16_t x271 = 1920U;
	int16_t x272 = INT16_MIN;

    t57 = (((x269!=x270)|x271)-x272);

    if (t57 != 34689) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x282 = INT16_MIN;
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 519U;

    t58 = (((x281!=x282)|x283)-x284);

    if (t58 != -264) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x285 = 1;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = 89;
	int8_t x288 = INT8_MIN;
	volatile int32_t t59 = -3;

    t59 = (((x285!=x286)|x287)-x288);

    if (t59 != 217) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x293 = INT32_MIN;
	static int32_t x294 = -39;
	int16_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	static volatile uint32_t t60 = 2917U;

    t60 = (((x293!=x294)|x295)-x296);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x297 = INT16_MIN;
	uint16_t x298 = 60U;
	volatile int32_t x299 = -1;
	int32_t t61 = 37002938;

    t61 = (((x297!=x298)|x299)-x300);

    if (t61 != -20) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = INT64_MAX;
	int16_t x303 = -6987;
	int16_t x304 = INT16_MAX;
	static volatile int32_t t62 = 5732252;

    t62 = (((x301!=x302)|x303)-x304);

    if (t62 != -39754) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x305 = INT64_MIN;
	volatile int64_t x306 = 537432478887LL;
	static uint64_t x307 = 2297476LLU;
	uint8_t x308 = 0U;
	uint64_t t63 = 20731650547LLU;

    t63 = (((x305!=x306)|x307)-x308);

    if (t63 != 2297477LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 3009863252275LL;

    t64 = (((x309!=x310)|x311)-x312);

    if (t64 != 3009863252276LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x314 = 474626688549707411LLU;
	static volatile int16_t x315 = -1;
	int32_t x316 = -1;
	int32_t t65 = 106515203;

    t65 = (((x313!=x314)|x315)-x316);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x317 = -1;
	uint64_t x318 = 8680284590640458223LLU;
	volatile int8_t x320 = -1;
	uint32_t t66 = 791U;

    t66 = (((x317!=x318)|x319)-x320);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x321 = INT32_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	static int16_t x323 = INT16_MIN;
	static int16_t x324 = -112;

    t67 = (((x321!=x322)|x323)-x324);

    if (t67 != -32655) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x325 = 780U;
	uint32_t x328 = UINT32_MAX;
	static uint32_t t68 = 3U;

    t68 = (((x325!=x326)|x327)-x328);

    if (t68 != 12310U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x334 = UINT32_MAX;
	uint64_t x335 = 7534240928LLU;
	uint8_t x336 = 21U;
	uint64_t t69 = 62873537LLU;

    t69 = (((x333!=x334)|x335)-x336);

    if (t69 != 7534240908LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = 6513169;
	int16_t x339 = INT16_MIN;
	int16_t x340 = 35;
	volatile int32_t t70 = 21;

    t70 = (((x337!=x338)|x339)-x340);

    if (t70 != -32802) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x341 = -4661413;
	volatile int8_t x342 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t71 = -295;

    t71 = (((x341!=x342)|x343)-x344);

    if (t71 != -2147483519) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x353 = INT32_MIN;
	static int8_t x354 = INT8_MIN;
	static uint8_t x355 = UINT8_MAX;
	int16_t x356 = -1588;

    t72 = (((x353!=x354)|x355)-x356);

    if (t72 != 1843) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x357 = -1575802LL;
	uint32_t x358 = 1000426874U;
	int64_t x360 = -56LL;

    t73 = (((x357!=x358)|x359)-x360);

    if (t73 != 4678242539311LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x361 = UINT32_MAX;
	uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 3U;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t74 = 165919;

    t74 = (((x361!=x362)|x363)-x364);

    if (t74 != -2147483644) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x375 = INT8_MAX;

    t75 = (((x373!=x374)|x375)-x376);

    if (t75 != 122U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x377 = 3U;
	uint32_t x379 = 5826U;
	static uint32_t t76 = 1868002684U;

    t76 = (((x377!=x378)|x379)-x380);

    if (t76 != 5427U) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MAX;
	uint16_t x384 = 6U;
	volatile int32_t t77 = -113774512;

    t77 = (((x381!=x382)|x383)-x384);

    if (t77 != 59) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x385 = INT32_MIN;
	int32_t x386 = 23;
	int32_t x387 = INT32_MIN;
	static int32_t x388 = INT32_MIN;
	volatile int32_t t78 = 877438680;

    t78 = (((x385!=x386)|x387)-x388);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MAX;
	volatile int32_t t79 = INT32_MAX;

    t79 = (((x389!=x390)|x391)-x392);

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x393 = 512797512185317LLU;
	int64_t x394 = -50LL;
	int16_t x395 = -1;
	static int32_t x396 = INT32_MAX;
	static int32_t t80 = INT32_MIN;

    t80 = (((x393!=x394)|x395)-x396);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x397 = -2393;
	int8_t x398 = 1;
	int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 3LLU;
	volatile uint64_t t81 = 428967LLU;

    t81 = (((x397!=x398)|x399)-x400);

    if (t81 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MIN;
	uint64_t t82 = 861284988708749LLU;

    t82 = (((x405!=x406)|x407)-x408);

    if (t82 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x411 = 64388LL;
	static int64_t t83 = -1066LL;

    t83 = (((x409!=x410)|x411)-x412);

    if (t83 != -1146LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x414 = 25167U;
	static uint8_t x415 = 0U;
	uint8_t x416 = 5U;
	static volatile int32_t t84 = 40697322;

    t84 = (((x413!=x414)|x415)-x416);

    if (t84 != -4) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x417 = 12U;
	volatile int32_t x418 = INT32_MIN;
	int64_t x420 = INT64_MIN;
	uint64_t t85 = 118LLU;

    t85 = (((x417!=x418)|x419)-x420);

    if (t85 != 9223389926776910543LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x421 = INT16_MAX;
	int64_t x422 = 0LL;
	int32_t x423 = INT32_MAX;

    t86 = (((x421!=x422)|x423)-x424);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x429 = UINT16_MAX;
	static int8_t x430 = 17;
	int32_t x431 = -1;
	static int32_t t87 = -118189460;

    t87 = (((x429!=x430)|x431)-x432);

    if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x437 = INT16_MAX;
	uint64_t x438 = 77098843337558LLU;
	uint64_t x439 = 14367350852695LLU;
	volatile int8_t x440 = INT8_MAX;
	uint64_t t88 = 372991365775830LLU;

    t88 = (((x437!=x438)|x439)-x440);

    if (t88 != 14367350852568LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x445 = 29U;
	volatile int32_t x446 = INT32_MAX;
	int8_t x447 = 1;
	uint32_t x448 = 403214U;
	uint32_t t89 = 1U;

    t89 = (((x445!=x446)|x447)-x448);

    if (t89 != 4294564083U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	volatile int32_t x451 = -320;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t90 = 29910494871113LLU;

    t90 = (((x449!=x450)|x451)-x452);

    if (t90 != 18446744073709551298LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x454 = 1894256476620LL;
	static int8_t x455 = -60;
	int32_t x456 = -1;
	volatile int32_t t91 = 0;

    t91 = (((x453!=x454)|x455)-x456);

    if (t91 != -58) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x457 = UINT64_MAX;
	uint64_t x458 = UINT64_MAX;

    t92 = (((x457!=x458)|x459)-x460);

    if (t92 != 32765) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x461 = 87U;
	uint16_t x462 = 643U;
	volatile uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MIN;

    t93 = (((x461!=x462)|x463)-x464);

    if (t93 != 383) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x465 = INT8_MAX;
	int32_t x466 = -14;
	int8_t x467 = INT8_MIN;
	static volatile int32_t x468 = -440;
	volatile int32_t t94 = 712;

    t94 = (((x465!=x466)|x467)-x468);

    if (t94 != 313) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x473 = INT32_MIN;
	uint64_t x475 = 901LLU;
	static int32_t x476 = -494;
	volatile uint64_t t95 = 16LLU;

    t95 = (((x473!=x474)|x475)-x476);

    if (t95 != 1395LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x481 = INT32_MIN;
	uint32_t x483 = UINT32_MAX;
	int16_t x484 = INT16_MIN;
	volatile uint32_t t96 = 6195729U;

    t96 = (((x481!=x482)|x483)-x484);

    if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x485 = 10U;
	uint8_t x486 = 0U;
	uint32_t x487 = 123U;
	uint32_t t97 = 7363759U;

    t97 = (((x485!=x486)|x487)-x488);

    if (t97 != 124U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MAX;
	uint16_t x495 = 1U;
	volatile uint64_t x496 = UINT64_MAX;
	volatile uint64_t t98 = 23LLU;

    t98 = (((x493!=x494)|x495)-x496);

    if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x497 = INT32_MAX;
	int64_t x498 = INT64_MAX;
	static volatile uint64_t x499 = 1507479996LLU;

    t99 = (((x497!=x498)|x499)-x500);

    if (t99 != 18446744070922064318LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x501 = -1;
	volatile int16_t x502 = -32;
	int8_t x503 = -7;
	int64_t t100 = 627003298936163415LL;

    t100 = (((x501!=x502)|x503)-x504);

    if (t100 != 29839375785LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x505 = 81U;
	int64_t x506 = -817488LL;
	int16_t x507 = INT16_MAX;
	static volatile int32_t t101 = -1522048;

    t101 = (((x505!=x506)|x507)-x508);

    if (t101 != 94405) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x509 = INT16_MIN;
	int8_t x510 = -1;
	volatile int32_t x511 = INT32_MIN;
	int8_t x512 = INT8_MIN;
	static volatile int32_t t102 = -12754;

    t102 = (((x509!=x510)|x511)-x512);

    if (t102 != -2147483519) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x513 = 10U;
	int16_t x515 = INT16_MAX;
	uint16_t x516 = UINT16_MAX;
	int32_t t103 = -1;

    t103 = (((x513!=x514)|x515)-x516);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x517 = -1LL;
	volatile int8_t x519 = 0;
	int32_t x520 = -1;
	int32_t t104 = 2;

    t104 = (((x517!=x518)|x519)-x520);

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x521 = -13;
	static int64_t x523 = -1LL;
	uint16_t x524 = 11984U;
	int64_t t105 = -26LL;

    t105 = (((x521!=x522)|x523)-x524);

    if (t105 != -11985LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x525 = 292656317U;
	volatile int32_t x526 = 99713883;
	volatile int32_t x527 = -80204969;
	int8_t x528 = 1;

    t106 = (((x525!=x526)|x527)-x528);

    if (t106 != -80204970) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x529 = -1;
	volatile int16_t x530 = INT16_MIN;
	int32_t x531 = 4625;
	uint16_t x532 = 1U;
	volatile int32_t t107 = -1;

    t107 = (((x529!=x530)|x531)-x532);

    if (t107 != 4624) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x538 = 13U;
	volatile int64_t x540 = -1LL;
	volatile int64_t t108 = -3309952074LL;

    t108 = (((x537!=x538)|x539)-x540);

    if (t108 != -5966LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x541 = 836475LL;
	static int64_t x542 = INT64_MIN;
	uint16_t x544 = UINT16_MAX;

    t109 = (((x541!=x542)|x543)-x544);

    if (t109 != 1822880LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x545 = 210LL;
	int32_t x546 = INT32_MIN;
	uint32_t x547 = 1983535540U;
	volatile uint32_t t110 = 2720U;

    t110 = (((x545!=x546)|x547)-x548);

    if (t110 != 1983535414U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x549 = -1;
	int8_t x551 = INT8_MIN;
	int16_t x552 = INT16_MAX;
	volatile int32_t t111 = 182652;

    t111 = (((x549!=x550)|x551)-x552);

    if (t111 != -32894) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x553 = UINT8_MAX;
	int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	static int8_t x556 = 1;
	static volatile int32_t t112 = INT32_MIN;

    t112 = (((x553!=x554)|x555)-x556);

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x557 = 1141LL;
	uint32_t x558 = UINT32_MAX;
	volatile int64_t x559 = INT64_MIN;
	int8_t x560 = -1;
	int64_t t113 = -753180416199325LL;

    t113 = (((x557!=x558)|x559)-x560);

    if (t113 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x562 = INT16_MIN;
	int64_t x563 = -1LL;
	int8_t x564 = -2;
	volatile int64_t t114 = -2202650748186365194LL;

    t114 = (((x561!=x562)|x563)-x564);

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x565 = UINT64_MAX;
	int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MIN;
	int64_t t115 = -4501180485LL;

    t115 = (((x565!=x566)|x567)-x568);

    if (t115 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x573 = 103140187LL;
	volatile int64_t x575 = -1LL;
	static int8_t x576 = INT8_MIN;
	int64_t t116 = 528369336352319LL;

    t116 = (((x573!=x574)|x575)-x576);

    if (t116 != 127LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x577 = 6984U;
	volatile uint8_t x578 = UINT8_MAX;
	volatile uint16_t x579 = 1U;
	static int16_t x580 = INT16_MIN;

    t117 = (((x577!=x578)|x579)-x580);

    if (t117 != 32769) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x582 = INT8_MAX;
	uint16_t x583 = UINT16_MAX;
	volatile int16_t x584 = INT16_MIN;

    t118 = (((x581!=x582)|x583)-x584);

    if (t118 != 98303) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x585 = INT64_MIN;
	uint64_t x586 = 1666335722646LLU;
	volatile int32_t x587 = INT32_MIN;
	int8_t x588 = -1;
	int32_t t119 = -1831;

    t119 = (((x585!=x586)|x587)-x588);

    if (t119 != -2147483646) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = -1;
	static volatile int8_t x590 = INT8_MIN;
	static volatile uint32_t x591 = 6734U;
	int64_t x592 = 449829730LL;
	volatile int64_t t120 = -32968391176244LL;

    t120 = (((x589!=x590)|x591)-x592);

    if (t120 != -449822995LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x593 = INT8_MIN;
	static uint8_t x594 = 6U;
	uint32_t x595 = UINT32_MAX;
	volatile int16_t x596 = INT16_MAX;
	static volatile uint32_t t121 = 18U;

    t121 = (((x593!=x594)|x595)-x596);

    if (t121 != 4294934528U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x597 = UINT32_MAX;
	int64_t x598 = 25921184LL;
	uint64_t x599 = 9944240716578527LLU;
	uint64_t x600 = 100685943LLU;
	uint64_t t122 = 7LLU;

    t122 = (((x597!=x598)|x599)-x600);

    if (t122 != 9944240615892584LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x602 = 582U;
	int64_t x603 = 28605598025LL;
	int16_t x604 = -1;
	int64_t t123 = 45LL;

    t123 = (((x601!=x602)|x603)-x604);

    if (t123 != 28605598026LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x605 = -34;
	int32_t x607 = -45108;
	int16_t x608 = INT16_MAX;
	static int32_t t124 = 42;

    t124 = (((x605!=x606)|x607)-x608);

    if (t124 != -77874) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x611 = -1;
	uint16_t x612 = 200U;
	int32_t t125 = 207;

    t125 = (((x609!=x610)|x611)-x612);

    if (t125 != -201) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x613 = 766120306783492LL;
	uint64_t x614 = UINT64_MAX;
	uint16_t x615 = 2U;
	static uint8_t x616 = 4U;

    t126 = (((x613!=x614)|x615)-x616);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x622 = INT32_MIN;
	static int64_t x623 = INT64_MIN;
	int8_t x624 = -1;
	int64_t t127 = -3412947LL;

    t127 = (((x621!=x622)|x623)-x624);

    if (t127 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x625 = -2277;
	static int64_t x626 = INT64_MIN;
	volatile int16_t x628 = 8899;

    t128 = (((x625!=x626)|x627)-x628);

    if (t128 != 4294958396U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x629 = 846405U;
	int16_t x630 = INT16_MAX;
	int16_t x631 = INT16_MAX;
	int16_t x632 = INT16_MAX;
	int32_t t129 = -2431;

    t129 = (((x629!=x630)|x631)-x632);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x642 = 1962939LLU;
	int8_t x643 = INT8_MIN;
	int64_t x644 = INT64_MIN;
	volatile int64_t t130 = -1LL;

    t130 = (((x641!=x642)|x643)-x644);

    if (t130 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x645 = 5039LL;
	int8_t x647 = -1;
	static int64_t x648 = INT64_MIN;
	int64_t t131 = INT64_MAX;

    t131 = (((x645!=x646)|x647)-x648);

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x649 = INT32_MAX;
	volatile int16_t x650 = INT16_MIN;
	static uint16_t x651 = UINT16_MAX;
	int32_t x652 = -172;
	static volatile int32_t t132 = -285699893;

    t132 = (((x649!=x650)|x651)-x652);

    if (t132 != 65707) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x653 = 147357924U;
	static int16_t x654 = INT16_MAX;
	int32_t x655 = -1;
	static int16_t x656 = -1;

    t133 = (((x653!=x654)|x655)-x656);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x657 = 1;
	uint32_t x658 = 580U;
	static int32_t x659 = INT32_MIN;
	static int16_t x660 = INT16_MIN;
	volatile int32_t t134 = 16;

    t134 = (((x657!=x658)|x659)-x660);

    if (t134 != -2147450879) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x661 = -1;
	uint16_t x663 = UINT16_MAX;

    t135 = (((x661!=x662)|x663)-x664);

    if (t135 != 65280) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x666 = 1;
	int16_t x667 = -17;
	uint16_t x668 = UINT16_MAX;
	int32_t t136 = -1;

    t136 = (((x665!=x666)|x667)-x668);

    if (t136 != -65552) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x669 = 30LLU;
	int64_t x670 = INT64_MAX;
	int16_t x671 = -1;

    t137 = (((x669!=x670)|x671)-x672);

    if (t137 != 18446743833303180869LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x674 = -1;
	int8_t x675 = INT8_MIN;

    t138 = (((x673!=x674)|x675)-x676);

    if (t138 != -126) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x677 = 26U;
	int32_t x679 = -1;
	int32_t x680 = INT32_MAX;

    t139 = (((x677!=x678)|x679)-x680);

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x681 = INT64_MAX;
	static volatile int8_t x682 = INT8_MIN;
	static int16_t x683 = 115;
	uint64_t x684 = 864092245317LLU;
	uint64_t t140 = 437486LLU;

    t140 = (((x681!=x682)|x683)-x684);

    if (t140 != 18446743209617306414LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x685 = UINT64_MAX;
	static int8_t x687 = INT8_MIN;
	int16_t x688 = -4;
	volatile int32_t t141 = -8;

    t141 = (((x685!=x686)|x687)-x688);

    if (t141 != -123) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x689 = -11967;
	volatile uint8_t x690 = UINT8_MAX;
	static uint32_t x692 = 5316687U;
	uint32_t t142 = 145961561U;

    t142 = (((x689!=x690)|x691)-x692);

    if (t142 != 4289650640U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x694 = UINT8_MAX;

    t143 = (((x693!=x694)|x695)-x696);

    if (t143 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x697 = INT32_MIN;
	int64_t x698 = -15LL;
	static volatile int8_t x699 = -1;
	static volatile int16_t x700 = -7;

    t144 = (((x697!=x698)|x699)-x700);

    if (t144 != 6) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x701 = 32932U;
	int8_t x702 = -12;
	int8_t x703 = -8;
	static int64_t x704 = 4156480119919458614LL;
	volatile int64_t t145 = 0LL;

    t145 = (((x701!=x702)|x703)-x704);

    if (t145 != -4156480119919458621LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x710 = -1LL;
	uint16_t x711 = UINT16_MAX;
	static volatile int64_t t146 = 112LL;

    t146 = (((x709!=x710)|x711)-x712);

    if (t146 != 65536LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x713 = 7987U;
	int32_t x714 = 3;
	static uint64_t x716 = UINT64_MAX;

    t147 = (((x713!=x714)|x715)-x716);

    if (t147 != 2LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x717 = 0;
	static int32_t x718 = 5;
	int64_t x720 = -1LL;
	static volatile int64_t t148 = 1639687180835LL;

    t148 = (((x717!=x718)|x719)-x720);

    if (t148 != 65536LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x725 = 1226U;
	uint32_t x726 = UINT32_MAX;
	static uint16_t x727 = 176U;
	int32_t t149 = 891;

    t149 = (((x725!=x726)|x727)-x728);

    if (t149 != -78) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x730 = 7371LLU;
	static uint32_t x731 = 96U;
	volatile int32_t x732 = -30254355;
	volatile uint32_t t150 = 164U;

    t150 = (((x729!=x730)|x731)-x732);

    if (t150 != 30254452U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x733 = INT32_MAX;
	static volatile uint64_t x735 = UINT64_MAX;
	volatile uint64_t t151 = 1142550000841LLU;

    t151 = (((x733!=x734)|x735)-x736);

    if (t151 != 27639261629727LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x739 = -8247331;
	volatile int32_t t152 = 193754365;

    t152 = (((x737!=x738)|x739)-x740);

    if (t152 != -8247330) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x742 = 7U;
	int16_t x744 = INT16_MIN;
	static volatile int32_t t153 = 108049457;

    t153 = (((x741!=x742)|x743)-x744);

    if (t153 != 33023) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x745 = 1390;
	int32_t x746 = 891964184;
	static int32_t t154 = 1;

    t154 = (((x745!=x746)|x747)-x748);

    if (t154 != 44) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MIN;
	volatile int16_t x751 = -407;
	static volatile int64_t x752 = -1LL;
	int64_t t155 = -9948390170LL;

    t155 = (((x749!=x750)|x751)-x752);

    if (t155 != -406LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x753 = INT16_MIN;
	static volatile int8_t x754 = 18;
	int64_t x755 = INT64_MAX;
	int64_t t156 = -226486244940582758LL;

    t156 = (((x753!=x754)|x755)-x756);

    if (t156 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x757 = INT8_MAX;
	static uint16_t x758 = 156U;
	int32_t x759 = -1;
	static int64_t x760 = 340330510603LL;
	volatile int64_t t157 = -8000279LL;

    t157 = (((x757!=x758)|x759)-x760);

    if (t157 != -340330510604LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x765 = -1;
	int16_t x766 = INT16_MIN;
	int16_t x767 = -1;
	int32_t x768 = 1553479;
	int32_t t158 = 153942;

    t158 = (((x765!=x766)|x767)-x768);

    if (t158 != -1553480) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x770 = 345U;
	volatile int32_t x771 = -1;
	uint8_t x772 = UINT8_MAX;

    t159 = (((x769!=x770)|x771)-x772);

    if (t159 != -256) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x773 = INT64_MIN;
	int64_t x774 = 97995405LL;
	static int64_t x775 = 8105577937686LL;
	int32_t x776 = INT32_MAX;
	int64_t t160 = 8719643LL;

    t160 = (((x773!=x774)|x775)-x776);

    if (t160 != 8103430454040LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x781 = 0U;
	int16_t x783 = INT16_MIN;
	uint64_t x784 = 2911906LLU;
	uint64_t t161 = 58LLU;

    t161 = (((x781!=x782)|x783)-x784);

    if (t161 != 18446744073706606943LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x785 = INT8_MIN;
	static volatile int16_t x787 = -1;
	static uint16_t x788 = 110U;
	int32_t t162 = -1;

    t162 = (((x785!=x786)|x787)-x788);

    if (t162 != -111) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x793 = INT64_MIN;
	int8_t x794 = 36;
	int8_t x795 = 0;
	int16_t x796 = INT16_MAX;
	volatile int32_t t163 = -670;

    t163 = (((x793!=x794)|x795)-x796);

    if (t163 != -32766) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x797 = 13U;
	int32_t x799 = -1;
	int16_t x800 = INT16_MAX;
	static volatile int32_t t164 = -7;

    t164 = (((x797!=x798)|x799)-x800);

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x802 = 3;
	uint16_t x803 = 1U;
	int64_t x804 = INT64_MAX;
	volatile int64_t t165 = 202807695264LL;

    t165 = (((x801!=x802)|x803)-x804);

    if (t165 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x805 = INT64_MIN;
	int8_t x807 = -45;
	uint16_t x808 = 397U;
	int32_t t166 = -1460545;

    t166 = (((x805!=x806)|x807)-x808);

    if (t166 != -442) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x813 = INT32_MAX;
	uint64_t x814 = 38924LLU;
	int16_t x815 = INT16_MIN;
	int8_t x816 = -1;
	volatile int32_t t167 = -377647465;

    t167 = (((x813!=x814)|x815)-x816);

    if (t167 != -32766) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x817 = INT16_MAX;
	int64_t x818 = INT64_MIN;
	int64_t x820 = INT64_MIN;
	int64_t t168 = 4329563372374LL;

    t168 = (((x817!=x818)|x819)-x820);

    if (t168 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x821 = UINT16_MAX;
	int32_t x822 = 3;
	volatile uint64_t x823 = 15670472084LLU;
	volatile uint64_t t169 = 51945373640287925LLU;

    t169 = (((x821!=x822)|x823)-x824);

    if (t169 != 15670472084LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x826 = -1;
	int8_t x827 = -42;
	int64_t t170 = -678007LL;

    t170 = (((x825!=x826)|x827)-x828);

    if (t170 != 13991268373487188LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x829 = 1915U;
	volatile uint8_t x830 = 28U;
	uint16_t x831 = 3949U;
	int8_t x832 = 60;
	static int32_t t171 = 20046876;

    t171 = (((x829!=x830)|x831)-x832);

    if (t171 != 3889) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x833 = INT8_MIN;
	int16_t x834 = -1;
	int16_t x835 = -417;
	volatile int64_t x836 = -1LL;
	static volatile int64_t t172 = 1192742342303163LL;

    t172 = (((x833!=x834)|x835)-x836);

    if (t172 != -416LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x838 = INT16_MIN;
	uint16_t x839 = 245U;
	static int32_t t173 = 12063291;

    t173 = (((x837!=x838)|x839)-x840);

    if (t173 != -10) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x841 = INT8_MIN;
	int32_t x842 = -40;
	volatile int8_t x843 = INT8_MAX;
	uint64_t x844 = 7768401358430490LLU;
	uint64_t t174 = 1588154920098LLU;

    t174 = (((x841!=x842)|x843)-x844);

    if (t174 != 18438975672351121253LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x845 = -8067519858LL;
	volatile int32_t x846 = INT32_MAX;
	uint64_t x848 = 779236784LLU;
	uint64_t t175 = 14833423436844509LLU;

    t175 = (((x845!=x846)|x847)-x848);

    if (t175 != 18446744072930314705LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x853 = -91735224LL;
	volatile uint32_t x854 = 11320U;
	int64_t x855 = -1LL;
	volatile int64_t t176 = 9411820713LL;

    t176 = (((x853!=x854)|x855)-x856);

    if (t176 != -128LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x857 = INT32_MIN;
	static int32_t x859 = INT32_MAX;
	int64_t x860 = 188LL;
	static volatile int64_t t177 = -140801102403026960LL;

    t177 = (((x857!=x858)|x859)-x860);

    if (t177 != 2147483459LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x863 = -528LL;
	int16_t x864 = -6540;
	volatile int64_t t178 = -197723940695471435LL;

    t178 = (((x861!=x862)|x863)-x864);

    if (t178 != 6013LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x865 = INT32_MIN;
	int16_t x866 = INT16_MIN;
	int16_t x867 = -1;
	uint16_t x868 = UINT16_MAX;
	int32_t t179 = 3871;

    t179 = (((x865!=x866)|x867)-x868);

    if (t179 != -65536) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x870 = 5106918650LL;
	uint32_t x871 = UINT32_MAX;
	int16_t x872 = INT16_MAX;
	uint32_t t180 = 1159173791U;

    t180 = (((x869!=x870)|x871)-x872);

    if (t180 != 4294934528U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x873 = -20224799951136519LL;
	volatile int64_t x875 = -17159294134279521LL;
	volatile int64_t t181 = -226LL;

    t181 = (((x873!=x874)|x875)-x876);

    if (t181 != -17159294134279113LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x877 = -2;
	int64_t x878 = INT64_MIN;
	int8_t x879 = 56;
	int64_t x880 = 18084LL;
	volatile int64_t t182 = -117348LL;

    t182 = (((x877!=x878)|x879)-x880);

    if (t182 != -18027LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x881 = INT16_MIN;
	static uint16_t x882 = 4500U;
	static int16_t x883 = INT16_MAX;
	volatile uint32_t x884 = 19U;
	volatile uint32_t t183 = 487548162U;

    t183 = (((x881!=x882)|x883)-x884);

    if (t183 != 32748U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x885 = -1;
	uint32_t x886 = 3986106U;
	int32_t x887 = INT32_MIN;
	uint64_t x888 = 1LLU;

    t184 = (((x885!=x886)|x887)-x888);

    if (t184 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x889 = INT32_MAX;
	int16_t x890 = INT16_MIN;
	static uint64_t x891 = 3794LLU;
	uint64_t t185 = 1012LLU;

    t185 = (((x889!=x890)|x891)-x892);

    if (t185 != 3796LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x893 = INT16_MIN;
	int64_t x894 = -1LL;
	static volatile uint8_t x895 = UINT8_MAX;
	static volatile int8_t x896 = INT8_MIN;
	int32_t t186 = -572099;

    t186 = (((x893!=x894)|x895)-x896);

    if (t186 != 383) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x897 = UINT8_MAX;
	uint32_t x898 = 11388U;
	static volatile int16_t x899 = 92;
	volatile uint32_t x900 = 7U;
	volatile uint32_t t187 = 3617U;

    t187 = (((x897!=x898)|x899)-x900);

    if (t187 != 86U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x901 = INT16_MIN;
	volatile uint8_t x902 = UINT8_MAX;
	volatile int16_t x903 = INT16_MIN;
	int32_t x904 = INT32_MIN;

    t188 = (((x901!=x902)|x903)-x904);

    if (t188 != 2147450881) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x905 = -943209;
	uint64_t x906 = 2220044682554638LLU;
	uint16_t x907 = 210U;
	int64_t x908 = 311020LL;

    t189 = (((x905!=x906)|x907)-x908);

    if (t189 != -310809LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x910 = INT16_MIN;
	uint32_t x911 = UINT32_MAX;
	static int64_t x912 = 214LL;
	int64_t t190 = 32203LL;

    t190 = (((x909!=x910)|x911)-x912);

    if (t190 != 4294967081LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x914 = INT16_MIN;
	int8_t x915 = -1;
	static volatile int8_t x916 = INT8_MIN;
	volatile int32_t t191 = -5665502;

    t191 = (((x913!=x914)|x915)-x916);

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x917 = 97U;
	static int16_t x918 = 590;
	uint8_t x919 = UINT8_MAX;
	int16_t x920 = -1;
	int32_t t192 = -78;

    t192 = (((x917!=x918)|x919)-x920);

    if (t192 != 256) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x921 = INT64_MIN;
	int16_t x922 = INT16_MIN;
	int32_t x924 = INT32_MIN;
	int32_t t193 = INT32_MAX;

    t193 = (((x921!=x922)|x923)-x924);

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x925 = -1;
	volatile int32_t x926 = INT32_MIN;
	static uint8_t x927 = UINT8_MAX;
	uint16_t x928 = 5U;
	int32_t t194 = 1709765;

    t194 = (((x925!=x926)|x927)-x928);

    if (t194 != 250) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x929 = 25;
	static int64_t x930 = INT64_MAX;
	int32_t x931 = -1;
	int64_t x932 = INT64_MIN;

    t195 = (((x929!=x930)|x931)-x932);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x933 = 624979444U;
	volatile int16_t x934 = -1;
	uint8_t x935 = 0U;
	int16_t x936 = -249;
	volatile int32_t t196 = -28019352;

    t196 = (((x933!=x934)|x935)-x936);

    if (t196 != 250) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x937 = -7;
	volatile uint64_t x939 = 12LLU;
	int64_t x940 = 315891706LL;
	uint64_t t197 = 3612902623564374004LLU;

    t197 = (((x937!=x938)|x939)-x940);

    if (t197 != 18446744073393659923LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x941 = INT8_MIN;
	static volatile int8_t x942 = -16;
	uint16_t x943 = UINT16_MAX;
	uint8_t x944 = UINT8_MAX;

    t198 = (((x941!=x942)|x943)-x944);

    if (t198 != 65280) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x945 = -1LL;
	volatile int16_t x947 = -2598;
	int8_t x948 = INT8_MAX;
	int32_t t199 = -1559408;

    t199 = (((x945!=x946)|x947)-x948);

    if (t199 != -2725) { NG(); } else { ; }
	
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

