
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

int32_t x3 = -1;
static int32_t x4 = INT32_MIN;
volatile int64_t x10 = INT64_MIN;
uint16_t x16 = 0U;
uint64_t x19 = 106672964676896361LLU;
uint8_t x21 = 51U;
int8_t x22 = -55;
uint64_t x25 = 5901LLU;
int64_t x27 = -1LL;
static volatile uint16_t x30 = 5U;
uint16_t x32 = UINT16_MAX;
volatile int32_t t8 = -209;
volatile uint16_t x40 = UINT16_MAX;
volatile int32_t t9 = 7088564;
static uint64_t x43 = 7218737LLU;
static uint8_t x49 = UINT8_MAX;
static int32_t x52 = -1;
volatile int32_t t12 = -217007270;
int32_t x55 = 19;
volatile int32_t t13 = -66973097;
static int64_t x63 = -1LL;
int64_t t15 = 590208836478426564LL;
int64_t x66 = INT64_MAX;
int64_t x68 = INT64_MIN;
static int64_t x73 = -1LL;
int32_t x78 = -1847;
uint64_t x82 = 482688335484682LLU;
int8_t x83 = -1;
uint16_t x86 = 10U;
static volatile uint8_t x91 = 60U;
uint8_t x92 = 4U;
int64_t x93 = -6007LL;
uint64_t x94 = 115284456951293LLU;
uint8_t x96 = UINT8_MAX;
int32_t x101 = INT32_MIN;
uint64_t x103 = 127598623161LLU;
static volatile uint32_t x105 = 7U;
int64_t x110 = -1LL;
static uint64_t x112 = 9736513705LLU;
int32_t x122 = -77188;
uint16_t x126 = 7U;
static int8_t x127 = -1;
int64_t x128 = INT64_MIN;
int8_t x131 = -9;
volatile int8_t x132 = INT8_MIN;
volatile int32_t t32 = -1840096;
uint8_t x138 = 2U;
int64_t x148 = INT64_MAX;
volatile int32_t t37 = -4784;
int64_t x156 = -1265LL;
volatile int32_t x157 = -1;
volatile int8_t x166 = -16;
volatile uint16_t x169 = UINT16_MAX;
int8_t x171 = INT8_MIN;
static int16_t x172 = INT16_MIN;
int64_t t43 = INT64_MIN;
static int64_t x180 = -1LL;
int64_t t44 = 15526LL;
static uint64_t x183 = 4LLU;
int64_t x186 = -10924028595LL;
static int16_t x190 = INT16_MAX;
uint32_t x194 = 104819U;
int16_t x198 = INT16_MAX;
uint64_t x199 = UINT64_MAX;
uint64_t t49 = 1568364302425223LLU;
static volatile int64_t t50 = -216461LL;
int16_t x209 = 95;
volatile uint64_t t54 = 51064861LLU;
int32_t x223 = INT32_MIN;
volatile int32_t x225 = INT32_MAX;
uint32_t x235 = 1919716369U;
uint16_t x237 = UINT16_MAX;
int8_t x238 = -1;
int8_t x240 = INT8_MIN;
volatile int32_t t59 = 557;
int8_t x245 = INT8_MAX;
int32_t x255 = -88130;
int8_t x257 = -32;
int32_t x265 = INT32_MIN;
int32_t x269 = 5;
int32_t x271 = 16773;
static uint64_t t68 = 498876180LLU;
int16_t x278 = -480;
uint8_t x289 = UINT8_MAX;
int32_t x292 = 971736976;
int32_t t72 = -589383991;
static int32_t x293 = 454259;
volatile int16_t x298 = -2597;
volatile int32_t t74 = -504243732;
volatile uint64_t x307 = UINT64_MAX;
uint32_t x308 = UINT32_MAX;
static int8_t x313 = -7;
volatile int64_t t80 = 2303307LL;
static uint32_t x325 = UINT32_MAX;
volatile uint64_t t81 = 50083LLU;
static int16_t x330 = INT16_MIN;
int8_t x340 = -1;
uint64_t x342 = 63961277787431LLU;
int8_t x343 = -1;
volatile int32_t t86 = 1532;
int32_t t88 = 380;
uint64_t x358 = 9995LLU;
static volatile uint32_t x365 = UINT32_MAX;
uint16_t x368 = UINT16_MAX;
uint16_t x377 = UINT16_MAX;
int16_t x382 = 2332;
int32_t x389 = INT32_MIN;
int64_t x390 = 63292384862LL;
int32_t x391 = INT32_MIN;
volatile int64_t t98 = INT64_MIN;
int8_t x405 = -1;
int32_t x407 = -2034309;
int64_t t103 = 7LL;
int32_t x420 = INT32_MIN;
static int32_t t104 = 1;
int64_t x422 = 67468627988057153LL;
static int16_t x424 = -1;
volatile uint8_t x435 = 12U;
int32_t t108 = 9921;
uint16_t x437 = 32332U;
volatile int32_t x439 = INT32_MIN;
int64_t x453 = -1LL;
int8_t x455 = INT8_MAX;
int64_t t113 = -1LL;
static int8_t x462 = INT8_MAX;
static int16_t x463 = INT16_MIN;
int32_t x464 = 89101;
uint32_t x468 = 160862340U;
int16_t x472 = -633;
uint64_t t118 = 1LLU;
static volatile int32_t x477 = -1;
int32_t x478 = -1;
int16_t x480 = -1;
volatile int16_t x482 = -1;
int16_t x489 = 0;
volatile int64_t x492 = INT64_MIN;
volatile int32_t t123 = 6447;
static int16_t x501 = 9132;
static int16_t x508 = INT16_MAX;
volatile int32_t t126 = -69;
uint8_t x510 = UINT8_MAX;
static int8_t x511 = INT8_MAX;
int16_t x519 = INT16_MIN;
int64_t x520 = -1LL;
uint8_t x522 = 1U;
uint32_t x528 = UINT32_MAX;
static volatile uint32_t t131 = 11U;
int32_t x529 = -563686;
int64_t x530 = -1LL;
int32_t t132 = -63635;
int32_t x534 = 1339;
int32_t x535 = 3537121;
static volatile int32_t t134 = INT32_MIN;
uint32_t x545 = UINT32_MAX;
static int16_t x552 = INT16_MAX;
uint16_t x554 = 33U;
int32_t x556 = -1;
static int32_t t138 = 7;
volatile int64_t x560 = INT64_MAX;
int8_t x566 = -14;
int8_t x569 = 36;
uint8_t x570 = 2U;
volatile uint32_t x574 = UINT32_MAX;
volatile uint8_t x579 = UINT8_MAX;
uint64_t x583 = 3708960LLU;
int32_t x586 = INT32_MAX;
volatile uint64_t t146 = 2LLU;
volatile int16_t x594 = 1311;
volatile uint32_t x597 = 5872173U;
uint32_t x599 = 3U;
static volatile uint32_t t149 = 87639U;
static int32_t x607 = INT32_MAX;
int64_t x608 = INT64_MIN;
static int16_t x617 = 251;
int64_t t154 = -105035716LL;
static uint32_t x635 = 2287128U;
int8_t x645 = INT8_MIN;
volatile uint64_t t161 = 5022757507390321LLU;
uint32_t x654 = 289563106U;
static volatile int64_t x659 = -3435LL;
int16_t x660 = INT16_MIN;
int32_t t166 = 1017847705;
static volatile int8_t x669 = INT8_MIN;
uint64_t t168 = 233849359415076875LLU;
int16_t x678 = -1;
int32_t x681 = -16;
int64_t x686 = 16439641461465LL;
volatile uint64_t t171 = 10610099419327172LLU;
static volatile uint64_t x690 = UINT64_MAX;
uint32_t x691 = 0U;
int64_t x702 = -185102516235LL;
int32_t x703 = INT32_MIN;
int16_t x722 = INT16_MAX;
int32_t x734 = INT32_MIN;
volatile int32_t t183 = -28092;
int32_t x752 = -175;
int64_t t188 = 2467984123LL;
uint32_t t189 = 7U;
int32_t x761 = INT32_MIN;
uint16_t x763 = 193U;
int16_t x767 = -1;
int16_t x768 = INT16_MIN;
int32_t t191 = 2152609;
static int64_t x774 = INT64_MAX;
static int16_t x775 = INT16_MAX;
int32_t t193 = -3945;
static int8_t x784 = INT8_MIN;
int8_t x790 = INT8_MAX;
volatile uint8_t x791 = 1U;


