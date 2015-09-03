#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
static int8_t x3 = INT8_MAX;
volatile uint64_t x27 = 112589042475375LLU;
volatile int8_t x28 = INT8_MAX;
int64_t x42 = INT64_MIN;
static int8_t x74 = -6;
uint32_t x75 = UINT32_MAX;
static uint8_t x76 = 0U;
int16_t x81 = INT16_MIN;
static uint32_t x82 = 16U;
static int32_t x95 = INT32_MAX;
static volatile int16_t x96 = -1;
int8_t x133 = INT8_MIN;
int64_t x136 = INT64_MAX;
uint64_t t14 = 14154LLU;
int16_t x137 = -11375;
int32_t x139 = INT32_MIN;
int32_t x151 = -1;
int64_t x155 = -94345170LL;
int64_t x159 = INT64_MAX;
uint64_t x183 = 13531832LLU;
uint32_t x186 = UINT32_MAX;
uint32_t x189 = 341387416U;
uint32_t x199 = 652U;
int64_t x200 = -1LL;
int64_t t25 = -40113LL;
volatile uint8_t x214 = UINT8_MAX;
static uint16_t x219 = 591U;
int8_t x222 = -4;
int64_t x233 = -1LL;
int8_t x234 = INT8_MIN;
volatile uint64_t t31 = 87034157238377LLU;
int32_t x274 = -1;
int16_t x295 = INT16_MAX;
static volatile uint32_t x296 = UINT32_MAX;
int32_t x303 = INT32_MIN;
static uint8_t x314 = 24U;
volatile int64_t t38 = 606LL;
static volatile int64_t t39 = 312605937LL;
int64_t x322 = -1LL;
int16_t x325 = INT16_MAX;
uint64_t x327 = 21112LLU;
volatile uint64_t t41 = 112716674189LLU;
int8_t x344 = -1;
int16_t x353 = -21;
volatile int8_t x363 = INT8_MAX;
volatile int64_t x372 = 901651LL;
uint8_t x377 = 11U;
static volatile uint64_t x379 = 32696432523597LLU;
int16_t x407 = 534;
int64_t t52 = -7376422193020LL;
static uint16_t x434 = 836U;
uint64_t x436 = 5729373LLU;
uint64_t t55 = 15059597155LLU;
static int8_t x440 = INT8_MIN;
int16_t x453 = INT16_MIN;
int8_t x454 = INT8_MAX;
volatile int64_t t59 = -37185639LL;
volatile int16_t x470 = -1;
static volatile uint64_t t61 = 15123960916LLU;
static int16_t x477 = 2;
static int8_t x479 = -1;
volatile uint64_t t62 = 21725020961LLU;
static uint16_t x490 = UINT16_MAX;
int32_t x494 = 32;
uint64_t x501 = 5993668LLU;
uint64_t x503 = 119229955623LLU;
int32_t x511 = -1741;
uint16_t x515 = UINT16_MAX;
volatile int8_t x516 = -1;
static int16_t x523 = 46;
volatile int32_t x534 = INT32_MAX;
volatile int16_t x540 = 1;
int64_t x590 = INT64_MIN;
uint32_t x593 = 5U;
int32_t x595 = INT32_MIN;
int64_t x602 = 958676950707809LL;
uint32_t x613 = UINT32_MAX;
int8_t x615 = 14;
uint32_t x625 = 11605U;
static uint64_t x629 = 2LLU;
volatile uint64_t t86 = 638131024177107869LLU;
int16_t x647 = 2055;
volatile int64_t t87 = -79340487565551488LL;
uint32_t x666 = 208990U;
int8_t x668 = INT8_MIN;
static int16_t x671 = -150;
int64_t x679 = 3764051151423236LL;
uint64_t x683 = 4274348291320992095LLU;
volatile uint64_t t93 = 2LLU;
int32_t t95 = -21;
static int8_t x709 = INT8_MIN;
int16_t x712 = INT16_MIN;
int8_t x713 = 1;
uint64_t x716 = UINT64_MAX;
volatile uint64_t t98 = 974LLU;
uint64_t x717 = UINT64_MAX;
volatile uint64_t t99 = 2051227LLU;


