
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

static uint8_t x4 = 6U;
volatile int16_t x5 = 15280;
uint64_t x7 = 3437863807LLU;
uint64_t t1 = 14LLU;
volatile uint64_t x15 = UINT64_MAX;
static int32_t x21 = INT32_MAX;
int32_t x23 = -8738448;
int8_t x25 = 24;
int8_t x28 = -1;
uint64_t x29 = 309LLU;
int16_t x32 = INT16_MAX;
volatile uint32_t x46 = 263620U;
volatile uint32_t t10 = 21280U;
uint8_t x49 = UINT8_MAX;
volatile int16_t x66 = INT16_MIN;
static uint8_t x68 = 2U;
int8_t x77 = INT8_MAX;
int8_t x78 = INT8_MIN;
static int64_t x79 = -1LL;
static uint8_t x87 = 89U;
uint8_t x90 = 23U;
volatile uint16_t x95 = UINT16_MAX;
static uint16_t x101 = 71U;
int64_t x102 = INT64_MIN;
int64_t t22 = -1029639LL;
static volatile uint32_t x109 = 4170823U;
volatile uint32_t x110 = UINT32_MAX;
volatile uint64_t x117 = UINT64_MAX;
uint16_t x119 = 28365U;
uint8_t x123 = 11U;
int32_t x124 = INT32_MIN;
int16_t x125 = INT16_MIN;
static volatile uint16_t x126 = 7U;
static int8_t x127 = INT8_MAX;
uint64_t x130 = UINT64_MAX;
int32_t x142 = -1;
static uint32_t x145 = UINT32_MAX;
volatile int16_t x150 = INT16_MAX;
int32_t x154 = INT32_MIN;
int64_t t33 = 125253172408283LL;
int8_t x165 = 1;
static volatile uint32_t t35 = 4533175U;
int64_t x170 = INT64_MAX;
volatile int64_t x171 = 520860349LL;
int64_t t36 = -1LL;
volatile int32_t x183 = 25426;
int64_t x186 = INT64_MAX;
uint32_t x188 = UINT32_MAX;
int64_t t40 = -4560292407780743LL;
volatile uint8_t x197 = 39U;
volatile int16_t x202 = -13;
uint32_t t42 = 194863340U;
int32_t x208 = INT32_MIN;
int16_t x217 = INT16_MAX;
uint64_t t46 = 0LLU;
volatile int8_t x221 = 7;
volatile uint32_t x223 = 10U;
volatile int64_t t47 = 5285434902LL;
volatile uint32_t x225 = 45833U;
volatile uint64_t t48 = 41LLU;
uint8_t x229 = UINT8_MAX;
static uint8_t x241 = 0U;
volatile uint64_t t52 = 203880298939257LLU;
int64_t t55 = 76296370LL;
uint16_t x266 = 213U;
uint16_t x273 = 19U;
static uint16_t x278 = 982U;
uint32_t x281 = 9102781U;
int64_t x283 = INT64_MIN;
int8_t x285 = -1;
int8_t x290 = INT8_MIN;
static int16_t x292 = 696;
static int8_t x294 = -1;
uint64_t x295 = 4263LLU;
int8_t x296 = INT8_MAX;
int32_t x299 = INT32_MAX;
static int64_t t64 = 133556015595LL;
volatile int64_t x302 = -1LL;
volatile int64_t x308 = 3478132601106026565LL;
int32_t t67 = 120709;
volatile uint64_t x321 = 454LLU;
int64_t x326 = INT64_MAX;
static uint64_t t70 = 153079578715LLU;
volatile uint32_t x335 = 9078U;
int32_t x343 = 48126;
volatile uint32_t x344 = 1910124938U;
uint64_t x348 = 5203169247042250LLU;
uint32_t x353 = 12U;
int32_t x360 = INT32_MIN;
volatile uint32_t x361 = 30982U;
static uint64_t x363 = 84LLU;
uint64_t t81 = 108770714LLU;
volatile int8_t x378 = -13;
static int32_t x389 = -17603;
int8_t x391 = -1;
static volatile int16_t x395 = -1;
uint64_t x398 = 84726003LLU;
volatile uint64_t t87 = 341435LLU;
uint64_t x415 = 337803029828021LLU;
volatile int32_t x417 = -1;
int8_t x424 = INT8_MIN;
uint64_t x428 = 2LLU;
static int64_t x430 = -1LL;
int64_t t93 = 18395106207LL;
int8_t x437 = INT8_MIN;
volatile uint32_t x438 = 28579U;
int64_t x439 = INT64_MIN;
volatile int8_t x444 = -13;
int32_t x446 = 128990278;
uint32_t x448 = UINT32_MAX;
static volatile uint32_t t97 = 1989771U;
volatile uint64_t t98 = 5903165738638LLU;
uint16_t x461 = 40U;
int8_t x467 = 6;
static int8_t x468 = -1;
int32_t t102 = -7790969;
uint64_t t103 = 467211174675501556LLU;
int64_t t104 = 19LL;
uint8_t x477 = UINT8_MAX;
int64_t t105 = -179164782LL;
static uint8_t x481 = 1U;
int16_t x483 = -1;
int32_t x484 = INT32_MAX;
static int64_t x496 = -1LL;
volatile int64_t t109 = -2609077818001572595LL;
int16_t x497 = INT16_MAX;
uint8_t x500 = 1U;
int8_t x502 = INT8_MIN;
uint8_t x503 = 2U;
static int32_t t111 = -29;
uint64_t t112 = 41547895896LLU;
static int32_t x510 = INT32_MAX;
int8_t x514 = -60;
int64_t x520 = INT64_MIN;
volatile uint64_t t115 = 1LLU;
int8_t x524 = -1;
int8_t x526 = 0;
uint8_t x527 = UINT8_MAX;
int32_t x542 = -1;
static uint64_t x544 = UINT64_MAX;
uint16_t x545 = 669U;
static volatile int64_t x549 = INT64_MIN;
int32_t x553 = INT32_MIN;
int64_t x564 = -1LL;
volatile int8_t x571 = INT8_MIN;
volatile uint64_t t126 = 5642068961LLU;
static uint8_t x576 = 12U;
uint16_t x578 = 1U;
static int16_t x581 = -811;
volatile uint64_t t129 = 483755034731LLU;
volatile int16_t x585 = 464;
int64_t x597 = INT64_MAX;
int16_t x599 = INT16_MAX;
int64_t x600 = -422596344686LL;
int8_t x605 = -8;
volatile uint64_t t135 = 692759048LLU;
uint64_t x611 = UINT64_MAX;
static int16_t x613 = 0;
int64_t x616 = -2917027318502LL;
int64_t t138 = 58484220931517149LL;
uint64_t x622 = 442LLU;
int64_t t140 = 7733005841343282LL;
uint64_t x641 = 13LLU;
volatile uint8_t x647 = 47U;
volatile int32_t t143 = 5;
int64_t x652 = -29954117362LL;
static int8_t x656 = INT8_MIN;
volatile int64_t t146 = -638661351978LL;
uint16_t x663 = 79U;
uint8_t x669 = UINT8_MAX;
volatile int16_t x670 = 10252;
int64_t t149 = 431495782683887LL;
int8_t x674 = INT8_MAX;
volatile int64_t t150 = -14794231390516LL;
volatile int64_t t153 = -2378LL;
int16_t x693 = 1;
int8_t x700 = INT8_MIN;
int32_t x703 = INT32_MIN;
int64_t t156 = -37612431651LL;
static int8_t x711 = INT8_MIN;
volatile uint32_t t157 = 16019795U;
uint64_t x719 = 2213838366060289044LLU;
uint16_t x724 = 93U;
int32_t x725 = INT32_MAX;
uint8_t x726 = 0U;
int8_t x734 = -46;
uint8_t x736 = UINT8_MAX;
int32_t x740 = -1720646;
int64_t t162 = 41188019312775LL;
int32_t x741 = 82428;
volatile int32_t t163 = -2662;
volatile uint8_t x748 = 127U;
uint16_t x750 = UINT16_MAX;
volatile uint16_t x751 = 3103U;
static volatile uint64_t x757 = UINT64_MAX;
volatile int32_t x764 = 28547293;
int64_t t169 = -30382826365626492LL;
volatile int64_t x770 = 295014LL;
int32_t x774 = -51402;
static int8_t x787 = 6;
int32_t x789 = -1;
uint8_t x790 = 2U;
int64_t x791 = 2092563387618898798LL;
uint64_t t174 = 699529692277736514LLU;
volatile int64_t t175 = 534015188116LL;
int32_t x798 = INT32_MIN;
static volatile int8_t x801 = INT8_MIN;
uint64_t x802 = 349170346026LLU;
int8_t x807 = -45;
volatile int64_t t178 = 4LL;
volatile int64_t x819 = -1LL;
static int64_t t181 = -11787887LL;
int8_t x826 = -57;
int8_t x828 = -1;
volatile int16_t x830 = INT16_MIN;
uint16_t x837 = UINT16_MAX;
volatile uint32_t t186 = 517U;
static int64_t x846 = INT64_MAX;
int32_t x849 = INT32_MIN;
uint64_t x850 = 25848LLU;
int8_t x853 = INT8_MAX;
int16_t x855 = -1;
int64_t x857 = -1LL;
int16_t x860 = -1;
static int32_t x861 = 12303;
uint64_t t191 = 127LLU;
volatile int64_t t192 = 16210454074LL;
uint16_t x869 = 73U;
static int32_t t193 = 291;
uint64_t t196 = 24LLU;
int8_t x886 = 1;
static int32_t t198 = 1578833;
uint8_t x896 = 17U;
int32_t t199 = 482;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static int8_t x2 = INT8_MIN;
	static uint8_t x3 = 66U;
	static int32_t t0 = 7519311;

    t0 = (((x1&x2)&x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = INT64_MIN;
	static int16_t x8 = -1;

    t1 = (((x5&x6)&x7)*x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = 8U;
	uint32_t x14 = UINT32_MAX;
	uint8_t x16 = UINT8_MAX;
	static uint64_t t2 = 174962502917LLU;

    t2 = (((x13&x14)&x15)*x16);

    if (t2 != 2040LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x17 = 5U;
	int32_t x18 = INT32_MIN;
	uint64_t x19 = 2118758300033183474LLU;
	int16_t x20 = INT16_MIN;
	uint64_t t3 = 120LLU;

    t3 = (((x17&x18)&x19)*x20);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x22 = 3;
	uint64_t x24 = 1065110991685019LLU;
	static volatile uint64_t t4 = 8845413258LLU;

    t4 = (((x21&x22)&x23)*x24);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x26 = 451147426LLU;
	volatile uint64_t x27 = UINT64_MAX;
	static volatile uint64_t t5 = 456151260974LLU;

    t5 = (((x25&x26)&x27)*x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x30 = 2U;
	int8_t x31 = -1;
	uint64_t t6 = 242301860188566569LLU;

    t6 = (((x29&x30)&x31)*x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	volatile int16_t x34 = -1;
	int32_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = 9806643;

    t7 = (((x33&x34)&x35)*x36);

    if (t7 != 4194304) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x37 = -1691;
	int16_t x38 = -217;
	int16_t x39 = 13;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t8 = 22LLU;

    t8 = (((x37&x38)&x39)*x40);

    if (t8 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 50U;
	int32_t x42 = -128508;
	int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MAX;
	int64_t t9 = -543659895432LL;

    t9 = (((x41&x42)&x43)*x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 11U;
	int8_t x47 = INT8_MAX;
	static volatile uint16_t x48 = 1992U;

    t10 = (((x45&x46)&x47)*x48);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = INT32_MIN;
	int16_t x51 = -2;
	uint64_t x52 = 10LLU;
	uint64_t t11 = 18810852555762855LLU;

    t11 = (((x49&x50)&x51)*x52);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = 1753U;
	int32_t x58 = INT32_MIN;
	static int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;
	int64_t t12 = 411LL;

    t12 = (((x57&x58)&x59)*x60);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = UINT8_MAX;
	static uint32_t x62 = 3U;
	int64_t x63 = -106759181LL;
	int16_t x64 = -118;
	volatile int64_t t13 = 1LL;

    t13 = (((x61&x62)&x63)*x64);

    if (t13 != -354LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = 16236013890016LL;
	static volatile uint16_t x67 = 10U;
	static int64_t t14 = -4LL;

    t14 = (((x65&x66)&x67)*x68);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = UINT64_MAX;
	int64_t x70 = 7506364573332LL;
	static int64_t x71 = INT64_MIN;
	uint16_t x72 = 593U;
	static uint64_t t15 = 1662LLU;

    t15 = (((x69&x70)&x71)*x72);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = 2931;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = 1996678974LLU;
	int8_t x76 = INT8_MIN;
	uint64_t t16 = 9520801343183LLU;

    t16 = (((x73&x74)&x75)*x76);

    if (t16 != 18446744073709446912LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x80 = 279U;
	volatile int64_t t17 = 15776404208LL;

    t17 = (((x77&x78)&x79)*x80);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x81 = INT8_MAX;
	int32_t x82 = -38946;
	int32_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t18 = 26010LLU;

    t18 = (((x81&x82)&x83)*x84);

    if (t18 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	volatile int8_t x86 = INT8_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t19 = 823;

    t19 = (((x85&x86)&x87)*x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x89 = -1;
	volatile int16_t x91 = INT16_MIN;
	volatile int8_t x92 = 39;
	int32_t t20 = -390221;

    t20 = (((x89&x90)&x91)*x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x93 = 1915300186115LLU;
	int64_t x94 = INT64_MIN;
	int16_t x96 = 2195;
	static uint64_t t21 = 2162451800503121LLU;

    t21 = (((x93&x94)&x95)*x96);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x103 = -242740LL;
	int16_t x104 = INT16_MAX;

    t22 = (((x101&x102)&x103)*x104);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x105 = INT64_MIN;
	static int64_t x106 = 300391136748617LL;
	volatile int32_t x107 = INT32_MIN;
	int32_t x108 = -13;
	static volatile int64_t t23 = -100LL;

    t23 = (((x105&x106)&x107)*x108);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x111 = 7319;
	static int8_t x112 = -3;
	volatile uint32_t t24 = 8U;

    t24 = (((x109&x110)&x111)*x112);

    if (t24 != 4294964203U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x118 = 8U;
	int64_t x120 = 118179473LL;
	volatile uint64_t t25 = 9100086089LLU;

    t25 = (((x117&x118)&x119)*x120);

    if (t25 != 945435784LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x121 = INT16_MIN;
	uint32_t x122 = UINT32_MAX;
	uint32_t t26 = 749226U;

    t26 = (((x121&x122)&x123)*x124);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x128 = INT8_MIN;
	volatile int32_t t27 = -2;

    t27 = (((x125&x126)&x127)*x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint16_t x129 = 173U;
	volatile int16_t x131 = -147;
	int8_t x132 = -1;
	static volatile uint64_t t28 = 5245629716065184LLU;

    t28 = (((x129&x130)&x131)*x132);

    if (t28 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x137 = UINT32_MAX;
	uint32_t x138 = 130550U;
	int8_t x139 = 28;
	int64_t x140 = -8583202906LL;
	volatile int64_t t29 = -17042010990268088LL;

    t29 = (((x137&x138)&x139)*x140);

    if (t29 != -171664058120LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x141 = -12142;
	volatile int16_t x143 = 6;
	volatile uint32_t x144 = UINT32_MAX;
	uint32_t t30 = 3U;

    t30 = (((x141&x142)&x143)*x144);

    if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x146 = INT32_MIN;
	volatile int64_t x147 = INT64_MAX;
	int32_t x148 = -197429421;
	int64_t t31 = 1LL;

    t31 = (((x145&x146)&x147)*x148);

    if (t31 != -423976453231607808LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = INT16_MIN;
	volatile int64_t x151 = 1LL;
	volatile int32_t x152 = -1;
	int64_t t32 = 49617920LL;

    t32 = (((x149&x150)&x151)*x152);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x153 = INT64_MIN;
	int8_t x155 = 11;
	int32_t x156 = INT32_MIN;

    t33 = (((x153&x154)&x155)*x156);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x157 = UINT8_MAX;
	volatile int64_t x158 = INT64_MAX;
	volatile uint32_t x159 = 11U;
	int16_t x160 = INT16_MAX;
	volatile int64_t t34 = -5945769814256933LL;

    t34 = (((x157&x158)&x159)*x160);

    if (t34 != 360437LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x166 = -760663;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MIN;

    t35 = (((x165&x166)&x167)*x168);

    if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x172 = 4;

    t36 = (((x169&x170)&x171)*x172);

    if (t36 != 2083389440LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 48U;
	uint32_t t37 = 97U;

    t37 = (((x177&x178)&x179)*x180);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x181 = -19;
	static uint8_t x182 = UINT8_MAX;
	uint8_t x184 = 1U;
	static volatile int32_t t38 = -880470;

    t38 = (((x181&x182)&x183)*x184);

    if (t38 != 64) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = INT16_MAX;
	int16_t x187 = -1;
	int64_t t39 = -442989434LL;

    t39 = (((x185&x186)&x187)*x188);

    if (t39 != 140733193355265LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x189 = INT64_MIN;
	static int64_t x190 = INT64_MIN;
	int64_t x191 = 28572797892LL;
	int8_t x192 = INT8_MAX;

    t40 = (((x189&x190)&x191)*x192);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x198 = 4344;
	volatile uint16_t x199 = 1203U;
	static volatile int64_t x200 = -1LL;
	volatile int64_t t41 = 79LL;

    t41 = (((x197&x198)&x199)*x200);

    if (t41 != -32LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = INT32_MIN;
	static uint16_t x203 = 23210U;
	static uint32_t x204 = 4218116U;

    t42 = (((x201&x202)&x203)*x204);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = -1;
	int64_t t43 = -1970841380719783LL;

    t43 = (((x205&x206)&x207)*x208);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MIN;
	uint64_t x211 = 65934081487LLU;
	int8_t x212 = -1;
	volatile uint64_t t44 = 31315560099LLU;

    t44 = (((x209&x210)&x211)*x212);

    if (t44 != 18446744009285042176LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x213 = INT64_MIN;
	static uint8_t x214 = 74U;
	static uint8_t x215 = 29U;
	uint32_t x216 = 9U;
	int64_t t45 = -3250915595708971179LL;

    t45 = (((x213&x214)&x215)*x216);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x218 = -1LL;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;

    t46 = (((x217&x218)&x219)*x220);

    if (t46 != 18446673707112857600LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x222 = INT8_MIN;
	static int64_t x224 = 1LL;

    t47 = (((x221&x222)&x223)*x224);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x226 = 1344261LLU;
	static int8_t x227 = -3;
	int64_t x228 = INT64_MAX;

    t48 = (((x225&x226)&x227)*x228);

    if (t48 != 9223372036854742271LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x230 = 27986U;
	static uint64_t x231 = UINT64_MAX;
	static int64_t x232 = INT64_MIN;
	volatile uint64_t t49 = 753216563LLU;

    t49 = (((x229&x230)&x231)*x232);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x233 = -1;
	int8_t x234 = INT8_MIN;
	int64_t x235 = -374589599LL;
	volatile int8_t x236 = INT8_MAX;
	int64_t t50 = -11719076606185LL;

    t50 = (((x233&x234)&x235)*x236);

    if (t50 != -47572891392LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x242 = -99695899;
	int16_t x243 = INT16_MIN;
	static int64_t x244 = -426959785LL;
	volatile int64_t t51 = -96566436616LL;

    t51 = (((x241&x242)&x243)*x244);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x249 = 241670U;
	uint32_t x250 = 498871U;
	uint64_t x251 = 1610328113714LLU;
	static int64_t x252 = INT64_MAX;

    t52 = (((x249&x250)&x251)*x252);

    if (t52 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x253 = 103065865LLU;
	int32_t x254 = INT32_MIN;
	static int16_t x255 = 31;
	static int32_t x256 = -1;
	volatile uint64_t t53 = 14710616LLU;

    t53 = (((x253&x254)&x255)*x256);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = INT32_MIN;
	static volatile int64_t x258 = 4593215897022LL;
	int8_t x259 = -53;
	static uint8_t x260 = 7U;
	int64_t t54 = 180097LL;

    t54 = (((x257&x258)&x259)*x260);

    if (t54 != 32139240275968LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MAX;
	static volatile uint32_t x263 = UINT32_MAX;
	uint16_t x264 = 10U;

    t55 = (((x261&x262)&x263)*x264);

    if (t55 != 42949345280LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x265 = INT16_MAX;
	int16_t x267 = 143;
	static uint32_t x268 = UINT32_MAX;
	uint32_t t56 = 124348U;

    t56 = (((x265&x266)&x267)*x268);

    if (t56 != 4294967163U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x269 = 1U;
	uint32_t x270 = UINT32_MAX;
	static uint64_t x271 = 3LLU;
	volatile int16_t x272 = 4009;
	uint64_t t57 = 274485LLU;

    t57 = (((x269&x270)&x271)*x272);

    if (t57 != 4009LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x274 = 0;
	uint8_t x275 = 0U;
	int16_t x276 = -817;
	int32_t t58 = 26;

    t58 = (((x273&x274)&x275)*x276);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = INT64_MAX;
	volatile int64_t x279 = -1LL;
	int32_t x280 = -1;
	int64_t t59 = 267082960094LL;

    t59 = (((x277&x278)&x279)*x280);

    if (t59 != -982LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x282 = 18724LLU;
	int16_t x284 = -5;
	static volatile uint64_t t60 = 13775041861608600LLU;

    t60 = (((x281&x282)&x283)*x284);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x286 = 62U;
	int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MAX;
	int64_t t61 = -785420274607942159LL;

    t61 = (((x285&x286)&x287)*x288);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x289 = 2;
	int32_t x291 = -1;
	int32_t t62 = -867;

    t62 = (((x289&x290)&x291)*x292);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x293 = 500419790049832782LL;
	volatile uint64_t t63 = 0LLU;

    t63 = (((x293&x294)&x295)*x296);

    if (t63 != 762LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = 2446LL;
	uint32_t x298 = 43810U;
	int32_t x300 = 4932445;

    t64 = (((x297&x298)&x299)*x300);

    if (t64 != 11374218170LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x301 = -1;
	volatile int8_t x303 = 7;
	int8_t x304 = -1;
	static volatile int64_t t65 = -1068573777268828921LL;

    t65 = (((x301&x302)&x303)*x304);

    if (t65 != -7LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = -1;
	uint64_t x306 = 174514212644LLU;
	uint64_t x307 = UINT64_MAX;
	uint64_t t66 = 2540756274246470639LLU;

    t66 = (((x305&x306)&x307)*x308);

    if (t66 != 7949131773941437620LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	static int32_t x311 = INT32_MAX;
	static int8_t x312 = 1;

    t67 = (((x309&x310)&x311)*x312);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 13200972U;
	volatile uint32_t t68 = 608868U;

    t68 = (((x313&x314)&x315)*x316);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x322 = 131U;
	int64_t x323 = INT64_MIN;
	volatile int32_t x324 = 5476;
	uint64_t t69 = 5318246303985LLU;

    t69 = (((x321&x322)&x323)*x324);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x325 = 16331560603853037LLU;
	int32_t x327 = -1;
	int32_t x328 = -1;

    t70 = (((x325&x326)&x327)*x328);

    if (t70 != 18430412513105698579LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x329 = 9488284440LL;
	static int32_t x330 = 91;
	int8_t x331 = INT8_MAX;
	int8_t x332 = 1;
	int64_t t71 = -13650975145768LL;

    t71 = (((x329&x330)&x331)*x332);

    if (t71 != 24LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x333 = 918893633;
	static volatile int16_t x334 = INT16_MIN;
	uint64_t x336 = 34748352LLU;
	uint64_t t72 = 360LLU;

    t72 = (((x333&x334)&x335)*x336);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x341 = 908042138784330LL;
	uint8_t x342 = 13U;
	int64_t t73 = -7635463LL;

    t73 = (((x341&x342)&x343)*x344);

    if (t73 != 15280999504LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x345 = UINT64_MAX;
	int32_t x346 = 441660;
	uint32_t x347 = 1148U;
	uint64_t t74 = 28LLU;

    t74 = (((x345&x346)&x347)*x348);

    if (t74 != 5640235463793799000LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = -1;
	static int16_t x350 = INT16_MAX;
	int16_t x351 = INT16_MAX;
	uint32_t x352 = 4323U;
	volatile uint32_t t75 = 146U;

    t75 = (((x349&x350)&x351)*x352);

    if (t75 != 141651741U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x354 = 7;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 51U;
	volatile int64_t t76 = 331901706219789LL;

    t76 = (((x353&x354)&x355)*x356);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x357 = INT64_MIN;
	int32_t x358 = -7;
	static volatile uint64_t x359 = 33180LLU;
	volatile uint64_t t77 = 119LLU;

    t77 = (((x357&x358)&x359)*x360);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x362 = -1;
	uint8_t x364 = UINT8_MAX;
	uint64_t t78 = 80180001083032132LLU;

    t78 = (((x361&x362)&x363)*x364);

    if (t78 != 1020LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = 42169946977644861LLU;
	int64_t x368 = 49886LL;
	static uint64_t t79 = 1108546LLU;

    t79 = (((x365&x366)&x367)*x368);

    if (t79 != 761065322928144384LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x369 = -238LL;
	uint8_t x370 = 28U;
	static uint8_t x371 = 30U;
	int32_t x372 = 2;
	static volatile int64_t t80 = 11LL;

    t80 = (((x369&x370)&x371)*x372);

    if (t80 != 32LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	uint64_t x374 = 481LLU;
	int64_t x375 = INT64_MIN;
	static volatile int8_t x376 = -1;

    t81 = (((x373&x374)&x375)*x376);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = -122131;
	uint64_t x379 = 126LLU;
	int16_t x380 = -1;
	static volatile uint64_t t82 = 1571759LLU;

    t82 = (((x377&x378)&x379)*x380);

    if (t82 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x381 = INT8_MAX;
	int8_t x382 = -24;
	int16_t x383 = INT16_MAX;
	int64_t x384 = -33194561753038123LL;
	volatile int64_t t83 = -561263LL;

    t83 = (((x381&x382)&x383)*x384);

    if (t83 != -3452234422315964792LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x390 = 7U;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t84 = -18921;

    t84 = (((x389&x390)&x391)*x392);

    if (t84 != -163840) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x393 = UINT16_MAX;
	int64_t x394 = -127612849997LL;
	int16_t x396 = INT16_MAX;
	volatile int64_t t85 = 158610846LL;

    t85 = (((x393&x394)&x395)*x396);

    if (t85 != 945360717LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x397 = 33829215U;
	static uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	uint64_t t86 = 718163439LLU;

    t86 = (((x397&x398)&x399)*x400);

    if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	volatile int16_t x407 = INT16_MIN;
	uint64_t x408 = 38305546LLU;

    t87 = (((x405&x406)&x407)*x408);

    if (t87 != 18364483540046839808LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = 40;
	static int8_t x411 = INT8_MIN;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t88 = 3842834010551465062LLU;

    t88 = (((x409&x410)&x411)*x412);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = -808351;
	static int64_t x414 = INT64_MIN;
	uint64_t x416 = 2429265105360484LLU;
	uint64_t t89 = 5617902LLU;

    t89 = (((x413&x414)&x415)*x416);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x418 = INT8_MIN;
	volatile int16_t x419 = 16;
	int32_t x420 = INT32_MIN;
	volatile int32_t t90 = 1002;

    t90 = (((x417&x418)&x419)*x420);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x421 = 11U;
	uint16_t x422 = 27428U;
	int16_t x423 = INT16_MIN;
	int32_t t91 = 3032514;

    t91 = (((x421&x422)&x423)*x424);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x425 = -1;
	uint16_t x426 = 183U;
	volatile int8_t x427 = INT8_MAX;
	static uint64_t t92 = 98840242772848377LLU;

    t92 = (((x425&x426)&x427)*x428);

    if (t92 != 110LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x429 = INT16_MIN;
	uint16_t x431 = 9U;
	volatile int32_t x432 = -265;

    t93 = (((x429&x430)&x431)*x432);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x433 = INT8_MIN;
	int32_t x434 = -1105;
	uint8_t x435 = 123U;
	static volatile int64_t x436 = INT64_MIN;
	volatile int64_t t94 = -4325481605457496LL;

    t94 = (((x433&x434)&x435)*x436);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x440 = -1;
	volatile int64_t t95 = -65742248956744340LL;

    t95 = (((x437&x438)&x439)*x440);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = INT32_MAX;
	static int16_t x442 = -15;
	static volatile int64_t x443 = 1237743082416LL;
	static int64_t t96 = 8490224243635LL;

    t96 = (((x441&x442)&x443)*x444);

    if (t96 != -10302515184LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = -48;
	int8_t x447 = INT8_MIN;

    t97 = (((x445&x446)&x447)*x448);

    if (t97 != 4165977088U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x449 = INT8_MAX;
	uint64_t x450 = 2210021357927541LLU;
	volatile int16_t x451 = INT16_MAX;
	uint32_t x452 = 3351U;

    t98 = (((x449&x450)&x451)*x452);

    if (t98 != 392067LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x453 = 11268425LL;
	int64_t x454 = INT64_MIN;
	volatile int32_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile int64_t t99 = 149435077328675LL;

    t99 = (((x453&x454)&x455)*x456);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x457 = 372386962031697LLU;
	int8_t x458 = INT8_MIN;
	volatile int32_t x459 = -968;
	uint32_t x460 = UINT32_MAX;
	volatile uint64_t t100 = 230342979416798LLU;

    t100 = (((x457&x458)&x459)*x460);

    if (t100 != 1771587358222236672LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x462 = 1;
	int8_t x463 = 0;
	int16_t x464 = -2383;
	int32_t t101 = 5448;

    t101 = (((x461&x462)&x463)*x464);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x465 = INT32_MIN;
	volatile int8_t x466 = INT8_MIN;

    t102 = (((x465&x466)&x467)*x468);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x469 = INT16_MAX;
	int32_t x470 = INT32_MIN;
	uint64_t x471 = 644LLU;
	static int64_t x472 = INT64_MIN;

    t103 = (((x469&x470)&x471)*x472);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x473 = -169;
	volatile int32_t x474 = INT32_MIN;
	int64_t x475 = 58966LL;
	int64_t x476 = INT64_MAX;

    t104 = (((x473&x474)&x475)*x476);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x478 = UINT32_MAX;
	int64_t x479 = INT64_MIN;
	int32_t x480 = -1;

    t105 = (((x477&x478)&x479)*x480);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x482 = UINT16_MAX;
	int32_t t106 = INT32_MAX;

    t106 = (((x481&x482)&x483)*x484);

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = INT16_MIN;
	static int16_t x486 = INT16_MAX;
	int64_t x487 = -20930436416LL;
	int8_t x488 = INT8_MIN;
	int64_t t107 = -59954380154097673LL;

    t107 = (((x485&x486)&x487)*x488);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x489 = -1;
	int8_t x490 = INT8_MAX;
	volatile int64_t x491 = 2619LL;
	int32_t x492 = -1;
	volatile int64_t t108 = 23227840LL;

    t108 = (((x489&x490)&x491)*x492);

    if (t108 != -59LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x493 = -218103257034LL;
	static int16_t x494 = INT16_MAX;
	int64_t x495 = INT64_MAX;

    t109 = (((x493&x494)&x495)*x496);

    if (t109 != -26678LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x498 = INT32_MAX;
	uint32_t x499 = 1465632112U;
	static volatile uint32_t t110 = 547053U;

    t110 = (((x497&x498)&x499)*x500);

    if (t110 != 17776U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x501 = INT32_MAX;
	static int8_t x504 = -1;

    t111 = (((x501&x502)&x503)*x504);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x505 = 3346LLU;
	int16_t x506 = -188;
	uint8_t x507 = UINT8_MAX;
	volatile int64_t x508 = INT64_MIN;

    t112 = (((x505&x506)&x507)*x508);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x511 = 0;
	uint16_t x512 = 52U;
	int32_t t113 = -160;

    t113 = (((x509&x510)&x511)*x512);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x513 = INT8_MIN;
	uint16_t x515 = 493U;
	static int16_t x516 = INT16_MIN;
	volatile int32_t t114 = -1900;

    t114 = (((x513&x514)&x515)*x516);

    if (t114 != -12582912) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x517 = -15LL;
	volatile int8_t x518 = INT8_MIN;
	uint64_t x519 = UINT64_MAX;

    t115 = (((x517&x518)&x519)*x520);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x521 = -233382;
	int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MAX;
	static int64_t t116 = 891LL;

    t116 = (((x521&x522)&x523)*x524);

    if (t116 != -9223372036854542336LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x525 = UINT8_MAX;
	int64_t x528 = -81LL;
	int64_t t117 = 452467661060706171LL;

    t117 = (((x525&x526)&x527)*x528);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	static int8_t x534 = -1;
	volatile int16_t x535 = -15468;
	volatile uint32_t x536 = 1845142432U;
	volatile uint32_t t118 = 12495U;

    t118 = (((x533&x534)&x535)*x536);

    if (t118 != 2139715712U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x537 = 0U;
	int64_t x538 = -1LL;
	uint8_t x539 = 10U;
	static int64_t x540 = INT64_MAX;
	static int64_t t119 = -8526610840LL;

    t119 = (((x537&x538)&x539)*x540);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x541 = -190008194245881820LL;
	int16_t x543 = 1012;
	static uint64_t t120 = 836822155672330229LLU;

    t120 = (((x541&x542)&x543)*x544);

    if (t120 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x546 = -1;
	int8_t x547 = INT8_MIN;
	uint32_t x548 = 11687U;
	uint32_t t121 = 5473202U;

    t121 = (((x545&x546)&x547)*x548);

    if (t121 != 7479680U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x550 = -1LL;
	uint64_t x551 = 7501982280622379369LLU;
	static int16_t x552 = INT16_MIN;
	volatile uint64_t t122 = 11LLU;

    t122 = (((x549&x550)&x551)*x552);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x554 = -1;
	uint64_t x555 = UINT64_MAX;
	static uint64_t x556 = 109073372114823074LLU;
	uint64_t t123 = 1832610664090517469LLU;

    t123 = (((x553&x554)&x555)*x556);

    if (t123 != 5211276299196170240LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x561 = 1904163187006937LL;
	uint32_t x562 = 1994U;
	int64_t x563 = -1LL;
	volatile int64_t t124 = 23916431LL;

    t124 = (((x561&x562)&x563)*x564);

    if (t124 != -1480LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x565 = INT16_MAX;
	int8_t x566 = -1;
	int64_t x567 = -7793LL;
	volatile uint8_t x568 = UINT8_MAX;
	static volatile int64_t t125 = -25311727LL;

    t125 = (((x565&x566)&x567)*x568);

    if (t125 != 6368625LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x569 = INT64_MIN;
	uint8_t x570 = 1U;
	uint64_t x572 = UINT64_MAX;

    t126 = (((x569&x570)&x571)*x572);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x573 = 119U;
	int64_t x574 = INT64_MAX;
	volatile int64_t x575 = INT64_MIN;
	volatile int64_t t127 = 14765620LL;

    t127 = (((x573&x574)&x575)*x576);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x577 = INT16_MIN;
	int8_t x579 = 2;
	static uint16_t x580 = 12412U;
	int32_t t128 = 16153;

    t128 = (((x577&x578)&x579)*x580);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x582 = 71020711588562127LLU;
	static int8_t x583 = INT8_MIN;
	uint64_t x584 = 1LLU;

    t129 = (((x581&x582)&x583)*x584);

    if (t129 != 71020711588562048LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x586 = 762U;
	int64_t x587 = -6039LL;
	static volatile uint64_t x588 = 20657LLU;
	volatile uint64_t t130 = 2033615LLU;

    t130 = (((x585&x586)&x587)*x588);

    if (t130 != 1322048LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x589 = INT64_MAX;
	static int16_t x590 = INT16_MAX;
	volatile int8_t x591 = -1;
	volatile uint8_t x592 = UINT8_MAX;
	int64_t t131 = 1696096059676661LL;

    t131 = (((x589&x590)&x591)*x592);

    if (t131 != 8355585LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x593 = 51130868LLU;
	static int64_t x594 = INT64_MIN;
	int32_t x595 = INT32_MAX;
	int32_t x596 = INT32_MAX;
	uint64_t t132 = 68096LLU;

    t132 = (((x593&x594)&x595)*x596);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x598 = 108U;
	int64_t t133 = -1674723186718844028LL;

    t133 = (((x597&x598)&x599)*x600);

    if (t133 != -45640405226088LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x601 = INT8_MIN;
	int8_t x602 = INT8_MIN;
	int16_t x603 = INT16_MIN;
	uint64_t x604 = 52385250243908LLU;
	uint64_t t134 = 439526896LLU;

    t134 = (((x601&x602)&x603)*x604);

    if (t134 != 16730184193717174272LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x606 = INT32_MIN;
	static volatile uint64_t x607 = UINT64_MAX;
	static int64_t x608 = INT64_MIN;

    t135 = (((x605&x606)&x607)*x608);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x609 = UINT64_MAX;
	static int16_t x610 = -1;
	uint64_t x612 = 0LLU;
	volatile uint64_t t136 = 31678182298204772LLU;

    t136 = (((x609&x610)&x611)*x612);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x614 = 135845184LL;
	static int32_t x615 = INT32_MIN;
	int64_t t137 = 128264552577LL;

    t137 = (((x613&x614)&x615)*x616);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	static uint16_t x618 = UINT16_MAX;
	volatile uint16_t x619 = 61U;
	static int64_t x620 = -369091090LL;

    t138 = (((x617&x618)&x619)*x620);

    if (t138 != -22514556490LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x621 = INT32_MAX;
	volatile int32_t x623 = -1;
	volatile int8_t x624 = INT8_MIN;
	uint64_t t139 = 4503006216475141LLU;

    t139 = (((x621&x622)&x623)*x624);

    if (t139 != 18446744073709495040LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x625 = -22671LL;
	int16_t x626 = 989;
	int8_t x627 = INT8_MIN;
	int8_t x628 = INT8_MIN;

    t140 = (((x625&x626)&x627)*x628);

    if (t140 != -98304LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x633 = UINT64_MAX;
	int8_t x634 = INT8_MAX;
	int64_t x635 = INT64_MIN;
	uint16_t x636 = 1643U;
	uint64_t t141 = 5176340115LLU;

    t141 = (((x633&x634)&x635)*x636);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x642 = INT32_MAX;
	volatile int64_t x643 = 4762125925090LL;
	static volatile uint8_t x644 = 120U;
	volatile uint64_t t142 = 182025901785512LLU;

    t142 = (((x641&x642)&x643)*x644);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x645 = 124U;
	int16_t x646 = INT16_MIN;
	int8_t x648 = INT8_MIN;

    t143 = (((x645&x646)&x647)*x648);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x649 = INT16_MAX;
	uint8_t x650 = 0U;
	uint8_t x651 = UINT8_MAX;
	volatile int64_t t144 = -3491LL;

    t144 = (((x649&x650)&x651)*x652);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x653 = -1LL;
	static int32_t x654 = -1;
	static int32_t x655 = 160050029;
	static volatile int64_t t145 = -488786LL;

    t145 = (((x653&x654)&x655)*x656);

    if (t145 != -20486403712LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x657 = INT64_MIN;
	volatile uint16_t x658 = 9U;
	static uint8_t x659 = 43U;
	uint32_t x660 = UINT32_MAX;

    t146 = (((x657&x658)&x659)*x660);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x661 = INT64_MIN;
	uint32_t x662 = UINT32_MAX;
	volatile int16_t x664 = INT16_MAX;
	int64_t t147 = 37636093497LL;

    t147 = (((x661&x662)&x663)*x664);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x665 = -1;
	uint16_t x666 = 117U;
	static int64_t x667 = INT64_MIN;
	int16_t x668 = 9;
	int64_t t148 = 44894494LL;

    t148 = (((x665&x666)&x667)*x668);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x671 = -1LL;
	volatile int32_t x672 = 695;

    t149 = (((x669&x670)&x671)*x672);

    if (t149 != 8340LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x673 = INT16_MAX;
	static int64_t x675 = INT64_MAX;
	volatile uint8_t x676 = UINT8_MAX;

    t150 = (((x673&x674)&x675)*x676);

    if (t150 != 32385LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x677 = 498501;
	int16_t x678 = INT16_MAX;
	int16_t x679 = 1;
	uint32_t x680 = 226993480U;
	volatile uint32_t t151 = 2001574U;

    t151 = (((x677&x678)&x679)*x680);

    if (t151 != 226993480U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x681 = INT16_MAX;
	int16_t x682 = INT16_MAX;
	uint8_t x683 = 15U;
	int8_t x684 = INT8_MAX;
	static int32_t t152 = 23;

    t152 = (((x681&x682)&x683)*x684);

    if (t152 != 1905) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x689 = 3U;
	static int64_t x690 = -9779LL;
	static int64_t x691 = -1LL;
	int32_t x692 = INT32_MAX;

    t153 = (((x689&x690)&x691)*x692);

    if (t153 != 2147483647LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x694 = -1;
	int16_t x695 = INT16_MIN;
	int8_t x696 = 4;
	static int32_t t154 = 39526;

    t154 = (((x693&x694)&x695)*x696);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x697 = -57;
	uint8_t x698 = UINT8_MAX;
	int64_t x699 = INT64_MAX;
	volatile int64_t t155 = 511749LL;

    t155 = (((x697&x698)&x699)*x700);

    if (t155 != -25472LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x701 = -1;
	static int64_t x702 = -1LL;
	volatile int64_t x704 = -1LL;

    t156 = (((x701&x702)&x703)*x704);

    if (t156 != 2147483648LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = INT16_MAX;
	volatile int8_t x710 = -1;
	uint32_t x712 = 577428337U;

    t157 = (((x709&x710)&x711)*x712);

    if (t157 != 944424832U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x717 = 10U;
	uint8_t x718 = UINT8_MAX;
	int8_t x720 = -1;
	volatile uint64_t t158 = 2LLU;

    t158 = (((x717&x718)&x719)*x720);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x721 = UINT8_MAX;
	uint8_t x722 = UINT8_MAX;
	int16_t x723 = INT16_MIN;
	volatile int32_t t159 = 1700;

    t159 = (((x721&x722)&x723)*x724);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x727 = UINT32_MAX;
	int64_t x728 = -10LL;
	static volatile int64_t t160 = 99251406551456363LL;

    t160 = (((x725&x726)&x727)*x728);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x733 = 14;
	int64_t x735 = INT64_MAX;
	volatile int64_t t161 = 11178LL;

    t161 = (((x733&x734)&x735)*x736);

    if (t161 != 510LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x737 = 1;
	int64_t x738 = -1654970431302916900LL;
	int32_t x739 = INT32_MIN;

    t162 = (((x737&x738)&x739)*x740);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x742 = INT32_MAX;
	volatile int8_t x743 = INT8_MIN;
	int8_t x744 = -1;

    t163 = (((x741&x742)&x743)*x744);

    if (t163 != -82304) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x745 = -18927952LL;
	int8_t x746 = INT8_MIN;
	int16_t x747 = INT16_MIN;
	volatile int64_t t164 = -4720837852428253LL;

    t164 = (((x745&x746)&x747)*x748);

    if (t164 != -2405367808LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x749 = UINT32_MAX;
	uint16_t x752 = UINT16_MAX;
	volatile uint32_t t165 = 1329466979U;

    t165 = (((x749&x750)&x751)*x752);

    if (t165 != 203355105U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x753 = -6LL;
	int8_t x754 = 0;
	uint8_t x755 = UINT8_MAX;
	int8_t x756 = 6;
	volatile int64_t t166 = 133404728746016LL;

    t166 = (((x753&x754)&x755)*x756);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x758 = -1;
	volatile int8_t x759 = -1;
	int16_t x760 = -1;
	uint64_t t167 = 211037LLU;

    t167 = (((x757&x758)&x759)*x760);

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x761 = INT8_MAX;
	int64_t x762 = 25474LL;
	volatile int32_t x763 = INT32_MIN;
	int64_t t168 = 6620249434LL;

    t168 = (((x761&x762)&x763)*x764);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = -1LL;
	uint8_t x767 = 3U;
	int32_t x768 = INT32_MAX;

    t169 = (((x765&x766)&x767)*x768);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x769 = 67LLU;
	int32_t x771 = -483971088;
	uint32_t x772 = 28263U;
	volatile uint64_t t170 = 3854369421178632430LLU;

    t170 = (((x769&x770)&x771)*x772);

    if (t170 != 1808832LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x773 = 1633923846U;
	uint8_t x775 = UINT8_MAX;
	static uint32_t x776 = UINT32_MAX;
	uint32_t t171 = 26399070U;

    t171 = (((x773&x774)&x775)*x776);

    if (t171 != 4294967290U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x781 = 0U;
	static volatile int32_t x782 = 10522004;
	int32_t x783 = INT32_MAX;
	uint16_t x784 = 982U;
	int32_t t172 = 0;

    t172 = (((x781&x782)&x783)*x784);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x785 = 0;
	int32_t x786 = 11175;
	int8_t x788 = INT8_MIN;
	volatile int32_t t173 = -2;

    t173 = (((x785&x786)&x787)*x788);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x792 = 147389198LLU;

    t174 = (((x789&x790)&x791)*x792);

    if (t174 != 294778396LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x793 = UINT16_MAX;
	static int16_t x794 = 68;
	int64_t x795 = INT64_MIN;
	int16_t x796 = -1;

    t175 = (((x793&x794)&x795)*x796);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x799 = INT64_MIN;
	uint8_t x800 = UINT8_MAX;
	int64_t t176 = 1154345598600165LL;

    t176 = (((x797&x798)&x799)*x800);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x803 = -1;
	volatile int16_t x804 = 2;
	static volatile uint64_t t177 = 99642203868240161LLU;

    t177 = (((x801&x802)&x803)*x804);

    if (t177 != 698340691968LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x805 = -1;
	static int8_t x806 = INT8_MAX;
	volatile int64_t x808 = -960645037159038LL;

    t178 = (((x805&x806)&x807)*x808);

    if (t178 != -79733538084200154LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x809 = 6U;
	uint8_t x810 = 41U;
	int8_t x811 = INT8_MIN;
	int16_t x812 = INT16_MAX;
	int32_t t179 = 1653208;

    t179 = (((x809&x810)&x811)*x812);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x817 = INT16_MAX;
	uint32_t x818 = UINT32_MAX;
	volatile uint64_t x820 = 1797568166776LLU;
	uint64_t t180 = 58589909423LLU;

    t180 = (((x817&x818)&x819)*x820);

    if (t180 != 58900916120749192LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x821 = INT64_MIN;
	uint16_t x822 = 792U;
	static uint16_t x823 = 6495U;
	static int16_t x824 = 5;

    t181 = (((x821&x822)&x823)*x824);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x825 = 2;
	static int8_t x827 = INT8_MIN;
	volatile int32_t t182 = -1;

    t182 = (((x825&x826)&x827)*x828);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x829 = 3U;
	int64_t x831 = -1LL;
	static volatile int16_t x832 = 136;
	static int64_t t183 = 22246462385966780LL;

    t183 = (((x829&x830)&x831)*x832);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x833 = UINT32_MAX;
	int8_t x834 = -1;
	int64_t x835 = -341LL;
	uint16_t x836 = 67U;
	volatile int64_t t184 = -5906LL;

    t184 = (((x833&x834)&x835)*x836);

    if (t184 != 287762785985LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x838 = -1;
	int8_t x839 = INT8_MIN;
	uint16_t x840 = 309U;
	volatile int32_t t185 = -4310764;

    t185 = (((x837&x838)&x839)*x840);

    if (t185 != 20211072) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = -208;
	uint32_t x842 = 31U;
	int8_t x843 = INT8_MAX;
	uint8_t x844 = 99U;

    t186 = (((x841&x842)&x843)*x844);

    if (t186 != 1584U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x845 = INT64_MIN;
	int16_t x847 = INT16_MIN;
	int8_t x848 = INT8_MIN;
	volatile int64_t t187 = -385646728062297803LL;

    t187 = (((x845&x846)&x847)*x848);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x851 = -1LL;
	volatile uint16_t x852 = 14U;
	volatile uint64_t t188 = 162323531465386756LLU;

    t188 = (((x849&x850)&x851)*x852);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x854 = -118932167011872627LL;
	int32_t x856 = -1;
	volatile int64_t t189 = -1043411306720835LL;

    t189 = (((x853&x854)&x855)*x856);

    if (t189 != -13LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x858 = INT32_MIN;
	static uint32_t x859 = 1009U;
	volatile int64_t t190 = -5461LL;

    t190 = (((x857&x858)&x859)*x860);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x862 = INT64_MIN;
	uint64_t x863 = 398927857349358LLU;
	int32_t x864 = INT32_MIN;

    t191 = (((x861&x862)&x863)*x864);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x865 = UINT16_MAX;
	static int64_t x866 = -861161647026066945LL;
	uint8_t x867 = 7U;
	int32_t x868 = 30;

    t192 = (((x865&x866)&x867)*x868);

    if (t192 != 210LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x870 = -167407607;
	static int16_t x871 = -1;
	volatile int32_t x872 = -1783303;

    t193 = (((x869&x870)&x871)*x872);

    if (t193 != -16049727) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x873 = INT32_MIN;
	uint32_t x874 = 62U;
	static int64_t x875 = INT64_MIN;
	static int8_t x876 = -1;
	volatile int64_t t194 = 748737LL;

    t194 = (((x873&x874)&x875)*x876);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x877 = 61U;
	int8_t x878 = -1;
	int64_t x879 = INT64_MIN;
	static int64_t x880 = INT64_MAX;
	volatile int64_t t195 = 24289971LL;

    t195 = (((x877&x878)&x879)*x880);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x881 = 462LLU;
	int64_t x882 = -39LL;
	volatile int16_t x883 = -5213;
	int16_t x884 = INT16_MAX;

    t196 = (((x881&x882)&x883)*x884);

    if (t196 != 12582528LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x885 = -1LL;
	int64_t x887 = -1LL;
	static int16_t x888 = 0;
	static volatile int64_t t197 = -3769LL;

    t197 = (((x885&x886)&x887)*x888);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x889 = 49U;
	volatile uint8_t x890 = 2U;
	uint8_t x891 = 5U;
	int32_t x892 = -1;

    t198 = (((x889&x890)&x891)*x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x893 = INT8_MIN;
	uint16_t x894 = 3667U;
	int16_t x895 = 1;

    t199 = (((x893&x894)&x895)*x896);

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

