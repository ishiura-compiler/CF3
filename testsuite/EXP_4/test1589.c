#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x11 = -1;
volatile int64_t x31 = INT64_MIN;
static uint32_t t3 = 1807998U;
volatile int16_t x56 = -1;
volatile int8_t x76 = -1;
uint64_t x118 = UINT64_MAX;
uint8_t x119 = 11U;
int64_t x122 = 311144832LL;
static int32_t x123 = -1;
int32_t x133 = -429838;
int8_t x134 = 30;
int64_t x135 = -1LL;
static volatile int16_t x145 = -1;
int16_t x147 = 248;
int8_t x148 = INT8_MAX;
int8_t x149 = -1;
int16_t x152 = -1;
static int8_t x164 = 1;
volatile uint64_t t18 = 1058793LLU;
int8_t x167 = INT8_MIN;
uint32_t x190 = 100671U;
uint8_t x191 = 57U;
volatile int64_t x202 = INT64_MAX;
volatile int32_t t22 = 408768;
int8_t x253 = 1;
int16_t x257 = -1;
static volatile uint32_t x259 = 12857729U;
int16_t x268 = INT16_MAX;
int64_t x272 = INT64_MAX;
static uint8_t x282 = 42U;
static volatile int64_t x325 = 7LL;
int32_t x331 = INT32_MIN;
static uint16_t x344 = 21232U;
int32_t x353 = -114993;
static uint64_t t38 = 8822347140LLU;
int32_t x380 = INT32_MIN;
static uint64_t x394 = UINT64_MAX;
static int32_t t43 = 1;
static uint64_t x419 = 504026341574LLU;
static uint8_t x421 = UINT8_MAX;
uint32_t x444 = 90466440U;
volatile int32_t t48 = -460109569;
volatile uint16_t x446 = UINT16_MAX;
int8_t x451 = 1;
uint64_t x455 = 14LLU;
int32_t x473 = 2;
static uint8_t x474 = UINT8_MAX;
volatile uint64_t x480 = 2LLU;
int8_t x516 = INT8_MIN;
volatile int32_t x526 = 16338271;
static uint32_t x528 = UINT32_MAX;
volatile int64_t x532 = INT64_MIN;
static uint64_t x550 = 261LLU;
volatile uint64_t t61 = 3423744993LLU;
int64_t x577 = -1LL;
volatile int8_t x579 = INT8_MIN;
static int16_t x593 = 7617;
volatile int32_t t65 = 37343035;
static uint64_t x599 = 13116LLU;
int32_t x600 = INT32_MIN;
int32_t x611 = 6;
uint8_t x626 = 34U;
uint8_t x627 = 59U;
volatile uint16_t x643 = 586U;
uint32_t t72 = 1U;
static int16_t x648 = INT16_MIN;
int64_t x649 = 2471359LL;
uint8_t x650 = 96U;
int8_t x651 = 30;
volatile uint16_t x665 = 0U;
uint64_t t76 = 903995318354630LLU;
volatile int32_t t77 = -5;
uint32_t x710 = UINT32_MAX;
static int32_t x713 = -1;
int8_t x722 = INT8_MAX;
volatile uint64_t t82 = 8084231109528LLU;
uint32_t x741 = UINT32_MAX;
int64_t x745 = 3285559LL;
int16_t x752 = -1;
static uint32_t x758 = 216253U;
int16_t x767 = 2;
volatile int32_t t90 = 1424;
uint32_t x789 = 3U;
int8_t x795 = 0;
int32_t x796 = -4039263;
volatile int32_t t94 = 0;
volatile int16_t x808 = INT16_MIN;
static volatile uint16_t x832 = 3U;
uint8_t x851 = 28U;


