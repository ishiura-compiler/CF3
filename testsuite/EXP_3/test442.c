#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 224343LLU;
int64_t x13 = -109895806390LL;
int32_t x17 = INT32_MIN;
static int32_t x19 = -9120108;
static volatile int32_t t3 = 83972650;
int8_t x23 = -15;
uint16_t x27 = UINT16_MAX;
static uint16_t x33 = UINT16_MAX;
int64_t x34 = INT64_MAX;
uint64_t x36 = 654996690093354LLU;
int64_t x42 = INT64_MIN;
int16_t x59 = 1973;
int64_t t11 = 796946390483628LL;
int32_t t12 = -27472;
uint64_t t13 = 2255325239419LLU;
uint16_t x76 = UINT16_MAX;
static int32_t x79 = INT32_MIN;
uint64_t x80 = 480056722308340987LLU;
uint64_t t15 = 429129757010116LLU;
int32_t t16 = 10018663;
volatile int64_t x90 = INT64_MIN;
int8_t x103 = INT8_MIN;
volatile int64_t x109 = -1LL;
volatile int16_t x110 = -24;
uint8_t x114 = UINT8_MAX;
int8_t x125 = 56;
int32_t x133 = INT32_MIN;
volatile int8_t x145 = 0;
int64_t x146 = -1LL;
static int32_t x190 = -25;
int8_t x192 = 1;
int32_t t35 = 0;
int64_t t36 = -63742335135052LL;
static uint8_t x202 = 22U;
int8_t x208 = INT8_MAX;
static int64_t x210 = -19LL;
volatile int32_t t40 = -53;
static int16_t x215 = INT16_MIN;
static uint16_t x235 = 11U;
volatile int32_t t43 = 2470;
static int8_t x244 = -1;
volatile int32_t t45 = -485;
uint32_t x248 = 6U;
uint32_t x249 = 2595415U;
uint64_t x250 = UINT64_MAX;
uint64_t t47 = 2982171LLU;
uint64_t x260 = UINT64_MAX;
uint64_t t48 = 29981230229121LLU;
uint8_t x261 = 53U;
static int16_t x264 = INT16_MIN;
int32_t x295 = INT32_MIN;
int32_t x298 = INT32_MAX;
static volatile int32_t t57 = -6129;
int64_t x322 = 116044LL;
uint64_t x330 = 26606LLU;
static volatile int16_t x331 = INT16_MIN;
uint32_t x332 = UINT32_MAX;
volatile uint32_t t60 = 4731343U;
int32_t x338 = -554493561;
int32_t x340 = 0;
int16_t x351 = -4;
static int32_t t64 = -7400404;
uint16_t x356 = 9U;
static int32_t t67 = -12;
int16_t x374 = INT16_MIN;
volatile uint32_t t70 = 1435473439U;
uint8_t x378 = 6U;
uint64_t x385 = 22520807423LLU;
volatile int8_t x387 = 0;
static volatile uint8_t x396 = 14U;
uint8_t x404 = UINT8_MAX;
volatile int32_t t74 = 3515;
volatile int32_t t75 = -104863763;
uint64_t x432 = UINT64_MAX;
int64_t x433 = INT64_MIN;
static int16_t x434 = -60;
static uint64_t x437 = 430779LLU;
uint64_t x438 = 48828576149064015LLU;
static uint32_t x439 = 51624U;
static volatile int16_t x452 = INT16_MAX;
volatile int64_t t81 = -11490592944055867LL;
int32_t x455 = 932;
uint8_t x477 = UINT8_MAX;
int8_t x479 = 0;
uint64_t x495 = 94LLU;
static int8_t x501 = INT8_MIN;
static int8_t x517 = INT8_MIN;
uint8_t x518 = 9U;
uint64_t x527 = 104042225LLU;
volatile uint64_t t90 = 25560163130696LLU;
uint16_t x534 = 2U;
int64_t t92 = -63980601148841484LL;
int32_t t95 = -10;
int16_t x557 = INT16_MAX;


