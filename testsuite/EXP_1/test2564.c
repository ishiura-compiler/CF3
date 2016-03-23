
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

static int8_t x2 = -1;
static int8_t x10 = -1;
int16_t x12 = INT16_MIN;
volatile int64_t t3 = -48380904LL;
int8_t x19 = INT8_MIN;
static int16_t x31 = INT16_MAX;
int16_t x32 = INT16_MIN;
int64_t x34 = INT64_MIN;
int8_t x38 = INT8_MIN;
int8_t x49 = -1;
volatile int16_t x59 = INT16_MAX;
volatile int64_t t13 = 113696693225LL;
volatile uint16_t x64 = 0U;
int64_t x67 = -23LL;
uint32_t t16 = 6819176U;
int64_t x75 = INT64_MAX;
uint32_t x77 = UINT32_MAX;
int64_t x85 = INT64_MIN;
static uint64_t x88 = UINT64_MAX;
uint32_t x91 = 7934034U;
int32_t x96 = INT32_MAX;
int8_t x97 = -1;
int64_t x100 = INT64_MAX;
int64_t x102 = INT64_MIN;
int64_t t24 = -1LL;
int16_t x113 = -1;
int16_t x114 = -126;
uint32_t x115 = 86U;
uint32_t x123 = UINT32_MAX;
static uint32_t x124 = UINT32_MAX;
int32_t x131 = INT32_MAX;
int16_t x132 = INT16_MIN;
static volatile uint64_t t30 = 2194LLU;
static int16_t x138 = INT16_MIN;
volatile uint64_t t32 = 1919535LLU;
int64_t x149 = INT64_MAX;
int64_t x151 = -340LL;
static uint32_t x155 = UINT32_MAX;
volatile int64_t t35 = -1750LL;
volatile int32_t x160 = INT32_MIN;
static int16_t x167 = -1;
volatile int16_t x176 = INT16_MIN;
volatile uint16_t x182 = 7759U;
static int16_t x186 = -1;
static int32_t t43 = -785700;
uint32_t x189 = UINT32_MAX;
volatile int64_t t45 = 279580997572LL;
uint16_t x198 = 0U;
int64_t t46 = -1826310704LL;
uint16_t x201 = 254U;
int16_t x202 = INT16_MIN;
static int32_t t47 = -8;
uint32_t x206 = UINT32_MAX;
volatile int64_t t48 = -578076056032821968LL;
uint32_t x211 = 305748U;
volatile int64_t t52 = 830936LL;
uint16_t x232 = 202U;
int64_t x237 = 7417102555294709LL;
volatile uint64_t t54 = 526042LLU;
int8_t x245 = INT8_MAX;
int32_t x249 = 34;
volatile int16_t x251 = INT16_MAX;
static int32_t x254 = 47245717;
int16_t x255 = -1;
int64_t t60 = 0LL;
volatile int64_t x269 = -17923034LL;
uint32_t x277 = 635U;
static uint32_t t63 = 149972964U;
volatile int64_t t64 = 893856640629LL;
volatile int32_t t65 = -27;
uint8_t x302 = UINT8_MAX;
uint32_t x304 = 5050U;
uint32_t t68 = 1161U;
int16_t x305 = INT16_MIN;
static volatile uint64_t t70 = 110372834LLU;
volatile int8_t x315 = INT8_MIN;
static int64_t x316 = -3LL;
int64_t x317 = -1LL;
volatile int32_t t74 = -805;
int8_t x338 = -1;
int8_t x341 = INT8_MIN;
int64_t x342 = -1546533604027996LL;
static int64_t x349 = INT64_MIN;
int16_t x355 = 4857;
static uint8_t x358 = 127U;
uint64_t t81 = 2065711874319LLU;
volatile uint64_t t82 = 68061147471701882LLU;
int16_t x371 = -1;
volatile uint64_t t84 = 878042LLU;
uint64_t t85 = 6500906610827918388LLU;
volatile int16_t x378 = INT16_MAX;
int16_t x379 = 1;
volatile int32_t x383 = INT32_MAX;
uint8_t x392 = 107U;
static int64_t x394 = INT64_MIN;
int8_t x403 = INT8_MIN;
uint32_t x407 = 36463335U;
int32_t x414 = -1;
static volatile uint16_t x415 = 72U;
volatile int64_t t95 = -131851567053633721LL;
static int16_t x418 = 1;
volatile int32_t x421 = -4;
int16_t x423 = INT16_MAX;
int32_t x434 = -147;
static uint64_t x435 = UINT64_MAX;
static uint16_t x437 = UINT16_MAX;
int8_t x457 = INT8_MIN;
uint16_t x459 = 98U;
uint16_t x460 = 86U;
volatile int32_t x462 = INT32_MIN;
int64_t x473 = -1LL;
volatile int64_t t108 = 807968245631206LL;
int32_t x479 = 20;
int64_t t109 = -14795028122294LL;
uint32_t x481 = 193532003U;
int16_t x501 = INT16_MAX;
int8_t x505 = -15;
int32_t x507 = INT32_MAX;
uint32_t x515 = 7U;
int16_t x520 = INT16_MIN;
volatile uint64_t x530 = 4097737888LLU;
uint64_t t119 = 36709485989542LLU;
uint64_t t122 = 29LLU;
int8_t x550 = -2;
int64_t x553 = -121167896784051064LL;
int32_t x554 = 723046;
int16_t x555 = INT16_MIN;
static int8_t x557 = INT8_MAX;
static volatile int32_t x568 = 44;
int64_t t129 = -485LL;
uint64_t x585 = 1LLU;
uint8_t x586 = 10U;
static volatile int32_t x589 = 45957734;
uint8_t x590 = 32U;
volatile int32_t t132 = 1254599;
static uint64_t x599 = 1405739220581LLU;
uint64_t t133 = 940321746595549LLU;
int16_t x601 = INT16_MAX;
uint64_t x602 = 535416879933824LLU;
int64_t x603 = INT64_MIN;
volatile uint64_t t134 = 13804375452LLU;
uint16_t x612 = UINT16_MAX;
static volatile int32_t t136 = -26;
volatile int32_t x617 = INT32_MAX;
uint8_t x618 = 1U;
uint64_t x628 = 12672038206195LLU;
uint64_t x630 = 41964621454760466LLU;
volatile int64_t x637 = -1223263128339LL;
int64_t x641 = INT64_MIN;
uint64_t x642 = UINT64_MAX;
volatile int32_t x643 = INT32_MIN;
uint64_t t144 = 3385888898536594360LLU;
int64_t x648 = INT64_MIN;
int64_t x671 = INT64_MIN;
uint16_t x682 = 602U;
uint8_t x696 = UINT8_MAX;
uint32_t x697 = UINT32_MAX;
int16_t x699 = INT16_MAX;
int64_t x702 = -1LL;
uint32_t x703 = 71758499U;
uint16_t x704 = UINT16_MAX;
uint16_t x710 = 977U;
uint16_t x713 = UINT16_MAX;
volatile int64_t x716 = -1LL;
int16_t x728 = -1;
int32_t x731 = INT32_MIN;
int64_t x742 = -1LL;
static volatile int64_t x744 = INT64_MIN;
uint32_t x751 = UINT32_MAX;
static volatile uint64_t t166 = 811244604LLU;
uint32_t x753 = 1013268U;
int32_t x758 = INT32_MIN;
uint64_t x759 = 13784LLU;
int8_t x761 = INT8_MAX;
uint64_t t169 = 585139226809969LLU;
int16_t x772 = -1;
uint16_t x778 = 29U;
uint32_t x779 = 3U;
int32_t x785 = 6449;
int32_t x790 = -1;
volatile uint32_t x791 = 13124U;
static uint64_t x792 = 3019LLU;
int64_t t177 = 479640712303LL;
int16_t x812 = 3;
int32_t x817 = -1;
int16_t x818 = INT16_MAX;
volatile int16_t x826 = INT16_MIN;
uint8_t x835 = 1U;
int32_t t187 = -122;
int16_t x849 = INT16_MIN;
uint64_t x850 = UINT64_MAX;
int32_t x853 = 80;
int32_t x860 = -1;
int64_t x863 = INT64_MAX;
static int32_t x874 = INT32_MAX;
uint32_t x875 = UINT32_MAX;
volatile int64_t t193 = -327871239818LL;
int8_t x879 = 1;
volatile int8_t x882 = -1;
static uint64_t x894 = UINT64_MAX;
static uint64_t x896 = 1283820359959939LLU;