void f0(void) {
	static uint64_t x2 = 0LLU;
	int32_t x4 = 22;
	uint64_t t0 = 22773138051LLU;

	t0 = (((x1*x2)^x3)*x4);

	if (t0 != 2794LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -8;
	uint32_t x10 = 182U;
	int32_t x11 = -21;
	int8_t x12 = -1;
	volatile uint32_t t1 = 71U;

	t1 = (((x9*x10)^x11)*x12);

	if (t1 != 4294965829U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 1;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = -15;
	int32_t x20 = 332284;
	volatile int32_t t2 = -5757;

	t2 = (((x17*x18)^x19)*x20);

	if (t2 != 37548092) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 25099787370676077LLU;
	volatile uint64_t t3 = 12LLU;

	t3 = (((x25*x26)^x27)*x28);

	if (t3 != 9237670845249148433LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x37 = 74U;
	int16_t x38 = -7853;
	uint64_t x39 = 140961493456309721LLU;
	int32_t x40 = -1;
	volatile uint64_t t4 = 60457387893624066LLU;

	t4 = (((x37*x38)^x39)*x40);

	if (t4 != 140961493455737817LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 7325105482887723993LLU;
	volatile int16_t x43 = 15303;
	static uint8_t x44 = UINT8_MAX;
	volatile uint64_t t5 = 545LLU;

	t5 = (((x41*x42)^x43)*x44);

	if (t5 != 9223372036858678073LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = -1;
	static int16_t x50 = -1;
	int16_t x51 = 23;
	static int16_t x52 = INT16_MIN;
	static int32_t t6 = -76631;

	t6 = (((x49*x50)^x51)*x52);

	if (t6 != -720896) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MAX;
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = -1LL;
	int64_t t7 = 1498852029289963LL;

	t7 = (((x57*x58)^x59)*x60);

	if (t7 != -16128LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x65 = 3LLU;
	static int8_t x66 = INT8_MAX;
	volatile int64_t x67 = 1LL;
	int8_t x68 = INT8_MAX;
	volatile uint64_t t8 = 1590196694095038256LLU;

	t8 = (((x65*x66)^x67)*x68);

	if (t8 != 48260LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = INT8_MIN;
	static volatile uint32_t t9 = 1081U;

	t9 = (((x73*x74)^x75)*x76);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 30U;
	uint32_t t10 = 4376516U;

	t10 = (((x81*x82)^x83)*x84);

	if (t10 != 4279242466U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x89 = -1;
	volatile int16_t x90 = INT16_MIN;
	volatile int8_t x91 = 26;
	static uint32_t x92 = 433U;
	uint32_t t11 = 230845193U;

	t11 = (((x89*x90)^x91)*x92);

	if (t11 != 14199802U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x93 = -2;
	static uint16_t x94 = 23097U;
	int32_t t12 = -447170362;

	t12 = (((x93*x94)^x95)*x96);

	if (t12 != 2147437455) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x97 = 3019880U;
	int64_t x98 = 502980LL;
	uint16_t x99 = 4U;
	static int8_t x100 = INT8_MIN;
	volatile int64_t t13 = 534827677293LL;

	t13 = (((x97*x98)^x99)*x100);

	if (t13 != -194424223027712LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x134 = UINT64_MAX;
	volatile int16_t x135 = -800;

	t14 = (((x133*x134)^x135)*x136);

	if (t14 != 928LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x138 = 1;
	uint64_t x140 = 12243867292406LLU;
	volatile uint64_t t15 = 559969943546202LLU;

	t15 = (((x137*x138)^x139)*x140);

	if (t15 != 6755219697357406038LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x141 = 52261145710081LL;
	int16_t x142 = INT16_MIN;
	int32_t x143 = 420957220;
	static int32_t x144 = -1;
	int64_t t16 = 976886737736LL;

	t16 = (((x141*x142)^x143)*x144);

	if (t16 != 1712493223015298012LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x149 = -39;
	int8_t x150 = INT8_MIN;
	static int8_t x152 = -1;
	volatile int32_t t17 = 1;

	t17 = (((x149*x150)^x151)*x152);

	if (t17 != 4993) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = 3743520648468LLU;
	uint32_t x156 = 5U;
	volatile uint64_t t18 = 128120611602LLU;

	t18 = (((x153*x154)^x155)*x156);

	if (t18 != 18444366937729976266LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x157 = 58766712U;
	static int64_t x158 = -1LL;
	int16_t x160 = -1;
	int64_t t19 = -1LL;

	t19 = (((x157*x158)^x159)*x160);

	if (t19 != 9223372036796009097LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x165 = -58;
	int32_t x166 = -818;
	int64_t x167 = -1LL;
	uint16_t x168 = UINT16_MAX;
	static volatile int64_t t20 = 10LL;

	t20 = (((x165*x166)^x167)*x168);

	if (t20 != -3109308075LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = 29052LL;
	static volatile int64_t t21 = -1336026446LL;

	t21 = (((x177*x178)^x179)*x180);

	if (t21 != 62387742965760LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x181 = 55U;
	int64_t x182 = -1244177708901LL;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t22 = 466047469527LLU;

	t22 = (((x181*x182)^x183)*x184);

	if (t22 != 8759011487647104LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int16_t x187 = INT16_MAX;
	int16_t x188 = 0;
	static volatile uint32_t t23 = 42463659U;

	t23 = (((x185*x186)^x187)*x188);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x190 = -1;
	volatile int32_t x191 = 5006061;
	int32_t x192 = INT32_MAX;
	volatile uint32_t t24 = 915887791U;

	t24 = (((x189*x190)^x191)*x192);

	if (t24 != 2484423291U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x197 = 47846U;
	int32_t x198 = INT32_MIN;

	t25 = (((x197*x198)^x199)*x200);

	if (t25 != -652LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x201 = 7U;
	int16_t x202 = -1;
	static volatile uint8_t x203 = 28U;
	static int64_t x204 = 3681LL;
	volatile int64_t t26 = 6997639454LL;

	t26 = (((x201*x202)^x203)*x204);

	if (t26 != -99387LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x215 = -47599LL;
	static uint8_t x216 = 51U;
	int64_t t27 = 1587721401560460880LL;

	t27 = (((x213*x214)^x215)*x216);

	if (t27 != -219040915920LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x217 = INT16_MIN;
	uint8_t x218 = 0U;
	volatile uint32_t x220 = 1248U;
	uint32_t t28 = 203955742U;

	t28 = (((x217*x218)^x219)*x220);

	if (t28 != 737568U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x221 = -1706;
	int8_t x223 = -1;
	volatile int64_t x224 = 7100LL;
	static int64_t t29 = -523033794LL;

	t29 = (((x221*x222)^x223)*x224);

	if (t29 != -48457500LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x225 = -1;
	volatile uint64_t x226 = 6705796LLU;
	int64_t x227 = -1LL;
	static int8_t x228 = INT8_MIN;
	volatile uint64_t t30 = 246465477541781LLU;

	t30 = (((x225*x226)^x227)*x228);

	if (t30 != 18446744072851209856LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x235 = INT8_MIN;
	static uint64_t x236 = 213831221786607LLU;

	t31 = (((x233*x234)^x235)*x236);

	if (t31 != 18392003280932180224LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x245 = -1;
	static uint32_t x246 = 26756U;
	static int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MAX;
	volatile uint32_t t32 = 1U;

	t32 = (((x245*x246)^x247)*x248);

	if (t32 != 4294961284U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x269 = 0U;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 2728U;
	int64_t x272 = -102628228LL;
	volatile int64_t t33 = 408LL;

	t33 = (((x269*x270)^x271)*x272);

	if (t33 != -279969805984LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x273 = -1;
	volatile int64_t x275 = 15770545LL;
	int16_t x276 = INT16_MAX;
	volatile int64_t t34 = 72678653133258926LL;

	t34 = (((x273*x274)^x275)*x276);

	if (t34 != 516753415248LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x277 = 72U;
	int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t35 = 3;

	t35 = (((x277*x278)^x279)*x280);

	if (t35 != 7209088) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x293 = INT16_MIN;
	uint32_t x294 = 1606614U;
	static volatile uint32_t t36 = 792927773U;

	t36 = (((x293*x294)^x295)*x296);

	if (t36 != 1105887233U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x301 = -62;
	uint16_t x302 = UINT16_MAX;
	uint8_t x304 = 1U;
	int32_t t37 = 428;

	t37 = (((x301*x302)^x303)*x304);

	if (t37 != 2143420478) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x313 = 273878313492LL;
	int32_t x315 = -775864774;
	int8_t x316 = INT8_MIN;

	t38 = (((x313*x314)^x315)*x316);

	if (t38 != 841272819979008LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x317 = -1LL;
	static int32_t x318 = INT32_MIN;
	volatile int8_t x319 = 1;
	int16_t x320 = -1;

	t39 = (((x317*x318)^x319)*x320);

	if (t39 != -2147483649LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x321 = 3;
	static int8_t x323 = 1;
	uint8_t x324 = 2U;
	int64_t t40 = -105LL;

	t40 = (((x321*x322)^x323)*x324);

	if (t40 != -8LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x326 = 0U;
	static volatile int16_t x328 = INT16_MAX;

	t41 = (((x325*x326)^x327)*x328);

	if (t41 != 691776904LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x341 = 26;
	int64_t x342 = 108LL;
	uint16_t x343 = UINT16_MAX;
	int64_t t42 = -105516LL;

	t42 = (((x341*x342)^x343)*x344);

	if (t42 != -62727LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x349 = 13254U;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	uint64_t t43 = 191LLU;

	t43 = (((x349*x350)^x351)*x352);

	if (t43 != 18446744073707855105LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x354 = 1LLU;
	volatile int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	static volatile uint64_t t44 = 436423086210761293LLU;

	t44 = (((x353*x354)^x355)*x356);

	if (t44 != 18446673704966062080LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x361 = -1;
	volatile int8_t x362 = INT8_MAX;
	static uint32_t x364 = UINT32_MAX;
	uint32_t t45 = 19U;

	t45 = (((x361*x362)^x363)*x364);

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x365 = INT32_MIN;
	uint64_t x366 = 33247028166147632LLU;
	int8_t x367 = 0;
	uint8_t x368 = 1U;
	volatile uint64_t t46 = 8776325676395435317LLU;

	t46 = (((x365*x366)^x367)*x368);

	if (t46 != 9523108699111948288LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MIN;
	uint32_t x371 = 108391954U;
	volatile int64_t t47 = -250588974705206059LL;

	t47 = (((x369*x370)^x371)*x372);

	if (t47 != 93949915320150LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MAX;
	uint8_t x375 = 3U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t48 = -3680197;

	t48 = (((x373*x374)^x375)*x376);

	if (t48 != -532660480) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x378 = INT8_MIN;
	uint8_t x380 = 11U;
	uint64_t t49 = 88302348LLU;

	t49 = (((x377*x378)^x379)*x380);

	if (t49 != 18446384412951783887LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x385 = -196208;
	uint8_t x386 = 95U;
	uint32_t x387 = 16786895U;
	static volatile int32_t x388 = -1006632999;
	uint32_t t50 = 186312575U;

	t50 = (((x385*x386)^x387)*x388);

	if (t50 != 1078979559U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x393 = 1;
	volatile uint16_t x394 = 12755U;
	int16_t x395 = -1358;
	int32_t x396 = -1;
	int32_t t51 = 10585084;

	t51 = (((x393*x394)^x395)*x396);

	if (t51 != 13471) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x405 = 50;
	int64_t x406 = -20657250164LL;
	volatile uint32_t x408 = 1092599U;

	t52 = (((x405*x406)^x407)*x408);

	if (t52 != -1128504544167148478LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x410 = 1U;
	int16_t x411 = 23;
	uint8_t x412 = UINT8_MAX;
	int32_t t53 = 73460116;

	t53 = (((x409*x410)^x411)*x412);

	if (t53 != -26775) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x425 = 1459487544U;
	static uint16_t x426 = 2326U;
	uint64_t x427 = 383LLU;
	int32_t x428 = -1;
	volatile uint64_t t54 = 77379902048951633LLU;

	t54 = (((x425*x426)^x427)*x428);

	if (t54 != 18446744071965687889LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x433 = INT16_MAX;
	uint16_t x435 = 2U;

	t55 = (((x433*x434)^x435)*x436);

	if (t55 != 156945940674822LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x437 = UINT64_MAX;
	int8_t x438 = INT8_MAX;
	volatile int8_t x439 = -14;
	static uint64_t t56 = 26756455672LLU;

	t56 = (((x437*x438)^x439)*x440);

	if (t56 != 18446744073709536896LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x445 = -1;
	int64_t x446 = 45LL;
	int32_t x447 = 1;
	int32_t x448 = INT32_MIN;
	volatile int64_t t57 = 24946668LL;

	t57 = (((x445*x446)^x447)*x448);

	if (t57 != 98784247808LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x455 = 1;
	volatile uint32_t x456 = 55U;
	static uint32_t t58 = 55044544U;

	t58 = (((x453*x454)^x455)*x456);

	if (t58 != 4066082871U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x465 = 0U;
	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MIN;
	int32_t x468 = 474433628;

	t59 = (((x465*x466)^x467)*x468);

	if (t59 != -1018838458191314944LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x469 = 1169811243U;
	static volatile uint8_t x471 = 0U;
	uint8_t x472 = 20U;
	volatile uint32_t t60 = 778U;

	t60 = (((x469*x470)^x471)*x472);

	if (t60 != 2373578916U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x473 = 93592141629952281LLU;
	static int16_t x474 = -1;
	uint64_t x475 = UINT64_MAX;
	uint64_t x476 = 6545LLU;

	t61 = (((x473*x474)^x475)*x476);

	if (t61 != 3818012535622469272LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x478 = -26;
	uint64_t x480 = UINT64_MAX;

	t62 = (((x477*x478)^x479)*x480);

	if (t62 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x489 = UINT64_MAX;
	int32_t x491 = INT32_MAX;
	volatile int8_t x492 = -1;
	uint64_t t63 = 92561LLU;

	t63 = (((x489*x490)^x491)*x492);

	if (t63 != 2147418114LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x493 = -722591LL;
	int8_t x495 = INT8_MAX;
	uint64_t x496 = 50358554LLU;
	static uint64_t t64 = 12726366988LLU;

	t64 = (((x493*x494)^x495)*x496);

	if (t64 != 18445579640469551270LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x502 = -1;
	int16_t x504 = INT16_MIN;
	uint64_t t65 = 1791041297145780234LLU;

	t65 = (((x501*x502)^x503)*x504);

	if (t65 != 3907088354017280LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x509 = INT16_MAX;
	int32_t x510 = -1;
	uint32_t x512 = 53U;
	volatile uint32_t t66 = 65U;

	t66 = (((x509*x510)^x511)*x512);

	if (t66 != 1644378U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x513 = 40;
	volatile uint16_t x514 = 34U;
	volatile int32_t t67 = -218703522;

	t67 = (((x513*x514)^x515)*x516);

	if (t67 != -64175) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x517 = -58031597LL;
	uint32_t x518 = 6473U;
	static int16_t x519 = INT16_MIN;
	int32_t x520 = 7217;
	int64_t t68 = -1LL;

	t68 = (((x517*x518)^x519)*x520);

	if (t68 != 2710983438408315LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MIN;
	int8_t x524 = INT8_MAX;
	int32_t t69 = 13;

	t69 = (((x521*x522)^x523)*x524);

	if (t69 != 532682450) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x533 = -1LL;
	int8_t x535 = -1;
	static int32_t x536 = 0;
	volatile int64_t t70 = -40598LL;

	t70 = (((x533*x534)^x535)*x536);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x537 = 3U;
	int32_t x538 = -101;
	int32_t x539 = INT32_MAX;
	int32_t t71 = 910841987;

	t71 = (((x537*x538)^x539)*x540);

	if (t71 != -2147483346) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x541 = UINT64_MAX;
	int8_t x542 = -1;
	int8_t x543 = 62;
	int8_t x544 = 2;
	volatile uint64_t t72 = 445941184737393601LLU;

	t72 = (((x541*x542)^x543)*x544);

	if (t72 != 126LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x545 = -1LL;
	int32_t x546 = INT32_MAX;
	volatile int8_t x547 = INT8_MIN;
	int64_t x548 = -1LL;
	int64_t t73 = 45942956962130LL;

	t73 = (((x545*x546)^x547)*x548);

	if (t73 != -2147483521LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x573 = -255;
	volatile int8_t x574 = INT8_MIN;
	int16_t x575 = INT16_MAX;
	static int8_t x576 = 0;
	int32_t t74 = -55194;

	t74 = (((x573*x574)^x575)*x576);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x577 = INT8_MIN;
	volatile uint32_t x578 = UINT32_MAX;
	int32_t x579 = INT32_MAX;
	int16_t x580 = INT16_MAX;
	static volatile uint32_t t75 = 137512835U;

	t75 = (((x577*x578)^x579)*x580);

	if (t75 != 2143256705U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x581 = INT64_MIN;
	volatile uint64_t x582 = 44LLU;
	volatile int16_t x583 = -1;
	static int8_t x584 = INT8_MIN;
	uint64_t t76 = 11189387232350425LLU;

	t76 = (((x581*x582)^x583)*x584);

	if (t76 != 128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x585 = UINT32_MAX;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MIN;
	int64_t x588 = 22113LL;
	volatile uint64_t t77 = 11085876022LLU;

	t77 = (((x585*x586)^x587)*x588);

	if (t77 != 94973887239777LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x589 = UINT64_MAX;
	volatile int16_t x591 = -1;
	uint8_t x592 = 1U;
	static volatile uint64_t t78 = 16LLU;

	t78 = (((x589*x590)^x591)*x592);

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x594 = 44;
	volatile uint32_t x596 = 524509942U;
	volatile uint32_t t79 = 3136251U;

	t79 = (((x593*x594)^x595)*x596);

	if (t79 != 3723037544U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x601 = UINT8_MAX;
	uint64_t x603 = UINT64_MAX;
	int16_t x604 = 212;
	uint64_t t80 = 13LLU;

	t80 = (((x601*x602)^x603)*x604);

	if (t80 != 3514156265864500096LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x614 = 43U;
	volatile int32_t x616 = INT32_MIN;
	uint32_t t81 = 0U;

	t81 = (((x613*x614)^x615)*x616);

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x617 = UINT64_MAX;
	int8_t x618 = INT8_MIN;
	static int8_t x619 = INT8_MIN;
	int32_t x620 = INT32_MIN;
	volatile uint64_t t82 = 3466435LLU;

	t82 = (((x617*x618)^x619)*x620);

	if (t82 != 549755813888LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x621 = 99U;
	uint8_t x622 = UINT8_MAX;
	uint32_t x623 = UINT32_MAX;
	uint64_t x624 = UINT64_MAX;
	uint64_t t83 = 62330LLU;

	t83 = (((x621*x622)^x623)*x624);

	if (t83 != 18446744069414609566LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x626 = 1U;
	uint32_t x627 = UINT32_MAX;
	int32_t x628 = INT32_MAX;
	uint32_t t84 = 19898U;

	t84 = (((x625*x626)^x627)*x628);

	if (t84 != 11606U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x630 = 58U;
	uint32_t x631 = 366U;
	int64_t x632 = -40186690276LL;
	volatile uint64_t t85 = 317456265900141479LLU;

	t85 = (((x629*x630)^x631)*x632);

	if (t85 != 18446732741062893784LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x641 = -1LL;
	static uint64_t x642 = 83261LLU;
	static int32_t x643 = INT32_MAX;
	volatile int16_t x644 = INT16_MAX;

	t86 = (((x641*x642)^x643)*x644);

	if (t86 != 18446673709841038020LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x645 = 88747636867LL;
	uint16_t x646 = UINT16_MAX;
	volatile int8_t x648 = INT8_MIN;

	t87 = (((x645*x646)^x647)*x648);

	if (t87 != -744457776906353920LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x653 = 8U;
	int16_t x654 = INT16_MIN;
	int16_t x655 = 109;
	int16_t x656 = -1;
	int32_t t88 = -11;

	t88 = (((x653*x654)^x655)*x656);

	if (t88 != 262035) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x661 = INT32_MAX;
	uint32_t x662 = 53U;
	int16_t x663 = INT16_MIN;
	uint32_t x664 = UINT32_MAX;
	static uint32_t t89 = 68U;

	t89 = (((x661*x662)^x663)*x664);

	if (t89 != 2147450933U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x665 = -1LL;
	volatile uint32_t x667 = 27763275U;
	static int64_t t90 = 874874938305657LL;

	t90 = (((x665*x666)^x667)*x668);

	if (t90 != 3528002432LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x669 = INT16_MIN;
	int16_t x670 = 2;
	uint64_t x672 = 53855717LLU;
	volatile uint64_t t91 = 387LLU;

	t91 = (((x669*x670)^x671)*x672);

	if (t91 != 3521409911762LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x677 = 1;
	static uint64_t x678 = 128689778LLU;
	static int32_t x680 = INT32_MAX;
	static uint64_t t92 = 8003905837263878LLU;

	t92 = (((x677*x678)^x679)*x680);

	if (t92 != 4190161128427904650LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x681 = -1;
	static int8_t x682 = -32;
	int8_t x684 = 3;

	t93 = (((x681*x682)^x683)*x684);

	if (t93 != 12823044873962976381LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x693 = INT8_MIN;
	int32_t x694 = -1;
	int8_t x695 = INT8_MIN;
	static volatile int16_t x696 = 0;
	volatile int32_t t94 = 1474134;

	t94 = (((x693*x694)^x695)*x696);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x697 = 328U;
	int8_t x698 = INT8_MAX;
	static volatile uint16_t x699 = 3U;
	static int8_t x700 = -14;

	t95 = (((x697*x698)^x699)*x700);

	if (t95 != -583226) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x705 = UINT16_MAX;
	static uint32_t x706 = UINT32_MAX;
	volatile int8_t x707 = INT8_MIN;
	int8_t x708 = 3;
	volatile uint32_t t96 = 3175U;

	t96 = (((x705*x706)^x707)*x708);

	if (t96 != 196227U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x710 = -195;
	static volatile int16_t x711 = INT16_MAX;
	volatile int32_t t97 = 17;

	t97 = (((x709*x710)^x711)*x712);

	if (t97 != -255819776) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x714 = 15U;
	int8_t x715 = -1;

	t98 = (((x713*x714)^x715)*x716);

	if (t98 != 16LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x718 = 233823LLU;
	int8_t x719 = INT8_MAX;
	int32_t x720 = INT32_MIN;

	t99 = (((x717*x718)^x719)*x720);

	if (t99 != 502000072523776LLU) { NG(); } else { ; }
	
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

