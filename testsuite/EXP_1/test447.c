
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

static uint16_t x2 = 102U;
volatile int16_t x5 = -1;
int16_t x6 = -1;
int32_t x8 = INT32_MAX;
int16_t x13 = INT16_MIN;
int32_t x16 = INT32_MIN;
int64_t t4 = INT64_MIN;
volatile uint32_t x25 = 6945U;
uint16_t x28 = UINT16_MAX;
volatile int64_t t7 = 616515997LL;
int16_t x42 = 167;
volatile int8_t x43 = INT8_MIN;
int32_t t10 = 98349;
volatile uint32_t x48 = 37U;
uint16_t x64 = 5223U;
static int64_t t13 = 18063573LL;
int64_t x71 = INT64_MIN;
uint64_t t15 = 46407843035367536LLU;
uint32_t x86 = 13U;
static int64_t t20 = 822876234569LL;
int8_t x112 = INT8_MIN;
static volatile int32_t t22 = -104343;
int8_t x116 = INT8_MAX;
int32_t x117 = -793626;
static volatile int64_t x118 = -1LL;
static int8_t x119 = INT8_MIN;
int32_t x120 = -1;
uint32_t x125 = 49545055U;
int16_t x129 = -1;
int16_t x131 = INT16_MAX;
static uint8_t x132 = UINT8_MAX;
int64_t x140 = -4283321394206789522LL;
static int32_t t31 = -5396861;
int32_t x153 = 0;
static int16_t x163 = 54;
int32_t x164 = INT32_MIN;
uint16_t x167 = 935U;
uint64_t t36 = 489606027435LLU;
static volatile int16_t x173 = -1;
int32_t t38 = -14010;
volatile int32_t x179 = -574921;
int16_t x180 = INT16_MIN;
static int64_t x218 = 37347535LL;
volatile uint16_t x221 = 132U;
int32_t x223 = INT32_MIN;
static volatile uint64_t t48 = 24LLU;
uint32_t x249 = UINT32_MAX;
volatile uint32_t t50 = 32875U;
uint8_t x264 = 63U;
int16_t x270 = -3;
static int32_t x273 = 17297530;
int64_t x282 = INT64_MAX;
int8_t x285 = 1;
volatile int32_t x288 = -1;
volatile int64_t t57 = -46706499947468315LL;
int32_t x293 = INT32_MAX;
volatile int64_t x296 = INT64_MIN;
int16_t x306 = -1;
int32_t x307 = INT32_MIN;
int64_t t60 = 12279267894712205LL;
uint64_t x325 = UINT64_MAX;
int32_t x333 = -109;
int64_t x343 = INT64_MIN;
int8_t x352 = -6;
uint64_t x353 = UINT64_MAX;
uint64_t t67 = 55263177278158042LLU;
int16_t x357 = -38;
volatile uint64_t x360 = 193LLU;
static uint16_t x361 = 17U;
volatile uint16_t x363 = UINT16_MAX;
int16_t x372 = -1742;
static int64_t t70 = -26778863LL;
volatile int16_t x377 = -86;
int32_t x380 = -1;
int8_t x392 = 0;
volatile int32_t t73 = -511739689;
int32_t x393 = INT32_MIN;
volatile uint32_t x394 = 476U;
volatile uint32_t t74 = 3U;
static int16_t x397 = -23;
volatile uint64_t t75 = 219180910088LLU;
static uint64_t x408 = UINT64_MAX;
int16_t x409 = -25;
volatile int32_t t77 = 14;
volatile int16_t x417 = INT16_MAX;
static uint64_t t78 = 5945092301973681LLU;
volatile uint64_t t79 = 202915382514666117LLU;
uint8_t x425 = 40U;
int16_t x436 = -1;
volatile int16_t x449 = -1;
uint32_t x450 = 196784415U;
volatile uint32_t x454 = 2113390U;
static int64_t x456 = 2710959668646LL;
uint8_t x462 = UINT8_MAX;
int16_t x477 = INT16_MIN;
uint64_t x491 = 1965040931346924LLU;
int64_t t95 = 38219980LL;
static int32_t x498 = -50760;
volatile int16_t x500 = 17;
volatile uint32_t t97 = 10U;
uint8_t x507 = 36U;
volatile uint32_t t100 = UINT32_MAX;
int64_t x523 = INT64_MIN;
volatile int8_t x528 = INT8_MAX;
volatile uint32_t t102 = 11U;
uint32_t x531 = 624485843U;
int32_t x532 = 780451641;
static uint8_t x536 = UINT8_MAX;
volatile uint32_t x539 = UINT32_MAX;
uint64_t t105 = 122LLU;
int16_t x541 = INT16_MAX;
int64_t x542 = -8018162932429LL;
uint64_t x552 = 7391586415565838LLU;
int16_t x559 = -1103;
int32_t x563 = INT32_MIN;
int16_t x566 = INT16_MIN;
int32_t x567 = INT32_MIN;
uint32_t x578 = 26U;
uint8_t x581 = UINT8_MAX;
volatile uint8_t x600 = UINT8_MAX;
int8_t x616 = -1;
int8_t x619 = INT8_MIN;
int64_t x620 = INT64_MIN;
int64_t t121 = 190931070695LL;
volatile int16_t x622 = INT16_MIN;
volatile uint64_t x624 = 427785433LLU;
uint64_t t122 = 280577894130LLU;
volatile int32_t x627 = -13225380;
static uint16_t x637 = UINT16_MAX;
int8_t x669 = 0;
int64_t x670 = 4138389520LL;
uint32_t x671 = 15U;
volatile int32_t t131 = 26695;
volatile int64_t x681 = INT64_MAX;
volatile int64_t t132 = -1536306121591167LL;
int8_t x686 = -1;
static int32_t x689 = INT32_MIN;
static volatile int64_t t134 = 358LL;
static int8_t x698 = INT8_MIN;
volatile int64_t t135 = INT64_MAX;
int8_t x706 = INT8_MIN;
int8_t x721 = 1;
volatile int16_t x722 = -1;
static volatile uint64_t t138 = 4LLU;
int8_t x729 = INT8_MIN;
static int8_t x735 = INT8_MIN;
int32_t x748 = -89707882;
volatile int32_t t143 = 14595668;
int32_t x756 = -18;
uint8_t x757 = 36U;
int8_t x770 = INT8_MAX;
int16_t x779 = INT16_MIN;
static volatile int64_t x780 = INT64_MIN;
int64_t t149 = -1LL;
int32_t x781 = -1;
int8_t x789 = INT8_MIN;
int32_t x790 = -1;
int64_t x796 = -1LL;
volatile int64_t x801 = INT64_MIN;
int8_t x806 = 9;
int8_t x807 = INT8_MIN;
int64_t x810 = -126LL;
static int8_t x811 = INT8_MAX;
static volatile int64_t t155 = 0LL;
uint64_t t156 = 2146864345630665683LLU;
volatile uint16_t x828 = UINT16_MAX;
volatile int32_t t157 = 1472262;
uint8_t x841 = 6U;
int8_t x850 = -62;
volatile int64_t t162 = INT64_MIN;
uint64_t x854 = 5928996474742662LLU;
uint64_t t163 = 1841105811682LLU;
uint32_t t164 = 7U;
int8_t x877 = -1;
int8_t x879 = INT8_MIN;
int64_t x880 = -1LL;
volatile int8_t x881 = INT8_MIN;
int8_t x884 = -1;
int8_t x899 = INT8_MAX;
volatile int32_t t171 = -3;
volatile int32_t x909 = 0;
uint8_t x912 = UINT8_MAX;
int64_t x944 = INT64_MIN;
static volatile int64_t t175 = -2034138LL;
volatile uint8_t x964 = 44U;
volatile uint32_t t177 = 5U;
volatile int32_t x982 = 15024;
uint16_t x985 = 831U;
volatile int16_t x999 = INT16_MAX;
int64_t t182 = 1925024LL;
volatile int16_t x1012 = INT16_MIN;
volatile int8_t x1023 = INT8_MAX;
uint8_t x1028 = 0U;
volatile int64_t t187 = 1467194LL;
int8_t x1051 = -10;
uint16_t x1066 = UINT16_MAX;
uint64_t x1078 = 455261880LLU;
int8_t x1082 = -1;
volatile int8_t x1089 = -1;
volatile uint16_t x1090 = UINT16_MAX;
volatile uint8_t x1092 = 1U;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint8_t x3 = 5U;
	volatile uint16_t x4 = 360U;
	volatile int32_t t0 = 552227;

    t0 = (((x1*x2)/x3)|x4);

    if (t0 != -2579) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x7 = 3LLU;
	uint64_t t1 = 322465868930684602LLU;

    t1 = (((x5*x6)/x7)|x8);

    if (t1 != 2147483647LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	int16_t x10 = -50;
	uint32_t x11 = UINT32_MAX;
	static uint64_t x12 = 6498455203312084LLU;
	volatile uint64_t t2 = 1739002105LLU;

    t2 = (((x9*x10)/x11)|x12);

    if (t2 != 6498455203312084LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = -284746498LL;
	uint64_t x15 = 1077812837674238LLU;
	volatile uint64_t t3 = 447675724515228784LLU;

    t3 = (((x13*x14)/x15)|x16);

    if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 2U;
	int16_t x18 = -193;
	int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MIN;

    t4 = (((x17*x18)/x19)|x20);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int32_t x22 = -1;
	static int64_t x23 = -912337701220280LL;
	uint16_t x24 = 3590U;
	int64_t t5 = 56355359LL;

    t5 = (((x21*x22)/x23)|x24);

    if (t5 != 3590LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 126U;
	int32_t x27 = INT32_MIN;
	uint32_t t6 = 3252750U;

    t6 = (((x25*x26)/x27)|x28);

    if (t6 != 65535U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 247U;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	int64_t x32 = -25749810485479LL;

    t7 = (((x29*x30)/x31)|x32);

    if (t7 != -25749810485479LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -30;
	volatile uint64_t x34 = UINT64_MAX;
	uint32_t x35 = 1U;
	uint64_t x36 = 62686118LLU;
	uint64_t t8 = 15087910677592LLU;

    t8 = (((x33*x34)/x35)|x36);

    if (t8 != 62686142LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int64_t x39 = 108LL;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

    t9 = (((x37*x38)/x39)|x40);

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 49;
	static uint8_t x44 = 1U;

    t10 = (((x41*x42)/x43)|x44);

    if (t10 != -63) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int16_t x46 = 364;
	int32_t x47 = INT32_MIN;
	volatile uint32_t t11 = 2784U;

    t11 = (((x45*x46)/x47)|x48);

    if (t11 != 37U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	int16_t x55 = 10379;
	uint16_t x56 = UINT16_MAX;
	int32_t t12 = -3535;

    t12 = (((x53*x54)/x55)|x56);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x61 = -1LL;
	volatile int16_t x62 = -1;
	volatile int16_t x63 = INT16_MIN;

    t13 = (((x61*x62)/x63)|x64);

    if (t13 != 5223LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MAX;
	int32_t x68 = -1;
	static uint64_t t14 = UINT64_MAX;

    t14 = (((x65*x66)/x67)|x68);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 919441858766774LLU;
	uint64_t x70 = 240456234051953LLU;
	static int64_t x72 = INT64_MAX;

    t15 = (((x69*x70)/x71)|x72);

    if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = UINT8_MAX;
	uint8_t x74 = 2U;
	static int64_t x75 = 65821717413LL;
	int16_t x76 = INT16_MAX;
	static int64_t t16 = 57383252360074LL;

    t16 = (((x73*x74)/x75)|x76);

    if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x85 = 2495881U;
	int16_t x87 = -8;
	static int32_t x88 = INT32_MIN;
	uint32_t t17 = 57U;

    t17 = (((x85*x86)/x87)|x88);

    if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x89 = UINT8_MAX;
	static int64_t x90 = 180846608LL;
	uint16_t x91 = 1U;
	int32_t x92 = INT32_MIN;
	int64_t t18 = -931901381084104145LL;

    t18 = (((x89*x90)/x91)|x92);

    if (t18 != -1128755216LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = -1;
	volatile int64_t x98 = INT64_MAX;
	int16_t x99 = -1;
	int8_t x100 = -1;
	int64_t t19 = -419LL;

    t19 = (((x97*x98)/x99)|x100);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = 23272U;
	int8_t x102 = INT8_MIN;
	int16_t x103 = 3;
	int64_t x104 = INT64_MIN;

    t20 = (((x101*x102)/x103)|x104);

    if (t20 != -992938LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x105 = -1;
	static int16_t x106 = INT16_MIN;
	int64_t x107 = 893681756787LL;
	uint16_t x108 = 0U;
	volatile int64_t t21 = -64931LL;

    t21 = (((x105*x106)/x107)|x108);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = -21665;
	static int8_t x110 = 0;
	int32_t x111 = INT32_MAX;

    t22 = (((x109*x110)/x111)|x112);

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = -1;
	volatile uint32_t x114 = UINT32_MAX;
	int64_t x115 = 1333632962LL;
	volatile int64_t t23 = 2585LL;

    t23 = (((x113*x114)/x115)|x116);

    if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t t24 = -1312LL;

    t24 = (((x117*x118)/x119)|x120);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = 0;
	uint64_t x122 = 29806916LLU;
	static uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MIN;
	uint64_t t25 = 8765466131LLU;

    t25 = (((x121*x122)/x123)|x124);

    if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x126 = 426U;
	static volatile int8_t x127 = 26;
	static volatile uint8_t x128 = UINT8_MAX;
	volatile uint32_t t26 = 429539114U;

    t26 = (((x125*x126)/x127)|x128);

    if (t26 != 151012607U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x130 = -7;
	volatile int32_t t27 = -5;

    t27 = (((x129*x130)/x131)|x132);

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = INT64_MAX;
	volatile uint64_t x134 = UINT64_MAX;
	volatile int64_t x135 = INT64_MIN;
	volatile int8_t x136 = -1;
	uint64_t t28 = UINT64_MAX;

    t28 = (((x133*x134)/x135)|x136);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x137 = 0U;
	int64_t x138 = INT64_MAX;
	volatile int64_t x139 = 1LL;
	static int64_t t29 = -1760061497364LL;

    t29 = (((x137*x138)/x139)|x140);

    if (t29 != -4283321394206789522LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = -1LL;
	int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	volatile int64_t t30 = -3482830403335562LL;

    t30 = (((x141*x142)/x143)|x144);

    if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = 731U;
	static int16_t x146 = INT16_MIN;
	volatile int32_t x147 = -82;
	volatile int32_t x148 = -22956;

    t31 = (((x145*x146)/x147)|x148);

    if (t31 != -2218) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x149 = 48735539U;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 57110133972LLU;
	uint64_t x152 = 407133LLU;
	static volatile uint64_t t32 = 34814709157405LLU;

    t32 = (((x149*x150)/x151)|x152);

    if (t32 != 407133LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x154 = 1;
	volatile int16_t x155 = -2763;
	volatile int8_t x156 = 5;
	int32_t t33 = 1;

    t33 = (((x153*x154)/x155)|x156);

    if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x157 = 33U;
	static int8_t x158 = INT8_MIN;
	uint64_t x159 = 124050730887LLU;
	static int64_t x160 = INT64_MIN;
	uint64_t t34 = 2847822LLU;

    t34 = (((x157*x158)/x159)|x160);

    if (t34 != 9223372037003479035LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x161 = INT8_MIN;
	uint64_t x162 = 423090LLU;
	volatile uint64_t t35 = 6447906334LLU;

    t35 = (((x161*x162)/x163)|x164);

    if (t35 != 18446744073310866578LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = 1LL;
	uint64_t x166 = 623833LLU;
	uint16_t x168 = 13730U;

    t36 = (((x165*x166)/x167)|x168);

    if (t36 != 14267LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = -1;
	int8_t x170 = 20;
	static int16_t x171 = -1;
	uint64_t x172 = 16057007138009LLU;
	volatile uint64_t t37 = 16581927LLU;

    t37 = (((x169*x170)/x171)|x172);

    if (t37 != 16057007138013LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x174 = -1;
	int8_t x175 = -31;
	static uint16_t x176 = UINT16_MAX;

    t38 = (((x173*x174)/x175)|x176);

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x177 = 21989U;
	static volatile uint64_t x178 = UINT64_MAX;
	uint64_t t39 = 4832883177766LLU;

    t39 = (((x177*x178)/x179)|x180);

    if (t39 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x181 = INT16_MAX;
	uint64_t x182 = 469235136949176LLU;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = UINT64_MAX;
	uint64_t t40 = UINT64_MAX;

    t40 = (((x181*x182)/x183)|x184);

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	static uint8_t x192 = 8U;
	uint64_t t41 = 1453714LLU;

    t41 = (((x189*x190)/x191)|x192);

    if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x193 = -6;
	volatile int8_t x194 = -1;
	uint16_t x195 = 1U;
	static uint32_t x196 = 1867011U;
	volatile uint32_t t42 = 771U;

    t42 = (((x193*x194)/x195)|x196);

    if (t42 != 1867015U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x201 = INT8_MAX;
	volatile uint32_t x202 = 103427U;
	int8_t x203 = -1;
	int64_t x204 = -114921525631184LL;
	static int64_t t43 = -755258LL;

    t43 = (((x201*x202)/x203)|x204);

    if (t43 != -114921525631184LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x213 = 1;
	static uint64_t x214 = 113959602476035LLU;
	int16_t x215 = -1;
	int16_t x216 = INT16_MIN;
	uint64_t t44 = 25319781LLU;

    t44 = (((x213*x214)/x215)|x216);

    if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x217 = UINT8_MAX;
	int64_t x219 = 201399LL;
	int64_t x220 = INT64_MIN;
	volatile int64_t t45 = -600943541409422LL;

    t45 = (((x217*x218)/x219)|x220);

    if (t45 != -9223372036854728521LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x222 = -1;
	volatile int8_t x224 = INT8_MAX;
	static volatile int32_t t46 = -246842;

    t46 = (((x221*x222)/x223)|x224);

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x225 = 11254382LL;
	uint8_t x226 = 107U;
	int64_t x227 = -73841695LL;
	uint32_t x228 = UINT32_MAX;
	int64_t t47 = 162194982109998LL;

    t47 = (((x225*x226)/x227)|x228);

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x237 = 156;
	uint64_t x238 = 542860LLU;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MAX;

    t48 = (((x237*x238)/x239)|x240);

    if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x241 = -4080;
	int8_t x242 = INT8_MIN;
	volatile int64_t x243 = -1LL;
	int8_t x244 = 0;
	int64_t t49 = -3029004831647336738LL;

    t49 = (((x241*x242)/x243)|x244);

    if (t49 != -522240LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x250 = -4042;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MAX;

    t50 = (((x249*x250)/x251)|x252);

    if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x257 = UINT8_MAX;
	static volatile int8_t x258 = INT8_MIN;
	static uint64_t x259 = 32152570569869LLU;
	int8_t x260 = INT8_MIN;
	uint64_t t51 = 119354166229943LLU;

    t51 = (((x257*x258)/x259)|x260);

    if (t51 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x261 = 7246;
	int64_t x262 = 4243697809LL;
	static volatile int16_t x263 = INT16_MAX;
	volatile int64_t t52 = 3491967180258996194LL;

    t52 = (((x261*x262)/x263)|x264);

    if (t52 != 938439167LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x265 = INT16_MIN;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MAX;
	int64_t x268 = 14474310836LL;
	int64_t t53 = -836847LL;

    t53 = (((x265*x266)/x267)|x268);

    if (t53 != -16909058LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x269 = INT8_MIN;
	int8_t x271 = -21;
	volatile int64_t x272 = INT64_MAX;
	volatile int64_t t54 = 14LL;

    t54 = (((x269*x270)/x271)|x272);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x274 = -1;
	uint8_t x275 = 107U;
	int16_t x276 = INT16_MIN;
	int32_t t55 = -181;

    t55 = (((x273*x274)/x275)|x276);

    if (t55 != -30587) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x281 = -1;
	static uint16_t x283 = 572U;
	int8_t x284 = -1;
	volatile int64_t t56 = -118LL;

    t56 = (((x281*x282)/x283)|x284);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x286 = -21013;
	int64_t x287 = -1LL;

    t57 = (((x285*x286)/x287)|x288);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x294 = -1;
	uint8_t x295 = UINT8_MAX;
	int64_t t58 = -44890509091LL;

    t58 = (((x293*x294)/x295)|x296);

    if (t58 != -8421504LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x301 = INT8_MIN;
	uint8_t x302 = 1U;
	uint16_t x303 = 10344U;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t59 = INT64_MIN;

    t59 = (((x301*x302)/x303)|x304);

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x305 = 431558LL;
	volatile int32_t x308 = -1;

    t60 = (((x305*x306)/x307)|x308);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x309 = 3;
	volatile int64_t x310 = 110434414590593LL;
	int32_t x311 = INT32_MIN;
	int32_t x312 = 2477311;
	int64_t t61 = -2238680522517038LL;

    t61 = (((x309*x310)/x311)|x312);

    if (t61 != -135681LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int16_t x324 = -3468;
	uint64_t t62 = 983292811905LLU;

    t62 = (((x321*x322)/x323)|x324);

    if (t62 != 18446744073709548148LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x326 = INT16_MAX;
	volatile int16_t x327 = INT16_MIN;
	volatile uint8_t x328 = 0U;
	static volatile uint64_t t63 = 1LLU;

    t63 = (((x325*x326)/x327)|x328);

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x334 = -13;
	static uint64_t x335 = 21765LLU;
	static int32_t x336 = INT32_MAX;
	static volatile uint64_t t64 = 31248305LLU;

    t64 = (((x333*x334)/x335)|x336);

    if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x341 = INT16_MIN;
	uint8_t x342 = 4U;
	int16_t x344 = 175;
	volatile int64_t t65 = -665368951239LL;

    t65 = (((x341*x342)/x343)|x344);

    if (t65 != 175LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x349 = 54U;
	static uint32_t x350 = 18177U;
	int8_t x351 = 1;
	uint32_t t66 = 156836U;

    t66 = (((x349*x350)/x351)|x352);

    if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x354 = INT8_MIN;
	int32_t x355 = -245;
	uint32_t x356 = UINT32_MAX;

    t67 = (((x353*x354)/x355)|x356);

    if (t67 != 4294967295LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x358 = -589;
	int32_t x359 = -1;
	volatile uint64_t t68 = 61858179018LLU;

    t68 = (((x357*x358)/x359)|x360);

    if (t68 != 18446744073709529299LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x362 = UINT64_MAX;
	int64_t x364 = -2LL;
	static volatile uint64_t t69 = 6518252LLU;

    t69 = (((x361*x362)/x363)|x364);

    if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x369 = 50U;
	int64_t x370 = -1LL;
	int32_t x371 = INT32_MIN;

    t70 = (((x369*x370)/x371)|x372);

    if (t70 != -1742LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x378 = UINT8_MAX;
	static int16_t x379 = INT16_MAX;
	volatile int32_t t71 = 611;

    t71 = (((x377*x378)/x379)|x380);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x381 = 1;
	static uint64_t x382 = UINT64_MAX;
	int64_t x383 = INT64_MIN;
	volatile uint16_t x384 = 13575U;
	uint64_t t72 = 36112366154335043LLU;

    t72 = (((x381*x382)/x383)|x384);

    if (t72 != 13575LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x389 = INT16_MAX;
	int8_t x390 = -5;
	static int16_t x391 = INT16_MIN;

    t73 = (((x389*x390)/x391)|x392);

    if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x395 = INT16_MAX;
	uint16_t x396 = 83U;

    t74 = (((x393*x394)/x395)|x396);

    if (t74 != 83U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x398 = INT8_MIN;
	uint64_t x399 = 12056960172LLU;
	int32_t x400 = 6917511;

    t75 = (((x397*x398)/x399)|x400);

    if (t75 != 6917511LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x405 = UINT8_MAX;
	static uint64_t x406 = 181167472552265736LLU;
	int32_t x407 = 116;
	uint64_t t76 = UINT64_MAX;

    t76 = (((x405*x406)/x407)|x408);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x410 = INT16_MIN;
	static int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;

    t77 = (((x409*x410)/x411)|x412);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x418 = 7750876849561833LLU;
	int64_t x419 = -766339799770LL;
	uint8_t x420 = 1U;

    t78 = (((x417*x418)/x419)|x420);

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x421 = INT16_MAX;
	volatile uint64_t x422 = 7411269250LLU;
	volatile int64_t x423 = INT64_MIN;
	static int16_t x424 = 46;

    t79 = (((x421*x422)/x423)|x424);

    if (t79 != 46LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x426 = 18U;
	int16_t x427 = -1;
	int32_t x428 = -33910653;
	volatile int32_t t80 = 10527;

    t80 = (((x425*x426)/x427)|x428);

    if (t80 != -589) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x434 = -832011215LL;
	int32_t x435 = INT32_MAX;
	int64_t t81 = -1922464LL;

    t81 = (((x433*x434)/x435)|x436);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x437 = -1LL;
	uint8_t x438 = 0U;
	int32_t x439 = INT32_MAX;
	uint8_t x440 = UINT8_MAX;
	volatile int64_t t82 = -289778520067LL;

    t82 = (((x437*x438)/x439)|x440);

    if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x445 = 11506254905LLU;
	uint16_t x446 = 4182U;
	static volatile int16_t x447 = -1779;
	static int64_t x448 = INT64_MIN;
	uint64_t t83 = 454015472593LLU;

    t83 = (((x445*x446)/x447)|x448);

    if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x451 = -8913;
	volatile int64_t x452 = 6LL;
	int64_t t84 = 9962390762738514LL;

    t84 = (((x449*x450)/x451)|x452);

    if (t84 != 6LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	uint16_t x455 = 1U;
	int64_t t85 = -3033761649435784608LL;

    t85 = (((x453*x454)/x455)|x456);

    if (t85 != 2714417233334LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	int64_t x460 = INT64_MIN;
	volatile int64_t t86 = 211LL;

    t86 = (((x457*x458)/x459)|x460);

    if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x461 = -1;
	volatile int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MAX;
	volatile int32_t t87 = -214695629;

    t87 = (((x461*x462)/x463)|x464);

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x465 = 3;
	uint16_t x466 = 470U;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = INT16_MAX;
	int32_t t88 = -211202596;

    t88 = (((x465*x466)/x467)|x468);

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x469 = INT8_MAX;
	uint16_t x470 = 1U;
	int32_t x471 = 17317129;
	int64_t x472 = -435982827815LL;
	int64_t t89 = -16185527743929LL;

    t89 = (((x469*x470)/x471)|x472);

    if (t89 != -435982827815LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x473 = 30U;
	volatile int32_t x474 = -22749602;
	int32_t x475 = 83528142;
	uint32_t x476 = UINT32_MAX;
	uint32_t t90 = UINT32_MAX;

    t90 = (((x473*x474)/x475)|x476);

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x478 = -54;
	static uint32_t x479 = 300494U;
	int16_t x480 = INT16_MIN;
	uint32_t t91 = 4761U;

    t91 = (((x477*x478)/x479)|x480);

    if (t91 != 4294934533U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x481 = 140423626U;
	uint32_t x482 = UINT32_MAX;
	int8_t x483 = INT8_MIN;
	static int64_t x484 = INT64_MAX;
	volatile int64_t t92 = INT64_MAX;

    t92 = (((x481*x482)/x483)|x484);

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x485 = -15540795;
	int8_t x486 = 0;
	static uint64_t x487 = UINT64_MAX;
	static uint64_t x488 = 32215393314435975LLU;
	uint64_t t93 = 23LLU;

    t93 = (((x485*x486)/x487)|x488);

    if (t93 != 32215393314435975LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x489 = 67634576409411LLU;
	uint64_t x490 = 37209LLU;
	volatile int64_t x492 = INT64_MAX;
	uint64_t t94 = 1523299803261075704LLU;

    t94 = (((x489*x490)/x491)|x492);

    if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x493 = UINT32_MAX;
	static int16_t x494 = INT16_MAX;
	static int64_t x495 = INT64_MIN;
	uint16_t x496 = 3639U;

    t95 = (((x493*x494)/x495)|x496);

    if (t95 != 3639LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x497 = 16U;
	uint64_t x499 = 25LLU;
	volatile uint64_t t96 = 47017751LLU;

    t96 = (((x497*x498)/x499)|x500);

    if (t96 != 737869762948349595LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x501 = UINT32_MAX;
	static int32_t x502 = INT32_MAX;
	int16_t x503 = -93;
	int8_t x504 = 1;

    t97 = (((x501*x502)/x503)|x504);

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x505 = UINT64_MAX;
	int8_t x506 = -1;
	static volatile int64_t x508 = 1LL;
	volatile uint64_t t98 = 91666120164LLU;

    t98 = (((x505*x506)/x507)|x508);

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x509 = -1;
	uint8_t x510 = 108U;
	static int16_t x511 = 2;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t99 = 11661;

    t99 = (((x509*x510)/x511)|x512);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x517 = -245204;
	uint16_t x518 = 2595U;
	volatile uint16_t x519 = 887U;
	uint32_t x520 = UINT32_MAX;

    t100 = (((x517*x518)/x519)|x520);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x521 = INT16_MIN;
	uint32_t x522 = 0U;
	int8_t x524 = 0;
	int64_t t101 = 11728LL;

    t101 = (((x521*x522)/x523)|x524);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x525 = UINT32_MAX;
	uint8_t x526 = 56U;
	uint16_t x527 = UINT16_MAX;

    t102 = (((x525*x526)/x527)|x528);

    if (t102 != 65663U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x529 = 1;
	int64_t x530 = 11LL;
	int64_t t103 = 0LL;

    t103 = (((x529*x530)/x531)|x532);

    if (t103 != 780451641LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x533 = 0;
	int64_t x534 = 2729455LL;
	int64_t x535 = INT64_MAX;
	volatile int64_t t104 = 909249156017770771LL;

    t104 = (((x533*x534)/x535)|x536);

    if (t104 != 255LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x537 = UINT64_MAX;
	int8_t x538 = INT8_MAX;
	static uint16_t x540 = UINT16_MAX;

    t105 = (((x537*x538)/x539)|x540);

    if (t105 != 4295032831LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x543 = -7956LL;
	int32_t x544 = INT32_MAX;
	static volatile int64_t t106 = 615722LL;

    t106 = (((x541*x542)/x543)|x544);

    if (t106 != 33024003538943LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x549 = 34;
	uint64_t x550 = 590622522239LLU;
	int8_t x551 = 26;
	uint64_t t107 = 718109916946101598LLU;

    t107 = (((x549*x550)/x551)|x552);

    if (t107 != 7391723876277951LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	int8_t x560 = INT8_MIN;
	uint64_t t108 = 2123177144789897LLU;

    t108 = (((x557*x558)/x559)|x560);

    if (t108 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x561 = 161;
	uint16_t x562 = 3U;
	uint64_t x564 = 30501104LLU;
	static volatile uint64_t t109 = 164352LLU;

    t109 = (((x561*x562)/x563)|x564);

    if (t109 != 30501104LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x565 = UINT64_MAX;
	static int16_t x568 = INT16_MAX;
	uint64_t t110 = 3LLU;

    t110 = (((x565*x566)/x567)|x568);

    if (t110 != 32767LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x573 = 627604844800LL;
	int16_t x574 = INT16_MIN;
	volatile uint16_t x575 = 3U;
	int64_t x576 = INT64_MIN;
	static int64_t t111 = 88787LL;

    t111 = (((x573*x574)/x575)|x576);

    if (t111 != -6855118518135466LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x577 = UINT16_MAX;
	int8_t x579 = INT8_MIN;
	static volatile uint64_t x580 = UINT64_MAX;
	volatile uint64_t t112 = UINT64_MAX;

    t112 = (((x577*x578)/x579)|x580);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x582 = 176U;
	volatile uint64_t x583 = 401450766609393773LLU;
	int64_t x584 = -1LL;
	volatile uint64_t t113 = UINT64_MAX;

    t113 = (((x581*x582)/x583)|x584);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x585 = -656680883LL;
	int16_t x586 = INT16_MIN;
	static int32_t x587 = -1;
	volatile uint8_t x588 = 1U;
	volatile int64_t t114 = 18085751LL;

    t114 = (((x585*x586)/x587)|x588);

    if (t114 != -21518119174143LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x589 = -1LL;
	uint32_t x590 = 502231080U;
	volatile uint8_t x591 = UINT8_MAX;
	static int8_t x592 = INT8_MIN;
	static volatile int64_t t115 = -29880714101065LL;

    t115 = (((x589*x590)/x591)|x592);

    if (t115 != -125LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x593 = UINT16_MAX;
	static volatile uint8_t x594 = 69U;
	uint32_t x595 = 184U;
	int32_t x596 = -1;
	uint32_t t116 = UINT32_MAX;

    t116 = (((x593*x594)/x595)|x596);

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x597 = -51;
	volatile int8_t x598 = INT8_MAX;
	volatile int16_t x599 = -3331;
	int32_t t117 = -3623;

    t117 = (((x597*x598)/x599)|x600);

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MIN;
	int16_t x603 = -5349;
	int32_t x604 = 53;
	static int32_t t118 = 17;

    t118 = (((x601*x602)/x603)|x604);

    if (t118 != 1589) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x609 = INT32_MIN;
	uint32_t x610 = 4579342U;
	volatile uint16_t x611 = UINT16_MAX;
	int32_t x612 = INT32_MIN;
	uint32_t t119 = 8288280U;

    t119 = (((x609*x610)/x611)|x612);

    if (t119 != 2147483648U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x613 = -1;
	int16_t x614 = INT16_MIN;
	int32_t x615 = INT32_MIN;
	int32_t t120 = -123651180;

    t120 = (((x613*x614)/x615)|x616);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x617 = -1LL;
	uint32_t x618 = UINT32_MAX;

    t121 = (((x617*x618)/x619)|x620);

    if (t121 != -9223372036821221377LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x621 = INT8_MAX;
	int32_t x623 = 12001;

    t122 = (((x621*x622)/x623)|x624);

    if (t122 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x625 = INT32_MIN;
	static int64_t x626 = -1LL;
	static int16_t x628 = INT16_MIN;
	static int64_t t123 = -18432255082056631LL;

    t123 = (((x625*x626)/x627)|x628);

    if (t123 != -162LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x629 = 6;
	int8_t x630 = -1;
	volatile uint32_t x631 = 15840622U;
	static volatile int32_t x632 = 109102;
	static volatile uint32_t t124 = 120026U;

    t124 = (((x629*x630)/x631)|x632);

    if (t124 != 109359U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x638 = 286U;
	int8_t x639 = -1;
	int8_t x640 = INT8_MIN;
	volatile uint32_t t125 = 5936574U;

    t125 = (((x637*x638)/x639)|x640);

    if (t125 != 4294967168U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x641 = UINT32_MAX;
	uint16_t x642 = 4U;
	volatile int8_t x643 = INT8_MIN;
	static uint64_t x644 = 196LLU;
	uint64_t t126 = 1LLU;

    t126 = (((x641*x642)/x643)|x644);

    if (t126 != 197LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x645 = 122U;
	volatile int8_t x646 = INT8_MIN;
	int16_t x647 = INT16_MIN;
	int64_t x648 = INT64_MIN;
	volatile int64_t t127 = INT64_MIN;

    t127 = (((x645*x646)/x647)|x648);

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x649 = UINT16_MAX;
	static volatile uint64_t x650 = 1562421801866452531LLU;
	uint16_t x651 = 1U;
	static uint64_t x652 = UINT64_MAX;
	uint64_t t128 = UINT64_MAX;

    t128 = (((x649*x650)/x651)|x652);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x653 = 1;
	volatile int8_t x654 = -1;
	int32_t x655 = -104780113;
	volatile uint8_t x656 = UINT8_MAX;
	int32_t t129 = 51364;

    t129 = (((x653*x654)/x655)|x656);

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x672 = 0U;
	int64_t t130 = 1302428434LL;

    t130 = (((x669*x670)/x671)|x672);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x677 = -2198;
	int8_t x678 = -1;
	int8_t x679 = INT8_MIN;
	static int16_t x680 = INT16_MIN;

    t131 = (((x677*x678)/x679)|x680);

    if (t131 != -17) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x682 = 1;
	static volatile int16_t x683 = INT16_MAX;
	int64_t x684 = -1953544890LL;

    t132 = (((x681*x682)/x683)|x684);

    if (t132 != -1953544882LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x685 = -1;
	int16_t x687 = INT16_MAX;
	int64_t x688 = INT64_MAX;
	static volatile int64_t t133 = INT64_MAX;

    t133 = (((x685*x686)/x687)|x688);

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x690 = -1LL;
	uint16_t x691 = 60U;
	int32_t x692 = INT32_MIN;

    t134 = (((x689*x690)/x691)|x692);

    if (t134 != -2111692254LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x697 = -1;
	uint16_t x699 = 878U;
	int64_t x700 = INT64_MAX;

    t135 = (((x697*x698)/x699)|x700);

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x705 = -1;
	int16_t x707 = INT16_MAX;
	static int64_t x708 = INT64_MIN;
	int64_t t136 = INT64_MIN;

    t136 = (((x705*x706)/x707)|x708);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x713 = INT16_MIN;
	static int16_t x714 = INT16_MIN;
	uint16_t x715 = UINT16_MAX;
	uint32_t x716 = UINT32_MAX;
	static volatile uint32_t t137 = UINT32_MAX;

    t137 = (((x713*x714)/x715)|x716);

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x723 = 870313761916LLU;
	int8_t x724 = INT8_MAX;

    t138 = (((x721*x722)/x723)|x724);

    if (t138 != 21195519LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x725 = -10;
	int8_t x726 = INT8_MIN;
	static volatile uint16_t x727 = UINT16_MAX;
	static volatile uint16_t x728 = 1529U;
	static volatile int32_t t139 = -32443;

    t139 = (((x725*x726)/x727)|x728);

    if (t139 != 1529) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x730 = UINT64_MAX;
	int8_t x731 = INT8_MAX;
	uint64_t x732 = 6560404460LLU;
	volatile uint64_t t140 = 431LLU;

    t140 = (((x729*x730)/x731)|x732);

    if (t140 != 6560404461LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x733 = 37U;
	volatile int8_t x734 = -30;
	static int64_t x736 = -1LL;
	volatile int64_t t141 = -1LL;

    t141 = (((x733*x734)/x735)|x736);

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x741 = 34U;
	volatile int16_t x742 = -9;
	static int8_t x743 = 3;
	int8_t x744 = 1;
	volatile int32_t t142 = -767501;

    t142 = (((x741*x742)/x743)|x744);

    if (t142 != -101) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = 0;
	int8_t x747 = 20;

    t143 = (((x745*x746)/x747)|x748);

    if (t143 != -89707882) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x754 = INT8_MIN;
	uint64_t x755 = UINT64_MAX;
	volatile uint64_t t144 = 0LLU;

    t144 = (((x753*x754)/x755)|x756);

    if (t144 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x758 = 147103441303982LLU;
	static int8_t x759 = INT8_MIN;
	uint64_t x760 = 438580027LLU;
	static volatile uint64_t t145 = 1126154625972154566LLU;

    t145 = (((x757*x758)/x759)|x760);

    if (t145 != 438580027LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x761 = INT16_MIN;
	uint16_t x762 = 2165U;
	uint32_t x763 = 14847U;
	volatile int8_t x764 = 13;
	volatile uint32_t t146 = 14459U;

    t146 = (((x761*x762)/x763)|x764);

    if (t146 != 284511U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x769 = UINT64_MAX;
	static int64_t x771 = -1LL;
	static int16_t x772 = INT16_MIN;
	volatile uint64_t t147 = 152496LLU;

    t147 = (((x769*x770)/x771)|x772);

    if (t147 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x773 = -1;
	int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MAX;
	int64_t x776 = -16708588LL;
	int64_t t148 = 1417455LL;

    t148 = (((x773*x774)/x775)|x776);

    if (t148 != -16708330LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x777 = INT32_MAX;
	int32_t x778 = -1;

    t149 = (((x777*x778)/x779)|x780);

    if (t149 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x782 = -1;
	static int16_t x783 = INT16_MAX;
	int64_t x784 = 144148480LL;
	int64_t t150 = -155982LL;

    t150 = (((x781*x782)/x783)|x784);

    if (t150 != 144148480LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x791 = 7135099U;
	volatile int8_t x792 = INT8_MIN;
	uint32_t t151 = 869U;

    t151 = (((x789*x790)/x791)|x792);

    if (t151 != 4294967168U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x793 = INT8_MAX;
	uint64_t x794 = 8232163590307LLU;
	static uint8_t x795 = 95U;
	static uint64_t t152 = UINT64_MAX;

    t152 = (((x793*x794)/x795)|x796);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x802 = 2074610508LLU;
	int64_t x803 = INT64_MAX;
	uint64_t x804 = UINT64_MAX;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (((x801*x802)/x803)|x804);

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x805 = 2;
	int64_t x808 = INT64_MAX;
	static volatile int64_t t154 = INT64_MAX;

    t154 = (((x805*x806)/x807)|x808);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x809 = 431423U;
	volatile uint16_t x812 = 16U;

    t155 = (((x809*x810)/x811)|x812);

    if (t155 != -428009LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x817 = 116951LLU;
	int64_t x818 = 1LL;
	static int8_t x819 = INT8_MIN;
	uint32_t x820 = 304431635U;

    t156 = (((x817*x818)/x819)|x820);

    if (t156 != 304431635LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x825 = -1;
	static volatile uint16_t x826 = 29U;
	int16_t x827 = INT16_MAX;

    t157 = (((x825*x826)/x827)|x828);

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x829 = 5U;
	uint64_t x830 = UINT64_MAX;
	uint64_t x831 = 405200723499342LLU;
	volatile int64_t x832 = INT64_MIN;
	static volatile uint64_t t158 = 1759378118LLU;

    t158 = (((x829*x830)/x831)|x832);

    if (t158 != 9223372036854821332LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x837 = -1;
	int8_t x838 = INT8_MIN;
	static volatile int64_t x839 = INT64_MAX;
	volatile uint32_t x840 = 277645293U;
	volatile int64_t t159 = -1741805135130410462LL;

    t159 = (((x837*x838)/x839)|x840);

    if (t159 != 277645293LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x842 = 0;
	uint32_t x843 = 80524U;
	volatile int16_t x844 = -3037;
	uint32_t t160 = 252422981U;

    t160 = (((x841*x842)/x843)|x844);

    if (t160 != 4294964259U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	volatile int16_t x846 = INT16_MIN;
	uint16_t x847 = 28U;
	static int8_t x848 = INT8_MAX;
	static uint64_t t161 = 1391080463LLU;

    t161 = (((x845*x846)/x847)|x848);

    if (t161 != 1279LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x849 = -1;
	uint8_t x851 = 74U;
	int64_t x852 = INT64_MIN;

    t162 = (((x849*x850)/x851)|x852);

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x853 = 66U;
	static volatile uint8_t x855 = 2U;
	uint16_t x856 = UINT16_MAX;

    t163 = (((x853*x854)/x855)|x856);

    if (t163 != 195656883666550783LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x857 = -1;
	volatile uint32_t x858 = 804U;
	int32_t x859 = -4;
	uint32_t x860 = 1U;

    t164 = (((x857*x858)/x859)|x860);

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x865 = -3;
	volatile uint16_t x866 = UINT16_MAX;
	static int8_t x867 = -1;
	uint8_t x868 = 6U;
	static volatile int32_t t165 = 70;

    t165 = (((x865*x866)/x867)|x868);

    if (t165 != 196607) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x873 = UINT16_MAX;
	static volatile uint32_t x874 = 1224041U;
	uint32_t x875 = 2951141U;
	static volatile int16_t x876 = -1;
	volatile uint32_t t166 = UINT32_MAX;

    t166 = (((x873*x874)/x875)|x876);

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x878 = -1040792;
	int64_t t167 = 16224135978658LL;

    t167 = (((x877*x878)/x879)|x880);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x882 = 71U;
	static int8_t x883 = -1;
	volatile int32_t t168 = -44090373;

    t168 = (((x881*x882)/x883)|x884);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x885 = 6;
	int16_t x886 = 26;
	int64_t x887 = INT64_MIN;
	int32_t x888 = 1133742;
	int64_t t169 = -2314887LL;

    t169 = (((x885*x886)/x887)|x888);

    if (t169 != 1133742LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x897 = -1;
	static int16_t x898 = 64;
	uint16_t x900 = UINT16_MAX;
	static int32_t t170 = 46007264;

    t170 = (((x897*x898)/x899)|x900);

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x905 = 13;
	static volatile uint8_t x906 = UINT8_MAX;
	uint16_t x907 = 112U;
	volatile int32_t x908 = 2647;

    t171 = (((x905*x906)/x907)|x908);

    if (t171 != 2655) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x910 = INT64_MIN;
	static volatile uint16_t x911 = 5286U;
	static volatile int64_t t172 = -2080LL;

    t172 = (((x909*x910)/x911)|x912);

    if (t172 != 255LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x921 = 1;
	static int16_t x922 = INT16_MIN;
	static int32_t x923 = 1817681;
	uint64_t x924 = UINT64_MAX;
	static uint64_t t173 = UINT64_MAX;

    t173 = (((x921*x922)/x923)|x924);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x941 = 0;
	int8_t x942 = -1;
	int8_t x943 = INT8_MIN;
	volatile int64_t t174 = INT64_MIN;

    t174 = (((x941*x942)/x943)|x944);

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x957 = 49;
	int16_t x958 = INT16_MIN;
	int16_t x959 = INT16_MAX;
	int64_t x960 = 80414720846896958LL;

    t175 = (((x957*x958)/x959)|x960);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x961 = INT16_MIN;
	int8_t x962 = -1;
	static int8_t x963 = INT8_MAX;
	int32_t t176 = 3;

    t176 = (((x961*x962)/x963)|x964);

    if (t176 != 302) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x977 = UINT32_MAX;
	uint8_t x978 = UINT8_MAX;
	int32_t x979 = INT32_MIN;
	int8_t x980 = -7;

    t177 = (((x977*x978)/x979)|x980);

    if (t177 != 4294967289U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x981 = 0;
	static int16_t x983 = INT16_MIN;
	volatile int64_t x984 = INT64_MIN;
	int64_t t178 = INT64_MIN;

    t178 = (((x981*x982)/x983)|x984);

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x986 = INT8_MIN;
	int16_t x987 = INT16_MIN;
	int16_t x988 = INT16_MIN;
	int32_t t179 = -422530492;

    t179 = (((x985*x986)/x987)|x988);

    if (t179 != -32765) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x989 = 21224U;
	volatile int16_t x990 = INT16_MIN;
	int32_t x991 = 1;
	uint64_t x992 = UINT64_MAX;
	uint64_t t180 = UINT64_MAX;

    t180 = (((x989*x990)/x991)|x992);

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x993 = 89U;
	uint64_t x994 = 129695056640038LLU;
	volatile int8_t x995 = -1;
	int8_t x996 = 1;
	volatile uint64_t t181 = 109049969151511321LLU;

    t181 = (((x993*x994)/x995)|x996);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x997 = INT16_MIN;
	uint32_t x998 = UINT32_MAX;
	int64_t x1000 = INT64_MIN;

    t182 = (((x997*x998)/x999)|x1000);

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1009 = -1;
	uint16_t x1010 = UINT16_MAX;
	int32_t x1011 = 36213730;
	volatile int32_t t183 = 52537958;

    t183 = (((x1009*x1010)/x1011)|x1012);

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1013 = 253LLU;
	static volatile uint64_t x1014 = 10LLU;
	int8_t x1015 = INT8_MIN;
	static int8_t x1016 = INT8_MAX;
	uint64_t t184 = 5884836571301701LLU;

    t184 = (((x1013*x1014)/x1015)|x1016);

    if (t184 != 127LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1021 = 2U;
	volatile int8_t x1022 = INT8_MIN;
	static int8_t x1024 = INT8_MAX;
	volatile int32_t t185 = -846669264;

    t185 = (((x1021*x1022)/x1023)|x1024);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1025 = -249;
	uint8_t x1026 = UINT8_MAX;
	int32_t x1027 = INT32_MIN;
	volatile int32_t t186 = 36785;

    t186 = (((x1025*x1026)/x1027)|x1028);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1029 = 149U;
	static uint32_t x1030 = UINT32_MAX;
	static volatile uint16_t x1031 = 1409U;
	volatile int64_t x1032 = INT64_MIN;

    t187 = (((x1029*x1030)/x1031)|x1032);

    if (t187 != -9223372036851727571LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x1033 = UINT16_MAX;
	volatile int64_t x1034 = -1LL;
	static volatile uint16_t x1035 = 3U;
	uint64_t x1036 = 251048031859869LLU;
	volatile uint64_t t188 = 3396361591LLU;

    t188 = (((x1033*x1034)/x1035)|x1036);

    if (t188 != 18446744073709534911LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1041 = 15U;
	uint64_t x1042 = UINT64_MAX;
	static int16_t x1043 = INT16_MAX;
	int64_t x1044 = 7LL;
	volatile uint64_t t189 = 132448573LLU;

    t189 = (((x1041*x1042)/x1043)|x1044);

    if (t189 != 562967133814807LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1045 = INT8_MIN;
	static uint8_t x1046 = 31U;
	volatile int32_t x1047 = INT32_MAX;
	int64_t x1048 = -1LL;
	volatile int64_t t190 = -1222921430500LL;

    t190 = (((x1045*x1046)/x1047)|x1048);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1049 = -103082;
	volatile uint16_t x1050 = 864U;
	int16_t x1052 = 3458;
	int32_t t191 = 209395;

    t191 = (((x1049*x1050)/x1051)|x1052);

    if (t191 != 8908718) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1053 = 39627868194LLU;
	uint8_t x1054 = UINT8_MAX;
	volatile int64_t x1055 = INT64_MIN;
	static volatile uint32_t x1056 = UINT32_MAX;
	volatile uint64_t t192 = 2028261150680025280LLU;

    t192 = (((x1053*x1054)/x1055)|x1056);

    if (t192 != 4294967295LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1057 = INT16_MAX;
	volatile int8_t x1058 = 29;
	uint16_t x1059 = UINT16_MAX;
	int32_t x1060 = INT32_MIN;
	volatile int32_t t193 = 113791;

    t193 = (((x1057*x1058)/x1059)|x1060);

    if (t193 != -2147483634) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1065 = 1514U;
	volatile int32_t x1067 = INT32_MIN;
	static uint8_t x1068 = 23U;
	uint32_t t194 = 75U;

    t194 = (((x1065*x1066)/x1067)|x1068);

    if (t194 != 23U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x1069 = 128678;
	int8_t x1070 = INT8_MIN;
	uint16_t x1071 = 1915U;
	int16_t x1072 = 0;
	volatile int32_t t195 = -186;

    t195 = (((x1069*x1070)/x1071)|x1072);

    if (t195 != -8600) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1077 = INT32_MIN;
	uint16_t x1079 = UINT16_MAX;
	uint8_t x1080 = 2U;
	static volatile uint64_t t196 = 32029LLU;

    t196 = (((x1077*x1078)/x1079)|x1080);

    if (t196 != 266561022825235LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1081 = INT8_MIN;
	int64_t x1083 = -1LL;
	volatile uint32_t x1084 = UINT32_MAX;
	int64_t t197 = 2011453840365723529LL;

    t197 = (((x1081*x1082)/x1083)|x1084);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1085 = INT32_MAX;
	int16_t x1086 = -1;
	uint32_t x1087 = 1449801U;
	int64_t x1088 = INT64_MAX;
	int64_t t198 = INT64_MAX;

    t198 = (((x1085*x1086)/x1087)|x1088);

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1091 = 28U;
	int32_t t199 = 74534;

    t199 = (((x1089*x1090)/x1091)|x1092);

    if (t199 != -2339) { NG(); } else { ; }
	
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

