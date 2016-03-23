
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

static uint16_t x2 = UINT16_MAX;
int16_t x12 = 3940;
int16_t x15 = INT16_MIN;
volatile int8_t x44 = INT8_MAX;
int64_t t8 = 16798021755108LL;
volatile uint64_t t10 = 2564055016855780548LLU;
static uint32_t x57 = 659U;
uint8_t x65 = 1U;
volatile uint64_t t13 = 12LLU;
uint64_t x99 = 4879960513681LLU;
static int32_t x102 = -223193;
int32_t t20 = 55146;
int32_t x108 = 104;
volatile uint32_t x110 = 59556720U;
int16_t x111 = -215;
uint64_t x114 = 23528LLU;
uint8_t x124 = 1U;
static int32_t x131 = -1;
static volatile int64_t x133 = -3369109LL;
int64_t t28 = -283457793080LL;
volatile int32_t x138 = -1;
volatile uint64_t t31 = 1108773258528LLU;
int16_t x158 = -1;
uint32_t x159 = UINT32_MAX;
uint64_t x164 = 472496857086541414LLU;
static int32_t x178 = -1;
int32_t x180 = INT32_MIN;
int32_t t37 = -7852;
volatile uint8_t x195 = UINT8_MAX;
int8_t x203 = INT8_MIN;
uint16_t x206 = 1U;
int64_t x212 = INT64_MAX;
uint16_t x218 = UINT16_MAX;
int8_t x219 = -1;
uint32_t x221 = UINT32_MAX;
static int16_t x222 = INT16_MIN;
static volatile int16_t x227 = INT16_MIN;
static volatile int64_t t46 = -1520285LL;
int64_t x232 = INT64_MAX;
static volatile int64_t t47 = 104782797293LL;
uint32_t x233 = UINT32_MAX;
volatile uint32_t x238 = 1885U;
int64_t x239 = -1LL;
uint32_t t50 = 16440375U;
int64_t x251 = -122573LL;
uint16_t x256 = 311U;
static int8_t x257 = 10;
static uint32_t t55 = 59048U;
static int8_t x270 = INT8_MAX;
int16_t x271 = INT16_MIN;
static int8_t x275 = -4;
volatile int8_t x287 = INT8_MIN;
volatile int32_t t59 = -941824;
uint32_t x289 = UINT32_MAX;
volatile int8_t x291 = 3;
int32_t x302 = 994291;
static volatile int64_t x305 = INT64_MIN;
static volatile uint64_t x306 = 547934008141082LLU;
int16_t x315 = 1;
volatile int32_t t64 = -418051;
uint8_t x318 = 0U;
static int64_t x328 = INT64_MAX;
static int32_t t68 = -2;
int8_t x337 = -1;
uint8_t x338 = UINT8_MAX;
int16_t x340 = -4302;
uint16_t x343 = UINT16_MAX;
static int32_t x347 = 20;
static int32_t x348 = INT32_MIN;
int16_t x357 = INT16_MIN;
volatile int16_t x358 = INT16_MIN;
uint8_t x365 = UINT8_MAX;
volatile uint16_t x367 = UINT16_MAX;
uint16_t x369 = 92U;
int64_t x371 = INT64_MIN;
static int8_t x377 = INT8_MIN;
volatile int64_t x382 = INT64_MAX;
volatile uint32_t x385 = 1952738U;
uint64_t x389 = 40858320971LLU;
int64_t x398 = -82570LL;
static int32_t x402 = -1;
int8_t x403 = INT8_MIN;
int64_t x407 = -1LL;
volatile int32_t x425 = -1;
int32_t x430 = INT32_MIN;
volatile uint32_t x436 = 131U;
static int8_t x441 = INT8_MIN;
volatile uint64_t x444 = 46LLU;
uint64_t t93 = 311LLU;
static uint64_t x456 = 125913LLU;
uint16_t x458 = 28U;
uint32_t x464 = 956895196U;
int32_t t98 = -243314;
volatile int64_t t99 = -6027LL;
volatile uint8_t x478 = 12U;
int64_t x488 = INT64_MIN;
int64_t t102 = -1597266963LL;
int64_t t103 = -35853649782532LL;
uint64_t t104 = 405529245850576914LLU;
volatile uint8_t x497 = 22U;
int32_t x499 = INT32_MIN;
int16_t x503 = -1;
uint16_t x504 = UINT16_MAX;
int8_t x515 = -3;
uint8_t x518 = 23U;
int16_t x521 = INT16_MAX;
uint64_t x530 = 245973LLU;
uint32_t x534 = 10066327U;
static int32_t x538 = INT32_MAX;
static uint64_t x539 = 192352LLU;
static uint64_t t113 = 3LLU;
int16_t x543 = -2;
uint16_t x544 = UINT16_MAX;
static int64_t t114 = 5613LL;
int8_t x556 = INT8_MIN;
int32_t x558 = INT32_MAX;
uint32_t x559 = 78802U;
int32_t t118 = 139356471;
static uint64_t t119 = 104695567473990LLU;
int32_t t121 = 0;
int16_t x584 = 24;
int64_t x585 = -1LL;
volatile int32_t x586 = INT32_MIN;
int64_t x599 = -1LL;
int16_t x610 = INT16_MIN;
volatile int32_t x614 = INT32_MAX;
int64_t x631 = INT64_MIN;
int64_t x638 = -1LL;
volatile uint16_t x640 = UINT16_MAX;
int8_t x643 = 2;
int64_t x653 = -1LL;
static int32_t x654 = INT32_MIN;
volatile int32_t x663 = INT32_MIN;
uint8_t x666 = UINT8_MAX;
volatile uint64_t t140 = 4107475LLU;
uint64_t t143 = 189005413399LLU;
volatile int32_t t144 = -6787;
int8_t x686 = INT8_MIN;
int32_t x688 = INT32_MAX;
int8_t x695 = 1;
uint32_t x699 = 40U;
int16_t x703 = -1;
volatile uint64_t t148 = 512LLU;
uint16_t x712 = UINT16_MAX;
int64_t x715 = -262687280521770LL;
int16_t x724 = INT16_MAX;
int32_t x726 = INT32_MIN;
uint64_t x730 = 85110978979LLU;
uint32_t x732 = 4U;
int16_t x734 = -40;
volatile int8_t x738 = -1;
volatile uint64_t t158 = 341LLU;
int32_t x750 = INT32_MIN;
int8_t x751 = INT8_MIN;
static uint32_t x756 = 468389754U;
static int64_t x767 = INT64_MIN;
int16_t x781 = INT16_MIN;
volatile int16_t x782 = INT16_MIN;
uint32_t x783 = 25016852U;
static uint64_t x787 = 681580943699539LLU;
int64_t x789 = INT64_MAX;
volatile int8_t x790 = 8;
int64_t x792 = INT64_MAX;
int16_t x795 = INT16_MAX;
int64_t x797 = 1014446787153LL;
static int64_t x811 = 32391626LL;
static uint32_t x812 = UINT32_MAX;
uint16_t x816 = UINT16_MAX;
int16_t x819 = INT16_MIN;
int16_t x824 = 8977;
int8_t x833 = 35;
static uint16_t x836 = 105U;
int8_t x843 = -1;
static uint64_t x854 = 702LLU;
uint16_t x856 = 83U;
int64_t x859 = INT64_MAX;
int8_t x865 = INT8_MIN;
int64_t x876 = 685950LL;
static int8_t x878 = INT8_MAX;
volatile int16_t x879 = -1;
static int16_t x888 = -167;
int16_t x892 = INT16_MAX;
int16_t x893 = INT16_MIN;
int16_t x895 = INT16_MAX;
int16_t x896 = -37;
int64_t t193 = 134594712741465LL;
static uint32_t x908 = 1643250419U;
int16_t x913 = INT16_MIN;
volatile uint64_t x914 = 5777023767LLU;
int16_t x916 = INT16_MIN;
int16_t x924 = -1;
volatile int32_t t198 = 0;


