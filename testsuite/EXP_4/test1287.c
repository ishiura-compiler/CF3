
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

volatile int8_t x1 = -7;
int8_t x7 = INT8_MIN;
volatile int32_t t2 = 0;
uint32_t x14 = 253U;
volatile uint8_t x18 = 59U;
static uint8_t x23 = 14U;
int32_t x27 = INT32_MAX;
volatile uint8_t x28 = UINT8_MAX;
volatile uint64_t t6 = UINT64_MAX;
static int32_t t7 = -73532827;
int16_t x38 = INT16_MAX;
volatile int64_t t9 = -14LL;
static volatile int16_t x41 = INT16_MAX;
int8_t x43 = INT8_MAX;
volatile int32_t t11 = 294;
uint8_t x49 = UINT8_MAX;
int64_t x63 = -1LL;
static volatile int16_t x74 = -1;
int32_t x77 = INT32_MAX;
int16_t x83 = INT16_MAX;
int16_t x96 = -1;
int64_t t23 = -568683012LL;
int8_t x98 = INT8_MIN;
volatile uint64_t x99 = 14174294761LLU;
volatile int32_t t24 = -62911551;
static int32_t x102 = -1;
int32_t x112 = 345437650;
uint16_t x116 = UINT16_MAX;
int32_t t28 = -103418;
volatile int64_t x119 = 1LL;
volatile int64_t t29 = -4009257717493221LL;
static int64_t x124 = -1LL;
uint64_t x127 = UINT64_MAX;
volatile int32_t t31 = -28;
volatile uint16_t x134 = UINT16_MAX;
uint32_t t33 = 233278551U;
uint32_t t34 = 121505U;
uint8_t x142 = 4U;
int16_t x143 = INT16_MAX;
static int32_t t35 = -6896829;
uint8_t x145 = UINT8_MAX;
volatile uint64_t x150 = UINT64_MAX;
uint32_t x151 = 330743U;
int32_t t37 = -1;
uint16_t x154 = UINT16_MAX;
volatile uint8_t x157 = UINT8_MAX;
static volatile int8_t x162 = 3;
int16_t x164 = -21;
static int32_t x166 = INT32_MIN;
static int32_t x170 = INT32_MAX;
int64_t x176 = INT64_MIN;
volatile int32_t t43 = 113019639;
volatile int64_t x177 = -130LL;
static volatile int8_t x186 = INT8_MIN;
static uint8_t x191 = UINT8_MAX;
int8_t x194 = 1;
static volatile int32_t t48 = 15956;
volatile int64_t x199 = INT64_MAX;
int16_t x201 = INT16_MAX;
uint64_t x204 = 29LLU;
uint64_t x210 = 47954462LLU;
uint64_t x216 = 2LLU;
static int8_t x217 = INT8_MAX;
volatile uint64_t x223 = UINT64_MAX;
static uint16_t x233 = 6301U;
uint32_t x234 = 2U;
static uint8_t x237 = 4U;
volatile int32_t t59 = 632071179;
static uint8_t x243 = UINT8_MAX;
int32_t x248 = 6865799;
int64_t x249 = INT64_MAX;
volatile uint64_t x253 = UINT64_MAX;
uint16_t x257 = UINT16_MAX;
int32_t x259 = 2901;
int8_t x261 = INT8_MAX;
int16_t x262 = -961;
uint32_t x263 = 6442U;
int32_t t65 = -1521;
uint64_t x272 = 315876595332LLU;
int64_t x274 = INT64_MAX;
uint16_t x275 = 1U;
uint64_t x276 = 28LLU;
int8_t x282 = INT8_MIN;
volatile int8_t x285 = INT8_MIN;
volatile int32_t x294 = -1;
int8_t x304 = INT8_MIN;
static volatile int32_t t76 = 282055;
int32_t x313 = INT32_MIN;
static volatile int16_t x315 = INT16_MIN;
static int8_t x316 = INT8_MAX;
volatile int32_t t78 = INT32_MIN;
static int32_t x319 = INT32_MIN;
int16_t x322 = -1;
int8_t x323 = INT8_MAX;
uint8_t x328 = UINT8_MAX;
static volatile uint64_t t83 = UINT64_MAX;
volatile uint8_t x338 = 4U;
volatile int32_t t84 = 31;
static volatile uint16_t x343 = UINT16_MAX;
int16_t x345 = INT16_MAX;
static volatile int32_t t86 = 64;
int64_t x349 = 2LL;
int16_t x352 = INT16_MAX;
static int32_t x356 = INT32_MAX;
uint8_t x360 = UINT8_MAX;
volatile int32_t t89 = -44;
int64_t x366 = INT64_MIN;
volatile int32_t x367 = 18;
int32_t x377 = INT32_MIN;
volatile int8_t x383 = -1;
volatile int32_t t96 = 97;
volatile int64_t x390 = INT64_MIN;
static int32_t x391 = -1324;
volatile int64_t x394 = INT64_MIN;
int64_t x398 = INT64_MIN;
int16_t x404 = INT16_MIN;
uint8_t x405 = UINT8_MAX;
static int64_t x407 = INT64_MIN;
int32_t x409 = INT32_MIN;
volatile int8_t x410 = -1;
volatile int32_t t102 = INT32_MIN;
int16_t x416 = INT16_MAX;
volatile int32_t t105 = 1573460;
static int32_t x427 = INT32_MIN;
int8_t x432 = INT8_MIN;
uint8_t x440 = 32U;
int8_t x441 = 14;
static int32_t x444 = 7802;
static int64_t x445 = INT64_MIN;
static uint16_t x447 = UINT16_MAX;
int16_t x448 = INT16_MAX;
int32_t x453 = -131;
static int32_t x456 = 205638;
static volatile int32_t t114 = -22;
volatile int16_t x462 = -1;
int16_t x470 = 8248;
static int16_t x471 = INT16_MAX;
int16_t x478 = INT16_MIN;
volatile int32_t t120 = -943782;
static volatile uint64_t x486 = 10427892179698LLU;
static int64_t x487 = INT64_MAX;
static uint16_t x492 = UINT16_MAX;
int16_t x497 = 1;
uint8_t x499 = 3U;
int32_t x500 = 13931068;
uint16_t x502 = 143U;
volatile int64_t x503 = -1LL;
int8_t x509 = INT8_MIN;
int8_t x510 = INT8_MIN;
static int32_t t127 = -1499;
volatile uint64_t x513 = 1229738154552903665LLU;
static volatile uint64_t t128 = 6439403912289336LLU;
static int64_t x524 = -493669LL;
int32_t x530 = INT32_MAX;
int16_t x532 = 263;
int32_t t133 = -5954;
int64_t x537 = -106362969261LL;
int16_t x540 = INT16_MAX;
volatile uint8_t x541 = 6U;
volatile int8_t x543 = -10;
volatile int64_t x548 = -218391313332323LL;
static int8_t x549 = INT8_MIN;
int64_t x558 = -1LL;
static int32_t x579 = 15804;
volatile int64_t t145 = -24218374603534528LL;
volatile int32_t t146 = 0;
static int64_t x599 = -94193390364334984LL;
int64_t x601 = 23551133832LL;
int16_t x603 = 5;
uint16_t x604 = 3237U;
volatile int64_t t150 = -68LL;
int8_t x606 = 0;
volatile int64_t t153 = INT64_MIN;
static int32_t x620 = INT32_MAX;
volatile int8_t x622 = -6;
volatile int16_t x623 = -17;
volatile int8_t x624 = INT8_MIN;
uint8_t x632 = UINT8_MAX;
int8_t x645 = -1;
volatile int32_t x651 = 3410299;
volatile int64_t x656 = -36LL;
static volatile uint32_t x660 = 164U;
static int8_t x666 = INT8_MAX;
static uint32_t x668 = 114165861U;
int32_t t167 = 62;
int64_t x679 = INT64_MIN;
volatile int32_t x681 = INT32_MIN;
int8_t x682 = -5;
volatile int64_t x683 = INT64_MAX;
int32_t x688 = -1;
volatile int8_t x692 = INT8_MIN;
volatile int16_t x694 = INT16_MAX;
volatile uint64_t t173 = 521LLU;
int32_t x699 = INT32_MAX;
volatile int32_t t178 = -156;
uint16_t x722 = 16U;
int8_t x726 = INT8_MAX;
int8_t x730 = INT8_MIN;
int32_t t182 = 59182406;
volatile int16_t x744 = 0;
int8_t x745 = -1;
int32_t x747 = 1;
int32_t t186 = -100237985;
uint32_t x752 = 190U;
int32_t x764 = 4021319;
int8_t x771 = INT8_MAX;
int8_t x777 = -1;
volatile int32_t t194 = 4733082;
int16_t x781 = 1;
uint32_t x784 = UINT32_MAX;
static int16_t x794 = INT16_MAX;
uint8_t x799 = 1U;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int8_t x3 = 0;
	uint64_t x4 = 100609012551112659LLU;
	volatile int32_t t0 = -47;

    t0 = (x1|(x2==(x3!=x4)));

    if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MAX;
	volatile int16_t x8 = 2;
	uint32_t t1 = UINT32_MAX;

    t1 = (x5|(x6==(x7!=x8)));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 1729U;
	int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	uint16_t x12 = 47U;

    t2 = (x9|(x10==(x11!=x12)));

    if (t2 != 1729) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	volatile int16_t x15 = INT16_MAX;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 44712501;

    t3 = (x13|(x14==(x15!=x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	volatile int8_t x20 = -1;
	static int64_t t4 = INT64_MIN;

    t4 = (x17|(x18==(x19!=x20)));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1696570289422LL;
	static int16_t x22 = INT16_MAX;
	uint16_t x24 = 242U;
	volatile int64_t t5 = -371LL;

    t5 = (x21|(x22==(x23!=x24)));

    if (t5 != -1696570289422LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = UINT64_MAX;
	static int64_t x26 = 70LL;

    t6 = (x25|(x26==(x27!=x28)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	volatile uint8_t x30 = 26U;
	static uint64_t x31 = UINT64_MAX;
	uint8_t x32 = 53U;

    t7 = (x29|(x30==(x31!=x32)));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int32_t x34 = -1;
	volatile uint32_t x35 = UINT32_MAX;
	int8_t x36 = -1;
	volatile int32_t t8 = 24325327;

    t8 = (x33|(x34==(x35!=x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 227LL;
	uint32_t x39 = UINT32_MAX;
	static uint16_t x40 = 102U;

    t9 = (x37|(x38==(x39!=x40)));

    if (t9 != 227LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x42 = 1LLU;
	volatile int8_t x44 = -1;
	volatile int32_t t10 = -113128;

    t10 = (x41|(x42==(x43!=x44)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	static volatile uint64_t x46 = 5532405659995420LLU;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 3859224098757LL;

    t11 = (x45|(x46==(x47!=x48)));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MIN;
	int16_t x51 = 3711;
	static int32_t x52 = -1;
	static int32_t t12 = 20249;

    t12 = (x49|(x50==(x51!=x52)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x53 = -249;
	static int32_t x54 = -1;
	static uint8_t x55 = UINT8_MAX;
	int8_t x56 = -1;
	static int32_t t13 = -27739;

    t13 = (x53|(x54==(x55!=x56)));

    if (t13 != -249) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	static uint8_t x58 = 16U;
	volatile int16_t x59 = INT16_MIN;
	int32_t x60 = 7;
	int32_t t14 = -477;

    t14 = (x57|(x58==(x59!=x60)));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 493095912U;
	int32_t x62 = INT32_MIN;
	uint16_t x64 = 1U;
	uint32_t t15 = 355U;

    t15 = (x61|(x62==(x63!=x64)));

    if (t15 != 493095912U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 43960575855019688LLU;
	int64_t x66 = INT64_MAX;
	static int32_t x67 = 9194;
	int32_t x68 = -1;
	uint64_t t16 = 1309474LLU;

    t16 = (x65|(x66==(x67!=x68)));

    if (t16 != 43960575855019688LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 712067LLU;
	int8_t x70 = -1;
	static uint32_t x71 = UINT32_MAX;
	int16_t x72 = -15059;
	static uint64_t t17 = 24203LLU;

    t17 = (x69|(x70==(x71!=x72)));

    if (t17 != 712067LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x75 = -1LL;
	static int64_t x76 = INT64_MIN;
	static int32_t t18 = 27728;

    t18 = (x73|(x74==(x75!=x76)));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = -1LL;
	int64_t x79 = -86132176710LL;
	uint8_t x80 = 1U;
	int32_t t19 = INT32_MAX;

    t19 = (x77|(x78==(x79!=x80)));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	static uint8_t x82 = 3U;
	static uint8_t x84 = 3U;
	int32_t t20 = INT32_MAX;

    t20 = (x81|(x82==(x83!=x84)));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1686;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = -1064432680700LL;
	uint64_t x88 = 90231356925284497LLU;
	volatile int32_t t21 = 676343;

    t21 = (x85|(x86==(x87!=x88)));

    if (t21 != -1686) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 22468832325635061LLU;
	int16_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t22 = 3787LLU;

    t22 = (x89|(x90==(x91!=x92)));

    if (t22 != 22468832325635061LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -1LL;
	static int8_t x94 = 1;
	uint16_t x95 = 5U;

    t23 = (x93|(x94==(x95!=x96)));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 6U;
	volatile int32_t x100 = -572;

    t24 = (x97|(x98==(x99!=x100)));

    if (t24 != 6) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = INT8_MIN;
	int8_t x103 = -1;
	uint8_t x104 = UINT8_MAX;
	static volatile int32_t t25 = -347775;

    t25 = (x101|(x102==(x103!=x104)));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static int16_t x106 = INT16_MAX;
	uint8_t x107 = 18U;
	int64_t x108 = INT64_MIN;
	int32_t t26 = -381;

    t26 = (x105|(x106==(x107!=x108)));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 180U;
	int16_t x110 = -3916;
	int64_t x111 = INT64_MIN;
	static volatile int32_t t27 = -1781;

    t27 = (x109|(x110==(x111!=x112)));

    if (t27 != 180) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 2U;
	int32_t x114 = -103;
	int16_t x115 = INT16_MAX;

    t28 = (x113|(x114==(x115!=x116)));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	volatile int8_t x118 = INT8_MAX;
	int16_t x120 = INT16_MAX;

    t29 = (x117|(x118==(x119!=x120)));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	int8_t x123 = 13;
	int64_t t30 = INT64_MIN;

    t30 = (x121|(x122==(x123!=x124)));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 0U;
	volatile int64_t x126 = INT64_MIN;
	static int16_t x128 = INT16_MIN;

    t31 = (x125|(x126==(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 1632505758796582LL;
	uint8_t x130 = 15U;
	int16_t x131 = -5646;
	int8_t x132 = INT8_MIN;
	volatile int64_t t32 = 59LL;

    t32 = (x129|(x130==(x131!=x132)));

    if (t32 != 1632505758796582LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 940U;
	volatile int16_t x135 = 244;
	uint8_t x136 = 15U;

    t33 = (x133|(x134==(x135!=x136)));

    if (t33 != 940U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 17440U;
	int64_t x138 = INT64_MIN;
	int64_t x139 = 537755LL;
	int16_t x140 = INT16_MIN;

    t34 = (x137|(x138==(x139!=x140)));

    if (t34 != 17440U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	volatile int8_t x144 = 9;

    t35 = (x141|(x142==(x143!=x144)));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = INT8_MIN;
	uint64_t x147 = 72288722LLU;
	int16_t x148 = -18;
	int32_t t36 = 958424604;

    t36 = (x145|(x146==(x147!=x148)));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = INT16_MIN;
	int64_t x152 = INT64_MIN;

    t37 = (x149|(x150==(x151!=x152)));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 252910U;
	static uint32_t x155 = 301U;
	int8_t x156 = 0;
	uint32_t t38 = 125970153U;

    t38 = (x153|(x154==(x155!=x156)));

    if (t38 != 252910U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	uint16_t x160 = 22983U;
	int32_t t39 = 242595815;

    t39 = (x157|(x158==(x159!=x160)));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = INT16_MAX;
	volatile int32_t x163 = INT32_MAX;
	volatile int32_t t40 = -5894;

    t40 = (x161|(x162==(x163!=x164)));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 12U;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t x168 = -1;
	static volatile int32_t t41 = 28843055;

    t41 = (x165|(x166==(x167!=x168)));

    if (t41 != 12) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MIN;
	int8_t x171 = -1;
	volatile int16_t x172 = -1;
	volatile int32_t t42 = -5;

    t42 = (x169|(x170==(x171!=x172)));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	uint64_t x174 = UINT64_MAX;
	static int16_t x175 = INT16_MAX;

    t43 = (x173|(x174==(x175!=x176)));

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x178 = 7;
	int32_t x179 = -389796;
	static uint16_t x180 = 10U;
	volatile int64_t t44 = 204854425507LL;

    t44 = (x177|(x178==(x179!=x180)));

    if (t44 != -130LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = UINT8_MAX;
	int64_t x182 = -1LL;
	int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MAX;
	volatile int32_t t45 = 1828;

    t45 = (x181|(x182==(x183!=x184)));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = -1;
	static volatile int64_t x187 = INT64_MIN;
	static uint8_t x188 = UINT8_MAX;
	static int32_t t46 = 180508948;

    t46 = (x185|(x186==(x187!=x188)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MAX;
	static int16_t x190 = INT16_MIN;
	int32_t x192 = -1;
	volatile int32_t t47 = -248;

    t47 = (x189|(x190==(x191!=x192)));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 21U;
	int64_t x195 = INT64_MAX;
	volatile int8_t x196 = 14;

    t48 = (x193|(x194==(x195!=x196)));

    if (t48 != 21) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	static volatile int16_t x198 = 1;
	int16_t x200 = -1;
	volatile int32_t t49 = -498619;

    t49 = (x197|(x198==(x199!=x200)));

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x202 = 1;
	uint32_t x203 = 11U;
	volatile int32_t t50 = -940672;

    t50 = (x201|(x202==(x203!=x204)));

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	uint32_t x206 = UINT32_MAX;
	static int32_t x207 = INT32_MIN;
	uint32_t x208 = 36496U;
	static int32_t t51 = 42576992;

    t51 = (x205|(x206==(x207!=x208)));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	static int64_t x211 = -1LL;
	static int16_t x212 = -6547;
	static uint64_t t52 = UINT64_MAX;

    t52 = (x209|(x210==(x211!=x212)));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = 31591445796898115LLU;
	volatile int8_t x214 = -51;
	uint8_t x215 = UINT8_MAX;
	volatile uint64_t t53 = 2778251725296LLU;

    t53 = (x213|(x214==(x215!=x216)));

    if (t53 != 31591445796898115LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x218 = INT16_MIN;
	int64_t x219 = -982LL;
	int32_t x220 = -1;
	static int32_t t54 = -8119074;

    t54 = (x217|(x218==(x219!=x220)));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = -1;
	static int8_t x222 = 13;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 23579;

    t55 = (x221|(x222==(x223!=x224)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = -7;
	volatile int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	volatile uint16_t x228 = 5U;
	static volatile int32_t t56 = 99628685;

    t56 = (x225|(x226==(x227!=x228)));

    if (t56 != -7) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MAX;
	int64_t x231 = -1LL;
	static uint32_t x232 = 66U;
	volatile int32_t t57 = 126474;

    t57 = (x229|(x230==(x231!=x232)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = -30;

    t58 = (x233|(x234==(x235!=x236)));

    if (t58 != 6301) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x238 = -228197167;
	volatile int64_t x239 = -1LL;
	uint16_t x240 = 2562U;

    t59 = (x237|(x238==(x239!=x240)));

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 30609019;
	static int32_t x242 = INT32_MAX;
	int8_t x244 = -1;
	volatile int32_t t60 = -35978438;

    t60 = (x241|(x242==(x243!=x244)));

    if (t60 != 30609019) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 22U;
	uint64_t x246 = UINT64_MAX;
	uint64_t x247 = UINT64_MAX;
	static volatile int32_t t61 = 1;

    t61 = (x245|(x246==(x247!=x248)));

    if (t61 != 22) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x250 = -1LL;
	int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = INT64_MAX;

    t62 = (x249|(x250==(x251!=x252)));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x254 = 44U;
	int8_t x255 = INT8_MIN;
	uint64_t x256 = 0LLU;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = (x253|(x254==(x255!=x256)));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = 40;
	uint32_t x260 = 14823561U;
	volatile int32_t t64 = 465964;

    t64 = (x257|(x258==(x259!=x260)));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x264 = 58293092739281955LLU;

    t65 = (x261|(x262==(x263!=x264)));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	int16_t x266 = 1;
	int8_t x267 = INT8_MIN;
	int8_t x268 = -1;
	volatile int64_t t66 = -7326014LL;

    t66 = (x265|(x266==(x267!=x268)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	volatile int8_t x271 = -1;
	static int32_t t67 = 7349;

    t67 = (x269|(x270==(x271!=x272)));

    if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x273 = 27LLU;
	uint64_t t68 = 17463680914834LLU;

    t68 = (x273|(x274==(x275!=x276)));

    if (t68 != 27LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x278 = 70950104;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 5;

    t69 = (x277|(x278==(x279!=x280)));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 42U;
	static uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 3;

    t70 = (x281|(x282==(x283!=x284)));

    if (t70 != 42) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = 0;
	int8_t x287 = 19;
	int8_t x288 = 9;
	static int32_t t71 = -789784752;

    t71 = (x285|(x286==(x287!=x288)));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int64_t x290 = -17059388096LL;
	volatile int16_t x291 = 4;
	volatile int16_t x292 = INT16_MIN;
	int32_t t72 = -48;

    t72 = (x289|(x290==(x291!=x292)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	uint32_t x295 = 341762U;
	static uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = -113;

    t73 = (x293|(x294==(x295!=x296)));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int64_t x298 = -3556625LL;
	int16_t x299 = INT16_MAX;
	static uint64_t x300 = 3266810889495LLU;
	static volatile int64_t t74 = INT64_MIN;

    t74 = (x297|(x298==(x299!=x300)));

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	int32_t x302 = 701698;
	volatile int8_t x303 = INT8_MIN;
	volatile int32_t t75 = 13;

    t75 = (x301|(x302==(x303!=x304)));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 35U;
	uint32_t x306 = 209U;
	int64_t x307 = 1746340110LL;
	volatile int64_t x308 = INT64_MAX;

    t76 = (x305|(x306==(x307!=x308)));

    if (t76 != 35) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -7;
	static int16_t x310 = -1;
	int8_t x311 = 0;
	uint8_t x312 = 35U;
	int32_t t77 = -5742;

    t77 = (x309|(x310==(x311!=x312)));

    if (t77 != -7) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = INT32_MIN;

    t78 = (x313|(x314==(x315!=x316)));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	static uint32_t x318 = UINT32_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = INT32_MIN;

    t79 = (x317|(x318==(x319!=x320)));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	uint8_t x324 = 92U;
	int32_t t80 = INT32_MIN;

    t80 = (x321|(x322==(x323!=x324)));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x325 = INT32_MIN;
	static uint64_t x326 = 1315182447158494205LLU;
	static uint64_t x327 = 111677630189751522LLU;
	volatile int32_t t81 = INT32_MIN;

    t81 = (x325|(x326==(x327!=x328)));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 17U;
	uint8_t x330 = 3U;
	static int32_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = -47900;

    t82 = (x329|(x330==(x331!=x332)));

    if (t82 != 17) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = UINT64_MAX;
	volatile uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	volatile uint16_t x336 = 123U;

    t83 = (x333|(x334==(x335!=x336)));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	int8_t x339 = INT8_MIN;
	int32_t x340 = -3;

    t84 = (x337|(x338==(x339!=x340)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 3;
	volatile int8_t x342 = INT8_MIN;
	int64_t x344 = -1LL;
	int32_t t85 = 18530509;

    t85 = (x341|(x342==(x343!=x344)));

    if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 15289LLU;
	volatile int64_t x347 = -1LL;
	uint64_t x348 = 1LLU;

    t86 = (x345|(x346==(x347!=x348)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x350 = -1;
	volatile int8_t x351 = -2;
	volatile int64_t t87 = 880375002954LL;

    t87 = (x349|(x350==(x351!=x352)));

    if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	static uint64_t x354 = 1890LLU;
	int64_t x355 = -1LL;
	static volatile int32_t t88 = -15355990;

    t88 = (x353|(x354==(x355!=x356)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	volatile int16_t x358 = -1;
	int8_t x359 = INT8_MIN;

    t89 = (x357|(x358==(x359!=x360)));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 4079U;
	uint64_t x362 = 8397306071875504LLU;
	int64_t x363 = INT64_MAX;
	int64_t x364 = 31835LL;
	volatile int32_t t90 = -1;

    t90 = (x361|(x362==(x363!=x364)));

    if (t90 != 4079) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = UINT8_MAX;
	volatile int8_t x368 = -18;
	int32_t t91 = -48;

    t91 = (x365|(x366==(x367!=x368)));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	static uint32_t x371 = 653846U;
	static int16_t x372 = 243;
	static int64_t t92 = -1153588894113LL;

    t92 = (x369|(x370==(x371!=x372)));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -1;
	volatile int16_t x374 = INT16_MAX;
	int32_t x375 = -1;
	int16_t x376 = -75;
	volatile int32_t t93 = -123;

    t93 = (x373|(x374==(x375!=x376)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x378 = 1U;
	uint8_t x379 = UINT8_MAX;
	static uint8_t x380 = UINT8_MAX;
	volatile int32_t t94 = INT32_MIN;

    t94 = (x377|(x378==(x379!=x380)));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = 805929480116932793LLU;
	static int32_t x382 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	uint64_t t95 = 25674053LLU;

    t95 = (x381|(x382==(x383!=x384)));

    if (t95 != 805929480116932793LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	int8_t x386 = 27;
	uint8_t x387 = 1U;
	static int8_t x388 = -1;

    t96 = (x385|(x386==(x387!=x388)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = 0U;
	static int32_t x392 = 68538;
	volatile int32_t t97 = -7884;

    t97 = (x389|(x390==(x391!=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = 927;
	uint64_t x395 = 13849961628244004LLU;
	volatile uint64_t x396 = 17493218LLU;
	int32_t t98 = 4;

    t98 = (x393|(x394==(x395!=x396)));

    if (t98 != 927) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x397 = 121901LLU;
	uint64_t x399 = 899346169957LLU;
	int8_t x400 = -1;
	static uint64_t t99 = 1626199186045949LLU;

    t99 = (x397|(x398==(x399!=x400)));

    if (t99 != 121901LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -357231558055195439LL;
	int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MAX;
	volatile int64_t t100 = 9444469501287350LL;

    t100 = (x401|(x402==(x403!=x404)));

    if (t100 != -357231558055195439LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x406 = -1;
	uint16_t x408 = 43U;
	volatile int32_t t101 = -33391;

    t101 = (x405|(x406==(x407!=x408)));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x411 = -1;
	int64_t x412 = INT64_MIN;

    t102 = (x409|(x410==(x411!=x412)));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -6801204;
	static int32_t x414 = -1;
	int8_t x415 = -1;
	static int32_t t103 = -3811;

    t103 = (x413|(x414==(x415!=x416)));

    if (t103 != -6801204) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x417 = 85U;
	int32_t x418 = INT32_MAX;
	static int32_t x419 = 0;
	int8_t x420 = 1;
	int32_t t104 = 0;

    t104 = (x417|(x418==(x419!=x420)));

    if (t104 != 85) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int16_t x422 = INT16_MAX;
	static volatile int64_t x423 = -155665508837108LL;
	uint64_t x424 = 2336121664983390770LLU;

    t105 = (x421|(x422==(x423!=x424)));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 61U;
	int32_t x426 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -7233045;

    t106 = (x425|(x426==(x427!=x428)));

    if (t106 != 61) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -4017830136480551LL;
	uint32_t x430 = 4992431U;
	volatile uint64_t x431 = 10718949973442876LLU;
	int64_t t107 = 11562LL;

    t107 = (x429|(x430==(x431!=x432)));

    if (t107 != -4017830136480551LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 59U;
	int8_t x434 = -1;
	int32_t x435 = -1;
	static int16_t x436 = INT16_MIN;
	static volatile int32_t t108 = -1;

    t108 = (x433|(x434==(x435!=x436)));

    if (t108 != 59) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 46456495LLU;
	uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MIN;
	volatile uint64_t t109 = 383505LLU;

    t109 = (x437|(x438==(x439!=x440)));

    if (t109 != 46456495LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = UINT32_MAX;
	int16_t x443 = INT16_MIN;
	volatile int32_t t110 = -354053;

    t110 = (x441|(x442==(x443!=x444)));

    if (t110 != 14) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x446 = 1850U;
	int64_t t111 = INT64_MIN;

    t111 = (x445|(x446==(x447!=x448)));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	volatile uint32_t x450 = UINT32_MAX;
	volatile int8_t x451 = INT8_MAX;
	uint16_t x452 = 607U;
	volatile int64_t t112 = INT64_MAX;

    t112 = (x449|(x450==(x451!=x452)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = 16069LLU;
	int16_t x455 = INT16_MIN;
	int32_t t113 = -2967836;

    t113 = (x453|(x454==(x455!=x456)));

    if (t113 != -131) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 117;
	volatile int8_t x458 = -22;
	volatile int8_t x459 = -22;
	uint8_t x460 = UINT8_MAX;

    t114 = (x457|(x458==(x459!=x460)));

    if (t114 != 117) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 1930191477LL;
	int32_t x463 = 163;
	uint8_t x464 = UINT8_MAX;
	int64_t t115 = -1LL;

    t115 = (x461|(x462==(x463!=x464)));

    if (t115 != 1930191477LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = 7522704863925LLU;
	int64_t x466 = INT64_MIN;
	int16_t x467 = -133;
	uint64_t x468 = 4411170LLU;
	volatile uint64_t t116 = 2130754LLU;

    t116 = (x465|(x466==(x467!=x468)));

    if (t116 != 7522704863925LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 0U;
	static int64_t x472 = INT64_MAX;
	volatile int32_t t117 = 1315;

    t117 = (x469|(x470==(x471!=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MIN;
	static int32_t x474 = -1;
	static int16_t x475 = 2383;
	int16_t x476 = 1;
	volatile int32_t t118 = -7954;

    t118 = (x473|(x474==(x475!=x476)));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 2164874044727LL;
	int32_t x479 = INT32_MIN;
	int32_t x480 = -304719216;
	volatile int64_t t119 = -173LL;

    t119 = (x477|(x478==(x479!=x480)));

    if (t119 != 2164874044727LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	int16_t x482 = INT16_MAX;
	uint8_t x483 = 2U;
	int32_t x484 = 830195641;

    t120 = (x481|(x482==(x483!=x484)));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = INT64_MIN;
	int8_t x488 = -4;
	int64_t t121 = INT64_MIN;

    t121 = (x485|(x486==(x487!=x488)));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	uint16_t x490 = 0U;
	int64_t x491 = -3491039456LL;
	int32_t t122 = INT32_MAX;

    t122 = (x489|(x490==(x491!=x492)));

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	int16_t x494 = -1;
	int64_t x495 = -464536492LL;
	volatile int32_t x496 = 11731;
	static int32_t t123 = 10453002;

    t123 = (x493|(x494==(x495!=x496)));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = -1LL;
	volatile int32_t t124 = -18746;

    t124 = (x497|(x498==(x499!=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = 7238;
	static int64_t x504 = INT64_MIN;
	static int32_t t125 = 3;

    t125 = (x501|(x502==(x503!=x504)));

    if (t125 != 7238) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 51U;
	int16_t x506 = 18;
	int16_t x507 = -1;
	uint64_t x508 = 1936380184LLU;
	volatile int32_t t126 = -715095794;

    t126 = (x505|(x506==(x507!=x508)));

    if (t126 != 51) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x511 = INT8_MIN;
	int16_t x512 = 15424;

    t127 = (x509|(x510==(x511!=x512)));

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = INT64_MIN;
	int64_t x515 = -1LL;
	int64_t x516 = INT64_MIN;

    t128 = (x513|(x514==(x515!=x516)));

    if (t128 != 1229738154552903665LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = 59772034U;
	uint64_t x518 = UINT64_MAX;
	volatile int8_t x519 = 0;
	int16_t x520 = INT16_MIN;
	volatile uint32_t t129 = 4482U;

    t129 = (x517|(x518==(x519!=x520)));

    if (t129 != 59772034U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 1216U;
	uint64_t x522 = 115484611621173416LLU;
	volatile int32_t x523 = -1;
	int32_t t130 = -177273;

    t130 = (x521|(x522==(x523!=x524)));

    if (t130 != 1216) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = 961067150105LL;
	volatile int32_t x526 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	uint32_t x528 = UINT32_MAX;
	volatile int64_t t131 = 6955LL;

    t131 = (x525|(x526==(x527!=x528)));

    if (t131 != 961067150105LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint8_t x531 = 74U;
	volatile int64_t t132 = INT64_MIN;

    t132 = (x529|(x530==(x531!=x532)));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x533 = 1U;
	static uint16_t x534 = 61U;
	uint16_t x535 = UINT16_MAX;
	static int8_t x536 = INT8_MIN;

    t133 = (x533|(x534==(x535!=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = 3727U;
	int32_t x539 = INT32_MIN;
	int64_t t134 = 1296LL;

    t134 = (x537|(x538==(x539!=x540)));

    if (t134 != -106362969261LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = INT16_MIN;
	volatile uint8_t x544 = 12U;
	static volatile int32_t t135 = -1383485;

    t135 = (x541|(x542==(x543!=x544)));

    if (t135 != 6) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 1LLU;
	int8_t x546 = INT8_MIN;
	volatile uint32_t x547 = 32575U;
	volatile uint64_t t136 = 306597641461803LLU;

    t136 = (x545|(x546==(x547!=x548)));

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x550 = 2;
	static uint16_t x551 = 21U;
	int64_t x552 = INT64_MIN;
	int32_t t137 = 516253;

    t137 = (x549|(x550==(x551!=x552)));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = -1795841LL;
	static int16_t x554 = INT16_MIN;
	int32_t x555 = -100581026;
	uint32_t x556 = UINT32_MAX;
	static volatile int64_t t138 = -894366635319LL;

    t138 = (x553|(x554==(x555!=x556)));

    if (t138 != -1795841LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = 1948;
	volatile uint8_t x559 = 1U;
	int8_t x560 = INT8_MAX;
	int32_t t139 = 1;

    t139 = (x557|(x558==(x559!=x560)));

    if (t139 != 1948) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 1;
	uint16_t x562 = 10U;
	int32_t x563 = INT32_MIN;
	int16_t x564 = -1;
	int32_t t140 = -47839857;

    t140 = (x561|(x562==(x563!=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = -7768;
	static uint8_t x566 = UINT8_MAX;
	int8_t x567 = -5;
	uint32_t x568 = 1U;
	volatile int32_t t141 = 50763628;

    t141 = (x565|(x566==(x567!=x568)));

    if (t141 != -7768) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	uint32_t x570 = 0U;
	uint64_t x571 = 24702975LLU;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t142 = -1893068;

    t142 = (x569|(x570==(x571!=x572)));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	int32_t x574 = -1;
	int32_t x575 = -552278513;
	static uint16_t x576 = 72U;
	int32_t t143 = -332553;

    t143 = (x573|(x574==(x575!=x576)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	int32_t x578 = -51199831;
	static int8_t x580 = 1;
	volatile int32_t t144 = -15;

    t144 = (x577|(x578==(x579!=x580)));

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = 53520723895LL;
	static int32_t x582 = 335;
	volatile uint64_t x583 = UINT64_MAX;
	uint64_t x584 = 263911LLU;

    t145 = (x581|(x582==(x583!=x584)));

    if (t145 != 53520723895LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 16U;
	static int16_t x586 = INT16_MIN;
	static int16_t x587 = INT16_MIN;
	volatile int32_t x588 = -8084444;

    t146 = (x585|(x586==(x587!=x588)));

    if (t146 != 16) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int8_t x590 = INT8_MIN;
	volatile uint32_t x591 = 743679957U;
	int64_t x592 = -1LL;
	static int32_t t147 = 2;

    t147 = (x589|(x590==(x591!=x592)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	static int64_t x594 = -1LL;
	static int32_t x595 = INT32_MIN;
	uint16_t x596 = 1U;
	int32_t t148 = 101831370;

    t148 = (x593|(x594==(x595!=x596)));

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int32_t x598 = 205;
	uint64_t x600 = 7683873674840LLU;
	volatile int32_t t149 = 0;

    t149 = (x597|(x598==(x599!=x600)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 108U;

    t150 = (x601|(x602==(x603!=x604)));

    if (t150 != 23551133832LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = 158U;
	volatile uint16_t x607 = 9202U;
	uint16_t x608 = 38U;
	volatile int32_t t151 = -45;

    t151 = (x605|(x606==(x607!=x608)));

    if (t151 != 158) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 52000291865LLU;
	int64_t x610 = INT64_MIN;
	volatile int64_t x611 = -37589833481LL;
	uint64_t x612 = 4076350511313533LLU;
	volatile uint64_t t152 = 1760994LLU;

    t152 = (x609|(x610==(x611!=x612)));

    if (t152 != 52000291865LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = INT8_MAX;
	int16_t x615 = -1;
	int32_t x616 = -1;

    t153 = (x613|(x614==(x615!=x616)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = INT64_MAX;
	uint16_t x618 = 0U;
	uint8_t x619 = UINT8_MAX;
	static int64_t t154 = INT64_MAX;

    t154 = (x617|(x618==(x619!=x620)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	uint64_t t155 = UINT64_MAX;

    t155 = (x621|(x622==(x623!=x624)));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x625 = 20727513145740994LLU;
	int64_t x626 = INT64_MIN;
	static int8_t x627 = 1;
	volatile int8_t x628 = -1;
	uint64_t t156 = 218615874812261918LLU;

    t156 = (x625|(x626==(x627!=x628)));

    if (t156 != 20727513145740994LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x629 = 88U;
	volatile int8_t x630 = 1;
	volatile int32_t x631 = -1;
	volatile int32_t t157 = -1;

    t157 = (x629|(x630==(x631!=x632)));

    if (t157 != 89) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 5U;
	volatile int64_t x634 = -223232LL;
	int32_t x635 = -1;
	int64_t x636 = INT64_MAX;
	int32_t t158 = 4363;

    t158 = (x633|(x634==(x635!=x636)));

    if (t158 != 5) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x637 = -1;
	static int8_t x638 = 0;
	static uint16_t x639 = UINT16_MAX;
	static uint32_t x640 = UINT32_MAX;
	int32_t t159 = 2;

    t159 = (x637|(x638==(x639!=x640)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x642 = -1;
	uint32_t x643 = UINT32_MAX;
	static uint32_t x644 = 273253635U;
	int32_t t160 = -4;

    t160 = (x641|(x642==(x643!=x644)));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x646 = 72798063273582LLU;
	int64_t x647 = INT64_MIN;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = -11346;

    t161 = (x645|(x646==(x647!=x648)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile uint32_t x650 = 5139407U;
	uint32_t x652 = 28U;
	int32_t t162 = -6499418;

    t162 = (x649|(x650==(x651!=x652)));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	int32_t x654 = 105;
	volatile int8_t x655 = INT8_MIN;
	volatile int32_t t163 = 8140577;

    t163 = (x653|(x654==(x655!=x656)));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 0;
	int16_t x658 = -1;
	static int16_t x659 = -1;
	int32_t t164 = 184814153;

    t164 = (x657|(x658==(x659!=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	uint64_t x662 = 2615128LLU;
	volatile int64_t x663 = INT64_MIN;
	static int8_t x664 = -37;
	volatile int32_t t165 = -1869;

    t165 = (x661|(x662==(x663!=x664)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	volatile uint32_t x667 = UINT32_MAX;
	volatile int32_t t166 = 2036;

    t166 = (x665|(x666==(x667!=x668)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	volatile int64_t x670 = INT64_MAX;
	uint64_t x671 = 217727LLU;
	uint16_t x672 = 9U;

    t167 = (x669|(x670==(x671!=x672)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 956911934U;
	int8_t x674 = INT8_MAX;
	int32_t x675 = INT32_MAX;
	int64_t x676 = 1LL;
	volatile uint32_t t168 = 131249U;

    t168 = (x673|(x674==(x675!=x676)));

    if (t168 != 956911934U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	int16_t x678 = -1;
	int8_t x680 = INT8_MIN;
	volatile int32_t t169 = -227590;

    t169 = (x677|(x678==(x679!=x680)));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x684 = INT64_MAX;
	static volatile int32_t t170 = INT32_MIN;

    t170 = (x681|(x682==(x683!=x684)));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -5;
	volatile int16_t x686 = INT16_MIN;
	static uint32_t x687 = 2U;
	volatile int32_t t171 = -958;

    t171 = (x685|(x686==(x687!=x688)));

    if (t171 != -5) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1310175508861349LL;
	static int8_t x690 = -1;
	int8_t x691 = INT8_MIN;
	int64_t t172 = 923LL;

    t172 = (x689|(x690==(x691!=x692)));

    if (t172 != -1310175508861349LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 928019488LLU;
	static volatile int32_t x695 = -24;
	int64_t x696 = INT64_MIN;

    t173 = (x693|(x694==(x695!=x696)));

    if (t173 != 928019488LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MIN;
	int8_t x698 = INT8_MIN;
	volatile int16_t x700 = -1;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x697|(x698==(x699!=x700)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 0U;
	static int64_t x702 = INT64_MIN;
	int32_t x703 = -30277;
	int16_t x704 = 3740;
	volatile int32_t t175 = -436211;

    t175 = (x701|(x702==(x703!=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	static volatile uint16_t x706 = UINT16_MAX;
	volatile uint16_t x707 = 121U;
	static volatile uint16_t x708 = 4321U;
	volatile int32_t t176 = -68621;

    t176 = (x705|(x706==(x707!=x708)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	int32_t x710 = 0;
	volatile int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;
	static int32_t t177 = -328898;

    t177 = (x709|(x710==(x711!=x712)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x713 = INT8_MAX;
	volatile uint32_t x714 = 306609632U;
	static uint32_t x715 = 1U;
	int32_t x716 = INT32_MIN;

    t178 = (x713|(x714==(x715!=x716)));

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MIN;
	static uint16_t x718 = 4U;
	int32_t x719 = INT32_MAX;
	volatile int8_t x720 = INT8_MIN;
	volatile int64_t t179 = INT64_MIN;

    t179 = (x717|(x718==(x719!=x720)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 1U;
	int64_t x723 = 0LL;
	uint64_t x724 = 43331414341LLU;
	int32_t t180 = 840;

    t180 = (x721|(x722==(x723!=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	volatile int32_t x727 = -102;
	static uint16_t x728 = 10U;
	int32_t t181 = 13816650;

    t181 = (x725|(x726==(x727!=x728)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = 741;
	int64_t x731 = INT64_MAX;
	uint8_t x732 = 4U;

    t182 = (x729|(x730==(x731!=x732)));

    if (t182 != 741) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int64_t x734 = INT64_MAX;
	int8_t x735 = 0;
	static int32_t x736 = -4785080;
	uint64_t t183 = UINT64_MAX;

    t183 = (x733|(x734==(x735!=x736)));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = -1;
	uint16_t x738 = 7U;
	int64_t x739 = 2724660LL;
	int8_t x740 = 0;
	volatile int32_t t184 = -957;

    t184 = (x737|(x738==(x739!=x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = -1;
	int8_t x743 = -1;
	volatile int32_t t185 = 1;

    t185 = (x741|(x742==(x743!=x744)));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x746 = 0U;
	uint32_t x748 = UINT32_MAX;

    t186 = (x745|(x746==(x747!=x748)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -4;
	int64_t x750 = 12061562937935908LL;
	volatile int64_t x751 = 616439157048906LL;
	int32_t t187 = 25;

    t187 = (x749|(x750==(x751!=x752)));

    if (t187 != -4) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MIN;
	uint64_t x754 = 51882548096847LLU;
	uint64_t x755 = 64293798174721LLU;
	int64_t x756 = -58995436309064LL;
	int64_t t188 = INT64_MIN;

    t188 = (x753|(x754==(x755!=x756)));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 634378120LLU;
	int32_t x758 = -1;
	static uint8_t x759 = 7U;
	int64_t x760 = 2713LL;
	static volatile uint64_t t189 = 1LLU;

    t189 = (x757|(x758==(x759!=x760)));

    if (t189 != 634378120LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	uint32_t x762 = UINT32_MAX;
	static volatile int32_t x763 = INT32_MIN;
	int32_t t190 = 66580230;

    t190 = (x761|(x762==(x763!=x764)));

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	uint32_t x766 = 1360945U;
	int16_t x767 = -1;
	static int8_t x768 = 2;
	volatile int32_t t191 = 8888;

    t191 = (x765|(x766==(x767!=x768)));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 60U;
	static int32_t x770 = -1;
	uint64_t x772 = 62820587987520973LLU;
	static volatile int32_t t192 = 27498983;

    t192 = (x769|(x770==(x771!=x772)));

    if (t192 != 60) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = -12;
	int16_t x774 = INT16_MIN;
	static int32_t x775 = -1336412;
	int8_t x776 = 0;
	volatile int32_t t193 = 931382813;

    t193 = (x773|(x774==(x775!=x776)));

    if (t193 != -12) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	static uint16_t x779 = 5270U;
	int16_t x780 = INT16_MIN;

    t194 = (x777|(x778==(x779!=x780)));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x782 = UINT32_MAX;
	static volatile uint32_t x783 = 59558662U;
	volatile int32_t t195 = -893;

    t195 = (x781|(x782==(x783!=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	int16_t x788 = 0;
	int32_t t196 = 2636769;

    t196 = (x785|(x786==(x787!=x788)));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x789 = INT32_MIN;
	uint64_t x790 = UINT64_MAX;
	int32_t x791 = INT32_MIN;
	volatile int8_t x792 = INT8_MAX;
	int32_t t197 = INT32_MIN;

    t197 = (x789|(x790==(x791!=x792)));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = UINT64_MAX;
	static uint32_t x795 = 1528204U;
	int32_t x796 = INT32_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = (x793|(x794==(x795!=x796)));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	static volatile uint8_t x798 = UINT8_MAX;
	static int8_t x800 = 1;
	int64_t t199 = INT64_MAX;

    t199 = (x797|(x798==(x799!=x800)));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

