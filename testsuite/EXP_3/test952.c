
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

int64_t x1 = INT64_MIN;
uint32_t x4 = UINT32_MAX;
int16_t x8 = -1;
int32_t x12 = INT32_MIN;
static int16_t x15 = INT16_MIN;
volatile int32_t t3 = 1;
volatile int64_t t4 = -1LL;
uint64_t x22 = 42713605756803851LLU;
uint64_t t6 = 374056LLU;
int8_t x30 = INT8_MAX;
static volatile int32_t x35 = INT32_MIN;
int64_t t9 = 471970LL;
volatile int16_t x44 = INT16_MAX;
static uint64_t x57 = 82428LLU;
static int16_t x66 = 27;
volatile int32_t x67 = 4;
int32_t x73 = INT32_MIN;
volatile uint64_t t18 = 1534495LLU;
int64_t t19 = 11827498991906LL;
int16_t x81 = INT16_MIN;
int8_t x83 = INT8_MIN;
int16_t x86 = INT16_MIN;
int64_t t21 = 13760111324742937LL;
volatile int64_t t22 = -65343684969910939LL;
uint16_t x93 = 72U;
static int32_t x94 = INT32_MIN;
static int32_t t23 = 3419535;
uint64_t x104 = 135298509LLU;
uint8_t x107 = 1U;
uint64_t x108 = 240507794177241LLU;
volatile uint64_t t26 = 1936LLU;
uint16_t x110 = 1U;
int16_t x111 = -9;
volatile uint64_t t27 = 676314LLU;
int8_t x114 = INT8_MIN;
volatile int32_t t30 = 95230645;
int64_t x134 = -602621584020466LL;
static volatile int32_t x143 = INT32_MIN;
int64_t x146 = 60631614LL;
int32_t x157 = INT32_MAX;
volatile uint64_t x159 = 981022LLU;
volatile uint64_t t38 = 18100323LLU;
volatile int64_t t39 = -403LL;
volatile uint32_t x169 = UINT32_MAX;
int8_t x170 = -21;
volatile int64_t x179 = INT64_MIN;
volatile uint64_t x180 = 3479347LLU;
uint64_t t43 = 45814016LLU;
int64_t x185 = -439LL;
static uint8_t x187 = 25U;
uint8_t x191 = UINT8_MAX;
uint32_t t46 = 223760U;
int8_t x208 = INT8_MIN;
uint64_t t50 = 841422860344685175LLU;
int64_t x217 = INT64_MIN;
uint64_t x221 = UINT64_MAX;
static uint8_t x222 = 36U;
static int8_t x223 = 1;
uint8_t x228 = 1U;
uint32_t x229 = UINT32_MAX;
static int64_t x232 = -4032063537LL;
int64_t x235 = INT64_MIN;
volatile int64_t t57 = INT64_MIN;
static uint64_t x240 = UINT64_MAX;
int32_t x245 = INT32_MIN;
static int32_t x247 = INT32_MIN;
int64_t x252 = -22436LL;
volatile int64_t t61 = 10LL;
static int64_t x254 = -1LL;
static int32_t x255 = INT32_MAX;
volatile int32_t x257 = INT32_MIN;
int8_t x259 = INT8_MAX;
uint32_t t63 = 7U;
int8_t x262 = 0;
int64_t x263 = INT64_MIN;
static int8_t x268 = INT8_MAX;
uint32_t x270 = 872287961U;
static int64_t x282 = -1LL;
uint64_t x286 = UINT64_MAX;
int8_t x290 = -12;
volatile int16_t x298 = INT16_MIN;
int16_t x299 = -2;
volatile uint64_t t73 = 34432354542LLU;
uint32_t x307 = 30805U;
uint16_t x316 = 100U;
uint32_t x322 = 15611U;
uint64_t x325 = 87106141207LLU;
static int32_t x328 = INT32_MAX;
volatile int16_t x329 = -100;
int8_t x330 = INT8_MIN;
static volatile int32_t x332 = -1;
volatile int32_t t81 = 477590;
int64_t x334 = -1LL;
int32_t x337 = INT32_MIN;
int32_t t83 = -7;
uint8_t x341 = 25U;
uint8_t x345 = 1U;
static uint16_t x347 = 13U;
int64_t x352 = -1LL;
int8_t x353 = INT8_MIN;
uint32_t x356 = 11807U;
volatile uint64_t t88 = 2355859626350LLU;
static int64_t t89 = -11LL;
uint64_t x370 = 867299766335151LLU;
static volatile int32_t x374 = -102315;
int8_t x375 = INT8_MIN;
volatile int32_t t92 = -754274;
int8_t x377 = -1;
int32_t x384 = -72923;
volatile uint64_t x402 = 66653658762698222LLU;
int32_t x405 = INT32_MIN;
int32_t x407 = INT32_MIN;
static volatile int32_t t100 = -118690;
uint64_t x428 = 11LLU;
volatile int32_t t106 = -9739662;
static int64_t x433 = INT64_MAX;
uint64_t x434 = 2302563727458248LLU;
int64_t x438 = INT64_MIN;
int16_t x440 = INT16_MIN;
int64_t t109 = -3612862337317338006LL;
int8_t x445 = 1;
volatile int16_t x447 = -1;
static int16_t x448 = 1255;
volatile int32_t x471 = -53861689;
uint32_t x481 = UINT32_MAX;
volatile uint16_t x484 = 3488U;
int8_t x486 = 4;
uint32_t t119 = 1540667093U;
static uint8_t x490 = 54U;
uint64_t t122 = 1888507542615835267LLU;
int32_t t123 = -1075;
volatile int64_t x509 = INT64_MIN;
int8_t x513 = -1;
int32_t x537 = -1;
uint8_t x547 = UINT8_MAX;
volatile uint32_t t134 = 2935U;
uint32_t t136 = 53345U;
volatile int8_t x563 = -1;
uint64_t x570 = UINT64_MAX;
static uint8_t x572 = UINT8_MAX;
static volatile uint16_t x577 = UINT16_MAX;
static int16_t x578 = 91;
int32_t x585 = INT32_MIN;
int16_t x594 = 0;
uint32_t x597 = 6U;
int16_t x598 = INT16_MIN;
int16_t x600 = INT16_MAX;
volatile int32_t x603 = -1;
static volatile uint64_t t148 = 2LLU;
int8_t x605 = -44;
int64_t x608 = INT64_MIN;
volatile uint32_t t150 = 72514U;
int64_t x614 = INT64_MIN;
static volatile int16_t x617 = INT16_MIN;
int32_t x618 = INT32_MAX;
uint16_t x619 = UINT16_MAX;
int32_t x627 = INT32_MIN;
uint64_t x629 = UINT64_MAX;
static int64_t x636 = INT64_MIN;
static volatile int16_t x639 = INT16_MIN;
uint64_t x646 = UINT64_MAX;
static volatile int32_t x650 = INT32_MAX;
uint64_t x652 = 305146060854668LLU;
static uint16_t x654 = 6U;
static uint64_t t161 = 23LLU;
volatile int32_t t162 = -2033;
volatile int8_t x664 = INT8_MIN;
int32_t x665 = INT32_MAX;
uint8_t x673 = UINT8_MAX;
int8_t x674 = INT8_MIN;
static volatile int64_t t167 = 31758261841LL;
int64_t x681 = INT64_MIN;
uint16_t x690 = 2U;
int16_t x692 = -1;
int64_t t170 = -69080285742211352LL;
static int32_t t171 = -51307849;
int8_t x697 = INT8_MIN;
int8_t x698 = -1;
int16_t x708 = INT16_MAX;
volatile uint64_t t175 = 9563096468697LLU;
volatile int64_t t176 = 1079226098178227341LL;
volatile uint8_t x723 = 58U;
volatile int16_t x731 = -495;
volatile uint32_t x732 = UINT32_MAX;
uint32_t x742 = UINT32_MAX;
int8_t x745 = INT8_MAX;
int64_t t181 = 7LL;
uint32_t x753 = 101232U;
volatile uint64_t t182 = 763046019LLU;
int64_t x758 = INT64_MIN;
int64_t x761 = -35631642LL;
uint16_t x763 = UINT16_MAX;
int8_t x764 = -1;
uint64_t x767 = UINT64_MAX;
static uint16_t x777 = UINT16_MAX;
static volatile uint64_t t189 = 440745149008LLU;
int8_t x787 = -39;
static uint8_t x794 = UINT8_MAX;
int8_t x797 = INT8_MIN;
static uint16_t x798 = 231U;
volatile int64_t t195 = 23763LL;
int32_t x817 = INT32_MAX;
static int64_t x818 = -1LL;
volatile uint64_t t198 = 5189034LLU;


