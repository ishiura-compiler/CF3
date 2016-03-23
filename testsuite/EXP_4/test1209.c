
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

static int32_t x4 = -1;
uint64_t x8 = 7829LLU;
int32_t x9 = INT32_MIN;
static volatile uint32_t x11 = UINT32_MAX;
int8_t x12 = 0;
uint8_t x14 = UINT8_MAX;
int16_t x15 = INT16_MIN;
int32_t x16 = INT32_MIN;
volatile int64_t t5 = 12808852LL;
volatile uint64_t x27 = UINT64_MAX;
int64_t t6 = -5059137LL;
volatile int64_t x36 = INT64_MAX;
int32_t x37 = -1;
volatile int32_t x38 = INT32_MIN;
static int32_t x40 = INT32_MAX;
volatile int32_t t9 = -20472714;
uint32_t t10 = 1557261U;
int8_t x45 = 20;
int16_t x46 = INT16_MAX;
int32_t t11 = 193500225;
int16_t x58 = INT16_MIN;
int64_t x68 = 4774910784380LL;
static uint32_t x69 = 80U;
int8_t x70 = -44;
int8_t x73 = INT8_MAX;
volatile uint32_t x74 = 249U;
volatile uint32_t t18 = 600811U;
uint32_t x80 = UINT32_MAX;
volatile int32_t t19 = -30838;
uint16_t x81 = 4403U;
int32_t t21 = -10438;
int8_t x94 = -1;
volatile int64_t t24 = 19666260230167045LL;
int8_t x104 = INT8_MAX;
int16_t x106 = -1;
volatile int64_t t27 = 32442LL;
uint64_t x116 = 1522931859736569LLU;
int32_t t29 = 1729454;
volatile int16_t x123 = INT16_MIN;
static volatile int32_t t30 = 98662708;
uint64_t x131 = 431681467556682LLU;
uint8_t x134 = 1U;
static int8_t x143 = INT8_MAX;
uint64_t t34 = 71461LLU;
volatile int64_t t37 = -1566766LL;
static int32_t x158 = INT32_MIN;
static volatile uint32_t x171 = UINT32_MAX;
static int64_t t42 = 521514104962199LL;
static volatile uint16_t x179 = 593U;
static int16_t x192 = INT16_MIN;
volatile int32_t t46 = 634442286;
volatile int8_t x201 = INT8_MIN;
int32_t t49 = 257402372;
int64_t t50 = 4189611917LL;
int32_t t52 = -338398158;
uint16_t x223 = 559U;
static volatile int32_t t53 = 9536;
volatile uint64_t t55 = 1078251LLU;
volatile int32_t x238 = 50;
int16_t x240 = INT16_MIN;
int32_t x241 = INT32_MIN;
int8_t x244 = INT8_MIN;
int32_t t58 = -18035;
uint16_t x251 = 28U;
int16_t x252 = -1615;
volatile uint32_t x253 = 14956U;
volatile uint32_t t61 = 18U;
volatile int64_t x270 = INT64_MIN;
static int8_t x271 = 0;
static uint64_t x273 = UINT64_MAX;
static volatile int8_t x280 = INT8_MIN;
static int64_t x290 = -1LL;
volatile int8_t x300 = INT8_MIN;
static volatile uint16_t x307 = 19U;
volatile uint64_t t72 = 305LLU;
volatile uint32_t x316 = UINT32_MAX;
int16_t x318 = 18;
static uint8_t x319 = UINT8_MAX;
uint32_t x324 = 25322U;
static int8_t x330 = -19;
int16_t x338 = 952;
int8_t x341 = INT8_MIN;
int16_t x347 = INT16_MIN;
static volatile int64_t t80 = 122070LL;
int8_t x352 = INT8_MIN;
uint8_t x359 = UINT8_MAX;
int64_t x362 = INT64_MIN;
static volatile int32_t t87 = -6775468;
static int16_t x389 = -1071;
uint8_t x393 = UINT8_MAX;
uint8_t x395 = UINT8_MAX;
int8_t x397 = 28;
static int32_t x412 = INT32_MIN;
int32_t t92 = -18;
uint64_t x414 = 24462818LLU;
uint64_t t93 = 30677415761609438LLU;
static int8_t x418 = -1;
int64_t x420 = -8595014670674LL;
int8_t x421 = 1;
int32_t x423 = -1;
int64_t x427 = INT64_MIN;
uint32_t t97 = 375083U;
static uint32_t x434 = 246445968U;
int32_t x442 = 150908587;
int8_t x445 = -1;
uint64_t x446 = 95069962276LLU;
volatile int32_t x448 = INT32_MIN;
uint32_t x462 = 3418U;
uint32_t x463 = UINT32_MAX;
static volatile int64_t x466 = -1LL;
static volatile int32_t x468 = -1;
uint64_t t106 = 565672690865LLU;
volatile int16_t x469 = INT16_MIN;
int32_t x470 = INT32_MIN;
int8_t x471 = INT8_MAX;
static volatile int32_t t108 = -11;
int16_t x483 = INT16_MIN;
uint8_t x484 = 122U;
int16_t x485 = INT16_MIN;
int64_t t110 = 464807022612LL;
int16_t x491 = INT16_MIN;
volatile int64_t x492 = -53LL;
uint32_t t113 = 77U;
uint64_t x502 = 3476264LLU;
static int8_t x507 = -1;
int16_t x508 = INT16_MAX;
int8_t x530 = INT8_MAX;
volatile uint8_t x531 = 24U;
volatile int64_t x534 = -1LL;
uint8_t x546 = 15U;
int8_t x547 = INT8_MIN;
uint64_t t125 = 48242LLU;
static volatile int64_t t126 = -57761976578LL;
static int32_t x556 = -7419;
int8_t x557 = 0;
static int32_t t129 = -3;
int8_t x571 = -1;
volatile int64_t x574 = -1LL;
volatile uint16_t x581 = 0U;
volatile int32_t t133 = 0;
int64_t x587 = INT64_MAX;
int16_t x589 = 1010;
uint16_t x590 = 6397U;
int32_t t135 = 58901811;
int32_t x604 = -1;
static volatile int32_t t137 = 21386880;
static int32_t t138 = -1811180;
uint32_t x614 = 55605U;
int32_t x617 = -1;
int32_t t140 = -126;
uint8_t x623 = 0U;
int64_t t141 = 8309169588502LL;
static uint32_t x628 = UINT32_MAX;
int8_t x634 = -25;
uint16_t x638 = UINT16_MAX;
volatile int32_t x639 = -254879225;
int32_t t145 = -1;
uint64_t x642 = 12805964LLU;
volatile uint64_t t146 = 4391713202LLU;
uint16_t x647 = UINT16_MAX;
int16_t x651 = -8;
uint32_t x654 = 6678385U;
static volatile uint32_t t149 = 3303396U;
static uint16_t x659 = 1U;
static uint32_t t150 = 11744U;
uint32_t x671 = UINT32_MAX;
volatile int16_t x672 = INT16_MIN;
int32_t t153 = 1;
uint64_t t154 = 1LLU;
int16_t x677 = INT16_MIN;
int32_t x678 = INT32_MAX;
static int8_t x681 = -1;
int64_t t157 = -4LL;
int16_t x693 = INT16_MIN;
int16_t x694 = INT16_MAX;
volatile int64_t x696 = INT64_MAX;
uint8_t x703 = 29U;
volatile int32_t x708 = INT32_MIN;
int16_t x710 = -1;
volatile int32_t t163 = 3904207;
int64_t x733 = INT64_MIN;
static int16_t x737 = INT16_MIN;
int64_t x738 = INT64_MIN;
int32_t x740 = INT32_MAX;
volatile int64_t x742 = -287973LL;
uint8_t x753 = UINT8_MAX;
int16_t x756 = 15289;
uint64_t t173 = 44LLU;
uint64_t x766 = 81921895717165LLU;
int8_t x767 = -1;
int64_t x768 = INT64_MIN;
volatile uint64_t t174 = 1519615LLU;
int64_t x783 = INT64_MAX;
uint8_t x790 = 60U;
static int8_t x792 = INT8_MIN;
volatile uint64_t t179 = 7LLU;
volatile uint16_t x794 = 6396U;
static int32_t x808 = -1210;
uint16_t x812 = 510U;
volatile int64_t x819 = INT64_MAX;
uint64_t t186 = 58124792213031862LLU;
volatile int32_t x823 = INT32_MIN;
volatile int32_t t188 = 1;
static uint32_t x837 = 67330115U;
int16_t x841 = 83;
static int8_t x844 = INT8_MIN;
volatile uint32_t x845 = 9U;
int32_t t193 = 0;
static volatile int8_t x859 = INT8_MAX;
volatile int32_t t195 = -1;
int32_t x862 = INT32_MIN;
int32_t x863 = 82;
volatile int32_t t197 = 4;
uint32_t x874 = 1883772U;


