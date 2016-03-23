
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

static uint32_t x4 = UINT32_MAX;
int64_t x5 = -1LL;
int8_t x13 = 20;
volatile int64_t x17 = INT64_MIN;
int32_t x20 = INT32_MIN;
uint8_t x26 = 118U;
uint32_t x30 = 285U;
volatile int32_t x39 = INT32_MAX;
volatile uint64_t t8 = 503101348942LLU;
int32_t t9 = -609;
uint8_t x53 = 6U;
volatile int16_t x61 = INT16_MAX;
int32_t x67 = INT32_MAX;
int32_t x77 = INT32_MIN;
int8_t x79 = INT8_MIN;
uint64_t x92 = 12640387140LLU;
static uint64_t t18 = 103592303LLU;
int32_t x97 = -1;
static int8_t x98 = INT8_MIN;
static int64_t x107 = INT64_MIN;
static int64_t x112 = -263718342LL;
uint64_t t23 = 597LLU;
uint64_t x113 = UINT64_MAX;
uint8_t x115 = UINT8_MAX;
int64_t x127 = INT64_MIN;
int32_t x128 = INT32_MAX;
int64_t x140 = 1557289898LL;
volatile int64_t t32 = -39098664LL;
static int32_t x155 = INT32_MAX;
volatile int32_t x157 = INT32_MAX;
static int16_t x165 = INT16_MAX;
uint64_t x167 = UINT64_MAX;
volatile uint8_t x168 = 93U;
uint16_t x172 = UINT16_MAX;
static uint32_t x174 = 36493U;
uint32_t x176 = 30232U;
volatile int8_t x178 = INT8_MIN;
static uint32_t t38 = 7519U;
volatile int16_t x183 = 1;
static int64_t x185 = -454440313LL;
uint8_t x189 = 36U;
volatile int64_t t41 = -8600804032LL;
volatile int64_t t42 = 1653622184381626LL;
volatile uint8_t x201 = UINT8_MAX;
uint64_t x205 = UINT64_MAX;
static uint16_t x216 = UINT16_MAX;
uint32_t t47 = 46145788U;
uint16_t x227 = UINT16_MAX;
uint64_t x228 = 930323596560809LLU;
static uint64_t t50 = 220LLU;
uint64_t x233 = 186962595438271752LLU;
static uint32_t x236 = 487741U;
static volatile uint64_t t51 = 601915530727864LLU;
int16_t x239 = -252;
int64_t x240 = INT64_MAX;
int64_t t53 = -1396LL;
volatile int32_t t54 = -45954775;
int8_t x253 = INT8_MIN;
int32_t x254 = -33015561;
int8_t x257 = INT8_MIN;
int32_t t58 = 0;
volatile int16_t x275 = -1;
int32_t x279 = 512;
volatile uint64_t t61 = 9462666838055LLU;
int32_t x282 = -1;
uint16_t x287 = UINT16_MAX;
int64_t x289 = INT64_MAX;
int32_t x295 = 1;
int64_t x296 = -1LL;
static uint32_t t66 = 17U;
static uint64_t x302 = 612852693LLU;
int32_t x304 = 11000156;
static int32_t x306 = -2947156;
int8_t x313 = INT8_MAX;
int8_t x314 = INT8_MIN;
int64_t x318 = 205907603079148LL;
uint16_t x324 = UINT16_MAX;
uint32_t x327 = UINT32_MAX;
int64_t t73 = -113842947012103LL;
static int8_t x331 = INT8_MIN;
static uint32_t x333 = 505306945U;
uint64_t x334 = UINT64_MAX;
volatile int8_t x336 = 1;
uint8_t x345 = 25U;
int32_t x348 = 388672;
volatile int16_t x356 = 1;
volatile uint16_t x358 = 4389U;
uint64_t x381 = 149561LLU;
static uint32_t x388 = UINT32_MAX;
int32_t x390 = -1;
uint16_t x399 = 1176U;
volatile int64_t t91 = 28299839923LL;
volatile int64_t x424 = -1LL;
int64_t t92 = 11LL;
static volatile int8_t x441 = 44;
uint64_t x460 = 1000342572981LLU;
static uint64_t t99 = 63195696546LLU;
volatile int16_t x466 = INT16_MIN;
int16_t x469 = INT16_MIN;
volatile uint32_t x472 = 13324172U;
int64_t x476 = INT64_MIN;
uint32_t x486 = 84U;
uint8_t x487 = 17U;
int64_t x490 = INT64_MIN;
volatile int8_t x493 = -2;
int32_t x501 = 11;
int16_t x502 = INT16_MIN;
static uint64_t x503 = 94559324LLU;
int64_t x505 = INT64_MIN;
volatile int64_t x506 = -1LL;
static uint16_t x508 = 717U;
volatile int64_t t109 = 753114335LL;
int8_t x510 = INT8_MAX;
int8_t x522 = -1;
int8_t x539 = INT8_MIN;
uint64_t x542 = UINT64_MAX;
int16_t x551 = INT16_MIN;
volatile int32_t x552 = -1;
static volatile uint64_t x554 = 2192901092986641LLU;
volatile int64_t x556 = INT64_MAX;
int16_t x558 = 15;
uint8_t x561 = 12U;
int32_t x563 = INT32_MAX;
int16_t x564 = INT16_MAX;
volatile int8_t x568 = INT8_MAX;
int64_t t122 = 37690312LL;
int16_t x573 = -1;
int32_t x578 = -1;
int64_t x579 = -6537997955LL;
static int16_t x584 = -1;
uint64_t t126 = 133723314LLU;
int32_t x597 = -2289;
volatile int32_t x600 = INT32_MIN;
volatile uint32_t t128 = 11556227U;
int8_t x605 = INT8_MIN;
int8_t x617 = INT8_MAX;
uint32_t t133 = 4666U;
static int8_t x628 = INT8_MAX;
uint32_t x634 = 2U;
static int64_t x641 = INT64_MIN;
volatile int64_t x642 = -10870675559135219LL;
uint64_t x647 = 7509886LLU;
volatile int64_t t142 = 11LL;
int8_t x658 = -8;
volatile int16_t x662 = -6;
int32_t x663 = INT32_MIN;
int64_t x664 = -1LL;
volatile uint16_t x676 = 13976U;
int32_t t146 = -376983033;
int8_t x679 = -5;
int32_t x683 = -1;
volatile int64_t x685 = -361730665535LL;
int8_t x687 = -1;
int16_t x696 = INT16_MIN;
static uint8_t x698 = UINT8_MAX;
int16_t x705 = -72;
static int16_t x709 = INT16_MIN;
int64_t x716 = INT64_MAX;
uint32_t x719 = 398U;
int32_t x724 = INT32_MIN;
volatile int64_t x728 = -443136309473956LL;
int16_t x730 = 13;
volatile uint32_t x731 = 250159U;
static volatile uint16_t x737 = UINT16_MAX;
int16_t x739 = 15;
int32_t x742 = INT32_MIN;
static int64_t x761 = -75LL;
static int8_t x764 = INT8_MIN;
volatile int64_t t166 = 2921LL;
volatile uint32_t x768 = 22U;
uint8_t x770 = 2U;
int64_t x773 = 11551470062080LL;
static volatile uint8_t x779 = 13U;
int64_t t170 = 57322604513228545LL;
int16_t x785 = -1;
int8_t x787 = -7;
int64_t x802 = -1LL;
int8_t x805 = INT8_MIN;
static int64_t x810 = -1LL;
uint32_t x811 = 1755372U;
int64_t t176 = 3757LL;
int64_t x828 = INT64_MAX;
static int64_t t183 = -7185LL;
int32_t t184 = 74540;
volatile int16_t x846 = -1;
int8_t x848 = -1;
volatile int64_t t185 = INT64_MAX;
uint32_t x849 = UINT32_MAX;
int64_t x851 = 10093989413040142LL;
int64_t x866 = -1LL;
uint32_t x869 = UINT32_MAX;
int32_t x875 = 1;
int32_t x877 = -1;
int8_t x879 = INT8_MIN;
static int32_t x880 = INT32_MIN;
uint16_t x883 = UINT16_MAX;
int64_t x884 = INT64_MIN;
int8_t x885 = INT8_MAX;
static int16_t x892 = INT16_MAX;
int64_t t196 = 75432604977LL;
static uint16_t x910 = 5U;
uint16_t x911 = 11U;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MAX;
	int16_t x3 = INT16_MIN;
	int64_t t0 = -240104912761563LL;

    t0 = ((x1-x2)/(x3|x4));

    if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = UINT64_MAX;
	int64_t x7 = -156742LL;
	volatile int64_t x8 = 2000LL;
	volatile uint64_t t1 = 9476LLU;

    t1 = ((x5-x6)/(x7|x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x14 = UINT8_MAX;
	int8_t x15 = 0;
	uint8_t x16 = 27U;
	int32_t t2 = -2;

    t2 = ((x13-x14)/(x15|x16));

    if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MAX;
	volatile int64_t t3 = 8177610844LL;

    t3 = ((x17-x18)/(x19|x20));

    if (t3 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = -1LL;
	int32_t x22 = 588920182;
	int64_t x23 = INT64_MIN;
	volatile uint8_t x24 = 15U;
	volatile int64_t t4 = -3863LL;

    t4 = ((x21-x22)/(x23|x24));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x25 = 2U;
	int8_t x27 = INT8_MAX;
	uint32_t x28 = 92178U;
	volatile uint32_t t5 = 219707031U;

    t5 = ((x25-x26)/(x27|x28));

    if (t5 != 46539U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 18;
	static int16_t x31 = 363;
	uint32_t x32 = UINT32_MAX;
	uint32_t t6 = 0U;

    t6 = ((x29-x30)/(x31|x32));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x37 = -1;
	int32_t x38 = INT32_MAX;
	int16_t x40 = 1;
	volatile int32_t t7 = 371071163;

    t7 = ((x37-x38)/(x39|x40));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	volatile uint16_t x43 = 1782U;
	uint64_t x44 = UINT64_MAX;

    t8 = ((x41-x42)/(x43|x44));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MAX;
	static int32_t x50 = -3155598;
	volatile int8_t x51 = INT8_MAX;
	int8_t x52 = -1;

    t9 = ((x49-x50)/(x51|x52));

    if (t9 != -3188365) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x54 = 31070U;
	static int16_t x55 = 11;
	int8_t x56 = -6;
	static int32_t t10 = -65125921;

    t10 = ((x53-x54)/(x55|x56));

    if (t10 != 6212) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x62 = 0U;
	int16_t x63 = 1;
	static volatile int64_t x64 = INT64_MAX;
	int64_t t11 = 101477LL;

    t11 = ((x61-x62)/(x63|x64));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x65 = INT32_MIN;
	static int64_t x66 = -5938158917LL;
	static int32_t x68 = -1;
	volatile int64_t t12 = -3803497LL;

    t12 = ((x65-x66)/(x67|x68));

    if (t12 != -3790675269LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = -1LL;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -1LL;
	uint64_t x72 = 31487876929028240LLU;
	static volatile uint64_t t13 = 356LLU;

    t13 = ((x69-x70)/(x71|x72));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = INT64_MIN;
	static int16_t x74 = -1;
	int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = 908993467964112205LLU;
	static uint64_t t14 = 1062380943664LLU;

    t14 = ((x73-x74)/(x75|x76));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x78 = INT16_MIN;
	uint32_t x80 = 25790U;
	static volatile uint32_t t15 = 11U;

    t15 = ((x77-x78)/(x79|x80));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x81 = 1;
	static int8_t x82 = 5;
	static volatile uint8_t x83 = 29U;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t16 = 1;

    t16 = ((x81-x82)/(x83|x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MIN;
	uint32_t x87 = 6573U;
	int64_t x88 = 189199172602LL;
	int64_t t17 = -43043431LL;

    t17 = ((x85-x86)/(x87|x88));

    if (t17 != 48749535LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x89 = -30926941202006LL;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 1U;

    t18 = ((x89-x90)/(x91|x92));

    if (t18 != 1459347165LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = -1;
	static int8_t x94 = 53;
	static int8_t x95 = INT8_MIN;
	uint8_t x96 = UINT8_MAX;
	int32_t t19 = -231976;

    t19 = ((x93-x94)/(x95|x96));

    if (t19 != 54) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x99 = -25;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t20 = -394753921;

    t20 = ((x97-x98)/(x99|x100));

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MAX;
	uint16_t x103 = UINT16_MAX;
	static uint64_t x104 = 117478929403LLU;
	volatile uint64_t t21 = 10771264LLU;

    t21 = ((x101-x102)/(x103|x104));

    if (t21 != 78510827LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = INT8_MAX;
	static int16_t x106 = -1;
	static int32_t x108 = 9270005;
	static int64_t t22 = -151472286LL;

    t22 = ((x105-x106)/(x107|x108));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MIN;
	static uint64_t x110 = 8071728045871355928LLU;
	static volatile uint32_t x111 = 225280345U;

    t23 = ((x109-x110)/(x111|x112));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x114 = 7381353179LL;
	int8_t x116 = 1;
	static uint64_t t24 = 3679643687LLU;

    t24 = ((x113-x114)/(x115|x116));

    if (t24 != 72340172809130189LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	volatile int8_t x119 = 2;
	static int16_t x120 = INT16_MAX;
	int32_t t25 = 973;

    t25 = ((x117-x118)/(x119|x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = INT32_MAX;
	static uint8_t x122 = 0U;
	uint32_t x123 = 332111670U;
	int64_t x124 = INT64_MAX;
	static volatile int64_t t26 = -1LL;

    t26 = ((x121-x122)/(x123|x124));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = 0;
	int64_t x126 = -1LL;
	volatile int64_t t27 = -7388LL;

    t27 = ((x125-x126)/(x127|x128));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = -1;
	uint16_t x130 = 127U;
	int16_t x131 = -249;
	uint64_t x132 = 3610870LLU;
	uint64_t t28 = 568307025370LLU;

    t28 = ((x129-x130)/(x131|x132));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MIN;
	volatile int16_t x136 = -1;
	int32_t t29 = -1;

    t29 = ((x133-x134)/(x135|x136));

    if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x137 = UINT64_MAX;
	uint8_t x138 = 0U;
	int16_t x139 = INT16_MIN;
	static volatile uint64_t t30 = 118880798684513011LLU;

    t30 = ((x137-x138)/(x139|x140));

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = INT16_MIN;
	uint32_t x142 = 17U;
	volatile uint32_t x143 = UINT32_MAX;
	uint64_t x144 = 1LLU;
	uint64_t t31 = 5269891132328532524LLU;

    t31 = ((x141-x142)/(x143|x144));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = 40666;
	int64_t x146 = INT64_MAX;
	volatile int8_t x147 = -1;
	static uint8_t x148 = 86U;

    t32 = ((x145-x146)/(x147|x148));

    if (t32 != 9223372036854735141LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x153 = 160;
	static volatile uint32_t x154 = UINT32_MAX;
	int8_t x156 = -1;
	uint32_t t33 = 0U;

    t33 = ((x153-x154)/(x155|x156));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x158 = UINT8_MAX;
	int8_t x159 = 0;
	int8_t x160 = 8;
	static volatile int32_t t34 = -368;

    t34 = ((x157-x158)/(x159|x160));

    if (t34 != 268435424) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x166 = -1;
	uint64_t t35 = 5647798037LLU;

    t35 = ((x165-x166)/(x167|x168));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x169 = 0U;
	static uint32_t x170 = UINT32_MAX;
	uint64_t x171 = 733LLU;
	uint64_t t36 = 25461335940LLU;

    t36 = ((x169-x170)/(x171|x172));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	int64_t x175 = INT64_MIN;
	int64_t t37 = -2151757139LL;

    t37 = ((x173-x174)/(x175|x176));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x177 = INT16_MAX;
	int16_t x179 = INT16_MAX;
	uint32_t x180 = UINT32_MAX;

    t38 = ((x177-x178)/(x179|x180));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x181 = INT8_MIN;
	static int8_t x182 = INT8_MAX;
	int64_t x184 = INT64_MAX;
	int64_t t39 = 10420224092702LL;

    t39 = ((x181-x182)/(x183|x184));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x186 = UINT16_MAX;
	int64_t x187 = INT64_MIN;
	volatile int16_t x188 = -1;
	volatile int64_t t40 = -5993832512386LL;

    t40 = ((x185-x186)/(x187|x188));

    if (t40 != 454505848LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x190 = INT16_MIN;
	static int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;

    t41 = ((x189-x190)/(x191|x192));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x193 = UINT32_MAX;
	int64_t x194 = 11325727571415LL;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;

    t42 = ((x193-x194)/(x195|x196));

    if (t42 != 88448692219LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x202 = INT16_MIN;
	int8_t x203 = -1;
	static volatile uint8_t x204 = UINT8_MAX;
	volatile int32_t t43 = 325;

    t43 = ((x201-x202)/(x203|x204));

    if (t43 != -33023) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x206 = 0U;
	uint64_t x207 = 2175822364408292008LLU;
	int16_t x208 = INT16_MAX;
	static volatile uint64_t t44 = 9767LLU;

    t44 = ((x205-x206)/(x207|x208));

    if (t44 != 8LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	volatile int16_t x211 = -14416;
	int64_t x212 = 25044948318578LL;
	int64_t t45 = 13144782330805279LL;

    t45 = ((x209-x210)/(x211|x212));

    if (t45 != -18LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x213 = -809898334LL;
	uint64_t x214 = 802814010426598LLU;
	static volatile int16_t x215 = 3039;
	volatile uint64_t t46 = 1711714833752679LLU;

    t46 = ((x213-x214)/(x215|x216));

    if (t46 != 281467021574566LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x217 = 10U;
	int16_t x218 = 30;
	uint32_t x219 = UINT32_MAX;
	volatile int8_t x220 = -13;

    t47 = ((x217-x218)/(x219|x220));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x221 = INT16_MAX;
	int8_t x222 = INT8_MAX;
	volatile int16_t x223 = INT16_MIN;
	int32_t x224 = 4;
	static volatile int32_t t48 = 1;

    t48 = ((x221-x222)/(x223|x224));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x225 = INT8_MIN;
	static int16_t x226 = INT16_MIN;
	volatile uint64_t t49 = 3857053912917434900LLU;

    t49 = ((x225-x226)/(x227|x228));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x229 = INT16_MIN;
	int32_t x230 = -1;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = UINT64_MAX;

    t50 = ((x229-x230)/(x231|x232));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x234 = 99757319LLU;
	volatile uint16_t x235 = 17U;

    t51 = ((x233-x234)/(x235|x236));

    if (t51 != 383323516658LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x237 = 1067369017;
	uint32_t x238 = UINT32_MAX;
	int64_t t52 = 77LL;

    t52 = ((x237-x238)/(x239|x240));

    if (t52 != -1067369018LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = -1;
	static int64_t x242 = 2108025846810428001LL;
	uint16_t x243 = 6169U;
	int32_t x244 = INT32_MIN;

    t53 = ((x241-x242)/(x243|x244));

    if (t53 != 981628849LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x245 = UINT16_MAX;
	static volatile uint16_t x246 = 3U;
	int8_t x247 = -1;
	int8_t x248 = INT8_MAX;

    t54 = ((x245-x246)/(x247|x248));

    if (t54 != -65532) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = 276927321521LLU;
	uint16_t x250 = 30U;
	static int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;
	static volatile uint64_t t55 = 7288447LLU;

    t55 = ((x249-x250)/(x251|x252));

    if (t55 != 64LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x255 = 3412757;
	uint32_t x256 = 3U;
	uint32_t t56 = 209334U;

    t56 = ((x253-x254)/(x255|x256));

    if (t56 != 9U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x258 = 9U;
	volatile int64_t x259 = INT64_MAX;
	uint16_t x260 = 4526U;
	volatile int64_t t57 = -289090778987426888LL;

    t57 = ((x257-x258)/(x259|x260));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = 2U;
	volatile int32_t x268 = -1;

    t58 = ((x265-x266)/(x267|x268));

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	static int16_t x271 = -1574;
	int32_t x272 = 5;
	int64_t t59 = 44250034LL;

    t59 = ((x269-x270)/(x271|x272));

    if (t59 != -5878503528906804LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x273 = 0;
	int64_t x274 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	volatile int64_t t60 = INT64_MAX;

    t60 = ((x273-x274)/(x275|x276));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x277 = 27556637LLU;
	static uint64_t x278 = 1668LLU;
	uint16_t x280 = 121U;

    t61 = ((x277-x278)/(x279|x280));

    if (t61 != 43530LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x281 = INT32_MIN;
	int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t62 = INT32_MAX;

    t62 = ((x281-x282)/(x283|x284));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x285 = 31U;
	uint8_t x286 = 2U;
	int8_t x288 = 17;
	static volatile int32_t t63 = 6771;

    t63 = ((x285-x286)/(x287|x288));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x290 = INT64_MAX;
	uint32_t x291 = 114U;
	uint16_t x292 = 1058U;
	int64_t t64 = -1990LL;

    t64 = ((x289-x290)/(x291|x292));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x293 = UINT8_MAX;
	uint16_t x294 = 1U;
	int64_t t65 = -191368135551LL;

    t65 = ((x293-x294)/(x295|x296));

    if (t65 != -254LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MAX;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = -42;

    t66 = ((x297-x298)/(x299|x300));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x301 = 612864597LLU;
	int16_t x303 = -1070;
	volatile uint64_t t67 = 265198942LLU;

    t67 = ((x301-x302)/(x303|x304));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x305 = -173570LL;
	int16_t x307 = -24;
	int64_t x308 = -381271322LL;
	int64_t t68 = -201LL;

    t68 = ((x305-x306)/(x307|x308));

    if (t68 != -154088LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x309 = 10165409U;
	int16_t x310 = -12;
	int64_t x311 = 2588435524LL;
	int16_t x312 = INT16_MAX;
	int64_t t69 = -41128145619926LL;

    t69 = ((x309-x310)/(x311|x312));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x315 = 154U;
	static uint8_t x316 = 2U;
	static int32_t t70 = 490884;

    t70 = ((x313-x314)/(x315|x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x317 = -1LL;
	int16_t x319 = -12101;
	static int8_t x320 = INT8_MAX;
	volatile int64_t t71 = 673098LL;

    t71 = ((x317-x318)/(x319|x320));

    if (t71 != 17111909173LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = -1;
	int16_t x322 = 14058;
	uint32_t x323 = 13107940U;
	uint32_t t72 = 165950U;

    t72 = ((x321-x322)/(x323|x324));

    if (t72 != 326U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x325 = INT32_MAX;
	uint16_t x326 = UINT16_MAX;
	volatile int64_t x328 = INT64_MIN;

    t73 = ((x325-x326)/(x327|x328));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MIN;
	int8_t x332 = INT8_MAX;
	volatile int64_t t74 = -20793852618522LL;

    t74 = ((x329-x330)/(x331|x332));

    if (t74 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x335 = INT16_MAX;
	volatile uint64_t t75 = 1053232628LLU;

    t75 = ((x333-x334)/(x335|x336));

    if (t75 != 15421LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x337 = 39846LLU;
	uint64_t x338 = 633105906203833LLU;
	uint8_t x339 = 5U;
	int8_t x340 = INT8_MAX;
	volatile uint64_t t76 = 116892501717619LLU;

    t76 = ((x337-x338)/(x339|x340));

    if (t76 != 145244968250420375LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x341 = 5;
	static uint8_t x342 = 1U;
	volatile int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;
	int64_t t77 = -5210081943611LL;

    t77 = ((x341-x342)/(x343|x344));

    if (t77 != -4LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x346 = 17229364;
	static int8_t x347 = INT8_MAX;
	volatile int32_t t78 = 0;

    t78 = ((x345-x346)/(x347|x348));

    if (t78 != -44) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x349 = -1;
	int64_t x350 = -3053082070039015LL;
	static int64_t x351 = INT64_MIN;
	uint8_t x352 = UINT8_MAX;
	volatile int64_t t79 = 12LL;

    t79 = ((x349-x350)/(x351|x352));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x353 = INT32_MIN;
	volatile int8_t x354 = -8;
	static uint16_t x355 = 502U;
	int32_t t80 = -1;

    t80 = ((x353-x354)/(x355|x356));

    if (t80 != -4269351) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x357 = -5488244;
	int32_t x359 = INT32_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t81 = -30884804356LL;

    t81 = ((x357-x358)/(x359|x360));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x361 = INT8_MAX;
	volatile uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MAX;
	volatile int8_t x364 = INT8_MIN;
	static int32_t t82 = -32286314;

    t82 = ((x361-x362)/(x363|x364));

    if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = -1;
	volatile uint64_t x371 = UINT64_MAX;
	uint32_t x372 = 0U;
	static uint64_t t83 = 6163422593LLU;

    t83 = ((x369-x370)/(x371|x372));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x382 = 4249U;
	uint16_t x383 = 144U;
	static int32_t x384 = INT32_MIN;
	uint64_t t84 = 128515589215625LLU;

    t84 = ((x381-x382)/(x383|x384));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = 13;
	uint64_t t85 = 3295375237967LLU;

    t85 = ((x385-x386)/(x387|x388));

    if (t85 != 4294967296LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x389 = UINT8_MAX;
	uint8_t x391 = 0U;
	static volatile int32_t x392 = -1;
	volatile int32_t t86 = 1478;

    t86 = ((x389-x390)/(x391|x392));

    if (t86 != -256) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x393 = 7246U;
	int16_t x394 = 21;
	uint8_t x395 = 121U;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t87 = 1264554;

    t87 = ((x393-x394)/(x395|x396));

    if (t87 != -1032) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	volatile int64_t x400 = -29021646LL;
	volatile int64_t t88 = 1335230797626LL;

    t88 = ((x397-x398)/(x399|x400));

    if (t88 != 73LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x409 = -3;
	static int64_t x410 = -143255249967LL;
	static int32_t x411 = INT32_MIN;
	int64_t x412 = INT64_MAX;
	volatile int64_t t89 = -2036276LL;

    t89 = ((x409-x410)/(x411|x412));

    if (t89 != -143255249964LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x413 = INT8_MIN;
	static volatile uint8_t x414 = UINT8_MAX;
	volatile int64_t x415 = INT64_MIN;
	int32_t x416 = INT32_MIN;
	static volatile int64_t t90 = -2616622803LL;

    t90 = ((x413-x414)/(x415|x416));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x417 = 14U;
	int32_t x418 = -1;
	int32_t x419 = 31;
	int64_t x420 = INT64_MAX;

    t91 = ((x417-x418)/(x419|x420));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x421 = -1LL;
	static int16_t x422 = -363;
	static uint8_t x423 = 1U;

    t92 = ((x421-x422)/(x423|x424));

    if (t92 != -362LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x425 = UINT16_MAX;
	static volatile int8_t x426 = 1;
	static int8_t x427 = 0;
	int16_t x428 = 4799;
	volatile int32_t t93 = 1;

    t93 = ((x425-x426)/(x427|x428));

    if (t93 != 13) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x433 = -1;
	static volatile uint8_t x434 = 5U;
	static int16_t x435 = -1;
	int8_t x436 = INT8_MAX;
	volatile int32_t t94 = 20;

    t94 = ((x433-x434)/(x435|x436));

    if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	volatile int32_t x439 = 917881384;
	volatile uint32_t x440 = 1U;
	volatile int64_t t95 = 968896695199765LL;

    t95 = ((x437-x438)/(x439|x440));

    if (t95 != 10048544602LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x442 = UINT32_MAX;
	static uint16_t x443 = 192U;
	int16_t x444 = INT16_MAX;
	volatile uint32_t t96 = 5219648U;

    t96 = ((x441-x442)/(x443|x444));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x445 = -46;
	volatile int16_t x446 = 0;
	uint16_t x447 = 1452U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t97 = -1;

    t97 = ((x445-x446)/(x447|x448));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x449 = -6378590LL;
	static int16_t x450 = -707;
	uint8_t x451 = UINT8_MAX;
	volatile int16_t x452 = -1;
	static int64_t t98 = 833886435238079438LL;

    t98 = ((x449-x450)/(x451|x452));

    if (t98 != 6377883LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x457 = INT8_MAX;
	volatile int8_t x458 = INT8_MAX;
	int64_t x459 = -233105918LL;

    t99 = ((x457-x458)/(x459|x460));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x461 = 2473U;
	int16_t x462 = -1;
	static int8_t x463 = INT8_MAX;
	int64_t x464 = -42340LL;
	volatile int64_t t100 = -14010086971346LL;

    t100 = ((x461-x462)/(x463|x464));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x465 = UINT64_MAX;
	static int64_t x467 = 1518LL;
	int32_t x468 = INT32_MAX;
	uint64_t t101 = 781766558LLU;

    t101 = ((x465-x466)/(x467|x468));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x470 = 108;
	int32_t x471 = -1;
	volatile uint32_t t102 = 13U;

    t102 = ((x469-x470)/(x471|x472));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x473 = -343181853199LL;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MAX;
	volatile int64_t t103 = 8370632LL;

    t103 = ((x473-x474)/(x475|x476));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x481 = INT64_MIN;
	volatile int32_t x482 = INT32_MIN;
	int32_t x483 = -909821529;
	int64_t x484 = INT64_MIN;
	volatile int64_t t104 = 462556229998724902LL;

    t104 = ((x481-x482)/(x483|x484));

    if (t104 != 10137561863LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x485 = -1;
	int64_t x488 = 12216973616546317LL;
	static int64_t t105 = -87443292578LL;

    t105 = ((x485-x486)/(x487|x488));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x489 = -293012776331525LL;
	static int16_t x491 = -346;
	uint8_t x492 = 4U;
	volatile int64_t t106 = -831043115268LL;

    t106 = ((x489-x490)/(x491|x492));

    if (t106 != -26656297757452151LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x494 = 30U;
	int32_t x495 = INT32_MIN;
	int64_t x496 = INT64_MAX;
	int64_t t107 = 1675170894LL;

    t107 = ((x493-x494)/(x495|x496));

    if (t107 != 32LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x504 = -80344714270671263LL;
	static volatile uint64_t t108 = 226LLU;

    t108 = ((x501-x502)/(x503|x504));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x507 = INT16_MAX;

    t109 = ((x505-x506)/(x507|x508));

    if (t109 != -281483566907400LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x509 = INT8_MIN;
	uint16_t x511 = 24U;
	uint64_t x512 = UINT64_MAX;
	uint64_t t110 = 490252620142LLU;

    t110 = ((x509-x510)/(x511|x512));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x513 = 19U;
	static int8_t x514 = -38;
	uint16_t x515 = 7313U;
	static uint64_t x516 = 4263234LLU;
	static volatile uint64_t t111 = 206957480595133955LLU;

    t111 = ((x513-x514)/(x515|x516));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile int32_t x518 = INT32_MIN;
	uint32_t x519 = 141371079U;
	static uint32_t x520 = 1U;
	uint32_t t112 = 291276U;

    t112 = ((x517-x518)/(x519|x520));

    if (t112 != 15U) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x521 = UINT8_MAX;
	static uint32_t x523 = UINT32_MAX;
	uint32_t x524 = 26U;
	uint32_t t113 = 704U;

    t113 = ((x521-x522)/(x523|x524));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x525 = -10898;
	int16_t x526 = INT16_MIN;
	static uint16_t x527 = 1U;
	uint16_t x528 = 7U;
	volatile int32_t t114 = -18660765;

    t114 = ((x525-x526)/(x527|x528));

    if (t114 != 3124) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x533 = INT64_MIN;
	int8_t x534 = -13;
	volatile int64_t x535 = -4214762887538063LL;
	uint64_t x536 = 520814114LLU;
	uint64_t t115 = 34466872042063LLU;

    t115 = ((x533-x534)/(x535|x536));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x537 = 39;
	int16_t x538 = -1;
	volatile int32_t x540 = INT32_MIN;
	volatile int32_t t116 = 930;

    t116 = ((x537-x538)/(x539|x540));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x541 = 23U;
	int32_t x543 = -23490;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t117 = 2LLU;

    t117 = ((x541-x542)/(x543|x544));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x549 = INT8_MIN;
	static int16_t x550 = INT16_MIN;
	int32_t t118 = -731563;

    t118 = ((x549-x550)/(x551|x552));

    if (t118 != -32640) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x553 = 385LLU;
	volatile int64_t x555 = INT64_MIN;
	volatile uint64_t t119 = 7327484LLU;

    t119 = ((x553-x554)/(x555|x556));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x559 = 22952950673LL;
	static uint8_t x560 = 118U;
	static volatile int64_t t120 = 538528403820LL;

    t120 = ((x557-x558)/(x559|x560));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x562 = INT8_MIN;
	int32_t t121 = -3258;

    t121 = ((x561-x562)/(x563|x564));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x565 = INT64_MIN;
	int64_t x566 = -1LL;
	int16_t x567 = 3;

    t122 = ((x565-x566)/(x567|x568));

    if (t122 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x574 = 0;
	static int8_t x575 = INT8_MAX;
	int64_t x576 = INT64_MAX;
	int64_t t123 = -8424230LL;

    t123 = ((x573-x574)/(x575|x576));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x577 = INT8_MAX;
	volatile int16_t x580 = -1;
	int64_t t124 = -1554939494LL;

    t124 = ((x577-x578)/(x579|x580));

    if (t124 != -128LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x581 = INT8_MIN;
	volatile uint64_t x582 = 223828802354109LLU;
	uint8_t x583 = 12U;
	volatile uint64_t t125 = 991LLU;

    t125 = ((x581-x582)/(x583|x584));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x589 = 1384;
	uint64_t x590 = UINT64_MAX;
	int32_t x591 = -1;
	static int64_t x592 = 532855141381061865LL;

    t126 = ((x589-x590)/(x591|x592));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x593 = INT8_MAX;
	static int8_t x594 = INT8_MAX;
	int16_t x595 = INT16_MIN;
	volatile uint32_t x596 = 5667152U;
	uint32_t t127 = 4180U;

    t127 = ((x593-x594)/(x595|x596));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x598 = INT32_MIN;
	static uint32_t x599 = 53U;

    t128 = ((x597-x598)/(x599|x600));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x601 = 826514766872LL;
	uint64_t x602 = 5051007LLU;
	static int16_t x603 = 41;
	static uint16_t x604 = 19U;
	volatile uint64_t t129 = 2823533319289015LLU;

    t129 = ((x601-x602)/(x603|x604));

    if (t129 != 14008639251LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x606 = -1;
	volatile int64_t x607 = INT64_MIN;
	int8_t x608 = INT8_MIN;
	volatile int64_t t130 = -16676082392LL;

    t130 = ((x605-x606)/(x607|x608));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x609 = 4U;
	uint32_t x610 = 8408075U;
	uint16_t x611 = 4U;
	int16_t x612 = 2447;
	volatile uint32_t t131 = 1868931957U;

    t131 = ((x609-x610)/(x611|x612));

    if (t131 != 1751761U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x613 = INT16_MIN;
	int16_t x614 = INT16_MIN;
	volatile int32_t x615 = -1;
	uint16_t x616 = UINT16_MAX;
	int32_t t132 = -25639545;

    t132 = ((x613-x614)/(x615|x616));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x618 = 11471U;
	int32_t x619 = INT32_MAX;
	volatile uint32_t x620 = 391914U;

    t133 = ((x617-x618)/(x619|x620));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x621 = INT8_MIN;
	volatile int64_t x622 = 192898082972180133LL;
	uint16_t x623 = 260U;
	static int32_t x624 = INT32_MIN;
	int64_t t134 = 220434934819LL;

    t134 = ((x621-x622)/(x623|x624));

    if (t134 != 89825180LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x625 = 31U;
	uint16_t x626 = 7U;
	int32_t x627 = INT32_MAX;
	volatile int32_t t135 = -8;

    t135 = ((x625-x626)/(x627|x628));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x629 = -1;
	int64_t x630 = -1LL;
	int64_t x631 = INT64_MIN;
	volatile int16_t x632 = 166;
	volatile int64_t t136 = 307933LL;

    t136 = ((x629-x630)/(x631|x632));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x633 = -12LL;
	int16_t x635 = -1;
	int8_t x636 = INT8_MIN;
	static volatile int64_t t137 = 1749LL;

    t137 = ((x633-x634)/(x635|x636));

    if (t137 != 14LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x637 = 124U;
	uint8_t x638 = 60U;
	int64_t x639 = 3047318LL;
	static int32_t x640 = INT32_MIN;
	static volatile int64_t t138 = -789065821213879386LL;

    t138 = ((x637-x638)/(x639|x640));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x643 = 3LLU;
	volatile int16_t x644 = INT16_MAX;
	volatile uint64_t t139 = 3446084390177394406LLU;

    t139 = ((x641-x642)/(x643|x644));

    if (t139 != 281815323722461LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x645 = -1;
	uint64_t x646 = UINT64_MAX;
	int32_t x648 = -22880352;
	uint64_t t140 = 918081832118LLU;

    t140 = ((x645-x646)/(x647|x648));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x649 = 9952563702652009LL;
	int64_t x650 = -25538671054LL;
	static int8_t x651 = INT8_MIN;
	uint64_t x652 = 4LLU;
	uint64_t t141 = 226LLU;

    t141 = ((x649-x650)/(x651|x652));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x653 = INT64_MIN;
	int8_t x654 = -21;
	int32_t x655 = -312;
	int64_t x656 = INT64_MAX;

    t142 = ((x653-x654)/(x655|x656));

    if (t142 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x657 = 638068807;
	uint16_t x659 = UINT16_MAX;
	volatile int16_t x660 = INT16_MIN;
	volatile int32_t t143 = 11;

    t143 = ((x657-x658)/(x659|x660));

    if (t143 != -638068815) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x661 = -126;
	volatile int64_t t144 = 48503592720355525LL;

    t144 = ((x661-x662)/(x663|x664));

    if (t144 != 120LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x665 = 32LL;
	int16_t x666 = -1;
	int8_t x667 = INT8_MIN;
	static int64_t x668 = -980016LL;
	int64_t t145 = 24507380LL;

    t145 = ((x665-x666)/(x667|x668));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x673 = INT16_MAX;
	static int8_t x674 = -1;
	volatile int32_t x675 = -1;

    t146 = ((x673-x674)/(x675|x676));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x677 = 80975LL;
	int32_t x678 = -1;
	static volatile uint32_t x680 = 17U;
	int64_t t147 = -85962123601723LL;

    t147 = ((x677-x678)/(x679|x680));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x681 = INT8_MAX;
	volatile int8_t x682 = -28;
	int8_t x684 = INT8_MAX;
	int32_t t148 = -117156593;

    t148 = ((x681-x682)/(x683|x684));

    if (t148 != -155) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x686 = -1;
	int32_t x688 = 1;
	static volatile int64_t t149 = 11LL;

    t149 = ((x685-x686)/(x687|x688));

    if (t149 != 361730665534LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x689 = UINT8_MAX;
	int64_t x690 = -1LL;
	int8_t x691 = INT8_MIN;
	uint32_t x692 = 23303771U;
	volatile int64_t t150 = -1059584543919LL;

    t150 = ((x689-x690)/(x691|x692));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x693 = 1;
	uint32_t x694 = UINT32_MAX;
	int16_t x695 = INT16_MIN;
	uint32_t t151 = 899951101U;

    t151 = ((x693-x694)/(x695|x696));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x699 = INT8_MIN;
	int8_t x700 = -6;
	static int32_t t152 = 30248177;

    t152 = ((x697-x698)/(x699|x700));

    if (t152 != 63) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x701 = -29;
	static volatile int32_t x702 = -1;
	uint8_t x703 = UINT8_MAX;
	int16_t x704 = INT16_MAX;
	volatile int32_t t153 = -74;

    t153 = ((x701-x702)/(x703|x704));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x706 = 7748123545389860LLU;
	static int64_t x707 = -1LL;
	int16_t x708 = INT16_MIN;
	uint64_t t154 = 111LLU;

    t154 = ((x705-x706)/(x707|x708));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x710 = 0U;
	int64_t x711 = INT64_MIN;
	int16_t x712 = -1452;
	volatile int64_t t155 = 25391725211871LL;

    t155 = ((x709-x710)/(x711|x712));

    if (t155 != 22LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x713 = 149882841U;
	static volatile uint64_t x714 = 409513864791LLU;
	static volatile uint32_t x715 = 38138231U;
	uint64_t t156 = 225181LLU;

    t156 = ((x713-x714)/(x715|x716));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x717 = -6859;
	int32_t x718 = 6888;
	volatile int16_t x720 = INT16_MAX;
	volatile uint32_t t157 = 8043U;

    t157 = ((x717-x718)/(x719|x720));

    if (t157 != 131075U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x721 = 187755U;
	volatile int8_t x722 = -1;
	int32_t x723 = INT32_MIN;
	uint32_t t158 = 281406U;

    t158 = ((x721-x722)/(x723|x724));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x725 = 1;
	static volatile uint64_t x726 = 3653428540076LLU;
	int16_t x727 = INT16_MIN;
	volatile uint64_t t159 = 3906466741LLU;

    t159 = ((x725-x726)/(x727|x728));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x729 = -1;
	uint8_t x732 = 0U;
	uint32_t t160 = 28U;

    t160 = ((x729-x730)/(x731|x732));

    if (t160 != 17168U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x733 = -1;
	volatile int64_t x734 = -1008680049LL;
	uint8_t x735 = UINT8_MAX;
	volatile int32_t x736 = INT32_MIN;
	int64_t t161 = -136960341LL;

    t161 = ((x733-x734)/(x735|x736));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x738 = 25LLU;
	volatile uint16_t x740 = 198U;
	uint64_t t162 = 247912179410LLU;

    t162 = ((x737-x738)/(x739|x740));

    if (t162 != 316LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x741 = 277542342207069877LL;
	volatile int8_t x743 = INT8_MIN;
	int16_t x744 = -1588;
	int64_t t163 = -11276817054LL;

    t163 = ((x741-x742)/(x743|x744));

    if (t163 != -5337352776049106LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x749 = INT16_MAX;
	uint32_t x750 = 2175817U;
	static uint16_t x751 = UINT16_MAX;
	int32_t x752 = -46;
	volatile uint32_t t164 = 66378392U;

    t164 = ((x749-x750)/(x751|x752));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x753 = -1;
	uint8_t x754 = 8U;
	static volatile int64_t x755 = INT64_MIN;
	static volatile int8_t x756 = INT8_MAX;
	int64_t t165 = -49688955546LL;

    t165 = ((x753-x754)/(x755|x756));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x762 = 11U;
	volatile int64_t x763 = -1LL;

    t166 = ((x761-x762)/(x763|x764));

    if (t166 != 86LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x765 = INT32_MAX;
	volatile uint16_t x766 = UINT16_MAX;
	uint8_t x767 = 2U;
	uint32_t t167 = 877474576U;

    t167 = ((x765-x766)/(x767|x768));

    if (t167 != 97609914U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x769 = -1;
	volatile int8_t x771 = INT8_MIN;
	int8_t x772 = INT8_MIN;
	volatile int32_t t168 = 686;

    t168 = ((x769-x770)/(x771|x772));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x774 = UINT16_MAX;
	uint64_t x775 = 11LLU;
	uint8_t x776 = 14U;
	volatile uint64_t t169 = 524408232LLU;

    t169 = ((x773-x774)/(x775|x776));

    if (t169 != 770097999769LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x777 = -1;
	int64_t x778 = INT64_MIN;
	static int8_t x780 = INT8_MAX;

    t170 = ((x777-x778)/(x779|x780));

    if (t170 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x786 = INT32_MIN;
	static int16_t x788 = 13920;
	static volatile int32_t t171 = -236027440;

    t171 = ((x785-x786)/(x787|x788));

    if (t171 != -306783378) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x789 = 723;
	int16_t x790 = INT16_MIN;
	volatile uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MAX;
	uint64_t t172 = 29921872147LLU;

    t172 = ((x789-x790)/(x791|x792));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x797 = 4;
	int8_t x798 = -1;
	int16_t x799 = INT16_MAX;
	volatile uint16_t x800 = 938U;
	static int32_t t173 = 208896;

    t173 = ((x797-x798)/(x799|x800));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x801 = 1605161495737625LL;
	int32_t x803 = INT32_MAX;
	int8_t x804 = 15;
	volatile int64_t t174 = -34816270265945LL;

    t174 = ((x801-x802)/(x803|x804));

    if (t174 != 747461LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x806 = INT16_MIN;
	static int8_t x807 = -1;
	static int32_t x808 = INT32_MIN;
	int32_t t175 = 49651693;

    t175 = ((x805-x806)/(x807|x808));

    if (t175 != -32640) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x809 = INT16_MAX;
	static int32_t x812 = 5;

    t176 = ((x809-x810)/(x811|x812));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x813 = INT8_MIN;
	int8_t x814 = 0;
	int64_t x815 = INT64_MIN;
	static int8_t x816 = INT8_MIN;
	int64_t t177 = 319802495271LL;

    t177 = ((x813-x814)/(x815|x816));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x817 = 29089LLU;
	volatile uint64_t x818 = 92256920296LLU;
	static volatile uint16_t x819 = UINT16_MAX;
	uint64_t x820 = UINT64_MAX;
	uint64_t t178 = 704631367853LLU;

    t178 = ((x817-x818)/(x819|x820));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x821 = INT16_MIN;
	int64_t x822 = -1LL;
	int16_t x823 = INT16_MIN;
	uint64_t x824 = 43916207543846950LLU;
	uint64_t t179 = 6LLU;

    t179 = ((x821-x822)/(x823|x824));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x825 = INT8_MIN;
	int64_t x826 = -1LL;
	volatile int8_t x827 = -6;
	int64_t t180 = -1259903559338402807LL;

    t180 = ((x825-x826)/(x827|x828));

    if (t180 != 127LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x829 = 0;
	volatile uint64_t x830 = 3479637LLU;
	uint16_t x831 = 486U;
	static int32_t x832 = -1;
	uint64_t t181 = 202LLU;

    t181 = ((x829-x830)/(x831|x832));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x833 = 135530517467866LLU;
	uint32_t x834 = 200U;
	int8_t x835 = INT8_MAX;
	uint64_t x836 = UINT64_MAX;
	static volatile uint64_t t182 = 214345144LLU;

    t182 = ((x833-x834)/(x835|x836));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x837 = INT16_MIN;
	volatile int32_t x838 = 406;
	static int16_t x839 = INT16_MIN;
	volatile int64_t x840 = INT64_MAX;

    t183 = ((x837-x838)/(x839|x840));

    if (t183 != 33174LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x841 = UINT16_MAX;
	static int16_t x842 = -252;
	uint8_t x843 = 3U;
	int32_t x844 = INT32_MAX;

    t184 = ((x841-x842)/(x843|x844));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x845 = INT64_MIN;
	volatile int32_t x847 = -6148973;

    t185 = ((x845-x846)/(x847|x848));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x850 = 29U;
	int8_t x852 = -1;
	int64_t t186 = 9367585LL;

    t186 = ((x849-x850)/(x851|x852));

    if (t186 != -4294967266LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x853 = 172;
	int8_t x854 = -1;
	static uint32_t x855 = UINT32_MAX;
	uint8_t x856 = UINT8_MAX;
	volatile uint32_t t187 = 6U;

    t187 = ((x853-x854)/(x855|x856));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x861 = INT16_MIN;
	static int64_t x862 = -1LL;
	volatile int32_t x863 = -1;
	int16_t x864 = INT16_MIN;
	volatile int64_t t188 = 556092888452906LL;

    t188 = ((x861-x862)/(x863|x864));

    if (t188 != 32767LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x865 = INT64_MIN;
	int8_t x867 = INT8_MIN;
	int64_t x868 = -1LL;
	int64_t t189 = INT64_MAX;

    t189 = ((x865-x866)/(x867|x868));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x870 = -1;
	uint16_t x871 = UINT16_MAX;
	static int16_t x872 = -1;
	volatile uint32_t t190 = 2U;

    t190 = ((x869-x870)/(x871|x872));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x873 = 4235306625LLU;
	int32_t x874 = INT32_MAX;
	static uint32_t x876 = 265778U;
	uint64_t t191 = 912338LLU;

    t191 = ((x873-x874)/(x875|x876));

    if (t191 != 7855LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x878 = 585;
	int32_t t192 = -125946;

    t192 = ((x877-x878)/(x879|x880));

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x881 = INT64_MIN;
	int32_t x882 = -911;
	int64_t t193 = 0LL;

    t193 = ((x881-x882)/(x883|x884));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x886 = 1141455;
	uint64_t x887 = 0LLU;
	int32_t x888 = INT32_MIN;
	volatile uint64_t t194 = 1820528799594008LLU;

    t194 = ((x885-x886)/(x887|x888));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x889 = UINT64_MAX;
	static uint16_t x890 = 3U;
	int8_t x891 = -12;
	volatile uint64_t t195 = 1192535382LLU;

    t195 = ((x889-x890)/(x891|x892));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x893 = -1;
	int32_t x894 = -2;
	volatile int64_t x895 = 72723969560257LL;
	uint8_t x896 = UINT8_MAX;

    t196 = ((x893-x894)/(x895|x896));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x901 = UINT8_MAX;
	static uint32_t x902 = 753069U;
	int32_t x903 = INT32_MIN;
	int64_t x904 = -149435730076LL;
	int64_t t197 = 5286369739532058LL;

    t197 = ((x901-x902)/(x903|x904));

    if (t197 != -3LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x905 = INT16_MAX;
	volatile int64_t x906 = INT64_MAX;
	int64_t x907 = -917099702LL;
	volatile int8_t x908 = INT8_MAX;
	static int64_t t198 = -273949LL;

    t198 = ((x905-x906)/(x907|x908));

    if (t198 != 10057109984LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x909 = 13373751632805LLU;
	static uint32_t x912 = 4753U;
	static volatile uint64_t t199 = 97636LLU;

    t199 = ((x909-x910)/(x911|x912));

    if (t199 != 2807842039LLU) { NG(); } else { ; }
	
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

