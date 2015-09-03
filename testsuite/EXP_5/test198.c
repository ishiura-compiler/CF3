#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 1334250;
static int16_t x14 = INT16_MIN;
static volatile int16_t x21 = INT16_MIN;
volatile uint64_t t4 = 45527691782LLU;
uint16_t x30 = 808U;
static uint64_t t8 = 186444365313LLU;
uint32_t x76 = UINT32_MAX;
int64_t x86 = 0LL;
int32_t x88 = -1;
int64_t x100 = INT64_MIN;
int64_t x109 = INT64_MIN;
uint32_t x111 = UINT32_MAX;
static int8_t x112 = -1;
uint16_t x117 = UINT16_MAX;
static volatile int64_t t18 = 172363596471LL;
int8_t x152 = -1;
static volatile int32_t x154 = -1;
int64_t x156 = INT64_MIN;
volatile int64_t t23 = -1238LL;
int32_t t24 = -211981075;
int8_t x178 = -12;
uint16_t x194 = UINT16_MAX;
volatile uint8_t x199 = 15U;
static volatile uint16_t x200 = 7U;
int8_t x211 = INT8_MAX;
uint32_t x215 = 93U;
uint64_t x218 = UINT64_MAX;
int8_t x233 = 5;
static int32_t x251 = -1;
static uint8_t x252 = 33U;
int32_t x264 = INT32_MIN;
static volatile int32_t x270 = INT32_MIN;
int8_t x273 = INT8_MIN;
static uint64_t x274 = 88412772586026LLU;
static uint32_t x275 = UINT32_MAX;
int64_t x276 = INT64_MIN;
volatile uint32_t x277 = 0U;
int64_t x279 = -1LL;
int32_t x282 = -1;
uint32_t x302 = 98501097U;
uint64_t x304 = UINT64_MAX;
uint64_t t44 = 16577170055297207LLU;
int32_t x309 = 76;
uint16_t x313 = UINT16_MAX;
static int64_t x314 = -1LL;
int64_t t46 = 29637LL;
int32_t t47 = -1;
static volatile uint64_t x346 = UINT64_MAX;
uint64_t t51 = 38695879787LLU;
int16_t x362 = INT16_MAX;
int32_t x373 = INT32_MAX;
int64_t x375 = -324890156LL;
volatile int64_t t54 = -2274LL;
int64_t x378 = -1LL;
static int64_t t55 = 630311070895941256LL;
uint64_t x384 = 12390574729871LLU;
int8_t x394 = -1;
uint16_t x405 = 118U;
int16_t x407 = -97;
uint64_t t61 = 40987996464LLU;
volatile uint64_t t62 = 634LLU;
int64_t x441 = 886788797LL;
uint32_t x444 = 59303236U;
int64_t x451 = -1LL;
int8_t x453 = -1;
int16_t x454 = -1;
uint16_t x455 = UINT16_MAX;
static int32_t t68 = 203702;
static int8_t x481 = INT8_MIN;
uint64_t x485 = 1337496LLU;
volatile uint64_t t73 = 11282LLU;
volatile int16_t x495 = INT16_MIN;
static int8_t x508 = INT8_MIN;
int8_t x517 = -1;
static int32_t x520 = -1;
static volatile int32_t x524 = INT32_MAX;
uint64_t t79 = 13808746725951LLU;
volatile uint32_t t81 = 1U;
static int8_t x543 = -1;
int32_t x544 = INT32_MAX;
uint64_t x552 = 6791858LLU;
int64_t t87 = -6493LL;
static int8_t x588 = -1;
int16_t x589 = 4;
static int8_t x599 = INT8_MIN;
int16_t x614 = -1;
volatile uint64_t t94 = 1155924943474LLU;
volatile uint64_t x632 = 1127LLU;
uint64_t t97 = 3894432LLU;
uint16_t x641 = UINT16_MAX;
int64_t x644 = -1LL;
int16_t x647 = INT16_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x2 = 28LLU;
	static int64_t x3 = INT64_MIN;
	int16_t x4 = 1721;
	uint64_t t0 = 800791LLU;

	t0 = (x1*((x2-x3)*x4));

	if (t0 != 9223372040012776388LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	static int64_t x8 = -1LL;
	volatile int64_t t1 = -6LL;

	t1 = (x5*((x6-x7)*x8));

	if (t1 != 5871297601676310LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int8_t x15 = -48;
	volatile uint8_t x16 = 53U;
	volatile int32_t t2 = -1;

	t2 = (x13*((x14-x15)*x16));

	if (t2 != 221972480) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 13U;
	int8_t x18 = 0;
	volatile int8_t x19 = -1;
	uint64_t x20 = 27058721LLU;
	uint64_t t3 = 0LLU;

	t3 = (x17*((x18-x19)*x20));

	if (t3 != 351763373LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = 577U;
	uint64_t x23 = UINT64_MAX;
	static volatile uint8_t x24 = 19U;

	t4 = (x21*((x22-x23)*x24));

	if (t4 != 18446744073349693440LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 13390U;
	static uint16_t x26 = 787U;
	int64_t x27 = -1LL;
	static uint32_t x28 = 1464509U;
	static volatile int64_t t5 = 21LL;

	t5 = (x25*((x26-x27)*x28));

	if (t5 != 15452503101880LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	uint64_t x31 = 1436455175927LLU;
	int32_t x32 = INT32_MIN;
	uint64_t t6 = 739015LLU;

	t6 = (x29*((x30-x31)*x32));

	if (t6 != 5065632693320941568LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = 274815974621LL;
	static volatile int16_t x38 = -1;
	volatile uint64_t x39 = 0LLU;
	int16_t x40 = INT16_MIN;
	static volatile uint64_t t7 = 1014LLU;

	t7 = (x37*((x38-x39)*x40));

	if (t7 != 9005169856380928LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = INT32_MIN;
	static volatile uint64_t x42 = UINT64_MAX;
	static volatile int16_t x43 = 1;
	static uint8_t x44 = UINT8_MAX;

	t8 = (x41*((x42-x43)*x44));

	if (t8 != 1095216660480LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = 101249LLU;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = -36LL;
	volatile int64_t x64 = INT64_MAX;
	uint64_t t9 = 1032092298726LLU;

	t9 = (x61*((x62-x63)*x64));

	if (t9 != 9223372036851232093LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = INT16_MAX;
	volatile int8_t x66 = 0;
	int32_t x67 = -1;
	static int8_t x68 = -1;
	volatile int32_t t10 = 287;

	t10 = (x65*((x66-x67)*x68));

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x73 = 48U;
	uint32_t x74 = 2U;
	static volatile int32_t x75 = -1;
	volatile uint32_t t11 = 109U;

	t11 = (x73*((x74-x75)*x76));

	if (t11 != 4294967152U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x85 = 1573;
	static volatile uint8_t x87 = 3U;
	volatile int64_t t12 = 671868LL;

	t12 = (x85*((x86-x87)*x88));

	if (t12 != 4719LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x97 = 15;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = -1;
	uint64_t t13 = 557977003784LLU;

	t13 = (x97*((x98-x99)*x100));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x105 = UINT64_MAX;
	uint64_t x106 = 1564910993683625LLU;
	volatile int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	uint64_t t14 = 3630LLU;

	t14 = (x105*((x106-x107)*x108));

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x110 = UINT64_MAX;
	volatile uint64_t t15 = 126LLU;

	t15 = (x109*((x110-x111)*x112));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x113 = 820467U;
	int8_t x114 = -1;
	uint16_t x115 = 31U;
	uint16_t x116 = 5812U;
	uint32_t t16 = 7203U;

	t16 = (x113*((x114-x115)*x116));

	if (t16 != 2025088128U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x118 = 9U;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -1LL;
	int64_t t17 = 579707607LL;

	t17 = (x117*((x118-x119)*x120));

	if (t17 != -140735341461495LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x129 = INT16_MAX;
	static int64_t x130 = 217LL;
	uint32_t x131 = 8221821U;
	volatile uint8_t x132 = 59U;

	t18 = (x129*((x130-x131)*x132));

	if (t18 != -15894440597812LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MAX;
	uint64_t x143 = 8210048LLU;
	volatile int8_t x144 = INT8_MAX;
	static volatile uint64_t t19 = 48963801197877LLU;

	t19 = (x141*((x142-x143)*x144));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 5077290835LLU;
	volatile uint64_t t20 = 206206222387801354LLU;

	t20 = (x149*((x150-x151)*x152));

	if (t20 != 7543344754528878592LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x153 = INT64_MIN;
	static uint64_t x155 = 297860029574LLU;
	uint64_t t21 = 4LLU;

	t21 = (x153*((x154-x155)*x156));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x157 = INT32_MAX;
	uint32_t x158 = 303225500U;
	static int16_t x159 = 671;
	static uint32_t x160 = 8626U;
	volatile uint32_t t22 = 127687207U;

	t22 = (x157*((x158-x159)*x160));

	if (t22 != 17708310U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x161 = -1LL;
	uint8_t x162 = 4U;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MAX;

	t23 = (x161*((x162-x163)*x164));

	if (t23 != -163835LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x173 = -1;
	int16_t x174 = -1;
	int8_t x175 = 19;
	volatile uint8_t x176 = 1U;

	t24 = (x173*((x174-x175)*x176));

	if (t24 != 20) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x177 = -1;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;
	uint32_t t25 = 360998372U;

	t25 = (x177*((x178-x179)*x180));

	if (t25 != 116U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x193 = INT16_MAX;
	uint64_t x195 = 43LLU;
	uint32_t x196 = 52436U;
	volatile uint64_t t26 = 61782LLU;

	t26 = (x193*((x194-x195)*x196));

	if (t26 != 112526416622704LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x197 = UINT16_MAX;
	static int32_t x198 = -1;
	static int32_t t27 = 5149361;

	t27 = (x197*((x198-x199)*x200));

	if (t27 != -7339920) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = -1;
	int8_t x206 = -1;
	volatile uint16_t x207 = 60U;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t28 = -45;

	t28 = (x205*((x206-x207)*x208));

	if (t28 != 3997635) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x209 = INT16_MIN;
	volatile int8_t x210 = INT8_MIN;
	int32_t x212 = -119;
	int32_t t29 = 17833956;

	t29 = (x209*((x210-x211)*x212));

	if (t29 != -994344960) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x213 = 10785LLU;
	int16_t x214 = 0;
	int8_t x216 = -3;
	uint64_t t30 = 603695LLU;

	t30 = (x213*((x214-x215)*x216));

	if (t30 != 3009015LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x217 = 11857U;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = UINT32_MAX;
	uint64_t t31 = 36888194502757823LLU;

	t31 = (x217*((x218-x219)*x220));

	if (t31 != 1668673473613377105LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int32_t x226 = INT32_MIN;
	volatile uint32_t x227 = UINT32_MAX;
	int16_t x228 = INT16_MAX;
	uint32_t t32 = 37329477U;

	t32 = (x225*((x226-x227)*x228));

	if (t32 != 2147450881U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x234 = -1;
	int16_t x235 = -3636;
	volatile uint16_t x236 = UINT16_MAX;
	static int32_t t33 = 3535372;

	t33 = (x233*((x234-x235)*x236));

	if (t33 != 1191098625) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x237 = 45543U;
	int16_t x238 = -120;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = -1;
	volatile uint32_t t34 = 2002U;

	t34 = (x237*((x238-x239)*x240));

	if (t34 != 2990125665U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x245 = 252U;
	int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	static int32_t x248 = INT32_MIN;
	int64_t t35 = -3593980222174LL;

	t35 = (x245*((x246-x247)*x248));

	if (t35 != -68728066670592LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	volatile int32_t t36 = 994529;

	t36 = (x249*((x250-x251)*x252));

	if (t36 != -137326497) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x261 = 2984U;
	volatile uint32_t x262 = 51635386U;
	int8_t x263 = INT8_MAX;
	static uint32_t t37 = 345U;

	t37 = (x261*((x262-x263)*x264));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x271 = 6759571655LLU;
	int32_t x272 = INT32_MAX;
	static uint64_t t38 = 89080281305LLU;

	t38 = (x269*((x270-x271)*x272));

	if (t38 != 5745255752785298105LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t t39 = 2975565095859440LLU;

	t39 = (x273*((x274-x275)*x276));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x278 = -2546;
	int8_t x280 = INT8_MAX;
	volatile int64_t t40 = 27558589142LL;

	t40 = (x277*((x278-x279)*x280));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x281 = INT8_MAX;
	volatile uint8_t x283 = UINT8_MAX;
	volatile int16_t x284 = INT16_MAX;
	volatile int32_t t41 = -29;

	t41 = (x281*((x282-x283)*x284));

	if (t41 != -1065320704) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x285 = UINT8_MAX;
	int32_t x286 = INT32_MIN;
	volatile uint64_t x287 = UINT64_MAX;
	volatile int16_t x288 = -893;
	static uint64_t t42 = 52330229999861548LLU;

	t42 = (x285*((x286-x287)*x288));

	if (t42 != 489014238676605LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x297 = -430201152153204LL;
	static int64_t x298 = -3511177445535701250LL;
	static int8_t x299 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;
	uint64_t t43 = 147008027LLU;

	t43 = (x297*((x298-x299)*x300));

	if (t43 != 10906776451167852824LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x301 = INT32_MAX;
	static volatile uint64_t x303 = 730450085410806LLU;

	t44 = (x301*((x302-x303)*x304));

	if (t44 != 10519532072421362163LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x310 = 5U;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = -1LL;
	static volatile int64_t t45 = 933847777374550885LL;

	t45 = (x309*((x310-x311)*x312));

	if (t45 != -2490748LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x315 = -1;
	int64_t x316 = -1LL;

	t46 = (x313*((x314-x315)*x316));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x325 = -1;
	int16_t x326 = 1;
	int16_t x327 = INT16_MIN;
	int16_t x328 = 4895;

	t47 = (x325*((x326-x327)*x328));

	if (t47 != -160404255) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x333 = -13;
	int32_t x334 = -1;
	uint64_t x335 = 5LLU;
	uint32_t x336 = 51U;
	uint64_t t48 = 21046430LLU;

	t48 = (x333*((x334-x335)*x336));

	if (t48 != 3978LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x341 = INT32_MIN;
	int32_t x342 = 600;
	uint32_t x343 = 104821276U;
	int32_t x344 = INT32_MIN;
	uint32_t t49 = 320735U;

	t49 = (x341*((x342-x343)*x344));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x345 = 101U;
	int16_t x347 = 8555;
	uint64_t x348 = 4485953453325LLU;
	static volatile uint64_t t50 = 961445045693LLU;

	t50 = (x345*((x346-x347)*x348));

	if (t50 != 14570180481298032916LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x349 = 6432203U;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = INT32_MIN;
	int8_t x352 = -4;

	t51 = (x349*((x350-x351)*x352));

	if (t51 != 18391491870682814252LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x361 = 14606553U;
	volatile int8_t x363 = -1;
	static int16_t x364 = 2645;
	uint32_t t52 = 85980814U;

	t52 = (x361*((x362-x363)*x364));

	if (t52 != 2433122304U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x365 = UINT64_MAX;
	int32_t x366 = -20541;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MAX;
	uint64_t t53 = 1LLU;

	t53 = (x365*((x366-x367)*x368));

	if (t53 != 18446744069417192900LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x374 = INT32_MIN;
	static int32_t x376 = -1;

	t54 = (x373*((x374-x375)*x376));

	if (t54 != 3913989719198625324LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x377 = INT32_MIN;
	static uint8_t x379 = 98U;
	static int16_t x380 = INT16_MAX;

	t55 = (x377*((x378-x379)*x380));

	if (t55 != 6966293072707584LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x381 = 13084066U;
	int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	volatile uint64_t t56 = 3795878LLU;

	t56 = (x381*((x382-x383)*x384));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x393 = -1;
	int64_t x395 = -1LL;
	int8_t x396 = 1;
	volatile int64_t t57 = 5122LL;

	t57 = (x393*((x394-x395)*x396));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x406 = 1580635LL;
	static int16_t x408 = -43;
	int64_t t58 = 25700LL;

	t58 = (x405*((x406-x407)*x408));

	if (t58 != -8020634168LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x409 = -1;
	static int32_t x410 = -245524;
	uint32_t x411 = 10186437U;
	volatile int8_t x412 = 6;
	uint32_t t59 = 552U;

	t59 = (x409*((x410-x411)*x412));

	if (t59 != 62591766U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x413 = -1;
	uint64_t x414 = 3013511LLU;
	int16_t x415 = -1;
	int16_t x416 = INT16_MIN;
	static uint64_t t60 = 3309971989LLU;

	t60 = (x413*((x414-x415)*x416));

	if (t60 != 98746761216LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x421 = INT8_MIN;
	uint16_t x422 = 843U;
	uint8_t x423 = 29U;
	uint64_t x424 = UINT64_MAX;

	t61 = (x421*((x422-x423)*x424));

	if (t61 != 104192LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x425 = 489U;
	uint64_t x426 = UINT64_MAX;
	static volatile uint8_t x427 = UINT8_MAX;
	uint64_t x428 = 509694054LLU;

	t62 = (x425*((x426-x427)*x428));

	if (t62 != 18446680268169095680LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = 807064258LLU;
	int8_t x432 = -1;
	volatile uint64_t t63 = 12273387LLU;

	t63 = (x429*((x430-x431)*x432));

	if (t63 != 18446744070755003710LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x433 = 4;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	int32_t x436 = -957;
	int32_t t64 = 4093549;

	t64 = (x433*((x434-x435)*x436));

	if (t64 != 124945920) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x442 = -3039;
	int8_t x443 = INT8_MIN;
	static int64_t t65 = -7783021492LL;

	t65 = (x441*((x442-x443)*x444));

	if (t65 != 3070008845247814580LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x445 = 48U;
	int64_t x446 = INT64_MAX;
	uint32_t x447 = UINT32_MAX;
	volatile uint64_t x448 = 69280636143744790LLU;
	volatile uint64_t t66 = 122296059LLU;

	t66 = (x445*((x446-x447)*x448));

	if (t66 != 16736972568753340416LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x449 = INT32_MIN;
	int16_t x450 = -1;
	int8_t x452 = INT8_MAX;
	int64_t t67 = -18098804321981493LL;

	t67 = (x449*((x450-x451)*x452));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x456 = 22U;

	t68 = (x453*((x454-x455)*x456));

	if (t68 != 1441792) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x457 = -1;
	int16_t x458 = INT16_MIN;
	uint16_t x459 = UINT16_MAX;
	int64_t x460 = 1577LL;
	static volatile int64_t t69 = -2073237162LL;

	t69 = (x457*((x458-x459)*x460));

	if (t69 != 155023831LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x469 = -1736786409910LL;
	volatile int16_t x470 = INT16_MIN;
	static uint64_t x471 = 39LLU;
	int32_t x472 = INT32_MAX;
	uint64_t t70 = 97364355091650503LLU;

	t70 = (x469*((x470-x471)*x472));

	if (t70 != 13266434061606548806LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x482 = 2189049135382036686LLU;
	uint8_t x483 = 87U;
	static int8_t x484 = INT8_MIN;
	uint64_t t71 = 28160228LLU;

	t71 = (x481*((x482-x483)*x484));

	if (t71 != 4910554807919296512LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x486 = -1LL;
	static int16_t x487 = INT16_MIN;
	static int8_t x488 = -1;
	uint64_t t72 = 4144268LLU;

	t72 = (x485*((x486-x487)*x488));

	if (t72 != 18446744029883820184LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x489 = -30940302769854LL;
	int64_t x490 = -1LL;
	volatile uint32_t x491 = 194996U;
	static volatile uint64_t x492 = UINT64_MAX;

	t73 = (x489*((x490-x491)*x492));

	if (t73 != 12413477854496331178LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x493 = -1;
	int8_t x494 = INT8_MIN;
	uint16_t x496 = 145U;
	volatile int32_t t74 = 403435416;

	t74 = (x493*((x494-x495)*x496));

	if (t74 != -4732800) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x501 = -1;
	volatile uint8_t x502 = 90U;
	uint8_t x503 = UINT8_MAX;
	int32_t x504 = -5;
	int32_t t75 = -168;

	t75 = (x501*((x502-x503)*x504));

	if (t75 != -825) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x505 = 47250247;
	int64_t x506 = 504890030LL;
	volatile uint32_t x507 = 377726U;
	int64_t t76 = -187569787LL;

	t76 = (x505*((x506-x507)*x508));

	if (t76 != -3051306365253003264LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x513 = 418536LLU;
	static uint32_t x514 = UINT32_MAX;
	int32_t x515 = 1938640;
	uint16_t x516 = 422U;
	uint64_t t77 = 89661716LLU;

	t77 = (x513*((x514-x515)*x516));

	if (t77 != 1455191409277584LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x518 = INT8_MAX;
	uint64_t x519 = 261388825226516679LLU;
	volatile uint64_t t78 = 24LLU;

	t78 = (x517*((x518-x519)*x520));

	if (t78 != 18185355248483035064LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x521 = INT32_MIN;
	uint64_t x522 = 465LLU;
	uint16_t x523 = 403U;

	t79 = (x521*((x522-x523)*x524));

	if (t79 != 9223372169998761984LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x525 = UINT16_MAX;
	volatile int64_t x526 = INT64_MAX;
	volatile uint64_t x527 = UINT64_MAX;
	int32_t x528 = 441249656;
	volatile uint64_t t80 = 595269208001215021LLU;

	t80 = (x525*((x526-x527)*x528));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x533 = 39U;
	uint16_t x534 = UINT16_MAX;
	static int8_t x535 = -1;
	static uint32_t x536 = UINT32_MAX;

	t81 = (x533*((x534-x535)*x536));

	if (t81 != 4292411392U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x537 = -14255691;
	volatile int16_t x538 = INT16_MIN;
	int64_t x539 = -1425100LL;
	static uint8_t x540 = 56U;
	volatile int64_t t82 = 1583869LL;

	t82 = (x537*((x538-x539)*x540));

	if (t82 != -1111524666639072LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x541 = INT64_MIN;
	int8_t x542 = -1;
	volatile int64_t t83 = 155401542LL;

	t83 = (x541*((x542-x543)*x544));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x549 = INT64_MIN;
	int64_t x550 = -28022LL;
	volatile int32_t x551 = -1;
	static volatile uint64_t t84 = 6664632970043LLU;

	t84 = (x549*((x550-x551)*x552));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x557 = 945U;
	static uint16_t x558 = 1U;
	int16_t x559 = -1;
	uint16_t x560 = 163U;
	int32_t t85 = 1284880;

	t85 = (x557*((x558-x559)*x560));

	if (t85 != 308070) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x565 = 985831928U;
	uint32_t x566 = 1366559926U;
	uint64_t x567 = UINT64_MAX;
	int8_t x568 = INT8_MAX;
	uint64_t t86 = 7873720498348LLU;

	t86 = (x565*((x566-x567)*x568));

	if (t86 != 5073501096981590968LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x577 = -1LL;
	int16_t x578 = -1;
	int16_t x579 = INT16_MAX;
	static int16_t x580 = 285;

	t87 = (x577*((x578-x579)*x580));

	if (t87 != 9338880LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x581 = 60;
	uint8_t x582 = 0U;
	uint16_t x583 = 31990U;
	static int8_t x584 = INT8_MIN;
	int32_t t88 = -373;

	t88 = (x581*((x582-x583)*x584));

	if (t88 != 245683200) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x585 = INT16_MIN;
	uint64_t x586 = UINT64_MAX;
	uint16_t x587 = 6U;
	uint64_t t89 = 61479811339740090LLU;

	t89 = (x585*((x586-x587)*x588));

	if (t89 != 18446744073709322240LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x590 = 94U;
	int16_t x591 = -2982;
	uint16_t x592 = 21U;
	static volatile int32_t t90 = 239;

	t90 = (x589*((x590-x591)*x592));

	if (t90 != 258384) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x597 = INT8_MAX;
	volatile uint32_t x598 = 9715U;
	static uint8_t x600 = UINT8_MAX;
	uint32_t t91 = 609514494U;

	t91 = (x597*((x598-x599)*x600));

	if (t91 != 318765555U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x601 = -220;
	int8_t x602 = INT8_MAX;
	static uint64_t x603 = 342LLU;
	static int64_t x604 = -1LL;
	volatile uint64_t t92 = 9668464188061124LLU;

	t92 = (x601*((x602-x603)*x604));

	if (t92 != 18446744073709504316LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x609 = INT8_MIN;
	int64_t x610 = -1539179LL;
	uint8_t x611 = 3U;
	int32_t x612 = -1;
	volatile int64_t t93 = -65462804792835575LL;

	t93 = (x609*((x610-x611)*x612));

	if (t93 != -197015296LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x613 = -7185;
	volatile uint64_t x615 = 900325511550LLU;
	int32_t x616 = INT32_MIN;

	t94 = (x613*((x614-x615)*x616));

	if (t94 != 907467939718889472LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x625 = UINT16_MAX;
	static int8_t x626 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	int64_t x628 = -1LL;
	static int64_t t95 = -334830858848510552LL;

	t95 = (x625*((x626-x627)*x628));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x629 = 1522816;
	uint8_t x630 = 9U;
	uint16_t x631 = 48U;
	uint64_t t96 = 40369428LLU;

	t96 = (x629*((x630-x631)*x632));

	if (t96 != 18446744006777219968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x637 = INT16_MIN;
	uint64_t x638 = UINT64_MAX;
	int32_t x639 = INT32_MIN;
	int32_t x640 = -1;

	t97 = (x637*((x638-x639)*x640));

	if (t97 != 70368744144896LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x642 = INT16_MIN;
	uint64_t x643 = 3002792405922LLU;
	uint64_t t98 = 28669116LLU;

	t98 = (x641*((x642-x643)*x644));

	if (t98 != 196788002469549150LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x645 = 69U;
	uint64_t x646 = 2565LLU;
	static uint16_t x648 = 8U;
	static volatile uint64_t t99 = 902456516461240LLU;

	t99 = (x645*((x646-x647)*x648));

	if (t99 != 19503816LLU) { NG(); } else { ; }
	
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

