#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = UINT32_MAX;
int32_t x4 = INT32_MIN;
volatile int16_t x23 = INT16_MIN;
int32_t t3 = 1568750;
uint16_t x34 = 6U;
int32_t x35 = -1;
uint64_t x37 = 27107844701861LLU;
uint64_t x41 = UINT64_MAX;
uint16_t x45 = UINT16_MAX;
int64_t x49 = INT64_MAX;
volatile int64_t x55 = -1LL;
int64_t x59 = -245530LL;
static uint16_t x62 = UINT16_MAX;
int64_t t14 = -21123032866884573LL;
volatile int64_t t15 = -156LL;
volatile int32_t x75 = 0;
int64_t x90 = 371172LL;
uint32_t x92 = UINT32_MAX;
static int16_t x106 = INT16_MAX;
int8_t x111 = INT8_MAX;
int8_t x112 = INT8_MIN;
int32_t x118 = INT32_MAX;
int32_t x130 = -1;
static volatile int32_t t25 = 8552482;
volatile uint64_t t26 = 427489159328457LLU;
uint32_t t27 = 441487190U;
uint16_t x158 = UINT16_MAX;
int64_t x159 = INT64_MIN;
uint16_t x161 = 197U;
static int16_t x164 = INT16_MIN;
int32_t x169 = -1;
volatile int64_t x181 = INT64_MAX;
int64_t t32 = 99198675LL;
uint64_t t33 = 1968905958906LLU;
int8_t x191 = -14;
uint32_t x193 = 9591617U;
uint32_t t35 = 1727565041U;
static int16_t x199 = INT16_MIN;
int8_t x204 = INT8_MIN;
int16_t x206 = -1;
static uint8_t x210 = 45U;
static int8_t x212 = -1;
int8_t x214 = -1;
uint32_t x222 = UINT32_MAX;
static int16_t x233 = INT16_MAX;
static volatile int8_t x234 = INT8_MIN;
int32_t x246 = INT32_MAX;
volatile int16_t x248 = INT16_MAX;
uint8_t x261 = 62U;
uint32_t x269 = 945952U;
volatile uint8_t x277 = 3U;
static volatile uint16_t x278 = 0U;
volatile int16_t x287 = 573;
volatile int64_t t51 = -23935190651LL;
static uint64_t t52 = 9499LLU;
volatile uint64_t t53 = 4075040296771LLU;
uint16_t x301 = 40U;
int32_t x303 = 2602054;
int64_t x306 = -48209644LL;
uint32_t x309 = 770675022U;
int32_t x311 = INT32_MIN;
uint8_t x335 = UINT8_MAX;
uint64_t x339 = 197262457154194807LLU;
volatile uint32_t t62 = 12U;
static int32_t x365 = INT32_MIN;
uint64_t x375 = UINT64_MAX;
volatile uint64_t t65 = 74351255815903LLU;
int64_t x379 = -1LL;
uint64_t x390 = 29916577636302LLU;
int32_t x399 = -1;
uint16_t x402 = 16258U;
uint16_t x406 = 21047U;
static volatile int32_t x422 = -163;
uint8_t x423 = UINT8_MAX;
uint16_t x428 = UINT16_MAX;
uint64_t t75 = 36012050729258258LLU;
volatile int64_t t76 = 1LL;
int64_t t77 = 518LL;
volatile uint16_t x465 = 4043U;
int8_t x467 = 1;
int16_t x470 = -1;
uint64_t x472 = 829158535675LLU;
volatile uint64_t x482 = 342328855543LLU;
int32_t x484 = -9111;
static int16_t x494 = INT16_MIN;
volatile int64_t x495 = INT64_MAX;
uint64_t x497 = 1617LLU;
uint64_t t85 = 32015360LLU;
volatile int16_t x501 = INT16_MAX;
static int64_t x502 = 262067181LL;
int32_t x504 = -1;
uint64_t x510 = 811695251299LLU;
static volatile uint64_t t88 = 425206922962LLU;
int32_t x525 = INT32_MIN;
int64_t x536 = INT64_MIN;
static int64_t t91 = 448081565740671201LL;
uint64_t t93 = 387016451LLU;
volatile uint32_t t94 = 305513478U;
int8_t x586 = INT8_MIN;
static int16_t x591 = -1;
uint64_t x595 = 44291LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint32_t x3 = 3U;
	uint64_t t0 = 457566762871LLU;

	t0 = ((x1*x2)+(x3-x4));

	if (t0 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MAX;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	static uint32_t t1 = 93253U;

	t1 = ((x5*x6)+(x7-x8));

	if (t1 != 32769U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MAX;
	uint64_t x15 = 542987865841456765LLU;
	int8_t x16 = INT8_MAX;
	uint64_t t2 = 101511LLU;

	t2 = ((x13*x14)+(x15-x16));

	if (t2 != 542987865841440382LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = -1;
	int16_t x22 = -987;
	uint16_t x24 = 4U;

	t3 = ((x21*x22)+(x23-x24));

	if (t3 != -31785) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	volatile int64_t x26 = INT64_MAX;
	int64_t x27 = 647592890LL;
	static int32_t x28 = -724;
	static volatile int64_t t4 = 16LL;

	t4 = ((x25*x26)+(x27-x28));

	if (t4 != -9223372036207182193LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = 10098502899988LLU;
	int64_t x30 = INT64_MIN;
	volatile int32_t x31 = INT32_MAX;
	int64_t x32 = 18436712033841329LL;
	uint64_t t5 = 711962840LLU;

	t5 = ((x29*x30)+(x31-x32));

	if (t5 != 18428307363823193934LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MAX;
	int8_t x36 = -1;
	int32_t t6 = -181;

	t6 = ((x33*x34)+(x35-x36));

	if (t6 != 196602) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 12U;
	int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	uint64_t t7 = 1184886488910940669LLU;

	t7 = ((x37*x38)+(x39-x40));

	if (t7 != 325294136422076LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = 97U;
	int16_t x43 = 11599;
	int8_t x44 = -1;
	uint64_t t8 = 96555215602LLU;

	t8 = ((x41*x42)+(x43-x44));

	if (t8 != 11503LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x46 = 21U;
	volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile uint32_t t9 = 11U;

	t9 = ((x45*x46)+(x47-x48));

	if (t9 != 2148859883U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -1LL;
	volatile uint64_t t10 = 1480535061084565711LLU;

	t10 = ((x49*x50)+(x51-x52));

	if (t10 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 3859;
	uint64_t x54 = UINT64_MAX;
	static uint64_t x56 = 18LLU;
	uint64_t t11 = 6061042789410299LLU;

	t11 = ((x53*x54)+(x55-x56));

	if (t11 != 18446744073709547738LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	uint64_t x58 = UINT64_MAX;
	int16_t x60 = INT16_MIN;
	uint64_t t12 = 2123037266898LLU;

	t12 = ((x57*x58)+(x59-x60));

	if (t12 != 18446744073709338855LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 397162355U;
	volatile int32_t x63 = 410971;
	uint32_t x64 = UINT32_MAX;
	uint32_t t13 = 117U;

	t13 = ((x61*x62)+(x63-x64));

	if (t13 != 533532137U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 0U;
	int64_t x66 = 79343729LL;
	int64_t x67 = INT64_MAX;
	static int8_t x68 = 2;

	t14 = ((x65*x66)+(x67-x68));

	if (t14 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 131790375U;
	uint8_t x70 = 4U;
	uint32_t x71 = 414U;
	int64_t x72 = INT64_MAX;

	t15 = ((x69*x70)+(x71-x72));

	if (t15 != -9223372036327613893LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 55U;
	int16_t x74 = INT16_MIN;
	static int64_t x76 = -31972695250LL;
	volatile int64_t t16 = 404132LL;

	t16 = ((x73*x74)+(x75-x76));

	if (t16 != 31970893010LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -22;
	int64_t x86 = -1LL;
	int8_t x87 = -1;
	int8_t x88 = INT8_MAX;
	int64_t t17 = 159LL;

	t17 = ((x85*x86)+(x87-x88));

	if (t17 != -106LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = 0;
	uint16_t x91 = 5000U;
	volatile int64_t t18 = 1935439342875552LL;

	t18 = ((x89*x90)+(x91-x92));

	if (t18 != 5001LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = INT8_MIN;
	int64_t x94 = -1338LL;
	int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int64_t t19 = -1LL;

	t19 = ((x93*x94)+(x95-x96));

	if (t19 != 72961LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 274LLU;
	int16_t x98 = INT16_MAX;
	int32_t x99 = 273;
	static uint16_t x100 = 2U;
	static uint64_t t20 = 8033735LLU;

	t20 = ((x97*x98)+(x99-x100));

	if (t20 != 8978429LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x101 = 29798650U;
	uint16_t x102 = 400U;
	int16_t x103 = -1;
	int64_t x104 = -1LL;
	int64_t t21 = 236784LL;

	t21 = ((x101*x102)+(x103-x104));

	if (t21 != 3329525408LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = 1;
	int16_t x107 = INT16_MIN;
	volatile uint32_t x108 = 5056U;
	volatile uint32_t t22 = 174432U;

	t22 = ((x105*x106)+(x107-x108));

	if (t22 != 4294962239U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = -22;
	uint32_t x110 = 22U;
	volatile uint32_t t23 = 2U;

	t23 = ((x109*x110)+(x111-x112));

	if (t23 != 4294967067U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -1;
	uint16_t x119 = UINT16_MAX;
	volatile int16_t x120 = 3422;
	volatile int32_t t24 = 5;

	t24 = ((x117*x118)+(x119-x120));

	if (t24 != -2147421534) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x129 = UINT16_MAX;
	static int8_t x131 = 3;
	int32_t x132 = -1;

	t25 = ((x129*x130)+(x131-x132));

	if (t25 != -65531) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -1;
	int8_t x139 = -1;
	int16_t x140 = -1;

	t26 = ((x137*x138)+(x139-x140));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x141 = -13;
	uint32_t x142 = 962532614U;
	uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MAX;

	t27 = ((x141*x142)+(x143-x144));

	if (t27 != 2519461554U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = 1;
	volatile int8_t x160 = INT8_MIN;
	volatile int64_t t28 = -38066880289358345LL;

	t28 = ((x157*x158)+(x159-x160));

	if (t28 != -9223372036854710145LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x162 = 3;
	static int32_t x163 = 14785;
	volatile int32_t t29 = -561070114;

	t29 = ((x161*x162)+(x163-x164));

	if (t29 != 48144) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MIN;
	int32_t x167 = -522;
	static int32_t x168 = 311;
	volatile uint32_t t30 = 230520U;

	t30 = ((x165*x166)+(x167-x168));

	if (t30 != 2147482815U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x170 = 300274854U;
	static int32_t x171 = INT32_MIN;
	volatile int32_t x172 = INT32_MIN;
	uint32_t t31 = 7454U;

	t31 = ((x169*x170)+(x171-x172));

	if (t31 != 3994692442U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x182 = -1;
	int16_t x183 = INT16_MAX;
	static int8_t x184 = 54;

	t32 = ((x181*x182)+(x183-x184));

	if (t32 != -9223372036854743094LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x185 = 1646LLU;
	static uint16_t x186 = UINT16_MAX;
	int8_t x187 = 1;
	volatile int32_t x188 = -16496;

	t33 = ((x185*x186)+(x187-x188));

	if (t33 != 107887107LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = INT8_MIN;
	static int16_t x190 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t34 = 5;

	t34 = ((x189*x190)+(x191-x192));

	if (t34 != 4194418) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x194 = 80U;
	int8_t x195 = -41;
	static uint32_t x196 = 13375U;

	t35 = ((x193*x194)+(x195-x196));

	if (t35 != 767315944U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x197 = INT8_MIN;
	uint64_t x198 = UINT64_MAX;
	static uint16_t x200 = 4U;
	static uint64_t t36 = 243522122562LLU;

	t36 = ((x197*x198)+(x199-x200));

	if (t36 != 18446744073709518972LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = INT8_MAX;
	static int16_t x202 = -1;
	static int16_t x203 = -13;
	static int32_t t37 = 5032851;

	t37 = ((x201*x202)+(x203-x204));

	if (t37 != -12) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x205 = -1;
	uint32_t x207 = 100708075U;
	uint32_t x208 = 95U;
	volatile uint32_t t38 = 1513888275U;

	t38 = ((x205*x206)+(x207-x208));

	if (t38 != 100707981U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x209 = 783825822814309LLU;
	uint32_t x211 = 910669973U;
	volatile uint64_t t39 = 5LLU;

	t39 = ((x209*x210)+(x211-x212));

	if (t39 != 35272162937313879LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x213 = 6U;
	volatile int8_t x215 = 6;
	int16_t x216 = 0;
	int32_t t40 = 3265059;

	t40 = ((x213*x214)+(x215-x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = INT32_MAX;
	volatile uint64_t x218 = 80818944800LLU;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = 1761858;
	uint64_t t41 = 240073558685344LLU;

	t41 = ((x217*x218)+(x219-x220));

	if (t41 != 7536665662407959453LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = -1;
	int8_t x223 = INT8_MAX;
	volatile uint16_t x224 = 27U;
	uint32_t t42 = 2429U;

	t42 = ((x221*x222)+(x223-x224));

	if (t42 != 101U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	int64_t t43 = -314802974752567125LL;

	t43 = ((x233*x234)+(x235-x236));

	if (t43 != -4194176LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x245 = -1LL;
	volatile uint64_t x247 = UINT64_MAX;
	volatile uint64_t t44 = 6954LLU;

	t44 = ((x245*x246)+(x247-x248));

	if (t44 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x257 = UINT8_MAX;
	volatile uint64_t x258 = 760561LLU;
	int8_t x259 = -5;
	uint8_t x260 = 55U;
	uint64_t t45 = 128004848LLU;

	t45 = ((x257*x258)+(x259-x260));

	if (t45 != 193942995LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x262 = -1;
	uint8_t x263 = 1U;
	int16_t x264 = -58;
	volatile int32_t t46 = 1;

	t46 = ((x261*x262)+(x263-x264));

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x270 = 1090U;
	int32_t x271 = -1;
	static volatile int16_t x272 = INT16_MIN;
	volatile uint32_t t47 = 144575U;

	t47 = ((x269*x270)+(x271-x272));

	if (t47 != 1031120447U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 3556U;
	int16_t x275 = INT16_MAX;
	static int64_t x276 = INT64_MAX;
	volatile int64_t t48 = -29520967899974LL;

	t48 = ((x273*x274)+(x275-x276));

	if (t48 != -9223372032676298752LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x279 = UINT32_MAX;
	static volatile uint8_t x280 = 88U;
	uint32_t t49 = 3U;

	t49 = ((x277*x278)+(x279-x280));

	if (t49 != 4294967207U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x281 = 16U;
	int8_t x282 = INT8_MIN;
	static int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	uint32_t t50 = 29669U;

	t50 = ((x281*x282)+(x283-x284));

	if (t50 != 4294932608U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = 24;
	volatile int64_t x286 = -1LL;
	volatile uint16_t x288 = 1U;

	t51 = ((x285*x286)+(x287-x288));

	if (t51 != 548LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x289 = 3;
	static uint64_t x290 = 121894479002200LLU;
	uint16_t x291 = 27323U;
	int8_t x292 = INT8_MIN;

	t52 = ((x289*x290)+(x291-x292));

	if (t52 != 365683437034051LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x293 = 1U;
	static volatile uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	static uint32_t x296 = UINT32_MAX;

	t53 = ((x293*x294)+(x295-x296));

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static uint16_t x299 = UINT16_MAX;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t54 = 1;

	t54 = ((x297*x298)+(x299-x300));

	if (t54 != 98048) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x302 = 6972654LL;
	static int8_t x304 = INT8_MAX;
	int64_t t55 = -367621294808515678LL;

	t55 = ((x301*x302)+(x303-x304));

	if (t55 != 281508087LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = 0;
	volatile uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MIN;
	int64_t t56 = 8668329461LL;

	t56 = ((x305*x306)+(x307-x308));

	if (t56 != 383LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x310 = 2;
	int16_t x312 = -1;
	volatile uint32_t t57 = 3422417U;

	t57 = ((x309*x310)+(x311-x312));

	if (t57 != 3688833693U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x313 = 0U;
	int16_t x314 = 2;
	static uint32_t x315 = UINT32_MAX;
	uint16_t x316 = 35U;
	static volatile uint32_t t58 = 7U;

	t58 = ((x313*x314)+(x315-x316));

	if (t58 != 4294967260U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -2;
	uint64_t x322 = 1271015390456852889LLU;
	int32_t x323 = -1;
	static int64_t x324 = INT64_MIN;
	volatile uint64_t t59 = 295853LLU;

	t59 = ((x321*x322)+(x323-x324));

	if (t59 != 6681341255941070029LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x333 = -6883;
	int8_t x334 = 1;
	uint16_t x336 = UINT16_MAX;
	int32_t t60 = -31154395;

	t60 = ((x333*x334)+(x335-x336));

	if (t60 != -72163) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	int64_t x340 = INT64_MAX;
	static volatile uint64_t t61 = 138115899LLU;

	t61 = ((x337*x338)+(x339-x340));

	if (t61 != 9420634496156454264LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = -12502973;
	uint32_t x350 = 387005882U;
	int16_t x351 = 1291;
	static uint32_t x352 = 255U;

	t62 = ((x349*x350)+(x351-x352));

	if (t62 != 3242056634U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x366 = 2874263510544287507LLU;
	uint64_t x367 = 0LLU;
	uint64_t x368 = 32527774115LLU;
	uint64_t t63 = 29326386526477LLU;

	t63 = ((x365*x366)+(x367-x368));

	if (t63 != 7463023610885672541LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x369 = 182806810LL;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 194;
	int32_t x372 = 286603;
	volatile int64_t t64 = -308LL;

	t64 = ((x369*x370)+(x371-x372));

	if (t64 != -23399558089LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x373 = INT32_MIN;
	volatile int64_t x374 = 69LL;
	uint8_t x376 = UINT8_MAX;

	t65 = ((x373*x374)+(x375-x376));

	if (t65 != 18446743925533179648LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MAX;
	uint64_t x380 = 47LLU;
	static volatile uint64_t t66 = 873568544135099623LLU;

	t66 = ((x377*x378)+(x379-x380));

	if (t66 != 18446744073709535312LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x385 = UINT16_MAX;
	static int8_t x386 = INT8_MIN;
	uint64_t x387 = 1517665372787069LLU;
	uint8_t x388 = UINT8_MAX;
	uint64_t t67 = 497237080775777LLU;

	t67 = ((x385*x386)+(x387-x388));

	if (t67 != 1517665364398334LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x389 = -1;
	static volatile uint8_t x391 = 3U;
	int32_t x392 = 3518;
	uint64_t t68 = 127LLU;

	t68 = ((x389*x390)+(x391-x392));

	if (t68 != 18446714157131911799LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = -2;
	uint16_t x398 = UINT16_MAX;
	static volatile uint64_t x400 = 12417LLU;
	volatile uint64_t t69 = 999LLU;

	t69 = ((x397*x398)+(x399-x400));

	if (t69 != 18446744073709408128LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x401 = INT16_MAX;
	volatile uint8_t x403 = 9U;
	volatile int32_t x404 = -61711164;
	static int32_t t70 = 58456;

	t70 = ((x401*x402)+(x403-x404));

	if (t70 != 594437059) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x405 = 87U;
	int8_t x407 = -7;
	static int16_t x408 = -1;
	int32_t t71 = -70;

	t71 = ((x405*x406)+(x407-x408));

	if (t71 != 1831083) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x409 = UINT64_MAX;
	static volatile int64_t x410 = 2483LL;
	uint8_t x411 = UINT8_MAX;
	static int8_t x412 = -1;
	static volatile uint64_t t72 = 44583517LLU;

	t72 = ((x409*x410)+(x411-x412));

	if (t72 != 18446744073709549389LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x421 = 1053538103328LL;
	volatile int8_t x424 = INT8_MIN;
	volatile int64_t t73 = 7763520LL;

	t73 = ((x421*x422)+(x423-x424));

	if (t73 != -171726710842081LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x425 = 0;
	static uint32_t x426 = UINT32_MAX;
	uint32_t x427 = 6U;
	volatile uint32_t t74 = 88907524U;

	t74 = ((x425*x426)+(x427-x428));

	if (t74 != 4294901767U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x441 = 98LLU;
	int64_t x442 = INT64_MAX;
	static uint64_t x443 = UINT64_MAX;
	volatile int8_t x444 = -32;

	t75 = ((x441*x442)+(x443-x444));

	if (t75 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x445 = INT8_MAX;
	static uint16_t x446 = UINT16_MAX;
	uint16_t x447 = 6U;
	int64_t x448 = INT64_MAX;

	t76 = ((x445*x446)+(x447-x448));

	if (t76 != -9223372036846452856LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x449 = INT32_MIN;
	static int64_t x450 = -1LL;
	int8_t x451 = INT8_MAX;
	uint8_t x452 = UINT8_MAX;

	t77 = ((x449*x450)+(x451-x452));

	if (t77 != 2147483520LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x461 = 12U;
	int8_t x462 = 29;
	volatile uint32_t x463 = 104629736U;
	int16_t x464 = INT16_MAX;
	volatile uint32_t t78 = 35140U;

	t78 = ((x461*x462)+(x463-x464));

	if (t78 != 104597317U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x466 = INT8_MIN;
	int32_t x468 = -1926;
	volatile int32_t t79 = -5;

	t79 = ((x465*x466)+(x467-x468));

	if (t79 != -515577) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x469 = 45385658794LLU;
	int32_t x471 = INT32_MIN;
	uint64_t t80 = 3LLU;

	t80 = ((x469*x470)+(x471-x472));

	if (t80 != 18446743197017873499LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x481 = 1U;
	volatile int64_t x483 = INT64_MIN;
	volatile uint64_t t81 = 8225284787359714372LLU;

	t81 = ((x481*x482)+(x483-x484));

	if (t81 != 9223372379183640462LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x485 = UINT64_MAX;
	volatile uint64_t x486 = 17278185134LLU;
	volatile int8_t x487 = INT8_MIN;
	int8_t x488 = -1;
	uint64_t t82 = 905667824LLU;

	t82 = ((x485*x486)+(x487-x488));

	if (t82 != 18446744056431366355LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x489 = -949;
	volatile uint32_t x490 = 1066740578U;
	volatile uint8_t x491 = 0U;
	int64_t x492 = 1482LL;
	int64_t t83 = 2063663253LL;

	t83 = ((x489*x490)+(x491-x492));

	if (t83 != 1275471852LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x493 = 1468;
	uint8_t x496 = 8U;
	int64_t t84 = -41LL;

	t84 = ((x493*x494)+(x495-x496));

	if (t84 != 9223372036806672375LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x498 = INT64_MIN;
	int8_t x499 = -2;
	int8_t x500 = INT8_MIN;

	t85 = ((x497*x498)+(x499-x500));

	if (t85 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x503 = INT8_MAX;
	int64_t t86 = -1LL;

	t86 = ((x501*x502)+(x503-x504));

	if (t86 != 8587155319955LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x509 = 1243U;
	volatile int16_t x511 = -1;
	int16_t x512 = INT16_MAX;
	volatile uint64_t t87 = 5220283LLU;

	t87 = ((x509*x510)+(x511-x512));

	if (t87 != 1008937197331889LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x513 = 3195281LLU;
	static uint64_t x514 = 29396869550229LLU;
	int64_t x515 = -1LL;
	volatile int64_t x516 = INT64_MIN;

	t88 = ((x513*x514)+(x515-x516));

	if (t88 != 10920910401632287076LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x526 = 18780844351045877LLU;
	volatile int64_t x527 = INT64_MAX;
	uint64_t x528 = 97843LLU;
	uint64_t t89 = 2432104526000509748LLU;

	t89 = ((x525*x526)+(x527-x528));

	if (t89 != 8498256786342445516LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x533 = UINT16_MAX;
	int16_t x534 = INT16_MAX;
	int32_t x535 = INT32_MIN;
	int64_t t90 = -14395439766980LL;

	t90 = ((x533*x534)+(x535-x536));

	if (t90 != 9223372036854677505LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x541 = UINT16_MAX;
	uint16_t x542 = 1U;
	int64_t x543 = -74LL;
	volatile int8_t x544 = -31;

	t91 = ((x541*x542)+(x543-x544));

	if (t91 != 65492LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x549 = -3;
	volatile uint8_t x550 = 4U;
	volatile uint64_t x551 = UINT64_MAX;
	volatile int32_t x552 = INT32_MIN;
	volatile uint64_t t92 = 1043299LLU;

	t92 = ((x549*x550)+(x551-x552));

	if (t92 != 2147483635LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x553 = UINT64_MAX;
	int64_t x554 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	int16_t x556 = INT16_MIN;

	t93 = ((x553*x554)+(x555-x556));

	if (t93 != 9223372034707324928LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x557 = INT8_MIN;
	uint32_t x558 = 25U;
	volatile uint16_t x559 = 252U;
	static volatile int8_t x560 = INT8_MIN;

	t94 = ((x557*x558)+(x559-x560));

	if (t94 != 4294964476U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x581 = UINT8_MAX;
	uint32_t x582 = UINT32_MAX;
	int32_t x583 = -27873;
	int64_t x584 = 1435379LL;
	volatile int64_t t95 = 9374001533LL;

	t95 = ((x581*x582)+(x583-x584));

	if (t95 != 4293503789LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x585 = UINT64_MAX;
	static int64_t x587 = -1LL;
	uint32_t x588 = 32148U;
	uint64_t t96 = 4383LLU;

	t96 = ((x585*x586)+(x587-x588));

	if (t96 != 18446744073709519595LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x589 = -4;
	int16_t x590 = INT16_MAX;
	static int8_t x592 = -1;
	volatile int32_t t97 = -111;

	t97 = ((x589*x590)+(x591-x592));

	if (t97 != -131068) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x593 = INT16_MIN;
	uint8_t x594 = UINT8_MAX;
	int32_t x596 = INT32_MIN;
	static volatile uint64_t t98 = 4272674587LLU;

	t98 = ((x593*x594)+(x595-x596));

	if (t98 != 2139172099LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x601 = INT16_MAX;
	uint8_t x602 = 3U;
	int8_t x603 = -3;
	uint8_t x604 = 1U;
	volatile int32_t t99 = -51628;

	t99 = ((x601*x602)+(x603-x604));

	if (t99 != 98297) { NG(); } else { ; }
	
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