void f0(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x6 = 1886448LLU;
	int16_t x7 = 4227;
	uint8_t x8 = 86U;
	uint64_t t0 = 21732030294662845LLU;

	t0 = (x5*(x6<<(x7<=x8)));

	if (t0 != 18442692957476749312LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 2058979761U;
	static volatile uint8_t x10 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	uint32_t t1 = 988103U;

	t1 = (x9*(x10<<(x11<=x12)));

	if (t1 != 1053828943U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x29 = 15663U;
	uint8_t x30 = 6U;
	int8_t x32 = INT8_MIN;
	static uint32_t t2 = 476804U;

	t2 = (x29*(x30<<(x31<=x32)));

	if (t2 != 187956U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x33 = 41;
	volatile uint32_t x34 = UINT32_MAX;
	static int16_t x35 = INT16_MAX;
	volatile uint8_t x36 = 3U;

	t3 = (x33*(x34<<(x35<=x36)));

	if (t3 != 4294967255U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = -39;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = 1U;
	int32_t x40 = -1;
	static volatile uint32_t t4 = 292050751U;

	t4 = (x37*(x38<<(x39<=x40)));

	if (t4 != 78U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 0;
	uint16_t x42 = 12U;
	uint64_t x43 = 6405266LLU;
	volatile uint16_t x44 = UINT16_MAX;
	static int32_t t5 = 2557;

	t5 = (x41*(x42<<(x43<=x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = -5;
	uint8_t x46 = 6U;
	volatile int64_t x47 = -2163160879012122LL;
	uint16_t x48 = 150U;
	volatile int32_t t6 = -3745468;

	t6 = (x45*(x46<<(x47<=x48)));

	if (t6 != -60) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = UINT64_MAX;
	uint8_t x51 = 60U;
	int16_t x52 = 964;
	uint64_t t7 = 48187710023841845LLU;

	t7 = (x49*(x50<<(x51<=x52)));

	if (t7 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x53 = 0U;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MIN;
	uint64_t t8 = 1491029LLU;

	t8 = (x53*(x54<<(x55<=x56)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x57 = UINT16_MAX;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = 22278787105731857LL;
	static uint64_t x60 = 620471776402340179LLU;
	static int32_t t9 = -44238153;

	t9 = (x57*(x58<<(x59<=x60)));

	if (t9 != 33422850) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = -1;
	static int16_t x70 = 0;
	uint16_t x71 = 0U;
	volatile uint32_t x72 = 47U;
	int32_t t10 = 5940;

	t10 = (x69*(x70<<(x71<=x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = UINT32_MAX;
	static int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	volatile uint32_t t11 = 124962005U;

	t11 = (x73*(x74<<(x75<=x76)));

	if (t11 != 4294967042U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x114 = 344474LLU;
	int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	static volatile uint64_t t12 = 2812891191469119829LLU;

	t12 = (x113*(x114<<(x115<=x116)));

	if (t12 != 18446744051134103552LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x117 = INT8_MAX;
	volatile int32_t x120 = -1;
	static volatile uint64_t t13 = 469612009928LLU;

	t13 = (x117*(x118<<(x119<=x120)));

	if (t13 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x121 = 57;
	int8_t x124 = -1;
	volatile int64_t t14 = -619LL;

	t14 = (x121*(x122<<(x123<=x124)));

	if (t14 != 35470510848LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x136 = INT8_MAX;
	int32_t t15 = -51653;

	t15 = (x133*(x134<<(x135<=x136)));

	if (t15 != -25790280) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x146 = UINT64_MAX;
	static volatile uint64_t t16 = 1814495120281909618LLU;

	t16 = (x145*(x146<<(x147<=x148)));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = -1;
	uint64_t t17 = 204LLU;

	t17 = (x149*(x150<<(x151<=x152)));

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x161 = -4;
	static uint64_t x162 = 3101357501929316449LLU;
	uint32_t x163 = 766922526U;

	t18 = (x161*(x162<<(x163<=x164)));

	if (t18 != 6041314065992285820LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x165 = 2;
	static volatile int64_t x166 = 625855LL;
	int32_t x168 = INT32_MIN;
	static int64_t t19 = 175390LL;

	t19 = (x165*(x166<<(x167<=x168)));

	if (t19 != 1251710LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x189 = 66399355584LLU;
	uint16_t x192 = 14U;
	uint64_t t20 = 3716814006258516287LLU;

	t20 = (x189*(x190<<(x191<=x192)));

	if (t20 != 6684489525996864LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x201 = -1;
	int64_t x203 = 789718746191888LL;
	int64_t x204 = -1LL;
	int64_t t21 = 6LL;

	t21 = (x201*(x202<<(x203<=x204)));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x217 = 2;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = INT8_MAX;
	uint32_t x220 = 22911U;

	t22 = (x217*(x218<<(x219<=x220)));

	if (t22 != 508) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = INT32_MIN;
	uint64_t t23 = 1262814723937107LLU;

	t23 = (x229*(x230<<(x231<=x232)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x254 = 11;
	volatile int16_t x255 = INT16_MIN;
	static int8_t x256 = -1;
	int32_t t24 = -98;

	t24 = (x253*(x254<<(x255<=x256)));

	if (t24 != 22) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x258 = 58119802LLU;
	int64_t x260 = 17152295244LL;
	volatile uint64_t t25 = 106078718512LLU;

	t25 = (x257*(x258<<(x259<=x260)));

	if (t25 != 18446744073593312012LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x265 = INT16_MAX;
	static uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 96U;
	volatile uint64_t t26 = 2275768054089794962LLU;

	t26 = (x265*(x266<<(x267<=x268)));

	if (t26 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x269 = 2195764U;
	int16_t x270 = 0;
	static int32_t x271 = -1;
	volatile uint32_t t27 = 1686U;

	t27 = (x269*(x270<<(x271<=x272)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x281 = UINT32_MAX;
	uint8_t x283 = 102U;
	uint16_t x284 = 4U;
	volatile uint32_t t28 = 9420339U;

	t28 = (x281*(x282<<(x283<=x284)));

	if (t28 != 4294967254U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 6846U;
	static int16_t x303 = 3;
	int16_t x304 = 23;
	int32_t t29 = -42;

	t29 = (x301*(x302<<(x303<=x304)));

	if (t29 != 3491460) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x313 = 478647LLU;
	int16_t x314 = INT16_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	static int32_t x316 = INT32_MIN;
	uint64_t t30 = 881985313122LLU;

	t30 = (x313*(x314<<(x315<=x316)));

	if (t30 != 15683826249LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MAX;
	volatile int32_t x319 = 112950;
	int64_t x320 = 6LL;
	int32_t t31 = -6746727;

	t31 = (x317*(x318<<(x319<=x320)));

	if (t31 != 2147385345) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -138;
	int8_t x328 = -1;
	static int64_t t32 = -1040635843483338LL;

	t32 = (x325*(x326<<(x327<=x328)));

	if (t32 != 3570LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x329 = INT64_MAX;
	uint64_t x330 = 393832875981LLU;
	uint32_t x332 = UINT32_MAX;
	volatile uint64_t t33 = 5250274915010073425LLU;

	t33 = (x329*(x330<<(x331<=x332)));

	if (t33 != 18446743286043799654LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = -5;
	uint8_t x336 = 0U;
	uint64_t t34 = 2158537681LLU;

	t34 = (x333*(x334<<(x335<=x336)));

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x341 = 22758982U;
	uint16_t x342 = UINT16_MAX;
	uint64_t x343 = UINT64_MAX;
	volatile uint32_t t35 = 2848U;

	t35 = (x341*(x342<<(x343<=x344)));

	if (t35 != 1156233658U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x354 = UINT8_MAX;
	static uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t36 = -11689;

	t36 = (x353*(x354<<(x355<=x356)));

	if (t36 != -29323215) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x361 = UINT32_MAX;
	uint8_t x362 = 8U;
	static int32_t x363 = INT32_MAX;
	static volatile int16_t x364 = INT16_MIN;
	uint32_t t37 = 3847U;

	t37 = (x361*(x362<<(x363<=x364)));

	if (t37 != 4294967288U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x365 = 486061630019928LLU;
	static volatile int8_t x366 = INT8_MAX;
	static volatile int16_t x367 = INT16_MAX;
	static int64_t x368 = INT64_MAX;

	t38 = (x365*(x366<<(x367<=x368)));

	if (t38 != 123459654025061712LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x373 = 28U;
	uint16_t x374 = 118U;
	int64_t x375 = -1LL;
	volatile int16_t x376 = 8006;
	uint32_t t39 = 8U;

	t39 = (x373*(x374<<(x375<=x376)));

	if (t39 != 6608U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x377 = 0;
	uint32_t x378 = 43100U;
	static volatile uint16_t x379 = UINT16_MAX;
	uint32_t t40 = 41779685U;

	t40 = (x377*(x378<<(x379<=x380)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x389 = 3U;
	volatile uint64_t x390 = 200LLU;
	static int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MAX;
	volatile uint64_t t41 = 22964736374620235LLU;

	t41 = (x389*(x390<<(x391<=x392)));

	if (t41 != 1200LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x393 = 1;
	int64_t x395 = INT64_MAX;
	int8_t x396 = -30;
	uint64_t t42 = UINT64_MAX;

	t42 = (x393*(x394<<(x395<=x396)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x405 = -60;
	int8_t x406 = 1;
	uint16_t x407 = 329U;
	uint64_t x408 = 3637LLU;

	t43 = (x405*(x406<<(x407<=x408)));

	if (t43 != -120) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x417 = -1;
	uint16_t x418 = 3647U;
	uint8_t x420 = 2U;
	volatile int32_t t44 = 1;

	t44 = (x417*(x418<<(x419<=x420)));

	if (t44 != -3647) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x422 = UINT64_MAX;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = INT64_MIN;
	uint64_t t45 = 582743101321LLU;

	t45 = (x421*(x422<<(x423<=x424)));

	if (t45 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x433 = -2577752707815LL;
	uint16_t x434 = UINT16_MAX;
	uint8_t x435 = 36U;
	int8_t x436 = 11;
	volatile int64_t t46 = -1557861LL;

	t46 = (x433*(x434<<(x435<=x436)));

	if (t46 != -168933023706656025LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x437 = 393U;
	int8_t x438 = INT8_MAX;
	uint8_t x439 = UINT8_MAX;
	int64_t x440 = INT64_MAX;
	int32_t t47 = 1;

	t47 = (x437*(x438<<(x439<=x440)));

	if (t47 != 99822) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x441 = INT16_MIN;
	static int32_t x442 = 870;
	volatile int32_t x443 = INT32_MIN;

	t48 = (x441*(x442<<(x443<=x444)));

	if (t48 != -28508160) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x445 = 1;
	uint64_t x447 = 3139012005885LLU;
	static uint8_t x448 = UINT8_MAX;
	int32_t t49 = -76347;

	t49 = (x445*(x446<<(x447<=x448)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x449 = UINT64_MAX;
	volatile uint64_t x450 = UINT64_MAX;
	int16_t x452 = 0;
	uint64_t t50 = 3420950129LLU;

	t50 = (x449*(x450<<(x451<=x452)));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x453 = UINT16_MAX;
	int8_t x454 = INT8_MAX;
	int64_t x456 = -1LL;
	volatile int32_t t51 = -181894;

	t51 = (x453*(x454<<(x455<=x456)));

	if (t51 != 16645890) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x475 = INT64_MAX;
	int32_t x476 = INT32_MIN;
	static volatile int32_t t52 = -186;

	t52 = (x473*(x474<<(x475<=x476)));

	if (t52 != 510) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x477 = 4295U;
	int64_t x478 = 7811369240LL;
	uint64_t x479 = UINT64_MAX;
	int64_t t53 = -4289673LL;

	t53 = (x477*(x478<<(x479<=x480)));

	if (t53 != 33549830885800LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x501 = UINT16_MAX;
	uint32_t x502 = 611U;
	int32_t x503 = INT32_MAX;
	volatile int64_t x504 = -7789743LL;
	static uint32_t t54 = 50937U;

	t54 = (x501*(x502<<(x503<=x504)));

	if (t54 != 40041885U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x513 = INT64_MIN;
	static uint64_t x514 = UINT64_MAX;
	uint8_t x515 = UINT8_MAX;
	static volatile uint64_t t55 = 58904LLU;

	t55 = (x513*(x514<<(x515<=x516)));

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x525 = -1;
	int32_t x527 = INT32_MAX;
	int32_t t56 = -7767185;

	t56 = (x525*(x526<<(x527<=x528)));

	if (t56 != -32676542) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x529 = 1U;
	volatile int8_t x530 = INT8_MAX;
	int8_t x531 = INT8_MIN;
	volatile int32_t t57 = 34;

	t57 = (x529*(x530<<(x531<=x532)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x537 = 1U;
	uint64_t x538 = UINT64_MAX;
	uint64_t x539 = 808232LLU;
	volatile int16_t x540 = INT16_MIN;
	volatile uint64_t t58 = 56364117169LLU;

	t58 = (x537*(x538<<(x539<=x540)));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x549 = INT32_MIN;
	int32_t x551 = 18765;
	int64_t x552 = -1LL;
	volatile uint64_t t59 = 513LLU;

	t59 = (x549*(x550<<(x551<=x552)));

	if (t59 != 18446743513216319488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x557 = 0;
	uint8_t x558 = 5U;
	volatile int8_t x559 = INT8_MIN;
	uint32_t x560 = 7923U;
	int32_t t60 = -770;

	t60 = (x557*(x558<<(x559<=x560)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x573 = UINT64_MAX;
	uint8_t x574 = 24U;
	volatile int64_t x575 = INT64_MIN;
	uint32_t x576 = 198857U;

	t61 = (x573*(x574<<(x575<=x576)));

	if (t61 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x578 = 3U;
	static volatile int64_t x580 = -165657123LL;
	int64_t t62 = 799213LL;

	t62 = (x577*(x578<<(x579<=x580)));

	if (t62 != -3LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x585 = 4048U;
	int8_t x586 = 1;
	int32_t x587 = INT32_MIN;
	volatile uint32_t x588 = 54664777U;
	volatile int32_t t63 = 172450033;

	t63 = (x585*(x586<<(x587<=x588)));

	if (t63 != 4048) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x589 = UINT32_MAX;
	uint8_t x590 = 2U;
	uint64_t x591 = 487175021LLU;
	volatile int8_t x592 = INT8_MAX;
	volatile uint32_t t64 = 88359578U;

	t64 = (x589*(x590<<(x591<=x592)));

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x594 = 3;
	int32_t x595 = 0;
	static volatile uint64_t x596 = 3LLU;

	t65 = (x593*(x594<<(x595<=x596)));

	if (t65 != 45702) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x597 = INT64_MIN;
	uint64_t x598 = 496996489LLU;
	uint64_t t66 = 13047384464LLU;

	t66 = (x597*(x598<<(x599<=x600)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x605 = INT8_MAX;
	uint64_t x606 = 30825194927057LLU;
	uint32_t x607 = 234962U;
	int32_t x608 = -1;
	static volatile uint64_t t67 = 3040LLU;

	t67 = (x605*(x606<<(x607<=x608)));

	if (t67 != 7829599511472478LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x609 = -724229;
	uint8_t x610 = UINT8_MAX;
	uint32_t x612 = UINT32_MAX;
	int32_t t68 = -135817353;

	t68 = (x609*(x610<<(x611<=x612)));

	if (t68 != -369356790) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x621 = INT16_MIN;
	uint32_t x622 = UINT32_MAX;
	int32_t x623 = INT32_MIN;
	int8_t x624 = INT8_MIN;
	uint32_t t69 = 4053527U;

	t69 = (x621*(x622<<(x623<=x624)));

	if (t69 != 65536U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x625 = -1;
	int32_t x628 = 21610;
	int32_t t70 = 39936575;

	t70 = (x625*(x626<<(x627<=x628)));

	if (t70 != -68) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x629 = INT16_MIN;
	uint32_t x630 = UINT32_MAX;
	uint32_t x631 = 23260U;
	volatile int64_t x632 = INT64_MIN;
	volatile uint32_t t71 = 182U;

	t71 = (x629*(x630<<(x631<=x632)));

	if (t71 != 32768U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x641 = UINT32_MAX;
	volatile int8_t x642 = 6;
	uint64_t x644 = UINT64_MAX;

	t72 = (x641*(x642<<(x643<=x644)));

	if (t72 != 4294967284U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x645 = 4763U;
	uint32_t x646 = 32U;
	int16_t x647 = -1;
	volatile uint32_t t73 = 108U;

	t73 = (x645*(x646<<(x647<=x648)));

	if (t73 != 152416U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x652 = UINT8_MAX;
	int64_t t74 = -47317107964733LL;

	t74 = (x649*(x650<<(x651<=x652)));

	if (t74 != 474500928LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x666 = 8769LL;
	int64_t x667 = INT64_MAX;
	int64_t x668 = -1LL;
	int64_t t75 = -17101206806LL;

	t75 = (x665*(x666<<(x667<=x668)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x669 = INT16_MAX;
	uint64_t x670 = 358590400LLU;
	int8_t x671 = INT8_MIN;
	volatile uint16_t x672 = UINT16_MAX;

	t76 = (x669*(x670<<(x671<=x672)));

	if (t76 != 23499863273600LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x677 = -1;
	int8_t x678 = INT8_MAX;
	uint32_t x679 = 23U;
	int16_t x680 = 1;

	t77 = (x677*(x678<<(x679<=x680)));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x681 = -1;
	int32_t x682 = INT32_MAX;
	volatile int64_t x683 = INT64_MAX;
	int16_t x684 = INT16_MIN;
	int32_t t78 = -3;

	t78 = (x681*(x682<<(x683<=x684)));

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x709 = 990;
	int16_t x711 = INT16_MIN;
	static volatile int64_t x712 = 1012316775873139791LL;
	uint32_t t79 = 432361U;

	t79 = (x709*(x710<<(x711<=x712)));

	if (t79 != 4294965316U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x714 = 437686U;
	static volatile uint16_t x715 = 3455U;
	int16_t x716 = INT16_MIN;
	uint32_t t80 = 45530962U;

	t80 = (x713*(x714<<(x715<=x716)));

	if (t80 != 4294529610U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x721 = 2U;
	int8_t x723 = -1;
	static int8_t x724 = -1;
	volatile int32_t t81 = 1556344;

	t81 = (x721*(x722<<(x723<=x724)));

	if (t81 != 508) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x733 = INT8_MAX;
	static volatile uint64_t x734 = UINT64_MAX;
	int16_t x735 = INT16_MAX;
	uint32_t x736 = UINT32_MAX;

	t82 = (x733*(x734<<(x735<=x736)));

	if (t82 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x742 = 674906635;
	int32_t x743 = INT32_MIN;
	int8_t x744 = INT8_MIN;
	volatile uint32_t t83 = 1024660U;

	t83 = (x741*(x742<<(x743<=x744)));

	if (t83 != 2945154026U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x746 = 0U;
	int32_t x747 = 18710441;
	static int32_t x748 = -17;
	volatile int64_t t84 = -109361561388LL;

	t84 = (x745*(x746<<(x747<=x748)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x749 = 5889U;
	int16_t x750 = INT16_MAX;
	int64_t x751 = INT64_MAX;
	volatile int32_t t85 = 7;

	t85 = (x749*(x750<<(x751<=x752)));

	if (t85 != 192964863) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x753 = -1LL;
	int16_t x754 = 914;
	volatile int32_t x755 = -2568;
	uint64_t x756 = UINT64_MAX;
	volatile int64_t t86 = -956023202532LL;

	t86 = (x753*(x754<<(x755<=x756)));

	if (t86 != -1828LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x757 = 250963637LLU;
	static volatile uint8_t x759 = 6U;
	int16_t x760 = 284;
	uint64_t t87 = 41LLU;

	t87 = (x757*(x758<<(x759<=x760)));

	if (t87 != 108543278784322LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x765 = -1;
	uint8_t x766 = 21U;
	int32_t x768 = INT32_MIN;
	volatile int32_t t88 = 28;

	t88 = (x765*(x766<<(x767<=x768)));

	if (t88 != -21) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x773 = -1LL;
	uint32_t x774 = 231634262U;
	uint8_t x775 = 92U;
	int32_t x776 = -3;
	int64_t t89 = -38728167913047LL;

	t89 = (x773*(x774<<(x775<=x776)));

	if (t89 != -231634262LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x785 = INT8_MAX;
	uint16_t x786 = UINT16_MAX;
	int64_t x787 = -2242962556614843133LL;
	int16_t x788 = -1;

	t90 = (x785*(x786<<(x787<=x788)));

	if (t90 != 16645890) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x790 = 13U;
	volatile uint8_t x791 = 0U;
	int16_t x792 = -1;
	uint32_t t91 = 4U;

	t91 = (x789*(x790<<(x791<=x792)));

	if (t91 != 39U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x793 = 1;
	static volatile uint64_t x794 = 485962419607LLU;
	volatile uint64_t t92 = 396179855299LLU;

	t92 = (x793*(x794<<(x795<=x796)));

	if (t92 != 485962419607LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x797 = UINT8_MAX;
	uint32_t x798 = 150U;
	static int8_t x799 = -38;
	int8_t x800 = 0;
	volatile uint32_t t93 = 139516338U;

	t93 = (x797*(x798<<(x799<=x800)));

	if (t93 != 76500U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x801 = INT8_MIN;
	uint16_t x802 = 366U;
	static volatile int16_t x803 = INT16_MIN;
	int8_t x804 = -1;

	t94 = (x801*(x802<<(x803<=x804)));

	if (t94 != -93696) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x805 = 3532U;
	static volatile uint8_t x806 = 27U;
	static int32_t x807 = INT32_MAX;
	volatile int32_t t95 = 0;

	t95 = (x805*(x806<<(x807<=x808)));

	if (t95 != 95364) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x813 = -3;
	volatile uint32_t x814 = 341968564U;
	uint64_t x815 = UINT64_MAX;
	static int64_t x816 = INT64_MIN;
	static volatile uint32_t t96 = 4818U;

	t96 = (x813*(x814<<(x815<=x816)));

	if (t96 != 3269061604U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x817 = 1;
	uint16_t x818 = 6U;
	int8_t x819 = 0;
	static volatile int64_t x820 = INT64_MIN;
	int32_t t97 = -165;

	t97 = (x817*(x818<<(x819<=x820)));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x829 = 0;
	int16_t x830 = INT16_MAX;
	volatile int64_t x831 = 30844LL;
	int32_t t98 = 2071;

	t98 = (x829*(x830<<(x831<=x832)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x849 = 2;
	static uint32_t x850 = UINT32_MAX;
	uint16_t x852 = 4215U;
	volatile uint32_t t99 = 24453U;

	t99 = (x849*(x850<<(x851<=x852)));

	if (t99 != 4294967292U) { NG(); } else { ; }
	
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