void f0(void) {
    	uint8_t x1 = 0U;
	uint8_t x2 = 51U;
	int8_t x3 = 0;
	static int32_t t0 = 99753;

    t0 = (x1%(x2*(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	int8_t x6 = 1;
	static int8_t x7 = -1;
	int32_t t1 = 2;

    t1 = (x5%(x6*(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 566823295453749558LLU;
	uint64_t t2 = 9125670962027797LLU;

    t2 = (x9%(x10*(x11!=x12)));

    if (t2 != 308398617042082112LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = 1;
	int32_t t3 = -122974674;

    t3 = (x13%(x14*(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -3LL;
	volatile int64_t x18 = INT64_MIN;
	uint32_t x19 = 118182U;
	static int8_t x20 = -1;
	volatile int64_t t4 = 1LL;

    t4 = (x17%(x18*(x19!=x20)));

    if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = -29;
	static uint16_t x23 = 71U;
	uint64_t x24 = 314135578408LLU;

    t5 = (x21%(x22*(x23!=x24)));

    if (t5 != -12LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MAX;
	uint16_t x26 = 158U;
	uint16_t x28 = 10U;

    t6 = (x25%(x26*(x27!=x28)));

    if (t6 != 143LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = 35;
	uint64_t x30 = 13279226643789552LLU;
	static int32_t x31 = -3979378;
	uint16_t x32 = 13U;
	volatile uint64_t t7 = 2410379609084667289LLU;

    t7 = (x29%(x30*(x31!=x32)));

    if (t7 != 35LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MIN;
	int8_t x35 = 17;
	int32_t t8 = -354;

    t8 = (x33%(x34*(x35!=x36)));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = 10654;

    t9 = (x37%(x38*(x39!=x40)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	volatile uint32_t x42 = 8396990U;
	int16_t x43 = 1460;
	int8_t x44 = -1;

    t10 = (x41%(x42*(x43!=x44)));

    if (t10 != 255U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x47 = INT32_MIN;
	volatile int64_t x48 = INT64_MAX;

    t11 = (x45%(x46*(x47!=x48)));

    if (t11 != 20) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 0U;
	static int16_t x50 = INT16_MAX;
	volatile uint64_t x51 = 3737060905571993LLU;
	int32_t x52 = 2;
	static volatile int32_t t12 = -1742;

    t12 = (x49%(x50*(x51!=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint8_t x54 = 4U;
	static uint8_t x55 = 26U;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -1188;

    t13 = (x53%(x54*(x55!=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	static uint16_t x59 = UINT16_MAX;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 886205863394LL;

    t14 = (x57%(x58*(x59!=x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -87;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -1968086;

    t15 = (x61%(x62*(x63!=x64)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 5U;
	static uint16_t x66 = 1U;
	static int32_t x67 = INT32_MIN;
	volatile int32_t t16 = -37154;

    t16 = (x65%(x66*(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x71 = -1999;
	uint16_t x72 = UINT16_MAX;
	volatile uint32_t t17 = 979U;

    t17 = (x69%(x70*(x71!=x72)));

    if (t17 != 80U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = INT16_MAX;
	static int64_t x76 = 669194944LL;

    t18 = (x73%(x74*(x75!=x76)));

    if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint16_t x77 = 2403U;
	int16_t x78 = INT16_MAX;
	static int64_t x79 = -19617447533LL;

    t19 = (x77%(x78*(x79!=x80)));

    if (t19 != 2403) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MAX;
	static int64_t x84 = -8099821733LL;
	volatile int64_t t20 = -756848401460235LL;

    t20 = (x81%(x82*(x83!=x84)));

    if (t20 != 4403LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = UINT16_MAX;
	uint8_t x86 = 55U;
	volatile int8_t x87 = INT8_MAX;
	int8_t x88 = INT8_MIN;

    t21 = (x85%(x86*(x87!=x88)));

    if (t21 != 30) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -14;
	volatile int8_t x90 = 19;
	volatile uint64_t x91 = 4272963116044319LLU;
	uint32_t x92 = 1801124950U;
	volatile int32_t t22 = 485802;

    t22 = (x89%(x90*(x91!=x92)));

    if (t22 != -14) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -136486913LL;
	int8_t x95 = INT8_MAX;
	int16_t x96 = -1;
	static int64_t t23 = 72974LL;

    t23 = (x93%(x94*(x95!=x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	uint32_t x98 = 22U;
	int8_t x99 = INT8_MIN;
	int16_t x100 = 1690;

    t24 = (x97%(x98*(x99!=x100)));

    if (t24 != -8LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x101 = -1;
	int16_t x102 = -1;
	static int64_t x103 = INT64_MAX;
	static volatile int32_t t25 = 1216672;

    t25 = (x101%(x102*(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	uint8_t x107 = 8U;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 16554331340431315LL;

    t26 = (x105%(x106*(x107!=x108)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	uint64_t x112 = 292488553983346LLU;

    t27 = (x109%(x110*(x111!=x112)));

    if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 4579804610531946544LLU;
	int8_t x114 = 1;
	volatile int16_t x115 = INT16_MIN;
	uint64_t t28 = 4601LLU;

    t28 = (x113%(x114*(x115!=x116)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	volatile int32_t x118 = -115;
	static volatile int8_t x119 = INT8_MIN;
	volatile int16_t x120 = -1;

    t29 = (x117%(x118*(x119!=x120)));

    if (t29 != 25) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	volatile int32_t x122 = INT32_MIN;
	int32_t x124 = -1;

    t30 = (x121%(x122*(x123!=x124)));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -1;
	volatile uint64_t x130 = 3161293213LLU;
	static uint8_t x132 = 97U;
	uint64_t t31 = 124854059LLU;

    t31 = (x129%(x130*(x131!=x132)));

    if (t31 != 2275374181LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -3271657;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = -90;
	int32_t t32 = 467157746;

    t32 = (x133%(x134*(x135!=x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x137 = 443886791707LLU;
	int8_t x138 = -11;
	int8_t x139 = 0;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t33 = 111908LLU;

    t33 = (x137%(x138*(x139!=x140)));

    if (t33 != 443886791707LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = 47813817016LLU;
	int8_t x144 = -1;

    t34 = (x141%(x142*(x143!=x144)));

    if (t34 != 408617440LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 10282U;
	int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 2U;
	static uint32_t t35 = 83287332U;

    t35 = (x145%(x146*(x147!=x148)));

    if (t35 != 10282U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x149 = -4;
	int8_t x150 = -1;
	static volatile int64_t x151 = INT64_MAX;
	int64_t x152 = -1LL;
	int32_t t36 = -178335325;

    t36 = (x149%(x150*(x151!=x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x153 = 389361U;
	int64_t x154 = 1998458373LL;
	uint32_t x155 = 164U;
	int32_t x156 = 644734860;

    t37 = (x153%(x154*(x155!=x156)));

    if (t37 != 389361LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = 1613499380LL;
	int64_t x159 = 3154945222534279538LL;
	int8_t x160 = -2;
	volatile int64_t t38 = -257498LL;

    t38 = (x157%(x158*(x159!=x160)));

    if (t38 != 1613499380LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	volatile int16_t x162 = INT16_MIN;
	int8_t x163 = -2;
	uint8_t x164 = 6U;
	volatile uint32_t t39 = 60034U;

    t39 = (x161%(x162*(x163!=x164)));

    if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = 0;
	static int64_t x166 = INT64_MIN;
	int8_t x167 = -5;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t40 = -11030257233348725LL;

    t40 = (x165%(x166*(x167!=x168)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x169 = UINT16_MAX;
	int8_t x170 = 5;
	uint64_t x172 = 125LLU;
	int32_t t41 = -29;

    t41 = (x169%(x170*(x171!=x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = INT64_MIN;
	uint8_t x174 = UINT8_MAX;
	uint8_t x175 = 52U;
	int32_t x176 = -9499853;

    t42 = (x173%(x174*(x175!=x176)));

    if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x177 = INT32_MIN;
	int16_t x178 = 1117;
	volatile uint8_t x180 = 26U;
	int32_t t43 = 511869581;

    t43 = (x177%(x178*(x179!=x180)));

    if (t43 != -883) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = -1;
	int64_t x182 = INT64_MIN;
	volatile int8_t x183 = INT8_MAX;
	static uint64_t x184 = UINT64_MAX;
	volatile int64_t t44 = 1133704783600LL;

    t44 = (x181%(x182*(x183!=x184)));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x185 = INT16_MIN;
	volatile uint64_t x186 = 16668226LLU;
	int64_t x187 = -302102LL;
	static int8_t x188 = -1;
	uint64_t t45 = 5945257318973435LLU;

    t45 = (x185%(x186*(x187!=x188)));

    if (t45 != 8631306LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MAX;
	int16_t x190 = -3736;
	int16_t x191 = -7738;

    t46 = (x189%(x190*(x191!=x192)));

    if (t46 != 959) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x193 = -1LL;
	static uint32_t x194 = UINT32_MAX;
	uint8_t x195 = 1U;
	uint8_t x196 = 10U;
	static volatile int64_t t47 = -8542563291681507LL;

    t47 = (x193%(x194*(x195!=x196)));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MIN;
	uint64_t x198 = 5595177022261LLU;
	int8_t x199 = INT8_MIN;
	int32_t x200 = 38699;
	static volatile uint64_t t48 = 20842770813627537LLU;

    t48 = (x197%(x198*(x199!=x200)));

    if (t48 != 4949017227948LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x202 = 1U;
	static volatile int64_t x203 = -1LL;
	uint8_t x204 = UINT8_MAX;

    t49 = (x201%(x202*(x203!=x204)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MAX;
	volatile int64_t x208 = INT64_MAX;

    t50 = (x205%(x206*(x207!=x208)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x209 = -12;
	volatile int16_t x210 = INT16_MIN;
	int8_t x211 = 34;
	uint16_t x212 = 3U;
	int32_t t51 = 5;

    t51 = (x209%(x210*(x211!=x212)));

    if (t51 != -12) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x213 = INT16_MIN;
	volatile uint8_t x214 = UINT8_MAX;
	static int32_t x215 = INT32_MIN;
	uint8_t x216 = 1U;

    t52 = (x213%(x214*(x215!=x216)));

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x221 = UINT8_MAX;
	int8_t x222 = 1;
	uint32_t x224 = 934714U;

    t53 = (x221%(x222*(x223!=x224)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = 5604;
	int8_t x226 = -1;
	uint16_t x227 = 281U;
	int64_t x228 = INT64_MIN;
	volatile int32_t t54 = -951;

    t54 = (x225%(x226*(x227!=x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x229 = 167400038585715LLU;
	static volatile int64_t x230 = -1LL;
	volatile uint32_t x231 = 624U;
	uint64_t x232 = UINT64_MAX;

    t55 = (x229%(x230*(x231!=x232)));

    if (t55 != 167400038585715LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	static uint8_t x234 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 5U;
	volatile int32_t t56 = 196567740;

    t56 = (x233%(x234*(x235!=x236)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x237 = INT16_MIN;
	uint16_t x239 = UINT16_MAX;
	int32_t t57 = -2;

    t57 = (x237%(x238*(x239!=x240)));

    if (t57 != -18) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x242 = UINT8_MAX;
	int16_t x243 = -1;

    t58 = (x241%(x242*(x243!=x244)));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x245 = INT32_MIN;
	static int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	int64_t x248 = INT64_MIN;
	static volatile int32_t t59 = 8450316;

    t59 = (x245%(x246*(x247!=x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = INT8_MAX;
	volatile int32_t x250 = -369;
	static int32_t t60 = -29168150;

    t60 = (x249%(x250*(x251!=x252)));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x254 = INT8_MIN;
	int8_t x255 = -1;
	uint8_t x256 = UINT8_MAX;

    t61 = (x253%(x254*(x255!=x256)));

    if (t61 != 14956U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x261 = 1;
	uint32_t x262 = UINT32_MAX;
	uint64_t x263 = 5982LLU;
	int16_t x264 = INT16_MIN;
	volatile uint32_t t62 = 1842120166U;

    t62 = (x261%(x262*(x263!=x264)));

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = -1;
	int8_t x266 = INT8_MAX;
	static volatile uint8_t x267 = 3U;
	uint16_t x268 = 43U;
	volatile int32_t t63 = -2184;

    t63 = (x265%(x266*(x267!=x268)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x269 = 0U;
	static uint64_t x272 = 4LLU;
	int64_t t64 = 71887LL;

    t64 = (x269%(x270*(x271!=x272)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x274 = 1575;
	uint32_t x275 = 16328U;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t65 = 382783170LLU;

    t65 = (x273%(x274*(x275!=x276)));

    if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MIN;
	int64_t x278 = 2265046LL;
	int64_t x279 = 613554820965366990LL;
	int64_t t66 = 5112095648234700LL;

    t66 = (x277%(x278*(x279!=x280)));

    if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = -1;
	int16_t x286 = -1;
	volatile uint64_t x287 = UINT64_MAX;
	volatile uint8_t x288 = 2U;
	volatile int32_t t67 = 104290;

    t67 = (x285%(x286*(x287!=x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -1LL;
	int16_t x291 = INT16_MIN;
	int16_t x292 = 0;
	volatile int64_t t68 = -1LL;

    t68 = (x289%(x290*(x291!=x292)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = -12;
	int64_t x298 = -1189103363767586280LL;
	uint64_t x299 = 31LLU;
	volatile int64_t t69 = -418085074738LL;

    t69 = (x297%(x298*(x299!=x300)));

    if (t69 != -12LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x301 = INT8_MAX;
	static uint64_t x302 = 1728930LLU;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MAX;
	uint64_t t70 = 51201LLU;

    t70 = (x301%(x302*(x303!=x304)));

    if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x305 = 2051432U;
	static int8_t x306 = INT8_MAX;
	volatile int16_t x308 = -1;
	volatile uint32_t t71 = 3659U;

    t71 = (x305%(x306*(x307!=x308)));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x309 = UINT64_MAX;
	int16_t x310 = -1;
	uint64_t x311 = 3466570437LLU;
	volatile int8_t x312 = INT8_MAX;

    t72 = (x309%(x310*(x311!=x312)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x313 = 10U;
	uint64_t x314 = 383071LLU;
	int16_t x315 = INT16_MIN;
	uint64_t t73 = 3339LLU;

    t73 = (x313%(x314*(x315!=x316)));

    if (t73 != 10LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x317 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t74 = -3857;

    t74 = (x317%(x318*(x319!=x320)));

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x321 = -14LL;
	int32_t x322 = -529529448;
	volatile uint16_t x323 = UINT16_MAX;
	int64_t t75 = 3347559LL;

    t75 = (x321%(x322*(x323!=x324)));

    if (t75 != -14LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = -1;
	int32_t x331 = INT32_MIN;
	volatile int8_t x332 = -1;
	volatile int32_t t76 = 9206120;

    t76 = (x329%(x330*(x331!=x332)));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x333 = 5;
	int64_t x334 = INT64_MIN;
	volatile int8_t x335 = INT8_MIN;
	volatile int8_t x336 = INT8_MAX;
	volatile int64_t t77 = -240037069040857835LL;

    t77 = (x333%(x334*(x335!=x336)));

    if (t77 != 5LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x337 = 0U;
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t78 = 124;

    t78 = (x337%(x338*(x339!=x340)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x342 = INT16_MIN;
	static int8_t x343 = -1;
	int64_t x344 = INT64_MAX;
	volatile int32_t t79 = -1204586;

    t79 = (x341%(x342*(x343!=x344)));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x345 = INT64_MIN;
	static uint16_t x346 = 32360U;
	static volatile int64_t x348 = -2717985LL;

    t80 = (x345%(x346*(x347!=x348)));

    if (t80 != -23448LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x349 = 89991LL;
	volatile uint16_t x350 = UINT16_MAX;
	int16_t x351 = 76;
	volatile int64_t t81 = -1704997LL;

    t81 = (x349%(x350*(x351!=x352)));

    if (t81 != 24456LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x353 = 94U;
	static int64_t x354 = INT64_MIN;
	int8_t x355 = 11;
	int32_t x356 = INT32_MAX;
	int64_t t82 = 153854729775LL;

    t82 = (x353%(x354*(x355!=x356)));

    if (t82 != 94LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x357 = INT8_MIN;
	int64_t x358 = -2771988LL;
	int64_t x360 = -1LL;
	static volatile int64_t t83 = 1268LL;

    t83 = (x357%(x358*(x359!=x360)));

    if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = -5001;
	int8_t x363 = INT8_MAX;
	static int32_t x364 = INT32_MAX;
	volatile int64_t t84 = -1017008238839481LL;

    t84 = (x361%(x362*(x363!=x364)));

    if (t84 != -5001LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x370 = INT16_MAX;
	static volatile int64_t x371 = 1236524517078LL;
	uint8_t x372 = 23U;
	volatile int64_t t85 = -119166668LL;

    t85 = (x369%(x370*(x371!=x372)));

    if (t85 != 7LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x373 = 1U;
	volatile int16_t x374 = -203;
	int16_t x375 = -14633;
	static volatile uint16_t x376 = 6399U;
	int32_t t86 = -85;

    t86 = (x373%(x374*(x375!=x376)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x381 = INT16_MIN;
	volatile uint16_t x382 = UINT16_MAX;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;

    t87 = (x381%(x382*(x383!=x384)));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x385 = 4U;
	int64_t x386 = INT64_MAX;
	uint8_t x387 = 33U;
	static int64_t x388 = INT64_MIN;
	int64_t t88 = 84267026LL;

    t88 = (x385%(x386*(x387!=x388)));

    if (t88 != 4LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	static uint8_t x392 = 1U;
	static volatile int32_t t89 = 95906;

    t89 = (x389%(x390*(x391!=x392)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x394 = INT64_MIN;
	int32_t x396 = -1;
	volatile int64_t t90 = -271479316589805LL;

    t90 = (x393%(x394*(x395!=x396)));

    if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x398 = 4749;
	volatile uint32_t x399 = 4053U;
	volatile int64_t x400 = INT64_MIN;
	int32_t t91 = -168438;

    t91 = (x397%(x398*(x399!=x400)));

    if (t91 != 28) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x409 = 2517168;
	int32_t x410 = 13;
	static uint16_t x411 = 1U;

    t92 = (x409%(x410*(x411!=x412)));

    if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x413 = INT64_MAX;
	int16_t x415 = INT16_MIN;
	volatile int32_t x416 = INT32_MIN;

    t93 = (x413%(x414*(x415!=x416)));

    if (t93 != 6119711LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = 1;
	uint8_t x419 = 0U;
	volatile int32_t t94 = -16439504;

    t94 = (x417%(x418*(x419!=x420)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x422 = UINT8_MAX;
	uint64_t x424 = 1LLU;
	volatile int32_t t95 = -216139;

    t95 = (x421%(x422*(x423!=x424)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x425 = 29U;
	uint16_t x426 = 50U;
	static uint16_t x428 = 727U;
	volatile int32_t t96 = -1010555924;

    t96 = (x425%(x426*(x427!=x428)));

    if (t96 != 29) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x429 = 181165268U;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 7539U;
	uint8_t x432 = UINT8_MAX;

    t97 = (x429%(x430*(x431!=x432)));

    if (t97 != 181165268U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x433 = 17U;
	int8_t x435 = -27;
	volatile int16_t x436 = INT16_MIN;
	volatile uint32_t t98 = 87155U;

    t98 = (x433%(x434*(x435!=x436)));

    if (t98 != 17U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = -1;
	volatile int8_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t99 = 64203766;

    t99 = (x437%(x438*(x439!=x440)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x441 = INT32_MAX;
	int64_t x443 = INT64_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t100 = 10;

    t100 = (x441%(x442*(x443!=x444)));

    if (t100 != 34763429) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x447 = INT8_MIN;
	uint64_t t101 = 87195542LLU;

    t101 = (x445%(x446*(x447!=x448)));

    if (t101 != 48363948807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x449 = 1U;
	int8_t x450 = -1;
	int8_t x451 = 2;
	int8_t x452 = -15;
	volatile int32_t t102 = 393;

    t102 = (x449%(x450*(x451!=x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x453 = 112U;
	int64_t x454 = 1432LL;
	int32_t x455 = INT32_MIN;
	int64_t x456 = 6317651386LL;
	volatile int64_t t103 = 471741754133LL;

    t103 = (x453%(x454*(x455!=x456)));

    if (t103 != 112LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x457 = UINT32_MAX;
	int64_t x458 = INT64_MIN;
	int64_t x459 = -1LL;
	static uint16_t x460 = 32U;
	volatile int64_t t104 = 3750423487860441LL;

    t104 = (x457%(x458*(x459!=x460)));

    if (t104 != 4294967295LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x461 = 1033;
	int16_t x464 = -31;
	uint32_t t105 = 41695178U;

    t105 = (x461%(x462*(x463!=x464)));

    if (t105 != 1033U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x465 = UINT64_MAX;
	volatile int8_t x467 = INT8_MIN;

    t106 = (x465%(x466*(x467!=x468)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x472 = -25;
	static int32_t t107 = 20;

    t107 = (x469%(x470*(x471!=x472)));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x477 = INT16_MAX;
	int16_t x478 = INT16_MIN;
	static volatile uint8_t x479 = 43U;
	uint8_t x480 = UINT8_MAX;

    t108 = (x477%(x478*(x479!=x480)));

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x481 = 10U;
	int32_t x482 = -1;
	volatile int32_t t109 = -1762041;

    t109 = (x481%(x482*(x483!=x484)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x486 = -1LL;
	uint32_t x487 = UINT32_MAX;
	int64_t x488 = INT64_MIN;

    t110 = (x485%(x486*(x487!=x488)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x489 = 1687U;
	int8_t x490 = 5;
	static int32_t t111 = 562348;

    t111 = (x489%(x490*(x491!=x492)));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x493 = 1741249832898879483LL;
	static int8_t x494 = INT8_MAX;
	int64_t x495 = -1LL;
	uint16_t x496 = UINT16_MAX;
	static volatile int64_t t112 = -4LL;

    t112 = (x493%(x494*(x495!=x496)));

    if (t112 != 7LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x497 = 14092630U;
	volatile uint16_t x498 = 28U;
	static volatile int32_t x499 = -1;
	uint8_t x500 = UINT8_MAX;

    t113 = (x497%(x498*(x499!=x500)));

    if (t113 != 6U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x501 = -1;
	int16_t x503 = 186;
	volatile int16_t x504 = INT16_MAX;
	uint64_t t114 = 316LLU;

    t114 = (x501%(x502*(x503!=x504)));

    if (t114 != 3354399LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x505 = UINT8_MAX;
	int32_t x506 = -1;
	int32_t t115 = 8;

    t115 = (x505%(x506*(x507!=x508)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x509 = 49LL;
	static uint8_t x510 = 6U;
	uint8_t x511 = UINT8_MAX;
	volatile int16_t x512 = INT16_MAX;
	int64_t t116 = -33109826LL;

    t116 = (x509%(x510*(x511!=x512)));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x513 = 20427U;
	int32_t x514 = 1701;
	int16_t x515 = INT16_MIN;
	static int8_t x516 = INT8_MIN;
	volatile int32_t t117 = -304;

    t117 = (x513%(x514*(x515!=x516)));

    if (t117 != 15) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x517 = 45U;
	volatile int64_t x518 = -1LL;
	int8_t x519 = -1;
	uint16_t x520 = 476U;
	volatile int64_t t118 = -37279203LL;

    t118 = (x517%(x518*(x519!=x520)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x521 = INT8_MAX;
	static uint64_t x522 = 13LLU;
	int8_t x523 = -1;
	uint16_t x524 = 12U;
	volatile uint64_t t119 = 42694371LLU;

    t119 = (x521%(x522*(x523!=x524)));

    if (t119 != 10LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x525 = INT32_MIN;
	volatile int8_t x526 = 2;
	uint16_t x527 = 180U;
	static int64_t x528 = 1LL;
	static int32_t t120 = 110665;

    t120 = (x525%(x526*(x527!=x528)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x529 = 2LL;
	static uint64_t x532 = UINT64_MAX;
	volatile int64_t t121 = 1827605757LL;

    t121 = (x529%(x530*(x531!=x532)));

    if (t121 != 2LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x533 = 12361026U;
	int16_t x535 = -1;
	int16_t x536 = -316;
	volatile int64_t t122 = -7600553LL;

    t122 = (x533%(x534*(x535!=x536)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x537 = -58;
	int8_t x538 = INT8_MAX;
	int32_t x539 = -1;
	volatile int8_t x540 = -22;
	static int32_t t123 = 490832;

    t123 = (x537%(x538*(x539!=x540)));

    if (t123 != -58) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MAX;
	static int8_t x543 = -1;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t124 = -638061370;

    t124 = (x541%(x542*(x543!=x544)));

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x545 = 14137188292330738LLU;
	int8_t x548 = -2;

    t125 = (x545%(x546*(x547!=x548)));

    if (t125 != 13LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x549 = INT64_MAX;
	volatile int8_t x550 = INT8_MAX;
	int16_t x551 = 2798;
	int16_t x552 = INT16_MIN;

    t126 = (x549%(x550*(x551!=x552)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x553 = INT16_MAX;
	volatile int8_t x554 = -1;
	int64_t x555 = 385934484514821175LL;
	volatile int32_t t127 = 1003;

    t127 = (x553%(x554*(x555!=x556)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x558 = INT16_MIN;
	uint32_t x559 = UINT32_MAX;
	int32_t x560 = 5;
	volatile int32_t t128 = 62884;

    t128 = (x557%(x558*(x559!=x560)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x561 = -1;
	int16_t x562 = INT16_MAX;
	int64_t x563 = INT64_MIN;
	uint32_t x564 = 444U;

    t129 = (x561%(x562*(x563!=x564)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x565 = -1;
	uint8_t x566 = UINT8_MAX;
	uint8_t x567 = UINT8_MAX;
	int32_t x568 = INT32_MAX;
	volatile int32_t t130 = 0;

    t130 = (x565%(x566*(x567!=x568)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x569 = UINT64_MAX;
	int8_t x570 = 3;
	int8_t x572 = INT8_MIN;
	volatile uint64_t t131 = 126LLU;

    t131 = (x569%(x570*(x571!=x572)));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MAX;
	volatile int64_t t132 = 0LL;

    t132 = (x573%(x574*(x575!=x576)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x582 = 971U;
	volatile int64_t x583 = INT64_MIN;
	int32_t x584 = 689214294;

    t133 = (x581%(x582*(x583!=x584)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x585 = INT16_MAX;
	int64_t x586 = -266908507387163172LL;
	static uint64_t x588 = 29228LLU;
	int64_t t134 = -429725257858570024LL;

    t134 = (x585%(x586*(x587!=x588)));

    if (t134 != 32767LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x591 = -1;
	static uint16_t x592 = 162U;

    t135 = (x589%(x590*(x591!=x592)));

    if (t135 != 1010) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x593 = UINT32_MAX;
	uint8_t x594 = 28U;
	uint16_t x595 = UINT16_MAX;
	uint16_t x596 = 0U;
	static uint32_t t136 = 692402554U;

    t136 = (x593%(x594*(x595!=x596)));

    if (t136 != 3U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x601 = 45U;
	volatile int32_t x602 = -6;
	uint8_t x603 = UINT8_MAX;

    t137 = (x601%(x602*(x603!=x604)));

    if (t137 != 3) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x609 = INT16_MIN;
	volatile int32_t x610 = 93877548;
	volatile int32_t x611 = -16915380;
	uint32_t x612 = UINT32_MAX;

    t138 = (x609%(x610*(x611!=x612)));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x613 = 7911801753507LL;
	uint16_t x615 = 399U;
	static uint8_t x616 = UINT8_MAX;
	int64_t t139 = -803314743127538176LL;

    t139 = (x613%(x614*(x615!=x616)));

    if (t139 != 11322LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x618 = INT16_MAX;
	static volatile uint32_t x619 = 1U;
	int64_t x620 = -1LL;

    t140 = (x617%(x618*(x619!=x620)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x621 = 0U;
	int64_t x622 = INT64_MIN;
	volatile int8_t x624 = INT8_MIN;

    t141 = (x621%(x622*(x623!=x624)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x625 = 169U;
	int8_t x626 = 1;
	static volatile int32_t x627 = -2;
	static uint32_t t142 = 154718U;

    t142 = (x625%(x626*(x627!=x628)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x629 = -1;
	int64_t x630 = -1LL;
	static uint16_t x631 = 6U;
	int16_t x632 = INT16_MIN;
	volatile int64_t t143 = 129294733LL;

    t143 = (x629%(x630*(x631!=x632)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x633 = INT64_MAX;
	int16_t x635 = INT16_MAX;
	volatile int64_t x636 = INT64_MAX;
	volatile int64_t t144 = 2835262505296008LL;

    t144 = (x633%(x634*(x635!=x636)));

    if (t144 != 7LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x637 = INT8_MIN;
	static uint16_t x640 = 8381U;

    t145 = (x637%(x638*(x639!=x640)));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x641 = -38938;
	uint8_t x643 = 105U;
	volatile int8_t x644 = 14;

    t146 = (x641%(x642*(x643!=x644)));

    if (t146 != 3082722LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x645 = -129234341133123622LL;
	int32_t x646 = INT32_MIN;
	static int8_t x648 = INT8_MIN;
	volatile int64_t t147 = 89784018811728284LL;

    t147 = (x645%(x646*(x647!=x648)));

    if (t147 != -1409646630LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x649 = -1;
	int32_t x650 = INT32_MAX;
	int8_t x652 = -1;
	static volatile int32_t t148 = 184;

    t148 = (x649%(x650*(x651!=x652)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x653 = 90304347U;
	uint32_t x655 = UINT32_MAX;
	int64_t x656 = INT64_MAX;

    t149 = (x653%(x654*(x655!=x656)));

    if (t149 != 3485342U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x657 = INT16_MIN;
	uint32_t x658 = 4087078U;
	static uint8_t x660 = 23U;

    t150 = (x657%(x658*(x659!=x660)));

    if (t150 != 3502628U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x661 = 4U;
	int8_t x662 = -1;
	static int64_t x663 = -1LL;
	volatile int16_t x664 = INT16_MIN;
	volatile int32_t t151 = -7658247;

    t151 = (x661%(x662*(x663!=x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x665 = 25047U;
	volatile int32_t x666 = -464;
	static volatile int64_t x667 = INT64_MAX;
	static volatile uint8_t x668 = UINT8_MAX;
	volatile int32_t t152 = 182576446;

    t152 = (x665%(x666*(x667!=x668)));

    if (t152 != 455) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x669 = 7U;
	uint16_t x670 = 2U;

    t153 = (x669%(x670*(x671!=x672)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x673 = UINT64_MAX;
	static int32_t x674 = 920458;
	int64_t x675 = INT64_MIN;
	static uint16_t x676 = UINT16_MAX;

    t154 = (x673%(x674*(x675!=x676)));

    if (t154 != 702101LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x679 = -109207556LL;
	int64_t x680 = 84625684325017LL;
	volatile int32_t t155 = -464;

    t155 = (x677%(x678*(x679!=x680)));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x682 = -440;
	int32_t x683 = 48685;
	static int8_t x684 = INT8_MIN;
	int32_t t156 = -213002;

    t156 = (x681%(x682*(x683!=x684)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x685 = -22LL;
	static int8_t x686 = INT8_MAX;
	static volatile uint64_t x687 = 15LLU;
	int8_t x688 = -1;

    t157 = (x685%(x686*(x687!=x688)));

    if (t157 != -22LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x695 = -127;
	static volatile int32_t t158 = 8;

    t158 = (x693%(x694*(x695!=x696)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x701 = -1;
	int16_t x702 = INT16_MIN;
	uint8_t x704 = 1U;
	static volatile int32_t t159 = -26927;

    t159 = (x701%(x702*(x703!=x704)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = INT16_MIN;
	uint64_t x706 = UINT64_MAX;
	int8_t x707 = INT8_MIN;
	volatile uint64_t t160 = 715549862814552665LLU;

    t160 = (x705%(x706*(x707!=x708)));

    if (t160 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x709 = 6837512U;
	static int16_t x711 = INT16_MAX;
	int32_t x712 = 189;
	volatile uint32_t t161 = 384936U;

    t161 = (x709%(x710*(x711!=x712)));

    if (t161 != 6837512U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x713 = -1;
	uint8_t x714 = 46U;
	static int32_t x715 = -1;
	int8_t x716 = INT8_MIN;
	volatile int32_t t162 = 27;

    t162 = (x713%(x714*(x715!=x716)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x717 = INT8_MAX;
	int8_t x718 = INT8_MIN;
	int64_t x719 = -1LL;
	static uint16_t x720 = 5U;

    t163 = (x717%(x718*(x719!=x720)));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x721 = INT8_MAX;
	uint16_t x722 = 2U;
	uint32_t x723 = UINT32_MAX;
	int8_t x724 = INT8_MAX;
	volatile int32_t t164 = 90056556;

    t164 = (x721%(x722*(x723!=x724)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x725 = UINT8_MAX;
	int8_t x726 = 4;
	uint64_t x727 = UINT64_MAX;
	uint32_t x728 = 13606U;
	volatile int32_t t165 = 821945269;

    t165 = (x725%(x726*(x727!=x728)));

    if (t165 != 3) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x734 = INT8_MAX;
	volatile uint32_t x735 = UINT32_MAX;
	volatile uint16_t x736 = 20392U;
	volatile int64_t t166 = -244198345486392LL;

    t166 = (x733%(x734*(x735!=x736)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x739 = 0;
	volatile int64_t t167 = 374768344449LL;

    t167 = (x737%(x738*(x739!=x740)));

    if (t167 != -32768LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x741 = INT32_MIN;
	volatile int8_t x743 = 28;
	static uint32_t x744 = 166527U;
	volatile int64_t t168 = -7797546LL;

    t168 = (x741%(x742*(x743!=x744)));

    if (t168 != -68987LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x745 = 42U;
	uint32_t x746 = 190U;
	uint32_t x747 = 89U;
	uint32_t x748 = UINT32_MAX;
	static volatile uint32_t t169 = 13559438U;

    t169 = (x745%(x746*(x747!=x748)));

    if (t169 != 42U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x749 = 0U;
	static int16_t x750 = INT16_MIN;
	static int16_t x751 = 43;
	static int32_t x752 = 1;
	int32_t t170 = 6;

    t170 = (x749%(x750*(x751!=x752)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x754 = INT16_MAX;
	int64_t x755 = INT64_MIN;
	static int32_t t171 = 486363;

    t171 = (x753%(x754*(x755!=x756)));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x757 = -1;
	static int16_t x758 = INT16_MIN;
	int64_t x759 = -1LL;
	int16_t x760 = INT16_MIN;
	int32_t t172 = 327688058;

    t172 = (x757%(x758*(x759!=x760)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x761 = 22778U;
	uint64_t x762 = 7817737LLU;
	int8_t x763 = INT8_MIN;
	int32_t x764 = 62147;

    t173 = (x761%(x762*(x763!=x764)));

    if (t173 != 22778LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x765 = INT16_MIN;

    t174 = (x765%(x766*(x767!=x768)));

    if (t174 != 63127492607138LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x769 = 28U;
	volatile uint8_t x770 = UINT8_MAX;
	int8_t x771 = INT8_MIN;
	int8_t x772 = 13;
	int32_t t175 = 22509155;

    t175 = (x769%(x770*(x771!=x772)));

    if (t175 != 28) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x773 = INT8_MIN;
	uint64_t x774 = UINT64_MAX;
	int32_t x775 = -1;
	static volatile uint16_t x776 = UINT16_MAX;
	uint64_t t176 = 185871681LLU;

    t176 = (x773%(x774*(x775!=x776)));

    if (t176 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x777 = 210U;
	volatile int64_t x778 = INT64_MIN;
	int64_t x779 = INT64_MIN;
	volatile int32_t x780 = INT32_MIN;
	int64_t t177 = 38489909239634LL;

    t177 = (x777%(x778*(x779!=x780)));

    if (t177 != 210LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x781 = UINT32_MAX;
	static int64_t x782 = -1LL;
	uint8_t x784 = UINT8_MAX;
	int64_t t178 = -1017153618380261745LL;

    t178 = (x781%(x782*(x783!=x784)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x789 = 65508LLU;
	int8_t x791 = INT8_MAX;

    t179 = (x789%(x790*(x791!=x792)));

    if (t179 != 48LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x795 = -1LL;
	int64_t x796 = 1567233LL;
	volatile int32_t t180 = -46256;

    t180 = (x793%(x794*(x795!=x796)));

    if (t180 != -788) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x797 = INT16_MIN;
	uint16_t x798 = UINT16_MAX;
	int16_t x799 = INT16_MIN;
	volatile int64_t x800 = -1LL;
	volatile int32_t t181 = 415;

    t181 = (x797%(x798*(x799!=x800)));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x801 = -7;
	static int8_t x802 = INT8_MIN;
	uint8_t x803 = UINT8_MAX;
	int8_t x804 = INT8_MIN;
	volatile int32_t t182 = 70739;

    t182 = (x801%(x802*(x803!=x804)));

    if (t182 != -7) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x805 = -1;
	int8_t x806 = INT8_MIN;
	int8_t x807 = INT8_MAX;
	volatile int32_t t183 = 291842;

    t183 = (x805%(x806*(x807!=x808)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x809 = -1LL;
	int16_t x810 = INT16_MIN;
	uint8_t x811 = 51U;
	int64_t t184 = -1751183341231LL;

    t184 = (x809%(x810*(x811!=x812)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x813 = 1;
	int8_t x814 = INT8_MAX;
	int32_t x815 = INT32_MIN;
	uint64_t x816 = 128648517663LLU;
	volatile int32_t t185 = -104;

    t185 = (x813%(x814*(x815!=x816)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x817 = 1;
	uint64_t x818 = 1649746513753696586LLU;
	static int8_t x820 = 0;

    t186 = (x817%(x818*(x819!=x820)));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x821 = 4U;
	int64_t x822 = INT64_MAX;
	static uint32_t x824 = UINT32_MAX;
	int64_t t187 = 4565489809031569513LL;

    t187 = (x821%(x822*(x823!=x824)));

    if (t187 != 4LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x829 = INT16_MIN;
	uint16_t x830 = UINT16_MAX;
	volatile int8_t x831 = -1;
	int8_t x832 = INT8_MAX;

    t188 = (x829%(x830*(x831!=x832)));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x833 = INT64_MAX;
	uint64_t x834 = 490LLU;
	static int16_t x835 = INT16_MIN;
	uint16_t x836 = UINT16_MAX;
	static uint64_t t189 = 16242656226LLU;

    t189 = (x833%(x834*(x835!=x836)));

    if (t189 != 147LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x838 = 6U;
	volatile int16_t x839 = 689;
	uint32_t x840 = 703753482U;
	uint32_t t190 = 29524U;

    t190 = (x837%(x838*(x839!=x840)));

    if (t190 != 5U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x842 = 117U;
	uint64_t x843 = 210732722471LLU;
	uint32_t t191 = 25815280U;

    t191 = (x841%(x842*(x843!=x844)));

    if (t191 != 83U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x846 = 5U;
	int16_t x847 = -2537;
	static int8_t x848 = INT8_MIN;
	uint32_t t192 = 8567U;

    t192 = (x845%(x846*(x847!=x848)));

    if (t192 != 4U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x849 = -105405149;
	static int16_t x850 = 5;
	volatile int8_t x851 = -1;
	static uint32_t x852 = 9317U;

    t193 = (x849%(x850*(x851!=x852)));

    if (t193 != -4) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x853 = INT64_MIN;
	static int64_t x854 = -1LL;
	static int64_t x855 = INT64_MIN;
	int64_t x856 = -69983893296198LL;
	int64_t t194 = -3735160LL;

    t194 = (x853%(x854*(x855!=x856)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x857 = INT16_MIN;
	volatile int16_t x858 = INT16_MIN;
	volatile int8_t x860 = INT8_MIN;

    t195 = (x857%(x858*(x859!=x860)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x861 = INT8_MAX;
	int16_t x864 = -1;
	int32_t t196 = 11343883;

    t196 = (x861%(x862*(x863!=x864)));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x865 = UINT16_MAX;
	int8_t x866 = 1;
	int8_t x867 = 3;
	int8_t x868 = -1;

    t197 = (x865%(x866*(x867!=x868)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x869 = -1LL;
	static int16_t x870 = -10;
	int32_t x871 = INT32_MAX;
	static int8_t x872 = 9;
	volatile int64_t t198 = -3799793558553LL;

    t198 = (x869%(x870*(x871!=x872)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x873 = INT32_MAX;
	int32_t x875 = INT32_MIN;
	int8_t x876 = INT8_MAX;
	static volatile uint32_t t199 = 827207629U;

    t199 = (x873%(x874*(x875!=x876)));

    if (t199 != 1867339U) { NG(); } else { ; }
	
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

