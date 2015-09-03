#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = UINT8_MAX;
int32_t x10 = INT32_MIN;
uint8_t x16 = 112U;
static volatile int16_t x31 = -1;
volatile int32_t x32 = INT32_MAX;
int32_t t4 = 3943;
volatile int64_t t5 = 38643511112LL;
int8_t x42 = 1;
int8_t x47 = 12;
int16_t x56 = INT16_MAX;
static uint64_t x74 = UINT64_MAX;
int32_t x81 = INT32_MAX;
static int16_t x96 = -1;
uint32_t x123 = 3017U;
static volatile uint32_t t17 = 133U;
int64_t x129 = INT64_MIN;
int8_t x139 = INT8_MAX;
int64_t x140 = -1LL;
uint64_t x141 = 1408564399LLU;
int64_t x166 = INT64_MIN;
static volatile int32_t x167 = -73466588;
int32_t x168 = INT32_MIN;
uint32_t x180 = 11652U;
int32_t x182 = 496599217;
uint32_t x186 = UINT32_MAX;
uint32_t x187 = UINT32_MAX;
int16_t x203 = INT16_MAX;
volatile uint64_t x208 = 61884980841650LLU;
static volatile uint64_t t27 = 1523LLU;
volatile uint64_t t29 = 1235694748946LLU;
int64_t x242 = INT64_MIN;
int64_t t33 = -189748LL;
static int64_t t34 = 1606579149355659900LL;
int64_t t35 = 0LL;
uint8_t x261 = 32U;
int32_t x262 = 31;
int8_t x271 = 1;
int16_t x272 = -1;
uint16_t x276 = 117U;
int8_t x282 = INT8_MIN;
volatile int64_t t39 = 1621LL;
uint64_t t41 = 13221036404LLU;
static uint16_t x313 = UINT16_MAX;
int64_t x314 = -1LL;
int8_t x321 = INT8_MIN;
int8_t x322 = INT8_MAX;
int64_t x323 = -1LL;
static int16_t x333 = INT16_MAX;
int64_t x336 = 2478747211893LL;
volatile int64_t t46 = -133LL;
static uint64_t x345 = UINT64_MAX;
static uint64_t x347 = 40104424664457LLU;
uint16_t x353 = 3517U;
static int8_t x366 = -1;
volatile uint64_t x403 = 385504087LLU;
uint64_t t51 = 4607LLU;
uint8_t x405 = UINT8_MAX;
int32_t t60 = 121222;
volatile int64_t t61 = 548338582160LL;
static int64_t x494 = 742253421059388653LL;
int64_t x496 = INT64_MAX;
volatile int32_t t67 = -1536302;
int8_t x559 = 1;
static int16_t x605 = -5;
uint8_t x611 = 105U;
uint8_t x621 = 21U;
uint64_t x623 = 3663LLU;
int32_t x657 = 71;
int16_t x659 = INT16_MIN;
static int64_t t79 = -2060761LL;
int64_t x699 = -35305698LL;
static int32_t x703 = 4491518;
int32_t x707 = 16;
uint16_t x708 = 10U;
int8_t x709 = 32;
volatile int8_t x710 = INT8_MIN;
static uint64_t x711 = 16261493LLU;
volatile uint64_t t85 = 142820377804LLU;
uint32_t x765 = 52110U;
volatile int64_t x768 = 89571991678LL;
static volatile uint64_t t91 = 1927099007LLU;
volatile int8_t x792 = -1;
volatile int32_t t93 = -960960;
uint32_t x797 = 6U;
int32_t x815 = 19549;
int64_t x816 = 20506835LL;
static volatile int8_t x817 = INT8_MIN;
int64_t t96 = -26541210213720045LL;
int32_t x829 = INT32_MAX;
volatile int64_t t99 = 14772726927LL;


