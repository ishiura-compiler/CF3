
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

static int16_t x1 = INT16_MIN;
uint32_t x2 = 11850U;
uint32_t t0 = 2U;
int16_t x10 = -1;
int64_t t4 = 14352022LL;
int16_t x22 = INT16_MIN;
volatile int32_t t5 = -1072;
volatile int32_t t6 = 245771537;
int32_t x37 = 1091;
int64_t x40 = 3141649756LL;
static volatile int32_t x42 = -443084207;
static volatile int32_t t10 = 418;
int32_t x52 = INT32_MAX;
int64_t x56 = 3341108438LL;
int32_t x59 = INT32_MIN;
int32_t t14 = 53171;
volatile int32_t t15 = 10724;
uint32_t x66 = 7U;
int16_t x75 = INT16_MIN;
int16_t x77 = 0;
uint16_t x81 = UINT16_MAX;
uint8_t x84 = UINT8_MAX;
volatile int32_t t20 = 10;
uint8_t x88 = UINT8_MAX;
int16_t x96 = 1;
static uint16_t x105 = UINT16_MAX;
volatile int32_t t26 = -288;
static int16_t x114 = -1;
uint64_t x119 = 74LLU;
uint8_t x120 = 1U;
volatile int32_t t29 = 17442379;
volatile int32_t x121 = -746;
volatile int16_t x134 = -1;
volatile int32_t x142 = -1;
int32_t x144 = -1;
uint32_t t36 = 85108U;
uint64_t x151 = UINT64_MAX;
volatile int64_t x156 = INT64_MIN;
static uint64_t x168 = UINT64_MAX;
int16_t x171 = -1;
int8_t x172 = -1;
uint16_t x178 = 29190U;
int64_t t45 = 3457618715201616LL;
int32_t x185 = INT32_MIN;
static uint8_t x187 = 12U;
int64_t x190 = INT64_MIN;
uint32_t x196 = 39U;
static uint64_t x197 = UINT64_MAX;
uint64_t t49 = 1431952578LLU;
int16_t x202 = -10;
static int8_t x207 = -35;
uint32_t x211 = 913589U;
int32_t t52 = 1097160;
static int64_t x213 = INT64_MAX;
uint64_t x215 = 6LLU;
int64_t x220 = INT64_MIN;
int32_t x223 = 351481;
static int32_t t55 = 5732;
static int32_t x227 = INT32_MIN;
volatile int32_t t56 = 738;
static int16_t x231 = INT16_MAX;
volatile int32_t t57 = -18;
uint16_t x233 = 15871U;
int32_t t58 = -28;
int16_t x237 = INT16_MIN;
uint16_t x245 = 4U;
volatile int64_t x246 = 252LL;
static uint16_t x251 = 9478U;
uint16_t x255 = UINT16_MAX;
volatile uint64_t x263 = 2367596360296LLU;
volatile uint32_t t65 = 617662U;
int32_t x277 = -422333952;
volatile uint16_t x279 = 13003U;
static volatile int16_t x283 = -1;
int32_t x288 = INT32_MIN;
int8_t x289 = 1;
int32_t t72 = -367219409;
static int16_t x293 = -3115;
volatile int32_t t73 = 237272901;
int64_t x305 = 23296LL;
static volatile int64_t x306 = INT64_MAX;
int64_t x307 = -407480284091LL;
volatile int32_t x308 = INT32_MIN;
uint16_t x310 = 9U;
uint16_t x312 = 1U;
uint64_t x315 = 11462859506LLU;
int32_t t78 = INT32_MIN;
volatile int32_t x317 = 13;
volatile int16_t x320 = INT16_MIN;
static uint16_t x322 = UINT16_MAX;
uint8_t x323 = 2U;
uint32_t t80 = 2791540U;
static int64_t x325 = INT64_MIN;
static int32_t x332 = INT32_MIN;
volatile uint32_t t82 = 289618934U;
int64_t x338 = -16387LL;
uint16_t x342 = 1U;
uint64_t x355 = 299614352LLU;
static volatile int16_t x356 = 3;
int64_t t88 = -118016099LL;
static volatile uint8_t x357 = 1U;
static volatile int16_t x363 = INT16_MAX;
static volatile int16_t x364 = INT16_MIN;
int8_t x372 = INT8_MIN;
int32_t t93 = 53;
int64_t x384 = -83674041507661LL;
int32_t x394 = -8767;
volatile uint32_t x408 = 519758953U;
uint64_t x413 = 6732852223LLU;
int16_t x414 = INT16_MAX;
uint64_t t103 = 26LLU;
volatile int32_t x424 = -242024;
uint32_t t106 = UINT32_MAX;
static int64_t t107 = -3974238LL;
int16_t x435 = 7;
uint64_t x436 = 5394315015319549052LLU;
int64_t x441 = INT64_MIN;
volatile int64_t t110 = 558973829417912837LL;
int16_t x448 = INT16_MIN;
volatile uint64_t t111 = 218893442081048462LLU;
static volatile int32_t x452 = INT32_MIN;
int64_t t114 = -968326675391801163LL;
static int16_t x469 = INT16_MAX;
int16_t x471 = INT16_MIN;
uint32_t x473 = 61U;
static int64_t x479 = -1LL;
uint16_t x482 = 3U;
int64_t x487 = -1LL;
int16_t x489 = INT16_MAX;
int32_t t122 = -7;
int8_t x494 = INT8_MIN;
static uint16_t x496 = 6U;
int8_t x500 = INT8_MIN;
int16_t x501 = INT16_MIN;
int32_t x502 = INT32_MAX;
volatile int32_t t125 = 37226077;
static uint64_t x511 = UINT64_MAX;
uint32_t x514 = 7809981U;
static uint32_t t128 = 2969672U;
int16_t x525 = -6137;
volatile int64_t x531 = INT64_MIN;
int8_t x537 = 13;
volatile int32_t x546 = 1;
volatile int64_t t138 = 455367948LL;
volatile int8_t x560 = INT8_MIN;
uint64_t t139 = 0LLU;
int64_t x562 = INT64_MIN;
uint8_t x567 = UINT8_MAX;
volatile uint8_t x568 = UINT8_MAX;
uint8_t x569 = 2U;
volatile int64_t x577 = INT64_MIN;
int32_t x579 = INT32_MIN;
int64_t x584 = INT64_MIN;
uint32_t x589 = 34980257U;
uint32_t x590 = 13619922U;
uint16_t x593 = 8U;
int8_t x594 = -1;
int16_t x597 = 1;
int32_t x598 = -1;
volatile int32_t t149 = 567;
int32_t x603 = -492989;
int32_t t151 = -14533962;
int8_t x609 = 62;
static volatile int8_t x611 = INT8_MIN;
int64_t x613 = INT64_MIN;
static uint16_t x619 = 17U;
volatile int16_t x620 = INT16_MIN;
uint64_t t154 = 39993856946247722LLU;
int16_t x621 = INT16_MIN;
static uint8_t x624 = 5U;
int64_t t156 = 2366003LL;
uint16_t x631 = UINT16_MAX;
uint64_t x634 = 5LLU;
static int16_t x635 = 0;
uint32_t x638 = 88218595U;
int8_t x641 = INT8_MIN;
static volatile int16_t x643 = 2;
static uint16_t x656 = UINT16_MAX;
int16_t x657 = 1;
int8_t x658 = -6;
int64_t x668 = -356496355342LL;
int64_t x671 = -12403024042525229LL;
uint8_t x672 = 119U;
int64_t x676 = INT64_MIN;
static int32_t x686 = -4;
uint16_t x691 = 161U;
uint16_t x692 = UINT16_MAX;
static int32_t x695 = INT32_MIN;
int16_t x706 = INT16_MIN;
int16_t x714 = INT16_MIN;
int16_t x720 = 1791;
uint64_t x721 = 216457LLU;
int64_t x722 = -1LL;
uint16_t x725 = 1466U;
int64_t x726 = -1LL;
static int8_t x728 = INT8_MIN;
uint32_t t183 = 28616662U;
uint32_t x737 = UINT32_MAX;
static uint8_t x740 = 0U;
uint32_t x744 = UINT32_MAX;
static int8_t x747 = -16;
volatile int64_t t186 = -1LL;
int16_t x749 = 36;
static uint16_t x754 = 6506U;
int64_t x758 = INT64_MIN;
int32_t x765 = INT32_MAX;
volatile int32_t t191 = -29;
int8_t x776 = 0;
uint16_t x793 = 846U;
static int32_t t198 = 104621;