void f0(void) {
    	uint64_t x2 = 146905864054235LLU;
	volatile int8_t x3 = INT8_MIN;
	uint64_t t0 = 228LLU;

    t0 = ((x1&x2)^(x3%x4));

    if (t0 != 4294967168LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	int32_t x6 = -108545;
	volatile int32_t x7 = INT32_MIN;
	volatile uint64_t t1 = 63984LLU;

    t1 = ((x5&x6)^(x7%x8));

    if (t1 != 18446744073709443071LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	static int64_t x10 = -58894437860383184LL;
	static int64_t x11 = INT64_MAX;
	volatile int64_t t2 = -16379LL;

    t2 = ((x9&x10)^(x11%x12));

    if (t2 != -58894436789511681LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	uint8_t x14 = 4U;
	volatile int32_t x16 = INT32_MIN;

    t3 = ((x13&x14)^(x15%x16));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int64_t x18 = -1LL;
	volatile uint32_t x19 = UINT32_MAX;
	volatile uint16_t x20 = 13U;

    t4 = ((x17&x18)^(x19%x20));

    if (t4 != 2147483639LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 40282471859589LLU;

    t5 = ((x21&x22)^(x23%x24));

    if (t5 != 18404030467952747659LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 207418U;
	volatile uint64_t x26 = 867299958343LLU;
	int16_t x27 = -1;
	int8_t x28 = -1;

    t6 = ((x25&x26)^(x27%x28));

    if (t6 != 199170LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -1LL;
	int64_t x31 = 2291233633186192973LL;
	int64_t x32 = INT64_MAX;
	static volatile int64_t t7 = -1781986304LL;

    t7 = ((x29&x30)^(x31%x32));

    if (t7 != 2291233633186192946LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	static uint16_t x34 = UINT16_MAX;
	uint32_t x36 = UINT32_MAX;
	uint32_t t8 = 2572U;

    t8 = ((x33&x34)^(x35%x36));

    if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	static volatile int32_t x38 = INT32_MIN;
	uint32_t x39 = 1546548U;
	int64_t x40 = INT64_MAX;

    t9 = ((x37&x38)^(x39%x40));

    if (t9 != -2145937100LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 72;
	volatile uint64_t x42 = 328914926LLU;
	static uint64_t x43 = 4724708309940151834LLU;
	static volatile uint64_t t10 = 278269504990366LLU;

    t10 = ((x41&x42)^(x43%x44));

    if (t10 != 6729LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 9199072490807LL;
	static uint16_t x46 = 4871U;
	int8_t x47 = INT8_MIN;
	uint64_t x48 = 394909263LLU;
	volatile uint64_t t11 = 449420543314842LLU;

    t11 = ((x45&x46)^(x47%x48));

    if (t11 != 82087884LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	uint16_t x50 = 80U;
	volatile uint16_t x51 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 142;

    t12 = ((x49&x50)^(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 699783518135815961LLU;
	int8_t x54 = -6;
	uint8_t x55 = 6U;
	int16_t x56 = INT16_MAX;
	uint64_t t13 = 1139542221509219582LLU;

    t13 = ((x53&x54)^(x55%x56));

    if (t13 != 699783518135815966LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MIN;
	volatile uint8_t x59 = 32U;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t14 = 527777479421LLU;

    t14 = ((x57&x58)^(x59%x60));

    if (t14 != 32LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x61 = 100U;
	int64_t x62 = 608607485LL;
	int16_t x63 = 1590;
	volatile int8_t x64 = 2;
	volatile int64_t t15 = -430LL;

    t15 = ((x61&x62)^(x63%x64));

    if (t15 != 100LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = -1LL;

    t16 = ((x65&x66)^(x67%x68));

    if (t16 != 31LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = -8113;
	uint8_t x72 = 8U;
	volatile uint64_t t17 = 296LLU;

    t17 = ((x69&x70)^(x71%x72));

    if (t17 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x74 = -14925616;
	uint64_t x75 = 1473LLU;
	static int8_t x76 = INT8_MIN;

    t18 = ((x73&x74)^(x75%x76));

    if (t18 != 18446744071562069441LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = -1;
	uint16_t x78 = 1U;
	static int64_t x79 = INT64_MIN;
	int8_t x80 = -1;

    t19 = ((x77&x78)^(x79%x80));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x82 = UINT16_MAX;
	int64_t x84 = INT64_MAX;
	volatile int64_t t20 = -64418059074LL;

    t20 = ((x81&x82)^(x83%x84));

    if (t20 != -32896LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 4U;
	volatile int64_t x87 = INT64_MIN;
	uint16_t x88 = 22362U;

    t21 = ((x85&x86)^(x87%x88));

    if (t21 != -11594LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x89 = 465U;
	int32_t x90 = -1;
	volatile int64_t x91 = -1LL;
	int32_t x92 = 60407;

    t22 = ((x89&x90)^(x91%x92));

    if (t22 != -466LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;

    t23 = ((x93&x94)^(x95%x96));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	volatile int16_t x98 = INT16_MAX;
	static int64_t x99 = 421631445173861LL;
	int32_t x100 = -1;
	volatile int64_t t24 = -25121018953166LL;

    t24 = ((x97&x98)^(x99%x100));

    if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	uint64_t x102 = 1933435LLU;
	uint8_t x103 = 3U;
	volatile uint64_t t25 = 10012717LLU;

    t25 = ((x101&x102)^(x103%x104));

    if (t25 != 1933315LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	volatile int8_t x106 = 5;

    t26 = ((x105&x106)^(x107%x108));

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x109 = 660370604179773510LLU;
	int16_t x112 = INT16_MIN;

    t27 = ((x109&x110)^(x111%x112));

    if (t27 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int64_t x115 = INT64_MAX;
	int16_t x116 = -1;
	volatile int64_t t28 = -121027408759LL;

    t28 = ((x113&x114)^(x115%x116));

    if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 104044802U;
	static uint8_t x118 = 78U;
	uint8_t x119 = 123U;
	static int16_t x120 = 1950;
	static volatile uint32_t t29 = 6486675U;

    t29 = ((x117&x118)^(x119%x120));

    if (t29 != 121U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	volatile int16_t x126 = INT16_MIN;
	volatile uint16_t x127 = 6495U;
	static volatile int32_t x128 = INT32_MIN;

    t30 = ((x125&x126)^(x127%x128));

    if (t30 != -26273) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -12;
	volatile int8_t x130 = 3;
	static uint64_t x131 = UINT64_MAX;
	int16_t x132 = -48;
	volatile uint64_t t31 = 2908135856LLU;

    t31 = ((x129&x130)^(x131%x132));

    if (t31 != 47LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x133 = 7162U;
	int8_t x135 = INT8_MIN;
	int8_t x136 = -1;
	int64_t t32 = 318635985582LL;

    t32 = ((x133&x134)^(x135%x136));

    if (t32 != 2058LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 474632936LLU;
	int32_t x138 = INT32_MIN;
	uint16_t x139 = 85U;
	int16_t x140 = 24;
	uint64_t t33 = 4122278LLU;

    t33 = ((x137&x138)^(x139%x140));

    if (t33 != 13LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MAX;
	int32_t x142 = -4;
	int32_t x144 = INT32_MAX;
	int32_t t34 = -16410810;

    t34 = ((x141&x142)^(x143%x144));

    if (t34 != -125) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = 6;
	static int64_t x147 = INT64_MAX;
	int16_t x148 = -1;
	volatile int64_t t35 = -3652515956004LL;

    t35 = ((x145&x146)^(x147%x148));

    if (t35 != 6LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = 88;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MAX;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t36 = 881564991926LL;

    t36 = ((x149&x150)^(x151%x152));

    if (t36 != 39LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x153 = UINT16_MAX;
	int32_t x154 = -1796;
	uint64_t x155 = 17LLU;
	volatile int16_t x156 = -1;
	volatile uint64_t t37 = 13490221LLU;

    t37 = ((x153&x154)^(x155%x156));

    if (t37 != 63725LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x158 = INT8_MIN;
	volatile int16_t x160 = INT16_MIN;

    t38 = ((x157&x158)^(x159%x160));

    if (t38 != 2146502558LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = -1;
	static int64_t x162 = -1LL;
	static volatile int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MAX;

    t39 = ((x161&x162)^(x163%x164));

    if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = 254LL;
	uint16_t x166 = UINT16_MAX;
	static int64_t x167 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	int64_t t40 = 2780360LL;

    t40 = ((x165&x166)^(x167%x168));

    if (t40 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x171 = -19;
	volatile uint8_t x172 = 1U;
	uint32_t t41 = 6U;

    t41 = ((x169&x170)^(x171%x172));

    if (t41 != 4294967275U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = 115821;
	int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MIN;
	static uint16_t x176 = 15982U;
	static volatile int32_t t42 = 47;

    t42 = ((x173&x174)^(x175%x176));

    if (t42 != -14291) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -156747347;
	uint16_t x178 = 4U;

    t43 = ((x177&x178)^(x179%x180));

    if (t43 != 1679902LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = INT16_MIN;
	static uint64_t x182 = 1183196996LLU;
	uint8_t x183 = 2U;
	int8_t x184 = -2;
	volatile uint64_t t44 = 2602759158793LLU;

    t44 = ((x181&x182)^(x183%x184));

    if (t44 != 1183186944LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x186 = -1LL;
	uint32_t x188 = 1226198U;
	int64_t t45 = -4798419329LL;

    t45 = ((x185&x186)^(x187%x188));

    if (t45 != -432LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x189 = 61455933U;
	volatile uint16_t x190 = 3U;
	uint32_t x192 = UINT32_MAX;

    t46 = ((x189&x190)^(x191%x192));

    if (t46 != 254U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = -1;
	volatile int32_t x194 = 876;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MIN;
	static int64_t t47 = 542557997380108585LL;

    t47 = ((x193&x194)^(x195%x196));

    if (t47 != 876LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = 0U;
	int64_t x198 = -7LL;
	static int64_t x199 = INT64_MIN;
	volatile int64_t x200 = -1LL;
	int64_t t48 = 1LL;

    t48 = ((x197&x198)^(x199%x200));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	static int8_t x203 = INT8_MAX;
	static uint16_t x204 = 28U;
	volatile uint64_t t49 = 2046270LLU;

    t49 = ((x201&x202)^(x203%x204));

    if (t49 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x205 = UINT32_MAX;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = 9232;

    t50 = ((x205&x206)^(x207%x208));

    if (t50 != 4294967279LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = 0U;
	uint64_t x210 = 258045046LLU;
	static volatile int64_t x211 = 600089621620679559LL;
	uint8_t x212 = 1U;
	uint64_t t51 = 531169LLU;

    t51 = ((x209&x210)^(x211%x212));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = 15U;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t52 = 8188087948252LLU;

    t52 = ((x213&x214)^(x215%x216));

    if (t52 != 2147483632LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x218 = 12U;
	static volatile int16_t x219 = INT16_MIN;
	volatile int64_t x220 = -1LL;
	int64_t t53 = -55927769982659965LL;

    t53 = ((x217&x218)^(x219%x220));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x224 = -447;
	uint64_t t54 = 3999737LLU;

    t54 = ((x221&x222)^(x223%x224));

    if (t54 != 37LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = -1;
	int16_t x226 = INT16_MAX;
	static int64_t x227 = -37587987LL;
	int64_t t55 = 1341404313LL;

    t55 = ((x225&x226)^(x227%x228));

    if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x230 = INT32_MAX;
	int8_t x231 = -1;
	int64_t t56 = -57831251382407LL;

    t56 = ((x229&x230)^(x231%x232));

    if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MIN;
	volatile int64_t x234 = INT64_MAX;
	volatile uint8_t x236 = UINT8_MAX;

    t57 = ((x233&x234)^(x235%x236));

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -3;
	volatile uint64_t t58 = 1LLU;

    t58 = ((x237&x238)^(x239%x240));

    if (t58 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	static uint8_t x243 = 2U;
	static int8_t x244 = -1;
	volatile int32_t t59 = INT32_MIN;

    t59 = ((x241&x242)^(x243%x244));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x246 = -4020;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t60 = INT32_MIN;

    t60 = ((x245&x246)^(x247%x248));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x249 = 8U;
	int32_t x250 = -5431832;
	static int32_t x251 = -1;

    t61 = ((x249&x250)^(x251%x252));

    if (t61 != -9LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x253 = -26;
	uint16_t x256 = 158U;
	volatile int64_t t62 = -2377292328LL;

    t62 = ((x253&x254)^(x255%x256));

    if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x258 = 13229U;
	int8_t x260 = -1;

    t63 = ((x257&x258)^(x259%x260));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x261 = INT8_MIN;
	int32_t x264 = 18486;
	int64_t t64 = -275218LL;

    t64 = ((x261&x262)^(x263%x264));

    if (t64 != -14048LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = 3U;
	int16_t x266 = INT16_MIN;
	volatile uint8_t x267 = 42U;
	volatile int32_t t65 = 253857192;

    t65 = ((x265&x266)^(x267%x268));

    if (t65 != 42) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = INT64_MIN;
	int16_t x271 = -1;
	int64_t x272 = 1777LL;
	volatile int64_t t66 = 714689LL;

    t66 = ((x269&x270)^(x271%x272));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x273 = INT32_MIN;
	static int32_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = 4050949686514LL;
	int64_t t67 = -166484265443LL;

    t67 = ((x273&x274)^(x275%x276));

    if (t67 != -2147418113LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x277 = 249014LLU;
	static int64_t x278 = INT64_MAX;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MIN;
	static volatile uint64_t t68 = 2LLU;

    t68 = ((x277&x278)^(x279%x280));

    if (t68 != 18446744073709302601LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x281 = 8402;
	volatile int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	static int64_t t69 = -4661142353LL;

    t69 = ((x281&x282)^(x283%x284));

    if (t69 != -8366LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = INT8_MIN;
	static uint8_t x287 = 5U;
	uint16_t x288 = 2297U;
	uint64_t t70 = 16LLU;

    t70 = ((x285&x286)^(x287%x288));

    if (t70 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -2;
	uint32_t x291 = 5739409U;
	int64_t x292 = -1LL;
	int64_t t71 = -51370LL;

    t71 = ((x289&x290)^(x291%x292));

    if (t71 != -12LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x293 = 612U;
	int8_t x294 = 3;
	volatile int16_t x295 = 5;
	int16_t x296 = 47;
	volatile int32_t t72 = 3096;

    t72 = ((x293&x294)^(x295%x296));

    if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x297 = 322064LLU;
	uint64_t x300 = 1144560LLU;

    t73 = ((x297&x298)^(x299%x300));

    if (t73 != 131102LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x301 = 15U;
	volatile int32_t x302 = -8;
	static volatile int16_t x303 = -1;
	static uint8_t x304 = UINT8_MAX;
	int32_t t74 = 164;

    t74 = ((x301&x302)^(x303%x304));

    if (t74 != -9) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = 23;
	int16_t x306 = 2243;
	volatile int16_t x308 = 43;
	volatile uint32_t t75 = 1U;

    t75 = ((x305&x306)^(x307%x308));

    if (t75 != 18U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = INT64_MIN;
	uint8_t x310 = 80U;
	uint8_t x311 = 2U;
	volatile int16_t x312 = 1060;
	int64_t t76 = -4LL;

    t76 = ((x309&x310)^(x311%x312));

    if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = INT32_MIN;
	int8_t x314 = -1;
	uint16_t x315 = 1U;
	volatile int32_t t77 = -12;

    t77 = ((x313&x314)^(x315%x316));

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 18U;
	int8_t x318 = INT8_MIN;
	volatile uint8_t x319 = 2U;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t78 = 1516973188U;

    t78 = ((x317&x318)^(x319%x320));

    if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x321 = INT16_MIN;
	static volatile int8_t x323 = INT8_MAX;
	int16_t x324 = -1;
	uint32_t t79 = 10716956U;

    t79 = ((x321&x322)^(x323%x324));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x326 = -43945287072LL;
	static uint16_t x327 = 667U;
	volatile uint64_t t80 = 116894323766009LLU;

    t80 = ((x325&x326)^(x327%x328));

    if (t80 != 87051215515LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x331 = -1;

    t81 = ((x329&x330)^(x331%x332));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = 119458530;
	uint64_t x335 = 1092LLU;
	static int8_t x336 = INT8_MIN;
	static uint64_t t82 = 35355LLU;

    t82 = ((x333&x334)^(x335%x336));

    if (t82 != 119459494LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x338 = -1509448;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = INT16_MAX;

    t83 = ((x337&x338)^(x339%x340));

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x342 = -1LL;
	uint8_t x343 = 9U;
	int8_t x344 = -63;
	static int64_t t84 = 352630176655867240LL;

    t84 = ((x341&x342)^(x343%x344));

    if (t84 != 16LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x346 = 0;
	int16_t x348 = -1;
	int32_t t85 = 218768;

    t85 = ((x345&x346)^(x347%x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x349 = 10U;
	volatile uint32_t x350 = 1523434U;
	int16_t x351 = INT16_MIN;
	volatile int64_t t86 = 6344LL;

    t86 = ((x349&x350)^(x351%x352));

    if (t86 != 10LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x354 = 1;
	uint16_t x355 = 6392U;
	uint32_t t87 = 743152U;

    t87 = ((x353&x354)^(x355%x356));

    if (t87 != 6392U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x357 = INT64_MAX;
	int8_t x358 = 0;
	static uint64_t x359 = UINT64_MAX;
	int64_t x360 = 432461464925753639LL;

    t88 = ((x357&x358)^(x359%x360));

    if (t88 != 283362546827898777LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = 579;
	volatile uint8_t x363 = 15U;
	int32_t x364 = -367376462;

    t89 = ((x361&x362)^(x363%x364));

    if (t89 != 15LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x365 = UINT8_MAX;
	int32_t x366 = -393351;
	volatile int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MIN;
	static int64_t t90 = 81LL;

    t90 = ((x365&x366)^(x367%x368));

    if (t90 != 121LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x369 = UINT16_MAX;
	int32_t x371 = -1;
	static volatile int8_t x372 = INT8_MIN;
	volatile uint64_t t91 = 130LLU;

    t91 = ((x369&x370)^(x371%x372));

    if (t91 != 18446744073709521232LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x373 = INT8_MIN;
	static uint16_t x376 = 311U;

    t92 = ((x373&x374)^(x375%x376));

    if (t92 != 102272) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x378 = INT8_MIN;
	static int16_t x379 = -2253;
	int64_t x380 = -3738587709626639223LL;
	int64_t t93 = -6465679139608LL;

    t93 = ((x377&x378)^(x379%x380));

    if (t93 != 2227LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x381 = 7U;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 931LLU;
	volatile uint64_t t94 = 12285535146LLU;

    t94 = ((x381&x382)^(x383%x384));

    if (t94 != 931LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	static int64_t x388 = INT64_MAX;
	volatile int64_t t95 = 860372987558LL;

    t95 = ((x385&x386)^(x387%x388));

    if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x389 = 1;
	volatile int16_t x390 = INT16_MAX;
	static volatile uint32_t x391 = 116228134U;
	static uint16_t x392 = 673U;
	volatile uint32_t t96 = 436U;

    t96 = ((x389&x390)^(x391%x392));

    if (t96 != 360U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x393 = -1LL;
	uint16_t x394 = 4U;
	static int8_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;
	static int64_t t97 = 1203240609161784108LL;

    t97 = ((x393&x394)^(x395%x396));

    if (t97 != -5LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MAX;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MAX;
	static uint64_t x400 = 8336263893407288LLU;
	volatile uint64_t t98 = 13787842935LLU;

    t98 = ((x397&x398)^(x399%x400));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	volatile uint64_t x404 = 86368572386310635LLU;
	uint64_t t99 = 1952576436373351LLU;

    t99 = ((x401&x402)^(x403%x404));

    if (t99 != 26659241402765177LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x406 = 2383;
	int8_t x408 = INT8_MIN;

    t100 = ((x405&x406)^(x407%x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x409 = INT16_MIN;
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	int16_t x412 = 884;
	volatile int32_t t101 = 101;

    t101 = ((x409&x410)^(x411%x412));

    if (t101 != 32640) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x413 = -1;
	int64_t x414 = INT64_MIN;
	int16_t x415 = 6;
	static uint32_t x416 = 28U;
	volatile int64_t t102 = -2025LL;

    t102 = ((x413&x414)^(x415%x416));

    if (t102 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x417 = 4118U;
	uint64_t x418 = 34831298106500746LLU;
	volatile int8_t x419 = -1;
	int16_t x420 = -1;
	uint64_t t103 = 1085LLU;

    t103 = ((x417&x418)^(x419%x420));

    if (t103 != 2LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	static uint8_t x423 = UINT8_MAX;
	int16_t x424 = INT16_MIN;
	int32_t t104 = 980765;

    t104 = ((x421&x422)^(x423%x424));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = -1;
	uint8_t x426 = UINT8_MAX;
	volatile int8_t x427 = INT8_MIN;
	uint64_t t105 = 68104648215LLU;

    t105 = ((x425&x426)^(x427%x428));

    if (t105 != 246LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x429 = -1;
	int16_t x430 = -13;
	int8_t x431 = -1;
	int32_t x432 = -38277560;

    t106 = ((x429&x430)^(x431%x432));

    if (t106 != 12) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x435 = UINT32_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile uint64_t t107 = 388653104094513619LLU;

    t107 = ((x433&x434)^(x435%x436));

    if (t107 != 2302563727458248LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x437 = -1;
	int64_t x439 = -1LL;
	int64_t t108 = INT64_MAX;

    t108 = ((x437&x438)^(x439%x440));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x441 = -510881978591026LL;
	static int32_t x442 = INT32_MIN;
	static int32_t x443 = INT32_MIN;
	int8_t x444 = -13;

    t109 = ((x441&x442)^(x443%x444));

    if (t109 != 510882064891893LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = -14961067778299643LL;
	int64_t t110 = -13676341326758LL;

    t110 = ((x445&x446)^(x447%x448));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x449 = -1LL;
	uint16_t x450 = 1148U;
	volatile uint16_t x451 = 20939U;
	volatile uint8_t x452 = 7U;
	int64_t t111 = -22LL;

    t111 = ((x449&x450)^(x451%x452));

    if (t111 != 1150LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x453 = 812190U;
	volatile int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MIN;
	static int32_t x456 = -1;
	int64_t t112 = -2LL;

    t112 = ((x453&x454)^(x455%x456));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x457 = 6;
	uint16_t x458 = 312U;
	volatile uint8_t x459 = UINT8_MAX;
	uint32_t x460 = 260003U;
	static volatile uint32_t t113 = 81181U;

    t113 = ((x457&x458)^(x459%x460));

    if (t113 != 255U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x461 = 5U;
	uint16_t x462 = UINT16_MAX;
	static int32_t x463 = INT32_MAX;
	volatile int32_t x464 = INT32_MIN;
	volatile int32_t t114 = 4087;

    t114 = ((x461&x462)^(x463%x464));

    if (t114 != 2147483642) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x465 = 3U;
	int16_t x466 = 1;
	volatile uint8_t x467 = 4U;
	int32_t x468 = INT32_MIN;
	int32_t t115 = 225127304;

    t115 = ((x465&x466)^(x467%x468));

    if (t115 != 5) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = -200038090;
	int8_t x470 = INT8_MAX;
	int16_t x472 = INT16_MAX;
	volatile int32_t t116 = 6;

    t116 = ((x469&x470)^(x471%x472));

    if (t116 != -25494) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x473 = -1;
	static uint16_t x474 = 16U;
	static volatile uint8_t x475 = 45U;
	uint64_t x476 = 5479418320909881LLU;
	uint64_t t117 = 1728889761633LLU;

    t117 = ((x473&x474)^(x475%x476));

    if (t117 != 61LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x482 = 2U;
	uint32_t x483 = UINT32_MAX;
	volatile uint32_t t118 = 229038U;

    t118 = ((x481&x482)^(x483%x484));

    if (t118 != 1053U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x485 = 3356054U;
	uint16_t x487 = 66U;
	static uint32_t x488 = 1056U;

    t119 = ((x485&x486)^(x487%x488));

    if (t119 != 70U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x489 = 109U;
	int16_t x491 = 419;
	int8_t x492 = INT8_MIN;
	int32_t t120 = -129;

    t120 = ((x489&x490)^(x491%x492));

    if (t120 != 7) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x493 = 0;
	volatile int8_t x494 = -1;
	uint16_t x495 = UINT16_MAX;
	static volatile int8_t x496 = INT8_MAX;
	int32_t t121 = 137;

    t121 = ((x493&x494)^(x495%x496));

    if (t121 != 3) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x497 = 3271997499128LLU;
	int32_t x498 = 2517882;
	volatile int32_t x499 = 0;
	static int16_t x500 = INT16_MAX;

    t122 = ((x497&x498)^(x499%x500));

    if (t122 != 2499192LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x501 = 1;
	volatile uint8_t x502 = 0U;
	uint8_t x503 = 1U;
	volatile int32_t x504 = 370317796;

    t123 = ((x501&x502)^(x503%x504));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x505 = -1LL;
	int16_t x506 = -3724;
	static int16_t x507 = INT16_MIN;
	int8_t x508 = 12;
	static int64_t t124 = 2LL;

    t124 = ((x505&x506)^(x507%x508));

    if (t124 != 3724LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x510 = UINT16_MAX;
	volatile uint64_t x511 = 286LLU;
	uint32_t x512 = 75U;
	static volatile uint64_t t125 = 10142235511LLU;

    t125 = ((x509&x510)^(x511%x512));

    if (t125 != 61LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x514 = INT8_MAX;
	int16_t x515 = INT16_MIN;
	uint64_t x516 = 30716976LLU;
	uint64_t t126 = 4521648213863LLU;

    t126 = ((x513&x514)^(x515%x516));

    if (t126 != 11140095LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x517 = -1LL;
	static int8_t x518 = INT8_MAX;
	int32_t x519 = -1;
	int64_t x520 = 1295855198902LL;
	int64_t t127 = 11LL;

    t127 = ((x517&x518)^(x519%x520));

    if (t127 != -128LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x521 = UINT8_MAX;
	static volatile int8_t x522 = -1;
	static volatile uint32_t x523 = 116U;
	uint64_t x524 = 405794LLU;
	static uint64_t t128 = 1843663040LLU;

    t128 = ((x521&x522)^(x523%x524));

    if (t128 != 139LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = INT8_MIN;
	int16_t x526 = 1;
	int64_t x527 = 1LL;
	int16_t x528 = 9053;
	int64_t t129 = 842937464975694LL;

    t129 = ((x525&x526)^(x527%x528));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x529 = 51;
	static int8_t x530 = INT8_MIN;
	uint64_t x531 = 3544760640471016LLU;
	int16_t x532 = -1;
	volatile uint64_t t130 = 25833LLU;

    t130 = ((x529&x530)^(x531%x532));

    if (t130 != 3544760640471016LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x533 = INT32_MIN;
	uint8_t x534 = 6U;
	int32_t x535 = INT32_MIN;
	int64_t x536 = -1LL;
	int64_t t131 = -14791LL;

    t131 = ((x533&x534)^(x535%x536));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x538 = 5U;
	int8_t x539 = INT8_MIN;
	int64_t x540 = 2299729065233108378LL;
	volatile int64_t t132 = 26682062261204599LL;

    t132 = ((x537&x538)^(x539%x540));

    if (t132 != -123LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x541 = -3494;
	int64_t x542 = INT64_MIN;
	volatile int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MAX;
	volatile int64_t t133 = 543139898158LL;

    t133 = ((x541&x542)^(x543%x544));

    if (t133 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x545 = -1;
	static uint32_t x546 = 3164U;
	int32_t x548 = -334038970;

    t134 = ((x545&x546)^(x547%x548));

    if (t134 != 3235U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x549 = INT8_MIN;
	int32_t x550 = INT32_MIN;
	static volatile int8_t x551 = -40;
	uint32_t x552 = 3771067U;
	static volatile uint32_t t135 = 7U;

    t135 = ((x549&x550)^(x551%x552));

    if (t135 != 2150976658U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x553 = UINT32_MAX;
	static int8_t x554 = -1;
	volatile uint32_t x555 = 7588U;
	static volatile uint16_t x556 = UINT16_MAX;

    t136 = ((x553&x554)^(x555%x556));

    if (t136 != 4294959707U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x557 = INT8_MIN;
	int32_t x558 = INT32_MAX;
	uint16_t x559 = UINT16_MAX;
	volatile int64_t x560 = INT64_MIN;
	static int64_t t137 = 22LL;

    t137 = ((x557&x558)^(x559%x560));

    if (t137 != 2147418239LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x561 = 4549006U;
	volatile uint8_t x562 = 90U;
	uint16_t x564 = 5656U;
	uint32_t t138 = 885852899U;

    t138 = ((x561&x562)^(x563%x564));

    if (t138 != 4294967285U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x565 = INT64_MIN;
	static int64_t x566 = INT64_MIN;
	static volatile uint16_t x567 = UINT16_MAX;
	volatile int16_t x568 = -1;
	int64_t t139 = INT64_MIN;

    t139 = ((x565&x566)^(x567%x568));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x569 = 98348LLU;
	int32_t x571 = INT32_MIN;
	volatile uint64_t t140 = 121383540243977LLU;

    t140 = ((x569&x570)^(x571%x572));

    if (t140 != 18446744073709453228LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x573 = INT64_MIN;
	uint16_t x574 = 126U;
	int32_t x575 = INT32_MAX;
	uint8_t x576 = 16U;
	int64_t t141 = -59312948756387751LL;

    t141 = ((x573&x574)^(x575%x576));

    if (t141 != 15LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x579 = -1;
	int8_t x580 = -1;
	int32_t t142 = -12354;

    t142 = ((x577&x578)^(x579%x580));

    if (t142 != 91) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x581 = INT8_MAX;
	static uint32_t x582 = 52U;
	int32_t x583 = INT32_MIN;
	int8_t x584 = -1;
	volatile uint32_t t143 = 1U;

    t143 = ((x581&x582)^(x583%x584));

    if (t143 != 52U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x586 = 679669358619384LLU;
	static volatile int16_t x587 = INT16_MIN;
	volatile uint32_t x588 = 20U;
	static volatile uint64_t t144 = 3332531LLU;

    t144 = ((x585&x586)^(x587%x588));

    if (t144 != 679667837173768LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x589 = UINT8_MAX;
	int32_t x590 = -144511586;
	uint8_t x591 = 0U;
	static volatile int16_t x592 = -1;
	static int32_t t145 = -256013161;

    t145 = ((x589&x590)^(x591%x592));

    if (t145 != 158) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x593 = -1;
	int32_t x595 = 0;
	int64_t x596 = INT64_MIN;
	int64_t t146 = -3461326616227049874LL;

    t146 = ((x593&x594)^(x595%x596));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x599 = 4533;
	volatile uint32_t t147 = 4894U;

    t147 = ((x597&x598)^(x599%x600));

    if (t147 != 4533U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x601 = UINT64_MAX;
	int32_t x602 = INT32_MIN;
	int16_t x604 = -1;

    t148 = ((x601&x602)^(x603%x604));

    if (t148 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x606 = 3242U;
	volatile int8_t x607 = 7;
	volatile int64_t t149 = 4011853758744LL;

    t149 = ((x605&x606)^(x607%x608));

    if (t149 != 3207LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x609 = 71;
	uint32_t x610 = UINT32_MAX;
	static uint8_t x611 = 37U;
	static uint8_t x612 = 1U;

    t150 = ((x609&x610)^(x611%x612));

    if (t150 != 71U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x613 = 856U;
	int16_t x615 = -1;
	int8_t x616 = INT8_MAX;
	static int64_t t151 = 129577339513219561LL;

    t151 = ((x613&x614)^(x615%x616));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x620 = 30;
	static int32_t t152 = -104515520;

    t152 = ((x617&x618)^(x619%x620));

    if (t152 != 2147450895) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x621 = -1;
	int8_t x622 = INT8_MIN;
	int8_t x623 = INT8_MIN;
	static uint64_t x624 = 1659658197LLU;
	volatile uint64_t t153 = 66630139LLU;

    t153 = ((x621&x622)^(x623%x624));

    if (t153 != 18446744072974441728LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x625 = 2004992415154208256LLU;
	int64_t x626 = 5011LL;
	int8_t x628 = -1;
	uint64_t t154 = 3132070756LLU;

    t154 = ((x625&x626)^(x627%x628));

    if (t154 != 4608LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x630 = -1;
	uint32_t x631 = 27146U;
	int16_t x632 = INT16_MIN;
	static volatile uint64_t t155 = 1182963192531024393LLU;

    t155 = ((x629&x630)^(x631%x632));

    if (t155 != 18446744073709524469LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = -50;
	int64_t x634 = INT64_MIN;
	volatile int16_t x635 = -3;
	volatile int64_t t156 = -1LL;

    t156 = ((x633&x634)^(x635%x636));

    if (t156 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x637 = -1;
	uint32_t x638 = 36220995U;
	int8_t x640 = INT8_MIN;
	uint32_t t157 = 13U;

    t157 = ((x637&x638)^(x639%x640));

    if (t157 != 36220995U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x641 = -1;
	int64_t x642 = INT64_MIN;
	static volatile int64_t x643 = 87004859511318LL;
	int64_t x644 = INT64_MAX;
	static volatile int64_t t158 = -801LL;

    t158 = ((x641&x642)^(x643%x644));

    if (t158 != -9223285031995264490LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x645 = -1;
	int16_t x647 = INT16_MIN;
	volatile uint64_t x648 = UINT64_MAX;
	uint64_t t159 = 90875860212673LLU;

    t159 = ((x645&x646)^(x647%x648));

    if (t159 != 32767LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x649 = 2684494LLU;
	int64_t x651 = INT64_MAX;
	uint64_t t160 = 211903258LLU;

    t160 = ((x649&x650)^(x651%x652));

    if (t160 != 27201460011625LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x653 = UINT64_MAX;
	uint64_t x655 = UINT64_MAX;
	volatile uint8_t x656 = UINT8_MAX;

    t161 = ((x653&x654)^(x655%x656));

    if (t161 != 6LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x657 = -30;
	int8_t x658 = INT8_MIN;
	volatile uint16_t x659 = 3U;
	int32_t x660 = INT32_MIN;

    t162 = ((x657&x658)^(x659%x660));

    if (t162 != -125) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x661 = -1;
	static int32_t x662 = INT32_MAX;
	volatile int16_t x663 = -1;
	volatile int32_t t163 = INT32_MIN;

    t163 = ((x661&x662)^(x663%x664));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x666 = UINT64_MAX;
	int64_t x667 = -54LL;
	int32_t x668 = -1;
	volatile uint64_t t164 = 19949614797202964LLU;

    t164 = ((x665&x666)^(x667%x668));

    if (t164 != 2147483647LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x669 = 0;
	int8_t x670 = INT8_MIN;
	uint64_t x671 = 188109478LLU;
	static uint64_t x672 = UINT64_MAX;
	uint64_t t165 = 31993LLU;

    t165 = ((x669&x670)^(x671%x672));

    if (t165 != 188109478LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x675 = -1;
	volatile int64_t x676 = INT64_MAX;
	int64_t t166 = 1945654892948426LL;

    t166 = ((x673&x674)^(x675%x676));

    if (t166 != -129LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x677 = INT32_MAX;
	static int64_t x678 = 1219226925656126LL;
	static int16_t x679 = -4180;
	int16_t x680 = -4146;

    t167 = ((x677&x678)^(x679%x680));

    if (t167 != -1674438688LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x682 = INT8_MIN;
	uint64_t x683 = 5916LLU;
	static uint8_t x684 = 4U;
	uint64_t t168 = 60LLU;

    t168 = ((x681&x682)^(x683%x684));

    if (t168 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x685 = INT64_MAX;
	int64_t x686 = -1LL;
	int32_t x687 = INT32_MAX;
	int8_t x688 = 1;
	int64_t t169 = INT64_MAX;

    t169 = ((x685&x686)^(x687%x688));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x689 = INT8_MIN;
	int64_t x691 = 8LL;

    t170 = ((x689&x690)^(x691%x692));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x693 = 2U;
	int8_t x694 = INT8_MAX;
	int8_t x695 = -1;
	volatile int8_t x696 = INT8_MIN;

    t171 = ((x693&x694)^(x695%x696));

    if (t171 != -3) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x699 = -1LL;
	volatile uint32_t x700 = UINT32_MAX;
	int64_t t172 = -440054328274865LL;

    t172 = ((x697&x698)^(x699%x700));

    if (t172 != 127LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = -1;
	volatile int64_t x706 = INT64_MIN;
	uint64_t x707 = 1632100LLU;
	volatile uint64_t t173 = 188168410979LLU;

    t173 = ((x705&x706)^(x707%x708));

    if (t173 != 9223372036854802325LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x709 = INT16_MIN;
	int32_t x710 = -1152311;
	uint16_t x711 = 11U;
	int32_t x712 = INT32_MAX;
	int32_t t174 = 11135;

    t174 = ((x709&x710)^(x711%x712));

    if (t174 != -1179637) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x713 = INT64_MIN;
	uint32_t x714 = 7315U;
	static uint64_t x715 = UINT64_MAX;
	int16_t x716 = INT16_MIN;

    t175 = ((x713&x714)^(x715%x716));

    if (t175 != 32767LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x717 = 80U;
	static int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	volatile int16_t x720 = 959;

    t176 = ((x717&x718)^(x719%x720));

    if (t176 != -715LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x721 = INT32_MIN;
	static int64_t x722 = INT64_MAX;
	uint32_t x724 = 5868671U;
	int64_t t177 = -15567540139619507LL;

    t177 = ((x721&x722)^(x723%x724));

    if (t177 != 9223372034707292218LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x725 = 0;
	volatile int64_t x726 = -1LL;
	int32_t x727 = 22;
	int8_t x728 = INT8_MIN;
	int64_t t178 = 3LL;

    t178 = ((x725&x726)^(x727%x728));

    if (t178 != 22LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint64_t x729 = 5797467100270LLU;
	int32_t x730 = -1;
	static volatile uint64_t t179 = 6665801LLU;

    t179 = ((x729&x730)^(x731%x732));

    if (t179 != 5794649631359LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x741 = -1LL;
	uint16_t x743 = 11973U;
	uint32_t x744 = 60U;
	volatile int64_t t180 = -66812042487435683LL;

    t180 = ((x741&x742)^(x743%x744));

    if (t180 != 4294967262LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x746 = -1;
	int16_t x747 = -1;
	int64_t x748 = 47961986478316LL;

    t181 = ((x745&x746)^(x747%x748));

    if (t181 != -128LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x754 = 1507462001756083LLU;
	int16_t x755 = INT16_MAX;
	uint16_t x756 = 7524U;

    t182 = ((x753&x754)^(x755%x756));

    if (t182 != 35167LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x757 = 865U;
	volatile int8_t x759 = -19;
	int64_t x760 = -62LL;
	volatile int64_t t183 = -383277584370086LL;

    t183 = ((x757&x758)^(x759%x760));

    if (t183 != -19LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x762 = INT64_MAX;
	volatile int64_t t184 = -1891LL;

    t184 = ((x761&x762)^(x763%x764));

    if (t184 != 9223372036819144166LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x765 = 3U;
	volatile uint64_t x766 = 102LLU;
	int16_t x768 = -1;
	volatile uint64_t t185 = 4468140412016633LLU;

    t185 = ((x765&x766)^(x767%x768));

    if (t185 != 2LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x769 = UINT64_MAX;
	static volatile uint32_t x770 = 1140380U;
	int16_t x771 = 7;
	uint16_t x772 = 17U;
	uint64_t t186 = 719952LLU;

    t186 = ((x769&x770)^(x771%x772));

    if (t186 != 1140379LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x773 = -13;
	uint32_t x774 = UINT32_MAX;
	int64_t x775 = INT64_MAX;
	int8_t x776 = -15;
	int64_t t187 = -290LL;

    t187 = ((x773&x774)^(x775%x776));

    if (t187 != 4294967284LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x778 = INT32_MIN;
	static int64_t x779 = INT64_MAX;
	uint64_t x780 = UINT64_MAX;
	uint64_t t188 = 15LLU;

    t188 = ((x777&x778)^(x779%x780));

    if (t188 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x781 = INT16_MAX;
	uint64_t x782 = UINT64_MAX;
	static int32_t x783 = -1;
	int64_t x784 = INT64_MIN;

    t189 = ((x781&x782)^(x783%x784));

    if (t189 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x785 = -13868216;
	int8_t x786 = -58;
	int64_t x788 = INT64_MIN;
	int64_t t190 = 178LL;

    t190 = ((x785&x786)^(x787%x788));

    if (t190 != 13868185LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = -1;
	static volatile uint16_t x790 = 51U;
	uint8_t x791 = 0U;
	uint32_t x792 = 11009U;
	uint32_t t191 = 28264U;

    t191 = ((x789&x790)^(x791%x792));

    if (t191 != 51U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x793 = 2U;
	int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MIN;
	volatile int64_t t192 = 35258376698910744LL;

    t192 = ((x793&x794)^(x795%x796));

    if (t192 != 2LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x799 = 0U;
	static volatile int16_t x800 = INT16_MIN;
	volatile int32_t t193 = -610;

    t193 = ((x797&x798)^(x799%x800));

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x801 = 0;
	int32_t x802 = INT32_MIN;
	int16_t x803 = INT16_MAX;
	uint32_t x804 = 1089111U;
	static uint32_t t194 = 36122025U;

    t194 = ((x801&x802)^(x803%x804));

    if (t194 != 32767U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x805 = 30U;
	int16_t x806 = INT16_MAX;
	static int32_t x807 = INT32_MIN;
	volatile int64_t x808 = 1966LL;

    t195 = ((x805&x806)^(x807%x808));

    if (t195 != -196LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x809 = -1;
	uint32_t x810 = UINT32_MAX;
	int16_t x811 = -863;
	int32_t x812 = -4981206;
	uint32_t t196 = 7491748U;

    t196 = ((x809&x810)^(x811%x812));

    if (t196 != 862U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x813 = -6;
	int32_t x814 = INT32_MIN;
	static volatile int16_t x815 = INT16_MIN;
	volatile uint32_t x816 = 71423613U;
	static volatile uint32_t t197 = 907161U;

    t197 = ((x813&x814)^(x815%x816));

    if (t197 != 2157001396U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x819 = 36756381369032409LLU;
	static uint16_t x820 = 5U;

    t198 = ((x817&x818)^(x819%x820));

    if (t198 != 2147483643LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = INT8_MAX;
	int32_t x822 = 252176;
	uint64_t x823 = 13388LLU;
	int8_t x824 = -1;
	volatile uint64_t t199 = 5LLU;

    t199 = ((x821&x822)^(x823%x824));

    if (t199 != 13404LLU) { NG(); } else { ; }
	
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

