
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

static uint8_t x6 = 100U;
int64_t x9 = 7560LL;
static int64_t x30 = INT64_MAX;
static uint32_t x37 = UINT32_MAX;
uint8_t x40 = UINT8_MAX;
int32_t x48 = -512123;
static int64_t x55 = INT64_MIN;
int8_t x56 = INT8_MIN;
uint32_t x65 = UINT32_MAX;
uint16_t x66 = 227U;
int8_t x67 = INT8_MIN;
static int32_t x68 = -1;
int8_t x72 = 0;
int8_t x84 = INT8_MIN;
int32_t t12 = 10166;
int16_t x120 = -1;
int8_t x123 = INT8_MAX;
volatile int8_t x124 = INT8_MAX;
int64_t x169 = -1LL;
int64_t t22 = 304357LL;
int64_t x189 = -1LL;
int16_t x192 = INT16_MIN;
uint64_t x206 = UINT64_MAX;
static volatile uint64_t t26 = 144231710066124363LLU;
int32_t x238 = INT32_MAX;
volatile int8_t x255 = 1;
static int32_t x256 = INT32_MIN;
int8_t x263 = -1;
static int16_t x264 = INT16_MIN;
static int32_t t34 = -65;
volatile uint64_t t35 = 981234126113579LLU;
int16_t x291 = -41;
uint16_t x300 = 45U;
static int64_t x303 = INT64_MIN;
int64_t x316 = -1LL;
volatile int64_t t40 = -6737935320293498LL;
volatile uint32_t t41 = 462984435U;
int8_t x350 = INT8_MIN;
volatile int16_t x352 = INT16_MIN;
int32_t t43 = -3649580;
static int16_t x363 = -93;
uint32_t x369 = UINT32_MAX;
int64_t x370 = INT64_MAX;
volatile int16_t x375 = -4495;
int8_t x387 = INT8_MAX;
int64_t x417 = INT64_MAX;
int32_t x419 = INT32_MIN;
uint32_t x422 = UINT32_MAX;
uint16_t x423 = 29U;
volatile int8_t x424 = -1;
uint32_t t52 = 0U;
volatile int64_t x428 = INT64_MAX;
volatile int64_t x461 = -1LL;
uint8_t x463 = 9U;
int16_t x490 = INT16_MIN;
volatile int16_t x491 = -1;
int32_t x523 = INT32_MIN;
uint16_t x524 = UINT16_MAX;
volatile int64_t x536 = -1LL;
volatile int64_t t64 = 31LL;
int8_t x548 = INT8_MAX;
uint64_t t65 = 128584825347675LLU;
int8_t x552 = INT8_MIN;
uint8_t x553 = 121U;
int16_t x554 = INT16_MIN;
uint64_t t67 = 27448211LLU;
static volatile int64_t t68 = -6805LL;
uint32_t x566 = 2691978U;
volatile uint64_t t69 = 1909666369794442753LLU;
int16_t x574 = -1;
static int64_t x577 = INT64_MIN;
int32_t x605 = INT32_MIN;
uint16_t x607 = UINT16_MAX;
volatile int64_t x614 = INT64_MAX;
int32_t x618 = -1;
int8_t x629 = INT8_MAX;
volatile uint32_t x633 = 4U;
int32_t x642 = -1;
int32_t x657 = 119222696;
static int32_t x663 = -1;
volatile int16_t x671 = INT16_MIN;
int64_t t84 = 67817789933608535LL;
int32_t x685 = 60696942;
int16_t x699 = -1;
uint8_t x745 = UINT8_MAX;
uint32_t x782 = UINT32_MAX;
volatile uint32_t x817 = 17U;
uint16_t x820 = 88U;
int32_t x858 = INT32_MIN;
static uint64_t x862 = UINT64_MAX;
int8_t x871 = INT8_MIN;
int64_t t108 = -4146659086LL;
uint8_t x904 = 109U;
uint8_t x912 = 2U;
int32_t t111 = -1060173;
int8_t x915 = 15;
static int8_t x918 = INT8_MAX;
uint8_t x920 = 1U;
int64_t x957 = -1LL;
int16_t x960 = 26;
int8_t x983 = 50;
uint16_t x985 = 19960U;
int16_t x987 = -7;
int64_t x992 = -57916518LL;
static int8_t x999 = -1;
int8_t x1000 = -1;
static volatile int32_t t120 = -4;
static int32_t x1027 = INT32_MIN;
int32_t x1067 = -377647;
static int32_t x1082 = 5400885;
uint16_t x1085 = 1U;
int32_t t128 = -27328937;
int16_t x1105 = INT16_MIN;
static int8_t x1153 = INT8_MIN;
int16_t x1158 = INT16_MAX;
volatile int32_t t132 = -966789662;
int64_t x1163 = -1LL;
volatile uint64_t x1175 = 10747848557344LLU;
int32_t x1181 = -25;
uint16_t x1182 = UINT16_MAX;
static int32_t x1227 = INT32_MAX;
static int8_t x1257 = 6;
int32_t x1286 = 130397;
int64_t t143 = -15768LL;
int16_t x1301 = -524;
uint32_t x1303 = 238387868U;
volatile uint8_t x1322 = 94U;
uint32_t x1329 = 2280969U;
volatile int32_t x1332 = -1;
uint16_t x1333 = 3U;
volatile int64_t t147 = -1LL;
volatile int32_t x1337 = INT32_MIN;
static volatile uint64_t x1340 = 32174190819633286LLU;
uint32_t x1368 = 15830U;
volatile int32_t x1378 = INT32_MIN;
uint32_t x1379 = 205U;
uint8_t x1401 = 9U;
int8_t x1408 = INT8_MIN;
int64_t t154 = 145LL;
uint64_t t155 = 168282890708136118LLU;
uint8_t x1445 = 3U;
int8_t x1447 = -1;
volatile int16_t x1448 = -1;
int16_t x1466 = INT16_MIN;
int32_t x1467 = INT32_MIN;
uint32_t x1468 = 6737578U;
volatile uint32_t t158 = 43U;
int16_t x1482 = -152;
volatile int32_t t162 = INT32_MAX;
static int16_t x1498 = -1;
uint16_t x1504 = UINT16_MAX;
int64_t t164 = 342622711650133LL;
int32_t x1508 = INT32_MIN;
static uint8_t x1527 = 5U;
volatile int64_t x1530 = INT64_MAX;
volatile int64_t t168 = -5456150421LL;
int32_t x1535 = INT32_MAX;
uint32_t x1536 = 56693291U;
uint16_t x1549 = 1U;
int16_t x1551 = INT16_MIN;
uint32_t x1552 = 792086U;
static int8_t x1562 = 9;
int32_t x1564 = 215150121;
uint32_t t173 = 1971890480U;
int8_t x1582 = INT8_MIN;
int64_t x1600 = 4675204728650LL;
volatile uint8_t x1610 = 80U;
static volatile int64_t x1630 = -397680LL;
int8_t x1635 = -1;
int8_t x1636 = -1;
volatile uint32_t t180 = 45U;
volatile int64_t x1667 = INT64_MIN;
static int16_t x1672 = INT16_MAX;
static int8_t x1683 = INT8_MAX;
int32_t x1697 = -1;
uint64_t x1707 = 135885593943LLU;
static int16_t x1708 = INT16_MIN;
static uint64_t t188 = UINT64_MAX;
int64_t x1709 = -1LL;
int16_t x1710 = INT16_MIN;
int32_t x1711 = 3;
int8_t x1721 = -1;
static int32_t x1723 = -1835;
static uint8_t x1745 = 10U;
int32_t t193 = -1;
static int32_t x1753 = -10065688;
int32_t t194 = 46214;
volatile uint64_t x1758 = UINT64_MAX;
int64_t x1759 = INT64_MIN;
int64_t x1789 = INT64_MIN;
int32_t x1797 = INT32_MIN;
int32_t x1798 = -4000657;
volatile int64_t x1800 = INT64_MIN;