void f0(void) {
    	int8_t x3 = -1;
	static int8_t x4 = 1;

    t0 = (x1&(x2|(x3<=x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 188306U;
	volatile int64_t x6 = INT64_MIN;
	volatile int8_t x7 = INT8_MAX;
	volatile int32_t x8 = 3;
	int64_t t1 = 1LL;

    t1 = (x5&(x6|(x7<=x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 1;

    t2 = (x9&(x10|(x11<=x12)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 6U;
	volatile int32_t t3 = -6;

    t3 = (x13&(x14|(x15<=x16)));

    if (t3 != 65409) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 53807LL;
	int64_t x18 = -4013926912LL;
	int64_t x19 = INT64_MAX;
	volatile int32_t x20 = INT32_MAX;

    t4 = (x17&(x18|(x19<=x20)));

    if (t4 != 20992LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile int8_t x23 = INT8_MAX;
	static uint32_t x24 = 7815U;

    t5 = (x21&(x22|(x23<=x24)));

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x25 = 6U;
	int16_t x26 = INT16_MIN;
	int64_t x27 = 0LL;
	int64_t x28 = 1LL;

    t6 = (x25&(x26|(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -1;
	volatile int8_t x30 = 1;
	uint16_t x31 = 0U;
	int32_t x32 = -1;
	volatile int32_t t7 = 133;

    t7 = (x29&(x30|(x31<=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	volatile int32_t x34 = 655793233;
	int64_t x35 = 3528624050867LL;
	volatile int64_t x36 = INT64_MIN;
	volatile uint32_t t8 = 17747002U;

    t8 = (x33&(x34|(x35<=x36)));

    if (t8 != 655793233U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = -1;
	int8_t x39 = 8;
	volatile int32_t t9 = 64719882;

    t9 = (x37&(x38|(x39<=x40)));

    if (t9 != 1091) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;

    t10 = (x41&(x42|(x43<=x44)));

    if (t10 != 1704399441) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 92U;
	int16_t x46 = INT16_MAX;
	uint16_t x47 = 6U;
	uint32_t x48 = 53931U;
	int32_t t11 = 1171;

    t11 = (x45&(x46|(x47<=x48)));

    if (t11 != 92) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -7826;
	volatile int16_t x50 = INT16_MIN;
	static uint32_t x51 = UINT32_MAX;
	static volatile int32_t t12 = 15140291;

    t12 = (x49&(x50|(x51<=x52)));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 2U;
	int16_t x54 = INT16_MIN;
	static int16_t x55 = INT16_MIN;
	volatile int32_t t13 = 695601;

    t13 = (x53&(x54|(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 0U;
	static uint16_t x58 = 5837U;
	int64_t x60 = 1932491320766312132LL;

    t14 = (x57&(x58|(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int8_t x62 = -41;
	uint64_t x63 = 10493800162704LLU;
	int32_t x64 = -1;

    t15 = (x61&(x62|(x63<=x64)));

    if (t15 != -41) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	static uint8_t x67 = UINT8_MAX;
	uint8_t x68 = 23U;
	uint32_t t16 = 414U;

    t16 = (x65&(x66|(x67<=x68)));

    if (t16 != 7U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -44;
	volatile uint16_t x70 = UINT16_MAX;
	static uint32_t x71 = 26880U;
	static int8_t x72 = -1;
	static int32_t t17 = -1;

    t17 = (x69&(x70|(x71<=x72)));

    if (t17 != 65492) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = UINT32_MAX;
	static uint16_t x76 = 48U;
	uint32_t t18 = 0U;

    t18 = (x73&(x74|(x75<=x76)));

    if (t18 != 2147483648U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MAX;
	volatile uint32_t x79 = 129802838U;
	uint32_t x80 = 37U;
	int32_t t19 = 0;

    t19 = (x77&(x78|(x79<=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	volatile uint16_t x83 = 2U;

    t20 = (x81&(x82|(x83<=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 1558;
	int64_t x86 = -1LL;
	static uint32_t x87 = 1437249U;
	int64_t t21 = -9404079155LL;

    t21 = (x85&(x86|(x87<=x88)));

    if (t21 != 1558LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	uint64_t x90 = 115313102791LLU;
	volatile int32_t x91 = INT32_MIN;
	int64_t x92 = -1LL;
	uint64_t t22 = 3LLU;

    t22 = (x89&(x90|(x91<=x92)));

    if (t22 != 115313102791LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = UINT16_MAX;
	volatile uint16_t x94 = 6U;
	volatile int64_t x95 = 28795177938LL;
	volatile int32_t t23 = -1572;

    t23 = (x93&(x94|(x95<=x96)));

    if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -9650185;
	uint8_t x98 = 15U;
	int16_t x99 = 833;
	static uint16_t x100 = UINT16_MAX;
	int32_t t24 = -17050;

    t24 = (x97&(x98|(x99<=x100)));

    if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 60603LLU;
	int32_t x102 = -1;
	int64_t x103 = -1LL;
	int16_t x104 = INT16_MAX;
	static volatile uint64_t t25 = 58709734323560869LLU;

    t25 = (x101&(x102|(x103<=x104)));

    if (t25 != 60603LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MIN;
	int64_t x107 = 3530141261338744LL;
	int64_t x108 = 4323661697377215LL;

    t26 = (x105&(x106|(x107<=x108)));

    if (t26 != 32769) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = 4U;
	int32_t x110 = -9751084;
	volatile uint8_t x111 = 3U;
	int32_t x112 = INT32_MIN;
	volatile uint32_t t27 = 355500671U;

    t27 = (x109&(x110|(x111<=x112)));

    if (t27 != 4U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = 1;
	volatile int32_t t28 = 4159;

    t28 = (x113&(x114|(x115<=x116)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 6U;
	volatile int8_t x118 = INT8_MAX;

    t29 = (x117&(x118|(x119<=x120)));

    if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = 1415548720852455LLU;
	int32_t x123 = -1;
	static volatile uint8_t x124 = 0U;
	static volatile uint64_t t30 = 7125031726859LLU;

    t30 = (x121&(x122|(x123<=x124)));

    if (t30 != 1415548720852230LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	int64_t x126 = INT64_MIN;
	int64_t x127 = 29379767812LL;
	static int8_t x128 = -58;
	int64_t t31 = -3724889809347657557LL;

    t31 = (x125&(x126|(x127<=x128)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	volatile uint16_t x130 = 3338U;
	int64_t x131 = -208156476LL;
	static volatile uint16_t x132 = 0U;
	volatile int64_t t32 = 3047843894283011LL;

    t32 = (x129&(x130|(x131<=x132)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int32_t x135 = -112151;
	uint64_t x136 = UINT64_MAX;
	static int32_t t33 = 1011;

    t33 = (x133&(x134|(x135<=x136)));

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	uint16_t x138 = 7U;
	volatile int16_t x139 = INT16_MAX;
	volatile int16_t x140 = -1;
	int32_t t34 = 82183122;

    t34 = (x137&(x138|(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1;
	static int8_t x143 = INT8_MIN;
	int32_t t35 = -106;

    t35 = (x141&(x142|(x143<=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MAX;
	uint32_t x146 = 14U;
	int16_t x147 = -1;
	static int8_t x148 = -1;

    t36 = (x145&(x146|(x147<=x148)));

    if (t36 != 15U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 19;
	int8_t x150 = -8;
	static int8_t x152 = INT8_MIN;
	int32_t t37 = 144;

    t37 = (x149&(x150|(x151<=x152)));

    if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	static int64_t x154 = 119336LL;
	uint32_t x155 = 1253540270U;
	static int64_t t38 = 0LL;

    t38 = (x153&(x154|(x155<=x156)));

    if (t38 != 40LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = 9U;
	int32_t x158 = INT32_MAX;
	volatile uint32_t x159 = UINT32_MAX;
	static uint64_t x160 = 34308156417LLU;
	volatile int32_t t39 = -1;

    t39 = (x157&(x158|(x159<=x160)));

    if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MAX;
	volatile uint32_t x162 = UINT32_MAX;
	volatile int32_t x163 = 768756464;
	int8_t x164 = INT8_MIN;
	volatile uint32_t t40 = 348U;

    t40 = (x161&(x162|(x163<=x164)));

    if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -192;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	volatile int32_t t41 = INT32_MIN;

    t41 = (x165&(x166|(x167<=x168)));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -3530329;
	volatile int16_t x170 = INT16_MIN;
	volatile int32_t t42 = -309;

    t42 = (x169&(x170|(x171<=x172)));

    if (t42 != -3538943) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	volatile uint64_t x174 = UINT64_MAX;
	static volatile int32_t x175 = -1;
	uint64_t x176 = 232435609428250431LLU;
	uint64_t t43 = 28498435123496LLU;

    t43 = (x173&(x174|(x175<=x176)));

    if (t43 != 4294967295LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x179 = -1LL;
	uint8_t x180 = UINT8_MAX;
	int32_t t44 = -843248;

    t44 = (x177&(x178|(x179<=x180)));

    if (t44 != 29184) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 29979LL;
	int64_t x182 = 825LL;
	volatile uint64_t x183 = 371LLU;
	int16_t x184 = INT16_MIN;

    t45 = (x181&(x182|(x183<=x184)));

    if (t45 != 281LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x186 = INT8_MAX;
	int16_t x188 = -1;
	volatile int32_t t46 = 1089;

    t46 = (x185&(x186|(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 361992;
	int8_t x191 = -1;
	static volatile uint8_t x192 = 1U;
	static volatile int64_t t47 = -8292LL;

    t47 = (x189&(x190|(x191<=x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = -1;
	int8_t x194 = -1;
	int8_t x195 = -6;
	volatile int32_t t48 = -39188358;

    t48 = (x193&(x194|(x195<=x196)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	static int32_t x199 = 238;
	int32_t x200 = INT32_MIN;

    t49 = (x197&(x198|(x199<=x200)));

    if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = 74479544;
	static volatile uint8_t x203 = 31U;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -625511705;

    t50 = (x201&(x202|(x203<=x204)));

    if (t50 != 74479536) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	uint32_t x206 = 46237U;
	int32_t x208 = -89229;
	uint32_t t51 = 1154907870U;

    t51 = (x205&(x206|(x207<=x208)));

    if (t51 != 46237U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 467;
	int8_t x210 = INT8_MAX;
	uint16_t x212 = 60U;

    t52 = (x209&(x210|(x211<=x212)));

    if (t52 != 83) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x214 = UINT64_MAX;
	int32_t x216 = -1;
	volatile uint64_t t53 = 177136970774846LLU;

    t53 = (x213&(x214|(x215<=x216)));

    if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MIN;
	static uint64_t x218 = UINT64_MAX;
	static volatile int16_t x219 = INT16_MIN;
	uint64_t t54 = 143672LLU;

    t54 = (x217&(x218|(x219<=x220)));

    if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -282;
	int8_t x222 = INT8_MAX;
	uint8_t x224 = UINT8_MAX;

    t55 = (x221&(x222|(x223<=x224)));

    if (t55 != 102) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	static int16_t x226 = INT16_MAX;
	int16_t x228 = -184;

    t56 = (x225&(x226|(x227<=x228)));

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -29;
	int32_t x230 = 25938399;
	static uint32_t x232 = UINT32_MAX;

    t57 = (x229&(x230|(x231<=x232)));

    if (t57 != 25938371) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = 2030;
	static int32_t x235 = INT32_MIN;
	volatile int64_t x236 = -1300597LL;

    t58 = (x233&(x234|(x235<=x236)));

    if (t58 != 1519) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x238 = 8115;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = 4LLU;
	volatile int32_t t59 = -70;

    t59 = (x237&(x238|(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 8163U;
	static int64_t x242 = INT64_MIN;
	int32_t x243 = -446352197;
	int16_t x244 = -2260;
	static int64_t t60 = -30733359796LL;

    t60 = (x241&(x242|(x243<=x244)));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x247 = 115426LL;
	int8_t x248 = INT8_MIN;
	static volatile int64_t t61 = 735887345512655LL;

    t61 = (x245&(x246|(x247<=x248)));

    if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	static int64_t x250 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	uint64_t t62 = 90265316362242453LLU;

    t62 = (x249&(x250|(x251<=x252)));

    if (t62 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	int32_t x254 = -8;
	uint16_t x256 = 3U;
	int64_t t63 = 5043230142267LL;

    t63 = (x253&(x254|(x255<=x256)));

    if (t63 != -8LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 1U;
	uint8_t x258 = 22U;
	int32_t x259 = INT32_MAX;
	volatile int32_t x260 = INT32_MIN;
	int32_t t64 = 0;

    t64 = (x257&(x258|(x259<=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	int16_t x262 = INT16_MIN;
	int64_t x264 = 1LL;

    t65 = (x261&(x262|(x263<=x264)));

    if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 85U;
	uint64_t x266 = UINT64_MAX;
	static uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MAX;
	uint64_t t66 = 1625433646351LLU;

    t66 = (x265&(x266|(x267<=x268)));

    if (t66 != 85LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	static int8_t x270 = INT8_MIN;
	volatile uint16_t x271 = 30U;
	uint16_t x272 = 26U;
	int32_t t67 = 13676;

    t67 = (x269&(x270|(x271<=x272)));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = 44574450U;
	uint32_t x274 = 249922U;
	int64_t x275 = -1LL;
	uint32_t x276 = 488509814U;
	static volatile uint32_t t68 = 1U;

    t68 = (x273&(x274|(x275<=x276)));

    if (t68 != 66U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x278 = INT16_MIN;
	int64_t x280 = -1LL;
	volatile int32_t t69 = 16968;

    t69 = (x277&(x278|(x279<=x280)));

    if (t69 != -422346752) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	volatile int64_t x282 = INT64_MAX;
	volatile uint64_t x284 = UINT64_MAX;
	static volatile int64_t t70 = 14352647LL;

    t70 = (x281&(x282|(x283<=x284)));

    if (t70 != 65535LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = -440741855547442LL;
	int64_t x286 = -1LL;
	volatile int16_t x287 = INT16_MAX;
	volatile int64_t t71 = 115949LL;

    t71 = (x285&(x286|(x287<=x288)));

    if (t71 != -440741855547442LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = -411740974;
	int8_t x291 = 4;
	int8_t x292 = -1;

    t72 = (x289&(x290|(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x294 = 37U;
	int64_t x295 = INT64_MIN;
	uint64_t x296 = UINT64_MAX;

    t73 = (x293&(x294|(x295<=x296)));

    if (t73 != 5) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MAX;
	uint64_t x298 = 890857LLU;
	int32_t x299 = -288742;
	uint64_t x300 = 663LLU;
	uint64_t t74 = 1656536666808889LLU;

    t74 = (x297&(x298|(x299<=x300)));

    if (t74 != 890857LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	volatile int8_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t75 = INT32_MAX;

    t75 = (x301&(x302|(x303<=x304)));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t t76 = 3LL;

    t76 = (x305&(x306|(x307<=x308)));

    if (t76 != 23296LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x309 = -1;
	volatile uint8_t x311 = 6U;
	static volatile int32_t t77 = -211;

    t77 = (x309&(x310|(x311<=x312)));

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	int8_t x316 = -1;

    t78 = (x313&(x314|(x315<=x316)));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = 774;
	uint8_t x319 = 4U;
	volatile int32_t t79 = -205296327;

    t79 = (x317&(x318|(x319<=x320)));

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	static uint8_t x324 = UINT8_MAX;

    t80 = (x321&(x322|(x323<=x324)));

    if (t80 != 65535U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = -28;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = INT64_MAX;
	int64_t t81 = INT64_MIN;

    t81 = (x325&(x326|(x327<=x328)));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = 1300751022U;
	static uint32_t x330 = 15795222U;
	static uint32_t x331 = UINT32_MAX;

    t82 = (x329&(x330|(x331<=x332)));

    if (t82 != 8454150U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = 5610956738404LLU;
	static uint8_t x336 = 0U;
	static int32_t t83 = 12;

    t83 = (x333&(x334|(x335<=x336)));

    if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 482LLU;
	volatile int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MAX;
	volatile uint64_t t84 = 1666912022LLU;

    t84 = (x337&(x338|(x339<=x340)));

    if (t84 != 480LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -35353948664045LL;
	int64_t x343 = INT64_MIN;
	static volatile int32_t x344 = INT32_MAX;
	volatile int64_t t85 = -55165429LL;

    t85 = (x341&(x342|(x343<=x344)));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	static uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 22538260;

    t86 = (x345&(x346|(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = -351LL;
	static int32_t x350 = -45;
	uint64_t x351 = UINT64_MAX;
	static int16_t x352 = INT16_MAX;
	volatile int64_t t87 = 416LL;

    t87 = (x349&(x350|(x351<=x352)));

    if (t87 != -383LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 12U;
	int64_t x354 = -1LL;

    t88 = (x353&(x354|(x355<=x356)));

    if (t88 != 12LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = 1865;
	static int16_t x359 = -979;
	int64_t x360 = -1LL;
	volatile int32_t t89 = -1419;

    t89 = (x357&(x358|(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -14174458976LL;
	static int16_t x362 = 30;
	int64_t t90 = -1548666387053219043LL;

    t90 = (x361&(x362|(x363<=x364)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MAX;
	int32_t x367 = INT32_MIN;
	int64_t x368 = -891177869146173LL;
	int64_t t91 = -27805LL;

    t91 = (x365&(x366|(x367<=x368)));

    if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = 84U;
	volatile uint64_t t92 = 234507815058LLU;

    t92 = (x369&(x370|(x371<=x372)));

    if (t92 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -6;
	static int32_t x374 = 36986;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = 288247142LLU;

    t93 = (x373&(x374|(x375<=x376)));

    if (t93 != 36986) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	volatile int16_t x378 = -117;
	int32_t x379 = -81;
	uint32_t x380 = UINT32_MAX;
	static volatile int32_t t94 = -7;

    t94 = (x377&(x378|(x379<=x380)));

    if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -1LL;
	int16_t x382 = INT16_MAX;
	volatile uint8_t x383 = UINT8_MAX;
	static int64_t t95 = -3744170LL;

    t95 = (x381&(x382|(x383<=x384)));

    if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = UINT32_MAX;
	int64_t x386 = -1LL;
	int64_t x387 = -1LL;
	volatile int8_t x388 = -3;
	int64_t t96 = -1864958LL;

    t96 = (x385&(x386|(x387<=x388)));

    if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x389 = 1U;
	volatile uint8_t x390 = 30U;
	static uint32_t x391 = 479192U;
	volatile uint32_t x392 = 1222U;
	static int32_t t97 = 491;

    t97 = (x389&(x390|(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = -1;
	static int64_t x395 = -1LL;
	uint64_t x396 = UINT64_MAX;
	static volatile int32_t t98 = 722;

    t98 = (x393&(x394|(x395<=x396)));

    if (t98 != -8767) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MAX;
	uint64_t x398 = UINT64_MAX;
	volatile uint64_t x399 = 16LLU;
	int32_t x400 = 158680210;
	volatile uint64_t t99 = 37254559232046LLU;

    t99 = (x397&(x398|(x399<=x400)));

    if (t99 != 32767LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 864U;
	volatile uint32_t x402 = 1U;
	int16_t x403 = INT16_MIN;
	int64_t x404 = INT64_MAX;
	static uint32_t t100 = 18797272U;

    t100 = (x401&(x402|(x403<=x404)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	volatile uint8_t x406 = 0U;
	int64_t x407 = -3LL;
	static volatile int32_t t101 = -6696;

    t101 = (x405&(x406|(x407<=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x409 = 17013;
	int16_t x410 = -1;
	int16_t x411 = INT16_MIN;
	uint32_t x412 = 79309343U;
	volatile int32_t t102 = -2427;

    t102 = (x409&(x410|(x411<=x412)));

    if (t102 != 17013) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x415 = INT64_MIN;
	static int16_t x416 = 426;

    t103 = (x413&(x414|(x415<=x416)));

    if (t103 != 11263LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 1U;
	static int64_t x418 = 10589LL;
	uint16_t x419 = UINT16_MAX;
	volatile uint8_t x420 = UINT8_MAX;
	volatile int64_t t104 = -1126867745LL;

    t104 = (x417&(x418|(x419<=x420)));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	static int16_t x422 = 828;
	uint8_t x423 = 8U;
	static int32_t t105 = -126552;

    t105 = (x421&(x422|(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = -1;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = 7U;

    t106 = (x425&(x426|(x427<=x428)));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	static int8_t x430 = INT8_MIN;
	uint32_t x431 = 13800905U;
	volatile uint8_t x432 = 0U;

    t107 = (x429&(x430|(x431<=x432)));

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 13;
	static int8_t x434 = INT8_MIN;
	int32_t t108 = 31;

    t108 = (x433&(x434|(x435<=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = 237;
	int16_t x438 = INT16_MIN;
	volatile int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 31320;

    t109 = (x437&(x438|(x439<=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x442 = 1;
	volatile uint32_t x443 = UINT32_MAX;
	uint32_t x444 = UINT32_MAX;

    t110 = (x441&(x442|(x443<=x444)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	uint64_t x446 = 5009079LLU;
	volatile int64_t x447 = INT64_MIN;

    t111 = (x445&(x446|(x447<=x448)));

    if (t111 != 5009024LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x449 = UINT64_MAX;
	int64_t x450 = -45552018LL;
	int16_t x451 = INT16_MAX;
	volatile uint64_t t112 = 29LLU;

    t112 = (x449&(x450|(x451<=x452)));

    if (t112 != 18446744073663999598LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MAX;
	static int32_t x454 = INT32_MAX;
	static uint32_t x455 = 1U;
	volatile int64_t x456 = INT64_MIN;
	int64_t t113 = -6542305223LL;

    t113 = (x453&(x454|(x455<=x456)));

    if (t113 != 2147483647LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	uint32_t x458 = 488877807U;
	int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MAX;

    t114 = (x457&(x458|(x459<=x460)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x461 = UINT32_MAX;
	volatile int32_t x462 = 78;
	volatile uint8_t x463 = 34U;
	uint32_t x464 = 1345430157U;
	uint32_t t115 = 273331U;

    t115 = (x461&(x462|(x463<=x464)));

    if (t115 != 79U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 0U;
	int16_t x466 = -1;
	int16_t x467 = 104;
	volatile int8_t x468 = INT8_MAX;
	int32_t t116 = 507;

    t116 = (x465&(x466|(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = 221546226660005094LLU;
	int64_t x472 = INT64_MAX;
	volatile uint64_t t117 = 45506LLU;

    t117 = (x469&(x470|(x471<=x472)));

    if (t117 != 21735LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x474 = 1U;
	volatile int8_t x475 = -25;
	volatile int8_t x476 = -1;
	uint32_t t118 = 546U;

    t118 = (x473&(x474|(x475<=x476)));

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	int8_t x478 = -2;
	int16_t x480 = 7;
	volatile int32_t t119 = INT32_MIN;

    t119 = (x477&(x478|(x479<=x480)));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MAX;
	int8_t x483 = -2;
	int32_t x484 = -15172036;
	static int32_t t120 = 0;

    t120 = (x481&(x482|(x483<=x484)));

    if (t120 != 3) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = -3976552455LL;
	uint32_t x486 = UINT32_MAX;
	volatile int32_t x488 = INT32_MIN;
	volatile int64_t t121 = -9469319170159LL;

    t121 = (x485&(x486|(x487<=x488)));

    if (t121 != 318414841LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x490 = INT32_MIN;
	volatile int64_t x491 = 0LL;
	volatile uint16_t x492 = UINT16_MAX;

    t122 = (x489&(x490|(x491<=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x493 = UINT64_MAX;
	uint64_t x495 = UINT64_MAX;
	volatile uint64_t t123 = 7LLU;

    t123 = (x493&(x494|(x495<=x496)));

    if (t123 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 109U;
	int64_t x498 = -1LL;
	uint32_t x499 = 8320U;
	volatile int64_t t124 = -32474698LL;

    t124 = (x497&(x498|(x499<=x500)));

    if (t124 != 109LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x503 = -1;
	int32_t x504 = INT32_MIN;

    t125 = (x501&(x502|(x503<=x504)));

    if (t125 != 2147450880) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	uint32_t x506 = 7096061U;
	volatile uint16_t x507 = UINT16_MAX;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t126 = 0U;

    t126 = (x505&(x506|(x507<=x508)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	int64_t x510 = INT64_MIN;
	uint8_t x512 = 124U;
	static volatile int64_t t127 = INT64_MIN;

    t127 = (x509&(x510|(x511<=x512)));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x513 = -1;
	uint64_t x515 = UINT64_MAX;
	uint16_t x516 = UINT16_MAX;

    t128 = (x513&(x514|(x515<=x516)));

    if (t128 != 7809981U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	uint8_t x518 = 1U;
	static uint8_t x519 = UINT8_MAX;
	static int32_t x520 = INT32_MIN;
	int32_t t129 = -8105611;

    t129 = (x517&(x518|(x519<=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 13U;
	static uint16_t x522 = UINT16_MAX;
	int16_t x523 = INT16_MIN;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t130 = -1829;

    t130 = (x521&(x522|(x523<=x524)));

    if (t130 != 13) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x526 = 1049641436LL;
	int16_t x527 = -1;
	uint16_t x528 = 50U;
	volatile int64_t t131 = -9431LL;

    t131 = (x525&(x526|(x527<=x528)));

    if (t131 != 1049640965LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 0;
	static int64_t x530 = INT64_MIN;
	int32_t x532 = INT32_MIN;
	static int64_t t132 = 238080069247303350LL;

    t132 = (x529&(x530|(x531<=x532)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 0U;
	uint8_t x534 = UINT8_MAX;
	uint32_t x535 = 1543786U;
	int32_t x536 = 9256;
	int32_t t133 = -21;

    t133 = (x533&(x534|(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = UINT16_MAX;
	uint8_t x539 = UINT8_MAX;
	uint8_t x540 = 7U;
	int32_t t134 = 6945792;

    t134 = (x537&(x538|(x539<=x540)));

    if (t134 != 13) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 674U;
	static int8_t x542 = -1;
	static int32_t x543 = -1;
	int64_t x544 = 0LL;
	volatile uint32_t t135 = 59U;

    t135 = (x541&(x542|(x543<=x544)));

    if (t135 != 674U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	volatile int32_t x547 = INT32_MIN;
	volatile int16_t x548 = INT16_MAX;
	static volatile int32_t t136 = -625;

    t136 = (x545&(x546|(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = INT8_MIN;
	static volatile int8_t x550 = -56;
	uint16_t x551 = UINT16_MAX;
	int16_t x552 = -72;
	volatile int32_t t137 = -3769;

    t137 = (x549&(x550|(x551<=x552)));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	volatile int64_t x554 = INT64_MIN;
	int32_t x555 = -1;
	int8_t x556 = -14;

    t138 = (x553&(x554|(x555<=x556)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 12110776556887679LLU;
	volatile int64_t x558 = -1LL;
	int16_t x559 = INT16_MIN;

    t139 = (x557&(x558|(x559<=x560)));

    if (t139 != 12110776556887679LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x563 = -1;
	int8_t x564 = INT8_MAX;
	volatile int64_t t140 = INT64_MIN;

    t140 = (x561&(x562|(x563<=x564)));

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = 56;
	static volatile uint8_t x566 = UINT8_MAX;
	volatile int32_t t141 = 991186;

    t141 = (x565&(x566|(x567<=x568)));

    if (t141 != 56) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x570 = 229U;
	static uint32_t x571 = 113590870U;
	int32_t x572 = -1;
	int32_t t142 = 464942078;

    t142 = (x569&(x570|(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int8_t x574 = INT8_MAX;
	int16_t x575 = -234;
	static int32_t x576 = INT32_MIN;
	int32_t t143 = 9026679;

    t143 = (x573&(x574|(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x578 = 61714U;
	volatile int16_t x580 = 1;
	int64_t t144 = -16292717499794411LL;

    t144 = (x577&(x578|(x579<=x580)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MIN;
	volatile int32_t x582 = 472263;
	volatile uint32_t x583 = UINT32_MAX;
	static int32_t t145 = 7845;

    t145 = (x581&(x582|(x583<=x584)));

    if (t145 != 458752) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	int32_t x586 = -506539;
	static int16_t x587 = 53;
	uint16_t x588 = UINT16_MAX;
	static int32_t t146 = 8064;

    t146 = (x585&(x586|(x587<=x588)));

    if (t146 != 17749) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x591 = INT16_MAX;
	int8_t x592 = -1;
	static uint32_t t147 = 444574824U;

    t147 = (x589&(x590|(x591<=x592)));

    if (t147 != 376960U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x595 = INT64_MIN;
	static uint16_t x596 = UINT16_MAX;
	volatile int32_t t148 = -426;

    t148 = (x593&(x594|(x595<=x596)));

    if (t148 != 8) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x599 = 8060334254537168LLU;
	static int64_t x600 = INT64_MIN;

    t149 = (x597&(x598|(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x601 = UINT32_MAX;
	int16_t x602 = -1;
	int16_t x604 = INT16_MIN;
	volatile uint32_t t150 = UINT32_MAX;

    t150 = (x601&(x602|(x603<=x604)));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	static volatile uint8_t x606 = 1U;
	static int8_t x607 = 21;
	uint32_t x608 = 316302U;

    t151 = (x605&(x606|(x607<=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x610 = 56U;
	int64_t x612 = INT64_MIN;
	static int32_t t152 = 779029449;

    t152 = (x609&(x610|(x611<=x612)));

    if (t152 != 56) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x614 = 28LLU;
	static uint32_t x615 = 389895802U;
	static int8_t x616 = -41;
	uint64_t t153 = 16LLU;

    t153 = (x613&(x614|(x615<=x616)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = 2U;
	uint64_t x618 = 225984096LLU;

    t154 = (x617&(x618|(x619<=x620)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x622 = 46U;
	int16_t x623 = -1;
	int32_t t155 = -221;

    t155 = (x621&(x622|(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;
	uint64_t x628 = UINT64_MAX;

    t156 = (x625&(x626|(x627<=x628)));

    if (t156 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -38875395LL;
	int64_t x630 = INT64_MAX;
	static int16_t x632 = -1;
	volatile int64_t t157 = 5153406744179LL;

    t157 = (x629&(x630|(x631<=x632)));

    if (t157 != 9223372036815900413LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	volatile int32_t x636 = 674;
	uint64_t t158 = 14751LLU;

    t158 = (x633&(x634|(x635<=x636)));

    if (t158 != 5LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MIN;
	int64_t x639 = INT64_MIN;
	volatile int16_t x640 = INT16_MIN;
	volatile int64_t t159 = 299LL;

    t159 = (x637&(x638|(x639<=x640)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x642 = UINT8_MAX;
	static uint32_t x644 = UINT32_MAX;
	volatile int32_t t160 = -642483;

    t160 = (x641&(x642|(x643<=x644)));

    if (t160 != 128) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = INT16_MIN;
	uint8_t x646 = 4U;
	int16_t x647 = 208;
	int32_t x648 = -1;
	volatile int32_t t161 = 30;

    t161 = (x645&(x646|(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 14797LL;
	volatile uint64_t x650 = UINT64_MAX;
	uint16_t x651 = 1819U;
	int16_t x652 = INT16_MIN;
	uint64_t t162 = 3700006515LLU;

    t162 = (x649&(x650|(x651<=x652)));

    if (t162 != 14797LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -1;
	int16_t x654 = -1;
	int32_t x655 = INT32_MIN;
	volatile int32_t t163 = 2334019;

    t163 = (x653&(x654|(x655<=x656)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x659 = -1;
	static int8_t x660 = -1;
	volatile int32_t t164 = -30631;

    t164 = (x657&(x658|(x659<=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = 657;
	uint64_t x662 = 1257523180383156LLU;
	volatile int8_t x663 = -4;
	int64_t x664 = -753344841072LL;
	volatile uint64_t t165 = 4264057093892LLU;

    t165 = (x661&(x662|(x663<=x664)));

    if (t165 != 656LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	int64_t x666 = INT64_MIN;
	uint16_t x667 = 24U;
	int64_t t166 = 25622LL;

    t166 = (x665&(x666|(x667<=x668)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 16U;
	int64_t x670 = -7879LL;
	int64_t t167 = 2720662020568018935LL;

    t167 = (x669&(x670|(x671<=x672)));

    if (t167 != 16LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x674 = -1;
	int16_t x675 = INT16_MAX;
	volatile int32_t t168 = INT32_MIN;

    t168 = (x673&(x674|(x675<=x676)));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = -775;
	uint8_t x678 = UINT8_MAX;
	static volatile uint64_t x679 = 8910293993LLU;
	volatile int8_t x680 = -28;
	int32_t t169 = 13662226;

    t169 = (x677&(x678|(x679<=x680)));

    if (t169 != 249) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -111235;
	uint8_t x682 = 34U;
	static int8_t x683 = INT8_MIN;
	int8_t x684 = INT8_MIN;
	volatile int32_t t170 = 335989;

    t170 = (x681&(x682|(x683<=x684)));

    if (t170 != 33) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -1LL;
	static volatile int64_t x687 = INT64_MIN;
	int16_t x688 = -1429;
	int64_t t171 = 1033149LL;

    t171 = (x685&(x686|(x687<=x688)));

    if (t171 != -3LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	int16_t x690 = -1;
	volatile int32_t t172 = 0;

    t172 = (x689&(x690|(x691<=x692)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = -5;
	uint32_t x694 = 0U;
	int64_t x696 = INT64_MIN;
	uint32_t t173 = 1311913691U;

    t173 = (x693&(x694|(x695<=x696)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	uint64_t x698 = 6169193LLU;
	uint16_t x699 = 0U;
	uint32_t x700 = UINT32_MAX;
	static uint64_t t174 = 129061086579799949LLU;

    t174 = (x697&(x698|(x699<=x700)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = UINT16_MAX;
	int8_t x702 = INT8_MIN;
	static int32_t x703 = -1;
	int32_t x704 = INT32_MIN;
	int32_t t175 = 40392038;

    t175 = (x701&(x702|(x703<=x704)));

    if (t175 != 65408) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	int32_t x707 = -1388647;
	static int32_t x708 = 3;
	static volatile int32_t t176 = -8;

    t176 = (x705&(x706|(x707<=x708)));

    if (t176 != 2147450881) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int64_t x710 = 1677627778LL;
	int64_t x711 = INT64_MIN;
	int8_t x712 = -43;
	int64_t t177 = -199839138539LL;

    t177 = (x709&(x710|(x711<=x712)));

    if (t177 != 1677627779LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = -1;
	int16_t x715 = 157;
	int8_t x716 = -4;
	int32_t t178 = -23;

    t178 = (x713&(x714|(x715<=x716)));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	int32_t x718 = 52572854;
	static int32_t x719 = INT32_MIN;
	int32_t t179 = 22713;

    t179 = (x717&(x718|(x719<=x720)));

    if (t179 != 52572800) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x723 = 1;
	int8_t x724 = INT8_MIN;
	uint64_t t180 = 72568500LLU;

    t180 = (x721&(x722|(x723<=x724)));

    if (t180 != 216457LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x727 = 19U;
	int64_t t181 = -7909894027184LL;

    t181 = (x725&(x726|(x727<=x728)));

    if (t181 != 1466LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	volatile uint64_t x730 = UINT64_MAX;
	int64_t x731 = INT64_MIN;
	int16_t x732 = INT16_MIN;
	static volatile uint64_t t182 = 1591LLU;

    t182 = (x729&(x730|(x731<=x732)));

    if (t182 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x733 = 294661U;
	uint32_t x734 = UINT32_MAX;
	static int32_t x735 = INT32_MAX;
	static uint64_t x736 = UINT64_MAX;

    t183 = (x733&(x734|(x735<=x736)));

    if (t183 != 294661U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x738 = INT32_MAX;
	volatile uint8_t x739 = UINT8_MAX;
	volatile uint32_t t184 = 4154338U;

    t184 = (x737&(x738|(x739<=x740)));

    if (t184 != 2147483647U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MAX;
	int64_t x742 = INT64_MAX;
	int16_t x743 = 1;
	static int64_t t185 = 1871306324902801782LL;

    t185 = (x741&(x742|(x743<=x744)));

    if (t185 != 127LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	static int64_t x746 = 2LL;
	uint8_t x748 = 35U;

    t186 = (x745&(x746|(x747<=x748)));

    if (t186 != 3LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x750 = UINT64_MAX;
	uint16_t x751 = UINT16_MAX;
	int64_t x752 = 971967LL;
	uint64_t t187 = 11856LLU;

    t187 = (x749&(x750|(x751<=x752)));

    if (t187 != 36LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x755 = INT32_MIN;
	uint32_t x756 = UINT32_MAX;
	int32_t t188 = 110159841;

    t188 = (x753&(x754|(x755<=x756)));

    if (t188 != 6400) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	static int64_t x759 = 6LL;
	int8_t x760 = INT8_MIN;
	volatile int64_t t189 = INT64_MIN;

    t189 = (x757&(x758|(x759<=x760)));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	static volatile uint16_t x762 = UINT16_MAX;
	uint16_t x763 = 161U;
	static uint16_t x764 = UINT16_MAX;
	int32_t t190 = -1861;

    t190 = (x761&(x762|(x763<=x764)));

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 28U;
	uint16_t x767 = 1448U;
	uint8_t x768 = UINT8_MAX;

    t191 = (x765&(x766|(x767<=x768)));

    if (t191 != 28) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	int32_t x770 = INT32_MIN;
	int16_t x771 = -4;
	int64_t x772 = INT64_MAX;
	int32_t t192 = INT32_MIN;

    t192 = (x769&(x770|(x771<=x772)));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 220246U;
	uint64_t x774 = 199505581LLU;
	int16_t x775 = INT16_MAX;
	static uint64_t t193 = 615408643210LLU;

    t193 = (x773&(x774|(x775<=x776)));

    if (t193 != 5124LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = -81417;
	int64_t x778 = INT64_MIN;
	static volatile int16_t x779 = -14;
	static int8_t x780 = INT8_MAX;
	static volatile int64_t t194 = -19767LL;

    t194 = (x777&(x778|(x779<=x780)));

    if (t194 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1236333895636270LL;
	uint16_t x782 = UINT16_MAX;
	int16_t x783 = INT16_MIN;
	uint64_t x784 = UINT64_MAX;
	int64_t t195 = 3091538519998784071LL;

    t195 = (x781&(x782|(x783<=x784)));

    if (t195 != 43730LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x785 = 56U;
	static uint8_t x786 = 15U;
	volatile int32_t x787 = 770;
	uint8_t x788 = 46U;
	int32_t t196 = 51;

    t196 = (x785&(x786|(x787<=x788)));

    if (t196 != 8) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	int16_t x790 = -1;
	int16_t x791 = INT16_MIN;
	uint32_t x792 = 470980U;
	volatile int32_t t197 = 72;

    t197 = (x789&(x790|(x791<=x792)));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MIN;
	int16_t x795 = INT16_MAX;
	volatile int8_t x796 = INT8_MIN;

    t198 = (x793&(x794|(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x797 = INT64_MAX;
	static volatile uint16_t x798 = 271U;
	int8_t x799 = INT8_MIN;
	volatile int8_t x800 = INT8_MAX;
	static volatile int64_t t199 = 515406799611532LL;

    t199 = (x797&(x798|(x799<=x800)));

    if (t199 != 271LL) { NG(); } else { ; }
	
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

