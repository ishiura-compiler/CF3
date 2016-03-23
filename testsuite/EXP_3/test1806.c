
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

static int32_t t0 = 17;
int64_t x9 = -1LL;
int32_t x10 = INT32_MAX;
int32_t x29 = -1;
int64_t x31 = INT64_MIN;
volatile int8_t x32 = 0;
int32_t t5 = -12;
uint32_t x37 = UINT32_MAX;
uint8_t x41 = 3U;
uint64_t x62 = UINT64_MAX;
int8_t x69 = INT8_MAX;
volatile uint32_t x70 = 199198624U;
volatile uint16_t x83 = 368U;
int32_t x86 = INT32_MAX;
static uint32_t x88 = UINT32_MAX;
static volatile uint64_t x92 = 2988892191614443LLU;
volatile int64_t t18 = 967692LL;
volatile int32_t x100 = INT32_MIN;
int32_t x109 = INT32_MIN;
int64_t x110 = -72414LL;
volatile int64_t t21 = -1977060806667LL;
uint64_t x128 = 515LLU;
int8_t x133 = -9;
static uint64_t x134 = 60009LLU;
int8_t x136 = INT8_MIN;
static volatile uint64_t t27 = 109678399358139LLU;
volatile int32_t t28 = 58476;
uint16_t x150 = 14U;
volatile int8_t x158 = -50;
int32_t x159 = INT32_MIN;
static volatile int32_t t31 = -1513850;
int16_t x168 = 2884;
volatile uint16_t x169 = 1U;
volatile int8_t x187 = INT8_MIN;
volatile uint8_t x199 = 61U;
volatile int64_t t38 = -6977528829330LL;
volatile int32_t x219 = -3;
uint32_t x223 = UINT32_MAX;
int32_t t42 = 605430692;
int16_t x225 = INT16_MIN;
volatile uint8_t x231 = UINT8_MAX;
int64_t t45 = -11787070342LL;
static uint32_t x237 = 6979753U;
static int64_t x244 = INT64_MIN;
int32_t x250 = -1;
volatile int64_t x251 = -6675714036LL;
volatile int64_t t48 = 15539LL;
static int16_t x253 = -1;
volatile uint64_t x261 = UINT64_MAX;
int16_t x264 = INT16_MIN;
uint64_t x267 = UINT64_MAX;
uint64_t x269 = 31890828579371877LLU;
uint64_t t53 = 9LLU;
uint64_t x273 = 334016948LLU;
int8_t x275 = 3;
uint8_t x276 = 2U;
static volatile int32_t x278 = 7034;
volatile uint16_t x283 = UINT16_MAX;
int32_t x299 = -13;
int8_t x305 = -1;
static int32_t x311 = INT32_MAX;
static int64_t x312 = -1LL;
volatile int32_t t61 = -1;
uint16_t x338 = 10U;
volatile int32_t t67 = 1;
int8_t x349 = 0;
uint8_t x357 = 27U;
int64_t x360 = 106638107174LL;
static uint32_t x364 = 3242834U;
uint64_t t71 = 105289LLU;
static int64_t x395 = INT64_MIN;
int32_t t76 = -14315;
int32_t x411 = -1;
uint32_t x418 = 2424704U;
int64_t x435 = INT64_MIN;
uint16_t x440 = 8U;
uint32_t x442 = UINT32_MAX;
volatile int64_t x443 = INT64_MIN;
int32_t x448 = INT32_MAX;
volatile uint32_t x450 = 1U;
volatile uint64_t t87 = 1160830642725570621LLU;
static int16_t x459 = INT16_MIN;
volatile int32_t x471 = -678353132;
volatile uint64_t x473 = 12110949607LLU;
uint64_t x475 = 3140220790860962LLU;
int16_t x479 = -398;
volatile int32_t x480 = -1;
static int32_t t95 = 244253;
uint8_t x502 = 10U;
uint32_t t97 = 22810202U;
int32_t x516 = -1;
volatile uint32_t t99 = 3U;
int32_t x521 = -68;
int64_t x525 = -68683937LL;
uint32_t x527 = 474581U;
volatile int64_t x528 = 57971057LL;
int8_t x533 = -1;
int8_t x534 = INT8_MIN;
int32_t t102 = 13;
static int32_t x539 = INT32_MIN;
volatile int64_t x540 = -2020516043602LL;
int16_t x549 = 2;
int32_t x560 = INT32_MIN;
int32_t t106 = 42502335;
int32_t x561 = INT32_MIN;
static uint32_t x562 = 26721U;
static int8_t x569 = INT8_MAX;
static int16_t x571 = INT16_MAX;
volatile int32_t t109 = 54630;
int64_t x579 = -1LL;
uint32_t x580 = 1U;
int64_t t111 = -34LL;
uint8_t x585 = UINT8_MAX;
int16_t x592 = INT16_MIN;
int64_t t115 = 451824320779615615LL;
int16_t x598 = INT16_MIN;
uint32_t x611 = 2027889472U;
int16_t x613 = INT16_MIN;
int16_t x614 = -319;
volatile uint32_t t121 = 10819U;
volatile uint8_t x634 = 0U;
int8_t x638 = INT8_MAX;
static int8_t x653 = INT8_MIN;
int32_t t127 = 25753625;
volatile uint32_t t128 = 656770198U;
uint32_t x663 = UINT32_MAX;
int8_t x664 = INT8_MIN;
uint16_t x673 = UINT16_MAX;
int32_t x676 = -1;
int32_t t133 = 3870238;
volatile int64_t x692 = INT64_MIN;
static int32_t t134 = 14123;
static int8_t x693 = 29;
static int8_t x698 = INT8_MIN;
volatile int8_t x704 = INT8_MAX;
int8_t x706 = -6;
volatile int32_t t138 = 1674177;
volatile uint16_t x711 = 443U;
int32_t x717 = INT32_MIN;
uint16_t x718 = 1U;
volatile int32_t t140 = 182500615;
volatile int32_t x724 = 3204;
int64_t t142 = -205284667497LL;
int64_t x729 = -1LL;
int64_t x736 = INT64_MIN;
uint32_t x739 = UINT32_MAX;
int8_t x742 = 4;
uint64_t t148 = 43LLU;
int8_t x756 = 57;
uint8_t x764 = UINT8_MAX;
static int64_t x768 = INT64_MAX;
static uint32_t x769 = 2680305U;
uint32_t t152 = 2116U;
int8_t x774 = -30;
uint32_t x775 = UINT32_MAX;
uint16_t x777 = 15746U;
volatile uint16_t x779 = UINT16_MAX;
uint64_t x781 = UINT64_MAX;
int8_t x789 = INT8_MIN;
int8_t x791 = 1;
int32_t x819 = 2972;
static int16_t x822 = 60;
volatile int8_t x823 = -1;
volatile int32_t t163 = 33;
static uint32_t x832 = 459935663U;
volatile int8_t x833 = -1;
volatile int16_t x835 = INT16_MIN;
int8_t x858 = INT8_MIN;
int64_t x859 = -2129073820LL;
volatile int8_t x861 = INT8_MAX;
int64_t x862 = -1LL;
uint16_t x863 = UINT16_MAX;
int32_t x870 = -1;
uint32_t x874 = 19U;
static int8_t x876 = INT8_MIN;
static int16_t x888 = INT16_MIN;
int8_t x896 = INT8_MIN;
int64_t x905 = 347633126369LL;
static int64_t t176 = 43220498LL;
uint16_t x909 = 35U;
uint32_t x914 = 326571U;
int64_t x916 = -1LL;
int16_t x917 = INT16_MAX;
uint16_t x918 = UINT16_MAX;
int64_t x929 = -1LL;
int64_t x943 = -1087129785523059413LL;
int32_t t184 = -129475503;
int32_t x955 = 7;
volatile int16_t x957 = INT16_MIN;
uint32_t x959 = 49013U;
volatile int8_t x960 = -28;
uint64_t x962 = 0LLU;
static uint64_t t188 = 261258LLU;
uint64_t x968 = 68978403164LLU;
int16_t x972 = INT16_MAX;
static uint64_t t191 = 685131814453980982LLU;
int16_t x978 = INT16_MIN;
uint8_t x982 = UINT8_MAX;
uint32_t x983 = 18952U;
uint32_t x984 = 7598728U;
int32_t x992 = 0;
volatile uint8_t x994 = 0U;
volatile int64_t x996 = INT64_MIN;
int16_t x1001 = INT16_MIN;
volatile int32_t t197 = 65162259;
int32_t x1013 = -1;
uint32_t x1016 = 30216770U;