void f0(void) {
    	int32_t x1 = 46476;
	int8_t x3 = INT8_MIN;
	int16_t x4 = -1;
	static volatile int32_t t0 = 261;

    t0 = ((x1-(x2-x3))&x4);

    if (t0 != -19187) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = 1LL;
	int8_t x6 = INT8_MIN;
	int32_t x7 = 793191;
	volatile int8_t x8 = 6;
	volatile int64_t t1 = 3676268395735LL;

    t1 = ((x5-(x6-x7))&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 110U;
	uint64_t x10 = UINT64_MAX;
	int64_t x11 = -1LL;
	uint64_t t2 = 5751778LLU;

    t2 = ((x9-(x10-x11))&x12);

    if (t2 != 100LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 15403U;
	int64_t x14 = -1249962023491168886LL;
	volatile int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 15512125732LL;

    t3 = ((x13-(x14-x15))&x16);

    if (t3 != 1249962021462474752LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -142690359553007LL;
	uint16_t x18 = 4671U;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	int64_t t4 = -701357111730072LL;

    t4 = ((x17-(x18-x19))&x20);

    if (t4 != 82LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int64_t x26 = 76LL;
	static int64_t x27 = INT64_MAX;
	static uint16_t x28 = 3637U;
	volatile int64_t t5 = -14734686336734128LL;

    t5 = ((x25-(x26-x27))&x28);

    if (t5 != 3633LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = -52403894LL;
	int16_t x34 = -34;
	static int8_t x35 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	int64_t t6 = 14328592346556LL;

    t6 = ((x33-(x34-x35))&x36);

    if (t6 != 4242563308LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -1;
	static int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MIN;
	volatile int16_t x40 = INT16_MIN;
	volatile int64_t t7 = 2457924914LL;

    t7 = ((x37-(x38-x39))&x40);

    if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MAX;
	int64_t x43 = INT64_MAX;

    t8 = ((x41-(x42-x43))&x44);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 1708U;
	int32_t x46 = INT32_MAX;
	int64_t x47 = 1232373698LL;
	int16_t x48 = 1;
	int64_t t9 = -98028LL;

    t9 = ((x45-(x46-x47))&x48);

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x49 = INT16_MIN;
	volatile int64_t x50 = INT64_MAX;
	uint64_t x51 = 16302466802773643LLU;
	int8_t x52 = -8;

    t10 = ((x49-(x50-x51))&x52);

    if (t10 != 9239674503657516680LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x53 = INT8_MIN;
	uint16_t x54 = 14604U;
	volatile int8_t x55 = 1;
	volatile int32_t x56 = 5;
	int32_t t11 = 1462126;

    t11 = ((x53-(x54-x55))&x56);

    if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x58 = 0;
	static uint64_t x59 = 1783772LLU;
	volatile int16_t x60 = INT16_MIN;
	uint64_t t12 = 6466064095225986312LLU;

    t12 = ((x57-(x58-x59))&x60);

    if (t12 != 1769472LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x66 = 8857349781558324166LLU;
	static int64_t x67 = INT64_MAX;
	static uint8_t x68 = UINT8_MAX;

    t13 = ((x65-(x66-x67))&x68);

    if (t13 != 58LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x69 = UINT64_MAX;
	int32_t x70 = 11;
	volatile int32_t x71 = -1;
	uint64_t x72 = 30LLU;
	volatile uint64_t t14 = 1635594995610056LLU;

    t14 = ((x69-(x70-x71))&x72);

    if (t14 != 18LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = -5978597018032LL;
	int8_t x74 = 22;
	int32_t x75 = -283107;
	int32_t x76 = INT32_MIN;
	volatile int64_t t15 = 891781LL;

    t15 = ((x73-(x74-x75))&x76);

    if (t15 != -5980741959680LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x81 = UINT16_MAX;
	int64_t x82 = 16234LL;
	uint8_t x83 = 97U;
	uint16_t x84 = UINT16_MAX;
	int64_t t16 = -950LL;

    t16 = ((x81-(x82-x83))&x84);

    if (t16 != 49398LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	static volatile int16_t x87 = 735;
	static volatile uint64_t x88 = 1791134925391LLU;
	volatile uint64_t t17 = 59148104447LLU;

    t17 = ((x85-(x86-x87))&x88);

    if (t17 != 1791134925376LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x89 = -1;
	int64_t x90 = 29031858169LL;
	static uint32_t x91 = 14U;
	volatile uint64_t x92 = 515501144817801826LLU;
	volatile uint64_t t18 = 1LLU;

    t18 = ((x89-(x90-x91))&x92);

    if (t18 != 515501117937811456LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x97 = UINT16_MAX;
	uint16_t x98 = UINT16_MAX;
	int64_t x100 = INT64_MAX;
	volatile uint64_t t19 = 45531LLU;

    t19 = ((x97-(x98-x99))&x100);

    if (t19 != 4879960513681LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int16_t x104 = 19;

    t20 = ((x101-(x102-x103))&x104);

    if (t20 != 17) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x105 = 20825332591566528LLU;
	uint32_t x106 = UINT32_MAX;
	static uint64_t x107 = UINT64_MAX;
	volatile uint64_t t21 = 132683343521453748LLU;

    t21 = ((x105-(x106-x107))&x108);

    if (t21 != 64LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x109 = 97459U;
	uint8_t x112 = 45U;
	volatile uint32_t t22 = 861U;

    t22 = ((x109-(x110-x111))&x112);

    if (t22 != 44U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MAX;
	int64_t x115 = INT64_MIN;
	int32_t x116 = -1;
	uint64_t t23 = 15465LLU;

    t23 = ((x113-(x114-x115))&x116);

    if (t23 != 9223372036854752407LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = 0U;
	uint8_t x120 = 1U;
	volatile int64_t t24 = 1LL;

    t24 = ((x117-(x118-x119))&x120);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = -1LL;
	int64_t x122 = 128506LL;
	int64_t x123 = 7276417LL;
	int64_t t25 = -30946527458LL;

    t25 = ((x121-(x122-x123))&x124);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -1;
	uint16_t x128 = UINT16_MAX;
	int32_t t26 = 478;

    t26 = ((x125-(x126-x127))&x128);

    if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = 3381313LL;
	int32_t x130 = 398611;
	volatile int64_t x132 = 46654085016555LL;
	int64_t t27 = -2565113009236712LL;

    t27 = ((x129-(x130-x131))&x132);

    if (t27 != 2622249LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x134 = -1;
	volatile uint32_t x135 = UINT32_MAX;
	uint8_t x136 = 2U;

    t28 = ((x133-(x134-x135))&x136);

    if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x137 = INT64_MAX;
	int8_t x139 = -2;
	int16_t x140 = INT16_MIN;
	static volatile int64_t t29 = -25LL;

    t29 = ((x137-(x138-x139))&x140);

    if (t29 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = UINT64_MAX;
	volatile uint8_t x142 = UINT8_MAX;
	uint64_t x143 = 606437905087579168LLU;
	int8_t x144 = INT8_MAX;
	volatile uint64_t t30 = 115917615490LLU;

    t30 = ((x141-(x142-x143))&x144);

    if (t30 != 32LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 188505200148306372LLU;
	uint32_t x156 = 1577U;

    t31 = ((x153-(x154-x155))&x156);

    if (t31 != 513LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x157 = 1;
	static int8_t x160 = INT8_MAX;
	volatile uint32_t t32 = 19024974U;

    t32 = ((x157-(x158-x159))&x160);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x161 = INT8_MIN;
	int8_t x162 = 1;
	int16_t x163 = INT16_MIN;
	static uint64_t t33 = 380300258565960174LLU;

    t33 = ((x161-(x162-x163))&x164);

    if (t33 != 472496857086508646LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x165 = 328257LL;
	static int64_t x166 = -1LL;
	int32_t x167 = INT32_MIN;
	int8_t x168 = 1;
	int64_t t34 = 4722LL;

    t34 = ((x165-(x166-x167))&x168);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	uint16_t x171 = 0U;
	uint16_t x172 = 326U;
	static int32_t t35 = 8691;

    t35 = ((x169-(x170-x171))&x172);

    if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x177 = INT32_MIN;
	int8_t x179 = 6;
	volatile int32_t t36 = INT32_MIN;

    t36 = ((x177-(x178-x179))&x180);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x181 = -8;
	int16_t x182 = 0;
	int16_t x183 = -1;
	volatile uint16_t x184 = 90U;

    t37 = ((x181-(x182-x183))&x184);

    if (t37 != 82) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x185 = INT64_MAX;
	uint32_t x186 = UINT32_MAX;
	volatile int8_t x187 = -1;
	volatile int16_t x188 = INT16_MAX;
	volatile int64_t t38 = 159895238831656LL;

    t38 = ((x185-(x186-x187))&x188);

    if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x189 = 885854016849244LLU;
	uint64_t x190 = UINT64_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	static uint32_t x192 = 52U;
	static uint64_t t39 = 84429LLU;

    t39 = ((x189-(x190-x191))&x192);

    if (t39 != 20LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x193 = UINT8_MAX;
	static uint64_t x194 = 357012579979LLU;
	int8_t x196 = -1;
	uint64_t t40 = 360012097354664064LLU;

    t40 = ((x193-(x194-x195))&x196);

    if (t40 != 18446743716696972147LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x201 = 23129430U;
	volatile int64_t x202 = -8816429643LL;
	int64_t x204 = 58665357LL;
	volatile int64_t t41 = 483LL;

    t41 = ((x201-(x202-x203))&x204);

    if (t41 != 39854337LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x205 = 871420U;
	static uint32_t x207 = 295U;
	uint16_t x208 = 6U;
	volatile uint32_t t42 = 5U;

    t42 = ((x205-(x206-x207))&x208);

    if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = UINT8_MAX;
	uint16_t x211 = 6U;
	volatile int64_t t43 = 720652607420185733LL;

    t43 = ((x209-(x210-x211))&x212);

    if (t43 != 6LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x217 = 538;
	uint64_t x220 = 27460943960759482LLU;
	static volatile uint64_t t44 = 15043874886911059LLU;

    t44 = ((x217-(x218-x219))&x220);

    if (t44 != 27460943960735770LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x223 = 2U;
	int16_t x224 = -3;
	uint32_t t45 = 77522U;

    t45 = ((x221-(x222-x223))&x224);

    if (t45 != 32769U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x225 = 28U;
	int64_t x226 = INT64_MIN;
	int32_t x228 = INT32_MAX;

    t46 = ((x225-(x226-x227))&x228);

    if (t46 != 2147450908LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x229 = -1LL;
	volatile int64_t x230 = -1LL;
	int32_t x231 = INT32_MAX;

    t47 = ((x229-(x230-x231))&x232);

    if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x234 = UINT64_MAX;
	volatile int64_t x235 = -1LL;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t48 = 18496LLU;

    t48 = ((x233-(x234-x235))&x236);

    if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = INT32_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t49 = 100192955398365LL;

    t49 = ((x237-(x238-x239))&x240);

    if (t49 != 63650LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = UINT16_MAX;
	static uint32_t x242 = UINT32_MAX;
	int16_t x243 = -1;
	uint16_t x244 = UINT16_MAX;

    t50 = ((x241-(x242-x243))&x244);

    if (t50 != 65535U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x245 = 1U;
	int16_t x246 = -1;
	int32_t x247 = -88259;
	volatile int16_t x248 = INT16_MIN;
	int32_t t51 = 784074;

    t51 = ((x245-(x246-x247))&x248);

    if (t51 != -98304) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x249 = 119U;
	volatile int8_t x250 = INT8_MAX;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t52 = 10083LL;

    t52 = ((x249-(x250-x251))&x252);

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x253 = 4615U;
	uint16_t x254 = 251U;
	int64_t x255 = -54988900LL;
	static volatile int64_t t53 = 214391343953971LL;

    t53 = ((x253-(x254-x255))&x256);

    if (t53 != 32LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	int64_t t54 = 398912LL;

    t54 = ((x257-(x258-x259))&x260);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x265 = INT8_MAX;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = 29;
	int8_t x268 = INT8_MIN;

    t55 = ((x265-(x266-x267))&x268);

    if (t55 != 128U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x269 = INT32_MAX;
	static int8_t x272 = INT8_MIN;
	int32_t t56 = -231;

    t56 = ((x269-(x270-x271))&x272);

    if (t56 != 2147450752) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x273 = -1;
	volatile uint64_t x274 = 442503005939LLU;
	int8_t x276 = INT8_MIN;
	static uint64_t t57 = 938372LLU;

    t57 = ((x273-(x274-x275))&x276);

    if (t57 != 18446743631206545664LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x281 = 16097060LLU;
	int32_t x282 = 1507;
	uint8_t x283 = UINT8_MAX;
	static volatile int32_t x284 = INT32_MAX;
	uint64_t t58 = 810066LLU;

    t58 = ((x281-(x282-x283))&x284);

    if (t58 != 16095808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x285 = 19U;
	static int8_t x286 = INT8_MIN;
	volatile uint16_t x288 = 3U;

    t59 = ((x285-(x286-x287))&x288);

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x290 = INT16_MAX;
	int64_t x292 = 13LL;
	int64_t t60 = 547LL;

    t60 = ((x289-(x290-x291))&x292);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x301 = 9454;
	int8_t x303 = INT8_MIN;
	int32_t x304 = 9655;
	volatile int32_t t61 = 12693521;

    t61 = ((x301-(x302-x303))&x304);

    if (t61 != 8243) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x307 = INT64_MAX;
	int8_t x308 = INT8_MIN;
	uint64_t t62 = 39356184752LLU;

    t62 = ((x305-(x306-x307))&x308);

    if (t62 != 18446196139701410432LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x309 = INT16_MIN;
	static uint8_t x310 = 84U;
	volatile int16_t x311 = -1;
	static int64_t x312 = -1LL;
	int64_t t63 = -27LL;

    t63 = ((x309-(x310-x311))&x312);

    if (t63 != -32853LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x313 = INT16_MIN;
	uint8_t x314 = 41U;
	volatile int16_t x316 = INT16_MAX;

    t64 = ((x313-(x314-x315))&x316);

    if (t64 != 32728) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x317 = -1;
	volatile int16_t x319 = 30;
	uint32_t x320 = UINT32_MAX;
	static volatile uint32_t t65 = 5U;

    t65 = ((x317-(x318-x319))&x320);

    if (t65 != 29U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x321 = 1U;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = 1U;
	static int64_t x324 = -6LL;
	volatile int64_t t66 = -363037820393366681LL;

    t66 = ((x321-(x322-x323))&x324);

    if (t66 != -65534LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int16_t x327 = 1;
	int64_t t67 = -523885776093418730LL;

    t67 = ((x325-(x326-x327))&x328);

    if (t67 != 128LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x329 = -2;
	int16_t x330 = INT16_MAX;
	int32_t x331 = 2549942;
	uint16_t x332 = 186U;

    t68 = ((x329-(x330-x331))&x332);

    if (t68 != 176) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x333 = INT16_MIN;
	volatile int32_t x334 = -1;
	int16_t x335 = -1;
	volatile int64_t x336 = -1LL;
	volatile int64_t t69 = 76320558LL;

    t69 = ((x333-(x334-x335))&x336);

    if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x339 = -1LL;
	volatile int64_t t70 = 212LL;

    t70 = ((x337-(x338-x339))&x340);

    if (t70 != -4558LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x341 = 5011173636536251LL;
	int32_t x342 = -3;
	int16_t x344 = INT16_MAX;
	volatile int64_t t71 = -2609LL;

    t71 = ((x341-(x342-x343))&x344);

    if (t71 != 30653LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = 7;
	static volatile uint32_t x346 = 16454U;
	uint32_t t72 = 162277U;

    t72 = ((x345-(x346-x347))&x348);

    if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x349 = INT16_MAX;
	uint64_t x350 = 432LLU;
	int32_t x351 = -1;
	int16_t x352 = 1808;
	uint64_t t73 = 110372104657LLU;

    t73 = ((x349-(x350-x351))&x352);

    if (t73 != 1536LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x353 = INT64_MIN;
	int8_t x354 = 3;
	static int32_t x355 = 173;
	uint16_t x356 = UINT16_MAX;
	static volatile int64_t t74 = -39678875LL;

    t74 = ((x353-(x354-x355))&x356);

    if (t74 != 170LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x359 = -241734836222LL;
	uint32_t x360 = 2U;
	static volatile int64_t t75 = -21671709222062673LL;

    t75 = ((x357-(x358-x359))&x360);

    if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x361 = -988103777;
	uint16_t x362 = 2U;
	static int64_t x363 = INT64_MAX;
	volatile int64_t x364 = -1LL;
	volatile int64_t t76 = -756LL;

    t76 = ((x361-(x362-x363))&x364);

    if (t76 != 9223372035866672028LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x366 = UINT32_MAX;
	int16_t x368 = -1;
	volatile uint32_t t77 = 41958527U;

    t77 = ((x365-(x366-x367))&x368);

    if (t77 != 65791U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x370 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	int64_t t78 = 1739312LL;

    t78 = ((x369-(x370-x371))&x372);

    if (t78 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int64_t x380 = INT64_MAX;
	volatile int64_t t79 = -10685417813558LL;

    t79 = ((x377-(x378-x379))&x380);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x381 = UINT64_MAX;
	static uint32_t x383 = 3U;
	int8_t x384 = -1;
	volatile uint64_t t80 = 1669951712578285556LLU;

    t80 = ((x381-(x382-x383))&x384);

    if (t80 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x386 = INT8_MAX;
	int64_t x387 = 24LL;
	int16_t x388 = INT16_MIN;
	volatile int64_t t81 = 1LL;

    t81 = ((x385-(x386-x387))&x388);

    if (t81 != 1933312LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x390 = INT16_MIN;
	int32_t x391 = -161525;
	uint8_t x392 = 1U;
	uint64_t t82 = 744075509LLU;

    t82 = ((x389-(x390-x391))&x392);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x393 = 9U;
	uint64_t x394 = UINT64_MAX;
	volatile int64_t x395 = -1LL;
	uint8_t x396 = 65U;
	static volatile uint64_t t83 = 31850214733LLU;

    t83 = ((x393-(x394-x395))&x396);

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x397 = -1;
	int16_t x399 = INT16_MAX;
	volatile uint8_t x400 = 10U;
	volatile int64_t t84 = 67613286028LL;

    t84 = ((x397-(x398-x399))&x400);

    if (t84 != 8LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x401 = 106LL;
	int16_t x404 = INT16_MIN;
	volatile int64_t t85 = -146352997067709191LL;

    t85 = ((x401-(x402-x403))&x404);

    if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x405 = 5U;
	int64_t x406 = -1LL;
	int16_t x408 = INT16_MIN;
	int64_t t86 = -5205776LL;

    t86 = ((x405-(x406-x407))&x408);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x413 = -14545890541867LL;
	int8_t x414 = 48;
	volatile uint16_t x415 = 48U;
	uint32_t x416 = UINT32_MAX;
	static volatile int64_t t87 = 1532263342815LL;

    t87 = ((x413-(x414-x415))&x416);

    if (t87 != 1163689685LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x426 = INT16_MAX;
	uint16_t x427 = 1312U;
	int16_t x428 = 2;
	int32_t t88 = -583779;

    t88 = ((x425-(x426-x427))&x428);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x429 = -1;
	uint64_t x431 = 6366LLU;
	int64_t x432 = -16859037931715LL;
	uint64_t t89 = 4262558892423LLU;

    t89 = ((x429-(x430-x431))&x432);

    if (t89 != 2147483677LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x433 = INT16_MIN;
	volatile uint8_t x434 = 0U;
	static volatile int16_t x435 = 4082;
	static volatile uint32_t t90 = 17854240U;

    t90 = ((x433-(x434-x435))&x436);

    if (t90 != 130U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	static int32_t x438 = 698;
	static int64_t x439 = -157883575883700894LL;
	static volatile int8_t x440 = -26;
	volatile uint64_t t91 = 2073LLU;

    t91 = ((x437-(x438-x439))&x440);

    if (t91 != 18288860497825850022LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x442 = -1;
	int64_t x443 = -855745LL;
	uint64_t t92 = 14536948314LLU;

    t92 = ((x441-(x442-x443))&x444);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x449 = 816U;
	uint64_t x450 = 23980046332LLU;
	int16_t x451 = -1;
	int8_t x452 = -22;

    t93 = ((x449-(x450-x451))&x452);

    if (t93 != 18446744049729506082LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x453 = 25U;
	uint32_t x454 = 149U;
	int32_t x455 = INT32_MIN;
	uint64_t t94 = 459LLU;

    t94 = ((x453-(x454-x455))&x456);

    if (t94 != 125824LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x457 = 5U;
	int16_t x459 = 2053;
	int8_t x460 = INT8_MAX;
	int32_t t95 = 266277800;

    t95 = ((x457-(x458-x459))&x460);

    if (t95 != 110) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x461 = -1;
	uint8_t x462 = 1U;
	uint32_t x463 = UINT32_MAX;
	volatile uint32_t t96 = 2U;

    t96 = ((x461-(x462-x463))&x464);

    if (t96 != 956895196U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x465 = INT16_MIN;
	int16_t x466 = INT16_MIN;
	static uint8_t x467 = 0U;
	uint32_t x468 = UINT32_MAX;
	volatile uint32_t t97 = 12U;

    t97 = ((x465-(x466-x467))&x468);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x469 = 72U;
	int8_t x470 = INT8_MAX;
	uint16_t x471 = 3940U;
	uint8_t x472 = 4U;

    t98 = ((x469-(x470-x471))&x472);

    if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x473 = INT32_MIN;
	int64_t x474 = INT64_MIN;
	volatile int16_t x475 = INT16_MIN;
	int32_t x476 = -1;

    t99 = ((x473-(x474-x475))&x476);

    if (t99 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x477 = INT8_MIN;
	static uint32_t x479 = 7U;
	volatile int64_t x480 = INT64_MIN;
	int64_t t100 = -4976708LL;

    t100 = ((x477-(x478-x479))&x480);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x481 = UINT32_MAX;
	int64_t x482 = -1076976LL;
	static int64_t x483 = -1670LL;
	uint32_t x484 = 636307067U;
	int64_t t101 = -2348LL;

    t101 = ((x481-(x482-x483))&x484);

    if (t101 != 16489LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x485 = INT32_MIN;
	uint32_t x486 = 4026U;
	int8_t x487 = -1;

    t102 = ((x485-(x486-x487))&x488);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x489 = INT32_MIN;
	uint32_t x490 = 28392809U;
	volatile int64_t x491 = -1LL;
	int16_t x492 = 11;

    t103 = ((x489-(x490-x491))&x492);

    if (t103 != 2LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x493 = 14LL;
	volatile int32_t x494 = -1;
	uint64_t x495 = UINT64_MAX;
	int8_t x496 = INT8_MAX;

    t104 = ((x493-(x494-x495))&x496);

    if (t104 != 14LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x498 = 160494424342LLU;
	static volatile int32_t x500 = INT32_MIN;
	volatile uint64_t t105 = 286115562631LLU;

    t105 = ((x497-(x498-x499))&x500);

    if (t105 != 18446743910500794368LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x501 = 31920110U;
	volatile uint8_t x502 = 81U;
	static volatile uint32_t t106 = 7452354U;

    t106 = ((x501-(x502-x503))&x504);

    if (t106 != 3996U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x505 = 119360U;
	volatile uint16_t x506 = 50U;
	uint64_t x507 = 3969243LLU;
	volatile int8_t x508 = INT8_MAX;
	volatile uint64_t t107 = 23058837772LLU;

    t107 = ((x505-(x506-x507))&x508);

    if (t107 != 105LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x513 = 0;
	uint8_t x514 = 0U;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t108 = 25451U;

    t108 = ((x513-(x514-x515))&x516);

    if (t108 != 4294967293U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x517 = -19;
	volatile uint32_t x519 = 7178044U;
	int16_t x520 = INT16_MIN;
	uint32_t t109 = 63U;

    t109 = ((x517-(x518-x519))&x520);

    if (t109 != 7176192U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x522 = INT16_MAX;
	volatile uint8_t x523 = 1U;
	int32_t x524 = -1;
	static volatile int32_t t110 = -2899;

    t110 = ((x521-(x522-x523))&x524);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x529 = INT8_MIN;
	int32_t x531 = -5;
	int16_t x532 = -81;
	static uint64_t t111 = 28103234LLU;

    t111 = ((x529-(x530-x531))&x532);

    if (t111 != 18446744073709305510LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x533 = INT32_MAX;
	static uint8_t x535 = UINT8_MAX;
	int64_t x536 = INT64_MAX;
	static volatile int64_t t112 = -3992674350817079LL;

    t112 = ((x533-(x534-x535))&x536);

    if (t112 != 2137417575LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x537 = INT64_MIN;
	volatile uint32_t x540 = UINT32_MAX;

    t113 = ((x537-(x538-x539))&x540);

    if (t113 != 2147676001LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x541 = 11774749012LL;
	int8_t x542 = INT8_MIN;

    t114 = ((x541-(x542-x543))&x544);

    if (t114 != 27090LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x549 = -1LL;
	volatile uint8_t x550 = 120U;
	uint16_t x551 = 3U;
	int8_t x552 = 0;
	int64_t t115 = -1057415123961LL;

    t115 = ((x549-(x550-x551))&x552);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MAX;
	int64_t x555 = 48888LL;
	volatile int64_t t116 = 47LL;

    t116 = ((x553-(x554-x555))&x556);

    if (t116 != -9223372036854727168LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x557 = -1;
	int8_t x560 = INT8_MAX;
	uint32_t t117 = 318592U;

    t117 = ((x557-(x558-x559))&x560);

    if (t117 != 82U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x565 = INT8_MIN;
	uint8_t x566 = UINT8_MAX;
	volatile int16_t x567 = 7604;
	volatile int16_t x568 = -3;

    t118 = ((x565-(x566-x567))&x568);

    if (t118 != 7221) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	static uint64_t x570 = 1704830918LLU;
	volatile uint64_t x571 = 136821218133559407LLU;
	static uint16_t x572 = 2U;

    t119 = ((x569-(x570-x571))&x572);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x573 = 571;
	int8_t x574 = INT8_MIN;
	int8_t x575 = 20;
	static int32_t x576 = INT32_MIN;
	volatile int32_t t120 = -381;

    t120 = ((x573-(x574-x575))&x576);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x577 = -274;
	volatile uint8_t x578 = 1U;
	int16_t x579 = INT16_MAX;
	uint16_t x580 = 3U;

    t121 = ((x577-(x578-x579))&x580);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x581 = -1;
	uint64_t x582 = UINT64_MAX;
	int16_t x583 = -82;
	volatile uint64_t t122 = 2LLU;

    t122 = ((x581-(x582-x583))&x584);

    if (t122 != 8LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x587 = 3687539427843176540LL;
	static int64_t x588 = INT64_MAX;
	volatile int64_t t123 = -25LL;

    t123 = ((x585-(x586-x587))&x588);

    if (t123 != 3687539429990660187LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x589 = -2338552993387LL;
	uint8_t x590 = 49U;
	int16_t x591 = INT16_MAX;
	int64_t x592 = -866LL;
	volatile int64_t t124 = -15477LL;

    t124 = ((x589-(x590-x591))&x592);

    if (t124 != -2338552961022LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x597 = INT16_MAX;
	uint16_t x598 = 14U;
	uint8_t x600 = UINT8_MAX;
	volatile int64_t t125 = -1842902197102LL;

    t125 = ((x597-(x598-x599))&x600);

    if (t125 != 240LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x601 = 0;
	volatile uint64_t x602 = 73306LLU;
	int32_t x603 = INT32_MAX;
	uint8_t x604 = 1U;
	uint64_t t126 = 717256999LLU;

    t126 = ((x601-(x602-x603))&x604);

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x605 = -2;
	static int8_t x606 = INT8_MIN;
	static int8_t x607 = -1;
	uint16_t x608 = 29382U;
	int32_t t127 = 100914299;

    t127 = ((x605-(x606-x607))&x608);

    if (t127 != 68) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x611 = -92703425;
	int32_t x612 = INT32_MIN;
	int32_t t128 = INT32_MIN;

    t128 = ((x609-(x610-x611))&x612);

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x613 = 7U;
	int16_t x615 = INT16_MAX;
	int8_t x616 = INT8_MIN;
	int32_t t129 = 3;

    t129 = ((x613-(x614-x615))&x616);

    if (t129 != -2147450880) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x617 = INT16_MIN;
	static int64_t x618 = -1LL;
	uint64_t x619 = 20290048927037719LLU;
	int32_t x620 = INT32_MIN;
	static volatile uint64_t t130 = 1LLU;

    t130 = ((x617-(x618-x619))&x620);

    if (t130 != 20290048276561920LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x629 = -1LL;
	int8_t x630 = INT8_MIN;
	uint32_t x632 = UINT32_MAX;
	volatile int64_t t131 = -866LL;

    t131 = ((x629-(x630-x631))&x632);

    if (t131 != 127LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x633 = INT16_MAX;
	int8_t x634 = INT8_MAX;
	uint64_t x635 = 38401638882LLU;
	static uint64_t x636 = 0LLU;
	volatile uint64_t t132 = 1021746182LLU;

    t132 = ((x633-(x634-x635))&x636);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x637 = 3;
	int8_t x639 = INT8_MAX;
	static int64_t t133 = -13157328LL;

    t133 = ((x637-(x638-x639))&x640);

    if (t133 != 131LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x641 = 32U;
	uint8_t x642 = 2U;
	int8_t x644 = 23;
	static volatile int32_t t134 = -2356;

    t134 = ((x641-(x642-x643))&x644);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x645 = INT8_MAX;
	int8_t x646 = INT8_MIN;
	static uint16_t x647 = 1229U;
	int8_t x648 = -1;
	volatile int32_t t135 = -54248420;

    t135 = ((x645-(x646-x647))&x648);

    if (t135 != 1484) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x649 = INT64_MIN;
	uint64_t x650 = 503577338437130235LLU;
	static volatile int32_t x651 = INT32_MAX;
	int8_t x652 = 0;
	volatile uint64_t t136 = 8020603797892LLU;

    t136 = ((x649-(x650-x651))&x652);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x655 = -207456719213948LL;
	uint8_t x656 = 2U;
	volatile int64_t t137 = 571668049118LL;

    t137 = ((x653-(x654-x655))&x656);

    if (t137 != 2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x657 = INT16_MIN;
	static uint64_t x658 = UINT64_MAX;
	static int64_t x659 = 2207156189833LL;
	volatile int16_t x660 = 426;
	volatile uint64_t t138 = 2305664LLU;

    t138 = ((x657-(x658-x659))&x660);

    if (t138 != 138LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint16_t x661 = 11534U;
	int64_t x662 = -13265101460LL;
	int8_t x664 = -1;
	volatile int64_t t139 = -3470080728921656LL;

    t139 = ((x661-(x662-x663))&x664);

    if (t139 != 11117629346LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x665 = UINT64_MAX;
	int32_t x667 = -859360134;
	volatile int64_t x668 = 38934405498875LL;

    t140 = ((x665-(x666-x667))&x668);

    if (t140 != 38934084060026LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x669 = INT16_MIN;
	int16_t x670 = -1;
	volatile int16_t x671 = 3;
	static uint8_t x672 = 5U;
	volatile int32_t t141 = 1;

    t141 = ((x669-(x670-x671))&x672);

    if (t141 != 4) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x673 = INT8_MIN;
	uint32_t x674 = 1U;
	static volatile int32_t x675 = INT32_MIN;
	int32_t x676 = INT32_MIN;
	volatile uint32_t t142 = 13482U;

    t142 = ((x673-(x674-x675))&x676);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x677 = INT16_MAX;
	uint64_t x678 = UINT64_MAX;
	volatile uint8_t x679 = UINT8_MAX;
	int16_t x680 = -1;

    t143 = ((x677-(x678-x679))&x680);

    if (t143 != 33023LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x681 = -129944375;
	static volatile int16_t x682 = INT16_MIN;
	static volatile int16_t x683 = -1;
	volatile int16_t x684 = -1;

    t144 = ((x681-(x682-x683))&x684);

    if (t144 != -129911608) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x685 = 446354;
	volatile int64_t x687 = -571568223649LL;
	int64_t t145 = 65LL;

    t145 = ((x685-(x686-x687))&x688);

    if (t145 != 1810356849LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x693 = INT16_MAX;
	int16_t x694 = INT16_MAX;
	int16_t x696 = -1;
	static int32_t t146 = -6737;

    t146 = ((x693-(x694-x695))&x696);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x697 = UINT16_MAX;
	static volatile uint32_t x698 = UINT32_MAX;
	int32_t x700 = INT32_MIN;
	static volatile uint32_t t147 = 786U;

    t147 = ((x697-(x698-x699))&x700);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x701 = 7596294696688LLU;
	static int32_t x702 = INT32_MIN;
	static uint16_t x704 = 14586U;

    t148 = ((x701-(x702-x703))&x704);

    if (t148 != 10474LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x705 = INT16_MIN;
	int64_t x706 = 1501933LL;
	int16_t x707 = INT16_MAX;
	volatile int8_t x708 = 23;
	volatile int64_t t149 = 2121976370567LL;

    t149 = ((x705-(x706-x707))&x708);

    if (t149 != 18LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x709 = UINT8_MAX;
	static int64_t x710 = -16814631863244172LL;
	int8_t x711 = INT8_MIN;
	static volatile int64_t t150 = -12510623733022LL;

    t150 = ((x709-(x710-x711))&x712);

    if (t150 != 54795LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x713 = -4;
	int64_t x714 = INT64_MIN;
	int8_t x716 = -1;
	volatile int64_t t151 = 506656306LL;

    t151 = ((x713-(x714-x715))&x716);

    if (t151 != 9223109349574254034LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x717 = 2929U;
	static int8_t x718 = -1;
	int16_t x719 = INT16_MAX;
	int32_t x720 = INT32_MIN;
	int32_t t152 = -131070151;

    t152 = ((x717-(x718-x719))&x720);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x721 = INT64_MIN;
	volatile uint64_t x722 = UINT64_MAX;
	int8_t x723 = 0;
	uint64_t t153 = 12654793951992LLU;

    t153 = ((x721-(x722-x723))&x724);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x725 = -9939;
	static int64_t x727 = INT64_MIN;
	int32_t x728 = INT32_MAX;
	int64_t t154 = -16150568125758LL;

    t154 = ((x725-(x726-x727))&x728);

    if (t154 != 2147473709LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x729 = INT16_MAX;
	uint8_t x731 = 22U;
	uint64_t t155 = 100499LLU;

    t155 = ((x729-(x730-x731))&x732);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x733 = 15272U;
	uint8_t x735 = 3U;
	static uint8_t x736 = 14U;
	volatile uint32_t t156 = 11U;

    t156 = ((x733-(x734-x735))&x736);

    if (t156 != 2U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x737 = INT16_MIN;
	int8_t x739 = -1;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t157 = -97891784;

    t157 = ((x737-(x738-x739))&x740);

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x741 = 486230780339LLU;
	static int32_t x742 = 0;
	uint64_t x743 = 1961114472LLU;
	static int64_t x744 = 259929242102462LL;

    t158 = ((x741-(x742-x743))&x744);

    if (t158 != 417316479002LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x745 = INT16_MIN;
	volatile int16_t x746 = INT16_MIN;
	int8_t x747 = -1;
	int64_t x748 = 16955007295837708LL;
	int64_t t159 = 8103906093460050LL;

    t159 = ((x745-(x746-x747))&x748);

    if (t159 != 16955007295837708LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x749 = 223263125106LLU;
	volatile int32_t x752 = 336;
	uint64_t t160 = 1LLU;

    t160 = ((x749-(x750-x751))&x752);

    if (t160 != 336LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x753 = 4128633170LLU;
	int8_t x754 = 11;
	int16_t x755 = 1;
	volatile uint64_t t161 = 2955322428999102037LLU;

    t161 = ((x753-(x754-x755))&x756);

    if (t161 != 302055752LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x757 = -8;
	int8_t x758 = -47;
	uint32_t x759 = 204475U;
	int32_t x760 = INT32_MIN;
	volatile uint32_t t162 = 995376U;

    t162 = ((x757-(x758-x759))&x760);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x765 = -1;
	int64_t x766 = INT64_MIN;
	static uint8_t x768 = 0U;
	int64_t t163 = -26LL;

    t163 = ((x765-(x766-x767))&x768);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x773 = 6U;
	volatile uint64_t x774 = UINT64_MAX;
	int32_t x775 = INT32_MIN;
	int64_t x776 = INT64_MIN;
	uint64_t t164 = 2138461LLU;

    t164 = ((x773-(x774-x775))&x776);

    if (t164 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x777 = UINT8_MAX;
	int64_t x778 = INT64_MAX;
	int32_t x779 = 1325;
	int32_t x780 = -53;
	int64_t t165 = 1772214963230LL;

    t165 = ((x777-(x778-x779))&x780);

    if (t165 != -9223372036854774263LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x784 = INT8_MIN;
	uint32_t t166 = 2164173U;

    t166 = ((x781-(x782-x783))&x784);

    if (t166 != 25016832U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x785 = INT64_MIN;
	uint16_t x786 = 6U;
	int64_t x788 = 2706316078428911904LL;
	volatile uint64_t t167 = 8581303LLU;

    t167 = ((x785-(x786-x787))&x788);

    if (t167 != 633457881966592LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x791 = -247;
	volatile int64_t t168 = 14784040LL;

    t168 = ((x789-(x790-x791))&x792);

    if (t168 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x793 = INT16_MIN;
	volatile int64_t x794 = -1LL;
	uint32_t x796 = 214516U;
	int64_t t169 = -3516806442066LL;

    t169 = ((x793-(x794-x795))&x796);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x798 = INT32_MIN;
	int32_t x799 = INT32_MIN;
	volatile int16_t x800 = -14;
	volatile int64_t t170 = -5903429282LL;

    t170 = ((x797-(x798-x799))&x800);

    if (t170 != 1014446787152LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x805 = -1;
	int32_t x806 = INT32_MIN;
	int32_t x807 = INT32_MIN;
	int16_t x808 = 1;
	int32_t t171 = -114602679;

    t171 = ((x805-(x806-x807))&x808);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x809 = INT64_MIN;
	int16_t x810 = INT16_MAX;
	volatile int64_t t172 = -6585LL;

    t172 = ((x809-(x810-x811))&x812);

    if (t172 != 32358859LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x813 = INT32_MIN;
	uint64_t x814 = 78727914LLU;
	uint64_t x815 = 7049800094772LLU;
	uint64_t t173 = 8075071056474421280LLU;

    t173 = ((x813-(x814-x815))&x816);

    if (t173 != 18762LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x817 = INT16_MAX;
	uint64_t x818 = UINT64_MAX;
	int32_t x820 = 4300;
	uint64_t t174 = 123LLU;

    t174 = ((x817-(x818-x819))&x820);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x821 = 0;
	volatile int16_t x822 = INT16_MIN;
	static int8_t x823 = INT8_MIN;
	static volatile int32_t t175 = 384578456;

    t175 = ((x821-(x822-x823))&x824);

    if (t175 != 8960) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x825 = -54;
	int8_t x826 = -1;
	uint64_t x827 = 731973291051LLU;
	int8_t x828 = INT8_MAX;
	volatile uint64_t t176 = 31390488LLU;

    t176 = ((x825-(x826-x827))&x828);

    if (t176 != 118LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x829 = 1U;
	int64_t x830 = INT64_MIN;
	uint64_t x831 = 4284787066419693LLU;
	int64_t x832 = -214869096521163217LL;
	uint64_t t177 = 2266259828099LLU;

    t177 = ((x829-(x830-x831))&x832);

    if (t177 != 9224533884295714862LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x834 = 1818U;
	int8_t x835 = -11;
	static int32_t t178 = -274035;

    t178 = ((x833-(x834-x835))&x836);

    if (t178 != 104) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x837 = INT64_MAX;
	int64_t x838 = 42340LL;
	volatile int32_t x839 = INT32_MIN;
	static volatile uint32_t x840 = 2U;
	volatile int64_t t179 = 253490930746LL;

    t179 = ((x837-(x838-x839))&x840);

    if (t179 != 2LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x841 = 30648U;
	uint32_t x842 = 258418934U;
	volatile int8_t x844 = -1;
	volatile uint32_t t180 = 1661255140U;

    t180 = ((x841-(x842-x843))&x844);

    if (t180 != 4036579009U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x845 = INT32_MIN;
	uint8_t x846 = 1U;
	uint16_t x847 = UINT16_MAX;
	static uint8_t x848 = 3U;
	int32_t t181 = -675432;

    t181 = ((x845-(x846-x847))&x848);

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x849 = 0;
	volatile int32_t x850 = INT32_MAX;
	uint64_t x851 = UINT64_MAX;
	int32_t x852 = -1;
	uint64_t t182 = 24521984375197372LLU;

    t182 = ((x849-(x850-x851))&x852);

    if (t182 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x853 = 29084U;
	int64_t x855 = INT64_MIN;
	volatile uint64_t t183 = 1520548LLU;

    t183 = ((x853-(x854-x855))&x856);

    if (t183 != 82LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x857 = INT32_MIN;
	uint32_t x858 = UINT32_MAX;
	volatile int8_t x860 = INT8_MIN;
	int64_t t184 = 377189930922LL;

    t184 = ((x857-(x858-x859))&x860);

    if (t184 != 9223372030412324864LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x861 = 62163633U;
	uint16_t x862 = UINT16_MAX;
	uint16_t x863 = 15U;
	static volatile int64_t x864 = INT64_MIN;
	int64_t t185 = 63797664260549928LL;

    t185 = ((x861-(x862-x863))&x864);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x866 = 4U;
	uint32_t x867 = 16018610U;
	int64_t x868 = -3541893907379981606LL;
	volatile int64_t t186 = -255725324841827LL;

    t186 = ((x865-(x866-x867))&x868);

    if (t186 != 7626762LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x869 = -1;
	uint8_t x870 = 108U;
	volatile int32_t x871 = 19;
	volatile int8_t x872 = INT8_MAX;
	static volatile int32_t t187 = -25;

    t187 = ((x869-(x870-x871))&x872);

    if (t187 != 38) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x873 = -1;
	uint32_t x874 = 772U;
	int32_t x875 = -1;
	static int64_t t188 = 127310569067LL;

    t188 = ((x873-(x874-x875))&x876);

    if (t188 != 685178LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x877 = 7U;
	volatile int32_t x880 = -339753;
	int32_t t189 = 30;

    t189 = ((x877-(x878-x879))&x880);

    if (t189 != -339833) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x885 = -64LL;
	int8_t x886 = -1;
	volatile uint8_t x887 = 0U;
	int64_t t190 = 521299058403798751LL;

    t190 = ((x885-(x886-x887))&x888);

    if (t190 != -191LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x889 = 3811U;
	static volatile uint64_t x890 = 62913147327294649LLU;
	uint8_t x891 = 35U;
	uint64_t t191 = 2275673LLU;

    t191 = ((x889-(x890-x891))&x892);

    if (t191 != 25165LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x894 = INT16_MIN;
	int32_t t192 = 166;

    t192 = ((x893-(x894-x895))&x896);

    if (t192 != 32731) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x897 = INT8_MIN;
	int32_t x898 = 643564944;
	int64_t x899 = 380049705857929LL;
	volatile int32_t x900 = INT32_MAX;

    t193 = ((x897-(x898-x899))&x900);

    if (t193 != 291171705LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x901 = -957;
	int64_t x902 = INT64_MIN;
	uint64_t x903 = UINT64_MAX;
	uint64_t x904 = UINT64_MAX;
	uint64_t t194 = 2082518813888LLU;

    t194 = ((x901-(x902-x903))&x904);

    if (t194 != 9223372036854774850LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x905 = INT32_MAX;
	int16_t x906 = INT16_MIN;
	volatile int64_t x907 = INT64_MIN;
	static volatile int64_t t195 = -1816630214595508978LL;

    t195 = ((x905-(x906-x907))&x908);

    if (t195 != 755LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x915 = 1;
	volatile uint64_t t196 = 29LLU;

    t196 = ((x913-(x914-x915))&x916);

    if (t196 != 18446744067932487680LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x917 = INT16_MIN;
	int16_t x918 = -4860;
	volatile int16_t x919 = 0;
	static uint8_t x920 = 59U;
	static int32_t t197 = 21307405;

    t197 = ((x917-(x918-x919))&x920);

    if (t197 != 56) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x921 = 0U;
	int32_t x922 = -1;
	int16_t x923 = -39;

    t198 = ((x921-(x922-x923))&x924);

    if (t198 != -38) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x925 = INT32_MIN;
	int8_t x926 = INT8_MIN;
	int64_t x927 = -1LL;
	int32_t x928 = -348;
	int64_t t199 = -625LL;

    t199 = ((x925-(x926-x927))&x928);

    if (t199 != -2147483612LL) { NG(); } else { ; }
	
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

