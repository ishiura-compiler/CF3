
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

uint8_t x11 = 0U;
int32_t x15 = -1;
int32_t x18 = -1;
volatile int16_t x21 = INT16_MAX;
volatile uint64_t t5 = 41LLU;
static volatile int64_t x25 = INT64_MIN;
static int16_t x26 = -1611;
int16_t x27 = INT16_MAX;
int32_t x29 = INT32_MAX;
int8_t x31 = INT8_MAX;
int32_t x37 = 29927526;
static int8_t x45 = -1;
int16_t x47 = 0;
static uint8_t x48 = UINT8_MAX;
volatile int64_t x53 = INT64_MAX;
volatile int32_t x61 = -1;
int64_t x62 = INT64_MAX;
int8_t x69 = INT8_MIN;
int32_t x73 = -1;
int64_t x78 = INT64_MIN;
static int16_t x79 = -8;
volatile int32_t x90 = INT32_MAX;
int32_t x91 = INT32_MAX;
static uint8_t x92 = 32U;
static volatile int32_t t24 = 0;
uint32_t x103 = 627301712U;
volatile uint32_t x110 = UINT32_MAX;
static int32_t x116 = 436802;
int32_t t28 = -989810;
int8_t x126 = -1;
uint32_t t32 = 3027U;
uint16_t x136 = UINT16_MAX;
uint64_t t36 = 670759LLU;
int32_t x150 = INT32_MIN;
int16_t x153 = INT16_MAX;
volatile uint16_t x156 = UINT16_MAX;
int64_t x160 = 543208109722895LL;
int64_t x164 = -7449158431398254LL;
uint16_t x171 = UINT16_MAX;
static int8_t x172 = INT8_MIN;
static volatile uint32_t x176 = UINT32_MAX;
int8_t x177 = -18;
int16_t x178 = -1;
static int64_t x179 = INT64_MIN;
int8_t x182 = -1;
static int32_t x183 = 39500;
int32_t t45 = 13640;
static int8_t x185 = 1;
static int16_t x186 = INT16_MIN;
uint16_t x188 = 2U;
volatile int64_t t47 = 27188130061074LL;
static int64_t x197 = 34617698LL;
uint16_t x200 = 137U;
uint8_t x201 = UINT8_MAX;
volatile uint8_t x203 = 7U;
uint16_t x204 = 0U;
volatile int32_t t50 = -9370517;
uint32_t x205 = 212814U;
int32_t x211 = -1;
int8_t x214 = INT8_MIN;
int16_t x216 = 3283;
int64_t t54 = 8890492LL;
volatile int64_t x224 = INT64_MIN;
int16_t x229 = -3554;
uint8_t x246 = 20U;
int64_t x247 = INT64_MIN;
static int32_t x252 = INT32_MAX;
volatile int64_t x254 = 317789808454392868LL;
int64_t x257 = 2002927000617LL;
uint16_t x259 = 605U;
uint32_t x263 = 223926009U;
uint16_t x272 = 1U;
uint64_t t67 = 2LLU;
int64_t x275 = INT64_MIN;
int16_t x284 = -1;
int32_t t70 = -15155;
volatile int64_t x286 = INT64_MIN;
int16_t x287 = INT16_MIN;
int16_t x289 = INT16_MAX;
uint16_t x290 = 1167U;
static int16_t x291 = INT16_MAX;
volatile int64_t t72 = 1957172162196LL;
int8_t x293 = INT8_MIN;
volatile int64_t x299 = INT64_MAX;
volatile uint8_t x300 = 19U;
int64_t t74 = INT64_MAX;
uint16_t x308 = UINT16_MAX;
static int8_t x312 = INT8_MIN;
volatile uint8_t x319 = UINT8_MAX;
uint64_t x321 = 89462997026654577LLU;
int64_t x324 = INT64_MAX;
volatile int64_t t80 = INT64_MAX;
uint64_t t81 = UINT64_MAX;
static int32_t t82 = 1;
uint64_t x339 = 225895787222LLU;
int8_t x347 = 7;
uint16_t x349 = UINT16_MAX;
static uint64_t t87 = UINT64_MAX;
int32_t x354 = 380334188;
volatile uint16_t x357 = UINT16_MAX;
int16_t x363 = INT16_MIN;
static volatile int8_t x369 = INT8_MIN;
int64_t x371 = -19LL;
int8_t x372 = INT8_MIN;
static uint8_t x375 = 5U;
uint64_t x380 = 51443LLU;
uint64_t t96 = UINT64_MAX;
static uint16_t x399 = UINT16_MAX;
static volatile int8_t x407 = -1;
uint32_t x409 = 26385U;
int64_t x414 = INT64_MIN;
int64_t x417 = INT64_MIN;
uint16_t x419 = UINT16_MAX;
int64_t x422 = INT64_MIN;
static int16_t x424 = INT16_MIN;
static uint16_t x427 = UINT16_MAX;
uint64_t x429 = 249LLU;
int64_t t107 = 49LL;
uint16_t x437 = UINT16_MAX;
uint64_t x439 = 48150158596156890LLU;
volatile uint64_t t109 = 4766190LLU;
static uint32_t x445 = 14U;
uint16_t x450 = 386U;
int64_t x453 = INT64_MAX;
static int32_t t113 = -1;
int8_t x465 = -6;
int8_t x467 = INT8_MAX;
uint16_t x468 = UINT16_MAX;
int8_t x473 = INT8_MAX;
int8_t x479 = -2;
int32_t x487 = INT32_MIN;
int32_t t122 = 1920372;
int16_t x494 = INT16_MAX;
int64_t x498 = INT64_MIN;
int32_t x500 = -1;
uint16_t x508 = 7178U;
int64_t x509 = INT64_MIN;
volatile int64_t x512 = -34213725104852LL;
int64_t t128 = 1020LL;
int16_t x529 = INT16_MIN;
int64_t x543 = -1LL;
static int16_t x544 = INT16_MIN;
static int8_t x545 = INT8_MIN;
int16_t x549 = -1;
volatile int16_t x551 = 1;
int64_t x554 = -1LL;
int32_t t138 = -369;
int64_t x573 = -1LL;
volatile int64_t x589 = INT64_MAX;
uint8_t x593 = 12U;
static volatile uint8_t x597 = 1U;
uint8_t x600 = 29U;
static int64_t x602 = INT64_MIN;
static int64_t x606 = 6633LL;
uint64_t x609 = UINT64_MAX;
int64_t x612 = -1LL;
volatile int64_t x613 = 23350846LL;
static volatile int64_t t154 = -1LL;
volatile int8_t x621 = -1;
static int32_t x624 = INT32_MAX;
int8_t x627 = -1;
volatile uint64_t t156 = UINT64_MAX;
static int32_t t157 = -167483;
uint16_t x640 = 24U;
int8_t x643 = -1;
int8_t x650 = INT8_MIN;
uint32_t x652 = 28638134U;
int64_t x657 = INT64_MIN;
int64_t x661 = -1LL;
int32_t x664 = 36948;
int32_t x671 = -1345612;
int64_t x672 = -1LL;
int8_t x681 = INT8_MIN;
int8_t x686 = -1;
int16_t x702 = 6436;
volatile int32_t t175 = 219874;
int32_t x706 = 62023404;
uint64_t x707 = UINT64_MAX;
uint64_t x709 = UINT64_MAX;
int32_t t178 = -4;
static int64_t x723 = -1LL;
static int16_t x724 = -1;
int64_t t180 = 60394LL;
static volatile uint16_t x741 = 21326U;
uint64_t x747 = UINT64_MAX;
uint64_t t186 = UINT64_MAX;
int64_t t187 = -1599LL;
volatile int32_t x754 = INT32_MAX;
int8_t x759 = -1;
int32_t x760 = INT32_MAX;
int64_t x762 = INT64_MAX;
uint16_t x774 = UINT16_MAX;
int32_t x780 = -1;
volatile int16_t x782 = -48;
volatile uint8_t x783 = 0U;
volatile uint32_t t195 = 78508964U;
int32_t x790 = INT32_MAX;
static int16_t x793 = INT16_MIN;
static uint64_t t199 = 217LLU;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint64_t x2 = 55033LLU;
	int16_t x3 = INT16_MAX;
	int16_t x4 = -918;
	volatile int32_t t0 = -27;

    t0 = (((x1<=x2)^x3)|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = INT64_MAX;
	static int32_t x6 = -2276;
	volatile int16_t x7 = -1;
	static int32_t x8 = -155837574;
	static volatile int32_t t1 = -102917;

    t1 = (((x5<=x6)^x7)|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x9 = 16U;
	uint16_t x10 = UINT16_MAX;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = -111368017;

    t2 = (((x9<=x10)^x11)|x12);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	static volatile int64_t t3 = -47210118247234LL;

    t3 = (((x13<=x14)^x15)|x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = 0;
	int8_t x19 = 63;
	static int32_t x20 = -2457334;
	int32_t t4 = 1265;

    t4 = (((x17<=x18)^x19)|x20);

    if (t4 != -2457281) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x22 = -1;
	uint64_t x23 = 14139020LLU;
	volatile int64_t x24 = INT64_MAX;

    t5 = (((x21<=x22)^x23)|x24);

    if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x28 = 7;
	volatile int32_t t6 = 166;

    t6 = (((x25<=x26)^x27)|x28);

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = 1268542639LLU;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -2719;

    t7 = (((x29<=x30)^x31)|x32);

    if (t7 != -32641) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 60U;
	static uint64_t x34 = 4149LLU;
	uint32_t x35 = 94799369U;
	volatile int16_t x36 = INT16_MIN;
	volatile uint32_t t8 = 914609U;

    t8 = (((x33<=x34)^x35)|x36);

    if (t8 != 4294936072U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x38 = INT32_MIN;
	int16_t x39 = INT16_MAX;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = -22245064;

    t9 = (((x37<=x38)^x39)|x40);

    if (t9 != -2147450881) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int16_t x42 = 81;
	int64_t x43 = 272469790618401LL;
	static int8_t x44 = INT8_MIN;
	volatile int64_t t10 = 212LL;

    t10 = (((x41<=x42)^x43)|x44);

    if (t10 != -95LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -1;
	volatile int32_t t11 = 7582;

    t11 = (((x45<=x46)^x47)|x48);

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	static int32_t x51 = INT32_MIN;
	int32_t x52 = 141749;
	static int32_t t12 = -6633479;

    t12 = (((x49<=x50)^x51)|x52);

    if (t12 != -2147341899) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MAX;
	volatile int32_t x55 = INT32_MIN;
	int32_t x56 = 9502302;
	volatile int32_t t13 = 1;

    t13 = (((x53<=x54)^x55)|x56);

    if (t13 != -2137981346) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = INT32_MAX;
	int32_t x58 = -5346628;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;
	static volatile int32_t t14 = 108634163;

    t14 = (((x57<=x58)^x59)|x60);

    if (t14 != -32513) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x63 = 45U;
	static uint32_t x64 = 243942U;
	uint32_t t15 = 5579U;

    t15 = (((x61<=x62)^x63)|x64);

    if (t15 != 243950U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	static int8_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MAX;
	static int64_t t16 = 1343LL;

    t16 = (((x65<=x66)^x67)|x68);

    if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x70 = 4U;
	int64_t x71 = INT64_MAX;
	uint64_t x72 = 22LLU;
	uint64_t t17 = 27867998LLU;

    t17 = (((x69<=x70)^x71)|x72);

    if (t17 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MAX;
	int32_t t18 = 611673;

    t18 = (((x73<=x74)^x75)|x76);

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = -1LL;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -4;

    t19 = (((x77<=x78)^x79)|x80);

    if (t19 != -8) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int16_t x82 = -1;
	int16_t x83 = -1;
	int64_t x84 = -52745513019493LL;
	static volatile int64_t t20 = -3LL;

    t20 = (((x81<=x82)^x83)|x84);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MAX;
	int8_t x86 = INT8_MAX;
	int64_t x87 = -357447279817241008LL;
	static int32_t x88 = -1;
	volatile int64_t t21 = 86094329266455115LL;

    t21 = (((x85<=x86)^x87)|x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	volatile int32_t t22 = -6;

    t22 = (((x89<=x90)^x91)|x92);

    if (t22 != 2147483646) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = 16040124775114447LLU;
	uint32_t x94 = 1U;
	static uint8_t x95 = 20U;
	uint16_t x96 = 34U;
	int32_t t23 = 2395;

    t23 = (((x93<=x94)^x95)|x96);

    if (t23 != 54) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	static int8_t x99 = INT8_MIN;
	int32_t x100 = -1;

    t24 = (((x97<=x98)^x99)|x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 8290U;
	uint64_t x102 = UINT64_MAX;
	static uint8_t x104 = 2U;
	volatile uint32_t t25 = 206068U;

    t25 = (((x101<=x102)^x103)|x104);

    if (t25 != 627301715U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 31729195LLU;
	volatile int16_t x106 = INT16_MAX;
	static int8_t x107 = INT8_MIN;
	uint16_t x108 = 161U;
	int32_t t26 = 52;

    t26 = (((x105<=x106)^x107)|x108);

    if (t26 != -95) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 2767U;
	uint8_t x111 = 43U;
	int64_t x112 = -17744553516459582LL;
	int64_t t27 = 3255045322576LL;

    t27 = (((x109<=x110)^x111)|x112);

    if (t27 != -17744553516459542LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	uint8_t x114 = 5U;
	int16_t x115 = 10;

    t28 = (((x113<=x114)^x115)|x116);

    if (t28 != 436811) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = INT32_MIN;
	uint16_t x118 = UINT16_MAX;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = 8892367970309392LL;
	volatile int64_t t29 = 5632326LL;

    t29 = (((x117<=x118)^x119)|x120);

    if (t29 != 8892369009115134LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	int16_t x122 = 4656;
	volatile uint16_t x123 = UINT16_MAX;
	int16_t x124 = 42;
	volatile int32_t t30 = -163341;

    t30 = (((x121<=x122)^x123)|x124);

    if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 0;
	int64_t x127 = INT64_MAX;
	static uint64_t x128 = 2LLU;
	uint64_t t31 = 251828007619LLU;

    t31 = (((x125<=x126)^x127)|x128);

    if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	static volatile int8_t x130 = -1;
	int32_t x131 = INT32_MAX;
	volatile uint32_t x132 = 199153U;

    t32 = (((x129<=x130)^x131)|x132);

    if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	volatile int64_t x134 = INT64_MIN;
	static int8_t x135 = -1;
	volatile int32_t t33 = 1;

    t33 = (((x133<=x134)^x135)|x136);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile int64_t x138 = INT64_MIN;
	static int16_t x139 = -1;
	uint8_t x140 = 0U;
	volatile int32_t t34 = 269131;

    t34 = (((x137<=x138)^x139)|x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int8_t x142 = -16;
	int8_t x143 = -1;
	int64_t x144 = 0LL;
	volatile int64_t t35 = 398895LL;

    t35 = (((x141<=x142)^x143)|x144);

    if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = 12885;
	int32_t x146 = -1;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = 9374570505LLU;

    t36 = (((x145<=x146)^x147)|x148);

    if (t36 != 18446744072346703881LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	int64_t x152 = -234606464127LL;
	static volatile int64_t t37 = -433961374378476LL;

    t37 = (((x149<=x150)^x151)|x152);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MIN;
	int64_t x155 = -1LL;
	static int64_t t38 = 20887247833209LL;

    t38 = (((x153<=x154)^x155)|x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 70U;
	volatile uint16_t x158 = 1963U;
	static uint16_t x159 = 2U;
	volatile int64_t t39 = -3366LL;

    t39 = (((x157<=x158)^x159)|x160);

    if (t39 != 543208109722895LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	volatile int64_t x162 = 59954553LL;
	volatile uint8_t x163 = UINT8_MAX;
	int64_t t40 = -176524830234495404LL;

    t40 = (((x161<=x162)^x163)|x164);

    if (t40 != -7449158431398146LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x165 = UINT8_MAX;
	int32_t x166 = 47469458;
	int32_t x167 = -1;
	volatile uint16_t x168 = 45U;
	volatile int32_t t41 = 27;

    t41 = (((x165<=x166)^x167)|x168);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	int32_t x170 = -40733;
	int32_t t42 = 487665;

    t42 = (((x169<=x170)^x171)|x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = -5795226465294732LL;
	int16_t x175 = 853;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (((x173<=x174)^x175)|x176);

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x180 = -1;
	volatile int64_t t44 = -149959308773783282LL;

    t44 = (((x177<=x178)^x179)|x180);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 1U;
	volatile uint16_t x184 = 28U;

    t45 = (((x181<=x182)^x183)|x184);

    if (t45 != 39516) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x187 = 1;
	int32_t t46 = -342;

    t46 = (((x185<=x186)^x187)|x188);

    if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -32;
	int64_t x190 = INT64_MAX;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;

    t47 = (((x189<=x190)^x191)|x192);

    if (t47 != -32767LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x193 = UINT8_MAX;
	int8_t x194 = 0;
	int32_t x195 = 5703;
	uint8_t x196 = 69U;
	int32_t t48 = -13;

    t48 = (((x193<=x194)^x195)|x196);

    if (t48 != 5703) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = 1;
	int32_t x199 = 0;
	volatile int32_t t49 = -31767;

    t49 = (((x197<=x198)^x199)|x200);

    if (t49 != 137) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MIN;

    t50 = (((x201<=x202)^x203)|x204);

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x206 = 73440685048284556LLU;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 2U;
	static int32_t t51 = 29;

    t51 = (((x205<=x206)^x207)|x208);

    if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MAX;
	uint16_t x210 = 973U;
	static int32_t x212 = -1;
	int32_t t52 = -900536;

    t52 = (((x209<=x210)^x211)|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = INT32_MAX;
	volatile uint16_t x215 = 267U;
	static int32_t t53 = -43660373;

    t53 = (((x213<=x214)^x215)|x216);

    if (t53 != 3547) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 105U;
	static volatile int8_t x218 = INT8_MIN;
	static int16_t x219 = INT16_MIN;
	volatile int64_t x220 = 5983179498LL;

    t54 = (((x217<=x218)^x219)|x220);

    if (t54 != -27926LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 30U;
	volatile int64_t t55 = -252651305788LL;

    t55 = (((x221<=x222)^x223)|x224);

    if (t55 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = INT64_MIN;
	static int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	uint64_t x228 = 570LLU;
	uint64_t t56 = 27051LLU;

    t56 = (((x225<=x226)^x227)|x228);

    if (t56 != 18446744073709519419LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 0;

    t57 = (((x229<=x230)^x231)|x232);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	int8_t x234 = -3;
	volatile uint64_t x235 = 8160085105126LLU;
	uint64_t x236 = 1626771420677LLU;
	volatile uint64_t t58 = 322060206LLU;

    t58 = (((x233<=x234)^x235)|x236);

    if (t58 != 8228821401575LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = 3U;
	int8_t x238 = INT8_MAX;
	int32_t x239 = -6854525;
	static uint8_t x240 = 68U;
	int32_t t59 = -209693;

    t59 = (((x237<=x238)^x239)|x240);

    if (t59 != -6854458) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 5;
	uint32_t x242 = 7U;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = UINT8_MAX;
	int32_t t60 = 15817490;

    t60 = (((x241<=x242)^x243)|x244);

    if (t60 != -2147483393) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	uint32_t x248 = 24U;
	static volatile int64_t t61 = 50572093393118LL;

    t61 = (((x245<=x246)^x247)|x248);

    if (t61 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	volatile int32_t t62 = -35421;

    t62 = (((x249<=x250)^x251)|x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	static int16_t x255 = 54;
	uint32_t x256 = 190046U;
	static volatile uint32_t t63 = 37119898U;

    t63 = (((x253<=x254)^x255)|x256);

    if (t63 != 190079U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	static int32_t t64 = 140163;

    t64 = (((x257<=x258)^x259)|x260);

    if (t64 != -35) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	uint32_t x262 = UINT32_MAX;
	int8_t x264 = INT8_MAX;
	uint32_t t65 = 625350204U;

    t65 = (((x261<=x262)^x263)|x264);

    if (t65 != 223926015U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x265 = -1;
	uint16_t x266 = 8U;
	volatile uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 2012530169U;
	static volatile uint32_t t66 = UINT32_MAX;

    t66 = (((x265<=x266)^x267)|x268);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 9336643528LLU;

    t67 = (((x269<=x270)^x271)|x272);

    if (t67 != 9336643529LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 2U;
	int16_t x274 = INT16_MIN;
	static int8_t x276 = -1;
	volatile int64_t t68 = -2LL;

    t68 = (((x273<=x274)^x275)|x276);

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	int64_t x278 = -1LL;
	static int64_t x279 = 637309933385477966LL;
	uint16_t x280 = 758U;
	int64_t t69 = 424296918013LL;

    t69 = (((x277<=x278)^x279)|x280);

    if (t69 != 637309933385478142LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	uint32_t x282 = 114820U;
	int32_t x283 = INT32_MIN;

    t70 = (((x281<=x282)^x283)|x284);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	uint16_t x288 = 250U;
	int32_t t71 = -304222191;

    t71 = (((x285<=x286)^x287)|x288);

    if (t71 != -32518) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x292 = -1817439058837244994LL;

    t72 = (((x289<=x290)^x291)|x292);

    if (t72 != -1817439058837241857LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x294 = UINT8_MAX;
	static volatile int16_t x295 = -112;
	static uint32_t x296 = 147U;
	uint32_t t73 = 906011U;

    t73 = (((x293<=x294)^x295)|x296);

    if (t73 != 4294967187U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -2;
	uint16_t x298 = 324U;

    t74 = (((x297<=x298)^x299)|x300);

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 10;
	int8_t x302 = INT8_MIN;
	static int8_t x303 = INT8_MIN;
	int64_t x304 = -727888549LL;
	volatile int64_t t75 = -131445658897LL;

    t75 = (((x301<=x302)^x303)|x304);

    if (t75 != -37LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -110762LL;
	uint32_t x306 = UINT32_MAX;
	volatile int32_t x307 = -195;
	volatile int32_t t76 = -6869;

    t76 = (((x305<=x306)^x307)|x308);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = INT64_MIN;
	uint32_t x310 = UINT32_MAX;
	static int8_t x311 = -19;
	int32_t t77 = 59;

    t77 = (((x309<=x310)^x311)|x312);

    if (t77 != -20) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = -1LL;
	volatile int64_t x314 = -590484471679LL;
	volatile int8_t x315 = 3;
	int64_t x316 = INT64_MAX;
	static volatile int64_t t78 = INT64_MAX;

    t78 = (((x313<=x314)^x315)|x316);

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x317 = 32U;
	uint64_t x318 = 774216320369130LLU;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 5983000;

    t79 = (((x317<=x318)^x319)|x320);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x322 = 20U;
	volatile uint16_t x323 = UINT16_MAX;

    t80 = (((x321<=x322)^x323)|x324);

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MAX;
	volatile int16_t x326 = INT16_MIN;
	static uint16_t x327 = 1U;
	uint64_t x328 = UINT64_MAX;

    t81 = (((x325<=x326)^x327)|x328);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = 634;

    t82 = (((x329<=x330)^x331)|x332);

    if (t82 != -32133) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 0U;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = -227;
	static int8_t x336 = -1;
	int32_t t83 = 476179;

    t83 = (((x333<=x334)^x335)|x336);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 4749902214LLU;
	volatile uint16_t x338 = 182U;
	uint32_t x340 = UINT32_MAX;
	uint64_t t84 = 407056362028722224LLU;

    t84 = (((x337<=x338)^x339)|x340);

    if (t84 != 227633266687LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x341 = UINT32_MAX;
	static int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	int16_t x344 = 11067;
	static volatile int32_t t85 = 26471;

    t85 = (((x341<=x342)^x343)|x344);

    if (t85 != -69) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	int32_t x346 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t86 = -750148881;

    t86 = (((x345<=x346)^x347)|x348);

    if (t86 != -121) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = 55;
	volatile int64_t x351 = -1LL;
	static uint64_t x352 = 111511LLU;

    t87 = (((x349<=x350)^x351)|x352);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = 7504308U;
	uint32_t t88 = 33894554U;

    t88 = (((x353<=x354)^x355)|x356);

    if (t88 != 2154987957U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = -4749258;
	uint16_t x359 = 40U;
	uint64_t x360 = 545749848358LLU;
	volatile uint64_t t89 = 1059512012LLU;

    t89 = (((x357<=x358)^x359)|x360);

    if (t89 != 545749848366LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 22U;
	int8_t x362 = INT8_MIN;
	int64_t x364 = -1LL;
	int64_t t90 = 126596LL;

    t90 = (((x361<=x362)^x363)|x364);

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x365 = 79U;
	uint32_t x366 = 99894U;
	int32_t x367 = -1;
	int8_t x368 = 46;
	static volatile int32_t t91 = 5;

    t91 = (((x365<=x366)^x367)|x368);

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x370 = 2U;
	static volatile int64_t t92 = -3333908749LL;

    t92 = (((x369<=x370)^x371)|x372);

    if (t92 != -20LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x373 = 2U;
	uint32_t x374 = UINT32_MAX;
	int16_t x376 = -1;
	int32_t t93 = 36335955;

    t93 = (((x373<=x374)^x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x377 = -1;
	int16_t x378 = -109;
	volatile int16_t x379 = -111;
	volatile uint64_t t94 = 6347190327246954368LLU;

    t94 = (((x377<=x378)^x379)|x380);

    if (t94 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x381 = -1LL;
	volatile uint8_t x382 = UINT8_MAX;
	volatile uint16_t x383 = UINT16_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -943207;

    t95 = (((x381<=x382)^x383)|x384);

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x385 = UINT16_MAX;
	static int32_t x386 = INT32_MIN;
	uint64_t x387 = UINT64_MAX;
	volatile int16_t x388 = INT16_MIN;

    t96 = (((x385<=x386)^x387)|x388);

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = -109749;
	uint32_t x390 = UINT32_MAX;
	volatile uint16_t x391 = 4U;
	static int32_t x392 = -2118;
	int32_t t97 = -993057;

    t97 = (((x389<=x390)^x391)|x392);

    if (t97 != -2113) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 862209926578LL;
	int16_t x394 = 480;
	int32_t x395 = -440956;
	int8_t x396 = -15;
	volatile int32_t t98 = -6;

    t98 = (((x393<=x394)^x395)|x396);

    if (t98 != -11) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	int8_t x398 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;
	static volatile int64_t t99 = -1541390166434312824LL;

    t99 = (((x397<=x398)^x399)|x400);

    if (t99 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 126541585455259537LLU;
	static int64_t x402 = INT64_MIN;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = -1;
	volatile int32_t t100 = -101022;

    t100 = (((x401<=x402)^x403)|x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	volatile int8_t x406 = INT8_MAX;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t101 = 961193;

    t101 = (((x405<=x406)^x407)|x408);

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 89U;
	volatile uint32_t x411 = 3U;
	int64_t x412 = -1LL;
	volatile int64_t t102 = -5741909251722779LL;

    t102 = (((x409<=x410)^x411)|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int16_t x415 = INT16_MIN;
	int16_t x416 = 210;
	static int32_t t103 = 0;

    t103 = (((x413<=x414)^x415)|x416);

    if (t103 != -32558) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x418 = -1;
	int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -8;

    t104 = (((x417<=x418)^x419)|x420);

    if (t104 != -2147418114) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = 1;
	volatile uint8_t x423 = 5U;
	int32_t t105 = -186393500;

    t105 = (((x421<=x422)^x423)|x424);

    if (t105 != -32763) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MIN;
	int32_t x426 = 142;
	int32_t x428 = INT32_MAX;
	static volatile int32_t t106 = INT32_MAX;

    t106 = (((x425<=x426)^x427)|x428);

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = 1538;
	volatile int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MIN;

    t107 = (((x429<=x430)^x431)|x432);

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MIN;
	int32_t x434 = 5451767;
	static volatile uint16_t x435 = UINT16_MAX;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = -58;

    t108 = (((x433<=x434)^x435)|x436);

    if (t108 != -2147418114) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = UINT32_MAX;
	static int8_t x440 = INT8_MIN;

    t109 = (((x437<=x438)^x439)|x440);

    if (t109 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x441 = 3797U;
	int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MAX;
	int64_t x444 = INT64_MIN;
	volatile int64_t t110 = -9LL;

    t110 = (((x441<=x442)^x443)|x444);

    if (t110 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x446 = INT8_MIN;
	volatile uint16_t x447 = 0U;
	uint8_t x448 = 0U;
	volatile int32_t t111 = 6092;

    t111 = (((x445<=x446)^x447)|x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1714;
	int16_t x451 = -12;
	int16_t x452 = INT16_MIN;
	int32_t t112 = -935;

    t112 = (((x449<=x450)^x451)|x452);

    if (t112 != -11) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x454 = INT8_MIN;
	uint8_t x455 = 3U;
	static int16_t x456 = INT16_MIN;

    t113 = (((x453<=x454)^x455)|x456);

    if (t113 != -32765) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 7U;
	int32_t x458 = INT32_MAX;
	int32_t x459 = -1;
	int8_t x460 = 49;
	int32_t t114 = -22286454;

    t114 = (((x457<=x458)^x459)|x460);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	static volatile int64_t x462 = -1LL;
	static uint8_t x463 = UINT8_MAX;
	int8_t x464 = -1;
	volatile int32_t t115 = 2376;

    t115 = (((x461<=x462)^x463)|x464);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x466 = INT8_MIN;
	int32_t t116 = -9611567;

    t116 = (((x465<=x466)^x467)|x468);

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	static int16_t x470 = INT16_MIN;
	int8_t x471 = -1;
	static uint64_t x472 = UINT64_MAX;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = (((x469<=x470)^x471)|x472);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x474 = 114043LLU;
	static int16_t x475 = -6761;
	int8_t x476 = INT8_MAX;
	int32_t t118 = 33342249;

    t118 = (((x473<=x474)^x475)|x476);

    if (t118 != -6657) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = INT64_MIN;
	int32_t x478 = -1;
	int32_t x480 = INT32_MIN;
	volatile int32_t t119 = -73554;

    t119 = (((x477<=x478)^x479)|x480);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	uint8_t x482 = 15U;
	static volatile int16_t x483 = INT16_MIN;
	static uint8_t x484 = 1U;
	int32_t t120 = 1189;

    t120 = (((x481<=x482)^x483)|x484);

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x485 = UINT64_MAX;
	static int32_t x486 = 0;
	uint64_t x488 = 45056679057103024LLU;
	uint64_t t121 = 893006124LLU;

    t121 = (((x485<=x486)^x487)|x488);

    if (t121 != 18446744071930452144LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 10U;
	int32_t x490 = -1;
	int32_t x491 = INT32_MIN;
	uint16_t x492 = 11U;

    t122 = (((x489<=x490)^x491)|x492);

    if (t122 != -2147483637) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MAX;
	static int32_t x495 = INT32_MIN;
	int16_t x496 = 133;
	volatile int32_t t123 = 455749357;

    t123 = (((x493<=x494)^x495)|x496);

    if (t123 != -2147483515) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = INT8_MAX;
	uint64_t x499 = 1950528324120878LLU;
	uint64_t t124 = UINT64_MAX;

    t124 = (((x497<=x498)^x499)|x500);

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 3;
	static int16_t x502 = INT16_MIN;
	int16_t x503 = -1;
	int8_t x504 = -1;
	volatile int32_t t125 = -562010;

    t125 = (((x501<=x502)^x503)|x504);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 35124054U;
	int16_t x506 = 133;
	volatile uint32_t x507 = UINT32_MAX;
	uint32_t t126 = UINT32_MAX;

    t126 = (((x505<=x506)^x507)|x508);

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = 7839;
	volatile int8_t x511 = INT8_MIN;
	int64_t t127 = -107701LL;

    t127 = (((x509<=x510)^x511)|x512);

    if (t127 != -83LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	int32_t x514 = -397558;
	volatile uint32_t x515 = 4U;
	int64_t x516 = -10LL;

    t128 = (((x513<=x514)^x515)|x516);

    if (t128 != -10LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	static uint32_t x518 = UINT32_MAX;
	int8_t x519 = 1;
	int64_t x520 = -683908035148LL;
	int64_t t129 = 64136964880347LL;

    t129 = (((x517<=x518)^x519)|x520);

    if (t129 != -683908035148LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x521 = 14151;
	static int64_t x522 = INT64_MIN;
	int16_t x523 = 5;
	int8_t x524 = INT8_MAX;
	static int32_t t130 = -82915589;

    t130 = (((x521<=x522)^x523)|x524);

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -1776;
	uint16_t x526 = 3U;
	volatile uint32_t x527 = 4799U;
	int32_t x528 = 3;
	volatile uint32_t t131 = 1326U;

    t131 = (((x525<=x526)^x527)|x528);

    if (t131 != 4799U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x530 = -76;
	int64_t x531 = 122508175LL;
	volatile int16_t x532 = -1;
	int64_t t132 = -1LL;

    t132 = (((x529<=x530)^x531)|x532);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = INT32_MIN;
	int16_t x534 = -1;
	int16_t x535 = 1642;
	volatile int8_t x536 = -1;
	volatile int32_t t133 = 47689;

    t133 = (((x533<=x534)^x535)|x536);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = -1;
	int32_t x538 = INT32_MIN;
	static int32_t x539 = INT32_MIN;
	static volatile int16_t x540 = 1;
	int32_t t134 = -1314;

    t134 = (((x537<=x538)^x539)|x540);

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = 2692U;
	volatile int64_t x542 = INT64_MIN;
	static int64_t t135 = -234428413193129LL;

    t135 = (((x541<=x542)^x543)|x544);

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x546 = 267901675624356LLU;
	volatile int8_t x547 = INT8_MIN;
	int16_t x548 = 1511;
	volatile int32_t t136 = -2355;

    t136 = (((x545<=x546)^x547)|x548);

    if (t136 != -25) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MIN;
	uint8_t x552 = 3U;
	int32_t t137 = 37816206;

    t137 = (((x549<=x550)^x551)|x552);

    if (t137 != 3) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MIN;
	int16_t x555 = -1;
	volatile int8_t x556 = INT8_MIN;

    t138 = (((x553<=x554)^x555)|x556);

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = -1LL;
	int32_t x558 = -1;
	int8_t x559 = -1;
	uint64_t x560 = 453460066411LLU;
	volatile uint64_t t139 = UINT64_MAX;

    t139 = (((x557<=x558)^x559)|x560);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x562 = UINT64_MAX;
	int8_t x563 = 28;
	static int64_t x564 = -553662931LL;
	int64_t t140 = 0LL;

    t140 = (((x561<=x562)^x563)|x564);

    if (t140 != -553662915LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	uint16_t x566 = UINT16_MAX;
	uint8_t x567 = 106U;
	int32_t x568 = -8673;
	int32_t t141 = -29;

    t141 = (((x565<=x566)^x567)|x568);

    if (t141 != -8577) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -7124;
	volatile int64_t x570 = INT64_MIN;
	volatile uint16_t x571 = 22U;
	int64_t x572 = INT64_MIN;
	volatile int64_t t142 = 1LL;

    t142 = (((x569<=x570)^x571)|x572);

    if (t142 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = -1;
	static uint16_t x575 = UINT16_MAX;
	uint64_t x576 = 14291135024957758LLU;
	uint64_t t143 = 3494562527297423981LLU;

    t143 = (((x573<=x574)^x575)|x576);

    if (t143 != 14291135024988158LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	int16_t x578 = INT16_MIN;
	int64_t x579 = 243424198192LL;
	volatile uint8_t x580 = 44U;
	int64_t t144 = 11678092315911180LL;

    t144 = (((x577<=x578)^x579)|x580);

    if (t144 != 243424198205LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = INT32_MIN;
	int32_t x582 = INT32_MIN;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MIN;
	volatile uint64_t t145 = 17121023363979045LLU;

    t145 = (((x581<=x582)^x583)|x584);

    if (t145 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = 111;
	uint8_t x586 = 1U;
	int16_t x587 = INT16_MAX;
	int64_t x588 = -1LL;
	volatile int64_t t146 = 56026837LL;

    t146 = (((x585<=x586)^x587)|x588);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x590 = INT32_MIN;
	uint8_t x591 = UINT8_MAX;
	int64_t x592 = 16442830LL;
	static volatile int64_t t147 = -160110030018083LL;

    t147 = (((x589<=x590)^x591)|x592);

    if (t147 != 16442879LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = 1;
	int16_t x595 = 3808;
	uint64_t x596 = 532713460136059LLU;
	volatile uint64_t t148 = 0LLU;

    t148 = (((x593<=x594)^x595)|x596);

    if (t148 != 532713460137723LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x598 = -1;
	int64_t x599 = INT64_MAX;
	volatile int64_t t149 = INT64_MAX;

    t149 = (((x597<=x598)^x599)|x600);

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = INT32_MIN;
	int16_t x603 = INT16_MAX;
	uint64_t x604 = 57928709082870060LLU;
	static uint64_t t150 = 130599782962133014LLU;

    t150 = (((x601<=x602)^x603)|x604);

    if (t150 != 57928709082873855LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int8_t x607 = 2;
	volatile int64_t x608 = -3479233LL;
	static volatile int64_t t151 = 20829656878LL;

    t151 = (((x605<=x606)^x607)|x608);

    if (t151 != -3479233LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x610 = INT16_MIN;
	uint64_t x611 = UINT64_MAX;
	volatile uint64_t t152 = UINT64_MAX;

    t152 = (((x609<=x610)^x611)|x612);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x614 = 2U;
	volatile int32_t x615 = 2615813;
	int64_t x616 = 1287654027LL;
	static int64_t t153 = 1067970868239618021LL;

    t153 = (((x613<=x614)^x615)|x616);

    if (t153 != 1290267279LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = -1;
	int64_t x618 = INT64_MAX;
	int16_t x619 = INT16_MAX;
	int64_t x620 = 0LL;

    t154 = (((x617<=x618)^x619)|x620);

    if (t154 != 32766LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x622 = INT64_MIN;
	volatile int64_t x623 = INT64_MIN;
	static int64_t t155 = 4235LL;

    t155 = (((x621<=x622)^x623)|x624);

    if (t155 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 0;
	int32_t x626 = 68545399;
	static uint64_t x628 = 121LLU;

    t156 = (((x625<=x626)^x627)|x628);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = 212663;
	uint32_t x630 = 244434U;
	int32_t x631 = -328;
	int8_t x632 = -1;

    t157 = (((x629<=x630)^x631)|x632);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	volatile int8_t x634 = -18;
	volatile int16_t x635 = -1;
	volatile int64_t x636 = -69006464819411585LL;
	volatile int64_t t158 = 225654602832967LL;

    t158 = (((x633<=x634)^x635)|x636);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -9;
	int32_t x638 = -1;
	uint64_t x639 = 3995857745469LLU;
	volatile uint64_t t159 = 20910531LLU;

    t159 = (((x637<=x638)^x639)|x640);

    if (t159 != 3995857745468LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x642 = INT64_MIN;
	uint32_t x644 = UINT32_MAX;
	uint32_t t160 = UINT32_MAX;

    t160 = (((x641<=x642)^x643)|x644);

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 1269300U;
	int64_t x646 = -1LL;
	int32_t x647 = -2533906;
	uint32_t x648 = 8195195U;
	static volatile uint32_t t161 = 94829U;

    t161 = (((x645<=x646)^x647)|x648);

    if (t161 != 4294794751U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -320062519222LL;
	int64_t x651 = -1LL;
	static int64_t t162 = -2391843015LL;

    t162 = (((x649<=x650)^x651)|x652);

    if (t162 != -2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 11LL;
	volatile int32_t x654 = 3798;
	uint32_t x655 = 161227U;
	volatile int32_t x656 = INT32_MIN;
	uint32_t t163 = 223U;

    t163 = (((x653<=x654)^x655)|x656);

    if (t163 != 2147644874U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x658 = 103U;
	int64_t x659 = 3LL;
	int64_t x660 = INT64_MAX;
	int64_t t164 = INT64_MAX;

    t164 = (((x657<=x658)^x659)|x660);

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = INT8_MIN;
	static int8_t x663 = -43;
	int32_t t165 = -294113;

    t165 = (((x661<=x662)^x663)|x664);

    if (t165 != -43) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = -3;
	uint8_t x666 = 18U;
	static int32_t x667 = INT32_MAX;
	int16_t x668 = INT16_MIN;
	volatile int32_t t166 = 69589;

    t166 = (((x665<=x666)^x667)|x668);

    if (t166 != -2) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = 7085250544271LL;
	int32_t x670 = -29840;
	int64_t t167 = 2216LL;

    t167 = (((x669<=x670)^x671)|x672);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	int8_t x674 = INT8_MIN;
	uint32_t x675 = UINT32_MAX;
	int64_t x676 = -880755578LL;
	volatile int64_t t168 = -34578116963380LL;

    t168 = (((x673<=x674)^x675)|x676);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	static int32_t x678 = -1;
	int32_t x679 = 76445775;
	int16_t x680 = -16;
	volatile int32_t t169 = 29935379;

    t169 = (((x677<=x678)^x679)|x680);

    if (t169 != -2) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = 6LL;
	static int64_t x683 = INT64_MIN;
	uint16_t x684 = UINT16_MAX;
	volatile int64_t t170 = -119661343LL;

    t170 = (((x681<=x682)^x683)|x684);

    if (t170 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	static int16_t x687 = 1;
	int16_t x688 = 1;
	int32_t t171 = -642689;

    t171 = (((x685<=x686)^x687)|x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 561U;
	volatile int32_t x690 = -1;
	int64_t x691 = INT64_MIN;
	int64_t x692 = -1LL;
	volatile int64_t t172 = 41154933157LL;

    t172 = (((x689<=x690)^x691)|x692);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 7LLU;
	static uint32_t x694 = 2992U;
	int64_t x695 = 6161631LL;
	uint16_t x696 = UINT16_MAX;
	static int64_t t173 = -167583102998190LL;

    t173 = (((x693<=x694)^x695)|x696);

    if (t173 != 6225919LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = 1;
	int64_t x698 = INT64_MAX;
	int64_t x699 = INT64_MAX;
	int32_t x700 = 13349480;
	static int64_t t174 = -763900179028850LL;

    t174 = (((x697<=x698)^x699)|x700);

    if (t174 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 4008544LLU;
	static int32_t x703 = -481;
	int8_t x704 = INT8_MIN;

    t175 = (((x701<=x702)^x703)|x704);

    if (t175 != -97) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 1777724U;
	int8_t x708 = INT8_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (((x705<=x706)^x707)|x708);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MAX;
	int32_t x711 = -983;
	int64_t x712 = INT64_MIN;
	volatile int64_t t177 = 55171017LL;

    t177 = (((x709<=x710)^x711)|x712);

    if (t177 != -983LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = UINT8_MAX;
	uint16_t x714 = 0U;
	uint8_t x715 = 0U;
	static uint8_t x716 = 5U;

    t178 = (((x713<=x714)^x715)|x716);

    if (t178 != 5) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	uint8_t x718 = 0U;
	static int8_t x719 = INT8_MAX;
	int16_t x720 = -8593;
	int32_t t179 = 1078;

    t179 = (((x717<=x718)^x719)|x720);

    if (t179 != -8577) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MIN;
	int32_t x722 = INT32_MIN;

    t180 = (((x721<=x722)^x723)|x724);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	int32_t x726 = INT32_MIN;
	static volatile uint8_t x727 = UINT8_MAX;
	uint16_t x728 = 6U;
	volatile int32_t t181 = 134892;

    t181 = (((x725<=x726)^x727)|x728);

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = INT64_MAX;
	uint64_t x730 = 8719192667234448720LLU;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = -15942;
	int32_t t182 = -490584947;

    t182 = (((x729<=x730)^x731)|x732);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	static volatile uint64_t x734 = 30LLU;
	uint16_t x735 = 60U;
	uint64_t x736 = UINT64_MAX;
	static uint64_t t183 = UINT64_MAX;

    t183 = (((x733<=x734)^x735)|x736);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x738 = 475760334U;
	int16_t x739 = INT16_MIN;
	int64_t x740 = INT64_MAX;
	volatile int64_t t184 = 80285LL;

    t184 = (((x737<=x738)^x739)|x740);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x742 = 13865;
	int64_t x743 = 4371607478186049520LL;
	uint64_t x744 = 8817765LLU;
	volatile uint64_t t185 = 148166331696LLU;

    t185 = (((x741<=x742)^x743)|x744);

    if (t185 != 4371607478186475509LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 351093854LLU;
	static int32_t x746 = INT32_MAX;
	int64_t x748 = -24019LL;

    t186 = (((x745<=x746)^x747)|x748);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 41417346;
	uint32_t x750 = 610900U;
	int64_t x751 = 92526437044339042LL;
	volatile uint16_t x752 = UINT16_MAX;

    t187 = (((x749<=x750)^x751)|x752);

    if (t187 != 92526437044387839LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = INT8_MIN;
	static int16_t x755 = INT16_MAX;
	static int8_t x756 = -11;
	volatile int32_t t188 = 362759;

    t188 = (((x753<=x754)^x755)|x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	int64_t x758 = INT64_MIN;
	static volatile int32_t t189 = 37;

    t189 = (((x757<=x758)^x759)|x760);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 4506U;
	int16_t x763 = 199;
	volatile int16_t x764 = INT16_MIN;
	volatile int32_t t190 = -3;

    t190 = (((x761<=x762)^x763)|x764);

    if (t190 != -32570) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 0U;
	int16_t x766 = INT16_MIN;
	static int32_t x767 = INT32_MAX;
	uint16_t x768 = 1U;
	int32_t t191 = INT32_MAX;

    t191 = (((x765<=x766)^x767)|x768);

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -311841;
	uint16_t x770 = UINT16_MAX;
	int8_t x771 = 1;
	int64_t x772 = INT64_MIN;
	static volatile int64_t t192 = INT64_MIN;

    t192 = (((x769<=x770)^x771)|x772);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x775 = INT64_MIN;
	uint32_t x776 = 24881U;
	volatile int64_t t193 = 0LL;

    t193 = (((x773<=x774)^x775)|x776);

    if (t193 != -9223372036854750927LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	volatile int8_t x778 = -12;
	volatile int32_t x779 = INT32_MAX;
	int32_t t194 = -3522379;

    t194 = (((x777<=x778)^x779)|x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = -1;
	uint32_t x784 = 56U;

    t195 = (((x781<=x782)^x783)|x784);

    if (t195 != 56U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 14618U;
	uint8_t x786 = 56U;
	int32_t x787 = INT32_MIN;
	uint16_t x788 = 8U;
	int32_t t196 = -226;

    t196 = (((x785<=x786)^x787)|x788);

    if (t196 != -2147483640) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = 44232LL;
	static int32_t x791 = -1;
	int16_t x792 = -1;
	int32_t t197 = -85628;

    t197 = (((x789<=x790)^x791)|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x794 = 747U;
	int8_t x795 = -12;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t198 = -7071095;

    t198 = (((x793<=x794)^x795)|x796);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 30955U;
	volatile int64_t x798 = INT64_MIN;
	uint64_t x799 = 14858326256774LLU;
	int16_t x800 = 882;

    t199 = (((x797<=x798)^x799)|x800);

    if (t199 != 14858326257654LLU) { NG(); } else { ; }
	
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

