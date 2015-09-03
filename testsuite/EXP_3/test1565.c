#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x18 = -406960918084LL;
uint64_t t1 = 9666598208580LLU;
static volatile int16_t x36 = INT16_MAX;
uint16_t x42 = UINT16_MAX;
volatile uint64_t t5 = 13317726874LLU;
volatile int64_t t6 = -110728462LL;
volatile int16_t x81 = INT16_MAX;
volatile int64_t x86 = INT64_MAX;
uint8_t x87 = 14U;
volatile int64_t t9 = 44767LL;
int16_t x89 = 922;
uint32_t t11 = 181U;
int8_t x117 = -2;
volatile int8_t x131 = INT8_MIN;
static uint8_t x134 = UINT8_MAX;
static volatile int32_t x135 = -1;
static uint64_t x156 = UINT64_MAX;
volatile int64_t t16 = 22130474249840064LL;
volatile int8_t x191 = 2;
volatile int32_t t19 = -45;
int8_t x199 = INT8_MIN;
int32_t t20 = 194436;
static uint8_t x217 = 111U;
static int16_t x220 = INT16_MAX;
int8_t x235 = -44;
static volatile int64_t t23 = -265LL;
int64_t x267 = INT64_MIN;
volatile uint32_t x283 = 6U;
int16_t x291 = INT16_MIN;
uint8_t x308 = 35U;
uint8_t x337 = 2U;
uint32_t t31 = 25531367U;
int64_t x345 = -118071201327389LL;
static int32_t t34 = -27424;
static volatile uint32_t x365 = 322366326U;
static int16_t x367 = 1;
volatile int8_t x388 = INT8_MAX;
volatile int32_t x390 = INT32_MIN;
static int8_t x391 = -1;
volatile int8_t x396 = INT8_MIN;
static int16_t x410 = -1;
volatile int64_t x412 = -1LL;
volatile int32_t t44 = 2;
volatile int32_t t47 = 88;
volatile int8_t x452 = INT8_MIN;
uint8_t x466 = 13U;
static uint8_t x468 = 0U;
int64_t x472 = -4232LL;
volatile int32_t t50 = 1080716;
int8_t x485 = INT8_MIN;
int16_t x499 = -9;
volatile int64_t t55 = 62573008020104LL;
volatile int32_t t56 = 2032;
int8_t x560 = 19;
uint32_t x574 = 3346U;
int8_t x578 = -50;
int8_t x579 = -54;
int64_t t62 = -6383LL;
uint32_t x588 = 8187358U;
int32_t x592 = INT32_MIN;
static int8_t x596 = INT8_MAX;
static volatile uint32_t t67 = 65152U;
uint16_t x616 = 49U;
int64_t x627 = INT64_MIN;
int32_t x628 = 416;
int16_t x636 = INT16_MAX;
uint8_t x661 = 36U;
int16_t x671 = INT16_MIN;
static int16_t x679 = 0;
int64_t t75 = -837296860LL;
int16_t x684 = -1;
uint8_t x686 = UINT8_MAX;
static int32_t x709 = INT32_MIN;
int8_t x733 = INT8_MAX;
int32_t t81 = -46459706;
uint16_t x749 = 1698U;
volatile int8_t x750 = INT8_MIN;
static int32_t t82 = -98143176;
uint64_t x762 = UINT64_MAX;
volatile int16_t x775 = INT16_MIN;
volatile int32_t t84 = -8031114;
int32_t t85 = -15;
volatile uint32_t x793 = 65U;
uint16_t x795 = 1U;
int32_t x798 = INT32_MAX;
volatile int64_t t88 = 12505671038876430LL;
int8_t x806 = 4;
volatile int32_t x818 = -24;
volatile int16_t x819 = -6761;
int32_t t91 = 22;
int16_t x823 = 1;
uint8_t x837 = UINT8_MAX;
uint64_t x861 = 750813698308749862LLU;
int32_t x862 = INT32_MIN;
static volatile int16_t x864 = INT16_MAX;
static int64_t x888 = 237029054LL;


