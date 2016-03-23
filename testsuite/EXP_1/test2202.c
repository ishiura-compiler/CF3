
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

static uint32_t t1 = 5435022U;
int8_t x10 = INT8_MIN;
volatile uint32_t t2 = 4465U;
volatile int32_t x16 = 18350112;
volatile int8_t x17 = 0;
uint8_t x21 = UINT8_MAX;
volatile int32_t x30 = 7;
static uint16_t x35 = UINT16_MAX;
uint64_t x45 = 21112786588LLU;
int8_t x51 = -1;
int32_t x52 = INT32_MIN;
volatile uint8_t x53 = UINT8_MAX;
volatile uint64_t t14 = 238693629LLU;
volatile int8_t x62 = INT8_MIN;
uint32_t x67 = 1021U;
int64_t t16 = 1312616290617LL;
volatile int8_t x73 = 14;
int32_t x85 = INT32_MIN;
int16_t x86 = INT16_MIN;
volatile int64_t x87 = -1LL;
static volatile int32_t x92 = INT32_MIN;
volatile int64_t x96 = -13430LL;
volatile int8_t x101 = -1;
volatile int64_t x104 = INT64_MAX;
uint8_t x113 = 99U;
int64_t x119 = INT64_MIN;
uint16_t x124 = 1464U;
uint8_t x127 = 5U;
static volatile int64_t t32 = 2528527250317420LL;
int16_t x139 = INT16_MIN;
uint64_t t33 = 35600028026LLU;
volatile uint64_t x152 = 20467158177LLU;
int32_t x154 = -1;
volatile uint64_t t36 = 14313LLU;
static int16_t x171 = 949;
volatile int16_t x180 = INT16_MAX;
static uint32_t x183 = UINT32_MAX;
int32_t t44 = -674453624;
int32_t x193 = INT32_MIN;
int64_t t46 = -96884721326894LL;
volatile uint64_t t47 = 11989188LLU;
int64_t x201 = 631072LL;
int8_t x203 = INT8_MIN;
uint32_t x204 = 2286U;
static int64_t x213 = 489LL;
volatile int32_t x217 = -1;
volatile uint64_t t52 = 374786190931017840LLU;
int16_t x225 = -1;
int8_t x228 = -5;
int64_t x230 = -1LL;
int64_t t54 = 3311778172LL;
static volatile int64_t t55 = 1001LL;
int64_t x238 = 1885544498488LL;
int64_t x241 = -1LL;
volatile int64_t t57 = -557004727972850LL;
int32_t x250 = -53397;
volatile int32_t x255 = -23256;
int8_t x257 = INT8_MIN;
int8_t x264 = -1;
uint32_t x266 = 237U;
volatile int8_t x269 = -1;
static int16_t x272 = -1;
volatile int32_t t64 = 57688;
uint16_t x275 = 15U;
static uint64_t x276 = UINT64_MAX;
volatile uint8_t x277 = 101U;
int8_t x286 = -1;
uint32_t x288 = UINT32_MAX;
int8_t x289 = -1;
static int32_t x290 = 97;
int16_t x299 = -1;
int64_t x300 = -1LL;
int32_t x306 = INT32_MAX;
static volatile int64_t x309 = INT64_MAX;
volatile int64_t x315 = INT64_MIN;
volatile int32_t t76 = 50822276;
static int16_t x325 = INT16_MAX;
volatile int16_t x327 = -1;
int64_t x329 = -1LL;
volatile uint32_t x334 = 97038U;
volatile uint32_t t80 = 191U;
uint32_t x337 = 57938U;
int64_t x339 = INT64_MIN;
uint64_t t81 = 69175LLU;
static volatile uint32_t x341 = UINT32_MAX;
volatile int32_t t83 = 7668;
static int64_t x349 = INT64_MAX;
volatile uint8_t x351 = UINT8_MAX;
static volatile int8_t x356 = 1;
static int16_t x358 = -30;
uint8_t x360 = UINT8_MAX;
volatile uint32_t x365 = UINT32_MAX;
int64_t x368 = -1LL;
uint64_t x377 = 40493112865160LLU;
static int8_t x382 = INT8_MIN;
int8_t x391 = 6;
uint8_t x395 = UINT8_MAX;
volatile int64_t x407 = INT64_MIN;
int32_t x424 = -8335594;
int64_t x425 = INT64_MAX;
static volatile int64_t t102 = 2136154493360959LL;
uint32_t t104 = 423868174U;
uint32_t x441 = UINT32_MAX;
int64_t x444 = -1112771435LL;
int64_t x446 = 21038710858380275LL;
volatile int8_t x455 = INT8_MIN;
int64_t x457 = INT64_MAX;
int32_t x465 = INT32_MIN;
volatile uint32_t t112 = 70U;
volatile int64_t x470 = 2329221632386443LL;
static volatile uint64_t t113 = 203759095432LLU;
int32_t x475 = -172;
int16_t x484 = INT16_MAX;
volatile int8_t x485 = -1;
uint64_t x488 = UINT64_MAX;
volatile int32_t t117 = -339107809;
uint64_t x503 = UINT64_MAX;
volatile int32_t t121 = 693;
static int64_t x517 = -1LL;
int32_t x523 = -260925866;
int16_t x526 = -1376;
static int16_t x528 = -1;
int32_t t125 = 62;
uint32_t x534 = 945U;
static int32_t x535 = INT32_MIN;
int16_t x540 = INT16_MAX;
int16_t x541 = -1;
volatile int32_t x547 = INT32_MAX;
uint64_t x548 = UINT64_MAX;
static uint64_t x551 = 215363258454LLU;
uint64_t x554 = 68LLU;
uint64_t x558 = UINT64_MAX;
static uint64_t x559 = 347553LLU;
static int32_t x561 = INT32_MIN;
int64_t x567 = 59175621LL;
int64_t x572 = 897LL;
uint8_t x576 = UINT8_MAX;
int16_t x584 = -3;
int64_t x587 = INT64_MIN;
int32_t x593 = INT32_MIN;
uint32_t x596 = UINT32_MAX;
uint32_t t142 = 108374175U;
static int64_t x597 = INT64_MIN;
int32_t x599 = INT32_MIN;
int64_t t144 = -15432490316917326LL;
int32_t x610 = 54401557;
volatile uint64_t t146 = 2033LLU;
int16_t x627 = INT16_MAX;
int8_t x629 = INT8_MAX;
uint8_t x632 = 1U;
int32_t x636 = INT32_MAX;
uint8_t x640 = 5U;
volatile int64_t x643 = INT64_MAX;
uint16_t x648 = 1U;
static int32_t x661 = -132800199;
int16_t x663 = -11;
int32_t x664 = -1;
static int64_t t158 = 13LL;
uint8_t x667 = UINT8_MAX;
uint32_t t160 = 33416595U;
int8_t x701 = INT8_MIN;
volatile uint64_t t167 = 491502814LLU;
volatile int16_t x710 = -1;
int64_t x711 = INT64_MAX;
int32_t x714 = INT32_MIN;
int64_t x716 = -1LL;
static int32_t x720 = INT32_MIN;
int8_t x721 = -1;
int16_t x724 = -1;
int32_t x726 = INT32_MIN;
uint8_t x727 = UINT8_MAX;
int64_t x732 = -1LL;
uint16_t x739 = UINT16_MAX;
static volatile int64_t x741 = INT64_MAX;
int8_t x744 = 1;
int16_t x753 = INT16_MIN;
volatile int8_t x760 = -1;
volatile int8_t x763 = INT8_MIN;
static int64_t t181 = -348170501LL;
volatile int32_t x773 = -1;
volatile int32_t t184 = 897;
static volatile uint64_t x782 = UINT64_MAX;
volatile uint16_t x785 = 40U;
static int16_t x801 = INT16_MIN;
int32_t x803 = 1931;
volatile uint32_t t190 = 4U;
static uint64_t x818 = UINT64_MAX;
volatile int64_t x828 = -2005861517553534LL;
int32_t x832 = -885;
uint16_t x836 = 25U;
static int8_t x842 = -1;