void f0(void) {
    	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = 3U;
	uint8_t x7 = 2U;
	uint32_t x8 = 254U;

    t0 = ((x5*x6)^(x7<=x8));

    if (t0 != 196604) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x11 = 15121U;
	static uint16_t x12 = 120U;
	int64_t t1 = -127LL;

    t1 = ((x9*x10)^(x11<=x12));

    if (t1 != -2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = -1LL;
	int32_t x18 = 58908;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile int64_t t2 = -604LL;

    t2 = ((x17*x18)^(x19<=x20));

    if (t2 != -58907LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x21 = INT32_MAX;
	int8_t x22 = -1;
	volatile int8_t x23 = INT8_MAX;
	uint32_t x24 = 1752U;
	int32_t t3 = INT32_MIN;

    t3 = ((x21*x22)^(x23<=x24));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x25 = 25U;
	uint64_t x26 = 434LLU;
	uint8_t x27 = 7U;
	int32_t x28 = INT32_MIN;
	uint64_t t4 = 420306148528LLU;

    t4 = ((x25*x26)^(x27<=x28));

    if (t4 != 10850LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x30 = -1;

    t5 = ((x29*x30)^(x31<=x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = 15U;
	int64_t x34 = -4729LL;
	volatile int16_t x35 = INT16_MAX;
	static int16_t x36 = -87;
	static int64_t t6 = -3763218267764361825LL;

    t6 = ((x33*x34)^(x35<=x36));

    if (t6 != -70935LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x38 = -137;
	static volatile uint16_t x39 = UINT16_MAX;
	uint16_t x40 = 33U;
	volatile uint32_t t7 = 936566507U;

    t7 = ((x37*x38)^(x39<=x40));

    if (t7 != 137U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x42 = 863U;
	uint64_t x43 = UINT64_MAX;
	uint16_t x44 = 2533U;
	int32_t t8 = -194;

    t8 = ((x41*x42)^(x43<=x44));

    if (t8 != 2589) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 6739U;
	volatile int32_t x46 = INT32_MAX;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile uint32_t t9 = 2U;

    t9 = ((x45*x46)^(x47<=x48));

    if (t9 != 2147476908U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x61 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile int8_t x64 = 1;
	volatile uint64_t t10 = 6544484482LLU;

    t10 = ((x61*x62)^(x63<=x64));

    if (t10 != 32768LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int16_t x66 = INT16_MIN;
	static uint64_t x67 = 2370419702359LLU;
	int16_t x68 = INT16_MAX;
	volatile uint64_t t11 = 10LLU;

    t11 = ((x65*x66)^(x67<=x68));

    if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x71 = UINT8_MAX;
	static int8_t x72 = -1;
	volatile uint32_t t12 = 5082U;

    t12 = ((x69*x70)^(x71<=x72));

    if (t12 != 3823388768U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x73 = 25U;
	uint8_t x74 = 1U;
	uint8_t x75 = 46U;
	volatile uint16_t x76 = 1U;
	int32_t t13 = -537249;

    t13 = ((x73*x74)^(x75<=x76));

    if (t13 != 25) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x77 = UINT64_MAX;
	int8_t x78 = -1;
	int64_t x79 = INT64_MIN;
	static volatile int8_t x80 = -1;
	uint64_t t14 = 992933LLU;

    t14 = ((x77*x78)^(x79<=x80));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = 7993418804676LL;
	static int16_t x82 = INT16_MIN;
	volatile int32_t x84 = INT32_MAX;
	volatile int64_t t15 = -18876170033088053LL;

    t15 = ((x81*x82)^(x83<=x84));

    if (t15 != -261928347391623167LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x85 = -11165LL;
	uint8_t x87 = 14U;
	int64_t t16 = -4LL;

    t16 = ((x85*x86)^(x87<=x88));

    if (t16 != -23976654918756LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = UINT8_MAX;
	volatile uint8_t x90 = 40U;
	volatile uint64_t x91 = 12549825LLU;
	int32_t t17 = 6897524;

    t17 = ((x89*x90)^(x91<=x92));

    if (t17 != 10201) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = 54LL;
	int8_t x94 = INT8_MIN;
	volatile int32_t x95 = INT32_MAX;
	volatile int64_t x96 = 773679671937LL;

    t18 = ((x93*x94)^(x95<=x96));

    if (t18 != -6911LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x97 = 44U;
	static int8_t x98 = INT8_MIN;
	int16_t x99 = -850;
	volatile int32_t t19 = -32409183;

    t19 = ((x97*x98)^(x99<=x100));

    if (t19 != -5632) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x105 = UINT8_MAX;
	static int8_t x106 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = -1;
	volatile int32_t t20 = -519835701;

    t20 = ((x105*x106)^(x107<=x108));

    if (t20 != -32640) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x111 = 434538LLU;
	int32_t x112 = INT32_MAX;

    t21 = ((x109*x110)^(x111<=x112));

    if (t21 != 155507880886273LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x113 = INT8_MIN;
	int8_t x114 = -59;
	int16_t x115 = INT16_MIN;
	static uint32_t x116 = UINT32_MAX;
	int32_t t22 = 1928;

    t22 = ((x113*x114)^(x115<=x116));

    if (t22 != 7553) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x117 = -1256495701LL;
	int16_t x118 = 244;
	int32_t x119 = 546787276;
	uint64_t x120 = 12127LLU;
	volatile int64_t t23 = 4731167850942734LL;

    t23 = ((x117*x118)^(x119<=x120));

    if (t23 != -306584951044LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x121 = -23;
	volatile int8_t x122 = 15;
	int32_t x123 = INT32_MIN;
	static int8_t x124 = -1;
	volatile int32_t t24 = -116916;

    t24 = ((x121*x122)^(x123<=x124));

    if (t24 != -346) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = INT64_MAX;
	int64_t x126 = -1LL;
	int16_t x127 = INT16_MIN;
	int64_t t25 = 422779696605640LL;

    t25 = ((x125*x126)^(x127<=x128));

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x129 = 5U;
	uint16_t x130 = 2U;
	static int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t26 = 252942;

    t26 = ((x129*x130)^(x131<=x132));

    if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x135 = INT8_MIN;

    t27 = ((x133*x134)^(x135<=x136));

    if (t27 != 18446744073709011534LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x141 = 918086714;
	volatile int8_t x142 = 2;
	uint16_t x143 = 17327U;
	static int32_t x144 = 485672449;

    t28 = ((x141*x142)^(x143<=x144));

    if (t28 != 1836173429) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	uint64_t x147 = 9852101LLU;
	int32_t x148 = INT32_MIN;
	static int32_t t29 = 680340;

    t29 = ((x145*x146)^(x147<=x148));

    if (t29 != -65536) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x149 = 12462174556878093LL;
	static uint16_t x151 = 0U;
	volatile int8_t x152 = INT8_MIN;
	int64_t t30 = 0LL;

    t30 = ((x149*x150)^(x151<=x152));

    if (t30 != 174470443796293302LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x157 = -1;
	uint8_t x160 = UINT8_MAX;

    t31 = ((x157*x158)^(x159<=x160));

    if (t31 != 51) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x165 = -4801;
	int32_t x166 = -1;
	static int64_t x167 = -11512737521LL;
	int32_t t32 = 101;

    t32 = ((x165*x166)^(x167<=x168));

    if (t32 != 4800) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x170 = INT64_MAX;
	int16_t x171 = 0;
	int16_t x172 = -82;
	int64_t t33 = INT64_MAX;

    t33 = ((x169*x170)^(x171<=x172));

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x173 = 2507535935LLU;
	static uint64_t x174 = 16418070941201047LLU;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 2674U;
	uint64_t t34 = 1429622LLU;

    t34 = ((x173*x174)^(x175<=x176));

    if (t34 != 12847058131402083624LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MAX;
	static volatile int16_t x183 = 2253;
	int8_t x184 = INT8_MAX;
	static uint32_t t35 = 7U;

    t35 = ((x181*x182)^(x183<=x184));

    if (t35 != 4294934529U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x185 = 8660LL;
	static int64_t x186 = 302158986860LL;
	int8_t x188 = INT8_MIN;
	int64_t t36 = 6160491402282LL;

    t36 = ((x185*x186)^(x187<=x188));

    if (t36 != 2616696826207601LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = -1;
	int8_t x190 = -56;
	int16_t x191 = -2675;
	int32_t x192 = 195150960;
	static volatile int32_t t37 = -875;

    t37 = ((x189*x190)^(x191<=x192));

    if (t37 != 57) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x197 = 1;
	int64_t x198 = INT64_MIN;
	volatile uint32_t x200 = 2029751452U;

    t38 = ((x197*x198)^(x199<=x200));

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x201 = 1594U;
	uint64_t x202 = 87171LLU;
	int32_t x203 = 21633;
	volatile uint16_t x204 = 2712U;
	uint64_t t39 = 19821012819182798LLU;

    t39 = ((x201*x202)^(x203<=x204));

    if (t39 != 138950574LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x209 = -1;
	uint8_t x210 = 39U;
	uint16_t x211 = 14307U;
	uint64_t x212 = UINT64_MAX;
	int32_t t40 = -16613;

    t40 = ((x209*x210)^(x211<=x212));

    if (t40 != -40) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x217 = UINT32_MAX;
	static int8_t x218 = 1;
	uint8_t x220 = 7U;
	uint32_t t41 = 305133U;

    t41 = ((x217*x218)^(x219<=x220));

    if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x221 = -1108;
	volatile int16_t x222 = -1;
	static uint8_t x224 = UINT8_MAX;

    t42 = ((x221*x222)^(x223<=x224));

    if (t42 != 1108) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x226 = -165677323411LL;
	static uint8_t x227 = 1U;
	uint64_t x228 = UINT64_MAX;
	int64_t t43 = -503538775121629LL;

    t43 = ((x225*x226)^(x227<=x228));

    if (t43 != 5428914533531649LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x229 = INT8_MAX;
	volatile int16_t x230 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	volatile int32_t t44 = 19260;

    t44 = ((x229*x230)^(x231<=x232));

    if (t44 != -4161536) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x233 = 8992815LL;
	int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MAX;
	uint16_t x236 = 204U;

    t45 = ((x233*x234)^(x235<=x236));

    if (t45 != -1151080320LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x238 = 180215895LLU;
	static int64_t x239 = INT64_MAX;
	static uint32_t x240 = 394151287U;
	volatile uint64_t t46 = 14874116LLU;

    t46 = ((x237*x238)^(x239<=x240));

    if (t46 != 1257862433773935LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = -1LL;
	volatile int64_t x243 = INT64_MIN;
	int64_t t47 = -401387312LL;

    t47 = ((x241*x242)^(x243<=x244));

    if (t47 != 2147483649LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x249 = 55781617722643LL;
	uint64_t x252 = 7300525LLU;

    t48 = ((x249*x250)^(x251<=x252));

    if (t48 != -55781617722643LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x254 = -1;
	int64_t x255 = -2648042699463892LL;
	volatile uint8_t x256 = UINT8_MAX;
	static volatile int32_t t49 = -924811;

    t49 = ((x253*x254)^(x255<=x256));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int32_t t50 = 79;

    t50 = ((x257*x258)^(x259<=x260));

    if (t50 != -4194175) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x262 = 15U;
	int32_t x263 = 12428696;
	volatile uint64_t t51 = 1089LLU;

    t51 = ((x261*x262)^(x263<=x264));

    if (t51 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x265 = 1359U;
	static int8_t x266 = -24;
	static volatile int8_t x268 = INT8_MAX;
	volatile int32_t t52 = 31695197;

    t52 = ((x265*x266)^(x267<=x268));

    if (t52 != -32616) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x270 = 298;
	int64_t x271 = -42LL;
	uint16_t x272 = 278U;

    t53 = ((x269*x270)^(x271<=x272));

    if (t53 != 9503466916652819347LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x274 = INT16_MIN;
	uint64_t t54 = 4LLU;

    t54 = ((x273*x274)^(x275<=x276));

    if (t54 != 18446733128642199552LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x277 = -1;
	uint32_t x279 = 131U;
	uint32_t x280 = 6661083U;
	int32_t t55 = 114836;

    t55 = ((x277*x278)^(x279<=x280));

    if (t55 != -7033) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x281 = 40U;
	int8_t x282 = INT8_MAX;
	uint32_t x284 = UINT32_MAX;
	volatile uint32_t t56 = 8986158U;

    t56 = ((x281*x282)^(x283<=x284));

    if (t56 != 5081U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x285 = 3064224U;
	uint64_t x286 = 28064985800553LLU;
	int64_t x287 = 68810LL;
	volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t57 = 31171500866643031LLU;

    t57 = ((x285*x286)^(x287<=x288));

    if (t57 != 12210426754875509408LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x289 = 10U;
	uint32_t x290 = 1237318U;
	uint64_t x291 = 811882597117LLU;
	volatile uint8_t x292 = 0U;
	uint32_t t58 = 0U;

    t58 = ((x289*x290)^(x291<=x292));

    if (t58 != 12373180U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x297 = INT16_MIN;
	static uint16_t x298 = 13244U;
	int64_t x300 = 43573040LL;
	volatile int32_t t59 = -8;

    t59 = ((x297*x298)^(x299<=x300));

    if (t59 != -433979391) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MIN;
	int32_t x308 = -29686917;
	static volatile int32_t t60 = 99518653;

    t60 = ((x305*x306)^(x307<=x308));

    if (t60 != -255) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x309 = INT8_MAX;
	static volatile int8_t x310 = 12;

    t61 = ((x309*x310)^(x311<=x312));

    if (t61 != 1524) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x313 = 30U;
	int32_t x314 = INT32_MIN;
	static volatile uint32_t x315 = 14853438U;
	volatile int64_t x316 = INT64_MAX;
	uint32_t t62 = 1931U;

    t62 = ((x313*x314)^(x315<=x316));

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = INT8_MIN;
	static int32_t x319 = -1598117;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t63 = 0;

    t63 = ((x317*x318)^(x319<=x320));

    if (t63 != 4194305) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x321 = UINT32_MAX;
	int16_t x322 = 823;
	static int8_t x323 = 0;
	uint64_t x324 = UINT64_MAX;
	uint32_t t64 = 585413U;

    t64 = ((x321*x322)^(x323<=x324));

    if (t64 != 4294966472U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x329 = 1U;
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = -30;
	static volatile int32_t x332 = -1;
	uint32_t t65 = 44793709U;

    t65 = ((x329*x330)^(x331<=x332));

    if (t65 != 65534U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x333 = 218;
	uint8_t x334 = 12U;
	int8_t x335 = -1;
	int16_t x336 = INT16_MIN;
	int32_t t66 = -92;

    t66 = ((x333*x334)^(x335<=x336));

    if (t66 != 2616) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x337 = INT8_MAX;
	uint64_t x339 = 13031725906LLU;
	int64_t x340 = INT64_MAX;

    t67 = ((x337*x338)^(x339<=x340));

    if (t67 != 1271) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x345 = 121U;
	volatile int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	int32_t x348 = 62513734;
	volatile int32_t t68 = -730;

    t68 = ((x345*x346)^(x347<=x348));

    if (t68 != -3964927) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x350 = INT32_MAX;
	volatile int8_t x351 = INT8_MIN;
	volatile int64_t x352 = INT64_MIN;
	int32_t t69 = 19677;

    t69 = ((x349*x350)^(x351<=x352));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x358 = 4393193657899864LLU;
	int8_t x359 = -1;
	volatile uint64_t t70 = 33968LLU;

    t70 = ((x357*x358)^(x359<=x360));

    if (t70 != 118616228763296329LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x361 = 25030894150LLU;
	int8_t x362 = INT8_MIN;
	int16_t x363 = 6574;

    t71 = ((x361*x362)^(x363<=x364));

    if (t71 != 18446740869755100417LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x369 = 20U;
	uint64_t x370 = 1640610932856LLU;
	int64_t x371 = -43LL;
	uint32_t x372 = 4U;
	static uint64_t t72 = 421136108486LLU;

    t72 = ((x369*x370)^(x371<=x372));

    if (t72 != 32812218657121LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x377 = -1;
	static int32_t x378 = -1;
	int16_t x379 = 444;
	static volatile int64_t x380 = -1LL;
	volatile int32_t t73 = 12628654;

    t73 = ((x377*x378)^(x379<=x380));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x385 = 3U;
	static int8_t x386 = INT8_MAX;
	volatile int64_t x387 = INT64_MAX;
	uint8_t x388 = 46U;
	static uint32_t t74 = 2183U;

    t74 = ((x385*x386)^(x387<=x388));

    if (t74 != 381U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x389 = -1LL;
	int32_t x390 = INT32_MIN;
	static int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	int64_t t75 = 508324487844340LL;

    t75 = ((x389*x390)^(x391<=x392));

    if (t75 != 2147483649LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x393 = 4701;
	static int16_t x394 = INT16_MIN;
	int32_t x396 = INT32_MIN;

    t76 = ((x393*x394)^(x395<=x396));

    if (t76 != -154042367) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x397 = 1043871U;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 1362889203891467203LLU;
	volatile uint64_t x400 = 6985617957788721LLU;
	volatile uint32_t t77 = 2668U;

    t77 = ((x397*x398)^(x399<=x400));

    if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x409 = INT8_MIN;
	volatile int64_t x410 = 13745634393LL;
	static volatile int16_t x412 = -1;
	volatile int64_t t78 = -2258LL;

    t78 = ((x409*x410)^(x411<=x412));

    if (t78 != -1759441202303LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x413 = 530218373565483226LLU;
	int32_t x414 = -1;
	int16_t x415 = 3;
	int64_t x416 = INT64_MIN;
	volatile uint64_t t79 = 15302115991716682LLU;

    t79 = ((x413*x414)^(x415<=x416));

    if (t79 != 17916525700144068390LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x417 = -1LL;
	int16_t x419 = INT16_MAX;
	uint8_t x420 = 11U;
	volatile int64_t t80 = -8881LL;

    t80 = ((x417*x418)^(x419<=x420));

    if (t80 != -2424704LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x429 = 0U;
	int16_t x430 = INT16_MIN;
	int8_t x431 = 1;
	int32_t x432 = INT32_MIN;
	int32_t t81 = -586605;

    t81 = ((x429*x430)^(x431<=x432));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x433 = 18;
	static int16_t x434 = INT16_MAX;
	int32_t x436 = 3419;
	volatile int32_t t82 = -85222143;

    t82 = ((x433*x434)^(x435<=x436));

    if (t82 != 589807) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x437 = -1;
	int32_t x438 = INT32_MAX;
	int16_t x439 = INT16_MIN;
	volatile int32_t t83 = INT32_MIN;

    t83 = ((x437*x438)^(x439<=x440));

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x441 = INT8_MIN;
	static volatile int64_t x444 = -1LL;
	volatile uint32_t t84 = 18544U;

    t84 = ((x441*x442)^(x443<=x444));

    if (t84 != 129U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	uint64_t x447 = UINT64_MAX;
	uint32_t t85 = 1632925276U;

    t85 = ((x445*x446)^(x447<=x448));

    if (t85 != 4294967041U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x449 = 12559U;
	int16_t x451 = INT16_MAX;
	int32_t x452 = INT32_MIN;
	uint32_t t86 = 7609U;

    t86 = ((x449*x450)^(x451<=x452));

    if (t86 != 12559U) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x453 = 919593865;
	uint64_t x454 = UINT64_MAX;
	int32_t x455 = INT32_MIN;
	static int32_t x456 = INT32_MIN;

    t87 = ((x453*x454)^(x455<=x456));

    if (t87 != 18446744072789957750LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x457 = -1LL;
	int8_t x458 = INT8_MIN;
	int16_t x460 = -138;
	volatile int64_t t88 = -9588352571002LL;

    t88 = ((x457*x458)^(x459<=x460));

    if (t88 != 129LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x461 = 65U;
	uint64_t x462 = UINT64_MAX;
	volatile int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	volatile uint64_t t89 = 14026162474840LLU;

    t89 = ((x461*x462)^(x463<=x464));

    if (t89 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x469 = 2052918649041726LL;
	int16_t x470 = 27;
	int16_t x472 = -1;
	int64_t t90 = 266312457LL;

    t90 = ((x469*x470)^(x471<=x472));

    if (t90 != 55428803524126603LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x474 = INT8_MIN;
	int16_t x476 = INT16_MAX;
	volatile uint64_t t91 = 56630955584617384LLU;

    t91 = ((x473*x474)^(x475<=x476));

    if (t91 != 18446742523508001920LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x477 = INT32_MIN;
	uint32_t x478 = 0U;
	uint32_t t92 = 137555240U;

    t92 = ((x477*x478)^(x479<=x480));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x481 = 1264U;
	int32_t x482 = INT32_MAX;
	int64_t x483 = 276088657LL;
	volatile uint8_t x484 = 44U;
	volatile uint32_t t93 = 1359608899U;

    t93 = ((x481*x482)^(x483<=x484));

    if (t93 != 4294966032U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x493 = INT16_MIN;
	int32_t x494 = 27;
	uint16_t x495 = UINT16_MAX;
	volatile int16_t x496 = 7755;
	static int32_t t94 = -2595;

    t94 = ((x493*x494)^(x495<=x496));

    if (t94 != -884736) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x497 = 1U;
	volatile int8_t x498 = -1;
	uint64_t x499 = 1794659192934855LLU;
	int32_t x500 = 4;

    t95 = ((x497*x498)^(x499<=x500));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t x503 = -1LL;
	volatile uint64_t x504 = 96149900522LLU;
	int32_t t96 = -2812879;

    t96 = ((x501*x502)^(x503<=x504));

    if (t96 != 2550) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x505 = 448U;
	int8_t x506 = INT8_MIN;
	uint32_t x507 = 163U;
	int64_t x508 = INT64_MIN;

    t97 = ((x505*x506)^(x507<=x508));

    if (t97 != 4294909952U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x513 = UINT8_MAX;
	static volatile uint32_t x514 = UINT32_MAX;
	volatile uint16_t x515 = 299U;
	uint32_t t98 = 12U;

    t98 = ((x513*x514)^(x515<=x516));

    if (t98 != 4294967041U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x517 = -1;
	uint32_t x518 = 23384U;
	int8_t x519 = -35;
	int16_t x520 = INT16_MIN;

    t99 = ((x517*x518)^(x519<=x520));

    if (t99 != 4294943912U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x522 = -24;
	static uint16_t x523 = 84U;
	uint64_t x524 = 4LLU;
	volatile int32_t t100 = 1;

    t100 = ((x521*x522)^(x523<=x524));

    if (t100 != 1632) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x526 = -1;
	static int64_t t101 = -59554921431LL;

    t101 = ((x525*x526)^(x527<=x528));

    if (t101 != 68683936LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x535 = INT8_MIN;
	static int8_t x536 = INT8_MIN;

    t102 = ((x533*x534)^(x535<=x536));

    if (t102 != 129) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x537 = -1LL;
	uint16_t x538 = 75U;
	int64_t t103 = -794265625LL;

    t103 = ((x537*x538)^(x539<=x540));

    if (t103 != -75LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x545 = 20U;
	int16_t x546 = INT16_MIN;
	uint16_t x547 = UINT16_MAX;
	uint16_t x548 = UINT16_MAX;
	volatile int32_t t104 = 4;

    t104 = ((x545*x546)^(x547<=x548));

    if (t104 != -655359) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x550 = 56500863343LL;
	uint8_t x551 = 20U;
	uint16_t x552 = 6651U;
	volatile int64_t t105 = 3812367LL;

    t105 = ((x549*x550)^(x551<=x552));

    if (t105 != 113001726687LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x557 = 61;
	int16_t x558 = -1;
	static int32_t x559 = -222;

    t106 = ((x557*x558)^(x559<=x560));

    if (t106 != -61) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x563 = 17204U;
	static volatile int8_t x564 = INT8_MIN;
	volatile uint32_t t107 = 26U;

    t107 = ((x561*x562)^(x563<=x564));

    if (t107 != 2147483649U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x565 = UINT16_MAX;
	volatile uint64_t x566 = 8203541554774542LLU;
	volatile int64_t x567 = -1LL;
	static int32_t x568 = INT32_MAX;
	volatile uint64_t t108 = 28837518096628LLU;

    t108 = ((x565*x566)^(x567<=x568));

    if (t108 != 2663517654572613107LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x570 = INT16_MIN;
	uint32_t x572 = 128601357U;

    t109 = ((x569*x570)^(x571<=x572));

    if (t109 != -4161535) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x573 = -1LL;
	int16_t x574 = INT16_MIN;
	int8_t x575 = 11;
	volatile int8_t x576 = -11;
	int64_t t110 = 1571LL;

    t110 = ((x573*x574)^(x575<=x576));

    if (t110 != 32768LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x577 = 6U;
	int64_t x578 = -1LL;

    t111 = ((x577*x578)^(x579<=x580));

    if (t111 != -5LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x581 = 4U;
	int8_t x582 = -1;
	int16_t x583 = -61;
	volatile uint32_t x584 = 1U;
	volatile int32_t t112 = 319;

    t112 = ((x581*x582)^(x583<=x584));

    if (t112 != -4) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x586 = -1;
	uint32_t x587 = 9038928U;
	int8_t x588 = INT8_MAX;
	static volatile int32_t t113 = 81;

    t113 = ((x585*x586)^(x587<=x588));

    if (t113 != -255) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x589 = 874143U;
	static uint64_t x590 = 374974LLU;
	volatile int64_t x591 = -1LL;
	uint64_t t114 = 921820LLU;

    t114 = ((x589*x590)^(x591<=x592));

    if (t114 != 327780897282LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x593 = -8LL;
	int32_t x594 = 754678754;
	static volatile uint64_t x595 = UINT64_MAX;
	static uint32_t x596 = 454U;

    t115 = ((x593*x594)^(x595<=x596));

    if (t115 != -6037430032LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x597 = INT16_MIN;
	uint32_t x599 = 0U;
	uint32_t x600 = 144249U;
	volatile int32_t t116 = -116349;

    t116 = ((x597*x598)^(x599<=x600));

    if (t116 != 1073741825) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x601 = 6;
	int16_t x602 = INT16_MIN;
	volatile uint8_t x603 = 4U;
	int32_t x604 = INT32_MIN;
	int32_t t117 = -969868;

    t117 = ((x601*x602)^(x603<=x604));

    if (t117 != -196608) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x609 = INT16_MIN;
	static volatile int16_t x610 = 1186;
	int32_t x612 = INT32_MIN;
	volatile int32_t t118 = -199495960;

    t118 = ((x609*x610)^(x611<=x612));

    if (t118 != -38862847) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x615 = -1;
	uint64_t x616 = 134LLU;
	volatile int32_t t119 = -2044882;

    t119 = ((x613*x614)^(x615<=x616));

    if (t119 != 10452992) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x625 = INT8_MAX;
	volatile int64_t x626 = -1LL;
	uint8_t x627 = 3U;
	int64_t x628 = -11190LL;
	static volatile int64_t t120 = 49885754LL;

    t120 = ((x625*x626)^(x627<=x628));

    if (t120 != -127LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x629 = -589;
	uint32_t x630 = UINT32_MAX;
	int8_t x631 = -1;
	static int64_t x632 = -1LL;

    t121 = ((x629*x630)^(x631<=x632));

    if (t121 != 588U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x633 = 2;
	uint32_t x635 = 449U;
	uint32_t x636 = 14202803U;
	int32_t t122 = 2549;

    t122 = ((x633*x634)^(x635<=x636));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x637 = 4584U;
	uint64_t x639 = 21391887433375LLU;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t123 = -5501;

    t123 = ((x637*x638)^(x639<=x640));

    if (t123 != 582168) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x641 = -216;
	int16_t x642 = -5266;
	volatile uint16_t x643 = 3U;
	static uint32_t x644 = UINT32_MAX;
	static int32_t t124 = 3;

    t124 = ((x641*x642)^(x643<=x644));

    if (t124 != 1137457) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x645 = -1505LL;
	int16_t x646 = -4976;
	static int64_t x647 = INT64_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile int64_t t125 = 127219LL;

    t125 = ((x645*x646)^(x647<=x648));

    if (t125 != 7488880LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x649 = -3897653;
	int16_t x650 = 29;
	int64_t x651 = 49083644236LL;
	static int8_t x652 = 2;
	int32_t t126 = -1;

    t126 = ((x649*x650)^(x651<=x652));

    if (t126 != -113031937) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x654 = INT8_MIN;
	uint8_t x655 = 85U;
	volatile int8_t x656 = -1;

    t127 = ((x653*x654)^(x655<=x656));

    if (t127 != 16384) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x657 = 244435665U;
	static int16_t x658 = INT16_MAX;
	volatile uint16_t x659 = 11379U;
	int32_t x660 = INT32_MAX;

    t128 = ((x657*x658)^(x659<=x660));

    if (t128 != 3604395310U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x661 = 845086304U;
	int8_t x662 = -1;
	volatile uint32_t t129 = 0U;

    t129 = ((x661*x662)^(x663<=x664));

    if (t129 != 3449880992U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x665 = UINT32_MAX;
	uint64_t x666 = 239668777004986LLU;
	int64_t x667 = INT64_MIN;
	volatile int64_t x668 = INT64_MIN;
	volatile uint64_t t130 = 46951422LLU;

    t130 = ((x665*x666)^(x667<=x668));

    if (t130 != 4346067922522656839LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x674 = -1LL;
	int8_t x675 = INT8_MIN;
	int64_t t131 = 45895529LL;

    t131 = ((x673*x674)^(x675<=x676));

    if (t131 != -65536LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x681 = UINT64_MAX;
	int32_t x682 = -1;
	static volatile int8_t x683 = -3;
	int64_t x684 = -1LL;
	uint64_t t132 = 3392522LLU;

    t132 = ((x681*x682)^(x683<=x684));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x685 = INT16_MIN;
	int16_t x686 = INT16_MIN;
	int8_t x687 = -7;
	uint32_t x688 = UINT32_MAX;

    t133 = ((x685*x686)^(x687<=x688));

    if (t133 != 1073741825) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x689 = INT16_MIN;
	int8_t x690 = INT8_MIN;
	int32_t x691 = INT32_MIN;

    t134 = ((x689*x690)^(x691<=x692));

    if (t134 != 4194304) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x694 = 86U;
	volatile int8_t x695 = INT8_MIN;
	uint8_t x696 = 4U;
	int32_t t135 = -5150;

    t135 = ((x693*x694)^(x695<=x696));

    if (t135 != 2495) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x697 = INT8_MAX;
	int32_t x699 = -1;
	int16_t x700 = 19;
	volatile int32_t t136 = 5137;

    t136 = ((x697*x698)^(x699<=x700));

    if (t136 != -16255) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x701 = 0U;
	static int8_t x702 = 3;
	volatile uint64_t x703 = 1LLU;
	int32_t t137 = -72621;

    t137 = ((x701*x702)^(x703<=x704));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int32_t x707 = -1;
	int8_t x708 = -1;

    t138 = ((x705*x706)^(x707<=x708));

    if (t138 != -393209) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x709 = 181;
	uint32_t x710 = UINT32_MAX;
	static volatile int64_t x712 = INT64_MAX;
	static volatile uint32_t t139 = 1242009411U;

    t139 = ((x709*x710)^(x711<=x712));

    if (t139 != 4294967114U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x719 = -1;
	int8_t x720 = 44;

    t140 = ((x717*x718)^(x719<=x720));

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x721 = -3;
	volatile int16_t x722 = 15034;
	volatile int32_t x723 = -1;
	int32_t t141 = 18680716;

    t141 = ((x721*x722)^(x723<=x724));

    if (t141 != -45101) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x725 = INT64_MIN;
	volatile int32_t x726 = 0;
	int64_t x727 = -503LL;
	volatile int16_t x728 = INT16_MAX;

    t142 = ((x725*x726)^(x727<=x728));

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x730 = UINT32_MAX;
	volatile int16_t x731 = INT16_MAX;
	int64_t x732 = -1LL;
	volatile int64_t t143 = 37288983003946LL;

    t143 = ((x729*x730)^(x731<=x732));

    if (t143 != -4294967295LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x733 = 37922586U;
	int32_t x734 = INT32_MIN;
	static int16_t x735 = INT16_MIN;
	volatile uint32_t t144 = 37511410U;

    t144 = ((x733*x734)^(x735<=x736));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x737 = 36U;
	int16_t x738 = INT16_MIN;
	uint32_t x740 = 1164248942U;
	static volatile int32_t t145 = 1706;

    t145 = ((x737*x738)^(x739<=x740));

    if (t145 != -1179648) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x741 = 2244;
	int8_t x743 = INT8_MIN;
	uint16_t x744 = UINT16_MAX;
	static volatile int32_t t146 = -394477;

    t146 = ((x741*x742)^(x743<=x744));

    if (t146 != 8977) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x745 = 0U;
	int32_t x746 = INT32_MIN;
	int8_t x747 = INT8_MAX;
	int16_t x748 = INT16_MIN;
	uint32_t t147 = 7U;

    t147 = ((x745*x746)^(x747<=x748));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x749 = UINT64_MAX;
	volatile uint32_t x750 = 3U;
	uint8_t x751 = 1U;
	volatile int8_t x752 = 0;

    t148 = ((x749*x750)^(x751<=x752));

    if (t148 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x753 = INT32_MAX;
	static int32_t x754 = 1;
	uint64_t x755 = UINT64_MAX;
	volatile int32_t t149 = INT32_MAX;

    t149 = ((x753*x754)^(x755<=x756));

    if (t149 != INT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x761 = -31;
	static uint8_t x762 = 5U;
	int64_t x763 = -1LL;
	volatile int32_t t150 = 395;

    t150 = ((x761*x762)^(x763<=x764));

    if (t150 != -156) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x765 = -1;
	uint32_t x766 = 89594832U;
	int8_t x767 = 5;
	volatile uint32_t t151 = 132054053U;

    t151 = ((x765*x766)^(x767<=x768));

    if (t151 != 4205372465U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x770 = -1;
	int8_t x771 = INT8_MIN;
	int16_t x772 = -1;

    t152 = ((x769*x770)^(x771<=x772));

    if (t152 != 4292286990U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x773 = 12226;
	static int16_t x776 = -1;
	int32_t t153 = 24;

    t153 = ((x773*x774)^(x775<=x776));

    if (t153 != -366779) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x778 = -1;
	int16_t x780 = 14313;
	volatile int32_t t154 = 2831;

    t154 = ((x777*x778)^(x779<=x780));

    if (t154 != -15746) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x782 = -133;
	volatile uint8_t x783 = 10U;
	uint8_t x784 = UINT8_MAX;
	volatile uint64_t t155 = 877454240LLU;

    t155 = ((x781*x782)^(x783<=x784));

    if (t155 != 132LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x790 = INT8_MAX;
	volatile int16_t x792 = INT16_MIN;
	volatile int32_t t156 = -243458708;

    t156 = ((x789*x790)^(x791<=x792));

    if (t156 != -16256) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x793 = 30U;
	int64_t x794 = 13LL;
	uint8_t x795 = 15U;
	int32_t x796 = INT32_MIN;
	volatile int64_t t157 = -1367LL;

    t157 = ((x793*x794)^(x795<=x796));

    if (t157 != 390LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x797 = UINT8_MAX;
	int16_t x798 = INT16_MIN;
	volatile uint64_t x799 = 77240691386LLU;
	static int32_t x800 = -1;
	static int32_t t158 = -12266761;

    t158 = ((x797*x798)^(x799<=x800));

    if (t158 != -8355839) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x801 = -1;
	uint32_t x802 = UINT32_MAX;
	static uint32_t x803 = UINT32_MAX;
	volatile int32_t x804 = INT32_MIN;
	uint32_t t159 = 2024657U;

    t159 = ((x801*x802)^(x803<=x804));

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x809 = INT16_MAX;
	uint64_t x810 = 8LLU;
	uint16_t x811 = 1553U;
	int16_t x812 = INT16_MIN;
	uint64_t t160 = 2LLU;

    t160 = ((x809*x810)^(x811<=x812));

    if (t160 != 262136LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x813 = 177U;
	volatile uint64_t x814 = 1262001940LLU;
	volatile int32_t x815 = INT32_MAX;
	uint16_t x816 = 8190U;
	uint64_t t161 = 1640993404LLU;

    t161 = ((x813*x814)^(x815<=x816));

    if (t161 != 223374343380LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x817 = INT8_MIN;
	int32_t x818 = -1;
	int8_t x820 = INT8_MIN;
	static volatile int32_t t162 = -187114785;

    t162 = ((x817*x818)^(x819<=x820));

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x821 = 10008;
	int32_t x824 = INT32_MIN;

    t163 = ((x821*x822)^(x823<=x824));

    if (t163 != 600480) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x825 = INT8_MIN;
	static volatile int64_t x826 = -1LL;
	uint8_t x827 = 1U;
	static int32_t x828 = INT32_MIN;
	static int64_t t164 = 0LL;

    t164 = ((x825*x826)^(x827<=x828));

    if (t164 != 128LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x829 = 26;
	static int16_t x830 = INT16_MIN;
	uint32_t x831 = 189835781U;
	volatile int32_t t165 = -207657403;

    t165 = ((x829*x830)^(x831<=x832));

    if (t165 != -851967) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x834 = 383U;
	int64_t x836 = INT64_MAX;
	uint32_t t166 = 0U;

    t166 = ((x833*x834)^(x835<=x836));

    if (t166 != 4294966912U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x841 = -1;
	int8_t x842 = -1;
	uint8_t x843 = 3U;
	static uint64_t x844 = UINT64_MAX;
	volatile int32_t t167 = 1;

    t167 = ((x841*x842)^(x843<=x844));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x853 = 334579730170245LLU;
	int8_t x854 = INT8_MAX;
	int16_t x855 = 5687;
	static int8_t x856 = -1;
	volatile uint64_t t168 = 1438521957LLU;

    t168 = ((x853*x854)^(x855<=x856));

    if (t168 != 42491625731621115LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x857 = 224769491U;
	static volatile int64_t x860 = INT64_MIN;
	uint32_t t169 = 890687U;

    t169 = ((x857*x858)^(x859<=x860));

    if (t169 != 1294276224U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x864 = INT16_MIN;
	static volatile int64_t t170 = -66421198072572LL;

    t170 = ((x861*x862)^(x863<=x864));

    if (t170 != -127LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x869 = INT8_MAX;
	int16_t x871 = -1;
	static int16_t x872 = -1;
	int32_t t171 = 1;

    t171 = ((x869*x870)^(x871<=x872));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x873 = 6U;
	int64_t x875 = -1LL;
	volatile uint32_t t172 = 2U;

    t172 = ((x873*x874)^(x875<=x876));

    if (t172 != 114U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x885 = UINT32_MAX;
	uint64_t x886 = 1784313649LLU;
	int16_t x887 = INT16_MIN;
	uint64_t t173 = 1710LLU;

    t173 = ((x885*x886)^(x887<=x888));

    if (t173 != 7663568766477109454LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x893 = 808690236U;
	int8_t x894 = INT8_MIN;
	int64_t x895 = INT64_MIN;
	uint32_t t174 = 1917070665U;

    t174 = ((x893*x894)^(x895<=x896));

    if (t174 != 3861832193U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x901 = INT8_MIN;
	int8_t x902 = INT8_MIN;
	static int16_t x903 = 3522;
	uint16_t x904 = 81U;
	int32_t t175 = -2;

    t175 = ((x901*x902)^(x903<=x904));

    if (t175 != 16384) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x906 = INT16_MIN;
	int64_t x907 = 12582992150LL;
	static volatile int8_t x908 = INT8_MAX;

    t176 = ((x905*x906)^(x907<=x908));

    if (t176 != -11391242284859392LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x910 = UINT64_MAX;
	static uint8_t x911 = 0U;
	int16_t x912 = -597;
	uint64_t t177 = 865124LLU;

    t177 = ((x909*x910)^(x911<=x912));

    if (t177 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x913 = INT8_MIN;
	uint32_t x915 = UINT32_MAX;
	uint32_t t178 = 1364139U;

    t178 = ((x913*x914)^(x915<=x916));

    if (t178 != 4253166208U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x919 = INT64_MIN;
	uint64_t x920 = 28525100203387650LLU;
	int32_t t179 = 538125;

    t179 = ((x917*x918)^(x919<=x920));

    if (t179 != 2147385345) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x925 = 7U;
	static int8_t x926 = INT8_MIN;
	volatile uint64_t x927 = 29977LLU;
	volatile int8_t x928 = -1;
	int32_t t180 = 2872;

    t180 = ((x925*x926)^(x927<=x928));

    if (t180 != -895) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x930 = INT16_MIN;
	volatile int16_t x931 = 0;
	static volatile int64_t x932 = INT64_MIN;
	int64_t t181 = -42998661212711LL;

    t181 = ((x929*x930)^(x931<=x932));

    if (t181 != 32768LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x933 = INT8_MIN;
	uint32_t x934 = UINT32_MAX;
	int8_t x935 = 11;
	int32_t x936 = 12;
	uint32_t t182 = 7114U;

    t182 = ((x933*x934)^(x935<=x936));

    if (t182 != 129U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x937 = 156561U;
	uint64_t x938 = 437546LLU;
	uint32_t x939 = 132U;
	static int16_t x940 = INT16_MIN;
	volatile uint64_t t183 = 3138650519252LLU;

    t183 = ((x937*x938)^(x939<=x940));

    if (t183 != 68502639307LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x941 = -1;
	int8_t x942 = INT8_MIN;
	uint16_t x944 = 245U;

    t184 = ((x941*x942)^(x943<=x944));

    if (t184 != 129) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x945 = 26322U;
	static int16_t x946 = INT16_MIN;
	int32_t x947 = -61;
	int32_t x948 = INT32_MAX;
	int32_t t185 = -143;

    t185 = ((x945*x946)^(x947<=x948));

    if (t185 != -862519295) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x953 = 2138;
	int8_t x954 = INT8_MAX;
	uint32_t x956 = 72202U;
	static volatile int32_t t186 = 0;

    t186 = ((x953*x954)^(x955<=x956));

    if (t186 != 271527) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x958 = 1U;
	static volatile int32_t t187 = 2998974;

    t187 = ((x957*x958)^(x959<=x960));

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x961 = -1;
	uint8_t x963 = 1U;
	volatile uint16_t x964 = UINT16_MAX;

    t188 = ((x961*x962)^(x963<=x964));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x965 = UINT64_MAX;
	int64_t x966 = INT64_MIN;
	volatile int16_t x967 = INT16_MAX;
	volatile uint64_t t189 = 27699444202LLU;

    t189 = ((x965*x966)^(x967<=x968));

    if (t189 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x969 = INT16_MAX;
	volatile uint32_t x970 = 367U;
	int64_t x971 = INT64_MIN;
	volatile uint32_t t190 = 208U;

    t190 = ((x969*x970)^(x971<=x972));

    if (t190 != 12025488U) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x973 = -167;
	uint64_t x974 = UINT64_MAX;
	int8_t x975 = -1;
	uint32_t x976 = 54564632U;

    t191 = ((x973*x974)^(x975<=x976));

    if (t191 != 167LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x977 = -3228;
	static uint16_t x979 = 24554U;
	int16_t x980 = 11;
	volatile int32_t t192 = -2512;

    t192 = ((x977*x978)^(x979<=x980));

    if (t192 != 105775104) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x981 = INT16_MAX;
	static int32_t t193 = 371;

    t193 = ((x981*x982)^(x983<=x984));

    if (t193 != 8355584) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x989 = 244785213637LLU;
	uint64_t x990 = UINT64_MAX;
	int8_t x991 = -1;
	uint64_t t194 = 456LLU;

    t194 = ((x989*x990)^(x991<=x992));

    if (t194 != 18446743828924337978LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x993 = UINT16_MAX;
	uint8_t x995 = 1U;
	volatile int32_t t195 = 988113115;

    t195 = ((x993*x994)^(x995<=x996));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x997 = UINT16_MAX;
	static int8_t x998 = 1;
	volatile uint64_t x999 = UINT64_MAX;
	static int64_t x1000 = -1LL;
	volatile int32_t t196 = -4918;

    t196 = ((x997*x998)^(x999<=x1000));

    if (t196 != 65534) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1002 = -430;
	int64_t x1003 = 88235719596809LL;
	int8_t x1004 = -1;

    t197 = ((x1001*x1002)^(x1003<=x1004));

    if (t197 != 14090240) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1009 = 13846;
	volatile int8_t x1010 = 59;
	int8_t x1011 = 46;
	int8_t x1012 = INT8_MIN;
	static volatile int32_t t198 = -50;

    t198 = ((x1009*x1010)^(x1011<=x1012));

    if (t198 != 816914) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1014 = 3U;
	int32_t x1015 = -1;
	static volatile int32_t t199 = 1;

    t199 = ((x1013*x1014)^(x1015<=x1016));

    if (t199 != -3) { NG(); } else { ; }
	
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

