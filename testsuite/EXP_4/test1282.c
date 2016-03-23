
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

volatile int32_t x10 = INT32_MIN;
int16_t x22 = INT16_MIN;
uint64_t x23 = 5772642262829LLU;
uint8_t x25 = UINT8_MAX;
int8_t x32 = -1;
static volatile int16_t x33 = INT16_MIN;
volatile int8_t x35 = -1;
uint16_t x41 = 5470U;
uint16_t x47 = UINT16_MAX;
volatile int32_t t11 = -54578409;
int8_t x51 = INT8_MAX;
static int32_t x53 = INT32_MAX;
uint32_t x54 = 36690685U;
volatile int8_t x57 = -3;
int16_t x60 = INT16_MIN;
volatile int32_t t14 = 728285;
int32_t t16 = 629719;
volatile uint16_t x74 = 29U;
int16_t x80 = -1;
int16_t x87 = -7;
uint64_t x95 = 25LLU;
int32_t t23 = 14;
int64_t x99 = INT64_MIN;
uint64_t x104 = 2370055460830LLU;
volatile int32_t x116 = INT32_MIN;
volatile int32_t x117 = -1;
int64_t x124 = INT64_MAX;
volatile int32_t t32 = 0;
int8_t x133 = -1;
int8_t x136 = INT8_MIN;
int64_t x140 = INT64_MAX;
volatile int32_t t34 = -26938707;
uint64_t x143 = UINT64_MAX;
uint8_t x145 = 0U;
volatile int16_t x148 = -1;
int64_t x152 = INT64_MIN;
int32_t t41 = 7631;
int8_t x173 = -8;
static int8_t x179 = INT8_MIN;
int16_t x182 = INT16_MIN;
static uint32_t x195 = 2044U;
volatile int16_t x199 = 0;
static volatile int32_t t49 = -31023;
uint32_t x201 = UINT32_MAX;
int64_t x214 = INT64_MIN;
static int32_t t53 = -1;
int64_t x220 = 243089LL;
int32_t t54 = -1698274;
uint64_t x222 = 0LLU;
volatile int32_t x230 = INT32_MAX;
int16_t x231 = -1;
int32_t x241 = INT32_MIN;
uint64_t x245 = 708637980269LLU;
int32_t x252 = INT32_MIN;
int64_t x253 = INT64_MAX;
volatile uint32_t x255 = 10201762U;
uint64_t x259 = 3151861209LLU;
static uint16_t x279 = UINT16_MAX;
uint8_t x281 = 0U;
volatile uint32_t x283 = 126U;
int16_t x294 = INT16_MIN;
volatile int32_t t75 = 547724;
int64_t x310 = INT64_MIN;
int8_t x311 = 1;
uint8_t x313 = 6U;
int64_t x321 = 17230689951LL;
uint16_t x325 = 11U;
static int32_t t82 = 157973567;
uint32_t x333 = UINT32_MAX;
volatile int16_t x334 = 214;
int64_t x340 = 233396LL;
volatile int32_t t84 = -18614093;
int64_t x342 = INT64_MAX;
volatile uint16_t x349 = UINT16_MAX;
volatile int16_t x350 = -1434;
int32_t x362 = INT32_MIN;
static uint64_t x364 = 586282102763889538LLU;
volatile int32_t x367 = INT32_MAX;
int32_t t93 = -33;
int64_t x379 = INT64_MIN;
volatile int16_t x380 = INT16_MAX;
static volatile int16_t x383 = INT16_MAX;
int32_t x402 = INT32_MAX;
volatile int32_t t101 = 40;
int8_t x410 = INT8_MIN;
volatile int32_t t102 = -5;
int32_t t103 = -80;
static volatile int32_t x418 = -104421725;
int64_t x420 = INT64_MAX;
int32_t x427 = -1;
int32_t x429 = 16621208;
static volatile int32_t t109 = -2470;
static int64_t x441 = -1LL;
int32_t x443 = INT32_MIN;
uint64_t x451 = 831212233240364LLU;
int8_t x454 = INT8_MIN;
volatile int64_t x455 = INT64_MAX;
uint64_t x457 = 190380350LLU;
int16_t x466 = INT16_MIN;
uint8_t x471 = 1U;
uint16_t x473 = 38U;
int64_t x476 = -1LL;
static int64_t x481 = INT64_MIN;
volatile int32_t t120 = -1807;
uint64_t x487 = 19208613LLU;
uint8_t x490 = UINT8_MAX;
int32_t x491 = INT32_MAX;
int8_t x495 = INT8_MAX;
volatile int16_t x504 = INT16_MIN;
int16_t x506 = INT16_MIN;
static volatile uint8_t x507 = 42U;
int32_t t126 = -1;
int32_t x511 = 294;
static volatile int32_t t127 = -4;
int8_t x513 = 1;
volatile int32_t t128 = -821;
static int32_t x517 = -1;
static int64_t x520 = INT64_MIN;
volatile uint8_t x524 = UINT8_MAX;
uint64_t x528 = 2731804LLU;
uint64_t x533 = 173282061251371599LLU;
volatile int16_t x546 = -1;
int16_t x551 = INT16_MIN;
static int32_t t137 = -1;
uint64_t x560 = UINT64_MAX;
int32_t t140 = -929584;
int16_t x565 = -8116;
uint64_t x569 = UINT64_MAX;
static int16_t x578 = -424;
static int32_t t147 = -1647;
volatile int32_t x597 = INT32_MIN;
static int8_t x598 = -1;
uint32_t x599 = UINT32_MAX;
uint16_t x601 = 6927U;
uint32_t x603 = 990993582U;
volatile int64_t x606 = 6605610LL;
uint16_t x608 = 18U;
volatile uint16_t x613 = UINT16_MAX;
int32_t t153 = 998573373;
int16_t x621 = INT16_MIN;
int32_t x623 = INT32_MAX;
int16_t x628 = INT16_MIN;
int32_t t156 = -3921397;
int16_t x633 = -3215;
static int8_t x640 = -1;
int32_t x641 = INT32_MIN;
static int32_t x646 = INT32_MIN;
int8_t x647 = INT8_MIN;
int32_t t161 = 32385;
int8_t x652 = INT8_MIN;
uint8_t x660 = 22U;
int32_t t164 = 175401;
uint16_t x664 = 5311U;
int32_t x666 = INT32_MAX;
int32_t t166 = 1374;
uint32_t x670 = UINT32_MAX;
volatile int32_t t167 = 10867;
static volatile int8_t x674 = -1;
uint32_t x676 = 1767966U;
uint32_t x683 = UINT32_MAX;
int64_t x686 = -1LL;
volatile int8_t x688 = INT8_MIN;
int16_t x691 = -1;
int16_t x700 = INT16_MIN;
uint64_t x705 = 26308LLU;
volatile int32_t t176 = 0;
int16_t x711 = INT16_MIN;
uint8_t x720 = 12U;
static int32_t t179 = -66;
int8_t x727 = INT8_MAX;
static volatile int32_t t183 = 0;
int8_t x739 = 0;
uint16_t x744 = 1U;
volatile int64_t x745 = -1LL;
int32_t t186 = -261040;
uint32_t x752 = 439191U;
volatile int32_t x754 = -216538324;
volatile int32_t t188 = 479912758;
uint16_t x763 = UINT16_MAX;
static int32_t x769 = INT32_MAX;
volatile int32_t t192 = -14750;
volatile int16_t x773 = INT16_MAX;
int64_t x776 = -1LL;
static volatile int32_t t193 = -3472;
int16_t x779 = INT16_MIN;
volatile int32_t t194 = 45056854;
static volatile int32_t x783 = INT32_MIN;
uint16_t x791 = UINT16_MAX;
int8_t x792 = -1;
int32_t t198 = -698521440;
static int64_t x799 = -37201LL;


