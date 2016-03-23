
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

int64_t x1 = 0LL;
volatile int8_t x23 = INT8_MIN;
uint8_t x26 = 32U;
volatile int16_t x32 = -1;
int8_t x53 = INT8_MAX;
volatile uint32_t t7 = 3156U;
static volatile uint32_t t9 = 905U;
int8_t x69 = -1;
uint32_t x70 = 129005U;
uint16_t x71 = UINT16_MAX;
static volatile uint32_t t10 = 15U;
volatile uint64_t x75 = 197870023LLU;
int32_t x76 = INT32_MIN;
static volatile int16_t x104 = INT16_MIN;
static volatile int32_t t15 = 2336;
static volatile int16_t x111 = 33;
static uint64_t t16 = 470LLU;
uint64_t x119 = 0LLU;
uint16_t x136 = UINT16_MAX;
volatile int32_t t20 = -1;
int32_t x141 = -7183768;
uint32_t x142 = 14118U;
volatile uint8_t x143 = 0U;
volatile uint32_t t21 = 0U;
int16_t x157 = -1;
volatile int64_t x158 = 44671625369156LL;
int8_t x159 = INT8_MAX;
int32_t x174 = 18664;
volatile int64_t x178 = -1LL;
int64_t x190 = 2LL;
volatile int32_t t27 = -230328;
volatile uint64_t t28 = 2239789947LLU;
static int16_t x237 = -3;
int32_t x239 = -3912336;
static int32_t x240 = INT32_MAX;
static uint64_t t31 = 619652LLU;
static int32_t x243 = -1;
uint32_t x249 = 215523U;
uint32_t x251 = 8U;
static volatile int8_t x252 = -30;
uint32_t x259 = 530U;
volatile uint64_t t35 = 104LLU;
static int32_t x272 = INT32_MAX;
volatile int32_t t38 = -26883442;
volatile int16_t x292 = 2526;
static volatile uint64_t t39 = 22549LLU;
int32_t x301 = 1;
uint16_t x302 = UINT16_MAX;
uint32_t x315 = 122U;
int16_t x316 = -165;
uint8_t x321 = 6U;
static uint32_t x339 = UINT32_MAX;
uint32_t x354 = 658530U;
volatile uint32_t x362 = 13U;
static int8_t x367 = INT8_MIN;
volatile int32_t x371 = -1;
volatile int32_t t53 = -1592;
volatile int64_t x375 = INT64_MIN;
int8_t x387 = INT8_MAX;
int32_t t57 = 1802434;
uint64_t x392 = UINT64_MAX;
volatile int64_t t58 = 3LL;
static uint8_t x402 = UINT8_MAX;
int8_t x408 = INT8_MAX;
int8_t x417 = -1;
int32_t x425 = -6;
int8_t x439 = 1;
static volatile uint16_t x441 = 3U;
int32_t x445 = INT32_MAX;
uint16_t x449 = 92U;
int8_t x457 = -1;
volatile int32_t t67 = 181;
int64_t x483 = 2143942709985LL;
volatile int8_t x484 = INT8_MAX;
volatile int32_t t70 = -18401;
int8_t x491 = INT8_MIN;
int64_t x497 = 17062363765LL;
static int32_t x502 = -1;
uint64_t x517 = 2617706394923843LLU;
static volatile uint64_t t75 = 845935325673714769LLU;
uint8_t x543 = UINT8_MAX;
uint32_t x547 = 185067886U;
static int16_t x548 = INT16_MIN;
uint32_t x549 = 24569789U;
int64_t x559 = INT64_MIN;
volatile uint32_t t82 = 78498U;
int32_t x570 = -1;
uint8_t x572 = 44U;
volatile int64_t t86 = -193LL;
uint32_t x594 = 129619U;
int8_t x606 = INT8_MAX;
int16_t x613 = 8771;
static volatile int32_t t92 = 33;
int16_t x624 = INT16_MIN;
static volatile int32_t t94 = 4185054;
uint32_t x630 = 100819749U;
uint32_t t95 = 3142505U;
uint8_t x646 = 0U;
int64_t x661 = INT64_MAX;
static volatile int16_t x662 = INT16_MIN;
uint16_t x663 = 11336U;
int8_t x664 = 13;
static int64_t x695 = -758133LL;
volatile int32_t t102 = -18469;
uint64_t x701 = UINT64_MAX;
static volatile int32_t x702 = INT32_MIN;
int64_t x704 = INT64_MIN;
volatile uint64_t t104 = 1056616116LLU;
volatile uint8_t x711 = UINT8_MAX;
volatile uint64_t t106 = 424012129LLU;
int64_t x722 = -1LL;
int64_t t107 = -101551135042LL;
static volatile uint32_t t108 = 12905677U;
uint64_t x735 = UINT64_MAX;
uint16_t x745 = 6U;
volatile uint64_t t110 = 76386049475900LLU;
static int16_t x753 = -791;
volatile uint32_t t111 = 216115849U;
volatile int32_t x764 = 385220;
static int8_t x773 = 1;
int8_t x774 = -1;
static int32_t x775 = -1;
int64_t x779 = INT64_MIN;
static volatile uint16_t x794 = UINT16_MAX;
static volatile int32_t t119 = -20218933;
volatile int16_t x798 = INT16_MAX;
uint32_t x802 = UINT32_MAX;
static volatile int32_t x810 = 139;
uint8_t x812 = 1U;
uint32_t x815 = 503979779U;
static uint8_t x843 = 6U;
uint16_t x844 = 31U;
int32_t t127 = -7748289;
uint16_t x862 = 1185U;
int64_t x863 = -1LL;
volatile uint32_t x864 = UINT32_MAX;
volatile int32_t t131 = 198;
int32_t x897 = INT32_MAX;
static uint16_t x900 = UINT16_MAX;
int8_t x904 = INT8_MAX;
static volatile int8_t x913 = INT8_MIN;
int64_t x923 = INT64_MIN;
uint8_t x937 = UINT8_MAX;
static int64_t x951 = INT64_MAX;
static volatile int16_t x952 = -1;
static uint8_t x961 = UINT8_MAX;
static uint64_t x977 = UINT64_MAX;
uint64_t t141 = 190627054378LLU;
uint8_t x984 = 35U;
int32_t x987 = INT32_MIN;
static volatile uint32_t t143 = 439013U;
volatile uint64_t t145 = 58197136972295LLU;
static volatile int64_t x1026 = -1LL;
int16_t x1039 = -1;
volatile int8_t x1041 = INT8_MIN;
volatile int16_t x1042 = INT16_MAX;
static volatile int64_t t152 = -685833013715821LL;
static int64_t x1066 = -1LL;
static uint64_t x1070 = 575LLU;
int8_t x1071 = INT8_MIN;
static int32_t x1074 = INT32_MIN;
volatile int32_t x1075 = -415;
uint64_t x1091 = UINT64_MAX;
int32_t t159 = -684646;
int16_t x1096 = INT16_MAX;
uint64_t x1104 = UINT64_MAX;
volatile uint16_t x1123 = 5549U;
uint16_t x1133 = 64U;
int64_t x1143 = INT64_MIN;
int8_t x1159 = -1;
uint64_t x1165 = 453LLU;
volatile uint64_t t174 = 458981892018774LLU;
volatile int64_t t175 = -59539568035365956LL;
volatile uint64_t t176 = 74615LLU;
int32_t x1191 = INT32_MAX;
uint8_t x1202 = UINT8_MAX;
uint64_t x1205 = 1LLU;
uint64_t t179 = 117642061623830LLU;
uint8_t x1219 = 2U;
uint8_t x1226 = 0U;
uint64_t t182 = 3066308076390LLU;
int16_t x1236 = INT16_MIN;
volatile uint32_t t183 = 53218724U;
int64_t t185 = 1770992940967268LL;
uint16_t x1269 = 6147U;
static uint32_t x1271 = 379436014U;
static int64_t t188 = 4310227131791LL;
uint32_t x1285 = 638620U;
uint64_t x1297 = 1LLU;
uint64_t x1303 = 3142LLU;
int16_t x1304 = 7223;
volatile uint64_t x1314 = UINT64_MAX;
volatile uint64_t t194 = 2LLU;
int16_t x1322 = -1;
int32_t x1331 = -60864;
volatile int64_t t197 = -21210058038410214LL;
static int64_t x1344 = INT64_MAX;
int32_t x1347 = INT32_MIN;