void f0(void) {
    	static uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MIN;
	volatile int64_t x3 = INT64_MIN;
	volatile int16_t x4 = -1;
	volatile int64_t t0 = -1002LL;

    t0 = (((x1&x2)/x3)/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = 90625U;
	int8_t x8 = INT8_MAX;

    t1 = (((x5&x6)/x7)/x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 13040U;
	uint32_t x11 = 60U;
	int32_t x12 = INT32_MIN;

    t2 = (((x9&x10)/x11)/x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 11005U;
	int32_t x14 = INT32_MIN;
	static volatile int8_t x15 = -47;
	volatile uint32_t t3 = 6U;

    t3 = (((x13&x14)/x15)/x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x18 = UINT8_MAX;
	volatile int16_t x19 = 672;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -22283LL;

    t4 = (((x17&x18)/x19)/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = 46886865U;
	volatile uint32_t t5 = 25399U;

    t5 = (((x21&x22)/x23)/x24);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 121;
	volatile uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MAX;
	int64_t x28 = 34LL;
	volatile int64_t t6 = -14459115274067LL;

    t6 = (((x25&x26)/x27)/x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int32_t x31 = -1;
	int16_t x32 = -3743;
	volatile int32_t t7 = 695;

    t7 = (((x29&x30)/x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 23926LL;
	int64_t x34 = INT64_MIN;
	static volatile uint8_t x36 = UINT8_MAX;
	static int64_t t8 = -2509472LL;

    t8 = (((x33&x34)/x35)/x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MAX;
	uint64_t x39 = 861790792LLU;
	static volatile int32_t x40 = INT32_MAX;
	static volatile uint64_t t9 = 45LLU;

    t9 = (((x37&x38)/x39)/x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 7U;
	volatile int16_t x42 = INT16_MAX;
	int16_t x43 = 249;
	static int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = -89886664;

    t10 = (((x41&x42)/x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	volatile uint8_t x48 = 11U;
	uint64_t t11 = 17332687575662993LLU;

    t11 = (((x45&x46)/x47)/x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -185669827LL;
	uint64_t x50 = 3455756481765LLU;
	uint64_t t12 = 730LLU;

    t12 = (((x49&x50)/x51)/x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MIN;
	uint8_t x55 = 15U;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 39238315072593LLU;

    t13 = (((x53&x54)/x55)/x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 0;
	uint64_t x58 = 16167561149LLU;
	volatile int8_t x59 = 2;
	int16_t x60 = INT16_MAX;

    t14 = (((x57&x58)/x59)/x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	static int64_t x63 = INT64_MIN;
	uint16_t x64 = 26074U;
	int64_t t15 = -835LL;

    t15 = (((x61&x62)/x63)/x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	volatile uint8_t x66 = UINT8_MAX;
	int64_t x68 = INT64_MIN;

    t16 = (((x65&x66)/x67)/x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 390592944;
	int32_t x70 = INT32_MIN;
	int64_t x71 = 46LL;
	int8_t x72 = -1;
	volatile int64_t t17 = 13863LL;

    t17 = (((x69&x70)/x71)/x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	static int64_t x76 = INT64_MIN;
	static volatile int64_t t18 = 12471LL;

    t18 = (((x73&x74)/x75)/x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = 117295081213LL;
	volatile int64_t x78 = 754LL;
	uint16_t x79 = 931U;
	static int16_t x80 = INT16_MIN;
	int64_t t19 = -1901378286457LL;

    t19 = (((x77&x78)/x79)/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x88 = INT32_MIN;
	volatile int64_t t20 = 76638907LL;

    t20 = (((x85&x86)/x87)/x88);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = -1;
	int16_t x90 = -1;
	static int16_t x91 = INT16_MAX;
	int32_t t21 = 1;

    t21 = (((x89&x90)/x91)/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x93 = 3543349405879LL;
	static uint32_t x94 = 11U;
	int8_t x95 = -1;
	int64_t t22 = -8753373LL;

    t22 = (((x93&x94)/x95)/x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -2972887LL;
	volatile int32_t x98 = INT32_MAX;
	volatile int32_t x99 = INT32_MIN;
	uint32_t x100 = UINT32_MAX;
	volatile int64_t t23 = 3267261699376526LL;

    t23 = (((x97&x98)/x99)/x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x102 = INT16_MIN;
	int16_t x103 = 10079;
	int64_t t24 = -49584157300385LL;

    t24 = (((x101&x102)/x103)/x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = INT16_MAX;
	int16_t x106 = -1;
	uint64_t x107 = 2187149LLU;
	int16_t x108 = -1;
	volatile uint64_t t25 = 75LLU;

    t25 = (((x105&x106)/x107)/x108);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = -1;
	uint8_t x110 = 20U;
	int32_t x111 = 107447;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = 23;

    t26 = (((x109&x110)/x111)/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x114 = -63263LL;
	int64_t x115 = -19732368404LL;
	static uint8_t x116 = 1U;
	static int64_t t27 = -8496261792137LL;

    t27 = (((x113&x114)/x115)/x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = 14523;
	volatile int8_t x118 = 1;
	static int16_t x120 = INT16_MIN;
	static volatile int64_t t28 = -8089731006LL;

    t28 = (((x117&x118)/x119)/x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	uint8_t x123 = 2U;
	volatile int32_t t29 = 3;

    t29 = (((x121&x122)/x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x125 = 7U;
	int32_t x126 = 13417;
	int32_t x128 = -1;
	int32_t t30 = -1400;

    t30 = (((x125&x126)/x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -1;
	static uint64_t x130 = 38370801LLU;
	static int8_t x131 = INT8_MAX;
	int16_t x132 = -1;
	static volatile uint64_t t31 = 30296782LLU;

    t31 = (((x129&x130)/x131)/x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x133 = -320;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile uint8_t x136 = UINT8_MAX;

    t32 = (((x133&x134)/x135)/x136);

    if (t32 != -141843476153091LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = UINT64_MAX;
	int64_t x138 = -62519851LL;
	int8_t x140 = INT8_MIN;

    t33 = (((x137&x138)/x139)/x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = INT16_MAX;
	int8_t x146 = -1;
	volatile uint16_t x147 = 123U;
	uint32_t x148 = 10579593U;
	uint32_t t34 = 1081575U;

    t34 = (((x145&x146)/x147)/x148);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x149 = -1;
	static volatile uint32_t x150 = UINT32_MAX;
	uint32_t x151 = 22514085U;
	volatile uint64_t t35 = 541584869LLU;

    t35 = (((x149&x150)/x151)/x152);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MIN;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;

    t36 = (((x153&x154)/x155)/x156);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = 6798U;
	int16_t x158 = INT16_MAX;
	uint32_t x159 = 112756U;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t37 = -1LL;

    t37 = (((x157&x158)/x159)/x160);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x161 = 3U;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	int64_t x164 = -868192167LL;
	volatile uint64_t t38 = 46399252LLU;

    t38 = (((x161&x162)/x163)/x164);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = 35;
	int16_t x166 = -2;
	uint64_t x167 = 6611779993592LLU;
	int8_t x168 = -1;
	static volatile uint64_t t39 = 32125626LLU;

    t39 = (((x165&x166)/x167)/x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x169 = -2;
	int64_t x170 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	static int64_t t40 = -501839443894LL;

    t40 = (((x169&x170)/x171)/x172);

    if (t40 != -296610713284LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = INT64_MIN;
	uint8_t x174 = 4U;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MIN;
	volatile int64_t t41 = 3LL;

    t41 = (((x173&x174)/x175)/x176);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = INT8_MIN;
	static uint16_t x178 = 4003U;
	static int16_t x179 = -1;
	int32_t t42 = 164;

    t42 = (((x177&x178)/x179)/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MAX;
	uint16_t x182 = UINT16_MAX;
	int64_t x184 = -1LL;
	volatile int64_t t43 = -191494781LL;

    t43 = (((x181&x182)/x183)/x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = INT8_MAX;
	int8_t x186 = 0;
	int8_t x187 = INT8_MIN;
	int32_t x188 = -676;

    t44 = (((x185&x186)/x187)/x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = 3471495;
	int8_t x190 = INT8_MAX;
	static uint16_t x191 = 196U;
	static uint8_t x192 = UINT8_MAX;
	volatile int32_t t45 = 7194;

    t45 = (((x189&x190)/x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = UINT16_MAX;

    t46 = (((x193&x194)/x195)/x196);

    if (t46 != -258LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = 192653622240LLU;
	int32_t x198 = -59746;
	int8_t x199 = INT8_MIN;
	static int32_t x200 = INT32_MIN;

    t47 = (((x197&x198)/x199)/x200);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = INT64_MIN;
	static int64_t t48 = -24152608064097329LL;

    t48 = (((x201&x202)/x203)/x204);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = 45;
	int64_t x206 = INT64_MIN;
	static int16_t x207 = -1;
	volatile int32_t x208 = -1;
	volatile int64_t t49 = -63030778LL;

    t49 = (((x205&x206)/x207)/x208);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = INT32_MIN;
	uint16_t x210 = 2U;
	int8_t x211 = 7;
	uint8_t x212 = 9U;
	int32_t t50 = -315232702;

    t50 = (((x209&x210)/x211)/x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x214 = INT32_MIN;
	volatile int8_t x215 = INT8_MIN;
	static int32_t x216 = INT32_MIN;
	int64_t t51 = 120954482099517LL;

    t51 = (((x213&x214)/x215)/x216);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x218 = 575LLU;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;

    t52 = (((x217&x218)/x219)/x220);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x226 = 1U;
	volatile uint16_t x227 = 19U;
	volatile int32_t t53 = 17142748;

    t53 = (((x225&x226)/x227)/x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x229 = UINT16_MAX;
	static int16_t x231 = INT16_MIN;
	uint32_t x232 = 1289942U;

    t54 = (((x229&x230)/x231)/x232);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x233 = UINT8_MAX;
	static uint16_t x234 = 114U;
	static int64_t x235 = INT64_MAX;
	int32_t x236 = -86;

    t55 = (((x233&x234)/x235)/x236);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MAX;
	int16_t x239 = -1;
	int64_t x240 = 15247LL;
	int64_t t56 = -762782903240660620LL;

    t56 = (((x237&x238)/x239)/x240);

    if (t56 != -123666590LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 351U;

    t57 = (((x241&x242)/x243)/x244);

    if (t57 != -186LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x245 = INT16_MIN;
	uint16_t x246 = 0U;
	int64_t x247 = -1LL;
	uint16_t x248 = 366U;
	int64_t t58 = 90307309661947941LL;

    t58 = (((x245&x246)/x247)/x248);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = -1LL;
	int8_t x251 = -1;
	int64_t x252 = 483382LL;
	int64_t t59 = -2845LL;

    t59 = (((x249&x250)/x251)/x252);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = 27U;
	int8_t x254 = INT8_MAX;
	int32_t x256 = INT32_MAX;
	int32_t t60 = 26;

    t60 = (((x253&x254)/x255)/x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MAX;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t61 = -223;

    t61 = (((x257&x258)/x259)/x260);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	volatile int32_t x263 = INT32_MIN;
	int32_t t62 = 51902;

    t62 = (((x261&x262)/x263)/x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = -457;
	int16_t x267 = -1;
	int64_t x268 = -374480566688LL;
	volatile int64_t t63 = 0LL;

    t63 = (((x265&x266)/x267)/x268);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x270 = -6;
	uint16_t x271 = UINT16_MAX;

    t64 = (((x269&x270)/x271)/x272);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = INT8_MAX;
	volatile uint64_t x274 = 2050913622268787LLU;
	volatile uint64_t t65 = 141LLU;

    t65 = (((x273&x274)/x275)/x276);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x278 = UINT8_MAX;
	volatile int32_t x279 = INT32_MIN;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t66 = 2888526;

    t66 = (((x277&x278)/x279)/x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x281 = 72122117U;
	uint32_t x282 = 12096762U;
	int64_t x283 = -1LL;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t67 = -1134973680692000LL;

    t67 = (((x281&x282)/x283)/x284);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x285 = INT16_MIN;
	static volatile int16_t x287 = 1377;
	volatile uint32_t t68 = 1822680455U;

    t68 = (((x285&x286)/x287)/x288);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x291 = 7027173541LLU;
	int8_t x292 = INT8_MIN;
	uint64_t t69 = 4654297241276066LLU;

    t69 = (((x289&x290)/x291)/x292);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x293 = 42U;
	uint64_t x294 = UINT64_MAX;
	uint64_t x295 = UINT64_MAX;
	uint32_t x296 = UINT32_MAX;
	uint64_t t70 = 17423209554597LLU;

    t70 = (((x293&x294)/x295)/x296);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x298 = -53;
	volatile int64_t t71 = 33039004647LL;

    t71 = (((x297&x298)/x299)/x300);

    if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = -1;
	static int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = 29326985238LLU;
	uint64_t t72 = 599761LLU;

    t72 = (((x301&x302)/x303)/x304);

    if (t72 != 629002399LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x305 = 6U;
	uint64_t x307 = UINT64_MAX;
	static volatile int64_t x308 = INT64_MIN;
	static volatile uint64_t t73 = 2338129381904734549LLU;

    t73 = (((x305&x306)/x307)/x308);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x310 = 8391U;
	int64_t x311 = INT64_MAX;
	static int8_t x312 = -1;
	int64_t t74 = -331998LL;

    t74 = (((x309&x310)/x311)/x312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = 1086388169935LL;
	uint8_t x314 = 90U;
	uint64_t x316 = 1066109999797LLU;
	uint64_t t75 = 1592137428303473636LLU;

    t75 = (((x313&x314)/x315)/x316);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	int8_t x318 = -22;
	static int32_t x319 = -1;
	volatile int16_t x320 = -1;

    t76 = (((x317&x318)/x319)/x320);

    if (t76 != -22) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x321 = INT8_MIN;
	int32_t x322 = 1334;
	volatile int64_t x323 = 855054LL;
	int64_t x324 = INT64_MIN;
	int64_t t77 = -115274512408821LL;

    t77 = (((x321&x322)/x323)/x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x326 = INT16_MAX;
	static int64_t x328 = -1LL;
	volatile int64_t t78 = -2LL;

    t78 = (((x325&x326)/x327)/x328);

    if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x330 = INT8_MAX;
	int32_t x331 = -1;
	int32_t x332 = INT32_MIN;
	int64_t t79 = 1544368115LL;

    t79 = (((x329&x330)/x331)/x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x333 = INT8_MIN;
	uint32_t x335 = 1778204U;
	uint8_t x336 = 2U;

    t80 = (((x333&x334)/x335)/x336);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x338 = 143959398449452LLU;
	uint32_t x340 = 63269U;

    t81 = (((x337&x338)/x339)/x340);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x342 = 3U;
	volatile int32_t x343 = 8886;
	uint64_t x344 = UINT64_MAX;
	uint64_t t82 = 0LLU;

    t82 = (((x341&x342)/x343)/x344);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -5;
	static uint8_t x348 = UINT8_MAX;

    t83 = (((x345&x346)/x347)/x348);

    if (t83 != 1684300) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x350 = INT32_MIN;
	uint32_t x352 = 4U;
	volatile int64_t t84 = -15269LL;

    t84 = (((x349&x350)/x351)/x352);

    if (t84 != 9042521602654208LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = 102586647;
	int8_t x354 = 11;
	int32_t x355 = -1;
	volatile int32_t t85 = 1;

    t85 = (((x353&x354)/x355)/x356);

    if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x357 = 15U;
	volatile int16_t x359 = 52;
	volatile int32_t t86 = -31547;

    t86 = (((x357&x358)/x359)/x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x366 = UINT32_MAX;
	volatile int64_t x367 = INT64_MIN;
	static int64_t t87 = 55LL;

    t87 = (((x365&x366)/x367)/x368);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x369 = 5;
	uint32_t x370 = 2U;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	static int64_t t88 = -637978029776873LL;

    t88 = (((x369&x370)/x371)/x372);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x373 = INT32_MAX;
	uint8_t x374 = 38U;
	uint16_t x375 = UINT16_MAX;
	int64_t x376 = -1LL;
	int64_t t89 = 30020806LL;

    t89 = (((x373&x374)/x375)/x376);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x378 = 15;
	volatile uint32_t x379 = 30301U;
	uint16_t x380 = 2U;
	volatile uint64_t t90 = 11487768LLU;

    t90 = (((x377&x378)/x379)/x380);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x381 = INT64_MAX;
	int64_t x383 = INT64_MAX;
	int8_t x384 = INT8_MAX;
	volatile int64_t t91 = 1LL;

    t91 = (((x381&x382)/x383)/x384);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x385 = UINT64_MAX;
	static uint64_t x386 = 2094316933369575800LLU;
	int64_t x387 = -1LL;
	int16_t x388 = INT16_MIN;
	uint64_t t92 = 3369764285013LLU;

    t92 = (((x385&x386)/x387)/x388);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MAX;
	volatile uint32_t x392 = UINT32_MAX;
	uint32_t t93 = 12322984U;

    t93 = (((x389&x390)/x391)/x392);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x393 = 913731734LL;
	uint64_t x394 = 3314LLU;
	int8_t x396 = 3;
	volatile uint64_t t94 = 217047760425LLU;

    t94 = (((x393&x394)/x395)/x396);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = -1010LL;
	int16_t x398 = -66;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int64_t t95 = -104169950429753LL;

    t95 = (((x397&x398)/x399)/x400);

    if (t95 != -7LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x401 = INT16_MIN;
	volatile int16_t x402 = 4;
	volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = 44U;
	static volatile int32_t t96 = 0;

    t96 = (((x401&x402)/x403)/x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x405 = -21LL;
	int32_t x406 = -1;
	volatile uint8_t x408 = 47U;
	volatile int64_t t97 = 6911553885995LL;

    t97 = (((x405&x406)/x407)/x408);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MIN;
	static int64_t x410 = INT64_MIN;
	static uint8_t x411 = 13U;
	static volatile uint64_t x412 = 4215227512180LLU;
	volatile uint64_t t98 = 31547LLU;

    t98 = (((x409&x410)/x411)/x412);

    if (t98 != 4207899LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x413 = 14632262U;
	int32_t x414 = 8626;
	volatile uint64_t x415 = 89539106LLU;
	int16_t x416 = INT16_MAX;
	volatile uint64_t t99 = 21684951LLU;

    t99 = (((x413&x414)/x415)/x416);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x417 = -1LL;
	int8_t x418 = INT8_MAX;
	int32_t x419 = -32989370;
	int16_t x420 = INT16_MIN;
	volatile int64_t t100 = -94LL;

    t100 = (((x417&x418)/x419)/x420);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MAX;
	volatile uint8_t x423 = 20U;
	int64_t t101 = -1LL;

    t101 = (((x421&x422)/x423)/x424);

    if (t101 != -55325223594LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x426 = 702867355U;
	int16_t x427 = -1;
	int8_t x428 = -3;

    t102 = (((x425&x426)/x427)/x428);

    if (t102 != 234289118LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = INT16_MAX;
	uint64_t x430 = 57667LLU;
	uint8_t x431 = UINT8_MAX;
	volatile uint64_t x432 = UINT64_MAX;
	volatile uint64_t t103 = 95992700401808LLU;

    t103 = (((x429&x430)/x431)/x432);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x433 = 507;
	static uint16_t x434 = 0U;
	volatile uint32_t x435 = 3149633U;
	static int8_t x436 = INT8_MIN;

    t104 = (((x433&x434)/x435)/x436);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = INT16_MAX;
	static volatile uint32_t x438 = UINT32_MAX;
	uint64_t x439 = 100870567324LLU;
	int32_t x440 = -570748;
	volatile uint64_t t105 = 1421436869LLU;

    t105 = (((x437&x438)/x439)/x440);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x442 = INT32_MAX;
	int8_t x443 = INT8_MIN;
	int64_t t106 = -90059824926LL;

    t106 = (((x441&x442)/x443)/x444);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x445 = INT8_MIN;
	volatile int64_t x447 = -1LL;
	volatile uint64_t x448 = UINT64_MAX;
	uint64_t t107 = 1606LLU;

    t107 = (((x445&x446)/x447)/x448);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = 194;
	static int8_t x450 = INT8_MAX;
	uint8_t x451 = 26U;
	int8_t x452 = 28;
	int32_t t108 = 1;

    t108 = (((x449&x450)/x451)/x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x453 = 41385512840LLU;
	int8_t x454 = INT8_MAX;
	static volatile int32_t x456 = 1345150;
	volatile uint64_t t109 = 4326078297585LLU;

    t109 = (((x453&x454)/x455)/x456);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x458 = 28U;
	volatile uint16_t x459 = 204U;
	int64_t x460 = INT64_MIN;
	volatile int64_t t110 = 214962549450LL;

    t110 = (((x457&x458)/x459)/x460);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = INT8_MIN;
	static uint16_t x462 = 1U;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = INT64_MIN;
	int64_t t111 = 13616429LL;

    t111 = (((x461&x462)/x463)/x464);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x466 = 73717640U;
	int32_t x467 = 11417;
	int8_t x468 = INT8_MIN;

    t112 = (((x465&x466)/x467)/x468);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x469 = 10;
	uint64_t x471 = 3228LLU;
	uint8_t x472 = 4U;

    t113 = (((x469&x470)/x471)/x472);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x473 = -1;
	static int16_t x474 = INT16_MAX;
	uint16_t x476 = 1468U;
	int32_t t114 = -39568632;

    t114 = (((x473&x474)/x475)/x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x481 = INT32_MAX;
	uint16_t x482 = 8149U;
	int16_t x483 = INT16_MIN;
	volatile int32_t t115 = 629623;

    t115 = (((x481&x482)/x483)/x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x486 = 205417LLU;
	static int64_t x487 = INT64_MIN;
	static uint64_t t116 = 4329026166456946591LLU;

    t116 = (((x485&x486)/x487)/x488);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x489 = 0;
	volatile int16_t x490 = INT16_MIN;
	uint16_t x491 = 14226U;
	int32_t x492 = -32777750;

    t117 = (((x489&x490)/x491)/x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x497 = 4158603LLU;
	static uint8_t x498 = 0U;
	static uint64_t x499 = 1463193345484LLU;
	int32_t x500 = INT32_MIN;
	uint64_t t118 = 10067300518LLU;

    t118 = (((x497&x498)/x499)/x500);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -7;
	int64_t x502 = INT64_MAX;
	static volatile int8_t x504 = -15;
	uint64_t t119 = 12941421692365LLU;

    t119 = (((x501&x502)/x503)/x504);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x505 = INT16_MAX;
	int32_t x506 = 261721;
	int8_t x507 = -5;
	int8_t x508 = -1;
	volatile int32_t t120 = -2025;

    t120 = (((x505&x506)/x507)/x508);

    if (t120 != 6469) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x509 = UINT8_MAX;
	int16_t x510 = INT16_MIN;
	static int8_t x511 = -1;
	int8_t x512 = -1;

    t121 = (((x509&x510)/x511)/x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = 300461875762462522LLU;
	int64_t x514 = INT64_MIN;
	int64_t x515 = 7074274947LL;
	uint32_t x516 = UINT32_MAX;
	volatile uint64_t t122 = 15121727234055LLU;

    t122 = (((x513&x514)/x515)/x516);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x518 = 6;
	volatile int32_t x519 = 17;
	static volatile int16_t x520 = -1;
	volatile int64_t t123 = -2705553LL;

    t123 = (((x517&x518)/x519)/x520);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = -15;
	uint64_t x522 = 13762214LLU;
	int8_t x524 = INT8_MIN;
	volatile uint64_t t124 = 7839510122220LLU;

    t124 = (((x521&x522)/x523)/x524);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = INT16_MIN;
	uint8_t x527 = 6U;

    t125 = (((x525&x526)/x527)/x528);

    if (t125 != 5461) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x529 = 4780U;
	uint64_t x530 = 25983LLU;
	uint32_t x531 = 1134631264U;
	uint16_t x532 = 714U;
	uint64_t t126 = 19220LLU;

    t126 = (((x529&x530)/x531)/x532);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x536 = 215559LLU;
	volatile uint64_t t127 = 20400563281LLU;

    t127 = (((x533&x534)/x535)/x536);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = -1;
	static volatile uint8_t x538 = 2U;
	volatile int16_t x539 = -67;
	volatile int32_t t128 = 1437184;

    t128 = (((x537&x538)/x539)/x540);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x542 = INT32_MIN;
	int16_t x543 = 2;
	int8_t x544 = INT8_MIN;
	int32_t t129 = 52053;

    t129 = (((x541&x542)/x543)/x544);

    if (t129 != 8388608) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x545 = UINT32_MAX;
	uint64_t x546 = UINT64_MAX;
	volatile uint64_t t130 = 2LLU;

    t130 = (((x545&x546)/x547)/x548);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x549 = -1;
	int16_t x550 = -481;
	int8_t x552 = 23;
	uint64_t t131 = 2436389925766LLU;

    t131 = (((x549&x550)/x551)/x552);

    if (t131 != 3724090LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x553 = INT8_MIN;
	int8_t x555 = INT8_MAX;
	uint64_t x556 = UINT64_MAX;
	uint64_t t132 = 7353816906LLU;

    t132 = (((x553&x554)/x555)/x556);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x557 = -1;
	int16_t x560 = -1;
	uint64_t t133 = 6960317410815768LLU;

    t133 = (((x557&x558)/x559)/x560);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x562 = INT64_MIN;
	static int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MAX;
	volatile int64_t t134 = 216LL;

    t134 = (((x561&x562)/x563)/x564);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = 105613789903LL;
	int8_t x566 = INT8_MAX;
	int32_t x568 = INT32_MIN;
	int64_t t135 = -1369739417155LL;

    t135 = (((x565&x566)/x567)/x568);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x569 = INT16_MIN;
	int16_t x570 = -2020;
	uint64_t x571 = 12LLU;
	volatile uint64_t t136 = 1481533963720LLU;

    t136 = (((x569&x570)/x571)/x572);

    if (t136 != 1713744339809505LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x573 = UINT8_MAX;
	volatile uint16_t x574 = 1186U;
	int64_t x575 = INT64_MAX;
	int64_t t137 = 11880868051960566LL;

    t137 = (((x573&x574)/x575)/x576);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x577 = INT16_MAX;
	int8_t x578 = 0;
	volatile int8_t x579 = -1;
	int64_t x580 = INT64_MAX;
	volatile int64_t t138 = -24126453020LL;

    t138 = (((x577&x578)/x579)/x580);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x581 = 6U;
	static int32_t x582 = INT32_MAX;
	int8_t x583 = INT8_MIN;
	int32_t t139 = -31;

    t139 = (((x581&x582)/x583)/x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = INT32_MAX;
	static uint16_t x586 = 34U;
	static int64_t x588 = INT64_MIN;
	volatile int64_t t140 = 3162431685745814191LL;

    t140 = (((x585&x586)/x587)/x588);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x589 = UINT32_MAX;
	static volatile int64_t x590 = INT64_MIN;
	int16_t x591 = -1;
	uint8_t x592 = 4U;
	int64_t t141 = -3630381119LL;

    t141 = (((x589&x590)/x591)/x592);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x594 = -152;
	uint32_t x595 = 5190U;

    t142 = (((x593&x594)/x595)/x596);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x598 = INT8_MIN;
	static uint8_t x600 = UINT8_MAX;
	int64_t t143 = 3305LL;

    t143 = (((x597&x598)/x599)/x600);

    if (t143 != 16843009LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x601 = INT64_MIN;
	int32_t x602 = INT32_MIN;
	int32_t x603 = -130979330;
	volatile int32_t x604 = INT32_MAX;

    t144 = (((x601&x602)/x603)/x604);

    if (t144 != 32LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x609 = INT16_MIN;
	uint8_t x611 = 11U;
	uint16_t x612 = UINT16_MAX;
	static int32_t t145 = 443;

    t145 = (((x609&x610)/x611)/x612);

    if (t145 != 75) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	static int8_t x614 = INT8_MAX;
	int32_t x615 = INT32_MAX;
	volatile int8_t x616 = INT8_MIN;

    t146 = (((x613&x614)/x615)/x616);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x617 = UINT8_MAX;
	int16_t x618 = -3205;
	int16_t x619 = 1;
	static int16_t x620 = 14200;
	int32_t t147 = 5801;

    t147 = (((x617&x618)/x619)/x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x621 = -1;
	uint32_t x622 = UINT32_MAX;
	static int16_t x623 = INT16_MIN;
	volatile int64_t x624 = INT64_MAX;
	volatile int64_t t148 = -1664272LL;

    t148 = (((x621&x622)/x623)/x624);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x625 = 3U;
	uint16_t x626 = 2320U;
	int64_t x628 = -1LL;
	int64_t t149 = 231633929086136LL;

    t149 = (((x625&x626)/x627)/x628);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x630 = 0U;
	uint32_t x631 = 84174U;
	uint32_t t150 = 0U;

    t150 = (((x629&x630)/x631)/x632);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x633 = 4010;
	uint64_t x634 = 45337517806LLU;
	volatile int8_t x635 = 1;
	static volatile uint64_t t151 = 1140818802273LLU;

    t151 = (((x633&x634)/x635)/x636);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x637 = 2229437546534336180LLU;
	static volatile int32_t x638 = -1;
	int16_t x639 = -1;
	static uint64_t t152 = 17111782412LLU;

    t152 = (((x637&x638)/x639)/x640);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = INT16_MAX;
	int8_t x644 = INT8_MIN;
	volatile int64_t t153 = -17288676776448LL;

    t153 = (((x641&x642)/x643)/x644);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x645 = 2U;
	uint8_t x646 = UINT8_MAX;
	int32_t x647 = INT32_MIN;
	int32_t t154 = -113;

    t154 = (((x645&x646)/x647)/x648);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x649 = 20U;
	volatile int16_t x650 = -1;
	int8_t x651 = 3;
	uint32_t x652 = UINT32_MAX;
	volatile uint32_t t155 = 120U;

    t155 = (((x649&x650)/x651)/x652);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = 27010936;
	static int16_t x654 = -1;
	volatile int32_t x655 = INT32_MAX;
	static volatile int64_t x656 = 12LL;
	int64_t t156 = -3159785LL;

    t156 = (((x653&x654)/x655)/x656);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x657 = 124LLU;
	static int64_t x658 = INT64_MIN;
	int32_t x659 = -2754565;
	static int32_t x660 = INT32_MIN;
	volatile uint64_t t157 = 4231723977234LLU;

    t157 = (((x657&x658)/x659)/x660);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x662 = INT64_MIN;

    t158 = (((x661&x662)/x663)/x664);

    if (t158 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x665 = 9U;
	int8_t x666 = INT8_MAX;
	int8_t x668 = INT8_MAX;
	int32_t t159 = -2;

    t159 = (((x665&x666)/x667)/x668);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x669 = 59U;
	static uint32_t x670 = 10U;
	int32_t x671 = INT32_MIN;
	int32_t x672 = INT32_MIN;

    t160 = (((x669&x670)/x671)/x672);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x677 = 360U;
	static int16_t x678 = INT16_MAX;
	static uint8_t x679 = 2U;
	uint32_t x680 = 58U;
	uint32_t t161 = 0U;

    t161 = (((x677&x678)/x679)/x680);

    if (t161 != 3U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x681 = UINT16_MAX;
	static volatile uint32_t x682 = 6736U;
	int8_t x683 = INT8_MIN;
	static volatile uint8_t x684 = 57U;
	static volatile uint32_t t162 = 0U;

    t162 = (((x681&x682)/x683)/x684);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x685 = INT16_MIN;
	int16_t x686 = INT16_MIN;
	int32_t x687 = -1;
	int64_t x688 = -1LL;
	volatile int64_t t163 = -18LL;

    t163 = (((x685&x686)/x687)/x688);

    if (t163 != -32768LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x689 = -26;
	uint32_t x690 = UINT32_MAX;
	static uint16_t x691 = 11U;
	volatile int16_t x692 = INT16_MIN;
	uint32_t t164 = 1047715581U;

    t164 = (((x689&x690)/x691)/x692);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x693 = INT64_MAX;
	uint64_t x694 = UINT64_MAX;
	volatile int32_t x695 = INT32_MAX;
	uint8_t x696 = UINT8_MAX;
	volatile uint64_t t165 = 2130230559527LLU;

    t165 = (((x693&x694)/x695)/x696);

    if (t165 != 16843009LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x697 = 1171U;
	uint32_t x698 = 392943U;
	volatile uint32_t x699 = 45U;
	int8_t x700 = INT8_MIN;
	volatile uint32_t t166 = 438251230U;

    t166 = (((x697&x698)/x699)/x700);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x702 = 1655961841LLU;
	int32_t x703 = INT32_MAX;
	int32_t x704 = -318641346;

    t167 = (((x701&x702)/x703)/x704);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x705 = UINT16_MAX;
	int64_t x706 = -11217956833290100LL;
	int16_t x707 = INT16_MIN;
	uint32_t x708 = 151854U;
	int64_t t168 = -1LL;

    t168 = (((x705&x706)/x707)/x708);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x709 = INT16_MAX;
	int8_t x712 = 2;
	volatile int64_t t169 = -6507LL;

    t169 = (((x709&x710)/x711)/x712);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x713 = INT16_MIN;
	uint64_t x715 = 20881772740010LLU;
	static volatile uint64_t t170 = 8976851792565591LLU;

    t170 = (((x713&x714)/x715)/x716);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x717 = UINT16_MAX;
	uint16_t x718 = 2U;
	static uint64_t x719 = UINT64_MAX;
	volatile uint64_t t171 = 50823571094880LLU;

    t171 = (((x717&x718)/x719)/x720);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x722 = INT8_MIN;
	static volatile int32_t x723 = -1;
	static int32_t t172 = 7793;

    t172 = (((x721&x722)/x723)/x724);

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x725 = -1;
	uint16_t x728 = 13236U;
	int32_t t173 = -1;

    t173 = (((x725&x726)/x727)/x728);

    if (t173 != -636) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x729 = 14364U;
	int16_t x730 = -1;
	int8_t x731 = -3;
	int64_t t174 = 542303LL;

    t174 = (((x729&x730)/x731)/x732);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x733 = 90U;
	int32_t x734 = 91;
	static uint32_t x735 = 13101554U;
	int8_t x736 = INT8_MAX;
	static uint32_t t175 = 58U;

    t175 = (((x733&x734)/x735)/x736);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x737 = 3U;
	uint32_t x738 = 26836181U;
	uint64_t x740 = 323LLU;
	volatile uint64_t t176 = 3LLU;

    t176 = (((x737&x738)/x739)/x740);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x742 = INT8_MIN;
	volatile int8_t x743 = 1;
	int64_t t177 = -9873LL;

    t177 = (((x741&x742)/x743)/x744);

    if (t177 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x745 = INT64_MIN;
	uint8_t x746 = 0U;
	uint64_t x747 = 250464LLU;
	int32_t x748 = INT32_MAX;
	uint64_t t178 = 255031LLU;

    t178 = (((x745&x746)/x747)/x748);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x754 = 15U;
	int64_t x755 = -1LL;
	static int32_t x756 = INT32_MIN;
	static volatile int64_t t179 = 43825913LL;

    t179 = (((x753&x754)/x755)/x756);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x757 = 9U;
	int64_t x758 = INT64_MAX;
	uint32_t x759 = 1025U;
	int64_t t180 = 40827737679687LL;

    t180 = (((x757&x758)/x759)/x760);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = 5703;
	static volatile int64_t x764 = -4LL;

    t181 = (((x761&x762)/x763)/x764);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint16_t x765 = 63U;
	static uint32_t x766 = UINT32_MAX;
	int8_t x767 = -7;
	int8_t x768 = -1;
	volatile uint32_t t182 = 98232752U;

    t182 = (((x765&x766)/x767)/x768);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x769 = -1;
	uint64_t x770 = 59647942183665942LLU;
	uint16_t x771 = UINT16_MAX;
	volatile uint16_t x772 = 401U;
	uint64_t t183 = 49488889017LLU;

    t183 = (((x769&x770)/x771)/x772);

    if (t183 != 2269748767LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x774 = 420U;
	uint8_t x775 = 117U;
	uint16_t x776 = 3001U;

    t184 = (((x773&x774)/x775)/x776);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x777 = INT8_MAX;
	int32_t x778 = INT32_MIN;
	volatile int16_t x779 = -1;
	int64_t x780 = INT64_MIN;
	int64_t t185 = 157056845273192LL;

    t185 = (((x777&x778)/x779)/x780);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = INT32_MIN;
	volatile int16_t x783 = -1;
	int32_t x784 = -1;
	static uint64_t t186 = 364245767971245LLU;

    t186 = (((x781&x782)/x783)/x784);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x786 = 30148813209152258LLU;
	uint16_t x787 = UINT16_MAX;
	int32_t x788 = INT32_MIN;
	uint64_t t187 = 6LLU;

    t187 = (((x785&x786)/x787)/x788);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x789 = 72880313;
	int16_t x790 = INT16_MAX;
	int16_t x791 = INT16_MIN;
	uint64_t x792 = 7216987667821209LLU;
	volatile uint64_t t188 = 6LLU;

    t188 = (((x789&x790)/x791)/x792);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x793 = 3U;
	volatile int32_t x794 = -1;
	uint64_t x795 = 424072176LLU;
	int64_t x796 = 16056213306LL;
	uint64_t t189 = 6670109LLU;

    t189 = (((x793&x794)/x795)/x796);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x802 = UINT32_MAX;
	volatile int8_t x804 = INT8_MAX;

    t190 = (((x801&x802)/x803)/x804);

    if (t190 != 17513U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x809 = INT16_MIN;
	uint8_t x810 = 0U;
	volatile uint64_t x811 = 346131LLU;
	uint16_t x812 = 177U;
	volatile uint64_t t191 = 9608314384101649LLU;

    t191 = (((x809&x810)/x811)/x812);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x813 = 7U;
	static volatile int16_t x814 = INT16_MIN;
	int16_t x815 = INT16_MIN;
	static uint16_t x816 = 1U;
	static int32_t t192 = -6;

    t192 = (((x813&x814)/x815)/x816);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x817 = 66U;
	static volatile int8_t x819 = -1;
	uint8_t x820 = UINT8_MAX;
	uint64_t t193 = 331730479670827656LLU;

    t193 = (((x817&x818)/x819)/x820);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x821 = 25825361U;
	int16_t x822 = -1;
	uint8_t x823 = 1U;
	int32_t x824 = INT32_MIN;
	static uint32_t t194 = 5877U;

    t194 = (((x821&x822)/x823)/x824);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x825 = INT32_MAX;
	uint8_t x826 = 54U;
	int8_t x827 = INT8_MAX;
	int64_t t195 = 254332LL;

    t195 = (((x825&x826)/x827)/x828);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x829 = -5;
	int8_t x830 = -4;
	uint16_t x831 = 8727U;
	int32_t t196 = -22;

    t196 = (((x829&x830)/x831)/x832);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x833 = 77;
	int32_t x834 = INT32_MIN;
	int64_t x835 = 69LL;
	volatile int64_t t197 = 280768811278060232LL;

    t197 = (((x833&x834)/x835)/x836);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x837 = -1;
	static int16_t x838 = INT16_MAX;
	volatile int16_t x839 = INT16_MIN;
	int32_t x840 = INT32_MIN;
	volatile int32_t t198 = 0;

    t198 = (((x837&x838)/x839)/x840);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x841 = 29U;
	uint32_t x843 = 592U;
	int16_t x844 = -1;
	uint32_t t199 = 1U;

    t199 = (((x841&x842)/x843)/x844);

    if (t199 != 0U) { NG(); } else { ; }
	
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

