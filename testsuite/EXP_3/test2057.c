#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 25172;
volatile uint64_t t1 = 6472961197LLU;
int16_t x19 = INT16_MIN;
int32_t x29 = INT32_MAX;
int32_t x36 = INT32_MIN;
uint32_t t6 = 5448821U;
static int16_t x38 = -1;
volatile int16_t x39 = INT16_MAX;
int16_t x40 = INT16_MIN;
static int16_t x50 = INT16_MIN;
static int32_t x51 = INT32_MIN;
int8_t x53 = INT8_MIN;
volatile int8_t x55 = INT8_MAX;
volatile uint64_t t10 = 93483509124LLU;
static int16_t x66 = 11;
static int8_t x72 = INT8_MIN;
volatile uint32_t t13 = 21879165U;
uint64_t x119 = 382607005386240584LLU;
volatile uint64_t t15 = 605210075804436301LLU;
uint64_t x121 = 741LLU;
static volatile int64_t x123 = INT64_MIN;
int64_t x125 = INT64_MIN;
int8_t x129 = INT8_MIN;
int64_t x138 = -23LL;
uint16_t x140 = 6U;
int64_t t19 = 14LL;
volatile uint8_t x146 = 13U;
uint16_t x154 = 3216U;
int8_t x187 = -3;
uint8_t x205 = 3U;
uint16_t x208 = UINT16_MAX;
int16_t x210 = -1;
static uint32_t x214 = 329209743U;
static int8_t x215 = INT8_MIN;
static int64_t x219 = -2031LL;
static uint16_t x224 = UINT16_MAX;
volatile int64_t x270 = INT64_MAX;
static int64_t t37 = 7LL;
int64_t x274 = INT64_MAX;
uint32_t x275 = UINT32_MAX;
uint64_t x283 = 10740112816712LLU;
uint8_t x286 = 34U;
uint64_t x287 = 1989LLU;
uint64_t x313 = UINT64_MAX;
int16_t x315 = -4;
volatile int64_t t44 = 11547LL;
uint32_t x333 = UINT32_MAX;
static volatile uint64_t x348 = 6637LLU;
static uint64_t t48 = 24351162656147LLU;
uint8_t x370 = 25U;
static int64_t x372 = -1LL;
int8_t x375 = -1;
uint64_t x380 = 152916LLU;
static int64_t x399 = -1LL;
uint32_t x438 = UINT32_MAX;
volatile uint32_t x451 = UINT32_MAX;
uint32_t t61 = 25775U;
int16_t x480 = INT16_MIN;
uint16_t x486 = 2504U;
volatile int64_t t67 = 348832LL;
volatile int32_t x519 = -1;
volatile uint64_t t68 = 63349853446LLU;
int16_t x522 = 1;
uint16_t x523 = 4970U;
volatile int16_t x562 = INT16_MIN;
volatile uint64_t t76 = 4953846851LLU;
int8_t x586 = INT8_MAX;
volatile int32_t t78 = -1831736;
int16_t x609 = INT16_MAX;
int64_t x611 = -3007749LL;
volatile uint32_t t82 = 0U;
volatile uint64_t t83 = 10LLU;
int8_t x644 = -1;
uint16_t x649 = UINT16_MAX;
int64_t t87 = 3176989336319LL;
int8_t x673 = INT8_MIN;
int64_t x674 = -1LL;
uint64_t x681 = UINT64_MAX;
uint64_t x682 = 108406924541655361LLU;
int16_t x685 = -11359;
int64_t x688 = -1LL;
volatile uint64_t t93 = 251LLU;
uint32_t x699 = UINT32_MAX;
int16_t x700 = INT16_MAX;
volatile int8_t x709 = INT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 10672U;
	volatile int8_t x2 = 0;
	static int8_t x3 = INT8_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -2729632;

	t0 = ((x1*x2)*(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	uint64_t x6 = UINT64_MAX;
	volatile int8_t x8 = -1;

	t1 = ((x5*x6)*(x7^x8));

	if (t1 != 1649712555LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	uint64_t x14 = 1617237864LLU;
	int16_t x15 = INT16_MAX;
	uint16_t x16 = 882U;
	volatile uint64_t t2 = 108372536713444800LLU;

	t2 = ((x13*x14)*(x15^x16));

	if (t2 != 16757041533015556096LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	volatile int8_t x18 = INT8_MIN;
	int32_t x20 = -42874;
	volatile int64_t t3 = -779933LL;

	t3 = ((x17*x18)*(x19^x20));

	if (t3 != 7095040LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 0U;
	int8_t x27 = 0;
	int16_t x28 = 1;
	volatile uint64_t t4 = 40690887829LLU;

	t4 = ((x25*x26)*(x27^x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x30 = 4488LLU;
	int64_t x31 = INT64_MIN;
	volatile uint16_t x32 = 61U;
	volatile uint64_t t5 = 476236LLU;

	t5 = ((x29*x30)*(x31^x32));

	if (t5 != 587912303071896LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 6797441U;
	volatile int16_t x35 = -1;

	t6 = ((x33*x34)*(x35^x36));

	if (t6 != 414136193U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -530677735LL;
	static int64_t t7 = -31172LL;

	t7 = ((x37*x38)*(x39^x40));

	if (t7 != -530677735LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x49 = UINT64_MAX;
	static int32_t x52 = -306543;
	volatile uint64_t t8 = 245LLU;

	t8 = ((x49*x50)*(x51^x52));

	if (t8 != 70358699376640LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x54 = INT8_MIN;
	uint64_t x56 = 2609688657983LLU;
	volatile uint64_t t9 = 32034LLU;

	t9 = ((x53*x54)*(x55^x56));

	if (t9 != 42757138972409856LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 7693399524754LLU;
	int64_t x58 = 200242201031677252LL;
	int8_t x59 = -3;
	volatile int16_t x60 = INT16_MIN;

	t10 = ((x57*x58)*(x59^x60));

	if (t10 != 3573276922799759784LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MAX;
	volatile uint16_t x67 = 28U;
	int64_t x68 = 20869825LL;
	int64_t t11 = 682LL;

	t11 = ((x65*x66)*(x67^x68));

	if (t11 != 29155184641LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = -1;
	int16_t x71 = -1;
	volatile uint32_t t12 = 2327175U;

	t12 = ((x69*x70)*(x71^x72));

	if (t12 != 127U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x97 = INT32_MIN;
	static uint32_t x98 = 162867139U;
	static uint8_t x99 = UINT8_MAX;
	int16_t x100 = -1;

	t13 = ((x97*x98)*(x99^x100));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x105 = 3U;
	int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = 196693664250LLU;
	volatile uint64_t t14 = 3848037287LLU;

	t14 = ((x105*x106)*(x107^x108));

	if (t14 != 3757373194782205074LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int16_t x118 = 16209;
	volatile int32_t x120 = 213684324;

	t15 = ((x117*x118)*(x119^x120));

	if (t15 != 14875801578035256340LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x122 = -242037559;
	static volatile uint16_t x124 = UINT16_MAX;
	static volatile uint64_t t16 = 32909804884290LLU;

	t16 = ((x121*x122)*(x123^x124));

	if (t16 != 9211618345665838643LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x126 = 1U;
	int32_t x127 = INT32_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	static uint64_t t17 = 27820391575LLU;

	t17 = ((x125*x126)*(x127^x128));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x130 = INT16_MIN;
	int64_t x131 = 76LL;
	volatile int8_t x132 = -1;
	int64_t t18 = -148LL;

	t18 = ((x129*x130)*(x131^x132));

	if (t18 != -322961408LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x137 = UINT16_MAX;
	volatile uint32_t x139 = 0U;

	t19 = ((x137*x138)*(x139^x140));

	if (t19 != -9043830LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x145 = 1;
	int16_t x147 = -1;
	int8_t x148 = INT8_MAX;
	int32_t t20 = 13;

	t20 = ((x145*x146)*(x147^x148));

	if (t20 != -1664) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x149 = 48856367LLU;
	int8_t x150 = -1;
	int32_t x151 = -41150;
	uint16_t x152 = 1214U;
	uint64_t t21 = 1261573LLU;

	t21 = ((x149*x150)*(x151^x152));

	if (t21 != 2051381137596LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x153 = 1948982U;
	volatile int32_t x155 = INT32_MIN;
	uint32_t x156 = 1472U;
	static uint32_t t22 = 142680U;

	t22 = ((x153*x154)*(x155^x156));

	if (t22 != 797485056U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x173 = -1;
	static int64_t x174 = 245826749071450LL;
	int8_t x175 = INT8_MAX;
	uint64_t x176 = UINT64_MAX;
	uint64_t t23 = 11087LLU;

	t23 = ((x173*x174)*(x175^x176));

	if (t23 != 31465823881145600LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x177 = 113564U;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	uint32_t t24 = 31626U;

	t24 = ((x177*x178)*(x179^x180));

	if (t24 != 4280544668U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x181 = -1;
	int32_t x182 = -452;
	static int64_t x183 = -1LL;
	int32_t x184 = 7;
	int64_t t25 = 22602864980486746LL;

	t25 = ((x181*x182)*(x183^x184));

	if (t25 != -3616LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x185 = 0U;
	volatile int16_t x186 = INT16_MIN;
	uint64_t x188 = UINT64_MAX;
	static uint64_t t26 = 72814LLU;

	t26 = ((x185*x186)*(x187^x188));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x189 = -2;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 6U;
	volatile uint64_t t27 = 7986336864140LLU;

	t27 = ((x189*x190)*(x191^x192));

	if (t27 != 18446744073709486092LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	static int64_t x196 = -1LL;
	int64_t t28 = 2315LL;

	t28 = ((x193*x194)*(x195^x196));

	if (t28 != -70366596661249LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x206 = INT8_MIN;
	uint64_t x207 = 9860444701689LLU;
	uint64_t t29 = 6812200LLU;

	t29 = ((x205*x206)*(x207^x208));

	if (t29 != 18442957662957467392LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x211 = -1;
	int16_t x212 = INT16_MIN;
	int32_t t30 = 1;

	t30 = ((x209*x210)*(x211^x212));

	if (t30 != -8355585) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x213 = INT8_MAX;
	uint16_t x216 = 79U;
	volatile uint32_t t31 = 346U;

	t31 = ((x213*x214)*(x215^x216));

	if (t31 != 27169503U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = -375719688LL;
	uint64_t x220 = 153165LLU;
	uint64_t t32 = 128998918381838077LLU;

	t32 = ((x217*x218)*(x219^x220));

	if (t32 != 18439435418039185408LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x221 = 807U;
	static uint32_t x222 = 3435U;
	int8_t x223 = INT8_MIN;
	uint32_t t33 = 16971151U;

	t33 = ((x221*x222)*(x223^x224));

	if (t33 != 3366902323U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = 145U;
	volatile uint32_t x226 = UINT32_MAX;
	volatile int64_t x227 = -630518605LL;
	int32_t x228 = -14897780;
	int64_t t34 = 13398830LL;

	t34 = ((x225*x226)*(x227^x228));

	if (t34 != 2699803702440340305LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = -1;
	volatile int8_t x230 = -2;
	int16_t x231 = INT16_MAX;
	uint16_t x232 = 33U;
	int32_t t35 = -12;

	t35 = ((x229*x230)*(x231^x232));

	if (t35 != 65468) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = 0;
	static int64_t x243 = -1LL;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t36 = 1LLU;

	t36 = ((x241*x242)*(x243^x244));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x269 = 0;
	int64_t x271 = 7271133824LL;
	int16_t x272 = -1;

	t37 = ((x269*x270)*(x271^x272));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x273 = 0U;
	volatile int8_t x276 = -1;
	static int64_t t38 = -825LL;

	t38 = ((x273*x274)*(x275^x276));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = 7536U;
	uint16_t x279 = 2U;
	static uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t39 = 22064786563235037LLU;

	t39 = ((x277*x278)*(x279^x280));

	if (t39 != 18446744072968755280LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x281 = -18;
	uint8_t x282 = 5U;
	int64_t x284 = 1823987899637520615LL;
	uint64_t t40 = 14162096679194LLU;

	t40 = ((x281*x282)*(x283^x284));

	if (t40 != 1862653349801938554LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x285 = -28;
	uint64_t x288 = 90113625573102448LLU;
	volatile uint64_t t41 = 94978938552184LLU;

	t41 = ((x285*x286)*(x287^x288));

	if (t41 != 6445548822953918184LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x309 = 67997694LL;
	int64_t x310 = -1LL;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = -1LL;
	int64_t t42 = -5176214447368867LL;

	t42 = ((x309*x310)*(x311^x312));

	if (t42 != -2228080439298LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x314 = INT64_MIN;
	int8_t x316 = -1;
	volatile uint64_t t43 = 8615LLU;

	t43 = ((x313*x314)*(x315^x316));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = 0U;
	static int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MIN;

	t44 = ((x317*x318)*(x319^x320));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = -145;
	uint64_t x327 = 34759384593408LLU;
	static int16_t x328 = INT16_MIN;
	uint64_t t45 = 12349428115311LLU;

	t45 = ((x325*x326)*(x327^x328));

	if (t45 != 17801609896150040576LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MAX;
	int16_t x336 = INT16_MIN;
	uint32_t t46 = 22U;

	t46 = ((x333*x334)*(x335^x336));

	if (t46 != 2147451007U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x341 = INT32_MAX;
	int8_t x342 = 1;
	uint8_t x343 = 1U;
	volatile int64_t x344 = -1LL;
	volatile int64_t t47 = 0LL;

	t47 = ((x341*x342)*(x343^x344));

	if (t47 != -4294967294LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = 7;
	int64_t x347 = -1LL;

	t48 = ((x345*x346)*(x347^x348));

	if (t48 != 5947648LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x357 = 44777738259LL;
	static volatile uint64_t x358 = 937LLU;
	int32_t x359 = -1;
	uint32_t x360 = 24996U;
	volatile uint64_t t49 = 3659LLU;

	t49 = ((x357*x358)*(x359^x360));

	if (t49 != 13984457700645057129LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x369 = -2162;
	volatile uint32_t x371 = 105563U;
	volatile int64_t t50 = 14170015549201LL;

	t50 = ((x369*x370)*(x371^x372));

	if (t50 != 5705734200LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x373 = INT32_MAX;
	uint32_t x374 = 397616019U;
	uint8_t x376 = 11U;
	volatile uint32_t t51 = 17441127U;

	t51 = ((x373*x374)*(x375^x376));

	if (t51 != 476424932U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x377 = 6142U;
	int32_t x378 = 83017;
	uint64_t x379 = 3030270688LLU;
	uint64_t t52 = 5528533432LLU;

	t52 = ((x377*x378)*(x379^x380));

	if (t52 != 1545033507971185496LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x393 = 15;
	int64_t x394 = -13LL;
	uint64_t x395 = 8LLU;
	static int16_t x396 = -2;
	static uint64_t t53 = 57203LLU;

	t53 = ((x393*x394)*(x395^x396));

	if (t53 != 1950LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x397 = 7159U;
	static int32_t x398 = -1;
	int16_t x400 = INT16_MIN;
	int64_t t54 = -13621378LL;

	t54 = ((x397*x398)*(x399^x400));

	if (t54 != -234578953LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x409 = 65362LL;
	int32_t x410 = INT32_MAX;
	uint32_t x411 = 5905777U;
	uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t55 = 1373211LLU;

	t55 = ((x409*x410)*(x411^x412));

	if (t55 != 1145886931757956228LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MAX;
	uint32_t x415 = 334U;
	volatile int32_t x416 = 55;
	volatile uint64_t t56 = 30LLU;

	t56 = ((x413*x414)*(x415^x416));

	if (t56 != 9223372036854776185LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x417 = -1;
	volatile uint16_t x418 = 7026U;
	volatile uint64_t x419 = UINT64_MAX;
	int64_t x420 = -2LL;
	uint64_t t57 = 583210922LLU;

	t57 = ((x417*x418)*(x419^x420));

	if (t57 != 18446744073709544590LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x425 = UINT32_MAX;
	uint64_t x426 = 20016601585LLU;
	volatile int32_t x427 = 661;
	uint16_t x428 = 27U;
	static uint64_t t58 = 439818LLU;

	t58 = ((x425*x426)*(x427^x428));

	if (t58 != 17575361068582550098LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x437 = -1;
	int16_t x439 = -1;
	volatile int16_t x440 = 1;
	volatile uint32_t t59 = 30889U;

	t59 = ((x437*x438)*(x439^x440));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x445 = -1;
	volatile uint32_t x446 = 4U;
	static int32_t x447 = INT32_MAX;
	int16_t x448 = 12;
	volatile uint32_t t60 = 11026599U;

	t60 = ((x445*x446)*(x447^x448));

	if (t60 != 52U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x449 = UINT32_MAX;
	uint16_t x450 = 4U;
	int8_t x452 = INT8_MIN;

	t61 = ((x449*x450)*(x451^x452));

	if (t61 != 4294966788U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x477 = 2;
	static uint32_t x478 = 203U;
	static int16_t x479 = -1;
	volatile uint32_t t62 = 29U;

	t62 = ((x477*x478)*(x479^x480));

	if (t62 != 13303402U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x485 = 23817289U;
	uint8_t x487 = 22U;
	static int64_t x488 = 180LL;
	int64_t t63 = 1579383884223127LL;

	t63 = ((x485*x486)*(x487^x488));

	if (t63 != 616234522896LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x493 = 18;
	int64_t x494 = -43082LL;
	uint8_t x495 = 56U;
	volatile int8_t x496 = INT8_MIN;
	static volatile int64_t t64 = -32511164106211LL;

	t64 = ((x493*x494)*(x495^x496));

	if (t64 != 55834272LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x505 = 0U;
	static int8_t x506 = -1;
	int64_t x507 = -1LL;
	int64_t x508 = INT64_MAX;
	static volatile int64_t t65 = -16797990117LL;

	t65 = ((x505*x506)*(x507^x508));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x509 = INT16_MAX;
	int8_t x510 = INT8_MIN;
	static uint8_t x511 = 16U;
	uint32_t x512 = 1929521U;
	volatile uint32_t t66 = 5U;

	t66 = ((x509*x510)*(x511^x512));

	if (t66 != 3329790080U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x513 = -1LL;
	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MAX;
	static int16_t x516 = -1;

	t67 = ((x513*x514)*(x515^x516));

	if (t67 != -274877906944LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x517 = UINT32_MAX;
	static volatile int8_t x518 = 2;
	uint64_t x520 = 787640694158685409LLU;

	t68 = ((x517*x518)*(x519^x520));

	if (t68 != 5468514752167733700LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x521 = 14368;
	int32_t x524 = -1;
	int32_t t69 = 2043;

	t69 = ((x521*x522)*(x523^x524));

	if (t69 != -71423328) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x525 = UINT16_MAX;
	int8_t x526 = 9;
	int8_t x527 = INT8_MAX;
	int16_t x528 = -1;
	static int32_t t70 = -583833092;

	t70 = ((x525*x526)*(x527^x528));

	if (t70 != -75496320) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x529 = 4U;
	static uint8_t x530 = 2U;
	int64_t x531 = -371211531206LL;
	int16_t x532 = INT16_MIN;
	volatile int64_t t71 = 24850541231916538LL;

	t71 = ((x529*x530)*(x531^x532));

	if (t71 != 2969692037584LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x537 = -1LL;
	volatile int8_t x538 = -1;
	int16_t x539 = -83;
	int8_t x540 = -1;
	int64_t t72 = 30LL;

	t72 = ((x537*x538)*(x539^x540));

	if (t72 != 82LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x549 = 9LLU;
	int64_t x550 = -970833538832409621LL;
	int32_t x551 = -1371;
	uint16_t x552 = UINT16_MAX;
	volatile uint64_t t73 = 12358694059LLU;

	t73 = ((x549*x550)*(x551^x552));

	if (t73 != 17097786302868956302LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x553 = 133953U;
	volatile uint64_t x554 = 324LLU;
	static uint8_t x555 = 6U;
	volatile int16_t x556 = INT16_MIN;
	uint64_t t74 = 120LLU;

	t74 = ((x553*x554)*(x555^x556));

	if (t74 != 18446742651813459352LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x561 = -1;
	uint64_t x563 = UINT64_MAX;
	volatile int16_t x564 = INT16_MAX;
	uint64_t t75 = 4822018LLU;

	t75 = ((x561*x562)*(x563^x564));

	if (t75 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x573 = INT16_MIN;
	volatile uint64_t x574 = UINT64_MAX;
	int64_t x575 = -1LL;
	int16_t x576 = -1;

	t76 = ((x573*x574)*(x575^x576));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x577 = -14;
	int32_t x578 = -1;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = -1;
	volatile int32_t t77 = 0;

	t77 = ((x577*x578)*(x579^x580));

	if (t77 != -917504) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x585 = 113U;
	int8_t x587 = 0;
	int16_t x588 = INT16_MIN;

	t78 = ((x585*x586)*(x587^x588));

	if (t78 != -470253568) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x593 = -15;
	static volatile uint8_t x594 = 3U;
	int8_t x595 = 0;
	static uint32_t x596 = 1383U;
	static volatile uint32_t t79 = 13274413U;

	t79 = ((x593*x594)*(x595^x596));

	if (t79 != 4294905061U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x610 = -848;
	int64_t x612 = -1LL;
	volatile int64_t t80 = 4229LL;

	t80 = ((x609*x610)*(x611^x612));

	if (t80 != -83574537151168LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x617 = 4644U;
	int32_t x618 = INT32_MIN;
	static int32_t x619 = -2260691;
	int16_t x620 = -1;
	static volatile uint32_t t81 = 16962598U;

	t81 = ((x617*x618)*(x619^x620));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x621 = 15506425U;
	volatile int32_t x622 = -2443;
	static volatile int8_t x623 = -1;
	int8_t x624 = 0;

	t82 = ((x621*x622)*(x623^x624));

	if (t82 != 3522457907U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x629 = -6242;
	int8_t x630 = INT8_MIN;
	int64_t x631 = INT64_MAX;
	static uint64_t x632 = 52586490636579LLU;

	t83 = ((x629*x630)*(x631^x632));

	if (t83 != 13324888278276512768LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x637 = -10;
	uint32_t x638 = UINT32_MAX;
	uint64_t x639 = UINT64_MAX;
	uint8_t x640 = UINT8_MAX;
	uint64_t t84 = 385401906541859LLU;

	t84 = ((x637*x638)*(x639^x640));

	if (t84 != 18446744073709549056LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x641 = 683;
	int16_t x642 = INT16_MIN;
	int8_t x643 = 1;
	int32_t t85 = 146;

	t85 = ((x641*x642)*(x643^x644));

	if (t85 != 44761088) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x645 = UINT64_MAX;
	static int16_t x646 = 360;
	static int64_t x647 = 126117472651227208LL;
	int32_t x648 = INT32_MIN;
	uint64_t t86 = 327LLU;

	t86 = ((x645*x646)*(x647^x648));

	if (t86 != 8508801749166332608LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x650 = INT8_MIN;
	int32_t x651 = INT32_MIN;
	int64_t x652 = -52098LL;

	t87 = ((x649*x650)*(x651^x652));

	if (t87 != -18013686608544000LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x665 = 51U;
	volatile int16_t x666 = -1;
	uint8_t x667 = 62U;
	uint64_t x668 = 67738675997223LLU;
	volatile uint64_t t88 = 7843LLU;

	t88 = ((x665*x666)*(x667^x668));

	if (t88 != 18443289401233693957LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x669 = -1;
	static uint64_t x670 = UINT64_MAX;
	static uint16_t x671 = 20824U;
	int32_t x672 = -1;
	volatile uint64_t t89 = 2025LLU;

	t89 = ((x669*x670)*(x671^x672));

	if (t89 != 18446744073709530791LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x675 = -1;
	static int16_t x676 = 107;
	volatile int64_t t90 = -30314851LL;

	t90 = ((x673*x674)*(x675^x676));

	if (t90 != -13824LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x677 = UINT16_MAX;
	volatile uint64_t x678 = 421LLU;
	static int16_t x679 = INT16_MIN;
	uint8_t x680 = 2U;
	volatile uint64_t t91 = 5276LLU;

	t91 = ((x677*x678)*(x679^x680));

	if (t91 != 18446743169687911606LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x683 = INT64_MIN;
	uint64_t x684 = UINT64_MAX;
	volatile uint64_t t92 = 3430173230791LLU;

	t92 = ((x681*x682)*(x683^x684));

	if (t92 != 9331778961396431169LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x686 = 207269525LLU;
	int16_t x687 = INT16_MIN;

	t93 = ((x685*x686)*(x687^x688));

	if (t93 != 18369598283338409291LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x689 = INT8_MIN;
	int16_t x690 = 1955;
	int32_t x691 = 2089286;
	uint64_t x692 = UINT64_MAX;
	static volatile uint64_t t94 = 2LLU;

	t94 = ((x689*x690)*(x691^x692));

	if (t94 != 522823178880LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x697 = -1;
	uint8_t x698 = 70U;
	uint32_t t95 = 72U;

	t95 = ((x697*x698)*(x699^x700));

	if (t95 != 2293760U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x701 = UINT64_MAX;
	uint8_t x702 = 1U;
	static int64_t x703 = INT64_MIN;
	int32_t x704 = INT32_MIN;
	volatile uint64_t t96 = 5617043303064895LLU;

	t96 = ((x701*x702)*(x703^x704));

	if (t96 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x710 = -1;
	int8_t x711 = 1;
	uint8_t x712 = 1U;
	int32_t t97 = -993536777;

	t97 = ((x709*x710)*(x711^x712));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x717 = -24;
	volatile uint64_t x718 = 10634708LLU;
	uint32_t x719 = UINT32_MAX;
	uint16_t x720 = 169U;
	static volatile uint64_t t98 = 1278LLU;

	t98 = ((x717*x718)*(x719^x720));

	if (t98 != 17350526763598930624LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x725 = 5735LL;
	int64_t x726 = 112LL;
	static int32_t x727 = INT32_MAX;
	uint32_t x728 = 115331U;
	static int64_t t99 = 23221131138764241LL;

	t99 = ((x725*x726)*(x727^x728));

	if (t99 != 1379297616733120LL) { NG(); } else { ; }
	
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