void f0(void) {
    	static int32_t x1 = INT32_MAX;
	static volatile uint64_t x3 = 231454625954LLU;
	static volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 112544LLU;

    t0 = (((x1^x2)-x3)-x4);

    if (t0 != 18446743840107442015LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 1;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 1U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -251311082;

    t1 = (((x5^x6)-x7)-x8);

    if (t1 != 32640) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -166511LL;
	uint8_t x11 = UINT8_MAX;
	int64_t t2 = 372LL;

    t2 = (((x9^x10)-x11)-x12);

    if (t2 != 199023LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 1LL;
	volatile int64_t x14 = 55287LL;
	volatile int16_t x15 = -51;
	volatile int8_t x16 = 1;

    t3 = (((x13^x14)-x15)-x16);

    if (t3 != 55336LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int32_t x18 = 0;
	int64_t x20 = INT64_MAX;
	int64_t t4 = 196128004LL;

    t4 = (((x17^x18)-x19)-x20);

    if (t4 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x21 = 8560030024380786LLU;
	static volatile uint8_t x22 = UINT8_MAX;
	int16_t x23 = -1076;
	int32_t x24 = INT32_MIN;
	uint64_t t5 = 10699LLU;

    t5 = (((x21^x22)-x23)-x24);

    if (t5 != 8560032171865537LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = UINT16_MAX;
	static volatile int32_t x30 = INT32_MIN;
	static int32_t t6 = -3;

    t6 = (((x29^x30)-x31)-x32);

    if (t6 != -2147418112) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 20LLU;
	static int32_t x35 = 95;
	static volatile int16_t x36 = -27;
	static volatile uint64_t t7 = 4385457LLU;

    t7 = (((x33^x34)-x35)-x36);

    if (t7 != 9223372036854775760LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = -1;
	int64_t x39 = INT64_MAX;
	int32_t x40 = -392751;
	volatile int64_t t8 = 112276293LL;

    t8 = (((x37^x38)-x39)-x40);

    if (t8 != -9223372036854382929LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	volatile int16_t x42 = 0;
	int64_t x43 = -83780LL;
	static int16_t x44 = INT16_MIN;
	int64_t t9 = -35363416206563LL;

    t9 = (((x41^x42)-x43)-x44);

    if (t9 != 116547LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 5395LLU;
	static int32_t x46 = 51949311;
	int16_t x47 = 7293;
	int16_t x48 = INT16_MIN;
	static volatile uint64_t t10 = 5003996LLU;

    t10 = (((x45^x46)-x47)-x48);

    if (t10 != 51978095LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x50 = 1U;
	static uint8_t x51 = 74U;
	volatile int8_t x52 = 22;
	int32_t t11 = -927;

    t11 = (((x49^x50)-x51)-x52);

    if (t11 != -98) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x53 = -128306183333LL;
	int8_t x54 = 19;
	uint64_t x55 = 635700413997805LLU;
	int32_t x56 = -1;
	uint64_t t12 = 8048549521954695958LLU;

    t12 = (((x53^x54)-x55)-x56);

    if (t12 != 18446108244989370460LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -1838950561151LL;
	static volatile int8_t x58 = INT8_MIN;
	uint16_t x60 = UINT16_MAX;

    t13 = (((x57^x58)-x59)-x60);

    if (t13 != 1838950462723LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -49325075;
	int32_t x62 = INT32_MIN;
	static int16_t x63 = -793;
	volatile int32_t t14 = -103;

    t14 = (((x61^x62)-x63)-x64);

    if (t14 != 2098159366) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = UINT16_MAX;
	volatile int8_t x66 = 13;
	int16_t x68 = INT16_MIN;
	volatile int64_t t15 = 3LL;

    t15 = (((x65^x66)-x67)-x68);

    if (t15 != 98313LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MIN;
	volatile int8_t x71 = INT8_MAX;
	volatile uint32_t x72 = UINT32_MAX;

    t16 = (((x69^x70)-x71)-x72);

    if (t16 != 4294967170U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MAX;
	static int8_t x74 = 5;
	uint16_t x76 = 1705U;
	volatile int64_t t17 = -65952026728LL;

    t17 = (((x73^x74)-x75)-x76);

    if (t17 != -9223372036854744750LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x78 = INT16_MIN;
	volatile int8_t x79 = INT8_MAX;
	int32_t x80 = -1;
	static uint32_t t18 = 941994U;

    t18 = (((x77^x78)-x79)-x80);

    if (t18 != 32641U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 5U;
	static int32_t x82 = -1;
	volatile int32_t x83 = -13;
	uint32_t x84 = 67512U;
	volatile uint32_t t19 = 11U;

    t19 = (((x81^x82)-x83)-x84);

    if (t19 != 4294899791U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x86 = 73U;
	volatile int64_t x87 = INT64_MIN;
	volatile uint64_t t20 = 1LLU;

    t20 = (((x85^x86)-x87)-x88);

    if (t20 != 74LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 464698448U;
	volatile uint8_t x90 = UINT8_MAX;
	static int8_t x92 = INT8_MIN;
	volatile uint32_t t21 = 1000601U;

    t21 = (((x89^x90)-x91)-x92);

    if (t21 != 456764637U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -7768079416542327LL;
	int64_t x94 = -1LL;
	int64_t x95 = 3LL;
	static int64_t t22 = 70903987593628004LL;

    t22 = (((x93^x94)-x95)-x96);

    if (t22 != 7768077269058676LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MIN;
	volatile int64_t t23 = 12LL;

    t23 = (((x97^x98)-x99)-x100);

    if (t23 != -2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x101 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 6;

    t24 = (((x101^x102)-x103)-x104);

    if (t24 != -9223372032559775751LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MAX;
	volatile uint32_t x110 = 229650430U;
	volatile int16_t x111 = INT16_MAX;
	uint16_t x112 = 265U;
	static int64_t t25 = -7529LL;

    t25 = (((x109^x110)-x111)-x112);

    if (t25 != 9223372036625092345LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x116 = UINT32_MAX;
	static volatile uint32_t t26 = 51U;

    t26 = (((x113^x114)-x115)-x116);

    if (t26 != 40U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = 15659U;
	int16_t x118 = -1;
	volatile int64_t x119 = -1LL;
	int64_t x120 = 6486592749341969LL;
	volatile int64_t t27 = 360812LL;

    t27 = (((x117^x118)-x119)-x120);

    if (t27 != -6486592749357628LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = 9;
	volatile int8_t x122 = INT8_MAX;
	volatile uint32_t t28 = 362805U;

    t28 = (((x121^x122)-x123)-x124);

    if (t28 != 120U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = 72;
	uint8_t x126 = 18U;
	volatile uint32_t x127 = 226248272U;
	int8_t x128 = 19;
	static volatile uint32_t t29 = 108929U;

    t29 = (((x125^x126)-x127)-x128);

    if (t29 != 4068719095U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = 2434072U;
	uint64_t x130 = UINT64_MAX;

    t30 = (((x129^x130)-x131)-x132);

    if (t30 != 18446744071559666664LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = -13;
	uint32_t x134 = 1U;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile uint32_t t31 = 261U;

    t31 = (((x133^x134)-x135)-x136);

    if (t31 != 4294836212U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = -1;
	int8_t x139 = -3;
	uint64_t x140 = 87LLU;

    t32 = (((x137^x138)-x139)-x140);

    if (t32 != 32683LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 499721152929LLU;
	int64_t x148 = INT64_MIN;
	static volatile uint64_t t33 = 476430LLU;

    t33 = (((x145^x146)-x147)-x148);

    if (t33 != 9223371534986204766LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x150 = INT32_MIN;
	int32_t x152 = -171873868;
	volatile int64_t t34 = 8LL;

    t34 = (((x149^x150)-x151)-x152);

    if (t34 != -9223372034535417953LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x153 = -474059LL;
	int64_t x154 = INT64_MIN;
	volatile uint16_t x156 = UINT16_MAX;

    t35 = (((x153^x154)-x155)-x156);

    if (t35 != 9223372032559268919LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x157 = INT8_MIN;
	volatile int64_t x158 = INT64_MAX;
	uint64_t x159 = 5963940376531935802LLU;
	volatile uint64_t t36 = 34618319220099LLU;

    t36 = (((x157^x158)-x159)-x160);

    if (t36 != 3259431662470323781LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = 203230681150809417LL;
	int32_t x162 = -24;
	int16_t x163 = INT16_MIN;
	static volatile uint32_t x164 = 162U;
	volatile int64_t t37 = -1322193186466LL;

    t37 = (((x161^x162)-x163)-x164);

    if (t37 != -203230681150776833LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -5213;
	static uint16_t x166 = 32383U;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t38 = 5108;

    t38 = (((x165^x166)-x167)-x168);

    if (t38 != -92706) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = 353U;
	int64_t x170 = -1LL;
	volatile int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	static int64_t t39 = -743831LL;

    t39 = (((x169^x170)-x171)-x172);

    if (t39 != 32287LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x173 = 5755U;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = 1;
	uint32_t t40 = 192784626U;

    t40 = (((x173^x174)-x175)-x176);

    if (t40 != 27011U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = 2015;
	static uint64_t x180 = 62662LLU;
	uint64_t t41 = 384LLU;

    t41 = (((x177^x178)-x179)-x180);

    if (t41 != 9223372039002194778LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = INT32_MIN;
	int32_t x183 = 28;
	uint64_t x184 = 398323LLU;
	uint64_t t42 = 2317077326894419281LLU;

    t42 = (((x181^x182)-x183)-x184);

    if (t42 != 18446744071561677376LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x185 = UINT8_MAX;
	static uint8_t x187 = 10U;
	uint8_t x188 = UINT8_MAX;

    t43 = (((x185^x186)-x187)-x188);

    if (t43 != -521) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x190 = -294;
	int64_t x191 = -11851507479579LL;
	volatile uint8_t x192 = 18U;
	int64_t t44 = -368116626318LL;

    t44 = (((x189^x190)-x191)-x192);

    if (t44 != 11851507479854LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x193 = -1;
	int8_t x194 = 3;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MAX;

    t45 = (((x193^x194)-x195)-x196);

    if (t45 != -9223372036854743043LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = 8481579U;
	int64_t x199 = -1497171820LL;
	volatile uint32_t x200 = UINT32_MAX;

    t46 = (((x197^x198)-x199)-x200);

    if (t46 != -2789313896LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x203 = -1;
	static volatile int8_t x204 = -1;

    t47 = (((x201^x202)-x203)-x204);

    if (t47 != -32512) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = INT64_MIN;
	uint8_t x207 = 57U;
	int8_t x208 = INT8_MAX;

    t48 = (((x205^x206)-x207)-x208);

    if (t48 != -9223372032559808697LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x209 = -300;
	int8_t x210 = -1;
	int16_t x212 = 5;
	volatile uint32_t t49 = 287U;

    t49 = (((x209^x210)-x211)-x212);

    if (t49 != 4294661842U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x213 = 11896U;
	uint32_t x214 = 1564U;
	int64_t x215 = INT64_MAX;
	volatile uint8_t x216 = UINT8_MAX;
	volatile int64_t t50 = 3789916LL;

    t50 = (((x213^x214)-x215)-x216);

    if (t50 != -9223372036854765722LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x217 = 7LL;
	volatile int64_t x218 = -2906488828590198233LL;
	int8_t x219 = -1;
	int16_t x220 = INT16_MIN;
	volatile int64_t t51 = -21223711LL;

    t51 = (((x217^x218)-x219)-x220);

    if (t51 != -2906488828590165471LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x221 = -1109434;
	int8_t x222 = INT8_MIN;
	volatile int64_t x223 = INT64_MAX;
	int16_t x224 = INT16_MIN;

    t52 = (((x221^x222)-x223)-x224);

    if (t52 != -9223372036853633593LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = -6277;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = -12524526;
	int32_t t53 = -36316;

    t53 = (((x229^x230)-x231)-x232);

    if (t53 != 12465064) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x238 = INT16_MIN;
	static int32_t x239 = INT32_MAX;
	uint64_t x240 = 933279603778LLU;

    t54 = (((x237^x238)-x239)-x240);

    if (t54 != 18439326035727159220LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x241 = 93U;
	uint32_t x242 = UINT32_MAX;
	uint16_t x243 = 1822U;
	int8_t x244 = -1;
	uint32_t t55 = 898U;

    t55 = (((x241^x242)-x243)-x244);

    if (t55 != 4294965381U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x246 = 1174721U;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = 83076625974674LLU;
	uint64_t t56 = 10LLU;

    t56 = (((x245^x246)-x247)-x248);

    if (t56 != 18446660999232235308LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x250 = UINT64_MAX;
	uint16_t x252 = 341U;
	uint64_t t57 = 207786451194354LLU;

    t57 = (((x249^x250)-x251)-x252);

    if (t57 != 18446744073709518473LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x253 = INT8_MIN;
	int32_t x256 = -1182067;
	int32_t t58 = 0;

    t58 = (((x253^x254)-x255)-x256);

    if (t58 != -46063735) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	uint16_t x264 = UINT16_MAX;
	static volatile uint32_t t59 = 254326505U;

    t59 = (((x261^x262)-x263)-x264);

    if (t59 != 4294868994U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x265 = 22502U;
	int64_t x266 = INT64_MIN;
	static volatile int8_t x267 = INT8_MAX;
	volatile int64_t x268 = INT64_MIN;

    t60 = (((x265^x266)-x267)-x268);

    if (t60 != 22375LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x270 = -1;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MAX;
	volatile uint64_t t61 = 128002LLU;

    t61 = (((x269^x270)-x271)-x272);

    if (t61 != 9223372036872698843LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x273 = INT32_MIN;
	static volatile uint32_t x274 = 442932U;
	uint32_t x275 = 57U;
	int64_t x276 = INT64_MAX;
	static int64_t t62 = 1LL;

    t62 = (((x273^x274)-x275)-x276);

    if (t62 != -9223372034706849284LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;

    t63 = (((x277^x278)-x279)-x280);

    if (t63 != 32124U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x285 = INT32_MIN;
	static int64_t x286 = -1LL;
	volatile int16_t x287 = INT16_MAX;
	int8_t x288 = -1;

    t64 = (((x285^x286)-x287)-x288);

    if (t64 != 2147450881LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = -453282;
	uint16_t x290 = 94U;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;

    t65 = (((x289^x290)-x291)-x292);

    if (t65 != -420480) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x293 = 21922720662981LL;
	int16_t x294 = -1;
	uint8_t x295 = 59U;
	uint64_t x296 = 226389873LLU;
	static uint64_t t66 = 39853752036983LLU;

    t66 = (((x293^x294)-x295)-x296);

    if (t66 != 18446722150762498702LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x297 = 5U;
	static volatile int16_t x298 = -1;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -4;
	int32_t t67 = -149;

    t67 = (((x297^x298)-x299)-x300);

    if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x303 = INT8_MIN;

    t68 = (((x301^x302)-x303)-x304);

    if (t68 != 4294962118U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x306 = 18U;
	int8_t x307 = -1;
	volatile uint32_t x308 = 4U;
	static uint32_t t69 = 8597100U;

    t69 = (((x305^x306)-x307)-x308);

    if (t69 != 4294934543U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x309 = -1;
	static uint16_t x310 = 31U;
	uint64_t x311 = 25893413105221LLU;
	int16_t x312 = INT16_MAX;

    t70 = (((x309^x310)-x311)-x312);

    if (t70 != 18446718180296413596LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x313 = 0U;
	int8_t x314 = INT8_MAX;
	int64_t t71 = 16543LL;

    t71 = (((x313^x314)-x315)-x316);

    if (t71 != 258LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x318 = INT8_MAX;
	int64_t x319 = -811952355LL;
	int32_t x320 = 1;
	static int64_t t72 = 813LL;

    t72 = (((x317^x318)-x319)-x320);

    if (t72 != 811952226LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x321 = UINT64_MAX;
	uint64_t x322 = 871122789494LLU;
	int64_t x323 = INT64_MIN;
	static uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t73 = 896415LLU;

    t73 = (((x321^x322)-x323)-x324);

    if (t73 != 9223371165731986314LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x325 = -1;
	volatile int32_t x326 = 0;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;

    t74 = (((x325^x326)-x327)-x328);

    if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = 13LL;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MAX;
	int32_t x332 = -1;
	volatile int64_t t75 = 45398414141049LL;

    t75 = (((x329^x330)-x331)-x332);

    if (t75 != -32524LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x337 = 1921207042640LLU;
	int32_t x339 = INT32_MAX;
	int32_t x340 = -2;
	volatile uint64_t t76 = 301300927671217945LLU;

    t76 = (((x337^x338)-x339)-x340);

    if (t76 != 18446742150355025330LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x343 = UINT64_MAX;
	static int64_t x344 = INT64_MAX;
	uint64_t t77 = 73193573662LLU;

    t77 = (((x341^x342)-x343)-x344);

    if (t77 != 9224918570458803750LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x345 = UINT32_MAX;
	volatile int8_t x346 = 20;
	int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	volatile int64_t t78 = 113495919LL;

    t78 = (((x345^x346)-x347)-x348);

    if (t78 != -9223372032559808404LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x350 = INT64_MIN;
	int64_t x351 = -1LL;
	int32_t x352 = -15;
	int64_t t79 = 835LL;

    t79 = (((x349^x350)-x351)-x352);

    if (t79 != 16LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x353 = -1;
	static uint64_t x354 = 150401LLU;
	int8_t x356 = -5;
	volatile uint64_t t80 = 55642735033699977LLU;

    t80 = (((x353^x354)-x355)-x356);

    if (t80 != 18446744073709396362LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x357 = 49409976382229LLU;
	int32_t x359 = 14;
	int16_t x360 = INT16_MAX;

    t81 = (((x357^x358)-x359)-x360);

    if (t81 != 49409976349533LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x361 = 1504;
	static int32_t x362 = -55415675;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MAX;

    t82 = (((x361^x362)-x363)-x364);

    if (t82 != 18446744073654135015LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	int32_t x367 = -1;
	int16_t x368 = INT16_MAX;
	volatile int32_t t83 = -6;

    t83 = (((x365^x366)-x367)-x368);

    if (t83 != -126) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile int16_t x370 = -650;
	int64_t x372 = INT64_MIN;

    t84 = (((x369^x370)-x371)-x372);

    if (t84 != 9223372036854776458LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x373 = -1;
	volatile int32_t x374 = INT32_MAX;
	volatile int64_t x375 = INT64_MIN;
	uint64_t x376 = UINT64_MAX;

    t85 = (((x373^x374)-x375)-x376);

    if (t85 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x377 = -1;
	int64_t x380 = 319022969LL;
	static volatile int64_t t86 = 95507218408LL;

    t86 = (((x377^x378)-x379)-x380);

    if (t86 != -319055738LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	volatile int8_t x384 = 1;
	int64_t t87 = -123161125398593746LL;

    t87 = (((x381^x382)-x383)-x384);

    if (t87 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x385 = -1;
	int32_t x386 = 1;
	uint64_t x387 = 3697157LLU;
	int16_t x388 = -8336;
	volatile uint64_t t88 = 1478850150LLU;

    t88 = (((x385^x386)-x387)-x388);

    if (t88 != 18446744073705862793LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = -1;
	int64_t x390 = -2858160LL;
	int64_t x391 = -1LL;
	int64_t t89 = -115520659234820LL;

    t89 = (((x389^x390)-x391)-x392);

    if (t89 != 2858053LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x393 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	volatile uint32_t x396 = 164U;
	int64_t t90 = 4050550LL;

    t90 = (((x393^x394)-x395)-x396);

    if (t90 != 9223372034707292124LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x397 = INT8_MIN;
	int64_t x398 = 2114453LL;
	uint8_t x399 = UINT8_MAX;
	uint8_t x400 = UINT8_MAX;
	volatile int64_t t91 = 38812LL;

    t91 = (((x397^x398)-x399)-x400);

    if (t91 != -2115049LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = INT16_MAX;
	static uint64_t x402 = 179218197LLU;
	uint8_t x404 = 38U;
	static volatile uint64_t t92 = 312016829856LLU;

    t92 = (((x401^x402)-x403)-x404);

    if (t92 != 179231044LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x405 = -1;
	int64_t x406 = INT64_MIN;
	uint16_t x408 = 33U;
	volatile int64_t t93 = -1LL;

    t93 = (((x405^x406)-x407)-x408);

    if (t93 != 9223372036818312439LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	volatile uint8_t x411 = UINT8_MAX;
	int64_t x412 = INT64_MAX;
	static volatile int64_t t94 = -28555811523539LL;

    t94 = (((x409^x410)-x411)-x412);

    if (t94 != -33022LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x413 = 536;
	int64_t x416 = INT64_MIN;

    t95 = (((x413^x414)-x415)-x416);

    if (t95 != 9223372036854775199LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x417 = 9557304087531223LL;
	uint32_t x419 = 37U;
	int64_t x420 = 120960590305261LL;
	volatile int64_t t96 = 916696366184018LL;

    t96 = (((x417^x418)-x419)-x420);

    if (t96 != 9436343497225924LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x422 = 12U;
	int16_t x424 = INT16_MAX;
	volatile int32_t t97 = 11896;

    t97 = (((x421^x422)-x423)-x424);

    if (t97 != -65550) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x429 = -1;
	volatile uint16_t x430 = 7U;
	uint32_t x431 = UINT32_MAX;
	volatile uint32_t x432 = 50U;
	volatile uint32_t t98 = 49275690U;

    t98 = (((x429^x430)-x431)-x432);

    if (t98 != 4294967239U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x433 = -1;
	volatile uint64_t x436 = 2601336701197LLU;
	volatile uint64_t t99 = 294LLU;

    t99 = (((x433^x434)-x435)-x436);

    if (t99 != 18446741472372850566LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x438 = UINT8_MAX;
	int64_t x439 = -1156139LL;
	uint16_t x440 = UINT16_MAX;
	static volatile int64_t t100 = -469834045LL;

    t100 = (((x437^x438)-x439)-x440);

    if (t100 != 1155884LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x441 = -105879043LL;
	volatile uint32_t x442 = 727U;
	volatile int8_t x443 = INT8_MAX;
	int64_t x444 = INT64_MIN;
	volatile int64_t t101 = 6553829LL;

    t101 = (((x441^x442)-x443)-x444);

    if (t101 != 9223372036748896939LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x449 = UINT16_MAX;
	int8_t x450 = -1;
	uint64_t x451 = 40681543LLU;
	int64_t x452 = 32192LL;
	uint64_t t102 = 3616595LLU;

    t102 = (((x449^x450)-x451)-x452);

    if (t102 != 18446744073668772345LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x453 = 54459091982LLU;
	static uint32_t x454 = UINT32_MAX;
	volatile uint8_t x455 = 4U;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t103 = 804822378688LLU;

    t103 = (((x453^x454)-x455)-x456);

    if (t103 != 9223372089769866222LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x458 = 0U;
	static int32_t t104 = 577;

    t104 = (((x457^x458)-x459)-x460);

    if (t104 != -312) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x461 = 196620154LLU;
	int16_t x463 = 105;
	int32_t x464 = INT32_MIN;
	volatile uint64_t t105 = 16073328066365181LLU;

    t105 = (((x461^x462)-x463)-x464);

    if (t105 != 196620049LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x465 = UINT8_MAX;
	volatile int8_t x466 = INT8_MIN;
	uint16_t x467 = 25U;
	uint8_t x468 = UINT8_MAX;
	static int32_t t106 = -616551499;

    t106 = (((x465^x466)-x467)-x468);

    if (t106 != -409) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x469 = -1;
	int8_t x470 = -19;
	int8_t x471 = 25;
	volatile int16_t x472 = INT16_MIN;
	int32_t t107 = 6548;

    t107 = (((x469^x470)-x471)-x472);

    if (t107 != 32761) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x474 = UINT32_MAX;
	uint32_t x475 = 603U;
	uint16_t x476 = 3749U;

    t108 = (((x473^x474)-x475)-x476);

    if (t108 != -4294971648LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x477 = -1;
	int32_t x478 = -1;
	volatile int64_t x480 = 990887641LL;

    t109 = (((x477^x478)-x479)-x480);

    if (t109 != -990887661LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x482 = 3U;
	volatile int16_t x483 = -15113;
	uint16_t x484 = UINT16_MAX;
	uint32_t t110 = 2564813U;

    t110 = (((x481^x482)-x483)-x484);

    if (t110 != 193481578U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x485 = INT16_MAX;
	int16_t x486 = INT16_MIN;
	int16_t x487 = -1;
	int64_t x488 = -14918125835278309LL;
	static volatile int64_t t111 = 2005382217807867LL;

    t111 = (((x485^x486)-x487)-x488);

    if (t111 != 14918125835278309LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x493 = 31U;
	static int64_t x494 = INT64_MIN;
	int16_t x495 = -141;
	volatile int16_t x496 = INT16_MIN;
	int64_t t112 = 7841331480LL;

    t112 = (((x493^x494)-x495)-x496);

    if (t112 != -9223372036854742868LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x497 = 0;
	int32_t x498 = INT32_MIN;
	int8_t x499 = -1;
	int16_t x500 = INT16_MIN;
	int32_t t113 = -209315718;

    t113 = (((x497^x498)-x499)-x500);

    if (t113 != -2147450879) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x502 = UINT64_MAX;
	uint16_t x503 = UINT16_MAX;
	static uint32_t x504 = 23767U;
	static volatile uint64_t t114 = 25959889389689848LLU;

    t114 = (((x501^x502)-x503)-x504);

    if (t114 != 18446744073709429546LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x506 = INT8_MIN;
	volatile uint64_t x508 = 1761404LLU;
	volatile uint64_t t115 = 700243298075318LLU;

    t115 = (((x505^x506)-x507)-x508);

    if (t115 != 18446744071560306678LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x509 = 30552U;
	uint16_t x510 = 3U;
	int8_t x511 = INT8_MIN;
	uint8_t x512 = 62U;
	volatile int32_t t116 = 8;

    t116 = (((x509^x510)-x511)-x512);

    if (t116 != 30621) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x513 = INT32_MAX;
	int16_t x514 = -1;
	volatile int16_t x516 = -1;
	uint32_t t117 = 31815U;

    t117 = (((x513^x514)-x515)-x516);

    if (t117 != 2147483642U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x517 = -38952LL;
	int32_t x518 = -1;
	static int16_t x519 = INT16_MIN;
	int64_t t118 = 13551449005LL;

    t118 = (((x517^x518)-x519)-x520);

    if (t118 != 104487LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x529 = INT64_MIN;
	uint32_t x531 = 0U;
	int16_t x532 = INT16_MAX;

    t119 = (((x529^x530)-x531)-x532);

    if (t119 != 9223372040952480929LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x537 = INT16_MAX;
	int8_t x538 = -1;
	int16_t x539 = INT16_MIN;
	volatile uint16_t x540 = 177U;
	volatile int32_t t120 = 771026;

    t120 = (((x537^x538)-x539)-x540);

    if (t120 != -177) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x541 = INT8_MIN;
	int64_t x542 = INT64_MIN;
	int8_t x543 = 1;
	int8_t x544 = 1;
	volatile int64_t t121 = -915759798LL;

    t121 = (((x541^x542)-x543)-x544);

    if (t121 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x545 = 2LLU;
	uint64_t x546 = 1676549745675328416LLU;
	volatile int32_t x547 = INT32_MAX;
	uint32_t x548 = UINT32_MAX;

    t122 = (((x545^x546)-x547)-x548);

    if (t122 != 1676549739232877476LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x549 = INT8_MIN;
	int32_t x551 = -1;
	static uint16_t x552 = UINT16_MAX;
	volatile int32_t t123 = -4504831;

    t123 = (((x549^x550)-x551)-x552);

    if (t123 != -65408) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x556 = -1;
	static volatile int64_t t124 = -34778293222141761LL;

    t124 = (((x553^x554)-x555)-x556);

    if (t124 != -121167896783426321LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x558 = 162U;
	static uint32_t x559 = 24643442U;
	int32_t x560 = 28;
	volatile uint32_t t125 = 55U;

    t125 = (((x557^x558)-x559)-x560);

    if (t125 != 4270324047U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x561 = INT8_MAX;
	volatile int8_t x562 = INT8_MIN;
	static uint64_t x563 = 46477128497717LLU;
	uint8_t x564 = 47U;
	uint64_t t126 = 15056LLU;

    t126 = (((x561^x562)-x563)-x564);

    if (t126 != 18446697596581053851LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x565 = INT64_MAX;
	uint8_t x566 = UINT8_MAX;
	static int16_t x567 = -1;
	int64_t t127 = -693919403222LL;

    t127 = (((x565^x566)-x567)-x568);

    if (t127 != 9223372036854775509LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x569 = -1;
	uint8_t x570 = UINT8_MAX;
	int8_t x571 = INT8_MIN;
	volatile int64_t x572 = INT64_MIN;
	int64_t t128 = 9LL;

    t128 = (((x569^x570)-x571)-x572);

    if (t128 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x573 = INT16_MIN;
	static volatile int64_t x574 = -2039LL;
	uint32_t x575 = UINT32_MAX;
	volatile int32_t x576 = -3;

    t129 = (((x573^x574)-x575)-x576);

    if (t129 != -4294936563LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x581 = INT64_MIN;
	static volatile int16_t x582 = -1;
	static uint64_t x583 = 73404697LLU;
	int64_t x584 = INT64_MIN;
	uint64_t t130 = 6159197LLU;

    t130 = (((x581^x582)-x583)-x584);

    if (t130 != 18446744073636146918LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint64_t x587 = 2LLU;
	int8_t x588 = INT8_MIN;
	uint64_t t131 = 988959268LLU;

    t131 = (((x585^x586)-x587)-x588);

    if (t131 != 137LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x591 = INT16_MAX;
	static int16_t x592 = -1;

    t132 = (((x589^x590)-x591)-x592);

    if (t132 != 45924936) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x598 = INT8_MAX;
	uint8_t x600 = 38U;

    t133 = (((x597^x598)-x599)-x600);

    if (t133 != 18446742667970330996LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x604 = 8;

    t134 = (((x601^x602)-x603)-x604);

    if (t134 != 9223907453734688375LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x605 = INT8_MIN;
	volatile int8_t x606 = -5;
	uint32_t x607 = UINT32_MAX;
	int8_t x608 = INT8_MIN;
	uint32_t t135 = 12772036U;

    t135 = (((x605^x606)-x607)-x608);

    if (t135 != 252U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x609 = 160;
	int16_t x610 = INT16_MAX;
	int16_t x611 = INT16_MAX;

    t136 = (((x609^x610)-x611)-x612);

    if (t136 != -65695) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x613 = 58566U;
	static int8_t x614 = -1;
	volatile uint32_t x615 = 28264U;
	int64_t x616 = INT64_MAX;
	int64_t t137 = -7LL;

    t137 = (((x613^x614)-x615)-x616);

    if (t137 != -9223372032559895342LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x619 = -1;
	int64_t x620 = -133341020414160LL;
	int64_t t138 = -73LL;

    t138 = (((x617^x618)-x619)-x620);

    if (t138 != 133343167897807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x621 = 43089733LLU;
	int32_t x622 = INT32_MAX;
	uint64_t x623 = 2LLU;
	int16_t x624 = INT16_MAX;
	uint64_t t139 = 14901196684LLU;

    t139 = (((x621^x622)-x623)-x624);

    if (t139 != 2104361145LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x625 = 21;
	uint16_t x626 = 746U;
	volatile int64_t x627 = 50134720LL;
	static volatile uint64_t t140 = 5974930132171513LLU;

    t140 = (((x625^x626)-x627)-x628);

    if (t140 != 18446731401621211468LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x629 = INT16_MIN;
	volatile int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t141 = 98LLU;

    t141 = (((x629^x630)-x631)-x632);

    if (t141 != 9181407417547512338LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x633 = 12;
	volatile int16_t x634 = -765;
	uint64_t x635 = 127660535229LLU;
	int16_t x636 = 72;
	uint64_t t142 = 3570788LLU;

    t142 = (((x633^x634)-x635)-x636);

    if (t142 != 18446743946049015562LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x638 = INT16_MIN;
	int8_t x639 = -1;
	uint16_t x640 = 33U;
	volatile int64_t t143 = 1571817144714241LL;

    t143 = (((x637^x638)-x639)-x640);

    if (t143 != 1223263155405LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x644 = 5234089064LLU;

    t144 = (((x641^x642)-x643)-x644);

    if (t144 != 9223372033768170391LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x645 = -1;
	int16_t x646 = -1;
	uint64_t x647 = UINT64_MAX;
	volatile uint64_t t145 = 12119180LLU;

    t145 = (((x645^x646)-x647)-x648);

    if (t145 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x653 = 6036LLU;
	volatile int16_t x654 = INT16_MIN;
	uint8_t x655 = 1U;
	volatile int16_t x656 = -1695;
	static volatile uint64_t t146 = 1927622064812524955LLU;

    t146 = (((x653^x654)-x655)-x656);

    if (t146 != 18446744073709526578LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x657 = -490782434534037LL;
	int32_t x658 = -6;
	uint32_t x659 = 356020U;
	int16_t x660 = 1;
	int64_t t147 = 1LL;

    t147 = (((x657^x658)-x659)-x660);

    if (t147 != 490782434178012LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x661 = 28528031U;
	volatile uint32_t x662 = UINT32_MAX;
	uint32_t x663 = 51U;
	static int64_t x664 = -15515LL;
	int64_t t148 = -41088508556402LL;

    t148 = (((x661^x662)-x663)-x664);

    if (t148 != 4266454728LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x665 = 0;
	int64_t x666 = -7949338019812LL;
	int64_t x667 = INT64_MIN;
	int16_t x668 = INT16_MIN;
	static int64_t t149 = 54947LL;

    t149 = (((x665^x666)-x667)-x668);

    if (t149 != 9223364087516788764LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x669 = -4300585863LL;
	volatile uint64_t x670 = UINT64_MAX;
	volatile int16_t x672 = 2476;
	uint64_t t150 = 1281233006647788446LLU;

    t150 = (((x669^x670)-x671)-x672);

    if (t150 != 9223372041155359194LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x673 = INT32_MIN;
	uint8_t x674 = 2U;
	static uint64_t x675 = 12762905768877748LLU;
	int8_t x676 = -1;
	volatile uint64_t t151 = 24517LLU;

    t151 = (((x673^x674)-x675)-x676);

    if (t151 != 18433981165793190223LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x681 = -1;
	uint32_t x683 = 453U;
	static int8_t x684 = -1;
	static volatile uint32_t t152 = 2U;

    t152 = (((x681^x682)-x683)-x684);

    if (t152 != 4294966241U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x685 = INT64_MIN;
	int16_t x686 = INT16_MAX;
	int16_t x687 = -1;
	uint16_t x688 = 3798U;
	int64_t t153 = -184453399761567646LL;

    t153 = (((x685^x686)-x687)-x688);

    if (t153 != -9223372036854746838LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x693 = INT64_MIN;
	volatile uint32_t x694 = 6U;
	int64_t x695 = INT64_MIN;
	int64_t t154 = -5103739088LL;

    t154 = (((x693^x694)-x695)-x696);

    if (t154 != -249LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x698 = 0;
	volatile int16_t x700 = INT16_MIN;
	uint32_t t155 = 0U;

    t155 = (((x697^x698)-x699)-x700);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x701 = 22LLU;
	volatile uint64_t t156 = 1868524243797546568LLU;

    t156 = (((x701^x702)-x703)-x704);

    if (t156 != 18446744073637727559LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = INT16_MIN;
	static int8_t x706 = INT8_MIN;
	volatile int8_t x707 = 0;
	int64_t x708 = -65404304LL;
	volatile int64_t t157 = -1151611565LL;

    t157 = (((x705^x706)-x707)-x708);

    if (t157 != 65436944LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = -1;
	static int64_t x711 = -1LL;
	volatile int32_t x712 = INT32_MAX;
	int64_t t158 = 1LL;

    t158 = (((x709^x710)-x711)-x712);

    if (t158 != -2147484624LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x714 = -1LL;
	uint32_t x715 = 113671808U;
	volatile int64_t t159 = -646174972022228LL;

    t159 = (((x713^x714)-x715)-x716);

    if (t159 != -113737343LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MIN;
	int16_t x727 = -1;
	volatile int32_t t160 = 1852527;

    t160 = (((x725^x726)-x727)-x728);

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x729 = INT64_MAX;
	uint64_t x730 = 2268379635574818LLU;
	uint32_t x732 = 102057U;
	uint64_t t161 = 2160179801320681710LLU;

    t161 = (((x729^x730)-x731)-x732);

    if (t161 != 9221103659366582580LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x733 = -1;
	volatile int32_t x734 = -3;
	static uint32_t x735 = UINT32_MAX;
	static int16_t x736 = INT16_MIN;
	uint32_t t162 = 422U;

    t162 = (((x733^x734)-x735)-x736);

    if (t162 != 32771U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x737 = UINT8_MAX;
	int8_t x738 = INT8_MIN;
	uint64_t x739 = 13951848620284LLU;
	int16_t x740 = INT16_MIN;
	volatile uint64_t t163 = 257458365163834LLU;

    t163 = (((x737^x738)-x739)-x740);

    if (t163 != 18446730121860963971LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x741 = INT16_MIN;
	int32_t x743 = 939688672;
	int64_t t164 = -29921333790251LL;

    t164 = (((x741^x742)-x743)-x744);

    if (t164 != 9223372035915119903LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x745 = -1;
	static int16_t x746 = -4004;
	uint32_t x747 = 341U;
	volatile int16_t x748 = INT16_MIN;
	volatile uint32_t t165 = 4825851U;

    t165 = (((x745^x746)-x747)-x748);

    if (t165 != 36430U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x749 = 2;
	uint64_t x750 = 44016010248717LLU;
	uint64_t x752 = 1705361696423348591LLU;

    t166 = (((x749^x750)-x751)-x752);

    if (t166 != 16741426389001484449LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x754 = INT8_MIN;
	uint32_t x755 = UINT32_MAX;
	int8_t x756 = INT8_MIN;
	uint32_t t167 = 12848827U;

    t167 = (((x753^x754)-x755)-x756);

    if (t167 != 4293954069U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x757 = 5643LLU;
	volatile int16_t x760 = -1;
	volatile uint64_t t168 = 69LLU;

    t168 = (((x757^x758)-x759)-x760);

    if (t168 != 18446744071562059828LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x762 = 0;
	uint64_t x763 = 7306608014LLU;
	static uint8_t x764 = 1U;

    t169 = (((x761^x762)-x763)-x764);

    if (t169 != 18446744066402943728LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x765 = INT16_MAX;
	static int16_t x766 = -1;
	static volatile int16_t x767 = INT16_MIN;
	uint16_t x768 = 78U;
	int32_t t170 = -51;

    t170 = (((x765^x766)-x767)-x768);

    if (t170 != -78) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x769 = 58680U;
	int16_t x770 = -1;
	static int32_t x771 = 68;
	volatile uint32_t t171 = 15U;

    t171 = (((x769^x770)-x771)-x772);

    if (t171 != 4294908548U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x773 = UINT32_MAX;
	static int8_t x774 = INT8_MIN;
	volatile int64_t x775 = -3233LL;
	volatile uint32_t x776 = UINT32_MAX;
	int64_t t172 = -5LL;

    t172 = (((x773^x774)-x775)-x776);

    if (t172 != -4294963935LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x777 = INT64_MIN;
	volatile int8_t x780 = INT8_MIN;
	int64_t t173 = 0LL;

    t173 = (((x777^x778)-x779)-x780);

    if (t173 != -9223372036854775654LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x781 = 244;
	int8_t x782 = -1;
	static int16_t x783 = INT16_MIN;
	int32_t x784 = -1;
	volatile int32_t t174 = -15311;

    t174 = (((x781^x782)-x783)-x784);

    if (t174 != 32524) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x786 = -4132;
	static int8_t x787 = -1;
	static volatile int16_t x788 = 1886;
	int32_t t175 = -187988;

    t175 = (((x785^x786)-x787)-x788);

    if (t175 != -4208) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x789 = INT16_MIN;
	uint64_t t176 = 14LLU;

    t176 = (((x789^x790)-x791)-x792);

    if (t176 != 16624LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = INT16_MAX;
	static int32_t x803 = INT32_MIN;
	uint32_t x804 = 0U;

    t177 = (((x801^x802)-x803)-x804);

    if (t177 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x805 = UINT32_MAX;
	int8_t x806 = INT8_MAX;
	uint64_t x807 = 171LLU;
	static int16_t x808 = INT16_MIN;
	volatile uint64_t t178 = 3885LLU;

    t178 = (((x805^x806)-x807)-x808);

    if (t178 != 4294999765LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x809 = 0;
	int8_t x810 = 31;
	volatile uint8_t x811 = 2U;
	volatile int32_t t179 = 123;

    t179 = (((x809^x810)-x811)-x812);

    if (t179 != 26) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x813 = INT16_MIN;
	uint8_t x814 = UINT8_MAX;
	volatile int32_t x815 = -1;
	static int16_t x816 = -1;
	int32_t t180 = 1006;

    t180 = (((x813^x814)-x815)-x816);

    if (t180 != -32511) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x819 = INT64_MIN;
	static volatile int16_t x820 = -50;
	int64_t t181 = 0LL;

    t181 = (((x817^x818)-x819)-x820);

    if (t181 != 9223372036854743090LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x825 = -18;
	int64_t x827 = -358LL;
	static volatile uint16_t x828 = 11724U;
	int64_t t182 = -2032LL;

    t182 = (((x825^x826)-x827)-x828);

    if (t182 != 21384LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x829 = INT16_MIN;
	int32_t x830 = -807249;
	static volatile int32_t x831 = INT32_MAX;
	int32_t x832 = -38;
	int32_t t183 = -1625;

    t183 = (((x829^x830)-x831)-x832);

    if (t183 != -2146685226) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x833 = INT8_MIN;
	int8_t x834 = INT8_MIN;
	static int16_t x836 = -1;
	int32_t t184 = 47831721;

    t184 = (((x833^x834)-x835)-x836);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x837 = 410342815834131742LLU;
	static int16_t x838 = INT16_MIN;
	int8_t x839 = -1;
	int8_t x840 = 1;
	static volatile uint64_t t185 = 194715902675280LLU;

    t185 = (((x837^x838)-x839)-x840);

    if (t185 != 18036401257875426590LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x841 = 991U;
	int32_t x842 = INT32_MAX;
	static int16_t x843 = -1;
	int8_t x844 = INT8_MIN;
	volatile int32_t t186 = -136137;

    t186 = (((x841^x842)-x843)-x844);

    if (t186 != 2147482785) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x845 = -1;
	int16_t x846 = 1147;
	int8_t x847 = INT8_MIN;
	int8_t x848 = INT8_MIN;

    t187 = (((x845^x846)-x847)-x848);

    if (t187 != -892) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x851 = 23U;
	static int32_t x852 = 0;
	static volatile uint64_t t188 = 2335LLU;

    t188 = (((x849^x850)-x851)-x852);

    if (t188 != 32744LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x854 = UINT64_MAX;
	int8_t x855 = 5;
	uint8_t x856 = 6U;
	static volatile uint64_t t189 = 492708726508LLU;

    t189 = (((x853^x854)-x855)-x856);

    if (t189 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x857 = INT64_MIN;
	volatile int8_t x858 = INT8_MIN;
	volatile uint16_t x859 = 5U;
	int64_t t190 = 2463638299028117239LL;

    t190 = (((x857^x858)-x859)-x860);

    if (t190 != 9223372036854775676LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x861 = INT8_MAX;
	uint16_t x862 = 777U;
	int32_t x864 = INT32_MIN;
	static volatile int64_t t191 = 971509102451726820LL;

    t191 = (((x861^x862)-x863)-x864);

    if (t191 != -9223372034707291273LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = INT8_MIN;
	static uint32_t x870 = 8171U;
	int32_t x871 = 119672630;
	uint64_t x872 = 3066851743172778LLU;
	uint64_t t192 = 661273408LLU;

    t192 = (((x869^x870)-x871)-x872);

    if (t192 != 18443677226141665419LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x873 = INT8_MIN;
	int64_t x876 = 85415LL;

    t193 = (((x873^x874)-x875)-x876);

    if (t193 != 2147398361LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x877 = 174226LL;
	int8_t x878 = -1;
	static uint16_t x880 = 56U;
	int64_t t194 = 6LL;

    t194 = (((x877^x878)-x879)-x880);

    if (t194 != -174284LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x881 = UINT64_MAX;
	uint64_t x883 = 1LLU;
	int64_t x884 = INT64_MIN;
	uint64_t t195 = 271793097236365LLU;

    t195 = (((x881^x882)-x883)-x884);

    if (t195 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x885 = 15;
	uint32_t x886 = 93U;
	static int32_t x887 = INT32_MIN;
	int32_t x888 = INT32_MAX;
	uint32_t t196 = 16182U;

    t196 = (((x885^x886)-x887)-x888);

    if (t196 != 83U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x889 = INT16_MIN;
	volatile int16_t x890 = INT16_MAX;
	uint8_t x891 = 13U;
	volatile int64_t x892 = -1LL;
	int64_t t197 = 4319924897612606LL;

    t197 = (((x889^x890)-x891)-x892);

    if (t197 != -13LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x893 = -125LL;
	int64_t x895 = INT64_MIN;
	volatile uint64_t t198 = 1073348625444859LLU;

    t198 = (((x893^x894)-x895)-x896);

    if (t198 != 9222088216494815993LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x897 = UINT8_MAX;
	int32_t x898 = -45;
	uint8_t x899 = 45U;
	static int8_t x900 = INT8_MIN;
	int32_t t199 = -502;

    t199 = (((x897^x898)-x899)-x900);

    if (t199 != -129) { NG(); } else { ; }
	
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

