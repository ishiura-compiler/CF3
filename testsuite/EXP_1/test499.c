#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x19 = 142583754722752255LL;
volatile uint64_t x29 = 29LLU;
static int8_t x30 = INT8_MAX;
static int64_t x35 = -1LL;
int64_t x39 = 1860423515LL;
int8_t x43 = -1;
uint8_t x45 = 102U;
static int32_t x46 = 12525;
static int64_t x56 = -1LL;
static uint16_t x62 = UINT16_MAX;
volatile int64_t x63 = INT64_MIN;
int8_t x91 = 1;
int8_t x92 = INT8_MAX;
int64_t x95 = INT64_MIN;
volatile int64_t t15 = -1LL;
volatile uint8_t x117 = 1U;
volatile int64_t x120 = INT64_MIN;
static int64_t t17 = -254311736LL;
volatile int8_t x122 = INT8_MIN;
int8_t x124 = INT8_MIN;
int64_t x129 = -30844024LL;
static uint64_t x136 = 2293742786642707768LLU;
int8_t x145 = -1;
int8_t x147 = INT8_MAX;
uint8_t x148 = 1U;
int8_t x153 = INT8_MIN;
uint16_t x154 = 12520U;
int8_t x166 = -1;
uint16_t x170 = 0U;
uint16_t x177 = UINT16_MAX;
uint64_t x185 = UINT64_MAX;
uint64_t x188 = 39LLU;
volatile uint64_t t28 = 38686252LLU;
static volatile int16_t x192 = INT16_MAX;
volatile int64_t t31 = -16962185868LL;
uint16_t x220 = 15U;
uint64_t t33 = 21LLU;
uint8_t x267 = 27U;
int64_t t37 = -17LL;
int32_t x270 = 20745;
volatile uint32_t t39 = 203497945U;
int32_t x277 = 234392616;
int8_t x280 = -1;
volatile int64_t x285 = 2967510010125LL;
static int16_t x287 = INT16_MAX;
static uint8_t x293 = 94U;
int64_t x296 = 12LL;
int64_t t43 = 301LL;
int8_t x298 = -1;
volatile uint16_t x299 = UINT16_MAX;
volatile uint32_t x322 = 6978U;
uint32_t x352 = 20723790U;
volatile uint16_t x353 = UINT16_MAX;
int8_t x362 = 1;
int64_t x392 = INT64_MIN;
static volatile uint32_t t57 = 7345U;
static int8_t x410 = INT8_MAX;
uint16_t x413 = UINT16_MAX;
uint64_t x414 = UINT64_MAX;
volatile int32_t x415 = INT32_MAX;
uint32_t x423 = 64579663U;
int8_t x433 = 12;
int64_t t64 = 286361422LL;
uint8_t x437 = 3U;
int8_t x438 = INT8_MIN;
uint64_t t67 = 38236261LLU;
int8_t x460 = INT8_MIN;
volatile int32_t t68 = 970544;
volatile int64_t t69 = 118014051862LL;
volatile uint32_t t70 = 85U;
static int64_t x469 = -984653520LL;
int64_t x484 = -2LL;
int64_t t72 = 3580070406959884337LL;
volatile int8_t x496 = INT8_MIN;
uint32_t x501 = UINT32_MAX;
int64_t t76 = 28422450094292LL;
volatile uint32_t x505 = 1211885U;
static int16_t x508 = INT16_MAX;
volatile int64_t t78 = 492149488418LL;
volatile int64_t t79 = -2409586189LL;
int64_t x535 = 0LL;
int8_t x545 = -1;
volatile int32_t x546 = INT32_MAX;
uint32_t x558 = 27U;
int8_t x559 = INT8_MIN;
int64_t x562 = INT64_MAX;
volatile int64_t t85 = 1LL;
uint16_t x565 = UINT16_MAX;
volatile int64_t x568 = INT64_MAX;
int16_t x573 = INT16_MIN;
static uint32_t x575 = 124920371U;
volatile int64_t x588 = INT64_MAX;
uint64_t t88 = 29322799000LLU;
int64_t x591 = -1LL;
int16_t x598 = 28;
uint8_t x601 = 1U;
static int32_t x602 = 1;
static uint64_t x609 = 41795587LLU;
int64_t x610 = INT64_MAX;
int8_t x612 = -1;
static volatile int8_t x617 = INT8_MIN;
int32_t x626 = 11621;
int64_t x627 = INT64_MAX;
int8_t x628 = -1;
int32_t x631 = INT32_MAX;