void f0(void) {
	static int16_t x1 = 84;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 2;

	t0 = ((x1/(x2/x3))&x4);

	if (t0 != 84) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int32_t x11 = -169;
	int64_t x12 = 5491LL;
	static volatile int64_t t1 = -7482696232874LL;

	t1 = ((x9/(x10/x11))&x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	uint64_t x15 = 2052LLU;
	uint64_t t2 = 56377640332490243LLU;

	t2 = ((x13/(x14/x15))&x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = 5035286;
	uint16_t x23 = 1U;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t3 = -3;

	t3 = ((x21/(x22/x23))&x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -5;
	int16_t x30 = INT16_MAX;

	t4 = ((x29/(x30/x31))&x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = 48;
	static volatile int32_t x38 = 180;
	int64_t x39 = -1LL;
	uint16_t x40 = UINT16_MAX;

	t5 = ((x37/(x38/x39))&x40);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = 7U;
	int8_t x43 = -1;
	int8_t x44 = INT8_MAX;
	volatile int32_t t6 = -3918352;

	t6 = ((x41/(x42/x43))&x44);

	if (t6 != 121) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MIN;
	static int8_t x46 = -28;
	uint32_t x48 = 3691149U;
	uint32_t t7 = 3901533U;

	t7 = ((x45/(x46/x47))&x48);

	if (t7 != 16384U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x49 = INT64_MAX;
	int16_t x50 = 466;
	int8_t x51 = INT8_MAX;
	int64_t x52 = INT64_MIN;
	volatile int64_t t8 = -8291449LL;

	t8 = ((x49/(x50/x51))&x52);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -3355845419830LL;
	int64_t x54 = -1LL;
	int32_t x55 = -1;
	volatile int64_t t9 = 1772539028LL;

	t9 = ((x53/(x54/x55))&x56);

	if (t9 != 7370LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x73 = 0;
	volatile int8_t x75 = INT8_MIN;
	int8_t x76 = -1;
	uint64_t t10 = 230500556286449LLU;

	t10 = ((x73/(x74/x75))&x76);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	int16_t x84 = -1;
	volatile int32_t t11 = -291618;

	t11 = ((x81/(x82/x83))&x84);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 2461345232334LLU;
	int8_t x87 = INT8_MAX;
	int64_t x88 = 1939104763283LL;
	volatile uint64_t t12 = 14964868665LLU;

	t12 = ((x85/(x86/x87))&x88);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x93 = UINT16_MAX;
	uint32_t x94 = 1745759U;
	volatile int8_t x95 = 54;
	static volatile uint32_t t13 = 32592U;

	t13 = ((x93/(x94/x95))&x96);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x97 = 3170180U;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = 31;
	static uint16_t x100 = 3U;
	volatile uint64_t t14 = 2989986LLU;

	t14 = ((x97/(x98/x99))&x100);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x113 = 6U;
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 2U;
	volatile uint32_t x116 = 705U;
	volatile uint32_t t15 = 4U;

	t15 = ((x113/(x114/x115))&x116);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x118 = 2670593773425896341LL;
	static int16_t x119 = -1;
	volatile uint16_t x120 = 2U;
	int64_t t16 = 11272338636LL;

	t16 = ((x117/(x118/x119))&x120);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x121 = INT32_MAX;
	int16_t x122 = -1;
	uint32_t x124 = UINT32_MAX;

	t17 = ((x121/(x122/x123))&x124);

	if (t17 != 1508U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x130 = -3170;
	int32_t x131 = -1;
	int32_t x132 = -64432;
	int64_t t18 = -1464141201LL;

	t18 = ((x129/(x130/x131))&x132);

	if (t18 != -2909581084195824LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x133 = 320450118302059399LL;
	uint32_t x134 = 150927U;
	uint16_t x135 = 17U;
	uint64_t x136 = 16498187925LLU;
	uint64_t t19 = 38LLU;

	t19 = ((x133/(x134/x135))&x136);

	if (t19 != 16447570965LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x137 = INT64_MIN;
	static int64_t x138 = INT64_MIN;
	volatile int64_t t20 = -180LL;

	t20 = ((x137/(x138/x139))&x140);

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x142 = -1;
	volatile uint64_t x143 = 4352111802662312144LLU;
	static int16_t x144 = INT16_MAX;
	uint64_t t21 = 609386133LLU;

	t21 = ((x141/(x142/x143))&x144);

	if (t21 != 16171LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = 1830570162U;
	int64_t t22 = -4969959427466859LL;

	t22 = ((x165/(x166/x167))&x168);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x177 = INT16_MIN;
	volatile int32_t x178 = -1;
	volatile uint32_t x179 = 758298U;
	uint32_t t23 = 628438601U;

	t23 = ((x177/(x178/x179))&x180);

	if (t23 != 132U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x181 = 1323048961LL;
	uint32_t x183 = 29U;
	int64_t x184 = INT64_MAX;
	volatile int64_t t24 = -13LL;

	t24 = ((x181/(x182/x183))&x184);

	if (t24 != 77LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x185 = 586261502586696LL;
	static uint64_t x188 = 458489804001952LLU;
	uint64_t t25 = 19013492LLU;

	t25 = ((x185/(x186/x187))&x188);

	if (t25 != 215293755904LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MAX;
	static volatile int64_t x204 = -1LL;
	static volatile int64_t t26 = 629857531743LL;

	t26 = ((x201/(x202/x203))&x204);

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x205 = -1LL;
	uint64_t x206 = UINT64_MAX;
	int8_t x207 = INT8_MAX;

	t27 = ((x205/(x206/x207))&x208);

	if (t27 != 50LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x217 = 29987LLU;
	static volatile int16_t x218 = -50;
	uint8_t x219 = 24U;
	int32_t x220 = INT32_MIN;
	static volatile uint64_t t28 = 20338555863LLU;

	t28 = ((x217/(x218/x219))&x220);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x221 = INT16_MAX;
	volatile uint64_t x222 = UINT64_MAX;
	volatile uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 56U;

	t29 = ((x221/(x222/x223))&x224);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x225 = -48;
	static int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	volatile int64_t x228 = INT64_MAX;
	volatile int64_t t30 = 57792174LL;

	t30 = ((x225/(x226/x227))&x228);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x233 = INT64_MIN;
	static volatile uint64_t x234 = UINT64_MAX;
	volatile uint8_t x235 = UINT8_MAX;
	int32_t x236 = -1;
	volatile uint64_t t31 = 2763992942LLU;

	t31 = ((x233/(x234/x235))&x236);

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MIN;
	static uint32_t x239 = 44162U;
	int16_t x240 = INT16_MIN;
	volatile uint32_t t32 = 34028742U;

	t32 = ((x237/(x238/x239))&x240);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x241 = -4;
	uint8_t x243 = 7U;
	int32_t x244 = INT32_MAX;

	t33 = ((x241/(x242/x243))&x244);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x245 = INT16_MIN;
	static int64_t x246 = 15LL;
	volatile uint8_t x247 = 2U;
	int16_t x248 = INT16_MIN;

	t34 = ((x245/(x246/x247))&x248);

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MIN;
	uint8_t x255 = UINT8_MAX;
	static volatile int32_t x256 = -1;

	t35 = ((x253/(x254/x255))&x256);

	if (t35 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x263 = -8LL;
	int8_t x264 = INT8_MIN;
	volatile int64_t t36 = 6188618694839194LL;

	t36 = ((x261/(x262/x263))&x264);

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x269 = 0U;
	int8_t x270 = 32;
	static uint32_t t37 = 3556U;

	t37 = ((x269/(x270/x271))&x272);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x273 = 1;
	int64_t x274 = INT64_MAX;
	static int32_t x275 = -1;
	volatile int64_t t38 = 103954374159401LL;

	t38 = ((x273/(x274/x275))&x276);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x281 = 4U;
	volatile int8_t x283 = INT8_MIN;
	volatile int64_t x284 = -53723761LL;

	t39 = ((x281/(x282/x283))&x284);

	if (t39 != 4LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x285 = INT32_MAX;
	int64_t x286 = INT64_MIN;
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 57984U;
	volatile int64_t t40 = 25489924979667LL;

	t40 = ((x285/(x286/x287))&x288);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x289 = 972LLU;
	int32_t x290 = 569681;
	uint8_t x291 = 59U;
	int16_t x292 = INT16_MAX;

	t41 = ((x289/(x290/x291))&x292);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x305 = UINT8_MAX;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t42 = -1202931180737LL;

	t42 = ((x305/(x306/x307))&x308);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x315 = 50853LLU;
	static int16_t x316 = 3;
	volatile uint64_t t43 = 1362667399936827048LLU;

	t43 = ((x313/(x314/x315))&x316);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x324 = INT8_MIN;
	int64_t t44 = -3239349204LL;

	t44 = ((x321/(x322/x323))&x324);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x329 = INT32_MIN;
	volatile int32_t x330 = INT32_MIN;
	static uint32_t x331 = 210U;
	uint8_t x332 = UINT8_MAX;
	static volatile uint32_t t45 = 21281U;

	t45 = ((x329/(x330/x331))&x332);

	if (t45 != 210U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x334 = 27875U;
	int8_t x335 = INT8_MIN;

	t46 = ((x333/(x334/x335))&x336);

	if (t46 != 2478747211873LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x346 = INT8_MIN;
	static int8_t x348 = -19;
	volatile uint64_t t47 = 36051104653289LLU;

	t47 = ((x345/(x346/x347))&x348);

	if (t47 != 40104494613096LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 45031U;
	volatile uint32_t t48 = 5391429U;

	t48 = ((x353/(x354/x355))&x356);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x365 = -1LL;
	uint32_t x367 = 52871U;
	int16_t x368 = -1;
	int64_t t49 = -16LL;

	t49 = ((x365/(x366/x367))&x368);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x381 = UINT32_MAX;
	static uint16_t x382 = 3605U;
	int8_t x383 = INT8_MIN;
	static int64_t x384 = -292740811066351988LL;
	static volatile int64_t t50 = 191LL;

	t50 = ((x381/(x382/x383))&x384);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x401 = INT16_MIN;
	static int16_t x402 = -29;
	uint64_t x404 = 2844652207249745LLU;

	t51 = ((x401/(x402/x403))&x404);

	if (t51 != 340922705LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MAX;
	static int16_t x408 = INT16_MIN;
	uint64_t t52 = 8303278179LLU;

	t52 = ((x405/(x406/x407))&x408);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x409 = UINT64_MAX;
	uint64_t x410 = 14669108268158476LLU;
	uint16_t x411 = UINT16_MAX;
	uint8_t x412 = UINT8_MAX;
	static uint64_t t53 = 955106LLU;

	t53 = ((x409/(x410/x411))&x412);

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x417 = -30113917;
	uint8_t x418 = UINT8_MAX;
	static uint32_t x419 = 22U;
	volatile int16_t x420 = INT16_MAX;
	volatile uint32_t t54 = 7U;

	t54 = ((x417/(x418/x419))&x420);

	if (t54 != 2967U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x425 = -331686LL;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;
	static volatile int64_t t55 = 525LL;

	t55 = ((x425/(x426/x427))&x428);

	if (t55 != 90LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x429 = INT32_MIN;
	int32_t x430 = -112492717;
	volatile uint32_t x431 = 3U;
	volatile uint8_t x432 = 14U;
	static volatile uint32_t t56 = 87186U;

	t56 = ((x429/(x430/x431))&x432);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x433 = -1;
	int32_t x434 = INT32_MIN;
	volatile uint16_t x435 = UINT16_MAX;
	int16_t x436 = -1;
	int32_t t57 = 623666290;

	t57 = ((x433/(x434/x435))&x436);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x437 = 8U;
	volatile uint16_t x438 = 5520U;
	int8_t x439 = -31;
	static int64_t x440 = INT64_MAX;
	static int64_t t58 = -9364282575351003LL;

	t58 = ((x437/(x438/x439))&x440);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x453 = INT64_MIN;
	static int8_t x454 = INT8_MIN;
	int8_t x455 = 1;
	static int64_t x456 = -61520599707203250LL;
	volatile int64_t t59 = 69090651574653LL;

	t59 = ((x453/(x454/x455))&x456);

	if (t59 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x465 = INT32_MAX;
	uint8_t x466 = 100U;
	int32_t x467 = 30;
	int32_t x468 = INT32_MIN;

	t60 = ((x465/(x466/x467))&x468);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x481 = INT64_MIN;
	static int32_t x482 = INT32_MIN;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MAX;

	t61 = ((x481/(x482/x483))&x484);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x493 = INT32_MIN;
	volatile uint32_t x495 = 391641U;
	int64_t t62 = -216263280LL;

	t62 = ((x493/(x494/x495))&x496);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x501 = INT64_MIN;
	volatile int64_t x502 = 98643739LL;
	int16_t x503 = 30;
	uint16_t x504 = 7969U;
	volatile int64_t t63 = 30636840LL;

	t63 = ((x501/(x502/x503))&x504);

	if (t63 != 3617LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x521 = UINT16_MAX;
	static volatile int32_t x522 = INT32_MIN;
	static volatile int16_t x523 = INT16_MIN;
	int16_t x524 = -1;
	int32_t t64 = 1;

	t64 = ((x521/(x522/x523))&x524);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x529 = INT8_MIN;
	volatile uint16_t x530 = 34U;
	int8_t x531 = -1;
	int16_t x532 = INT16_MAX;
	volatile int32_t t65 = -2658936;

	t65 = ((x529/(x530/x531))&x532);

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x541 = INT64_MIN;
	uint16_t x542 = 14064U;
	int16_t x543 = -1;
	static uint32_t x544 = UINT32_MAX;
	volatile int64_t t66 = -1933500073018LL;

	t66 = ((x541/(x542/x543))&x544);

	if (t66 != 2838880544LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x549 = 3;
	int32_t x550 = 3942434;
	int8_t x551 = -3;
	int8_t x552 = INT8_MIN;

	t67 = ((x549/(x550/x551))&x552);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x557 = INT16_MIN;
	int64_t x558 = 363245417678LL;
	int32_t x560 = INT32_MAX;
	int64_t t68 = -123223LL;

	t68 = ((x557/(x558/x559))&x560);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x569 = 68177U;
	int16_t x570 = INT16_MIN;
	uint16_t x571 = 15673U;
	int16_t x572 = INT16_MIN;
	uint32_t t69 = 474180U;

	t69 = ((x569/(x570/x571))&x572);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x573 = INT8_MIN;
	int64_t x574 = INT64_MIN;
	static uint32_t x575 = UINT32_MAX;
	static uint32_t x576 = UINT32_MAX;
	int64_t t70 = 98524722747994985LL;

	t70 = ((x573/(x574/x575))&x576);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x606 = INT16_MIN;
	int8_t x607 = INT8_MAX;
	volatile int32_t x608 = INT32_MIN;
	int32_t t71 = -258;

	t71 = ((x605/(x606/x607))&x608);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x609 = INT32_MAX;
	uint32_t x610 = UINT32_MAX;
	int32_t x612 = -1;
	uint32_t t72 = 54983923U;

	t72 = ((x609/(x610/x611))&x612);

	if (t72 != 52U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x617 = INT8_MIN;
	int8_t x618 = INT8_MIN;
	int64_t x619 = -1LL;
	uint16_t x620 = 60U;
	static int64_t t73 = 307287532182644LL;

	t73 = ((x617/(x618/x619))&x620);

	if (t73 != 60LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x622 = -2LL;
	volatile int8_t x624 = INT8_MIN;
	volatile uint64_t t74 = 12736887LLU;

	t74 = ((x621/(x622/x623))&x624);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x633 = 108U;
	static uint32_t x634 = 21717U;
	int64_t x635 = -452LL;
	static int8_t x636 = INT8_MIN;
	volatile int64_t t75 = -140722412984937LL;

	t75 = ((x633/(x634/x635))&x636);

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x637 = 1U;
	static int32_t x638 = INT32_MAX;
	volatile int64_t x639 = 1LL;
	int64_t x640 = INT64_MIN;
	int64_t t76 = -539LL;

	t76 = ((x637/(x638/x639))&x640);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x649 = INT32_MAX;
	int64_t x650 = INT64_MAX;
	volatile uint8_t x651 = 10U;
	int64_t x652 = -1LL;
	int64_t t77 = -54542LL;

	t77 = ((x649/(x650/x651))&x652);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x658 = 45222;
	uint64_t x660 = 1171156723LLU;
	volatile uint64_t t78 = 601320916LLU;

	t78 = ((x657/(x658/x659))&x660);

	if (t78 != 1171156657LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x681 = -1;
	int32_t x682 = INT32_MIN;
	int64_t x683 = 3073LL;
	int32_t x684 = INT32_MAX;

	t79 = ((x681/(x682/x683))&x684);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x685 = INT32_MIN;
	static int32_t x686 = INT32_MIN;
	static uint8_t x687 = UINT8_MAX;
	volatile int16_t x688 = INT16_MIN;
	int32_t t80 = 1994562;

	t80 = ((x685/(x686/x687))&x688);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x693 = UINT16_MAX;
	int32_t x694 = 694100577;
	uint8_t x695 = 6U;
	uint64_t x696 = 4800691333365LLU;
	volatile uint64_t t81 = 5247321146241408262LLU;

	t81 = ((x693/(x694/x695))&x696);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x697 = INT64_MAX;
	int32_t x698 = INT32_MAX;
	int32_t x700 = -24044;
	volatile int64_t t82 = 4LL;

	t82 = ((x697/(x698/x699))&x700);

	if (t82 != -153722867280936940LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x701 = INT16_MAX;
	uint32_t x702 = UINT32_MAX;
	uint16_t x704 = UINT16_MAX;
	uint32_t t83 = 385361393U;

	t83 = ((x701/(x702/x703))&x704);

	if (t83 != 34U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x705 = 12;
	int16_t x706 = INT16_MAX;
	volatile int32_t t84 = 2253351;

	t84 = ((x705/(x706/x707))&x708);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x712 = 6U;

	t85 = ((x709/(x710/x711))&x712);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x725 = UINT16_MAX;
	int32_t x726 = INT32_MIN;
	uint16_t x727 = 9209U;
	int8_t x728 = -1;
	int32_t t86 = -1;

	t86 = ((x725/(x726/x727))&x728);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x733 = INT8_MIN;
	static uint64_t x734 = 46243LLU;
	uint16_t x735 = 1U;
	int8_t x736 = INT8_MAX;
	uint64_t t87 = 50304287869LLU;

	t87 = ((x733/(x734/x735))&x736);

	if (t87 != 13LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x737 = -23231631LL;
	int64_t x738 = -120821761LL;
	static int8_t x739 = -1;
	int64_t x740 = INT64_MAX;
	volatile int64_t t88 = 385455454583643LL;

	t88 = ((x737/(x738/x739))&x740);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x753 = UINT16_MAX;
	int8_t x754 = 1;
	static volatile int64_t x755 = -1LL;
	int16_t x756 = INT16_MIN;
	static int64_t t89 = 7900018523418LL;

	t89 = ((x753/(x754/x755))&x756);

	if (t89 != -65536LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x766 = UINT16_MAX;
	volatile int16_t x767 = -12749;
	static int64_t t90 = -5423949345046589LL;

	t90 = ((x765/(x766/x767))&x768);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x773 = 2;
	volatile uint32_t x774 = UINT32_MAX;
	uint32_t x775 = 30694506U;
	uint64_t x776 = 826017641976138567LLU;

	t91 = ((x773/(x774/x775))&x776);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x781 = INT16_MIN;
	static int32_t x782 = INT32_MAX;
	uint8_t x783 = 45U;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t92 = -452;

	t92 = ((x781/(x782/x783))&x784);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x789 = 1584441;
	int32_t x790 = 96242;
	volatile uint8_t x791 = 3U;

	t93 = ((x789/(x790/x791))&x792);

	if (t93 != 49) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x798 = INT32_MIN;
	volatile uint32_t x799 = 260516U;
	uint64_t x800 = 334365969323158097LLU;
	volatile uint64_t t94 = 5681567366126796319LLU;

	t94 = ((x797/(x798/x799))&x800);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x813 = INT32_MIN;
	int32_t x814 = -228937440;
	volatile int64_t t95 = -494LL;

	t95 = ((x813/(x814/x815))&x816);

	if (t95 != 51280LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x818 = -12109479133LL;
	uint16_t x819 = UINT16_MAX;
	uint8_t x820 = 2U;

	t96 = ((x817/(x818/x819))&x820);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x821 = 59099882961536969LL;
	int64_t x822 = INT64_MIN;
	uint32_t x823 = UINT32_MAX;
	uint16_t x824 = 1U;
	int64_t t97 = 1098742232967857973LL;

	t97 = ((x821/(x822/x823))&x824);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x825 = -35;
	int16_t x826 = INT16_MIN;
	int8_t x827 = -44;
	uint8_t x828 = 6U;
	volatile int32_t t98 = -34;

	t98 = ((x825/(x826/x827))&x828);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x830 = UINT32_MAX;
	static int64_t x831 = -1LL;
	static int64_t x832 = INT64_MIN;

	t99 = ((x829/(x830/x831))&x832);

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

