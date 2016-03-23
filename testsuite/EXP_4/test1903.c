
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

static int8_t x2 = 0;
static int64_t x3 = INT64_MAX;
uint16_t x4 = 2U;
int64_t t1 = INT64_MAX;
static int64_t x9 = INT64_MAX;
int64_t x12 = -1LL;
static int32_t x15 = INT32_MIN;
static int16_t x20 = INT16_MIN;
int32_t t4 = INT32_MIN;
static volatile uint32_t x23 = UINT32_MAX;
volatile int8_t x36 = INT8_MIN;
uint64_t x39 = 4403757036517390586LLU;
static uint16_t x41 = UINT16_MAX;
int8_t x49 = -16;
volatile int32_t x50 = 29369981;
int64_t x54 = 272884LL;
static int64_t x57 = -1LL;
volatile int32_t x60 = 1768360;
int32_t x69 = INT32_MAX;
volatile int64_t x71 = 4365489735629636LL;
int16_t x83 = INT16_MIN;
int16_t x86 = -1;
int16_t x88 = 14;
int64_t t22 = INT64_MIN;
static volatile int32_t t23 = -37619;
int32_t t24 = -141;
int8_t x101 = 5;
static int16_t x105 = 114;
static int16_t x114 = INT16_MAX;
static volatile int32_t t28 = 0;
volatile int32_t t29 = -961574;
static int32_t x122 = -1;
static int32_t x123 = INT32_MAX;
int64_t x128 = -1LL;
static int32_t t33 = -895494687;
volatile uint32_t x139 = 323U;
volatile int64_t t34 = -4589132968732124373LL;
int8_t x142 = INT8_MIN;
volatile int32_t t35 = -12726616;
volatile int64_t t36 = 910531809187839LL;
uint64_t x160 = UINT64_MAX;
int64_t x172 = -1LL;
uint32_t x174 = UINT32_MAX;
int16_t x183 = INT16_MIN;
uint16_t x190 = UINT16_MAX;
static int8_t x191 = INT8_MIN;
int8_t x201 = -1;
int64_t x203 = -20LL;
volatile int32_t t56 = 763586;
int16_t x232 = INT16_MAX;
volatile int32_t t58 = 22;
uint32_t x239 = UINT32_MAX;
static int32_t t63 = 115139862;
int32_t x259 = -1;
static volatile int32_t x260 = -1;
int64_t x264 = INT64_MIN;
static volatile uint32_t t67 = 1945U;
static int16_t x273 = 14938;
int32_t x278 = INT32_MIN;
int16_t x280 = INT16_MIN;
volatile int32_t t71 = -63;
uint16_t x296 = UINT16_MAX;
int32_t x297 = INT32_MAX;
volatile int8_t x301 = -1;
static volatile uint32_t t76 = UINT32_MAX;
int16_t x313 = INT16_MIN;
uint16_t x321 = 2368U;
int16_t x322 = INT16_MAX;
static int8_t x325 = INT8_MIN;
int32_t x327 = -441323287;
uint8_t x328 = 6U;
int16_t x333 = INT16_MAX;
int32_t x335 = 0;
volatile int8_t x338 = INT8_MIN;
int32_t x339 = INT32_MAX;
int32_t x340 = 1;
int64_t x346 = -1LL;
int8_t x348 = INT8_MIN;
static int32_t x350 = 0;
volatile uint64_t x354 = 34539589865724281LLU;
volatile uint64_t x357 = UINT64_MAX;
int32_t t91 = -484;
static uint8_t x369 = 109U;
int32_t x372 = INT32_MIN;
int8_t x376 = INT8_MIN;
volatile uint64_t x379 = 7949660805277LLU;
uint64_t x380 = 1635LLU;
static int64_t t94 = INT64_MIN;
volatile int8_t x382 = -3;
static uint64_t x383 = UINT64_MAX;
int8_t x384 = -1;
static volatile int32_t t95 = 223;
int32_t x388 = -1;
volatile int32_t x395 = -6;
int8_t x398 = INT8_MAX;
int16_t x399 = INT16_MIN;
int32_t t100 = -9;
static int16_t x406 = INT16_MAX;
uint8_t x408 = 5U;
uint8_t x410 = 29U;
volatile int32_t t103 = 0;
static volatile int64_t x424 = INT64_MAX;
int8_t x428 = -1;
int32_t t106 = 6496;
volatile int64_t t107 = 248138753569680LL;
static volatile uint16_t x434 = UINT16_MAX;
int32_t t109 = -81516013;
static int16_t x443 = INT16_MIN;
int32_t t110 = 63381882;
int32_t x445 = INT32_MAX;
int16_t x453 = INT16_MIN;
uint8_t x459 = UINT8_MAX;
int8_t x480 = INT8_MIN;
static uint64_t t119 = 18116152415LLU;
uint32_t x481 = 3U;
int8_t x499 = INT8_MAX;
int32_t t124 = -13;
static volatile int64_t x501 = -1LL;
int8_t x507 = 0;
int8_t x512 = INT8_MIN;
volatile uint64_t x515 = 342628667259142688LLU;
int32_t t129 = 14;
uint32_t x524 = 510328U;
volatile int64_t x530 = INT64_MIN;
uint32_t t132 = UINT32_MAX;
int32_t x534 = -478667251;
int32_t t133 = 686;
int8_t x556 = -1;
int16_t x558 = -1;
volatile int64_t x561 = -14LL;
static int64_t x564 = INT64_MIN;
volatile int8_t x572 = -1;
static int32_t x574 = INT32_MIN;
volatile int64_t x579 = INT64_MIN;
uint32_t x582 = 3055U;
uint64_t x585 = 75464LLU;
int8_t x589 = 1;
int8_t x591 = INT8_MIN;
uint32_t x593 = UINT32_MAX;
volatile uint32_t x607 = 15993U;
static volatile int32_t t151 = 941961;
int8_t x616 = INT8_MAX;
static uint16_t x621 = UINT16_MAX;
static int16_t x622 = 1;
uint8_t x624 = 110U;
volatile uint32_t x625 = 501259706U;
uint16_t x626 = UINT16_MAX;
uint32_t x628 = 280473980U;
int16_t x630 = 0;
static int8_t x632 = INT8_MAX;
static int64_t t158 = INT64_MAX;
int32_t x639 = 1981234;
static int64_t t159 = 2419LL;
static uint8_t x648 = 27U;
int32_t t161 = -201064095;
int64_t x651 = INT64_MIN;
uint32_t x657 = 787379036U;
uint8_t x662 = 75U;
static volatile int64_t x667 = INT64_MAX;
static uint32_t x679 = 1U;
uint32_t x681 = 2443U;
static int16_t x684 = INT16_MAX;
volatile uint32_t t171 = 806U;
uint64_t x694 = UINT64_MAX;
int8_t x701 = INT8_MIN;
uint64_t x703 = 49001249904186167LLU;
uint32_t x705 = 0U;
volatile int32_t x712 = 4762626;
static uint16_t x714 = UINT16_MAX;
int64_t x720 = -64584LL;
static volatile int32_t t180 = 3286612;
static volatile int8_t x726 = -1;
int64_t x728 = 3682LL;
int64_t x729 = INT64_MIN;
int8_t x733 = INT8_MIN;
static volatile int16_t x736 = 5264;
int16_t x738 = INT16_MIN;
uint32_t x740 = UINT32_MAX;
int16_t x742 = -1;
uint8_t x745 = 0U;
int64_t x747 = INT64_MIN;
int8_t x751 = -1;
int32_t t187 = 4976881;
int8_t x753 = 2;
int16_t x754 = -1;
static volatile int32_t t188 = 34647;
static volatile int32_t x764 = INT32_MIN;
int8_t x766 = 6;
static int16_t x767 = INT16_MIN;
int8_t x783 = -18;
static uint16_t x785 = 961U;
int32_t x786 = INT32_MAX;
volatile int16_t x790 = -7114;
static int8_t x791 = 17;
int16_t x798 = INT16_MAX;
static int64_t x800 = 3688691093822264617LL;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	volatile int64_t t0 = 591526270148LL;

    t0 = (x1|(x2<=(x3<=x4)));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	static uint64_t x6 = 67182274575LLU;
	volatile uint64_t x7 = UINT64_MAX;
	uint64_t x8 = UINT64_MAX;

    t1 = (x5|(x6<=(x7<=x8)));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x10 = -2;
	int16_t x11 = INT16_MIN;
	int64_t t2 = INT64_MAX;

    t2 = (x9|(x10<=(x11<=x12)));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 3;
	int32_t x14 = -1;
	uint16_t x16 = 263U;
	int32_t t3 = -44;

    t3 = (x13|(x14<=(x15<=x16)));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint64_t x18 = 12738480626216LLU;
	int64_t x19 = -20512715940401166LL;

    t4 = (x17|(x18<=(x19<=x20)));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 188432391816LL;
	volatile int8_t x22 = -1;
	static uint32_t x24 = 113U;
	int64_t t5 = 178117672514LL;

    t5 = (x21|(x22<=(x23<=x24)));

    if (t5 != 188432391817LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = 1165400761470529298LL;
	int64_t x27 = -1LL;
	int64_t x28 = -1LL;
	int32_t t6 = 74;

    t6 = (x25|(x26<=(x27<=x28)));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 135747113;
	static int8_t x30 = 15;
	uint16_t x31 = 0U;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = 2595965;

    t7 = (x29|(x30<=(x31<=x32)));

    if (t7 != 135747113) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static int64_t x34 = INT64_MIN;
	static uint8_t x35 = UINT8_MAX;
	static volatile int32_t t8 = -24;

    t8 = (x33|(x34<=(x35<=x36)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 34157903543LLU;
	volatile uint32_t x38 = 1041382U;
	int8_t x40 = INT8_MAX;
	volatile uint64_t t9 = 2184008908674975LLU;

    t9 = (x37|(x38<=(x39<=x40)));

    if (t9 != 34157903543LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x42 = 661;
	uint64_t x43 = 17715709LLU;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -673591018;

    t10 = (x41|(x42<=(x43<=x44)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MAX;
	volatile int64_t x46 = -52945LL;
	int8_t x47 = INT8_MAX;
	int64_t x48 = -1LL;
	int32_t t11 = -17559265;

    t11 = (x45|(x46<=(x47<=x48)));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -6412;

    t12 = (x49|(x50<=(x51<=x52)));

    if (t12 != -16) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	static int32_t x55 = 58932471;
	int16_t x56 = INT16_MAX;
	int64_t t13 = INT64_MIN;

    t13 = (x53|(x54<=(x55<=x56)));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	static volatile int64_t x59 = INT64_MAX;
	static int64_t t14 = -17LL;

    t14 = (x57|(x58<=(x59<=x60)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint8_t x62 = 17U;
	uint16_t x63 = 51U;
	uint16_t x64 = UINT16_MAX;
	static volatile int32_t t15 = -15;

    t15 = (x61|(x62<=(x63<=x64)));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 28U;
	int32_t x66 = -1;
	uint64_t x67 = 86894995509431LLU;
	volatile uint16_t x68 = 21361U;
	int32_t t16 = 1;

    t16 = (x65|(x66<=(x67<=x68)));

    if (t16 != 29) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MAX;
	int8_t x72 = -1;
	int32_t t17 = INT32_MAX;

    t17 = (x69|(x70<=(x71<=x72)));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	static volatile int64_t x74 = 10832480236039296LL;
	int8_t x75 = 7;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = 0;

    t18 = (x73|(x74<=(x75<=x76)));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 869;
	static volatile int16_t x78 = INT16_MAX;
	int32_t x79 = -1;
	uint64_t x80 = 1303LLU;
	int32_t t19 = 8668220;

    t19 = (x77|(x78<=(x79<=x80)));

    if (t19 != 869) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = 212214640LL;
	int8_t x82 = INT8_MAX;
	uint64_t x84 = 76059650274LLU;
	volatile int64_t t20 = -2281560959LL;

    t20 = (x81|(x82<=(x83<=x84)));

    if (t20 != 212214640LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	int16_t x87 = -1;
	volatile int32_t t21 = -426339;

    t21 = (x85|(x86<=(x87<=x88)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	static volatile uint16_t x90 = UINT16_MAX;
	uint8_t x91 = UINT8_MAX;
	static int16_t x92 = -12;

    t22 = (x89|(x90<=(x91<=x92)));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	uint32_t x94 = 88637033U;
	static uint32_t x95 = 2U;
	static volatile uint8_t x96 = UINT8_MAX;

    t23 = (x93|(x94<=(x95<=x96)));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = -917009;
	uint32_t x98 = UINT32_MAX;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = INT16_MIN;

    t24 = (x97|(x98<=(x99<=x100)));

    if (t24 != -917009) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x102 = INT16_MIN;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = 0;
	static volatile int32_t t25 = 43;

    t25 = (x101|(x102<=(x103<=x104)));

    if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = 260687;
	uint64_t x107 = UINT64_MAX;
	int16_t x108 = -1;
	volatile int32_t t26 = 925141;

    t26 = (x105|(x106<=(x107<=x108)));

    if (t26 != 114) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -7011;
	int64_t x110 = INT64_MIN;
	int16_t x111 = 384;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 838367;

    t27 = (x109|(x110<=(x111<=x112)));

    if (t27 != -7011) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 36U;
	uint8_t x115 = 4U;
	int16_t x116 = INT16_MIN;

    t28 = (x113|(x114<=(x115<=x116)));

    if (t28 != 36) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -14980801;
	static int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	uint16_t x120 = 93U;

    t29 = (x117|(x118<=(x119<=x120)));

    if (t29 != -14980801) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 3620958395LLU;
	static int8_t x124 = INT8_MIN;
	volatile uint64_t t30 = 1504479LLU;

    t30 = (x121|(x122<=(x123<=x124)));

    if (t30 != 3620958395LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = -321823LL;
	static volatile uint32_t x126 = UINT32_MAX;
	volatile int32_t x127 = INT32_MIN;
	static volatile int64_t t31 = 84646989031049096LL;

    t31 = (x125|(x126<=(x127<=x128)));

    if (t31 != -321823LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 0;
	static volatile int8_t x130 = INT8_MIN;
	volatile int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 34778;

    t32 = (x129|(x130<=(x131<=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	volatile uint8_t x134 = 53U;
	int32_t x135 = INT32_MAX;
	int16_t x136 = 63;

    t33 = (x133|(x134<=(x135<=x136)));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x138 = -1066382802235LL;
	static uint64_t x140 = 66667239LLU;

    t34 = (x137|(x138<=(x139<=x140)));

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 10U;
	volatile int16_t x143 = -1;
	int16_t x144 = INT16_MIN;

    t35 = (x141|(x142<=(x143<=x144)));

    if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	static uint8_t x146 = 25U;
	volatile uint8_t x147 = 6U;
	int16_t x148 = -178;

    t36 = (x145|(x146<=(x147<=x148)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	static volatile int64_t x151 = -1LL;
	volatile uint64_t x152 = 7LLU;
	int32_t t37 = INT32_MIN;

    t37 = (x149|(x150<=(x151<=x152)));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	volatile int16_t x154 = INT16_MIN;
	uint16_t x155 = 828U;
	volatile int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = INT32_MAX;

    t38 = (x153|(x154<=(x155<=x156)));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 11U;
	int32_t x158 = INT32_MAX;
	int32_t x159 = 14230;
	static volatile int32_t t39 = 517778;

    t39 = (x157|(x158<=(x159<=x160)));

    if (t39 != 11) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = -30215994012506LL;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 886255;

    t40 = (x161|(x162<=(x163<=x164)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 9U;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 4982U;
	int8_t x168 = 18;
	static volatile uint32_t t41 = 35959945U;

    t41 = (x165|(x166<=(x167<=x168)));

    if (t41 != 9U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MIN;
	int64_t x170 = -1LL;
	static int16_t x171 = -1;
	int32_t t42 = 351851457;

    t42 = (x169|(x170<=(x171<=x172)));

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	volatile int32_t t43 = -3398;

    t43 = (x173|(x174<=(x175<=x176)));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -1;
	volatile int16_t x178 = 0;
	uint8_t x179 = 16U;
	int64_t x180 = 24LL;
	int32_t t44 = -103;

    t44 = (x177|(x178<=(x179<=x180)));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x182 = UINT32_MAX;
	uint16_t x184 = UINT16_MAX;
	static int64_t t45 = INT64_MIN;

    t45 = (x181|(x182<=(x183<=x184)));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int16_t x186 = -1527;
	uint8_t x187 = 6U;
	int8_t x188 = INT8_MAX;
	int32_t t46 = 7865183;

    t46 = (x185|(x186<=(x187<=x188)));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = -195;
	int64_t x192 = -111976373206987LL;
	int32_t t47 = 1696;

    t47 = (x189|(x190<=(x191<=x192)));

    if (t47 != -195) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = -1;
	int8_t x194 = INT8_MAX;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t48 = -868063765;

    t48 = (x193|(x194<=(x195<=x196)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = 178444LL;
	static int64_t x198 = -1LL;
	uint64_t x199 = 254LLU;
	volatile int64_t x200 = INT64_MAX;
	int64_t t49 = 30116993173086089LL;

    t49 = (x197|(x198<=(x199<=x200)));

    if (t49 != 178445LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x202 = -33732210;
	volatile uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = -176307;

    t50 = (x201|(x202<=(x203<=x204)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = 2U;
	volatile int64_t x206 = -1LL;
	int8_t x207 = -1;
	static uint8_t x208 = 13U;
	int32_t t51 = 40;

    t51 = (x205|(x206<=(x207<=x208)));

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = 23365;

    t52 = (x209|(x210<=(x211<=x212)));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	int8_t x215 = -1;
	int16_t x216 = -4603;
	volatile int32_t t53 = 2123;

    t53 = (x213|(x214<=(x215<=x216)));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 362362555;
	int8_t x218 = 7;
	uint64_t x219 = 838169678LLU;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 486;

    t54 = (x217|(x218<=(x219<=x220)));

    if (t54 != 362362555) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 981391;
	volatile int8_t x222 = INT8_MIN;
	uint64_t x223 = 444466290979893LLU;
	int16_t x224 = 28;
	volatile int32_t t55 = -230436;

    t55 = (x221|(x222<=(x223<=x224)));

    if (t55 != 981391) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -1;
	int16_t x226 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 69LLU;

    t56 = (x225|(x226<=(x227<=x228)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x229 = UINT16_MAX;
	static int64_t x230 = INT64_MIN;
	int32_t x231 = 0;
	int32_t t57 = 1;

    t57 = (x229|(x230<=(x231<=x232)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x233 = 26;
	uint8_t x234 = 9U;
	static int64_t x235 = 188LL;
	uint8_t x236 = 5U;

    t58 = (x233|(x234<=(x235<=x236)));

    if (t58 != 26) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	volatile int64_t x238 = 0LL;
	uint16_t x240 = 2U;
	volatile int32_t t59 = 42;

    t59 = (x237|(x238<=(x239<=x240)));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 504U;
	int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 13574359180944017LLU;
	uint32_t t60 = 714U;

    t60 = (x241|(x242<=(x243<=x244)));

    if (t60 != 505U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 1;
	static volatile int16_t x246 = 1324;
	volatile int64_t x247 = 458140091816866LL;
	static int8_t x248 = INT8_MIN;
	static int32_t t61 = 399052981;

    t61 = (x245|(x246<=(x247<=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	volatile uint32_t x250 = UINT32_MAX;
	static volatile uint8_t x251 = 27U;
	static int16_t x252 = INT16_MAX;
	volatile uint32_t t62 = UINT32_MAX;

    t62 = (x249|(x250<=(x251<=x252)));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 5;
	static volatile int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	volatile int32_t x256 = 14578447;

    t63 = (x253|(x254<=(x255<=x256)));

    if (t63 != 5) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 28U;
	volatile uint64_t x258 = 25049463LLU;
	volatile uint32_t t64 = 149U;

    t64 = (x257|(x258<=(x259<=x260)));

    if (t64 != 28U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x261 = 11735U;
	uint64_t x262 = 678LLU;
	uint64_t x263 = UINT64_MAX;
	int32_t t65 = -520587;

    t65 = (x261|(x262<=(x263<=x264)));

    if (t65 != 11735) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int32_t x266 = -1;
	int32_t x267 = 629800346;
	int8_t x268 = -1;
	int32_t t66 = -3;

    t66 = (x265|(x266<=(x267<=x268)));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 381942U;
	volatile int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;

    t67 = (x269|(x270<=(x271<=x272)));

    if (t67 != 381943U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x274 = 1U;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MAX;
	volatile int32_t t68 = 400;

    t68 = (x273|(x274<=(x275<=x276)));

    if (t68 != 14939) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -2;
	uint64_t x279 = UINT64_MAX;
	int32_t t69 = 59356691;

    t69 = (x277|(x278<=(x279<=x280)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 105U;
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MAX;
	int32_t x284 = INT32_MIN;
	static int32_t t70 = 39380;

    t70 = (x281|(x282<=(x283<=x284)));

    if (t70 != 105) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 1;
	uint64_t x286 = 30917887269005LLU;
	uint32_t x287 = 1450250355U;
	uint64_t x288 = 32781089LLU;

    t71 = (x285|(x286<=(x287<=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 36U;
	int8_t x290 = -1;
	int16_t x291 = -1;
	uint16_t x292 = 14508U;
	volatile int32_t t72 = 90;

    t72 = (x289|(x290<=(x291<=x292)));

    if (t72 != 37) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 1320U;
	int32_t x295 = INT32_MAX;
	static int32_t t73 = 13367824;

    t73 = (x293|(x294<=(x295<=x296)));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x298 = UINT64_MAX;
	static int32_t x299 = -14475316;
	volatile int64_t x300 = -1LL;
	static int32_t t74 = INT32_MAX;

    t74 = (x297|(x298<=(x299<=x300)));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x302 = INT8_MAX;
	static int32_t x303 = 3048495;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -1;

    t75 = (x301|(x302<=(x303<=x304)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MAX;
	int16_t x308 = -1;

    t76 = (x305|(x306<=(x307<=x308)));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x309 = 57455425667587013LLU;
	volatile int16_t x310 = -26;
	uint64_t x311 = 24381092895153LLU;
	int64_t x312 = INT64_MIN;
	uint64_t t77 = 439763095146489060LLU;

    t77 = (x309|(x310<=(x311<=x312)));

    if (t77 != 57455425667587013LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = -1LL;
	volatile int8_t x315 = INT8_MIN;
	static uint64_t x316 = 640739LLU;
	int32_t t78 = 6312;

    t78 = (x313|(x314<=(x315<=x316)));

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 442697;
	static uint64_t x318 = 30783514LLU;
	static int64_t x319 = INT64_MAX;
	int16_t x320 = 12367;
	volatile int32_t t79 = -15;

    t79 = (x317|(x318<=(x319<=x320)));

    if (t79 != 442697) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x323 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t80 = -31150;

    t80 = (x321|(x322<=(x323<=x324)));

    if (t80 != 2368) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x326 = 719U;
	volatile int32_t t81 = -1209;

    t81 = (x325|(x326<=(x327<=x328)));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x329 = 229LLU;
	static int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MAX;
	volatile int8_t x332 = -1;
	uint64_t t82 = 1853LLU;

    t82 = (x329|(x330<=(x331<=x332)));

    if (t82 != 229LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x334 = INT8_MAX;
	int32_t x336 = -204492;
	static volatile int32_t t83 = -130401;

    t83 = (x333|(x334<=(x335<=x336)));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	volatile int64_t t84 = INT64_MAX;

    t84 = (x337|(x338<=(x339<=x340)));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	volatile int16_t x342 = INT16_MIN;
	static volatile int32_t x343 = INT32_MIN;
	int32_t x344 = -1;
	volatile int32_t t85 = 1;

    t85 = (x341|(x342<=(x343<=x344)));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	uint32_t x347 = 23U;
	int32_t t86 = -1;

    t86 = (x345|(x346<=(x347<=x348)));

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	volatile int16_t x352 = -1;
	int64_t t87 = 343595621028814508LL;

    t87 = (x349|(x350<=(x351<=x352)));

    if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	int8_t x355 = INT8_MIN;
	volatile uint16_t x356 = 1845U;
	static int32_t t88 = -7;

    t88 = (x353|(x354<=(x355<=x356)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = INT8_MAX;
	int8_t x359 = 0;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = (x357|(x358<=(x359<=x360)));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MAX;
	int32_t x363 = -1;
	static volatile int32_t x364 = -92271085;
	volatile int32_t t90 = 36927;

    t90 = (x361|(x362<=(x363<=x364)));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = INT8_MIN;
	static int32_t x366 = -1;
	int32_t x367 = -1;
	uint8_t x368 = 1U;

    t91 = (x365|(x366<=(x367<=x368)));

    if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = -39;
	uint32_t x371 = 33975U;
	volatile int32_t t92 = 231209172;

    t92 = (x369|(x370<=(x371<=x372)));

    if (t92 != 109) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	uint32_t x374 = 333433369U;
	int16_t x375 = INT16_MIN;
	int32_t t93 = -41100238;

    t93 = (x373|(x374<=(x375<=x376)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	int16_t x378 = 5;

    t94 = (x377|(x378<=(x379<=x380)));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;

    t95 = (x381|(x382<=(x383<=x384)));

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 1883U;
	volatile uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MAX;
	int32_t t96 = -1844;

    t96 = (x385|(x386<=(x387<=x388)));

    if (t96 != 1883) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MAX;
	int64_t x390 = INT64_MIN;
	uint16_t x391 = UINT16_MAX;
	int32_t x392 = -1;
	volatile int32_t t97 = INT32_MAX;

    t97 = (x389|(x390<=(x391<=x392)));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	int32_t x394 = INT32_MIN;
	static uint8_t x396 = 3U;
	volatile int32_t t98 = -3510;

    t98 = (x393|(x394<=(x395<=x396)));

    if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 1;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t99 = 341547;

    t99 = (x397|(x398<=(x399<=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = -1;
	uint64_t x402 = 395684460874227LLU;
	int16_t x403 = -1;
	int16_t x404 = INT16_MIN;

    t100 = (x401|(x402<=(x403<=x404)));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	static volatile int32_t t101 = -540072444;

    t101 = (x405|(x406<=(x407<=x408)));

    if (t101 != 65535) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	volatile int64_t x411 = INT64_MIN;
	int32_t x412 = -273042731;
	volatile int32_t t102 = 2841;

    t102 = (x409|(x410<=(x411<=x412)));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	uint32_t x414 = 64795307U;
	int8_t x415 = INT8_MAX;
	static int64_t x416 = -4203398LL;

    t103 = (x413|(x414<=(x415<=x416)));

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = -12;
	int8_t x418 = -8;
	static int32_t x419 = -1;
	int16_t x420 = 25;
	volatile int32_t t104 = -19165055;

    t104 = (x417|(x418<=(x419<=x420)));

    if (t104 != -11) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int64_t x422 = -237122973911150652LL;
	int32_t x423 = -8236798;
	static volatile int32_t t105 = -117489115;

    t105 = (x421|(x422<=(x423<=x424)));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = 526;
	static int64_t x426 = 959774LL;
	static int64_t x427 = INT64_MIN;

    t106 = (x425|(x426<=(x427<=x428)));

    if (t106 != 526) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	uint8_t x430 = 1U;
	static volatile uint32_t x431 = 59250763U;
	int32_t x432 = INT32_MIN;

    t107 = (x429|(x430<=(x431<=x432)));

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 109771;
	int64_t x435 = INT64_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t108 = 13105841;

    t108 = (x433|(x434<=(x435<=x436)));

    if (t108 != 109771) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint64_t x438 = UINT64_MAX;
	int64_t x439 = -1LL;
	int64_t x440 = INT64_MIN;

    t109 = (x437|(x438<=(x439<=x440)));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int8_t x442 = -57;
	int64_t x444 = INT64_MIN;

    t110 = (x441|(x442<=(x443<=x444)));

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x446 = UINT16_MAX;
	int32_t x447 = INT32_MIN;
	volatile int32_t x448 = INT32_MAX;
	volatile int32_t t111 = INT32_MAX;

    t111 = (x445|(x446<=(x447<=x448)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	int32_t x450 = INT32_MAX;
	uint64_t x451 = 49917LLU;
	volatile uint32_t x452 = 297U;
	int64_t t112 = INT64_MAX;

    t112 = (x449|(x450<=(x451<=x452)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x454 = INT16_MIN;
	int64_t x455 = 1886441764883089LL;
	uint16_t x456 = 1U;
	int32_t t113 = -1;

    t113 = (x453|(x454<=(x455<=x456)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	uint8_t x458 = 25U;
	static int16_t x460 = -13253;
	volatile int32_t t114 = INT32_MIN;

    t114 = (x457|(x458<=(x459<=x460)));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = 164213;
	uint16_t x462 = 3155U;
	uint16_t x463 = 1490U;
	volatile uint64_t x464 = 69941841LLU;
	int32_t t115 = 532723634;

    t115 = (x461|(x462<=(x463<=x464)));

    if (t115 != 164213) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	volatile int8_t x466 = INT8_MAX;
	static int8_t x467 = -1;
	volatile int64_t x468 = INT64_MIN;
	volatile int64_t t116 = INT64_MIN;

    t116 = (x465|(x466<=(x467<=x468)));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x469 = INT32_MAX;
	uint8_t x470 = 0U;
	int8_t x471 = INT8_MIN;
	int32_t x472 = 10510670;
	int32_t t117 = INT32_MAX;

    t117 = (x469|(x470<=(x471<=x472)));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -11;
	volatile int32_t x474 = INT32_MIN;
	volatile uint32_t x475 = UINT32_MAX;
	uint16_t x476 = 5346U;
	volatile int32_t t118 = 3;

    t118 = (x473|(x474<=(x475<=x476)));

    if (t118 != -11) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 1277450LLU;
	int64_t x478 = INT64_MIN;
	static int32_t x479 = INT32_MIN;

    t119 = (x477|(x478<=(x479<=x480)));

    if (t119 != 1277451LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = 0;
	volatile uint32_t x483 = UINT32_MAX;
	volatile int16_t x484 = 894;
	volatile uint32_t t120 = 48U;

    t120 = (x481|(x482<=(x483<=x484)));

    if (t120 != 3U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static int64_t x486 = 68488165185665672LL;
	static int8_t x487 = INT8_MIN;
	int64_t x488 = 779252595LL;
	volatile int32_t t121 = 4521163;

    t121 = (x485|(x486<=(x487<=x488)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 1U;
	uint16_t x490 = 1U;
	static volatile int16_t x491 = -15111;
	static int16_t x492 = -12866;
	static volatile int32_t t122 = -14919373;

    t122 = (x489|(x490<=(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 126U;
	uint64_t x494 = 63375465353178962LLU;
	static int64_t x495 = INT64_MIN;
	int32_t x496 = -1;
	volatile int32_t t123 = 355670293;

    t123 = (x493|(x494<=(x495<=x496)));

    if (t123 != 126) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 28;
	static uint32_t x498 = UINT32_MAX;
	uint64_t x500 = 889317237325411LLU;

    t124 = (x497|(x498<=(x499<=x500)));

    if (t124 != 28) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 0U;
	uint64_t x503 = UINT64_MAX;
	int16_t x504 = -1;
	volatile int64_t t125 = 2833468524652LL;

    t125 = (x501|(x502<=(x503<=x504)));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = UINT32_MAX;
	int64_t x506 = INT64_MIN;
	static volatile int8_t x508 = INT8_MIN;
	static volatile uint32_t t126 = UINT32_MAX;

    t126 = (x505|(x506<=(x507<=x508)));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = UINT32_MAX;
	int8_t x510 = 6;
	uint8_t x511 = 7U;
	static volatile uint32_t t127 = UINT32_MAX;

    t127 = (x509|(x510<=(x511<=x512)));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x513 = 4U;
	static int32_t x514 = -150543;
	int32_t x516 = INT32_MIN;
	int32_t t128 = -1;

    t128 = (x513|(x514<=(x515<=x516)));

    if (t128 != 5) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = INT16_MIN;
	uint8_t x518 = 2U;
	int16_t x519 = 61;
	uint16_t x520 = 17U;

    t129 = (x517|(x518<=(x519<=x520)));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = 1010LL;
	int16_t x522 = -27;
	static int64_t x523 = -1LL;
	volatile int64_t t130 = -42424250524386LL;

    t130 = (x521|(x522<=(x523<=x524)));

    if (t130 != 1011LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = INT32_MAX;
	int16_t x526 = -3;
	uint16_t x527 = 958U;
	static volatile uint8_t x528 = UINT8_MAX;
	int32_t t131 = INT32_MAX;

    t131 = (x525|(x526<=(x527<=x528)));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x529 = UINT32_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	uint32_t x532 = 1732U;

    t132 = (x529|(x530<=(x531<=x532)));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	uint8_t x535 = 6U;
	static int16_t x536 = INT16_MIN;

    t133 = (x533|(x534<=(x535<=x536)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = 15;
	int16_t x539 = INT16_MAX;
	int64_t x540 = INT64_MAX;
	static int32_t t134 = INT32_MIN;

    t134 = (x537|(x538<=(x539<=x540)));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	volatile int16_t x542 = -1;
	static int32_t x543 = INT32_MIN;
	int32_t x544 = -1;
	volatile int32_t t135 = -70586773;

    t135 = (x541|(x542<=(x543<=x544)));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -1;
	volatile int64_t x546 = 11256521366024573LL;
	static int32_t x547 = INT32_MAX;
	int32_t x548 = INT32_MAX;
	int32_t t136 = 5040641;

    t136 = (x545|(x546<=(x547<=x548)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	volatile uint16_t x550 = 25248U;
	int16_t x551 = -1;
	volatile int8_t x552 = INT8_MIN;
	int64_t t137 = INT64_MIN;

    t137 = (x549|(x550<=(x551<=x552)));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	volatile uint32_t x554 = 3946961U;
	static volatile uint64_t x555 = UINT64_MAX;
	int32_t t138 = -1029;

    t138 = (x553|(x554<=(x555<=x556)));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	int32_t x559 = 68156;
	static volatile int16_t x560 = -5985;
	volatile int32_t t139 = INT32_MAX;

    t139 = (x557|(x558<=(x559<=x560)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x562 = 7U;
	int64_t x563 = INT64_MAX;
	volatile int64_t t140 = 72909912LL;

    t140 = (x561|(x562<=(x563<=x564)));

    if (t140 != -14LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	volatile int8_t x566 = 1;
	int16_t x567 = INT16_MAX;
	volatile int8_t x568 = -11;
	int64_t t141 = INT64_MAX;

    t141 = (x565|(x566<=(x567<=x568)));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = -14;
	volatile int64_t x570 = 18078LL;
	volatile uint64_t x571 = 54262545LLU;
	volatile int32_t t142 = -13320;

    t142 = (x569|(x570<=(x571<=x572)));

    if (t142 != -14) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 725LLU;
	int16_t x575 = INT16_MIN;
	static int64_t x576 = -1LL;
	static uint64_t t143 = 13516LLU;

    t143 = (x573|(x574<=(x575<=x576)));

    if (t143 != 725LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile uint16_t x578 = 1U;
	int8_t x580 = 15;
	int32_t t144 = -1;

    t144 = (x577|(x578<=(x579<=x580)));

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	uint32_t x583 = UINT32_MAX;
	static volatile uint8_t x584 = 3U;
	int32_t t145 = 249233;

    t145 = (x581|(x582<=(x583<=x584)));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = -1LL;
	static int16_t x587 = INT16_MAX;
	static uint8_t x588 = UINT8_MAX;
	uint64_t t146 = 11564521LLU;

    t146 = (x585|(x586<=(x587<=x588)));

    if (t146 != 75465LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = INT32_MIN;
	uint16_t x592 = UINT16_MAX;
	static int32_t t147 = -7;

    t147 = (x589|(x590<=(x591<=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = INT64_MAX;
	uint64_t x595 = UINT64_MAX;
	int8_t x596 = -1;
	uint32_t t148 = UINT32_MAX;

    t148 = (x593|(x594<=(x595<=x596)));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = 3U;
	uint64_t x598 = UINT64_MAX;
	uint8_t x599 = UINT8_MAX;
	uint64_t x600 = 3834909453538LLU;
	static volatile int32_t t149 = 3;

    t149 = (x597|(x598<=(x599<=x600)));

    if (t149 != 3) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = -13137296;
	int8_t x602 = INT8_MIN;
	static int8_t x603 = -53;
	uint16_t x604 = 1794U;
	int32_t t150 = 3;

    t150 = (x601|(x602<=(x603<=x604)));

    if (t150 != -13137295) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x605 = -41748868;
	int8_t x606 = INT8_MIN;
	uint32_t x608 = UINT32_MAX;

    t151 = (x605|(x606<=(x607<=x608)));

    if (t151 != -41748867) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 1LL;
	int64_t x610 = INT64_MIN;
	uint16_t x611 = 12U;
	int64_t x612 = INT64_MIN;
	int64_t t152 = 439710959979LL;

    t152 = (x609|(x610<=(x611<=x612)));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	uint16_t x614 = 29U;
	int16_t x615 = -1;
	volatile int32_t t153 = 38718214;

    t153 = (x613|(x614<=(x615<=x616)));

    if (t153 != 65535) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = 64166066943LLU;
	volatile int16_t x618 = INT16_MAX;
	volatile int64_t x619 = 2039749915591626728LL;
	static int16_t x620 = 185;
	uint64_t t154 = 100893395666127102LLU;

    t154 = (x617|(x618<=(x619<=x620)));

    if (t154 != 64166066943LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x623 = -1;
	volatile int32_t t155 = 48888;

    t155 = (x621|(x622<=(x623<=x624)));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x627 = INT32_MIN;
	uint32_t t156 = 153621187U;

    t156 = (x625|(x626<=(x627<=x628)));

    if (t156 != 501259706U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	volatile uint8_t x631 = 1U;
	int32_t t157 = 608992633;

    t157 = (x629|(x630<=(x631<=x632)));

    if (t157 != -2147483647) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x633 = INT64_MAX;
	int64_t x634 = INT64_MAX;
	static volatile int8_t x635 = INT8_MIN;
	volatile int64_t x636 = INT64_MAX;

    t158 = (x633|(x634<=(x635<=x636)));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	volatile int64_t x638 = INT64_MIN;
	uint8_t x640 = 88U;

    t159 = (x637|(x638<=(x639<=x640)));

    if (t159 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x641 = 972564717LLU;
	int8_t x642 = INT8_MIN;
	volatile int8_t x643 = -3;
	static volatile int32_t x644 = INT32_MAX;
	volatile uint64_t t160 = 1LLU;

    t160 = (x641|(x642<=(x643<=x644)));

    if (t160 != 972564717LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	int8_t x646 = -1;
	int64_t x647 = 29LL;

    t161 = (x645|(x646<=(x647<=x648)));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	static int16_t x650 = -1;
	int64_t x652 = 2205744847LL;
	int32_t t162 = -6871;

    t162 = (x649|(x650<=(x651<=x652)));

    if (t162 != -32767) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -964457;
	int32_t x654 = -1;
	uint64_t x655 = 15827311LLU;
	static uint16_t x656 = 96U;
	static int32_t t163 = 1982;

    t163 = (x653|(x654<=(x655<=x656)));

    if (t163 != -964457) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x658 = 1950234U;
	uint32_t x659 = 31849777U;
	uint16_t x660 = UINT16_MAX;
	volatile uint32_t t164 = 35U;

    t164 = (x657|(x658<=(x659<=x660)));

    if (t164 != 787379036U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -1;
	int8_t x663 = 7;
	int64_t x664 = INT64_MAX;
	int32_t t165 = -3;

    t165 = (x661|(x662<=(x663<=x664)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	uint8_t x666 = 25U;
	static volatile int32_t x668 = INT32_MIN;
	int32_t t166 = 16411342;

    t166 = (x665|(x666<=(x667<=x668)));

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int32_t x670 = INT32_MIN;
	volatile int8_t x671 = INT8_MIN;
	static uint32_t x672 = 223U;
	volatile int32_t t167 = -25758714;

    t167 = (x669|(x670<=(x671<=x672)));

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1057422404788LL;
	volatile uint8_t x674 = 22U;
	volatile uint8_t x675 = UINT8_MAX;
	uint8_t x676 = 13U;
	volatile int64_t t168 = 20LL;

    t168 = (x673|(x674<=(x675<=x676)));

    if (t168 != -1057422404788LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 26U;
	int16_t x678 = INT16_MIN;
	uint16_t x680 = 52U;
	static volatile int32_t t169 = 47141;

    t169 = (x677|(x678<=(x679<=x680)));

    if (t169 != 27) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x682 = UINT16_MAX;
	int16_t x683 = 0;
	uint32_t t170 = 10U;

    t170 = (x681|(x682<=(x683<=x684)));

    if (t170 != 2443U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 507U;
	volatile int64_t x686 = -1LL;
	int32_t x687 = -1;
	uint8_t x688 = 15U;

    t171 = (x685|(x686<=(x687<=x688)));

    if (t171 != 507U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MAX;
	uint32_t x690 = UINT32_MAX;
	volatile int64_t x691 = INT64_MIN;
	static volatile int8_t x692 = -1;
	static int32_t t172 = -793018;

    t172 = (x689|(x690<=(x691<=x692)));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 36U;
	static int64_t x695 = INT64_MIN;
	int8_t x696 = INT8_MIN;
	uint32_t t173 = 2985580U;

    t173 = (x693|(x694<=(x695<=x696)));

    if (t173 != 36U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 1754420U;
	int64_t x698 = 4139509029277958179LL;
	int32_t x699 = -1;
	volatile int8_t x700 = 14;
	static volatile uint32_t t174 = 995U;

    t174 = (x697|(x698<=(x699<=x700)));

    if (t174 != 1754420U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x702 = -1LL;
	uint32_t x704 = 1912858U;
	volatile int32_t t175 = 469359;

    t175 = (x701|(x702<=(x703<=x704)));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MAX;
	int32_t x707 = INT32_MAX;
	static int8_t x708 = INT8_MIN;
	uint32_t t176 = 3876089U;

    t176 = (x705|(x706<=(x707<=x708)));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 36U;
	int32_t x710 = -1;
	static volatile int32_t x711 = 1;
	static volatile int32_t t177 = 1;

    t177 = (x709|(x710<=(x711<=x712)));

    if (t177 != 37) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = 21U;
	static volatile int8_t x715 = INT8_MAX;
	int64_t x716 = INT64_MIN;
	int32_t t178 = -54947391;

    t178 = (x713|(x714<=(x715<=x716)));

    if (t178 != 21) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = INT16_MIN;
	uint64_t x718 = UINT64_MAX;
	static int8_t x719 = INT8_MIN;
	int32_t t179 = -490625;

    t179 = (x717|(x718<=(x719<=x720)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MAX;
	int8_t x722 = INT8_MIN;
	static volatile int8_t x723 = INT8_MIN;
	uint32_t x724 = 15012U;

    t180 = (x721|(x722<=(x723<=x724)));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	volatile int8_t x727 = -1;
	static uint32_t t181 = UINT32_MAX;

    t181 = (x725|(x726<=(x727<=x728)));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = INT32_MIN;
	volatile int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MAX;
	volatile int64_t t182 = -212466435996545979LL;

    t182 = (x729|(x730<=(x731<=x732)));

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x734 = 31U;
	int64_t x735 = INT64_MIN;
	volatile int32_t t183 = 93648;

    t183 = (x733|(x734<=(x735<=x736)));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	uint32_t x739 = 210332U;
	static int64_t t184 = 384890695818541426LL;

    t184 = (x737|(x738<=(x739<=x740)));

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	int16_t x743 = INT16_MAX;
	uint16_t x744 = 10944U;
	volatile int32_t t185 = -105;

    t185 = (x741|(x742<=(x743<=x744)));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = INT8_MIN;
	static int16_t x748 = INT16_MAX;
	int32_t t186 = 125;

    t186 = (x745|(x746<=(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = 28646;
	uint32_t x750 = UINT32_MAX;
	static volatile uint64_t x752 = UINT64_MAX;

    t187 = (x749|(x750<=(x751<=x752)));

    if (t187 != 28646) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x755 = -1;
	int8_t x756 = 1;

    t188 = (x753|(x754<=(x755<=x756)));

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MIN;
	volatile int16_t x759 = -221;
	int32_t x760 = INT32_MIN;
	int64_t t189 = -3876895646534966344LL;

    t189 = (x757|(x758<=(x759<=x760)));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = 64948;
	int64_t x762 = -1LL;
	int32_t x763 = 164002;
	static volatile int32_t t190 = 16060220;

    t190 = (x761|(x762<=(x763<=x764)));

    if (t190 != 64949) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	volatile uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = -39891818;

    t191 = (x765|(x766<=(x767<=x768)));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = 95;
	uint8_t x770 = 15U;
	int16_t x771 = -30;
	static int64_t x772 = INT64_MIN;
	int32_t t192 = -5;

    t192 = (x769|(x770<=(x771<=x772)));

    if (t192 != 95) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = 9LLU;
	uint16_t x774 = 6U;
	uint64_t x775 = UINT64_MAX;
	int8_t x776 = INT8_MAX;
	volatile uint64_t t193 = 2145297050652LLU;

    t193 = (x773|(x774<=(x775<=x776)));

    if (t193 != 9LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	uint64_t x778 = UINT64_MAX;
	static uint64_t x779 = 356786983664117553LLU;
	static uint16_t x780 = 213U;
	int64_t t194 = INT64_MAX;

    t194 = (x777|(x778<=(x779<=x780)));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = INT64_MIN;
	int16_t x782 = INT16_MIN;
	int64_t x784 = 898242LL;
	int64_t t195 = -28932LL;

    t195 = (x781|(x782<=(x783<=x784)));

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x787 = 38U;
	volatile int16_t x788 = INT16_MIN;
	int32_t t196 = 63896561;

    t196 = (x785|(x786<=(x787<=x788)));

    if (t196 != 961) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x789 = INT64_MIN;
	int32_t x792 = -1;
	int64_t t197 = 1348664176874LL;

    t197 = (x789|(x790<=(x791<=x792)));

    if (t197 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = -1LL;
	static int16_t x794 = -1;
	int32_t x795 = INT32_MIN;
	int64_t x796 = INT64_MAX;
	static volatile int64_t t198 = -1348LL;

    t198 = (x793|(x794<=(x795<=x796)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	volatile int64_t x799 = -1672936009927793480LL;
	volatile int32_t t199 = 818;

    t199 = (x797|(x798<=(x799<=x800)));

    if (t199 != -1) { NG(); } else { ; }
	
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