void f0(void) {
	static int64_t x5 = 52825765629804LL;
	int8_t x6 = -1;
	int16_t x7 = -1;
	uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t0 = 894023961492657LLU;

	t0 = ((x5==x6)^(x7*x8));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = -5;
	volatile uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 100LLU;
	static int8_t x12 = -1;

	t1 = ((x9==x10)^(x11*x12));

	if (t1 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x14 = 18U;
	uint8_t x15 = 87U;
	int16_t x16 = INT16_MIN;
	static int32_t t2 = -4544808;

	t2 = ((x13==x14)^(x15*x16));

	if (t2 != -2850816) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	static int8_t x20 = -1;

	t3 = ((x17==x18)^(x19*x20));

	if (t3 != 9120108) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = 1903794773LLU;
	int32_t x22 = INT32_MAX;
	int16_t x24 = 373;
	int32_t t4 = 114167456;

	t4 = ((x21==x22)^(x23*x24));

	if (t4 != -5595) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MIN;
	uint8_t x28 = 2U;
	volatile int32_t t5 = 1900991;

	t5 = ((x25==x26)^(x27*x28));

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 1LL;
	volatile int32_t x30 = -1;
	uint64_t x31 = 2162146482704136817LLU;
	uint8_t x32 = UINT8_MAX;
	volatile uint64_t t6 = 99590136633918126LLU;

	t6 = ((x29==x30)^(x31*x32));

	if (t6 != 16391774951977891471LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x35 = UINT16_MAX;
	uint64_t t7 = 197497705LLU;

	t7 = ((x33==x34)^(x35*x36));

	if (t7 != 6031719937848851158LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 46U;
	int32_t x38 = -1;
	static int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t8 = -591;

	t8 = ((x37==x38)^(x39*x40));

	if (t8 != -4161536) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = 4779U;
	int64_t x43 = -1LL;
	volatile int8_t x44 = INT8_MIN;
	volatile int64_t t9 = 1509955284509996LL;

	t9 = ((x41==x42)^(x43*x44));

	if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -92578049596863404LL;
	int32_t x50 = -13262;
	static uint8_t x51 = 4U;
	static volatile int8_t x52 = INT8_MAX;
	int32_t t10 = 5938486;

	t10 = ((x49==x50)^(x51*x52));

	if (t10 != 508) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = INT8_MAX;
	volatile int32_t x58 = INT32_MIN;
	int64_t x60 = -1LL;

	t11 = ((x57==x58)^(x59*x60));

	if (t11 != -1973LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = 28660713;
	uint16_t x67 = 1058U;
	uint16_t x68 = 13105U;

	t12 = ((x65==x66)^(x67*x68));

	if (t12 != 13865090) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = 1;
	int8_t x70 = 6;
	int32_t x71 = INT32_MAX;
	static volatile uint64_t x72 = 50679072080640LLU;

	t13 = ((x69==x70)^(x71*x72));

	if (t13 != 15135247496020311296LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 1634799606U;
	uint32_t t14 = 1180U;

	t14 = ((x73==x74)^(x75*x76));

	if (t14 != 2927947786U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 70U;
	static int8_t x78 = INT8_MIN;

	t15 = ((x77==x78)^(x79*x80));

	if (t15 != 3270441822219927552LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -29LL;
	uint8_t x86 = UINT8_MAX;
	static int16_t x87 = -1;
	static int8_t x88 = 59;

	t16 = ((x85==x86)^(x87*x88));

	if (t16 != -59) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = INT32_MIN;
	static uint32_t x91 = 353728698U;
	uint64_t x92 = UINT64_MAX;
	uint64_t t17 = 7LLU;

	t17 = ((x89==x90)^(x91*x92));

	if (t17 != 18446744073355822918LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MAX;
	volatile uint8_t x94 = 1U;
	int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	static int32_t t18 = -5468432;

	t18 = ((x93==x94)^(x95*x96));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MAX;
	int64_t x98 = INT64_MIN;
	int64_t x99 = 48LL;
	int32_t x100 = -1;
	volatile int64_t t19 = 28751935LL;

	t19 = ((x97==x98)^(x99*x100));

	if (t19 != -48LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x101 = 0U;
	uint64_t x102 = UINT64_MAX;
	int8_t x104 = -20;
	volatile int32_t t20 = 107994;

	t20 = ((x101==x102)^(x103*x104));

	if (t20 != 2560) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = 1;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t x108 = -1;
	volatile int32_t t21 = 15181;

	t21 = ((x105==x106)^(x107*x108));

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x111 = 24U;
	int8_t x112 = 0;
	int32_t t22 = 4853;

	t22 = ((x109==x110)^(x111*x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint64_t x115 = 5384304002LLU;
	int32_t x116 = -1;
	volatile uint64_t t23 = 53622290590LLU;

	t23 = ((x113==x114)^(x115*x116));

	if (t23 != 18446744068325247615LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = 211647657638LL;
	int32_t x118 = -729702075;
	uint8_t x119 = 7U;
	static int32_t x120 = 2619;
	int32_t t24 = 102210;

	t24 = ((x117==x118)^(x119*x120));

	if (t24 != 18333) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x126 = -1LL;
	static uint8_t x127 = 53U;
	int8_t x128 = 0;
	volatile int32_t t25 = 250;

	t25 = ((x125==x126)^(x127*x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MAX;
	volatile uint64_t x130 = UINT64_MAX;
	int16_t x131 = -1;
	int16_t x132 = -44;
	volatile int32_t t26 = 1;

	t26 = ((x129==x130)^(x131*x132));

	if (t26 != 44) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x134 = INT16_MAX;
	int16_t x135 = -1;
	uint32_t x136 = 5388546U;
	static uint32_t t27 = 823768U;

	t27 = ((x133==x134)^(x135*x136));

	if (t27 != 4289578750U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x147 = UINT64_MAX;
	static volatile int16_t x148 = INT16_MIN;
	uint64_t t28 = 106609955434172LLU;

	t28 = ((x145==x146)^(x147*x148));

	if (t28 != 32768LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = -52;
	uint8_t x151 = UINT8_MAX;
	volatile int64_t x152 = 152LL;
	static int64_t t29 = -840091237369872152LL;

	t29 = ((x149==x150)^(x151*x152));

	if (t29 != 38760LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 45U;
	uint32_t x154 = 99U;
	volatile int64_t x155 = INT64_MIN;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t30 = 5LLU;

	t30 = ((x153==x154)^(x155*x156));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = -1;
	volatile int32_t x158 = INT32_MIN;
	static volatile int32_t x159 = INT32_MAX;
	volatile int8_t x160 = -1;
	static int32_t t31 = 0;

	t31 = ((x157==x158)^(x159*x160));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x161 = UINT16_MAX;
	static int8_t x162 = INT8_MIN;
	int32_t x163 = -334966;
	int8_t x164 = -3;
	volatile int32_t t32 = -1179;

	t32 = ((x161==x162)^(x163*x164));

	if (t32 != 1004898) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x165 = 53389352;
	int16_t x166 = -13;
	static int8_t x167 = 3;
	volatile uint32_t x168 = 3035490U;
	uint32_t t33 = 517739U;

	t33 = ((x165==x166)^(x167*x168));

	if (t33 != 9106470U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = 0;
	static int8_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	uint16_t x176 = 926U;
	uint64_t t34 = 316108873225692LLU;

	t34 = ((x173==x174)^(x175*x176));

	if (t34 != 18446744073709550690LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x191 = 1U;

	t35 = ((x189==x190)^(x191*x192));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = INT64_MAX;
	volatile int16_t x194 = INT16_MIN;
	static uint16_t x195 = 7232U;
	int64_t x196 = -1LL;

	t36 = ((x193==x194)^(x195*x196));

	if (t36 != -7232LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x197 = -316065274LL;
	uint64_t x198 = UINT64_MAX;
	volatile int64_t x199 = -843773725809909LL;
	int32_t x200 = -1;
	volatile int64_t t37 = 12664LL;

	t37 = ((x197==x198)^(x199*x200));

	if (t37 != 843773725809909LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = -1;
	int16_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t38 = 686193304;

	t38 = ((x201==x202)^(x203*x204));

	if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x205 = 130485923431LLU;
	int64_t x206 = -1LL;
	uint64_t x207 = UINT64_MAX;
	volatile uint64_t t39 = 14612LLU;

	t39 = ((x205==x206)^(x207*x208));

	if (t39 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x209 = 17797U;
	int16_t x211 = -1;
	int32_t x212 = INT32_MAX;

	t40 = ((x209==x210)^(x211*x212));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x213 = INT16_MIN;
	int8_t x214 = 4;
	int64_t x216 = -14354080576652LL;
	int64_t t41 = -2530LL;

	t41 = ((x213==x214)^(x215*x216));

	if (t41 != 470354512335732736LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	volatile int8_t x228 = 1;
	int64_t t42 = INT64_MIN;

	t42 = ((x225==x226)^(x227*x228));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x233 = 5270U;
	volatile uint16_t x234 = 15U;
	volatile int32_t x236 = 151306;

	t43 = ((x233==x234)^(x235*x236));

	if (t43 != 1664366) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x237 = -6780595712233140LL;
	int8_t x238 = -1;
	volatile int16_t x239 = -1;
	static int32_t x240 = -78000769;
	volatile int32_t t44 = -9794;

	t44 = ((x237==x238)^(x239*x240));

	if (t44 != 78000769) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = -1;
	volatile int32_t x243 = -1;

	t45 = ((x241==x242)^(x243*x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = -565898;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -37943;
	uint32_t t46 = 7216745U;

	t46 = ((x245==x246)^(x247*x248));

	if (t46 != 4294739638U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x251 = UINT64_MAX;
	static int16_t x252 = INT16_MIN;

	t47 = ((x249==x250)^(x251*x252));

	if (t47 != 32768LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;

	t48 = ((x257==x258)^(x259*x260));

	if (t48 != 128LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x262 = 77U;
	volatile uint64_t x263 = 5439111139904LLU;
	uint64_t t49 = 1042547330LLU;

	t49 = ((x261==x262)^(x263*x264));

	if (t49 != 18268515279877177344LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = INT64_MAX;
	uint8_t x270 = 95U;
	int64_t x271 = 864LL;
	static int64_t x272 = -12LL;
	int64_t t50 = 2030265499411322889LL;

	t50 = ((x269==x270)^(x271*x272));

	if (t50 != -10368LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = INT64_MAX;
	uint16_t x278 = 3U;
	int8_t x279 = -1;
	uint32_t x280 = UINT32_MAX;
	uint32_t t51 = 20422U;

	t51 = ((x277==x278)^(x279*x280));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x281 = INT8_MIN;
	volatile int64_t x282 = INT64_MIN;
	static int64_t x283 = -166723463584LL;
	int8_t x284 = INT8_MIN;
	int64_t t52 = -9035418LL;

	t52 = ((x281==x282)^(x283*x284));

	if (t52 != 21340603338752LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x289 = 9U;
	static uint64_t x290 = 6LLU;
	static uint64_t x291 = 51LLU;
	int64_t x292 = -1LL;
	uint64_t t53 = 156107952828LLU;

	t53 = ((x289==x290)^(x291*x292));

	if (t53 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = -864772867980LL;
	volatile int32_t x294 = -1;
	uint32_t x296 = 1U;
	volatile uint32_t t54 = 6U;

	t54 = ((x293==x294)^(x295*x296));

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x299 = 70015175LLU;
	static uint32_t x300 = 84768122U;
	volatile uint64_t t55 = 1306LLU;

	t55 = ((x297==x298)^(x299*x300));

	if (t55 != 5935054896251350LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x301 = 6U;
	uint64_t x302 = 404LLU;
	volatile uint32_t x303 = 27852U;
	int8_t x304 = -1;
	uint32_t t56 = 559U;

	t56 = ((x301==x302)^(x303*x304));

	if (t56 != 4294939444U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x309 = UINT16_MAX;
	uint32_t x310 = 56621U;
	uint16_t x311 = 0U;
	int8_t x312 = INT8_MAX;

	t57 = ((x309==x310)^(x311*x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MIN;
	uint64_t t58 = 60LLU;

	t58 = ((x321==x322)^(x323*x324));

	if (t58 != 2147483648LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = 9;
	int8_t x326 = INT8_MIN;
	int8_t x327 = -58;
	static volatile int8_t x328 = INT8_MAX;
	int32_t t59 = 122;

	t59 = ((x325==x326)^(x327*x328));

	if (t59 != -7366) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x329 = INT8_MAX;

	t60 = ((x329==x330)^(x331*x332));

	if (t60 != 32768U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x334 = UINT16_MAX;
	static int32_t x335 = -947911;
	uint32_t x336 = 1965371324U;
	uint32_t t61 = 239475610U;

	t61 = ((x333==x334)^(x335*x336));

	if (t61 != 802110684U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile uint64_t t62 = 300380875029504LLU;

	t62 = ((x337==x338)^(x339*x340));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x345 = 699123LLU;
	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	uint16_t x348 = 635U;
	volatile int32_t t63 = 4;

	t63 = ((x345==x346)^(x347*x348));

	if (t63 != -635) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	int8_t x352 = INT8_MAX;

	t64 = ((x349==x350)^(x351*x352));

	if (t64 != -508) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;
	static int32_t x355 = 75489840;
	volatile int32_t t65 = 0;

	t65 = ((x353==x354)^(x355*x356));

	if (t65 != 679408560) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x357 = 479U;
	uint16_t x358 = UINT16_MAX;
	volatile uint8_t x359 = UINT8_MAX;
	int64_t x360 = 17016745081LL;
	volatile int64_t t66 = -32333220929LL;

	t66 = ((x357==x358)^(x359*x360));

	if (t66 != 4339269995655LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x362 = 6299689LLU;
	int8_t x363 = 5;
	static uint16_t x364 = 13U;

	t67 = ((x361==x362)^(x363*x364));

	if (t67 != 65) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x365 = 10931130;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 38U;
	volatile int64_t x368 = 38804036993902LL;
	int64_t t68 = 48404106933LL;

	t68 = ((x365==x366)^(x367*x368));

	if (t68 != 1474553405768276LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x369 = UINT64_MAX;
	uint32_t x370 = UINT32_MAX;
	static uint32_t x371 = 126541926U;
	int8_t x372 = -1;
	static uint32_t t69 = 35U;

	t69 = ((x369==x370)^(x371*x372));

	if (t69 != 4168425370U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x373 = INT32_MAX;
	int16_t x375 = 1;
	uint32_t x376 = 351361341U;

	t70 = ((x373==x374)^(x375*x376));

	if (t70 != 351361341U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x377 = INT16_MAX;
	static int32_t x379 = -1;
	volatile uint64_t x380 = 47LLU;
	uint64_t t71 = 2115529823LLU;

	t71 = ((x377==x378)^(x379*x380));

	if (t71 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x386 = -1;
	int16_t x388 = INT16_MAX;
	volatile int32_t t72 = 31;

	t72 = ((x385==x386)^(x387*x388));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = -24;
	int32_t x394 = -1;
	static uint16_t x395 = 11U;
	int32_t t73 = 85511;

	t73 = ((x393==x394)^(x395*x396));

	if (t73 != 154) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x401 = 463LLU;
	int16_t x402 = INT16_MIN;
	volatile int8_t x403 = INT8_MIN;

	t74 = ((x401==x402)^(x403*x404));

	if (t74 != -32640) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = -1LL;
	int32_t x423 = -1;
	volatile int16_t x424 = INT16_MAX;

	t75 = ((x421==x422)^(x423*x424));

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x425 = 1436125LLU;
	uint32_t x426 = 7U;
	volatile uint8_t x427 = 2U;
	uint8_t x428 = 31U;
	volatile int32_t t76 = -1833;

	t76 = ((x425==x426)^(x427*x428));

	if (t76 != 62) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x429 = 472U;
	int32_t x430 = -16012;
	static volatile int8_t x431 = INT8_MIN;
	uint64_t t77 = 22081624935869LLU;

	t77 = ((x429==x430)^(x431*x432));

	if (t77 != 128LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x435 = 14U;
	uint16_t x436 = UINT16_MAX;
	static volatile uint32_t t78 = 2U;

	t78 = ((x433==x434)^(x435*x436));

	if (t78 != 917490U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x440 = 1376U;
	uint32_t t79 = 43633U;

	t79 = ((x437==x438)^(x439*x440));

	if (t79 != 71034624U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x445 = 6030721695358LLU;
	uint16_t x446 = 1U;
	int32_t x447 = -442204;
	static volatile uint32_t x448 = 7226U;
	static uint32_t t80 = 137U;

	t80 = ((x445==x446)^(x447*x448));

	if (t80 != 1099601192U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x449 = INT8_MAX;
	uint8_t x450 = UINT8_MAX;
	int64_t x451 = 10LL;

	t81 = ((x449==x450)^(x451*x452));

	if (t81 != 327670LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x453 = UINT8_MAX;
	int16_t x454 = -1;
	uint8_t x456 = UINT8_MAX;
	int32_t t82 = -1671;

	t82 = ((x453==x454)^(x455*x456));

	if (t82 != 237660) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x469 = -4057LL;
	int32_t x470 = INT32_MAX;
	int16_t x471 = 39;
	uint16_t x472 = 55U;
	volatile int32_t t83 = -363;

	t83 = ((x469==x470)^(x471*x472));

	if (t83 != 2145) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x478 = -798;
	int16_t x480 = -2238;
	int32_t t84 = -142601;

	t84 = ((x477==x478)^(x479*x480));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x489 = -1;
	int16_t x490 = -1;
	int32_t x491 = -17;
	int8_t x492 = INT8_MIN;
	volatile int32_t t85 = 2254459;

	t85 = ((x489==x490)^(x491*x492));

	if (t85 != 2177) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x493 = INT16_MIN;
	int32_t x494 = 383336;
	static int64_t x496 = INT64_MAX;
	uint64_t t86 = 6863141LLU;

	t86 = ((x493==x494)^(x495*x496));

	if (t86 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x502 = 11907;
	static uint8_t x503 = 9U;
	static volatile int16_t x504 = INT16_MIN;
	volatile int32_t t87 = 0;

	t87 = ((x501==x502)^(x503*x504));

	if (t87 != -294912) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x519 = INT8_MIN;
	volatile int8_t x520 = INT8_MAX;
	volatile int32_t t88 = -1977;

	t88 = ((x517==x518)^(x519*x520));

	if (t88 != -16256) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x521 = -2098321;
	int8_t x522 = 1;
	int8_t x523 = 13;
	static int16_t x524 = INT16_MIN;
	volatile int32_t t89 = -146895817;

	t89 = ((x521==x522)^(x523*x524));

	if (t89 != -425984) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x525 = 1U;
	volatile int16_t x526 = INT16_MIN;
	int16_t x528 = INT16_MAX;

	t90 = ((x525==x526)^(x527*x528));

	if (t90 != 3409151586575LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x529 = -1;
	int64_t x530 = INT64_MAX;
	int32_t x531 = INT32_MAX;
	int8_t x532 = -1;
	volatile int32_t t91 = 14437;

	t91 = ((x529==x530)^(x531*x532));

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x533 = 119U;
	int16_t x535 = 105;
	static int64_t x536 = 16LL;

	t92 = ((x533==x534)^(x535*x536));

	if (t92 != 1680LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x541 = INT8_MAX;
	uint8_t x542 = 0U;
	uint8_t x543 = 105U;
	uint8_t x544 = 21U;
	int32_t t93 = -9456;

	t93 = ((x541==x542)^(x543*x544));

	if (t93 != 2205) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x545 = 9507525245473798LL;
	static int8_t x546 = INT8_MAX;
	uint32_t x547 = 0U;
	int16_t x548 = 0;
	volatile uint32_t t94 = 1048U;

	t94 = ((x545==x546)^(x547*x548));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x549 = INT16_MAX;
	int16_t x550 = INT16_MIN;
	static uint8_t x551 = 1U;
	int32_t x552 = 515285;

	t95 = ((x549==x550)^(x551*x552));

	if (t95 != 515285) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x553 = 110398242177021LLU;
	int32_t x554 = -1;
	uint64_t x555 = 1104422191385LLU;
	int8_t x556 = -1;
	volatile uint64_t t96 = 4941768LLU;

	t96 = ((x553==x554)^(x555*x556));

	if (t96 != 18446742969287360231LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x558 = -1;
	static uint32_t x559 = UINT32_MAX;
	int16_t x560 = INT16_MAX;
	static volatile uint32_t t97 = 2071418U;

	t97 = ((x557==x558)^(x559*x560));

	if (t97 != 4294934529U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x561 = -1LL;
	static int16_t x562 = -1;
	int32_t x563 = INT32_MIN;
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t98 = 574155U;

	t98 = ((x561==x562)^(x563*x564));

	if (t98 != 2147483649U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x565 = INT8_MIN;
	static int32_t x566 = INT32_MIN;
	uint64_t x567 = 0LLU;
	int64_t x568 = -1LL;
	volatile uint64_t t99 = 1298596527LLU;

	t99 = ((x565==x566)^(x567*x568));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