void f0(void) {
    	uint8_t x1 = 1U;
	static uint64_t x2 = 94LLU;
	volatile int32_t t0 = INT32_MIN;

    t0 = (((x1==x2)|x3)&x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 2357136U;
	static int32_t x6 = -190730598;
	int8_t x7 = -1;
	static int64_t x8 = 22053503236LL;
	static volatile int64_t t1 = -4141639411537602LL;

    t1 = (((x5==x6)|x7)&x8);

    if (t1 != 22053503236LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1LL;
	uint8_t x11 = 7U;
	int8_t x12 = -24;
	int32_t t2 = -7947;

    t2 = (((x9==x10)|x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MAX;
	int8_t x15 = 23;
	volatile int32_t t3 = -564234;

    t3 = (((x13==x14)|x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x17 = 6U;
	uint32_t x18 = 3U;
	uint64_t x20 = 1192772692166861LLU;
	uint64_t t4 = 999063527614LLU;

    t4 = (((x17==x18)|x19)&x20);

    if (t4 != 61924848189513LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x23 = 31U;
	uint8_t x24 = 76U;
	volatile uint32_t t5 = 214930392U;

    t5 = (((x21==x22)|x23)&x24);

    if (t5 != 12U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 155371U;
	static uint32_t x28 = 1457282U;
	volatile int64_t t6 = -52905036333260169LL;

    t6 = (((x25==x26)|x27)&x28);

    if (t6 != 1457282LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	uint32_t t7 = 11271U;

    t7 = (((x29==x30)|x31)&x32);

    if (t7 != 65535U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	int64_t x34 = INT64_MIN;
	int32_t x35 = -68818;
	static int8_t x36 = 0;

    t8 = (((x33==x34)|x35)&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -20969280;
	static uint64_t x38 = 27940LLU;
	volatile int32_t x39 = -1;

    t9 = (((x37==x38)|x39)&x40);

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = -292;
	static int16_t x42 = INT16_MIN;
	volatile int32_t x44 = -1;
	static uint64_t t10 = 425345250355LLU;

    t10 = (((x41==x42)|x43)&x44);

    if (t10 != 7218737LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = -770120042290177LL;
	uint64_t x46 = 88454279328788100LLU;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = INT32_MIN;

    t11 = (((x45==x46)|x47)&x48);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x50 = INT8_MAX;
	volatile uint8_t x51 = UINT8_MAX;

    t12 = (((x49==x50)|x51)&x52);

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	volatile int8_t x54 = 11;
	int32_t x56 = INT32_MAX;

    t13 = (((x53==x54)|x55)&x56);

    if (t13 != 19) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	static uint8_t x59 = 5U;
	int16_t x60 = 0;
	volatile int32_t t14 = 0;

    t14 = (((x57==x58)|x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint16_t x62 = 5U;
	uint32_t x64 = UINT32_MAX;

    t15 = (((x61==x62)|x63)&x64);

    if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int8_t x67 = INT8_MIN;
	volatile int64_t t16 = INT64_MIN;

    t16 = (((x65==x66)|x67)&x68);

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 281LLU;
	static int16_t x70 = -1;
	int8_t x71 = -6;
	static volatile int64_t x72 = -251LL;
	int64_t t17 = 7082084195835854LL;

    t17 = (((x69==x70)|x71)&x72);

    if (t17 != -256LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = INT16_MIN;
	uint64_t x75 = 1912201065539164621LLU;
	static int64_t x76 = INT64_MIN;
	static uint64_t t18 = 21684004379290107LLU;

    t18 = (((x73==x74)|x75)&x76);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	volatile int16_t x79 = 0;
	uint8_t x80 = UINT8_MAX;
	static int32_t t19 = -1;

    t19 = (((x77==x78)|x79)&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	uint8_t x84 = 11U;
	volatile int32_t t20 = -107999274;

    t20 = (((x81==x82)|x83)&x84);

    if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	int8_t x87 = 1;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 23339549;

    t21 = (((x85==x86)|x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 1378U;
	int32_t x90 = INT32_MAX;
	volatile int32_t t22 = -2;

    t22 = (((x89==x90)|x91)&x92);

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x95 = INT8_MAX;
	static int32_t t23 = -985875;

    t23 = (((x93==x94)|x95)&x96);

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	uint64_t x98 = 81602808992LLU;
	static uint8_t x99 = 0U;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 60225945911780LL;

    t24 = (((x97==x98)|x99)&x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x102 = INT16_MAX;
	static int32_t x104 = INT32_MIN;
	static volatile uint64_t t25 = 915LLU;

    t25 = (((x101==x102)|x103)&x104);

    if (t25 != 126701535232LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MAX;
	int64_t x107 = INT64_MAX;
	int16_t x108 = INT16_MAX;
	static volatile int64_t t26 = -464921480288741LL;

    t26 = (((x105==x106)|x107)&x108);

    if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = INT8_MIN;
	static int16_t x111 = -1;
	uint64_t t27 = 2679599LLU;

    t27 = (((x109==x110)|x111)&x112);

    if (t27 != 9736513705LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = 18;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	static int32_t x116 = INT32_MIN;
	int32_t t28 = INT32_MIN;

    t28 = (((x113==x114)|x115)&x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -239;
	int16_t x118 = INT16_MIN;
	int64_t x119 = -4047521LL;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t29 = 498763LL;

    t29 = (((x117==x118)|x119)&x120);

    if (t29 != 95LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 13699U;
	volatile int8_t x123 = -1;
	int64_t x124 = -4161527733092601LL;
	volatile int64_t t30 = 357510000411LL;

    t30 = (((x121==x122)|x123)&x124);

    if (t30 != -4161527733092601LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	int64_t t31 = INT64_MIN;

    t31 = (((x125==x126)|x127)&x128);

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	static int64_t x130 = INT64_MIN;

    t32 = (((x129==x130)|x131)&x132);

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int64_t x134 = 732LL;
	volatile int8_t x135 = INT8_MIN;
	volatile int8_t x136 = -10;
	int32_t t33 = 3785;

    t33 = (((x133==x134)|x135)&x136);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x139 = -2629954208LL;
	int8_t x140 = -1;
	static int64_t t34 = -4596LL;

    t34 = (((x137==x138)|x139)&x140);

    if (t34 != -2629954208LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	static uint8_t x142 = 59U;
	uint8_t x143 = UINT8_MAX;
	int32_t x144 = -1;
	int32_t t35 = 231702;

    t35 = (((x141==x142)|x143)&x144);

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 1U;
	int8_t x146 = INT8_MIN;
	uint16_t x147 = UINT16_MAX;
	static volatile int64_t t36 = -27030978712305138LL;

    t36 = (((x145==x146)|x147)&x148);

    if (t36 != 65535LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	uint8_t x150 = 3U;
	int32_t x151 = INT32_MIN;
	int8_t x152 = 4;

    t37 = (((x149==x150)|x151)&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	int64_t x154 = 2LL;
	volatile int32_t x155 = 35;
	static volatile int64_t t38 = 2240405236139215LL;

    t38 = (((x153==x154)|x155)&x156);

    if (t38 != 3LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MIN;
	volatile uint8_t x159 = 0U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = 111088081475471LL;

    t39 = (((x157==x158)|x159)&x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 14124U;
	int16_t x162 = INT16_MIN;
	volatile int32_t x163 = -1;
	volatile uint64_t x164 = UINT64_MAX;
	static uint64_t t40 = UINT64_MAX;

    t40 = (((x161==x162)|x163)&x164);

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	uint32_t x167 = 96657U;
	uint16_t x168 = 0U;
	volatile uint32_t t41 = 0U;

    t41 = (((x165==x166)|x167)&x168);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = -344541;
	volatile int32_t t42 = -1;

    t42 = (((x169==x170)|x171)&x172);

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = 0;
	static int8_t x174 = INT8_MAX;
	static int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MIN;

    t43 = (((x173==x174)|x175)&x176);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile int32_t x178 = INT32_MIN;
	uint32_t x179 = 160112618U;

    t44 = (((x177==x178)|x179)&x180);

    if (t44 != 160112618LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = -3;
	uint8_t x182 = 16U;
	volatile uint16_t x184 = 145U;
	uint64_t t45 = 943038LLU;

    t45 = (((x181==x182)|x183)&x184);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	uint8_t x187 = 1U;
	uint32_t x188 = 62U;
	static volatile uint32_t t46 = 117795U;

    t46 = (((x185==x186)|x187)&x188);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = INT64_MIN;
	volatile uint32_t x191 = 33630U;
	uint16_t x192 = 49U;
	uint32_t t47 = 1U;

    t47 = (((x189==x190)|x191)&x192);

    if (t47 != 16U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x193 = 1U;
	uint64_t x195 = UINT64_MAX;
	volatile uint32_t x196 = 500143074U;
	uint64_t t48 = 43533776863691LLU;

    t48 = (((x193==x194)|x195)&x196);

    if (t48 != 500143074LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 67U;
	int8_t x200 = INT8_MAX;

    t49 = (((x197==x198)|x199)&x200);

    if (t49 != 127LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	int16_t x202 = INT16_MAX;
	static int8_t x203 = INT8_MIN;
	int64_t x204 = 0LL;

    t50 = (((x201==x202)|x203)&x204);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int16_t x206 = 499;
	static int32_t x207 = INT32_MIN;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

    t51 = (((x205==x206)|x207)&x208);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = -109977;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MIN;
	static int64_t t52 = -120677827LL;

    t52 = (((x209==x210)|x211)&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x213 = 54U;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = 13U;
	int16_t x216 = -12240;
	int32_t t53 = -223110440;

    t53 = (((x213==x214)|x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x217 = 97U;
	uint64_t x218 = UINT64_MAX;
	volatile uint64_t x219 = 27138LLU;
	uint64_t x220 = UINT64_MAX;

    t54 = (((x217==x218)|x219)&x220);

    if (t54 != 27138LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MIN;
	static int64_t x222 = -15313LL;
	static volatile uint8_t x224 = 0U;
	int32_t t55 = -4;

    t55 = (((x221==x222)|x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x226 = 247524191U;
	volatile int64_t x227 = INT64_MAX;
	uint8_t x228 = UINT8_MAX;
	int64_t t56 = 275334693768176LL;

    t56 = (((x225==x226)|x227)&x228);

    if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	static uint16_t x230 = 553U;
	int64_t x231 = INT64_MIN;
	static int32_t x232 = INT32_MIN;
	volatile int64_t t57 = INT64_MIN;

    t57 = (((x229==x230)|x231)&x232);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 10U;
	uint8_t x234 = 1U;
	volatile int16_t x236 = INT16_MAX;
	volatile uint32_t t58 = 1910828U;

    t58 = (((x233==x234)|x235)&x236);

    if (t58 != 3089U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x239 = -3;

    t59 = (((x237==x238)|x239)&x240);

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 74688284748751933LLU;
	int8_t x242 = -1;
	uint32_t x243 = 20631008U;
	int64_t x244 = 29009467432LL;
	static int64_t t60 = 69969041083037LL;

    t60 = (((x241==x242)|x243)&x244);

    if (t60 != 18368544LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = -2;
	static int8_t x247 = INT8_MAX;
	static int16_t x248 = -1;
	static volatile int32_t t61 = 0;

    t61 = (((x245==x246)|x247)&x248);

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = 0;
	volatile uint8_t x250 = 62U;
	int32_t x251 = -9429537;
	static int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 633;

    t62 = (((x249==x250)|x251)&x252);

    if (t62 != 95) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MAX;
	uint64_t x254 = 207527662LLU;
	volatile int32_t x256 = INT32_MAX;
	volatile int32_t t63 = -73396087;

    t63 = (((x253==x254)|x255)&x256);

    if (t63 != 2147395518) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int32_t x260 = 14179634;
	volatile int32_t t64 = 2444429;

    t64 = (((x257==x258)|x259)&x260);

    if (t64 != 14179584) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = 19;
	static volatile int64_t x262 = 14716141LL;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t x264 = INT32_MIN;
	volatile uint32_t t65 = 221454U;

    t65 = (((x261==x262)|x263)&x264);

    if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = INT16_MIN;
	int64_t x267 = 688296249757LL;
	int8_t x268 = INT8_MAX;
	volatile int64_t t66 = -6342LL;

    t66 = (((x265==x266)|x267)&x268);

    if (t66 != 29LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x270 = UINT8_MAX;
	uint32_t x272 = 775U;
	uint32_t t67 = 12U;

    t67 = (((x269==x270)|x271)&x272);

    if (t67 != 261U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = 19292808;
	static int64_t x274 = INT64_MIN;
	uint16_t x275 = 148U;
	volatile uint64_t x276 = 4LLU;

    t68 = (((x273==x274)|x275)&x276);

    if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x277 = 7457284LLU;
	int32_t x279 = INT32_MAX;
	int16_t x280 = INT16_MAX;
	volatile int32_t t69 = -6726;

    t69 = (((x277==x278)|x279)&x280);

    if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -46118;
	int64_t x282 = INT64_MAX;
	static uint8_t x283 = 1U;
	int64_t x284 = INT64_MIN;
	int64_t t70 = -242LL;

    t70 = (((x281==x282)|x283)&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = INT64_MIN;
	volatile int64_t x286 = -1LL;
	int8_t x287 = INT8_MIN;
	int16_t x288 = -1680;
	volatile int32_t t71 = 0;

    t71 = (((x285==x286)|x287)&x288);

    if (t71 != -1792) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x290 = 2584850;
	int32_t x291 = INT32_MAX;

    t72 = (((x289==x290)|x291)&x292);

    if (t72 != 971736976) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = 389513264714186LLU;
	volatile uint32_t x295 = 0U;
	volatile uint64_t x296 = 85849328838LLU;
	static uint64_t t73 = 1LLU;

    t73 = (((x293==x294)|x295)&x296);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = UINT32_MAX;
	int16_t x299 = INT16_MAX;
	uint8_t x300 = 118U;

    t74 = (((x297==x298)|x299)&x300);

    if (t74 != 118) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1694735842LL;
	static int8_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = 1;
	uint64_t t75 = 1687307914023009481LLU;

    t75 = (((x301==x302)|x303)&x304);

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	uint16_t x306 = UINT16_MAX;
	uint64_t t76 = 0LLU;

    t76 = (((x305==x306)|x307)&x308);

    if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -456681723;
	int8_t x310 = INT8_MAX;
	static int64_t x311 = INT64_MIN;
	int16_t x312 = -11;
	int64_t t77 = INT64_MIN;

    t77 = (((x309==x310)|x311)&x312);

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x314 = 13540389690090258LL;
	static uint64_t x315 = 5LLU;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t78 = 102515605969597LLU;

    t78 = (((x313==x314)|x315)&x316);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = -152388800302801LL;
	static uint16_t x318 = 7799U;
	static int32_t x319 = INT32_MIN;
	uint32_t x320 = 884756481U;
	static uint32_t t79 = 392823182U;

    t79 = (((x317==x318)|x319)&x320);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = -6LL;
	static int64_t x324 = INT64_MAX;

    t80 = (((x321==x322)|x323)&x324);

    if (t80 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x326 = INT64_MAX;
	static uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = INT32_MAX;

    t81 = (((x325==x326)|x327)&x328);

    if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	static int16_t x331 = INT16_MAX;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 152780;

    t82 = (((x329==x330)|x331)&x332);

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	uint32_t x334 = 2900583U;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = 520601453783LL;

    t83 = (((x333==x334)|x335)&x336);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 2U;
	volatile int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	static int32_t t84 = -1;

    t84 = (((x337==x338)|x339)&x340);

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x344 = 1156382LLU;
	uint64_t t85 = 16313448LLU;

    t85 = (((x341==x342)|x343)&x344);

    if (t85 != 1156382LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 8019U;
	uint32_t x346 = UINT32_MAX;
	int32_t x347 = -1;
	uint16_t x348 = 2069U;

    t86 = (((x345==x346)|x347)&x348);

    if (t86 != 2069) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	volatile int64_t x350 = -127376364LL;
	int64_t x351 = -1LL;
	int64_t x352 = 37875849849773893LL;
	volatile int64_t t87 = -3195119LL;

    t87 = (((x349==x350)|x351)&x352);

    if (t87 != 37875849849773893LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	int16_t x355 = 14;
	static volatile int8_t x356 = INT8_MIN;

    t88 = (((x353==x354)|x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 468670093446LLU;
	int8_t x359 = INT8_MIN;
	volatile int8_t x360 = -1;
	int32_t t89 = 578631413;

    t89 = (((x357==x358)|x359)&x360);

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 58;
	static int64_t x362 = -25046894025199996LL;
	uint16_t x363 = 131U;
	static volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = 3068807;

    t90 = (((x361==x362)|x363)&x364);

    if (t90 != 131) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x366 = 795032U;
	int64_t x367 = -188146LL;
	volatile int64_t t91 = 25737LL;

    t91 = (((x365==x366)|x367)&x368);

    if (t91 != 8462LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 54U;
	volatile uint64_t x370 = 21LLU;
	int8_t x371 = INT8_MIN;
	volatile int32_t x372 = INT32_MAX;
	int32_t t92 = -15336;

    t92 = (((x369==x370)|x371)&x372);

    if (t92 != 2147483520) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = 5LL;
	volatile uint32_t x374 = 5867U;
	int8_t x375 = 0;
	int8_t x376 = -1;
	volatile int32_t t93 = -140121;

    t93 = (((x373==x374)|x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x378 = 62LLU;
	uint8_t x379 = UINT8_MAX;
	static int16_t x380 = 229;
	int32_t t94 = -1;

    t94 = (((x377==x378)|x379)&x380);

    if (t94 != 229) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MAX;
	int32_t x383 = -30571680;
	volatile int16_t x384 = INT16_MAX;
	static int32_t t95 = 5128278;

    t95 = (((x381==x382)|x383)&x384);

    if (t95 != 864) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	uint32_t x386 = 13939U;
	static int16_t x387 = -15;
	volatile int16_t x388 = INT16_MIN;
	int32_t t96 = 12912;

    t96 = (((x385==x386)|x387)&x388);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x392 = INT64_MAX;
	int64_t t97 = -7142330LL;

    t97 = (((x389==x390)|x391)&x392);

    if (t97 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MAX;
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;

    t98 = (((x393==x394)|x395)&x396);

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 10U;
	volatile int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MAX;
	int64_t x400 = 18254055835046885LL;
	int64_t t99 = 195376729LL;

    t99 = (((x397==x398)|x399)&x400);

    if (t99 != 5093LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 15595;
	uint16_t x402 = UINT16_MAX;
	uint32_t x403 = 0U;
	int32_t x404 = 895;
	volatile uint32_t t100 = 1812806917U;

    t100 = (((x401==x402)|x403)&x404);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x406 = 5940;
	int8_t x408 = 54;
	static volatile int32_t t101 = -2863111;

    t101 = (((x405==x406)|x407)&x408);

    if (t101 != 50) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static int16_t x410 = 61;
	int8_t x411 = -31;
	uint64_t x412 = 680LLU;
	uint64_t t102 = 477088211LLU;

    t102 = (((x409==x410)|x411)&x412);

    if (t102 != 672LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 26960537974432266LLU;
	uint16_t x414 = 3316U;
	volatile uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MIN;

    t103 = (((x413==x414)|x415)&x416);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 62386609LL;
	uint8_t x418 = 7U;
	int8_t x419 = 0;

    t104 = (((x417==x418)|x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	int32_t x423 = INT32_MIN;
	volatile int32_t t105 = INT32_MIN;

    t105 = (((x421==x422)|x423)&x424);

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint16_t x426 = UINT16_MAX;
	static int64_t x427 = -1LL;
	uint32_t x428 = UINT32_MAX;
	volatile int64_t t106 = -708921LL;

    t106 = (((x425==x426)|x427)&x428);

    if (t106 != 4294967295LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = INT8_MAX;
	volatile uint32_t x430 = UINT32_MAX;
	int16_t x431 = -1;
	static int8_t x432 = INT8_MIN;
	int32_t t107 = -777;

    t107 = (((x429==x430)|x431)&x432);

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	int8_t x434 = INT8_MAX;
	volatile int8_t x436 = -26;

    t108 = (((x433==x434)|x435)&x436);

    if (t108 != 4) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x438 = INT64_MIN;
	uint16_t x440 = 14620U;
	int32_t t109 = -12;

    t109 = (((x437==x438)|x439)&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static int32_t x442 = -742629060;
	static int32_t x443 = -1;
	int32_t x444 = 104417173;
	static int32_t t110 = -21;

    t110 = (((x441==x442)|x443)&x444);

    if (t110 != 104417173) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 100U;
	volatile uint32_t x446 = 8349810U;
	int32_t x447 = -1;
	uint8_t x448 = 0U;
	int32_t t111 = -42;

    t111 = (((x445==x446)|x447)&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	uint32_t x450 = 180276556U;
	volatile int32_t x451 = INT32_MIN;
	int8_t x452 = -1;
	static int32_t t112 = INT32_MIN;

    t112 = (((x449==x450)|x451)&x452);

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = -1;
	int64_t x456 = 17392230LL;

    t113 = (((x453==x454)|x455)&x456);

    if (t113 != 102LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 382;
	int32_t x458 = INT32_MIN;
	int8_t x459 = INT8_MAX;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t114 = -3;

    t114 = (((x457==x458)|x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	int32_t t115 = -40554462;

    t115 = (((x461==x462)|x463)&x464);

    if (t115 != 65536) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = 10249;
	uint32_t x466 = UINT32_MAX;
	static int8_t x467 = -1;
	uint32_t t116 = 908812139U;

    t116 = (((x465==x466)|x467)&x468);

    if (t116 != 160862340U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 56U;
	volatile uint8_t x470 = 20U;
	volatile uint64_t x471 = 1019222057465LLU;
	volatile uint64_t t117 = 43988LLU;

    t117 = (((x469==x470)|x471)&x472);

    if (t117 != 1019222057345LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = 29211;
	uint16_t x474 = 7U;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = UINT64_MAX;

    t118 = (((x473==x474)|x475)&x476);

    if (t118 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x479 = INT64_MAX;
	static int64_t t119 = INT64_MAX;

    t119 = (((x477==x478)|x479)&x480);

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 1480U;
	int8_t x483 = 0;
	volatile int64_t x484 = INT64_MIN;
	int64_t t120 = 14LL;

    t120 = (((x481==x482)|x483)&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = -1;
	volatile uint64_t x486 = 20177591378LLU;
	volatile int64_t x487 = -1LL;
	uint16_t x488 = UINT16_MAX;
	int64_t t121 = -8217004LL;

    t121 = (((x485==x486)|x487)&x488);

    if (t121 != 65535LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = 1;
	volatile int64_t x491 = -28920530962561688LL;
	volatile int64_t t122 = INT64_MIN;

    t122 = (((x489==x490)|x491)&x492);

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 203;
	int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MAX;
	static int8_t x496 = 1;

    t123 = (((x493==x494)|x495)&x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 265303777166217023LLU;
	uint16_t x498 = 36U;
	int32_t x499 = -1;
	static int16_t x500 = -2037;
	volatile int32_t t124 = -7291;

    t124 = (((x497==x498)|x499)&x500);

    if (t124 != -2037) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = -1;
	int64_t x503 = -1LL;
	static int64_t x504 = -1LL;
	int64_t t125 = 85398308169637LL;

    t125 = (((x501==x502)|x503)&x504);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = UINT32_MAX;
	static volatile uint8_t x506 = 56U;
	volatile int32_t x507 = INT32_MIN;

    t126 = (((x505==x506)|x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x512 = 11925128;
	volatile int32_t t127 = 39653;

    t127 = (((x509==x510)|x511)&x512);

    if (t127 != 8) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x513 = UINT8_MAX;
	static uint8_t x514 = 0U;
	int32_t x515 = INT32_MAX;
	int16_t x516 = INT16_MIN;
	int32_t t128 = -734;

    t128 = (((x513==x514)|x515)&x516);

    if (t128 != 2147450880) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = 15385U;
	uint8_t x518 = UINT8_MAX;
	volatile int64_t t129 = -25152885LL;

    t129 = (((x517==x518)|x519)&x520);

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int16_t x523 = -1;
	int32_t x524 = 452601;
	int32_t t130 = 85420722;

    t130 = (((x521==x522)|x523)&x524);

    if (t130 != 452601) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int64_t x526 = INT64_MIN;
	uint8_t x527 = 13U;

    t131 = (((x525==x526)|x527)&x528);

    if (t131 != 13U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x531 = INT32_MAX;
	int16_t x532 = INT16_MIN;

    t132 = (((x529==x530)|x531)&x532);

    if (t132 != 2147450880) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 0U;
	uint64_t x536 = 50990LLU;
	static volatile uint64_t t133 = 23113812LLU;

    t133 = (((x533==x534)|x535)&x536);

    if (t133 != 49184LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 51159LLU;
	volatile int8_t x538 = 15;
	int32_t x539 = INT32_MIN;
	int8_t x540 = -1;

    t134 = (((x537==x538)|x539)&x540);

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = 4;
	uint8_t x542 = UINT8_MAX;
	uint16_t x543 = 53U;
	uint8_t x544 = 16U;
	static int32_t t135 = 526955132;

    t135 = (((x541==x542)|x543)&x544);

    if (t135 != 16) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	uint8_t x547 = UINT8_MAX;
	static int32_t x548 = INT32_MIN;
	int32_t t136 = 116575;

    t136 = (((x545==x546)|x547)&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	int8_t x550 = -1;
	int16_t x551 = INT16_MIN;
	int32_t t137 = -5663;

    t137 = (((x549==x550)|x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int16_t x555 = INT16_MAX;

    t138 = (((x553==x554)|x555)&x556);

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	uint64_t x558 = 61LLU;
	uint8_t x559 = UINT8_MAX;
	volatile int64_t t139 = -1LL;

    t139 = (((x557==x558)|x559)&x560);

    if (t139 != 255LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = 33;
	volatile int32_t x562 = -1;
	int16_t x563 = INT16_MIN;
	volatile int8_t x564 = -13;
	int32_t t140 = -2738413;

    t140 = (((x561==x562)|x563)&x564);

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	volatile int32_t x567 = INT32_MAX;
	int64_t x568 = -1LL;
	volatile int64_t t141 = -13708LL;

    t141 = (((x565==x566)|x567)&x568);

    if (t141 != 2147483647LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x571 = 8U;
	int16_t x572 = INT16_MAX;
	volatile int32_t t142 = 2592251;

    t142 = (((x569==x570)|x571)&x572);

    if (t142 != 8) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -57;
	volatile int16_t x575 = 1;
	volatile uint16_t x576 = UINT16_MAX;
	int32_t t143 = 1;

    t143 = (((x573==x574)|x575)&x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = INT16_MIN;
	volatile int32_t x578 = -1;
	volatile uint16_t x580 = 11U;
	int32_t t144 = -210;

    t144 = (((x577==x578)|x579)&x580);

    if (t144 != 11) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	uint8_t x582 = UINT8_MAX;
	int16_t x584 = 3;
	volatile uint64_t t145 = 4624LLU;

    t145 = (((x581==x582)|x583)&x584);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int16_t x587 = INT16_MAX;
	uint64_t x588 = 50LLU;

    t146 = (((x585==x586)|x587)&x588);

    if (t146 != 50LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x589 = 49817U;
	int64_t x590 = 283047010100328275LL;
	uint16_t x591 = UINT16_MAX;
	int16_t x592 = 75;
	volatile int32_t t147 = 257;

    t147 = (((x589==x590)|x591)&x592);

    if (t147 != 75) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 27U;
	int64_t x595 = 8406LL;
	static uint64_t x596 = UINT64_MAX;
	uint64_t t148 = 3860888365335LLU;

    t148 = (((x593==x594)|x595)&x596);

    if (t148 != 8406LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x598 = 282859LLU;
	int16_t x600 = INT16_MIN;

    t149 = (((x597==x598)|x599)&x600);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x601 = 233U;
	static int8_t x602 = -1;
	volatile uint8_t x603 = 0U;
	volatile int32_t x604 = INT32_MIN;
	int32_t t150 = -1338;

    t150 = (((x601==x602)|x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MIN;
	int16_t x606 = -11568;
	int64_t t151 = -4755630LL;

    t151 = (((x605==x606)|x607)&x608);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 118308549U;
	static volatile int8_t x610 = -1;
	static int64_t x611 = -200475LL;
	static int64_t x612 = -834LL;
	int64_t t152 = 2151338598297039LL;

    t152 = (((x609==x610)|x611)&x612);

    if (t152 != -200540LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 393488U;
	int64_t x614 = -515555081LL;
	volatile int16_t x615 = 15442;
	int16_t x616 = INT16_MIN;
	volatile int32_t t153 = 4828;

    t153 = (((x613==x614)|x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x618 = 22LL;
	volatile int32_t x619 = INT32_MAX;
	int64_t x620 = INT64_MIN;

    t154 = (((x617==x618)|x619)&x620);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 25858874037233LL;
	volatile int8_t x622 = INT8_MIN;
	int64_t x623 = 1155003LL;
	volatile int8_t x624 = INT8_MAX;
	int64_t t155 = -660653LL;

    t155 = (((x621==x622)|x623)&x624);

    if (t155 != 59LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = 357U;
	static int32_t x626 = INT32_MAX;
	uint64_t x627 = 79121026849621498LLU;
	static int64_t x628 = -421756LL;
	volatile uint64_t t156 = 53196749LLU;

    t156 = (((x625==x626)|x627)&x628);

    if (t156 != 79121026849472640LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = 1019990;
	volatile int32_t x630 = INT32_MIN;
	static int16_t x631 = INT16_MAX;
	int16_t x632 = -128;
	static volatile int32_t t157 = 13;

    t157 = (((x629==x630)|x631)&x632);

    if (t157 != 32640) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = INT32_MAX;
	static volatile int8_t x634 = -1;
	static volatile uint32_t x636 = UINT32_MAX;
	volatile uint32_t t158 = 87918107U;

    t158 = (((x633==x634)|x635)&x636);

    if (t158 != 2287128U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	uint64_t x638 = UINT64_MAX;
	uint16_t x639 = 286U;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t159 = 1LLU;

    t159 = (((x637==x638)|x639)&x640);

    if (t159 != 287LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MAX;
	int16_t x643 = -7890;
	volatile int8_t x644 = INT8_MAX;
	volatile int32_t t160 = 14358988;

    t160 = (((x641==x642)|x643)&x644);

    if (t160 != 46) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MIN;
	volatile uint64_t x647 = UINT64_MAX;
	volatile uint8_t x648 = UINT8_MAX;

    t161 = (((x645==x646)|x647)&x648);

    if (t161 != 255LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x649 = 133533477584266LL;
	int8_t x650 = INT8_MIN;
	int8_t x651 = INT8_MAX;
	uint8_t x652 = UINT8_MAX;
	int32_t t162 = 83563845;

    t162 = (((x649==x650)|x651)&x652);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	int64_t x655 = -52836809125000547LL;
	int8_t x656 = -1;
	volatile int64_t t163 = -1763277501LL;

    t163 = (((x653==x654)|x655)&x656);

    if (t163 != -52836809125000547LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static int64_t x658 = -3590442764085235LL;
	volatile int64_t t164 = -70644472130964137LL;

    t164 = (((x657==x658)|x659)&x660);

    if (t164 != -32768LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	int32_t x662 = INT32_MIN;
	static volatile int32_t x663 = -4861;
	volatile int64_t x664 = -1LL;
	static volatile int64_t t165 = -417555794850407397LL;

    t165 = (((x661==x662)|x663)&x664);

    if (t165 != -4861LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 1482262629565389LLU;
	static volatile uint64_t x666 = 1532684LLU;
	static int32_t x667 = -1;
	uint16_t x668 = UINT16_MAX;

    t166 = (((x665==x666)|x667)&x668);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x670 = UINT32_MAX;
	static int64_t x671 = INT64_MIN;
	int32_t x672 = -47425517;
	volatile int64_t t167 = INT64_MIN;

    t167 = (((x669==x670)|x671)&x672);

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	volatile int64_t x674 = -1LL;
	uint64_t x675 = 59783760989LLU;
	int32_t x676 = INT32_MIN;

    t168 = (((x673==x674)|x675)&x676);

    if (t168 != 57982058496LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 0U;
	uint8_t x679 = 15U;
	int32_t x680 = 52866686;
	int32_t t169 = 14482567;

    t169 = (((x677==x678)|x679)&x680);

    if (t169 != 14) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = INT32_MIN;
	uint32_t x683 = 21980U;
	uint8_t x684 = 40U;
	uint32_t t170 = 1994U;

    t170 = (((x681==x682)|x683)&x684);

    if (t170 != 8U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = 34467058U;
	uint64_t x687 = 237045177LLU;
	static volatile int8_t x688 = -1;

    t171 = (((x685==x686)|x687)&x688);

    if (t171 != 237045177LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	uint64_t x692 = 15LLU;
	volatile uint64_t t172 = 20977028LLU;

    t172 = (((x689==x690)|x691)&x692);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint64_t x694 = 3295LLU;
	static volatile uint32_t x695 = 15602U;
	uint8_t x696 = UINT8_MAX;
	uint32_t t173 = 0U;

    t173 = (((x693==x694)|x695)&x696);

    if (t173 != 242U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 1U;
	int64_t x698 = -1LL;
	int64_t x699 = INT64_MAX;
	int64_t x700 = INT64_MIN;
	int64_t t174 = 2848162967323657LL;

    t174 = (((x697==x698)|x699)&x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 138U;
	int64_t x704 = INT64_MIN;
	static volatile int64_t t175 = INT64_MIN;

    t175 = (((x701==x702)|x703)&x704);

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 0U;
	int64_t x706 = INT64_MIN;
	uint8_t x707 = UINT8_MAX;
	uint32_t x708 = UINT32_MAX;
	volatile uint32_t t176 = 513820U;

    t176 = (((x705==x706)|x707)&x708);

    if (t176 != 255U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	static uint16_t x710 = UINT16_MAX;
	int16_t x711 = INT16_MAX;
	volatile int64_t x712 = INT64_MIN;
	int64_t t177 = -25860325499003493LL;

    t177 = (((x709==x710)|x711)&x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	int64_t x714 = -217283236783LL;
	int16_t x715 = -1;
	static int64_t x716 = -1LL;
	int64_t t178 = 28029919159066LL;

    t178 = (((x713==x714)|x715)&x716);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = UINT32_MAX;
	volatile int32_t x718 = -216;
	static volatile int64_t x719 = INT64_MAX;
	uint64_t x720 = UINT64_MAX;
	uint64_t t179 = 3585865045LLU;

    t179 = (((x717==x718)|x719)&x720);

    if (t179 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x721 = 1769121U;
	uint8_t x723 = UINT8_MAX;
	int32_t x724 = INT32_MIN;
	int32_t t180 = 894;

    t180 = (((x721==x722)|x723)&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int32_t x726 = INT32_MIN;
	volatile int8_t x727 = 0;
	static int16_t x728 = 226;
	volatile int32_t t181 = -2;

    t181 = (((x725==x726)|x727)&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	int64_t x730 = INT64_MIN;
	int64_t x731 = -1LL;
	uint32_t x732 = 1104U;
	volatile int64_t t182 = -59603LL;

    t182 = (((x729==x730)|x731)&x732);

    if (t182 != 1104LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 134809821305010LL;
	int8_t x735 = 34;
	int8_t x736 = -1;

    t183 = (((x733==x734)|x735)&x736);

    if (t183 != 34) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	int16_t x738 = INT16_MIN;
	int64_t x739 = -52793058017LL;
	uint8_t x740 = 6U;
	int64_t t184 = -3572LL;

    t184 = (((x737==x738)|x739)&x740);

    if (t184 != 6LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	volatile int64_t x742 = INT64_MIN;
	uint64_t x743 = 19696642888LLU;
	static int16_t x744 = -1;
	static uint64_t t185 = 341LLU;

    t185 = (((x741==x742)|x743)&x744);

    if (t185 != 19696642888LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int8_t x746 = 11;
	uint16_t x747 = 484U;
	uint8_t x748 = 48U;
	static int32_t t186 = 1;

    t186 = (((x745==x746)|x747)&x748);

    if (t186 != 32) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x749 = 14U;
	static uint8_t x750 = UINT8_MAX;
	static int16_t x751 = 1;
	volatile int32_t t187 = 9307930;

    t187 = (((x749==x750)|x751)&x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	int8_t x754 = -1;
	int64_t x755 = INT64_MIN;
	int8_t x756 = 43;

    t188 = (((x753==x754)|x755)&x756);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = INT16_MIN;
	uint32_t x759 = UINT32_MAX;
	volatile int8_t x760 = INT8_MIN;

    t189 = (((x757==x758)|x759)&x760);

    if (t189 != 4294967168U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = UINT16_MAX;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = 237815791;

    t190 = (((x761==x762)|x763)&x764);

    if (t190 != 193) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x765 = 2336672162043795LLU;
	int16_t x766 = INT16_MAX;

    t191 = (((x765==x766)|x767)&x768);

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	uint32_t x770 = UINT32_MAX;
	volatile int32_t x771 = -6471586;
	int16_t x772 = -1;
	int32_t t192 = 1169;

    t192 = (((x769==x770)|x771)&x772);

    if (t192 != -6471586) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 7;
	int16_t x776 = INT16_MIN;

    t193 = (((x773==x774)|x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = INT16_MIN;
	int32_t x778 = INT32_MAX;
	volatile int32_t x779 = INT32_MIN;
	int8_t x780 = -21;
	int32_t t194 = INT32_MIN;

    t194 = (((x777==x778)|x779)&x780);

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -661181573432133958LL;
	uint32_t x782 = 225280U;
	uint16_t x783 = UINT16_MAX;
	int32_t t195 = 459501606;

    t195 = (((x781==x782)|x783)&x784);

    if (t195 != 65408) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int32_t x786 = -1;
	uint16_t x787 = UINT16_MAX;
	int16_t x788 = -1306;
	volatile int32_t t196 = -75308;

    t196 = (((x785==x786)|x787)&x788);

    if (t196 != 64230) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	int32_t x792 = -34;
	int32_t t197 = 23395822;

    t197 = (((x789==x790)|x791)&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	static uint16_t x794 = 225U;
	uint8_t x795 = 9U;
	static int64_t x796 = 17749973402331077LL;
	int64_t t198 = -145218588609LL;

    t198 = (((x793==x794)|x795)&x796);

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	volatile int32_t x798 = -1;
	volatile int64_t x799 = INT64_MIN;
	int8_t x800 = -19;
	volatile int64_t t199 = INT64_MIN;

    t199 = (((x797==x798)|x799)&x800);

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

