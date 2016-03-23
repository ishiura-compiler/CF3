
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

uint64_t x1 = 62LLU;
uint16_t x5 = UINT16_MAX;
volatile int32_t x7 = INT32_MIN;
int64_t x20 = INT64_MIN;
volatile uint16_t x29 = UINT16_MAX;
static int8_t x33 = -3;
int32_t x51 = INT32_MAX;
uint8_t x52 = 7U;
static uint64_t x58 = 277858561150255667LLU;
static volatile int64_t t11 = 623LL;
volatile uint32_t t13 = 38879U;
uint32_t x101 = 21569897U;
int64_t x110 = INT64_MIN;
int8_t x114 = 1;
uint64_t x118 = 2509LLU;
int16_t x120 = INT16_MIN;
volatile uint32_t x126 = 13095U;
static int8_t x127 = INT8_MAX;
uint32_t t23 = 30808946U;
uint8_t x131 = 31U;
int8_t x166 = 1;
int64_t x167 = INT64_MAX;
int32_t x180 = -1;
volatile int64_t t31 = 4343698135082135LL;
int32_t x190 = -165139;
static int64_t x192 = 160681694692561LL;
volatile int8_t x196 = INT8_MIN;
int16_t x199 = INT16_MAX;
int32_t t35 = -12504198;
uint32_t x209 = UINT32_MAX;
static volatile int8_t x211 = 23;
volatile uint32_t t37 = 2U;
int64_t x217 = INT64_MAX;
uint64_t x222 = UINT64_MAX;
volatile uint64_t t39 = 7636692687LLU;
int64_t x233 = INT64_MAX;
uint8_t x245 = 44U;
static uint8_t x252 = 96U;
volatile uint32_t t51 = 1898118076U;
int8_t x309 = INT8_MIN;
int64_t x310 = -1LL;
int16_t x313 = INT16_MAX;
static uint32_t x318 = 9299U;
uint8_t x319 = 0U;
int64_t x330 = 26357414176LL;
uint32_t x339 = UINT32_MAX;
int8_t x345 = 1;
int16_t x352 = 6220;
volatile uint32_t t59 = 1144845671U;
volatile uint32_t x362 = UINT32_MAX;
uint32_t x363 = 1U;
static uint32_t x366 = UINT32_MAX;
uint32_t x373 = UINT32_MAX;
uint32_t t64 = 91643605U;
int8_t x396 = 0;
int64_t t69 = -102517229125LL;
int8_t x405 = INT8_MIN;
uint32_t x406 = UINT32_MAX;
int64_t x407 = INT64_MIN;
int64_t x410 = -1LL;
static volatile int16_t x413 = INT16_MAX;
int32_t t73 = -127572727;
int8_t x423 = -1;
volatile uint64_t t74 = 223383LLU;
uint64_t x430 = 19827965933314LLU;
int64_t x437 = INT64_MAX;
int32_t x445 = INT32_MAX;
int64_t x446 = INT64_MIN;
static volatile uint16_t x449 = 610U;
volatile int64_t x453 = -3LL;
static volatile int8_t x460 = 1;
int16_t x466 = INT16_MAX;
int8_t x497 = INT8_MIN;
volatile uint16_t x503 = UINT16_MAX;
uint16_t x507 = 4U;
uint8_t x508 = UINT8_MAX;
static int64_t t90 = -166063018706852LL;
int16_t x513 = INT16_MIN;
uint32_t x514 = 26432U;
uint32_t t91 = 6U;
static uint16_t x535 = UINT16_MAX;
uint32_t t95 = 8668950U;
volatile int16_t x538 = -1;
int32_t x545 = 1;
int64_t x546 = INT64_MAX;
volatile int8_t x549 = INT8_MIN;
int16_t x550 = -1;
int8_t x556 = -1;
static uint64_t x564 = 12475475LLU;
static int32_t x569 = -1;
int16_t x578 = -1;
volatile uint32_t t107 = 674504U;
static uint32_t x609 = 531315594U;
volatile uint16_t x617 = 4U;
volatile uint8_t x618 = 36U;
uint16_t x619 = 205U;
int8_t x628 = INT8_MAX;
volatile int32_t t116 = 538;
volatile int32_t t119 = -69191842;
int8_t x673 = 0;
int64_t x676 = INT64_MIN;
int8_t x679 = 33;
uint64_t x680 = 1010276LLU;
volatile int8_t x686 = INT8_MIN;
volatile int32_t t123 = 401382535;
uint32_t x690 = 6704U;
volatile int64_t x691 = -446197821132208LL;
int16_t x710 = 466;
uint16_t x719 = 15884U;
static volatile int32_t t128 = -23231933;
uint8_t x733 = 1U;
uint32_t x735 = UINT32_MAX;
uint64_t x738 = UINT64_MAX;
int64_t x740 = -1LL;
int64_t x741 = INT64_MAX;
int8_t x742 = INT8_MIN;
static uint32_t t133 = 155818U;
uint64_t x753 = 8468351LLU;
int16_t x761 = INT16_MAX;
volatile uint64_t t138 = 20686220LLU;
static volatile int32_t x770 = -1;
int32_t x771 = INT32_MAX;
int32_t x778 = INT32_MIN;
static int8_t x780 = INT8_MIN;
int8_t x782 = INT8_MIN;
int64_t x785 = 106LL;
static int64_t t142 = 4197608868LL;
volatile uint32_t t144 = 523670327U;
int16_t x802 = -1;
int32_t x818 = -21;
int64_t x832 = -1LL;
int64_t x845 = INT64_MAX;
uint16_t x849 = UINT16_MAX;
uint64_t x851 = UINT64_MAX;
volatile int32_t t153 = 61;
static volatile uint64_t x859 = UINT64_MAX;
uint16_t x865 = 1809U;
static volatile uint32_t t158 = 67U;
uint64_t t159 = 7LLU;
uint16_t x890 = UINT16_MAX;
static int8_t x903 = 63;
volatile uint64_t x904 = 3835LLU;
int64_t x905 = INT64_MIN;
int16_t x907 = 0;
static int64_t t162 = -36461088032LL;
volatile int16_t x910 = -30;
int16_t x917 = 1;
static uint32_t x918 = 220172962U;
uint16_t x919 = UINT16_MAX;
static int16_t x927 = INT16_MAX;
uint8_t x933 = UINT8_MAX;
int32_t x967 = INT32_MAX;
static uint16_t x969 = UINT16_MAX;
uint64_t t175 = 3LLU;
volatile int8_t x983 = 5;
int32_t t176 = 54;
int16_t x987 = 1;
int64_t t177 = -331114204467657LL;
uint32_t x997 = 2U;
uint16_t x998 = 11U;
uint16_t x1013 = UINT16_MAX;
static int32_t x1014 = -1;
int32_t t183 = 33;
static int8_t x1022 = -2;
volatile int16_t x1024 = INT16_MAX;
int64_t x1029 = INT64_MAX;
volatile int32_t x1033 = INT32_MAX;
uint64_t x1037 = UINT64_MAX;
volatile uint16_t x1039 = 934U;
uint64_t t188 = 14LLU;
volatile int32_t t189 = 5;
volatile int8_t x1048 = 3;
int8_t x1052 = -1;
uint64_t x1053 = 15462674LLU;
int64_t x1061 = -1790755826998489824LL;
int64_t x1063 = -36579784453802LL;
int8_t x1068 = -1;
int16_t x1078 = -20;
static int16_t x1088 = -1108;
int8_t x1111 = -1;
int32_t t199 = -432792928;