void f0(void) {
	volatile int32_t x1 = 0;
	static volatile int64_t x2 = INT64_MIN;
	static uint32_t x3 = 13U;
	volatile int8_t x4 = INT8_MAX;
	static volatile int64_t t0 = 6131368LL;

	t0 = ((x1/x2)%(x3<=x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 2024978660LLU;
	int32_t x19 = -431;
	static int8_t x20 = -1;

	t1 = ((x17/x18)%(x19<=x20));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = 1809712280LL;
	int64_t x26 = 2874688030756LL;
	static int32_t x27 = INT32_MIN;
	int8_t x28 = 0;
	int64_t t2 = -10009LL;

	t2 = ((x25/x26)%(x27<=x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x33 = INT32_MAX;
	int8_t x34 = 55;
	int64_t x35 = INT64_MIN;
	volatile int32_t t3 = 105;

	t3 = ((x33/x34)%(x35<=x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = 607;
	volatile int8_t x38 = 1;
	int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MAX;
	int32_t t4 = 41;

	t4 = ((x37/x38)%(x39<=x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x41 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = -1;

	t5 = ((x41/x42)%(x43<=x44));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MAX;
	volatile uint16_t x56 = UINT16_MAX;

	t6 = ((x53/x54)%(x55<=x56));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint32_t x78 = 13U;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = -1LL;
	uint32_t t7 = 8114677U;

	t7 = ((x77/x78)%(x79<=x80));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MAX;
	uint8_t x84 = UINT8_MAX;
	static int32_t t8 = 184841025;

	t8 = ((x81/x82)%(x83<=x84));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x85 = INT16_MIN;
	int64_t x88 = 24LL;

	t9 = ((x85/x86)%(x87<=x88));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x90 = -79449691;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = -45;
	static volatile int32_t t10 = 28;

	t10 = ((x89/x90)%(x91<=x92));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x93 = 49U;
	int32_t x94 = INT32_MAX;
	uint64_t x95 = 109100015LLU;
	int8_t x96 = -1;

	t11 = ((x93/x94)%(x95<=x96));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x118 = -1;
	int64_t x119 = -671678169362021798LL;
	int32_t x120 = -1;
	int32_t t12 = 355567;

	t12 = ((x117/x118)%(x119<=x120));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x125 = INT8_MIN;
	static uint32_t x126 = 220417911U;
	static int16_t x127 = INT16_MIN;
	static int8_t x128 = INT8_MAX;
	volatile uint32_t t13 = 240309320U;

	t13 = ((x125/x126)%(x127<=x128));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x129 = UINT32_MAX;
	static volatile uint64_t x130 = 1941711600048LLU;
	int8_t x132 = 0;
	volatile uint64_t t14 = 945914189067030LLU;

	t14 = ((x129/x130)%(x131<=x132));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = INT8_MIN;
	static volatile uint8_t x136 = 76U;
	int32_t t15 = 135812;

	t15 = ((x133/x134)%(x135<=x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x153 = INT64_MIN;
	volatile int8_t x154 = INT8_MIN;
	volatile int64_t x155 = -5616871314703LL;

	t16 = ((x153/x154)%(x155<=x156));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x165 = INT16_MAX;
	int64_t x166 = -7350939LL;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MAX;
	static volatile int64_t t17 = 1LL;

	t17 = ((x165/x166)%(x167<=x168));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MIN;
	uint64_t x192 = 23487639979LLU;
	static volatile int64_t t18 = -432335573486167954LL;

	t18 = ((x189/x190)%(x191<=x192));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x193 = 0;
	int8_t x194 = INT8_MIN;
	static int64_t x195 = -1LL;
	int32_t x196 = 3;

	t19 = ((x193/x194)%(x195<=x196));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x197 = -3;
	int8_t x198 = INT8_MIN;
	static volatile uint8_t x200 = 93U;

	t20 = ((x197/x198)%(x199<=x200));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x218 = -47650;
	static volatile int16_t x219 = INT16_MIN;
	volatile int32_t t21 = -2083370;

	t21 = ((x217/x218)%(x219<=x220));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x221 = INT16_MAX;
	static int8_t x222 = INT8_MIN;
	volatile int16_t x223 = -1;
	uint8_t x224 = 52U;
	int32_t t22 = 13680;

	t22 = ((x221/x222)%(x223<=x224));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x233 = 18;
	int64_t x234 = INT64_MAX;
	volatile uint16_t x236 = 2U;

	t23 = ((x233/x234)%(x235<=x236));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x237 = 1572;
	uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MIN;
	static volatile uint64_t x240 = UINT64_MAX;
	static volatile int32_t t24 = 207;

	t24 = ((x237/x238)%(x239<=x240));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x265 = 573U;
	volatile int32_t x266 = -123;
	int64_t x268 = INT64_MIN;
	int32_t t25 = -18872;

	t25 = ((x265/x266)%(x267<=x268));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -31;
	volatile int64_t x280 = -1LL;
	volatile int32_t t26 = -7;

	t26 = ((x277/x278)%(x279<=x280));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x281 = 24U;
	volatile uint64_t x282 = 5809772733LLU;
	int16_t x284 = -8;
	volatile uint64_t t27 = 14LLU;

	t27 = ((x281/x282)%(x283<=x284));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x285 = -36LL;
	static uint64_t x286 = 14279477062LLU;
	volatile int16_t x287 = -1;
	static volatile uint8_t x288 = 116U;
	volatile uint64_t t28 = 15291572241105627LLU;

	t28 = ((x285/x286)%(x287<=x288));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x289 = 0;
	int8_t x290 = INT8_MAX;
	static int8_t x292 = -1;
	int32_t t29 = 131055843;

	t29 = ((x289/x290)%(x291<=x292));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	volatile uint64_t t30 = 44644068124727452LLU;

	t30 = ((x305/x306)%(x307<=x308));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x338 = 12122U;
	int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MAX;

	t31 = ((x337/x338)%(x339<=x340));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x346 = 2882;
	uint8_t x347 = 2U;
	volatile uint64_t x348 = 4223LLU;
	volatile int64_t t32 = 699815195LL;

	t32 = ((x345/x346)%(x347<=x348));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x353 = -26LL;
	static int8_t x354 = 20;
	static int16_t x355 = -2308;
	uint8_t x356 = 8U;
	int64_t t33 = 772816LL;

	t33 = ((x353/x354)%(x355<=x356));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x357 = INT8_MIN;
	volatile int32_t x358 = INT32_MIN;
	static int8_t x359 = -5;
	int8_t x360 = INT8_MAX;

	t34 = ((x357/x358)%(x359<=x360));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x361 = -1LL;
	volatile uint64_t x362 = 66926795468LLU;
	int8_t x363 = INT8_MIN;
	volatile int8_t x364 = -1;
	static volatile uint64_t t35 = 206228260781LLU;

	t35 = ((x361/x362)%(x363<=x364));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x366 = -1;
	uint16_t x368 = 58U;
	uint32_t t36 = 1U;

	t36 = ((x365/x366)%(x367<=x368));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	int16_t x371 = 3274;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t37 = 279937;

	t37 = ((x369/x370)%(x371<=x372));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x385 = -1LL;
	int8_t x386 = -1;
	static int16_t x387 = INT16_MIN;
	static int64_t t38 = -8001658857LL;

	t38 = ((x385/x386)%(x387<=x388));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x389 = 1666397432419573LLU;
	int64_t x392 = INT64_MAX;
	uint64_t t39 = 135309954813LLU;

	t39 = ((x389/x390)%(x391<=x392));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x393 = 10LLU;
	int16_t x394 = 427;
	uint32_t x395 = 338775U;
	static volatile uint64_t t40 = 6LLU;

	t40 = ((x393/x394)%(x395<=x396));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x405 = INT64_MAX;
	static uint16_t x406 = 1353U;
	static int64_t x407 = INT64_MAX;
	int64_t x408 = INT64_MAX;
	int64_t t41 = -23788LL;

	t41 = ((x405/x406)%(x407<=x408));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x409 = 0U;
	int8_t x411 = INT8_MIN;
	volatile int32_t t42 = -9157;

	t42 = ((x409/x410)%(x411<=x412));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x417 = INT8_MIN;
	static int8_t x418 = INT8_MIN;
	uint32_t x419 = 497072522U;
	volatile int64_t x420 = INT64_MAX;
	static int32_t t43 = -6;

	t43 = ((x417/x418)%(x419<=x420));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x425 = -1;
	volatile int32_t x426 = INT32_MIN;
	int64_t x427 = -38848863131LL;
	int32_t x428 = -48;

	t44 = ((x425/x426)%(x427<=x428));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MIN;
	uint64_t x431 = 0LLU;
	int16_t x432 = INT16_MIN;
	int64_t t45 = 1533286282411637343LL;

	t45 = ((x429/x430)%(x431<=x432));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 2664LLU;
	int32_t x436 = -1;
	int32_t t46 = -140;

	t46 = ((x433/x434)%(x435<=x436));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x441 = INT16_MIN;
	uint16_t x442 = 28U;
	int64_t x443 = INT64_MIN;
	volatile uint16_t x444 = 1U;

	t47 = ((x441/x442)%(x443<=x444));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x449 = INT16_MAX;
	uint64_t x450 = UINT64_MAX;
	static uint64_t x451 = 842067098LLU;
	uint64_t t48 = 121565990751631LLU;

	t48 = ((x449/x450)%(x451<=x452));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x465 = 1U;
	uint8_t x467 = 0U;
	volatile int32_t t49 = -11797048;

	t49 = ((x465/x466)%(x467<=x468));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x469 = -1;
	int8_t x470 = INT8_MIN;
	int64_t x471 = -1098497181524588634LL;

	t50 = ((x469/x470)%(x471<=x472));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x486 = -6415;
	volatile int8_t x487 = -5;
	int16_t x488 = INT16_MAX;
	int32_t t51 = 29417;

	t51 = ((x485/x486)%(x487<=x488));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x497 = 650983235485LL;
	int16_t x498 = -643;
	static uint8_t x500 = 11U;
	volatile int64_t t52 = 17LL;

	t52 = ((x497/x498)%(x499<=x500));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x501 = UINT32_MAX;
	volatile int32_t x502 = INT32_MIN;
	int64_t x503 = INT64_MIN;
	static uint32_t x504 = 199909359U;
	uint32_t t53 = 33849U;

	t53 = ((x501/x502)%(x503<=x504));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x505 = 326345U;
	int32_t x506 = 26394;
	volatile int32_t x507 = -1;
	uint16_t x508 = 3U;
	uint32_t t54 = 61U;

	t54 = ((x505/x506)%(x507<=x508));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x521 = INT64_MIN;
	static uint8_t x522 = UINT8_MAX;
	int64_t x523 = INT64_MIN;
	int32_t x524 = 22002;

	t55 = ((x521/x522)%(x523<=x524));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x529 = INT8_MIN;
	static volatile int16_t x530 = INT16_MIN;
	volatile int32_t x531 = INT32_MIN;
	volatile int16_t x532 = INT16_MIN;

	t56 = ((x529/x530)%(x531<=x532));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x545 = 1U;
	static volatile int8_t x546 = INT8_MIN;
	int16_t x547 = -1;
	int64_t x548 = INT64_MAX;
	int32_t t57 = -4815600;

	t57 = ((x545/x546)%(x547<=x548));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x553 = 0;
	static int8_t x554 = INT8_MIN;
	uint32_t x555 = 2U;
	int64_t x556 = INT64_MAX;
	int32_t t58 = -15322;

	t58 = ((x553/x554)%(x555<=x556));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MIN;
	static int32_t x559 = INT32_MIN;
	int64_t t59 = 92791286522019182LL;

	t59 = ((x557/x558)%(x559<=x560));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x561 = -38;
	uint32_t x562 = UINT32_MAX;
	volatile uint8_t x563 = 58U;
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t60 = 51033U;

	t60 = ((x561/x562)%(x563<=x564));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x573 = -112LL;
	int32_t x575 = -86068610;
	volatile uint16_t x576 = 1833U;
	int64_t t61 = -4919358841191LL;

	t61 = ((x573/x574)%(x575<=x576));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x577 = -104927LL;
	int64_t x580 = 20602546LL;

	t62 = ((x577/x578)%(x579<=x580));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x581 = UINT32_MAX;
	volatile int8_t x582 = -1;
	uint32_t x583 = 962797926U;
	static volatile uint32_t x584 = 1134914573U;
	uint32_t t63 = 2U;

	t63 = ((x581/x582)%(x583<=x584));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x585 = INT32_MIN;
	static uint16_t x586 = UINT16_MAX;
	volatile int8_t x587 = INT8_MAX;
	static volatile int32_t t64 = 37;

	t64 = ((x585/x586)%(x587<=x588));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x589 = INT64_MAX;
	uint16_t x590 = 63U;
	static uint32_t x591 = 1198510U;
	volatile int64_t t65 = 14912564081265LL;

	t65 = ((x589/x590)%(x591<=x592));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x593 = -1;
	int32_t x594 = 3779;
	int8_t x595 = 1;
	int32_t t66 = -256;

	t66 = ((x593/x594)%(x595<=x596));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x597 = UINT32_MAX;
	int8_t x598 = INT8_MIN;
	uint8_t x599 = 4U;
	volatile int8_t x600 = INT8_MAX;

	t67 = ((x597/x598)%(x599<=x600));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x613 = 268139449029LL;
	volatile int16_t x614 = 318;
	uint8_t x615 = 0U;
	int64_t t68 = -282537396334039600LL;

	t68 = ((x613/x614)%(x615<=x616));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x625 = INT32_MIN;
	int64_t x626 = -1LL;
	int64_t t69 = -1139442LL;

	t69 = ((x625/x626)%(x627<=x628));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x629 = 6102U;
	int64_t x630 = INT64_MIN;
	volatile int32_t x631 = INT32_MIN;
	volatile int32_t x632 = INT32_MIN;
	volatile int64_t t70 = -2670619457LL;

	t70 = ((x629/x630)%(x631<=x632));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x633 = -1;
	int32_t x634 = -1;
	int8_t x635 = INT8_MAX;
	volatile int32_t t71 = -7;

	t71 = ((x633/x634)%(x635<=x636));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x657 = 13526;
	volatile int8_t x658 = 1;
	uint16_t x659 = 8U;
	int64_t x660 = 46722287631216656LL;
	int32_t t72 = 1;

	t72 = ((x657/x658)%(x659<=x660));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x662 = -1765;
	static volatile uint64_t x663 = 301197400854LLU;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t73 = 978286180;

	t73 = ((x661/x662)%(x663<=x664));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x669 = 472025930LL;
	uint16_t x670 = UINT16_MAX;
	int32_t x672 = INT32_MAX;
	int64_t t74 = 350110893LL;

	t74 = ((x669/x670)%(x671<=x672));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x677 = -3367313104336164495LL;
	volatile int64_t x678 = -9941769330561603LL;
	uint64_t x680 = 1439888664976942725LLU;

	t75 = ((x677/x678)%(x679<=x680));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x681 = INT8_MIN;
	static uint8_t x682 = UINT8_MAX;
	static int8_t x683 = -1;
	static volatile int32_t t76 = 2;

	t76 = ((x681/x682)%(x683<=x684));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x685 = UINT32_MAX;
	volatile int16_t x687 = INT16_MIN;
	uint8_t x688 = 5U;
	volatile uint32_t t77 = 1299922025U;

	t77 = ((x685/x686)%(x687<=x688));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x710 = -1LL;
	int16_t x711 = INT16_MIN;
	int64_t x712 = -1LL;
	int64_t t78 = 93535925861764585LL;

	t78 = ((x709/x710)%(x711<=x712));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x717 = 5U;
	int64_t x718 = INT64_MAX;
	int64_t x719 = INT64_MIN;
	volatile uint64_t x720 = UINT64_MAX;
	volatile int64_t t79 = -280636065351027201LL;

	t79 = ((x717/x718)%(x719<=x720));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x734 = 159266244;
	uint8_t x735 = UINT8_MAX;
	static int16_t x736 = INT16_MAX;
	int32_t t80 = 1223733;

	t80 = ((x733/x734)%(x735<=x736));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x741 = 23500U;
	static int8_t x742 = -1;
	static int64_t x743 = INT64_MIN;
	static volatile int32_t x744 = INT32_MIN;

	t81 = ((x741/x742)%(x743<=x744));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x751 = -1;
	int8_t x752 = INT8_MAX;

	t82 = ((x749/x750)%(x751<=x752));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x761 = INT32_MIN;
	uint32_t x763 = 480170651U;
	static int8_t x764 = INT8_MIN;
	uint64_t t83 = 37108480LLU;

	t83 = ((x761/x762)%(x763<=x764));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x773 = 959U;
	static volatile int8_t x774 = -2;
	uint8_t x776 = 114U;

	t84 = ((x773/x774)%(x775<=x776));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MAX;
	volatile int32_t x787 = INT32_MAX;
	volatile uint64_t x788 = 35408955300425539LLU;

	t85 = ((x785/x786)%(x787<=x788));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x789 = UINT32_MAX;
	volatile int32_t x790 = INT32_MIN;
	uint32_t x791 = 3682U;
	int16_t x792 = INT16_MAX;
	static uint32_t t86 = 964392U;

	t86 = ((x789/x790)%(x791<=x792));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x794 = UINT8_MAX;
	uint8_t x796 = 2U;
	static volatile uint32_t t87 = 6U;

	t87 = ((x793/x794)%(x795<=x796));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x797 = INT64_MIN;
	int16_t x799 = -7;
	uint64_t x800 = UINT64_MAX;

	t88 = ((x797/x798)%(x799<=x800));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x801 = -3;
	int16_t x802 = INT16_MAX;
	int8_t x803 = INT8_MIN;
	uint8_t x804 = UINT8_MAX;
	int32_t t89 = 36;

	t89 = ((x801/x802)%(x803<=x804));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x805 = INT16_MAX;
	uint32_t x807 = 5U;
	int32_t x808 = INT32_MAX;
	volatile int32_t t90 = -63951;

	t90 = ((x805/x806)%(x807<=x808));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x817 = 4;
	uint8_t x820 = 47U;

	t91 = ((x817/x818)%(x819<=x820));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x821 = 471552609258LL;
	volatile int64_t x822 = -7162LL;
	uint16_t x824 = UINT16_MAX;
	int64_t t92 = -28223250975434LL;

	t92 = ((x821/x822)%(x823<=x824));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x829 = 1U;
	volatile int8_t x830 = INT8_MAX;
	static volatile int8_t x831 = INT8_MIN;
	uint16_t x832 = 4552U;
	static volatile int32_t t93 = -1;

	t93 = ((x829/x830)%(x831<=x832));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x838 = INT64_MIN;
	volatile int64_t x839 = -515147409683LL;
	int16_t x840 = 259;
	volatile int64_t t94 = -606956LL;

	t94 = ((x837/x838)%(x839<=x840));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x849 = UINT32_MAX;
	int32_t x850 = INT32_MAX;
	volatile uint8_t x851 = 47U;
	volatile int16_t x852 = 837;
	volatile uint32_t t95 = 1736U;

	t95 = ((x849/x850)%(x851<=x852));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x863 = 1U;
	uint64_t t96 = 861272733725550LLU;

	t96 = ((x861/x862)%(x863<=x864));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x865 = UINT8_MAX;
	static int8_t x866 = INT8_MIN;
	int16_t x867 = -1;
	int32_t x868 = 3968;
	volatile int32_t t97 = 7;

	t97 = ((x865/x866)%(x867<=x868));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x869 = 117U;
	uint16_t x870 = UINT16_MAX;
	volatile uint64_t x871 = 1040742LLU;
	uint64_t x872 = 3710988LLU;
	volatile int32_t t98 = 29860369;

	t98 = ((x869/x870)%(x871<=x872));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x885 = -182318956197292365LL;
	uint32_t x886 = 6534586U;
	static volatile uint8_t x887 = 95U;
	volatile int64_t t99 = 513121796646LL;

	t99 = ((x885/x886)%(x887<=x888));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

