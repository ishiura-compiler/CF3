
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

int32_t t0 = 0;
int8_t x7 = 0;
int16_t x9 = -1;
volatile uint8_t x13 = 24U;
static volatile uint64_t x14 = 6130510135013LLU;
uint64_t t3 = 252692LLU;
int8_t x19 = INT8_MAX;
int8_t x25 = INT8_MIN;
volatile int16_t x31 = INT16_MIN;
volatile int64_t t7 = 5004417LL;
volatile uint32_t x35 = 37U;
uint16_t x37 = UINT16_MAX;
static int8_t x39 = -11;
uint8_t x42 = UINT8_MAX;
int32_t t10 = -16;
uint32_t x45 = 9311151U;
static uint32_t t11 = 11494830U;
int32_t t14 = -747;
int64_t x61 = INT64_MAX;
int8_t x66 = INT8_MAX;
int64_t x81 = -18233797LL;
static volatile uint32_t x89 = UINT32_MAX;
static uint32_t x90 = 10U;
uint32_t t21 = 231932U;
int32_t t22 = 83254398;
uint16_t x119 = 1560U;
int8_t x120 = 7;
int16_t x123 = INT16_MIN;
static uint64_t t29 = 21102260109LLU;
int16_t x131 = -1;
int64_t x132 = INT64_MIN;
volatile int8_t x133 = -1;
uint64_t x134 = 9251550800290673LLU;
uint32_t x138 = UINT32_MAX;
static int64_t x155 = INT64_MIN;
int32_t x161 = INT32_MIN;
static uint32_t x164 = UINT32_MAX;
uint32_t t35 = 30738217U;
uint16_t x168 = UINT16_MAX;
int32_t x177 = INT32_MIN;
static volatile int16_t x178 = -675;
volatile int32_t t39 = -28420417;
int8_t x189 = INT8_MIN;
uint32_t t41 = 1602U;
int8_t x194 = INT8_MIN;
uint32_t x196 = 1139U;
volatile int32_t x197 = -9;
int8_t x210 = 0;
static volatile int32_t t45 = -36924249;
uint8_t x215 = 0U;
int32_t x218 = 1764;
int8_t x219 = 23;
volatile int64_t t47 = -2262192LL;
static int64_t x239 = INT64_MAX;
static uint8_t x240 = 32U;
uint8_t x246 = 18U;
int16_t x247 = -1;
volatile uint64_t x255 = 858307139833LLU;
volatile int32_t t56 = -4;
int8_t x269 = 11;
uint64_t x271 = 1147083457833LLU;
int32_t x275 = 47;
static int64_t x280 = 952243289199406LL;
static int32_t x293 = 837679;
int32_t t63 = 9121;
uint64_t t64 = 3293994074703048651LLU;
uint64_t x308 = 164211538045LLU;
volatile int8_t x312 = INT8_MAX;
volatile int16_t x317 = -2;
static uint8_t x319 = 62U;
volatile int64_t x324 = -2389947559920LL;
static int16_t x325 = INT16_MAX;
int8_t x335 = INT8_MAX;
int32_t x337 = INT32_MIN;
static volatile int32_t t73 = 1716;
int8_t x345 = INT8_MIN;
static int32_t x349 = INT32_MAX;
int32_t x357 = -1;
static volatile int32_t x374 = -1;
int8_t x380 = -6;
int8_t x381 = INT8_MIN;
int16_t x382 = INT16_MAX;
uint64_t t84 = 247466131LLU;
uint32_t t85 = UINT32_MAX;
int64_t x395 = -10093224294LL;
static volatile int32_t x397 = INT32_MIN;
int16_t x406 = INT16_MAX;
int32_t x408 = INT32_MAX;
uint16_t x410 = 15790U;
int16_t x423 = 3;
volatile int32_t t90 = -169;
int64_t x430 = -311793405976457520LL;
int64_t x432 = -1578098265808LL;
static int64_t t92 = 179464788858LL;
static int32_t x436 = -66318289;
static uint64_t t93 = 64595LLU;
static int8_t x441 = INT8_MAX;
uint16_t x442 = 20U;
int64_t x449 = -5461905LL;
int16_t x450 = INT16_MIN;
static int64_t t97 = -7503842621LL;
volatile int32_t t98 = -467;
int8_t x459 = INT8_MAX;
static int8_t x462 = INT8_MIN;
int32_t t100 = 1769;
static volatile uint16_t x469 = 47U;
int8_t x472 = INT8_MIN;
static uint16_t x474 = 295U;
volatile uint16_t x477 = 7388U;
static volatile int64_t x484 = INT64_MIN;
uint8_t x488 = 117U;
int64_t t106 = INT64_MIN;
int16_t x491 = -1;
uint8_t x492 = 1U;
static int32_t t108 = 844;
int8_t x501 = INT8_MAX;
volatile int32_t t110 = 312898;
uint32_t x506 = 57049U;
static int64_t t112 = -32258597110295575LL;
int8_t x522 = -1;
int8_t x528 = -1;
uint32_t x530 = 21275U;
uint16_t x532 = UINT16_MAX;
static int64_t x544 = 1883352LL;
int64_t x545 = INT64_MIN;
int8_t x546 = 3;
int64_t x560 = INT64_MIN;
volatile int16_t x562 = INT16_MIN;
static int8_t x576 = INT8_MAX;
int8_t x581 = -1;
static int16_t x585 = -37;
int16_t x587 = INT16_MIN;
int32_t x591 = INT32_MIN;
volatile int32_t x593 = 8562654;
int64_t x597 = INT64_MIN;
int64_t t132 = -26644102184752723LL;
int16_t x603 = INT16_MAX;
int8_t x613 = INT8_MAX;
uint32_t x617 = 61042375U;
uint16_t x618 = 67U;
int32_t x623 = INT32_MIN;
int64_t x625 = INT64_MIN;
int32_t x627 = INT32_MIN;
int8_t x634 = 0;
int8_t x638 = INT8_MAX;
uint16_t x641 = 11608U;
int64_t x650 = -481340170885128728LL;
static int16_t x659 = -1;
int16_t x661 = INT16_MIN;
static volatile int64_t x667 = INT64_MIN;
int64_t x673 = -3772872576LL;
int32_t x679 = 2;
int8_t x680 = INT8_MIN;
static volatile int64_t x681 = -1LL;
int8_t x684 = INT8_MAX;
static int64_t x686 = 59LL;
uint64_t t153 = 14199LLU;
int8_t x692 = 51;
uint64_t x694 = UINT64_MAX;
static uint8_t x696 = 28U;
uint64_t t155 = 8464447688596LLU;
int32_t t156 = 15235819;
static uint32_t x701 = UINT32_MAX;
volatile int64_t t157 = -8667234LL;
volatile uint16_t x709 = 23U;
uint64_t x712 = 543152829430LLU;
uint64_t t159 = 48138LLU;
volatile uint8_t x718 = 0U;
int32_t x720 = -1;
static uint8_t x724 = 56U;
int8_t x728 = INT8_MAX;
int32_t x735 = INT32_MIN;
int8_t x736 = INT8_MIN;
int8_t x738 = INT8_MIN;
int64_t x739 = INT64_MIN;
volatile int64_t x740 = -34369065229110750LL;
static volatile int64_t t165 = 7LL;
volatile int32_t t167 = -21975;
volatile int16_t x755 = 19;
int8_t x758 = INT8_MIN;
int64_t x759 = -807149LL;
uint64_t x760 = 706LLU;
int64_t x762 = -1LL;
int16_t x763 = INT16_MIN;
volatile int64_t x767 = 1792037LL;
int32_t x768 = -1;
static int32_t x779 = INT32_MIN;
static uint16_t x780 = 429U;
static int8_t x784 = INT8_MAX;
static int32_t x787 = INT32_MIN;
volatile int16_t x788 = -1;
uint8_t x792 = 25U;
static uint64_t x794 = 6445606790LLU;
static uint64_t x800 = 189440141705466LLU;
static uint8_t x806 = 13U;
static int16_t x807 = -1;
volatile int64_t t181 = 35923817LL;
uint8_t x813 = 17U;
int8_t x814 = INT8_MAX;
volatile int32_t t182 = 1755;
int32_t x818 = 6;
volatile int16_t x823 = 5746;
uint64_t x825 = UINT64_MAX;
volatile uint64_t x827 = 40196763992949312LLU;
uint16_t x832 = 1U;
int8_t x838 = INT8_MAX;
static int32_t t188 = 900;
int8_t x843 = INT8_MIN;
int64_t x844 = -8709LL;
int16_t x854 = INT16_MAX;
uint64_t x855 = 1349212781981163LLU;
int64_t t192 = -87003539959082LL;
static volatile uint8_t x861 = 1U;
volatile uint64_t x869 = 67496468618038LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int8_t x2 = -1;
	static uint64_t x3 = 174LLU;
	volatile uint8_t x4 = 16U;

    t0 = (x1^(x2-(x3!=x4)));

    if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	static volatile uint32_t x6 = UINT32_MAX;
	int8_t x8 = -1;
	uint32_t t1 = 1504U;

    t1 = (x5^(x6-(x7!=x8)));

    if (t1 != 4294901761U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = 817008328;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = INT8_MAX;
	static int32_t t2 = 7283811;

    t2 = (x9^(x10-(x11!=x12)));

    if (t2 != -817008328) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x15 = INT16_MAX;
	int32_t x16 = INT32_MIN;

    t3 = (x13^(x14-(x15!=x16)));

    if (t3 != 6130510135036LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -4;
	uint16_t x18 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -4178;

    t4 = (x17^(x18-(x19!=x20)));

    if (t4 != -65534) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MAX;
	static uint32_t x24 = 1U;
	uint32_t t5 = 143U;

    t5 = (x21^(x22-(x23!=x24)));

    if (t5 != 2147483646U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -1;
	int32_t x27 = INT32_MAX;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = -1375;

    t6 = (x25^(x26-(x27!=x28)));

    if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	uint16_t x32 = 93U;

    t7 = (x29^(x30-(x31!=x32)));

    if (t7 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	uint32_t x36 = 2539141U;
	int32_t t8 = 57510226;

    t8 = (x33^(x34-(x35!=x36)));

    if (t8 != 2147450879) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = 1;
	volatile int64_t x40 = INT64_MIN;
	int32_t t9 = 354917314;

    t9 = (x37^(x38-(x39!=x40)));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;

    t10 = (x41^(x42-(x43!=x44)));

    if (t10 != 2147483393) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -18;
	static int16_t x47 = INT16_MIN;
	int64_t x48 = INT64_MAX;

    t11 = (x45^(x46-(x47!=x48)));

    if (t11 != 4285656130U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static int16_t x50 = -9064;
	int64_t x51 = 8LL;
	int64_t x52 = 57LL;
	int32_t t12 = -1;

    t12 = (x49^(x50-(x51!=x52)));

    if (t12 != 23703) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	static int8_t x54 = INT8_MAX;
	int16_t x55 = 6;
	static volatile int32_t x56 = 87240176;
	int32_t t13 = -1516402;

    t13 = (x53^(x54-(x55!=x56)));

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	int32_t x58 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;

    t14 = (x57^(x58-(x59!=x60)));

    if (t14 != 2147418113) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = -1;
	volatile int32_t x63 = -1;
	int8_t x64 = -13;
	static volatile int64_t t15 = 312166LL;

    t15 = (x61^(x62-(x63!=x64)));

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = -14;
	int32_t x67 = -1300;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -1337;

    t16 = (x65^(x66-(x67!=x68)));

    if (t16 != -116) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	uint8_t x71 = 4U;
	int8_t x72 = -1;
	uint32_t t17 = 6852214U;

    t17 = (x69^(x70-(x71!=x72)));

    if (t17 != 126U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MAX;
	static volatile int16_t x79 = -12;
	uint16_t x80 = 7U;
	static volatile int32_t t18 = -89736;

    t18 = (x77^(x78-(x79!=x80)));

    if (t18 != -32642) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x82 = UINT16_MAX;
	static uint32_t x83 = 10U;
	volatile int64_t x84 = INT64_MAX;
	volatile int64_t t19 = -10849LL;

    t19 = (x81^(x82-(x83!=x84)));

    if (t19 != -18269755LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x85 = 1977U;
	volatile int8_t x86 = -12;
	int16_t x87 = INT16_MAX;
	static int8_t x88 = -1;
	int32_t t20 = 1;

    t20 = (x85^(x86-(x87!=x88)));

    if (t20 != -1974) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;

    t21 = (x89^(x90-(x91!=x92)));

    if (t21 != 4294967286U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -1;
	int16_t x94 = INT16_MIN;
	volatile uint32_t x95 = 12U;
	int64_t x96 = 8416LL;

    t22 = (x93^(x94-(x95!=x96)));

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 102574LLU;
	static uint16_t x98 = 6672U;
	static uint16_t x99 = 3524U;
	int8_t x100 = -1;
	uint64_t t23 = 1045660146023231778LLU;

    t23 = (x97^(x98-(x99!=x100)));

    if (t23 != 101025LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x101 = INT32_MAX;
	int64_t x102 = 89141383849131LL;
	static int64_t x103 = 363LL;
	int8_t x104 = -1;
	volatile int64_t t24 = -111859242886LL;

    t24 = (x101^(x102-(x103!=x104)));

    if (t24 != 89140561124181LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x105 = INT8_MIN;
	static int16_t x106 = -34;
	static uint8_t x107 = 10U;
	volatile int16_t x108 = -1;
	static int32_t t25 = 85;

    t25 = (x105^(x106-(x107!=x108)));

    if (t25 != 93) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = -1;
	int64_t x111 = -1LL;
	static int16_t x112 = INT16_MIN;
	int32_t t26 = 65470667;

    t26 = (x109^(x110-(x111!=x112)));

    if (t26 != 126) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	int32_t t27 = -617687;

    t27 = (x117^(x118-(x119!=x120)));

    if (t27 != -65536) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MAX;
	uint8_t x122 = UINT8_MAX;
	uint16_t x124 = UINT16_MAX;
	static int64_t t28 = -1093768947035479LL;

    t28 = (x121^(x122-(x123!=x124)));

    if (t28 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x125 = 2077302264580LLU;
	static int32_t x126 = 110123784;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = -15014;

    t29 = (x125^(x126-(x127!=x128)));

    if (t29 != 2077393504259LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x129 = 513417023;
	uint64_t x130 = 0LLU;
	uint64_t t30 = 1LLU;

    t30 = (x129^(x130-(x131!=x132)));

    if (t30 != 18446744073196134592LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x135 = UINT8_MAX;
	static int8_t x136 = INT8_MIN;
	volatile uint64_t t31 = 41689987583LLU;

    t31 = (x133^(x134-(x135!=x136)));

    if (t31 != 18437492522909260943LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = -1;
	int8_t x139 = 0;
	int16_t x140 = -48;
	volatile uint32_t t32 = 217495U;

    t32 = (x137^(x138-(x139!=x140)));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x149 = UINT64_MAX;
	static int64_t x150 = INT64_MAX;
	static int64_t x151 = INT64_MIN;
	static int32_t x152 = -1;
	volatile uint64_t t33 = 0LLU;

    t33 = (x149^(x150-(x151!=x152)));

    if (t33 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x153 = INT16_MIN;
	uint32_t x154 = 182839U;
	volatile int16_t x156 = INT16_MIN;
	volatile uint32_t t34 = 0U;

    t34 = (x153^(x154-(x155!=x156)));

    if (t34 != 4294789686U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x162 = UINT32_MAX;
	int32_t x163 = -24;

    t35 = (x161^(x162-(x163!=x164)));

    if (t35 != 2147483646U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = 11490;
	int64_t x167 = INT64_MIN;
	volatile int32_t t36 = 57;

    t36 = (x165^(x166-(x167!=x168)));

    if (t36 != -21279) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x169 = INT16_MAX;
	uint8_t x170 = 22U;
	uint16_t x171 = 3U;
	static volatile uint64_t x172 = 3482199522256LLU;
	int32_t t37 = -25032;

    t37 = (x169^(x170-(x171!=x172)));

    if (t37 != 32746) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x173 = 101074709U;
	volatile uint32_t x174 = 133015018U;
	int64_t x175 = INT64_MAX;
	static uint16_t x176 = 2727U;
	volatile uint32_t t38 = 49322U;

    t38 = (x173^(x174-(x175!=x176)));

    if (t38 != 32236284U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x179 = UINT16_MAX;
	int8_t x180 = -1;

    t39 = (x177^(x178-(x179!=x180)));

    if (t39 != 2147482972) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = -5;
	uint32_t x182 = 260U;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = 3549;
	volatile uint32_t t40 = 54U;

    t40 = (x181^(x182-(x183!=x184)));

    if (t40 != 4294967032U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x190 = 1985U;
	int32_t x191 = 6408146;
	int16_t x192 = INT16_MIN;

    t41 = (x189^(x190-(x191!=x192)));

    if (t41 != 4294965312U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x193 = 52LLU;
	uint8_t x195 = 120U;
	static volatile uint64_t t42 = 1166LLU;

    t42 = (x193^(x194-(x195!=x196)));

    if (t42 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = 5449U;
	uint64_t t43 = 159203LLU;

    t43 = (x197^(x198-(x199!=x200)));

    if (t43 != 9LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = -1;
	volatile uint16_t x202 = UINT16_MAX;
	static int16_t x203 = 0;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t44 = 3;

    t44 = (x201^(x202-(x203!=x204)));

    if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x209 = INT8_MIN;
	static volatile int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MIN;

    t45 = (x209^(x210-(x211!=x212)));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x213 = 135157165634968LLU;
	volatile int64_t x214 = -1LL;
	int64_t x216 = INT64_MAX;
	static uint64_t t46 = 2702403153255LLU;

    t46 = (x213^(x214-(x215!=x216)));

    if (t46 != 18446608916543916646LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = INT64_MIN;
	static volatile int16_t x220 = INT16_MIN;

    t47 = (x217^(x218-(x219!=x220)));

    if (t47 != -9223372036854774045LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = -7942;
	static uint32_t x222 = 65U;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = 13U;
	uint32_t t48 = 18378286U;

    t48 = (x221^(x222-(x223!=x224)));

    if (t48 != 4294959290U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = 10957;
	static int32_t x228 = INT32_MAX;
	volatile uint32_t t49 = 414U;

    t49 = (x225^(x226-(x227!=x228)));

    if (t49 != 32766U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x233 = -2;
	uint8_t x234 = 62U;
	int32_t x235 = INT32_MIN;
	static uint32_t x236 = UINT32_MAX;
	int32_t t50 = -63841102;

    t50 = (x233^(x234-(x235!=x236)));

    if (t50 != -61) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x237 = INT64_MIN;
	int32_t x238 = -1;
	int64_t t51 = -5637295850884017LL;

    t51 = (x237^(x238-(x239!=x240)));

    if (t51 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x245 = 7475U;
	uint32_t x248 = 2U;
	int32_t t52 = -3413;

    t52 = (x245^(x246-(x247!=x248)));

    if (t52 != 7458) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x253 = 27U;
	int32_t x254 = 222747;
	int16_t x256 = INT16_MAX;
	static int32_t t53 = -34493119;

    t53 = (x253^(x254-(x255!=x256)));

    if (t53 != 222721) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MAX;
	volatile uint16_t x259 = 293U;
	volatile int64_t x260 = -377062LL;
	static volatile int32_t t54 = 1;

    t54 = (x257^(x258-(x259!=x260)));

    if (t54 != 32513) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	static int16_t x263 = -1;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t55 = -14479169;

    t55 = (x261^(x262-(x263!=x264)));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x265 = 3;
	int8_t x266 = 0;
	static int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MAX;

    t56 = (x265^(x266-(x267!=x268)));

    if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x270 = INT8_MIN;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t57 = -30;

    t57 = (x269^(x270-(x271!=x272)));

    if (t57 != -140) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x273 = UINT32_MAX;
	uint32_t x274 = UINT32_MAX;
	uint16_t x276 = 572U;
	volatile uint32_t t58 = 17312U;

    t58 = (x273^(x274-(x275!=x276)));

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MAX;
	int8_t x279 = -58;
	int32_t t59 = -146;

    t59 = (x277^(x278-(x279!=x280)));

    if (t59 != 32641) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x281 = INT32_MAX;
	static volatile int64_t x282 = INT64_MAX;
	static int64_t x283 = 1086968391705571183LL;
	int64_t x284 = -104264LL;
	int64_t t60 = 60962490352LL;

    t60 = (x281^(x282-(x283!=x284)));

    if (t60 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x285 = 1249315501U;
	static int64_t x286 = INT64_MAX;
	int32_t x287 = INT32_MIN;
	volatile int16_t x288 = 5;
	volatile int64_t t61 = -271582608794LL;

    t61 = (x285^(x286-(x287!=x288)));

    if (t61 != 9223372035605460307LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x289 = 47;
	int16_t x290 = 2752;
	static volatile int64_t x291 = INT64_MAX;
	int64_t x292 = INT64_MAX;
	volatile int32_t t62 = 172;

    t62 = (x289^(x290-(x291!=x292)));

    if (t62 != 2799) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x294 = UINT8_MAX;
	static volatile int64_t x295 = -1LL;
	int64_t x296 = 5042LL;

    t63 = (x293^(x294-(x295!=x296)));

    if (t63 != 837841) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x301 = 9449515755LLU;
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 0U;
	int32_t x304 = -202327518;

    t64 = (x301^(x302-(x303!=x304)));

    if (t64 != 9449526549LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x305 = INT8_MIN;
	volatile int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MIN;
	int32_t t65 = -998593;

    t65 = (x305^(x306-(x307!=x308)));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x309 = INT16_MAX;
	volatile int8_t x310 = -8;
	volatile uint64_t x311 = 1724123348218247LLU;
	int32_t t66 = -1;

    t66 = (x309^(x310-(x311!=x312)));

    if (t66 != -32760) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x318 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	int32_t t67 = -304066769;

    t67 = (x317^(x318-(x319!=x320)));

    if (t67 != 32769) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x321 = -1;
	int64_t x322 = -1LL;
	static volatile uint8_t x323 = 36U;
	int64_t t68 = 11713799964LL;

    t68 = (x321^(x322-(x323!=x324)));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x326 = -392;
	int64_t x327 = INT64_MAX;
	int8_t x328 = -1;
	volatile int32_t t69 = -289162;

    t69 = (x325^(x326-(x327!=x328)));

    if (t69 != -32376) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x329 = 2923LLU;
	int16_t x330 = -4;
	static int64_t x331 = -7733970LL;
	int32_t x332 = -769595;
	volatile uint64_t t70 = 4LLU;

    t70 = (x329^(x330-(x331!=x332)));

    if (t70 != 18446744073709548688LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile int16_t x334 = INT16_MIN;
	uint32_t x336 = 639399U;
	static uint32_t t71 = 19922684U;

    t71 = (x333^(x334-(x335!=x336)));

    if (t71 != 32768U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x338 = -11;
	volatile int64_t x339 = -3460872985106LL;
	static volatile uint64_t x340 = UINT64_MAX;
	int32_t t72 = 12;

    t72 = (x337^(x338-(x339!=x340)));

    if (t72 != 2147483636) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x341 = 1U;
	static int16_t x342 = INT16_MAX;
	static uint8_t x343 = 0U;
	int8_t x344 = INT8_MIN;

    t73 = (x341^(x342-(x343!=x344)));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x346 = 487403U;
	int8_t x347 = INT8_MAX;
	uint16_t x348 = 0U;
	volatile uint32_t t74 = 1852398U;

    t74 = (x345^(x346-(x347!=x348)));

    if (t74 != 4294479978U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x350 = INT32_MAX;
	uint32_t x351 = 189U;
	int8_t x352 = INT8_MIN;
	volatile int32_t t75 = -2188781;

    t75 = (x349^(x350-(x351!=x352)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x353 = INT64_MIN;
	static uint64_t x354 = 447925LLU;
	static int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MIN;
	uint64_t t76 = 124408764146662LLU;

    t76 = (x353^(x354-(x355!=x356)));

    if (t76 != 9223372036855223732LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = 2157U;
	int32_t t77 = -28748633;

    t77 = (x357^(x358-(x359!=x360)));

    if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	static int16_t x363 = -1803;
	uint32_t x364 = 331619U;
	int64_t t78 = -42408LL;

    t78 = (x361^(x362-(x363!=x364)));

    if (t78 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = INT16_MAX;
	uint32_t x366 = UINT32_MAX;
	static uint64_t x367 = 92424048445035LLU;
	volatile uint16_t x368 = UINT16_MAX;
	volatile uint32_t t79 = 0U;

    t79 = (x365^(x366-(x367!=x368)));

    if (t79 != 4294934529U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x369 = INT32_MAX;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = 2998U;
	static int64_t x372 = INT64_MIN;
	volatile uint64_t t80 = 5049LLU;

    t80 = (x369^(x370-(x371!=x372)));

    if (t80 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x373 = 44531U;
	volatile int8_t x375 = 0;
	static int32_t x376 = 114;
	uint32_t t81 = 269U;

    t81 = (x373^(x374-(x375!=x376)));

    if (t81 != 4294922765U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x377 = -5496106041LL;
	int8_t x378 = 1;
	int16_t x379 = INT16_MAX;
	volatile int64_t t82 = 1204301283251186040LL;

    t82 = (x377^(x378-(x379!=x380)));

    if (t82 != -5496106041LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x383 = INT16_MAX;
	int8_t x384 = 0;
	volatile int32_t t83 = -3709;

    t83 = (x381^(x382-(x383!=x384)));

    if (t83 != -32642) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x385 = 24111165109892LLU;
	int32_t x386 = -1;
	volatile int16_t x387 = INT16_MAX;
	static int64_t x388 = -1LL;

    t84 = (x385^(x386-(x387!=x388)));

    if (t84 != 18446719962544441722LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x389 = 1U;
	int16_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int16_t x392 = 0;

    t85 = (x389^(x390-(x391!=x392)));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = 2;
	int16_t x394 = INT16_MAX;
	static int64_t x396 = -1LL;
	volatile int32_t t86 = -385655;

    t86 = (x393^(x394-(x395!=x396)));

    if (t86 != 32764) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x398 = INT32_MAX;
	static int64_t x399 = INT64_MIN;
	int16_t x400 = 1;
	volatile int32_t t87 = 894348926;

    t87 = (x397^(x398-(x399!=x400)));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x405 = INT32_MIN;
	uint16_t x407 = 1959U;
	volatile int32_t t88 = 0;

    t88 = (x405^(x406-(x407!=x408)));

    if (t88 != -2147450882) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x409 = 5U;
	int64_t x411 = INT64_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t89 = 15;

    t89 = (x409^(x410-(x411!=x412)));

    if (t89 != 15784) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x421 = -2;
	int16_t x422 = -3989;
	uint64_t x424 = 67497409017924767LLU;

    t90 = (x421^(x422-(x423!=x424)));

    if (t90 != 3988) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x425 = 2244350007171660LLU;
	static int32_t x426 = 168570830;
	volatile int8_t x427 = 3;
	int64_t x428 = 4358571048738021891LL;
	uint64_t t91 = 1041875109661LLU;

    t91 = (x425^(x426-(x427!=x428)));

    if (t91 != 2244350174164353LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x429 = 12835293;
	int64_t x431 = 3086228995148LL;

    t92 = (x429^(x430-(x431!=x432)));

    if (t92 != -311793405972375790LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x433 = UINT64_MAX;
	volatile uint32_t x434 = 5528091U;
	uint8_t x435 = 17U;

    t93 = (x433^(x434-(x435!=x436)));

    if (t93 != 18446744073704023525LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x437 = INT16_MAX;
	static uint8_t x438 = 6U;
	volatile int8_t x439 = INT8_MIN;
	volatile int64_t x440 = INT64_MIN;
	volatile int32_t t94 = 13;

    t94 = (x437^(x438-(x439!=x440)));

    if (t94 != 32762) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x443 = -952LL;
	uint16_t x444 = 1U;
	int32_t t95 = 2327;

    t95 = (x441^(x442-(x443!=x444)));

    if (t95 != 108) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x445 = 825LLU;
	int64_t x446 = -1LL;
	int64_t x447 = INT64_MAX;
	int64_t x448 = -3717779725LL;
	static uint64_t t96 = 119584015380348152LLU;

    t96 = (x445^(x446-(x447!=x448)));

    if (t96 != 18446744073709550791LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x451 = INT32_MAX;
	static uint16_t x452 = UINT16_MAX;

    t97 = (x449^(x450-(x451!=x452)));

    if (t97 != 5494672LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x453 = -5;
	volatile int8_t x454 = INT8_MIN;
	volatile uint16_t x455 = 3U;
	static int16_t x456 = 14081;

    t98 = (x453^(x454-(x455!=x456)));

    if (t98 != 132) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x457 = INT32_MAX;
	volatile uint32_t x458 = 75586891U;
	int64_t x460 = 1527830898584LL;
	uint32_t t99 = 2002U;

    t99 = (x457^(x458-(x459!=x460)));

    if (t99 != 2071896757U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x461 = INT32_MIN;
	int16_t x463 = INT16_MIN;
	volatile int32_t x464 = -6;

    t100 = (x461^(x462-(x463!=x464)));

    if (t100 != 2147483519) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x465 = INT8_MIN;
	static int16_t x466 = INT16_MIN;
	int16_t x467 = INT16_MIN;
	volatile int32_t x468 = INT32_MIN;
	int32_t t101 = -625221468;

    t101 = (x465^(x466-(x467!=x468)));

    if (t101 != 32895) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x470 = 15LL;
	volatile int64_t x471 = -23806956LL;
	int64_t t102 = -12565LL;

    t102 = (x469^(x470-(x471!=x472)));

    if (t102 != 33LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x473 = -31235;
	int8_t x475 = INT8_MIN;
	int64_t x476 = INT64_MAX;
	int32_t t103 = 3;

    t103 = (x473^(x474-(x475!=x476)));

    if (t103 != -31525) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x478 = 461014869;
	int16_t x479 = -6;
	int32_t x480 = INT32_MIN;
	int32_t t104 = 750665025;

    t104 = (x477^(x478-(x479!=x480)));

    if (t104 != 461020040) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x481 = 353;
	static int64_t x482 = 209393518166270LL;
	static int32_t x483 = INT32_MIN;
	int64_t t105 = -11LL;

    t105 = (x481^(x482-(x483!=x484)));

    if (t105 != 209393518166428LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x485 = INT64_MIN;
	static int16_t x486 = 1;
	uint64_t x487 = UINT64_MAX;

    t106 = (x485^(x486-(x487!=x488)));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x489 = INT32_MAX;
	int8_t x490 = INT8_MAX;
	int32_t t107 = -11956;

    t107 = (x489^(x490-(x491!=x492)));

    if (t107 != 2147483521) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x493 = 5U;
	uint16_t x494 = 355U;
	uint8_t x495 = UINT8_MAX;
	uint32_t x496 = 2166U;

    t108 = (x493^(x494-(x495!=x496)));

    if (t108 != 359) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MIN;
	volatile uint16_t x499 = 187U;
	int16_t x500 = -1323;
	volatile int64_t t109 = -12241809229LL;

    t109 = (x497^(x498-(x499!=x500)));

    if (t109 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x502 = -1;
	uint16_t x503 = UINT16_MAX;
	uint16_t x504 = 0U;

    t110 = (x501^(x502-(x503!=x504)));

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x505 = 0;
	static uint16_t x507 = 64U;
	volatile uint16_t x508 = 6U;
	volatile uint32_t t111 = 29345U;

    t111 = (x505^(x506-(x507!=x508)));

    if (t111 != 57048U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x509 = INT64_MAX;
	static int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MAX;
	volatile int16_t x512 = -338;

    t112 = (x509^(x510-(x511!=x512)));

    if (t112 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x517 = UINT32_MAX;
	static int64_t x518 = 8LL;
	int32_t x519 = -23860189;
	uint32_t x520 = UINT32_MAX;
	static int64_t t113 = -238LL;

    t113 = (x517^(x518-(x519!=x520)));

    if (t113 != 4294967288LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = INT32_MAX;
	volatile int32_t x523 = -1;
	static int8_t x524 = 1;
	volatile int32_t t114 = 267809498;

    t114 = (x521^(x522-(x523!=x524)));

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x525 = -33056214;
	uint8_t x526 = 30U;
	volatile int64_t x527 = INT64_MAX;
	volatile int32_t t115 = -4;

    t115 = (x525^(x526-(x527!=x528)));

    if (t115 != -33056201) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = INT16_MAX;
	static int32_t x531 = INT32_MIN;
	uint32_t t116 = 8814U;

    t116 = (x529^(x530-(x531!=x532)));

    if (t116 != 11493U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x533 = INT64_MAX;
	static uint32_t x534 = 116609077U;
	int64_t x535 = -1LL;
	int8_t x536 = 0;
	static int64_t t117 = 3088878849394LL;

    t117 = (x533^(x534-(x535!=x536)));

    if (t117 != 9223372036738166731LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = -1LL;
	int8_t x538 = -1;
	int8_t x539 = 0;
	int8_t x540 = INT8_MAX;
	int64_t t118 = -2461LL;

    t118 = (x537^(x538-(x539!=x540)));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = 1;
	uint32_t x542 = 190427005U;
	uint32_t x543 = 2583923U;
	static volatile uint32_t t119 = 49U;

    t119 = (x541^(x542-(x543!=x544)));

    if (t119 != 190427005U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x547 = INT32_MIN;
	static int16_t x548 = 56;
	static int64_t t120 = 5382073098LL;

    t120 = (x545^(x546-(x547!=x548)));

    if (t120 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x549 = 21;
	volatile int64_t x550 = -1LL;
	uint32_t x551 = 630U;
	uint8_t x552 = 8U;
	int64_t t121 = -1124673LL;

    t121 = (x549^(x550-(x551!=x552)));

    if (t121 != -21LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = -1;
	uint64_t x554 = 74114837LLU;
	volatile int16_t x555 = INT16_MIN;
	int64_t x556 = INT64_MIN;
	uint64_t t122 = 119761940882LLU;

    t122 = (x553^(x554-(x555!=x556)));

    if (t122 != 18446744073635436779LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x557 = INT8_MAX;
	int16_t x558 = -1;
	static int32_t x559 = INT32_MIN;
	static volatile int32_t t123 = 12237437;

    t123 = (x557^(x558-(x559!=x560)));

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x561 = -1;
	int8_t x563 = INT8_MAX;
	int8_t x564 = -5;
	int32_t t124 = 148;

    t124 = (x561^(x562-(x563!=x564)));

    if (t124 != 32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x565 = INT16_MIN;
	static int8_t x566 = 12;
	int64_t x567 = INT64_MIN;
	int64_t x568 = INT64_MIN;
	int32_t t125 = 2598223;

    t125 = (x565^(x566-(x567!=x568)));

    if (t125 != -32756) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x569 = 11531074LL;
	uint64_t x570 = 802734175856130440LLU;
	volatile uint64_t x571 = 268LLU;
	uint64_t x572 = UINT64_MAX;
	uint64_t t126 = 6868LLU;

    t126 = (x569^(x570-(x571!=x572)));

    if (t126 != 802734175845583557LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x573 = 13U;
	uint64_t x574 = 424554455499263LLU;
	static int32_t x575 = INT32_MAX;
	volatile uint64_t t127 = 32048641299238LLU;

    t127 = (x573^(x574-(x575!=x576)));

    if (t127 != 424554455499251LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x582 = -3377;
	uint32_t x583 = 12U;
	int8_t x584 = -1;
	volatile int32_t t128 = -281;

    t128 = (x581^(x582-(x583!=x584)));

    if (t128 != 3377) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x586 = INT8_MAX;
	int32_t x588 = -1;
	int32_t t129 = -25;

    t129 = (x585^(x586-(x587!=x588)));

    if (t129 != -91) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MAX;
	uint32_t x592 = 769646832U;
	static volatile uint64_t t130 = 457873793575LLU;

    t130 = (x589^(x590-(x591!=x592)));

    if (t130 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x594 = 4;
	static volatile uint64_t x595 = UINT64_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t131 = -1198544;

    t131 = (x593^(x594-(x595!=x596)));

    if (t131 != 8562653) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x598 = INT32_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = 1712;

    t132 = (x597^(x598-(x599!=x600)));

    if (t132 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x601 = 1;
	uint32_t x602 = UINT32_MAX;
	static int32_t x604 = -103322226;
	static uint32_t t133 = UINT32_MAX;

    t133 = (x601^(x602-(x603!=x604)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x605 = INT32_MAX;
	uint8_t x606 = 10U;
	static int16_t x607 = INT16_MIN;
	static int64_t x608 = -1LL;
	int32_t t134 = 0;

    t134 = (x605^(x606-(x607!=x608)));

    if (t134 != 2147483638) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x609 = INT64_MAX;
	int32_t x610 = INT32_MIN;
	uint32_t x611 = UINT32_MAX;
	volatile uint32_t x612 = UINT32_MAX;
	int64_t t135 = 16835732745349LL;

    t135 = (x609^(x610-(x611!=x612)));

    if (t135 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x614 = UINT16_MAX;
	uint16_t x615 = 660U;
	volatile int16_t x616 = INT16_MIN;
	static volatile int32_t t136 = -13125930;

    t136 = (x613^(x614-(x615!=x616)));

    if (t136 != 65409) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x619 = 3676U;
	int8_t x620 = INT8_MAX;
	uint32_t t137 = 6088955U;

    t137 = (x617^(x618-(x619!=x620)));

    if (t137 != 61042309U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x621 = INT8_MAX;
	volatile int32_t x622 = 86183936;
	int8_t x624 = INT8_MIN;
	volatile int32_t t138 = 3598;

    t138 = (x621^(x622-(x623!=x624)));

    if (t138 != 86183808) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x626 = -1;
	uint8_t x628 = UINT8_MAX;
	int64_t t139 = 311LL;

    t139 = (x625^(x626-(x627!=x628)));

    if (t139 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x629 = INT32_MIN;
	int8_t x630 = -1;
	uint64_t x631 = UINT64_MAX;
	volatile int64_t x632 = -791736LL;
	volatile int32_t t140 = -3378198;

    t140 = (x629^(x630-(x631!=x632)));

    if (t140 != 2147483646) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x633 = UINT8_MAX;
	static int16_t x635 = 4;
	int64_t x636 = -34LL;
	volatile int32_t t141 = 10000294;

    t141 = (x633^(x634-(x635!=x636)));

    if (t141 != -256) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x637 = -218;
	int16_t x639 = INT16_MIN;
	int32_t x640 = 7741645;
	volatile int32_t t142 = -138634;

    t142 = (x637^(x638-(x639!=x640)));

    if (t142 != -168) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x642 = -1;
	static int8_t x643 = INT8_MIN;
	static uint16_t x644 = 0U;
	int32_t t143 = -19;

    t143 = (x641^(x642-(x643!=x644)));

    if (t143 != -11610) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x649 = INT16_MIN;
	uint16_t x651 = 419U;
	volatile int16_t x652 = -1;
	int64_t t144 = -735141LL;

    t144 = (x649^(x650-(x651!=x652)));

    if (t144 != 481340170885111271LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x653 = -1;
	static volatile int16_t x654 = INT16_MAX;
	uint64_t x655 = 10043503LLU;
	static uint64_t x656 = UINT64_MAX;
	int32_t t145 = 1011406654;

    t145 = (x653^(x654-(x655!=x656)));

    if (t145 != -32767) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x657 = -1;
	int16_t x658 = -1;
	int32_t x660 = 1939594;
	int32_t t146 = -23045;

    t146 = (x657^(x658-(x659!=x660)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MIN;
	int32_t x664 = INT32_MIN;
	static int32_t t147 = 517643;

    t147 = (x661^(x662-(x663!=x664)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x665 = -1;
	int8_t x666 = INT8_MIN;
	uint16_t x668 = 498U;
	int32_t t148 = 47086;

    t148 = (x665^(x666-(x667!=x668)));

    if (t148 != 128) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile int64_t x670 = -1LL;
	static int64_t x671 = -30801262503620529LL;
	int64_t x672 = INT64_MAX;
	static int64_t t149 = -161994LL;

    t149 = (x669^(x670-(x671!=x672)));

    if (t149 != -255LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x674 = UINT16_MAX;
	volatile uint64_t x675 = UINT64_MAX;
	int8_t x676 = -12;
	volatile int64_t t150 = -3963287163136618677LL;

    t150 = (x673^(x674-(x675!=x676)));

    if (t150 != -3772876930LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x678 = -2374;
	volatile int32_t t151 = 153904627;

    t151 = (x677^(x678-(x679!=x680)));

    if (t151 != -2362) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x682 = 194225;
	uint32_t x683 = 276U;
	volatile int64_t t152 = -1LL;

    t152 = (x681^(x682-(x683!=x684)));

    if (t152 != -194225LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x685 = 4LLU;
	volatile int16_t x687 = INT16_MIN;
	uint16_t x688 = 3354U;

    t153 = (x685^(x686-(x687!=x688)));

    if (t153 != 62LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x689 = INT64_MAX;
	volatile int16_t x690 = -226;
	int16_t x691 = 484;
	int64_t t154 = 6530172LL;

    t154 = (x689^(x690-(x691!=x692)));

    if (t154 != -9223372036854775582LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x693 = INT32_MIN;
	volatile int8_t x695 = INT8_MIN;

    t155 = (x693^(x694-(x695!=x696)));

    if (t155 != 2147483646LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x697 = INT16_MIN;
	static volatile int16_t x698 = INT16_MIN;
	uint32_t x699 = 12436832U;
	int32_t x700 = INT32_MIN;

    t156 = (x697^(x698-(x699!=x700)));

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x702 = -508LL;
	int64_t x703 = -1LL;
	uint16_t x704 = 6008U;

    t157 = (x701^(x702-(x703!=x704)));

    if (t157 != -4294966788LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x705 = 1196997LLU;
	static volatile uint16_t x706 = 159U;
	uint16_t x707 = 8U;
	int16_t x708 = INT16_MAX;
	uint64_t t158 = 2815297658746141199LLU;

    t158 = (x705^(x706-(x707!=x708)));

    if (t158 != 1196891LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x710 = 12152LLU;
	int64_t x711 = 75365LL;

    t159 = (x709^(x710-(x711!=x712)));

    if (t159 != 12128LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x717 = INT16_MIN;
	int8_t x719 = 1;
	static volatile int32_t t160 = 0;

    t160 = (x717^(x718-(x719!=x720)));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x721 = -33;
	volatile uint64_t x722 = 53900987929699LLU;
	static volatile int64_t x723 = -1LL;
	static volatile uint64_t t161 = 36393LLU;

    t161 = (x721^(x722-(x723!=x724)));

    if (t161 != 18446690172721621949LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x725 = INT32_MIN;
	int8_t x726 = INT8_MIN;
	static uint64_t x727 = UINT64_MAX;
	static volatile int32_t t162 = 124783038;

    t162 = (x725^(x726-(x727!=x728)));

    if (t162 != 2147483519) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x733 = 20959743169537LL;
	volatile int8_t x734 = INT8_MAX;
	int64_t t163 = -2483743793166326808LL;

    t163 = (x733^(x734-(x735!=x736)));

    if (t163 != 20959743169663LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x737 = INT16_MAX;
	volatile int32_t t164 = 1;

    t164 = (x737^(x738-(x739!=x740)));

    if (t164 != -32640) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x741 = INT64_MAX;
	uint8_t x742 = 2U;
	uint8_t x743 = 31U;
	int32_t x744 = -1;

    t165 = (x741^(x742-(x743!=x744)));

    if (t165 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x745 = 1U;
	int16_t x746 = -1;
	int16_t x747 = 5;
	int32_t x748 = 6379;
	volatile int32_t t166 = 3;

    t166 = (x745^(x746-(x747!=x748)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x749 = INT8_MAX;
	int16_t x750 = INT16_MIN;
	int32_t x751 = INT32_MAX;
	int64_t x752 = -1LL;

    t167 = (x749^(x750-(x751!=x752)));

    if (t167 != -32896) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x753 = 105U;
	int32_t x754 = 5;
	static int32_t x756 = INT32_MAX;
	int32_t t168 = -268172025;

    t168 = (x753^(x754-(x755!=x756)));

    if (t168 != 109) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x757 = -1;
	volatile int32_t t169 = -926077;

    t169 = (x757^(x758-(x759!=x760)));

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x761 = 63U;
	int8_t x764 = -1;
	int64_t t170 = 114695806LL;

    t170 = (x761^(x762-(x763!=x764)));

    if (t170 != -63LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x765 = UINT32_MAX;
	uint32_t x766 = 411U;
	static volatile uint32_t t171 = 643U;

    t171 = (x765^(x766-(x767!=x768)));

    if (t171 != 4294966885U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x773 = -1;
	int32_t x774 = -4177771;
	static int64_t x775 = INT64_MAX;
	uint64_t x776 = 11490544650391LLU;
	volatile int32_t t172 = -762810;

    t172 = (x773^(x774-(x775!=x776)));

    if (t172 != 4177771) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x777 = 91955852U;
	static uint32_t x778 = 384U;
	volatile uint32_t t173 = 151306418U;

    t173 = (x777^(x778-(x779!=x780)));

    if (t173 != 91956211U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x781 = INT64_MAX;
	int64_t x782 = -1LL;
	int64_t x783 = INT64_MIN;
	static volatile int64_t t174 = -423LL;

    t174 = (x781^(x782-(x783!=x784)));

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x785 = -1;
	int32_t x786 = INT32_MAX;
	int32_t t175 = 1766754;

    t175 = (x785^(x786-(x787!=x788)));

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x789 = 27355U;
	volatile int16_t x790 = INT16_MAX;
	static uint16_t x791 = UINT16_MAX;
	volatile int32_t t176 = -323835230;

    t176 = (x789^(x790-(x791!=x792)));

    if (t176 != 5413) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x793 = UINT16_MAX;
	int32_t x795 = INT32_MIN;
	volatile int16_t x796 = INT16_MAX;
	static volatile uint64_t t177 = 2858396497LLU;

    t177 = (x793^(x794-(x795!=x796)));

    if (t177 != 6445652090LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x797 = UINT8_MAX;
	int64_t x798 = -7858808LL;
	uint16_t x799 = UINT16_MAX;
	volatile int64_t t178 = 937263431990LL;

    t178 = (x797^(x798-(x799!=x800)));

    if (t178 != -7858824LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x801 = 45;
	int8_t x802 = INT8_MIN;
	static uint16_t x803 = 20U;
	uint16_t x804 = 2U;
	int32_t t179 = -3;

    t179 = (x801^(x802-(x803!=x804)));

    if (t179 != -174) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x805 = -114673LL;
	int16_t x808 = -575;
	static int64_t t180 = -5357LL;

    t180 = (x805^(x806-(x807!=x808)));

    if (t180 != -114685LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x809 = 0U;
	static int64_t x810 = -2107723595LL;
	int16_t x811 = 2378;
	int64_t x812 = INT64_MIN;

    t181 = (x809^(x810-(x811!=x812)));

    if (t181 != -2107723596LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x815 = 3U;
	int16_t x816 = INT16_MIN;

    t182 = (x813^(x814-(x815!=x816)));

    if (t182 != 111) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x817 = INT64_MIN;
	int8_t x819 = INT8_MIN;
	uint32_t x820 = 484035U;
	volatile int64_t t183 = 75LL;

    t183 = (x817^(x818-(x819!=x820)));

    if (t183 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x821 = INT16_MIN;
	int8_t x822 = INT8_MIN;
	int16_t x824 = INT16_MAX;
	static int32_t t184 = 1;

    t184 = (x821^(x822-(x823!=x824)));

    if (t184 != 32639) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x826 = 21;
	int32_t x828 = INT32_MIN;
	uint64_t t185 = 7446699145851827365LLU;

    t185 = (x825^(x826-(x827!=x828)));

    if (t185 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x829 = 134792234U;
	int64_t x830 = INT64_MAX;
	static uint16_t x831 = UINT16_MAX;
	int64_t t186 = 29LL;

    t186 = (x829^(x830-(x831!=x832)));

    if (t186 != 9223372036719983572LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x833 = -3;
	int64_t x834 = 6679814LL;
	volatile int32_t x835 = 0;
	volatile int32_t x836 = -1;
	int64_t t187 = 4LL;

    t187 = (x833^(x834-(x835!=x836)));

    if (t187 != -6679816LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x837 = INT8_MIN;
	volatile int16_t x839 = INT16_MIN;
	int64_t x840 = INT64_MIN;

    t188 = (x837^(x838-(x839!=x840)));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x841 = 110U;
	volatile int8_t x842 = 3;
	int32_t t189 = -684;

    t189 = (x841^(x842-(x843!=x844)));

    if (t189 != 108) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x845 = INT16_MIN;
	uint8_t x846 = 27U;
	int32_t x847 = -5;
	uint32_t x848 = 87301U;
	int32_t t190 = -1589362;

    t190 = (x845^(x846-(x847!=x848)));

    if (t190 != -32742) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x849 = INT32_MIN;
	volatile int64_t x850 = 1012LL;
	static volatile uint8_t x851 = 12U;
	static int8_t x852 = -59;
	static volatile int64_t t191 = -341347167078872LL;

    t191 = (x849^(x850-(x851!=x852)));

    if (t191 != -2147482637LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x853 = -1LL;
	static volatile uint8_t x856 = 23U;

    t192 = (x853^(x854-(x855!=x856)));

    if (t192 != -32767LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x857 = 145;
	int32_t x858 = 983227;
	int64_t x859 = INT64_MIN;
	int8_t x860 = INT8_MIN;
	volatile int32_t t193 = -2583;

    t193 = (x857^(x858-(x859!=x860)));

    if (t193 != 983083) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x862 = INT8_MAX;
	static int16_t x863 = -1;
	volatile int8_t x864 = -1;
	volatile int32_t t194 = -37221053;

    t194 = (x861^(x862-(x863!=x864)));

    if (t194 != 126) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x865 = 3278439012503LLU;
	int32_t x866 = INT32_MAX;
	int8_t x867 = 0;
	volatile int16_t x868 = INT16_MAX;
	volatile uint64_t t195 = 2150880756337080LLU;

    t195 = (x865^(x866-(x867!=x868)));

    if (t195 != 3277828564841LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x870 = 22718LLU;
	static uint16_t x871 = 66U;
	int16_t x872 = 276;
	uint64_t t196 = 1347730854LLU;

    t196 = (x869^(x870-(x871!=x872)));

    if (t196 != 67496468628363LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x873 = UINT64_MAX;
	uint64_t x874 = 14LLU;
	volatile int16_t x875 = -1968;
	int64_t x876 = -1LL;
	static volatile uint64_t t197 = 5418262195LLU;

    t197 = (x873^(x874-(x875!=x876)));

    if (t197 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x877 = INT64_MIN;
	volatile uint16_t x878 = 8490U;
	uint16_t x879 = 74U;
	uint32_t x880 = 18652771U;
	volatile int64_t t198 = 1932882500720LL;

    t198 = (x877^(x878-(x879!=x880)));

    if (t198 != -9223372036854767319LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x881 = 231041LLU;
	static uint32_t x882 = 3744101U;
	static int8_t x883 = INT8_MIN;
	volatile uint16_t x884 = UINT16_MAX;
	volatile uint64_t t199 = 1500544LLU;

    t199 = (x881^(x882-(x883!=x884)));

    if (t199 != 3844069LLU) { NG(); } else { ; }
	
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