void f0(void) {
    	int16_t x2 = -1;
	int64_t x3 = 5417204LL;
	uint32_t x4 = 0U;
	uint64_t t0 = 4077802LLU;

    t0 = ((x1%x2)>>(x3>x4));

    if (t0 != 31LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x6 = 2U;
	int32_t x8 = -1;
	int32_t t1 = -117379821;

    t1 = ((x5%x6)>>(x7>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x13 = 2068U;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = 1U;
	static int16_t x16 = -11771;
	static volatile uint32_t t2 = 1527511U;

    t2 = ((x13%x14)>>(x15>x16));

    if (t2 != 1034U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	volatile uint64_t x18 = 30362LLU;
	int16_t x19 = 49;
	volatile uint64_t t3 = 1LLU;

    t3 = ((x17%x18)>>(x19>x20));

    if (t3 != 2405LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -28860294;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MIN;
	uint64_t x24 = UINT64_MAX;
	volatile uint32_t t4 = 121944852U;

    t4 = ((x21%x22)>>(x23>x24));

    if (t4 != 4266107002U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	volatile int16_t x26 = INT16_MIN;
	uint32_t x27 = 1U;
	int64_t x28 = INT64_MAX;
	volatile int32_t t5 = 2504;

    t5 = ((x25%x26)>>(x27>x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = INT64_MIN;
	int32_t x31 = 126468;
	volatile int16_t x32 = 3967;
	int64_t t6 = 7745149810596557LL;

    t6 = ((x29%x30)>>(x31>x32));

    if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x34 = 3;
	int16_t x35 = INT16_MIN;
	volatile uint64_t x36 = UINT64_MAX;
	static volatile int32_t t7 = 822265985;

    t7 = ((x33%x34)>>(x35>x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = 7LL;
	int8_t x38 = -1;
	int32_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	static volatile int64_t t8 = -259014018725996788LL;

    t8 = ((x37%x38)>>(x39>x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x49 = 3U;
	int32_t x50 = -45845692;
	int32_t t9 = -354;

    t9 = ((x49%x50)>>(x51>x52));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = -1;
	volatile int8_t x59 = INT8_MIN;
	volatile int32_t x60 = -1;
	volatile uint64_t t10 = 473963LLU;

    t10 = ((x57%x58)>>(x59>x60));

    if (t10 != 108079037792677593LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = INT32_MAX;
	int64_t x66 = -1LL;
	int32_t x67 = 6056073;
	uint64_t x68 = 38553810867142276LLU;

    t11 = ((x65%x66)>>(x67>x68));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x69 = INT16_MAX;
	int64_t x70 = 96383702501LL;
	static uint64_t x71 = 7667285427755799LLU;
	uint8_t x72 = UINT8_MAX;
	int64_t t12 = -2990892572368042544LL;

    t12 = ((x69%x70)>>(x71>x72));

    if (t12 != 16383LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x73 = UINT32_MAX;
	static int16_t x74 = INT16_MIN;
	int16_t x75 = -1955;
	volatile int16_t x76 = INT16_MIN;

    t13 = ((x73%x74)>>(x75>x76));

    if (t13 != 16383U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x77 = 1;
	int32_t x78 = -1715;
	int8_t x79 = INT8_MIN;
	static volatile int8_t x80 = -1;
	int32_t t14 = -3;

    t14 = ((x77%x78)>>(x79>x80));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x81 = -122;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = -1;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t15 = 7LLU;

    t15 = ((x81%x82)>>(x83>x84));

    if (t15 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MAX;
	static volatile uint8_t x87 = 2U;
	int8_t x88 = 0;
	volatile int64_t t16 = -27519250545448LL;

    t16 = ((x85%x86)>>(x87>x88));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x89 = INT32_MIN;
	uint32_t x90 = 1009U;
	int32_t x91 = INT32_MAX;
	int64_t x92 = 469LL;
	uint32_t t17 = 227U;

    t17 = ((x89%x90)>>(x91>x92));

    if (t17 != 348U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x97 = UINT8_MAX;
	static uint32_t x98 = UINT32_MAX;
	static int32_t x99 = 77737620;
	uint8_t x100 = 0U;
	uint32_t t18 = 61982U;

    t18 = ((x97%x98)>>(x99>x100));

    if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x102 = INT32_MIN;
	int8_t x103 = -30;
	int64_t x104 = -1LL;
	uint32_t t19 = 2U;

    t19 = ((x101%x102)>>(x103>x104));

    if (t19 != 21569897U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x109 = UINT64_MAX;
	uint16_t x111 = 7918U;
	static uint32_t x112 = UINT32_MAX;
	uint64_t t20 = 37764263996458183LLU;

    t20 = ((x109%x110)>>(x111>x112));

    if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = 1;
	static volatile uint32_t x115 = UINT32_MAX;
	int16_t x116 = 456;
	static volatile int32_t t21 = 2;

    t21 = ((x113%x114)>>(x115>x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x117 = 335U;
	volatile int32_t x119 = INT32_MIN;
	static uint64_t t22 = 36327918793LLU;

    t22 = ((x117%x118)>>(x119>x120));

    if (t22 != 335LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x125 = INT32_MIN;
	uint16_t x128 = 42U;

    t23 = ((x125%x126)>>(x127>x128));

    if (t23 != 4204U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x129 = 25141U;
	static int64_t x130 = -2167139043794900LL;
	int32_t x132 = INT32_MAX;
	volatile int64_t t24 = -39094LL;

    t24 = ((x129%x130)>>(x131>x132));

    if (t24 != 25141LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x137 = -1LL;
	int8_t x138 = -1;
	int32_t x139 = 888079;
	uint16_t x140 = 14U;
	int64_t t25 = 120549937025303LL;

    t25 = ((x137%x138)>>(x139>x140));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	volatile uint16_t x151 = UINT16_MAX;
	static int8_t x152 = 3;
	static int32_t t26 = 1049879952;

    t26 = ((x149%x150)>>(x151>x152));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x153 = UINT64_MAX;
	int32_t x154 = -1;
	int16_t x155 = INT16_MIN;
	static uint8_t x156 = 54U;
	volatile uint64_t t27 = 3916424152574LLU;

    t27 = ((x153%x154)>>(x155>x156));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x157 = 94183065671216LLU;
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 2U;
	uint64_t t28 = 165488LLU;

    t28 = ((x157%x158)>>(x159>x160));

    if (t28 != 94183065671216LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = INT32_MAX;
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MAX;
	static int32_t x164 = INT32_MIN;
	int64_t t29 = 222357LL;

    t29 = ((x161%x162)>>(x163>x164));

    if (t29 != 1073741823LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x165 = INT8_MIN;
	static uint64_t x168 = 170LLU;
	volatile int32_t t30 = 125918;

    t30 = ((x165%x166)>>(x167>x168));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x178 = INT64_MAX;
	uint64_t x179 = 1448587990783960LLU;

    t31 = ((x177%x178)>>(x179>x180));

    if (t31 != 255LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x181 = 26222U;
	static int64_t x182 = -36547573524LL;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MAX;
	volatile int64_t t32 = 26409674785428935LL;

    t32 = ((x181%x182)>>(x183>x184));

    if (t32 != 26222LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x189 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	int32_t t33 = 15645;

    t33 = ((x189%x190)>>(x191>x192));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	int64_t x195 = -29220024811402180LL;
	int32_t t34 = -2093374;

    t34 = ((x193%x194)>>(x195>x196));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x197 = UINT16_MAX;
	static int32_t x198 = INT32_MAX;
	int16_t x200 = INT16_MIN;

    t35 = ((x197%x198)>>(x199>x200));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x210 = INT8_MAX;
	int8_t x212 = -1;
	volatile uint32_t t36 = 60421U;

    t36 = ((x209%x210)>>(x211>x212));

    if (t36 != 7U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x213 = 1485U;
	uint8_t x214 = 1U;
	int16_t x215 = -147;
	uint64_t x216 = UINT64_MAX;

    t37 = ((x213%x214)>>(x215>x216));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x218 = INT8_MAX;
	int8_t x219 = -1;
	uint16_t x220 = UINT16_MAX;
	volatile int64_t t38 = 1LL;

    t38 = ((x217%x218)>>(x219>x220));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x221 = 190718126;
	uint8_t x223 = 0U;
	int32_t x224 = INT32_MIN;

    t39 = ((x221%x222)>>(x223>x224));

    if (t39 != 95359063LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x229 = 13580U;
	uint64_t x230 = 1393841644LLU;
	uint32_t x231 = UINT32_MAX;
	volatile uint32_t x232 = 1588477410U;
	volatile uint64_t t40 = 30138923142LLU;

    t40 = ((x229%x230)>>(x231>x232));

    if (t40 != 6790LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x234 = 3668089019551LLU;
	uint16_t x235 = 11373U;
	int8_t x236 = INT8_MIN;
	static uint64_t t41 = 91694740LLU;

    t41 = ((x233%x234)>>(x235>x236));

    if (t41 != 1273086500684LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x237 = INT16_MIN;
	uint32_t x238 = 36011097U;
	int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MIN;
	volatile uint32_t t42 = 200U;

    t42 = ((x237%x238)>>(x239>x240));

    if (t42 != 9613985U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 559LLU;
	volatile int32_t t43 = 203967563;

    t43 = ((x245%x246)>>(x247>x248));

    if (t43 != 22) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x249 = 61250U;
	int16_t x250 = -1;
	int8_t x251 = INT8_MIN;
	volatile uint32_t t44 = 102276U;

    t44 = ((x249%x250)>>(x251>x252));

    if (t44 != 61250U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	int8_t x255 = 1;
	static int32_t x256 = INT32_MIN;
	int64_t t45 = -53630783404LL;

    t45 = ((x253%x254)>>(x255>x256));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x257 = 0;
	uint32_t x258 = 15129862U;
	int64_t x259 = INT64_MIN;
	uint64_t x260 = 11233509186664332LLU;
	static uint32_t t46 = 6295005U;

    t46 = ((x257%x258)>>(x259>x260));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x261 = 0;
	volatile int16_t x262 = INT16_MIN;
	int64_t x263 = -3652LL;
	static int8_t x264 = -1;
	volatile int32_t t47 = 19;

    t47 = ((x261%x262)>>(x263>x264));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x281 = INT8_MAX;
	int64_t x282 = INT64_MIN;
	static int16_t x283 = INT16_MAX;
	volatile uint16_t x284 = 1U;
	volatile int64_t t48 = 174527LL;

    t48 = ((x281%x282)>>(x283>x284));

    if (t48 != 63LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x285 = UINT64_MAX;
	static uint64_t x286 = 3212LLU;
	uint16_t x287 = 25983U;
	static int64_t x288 = -4882449856142048LL;
	volatile uint64_t t49 = 14183391655870LLU;

    t49 = ((x285%x286)>>(x287>x288));

    if (t49 != 73LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x293 = 0U;
	static int64_t x294 = 27046462142136006LL;
	static uint64_t x295 = 34LLU;
	volatile int64_t x296 = 20573LL;
	volatile int64_t t50 = -13240293506LL;

    t50 = ((x293%x294)>>(x295>x296));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x297 = -686;
	static uint32_t x298 = 3U;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;

    t51 = ((x297%x298)>>(x299>x300));

    if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x311 = -1LL;
	static int32_t x312 = -8;
	volatile int64_t t52 = -1011358040LL;

    t52 = ((x309%x310)>>(x311>x312));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x314 = -1;
	volatile uint16_t x315 = 16640U;
	int64_t x316 = INT64_MIN;
	int32_t t53 = 116;

    t53 = ((x313%x314)>>(x315>x316));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x317 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	static volatile uint32_t t54 = 6675U;

    t54 = ((x317%x318)>>(x319>x320));

    if (t54 != 842U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x325 = INT64_MIN;
	volatile int32_t x326 = -1;
	int16_t x327 = 774;
	int64_t x328 = INT64_MIN;
	static int64_t t55 = 499932513958LL;

    t55 = ((x325%x326)>>(x327>x328));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x329 = 1;
	int64_t x331 = INT64_MAX;
	uint64_t x332 = 2476029LLU;
	int64_t t56 = -231LL;

    t56 = ((x329%x330)>>(x331>x332));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x337 = -1;
	uint64_t x338 = 3147656LLU;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t57 = 7605358551404995LLU;

    t57 = ((x337%x338)>>(x339>x340));

    if (t57 != 900571LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x346 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	uint32_t x348 = UINT32_MAX;
	int64_t t58 = -103616LL;

    t58 = ((x345%x346)>>(x347>x348));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x349 = 179114U;
	static int32_t x350 = 5288;
	int64_t x351 = -1LL;

    t59 = ((x349%x350)>>(x351>x352));

    if (t59 != 4610U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x357 = 0;
	uint32_t x358 = UINT32_MAX;
	uint32_t x359 = 5496596U;
	volatile int32_t x360 = -1;
	static volatile uint32_t t60 = 125513595U;

    t60 = ((x357%x358)>>(x359>x360));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x361 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t61 = 810377664U;

    t61 = ((x361%x362)>>(x363>x364));

    if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x365 = -5;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = INT32_MAX;
	volatile uint32_t t62 = 1080122U;

    t62 = ((x365%x366)>>(x367>x368));

    if (t62 != 2147483645U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x369 = 133098890U;
	uint8_t x370 = 10U;
	uint16_t x371 = 1U;
	volatile int16_t x372 = INT16_MIN;
	volatile uint32_t t63 = 994911491U;

    t63 = ((x369%x370)>>(x371>x372));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x374 = UINT16_MAX;
	volatile int16_t x375 = INT16_MIN;
	int8_t x376 = 0;

    t64 = ((x373%x374)>>(x375>x376));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x377 = 14;
	int32_t x378 = 79873388;
	int32_t x379 = 5549;
	static int32_t x380 = -1;
	int32_t t65 = 6328;

    t65 = ((x377%x378)>>(x379>x380));

    if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x381 = 14LL;
	uint16_t x382 = 6U;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = -1LL;
	static volatile int64_t t66 = 254513076388LL;

    t66 = ((x381%x382)>>(x383>x384));

    if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x385 = -16;
	volatile int16_t x386 = -1;
	static int64_t x387 = -1LL;
	int16_t x388 = INT16_MIN;
	int32_t t67 = -1684;

    t67 = ((x385%x386)>>(x387>x388));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x389 = INT16_MIN;
	uint32_t x390 = UINT32_MAX;
	volatile int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	static volatile uint32_t t68 = 13812U;

    t68 = ((x389%x390)>>(x391>x392));

    if (t68 != 4294934528U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x393 = -1LL;
	int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;

    t69 = ((x393%x394)>>(x395>x396));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x401 = INT16_MIN;
	volatile int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 180U;
	int32_t t70 = -162276454;

    t70 = ((x401%x402)>>(x403>x404));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x408 = -1;
	volatile uint32_t t71 = 25603U;

    t71 = ((x405%x406)>>(x407>x408));

    if (t71 != 4294967168U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x409 = 48;
	uint16_t x411 = 15U;
	int16_t x412 = -1;
	int64_t t72 = 0LL;

    t72 = ((x409%x410)>>(x411>x412));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x414 = -3;
	int16_t x415 = -1;
	int8_t x416 = 1;

    t73 = ((x413%x414)>>(x415>x416));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x421 = UINT64_MAX;
	static uint64_t x422 = UINT64_MAX;
	static int32_t x424 = INT32_MIN;

    t74 = ((x421%x422)>>(x423>x424));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x429 = 4U;
	static int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MAX;
	uint64_t t75 = 1423466757631480LLU;

    t75 = ((x429%x430)>>(x431>x432));

    if (t75 != 4LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x433 = 41;
	uint64_t x434 = UINT64_MAX;
	volatile int16_t x435 = INT16_MAX;
	int32_t x436 = -6112958;
	volatile uint64_t t76 = 3927702364LLU;

    t76 = ((x433%x434)>>(x435>x436));

    if (t76 != 20LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x438 = 30017LL;
	int64_t x439 = INT64_MIN;
	uint32_t x440 = 49U;
	volatile int64_t t77 = -15074208LL;

    t77 = ((x437%x438)>>(x439>x440));

    if (t77 != 6117LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x447 = -3313;
	int16_t x448 = -1;
	int64_t t78 = 835LL;

    t78 = ((x445%x446)>>(x447>x448));

    if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x450 = -5LL;
	static volatile uint16_t x451 = 0U;
	static volatile int32_t x452 = -102;
	volatile int64_t t79 = 3214441LL;

    t79 = ((x449%x450)>>(x451>x452));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x454 = 4508040229608846LLU;
	static volatile int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;
	volatile uint64_t t80 = 26203517668306LLU;

    t80 = ((x453%x454)>>(x455>x456));

    if (t80 != 2175747189881313LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x457 = 119;
	volatile int32_t x458 = INT32_MIN;
	static uint64_t x459 = 383658952321423673LLU;
	int32_t t81 = -1175582;

    t81 = ((x457%x458)>>(x459>x460));

    if (t81 != 59) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x461 = -1;
	volatile uint32_t x462 = UINT32_MAX;
	uint8_t x463 = UINT8_MAX;
	static int16_t x464 = 1;
	volatile uint32_t t82 = 106367U;

    t82 = ((x461%x462)>>(x463>x464));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x465 = 657731514LLU;
	static volatile int8_t x467 = -1;
	volatile uint64_t x468 = 207654340LLU;
	uint64_t t83 = 528745377262LLU;

    t83 = ((x465%x466)>>(x467>x468));

    if (t83 != 16145LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x477 = 56697821LLU;
	static int64_t x478 = 4974532861445599LL;
	int64_t x479 = INT64_MIN;
	int16_t x480 = 8752;
	volatile uint64_t t84 = 794506847LLU;

    t84 = ((x477%x478)>>(x479>x480));

    if (t84 != 56697821LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x481 = 316061543LLU;
	int8_t x482 = INT8_MIN;
	volatile uint32_t x483 = 2676U;
	volatile int64_t x484 = INT64_MIN;
	static uint64_t t85 = 8556LLU;

    t85 = ((x481%x482)>>(x483>x484));

    if (t85 != 158030771LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x485 = 29U;
	uint8_t x486 = 80U;
	int8_t x487 = INT8_MIN;
	static int8_t x488 = INT8_MAX;
	int32_t t86 = -8380;

    t86 = ((x485%x486)>>(x487>x488));

    if (t86 != 29) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x498 = INT8_MIN;
	volatile int16_t x499 = -28;
	int8_t x500 = INT8_MIN;
	static int32_t t87 = 36271;

    t87 = ((x497%x498)>>(x499>x500));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x501 = 628671120730163LLU;
	static volatile int64_t x502 = 4354850364478649571LL;
	uint64_t x504 = 252336012556LLU;
	volatile uint64_t t88 = 272932745822179265LLU;

    t88 = ((x501%x502)>>(x503>x504));

    if (t88 != 628671120730163LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x505 = -1LL;
	uint16_t x506 = 1U;
	int64_t t89 = 818200LL;

    t89 = ((x505%x506)>>(x507>x508));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x509 = 3429465;
	int64_t x510 = 637LL;
	static volatile int16_t x511 = INT16_MAX;
	volatile int8_t x512 = INT8_MIN;

    t90 = ((x509%x510)>>(x511>x512));

    if (t90 != 247LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x515 = INT32_MIN;
	int64_t x516 = INT64_MAX;

    t91 = ((x513%x514)>>(x515>x516));

    if (t91 != 25280U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x521 = INT32_MAX;
	volatile int16_t x522 = -1;
	int64_t x523 = -1LL;
	volatile uint64_t x524 = 5862LLU;
	static int32_t t92 = -1;

    t92 = ((x521%x522)>>(x523>x524));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x526 = 191973U;
	static int32_t x527 = INT32_MIN;
	volatile int16_t x528 = -1;
	volatile uint32_t t93 = 2823U;

    t93 = ((x525%x526)>>(x527>x528));

    if (t93 != 73670U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x529 = INT16_MIN;
	int64_t x530 = -1LL;
	uint8_t x531 = 4U;
	volatile uint16_t x532 = UINT16_MAX;
	volatile int64_t t94 = 17LL;

    t94 = ((x529%x530)>>(x531>x532));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x533 = -1;
	uint32_t x534 = 826U;
	int64_t x536 = 840174164LL;

    t95 = ((x533%x534)>>(x535>x536));

    if (t95 != 227U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x537 = 333035441U;
	volatile int8_t x539 = INT8_MIN;
	int8_t x540 = -1;
	static volatile uint32_t t96 = 3928329U;

    t96 = ((x537%x538)>>(x539>x540));

    if (t96 != 333035441U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x541 = INT64_MIN;
	int64_t x542 = INT64_MIN;
	uint16_t x543 = UINT16_MAX;
	static volatile int32_t x544 = -1;
	volatile int64_t t97 = 168LL;

    t97 = ((x541%x542)>>(x543>x544));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x547 = -5633;
	int16_t x548 = INT16_MIN;
	int64_t t98 = -51129352221551774LL;

    t98 = ((x545%x546)>>(x547>x548));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x551 = -1LL;
	uint32_t x552 = 10244U;
	int32_t t99 = -1017900;

    t99 = ((x549%x550)>>(x551>x552));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x553 = UINT32_MAX;
	int32_t x554 = INT32_MIN;
	int16_t x555 = INT16_MIN;
	uint32_t t100 = 1902496U;

    t100 = ((x553%x554)>>(x555>x556));

    if (t100 != 2147483647U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x557 = 48248LLU;
	int8_t x558 = INT8_MAX;
	uint32_t x559 = 71319049U;
	uint16_t x560 = UINT16_MAX;
	volatile uint64_t t101 = 866918956LLU;

    t101 = ((x557%x558)>>(x559>x560));

    if (t101 != 57LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x561 = INT8_MIN;
	volatile uint64_t x562 = UINT64_MAX;
	int32_t x563 = -49606596;
	uint64_t t102 = 4384154356941LLU;

    t102 = ((x561%x562)>>(x563>x564));

    if (t102 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x570 = UINT32_MAX;
	int32_t x571 = 543996006;
	static int64_t x572 = -1LL;
	static volatile uint32_t t103 = 3107U;

    t103 = ((x569%x570)>>(x571>x572));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x573 = 27310U;
	static int32_t x574 = -1;
	static volatile int64_t x575 = INT64_MAX;
	static int32_t x576 = INT32_MAX;
	volatile uint32_t t104 = 83674549U;

    t104 = ((x573%x574)>>(x575>x576));

    if (t104 != 13655U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x577 = UINT8_MAX;
	uint8_t x579 = UINT8_MAX;
	uint8_t x580 = 28U;
	volatile int32_t t105 = 7973523;

    t105 = ((x577%x578)>>(x579>x580));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x582 = INT64_MAX;
	int32_t x583 = 19550;
	static int32_t x584 = 7152520;
	static int64_t t106 = 4216044LL;

    t106 = ((x581%x582)>>(x583>x584));

    if (t106 != 255LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x593 = INT32_MAX;
	uint32_t x594 = 54874839U;
	int16_t x595 = -7;
	int8_t x596 = INT8_MIN;

    t107 = ((x593%x594)>>(x595>x596));

    if (t107 != 3682463U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x598 = -76;
	static int8_t x599 = INT8_MAX;
	static uint64_t x600 = UINT64_MAX;
	int32_t t108 = 63;

    t108 = ((x597%x598)>>(x599>x600));

    if (t108 != 27) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x601 = 137307842635039LLU;
	uint32_t x602 = UINT32_MAX;
	int32_t x603 = INT32_MAX;
	int16_t x604 = -1;
	static uint64_t t109 = 130LLU;

    t109 = ((x601%x602)>>(x603>x604));

    if (t109 != 1016590592LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x610 = -6299034754463483LL;
	volatile int32_t x611 = -359720;
	static uint64_t x612 = 463LLU;
	volatile int64_t t110 = 18032LL;

    t110 = ((x609%x610)>>(x611>x612));

    if (t110 != 265657797LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x620 = UINT16_MAX;
	static volatile int32_t t111 = -16;

    t111 = ((x617%x618)>>(x619>x620));

    if (t111 != 4) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x621 = 250U;
	uint32_t x622 = UINT32_MAX;
	uint32_t x623 = 3721U;
	int8_t x624 = -1;
	volatile uint32_t t112 = 112070691U;

    t112 = ((x621%x622)>>(x623>x624));

    if (t112 != 250U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x625 = 21;
	static volatile int64_t x626 = -1LL;
	volatile int64_t x627 = INT64_MIN;
	int64_t t113 = 4024131792597LL;

    t113 = ((x625%x626)>>(x627>x628));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x629 = UINT32_MAX;
	int8_t x630 = 7;
	static int8_t x631 = -1;
	uint64_t x632 = 19081031362093666LLU;
	volatile uint32_t t114 = 285167U;

    t114 = ((x629%x630)>>(x631>x632));

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x637 = UINT64_MAX;
	uint32_t x638 = UINT32_MAX;
	uint8_t x639 = 1U;
	static volatile uint64_t x640 = UINT64_MAX;
	uint64_t t115 = 3LLU;

    t115 = ((x637%x638)>>(x639>x640));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x641 = 14251;
	int8_t x642 = -1;
	int16_t x643 = INT16_MAX;
	int16_t x644 = INT16_MAX;

    t116 = ((x641%x642)>>(x643>x644));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x649 = 351;
	uint8_t x650 = 4U;
	uint32_t x651 = UINT32_MAX;
	uint32_t x652 = 80U;
	volatile int32_t t117 = -5;

    t117 = ((x649%x650)>>(x651>x652));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x661 = INT8_MIN;
	uint32_t x662 = 87786U;
	int32_t x663 = -140481416;
	int32_t x664 = -1;
	uint32_t t118 = 63U;

    t118 = ((x661%x662)>>(x663>x664));

    if (t118 != 37118U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x669 = INT32_MAX;
	int16_t x670 = 4;
	int64_t x671 = INT64_MIN;
	int8_t x672 = 45;

    t119 = ((x669%x670)>>(x671>x672));

    if (t119 != 3) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x674 = INT32_MIN;
	int32_t x675 = -1;
	int32_t t120 = 1440;

    t120 = ((x673%x674)>>(x675>x676));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x677 = 111490605LLU;
	uint64_t x678 = 29920051836732LLU;
	volatile uint64_t t121 = 268LLU;

    t121 = ((x677%x678)>>(x679>x680));

    if (t121 != 111490605LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x681 = 199LLU;
	int8_t x682 = INT8_MAX;
	uint8_t x683 = 9U;
	int8_t x684 = 0;
	volatile uint64_t t122 = 407LLU;

    t122 = ((x681%x682)>>(x683>x684));

    if (t122 != 36LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x685 = 310;
	volatile int64_t x687 = -1LL;
	int16_t x688 = INT16_MIN;

    t123 = ((x685%x686)>>(x687>x688));

    if (t123 != 27) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x689 = 381943701854619241LL;
	static int8_t x692 = -1;
	volatile int64_t t124 = -144882LL;

    t124 = ((x689%x690)>>(x691>x692));

    if (t124 != 2345LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x705 = INT64_MAX;
	uint64_t x706 = 747081631028231418LLU;
	int64_t x707 = -1LL;
	static uint16_t x708 = 7U;
	static uint64_t t125 = 4860386810631569274LLU;

    t125 = ((x705%x706)>>(x707>x708));

    if (t125 != 258392464515998791LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x709 = INT16_MAX;
	uint64_t x711 = UINT64_MAX;
	uint16_t x712 = 6U;
	int32_t t126 = -10;

    t126 = ((x709%x710)>>(x711>x712));

    if (t126 != 73) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x713 = INT16_MAX;
	static int64_t x714 = -100LL;
	int32_t x715 = 37646;
	volatile uint32_t x716 = UINT32_MAX;
	volatile int64_t t127 = 62225085412780LL;

    t127 = ((x713%x714)>>(x715>x716));

    if (t127 != 67LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x718 = 2;
	volatile int64_t x720 = -200145246260282LL;

    t128 = ((x717%x718)>>(x719>x720));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x721 = 28U;
	uint8_t x722 = 6U;
	int32_t x723 = -54029;
	static int32_t x724 = -1;
	int32_t t129 = 551;

    t129 = ((x721%x722)>>(x723>x724));

    if (t129 != 4) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x734 = -42;
	uint64_t x736 = 8LLU;
	volatile int32_t t130 = -106827;

    t130 = ((x733%x734)>>(x735>x736));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x737 = 7030957150695LL;
	volatile uint16_t x739 = 18U;
	uint64_t t131 = 24563753LLU;

    t131 = ((x737%x738)>>(x739>x740));

    if (t131 != 3515478575347LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x743 = INT64_MIN;
	int16_t x744 = INT16_MIN;
	static int64_t t132 = -140274556693241026LL;

    t132 = ((x741%x742)>>(x743>x744));

    if (t132 != 127LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x745 = INT32_MIN;
	volatile uint32_t x746 = 10481364U;
	int64_t x747 = INT64_MIN;
	uint32_t x748 = 444U;

    t133 = ((x745%x746)>>(x747>x748));

    if (t133 != 9285392U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x749 = 89578526LL;
	volatile uint32_t x750 = UINT32_MAX;
	uint32_t x751 = 3198159U;
	uint32_t x752 = 1692151U;
	static int64_t t134 = 1408LL;

    t134 = ((x749%x750)>>(x751>x752));

    if (t134 != 44789263LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x754 = 9495485255635924LL;
	int64_t x755 = 1LL;
	int32_t x756 = 1020;
	uint64_t t135 = 426521LLU;

    t135 = ((x753%x754)>>(x755>x756));

    if (t135 != 8468351LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x757 = 9246877U;
	static volatile int8_t x758 = INT8_MIN;
	uint64_t x759 = UINT64_MAX;
	int16_t x760 = INT16_MAX;
	volatile uint32_t t136 = 1919814642U;

    t136 = ((x757%x758)>>(x759>x760));

    if (t136 != 4623438U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x762 = INT8_MAX;
	int32_t x763 = INT32_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t137 = -2555;

    t137 = ((x761%x762)>>(x763>x764));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x765 = INT16_MIN;
	static uint64_t x766 = 12662513154LLU;
	int32_t x767 = INT32_MIN;
	static int32_t x768 = INT32_MAX;

    t138 = ((x765%x766)>>(x767>x768));

    if (t138 != 1292606756LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x769 = -1;
	uint32_t x772 = UINT32_MAX;
	volatile int32_t t139 = -5;

    t139 = ((x769%x770)>>(x771>x772));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x777 = UINT8_MAX;
	int8_t x779 = -1;
	int32_t t140 = -1;

    t140 = ((x777%x778)>>(x779>x780));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x781 = INT16_MIN;
	uint64_t x783 = UINT64_MAX;
	int16_t x784 = INT16_MIN;
	static int32_t t141 = 2277121;

    t141 = ((x781%x782)>>(x783>x784));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x786 = INT16_MIN;
	volatile uint64_t x787 = 0LLU;
	static int8_t x788 = INT8_MIN;

    t142 = ((x785%x786)>>(x787>x788));

    if (t142 != 106LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x789 = 124U;
	volatile uint64_t x790 = 58928664065416404LLU;
	volatile int32_t x791 = INT32_MIN;
	uint8_t x792 = UINT8_MAX;
	static volatile uint64_t t143 = 121839LLU;

    t143 = ((x789%x790)>>(x791>x792));

    if (t143 != 124LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x797 = 3U;
	uint32_t x798 = 803U;
	int64_t x799 = -1LL;
	static int16_t x800 = -8;

    t144 = ((x797%x798)>>(x799>x800));

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x801 = INT64_MIN;
	int8_t x803 = INT8_MAX;
	int8_t x804 = -4;
	static int64_t t145 = 16339LL;

    t145 = ((x801%x802)>>(x803>x804));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x809 = 120U;
	uint32_t x810 = UINT32_MAX;
	static uint8_t x811 = 1U;
	uint8_t x812 = 96U;
	volatile uint32_t t146 = 29U;

    t146 = ((x809%x810)>>(x811>x812));

    if (t146 != 120U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x813 = -1;
	int32_t x814 = -1;
	int8_t x815 = 9;
	volatile int16_t x816 = -186;
	volatile int32_t t147 = 28146;

    t147 = ((x813%x814)>>(x815>x816));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x817 = UINT8_MAX;
	int8_t x819 = -1;
	int16_t x820 = INT16_MAX;
	int32_t t148 = -2302;

    t148 = ((x817%x818)>>(x819>x820));

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x829 = 124517428LL;
	static int32_t x830 = INT32_MAX;
	int8_t x831 = INT8_MIN;
	volatile int64_t t149 = -10615LL;

    t149 = ((x829%x830)>>(x831>x832));

    if (t149 != 124517428LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x837 = 122U;
	volatile uint64_t x838 = 92166LLU;
	static volatile uint64_t x839 = 268837LLU;
	int64_t x840 = INT64_MAX;
	volatile uint64_t t150 = 478616766169019383LLU;

    t150 = ((x837%x838)>>(x839>x840));

    if (t150 != 122LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x841 = INT8_MAX;
	static int8_t x842 = -1;
	volatile int16_t x843 = INT16_MIN;
	volatile uint32_t x844 = UINT32_MAX;
	volatile int32_t t151 = -1968931;

    t151 = ((x841%x842)>>(x843>x844));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x846 = INT8_MIN;
	volatile int16_t x847 = 397;
	volatile int64_t x848 = INT64_MAX;
	int64_t t152 = -276944021136243689LL;

    t152 = ((x845%x846)>>(x847>x848));

    if (t152 != 127LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x850 = UINT8_MAX;
	int8_t x852 = -4;

    t153 = ((x849%x850)>>(x851>x852));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x853 = 50;
	int32_t x854 = INT32_MIN;
	volatile int32_t x855 = -1;
	int64_t x856 = INT64_MIN;
	int32_t t154 = 57;

    t154 = ((x853%x854)>>(x855>x856));

    if (t154 != 25) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x857 = INT8_MIN;
	int64_t x858 = -1LL;
	int32_t x860 = INT32_MIN;
	static volatile int64_t t155 = -88446164LL;

    t155 = ((x857%x858)>>(x859>x860));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x866 = 4120;
	uint32_t x867 = UINT32_MAX;
	int32_t x868 = 103676;
	volatile int32_t t156 = -595359088;

    t156 = ((x865%x866)>>(x867>x868));

    if (t156 != 904) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x873 = 23299894U;
	volatile int16_t x874 = -2;
	int16_t x875 = INT16_MIN;
	int16_t x876 = INT16_MIN;
	uint32_t t157 = 3667253U;

    t157 = ((x873%x874)>>(x875>x876));

    if (t157 != 23299894U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x877 = 10456U;
	int8_t x878 = INT8_MAX;
	static uint32_t x879 = 47833U;
	uint32_t x880 = UINT32_MAX;

    t158 = ((x877%x878)>>(x879>x880));

    if (t158 != 42U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x885 = 2632370204LLU;
	static int64_t x886 = INT64_MAX;
	static int16_t x887 = INT16_MAX;
	uint8_t x888 = 74U;

    t159 = ((x885%x886)>>(x887>x888));

    if (t159 != 1316185102LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x889 = 8017145777136LLU;
	uint8_t x891 = 110U;
	volatile uint16_t x892 = 455U;
	volatile uint64_t t160 = 165480903898342943LLU;

    t160 = ((x889%x890)>>(x891>x892));

    if (t160 != 63066LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x901 = 2003U;
	int64_t x902 = INT64_MIN;
	int64_t t161 = -228341977354584936LL;

    t161 = ((x901%x902)>>(x903>x904));

    if (t161 != 2003LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x906 = -1;
	uint16_t x908 = 207U;

    t162 = ((x905%x906)>>(x907>x908));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x909 = 17250656LLU;
	int32_t x911 = INT32_MIN;
	volatile uint32_t x912 = 15120691U;
	static volatile uint64_t t163 = 1198LLU;

    t163 = ((x909%x910)>>(x911>x912));

    if (t163 != 8625328LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x920 = -1;
	uint32_t t164 = 856741U;

    t164 = ((x917%x918)>>(x919>x920));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x921 = INT32_MIN;
	static int64_t x922 = -1LL;
	int8_t x923 = -1;
	uint32_t x924 = 10U;
	int64_t t165 = -55208274188778538LL;

    t165 = ((x921%x922)>>(x923>x924));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x925 = 2295655441116LL;
	int8_t x926 = -9;
	int8_t x928 = INT8_MAX;
	int64_t t166 = 55207LL;

    t166 = ((x925%x926)>>(x927>x928));

    if (t166 != 3LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x929 = -1;
	static int64_t x930 = -1LL;
	int8_t x931 = INT8_MAX;
	int32_t x932 = INT32_MAX;
	volatile int64_t t167 = -74224436310LL;

    t167 = ((x929%x930)>>(x931>x932));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x934 = INT8_MIN;
	uint8_t x935 = 20U;
	int16_t x936 = INT16_MIN;
	volatile int32_t t168 = 54524941;

    t168 = ((x933%x934)>>(x935>x936));

    if (t168 != 63) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x937 = 1893LLU;
	static int32_t x938 = INT32_MIN;
	int64_t x939 = INT64_MIN;
	int32_t x940 = INT32_MIN;
	volatile uint64_t t169 = 1LLU;

    t169 = ((x937%x938)>>(x939>x940));

    if (t169 != 1893LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x941 = INT8_MAX;
	int32_t x942 = -18290;
	volatile uint64_t x943 = 962462193569LLU;
	volatile int64_t x944 = INT64_MIN;
	volatile int32_t t170 = -401634;

    t170 = ((x941%x942)>>(x943>x944));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x953 = 15U;
	volatile int8_t x954 = -1;
	uint32_t x955 = 20U;
	static int64_t x956 = INT64_MIN;
	int32_t t171 = -1;

    t171 = ((x953%x954)>>(x955>x956));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x965 = INT32_MIN;
	static int8_t x966 = -1;
	int16_t x968 = -435;
	volatile int32_t t172 = -1089974;

    t172 = ((x965%x966)>>(x967>x968));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x970 = UINT32_MAX;
	static int16_t x971 = 0;
	uint8_t x972 = UINT8_MAX;
	uint32_t t173 = 11U;

    t173 = ((x969%x970)>>(x971>x972));

    if (t173 != 65535U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x973 = 32760U;
	volatile uint8_t x974 = 115U;
	int32_t x975 = -169658;
	uint8_t x976 = 62U;
	volatile int32_t t174 = 21869;

    t174 = ((x973%x974)>>(x975>x976));

    if (t174 != 100) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x977 = 20U;
	uint64_t x978 = 2LLU;
	int32_t x979 = -1;
	uint64_t x980 = 2LLU;

    t175 = ((x977%x978)>>(x979>x980));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x981 = 8U;
	int16_t x982 = 1367;
	static int64_t x984 = -42892363LL;

    t176 = ((x981%x982)>>(x983>x984));

    if (t176 != 4) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x985 = INT32_MAX;
	static int64_t x986 = -1LL;
	uint32_t x988 = 39254104U;

    t177 = ((x985%x986)>>(x987>x988));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x989 = -1;
	uint8_t x990 = 1U;
	int32_t x991 = INT32_MIN;
	int16_t x992 = 3643;
	int32_t t178 = 137171012;

    t178 = ((x989%x990)>>(x991>x992));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x993 = 4U;
	uint16_t x994 = 12283U;
	uint8_t x995 = UINT8_MAX;
	int64_t x996 = INT64_MAX;
	volatile int32_t t179 = 15153812;

    t179 = ((x993%x994)>>(x995>x996));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x999 = 12188LLU;
	int32_t x1000 = -1;
	uint32_t t180 = 22U;

    t180 = ((x997%x998)>>(x999>x1000));

    if (t180 != 2U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x1005 = UINT64_MAX;
	int8_t x1006 = 1;
	static uint16_t x1007 = 4633U;
	static int64_t x1008 = INT64_MAX;
	volatile uint64_t t181 = 2930LLU;

    t181 = ((x1005%x1006)>>(x1007>x1008));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1009 = 46;
	uint16_t x1010 = 231U;
	int64_t x1011 = INT64_MAX;
	int64_t x1012 = INT64_MIN;
	static int32_t t182 = 1685;

    t182 = ((x1009%x1010)>>(x1011>x1012));

    if (t182 != 23) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1015 = UINT16_MAX;
	volatile int16_t x1016 = -1578;

    t183 = ((x1013%x1014)>>(x1015>x1016));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1021 = -38;
	volatile uint64_t x1023 = UINT64_MAX;
	int32_t t184 = 3;

    t184 = ((x1021%x1022)>>(x1023>x1024));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1025 = INT8_MAX;
	int16_t x1026 = 9233;
	int8_t x1027 = -1;
	int8_t x1028 = 7;
	volatile int32_t t185 = 955626;

    t185 = ((x1025%x1026)>>(x1027>x1028));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1030 = INT8_MIN;
	uint32_t x1031 = 2371U;
	static volatile uint64_t x1032 = 126LLU;
	static volatile int64_t t186 = 51LL;

    t186 = ((x1029%x1030)>>(x1031>x1032));

    if (t186 != 63LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1034 = INT32_MIN;
	uint32_t x1035 = 550700214U;
	int8_t x1036 = -1;
	int32_t t187 = INT32_MAX;

    t187 = ((x1033%x1034)>>(x1035>x1036));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x1038 = UINT8_MAX;
	int32_t x1040 = -1;

    t188 = ((x1037%x1038)>>(x1039>x1040));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1041 = INT8_MIN;
	uint16_t x1042 = 4U;
	uint8_t x1043 = 2U;
	static int16_t x1044 = 759;

    t189 = ((x1041%x1042)>>(x1043>x1044));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1045 = 97;
	volatile int16_t x1046 = INT16_MIN;
	volatile uint32_t x1047 = 1311329999U;
	int32_t t190 = 3991991;

    t190 = ((x1045%x1046)>>(x1047>x1048));

    if (t190 != 48) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x1049 = 717U;
	uint64_t x1050 = 1809999821LLU;
	int8_t x1051 = -1;
	uint64_t t191 = 5341LLU;

    t191 = ((x1049%x1050)>>(x1051>x1052));

    if (t191 != 717LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1054 = INT16_MIN;
	uint64_t x1055 = 2713LLU;
	static volatile uint64_t x1056 = UINT64_MAX;
	volatile uint64_t t192 = 906299856998996405LLU;

    t192 = ((x1053%x1054)>>(x1055>x1056));

    if (t192 != 15462674LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1062 = 1LLU;
	uint64_t x1064 = 1LLU;
	uint64_t t193 = 427690416LLU;

    t193 = ((x1061%x1062)>>(x1063>x1064));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1065 = 30956102798946898LLU;
	int64_t x1066 = INT64_MIN;
	int32_t x1067 = INT32_MIN;
	uint64_t t194 = 694975798276630LLU;

    t194 = ((x1065%x1066)>>(x1067>x1068));

    if (t194 != 30956102798946898LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1077 = 8137LL;
	int16_t x1079 = INT16_MAX;
	int8_t x1080 = -1;
	volatile int64_t t195 = 12231199489418LL;

    t195 = ((x1077%x1078)>>(x1079>x1080));

    if (t195 != 8LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1081 = 93U;
	int32_t x1082 = INT32_MIN;
	uint64_t x1083 = 29LLU;
	static int16_t x1084 = 88;
	volatile int32_t t196 = 1;

    t196 = ((x1081%x1082)>>(x1083>x1084));

    if (t196 != 93) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1085 = 2759U;
	uint8_t x1086 = 1U;
	int16_t x1087 = INT16_MAX;
	volatile int32_t t197 = 3300;

    t197 = ((x1085%x1086)>>(x1087>x1088));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1105 = INT32_MIN;
	int16_t x1106 = -1;
	uint16_t x1107 = 12U;
	int32_t x1108 = -570;
	int32_t t198 = -4;

    t198 = ((x1105%x1106)>>(x1107>x1108));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1109 = INT32_MAX;
	int8_t x1110 = INT8_MIN;
	int32_t x1112 = INT32_MIN;

    t199 = ((x1109%x1110)>>(x1111>x1112));

    if (t199 != 63) { NG(); } else { ; }
	
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

