#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -94;
int64_t t0 = 3060376596338LL;
int64_t x15 = 70719211733366935LL;
int64_t x23 = INT64_MIN;
static volatile int32_t t3 = -2049;
volatile uint32_t t5 = 15109305U;
int16_t x106 = 150;
static int32_t x115 = -75842;
uint32_t t7 = 49820629U;
uint8_t x119 = 0U;
int32_t t8 = -495;
int16_t x153 = INT16_MIN;
int16_t x156 = INT16_MAX;
static int32_t x200 = INT32_MAX;
static volatile uint64_t t15 = 259LLU;
static uint8_t x231 = 0U;
int64_t t16 = -350605244LL;
static uint8_t x280 = 2U;
uint8_t x310 = UINT8_MAX;
uint32_t t21 = 11105U;
int16_t x347 = -1;
volatile int64_t t24 = -50513LL;
int8_t x381 = -1;
uint32_t x386 = 1344677374U;
int64_t x388 = -1LL;
static uint16_t x403 = 11U;
static volatile int64_t t30 = -3LL;
int8_t x456 = INT8_MIN;
volatile int64_t t34 = -2918641790558LL;
int64_t x495 = INT64_MIN;
static uint16_t x518 = UINT16_MAX;
volatile int32_t t39 = -178543365;
volatile int64_t x545 = -47548927LL;
volatile int64_t t41 = -231097616939LL;
uint64_t x581 = 184274072LLU;
int8_t x584 = -1;
static volatile uint64_t t43 = 1415745823LLU;
int32_t x615 = 17;
int16_t x664 = -1;
static int16_t x665 = INT16_MAX;
volatile int32_t x713 = 2;
volatile int32_t t48 = 244269;
int16_t x737 = -1;
static uint8_t x770 = UINT8_MAX;
volatile int32_t t51 = 1;
uint8_t x796 = 67U;
uint8_t x815 = 3U;
volatile int64_t x821 = INT64_MAX;
uint8_t x860 = 4U;
int8_t x862 = INT8_MIN;
static int16_t x892 = 1;
int64_t x897 = 0LL;
volatile int64_t t60 = -2237969933189773LL;
volatile uint32_t x907 = UINT32_MAX;
volatile int64_t x908 = -1LL;
static int32_t x913 = INT32_MAX;
int8_t x927 = 4;
static int32_t x940 = 4;
static volatile uint32_t x961 = 51U;
volatile uint32_t x962 = UINT32_MAX;
volatile int64_t x964 = INT64_MAX;
uint32_t t67 = 463928U;
int32_t x966 = INT32_MIN;
int64_t x976 = -1LL;
uint8_t x979 = 1U;
int8_t x1014 = -1;
int64_t x1032 = -1LL;
int16_t x1055 = INT16_MIN;
int8_t x1072 = 1;
int32_t t78 = -848;
volatile int8_t x1143 = INT8_MIN;
static int32_t x1150 = -455338;
uint32_t x1182 = UINT32_MAX;
int8_t x1184 = -1;
uint8_t x1191 = 0U;
static volatile int8_t x1192 = INT8_MIN;
uint64_t x1217 = 283486220055LLU;
static uint64_t x1218 = 19470988LLU;
volatile uint16_t x1220 = 3U;
uint32_t x1221 = UINT32_MAX;
int32_t x1238 = INT32_MAX;
int8_t x1240 = -1;
static volatile int32_t t85 = 18260;
uint64_t x1253 = 3235555163647LLU;
static volatile uint16_t x1255 = 1U;
uint8_t x1269 = 6U;
volatile uint8_t x1270 = 66U;
volatile int32_t t87 = -33;
volatile uint32_t x1318 = 450508495U;
uint32_t x1320 = UINT32_MAX;
int16_t x1344 = 8;
static volatile int64_t x1399 = INT64_MIN;
int32_t t94 = 2;
static volatile uint8_t x1458 = 75U;
int32_t t99 = 4300;