void f0(void) {
    	volatile int64_t x5 = 150855798248LL;
	int32_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int64_t t0 = -419371093435179764LL;

    t0 = (x5/(x6/(x7|x8)));

    if (t0 != -1508557982LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x10 = -1;
	int16_t x11 = -1;
	static int32_t x12 = INT32_MIN;
	int64_t t1 = 11150090278740612LL;

    t1 = (x9/(x10/(x11|x12)));

    if (t1 != 7560LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x29 = INT8_MIN;
	static int32_t x31 = -1;
	int32_t x32 = INT32_MIN;
	int64_t t2 = -3766906848345LL;

    t2 = (x29/(x30/(x31|x32)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x33 = 27;
	int8_t x34 = -51;
	int8_t x35 = -1;
	uint8_t x36 = 5U;
	int32_t t3 = 1553;

    t3 = (x33/(x34/(x35|x36)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	static uint32_t t4 = 0U;

    t4 = (x37/(x38/(x39|x40)));

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x41 = 139U;
	uint64_t x42 = UINT64_MAX;
	static int64_t x43 = INT64_MIN;
	int32_t x44 = -1;
	volatile uint64_t t5 = 1772359LLU;

    t5 = (x41/(x42/(x43|x44)));

    if (t5 != 139LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x45 = 1;
	volatile int32_t x46 = -1;
	uint32_t x47 = 125521U;
	volatile uint32_t t6 = 33839U;

    t6 = (x45/(x46/(x47|x48)));

    if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x53 = -61553632362LL;
	volatile int64_t x54 = INT64_MIN;
	volatile int64_t t7 = 5046440683LL;

    t7 = (x53/(x54/(x55|x56)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x57 = INT32_MIN;
	volatile int32_t x58 = INT32_MAX;
	int8_t x59 = INT8_MIN;
	int16_t x60 = -538;
	int32_t t8 = -1062905578;

    t8 = (x57/(x58/(x59|x60)));

    if (t8 != 26) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t t9 = 17525U;

    t9 = (x65/(x66/(x67|x68)));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	static int32_t x71 = INT32_MIN;
	volatile int64_t t10 = 13120LL;

    t10 = (x69/(x70/(x71|x72)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x73 = 161U;
	int8_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = 0;
	volatile uint32_t t11 = 2765943U;

    t11 = (x73/(x74/(x75|x76)));

    if (t11 != 161U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x81 = -13529281;
	uint16_t x82 = 7557U;
	int16_t x83 = -1;

    t12 = (x81/(x82/(x83|x84)));

    if (t12 != 1790) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x89 = 53U;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = -1;
	int64_t x92 = INT64_MIN;
	volatile int64_t t13 = 142668359340713924LL;

    t13 = (x89/(x90/(x91|x92)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x97 = 11;
	uint16_t x98 = UINT16_MAX;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -1;
	int32_t t14 = -20628;

    t14 = (x97/(x98/(x99|x100)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x101 = UINT16_MAX;
	static volatile uint64_t x102 = 1357977667354041LLU;
	uint32_t x103 = 813097336U;
	static uint32_t x104 = UINT32_MAX;
	volatile uint64_t t15 = 8060657871325LLU;

    t15 = (x101/(x102/(x103|x104)));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	volatile int16_t x119 = INT16_MIN;
	uint32_t t16 = UINT32_MAX;

    t16 = (x117/(x118/(x119|x120)));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x121 = 6719U;
	uint32_t x122 = UINT32_MAX;
	uint32_t t17 = 3244U;

    t17 = (x121/(x122/(x123|x124)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x125 = INT16_MAX;
	int16_t x126 = INT16_MIN;
	uint32_t x127 = 487218U;
	int32_t x128 = -39176;
	uint32_t t18 = 21U;

    t18 = (x125/(x126/(x127|x128)));

    if (t18 != 32767U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x133 = -1;
	int32_t x134 = -1;
	volatile int32_t x135 = -21726;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t19 = UINT64_MAX;

    t19 = (x133/(x134/(x135|x136)));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x137 = INT8_MIN;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = -1;
	int64_t x140 = 1648529025484885LL;
	static volatile int64_t t20 = -34821091447290LL;

    t20 = (x137/(x138/(x139|x140)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x157 = -2;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	uint64_t t21 = 59LLU;

    t21 = (x157/(x158/(x159|x160)));

    if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x170 = INT32_MIN;
	static volatile uint16_t x171 = 1U;
	static uint8_t x172 = UINT8_MAX;

    t22 = (x169/(x170/(x171|x172)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x181 = -1;
	int8_t x182 = -1;
	static uint8_t x183 = 33U;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (x181/(x182/(x183|x184)));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x185 = 59376108LLU;
	int16_t x186 = INT16_MIN;
	volatile uint32_t x187 = 1552U;
	int64_t x188 = 55LL;
	uint64_t t24 = 130686499364491214LLU;

    t24 = (x185/(x186/(x187|x188)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x190 = UINT32_MAX;
	int16_t x191 = -1;
	volatile int64_t t25 = 491LL;

    t25 = (x189/(x190/(x191|x192)));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x205 = 5599807616257067LLU;
	volatile int16_t x207 = INT16_MIN;
	int64_t x208 = 11904108LL;

    t26 = (x205/(x206/(x207|x208)));

    if (t26 != 5599807616257067LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x209 = UINT16_MAX;
	uint64_t x210 = UINT64_MAX;
	uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;
	static volatile uint64_t t27 = 0LLU;

    t27 = (x209/(x210/(x211|x212)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x217 = 0U;
	static int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	static int8_t x220 = INT8_MIN;
	volatile uint32_t t28 = 0U;

    t28 = (x217/(x218/(x219|x220)));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x221 = 118U;
	uint8_t x222 = 14U;
	int8_t x223 = -1;
	uint8_t x224 = 97U;
	volatile int32_t t29 = -61406323;

    t29 = (x221/(x222/(x223|x224)));

    if (t29 != -8) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x225 = 101U;
	static int64_t x226 = -521418850995277LL;
	uint16_t x227 = 6904U;
	int16_t x228 = INT16_MIN;
	volatile int64_t t30 = -119985706952LL;

    t30 = (x225/(x226/(x227|x228)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x237 = 8U;
	uint16_t x239 = 1U;
	uint16_t x240 = UINT16_MAX;
	int32_t t31 = -81101;

    t31 = (x237/(x238/(x239|x240)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x241 = INT8_MIN;
	static int32_t x242 = INT32_MIN;
	int64_t x243 = -5LL;
	int64_t x244 = -1LL;
	int64_t t32 = -29LL;

    t32 = (x241/(x242/(x243|x244)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x253 = 9;
	int64_t x254 = INT64_MIN;
	int64_t t33 = -2LL;

    t33 = (x253/(x254/(x255|x256)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x261 = 0U;
	int8_t x262 = -9;

    t34 = (x261/(x262/(x263|x264)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x269 = 336409612945LLU;
	int8_t x270 = -1;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 242916075LLU;

    t35 = (x269/(x270/(x271|x272)));

    if (t35 != 336409612945LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MAX;
	static int16_t x292 = -18;
	uint32_t t36 = 107968503U;

    t36 = (x289/(x290/(x291|x292)));

    if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	int32_t x299 = 88088752;
	int64_t t37 = 5880451LL;

    t37 = (x297/(x298/(x299|x300)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x301 = 47U;
	volatile int16_t x302 = INT16_MIN;
	volatile int16_t x304 = INT16_MIN;
	volatile int64_t t38 = 120854755037896LL;

    t38 = (x301/(x302/(x303|x304)));

    if (t38 != 47LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x309 = INT32_MAX;
	int16_t x310 = -3157;
	int8_t x311 = -52;
	int64_t x312 = -33521970779869LL;
	int64_t t39 = -262153597325LL;

    t39 = (x309/(x310/(x311|x312)));

    if (t39 != 11608019LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x313 = 0U;
	volatile int16_t x314 = -173;
	volatile int16_t x315 = -1;

    t40 = (x313/(x314/(x315|x316)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x317 = 96U;
	int16_t x318 = -1;
	uint32_t x319 = 95148221U;
	int32_t x320 = INT32_MIN;

    t41 = (x317/(x318/(x319|x320)));

    if (t41 != 96U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	volatile int64_t t42 = 1165849721450450211LL;

    t42 = (x321/(x322/(x323|x324)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x349 = -8;
	int16_t x351 = INT16_MAX;

    t43 = (x349/(x350/(x351|x352)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x357 = 51U;
	volatile int64_t x358 = INT64_MIN;
	static int16_t x359 = -21;
	uint32_t x360 = 3818U;
	static int64_t t44 = 82944LL;

    t44 = (x357/(x358/(x359|x360)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	int32_t x362 = INT32_MIN;
	volatile int16_t x364 = -8;
	static volatile int32_t t45 = -1141804;

    t45 = (x361/(x362/(x363|x364)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x371 = UINT8_MAX;
	int8_t x372 = -1;
	volatile int64_t t46 = -4LL;

    t46 = (x369/(x370/(x371|x372)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x373 = 2;
	int64_t x374 = INT64_MAX;
	static int8_t x376 = INT8_MIN;
	static int64_t t47 = 18394LL;

    t47 = (x373/(x374/(x375|x376)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x385 = INT16_MIN;
	int32_t x386 = -340665861;
	static volatile int8_t x388 = -1;
	volatile int32_t t48 = 66239846;

    t48 = (x385/(x386/(x387|x388)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x397 = INT8_MIN;
	volatile int64_t x398 = -1LL;
	uint64_t x399 = UINT64_MAX;
	uint32_t x400 = 1657875571U;
	volatile uint64_t t49 = 41LLU;

    t49 = (x397/(x398/(x399|x400)));

    if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x405 = INT64_MAX;
	int64_t x406 = 151458981627364LL;
	volatile int64_t x407 = -1LL;
	int64_t x408 = INT64_MIN;
	volatile int64_t t50 = 99666559LL;

    t50 = (x405/(x406/(x407|x408)));

    if (t50 != -60896LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x418 = INT16_MIN;
	uint32_t x420 = 1640U;
	int64_t t51 = INT64_MAX;

    t51 = (x417/(x418/(x419|x420)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x421 = 5U;

    t52 = (x421/(x422/(x423|x424)));

    if (t52 != 5U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x425 = UINT16_MAX;
	int32_t x426 = INT32_MIN;
	volatile int16_t x427 = INT16_MIN;
	int64_t t53 = 15794493LL;

    t53 = (x425/(x426/(x427|x428)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x433 = 0;
	volatile int32_t x434 = INT32_MIN;
	int64_t x435 = -1361258LL;
	volatile int8_t x436 = INT8_MAX;
	int64_t t54 = 1LL;

    t54 = (x433/(x434/(x435|x436)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x445 = 380827579;
	uint16_t x446 = 254U;
	uint64_t x447 = 1LLU;
	static int64_t x448 = 1LL;
	uint64_t t55 = 273461LLU;

    t55 = (x445/(x446/(x447|x448)));

    if (t55 != 1499321LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x449 = -1;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 1U;
	static int32_t x452 = INT32_MIN;
	static int32_t t56 = 1;

    t56 = (x449/(x450/(x451|x452)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x453 = -32;
	int16_t x454 = INT16_MIN;
	uint16_t x455 = 1896U;
	uint8_t x456 = 35U;
	volatile int32_t t57 = 44;

    t57 = (x453/(x454/(x455|x456)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x462 = INT64_MIN;
	uint64_t x464 = 4302923461793826LLU;
	volatile uint64_t t58 = 133828625119719617LLU;

    t58 = (x461/(x462/(x463|x464)));

    if (t58 != 8607906707283971LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x473 = -1;
	int64_t x474 = INT64_MAX;
	int8_t x475 = INT8_MIN;
	int64_t x476 = INT64_MIN;
	int64_t t59 = -39240457911293LL;

    t59 = (x473/(x474/(x475|x476)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x489 = INT64_MIN;
	uint16_t x492 = 23020U;
	static volatile int64_t t60 = 60LL;

    t60 = (x489/(x490/(x491|x492)));

    if (t60 != -281474976710656LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x501 = -9;
	int32_t x502 = INT32_MAX;
	int16_t x503 = -1;
	int8_t x504 = -63;
	int32_t t61 = -948;

    t61 = (x501/(x502/(x503|x504)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x509 = -1;
	int64_t x510 = -299792544710599LL;
	int8_t x511 = INT8_MAX;
	static int8_t x512 = -24;
	static int64_t t62 = -5426887LL;

    t62 = (x509/(x510/(x511|x512)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x521 = -1;
	int64_t x522 = INT64_MIN;
	volatile int64_t t63 = 1635632592908LL;

    t63 = (x521/(x522/(x523|x524)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x533 = 12U;
	int32_t x534 = INT32_MIN;
	uint16_t x535 = 412U;

    t64 = (x533/(x534/(x535|x536)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x545 = INT8_MAX;
	uint64_t x546 = UINT64_MAX;
	static int16_t x547 = -1;

    t65 = (x545/(x546/(x547|x548)));

    if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x549 = INT8_MIN;
	int64_t x550 = INT64_MIN;
	volatile int32_t x551 = -842528474;
	int64_t t66 = 12202430510LL;

    t66 = (x549/(x550/(x551|x552)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x555 = 12785586056LLU;
	static uint8_t x556 = UINT8_MAX;

    t67 = (x553/(x554/(x555|x556)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x557 = INT64_MIN;
	static int16_t x558 = INT16_MIN;
	int16_t x559 = INT16_MIN;
	volatile int16_t x560 = -1;

    t68 = (x557/(x558/(x559|x560)));

    if (t68 != -281474976710656LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x565 = UINT64_MAX;
	int64_t x567 = -7060LL;
	int8_t x568 = INT8_MIN;

    t69 = (x565/(x566/(x567|x568)));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x573 = 697U;
	int8_t x575 = -1;
	static uint8_t x576 = UINT8_MAX;
	int32_t t70 = 8;

    t70 = (x573/(x574/(x575|x576)));

    if (t70 != 697) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x578 = INT64_MAX;
	int16_t x579 = -1;
	int8_t x580 = -1;
	volatile int64_t t71 = -6LL;

    t71 = (x577/(x578/(x579|x580)));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x589 = -101;
	int16_t x590 = -1879;
	uint8_t x591 = 31U;
	int8_t x592 = 0;
	volatile int32_t t72 = -94;

    t72 = (x589/(x590/(x591|x592)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x606 = INT64_MIN;
	int8_t x608 = 1;
	static volatile int64_t t73 = -445971LL;

    t73 = (x605/(x606/(x607|x608)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x613 = INT32_MAX;
	volatile int32_t x615 = -206212;
	static volatile uint16_t x616 = 24U;
	static volatile int64_t t74 = 14158LL;

    t74 = (x613/(x614/(x615|x616)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x619 = -1;
	uint16_t x620 = UINT16_MAX;
	volatile int64_t t75 = INT64_MIN;

    t75 = (x617/(x618/(x619|x620)));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x625 = 144477U;
	volatile int64_t x626 = INT64_MIN;
	static int8_t x627 = INT8_MIN;
	int16_t x628 = -2886;
	volatile int64_t t76 = 101LL;

    t76 = (x625/(x626/(x627|x628)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x630 = INT64_MIN;
	int8_t x631 = 2;
	static volatile int8_t x632 = INT8_MIN;
	volatile int64_t t77 = 508LL;

    t77 = (x629/(x630/(x631|x632)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x634 = -1;
	volatile int16_t x635 = INT16_MIN;
	int64_t x636 = -1LL;
	int64_t t78 = 369279196885295192LL;

    t78 = (x633/(x634/(x635|x636)));

    if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x641 = 146124U;
	static int16_t x643 = -1;
	int32_t x644 = 279731765;
	static uint32_t t79 = 1819987564U;

    t79 = (x641/(x642/(x643|x644)));

    if (t79 != 146124U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x653 = -3864418;
	static uint16_t x654 = UINT16_MAX;
	volatile int16_t x655 = INT16_MIN;
	int32_t x656 = INT32_MIN;
	static int32_t t80 = -1;

    t80 = (x653/(x654/(x655|x656)));

    if (t80 != 3864418) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x658 = INT8_MIN;
	int32_t x659 = -126;
	int16_t x660 = INT16_MAX;
	static int32_t t81 = 5905312;

    t81 = (x657/(x658/(x659|x660)));

    if (t81 != 931427) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x661 = 27U;
	volatile int32_t x662 = -1062;
	int16_t x664 = 0;
	static volatile int32_t t82 = -2937424;

    t82 = (x661/(x662/(x663|x664)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x665 = INT16_MAX;
	static uint64_t x666 = 26836909401LLU;
	volatile int8_t x667 = INT8_MAX;
	uint16_t x668 = UINT16_MAX;
	uint64_t t83 = 1019623067669650530LLU;

    t83 = (x665/(x666/(x667|x668)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x669 = -1LL;
	static int32_t x670 = INT32_MAX;
	static volatile int8_t x672 = -20;

    t84 = (x669/(x670/(x671|x672)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x681 = INT8_MAX;
	static int32_t x682 = 35652295;
	uint16_t x683 = 2039U;
	static int8_t x684 = INT8_MIN;
	int32_t t85 = 1;

    t85 = (x681/(x682/(x683|x684)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x686 = -1;
	int8_t x687 = INT8_MAX;
	uint32_t x688 = 54972407U;
	uint32_t t86 = 573U;

    t86 = (x685/(x686/(x687|x688)));

    if (t86 != 778165U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x693 = 2531U;
	int16_t x694 = 1;
	int16_t x695 = -1;
	int16_t x696 = INT16_MIN;
	static volatile uint32_t t87 = 66U;

    t87 = (x693/(x694/(x695|x696)));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x697 = 11395U;
	int16_t x698 = INT16_MIN;
	uint16_t x700 = UINT16_MAX;
	int32_t t88 = -1;

    t88 = (x697/(x698/(x699|x700)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x705 = UINT8_MAX;
	volatile int16_t x706 = 135;
	int32_t x707 = -1;
	int32_t x708 = INT32_MAX;
	int32_t t89 = 721690625;

    t89 = (x705/(x706/(x707|x708)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x725 = 5U;
	uint8_t x726 = 15U;
	volatile int64_t x727 = -1LL;
	int64_t x728 = INT64_MIN;
	int64_t t90 = 2168161340928268LL;

    t90 = (x725/(x726/(x727|x728)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x746 = 118U;
	static int32_t x747 = 26971;
	int16_t x748 = -1;
	int32_t t91 = 264045565;

    t91 = (x745/(x746/(x747|x748)));

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x749 = 376U;
	static volatile int32_t x750 = INT32_MIN;
	uint16_t x751 = 297U;
	static int16_t x752 = INT16_MIN;
	uint32_t t92 = 4046U;

    t92 = (x749/(x750/(x751|x752)));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MAX;
	uint16_t x763 = 6313U;
	int64_t x764 = 0LL;
	int64_t t93 = 30LL;

    t93 = (x761/(x762/(x763|x764)));

    if (t93 != 6313LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x769 = UINT16_MAX;
	int32_t x770 = -5727;
	volatile int16_t x771 = INT16_MIN;
	int16_t x772 = -1;
	int32_t t94 = 10841;

    t94 = (x769/(x770/(x771|x772)));

    if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x773 = INT64_MAX;
	int8_t x774 = -6;
	static uint32_t x775 = 182482U;
	int32_t x776 = INT32_MIN;
	static int64_t t95 = INT64_MAX;

    t95 = (x773/(x774/(x775|x776)));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x781 = UINT8_MAX;
	int32_t x783 = -25956390;
	uint16_t x784 = UINT16_MAX;
	uint32_t t96 = 155756U;

    t96 = (x781/(x782/(x783|x784)));

    if (t96 != 255U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x785 = UINT64_MAX;
	volatile int64_t x786 = INT64_MAX;
	uint16_t x787 = 5581U;
	static uint8_t x788 = 5U;
	volatile uint64_t t97 = 2377605LLU;

    t97 = (x785/(x786/(x787|x788)));

    if (t97 != 11162LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x801 = UINT32_MAX;
	uint32_t x802 = UINT32_MAX;
	int16_t x803 = -1;
	int8_t x804 = 20;
	uint32_t t98 = UINT32_MAX;

    t98 = (x801/(x802/(x803|x804)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x818 = INT16_MIN;
	static volatile int8_t x819 = INT8_MIN;
	static uint32_t t99 = 22U;

    t99 = (x817/(x818/(x819|x820)));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x825 = 17U;
	uint8_t x826 = 68U;
	static volatile uint32_t x827 = 5974U;
	int64_t x828 = -1LL;
	int64_t t100 = -54805002LL;

    t100 = (x825/(x826/(x827|x828)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x833 = 242479004112739446LLU;
	static int64_t x834 = INT64_MIN;
	static int64_t x835 = -800172003LL;
	volatile int16_t x836 = 2;
	static uint64_t t101 = 6377LLU;

    t101 = (x833/(x834/(x835|x836)));

    if (t101 != 21036222LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x845 = UINT32_MAX;
	static int32_t x846 = INT32_MAX;
	int32_t x847 = -40;
	static int8_t x848 = -1;
	volatile uint32_t t102 = 5U;

    t102 = (x845/(x846/(x847|x848)));

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x857 = INT32_MIN;
	volatile uint32_t x859 = 22467U;
	int32_t x860 = INT32_MAX;
	volatile uint32_t t103 = 8606U;

    t103 = (x857/(x858/(x859|x860)));

    if (t103 != 2147483648U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x861 = 266493213924431LLU;
	volatile int32_t x863 = INT32_MAX;
	int32_t x864 = 0;
	static volatile uint64_t t104 = 7828LLU;

    t104 = (x861/(x862/(x863|x864)));

    if (t104 != 31023LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x869 = INT64_MAX;
	int8_t x870 = INT8_MAX;
	volatile uint8_t x872 = 3U;
	int64_t t105 = -469759LL;

    t105 = (x869/(x870/(x871|x872)));

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x873 = UINT64_MAX;
	uint32_t x874 = UINT32_MAX;
	int8_t x875 = 2;
	volatile uint32_t x876 = 14U;
	volatile uint64_t t106 = 38186614069117LLU;

    t106 = (x873/(x874/(x875|x876)));

    if (t106 != 60129542200LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x881 = 0;
	int32_t x882 = 14;
	int64_t x883 = -1LL;
	volatile int16_t x884 = INT16_MIN;
	volatile int64_t t107 = -48034095657279400LL;

    t107 = (x881/(x882/(x883|x884)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x885 = INT64_MAX;
	int32_t x886 = INT32_MAX;
	int16_t x887 = INT16_MIN;
	int32_t x888 = 0;

    t108 = (x885/(x886/(x887|x888)));

    if (t108 != -140739635871744LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x889 = 114U;
	volatile int64_t x890 = INT64_MAX;
	uint16_t x891 = 1087U;
	volatile uint64_t x892 = 3847868LLU;
	uint64_t t109 = 1739LLU;

    t109 = (x889/(x890/(x891|x892)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x901 = 63739138U;
	int32_t x902 = INT32_MIN;
	int32_t x903 = -1306;
	volatile uint32_t t110 = 19U;

    t110 = (x901/(x902/(x903|x904)));

    if (t110 != 38U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x909 = -81174981;
	int32_t x910 = INT32_MIN;
	static int8_t x911 = 1;

    t111 = (x909/(x910/(x911|x912)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x913 = 7712LLU;
	volatile uint16_t x914 = 3471U;
	int32_t x916 = -1;
	uint64_t t112 = 678LLU;

    t112 = (x913/(x914/(x915|x916)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x917 = INT8_MIN;
	uint8_t x919 = 5U;
	int32_t t113 = -908663;

    t113 = (x917/(x918/(x919|x920)));

    if (t113 != -5) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x937 = 2518402U;
	uint16_t x938 = UINT16_MAX;
	int8_t x939 = 10;
	int32_t x940 = -2;
	volatile uint32_t t114 = 789173574U;

    t114 = (x937/(x938/(x939|x940)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x958 = INT32_MAX;
	static volatile int32_t x959 = INT32_MIN;
	int64_t t115 = 16887217418LL;

    t115 = (x957/(x958/(x959|x960)));

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x973 = INT16_MIN;
	uint16_t x974 = 10541U;
	int8_t x975 = -3;
	static volatile uint16_t x976 = 21U;
	volatile int32_t t116 = -205594526;

    t116 = (x973/(x974/(x975|x976)));

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x981 = INT64_MIN;
	int32_t x982 = INT32_MIN;
	int16_t x984 = -406;
	volatile int64_t t117 = 2645558968LL;

    t117 = (x981/(x982/(x983|x984)));

    if (t117 != -1675037345280LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x986 = -1;
	int16_t x988 = -1;
	int32_t t118 = -1;

    t118 = (x985/(x986/(x987|x988)));

    if (t118 != 19960) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x989 = INT32_MIN;
	volatile int32_t x990 = INT32_MIN;
	volatile int64_t x991 = INT64_MAX;
	int64_t t119 = -12165LL;

    t119 = (x989/(x990/(x991|x992)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x997 = INT16_MIN;
	volatile int32_t x998 = 203;

    t120 = (x997/(x998/(x999|x1000)));

    if (t120 != 161) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1013 = 0;
	uint16_t x1014 = UINT16_MAX;
	int32_t x1015 = -1;
	uint8_t x1016 = UINT8_MAX;
	static int32_t t121 = -30;

    t121 = (x1013/(x1014/(x1015|x1016)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1017 = 622LLU;
	static int64_t x1018 = INT64_MIN;
	uint32_t x1019 = UINT32_MAX;
	uint32_t x1020 = 1742U;
	static uint64_t t122 = 44147263818292LLU;

    t122 = (x1017/(x1018/(x1019|x1020)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x1025 = 199866U;
	int64_t x1026 = INT64_MIN;
	volatile uint16_t x1028 = 28U;
	volatile int64_t t123 = -211748351934497LL;

    t123 = (x1025/(x1026/(x1027|x1028)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x1041 = -1;
	int8_t x1042 = INT8_MAX;
	int16_t x1043 = -295;
	int8_t x1044 = -1;
	int32_t t124 = 1;

    t124 = (x1041/(x1042/(x1043|x1044)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x1049 = -689;
	static int8_t x1050 = -1;
	int32_t x1051 = -1;
	volatile int8_t x1052 = -1;
	volatile int32_t t125 = -129;

    t125 = (x1049/(x1050/(x1051|x1052)));

    if (t125 != -689) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1065 = INT16_MIN;
	volatile int16_t x1066 = 1860;
	int8_t x1068 = INT8_MIN;
	int32_t t126 = 111385;

    t126 = (x1065/(x1066/(x1067|x1068)));

    if (t126 != 840) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1081 = INT16_MAX;
	static int64_t x1083 = 16723950LL;
	static int16_t x1084 = -1;
	int64_t t127 = 137950LL;

    t127 = (x1081/(x1082/(x1083|x1084)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1086 = INT8_MIN;
	int8_t x1087 = -10;
	static int32_t x1088 = INT32_MIN;

    t128 = (x1085/(x1086/(x1087|x1088)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1106 = UINT64_MAX;
	int64_t x1107 = INT64_MAX;
	int8_t x1108 = 1;
	uint64_t t129 = 13751957596803LLU;

    t129 = (x1105/(x1106/(x1107|x1108)));

    if (t129 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x1109 = -1LL;
	static uint64_t x1110 = UINT64_MAX;
	uint16_t x1111 = 31707U;
	int16_t x1112 = INT16_MIN;
	volatile uint64_t t130 = UINT64_MAX;

    t130 = (x1109/(x1110/(x1111|x1112)));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1154 = 354U;
	static volatile int64_t x1155 = -1LL;
	int64_t x1156 = INT64_MIN;
	int64_t t131 = 31LL;

    t131 = (x1153/(x1154/(x1155|x1156)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1157 = INT16_MIN;
	int32_t x1159 = -1;
	uint8_t x1160 = 0U;

    t132 = (x1157/(x1158/(x1159|x1160)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1161 = 106958389519985834LL;
	static int16_t x1162 = -1337;
	static int8_t x1164 = -1;
	int64_t t133 = 0LL;

    t133 = (x1161/(x1162/(x1163|x1164)));

    if (t133 != 79998795452495LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1169 = 29512LL;
	int64_t x1170 = 1797663554585600220LL;
	int64_t x1171 = INT64_MIN;
	int16_t x1172 = INT16_MIN;
	int64_t t134 = -226850LL;

    t134 = (x1169/(x1170/(x1171|x1172)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1173 = -1LL;
	int16_t x1174 = -49;
	int8_t x1176 = INT8_MIN;
	static uint64_t t135 = UINT64_MAX;

    t135 = (x1173/(x1174/(x1175|x1176)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x1183 = 3U;
	int64_t x1184 = 16004LL;
	volatile int64_t t136 = 1526625081224490385LL;

    t136 = (x1181/(x1182/(x1183|x1184)));

    if (t136 != -6LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x1221 = INT64_MIN;
	static int32_t x1222 = -1;
	int32_t x1223 = -1;
	volatile uint8_t x1224 = 11U;
	volatile int64_t t137 = INT64_MIN;

    t137 = (x1221/(x1222/(x1223|x1224)));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1225 = UINT8_MAX;
	uint8_t x1226 = 16U;
	static int64_t x1228 = -172LL;
	volatile int64_t t138 = 51606293676585534LL;

    t138 = (x1225/(x1226/(x1227|x1228)));

    if (t138 != -15LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1258 = INT32_MIN;
	int8_t x1259 = 0;
	uint64_t x1260 = 139900633631810LLU;
	uint64_t t139 = 2955533982LLU;

    t139 = (x1257/(x1258/(x1259|x1260)));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1273 = -1;
	volatile int32_t x1274 = INT32_MAX;
	int8_t x1275 = -7;
	uint8_t x1276 = 8U;
	volatile int32_t t140 = -1;

    t140 = (x1273/(x1274/(x1275|x1276)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1277 = 56LL;
	volatile int16_t x1278 = -23;
	volatile int32_t x1279 = -1;
	volatile uint8_t x1280 = 114U;
	volatile int64_t t141 = 54754908379213571LL;

    t141 = (x1277/(x1278/(x1279|x1280)));

    if (t141 != 2LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x1285 = INT32_MIN;
	int32_t x1287 = -218273030;
	static int16_t x1288 = INT16_MIN;
	static volatile int32_t t142 = 644522;

    t142 = (x1285/(x1286/(x1287|x1288)));

    if (t142 != 89478485) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1289 = INT16_MAX;
	int64_t x1290 = 749901647419LL;
	int32_t x1291 = -69448;
	volatile int32_t x1292 = INT32_MIN;

    t143 = (x1289/(x1290/(x1291|x1292)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1302 = INT32_MAX;
	volatile uint16_t x1304 = UINT16_MAX;
	volatile uint32_t t144 = 344304U;

    t144 = (x1301/(x1302/(x1303|x1304)));

    if (t144 != 477218530U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1321 = INT8_MAX;
	volatile int8_t x1323 = -7;
	int16_t x1324 = INT16_MIN;
	static int32_t t145 = 209510;

    t145 = (x1321/(x1322/(x1323|x1324)));

    if (t145 != -9) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1330 = -3LL;
	int8_t x1331 = -3;
	int64_t t146 = -3644406284977926713LL;

    t146 = (x1329/(x1330/(x1331|x1332)));

    if (t146 != 760323LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x1334 = 1996983871674285LL;
	int32_t x1335 = 891;
	uint32_t x1336 = 416U;

    t147 = (x1333/(x1334/(x1335|x1336)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x1338 = -1LL;
	volatile uint16_t x1339 = 10672U;
	uint64_t t148 = 30345641663124LLU;

    t148 = (x1337/(x1338/(x1339|x1340)));

    if (t148 != 32193270630998373LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1365 = 3282;
	int32_t x1366 = -1;
	int32_t x1367 = -1;
	volatile uint32_t t149 = 1831737U;

    t149 = (x1365/(x1366/(x1367|x1368)));

    if (t149 != 3282U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x1373 = INT32_MIN;
	int64_t x1374 = -96LL;
	int32_t x1375 = -49;
	int64_t x1376 = INT64_MAX;
	int64_t t150 = -247585467LL;

    t150 = (x1373/(x1374/(x1375|x1376)));

    if (t150 != -22369621LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1377 = 90U;
	int32_t x1380 = INT32_MAX;
	volatile uint32_t t151 = 2336629U;

    t151 = (x1377/(x1378/(x1379|x1380)));

    if (t151 != 90U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1402 = INT32_MIN;
	volatile uint16_t x1403 = 8U;
	volatile int64_t x1404 = -1LL;
	volatile int64_t t152 = 26525090883LL;

    t152 = (x1401/(x1402/(x1403|x1404)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x1405 = -2;
	int16_t x1406 = -1;
	static uint32_t x1407 = 32500U;
	uint32_t t153 = 120U;

    t153 = (x1405/(x1406/(x1407|x1408)));

    if (t153 != 4294967294U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x1421 = -1;
	volatile int8_t x1422 = INT8_MIN;
	static uint32_t x1423 = UINT32_MAX;
	int64_t x1424 = -1LL;

    t154 = (x1421/(x1422/(x1423|x1424)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1425 = INT32_MIN;
	volatile uint64_t x1426 = UINT64_MAX;
	uint32_t x1427 = 1410390742U;
	static int64_t x1428 = 758753786225LL;

    t155 = (x1425/(x1426/(x1427|x1428)));

    if (t155 != 760163096397LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x1429 = 115519LLU;
	int8_t x1430 = -1;
	volatile int32_t x1431 = -1;
	int64_t x1432 = -1LL;
	uint64_t t156 = 118083LLU;

    t156 = (x1429/(x1430/(x1431|x1432)));

    if (t156 != 115519LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x1446 = INT16_MIN;
	int32_t t157 = -4314;

    t157 = (x1445/(x1446/(x1447|x1448)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x1465 = UINT8_MAX;

    t158 = (x1465/(x1466/(x1467|x1468)));

    if (t158 != 255U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1469 = -1LL;
	int16_t x1470 = -13028;
	int8_t x1471 = 6;
	uint32_t x1472 = 1U;
	int64_t t159 = 906517LL;

    t159 = (x1469/(x1470/(x1471|x1472)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1473 = INT16_MIN;
	int64_t x1474 = INT64_MIN;
	int64_t x1475 = INT64_MAX;
	static uint8_t x1476 = 61U;
	int64_t t160 = 0LL;

    t160 = (x1473/(x1474/(x1475|x1476)));

    if (t160 != 32768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1481 = -47395376903LL;
	int32_t x1483 = -1;
	volatile int32_t x1484 = -8838248;
	volatile int64_t t161 = -16241430138029477LL;

    t161 = (x1481/(x1482/(x1483|x1484)));

    if (t161 != -311811690LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1493 = INT32_MAX;
	static int32_t x1494 = -1;
	static int8_t x1495 = -1;
	static volatile uint8_t x1496 = 1U;

    t162 = (x1493/(x1494/(x1495|x1496)));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1497 = INT16_MAX;
	int8_t x1499 = 4;
	int64_t x1500 = -1LL;
	int64_t t163 = -51723777224LL;

    t163 = (x1497/(x1498/(x1499|x1500)));

    if (t163 != 32767LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x1501 = INT64_MAX;
	int64_t x1502 = INT64_MIN;
	static int32_t x1503 = 509640;

    t164 = (x1501/(x1502/(x1503|x1504)));

    if (t164 != -524287LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1505 = 1651;
	int32_t x1506 = INT32_MAX;
	volatile uint8_t x1507 = 1U;
	volatile int32_t t165 = 390;

    t165 = (x1505/(x1506/(x1507|x1508)));

    if (t165 != -1651) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1517 = INT8_MIN;
	int8_t x1518 = INT8_MIN;
	int16_t x1519 = -1;
	uint16_t x1520 = 7U;
	int32_t t166 = -74983091;

    t166 = (x1517/(x1518/(x1519|x1520)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x1525 = -7;
	int16_t x1526 = INT16_MAX;
	int16_t x1528 = INT16_MAX;
	int32_t t167 = -10264416;

    t167 = (x1525/(x1526/(x1527|x1528)));

    if (t167 != -7) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x1529 = INT64_MAX;
	int8_t x1531 = 1;
	int64_t x1532 = -7797349151554340LL;

    t168 = (x1529/(x1530/(x1531|x1532)));

    if (t168 != -7803191232533651LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1533 = INT32_MIN;
	static int8_t x1534 = -30;
	static volatile uint32_t t169 = 175U;

    t169 = (x1533/(x1534/(x1535|x1536)));

    if (t169 != 2147483648U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1550 = 15489744848576699LL;
	volatile int64_t t170 = -49047292823264LL;

    t170 = (x1549/(x1550/(x1551|x1552)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1557 = 30628480U;
	static uint32_t x1558 = UINT32_MAX;
	static int16_t x1559 = INT16_MIN;
	int32_t x1560 = INT32_MAX;
	volatile uint32_t t171 = 644U;

    t171 = (x1557/(x1558/(x1559|x1560)));

    if (t171 != 30628480U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1561 = -348455;
	int8_t x1563 = -1;
	int32_t t172 = -55990535;

    t172 = (x1561/(x1562/(x1563|x1564)));

    if (t172 != 38717) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1569 = 54383U;
	uint32_t x1570 = UINT32_MAX;
	int16_t x1571 = INT16_MAX;
	uint8_t x1572 = 91U;

    t173 = (x1569/(x1570/(x1571|x1572)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1581 = -9;
	int32_t x1583 = INT32_MIN;
	int32_t x1584 = -31;
	volatile int32_t t174 = 126;

    t174 = (x1581/(x1582/(x1583|x1584)));

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1597 = INT8_MIN;
	volatile int16_t x1598 = -1;
	int16_t x1599 = -1;
	int64_t t175 = -1863280147484037461LL;

    t175 = (x1597/(x1598/(x1599|x1600)));

    if (t175 != -128LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1605 = INT8_MIN;
	static uint64_t x1606 = 17213046650069LLU;
	int16_t x1607 = 170;
	static uint16_t x1608 = UINT16_MAX;
	volatile uint64_t t176 = 7372953166LLU;

    t176 = (x1605/(x1606/(x1607|x1608)));

    if (t176 != 70232039734LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1609 = 46;
	int64_t x1611 = -1LL;
	int64_t x1612 = -473767777196LL;
	volatile int64_t t177 = 953821069428653342LL;

    t177 = (x1609/(x1610/(x1611|x1612)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1629 = UINT64_MAX;
	volatile int16_t x1631 = -183;
	int8_t x1632 = -7;
	static volatile uint64_t t178 = 43134321503608LLU;

    t178 = (x1629/(x1630/(x1631|x1632)));

    if (t178 != 324703738249802LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1633 = 0U;
	volatile uint64_t x1634 = UINT64_MAX;
	uint64_t t179 = 5913LLU;

    t179 = (x1633/(x1634/(x1635|x1636)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1649 = INT32_MAX;
	static uint32_t x1650 = UINT32_MAX;
	int16_t x1651 = INT16_MIN;
	uint32_t x1652 = 4935U;

    t180 = (x1649/(x1650/(x1651|x1652)));

    if (t180 != 2147483647U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1657 = INT8_MAX;
	int16_t x1658 = 8;
	int16_t x1659 = -1;
	int16_t x1660 = 2;
	int32_t t181 = -6;

    t181 = (x1657/(x1658/(x1659|x1660)));

    if (t181 != -15) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1665 = 73U;
	int16_t x1666 = INT16_MIN;
	static uint64_t x1668 = 70344567177244LLU;
	uint64_t t182 = 1637965632364170826LLU;

    t182 = (x1665/(x1666/(x1667|x1668)));

    if (t182 != 73LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1669 = INT64_MIN;
	static int32_t x1670 = INT32_MIN;
	int32_t x1671 = 57185;
	volatile int64_t t183 = 186LL;

    t183 = (x1669/(x1670/(x1671|x1672)));

    if (t183 != 281474976710656LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1673 = -1;
	static int8_t x1674 = -1;
	int16_t x1675 = -1;
	int64_t x1676 = INT64_MIN;
	static volatile int64_t t184 = 79801011139242744LL;

    t184 = (x1673/(x1674/(x1675|x1676)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1681 = 14592U;
	volatile uint64_t x1682 = 46106159194LLU;
	uint8_t x1684 = 27U;
	uint64_t t185 = 170736LLU;

    t185 = (x1681/(x1682/(x1683|x1684)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1698 = INT8_MIN;
	int32_t x1699 = -1;
	static int64_t x1700 = INT64_MIN;
	int64_t t186 = -31097943LL;

    t186 = (x1697/(x1698/(x1699|x1700)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1701 = -1;
	int64_t x1702 = INT64_MAX;
	int64_t x1703 = 0LL;
	int16_t x1704 = -27;
	volatile int64_t t187 = -43069LL;

    t187 = (x1701/(x1702/(x1703|x1704)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1705 = -1;
	int8_t x1706 = -1;

    t188 = (x1705/(x1706/(x1707|x1708)));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x1712 = 126U;
	volatile int64_t t189 = -82741434LL;

    t189 = (x1709/(x1710/(x1711|x1712)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x1722 = INT64_MIN;
	int8_t x1724 = INT8_MIN;
	volatile int64_t t190 = 2LL;

    t190 = (x1721/(x1722/(x1723|x1724)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1737 = 25U;
	static volatile uint8_t x1738 = UINT8_MAX;
	int64_t x1739 = -1LL;
	volatile int8_t x1740 = 1;
	volatile int64_t t191 = 16520718073426037LL;

    t191 = (x1737/(x1738/(x1739|x1740)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1741 = 4;
	int64_t x1742 = INT64_MIN;
	int64_t x1743 = INT64_MAX;
	volatile uint32_t x1744 = 7695782U;
	volatile int64_t t192 = 10761924LL;

    t192 = (x1741/(x1742/(x1743|x1744)));

    if (t192 != -4LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1746 = INT16_MIN;
	int32_t x1747 = INT32_MIN;
	int16_t x1748 = INT16_MIN;

    t193 = (x1745/(x1746/(x1747|x1748)));

    if (t193 != 10) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1754 = INT16_MIN;
	uint8_t x1755 = 1U;
	int8_t x1756 = 3;

    t194 = (x1753/(x1754/(x1755|x1756)));

    if (t194 != 921) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1757 = -1LL;
	volatile int8_t x1760 = -1;
	uint64_t t195 = UINT64_MAX;

    t195 = (x1757/(x1758/(x1759|x1760)));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1773 = 583LL;
	int64_t x1774 = INT64_MIN;
	static uint32_t x1775 = 7U;
	int8_t x1776 = INT8_MAX;
	int64_t t196 = 194370006912LL;

    t196 = (x1773/(x1774/(x1775|x1776)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1790 = -1;
	volatile uint8_t x1791 = UINT8_MAX;
	uint32_t x1792 = 952142U;
	int64_t t197 = 50250LL;

    t197 = (x1789/(x1790/(x1791|x1792)));

    if (t197 != -2045093578016580LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1799 = -11952;
	static volatile int64_t t198 = 7414746657102LL;

    t198 = (x1797/(x1798/(x1799|x1800)));

    if (t198 != -6429591LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x1805 = -1;
	int16_t x1806 = 11;
	uint16_t x1807 = 116U;
	int16_t x1808 = -1;
	static int32_t t199 = 2;

    t199 = (x1805/(x1806/(x1807|x1808)));

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