void f0(void) {
    	volatile uint16_t x2 = 2805U;
	int64_t x3 = 5971333446106609LL;
	int8_t x4 = INT8_MAX;
	volatile int64_t t0 = -13346127894223046LL;

    t0 = ((x1+x2)>>(x3>x4));

    if (t0 != 1402LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -3;
	volatile uint32_t x6 = 40U;
	static uint8_t x7 = 7U;
	int64_t x8 = INT64_MAX;
	volatile uint32_t t1 = 3614935U;

    t1 = ((x5+x6)>>(x7>x8));

    if (t1 != 37U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1LL;
	static uint8_t x14 = UINT8_MAX;
	uint32_t x15 = 58773U;
	int32_t x16 = -1;
	int64_t t2 = -16818889388282323LL;

    t2 = ((x13+x14)>>(x15>x16));

    if (t2 != 254LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x21 = -1;
	static uint64_t x22 = UINT64_MAX;
	volatile uint8_t x24 = 1U;
	volatile uint64_t t3 = 89002LLU;

    t3 = ((x21+x22)>>(x23>x24));

    if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x25 = 6;
	uint32_t x27 = 9U;
	uint8_t x28 = 29U;
	static int32_t t4 = 3120976;

    t4 = ((x25+x26)>>(x27>x28));

    if (t4 != 38) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 29964329202766249LLU;
	int8_t x30 = INT8_MAX;
	static int32_t x31 = 8988;
	volatile uint64_t t5 = 338561835592265LLU;

    t5 = ((x29+x30)>>(x31>x32));

    if (t5 != 14982164601383188LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x54 = -1;
	int64_t x55 = -221550705LL;
	int32_t x56 = 4983943;
	int32_t t6 = 1;

    t6 = ((x53+x54)>>(x55>x56));

    if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x57 = UINT32_MAX;
	uint8_t x58 = UINT8_MAX;
	volatile uint32_t x59 = UINT32_MAX;
	int64_t x60 = 457207133LL;

    t7 = ((x57+x58)>>(x59>x60));

    if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x61 = INT32_MAX;
	int8_t x62 = -1;
	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MAX;
	static volatile int32_t t8 = -209680650;

    t8 = ((x61+x62)>>(x63>x64));

    if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = UINT32_MAX;
	static int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MAX;

    t9 = ((x65+x66)>>(x67>x68));

    if (t9 != 254U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x72 = INT8_MIN;

    t10 = ((x69+x70)>>(x71>x72));

    if (t10 != 64502U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x73 = INT8_MAX;
	uint8_t x74 = 24U;
	volatile int32_t t11 = -1324;

    t11 = ((x73+x74)>>(x75>x76));

    if (t11 != 151) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x77 = -1;
	volatile int64_t x78 = INT64_MAX;
	uint8_t x79 = UINT8_MAX;
	uint8_t x80 = UINT8_MAX;
	int64_t t12 = -5296231LL;

    t12 = ((x77+x78)>>(x79>x80));

    if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x81 = 106572931397LL;
	uint8_t x82 = 0U;
	static uint32_t x83 = 1463U;
	int16_t x84 = 6;
	static int64_t t13 = -10896158943LL;

    t13 = ((x81+x82)>>(x83>x84));

    if (t13 != 53286465698LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x97 = 15U;
	int8_t x98 = -1;
	static int16_t x99 = -1512;
	int8_t x100 = -1;
	static volatile int32_t t14 = 52141;

    t14 = ((x97+x98)>>(x99>x100));

    if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x101 = 41;
	int8_t x102 = -8;
	static uint64_t x103 = 5026LLU;

    t15 = ((x101+x102)>>(x103>x104));

    if (t15 != 33) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x109 = 1324U;
	uint64_t x110 = UINT64_MAX;
	int32_t x112 = INT32_MIN;

    t16 = ((x109+x110)>>(x111>x112));

    if (t16 != 661LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x113 = 4623U;
	static int64_t x114 = 250661341LL;
	uint64_t x115 = 1LLU;
	static volatile int32_t x116 = -6703142;
	static int64_t t17 = -27465129014LL;

    t17 = ((x113+x114)>>(x115>x116));

    if (t17 != 250665964LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x117 = 0U;
	static volatile uint16_t x118 = 20109U;
	int32_t x120 = 1295006;
	volatile int32_t t18 = -1948;

    t18 = ((x117+x118)>>(x119>x120));

    if (t18 != 20109) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x125 = INT64_MAX;
	static volatile int32_t x126 = -154;
	volatile uint16_t x127 = UINT16_MAX;
	int64_t x128 = -1LL;
	int64_t t19 = 5816LL;

    t19 = ((x125+x126)>>(x127>x128));

    if (t19 != 4611686018427387826LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x133 = 2;
	volatile uint16_t x134 = UINT16_MAX;
	volatile int16_t x135 = INT16_MAX;

    t20 = ((x133+x134)>>(x135>x136));

    if (t20 != 65537) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x144 = 93484891778881LLU;

    t21 = ((x141+x142)>>(x143>x144));

    if (t21 != 4287797646U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x160 = -6210112;
	int64_t t22 = 384300505LL;

    t22 = ((x157+x158)>>(x159>x160));

    if (t22 != 22335812684577LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x161 = INT32_MIN;
	volatile int64_t x162 = 277281821217562LL;
	int64_t x163 = -6LL;
	volatile uint16_t x164 = UINT16_MAX;
	int64_t t23 = -1LL;

    t23 = ((x161+x162)>>(x163>x164));

    if (t23 != 277279673733914LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x173 = INT8_MAX;
	int16_t x175 = 15;
	volatile int64_t x176 = -1LL;
	volatile int32_t t24 = 2285;

    t24 = ((x173+x174)>>(x175>x176));

    if (t24 != 9395) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x177 = INT16_MAX;
	int32_t x179 = -1155163;
	static uint16_t x180 = 13528U;
	int64_t t25 = -2173LL;

    t25 = ((x177+x178)>>(x179>x180));

    if (t25 != 32766LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x189 = 224;
	volatile int8_t x191 = 39;
	int16_t x192 = INT16_MAX;
	static volatile int64_t t26 = -478360976817LL;

    t26 = ((x189+x190)>>(x191>x192));

    if (t26 != 226LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x193 = 18U;
	int16_t x194 = INT16_MAX;
	int8_t x195 = -59;
	int16_t x196 = 74;

    t27 = ((x193+x194)>>(x195>x196));

    if (t27 != 32785) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MIN;
	static volatile int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MAX;

    t28 = ((x213+x214)>>(x215>x216));

    if (t28 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x217 = 4;
	static uint32_t x218 = 1390U;
	uint64_t x219 = UINT64_MAX;
	static uint16_t x220 = UINT16_MAX;
	uint32_t t29 = 190735901U;

    t29 = ((x217+x218)>>(x219>x220));

    if (t29 != 697U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x229 = 168LLU;
	int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	volatile int64_t x232 = INT64_MAX;
	volatile uint64_t t30 = 310700508372LLU;

    t30 = ((x229+x230)>>(x231>x232));

    if (t30 != 167LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x238 = UINT64_MAX;

    t31 = ((x237+x238)>>(x239>x240));

    if (t31 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x241 = INT64_MAX;
	volatile int32_t x242 = -4312866;
	int32_t x244 = -94;
	volatile int64_t t32 = 706LL;

    t32 = ((x241+x242)>>(x243>x244));

    if (t32 != 4611686018425231470LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x250 = -1;
	volatile uint32_t t33 = 1083U;

    t33 = ((x249+x250)>>(x251>x252));

    if (t33 != 215522U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x257 = INT16_MAX;
	int8_t x258 = -37;
	uint32_t x260 = 175U;
	static volatile int32_t t34 = 1;

    t34 = ((x257+x258)>>(x259>x260));

    if (t34 != 16365) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x265 = INT64_MIN;
	uint64_t x266 = 49893815774432920LLU;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = -4050;

    t35 = ((x265+x266)>>(x267>x268));

    if (t35 != 4636632926314604364LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x269 = 11644646798790LL;
	int32_t x270 = -1;
	uint8_t x271 = 27U;
	int64_t t36 = 1LL;

    t36 = ((x269+x270)>>(x271>x272));

    if (t36 != 11644646798789LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x273 = 35;
	int64_t x274 = -1LL;
	uint32_t x275 = 387U;
	static int8_t x276 = INT8_MIN;
	volatile int64_t t37 = 3701053786381227LL;

    t37 = ((x273+x274)>>(x275>x276));

    if (t37 != 34LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x281 = INT8_MAX;
	uint16_t x282 = 1220U;
	uint64_t x283 = 3119699489319386785LLU;
	static uint32_t x284 = 1858U;

    t38 = ((x281+x282)>>(x283>x284));

    if (t38 != 673) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x289 = 17108046463LLU;
	volatile int32_t x290 = INT32_MAX;
	int32_t x291 = 59;

    t39 = ((x289+x290)>>(x291>x292));

    if (t39 != 19255530110LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x293 = INT16_MIN;
	volatile uint16_t x294 = UINT16_MAX;
	static volatile int32_t x295 = INT32_MIN;
	int64_t x296 = -7559820349LL;
	int32_t t40 = -152833837;

    t40 = ((x293+x294)>>(x295>x296));

    if (t40 != 16383) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x297 = UINT16_MAX;
	int16_t x298 = -1;
	int16_t x299 = INT16_MIN;
	int8_t x300 = -58;
	int32_t t41 = 110490;

    t41 = ((x297+x298)>>(x299>x300));

    if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x303 = -4LL;
	int8_t x304 = -5;
	int32_t t42 = 187;

    t42 = ((x301+x302)>>(x303>x304));

    if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x305 = INT8_MAX;
	uint8_t x306 = 2U;
	int8_t x307 = INT8_MIN;
	static volatile int32_t x308 = -1;
	int32_t t43 = -28;

    t43 = ((x305+x306)>>(x307>x308));

    if (t43 != 129) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x313 = INT8_MAX;
	volatile int16_t x314 = -56;
	volatile int32_t t44 = -13;

    t44 = ((x313+x314)>>(x315>x316));

    if (t44 != 71) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x317 = UINT8_MAX;
	uint16_t x318 = 156U;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t45 = -20;

    t45 = ((x317+x318)>>(x319>x320));

    if (t45 != 411) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x322 = UINT64_MAX;
	uint64_t x323 = 2LLU;
	int8_t x324 = -3;
	static uint64_t t46 = 24643363692950LLU;

    t46 = ((x321+x322)>>(x323>x324));

    if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x325 = 131710907860LL;
	static volatile uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 1U;
	static uint32_t x328 = 1U;
	volatile int64_t t47 = -10843500058LL;

    t47 = ((x325+x326)>>(x327>x328));

    if (t47 != 131710973395LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x337 = 929320U;
	int16_t x338 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	uint32_t t48 = 268537U;

    t48 = ((x337+x338)>>(x339>x340));

    if (t48 != 448276U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x341 = -1LL;
	static uint16_t x342 = 6646U;
	volatile uint8_t x343 = 116U;
	static uint16_t x344 = 275U;
	int64_t t49 = 22499442LL;

    t49 = ((x341+x342)>>(x343>x344));

    if (t49 != 6645LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x353 = 1U;
	static int32_t x355 = -1;
	volatile int64_t x356 = INT64_MAX;
	volatile uint32_t t50 = 318698974U;

    t50 = ((x353+x354)>>(x355>x356));

    if (t50 != 658531U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x361 = -42;
	static int16_t x363 = 14442;
	volatile int64_t x364 = INT64_MAX;
	volatile uint32_t t51 = 252U;

    t51 = ((x361+x362)>>(x363>x364));

    if (t51 != 4294967267U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x365 = 9;
	uint64_t x366 = 3734963270906759LLU;
	static volatile int8_t x368 = -1;
	volatile uint64_t t52 = 1849LLU;

    t52 = ((x365+x366)>>(x367>x368));

    if (t52 != 3734963270906768LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x369 = UINT16_MAX;
	uint8_t x370 = 0U;
	int32_t x372 = INT32_MIN;

    t53 = ((x369+x370)>>(x371>x372));

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x373 = 546U;
	static int32_t x374 = 591;
	uint64_t x376 = 22332LLU;
	static uint32_t t54 = 97U;

    t54 = ((x373+x374)>>(x375>x376));

    if (t54 != 568U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = 7667LLU;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t55 = -16270501;

    t55 = ((x377+x378)>>(x379>x380));

    if (t55 != 510) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x381 = 39LLU;
	int8_t x382 = INT8_MIN;
	uint16_t x383 = 27806U;
	static uint32_t x384 = 6U;
	uint64_t t56 = 1591461062LLU;

    t56 = ((x381+x382)>>(x383>x384));

    if (t56 != 9223372036854775763LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x385 = -1;
	int32_t x386 = INT32_MAX;
	volatile int32_t x388 = -61;

    t57 = ((x385+x386)>>(x387>x388));

    if (t57 != 1073741823) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x389 = 1LL;
	static int8_t x390 = -1;
	uint64_t x391 = UINT64_MAX;

    t58 = ((x389+x390)>>(x391>x392));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x401 = 29205U;
	int8_t x403 = -1;
	volatile int16_t x404 = -1;
	int32_t t59 = -25;

    t59 = ((x401+x402)>>(x403>x404));

    if (t59 != 29460) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x405 = 1210;
	uint32_t x406 = 17U;
	volatile int64_t x407 = INT64_MIN;
	static uint32_t t60 = 10184U;

    t60 = ((x405+x406)>>(x407>x408));

    if (t60 != 1227U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x418 = 6U;
	volatile int32_t x419 = -1;
	int16_t x420 = -1;
	volatile int32_t t61 = -52;

    t61 = ((x417+x418)>>(x419>x420));

    if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = 17;
	static int8_t x428 = INT8_MIN;
	static volatile uint64_t t62 = 2149104262589LLU;

    t62 = ((x425+x426)>>(x427>x428));

    if (t62 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x437 = 905U;
	int8_t x438 = INT8_MAX;
	int64_t x440 = 101870LL;
	static volatile int32_t t63 = -37836614;

    t63 = ((x437+x438)>>(x439>x440));

    if (t63 != 1032) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x442 = 14U;
	uint32_t x443 = 10067U;
	volatile int16_t x444 = INT16_MIN;
	int32_t t64 = 2;

    t64 = ((x441+x442)>>(x443>x444));

    if (t64 != 17) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x446 = -1;
	int32_t x447 = INT32_MIN;
	static uint8_t x448 = 55U;
	int32_t t65 = -16157;

    t65 = ((x445+x446)>>(x447>x448));

    if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x450 = 26163835392888755LLU;
	volatile uint8_t x451 = 13U;
	static int32_t x452 = INT32_MIN;
	volatile uint64_t t66 = 833978298068309797LLU;

    t66 = ((x449+x450)>>(x451>x452));

    if (t66 != 13081917696444423LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x458 = UINT8_MAX;
	int8_t x459 = 0;
	volatile int8_t x460 = INT8_MIN;

    t67 = ((x457+x458)>>(x459>x460));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x469 = 27;
	int16_t x470 = -1;
	int64_t x471 = 276182322LL;
	uint32_t x472 = 851691655U;
	volatile int32_t t68 = 2;

    t68 = ((x469+x470)>>(x471>x472));

    if (t68 != 26) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x473 = INT8_MIN;
	static int64_t x474 = 32130722588LL;
	int16_t x475 = -31;
	int64_t x476 = INT64_MIN;
	int64_t t69 = -1762LL;

    t69 = ((x473+x474)>>(x475>x476));

    if (t69 != 16065361230LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x481 = 1619U;
	int16_t x482 = 2;

    t70 = ((x481+x482)>>(x483>x484));

    if (t70 != 810) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x489 = 3U;
	uint32_t x490 = 2173375U;
	static int32_t x492 = INT32_MIN;
	static uint32_t t71 = 261250U;

    t71 = ((x489+x490)>>(x491>x492));

    if (t71 != 1086689U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x498 = INT16_MIN;
	volatile int64_t x499 = 9327464414382LL;
	uint64_t x500 = UINT64_MAX;
	volatile int64_t t72 = 418081921LL;

    t72 = ((x497+x498)>>(x499>x500));

    if (t72 != 17062330997LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x501 = INT16_MAX;
	static volatile int32_t x503 = INT32_MIN;
	static uint32_t x504 = UINT32_MAX;
	volatile int32_t t73 = 362610365;

    t73 = ((x501+x502)>>(x503>x504));

    if (t73 != 32766) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x505 = -1636;
	uint64_t x506 = UINT64_MAX;
	int16_t x507 = INT16_MIN;
	static int32_t x508 = INT32_MAX;
	static uint64_t t74 = 465LLU;

    t74 = ((x505+x506)>>(x507>x508));

    if (t74 != 18446744073709549979LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x518 = 710;
	uint32_t x519 = 1774690369U;
	static int32_t x520 = 2;

    t75 = ((x517+x518)>>(x519>x520));

    if (t75 != 1308853197462276LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x521 = 0U;
	volatile uint32_t x522 = 1210457182U;
	int16_t x523 = 827;
	volatile uint16_t x524 = 33U;
	volatile uint32_t t76 = 506370800U;

    t76 = ((x521+x522)>>(x523>x524));

    if (t76 != 605228591U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x525 = 3698534840969084306LLU;
	static volatile uint16_t x526 = 782U;
	volatile int32_t x527 = INT32_MIN;
	static volatile int16_t x528 = -5928;
	uint64_t t77 = 29842984LLU;

    t77 = ((x525+x526)>>(x527>x528));

    if (t77 != 3698534840969085088LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x529 = -1;
	int64_t x530 = 878967830403502105LL;
	volatile int64_t x531 = -1LL;
	int8_t x532 = INT8_MIN;
	volatile int64_t t78 = -691354141LL;

    t78 = ((x529+x530)>>(x531>x532));

    if (t78 != 439483915201751052LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x541 = 504LLU;
	volatile uint64_t x542 = 0LLU;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t79 = 2246582LLU;

    t79 = ((x541+x542)>>(x543>x544));

    if (t79 != 252LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x545 = INT32_MIN;
	static int64_t x546 = INT64_MAX;
	volatile int64_t t80 = 15471376855568LL;

    t80 = ((x545+x546)>>(x547>x548));

    if (t80 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x550 = 45325;
	uint64_t x551 = UINT64_MAX;
	volatile int32_t x552 = 10569;
	uint32_t t81 = 138782914U;

    t81 = ((x549+x550)>>(x551>x552));

    if (t81 != 12307557U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x557 = 421U;
	uint32_t x558 = 552U;
	uint32_t x560 = 4944791U;

    t82 = ((x557+x558)>>(x559>x560));

    if (t82 != 973U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x561 = -1LL;
	int16_t x562 = 932;
	uint32_t x563 = 169555822U;
	uint8_t x564 = 7U;
	volatile int64_t t83 = -1378174262939LL;

    t83 = ((x561+x562)>>(x563>x564));

    if (t83 != 465LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x565 = 107871602558LLU;
	static int8_t x566 = -1;
	int8_t x567 = INT8_MIN;
	static int32_t x568 = INT32_MIN;
	uint64_t t84 = 3911007331356LLU;

    t84 = ((x565+x566)>>(x567>x568));

    if (t84 != 53935801278LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x569 = 77072407293982LL;
	int32_t x571 = INT32_MIN;
	static int64_t t85 = 0LL;

    t85 = ((x569+x570)>>(x571>x572));

    if (t85 != 77072407293981LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x573 = UINT8_MAX;
	int64_t x574 = -1LL;
	uint32_t x575 = 70659695U;
	static int16_t x576 = -1;

    t86 = ((x573+x574)>>(x575>x576));

    if (t86 != 254LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x585 = 28U;
	volatile uint8_t x586 = 18U;
	uint32_t x587 = 0U;
	static uint64_t x588 = 35740626LLU;
	static volatile int32_t t87 = -1761;

    t87 = ((x585+x586)>>(x587>x588));

    if (t87 != 46) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x593 = 3;
	static int32_t x595 = 397;
	volatile int16_t x596 = INT16_MIN;
	static uint32_t t88 = 926U;

    t88 = ((x593+x594)>>(x595>x596));

    if (t88 != 64811U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x601 = UINT8_MAX;
	uint64_t x602 = 31580665297LLU;
	static volatile int16_t x603 = INT16_MIN;
	uint8_t x604 = 46U;
	volatile uint64_t t89 = 15143281124LLU;

    t89 = ((x601+x602)>>(x603>x604));

    if (t89 != 31580665552LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x605 = UINT8_MAX;
	uint32_t x607 = 170978668U;
	static uint32_t x608 = 5404U;
	static int32_t t90 = -855;

    t90 = ((x605+x606)>>(x607>x608));

    if (t90 != 191) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x609 = INT16_MIN;
	static int64_t x610 = 125931LL;
	uint8_t x611 = 3U;
	int16_t x612 = -14615;
	int64_t t91 = -61843179707LL;

    t91 = ((x609+x610)>>(x611>x612));

    if (t91 != 46581LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x614 = 0;
	uint16_t x615 = 137U;
	static uint64_t x616 = 158331406LLU;

    t92 = ((x613+x614)>>(x615>x616));

    if (t92 != 8771) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x617 = INT8_MIN;
	volatile int16_t x618 = 2676;
	int32_t x619 = INT32_MIN;
	int64_t x620 = -1LL;
	int32_t t93 = 4145852;

    t93 = ((x617+x618)>>(x619>x620));

    if (t93 != 2548) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x621 = -1;
	static int16_t x622 = INT16_MAX;
	int32_t x623 = INT32_MIN;

    t94 = ((x621+x622)>>(x623>x624));

    if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x629 = INT8_MIN;
	volatile uint32_t x631 = 1U;
	uint16_t x632 = 28971U;

    t95 = ((x629+x630)>>(x631>x632));

    if (t95 != 100819621U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x645 = 921535553311LLU;
	uint8_t x647 = 1U;
	uint64_t x648 = 1500115110989LLU;
	volatile uint64_t t96 = 820793627729114LLU;

    t96 = ((x645+x646)>>(x647>x648));

    if (t96 != 921535553311LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x649 = INT8_MAX;
	volatile uint32_t x650 = 2U;
	volatile uint16_t x651 = UINT16_MAX;
	volatile int64_t x652 = INT64_MIN;
	volatile uint32_t t97 = 19156U;

    t97 = ((x649+x650)>>(x651>x652));

    if (t97 != 64U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x657 = INT8_MIN;
	volatile int32_t x658 = 158;
	uint64_t x659 = 5095731883617LLU;
	int16_t x660 = INT16_MIN;
	int32_t t98 = 2947516;

    t98 = ((x657+x658)>>(x659>x660));

    if (t98 != 30) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t t99 = 1083529664890792103LL;

    t99 = ((x661+x662)>>(x663>x664));

    if (t99 != 4611686018427371519LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x673 = UINT32_MAX;
	uint8_t x674 = 12U;
	int16_t x675 = 16;
	volatile int32_t x676 = INT32_MIN;
	volatile uint32_t t100 = 91250U;

    t100 = ((x673+x674)>>(x675>x676));

    if (t100 != 5U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x685 = 16057085U;
	int8_t x686 = -10;
	volatile int8_t x687 = INT8_MAX;
	static volatile int32_t x688 = INT32_MIN;
	uint32_t t101 = 1105389925U;

    t101 = ((x685+x686)>>(x687>x688));

    if (t101 != 8028537U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x693 = -1;
	int32_t x694 = 374;
	volatile uint8_t x696 = 17U;

    t102 = ((x693+x694)>>(x695>x696));

    if (t102 != 373) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x697 = 444779968024268LLU;
	uint16_t x698 = 14599U;
	static int8_t x699 = INT8_MAX;
	int32_t x700 = 1;
	uint64_t t103 = 2557072700179044LLU;

    t103 = ((x697+x698)>>(x699>x700));

    if (t103 != 222389984019433LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x703 = INT32_MIN;

    t104 = ((x701+x702)>>(x703>x704));

    if (t104 != 9223372035781033983LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x709 = 41061LL;
	int64_t x710 = -1LL;
	int16_t x712 = INT16_MIN;
	int64_t t105 = -1311433245006847LL;

    t105 = ((x709+x710)>>(x711>x712));

    if (t105 != 20530LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x713 = INT64_MAX;
	uint64_t x714 = 1094119317035LLU;
	static volatile int32_t x715 = -1;
	int32_t x716 = INT32_MIN;

    t106 = ((x713+x714)>>(x715>x716));

    if (t106 != 4611686565487046421LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x721 = 15431U;
	static volatile int8_t x723 = 3;
	static int8_t x724 = -1;

    t107 = ((x721+x722)>>(x723>x724));

    if (t107 != 7715LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x725 = UINT32_MAX;
	int32_t x726 = INT32_MIN;
	volatile int16_t x727 = -6185;
	volatile uint64_t x728 = UINT64_MAX;

    t108 = ((x725+x726)>>(x727>x728));

    if (t108 != 2147483647U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	int8_t x734 = INT8_MAX;
	static uint32_t x736 = 747726439U;
	uint32_t t109 = 4482253U;

    t109 = ((x733+x734)>>(x735>x736));

    if (t109 != 63U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x746 = UINT64_MAX;
	int16_t x747 = -1;
	volatile int16_t x748 = INT16_MAX;

    t110 = ((x745+x746)>>(x747>x748));

    if (t110 != 5LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x754 = 9U;
	int16_t x755 = -482;
	volatile int8_t x756 = -1;

    t111 = ((x753+x754)>>(x755>x756));

    if (t111 != 4294966514U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x757 = INT32_MIN;
	uint32_t x758 = 5U;
	uint16_t x759 = 5U;
	static int64_t x760 = -658480326553389LL;
	volatile uint32_t t112 = 6139U;

    t112 = ((x757+x758)>>(x759>x760));

    if (t112 != 1073741826U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x761 = 13021U;
	volatile int16_t x762 = INT16_MIN;
	int8_t x763 = -1;
	uint32_t t113 = 264925U;

    t113 = ((x761+x762)>>(x763>x764));

    if (t113 != 4294947549U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x765 = 5044;
	int32_t x766 = -508;
	int32_t x767 = INT32_MAX;
	int16_t x768 = INT16_MIN;
	volatile int32_t t114 = 4;

    t114 = ((x765+x766)>>(x767>x768));

    if (t114 != 2268) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x769 = UINT8_MAX;
	volatile int64_t x770 = 3LL;
	static int32_t x771 = INT32_MIN;
	static int8_t x772 = INT8_MAX;
	volatile int64_t t115 = 2080056396704916798LL;

    t115 = ((x769+x770)>>(x771>x772));

    if (t115 != 258LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x776 = -1;
	int32_t t116 = -1;

    t116 = ((x773+x774)>>(x775>x776));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x777 = -1;
	volatile uint8_t x778 = 16U;
	int8_t x780 = -1;
	static int32_t t117 = -21058449;

    t117 = ((x777+x778)>>(x779>x780));

    if (t117 != 15) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x785 = 44731164909LLU;
	int32_t x786 = INT32_MIN;
	uint64_t x787 = UINT64_MAX;
	volatile int16_t x788 = INT16_MIN;
	static uint64_t t118 = 26LLU;

    t118 = ((x785+x786)>>(x787>x788));

    if (t118 != 21291840630LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x793 = 5;
	volatile int64_t x795 = -385834871LL;
	int64_t x796 = 15068754621751664LL;

    t119 = ((x793+x794)>>(x795>x796));

    if (t119 != 65540) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x797 = -1;
	int16_t x799 = -127;
	int64_t x800 = 3699898LL;
	static volatile int32_t t120 = 12;

    t120 = ((x797+x798)>>(x799>x800));

    if (t120 != 32766) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x801 = 8140U;
	uint32_t x803 = 2U;
	volatile int8_t x804 = INT8_MIN;
	volatile uint32_t t121 = 1118661U;

    t121 = ((x801+x802)>>(x803>x804));

    if (t121 != 8139U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x809 = 13;
	int8_t x811 = -1;
	static volatile int32_t t122 = -414070;

    t122 = ((x809+x810)>>(x811>x812));

    if (t122 != 152) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x813 = 50497228817313LLU;
	int64_t x814 = INT64_MIN;
	uint64_t x816 = 28949842686525490LLU;
	volatile uint64_t t123 = 1292175LLU;

    t123 = ((x813+x814)>>(x815>x816));

    if (t123 != 9223422534083593121LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x817 = 36U;
	static int8_t x818 = -1;
	int8_t x819 = -1;
	static int16_t x820 = 1;
	static volatile int32_t t124 = 714435;

    t124 = ((x817+x818)>>(x819>x820));

    if (t124 != 35) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x821 = INT16_MAX;
	int32_t x822 = 57640;
	int32_t x823 = 25711927;
	uint32_t x824 = 30U;
	volatile int32_t t125 = 301;

    t125 = ((x821+x822)>>(x823>x824));

    if (t125 != 45203) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x833 = 23158LLU;
	int64_t x834 = INT64_MIN;
	volatile int8_t x835 = INT8_MAX;
	static volatile int16_t x836 = INT16_MAX;
	volatile uint64_t t126 = 6611LLU;

    t126 = ((x833+x834)>>(x835>x836));

    if (t126 != 9223372036854798966LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x841 = UINT8_MAX;
	static uint16_t x842 = UINT16_MAX;

    t127 = ((x841+x842)>>(x843>x844));

    if (t127 != 65790) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	static uint16_t x846 = 1U;
	int32_t x847 = INT32_MAX;
	int16_t x848 = INT16_MIN;
	uint64_t t128 = 14447854947LLU;

    t128 = ((x845+x846)>>(x847>x848));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x861 = INT8_MIN;
	int32_t t129 = -212082;

    t129 = ((x861+x862)>>(x863>x864));

    if (t129 != 1057) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x873 = -1;
	uint32_t x874 = 8U;
	int16_t x875 = INT16_MAX;
	uint64_t x876 = 3746665486916LLU;
	uint32_t t130 = 248U;

    t130 = ((x873+x874)>>(x875>x876));

    if (t130 != 7U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x893 = INT16_MAX;
	int8_t x894 = -1;
	static int64_t x895 = INT64_MIN;
	int8_t x896 = -1;

    t131 = ((x893+x894)>>(x895>x896));

    if (t131 != 32766) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x898 = -52061212LL;
	static uint8_t x899 = 0U;
	int64_t t132 = 1220374356187LL;

    t132 = ((x897+x898)>>(x899>x900));

    if (t132 != 2095422435LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x901 = INT8_MAX;
	uint64_t x902 = UINT64_MAX;
	int32_t x903 = -196301;
	volatile uint64_t t133 = 20391114249935880LLU;

    t133 = ((x901+x902)>>(x903>x904));

    if (t133 != 126LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x914 = UINT8_MAX;
	int32_t x915 = 182755476;
	int16_t x916 = -1;
	int32_t t134 = 11889;

    t134 = ((x913+x914)>>(x915>x916));

    if (t134 != 63) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x917 = -1;
	volatile uint64_t x918 = UINT64_MAX;
	int32_t x919 = 2;
	int8_t x920 = 22;
	volatile uint64_t t135 = 68740863LLU;

    t135 = ((x917+x918)>>(x919>x920));

    if (t135 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x921 = -17;
	volatile int16_t x922 = 94;
	volatile int64_t x924 = INT64_MIN;
	int32_t t136 = 4;

    t136 = ((x921+x922)>>(x923>x924));

    if (t136 != 77) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x925 = 965651162LLU;
	volatile uint32_t x926 = 722U;
	volatile int16_t x927 = INT16_MIN;
	volatile uint16_t x928 = UINT16_MAX;
	volatile uint64_t t137 = 2844440675718229991LLU;

    t137 = ((x925+x926)>>(x927>x928));

    if (t137 != 965651884LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x938 = INT8_MIN;
	uint64_t x939 = 830110053LLU;
	int16_t x940 = -1;
	volatile int32_t t138 = -109;

    t138 = ((x937+x938)>>(x939>x940));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x949 = 1461;
	volatile uint32_t x950 = UINT32_MAX;
	uint32_t t139 = 732827627U;

    t139 = ((x949+x950)>>(x951>x952));

    if (t139 != 730U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x962 = -87;
	uint64_t x963 = 3757821582964899LLU;
	uint64_t x964 = 922LLU;
	int32_t t140 = 8837499;

    t140 = ((x961+x962)>>(x963>x964));

    if (t140 != 84) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x978 = UINT8_MAX;
	int32_t x979 = -58392;
	static int16_t x980 = 1;

    t141 = ((x977+x978)>>(x979>x980));

    if (t141 != 254LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x981 = 30764U;
	volatile uint64_t x982 = 7514LLU;
	int64_t x983 = -1LL;
	volatile uint64_t t142 = 962676214LLU;

    t142 = ((x981+x982)>>(x983>x984));

    if (t142 != 38278LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x985 = UINT32_MAX;
	static volatile int8_t x986 = INT8_MIN;
	uint16_t x988 = 8072U;

    t143 = ((x985+x986)>>(x987>x988));

    if (t143 != 4294967167U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x989 = 3452335;
	int8_t x990 = -27;
	static int16_t x991 = INT16_MIN;
	int16_t x992 = -1;
	int32_t t144 = -16054;

    t144 = ((x989+x990)>>(x991>x992));

    if (t144 != 3452308) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x997 = UINT64_MAX;
	int8_t x998 = INT8_MAX;
	uint64_t x999 = 337357581387277396LLU;
	int32_t x1000 = -10369690;

    t145 = ((x997+x998)>>(x999>x1000));

    if (t145 != 126LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x1001 = UINT64_MAX;
	uint64_t x1002 = 1129061046344LLU;
	int32_t x1003 = INT32_MAX;
	static int64_t x1004 = 64084909846LL;
	volatile uint64_t t146 = 18575LLU;

    t146 = ((x1001+x1002)>>(x1003>x1004));

    if (t146 != 1129061046343LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x1013 = INT16_MAX;
	uint64_t x1014 = UINT64_MAX;
	static int16_t x1015 = INT16_MAX;
	int8_t x1016 = INT8_MIN;
	volatile uint64_t t147 = 14523813LLU;

    t147 = ((x1013+x1014)>>(x1015>x1016));

    if (t147 != 16383LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1025 = 9;
	int16_t x1027 = 30;
	volatile int8_t x1028 = -12;
	volatile int64_t t148 = 319653406213299LL;

    t148 = ((x1025+x1026)>>(x1027>x1028));

    if (t148 != 4LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x1033 = -1;
	static volatile uint8_t x1034 = 3U;
	uint32_t x1035 = UINT32_MAX;
	int16_t x1036 = 0;
	volatile int32_t t149 = 179428076;

    t149 = ((x1033+x1034)>>(x1035>x1036));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1037 = UINT8_MAX;
	int8_t x1038 = INT8_MIN;
	int16_t x1040 = 106;
	int32_t t150 = 4664121;

    t150 = ((x1037+x1038)>>(x1039>x1040));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1043 = 1674534U;
	uint64_t x1044 = 5666028916244374LLU;
	int32_t t151 = 221663088;

    t151 = ((x1041+x1042)>>(x1043>x1044));

    if (t151 != 32639) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x1049 = -9;
	volatile int64_t x1050 = 11501LL;
	int64_t x1051 = INT64_MAX;
	uint16_t x1052 = UINT16_MAX;

    t152 = ((x1049+x1050)>>(x1051>x1052));

    if (t152 != 5746LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1057 = -760LL;
	int32_t x1058 = INT32_MAX;
	volatile uint64_t x1059 = 2848413501451505LLU;
	int16_t x1060 = -1;
	volatile int64_t t153 = 0LL;

    t153 = ((x1057+x1058)>>(x1059>x1060));

    if (t153 != 2147482887LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1065 = 18U;
	volatile uint64_t x1067 = 2374897LLU;
	volatile int32_t x1068 = INT32_MIN;
	int64_t t154 = 1896698096397126LL;

    t154 = ((x1065+x1066)>>(x1067>x1068));

    if (t154 != 17LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1069 = -1;
	volatile int32_t x1072 = INT32_MIN;
	uint64_t t155 = 7095513090260270348LLU;

    t155 = ((x1069+x1070)>>(x1071>x1072));

    if (t155 != 287LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1073 = UINT64_MAX;
	volatile int32_t x1076 = INT32_MIN;
	volatile uint64_t t156 = 165178823153966LLU;

    t156 = ((x1073+x1074)>>(x1075>x1076));

    if (t156 != 9223372035781033983LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1077 = INT16_MAX;
	int64_t x1078 = -1LL;
	int16_t x1079 = 23;
	uint32_t x1080 = 0U;
	int64_t t157 = -11611062873LL;

    t157 = ((x1077+x1078)>>(x1079>x1080));

    if (t157 != 16383LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1081 = INT64_MAX;
	int16_t x1082 = -1;
	static int64_t x1083 = -400774953LL;
	static uint16_t x1084 = 1U;
	int64_t t158 = -965233653700LL;

    t158 = ((x1081+x1082)>>(x1083>x1084));

    if (t158 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1089 = 1593;
	static uint16_t x1090 = 11661U;
	int16_t x1092 = -19;

    t159 = ((x1089+x1090)>>(x1091>x1092));

    if (t159 != 6627) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x1093 = 25;
	int64_t x1094 = -1LL;
	int8_t x1095 = INT8_MIN;
	int64_t t160 = -395LL;

    t160 = ((x1093+x1094)>>(x1095>x1096));

    if (t160 != 24LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1101 = -1LL;
	uint16_t x1102 = 7650U;
	static volatile int32_t x1103 = -1;
	static int64_t t161 = 10082LL;

    t161 = ((x1101+x1102)>>(x1103>x1104));

    if (t161 != 7649LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1105 = INT8_MIN;
	static uint64_t x1106 = 89804841993LLU;
	static uint16_t x1107 = 62U;
	static uint16_t x1108 = 1U;
	static volatile uint64_t t162 = 217422639921982339LLU;

    t162 = ((x1105+x1106)>>(x1107>x1108));

    if (t162 != 44902420932LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1109 = 4;
	int8_t x1110 = -1;
	int16_t x1111 = INT16_MAX;
	int16_t x1112 = -1;
	volatile int32_t t163 = 2176;

    t163 = ((x1109+x1110)>>(x1111>x1112));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x1117 = 952;
	uint64_t x1118 = 6125LLU;
	int64_t x1119 = -1LL;
	int8_t x1120 = INT8_MIN;
	uint64_t t164 = 725472615LLU;

    t164 = ((x1117+x1118)>>(x1119>x1120));

    if (t164 != 3538LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x1121 = UINT16_MAX;
	int8_t x1122 = INT8_MIN;
	int16_t x1124 = -3520;
	static volatile int32_t t165 = -58679;

    t165 = ((x1121+x1122)>>(x1123>x1124));

    if (t165 != 32703) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1125 = 7953822U;
	int32_t x1126 = INT32_MAX;
	static int16_t x1127 = INT16_MIN;
	int16_t x1128 = -1;
	volatile uint32_t t166 = 2U;

    t166 = ((x1125+x1126)>>(x1127>x1128));

    if (t166 != 2155437469U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1129 = 222578833;
	int8_t x1130 = INT8_MIN;
	uint32_t x1131 = 66275041U;
	int64_t x1132 = -1LL;
	int32_t t167 = 41174;

    t167 = ((x1129+x1130)>>(x1131>x1132));

    if (t167 != 111289352) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1134 = 3643400571079377LL;
	int8_t x1135 = 33;
	static volatile int8_t x1136 = 55;
	volatile int64_t t168 = 14252717LL;

    t168 = ((x1133+x1134)>>(x1135>x1136));

    if (t168 != 3643400571079441LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1137 = 6U;
	uint32_t x1138 = UINT32_MAX;
	static int16_t x1139 = INT16_MIN;
	uint64_t x1140 = 237553LLU;
	volatile uint32_t t169 = 597230U;

    t169 = ((x1137+x1138)>>(x1139>x1140));

    if (t169 != 2U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1141 = -1;
	uint32_t x1142 = 7U;
	static int32_t x1144 = INT32_MIN;
	uint32_t t170 = 12394U;

    t170 = ((x1141+x1142)>>(x1143>x1144));

    if (t170 != 6U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1145 = UINT8_MAX;
	int64_t x1146 = 132922832LL;
	volatile int8_t x1147 = INT8_MAX;
	uint32_t x1148 = 59552U;
	volatile int64_t t171 = -6629107010744LL;

    t171 = ((x1145+x1146)>>(x1147>x1148));

    if (t171 != 132923087LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1157 = INT16_MAX;
	int8_t x1158 = -1;
	uint8_t x1160 = UINT8_MAX;
	static int32_t t172 = -12818;

    t172 = ((x1157+x1158)>>(x1159>x1160));

    if (t172 != 32766) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x1166 = -766441677254775LL;
	static uint16_t x1167 = 16U;
	static volatile uint64_t x1168 = UINT64_MAX;
	uint64_t t173 = 3695LLU;

    t173 = ((x1165+x1166)>>(x1167>x1168));

    if (t173 != 18445977632032297294LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x1173 = 13717155801LLU;
	volatile int64_t x1174 = -248061722484870349LL;
	static int8_t x1175 = -1;
	static uint16_t x1176 = 4304U;

    t174 = ((x1173+x1174)>>(x1175>x1176));

    if (t174 != 18198682364941837068LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1177 = -22LL;
	volatile uint16_t x1178 = UINT16_MAX;
	int32_t x1179 = 1644;
	volatile int64_t x1180 = INT64_MAX;

    t175 = ((x1177+x1178)>>(x1179>x1180));

    if (t175 != 65513LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1181 = UINT64_MAX;
	int64_t x1182 = INT64_MIN;
	int32_t x1183 = INT32_MAX;
	static int64_t x1184 = INT64_MIN;

    t176 = ((x1181+x1182)>>(x1183>x1184));

    if (t176 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1189 = INT16_MAX;
	static volatile uint32_t x1190 = UINT32_MAX;
	int16_t x1192 = 3;
	uint32_t t177 = 92647U;

    t177 = ((x1189+x1190)>>(x1191>x1192));

    if (t177 != 16383U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1201 = INT8_MIN;
	uint16_t x1203 = UINT16_MAX;
	volatile int16_t x1204 = INT16_MIN;
	volatile int32_t t178 = -290;

    t178 = ((x1201+x1202)>>(x1203>x1204));

    if (t178 != 63) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1206 = INT16_MIN;
	int64_t x1207 = -1LL;
	int16_t x1208 = INT16_MIN;

    t179 = ((x1205+x1206)>>(x1207>x1208));

    if (t179 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1217 = INT8_MIN;
	int64_t x1218 = INT64_MAX;
	volatile uint32_t x1220 = 84U;
	int64_t t180 = 923251779475LL;

    t180 = ((x1217+x1218)>>(x1219>x1220));

    if (t180 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1225 = 1U;
	int8_t x1227 = INT8_MAX;
	uint32_t x1228 = 4130221U;
	int32_t t181 = 3512673;

    t181 = ((x1225+x1226)>>(x1227>x1228));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x1229 = 13690LLU;
	uint64_t x1230 = 271803485658LLU;
	int32_t x1231 = INT32_MAX;
	int64_t x1232 = INT64_MIN;

    t182 = ((x1229+x1230)>>(x1231>x1232));

    if (t182 != 135901749674LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1233 = UINT32_MAX;
	int8_t x1234 = INT8_MIN;
	uint8_t x1235 = UINT8_MAX;

    t183 = ((x1233+x1234)>>(x1235>x1236));

    if (t183 != 2147483583U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1237 = 5;
	uint16_t x1238 = 0U;
	int8_t x1239 = INT8_MAX;
	int32_t x1240 = INT32_MIN;
	int32_t t184 = -1988;

    t184 = ((x1237+x1238)>>(x1239>x1240));

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1245 = 157566167LL;
	int16_t x1246 = INT16_MAX;
	volatile int32_t x1247 = -1;
	int32_t x1248 = 786;

    t185 = ((x1245+x1246)>>(x1247>x1248));

    if (t185 != 157598934LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1249 = INT8_MIN;
	int32_t x1250 = INT32_MAX;
	int64_t x1251 = INT64_MAX;
	uint16_t x1252 = 10612U;
	volatile int32_t t186 = 906701;

    t186 = ((x1249+x1250)>>(x1251>x1252));

    if (t186 != 1073741759) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1270 = 49;
	uint8_t x1272 = 3U;
	int32_t t187 = -14122;

    t187 = ((x1269+x1270)>>(x1271>x1272));

    if (t187 != 3098) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1273 = INT16_MIN;
	int64_t x1274 = INT64_MAX;
	int16_t x1275 = 6957;
	static int8_t x1276 = INT8_MIN;

    t188 = ((x1273+x1274)>>(x1275>x1276));

    if (t188 != 4611686018427371519LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1277 = INT32_MIN;
	volatile uint32_t x1278 = 961050U;
	int64_t x1279 = -1LL;
	uint64_t x1280 = 21105439064460LLU;
	volatile uint32_t t189 = 684115U;

    t189 = ((x1277+x1278)>>(x1279>x1280));

    if (t189 != 1074222349U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1286 = INT16_MIN;
	int32_t x1287 = -1;
	volatile uint16_t x1288 = 1U;
	static volatile uint32_t t190 = 105U;

    t190 = ((x1285+x1286)>>(x1287>x1288));

    if (t190 != 605852U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1293 = 4171681U;
	int16_t x1294 = INT16_MAX;
	uint16_t x1295 = UINT16_MAX;
	int32_t x1296 = -1;
	uint32_t t191 = 4851815U;

    t191 = ((x1293+x1294)>>(x1295>x1296));

    if (t191 != 2102224U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1298 = 0LLU;
	int64_t x1299 = INT64_MIN;
	volatile uint8_t x1300 = 1U;
	static uint64_t t192 = 8LLU;

    t192 = ((x1297+x1298)>>(x1299>x1300));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1301 = 70720520U;
	static int16_t x1302 = INT16_MIN;
	uint32_t t193 = 4U;

    t193 = ((x1301+x1302)>>(x1303>x1304));

    if (t193 != 70687752U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1313 = INT16_MAX;
	uint32_t x1315 = UINT32_MAX;
	volatile uint32_t x1316 = 1528279U;

    t194 = ((x1313+x1314)>>(x1315>x1316));

    if (t194 != 16383LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1321 = 166406LLU;
	int64_t x1323 = -1269796790937195LL;
	uint64_t x1324 = 121734278LLU;
	static uint64_t t195 = 2878877233368LLU;

    t195 = ((x1321+x1322)>>(x1323>x1324));

    if (t195 != 83202LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1325 = 148;
	uint64_t x1326 = UINT64_MAX;
	volatile int16_t x1327 = 5562;
	static uint64_t x1328 = 179958820413LLU;
	volatile uint64_t t196 = 67132707673646LLU;

    t196 = ((x1325+x1326)>>(x1327>x1328));

    if (t196 != 147LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1329 = 1LL;
	volatile uint16_t x1330 = 8U;
	static int32_t x1332 = INT32_MAX;

    t197 = ((x1329+x1330)>>(x1331>x1332));

    if (t197 != 9LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1341 = -1LL;
	volatile int64_t x1342 = INT64_MAX;
	volatile uint64_t x1343 = 18112LLU;
	volatile int64_t t198 = -56530008190390LL;

    t198 = ((x1341+x1342)>>(x1343>x1344));

    if (t198 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1345 = 11U;
	uint32_t x1346 = 303U;
	int64_t x1348 = -2795069135361LL;
	uint32_t t199 = 1354U;

    t199 = ((x1345+x1346)>>(x1347>x1348));

    if (t199 != 157U) { NG(); } else { ; }
	
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