void f0(void) {
	uint32_t x5 = 491U;
	volatile uint64_t x6 = 20372135617597LLU;
	int8_t x7 = INT8_MIN;
	static uint64_t x8 = 49LLU;
	static volatile uint64_t t0 = 0LLU;

	t0 = (((x5*x6)^x7)%x8);

	if (t0 != 36LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 5U;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t1 = -1;

	t1 = (((x13*x14)^x15)%x16);

	if (t1 != 1028) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -7;
	int8_t x18 = -1;
	volatile uint64_t x20 = 379LLU;
	static volatile uint64_t t2 = 26259145764025152LLU;

	t2 = (((x17*x18)^x19)%x20);

	if (t2 != 44LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = UINT64_MAX;
	int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MIN;
	int64_t x28 = 3143435487364086642LL;
	uint64_t t3 = 431349129318710LLU;

	t3 = (((x25*x26)^x27)%x28);

	if (t3 != 2936501059979118876LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x31 = INT8_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t4 = 24188LLU;

	t4 = (((x29*x30)^x31)%x32);

	if (t4 != 18446744073709548003LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x33 = INT16_MIN;
	volatile int8_t x34 = INT8_MAX;
	int8_t x36 = -1;
	volatile int64_t t5 = -34725078368025LL;

	t5 = (((x33*x34)^x35)%x36);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	uint16_t x38 = 2U;
	int32_t x40 = INT32_MIN;
	int64_t t6 = -151386LL;

	t6 = (((x37*x38)^x39)%x40);

	if (t6 != -1860423515LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 122539306145LLU;
	int64_t x42 = INT64_MAX;
	int32_t x44 = -9;
	uint64_t t7 = 19150385314285LLU;

	t7 = (((x41*x42)^x43)%x44);

	if (t7 != 9223372159394081952LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t8 = -115510;

	t8 = (((x45*x46)^x47)%x48);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = -1;
	volatile int64_t t9 = -4655569316LL;

	t9 = (((x53*x54)^x55)%x56);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -3;
	volatile uint32_t x64 = UINT32_MAX;
	volatile int64_t t10 = -331LL;

	t10 = (((x61*x62)^x63)%x64);

	if (t10 != 2147287043LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x73 = 0LL;
	int32_t x74 = -1;
	uint16_t x75 = 1U;
	static int8_t x76 = INT8_MIN;
	int64_t t11 = 211337223LL;

	t11 = (((x73*x74)^x75)%x76);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MAX;
	static uint64_t x78 = 601187653717515619LLU;
	static uint64_t x79 = UINT64_MAX;
	static int16_t x80 = INT16_MIN;
	static uint64_t t12 = 2551610532LLU;

	t12 = (((x77*x78)^x79)%x80);

	if (t12 != 15882888346423274466LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = UINT16_MAX;
	static uint64_t x86 = 12891684694LLU;
	volatile uint64_t x87 = 31585276957333743LLU;
	int64_t x88 = INT64_MIN;
	volatile uint64_t t13 = 4795748LLU;

	t13 = (((x85*x86)^x87)%x88);

	if (t13 != 32429821183268933LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = -1;
	static int16_t x90 = -1;
	int32_t t14 = -23936;

	t14 = (((x89*x90)^x91)%x92);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = INT32_MAX;
	volatile int8_t x94 = -1;
	volatile uint16_t x96 = 20748U;

	t15 = (((x93*x94)^x95)%x96);

	if (t15 != 16261LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x97 = 0;
	uint8_t x98 = 45U;
	static uint8_t x99 = 12U;
	static int32_t x100 = -1;
	volatile int32_t t16 = -3;

	t16 = (((x97*x98)^x99)%x100);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x118 = INT64_MAX;
	int32_t x119 = 176;

	t17 = (((x117*x118)^x119)%x120);

	if (t17 != 9223372036854775631LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x121 = UINT8_MAX;
	uint64_t x123 = 1170076LLU;
	uint64_t t18 = 119980706441883115LLU;

	t18 = (((x121*x122)^x123)%x124);

	if (t18 != 18446744073708395036LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x130 = 21U;
	int16_t x131 = INT16_MIN;
	static uint8_t x132 = 78U;
	static volatile int64_t t19 = -51669712554647LL;

	t19 = (((x129*x130)^x131)%x132);

	if (t19 != 28LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x133 = 0U;
	int64_t x134 = -1LL;
	int16_t x135 = INT16_MIN;
	static uint64_t t20 = 1925844271843962LLU;

	t20 = (((x133*x134)^x135)%x136);

	if (t20 != 96801780567856704LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x146 = INT16_MAX;
	static volatile int32_t t21 = 3220;

	t21 = (((x145*x146)^x147)%x148);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x149 = INT8_MIN;
	volatile int64_t x150 = 259647765LL;
	uint32_t x151 = 730U;
	uint16_t x152 = UINT16_MAX;
	volatile int64_t t22 = -808LL;

	t22 = (((x149*x150)^x151)%x152);

	if (t22 != -17826LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x155 = 249231743566237967LLU;
	volatile int32_t x156 = INT32_MIN;
	volatile uint64_t t23 = 1543LLU;

	t23 = (((x153*x154)^x155)%x156);

	if (t23 != 18197512330141752591LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t24 = 925U;

	t24 = (((x165*x166)^x167)%x168);

	if (t24 != 126U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x169 = INT16_MAX;
	int32_t x171 = -22;
	volatile uint64_t x172 = 227LLU;
	volatile uint64_t t25 = 23512LLU;

	t25 = (((x169*x170)^x171)%x172);

	if (t25 != 82LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x178 = INT16_MIN;
	static volatile uint8_t x179 = 61U;
	static int8_t x180 = -1;
	volatile int32_t t26 = -36422;

	t26 = (((x177*x178)^x179)%x180);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x181 = -3LL;
	int64_t x182 = -1LL;
	static int8_t x183 = -26;
	volatile uint64_t x184 = 977460272081563359LLU;
	volatile uint64_t t27 = 711659309838LLU;

	t27 = (((x181*x182)^x183)%x184);

	if (t27 != 852459176241411127LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x186 = INT8_MAX;
	int64_t x187 = -24245080712LL;

	t28 = (((x185*x186)^x187)%x188);

	if (t28 != 4LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 117U;
	static int64_t x191 = 17292LL;
	volatile int64_t t29 = -5748755217LL;

	t29 = (((x189*x190)^x191)%x192);

	if (t29 != 17179LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x193 = INT8_MIN;
	static int16_t x194 = INT16_MIN;
	int8_t x195 = -1;
	int8_t x196 = -23;
	int32_t t30 = 2086596;

	t30 = (((x193*x194)^x195)%x196);

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x197 = -1;
	uint8_t x198 = 29U;
	uint32_t x199 = 4081241U;
	int64_t x200 = 512294930094LL;

	t31 = (((x197*x198)^x199)%x200);

	if (t31 != 4290886074LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x201 = UINT32_MAX;
	volatile uint16_t x202 = 169U;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	static uint32_t t32 = 7170U;

	t32 = (((x201*x202)^x203)%x204);

	if (t32 != 2147483479U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x217 = 1059716787629004088LLU;
	static volatile int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;

	t33 = (((x217*x218)^x219)%x220);

	if (t33 != 14LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x221 = UINT16_MAX;
	static int16_t x222 = -141;
	int8_t x223 = 7;
	int8_t x224 = -7;
	static volatile int32_t t34 = 47;

	t34 = (((x221*x222)^x223)%x224);

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 0U;
	int8_t x235 = -1;
	int64_t x236 = INT64_MIN;
	volatile int64_t t35 = 7713LL;

	t35 = (((x233*x234)^x235)%x236);

	if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x241 = 24921;
	volatile int8_t x242 = 4;
	int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t36 = 241776LL;

	t36 = (((x241*x242)^x243)%x244);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x265 = -11;
	int64_t x266 = -1LL;
	int64_t x268 = INT64_MIN;

	t37 = (((x265*x266)^x267)%x268);

	if (t37 != 16LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x269 = -1;
	int8_t x271 = -7;
	volatile int32_t x272 = 133190145;
	volatile int32_t t38 = -32;

	t38 = (((x269*x270)^x271)%x272);

	if (t38 != 20750) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x273 = UINT32_MAX;
	volatile uint32_t x274 = 164027U;
	static int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MIN;

	t39 = (((x273*x274)^x275)%x276);

	if (t39 != 4294770874U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x278 = 2U;
	static volatile int8_t x279 = 61;
	volatile int32_t t40 = -76498;

	t40 = (((x277*x278)^x279)%x280);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -2;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t41 = -16154;

	t41 = (((x281*x282)^x283)%x284);

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x286 = -1;
	static uint16_t x288 = UINT16_MAX;
	int64_t t42 = 116684472017917LL;

	t42 = (((x285*x286)^x287)%x288);

	if (t42 != -9992LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x294 = -1;
	static int8_t x295 = INT8_MIN;

	t43 = (((x293*x294)^x295)%x296);

	if (t43 != 10LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x297 = 216982104U;
	int16_t x300 = INT16_MIN;
	static uint32_t t44 = 76U;

	t44 = (((x297*x298)^x299)%x300);

	if (t44 != 4078035543U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x301 = -4249036LL;
	int32_t x302 = INT32_MAX;
	volatile int32_t x303 = 1866;
	volatile int64_t x304 = -1LL;
	int64_t t45 = 53751148LL;

	t45 = (((x301*x302)^x303)%x304);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x309 = INT32_MIN;
	static uint64_t x310 = 420785419LLU;
	static uint16_t x311 = 2U;
	static int32_t x312 = INT32_MAX;
	uint64_t t46 = 237585710256279LLU;

	t46 = (((x309*x310)^x311)%x312);

	if (t46 != 1726698234LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x317 = 0U;
	int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile uint8_t x320 = 2U;
	int64_t t47 = 0LL;

	t47 = (((x317*x318)^x319)%x320);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x321 = 2LL;
	uint8_t x323 = 8U;
	static int16_t x324 = 4366;
	int64_t t48 = 364220079076LL;

	t48 = (((x321*x322)^x323)%x324);

	if (t48 != 866LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x325 = -1;
	static int8_t x326 = -1;
	int32_t x327 = -209;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t49 = 463471616595811381LL;

	t49 = (((x325*x326)^x327)%x328);

	if (t49 != -210LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x337 = -1;
	static int16_t x338 = INT16_MIN;
	static volatile int32_t x339 = -1;
	int32_t x340 = INT32_MIN;
	int32_t t50 = 12469;

	t50 = (((x337*x338)^x339)%x340);

	if (t50 != -32769) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x349 = UINT64_MAX;
	static int32_t x350 = 0;
	int16_t x351 = 6;
	volatile uint64_t t51 = 6069853406437116LLU;

	t51 = (((x349*x350)^x351)%x352);

	if (t51 != 6LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x354 = 0;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t52 = -476698220;

	t52 = (((x353*x354)^x355)%x356);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x361 = -1;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MAX;
	int32_t t53 = -157430878;

	t53 = (((x361*x362)^x363)%x364);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x373 = 1983U;
	uint8_t x374 = 25U;
	static uint8_t x375 = 73U;
	int16_t x376 = INT16_MAX;
	volatile int32_t t54 = 4934316;

	t54 = (((x373*x374)^x375)%x376);

	if (t54 != 16879) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x385 = 5U;
	int8_t x386 = -52;
	uint16_t x387 = 465U;
	int32_t x388 = -1;
	volatile int32_t t55 = 2;

	t55 = (((x385*x386)^x387)%x388);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x389 = 130795536LL;
	volatile int8_t x390 = INT8_MIN;
	volatile int16_t x391 = INT16_MAX;
	int64_t t56 = 151655931725LL;

	t56 = (((x389*x390)^x391)%x392);

	if (t56 != -16741857281LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x397 = 4U;
	int8_t x398 = -5;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 1U;

	t57 = (((x397*x398)^x399)%x400);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x401 = UINT32_MAX;
	uint32_t x402 = 3747U;
	volatile uint64_t x403 = 29213968211752LLU;
	volatile int64_t x404 = -118222830693250LL;
	static uint64_t t58 = 1481752LLU;

	t58 = (((x401*x402)^x403)%x404);

	if (t58 != 29210471919221LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x405 = 44686359;
	int16_t x406 = 28;
	int64_t x407 = -14579481LL;
	volatile uint32_t x408 = 1297U;
	static int64_t t59 = 1LL;

	t59 = (((x405*x406)^x407)%x408);

	if (t59 != -1195LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x409 = -1;
	static volatile int8_t x411 = INT8_MIN;
	static int32_t x412 = -1;
	volatile int32_t t60 = -30;

	t60 = (((x409*x410)^x411)%x412);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x416 = 1;
	static uint64_t t61 = 3381LLU;

	t61 = (((x413*x414)^x415)%x416);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x417 = INT8_MAX;
	volatile int8_t x418 = 1;
	uint16_t x419 = 51U;
	int32_t x420 = 425299;
	int32_t t62 = 8;

	t62 = (((x417*x418)^x419)%x420);

	if (t62 != 76) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x421 = 1;
	int64_t x422 = INT64_MIN;
	volatile int32_t x424 = INT32_MAX;
	int64_t t63 = 61082019099454054LL;

	t63 = (((x421*x422)^x423)%x424);

	if (t63 != -2082903986LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x434 = -49430643;
	int8_t x435 = -1;
	volatile int64_t x436 = INT64_MAX;

	t64 = (((x433*x434)^x435)%x436);

	if (t64 != 593167715LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x439 = INT8_MAX;
	int8_t x440 = INT8_MIN;
	volatile int32_t t65 = -35;

	t65 = (((x437*x438)^x439)%x440);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x445 = 1U;
	int8_t x446 = 0;
	uint16_t x447 = 6U;
	static int16_t x448 = 19;
	static int32_t t66 = -52546;

	t66 = (((x445*x446)^x447)%x448);

	if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x449 = -2;
	static int32_t x450 = -1;
	static uint64_t x451 = 5053LLU;
	uint32_t x452 = 404255U;

	t67 = (((x449*x450)^x451)%x452);

	if (t67 != 5055LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x457 = 21;
	int16_t x458 = -1;
	static volatile int16_t x459 = -1;

	t68 = (((x457*x458)^x459)%x460);

	if (t68 != 20) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x461 = -1;
	static uint16_t x462 = 3U;
	int64_t x463 = INT64_MIN;
	volatile int32_t x464 = -84103504;

	t69 = (((x461*x462)^x463)%x464);

	if (t69 != 39164701LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x465 = 45142757U;
	uint32_t x466 = 10U;
	int16_t x467 = INT16_MIN;
	volatile int32_t x468 = INT32_MIN;

	t70 = (((x465*x466)^x467)%x468);

	if (t70 != 1696054514U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x470 = -107;
	static volatile int16_t x471 = INT16_MIN;
	uint8_t x472 = 14U;
	int64_t t71 = -656728816630LL;

	t71 = (((x469*x470)^x471)%x472);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x481 = -8;
	uint16_t x482 = UINT16_MAX;
	volatile int32_t x483 = -62335;

	t72 = (((x481*x482)^x483)%x484);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x485 = -1;
	uint16_t x486 = 90U;
	int64_t x487 = 140355508857849223LL;
	uint8_t x488 = 1U;
	volatile int64_t t73 = -793891544364325506LL;

	t73 = (((x485*x486)^x487)%x488);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x493 = UINT8_MAX;
	uint8_t x494 = UINT8_MAX;
	int16_t x495 = -8423;
	int32_t t74 = -238282273;

	t74 = (((x493*x494)^x495)%x496);

	if (t74 != -104) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x497 = 408U;
	int16_t x498 = INT16_MIN;
	uint16_t x499 = 0U;
	volatile uint16_t x500 = 4614U;
	int32_t t75 = -16422;

	t75 = (((x497*x498)^x499)%x500);

	if (t75 != -2586) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x502 = 2U;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = 4U;

	t76 = (((x501*x502)^x503)%x504);

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x506 = 3671146;
	uint16_t x507 = 61U;
	volatile uint32_t t77 = 0U;

	t77 = (((x505*x506)^x507)%x508);

	if (t77 != 4882U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x513 = -631501678432963LL;
	volatile int64_t x514 = -1LL;
	int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MIN;

	t78 = (((x513*x514)^x515)%x516);

	if (t78 != -1899474237LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x529 = 1;
	int64_t x530 = INT64_MAX;
	int32_t x531 = INT32_MAX;
	uint8_t x532 = 13U;

	t79 = (((x529*x530)^x531)%x532);

	if (t79 != 10LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x533 = 61;
	uint64_t x534 = 2828075451852335222LLU;
	static uint32_t x536 = 2145026U;
	uint64_t t80 = 158476LLU;

	t80 = (((x533*x534)^x535)%x536);

	if (t80 != 27734LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x541 = -1LL;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = INT16_MAX;
	int32_t x544 = -8035040;
	static volatile uint64_t t81 = 95LLU;

	t81 = (((x541*x542)^x543)%x544);

	if (t81 != 32766LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x547 = 11;
	int64_t x548 = -95616112656LL;
	int64_t t82 = 7062LL;

	t82 = (((x545*x546)^x547)%x548);

	if (t82 != -2147483638LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x553 = -1;
	static volatile int8_t x554 = -1;
	int32_t x555 = INT32_MIN;
	int32_t x556 = -672846;
	static volatile int32_t t83 = -226;

	t83 = (((x553*x554)^x555)%x556);

	if (t83 != -432061) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x557 = 2U;
	volatile int16_t x560 = INT16_MAX;
	volatile uint32_t t84 = 31640923U;

	t84 = (((x557*x558)^x559)%x560);

	if (t84 != 32697U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x561 = -1;
	int16_t x563 = -1;
	int16_t x564 = INT16_MIN;

	t85 = (((x561*x562)^x563)%x564);

	if (t85 != 32766LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x566 = INT16_MAX;
	volatile int16_t x567 = INT16_MAX;
	static int64_t t86 = 5068346LL;

	t86 = (((x565*x566)^x567)%x568);

	if (t86 != 2147418110LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x574 = 1U;
	uint32_t x576 = 561453U;
	static volatile uint32_t t87 = 31049331U;

	t87 = (((x573*x574)^x575)%x576);

	if (t87 != 120236U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x585 = 1U;
	uint16_t x586 = 3684U;
	uint64_t x587 = 2582LLU;

	t88 = (((x585*x586)^x587)%x588);

	if (t88 != 1138LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x589 = INT16_MIN;
	int8_t x590 = -1;
	static volatile int64_t x592 = INT64_MIN;
	int64_t t89 = 65271874907093LL;

	t89 = (((x589*x590)^x591)%x592);

	if (t89 != -32769LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x593 = 366641836LLU;
	int8_t x594 = INT8_MIN;
	static int8_t x595 = -1;
	int64_t x596 = INT64_MIN;
	volatile uint64_t t90 = 1968962LLU;

	t90 = (((x593*x594)^x595)%x596);

	if (t90 != 46930155007LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x597 = 97LLU;
	int32_t x599 = INT32_MAX;
	int8_t x600 = INT8_MAX;
	uint64_t t91 = 11713051600690LLU;

	t91 = (((x597*x598)^x599)%x600);

	if (t91 != 85LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x603 = INT64_MIN;
	volatile int32_t x604 = -2131;
	volatile int64_t t92 = -860314LL;

	t92 = (((x601*x602)^x603)%x604);

	if (t92 != -1424LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x611 = 5;
	uint64_t t93 = 799495LLU;

	t93 = (((x609*x610)^x611)%x612);

	if (t93 != 9223372036812980216LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x618 = -1LL;
	uint16_t x619 = 998U;
	volatile int64_t x620 = INT64_MIN;
	volatile int64_t t94 = 2376040344191LL;

	t94 = (((x617*x618)^x619)%x620);

	if (t94 != 870LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x621 = UINT64_MAX;
	uint64_t x622 = 43280507640024387LLU;
	volatile int16_t x623 = INT16_MAX;
	uint64_t x624 = 63068565687490LLU;
	static volatile uint64_t t95 = 1LLU;

	t95 = (((x621*x622)^x623)%x624);

	if (t95 != 56098459919250LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x625 = INT16_MIN;
	volatile int64_t t96 = 26603638431417LL;

	t96 = (((x625*x626)^x627)%x628);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x629 = INT16_MIN;
	int16_t x630 = INT16_MIN;
	volatile int64_t x632 = 175078682180LL;
	volatile int64_t t97 = 2114827783344995LL;

	t97 = (((x629*x630)^x631)%x632);

	if (t97 != 1073741823LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x633 = INT16_MAX;
	uint8_t x634 = UINT8_MAX;
	volatile uint32_t x635 = 461U;
	uint64_t x636 = 870674256LLU;
	volatile uint64_t t98 = 413150779935LLU;

	t98 = (((x633*x634)^x635)%x636);

	if (t98 != 8355532LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x637 = -1;
	static int8_t x638 = 1;
	int16_t x639 = INT16_MIN;
	uint16_t x640 = UINT16_MAX;
	int32_t t99 = 1045233462;

	t99 = (((x637*x638)^x639)%x640);

	if (t99 != 32767) { NG(); } else { ; }
	
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