void f0(void) {
    	uint8_t x1 = 2U;
	static int64_t x2 = -7991331025LL;
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 2108421U;
	volatile int32_t t0 = -3647;

    t0 = (x1==(x2==(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint8_t x6 = 31U;
	int16_t x7 = -1;
	int16_t x8 = -1;
	volatile int32_t t1 = 235192;

    t1 = (x5==(x6==(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	uint8_t x11 = 3U;
	static uint64_t x12 = 12010215107235LLU;
	int32_t t2 = -300;

    t2 = (x9==(x10==(x11!=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	volatile int8_t x14 = 60;
	uint32_t x15 = 154U;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -6;

    t3 = (x13==(x14==(x15!=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 7;
	volatile uint16_t x18 = 856U;
	uint16_t x19 = UINT16_MAX;
	static uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = 27;

    t4 = (x17==(x18==(x19!=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -17;

    t5 = (x21==(x22==(x23!=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -14;
	volatile uint32_t x27 = 2117928762U;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 1;

    t6 = (x25==(x26==(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 37065718U;
	int64_t x30 = INT64_MIN;
	int32_t x31 = -61;
	int32_t t7 = 62191129;

    t7 = (x29==(x30==(x31!=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MAX;
	static uint16_t x36 = 0U;
	int32_t t8 = -1;

    t8 = (x33==(x34==(x35!=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 1288628153LLU;
	int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = 64U;
	int32_t x40 = -2634793;
	volatile int32_t t9 = -6200;

    t9 = (x37==(x38==(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x42 = -1;
	int32_t x43 = INT32_MIN;
	uint16_t x44 = 1U;
	volatile int32_t t10 = 1998289;

    t10 = (x41==(x42==(x43!=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 1;
	uint8_t x46 = UINT8_MAX;
	int8_t x48 = INT8_MIN;

    t11 = (x45==(x46==(x47!=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -2508233LL;
	static int64_t x50 = -1LL;
	static uint8_t x52 = 13U;
	static int32_t t12 = 0;

    t12 = (x49==(x50==(x51!=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x55 = INT64_MIN;
	volatile uint32_t x56 = UINT32_MAX;
	int32_t t13 = -134561;

    t13 = (x53==(x54==(x55!=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x58 = INT8_MIN;
	static int16_t x59 = INT16_MAX;

    t14 = (x57==(x58==(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 18U;
	int64_t x62 = INT64_MAX;
	static uint32_t x63 = 62U;
	int64_t x64 = -1LL;
	int32_t t15 = -80;

    t15 = (x61==(x62==(x63!=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = INT32_MAX;
	uint8_t x66 = UINT8_MAX;
	volatile int32_t x67 = 0;
	int64_t x68 = INT64_MAX;

    t16 = (x65==(x66==(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	static uint16_t x70 = 3U;
	int32_t x71 = -1434;
	int64_t x72 = -32165633357909496LL;
	int32_t t17 = 335210959;

    t17 = (x69==(x70==(x71!=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	uint16_t x75 = 2U;
	static int64_t x76 = 6676458066950732LL;
	int32_t t18 = 1;

    t18 = (x73==(x74==(x75!=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = -1;
	uint32_t x78 = 576U;
	int32_t x79 = INT32_MIN;
	int32_t t19 = -1827;

    t19 = (x77==(x78==(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MIN;
	static uint8_t x83 = 1U;
	static volatile uint32_t x84 = 481577035U;
	volatile int32_t t20 = -9011247;

    t20 = (x81==(x82==(x83!=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 28U;
	int64_t x86 = -1LL;
	int16_t x88 = -1;
	static volatile int32_t t21 = -1;

    t21 = (x85==(x86==(x87!=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 1U;
	static int8_t x90 = INT8_MAX;
	uint64_t x91 = 661341LLU;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -57553799;

    t22 = (x89==(x90==(x91!=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	uint64_t x94 = 8330024LLU;
	int8_t x96 = -10;

    t23 = (x93==(x94==(x95!=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	uint64_t x98 = 28LLU;
	int64_t x100 = 6361879882823LL;
	int32_t t24 = 6353755;

    t24 = (x97==(x98==(x99!=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 60866650U;
	volatile int64_t x102 = INT64_MAX;
	int64_t x103 = -841945945831769LL;
	int32_t t25 = -325719057;

    t25 = (x101==(x102==(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MAX;
	int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 14726;

    t26 = (x105==(x106==(x107!=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	static uint8_t x110 = 22U;
	int64_t x111 = -1LL;
	volatile int16_t x112 = 1;
	int32_t t27 = -5546;

    t27 = (x109==(x110==(x111!=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	volatile int32_t t28 = -1703;

    t28 = (x113==(x114==(x115!=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 1048034371LLU;
	static int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 2;

    t29 = (x117==(x118==(x119!=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	uint16_t x122 = UINT16_MAX;
	static int32_t x123 = INT32_MIN;
	volatile int32_t t30 = 12173;

    t30 = (x121==(x122==(x123!=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	int64_t x126 = 3986087230LL;
	int16_t x127 = INT16_MIN;
	int32_t x128 = 33;
	int32_t t31 = -1486;

    t31 = (x125==(x126==(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 273499252U;
	int64_t x132 = -1396LL;

    t32 = (x129==(x130==(x131!=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x134 = 27U;
	volatile int16_t x135 = 16339;
	static volatile int32_t t33 = -583902080;

    t33 = (x133==(x134==(x135!=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 3U;
	static uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;

    t34 = (x137==(x138==(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = 907344523;
	static uint64_t x142 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	static volatile int32_t t35 = 342509;

    t35 = (x141==(x142==(x143!=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = -1;
	static int64_t x147 = INT64_MIN;
	int32_t t36 = -172;

    t36 = (x145==(x146==(x147!=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = 107190LL;
	volatile int32_t t37 = 387401039;

    t37 = (x149==(x150==(x151!=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x153 = -1LL;
	static int16_t x154 = 10;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = 6426;

    t38 = (x153==(x154==(x155!=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 3U;
	uint64_t x158 = 6684926LLU;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MAX;
	int32_t t39 = -38091;

    t39 = (x157==(x158==(x159!=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	int32_t x162 = -11;
	int64_t x163 = 51241293209LL;
	static int8_t x164 = 55;
	static volatile int32_t t40 = 4062;

    t40 = (x161==(x162==(x163!=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 162197406LLU;
	int32_t x166 = -213801;
	int8_t x167 = INT8_MIN;
	static volatile int32_t x168 = -1;

    t41 = (x165==(x166==(x167!=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 23;
	static int16_t x170 = INT16_MIN;
	int32_t x171 = 126;
	uint32_t x172 = 2382U;
	volatile int32_t t42 = 3276630;

    t42 = (x169==(x170==(x171!=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x174 = 319U;
	int8_t x175 = -2;
	static int64_t x176 = 181914573363798LL;
	volatile int32_t t43 = -107;

    t43 = (x173==(x174==(x175!=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = 63;
	uint16_t x178 = UINT16_MAX;
	int32_t x180 = -66;
	int32_t t44 = 61913946;

    t44 = (x177==(x178==(x179!=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = -217192836LL;
	int16_t x183 = -2095;
	static int64_t x184 = INT64_MAX;
	volatile int32_t t45 = 30;

    t45 = (x181==(x182==(x183!=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	static volatile int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MIN;
	int32_t t46 = -84122;

    t46 = (x185==(x186==(x187!=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	static int16_t x190 = -835;
	int32_t x191 = -521781;
	int64_t x192 = 9617168544LL;
	volatile int32_t t47 = -12;

    t47 = (x189==(x190==(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x193 = -1;
	volatile uint32_t x194 = UINT32_MAX;
	static volatile int16_t x196 = INT16_MAX;
	volatile int32_t t48 = -22;

    t48 = (x193==(x194==(x195!=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 0U;
	static volatile uint64_t x198 = 262087689369922051LLU;
	volatile uint16_t x200 = UINT16_MAX;

    t49 = (x197==(x198==(x199!=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x202 = INT64_MIN;
	int8_t x203 = 1;
	volatile int8_t x204 = 0;
	static int32_t t50 = -36449;

    t50 = (x201==(x202==(x203!=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -6;
	int32_t x206 = -17622405;
	static uint64_t x207 = UINT64_MAX;
	int8_t x208 = 21;
	volatile int32_t t51 = 3;

    t51 = (x205==(x206==(x207!=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	uint32_t x210 = 386118095U;
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	int32_t t52 = 26203;

    t52 = (x209==(x210==(x211!=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MIN;
	uint32_t x215 = UINT32_MAX;
	static int32_t x216 = 6036186;

    t53 = (x213==(x214==(x215!=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int32_t x218 = -44;
	int8_t x219 = INT8_MIN;

    t54 = (x217==(x218==(x219!=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -60448973;
	static volatile int64_t x223 = INT64_MIN;
	volatile int16_t x224 = INT16_MIN;
	static volatile int32_t t55 = 3157172;

    t55 = (x221==(x222==(x223!=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 1744U;
	uint32_t x226 = 1318U;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	int32_t t56 = 225305912;

    t56 = (x225==(x226==(x227!=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 4917599459LL;
	volatile int64_t x232 = -1LL;
	int32_t t57 = -427862;

    t57 = (x229==(x230==(x231!=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x233 = 6U;
	static int64_t x234 = 188340416LL;
	static volatile int16_t x235 = -1;
	int8_t x236 = INT8_MIN;
	int32_t t58 = 92577;

    t58 = (x233==(x234==(x235!=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = 213526437;
	int8_t x238 = -1;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -4;

    t59 = (x237==(x238==(x239!=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x242 = 1;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = 1U;
	static int32_t t60 = -42;

    t60 = (x241==(x242==(x243!=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x246 = INT64_MIN;
	int64_t x247 = -1LL;
	int32_t x248 = 38632;
	volatile int32_t t61 = 51247;

    t61 = (x245==(x246==(x247!=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	static int64_t x250 = INT64_MIN;
	int32_t x251 = -24840;
	int32_t t62 = -6;

    t62 = (x249==(x250==(x251!=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = INT16_MAX;
	uint16_t x256 = 15U;
	volatile int32_t t63 = 761784;

    t63 = (x253==(x254==(x255!=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	static volatile int64_t x258 = -1LL;
	volatile uint8_t x260 = 1U;
	int32_t t64 = 45996;

    t64 = (x257==(x258==(x259!=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -10658;
	int32_t x262 = 6;
	int16_t x263 = 1;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -15412208;

    t65 = (x261==(x262==(x263!=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 73U;
	static int64_t x267 = -1LL;
	static volatile int32_t x268 = -1;
	static volatile int32_t t66 = -150779;

    t66 = (x265==(x266==(x267!=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 3049U;
	int64_t x270 = 2992LL;
	int32_t x271 = -2997;
	static int32_t x272 = -1;
	int32_t t67 = 357136940;

    t67 = (x269==(x270==(x271!=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	static int64_t x274 = 4560258590856LL;
	volatile uint8_t x275 = 2U;
	static int16_t x276 = INT16_MIN;
	static volatile int32_t t68 = -1357009;

    t68 = (x273==(x274==(x275!=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	static volatile uint64_t x278 = 12096491LLU;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 2018583;

    t69 = (x277==(x278==(x279!=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x282 = -1;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -6574;

    t70 = (x281==(x282==(x283!=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	uint32_t x286 = 7945706U;
	static uint32_t x287 = 448669997U;
	uint16_t x288 = 6814U;
	int32_t t71 = 1;

    t71 = (x285==(x286==(x287!=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	int8_t x290 = INT8_MAX;
	uint64_t x291 = 1063705613931LLU;
	static int64_t x292 = 3798448496209LL;
	static int32_t t72 = 19;

    t72 = (x289==(x290==(x291!=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint64_t x295 = 852532891LLU;
	static volatile int64_t x296 = -1LL;
	int32_t t73 = -13399;

    t73 = (x293==(x294==(x295!=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = 16U;
	int32_t x298 = 6396;
	uint8_t x299 = 3U;
	int16_t x300 = -1;
	volatile int32_t t74 = 37582253;

    t74 = (x297==(x298==(x299!=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = -330075110LL;
	static int64_t x302 = INT64_MIN;
	static volatile int64_t x303 = 361898955LL;
	volatile int8_t x304 = INT8_MAX;

    t75 = (x301==(x302==(x303!=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 35511824159409718LLU;
	volatile int16_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -37192;

    t76 = (x305==(x306==(x307!=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x309 = -255602772;
	int32_t x312 = -1;
	int32_t t77 = -7;

    t77 = (x309==(x310==(x311!=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = 0;
	static int64_t x315 = INT64_MAX;
	uint32_t x316 = 7U;
	volatile int32_t t78 = 1624511;

    t78 = (x313==(x314==(x315!=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -586047005;
	static int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MAX;
	volatile int32_t x320 = INT32_MAX;
	volatile int32_t t79 = 44;

    t79 = (x317==(x318==(x319!=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = -1;
	int16_t x323 = -1;
	int32_t x324 = -1;
	volatile int32_t t80 = 13;

    t80 = (x321==(x322==(x323!=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x326 = UINT8_MAX;
	volatile int16_t x327 = -6777;
	int8_t x328 = -14;
	volatile int32_t t81 = -306;

    t81 = (x325==(x326==(x327!=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = 27698130529302441LL;
	int8_t x331 = -1;
	int64_t x332 = INT64_MIN;

    t82 = (x329==(x330==(x331!=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x335 = -1;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t83 = -221631;

    t83 = (x333==(x334==(x335!=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	uint16_t x338 = 3680U;
	static int8_t x339 = INT8_MIN;

    t84 = (x337==(x338==(x339!=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int16_t x343 = -303;
	int64_t x344 = -401021517967LL;
	int32_t t85 = 757271101;

    t85 = (x341==(x342==(x343!=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int64_t x346 = 107LL;
	uint64_t x347 = 329073LLU;
	int8_t x348 = INT8_MAX;
	static int32_t t86 = 0;

    t86 = (x345==(x346==(x347!=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x351 = 64839575008997LLU;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -267236161;

    t87 = (x349==(x350==(x351!=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	static uint64_t x354 = 12455LLU;
	static int64_t x355 = INT64_MAX;
	int8_t x356 = -1;
	volatile int32_t t88 = -187109318;

    t88 = (x353==(x354==(x355!=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int64_t x358 = -77LL;
	uint64_t x359 = UINT64_MAX;
	volatile int32_t x360 = -1;
	volatile int32_t t89 = -494601;

    t89 = (x357==(x358==(x359!=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = 6;
	volatile int8_t x363 = INT8_MIN;
	int32_t t90 = -42;

    t90 = (x361==(x362==(x363!=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 7U;
	int64_t x366 = INT64_MIN;
	uint16_t x368 = 25U;
	static volatile int32_t t91 = -19;

    t91 = (x365==(x366==(x367!=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MIN;
	uint8_t x370 = UINT8_MAX;
	volatile uint64_t x371 = 9657447438011081LLU;
	static int16_t x372 = 334;
	volatile int32_t t92 = -64624;

    t92 = (x369==(x370==(x371!=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	int64_t x374 = -915LL;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = INT64_MIN;

    t93 = (x373==(x374==(x375!=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	volatile int32_t t94 = -20375;

    t94 = (x377==(x378==(x379!=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	static uint32_t x382 = UINT32_MAX;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t95 = -45619857;

    t95 = (x381==(x382==(x383!=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MIN;
	static volatile uint32_t x386 = 887256689U;
	static int16_t x387 = -53;
	int16_t x388 = -62;
	volatile int32_t t96 = -1;

    t96 = (x385==(x386==(x387!=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	static int16_t x390 = 0;
	int64_t x391 = -1LL;
	int32_t x392 = 1156283;
	int32_t t97 = 753;

    t97 = (x389==(x390==(x391!=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = UINT64_MAX;
	static uint8_t x394 = 0U;
	static int64_t x395 = -1LL;
	static int64_t x396 = -1LL;
	volatile int32_t t98 = -1542361;

    t98 = (x393==(x394==(x395!=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = 3;
	uint32_t x398 = UINT32_MAX;
	volatile int64_t x399 = INT64_MIN;
	int32_t x400 = -593243399;
	static volatile int32_t t99 = 12819347;

    t99 = (x397==(x398==(x399!=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = 4280577597LL;
	int8_t x403 = INT8_MIN;
	int8_t x404 = 0;
	volatile int32_t t100 = 15639059;

    t100 = (x401==(x402==(x403!=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 146484047051630LLU;
	int8_t x406 = 0;
	int32_t x407 = INT32_MIN;
	int64_t x408 = -8159443589803861LL;

    t101 = (x405==(x406==(x407!=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MAX;
	int32_t x411 = INT32_MIN;
	static volatile int64_t x412 = -20646724LL;

    t102 = (x409==(x410==(x411!=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x413 = INT64_MIN;
	volatile uint16_t x414 = 7U;
	uint16_t x415 = 113U;
	uint64_t x416 = 27793204155LLU;

    t103 = (x413==(x414==(x415!=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 62186U;
	volatile uint16_t x419 = 7984U;
	int32_t t104 = 1;

    t104 = (x417==(x418==(x419!=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int16_t x422 = -8587;
	uint64_t x423 = UINT64_MAX;
	volatile int64_t x424 = -1233917LL;
	int32_t t105 = -15503;

    t105 = (x421==(x422==(x423!=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	static volatile uint32_t x426 = 1121787668U;
	int8_t x428 = INT8_MAX;
	int32_t t106 = -456631982;

    t106 = (x425==(x426==(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x430 = INT64_MIN;
	volatile uint16_t x431 = 20294U;
	int8_t x432 = -3;
	volatile int32_t t107 = -9018;

    t107 = (x429==(x430==(x431!=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	uint8_t x434 = 0U;
	volatile int16_t x435 = INT16_MIN;
	static int16_t x436 = -12;
	int32_t t108 = 11021615;

    t108 = (x433==(x434==(x435!=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	static int8_t x438 = INT8_MIN;
	static int64_t x439 = -1LL;
	static int16_t x440 = 1885;

    t109 = (x437==(x438==(x439!=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x442 = INT16_MAX;
	uint64_t x444 = UINT64_MAX;
	int32_t t110 = 26611530;

    t110 = (x441==(x442==(x443!=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -12;
	int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = 10;
	volatile int32_t t111 = -182455455;

    t111 = (x445==(x446==(x447!=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	int8_t x450 = -39;
	static int32_t x452 = INT32_MIN;
	static int32_t t112 = -89;

    t112 = (x449==(x450==(x451!=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 2946U;
	volatile int32_t x456 = -3;
	int32_t t113 = -24;

    t113 = (x453==(x454==(x455!=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = INT32_MAX;
	static volatile int16_t x459 = -1;
	static volatile int8_t x460 = 2;
	volatile int32_t t114 = 9743646;

    t114 = (x457==(x458==(x459!=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MAX;
	int8_t x462 = INT8_MIN;
	volatile uint8_t x463 = 3U;
	int16_t x464 = INT16_MIN;
	int32_t t115 = 1;

    t115 = (x461==(x462==(x463!=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -20;
	int64_t x467 = INT64_MAX;
	volatile uint8_t x468 = UINT8_MAX;
	int32_t t116 = 2;

    t116 = (x465==(x466==(x467!=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MAX;
	static int32_t x470 = INT32_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = 2229984;

    t117 = (x469==(x470==(x471!=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x474 = 132U;
	uint64_t x475 = 106279LLU;
	static volatile int32_t t118 = 25410295;

    t118 = (x473==(x474==(x475!=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x478 = -1;
	int16_t x479 = -1;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t119 = 2816;

    t119 = (x477==(x478==(x479!=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x482 = INT32_MIN;
	volatile int16_t x483 = INT16_MIN;
	int8_t x484 = 7;

    t120 = (x481==(x482==(x483!=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 299U;
	static volatile int64_t x486 = -3493724LL;
	int16_t x488 = INT16_MIN;
	static int32_t t121 = 278151;

    t121 = (x485==(x486==(x487!=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	int8_t x492 = INT8_MIN;
	int32_t t122 = -7872;

    t122 = (x489==(x490==(x491!=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x493 = -1;
	uint16_t x494 = 142U;
	int8_t x496 = -1;
	static volatile int32_t t123 = 7;

    t123 = (x493==(x494==(x495!=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int8_t x498 = INT8_MIN;
	uint64_t x499 = 443LLU;
	int64_t x500 = -1LL;
	volatile int32_t t124 = -113870659;

    t124 = (x497==(x498==(x499!=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -3;
	static int8_t x502 = 19;
	static int32_t x503 = INT32_MIN;
	volatile int32_t t125 = -4;

    t125 = (x501==(x502==(x503!=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MIN;
	volatile int32_t x508 = -1;

    t126 = (x505==(x506==(x507!=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 8U;
	int8_t x510 = -1;
	int8_t x512 = 0;

    t127 = (x509==(x510==(x511!=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = -1;
	volatile int64_t x515 = -2114102095LL;
	int8_t x516 = INT8_MIN;

    t128 = (x513==(x514==(x515!=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x518 = INT8_MIN;
	uint8_t x519 = 72U;
	int32_t t129 = -9300;

    t129 = (x517==(x518==(x519!=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = -6;
	int32_t x522 = INT32_MAX;
	int32_t x523 = INT32_MIN;
	volatile int32_t t130 = 12497369;

    t130 = (x521==(x522==(x523!=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -6;
	int8_t x526 = -1;
	volatile uint8_t x527 = UINT8_MAX;
	volatile int32_t t131 = -27;

    t131 = (x525==(x526==(x527!=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 27055U;
	int32_t x530 = INT32_MAX;
	uint16_t x531 = 26U;
	int16_t x532 = -1;
	static int32_t t132 = 0;

    t132 = (x529==(x530==(x531!=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x534 = UINT64_MAX;
	volatile int64_t x535 = INT64_MIN;
	int8_t x536 = -1;
	int32_t t133 = 373;

    t133 = (x533==(x534==(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = 879446433762LL;
	static volatile uint8_t x538 = UINT8_MAX;
	static uint16_t x539 = 10023U;
	int8_t x540 = INT8_MIN;
	static int32_t t134 = -497066192;

    t134 = (x537==(x538==(x539!=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	int64_t x542 = -3508093001744LL;
	uint64_t x543 = 5693428689LLU;
	volatile int16_t x544 = 2;
	static volatile int32_t t135 = 4122;

    t135 = (x541==(x542==(x543!=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int16_t x547 = -1;
	int32_t x548 = INT32_MAX;
	int32_t t136 = -6;

    t136 = (x545==(x546==(x547!=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	uint32_t x550 = UINT32_MAX;
	int16_t x552 = 1460;

    t137 = (x549==(x550==(x551!=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = UINT32_MAX;
	int16_t x554 = INT16_MAX;
	int16_t x555 = INT16_MIN;
	uint8_t x556 = 0U;
	volatile int32_t t138 = -186629;

    t138 = (x553==(x554==(x555!=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	int32_t x558 = -1;
	uint64_t x559 = 24055438572095LLU;
	volatile int32_t t139 = -29360;

    t139 = (x557==(x558==(x559!=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1;
	int8_t x562 = INT8_MIN;
	uint64_t x563 = UINT64_MAX;
	static int8_t x564 = INT8_MAX;

    t140 = (x561==(x562==(x563!=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x566 = 18U;
	int8_t x567 = 0;
	static volatile uint16_t x568 = UINT16_MAX;
	int32_t t141 = 881162;

    t141 = (x565==(x566==(x567!=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x570 = 2U;
	static int16_t x571 = INT16_MIN;
	int32_t x572 = -13000;
	static volatile int32_t t142 = 16068;

    t142 = (x569==(x570==(x571!=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x573 = INT16_MIN;
	uint32_t x574 = UINT32_MAX;
	uint8_t x575 = 19U;
	volatile int64_t x576 = -1LL;
	volatile int32_t t143 = -13;

    t143 = (x573==(x574==(x575!=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	static int8_t x579 = INT8_MIN;
	int64_t x580 = -1LL;
	int32_t t144 = -1676;

    t144 = (x577==(x578==(x579!=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 15U;
	static int32_t x582 = INT32_MAX;
	volatile int64_t x583 = -1980362340213128504LL;
	uint8_t x584 = 2U;
	int32_t t145 = -762314;

    t145 = (x581==(x582==(x583!=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x585 = UINT8_MAX;
	int16_t x586 = -1;
	volatile int8_t x587 = INT8_MAX;
	static uint16_t x588 = 0U;
	int32_t t146 = -2797;

    t146 = (x585==(x586==(x587!=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = -1;
	uint32_t x590 = UINT32_MAX;
	int64_t x591 = -368LL;
	volatile int16_t x592 = INT16_MAX;

    t147 = (x589==(x590==(x591!=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 68952516876002LLU;
	int64_t x594 = -207861615466435LL;
	volatile int8_t x595 = -1;
	volatile int64_t x596 = INT64_MAX;
	volatile int32_t t148 = -1;

    t148 = (x593==(x594==(x595!=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x600 = 8579U;
	int32_t t149 = 11033922;

    t149 = (x597==(x598==(x599!=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x602 = 8759LL;
	int16_t x604 = INT16_MIN;
	int32_t t150 = 22707;

    t150 = (x601==(x602==(x603!=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MAX;
	int16_t x607 = INT16_MIN;
	int32_t t151 = 360551;

    t151 = (x605==(x606==(x607!=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = -790581567LL;
	int32_t x610 = INT32_MIN;
	int64_t x611 = -1LL;
	static int16_t x612 = INT16_MIN;
	int32_t t152 = 1;

    t152 = (x609==(x610==(x611!=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = -1;
	int16_t x615 = -1;
	int64_t x616 = INT64_MAX;

    t153 = (x613==(x614==(x615!=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	static uint16_t x618 = UINT16_MAX;
	static int64_t x619 = -7LL;
	int16_t x620 = INT16_MIN;
	int32_t t154 = -2;

    t154 = (x617==(x618==(x619!=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = 0;
	static uint8_t x624 = 7U;
	static int32_t t155 = 9;

    t155 = (x621==(x622==(x623!=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = INT16_MIN;
	static int32_t x626 = INT32_MIN;
	uint32_t x627 = 2641821U;

    t156 = (x625==(x626==(x627!=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	static int32_t x630 = INT32_MAX;
	int32_t x631 = -1;
	int32_t x632 = 0;
	volatile int32_t t157 = 2711310;

    t157 = (x629==(x630==(x631!=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = INT64_MAX;
	static uint64_t x635 = 1079064311604729261LLU;
	static volatile uint32_t x636 = UINT32_MAX;
	volatile int32_t t158 = -153940;

    t158 = (x633==(x634==(x635!=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = -1;
	int8_t x638 = -1;
	volatile uint16_t x639 = 2U;
	volatile int32_t t159 = -95490065;

    t159 = (x637==(x638==(x639!=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = 395349U;
	uint32_t x643 = UINT32_MAX;
	int32_t x644 = -1;
	static volatile int32_t t160 = -518166;

    t160 = (x641==(x642==(x643!=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	static uint64_t x648 = 6217894640992342971LLU;

    t161 = (x645==(x646==(x647!=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	uint32_t x650 = UINT32_MAX;
	int32_t x651 = INT32_MIN;
	volatile int32_t t162 = 195;

    t162 = (x649==(x650==(x651!=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	volatile int8_t x654 = 3;
	uint16_t x655 = 51U;
	static int16_t x656 = -1;
	volatile int32_t t163 = 273;

    t163 = (x653==(x654==(x655!=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	int8_t x658 = -25;
	int32_t x659 = INT32_MIN;

    t164 = (x657==(x658==(x659!=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	static int16_t x662 = INT16_MAX;
	volatile int32_t x663 = -1;
	int32_t t165 = 457;

    t165 = (x661==(x662==(x663!=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = 0LLU;
	static uint32_t x667 = UINT32_MAX;
	int32_t x668 = -247;

    t166 = (x665==(x666==(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -1;
	uint8_t x671 = 5U;
	int32_t x672 = -1;

    t167 = (x669==(x670==(x671!=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -7;
	uint64_t x675 = 120288LLU;
	int32_t t168 = 13;

    t168 = (x673==(x674==(x675!=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 0;
	int8_t x678 = 1;
	uint16_t x679 = 50U;
	static volatile int8_t x680 = -12;
	int32_t t169 = 40394732;

    t169 = (x677==(x678==(x679!=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 551139LL;
	int8_t x682 = INT8_MAX;
	uint16_t x684 = 1939U;
	int32_t t170 = -5124741;

    t170 = (x681==(x682==(x683!=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -2;
	int64_t x687 = -1LL;
	int32_t t171 = -106;

    t171 = (x685==(x686==(x687!=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	uint64_t x690 = 32164471223251042LLU;
	volatile int32_t x692 = -1;
	volatile int32_t t172 = -33425;

    t172 = (x689==(x690==(x691!=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	volatile int8_t x694 = 1;
	int64_t x695 = INT64_MIN;
	static uint64_t x696 = UINT64_MAX;
	int32_t t173 = -4303;

    t173 = (x693==(x694==(x695!=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = INT8_MIN;
	int16_t x698 = INT16_MAX;
	int8_t x699 = INT8_MAX;
	int32_t t174 = 256141;

    t174 = (x697==(x698==(x699!=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = INT64_MIN;
	volatile int64_t x702 = INT64_MIN;
	static int32_t x703 = -1;
	static int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 9479444;

    t175 = (x701==(x702==(x703!=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MIN;
	volatile uint64_t x707 = UINT64_MAX;
	int16_t x708 = INT16_MAX;

    t176 = (x705==(x706==(x707!=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 0U;
	volatile int32_t x710 = -4671;
	int64_t x712 = INT64_MIN;
	volatile int32_t t177 = 75561;

    t177 = (x709==(x710==(x711!=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x713 = 1128LLU;
	uint64_t x714 = UINT64_MAX;
	static uint16_t x715 = 10U;
	int16_t x716 = -6960;
	int32_t t178 = -2287;

    t178 = (x713==(x714==(x715!=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	int64_t x718 = INT64_MAX;
	volatile uint64_t x719 = UINT64_MAX;

    t179 = (x717==(x718==(x719!=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	int8_t x722 = -15;
	uint8_t x723 = UINT8_MAX;
	int32_t x724 = 8023;
	int32_t t180 = -235341162;

    t180 = (x721==(x722==(x723!=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	static int8_t x726 = INT8_MIN;
	int16_t x728 = INT16_MIN;
	int32_t t181 = -2772696;

    t181 = (x725==(x726==(x727!=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MAX;
	int64_t x730 = 2589663LL;
	int16_t x731 = -405;
	int8_t x732 = INT8_MIN;
	static int32_t t182 = -25506;

    t182 = (x729==(x730==(x731!=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 623600496LLU;
	uint8_t x734 = UINT8_MAX;
	uint8_t x735 = 0U;
	volatile int8_t x736 = -1;

    t183 = (x733==(x734==(x735!=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = 4;
	int64_t x738 = -4438915773809163597LL;
	static uint16_t x740 = 11741U;
	volatile int32_t t184 = 113;

    t184 = (x737==(x738==(x739!=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MAX;
	static volatile int32_t t185 = 40689;

    t185 = (x741==(x742==(x743!=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = INT32_MAX;
	volatile int8_t x747 = INT8_MAX;
	int16_t x748 = -16;

    t186 = (x745==(x746==(x747!=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x749 = INT16_MIN;
	volatile int8_t x750 = INT8_MAX;
	int8_t x751 = -2;
	int32_t t187 = -103;

    t187 = (x749==(x750==(x751!=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	static int16_t x755 = INT16_MAX;
	int8_t x756 = INT8_MIN;

    t188 = (x753==(x754==(x755!=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x757 = 26U;
	int8_t x758 = -26;
	int32_t x759 = INT32_MIN;
	static uint8_t x760 = UINT8_MAX;
	int32_t t189 = -328;

    t189 = (x757==(x758==(x759!=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	static uint8_t x762 = 0U;
	static volatile uint32_t x764 = 59U;
	int32_t t190 = 78467;

    t190 = (x761==(x762==(x763!=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	int32_t x766 = -1;
	static uint16_t x767 = 8315U;
	volatile int32_t x768 = INT32_MAX;
	int32_t t191 = 85;

    t191 = (x765==(x766==(x767!=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x770 = 9039151U;
	volatile int32_t x771 = 12150;
	int64_t x772 = -1LL;

    t192 = (x769==(x770==(x771!=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x774 = 857U;
	volatile int32_t x775 = -22;

    t193 = (x773==(x774==(x775!=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 4U;
	int64_t x780 = 6624339930763161LL;

    t194 = (x777==(x778==(x779!=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 1517U;
	int64_t x782 = INT64_MIN;
	static int64_t x784 = INT64_MIN;
	int32_t t195 = 106000411;

    t195 = (x781==(x782==(x783!=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x785 = INT32_MAX;
	volatile uint32_t x786 = UINT32_MAX;
	uint16_t x787 = 1U;
	int16_t x788 = -1;
	volatile int32_t t196 = 143637;

    t196 = (x785==(x786==(x787!=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 1387341471316490LLU;
	int32_t x790 = -1;
	volatile int32_t t197 = -1;

    t197 = (x789==(x790==(x791!=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 47U;
	static int64_t x794 = INT64_MIN;
	static int32_t x795 = 1;
	volatile int8_t x796 = -1;

    t198 = (x793==(x794==(x795!=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	volatile int32_t x798 = 369768589;
	int16_t x800 = INT16_MIN;
	int32_t t199 = 408;

    t199 = (x797==(x798==(x799!=x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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