void f0(void) {
	int64_t x1 = 1819LL;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MAX;

	t0 = ((x1/x2)>>(x3%x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = -50;
	static int32_t t1 = -8329988;

	t1 = ((x5/x6)>>(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	static uint64_t x14 = 9527512521632LLU;
	int16_t x16 = -1;
	volatile uint64_t t2 = 179419LLU;

	t2 = ((x13/x14)>>(x15%x16));

	if (t2 != 968077LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = INT8_MAX;
	int32_t x22 = -171;
	static uint64_t x24 = 2LLU;

	t3 = ((x21/x22)>>(x23%x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x33 = 70;
	int32_t x34 = INT32_MAX;
	volatile int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	volatile int32_t t4 = 276174530;

	t4 = ((x33/x34)>>(x35%x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = 24039U;
	volatile uint8_t x54 = 5U;
	int8_t x55 = -1;
	volatile int8_t x56 = -1;

	t5 = ((x53/x54)>>(x55%x56));

	if (t5 != 4807U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x105 = INT64_MAX;
	uint32_t x107 = 8U;
	static uint16_t x108 = UINT16_MAX;
	int64_t t6 = -35117152721253LL;

	t6 = ((x105/x106)>>(x107%x108));

	if (t6 != 240191980126426LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x113 = UINT32_MAX;
	static uint8_t x114 = 30U;
	int16_t x116 = -1;

	t7 = ((x113/x114)>>(x115%x116));

	if (t7 != 143165576U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x117 = -1;
	int32_t x118 = INT32_MIN;
	int8_t x120 = 5;

	t8 = ((x117/x118)>>(x119%x120));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x133 = INT8_MIN;
	volatile int64_t x134 = INT64_MAX;
	int8_t x135 = 1;
	uint32_t x136 = 90947U;
	static int64_t t9 = -152819LL;

	t9 = ((x133/x134)>>(x135%x136));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x137 = -24;
	volatile int64_t x138 = INT64_MIN;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = -1;
	volatile int64_t t10 = 3222772LL;

	t10 = ((x137/x138)>>(x139%x140));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x154 = INT32_MIN;
	volatile uint16_t x155 = 1U;
	int32_t t11 = 6464;

	t11 = ((x153/x154)>>(x155%x156));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x177 = 0U;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = 1;
	int64_t x180 = -1LL;
	static uint64_t t12 = 15850435256947061LLU;

	t12 = ((x177/x178)>>(x179%x180));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x193 = INT8_MAX;
	static int64_t x194 = 1736LL;
	int8_t x195 = 0;
	int16_t x196 = 40;
	int64_t t13 = 44311LL;

	t13 = ((x193/x194)>>(x195%x196));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x197 = INT32_MAX;
	uint16_t x198 = 707U;
	volatile int32_t x199 = 1;
	int32_t t14 = -10061710;

	t14 = ((x197/x198)>>(x199%x200));

	if (t14 != 1518729) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x201 = -1LL;
	uint64_t x202 = 255027898498247LLU;
	static int8_t x203 = 7;
	int8_t x204 = -1;

	t15 = ((x201/x202)>>(x203%x204));

	if (t15 != 72332LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x229 = 45985564971578667LL;
	static uint16_t x230 = 1707U;
	volatile int16_t x232 = INT16_MIN;

	t16 = ((x229/x230)>>(x231%x232));

	if (t16 != 26939405372922LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x265 = -124512LL;
	int64_t x266 = INT64_MIN;
	uint16_t x267 = UINT16_MAX;
	volatile uint16_t x268 = 3U;
	volatile int64_t t17 = -49104061908965LL;

	t17 = ((x265/x266)>>(x267%x268));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x269 = INT32_MAX;
	static uint16_t x270 = 62U;
	volatile int32_t x271 = INT32_MAX;
	int8_t x272 = 22;
	int32_t t18 = 44884;

	t18 = ((x269/x270)>>(x271%x272));

	if (t18 != 17318416) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x277 = INT8_MAX;
	uint64_t x278 = 504702474LLU;
	uint16_t x279 = 441U;
	uint64_t t19 = 3495379654276LLU;

	t19 = ((x277/x278)>>(x279%x280));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x289 = 27;
	int32_t x290 = INT32_MIN;
	static int16_t x291 = INT16_MIN;
	int32_t x292 = -1;
	volatile int32_t t20 = 541433;

	t20 = ((x289/x290)>>(x291%x292));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x309 = UINT32_MAX;
	uint8_t x311 = 0U;
	uint64_t x312 = 6438461LLU;

	t21 = ((x309/x310)>>(x311%x312));

	if (t21 != 16843009U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x325 = INT8_MAX;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;
	volatile int32_t t22 = 34;

	t22 = ((x325/x326)>>(x327%x328));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x345 = -1LL;
	int8_t x346 = -1;
	uint32_t x348 = 5U;
	static volatile int64_t t23 = -4224379038734814LL;

	t23 = ((x345/x346)>>(x347%x348));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x353 = INT32_MAX;
	volatile int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	volatile uint32_t x356 = 4U;

	t24 = ((x353/x354)>>(x355%x356));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x357 = -1LL;
	static uint32_t x358 = 367669U;
	static volatile int8_t x359 = 2;
	volatile int32_t x360 = INT32_MAX;
	volatile int64_t t25 = -23201133230LL;

	t25 = ((x357/x358)>>(x359%x360));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x373 = 82;
	volatile uint16_t x374 = UINT16_MAX;
	int8_t x375 = 23;
	int16_t x376 = INT16_MIN;
	volatile int32_t t26 = 110112;

	t26 = ((x373/x374)>>(x375%x376));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x382 = INT32_MIN;
	int64_t x383 = 7113282615707849LL;
	volatile uint32_t x384 = 16U;
	volatile int32_t t27 = -470;

	t27 = ((x381/x382)>>(x383%x384));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x385 = 27501U;
	volatile int32_t x387 = -1;
	static uint32_t t28 = 2162603U;

	t28 = ((x385/x386)>>(x387%x388));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x401 = -1;
	static uint8_t x402 = 7U;
	uint32_t x404 = UINT32_MAX;
	int32_t t29 = -37;

	t29 = ((x401/x402)>>(x403%x404));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x421 = INT8_MIN;
	volatile int64_t x422 = -1LL;
	volatile uint8_t x423 = 42U;
	volatile uint32_t x424 = 186426241U;

	t30 = ((x421/x422)>>(x423%x424));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x429 = -6;
	static int16_t x430 = -140;
	uint8_t x431 = 0U;
	int16_t x432 = INT16_MIN;
	volatile int32_t t31 = 3;

	t31 = ((x429/x430)>>(x431%x432));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x445 = INT8_MIN;
	static volatile int8_t x446 = -22;
	uint8_t x447 = 60U;
	static int16_t x448 = -26;
	int32_t t32 = 401199888;

	t32 = ((x445/x446)>>(x447%x448));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x453 = -10662396;
	int8_t x454 = -1;
	int64_t x455 = INT64_MIN;
	volatile int32_t t33 = -408;

	t33 = ((x453/x454)>>(x455%x456));

	if (t33 != 10662396) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x469 = -1LL;
	volatile uint32_t x470 = 164U;
	uint32_t x471 = UINT32_MAX;
	int16_t x472 = -1;

	t34 = ((x469/x470)>>(x471%x472));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x485 = 0;
	volatile int8_t x486 = 18;
	int8_t x487 = -1;
	int64_t x488 = -1LL;
	int32_t t35 = -752644730;

	t35 = ((x485/x486)>>(x487%x488));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x493 = -1LL;
	int16_t x494 = INT16_MIN;
	int8_t x496 = 2;
	volatile int64_t t36 = -11278655LL;

	t36 = ((x493/x494)>>(x495%x496));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x497 = UINT16_MAX;
	int64_t x498 = INT64_MIN;
	int16_t x499 = 0;
	int64_t x500 = -1LL;
	int64_t t37 = 1609LL;

	t37 = ((x497/x498)>>(x499%x500));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x517 = INT16_MIN;
	volatile int64_t x519 = INT64_MIN;
	static int16_t x520 = 2;
	static int32_t t38 = 1;

	t38 = ((x517/x518)>>(x519%x520));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x525 = -1;
	int8_t x526 = 3;
	int8_t x527 = 0;
	int8_t x528 = INT8_MAX;

	t39 = ((x525/x526)>>(x527%x528));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x537 = 94U;
	int8_t x538 = INT8_MIN;
	uint8_t x539 = UINT8_MAX;
	int16_t x540 = -1;
	int32_t t40 = 427385;

	t40 = ((x537/x538)>>(x539%x540));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x546 = -32;
	int64_t x547 = -1LL;
	static int64_t x548 = -1LL;

	t41 = ((x545/x546)>>(x547%x548));

	if (t41 != 1485903LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x549 = INT32_MAX;
	int64_t x550 = 59LL;
	int32_t x551 = 1;
	volatile uint8_t x552 = 95U;
	volatile int64_t t42 = 27720137LL;

	t42 = ((x549/x550)>>(x551%x552));

	if (t42 != 18199013LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x582 = UINT32_MAX;
	volatile int8_t x583 = INT8_MIN;

	t43 = ((x581/x582)>>(x583%x584));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x585 = -1LL;
	static int8_t x586 = -1;
	volatile int16_t x587 = INT16_MAX;
	uint8_t x588 = 4U;
	static volatile int64_t t44 = 135263329LL;

	t44 = ((x585/x586)>>(x587%x588));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x613 = -1;
	uint8_t x614 = 36U;
	int32_t x616 = INT32_MIN;
	volatile int32_t t45 = -686;

	t45 = ((x613/x614)>>(x615%x616));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x661 = 234912833883815LLU;
	uint16_t x662 = UINT16_MAX;
	static int32_t x663 = INT32_MAX;
	volatile uint64_t t46 = 2617662083508345419LLU;

	t46 = ((x661/x662)>>(x663%x664));

	if (t46 != 3584540076LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x666 = UINT32_MAX;
	int64_t x667 = INT64_MIN;
	int16_t x668 = -1;
	uint32_t t47 = 221U;

	t47 = ((x665/x666)>>(x667%x668));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x714 = UINT16_MAX;
	uint64_t x715 = 300863481064277310LLU;
	uint8_t x716 = UINT8_MAX;

	t48 = ((x713/x714)>>(x715%x716));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x738 = 4U;
	volatile int64_t x739 = INT64_MAX;
	int8_t x740 = -1;
	static uint32_t t49 = 197U;

	t49 = ((x737/x738)>>(x739%x740));

	if (t49 != 1073741823U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x753 = INT32_MIN;
	int64_t x754 = INT64_MIN;
	int16_t x755 = INT16_MIN;
	int8_t x756 = -8;
	int64_t t50 = -978853036571078LL;

	t50 = ((x753/x754)>>(x755%x756));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x769 = 0;
	int64_t x771 = 44149929450LL;
	int8_t x772 = 7;

	t51 = ((x769/x770)>>(x771%x772));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x793 = -1;
	int16_t x794 = 10444;
	static int32_t x795 = 535531747;
	volatile int32_t t52 = 2153;

	t52 = ((x793/x794)>>(x795%x796));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x813 = INT16_MAX;
	static int16_t x814 = INT16_MIN;
	int16_t x816 = -6520;
	volatile int32_t t53 = 333859;

	t53 = ((x813/x814)>>(x815%x816));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x822 = INT64_MAX;
	static int32_t x823 = INT32_MIN;
	volatile int32_t x824 = INT32_MIN;
	static int64_t t54 = -46655181LL;

	t54 = ((x821/x822)>>(x823%x824));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x857 = 1LLU;
	volatile int8_t x858 = -17;
	int8_t x859 = INT8_MIN;
	uint64_t t55 = 81566783532576877LLU;

	t55 = ((x857/x858)>>(x859%x860));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x861 = 13U;
	int8_t x863 = 1;
	static volatile uint32_t x864 = UINT32_MAX;
	volatile int32_t t56 = -3343;

	t56 = ((x861/x862)>>(x863%x864));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x869 = INT16_MIN;
	int16_t x870 = -1586;
	int32_t x871 = -1;
	volatile uint32_t x872 = 10U;
	int32_t t57 = -15;

	t57 = ((x869/x870)>>(x871%x872));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x885 = 1000206524;
	int64_t x886 = -3118412637903LL;
	int16_t x887 = INT16_MAX;
	uint64_t x888 = 15LLU;
	int64_t t58 = -210238344673LL;

	t58 = ((x885/x886)>>(x887%x888));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x889 = 3;
	volatile int32_t x890 = INT32_MIN;
	uint8_t x891 = 121U;
	volatile int32_t t59 = 114800;

	t59 = ((x889/x890)>>(x891%x892));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x898 = 5584460385LL;
	int16_t x899 = INT16_MAX;
	volatile int64_t x900 = -1LL;

	t60 = ((x897/x898)>>(x899%x900));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x905 = 2023655590877330551LLU;
	int8_t x906 = INT8_MIN;
	volatile uint64_t t61 = 16205420914732624LLU;

	t61 = ((x905/x906)>>(x907%x908));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x914 = 34991LLU;
	uint32_t x915 = 2U;
	volatile uint32_t x916 = 32814732U;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x913/x914)>>(x915%x916));

	if (t62 != 15343LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x925 = UINT8_MAX;
	static uint64_t x926 = 532715724373800LLU;
	uint32_t x928 = 118716691U;
	volatile uint64_t t63 = 462751537683276681LLU;

	t63 = ((x925/x926)>>(x927%x928));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x933 = UINT64_MAX;
	static uint64_t x934 = 1693109791LLU;
	int64_t x935 = INT64_MIN;
	volatile int16_t x936 = INT16_MIN;
	uint64_t t64 = 261LLU;

	t64 = ((x933/x934)>>(x935%x936));

	if (t64 != 10895184808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x937 = -48;
	int64_t x938 = INT64_MIN;
	int32_t x939 = INT32_MIN;
	volatile int64_t t65 = -58925573955LL;

	t65 = ((x937/x938)>>(x939%x940));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x957 = -5;
	static volatile uint64_t x958 = UINT64_MAX;
	int32_t x959 = -4276076;
	static uint16_t x960 = 1U;
	static volatile uint64_t t66 = 107251164155LLU;

	t66 = ((x957/x958)>>(x959%x960));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x963 = 1;

	t67 = ((x961/x962)>>(x963%x964));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x965 = -1;
	static uint16_t x967 = 12U;
	int16_t x968 = -1;
	int32_t t68 = 57;

	t68 = ((x965/x966)>>(x967%x968));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x973 = 1;
	int64_t x974 = INT64_MIN;
	int64_t x975 = INT64_MIN;
	static int64_t t69 = 15LL;

	t69 = ((x973/x974)>>(x975%x976));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x977 = INT16_MIN;
	volatile int32_t x978 = -1;
	volatile uint64_t x980 = UINT64_MAX;
	static int32_t t70 = -64665;

	t70 = ((x977/x978)>>(x979%x980));

	if (t70 != 16384) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1013 = -504707260565LL;
	int16_t x1015 = INT16_MIN;
	volatile int64_t x1016 = -1LL;
	int64_t t71 = 56478172210326043LL;

	t71 = ((x1013/x1014)>>(x1015%x1016));

	if (t71 != 504707260565LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1025 = INT64_MAX;
	int64_t x1026 = INT64_MIN;
	uint16_t x1027 = UINT16_MAX;
	int64_t x1028 = -1LL;
	int64_t t72 = 119858588611213LL;

	t72 = ((x1025/x1026)>>(x1027%x1028));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1029 = 1088U;
	volatile int16_t x1030 = INT16_MIN;
	int16_t x1031 = -2;
	volatile int32_t t73 = 6719825;

	t73 = ((x1029/x1030)>>(x1031%x1032));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1033 = -1LL;
	static int32_t x1034 = INT32_MAX;
	uint64_t x1035 = UINT64_MAX;
	static int32_t x1036 = INT32_MAX;
	int64_t t74 = -4679LL;

	t74 = ((x1033/x1034)>>(x1035%x1036));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x1053 = INT32_MIN;
	int16_t x1054 = INT16_MIN;
	int8_t x1056 = INT8_MIN;
	static volatile int32_t t75 = -392334;

	t75 = ((x1053/x1054)>>(x1055%x1056));

	if (t75 != 65536) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1069 = 1;
	int32_t x1070 = INT32_MIN;
	volatile int64_t x1071 = INT64_MAX;
	int32_t t76 = -2262802;

	t76 = ((x1069/x1070)>>(x1071%x1072));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1097 = UINT64_MAX;
	int8_t x1098 = INT8_MIN;
	int64_t x1099 = -1LL;
	volatile uint64_t x1100 = UINT64_MAX;
	volatile uint64_t t77 = 7390773837530699167LLU;

	t77 = ((x1097/x1098)>>(x1099%x1100));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x1105 = -1;
	static int8_t x1106 = -16;
	static int16_t x1107 = INT16_MIN;
	volatile int16_t x1108 = INT16_MIN;

	t78 = ((x1105/x1106)>>(x1107%x1108));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1141 = -1;
	int32_t x1142 = -1;
	int16_t x1144 = 1;
	int32_t t79 = 261916;

	t79 = ((x1141/x1142)>>(x1143%x1144));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1149 = -1;
	int8_t x1151 = 0;
	int8_t x1152 = INT8_MAX;
	static volatile int32_t t80 = 0;

	t80 = ((x1149/x1150)>>(x1151%x1152));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x1181 = 316920584U;
	uint16_t x1183 = 7U;
	volatile uint32_t t81 = 69094U;

	t81 = ((x1181/x1182)>>(x1183%x1184));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1189 = 41770879012202848LLU;
	int64_t x1190 = INT64_MAX;
	static uint64_t t82 = 33879LLU;

	t82 = ((x1189/x1190)>>(x1191%x1192));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x1219 = 224U;
	volatile uint64_t t83 = 3831LLU;

	t83 = ((x1217/x1218)>>(x1219%x1220));

	if (t83 != 3639LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1222 = -96641531760597689LL;
	static int32_t x1223 = 491602191;
	static uint16_t x1224 = 9U;
	static int64_t t84 = 5936743LL;

	t84 = ((x1221/x1222)>>(x1223%x1224));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x1237 = INT16_MIN;
	static volatile int8_t x1239 = INT8_MAX;

	t85 = ((x1237/x1238)>>(x1239%x1240));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x1254 = -1;
	int8_t x1256 = -1;
	static volatile uint64_t t86 = 2225879515253319LLU;

	t86 = ((x1253/x1254)>>(x1255%x1256));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1271 = 25U;
	int16_t x1272 = -1;

	t87 = ((x1269/x1270)>>(x1271%x1272));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1317 = -1LL;
	uint64_t x1319 = 15LLU;
	volatile int64_t t88 = 775760LL;

	t88 = ((x1317/x1318)>>(x1319%x1320));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1329 = -1;
	int16_t x1330 = INT16_MIN;
	uint16_t x1331 = UINT16_MAX;
	volatile uint8_t x1332 = 12U;
	volatile int32_t t89 = 118;

	t89 = ((x1329/x1330)>>(x1331%x1332));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1337 = INT32_MAX;
	uint64_t x1338 = 3712LLU;
	uint64_t x1339 = 487294LLU;
	uint64_t x1340 = 3LLU;
	static uint64_t t90 = 8248229955618472061LLU;

	t90 = ((x1337/x1338)>>(x1339%x1340));

	if (t90 != 289262LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1341 = -1;
	int64_t x1342 = INT64_MAX;
	uint16_t x1343 = 3U;
	volatile int64_t t91 = 6513577045250LL;

	t91 = ((x1341/x1342)>>(x1343%x1344));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1345 = UINT8_MAX;
	volatile uint32_t x1346 = UINT32_MAX;
	volatile int16_t x1347 = INT16_MIN;
	volatile int16_t x1348 = INT16_MIN;
	uint32_t t92 = 86040U;

	t92 = ((x1345/x1346)>>(x1347%x1348));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1385 = INT32_MIN;
	int16_t x1386 = INT16_MIN;
	int32_t x1387 = INT32_MIN;
	static int32_t x1388 = INT32_MIN;
	static int32_t t93 = -1;

	t93 = ((x1385/x1386)>>(x1387%x1388));

	if (t93 != 65536) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1397 = 39U;
	uint16_t x1398 = 61U;
	int8_t x1400 = -1;

	t94 = ((x1397/x1398)>>(x1399%x1400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x1417 = 505U;
	int64_t x1418 = INT64_MIN;
	static int32_t x1419 = INT32_MAX;
	uint8_t x1420 = 1U;
	int64_t t95 = 1033LL;

	t95 = ((x1417/x1418)>>(x1419%x1420));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1421 = 5U;
	volatile int64_t x1422 = INT64_MAX;
	static uint64_t x1423 = 1LLU;
	static int8_t x1424 = -1;
	int64_t t96 = 785422875LL;

	t96 = ((x1421/x1422)>>(x1423%x1424));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x1425 = 84U;
	volatile int32_t x1426 = INT32_MIN;
	uint32_t x1427 = 104327U;
	static volatile uint8_t x1428 = 2U;
	volatile uint32_t t97 = 323001981U;

	t97 = ((x1425/x1426)>>(x1427%x1428));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1437 = 61382997275LLU;
	static int64_t x1438 = INT64_MAX;
	volatile int16_t x1439 = 0;
	volatile int16_t x1440 = INT16_MIN;
	uint64_t t98 = 54LLU;

	t98 = ((x1437/x1438)>>(x1439%x1440));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1457 = INT8_MAX;
	static uint8_t x1459 = 0U;
	int16_t x1460 = INT16_MAX;

	t99 = ((x1457/x1458)>>(x1459%x1460));

	if (t99 != 1) { NG(); } else { ; }
	
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

