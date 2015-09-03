#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint8_t x7 = 1U;
static int16_t x25 = 2;
volatile uint32_t t3 = 516U;
static int16_t x42 = -1;
static int64_t x43 = -30058LL;
int8_t x54 = INT8_MIN;
volatile int32_t x65 = INT32_MIN;
static int64_t x70 = -290135LL;
uint64_t x71 = 1LLU;
uint64_t x82 = UINT64_MAX;
volatile uint32_t x99 = 15U;
int16_t x101 = INT16_MIN;
uint8_t x107 = 1U;
int8_t x121 = -21;
static int32_t x179 = INT32_MIN;
static int16_t x187 = INT16_MIN;
uint64_t t19 = 3075197911191854LLU;
uint8_t x191 = 6U;
static uint64_t t21 = 70LLU;
uint16_t x218 = UINT16_MAX;
uint64_t t22 = 8720101LLU;
int16_t x244 = -1289;
int64_t x257 = 119140769350LL;
static int64_t x261 = INT64_MIN;
static int8_t x262 = -1;
uint64_t x263 = UINT64_MAX;
static uint64_t t28 = 688571858LLU;
volatile int64_t t32 = -824731875106898289LL;
volatile int8_t x297 = 1;
uint64_t x313 = 1LLU;
int32_t x320 = -70471949;
static int16_t x325 = INT16_MIN;
static int64_t x327 = INT64_MIN;
volatile int8_t x335 = INT8_MIN;
volatile int64_t t37 = 938724576262932LL;
int8_t x354 = INT8_MIN;
volatile int64_t x356 = INT64_MAX;
int8_t x358 = -1;
volatile uint64_t x360 = 251776LLU;
volatile int16_t x370 = -1;
volatile uint16_t x379 = UINT16_MAX;
uint32_t x381 = 33161963U;
static volatile uint16_t x383 = 2U;
uint64_t x385 = 470118LLU;
static int64_t t47 = -2054119819303194860LL;
volatile uint64_t x396 = 3044474147443LLU;
uint16_t x404 = 50U;
int64_t x405 = INT64_MIN;
volatile int32_t x421 = INT32_MIN;
volatile uint16_t x425 = UINT16_MAX;
uint8_t x427 = UINT8_MAX;
int64_t t54 = -3843705389LL;
uint32_t x469 = 4U;
static int64_t x471 = 2166645846183920250LL;
int64_t t57 = -313756257LL;
static uint64_t t58 = 148456LLU;
static int16_t x482 = -28;
uint16_t x489 = 1867U;
int16_t x520 = -15;
static uint32_t x524 = 1529U;
volatile uint64_t t64 = 35649258059800354LLU;
static volatile uint32_t x537 = 128401893U;
int64_t x538 = 527017208577544313LL;
static volatile int8_t x540 = INT8_MIN;
int64_t t65 = 2078161566895946LL;
uint64_t t66 = 26651581569LLU;
static int8_t x572 = INT8_MAX;
uint32_t x582 = 12062U;
int32_t x584 = -1;
int8_t x606 = INT8_MIN;
volatile int8_t x608 = INT8_MAX;
int64_t x613 = -45471154580971070LL;
int32_t x614 = INT32_MIN;
volatile int16_t x621 = -4421;
int64_t t74 = -19884217671189LL;
uint32_t x625 = UINT32_MAX;
uint8_t x639 = 112U;
uint16_t x652 = UINT16_MAX;
int64_t t79 = -78747LL;
uint8_t x675 = UINT8_MAX;
int16_t x694 = -1;
uint32_t x701 = 343174U;
uint32_t x703 = 1586109U;
int16_t x721 = 39;
int64_t x722 = INT64_MIN;
static uint8_t x731 = 26U;
int32_t x734 = 51065830;
uint16_t x735 = UINT16_MAX;
uint16_t x736 = UINT16_MAX;
int8_t x738 = INT8_MIN;
int64_t x739 = INT64_MIN;
uint8_t x745 = UINT8_MAX;
static int16_t x748 = -5;
int16_t x756 = 1734;
uint64_t t90 = 548789059557552744LLU;
int64_t x762 = -646034442089LL;
static int8_t x763 = 3;
int64_t t91 = 39954660LL;
volatile uint64_t t92 = 9623825610LLU;
int16_t x771 = INT16_MAX;
int16_t x775 = -1;
static int64_t t94 = 20921173691LL;
static volatile int32_t t95 = 232;
int64_t x794 = INT64_MIN;
volatile int64_t t96 = -8144859814475253LL;
volatile int8_t x802 = -1;
int16_t x803 = INT16_MAX;
uint32_t x821 = 25472U;
static int8_t x823 = 40;


void f0(void) {
	static uint16_t x1 = 3U;
	uint16_t x3 = 8893U;
	static volatile int32_t x4 = 174696232;
	int32_t t0 = -41348905;

	t0 = (x1/(x2/(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5U;
	int16_t x6 = 3613;
	volatile uint8_t x8 = 97U;
	volatile int32_t t1 = 63;

	t1 = (x5/(x6/(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x26 = UINT64_MAX;
	static int16_t x27 = INT16_MIN;
	int64_t x28 = -1LL;
	uint64_t t2 = 130245260240428370LLU;

	t2 = (x25/(x26/(x27|x28)));

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	int16_t x36 = 12;

	t3 = (x33/(x34/(x35|x36)));

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x41 = UINT16_MAX;
	static uint64_t x44 = 3068567249428225LLU;
	volatile uint64_t t4 = 1592039LLU;

	t4 = (x41/(x42/(x43|x44)));

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x53 = -1LL;
	volatile int32_t x55 = INT32_MAX;
	int8_t x56 = -1;
	volatile int64_t t5 = 17610657255LL;

	t5 = (x53/(x54/(x55|x56)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x66 = INT8_MAX;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	int32_t t6 = -12231;

	t6 = (x65/(x66/(x67|x68)));

	if (t6 != 16909320) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x69 = -1;
	uint32_t x72 = 780662U;
	uint64_t t7 = 0LLU;

	t7 = (x69/(x70/(x71|x72)));

	if (t7 != 780663LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	int64_t x79 = 2LL;
	int16_t x80 = INT16_MAX;
	volatile int64_t t8 = -326593883285LL;

	t8 = (x77/(x78/(x79|x80)));

	if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x81 = 16817638836LLU;
	volatile int8_t x83 = INT8_MIN;
	static uint16_t x84 = 24U;
	volatile uint64_t t9 = 98673200422613LLU;

	t9 = (x81/(x82/(x83|x84)));

	if (t9 != 16817638836LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x97 = -1090373693LL;
	static int8_t x98 = -1;
	int16_t x100 = INT16_MIN;
	volatile int64_t t10 = -815LL;

	t10 = (x97/(x98/(x99|x100)));

	if (t10 != -1090373693LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x102 = 7U;
	int8_t x103 = -1;
	static int8_t x104 = -1;
	volatile int32_t t11 = -13;

	t11 = (x101/(x102/(x103|x104)));

	if (t11 != 4681) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x105 = 26486806LL;
	static int64_t x106 = -1073800140930917400LL;
	int32_t x108 = INT32_MIN;
	volatile int64_t t12 = -118103877808681LL;

	t12 = (x105/(x106/(x107|x108)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x122 = INT64_MIN;
	static uint32_t x123 = UINT32_MAX;
	int8_t x124 = 1;
	int64_t t13 = 962721944LL;

	t13 = (x121/(x122/(x123|x124)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x133 = -1;
	int16_t x134 = -1;
	volatile uint64_t x135 = 1316731684556LLU;
	static volatile int16_t x136 = INT16_MAX;
	uint64_t t14 = 217727201531649LLU;

	t14 = (x133/(x134/(x135|x136)));

	if (t14 != 1316731738522LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = -2912121162937LL;
	int64_t x139 = 1LL;
	int16_t x140 = INT16_MAX;
	int64_t t15 = -1039LL;

	t15 = (x137/(x138/(x139|x140)));

	if (t15 != 24LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x149 = INT8_MIN;
	volatile int32_t x150 = 108406;
	uint8_t x151 = 1U;
	volatile uint8_t x152 = 3U;
	int32_t t16 = -2;

	t16 = (x149/(x150/(x151|x152)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int64_t x158 = INT64_MIN;
	uint32_t x159 = 36768687U;
	uint8_t x160 = UINT8_MAX;
	volatile uint64_t t17 = 1LLU;

	t17 = (x157/(x158/(x159|x160)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x177 = 152U;
	int64_t x178 = INT64_MIN;
	static uint8_t x180 = 0U;
	int64_t t18 = 90248371LL;

	t18 = (x177/(x178/(x179|x180)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x185 = 3U;
	uint64_t x186 = UINT64_MAX;
	static int32_t x188 = INT32_MAX;

	t19 = (x185/(x186/(x187|x188)));

	if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MIN;
	volatile int16_t x192 = INT16_MIN;
	int32_t t20 = 1586;

	t20 = (x189/(x190/(x191|x192)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = 325U;
	int8_t x215 = INT8_MAX;
	uint64_t x216 = 9LLU;

	t21 = (x213/(x214/(x215|x216)));

	if (t21 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x217 = 49143150LLU;
	int8_t x219 = -1;
	volatile uint16_t x220 = 2U;

	t22 = (x217/(x218/(x219|x220)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x229 = 0;
	volatile int32_t x230 = INT32_MIN;
	volatile uint8_t x231 = 14U;
	int8_t x232 = INT8_MIN;
	int32_t t23 = 1433;

	t23 = (x229/(x230/(x231|x232)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x241 = INT8_MAX;
	uint8_t x242 = 3U;
	int16_t x243 = INT16_MAX;
	volatile int32_t t24 = -647004367;

	t24 = (x241/(x242/(x243|x244)));

	if (t24 != -42) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	volatile int8_t x248 = -1;
	int64_t t25 = 189289774674LL;

	t25 = (x245/(x246/(x247|x248)));

	if (t25 != -16777216LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x253 = 1601019LL;
	volatile int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	static uint8_t x256 = 6U;
	volatile int64_t t26 = -528447104364810364LL;

	t26 = (x253/(x254/(x255|x256)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	volatile int8_t x260 = INT8_MIN;
	volatile int64_t t27 = 948LL;

	t27 = (x257/(x258/(x259|x260)));

	if (t27 != 465393630LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x264 = INT64_MIN;

	t28 = (x261/(x262/(x263|x264)));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x269 = INT64_MIN;
	static volatile int64_t x270 = -4036987083660973LL;
	static int16_t x271 = INT16_MIN;
	static int64_t x272 = INT64_MIN;
	volatile int64_t t29 = -5539LL;

	t29 = (x269/(x270/(x271|x272)));

	if (t29 != -74865598LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x285 = INT32_MAX;
	int16_t x286 = INT16_MIN;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	static int32_t t30 = 2471;

	t30 = (x285/(x286/(x287|x288)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x289 = -60437LL;
	static volatile int8_t x290 = -1;
	uint32_t x291 = 1414U;
	int8_t x292 = INT8_MAX;
	int64_t t31 = 6775236888LL;

	t31 = (x289/(x290/(x291|x292)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x293 = -686LL;
	int64_t x294 = -3648716046901LL;
	volatile int16_t x295 = -1;
	int16_t x296 = INT16_MAX;

	t32 = (x293/(x294/(x295|x296)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x298 = -1;
	int32_t x299 = INT32_MIN;
	static int64_t x300 = INT64_MAX;
	volatile int64_t t33 = 4LL;

	t33 = (x297/(x298/(x299|x300)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x314 = UINT64_MAX;
	volatile int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MAX;
	volatile uint64_t t34 = 15993596629LLU;

	t34 = (x313/(x314/(x315|x316)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x317 = UINT16_MAX;
	uint32_t x318 = UINT32_MAX;
	uint32_t x319 = 7015977U;
	volatile uint32_t t35 = 1U;

	t35 = (x317/(x318/(x319|x320)));

	if (t35 != 65535U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x326 = -1;
	static uint64_t x328 = UINT64_MAX;
	uint64_t t36 = 788500159LLU;

	t36 = (x325/(x326/(x327|x328)));

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	int64_t x336 = INT64_MIN;

	t37 = (x333/(x334/(x335|x336)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x337 = INT64_MAX;
	int32_t x338 = -3;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -1LL;
	int64_t t38 = -340LL;

	t38 = (x337/(x338/(x339|x340)));

	if (t38 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x345 = 15295385U;
	int16_t x346 = -15;
	static int32_t x347 = INT32_MAX;
	int8_t x348 = -1;
	volatile uint32_t t39 = 10U;

	t39 = (x345/(x346/(x347|x348)));

	if (t39 != 1019692U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x349 = INT32_MIN;
	static int32_t x350 = INT32_MIN;
	volatile int64_t x351 = -1LL;
	int8_t x352 = 0;
	int64_t t40 = -23203488869LL;

	t40 = (x349/(x350/(x351|x352)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x353 = -1;
	int64_t x355 = INT64_MIN;
	int64_t t41 = 129094526LL;

	t41 = (x353/(x354/(x355|x356)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x357 = UINT8_MAX;
	uint16_t x359 = 16U;
	uint64_t t42 = 199LLU;

	t42 = (x357/(x358/(x359|x360)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x369 = INT32_MIN;
	static int8_t x371 = -2;
	int32_t x372 = INT32_MAX;
	static int32_t t43 = INT32_MIN;

	t43 = (x369/(x370/(x371|x372)));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x377 = 7;
	int32_t x378 = INT32_MAX;
	static int16_t x380 = 347;
	volatile int32_t t44 = -6512349;

	t44 = (x377/(x378/(x379|x380)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x382 = INT16_MIN;
	int16_t x384 = 40;
	volatile uint32_t t45 = 45224578U;

	t45 = (x381/(x382/(x383|x384)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x386 = -343450172994831LL;
	int16_t x387 = INT16_MAX;
	static int64_t x388 = -37032LL;
	volatile uint64_t t46 = 2051769575783683630LLU;

	t46 = (x385/(x386/(x387|x388)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x389 = INT8_MIN;
	static int64_t x390 = INT64_MIN;
	static uint32_t x391 = 24380U;
	uint16_t x392 = UINT16_MAX;

	t47 = (x389/(x390/(x391|x392)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x393 = 2U;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 6U;
	static volatile uint64_t t48 = 482094373LLU;

	t48 = (x393/(x394/(x395|x396)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x401 = 2;
	int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	static int32_t t49 = 9;

	t49 = (x401/(x402/(x403|x404)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x406 = UINT64_MAX;
	static uint16_t x407 = UINT16_MAX;
	static int32_t x408 = INT32_MIN;
	static volatile uint64_t t50 = 19740756LLU;

	t50 = (x405/(x406/(x407|x408)));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x422 = -913199682066584LL;
	int32_t x423 = -1;
	static uint32_t x424 = 18U;
	int64_t t51 = -246234211355123LL;

	t51 = (x421/(x422/(x423|x424)));

	if (t51 != 10100LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x426 = -1;
	uint64_t x428 = 1537766LLU;
	uint64_t t52 = 1050963249379671LLU;

	t52 = (x425/(x426/(x427|x428)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x437 = 1683U;
	int8_t x438 = INT8_MAX;
	uint16_t x439 = UINT16_MAX;
	volatile int32_t x440 = -1;
	volatile int32_t t53 = 1;

	t53 = (x437/(x438/(x439|x440)));

	if (t53 != -13) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x457 = 3764574501329698886LL;
	int32_t x458 = -2011;
	volatile int16_t x459 = -1;
	int8_t x460 = INT8_MIN;

	t54 = (x457/(x458/(x459|x460)));

	if (t54 != 1871991298522973LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x465 = -1;
	static int32_t x466 = 361715;
	int8_t x467 = -1;
	int32_t x468 = INT32_MAX;
	int32_t t55 = -231;

	t55 = (x465/(x466/(x467|x468)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x470 = -8471;
	int16_t x472 = -1;
	static int64_t t56 = 855964099833476LL;

	t56 = (x469/(x470/(x471|x472)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x473 = -1LL;
	int16_t x474 = INT16_MAX;
	volatile uint32_t x475 = 3U;
	int8_t x476 = 0;

	t57 = (x473/(x474/(x475|x476)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x477 = 24U;
	uint64_t x478 = 68920291LLU;
	int32_t x479 = 32658;
	int16_t x480 = INT16_MAX;

	t58 = (x477/(x478/(x479|x480)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x481 = 271791652LL;
	int16_t x483 = INT16_MAX;
	volatile int8_t x484 = INT8_MIN;
	int64_t t59 = -651554459LL;

	t59 = (x481/(x482/(x483|x484)));

	if (t59 != 9706844LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x490 = 1U;
	int16_t x491 = -1;
	int16_t x492 = INT16_MAX;
	volatile int32_t t60 = -25140683;

	t60 = (x489/(x490/(x491|x492)));

	if (t60 != -1867) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x493 = INT64_MIN;
	int16_t x494 = INT16_MIN;
	uint32_t x495 = 51U;
	int32_t x496 = INT32_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (x493/(x494/(x495|x496)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x513 = 477U;
	uint32_t x514 = UINT32_MAX;
	uint32_t x515 = UINT32_MAX;
	int32_t x516 = INT32_MAX;
	volatile uint32_t t62 = 2419U;

	t62 = (x513/(x514/(x515|x516)));

	if (t62 != 477U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x517 = 780U;
	int16_t x518 = INT16_MAX;
	int32_t x519 = INT32_MAX;
	volatile uint32_t t63 = 2069134496U;

	t63 = (x517/(x518/(x519|x520)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x521 = 26697U;
	static int32_t x522 = INT32_MIN;
	volatile uint64_t x523 = 6LLU;

	t64 = (x521/(x522/(x523|x524)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x539 = -88;

	t65 = (x537/(x538/(x539|x540)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x541 = UINT64_MAX;
	static int64_t x542 = 3199250225184845189LL;
	static int16_t x543 = -7884;
	static uint8_t x544 = 26U;

	t66 = (x541/(x542/(x543|x544)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x549 = -7532;
	static volatile int32_t x550 = INT32_MIN;
	int64_t x551 = 315567925284150LL;
	static volatile int32_t x552 = INT32_MIN;
	static volatile int64_t t67 = 1189098606LL;

	t67 = (x549/(x550/(x551|x552)));

	if (t67 != -1883LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x553 = -1LL;
	uint64_t x554 = 578591978768LLU;
	volatile int8_t x555 = 0;
	uint64_t x556 = 479LLU;
	static volatile uint64_t t68 = 4745686334316439LLU;

	t68 = (x553/(x554/(x555|x556)));

	if (t68 != 15271539769LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x565 = -1;
	volatile int32_t x566 = INT32_MIN;
	volatile uint16_t x567 = 181U;
	volatile uint8_t x568 = UINT8_MAX;
	volatile int32_t t69 = -695;

	t69 = (x565/(x566/(x567|x568)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x569 = 6467;
	static int16_t x570 = -1;
	uint64_t x571 = 256837790LLU;
	volatile uint64_t t70 = 7737712LLU;

	t70 = (x569/(x570/(x571|x572)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x581 = -5;
	volatile int64_t x583 = INT64_MIN;
	volatile int64_t t71 = 1672526245605072LL;

	t71 = (x581/(x582/(x583|x584)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x605 = 48713U;
	volatile uint8_t x607 = 1U;
	uint32_t t72 = 1039943U;

	t72 = (x605/(x606/(x607|x608)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x615 = 376U;
	int16_t x616 = 0;
	static volatile int64_t t73 = 346325101LL;

	t73 = (x613/(x614/(x615|x616)));

	if (t73 != 7961483747LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x622 = -54;
	int8_t x623 = -15;
	int64_t x624 = INT64_MIN;

	t74 = (x621/(x622/(x623|x624)));

	if (t74 != -1473LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x626 = -1;
	int16_t x627 = -1;
	uint8_t x628 = 4U;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x625/(x626/(x627|x628)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x633 = INT32_MIN;
	uint32_t x634 = UINT32_MAX;
	uint32_t x635 = 9018420U;
	static int8_t x636 = -1;
	uint32_t t76 = 2460950U;

	t76 = (x633/(x634/(x635|x636)));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x637 = 2754U;
	int8_t x638 = INT8_MIN;
	volatile uint16_t x640 = 7U;
	volatile uint32_t t77 = 6054010U;

	t77 = (x637/(x638/(x639|x640)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x649 = INT32_MAX;
	int64_t x650 = -1LL;
	uint64_t x651 = UINT64_MAX;
	volatile uint64_t t78 = 956304536928LLU;

	t78 = (x649/(x650/(x651|x652)));

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x653 = -3;
	int8_t x654 = -2;
	int16_t x655 = INT16_MAX;
	int64_t x656 = -3LL;

	t79 = (x653/(x654/(x655|x656)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x657 = INT8_MIN;
	static uint8_t x658 = UINT8_MAX;
	volatile int64_t x659 = 20597550130LL;
	int8_t x660 = INT8_MIN;
	volatile int64_t t80 = 50LL;

	t80 = (x657/(x658/(x659|x660)));

	if (t80 != 42LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x673 = 697U;
	volatile int16_t x674 = 5891;
	uint64_t x676 = 0LLU;
	uint64_t t81 = 405LLU;

	t81 = (x673/(x674/(x675|x676)));

	if (t81 != 30LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x677 = UINT32_MAX;
	volatile int64_t x678 = 5748384106036LL;
	int64_t x679 = -13950LL;
	uint16_t x680 = 60U;
	int64_t t82 = 2794303085059132LL;

	t82 = (x677/(x678/(x679|x680)));

	if (t82 != -10LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x693 = 824808LL;
	uint32_t x695 = UINT32_MAX;
	volatile uint32_t x696 = 261144U;
	static volatile int64_t t83 = -363666198348460LL;

	t83 = (x693/(x694/(x695|x696)));

	if (t83 != 824808LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x702 = -1;
	int16_t x704 = 1;
	uint32_t t84 = 923689542U;

	t84 = (x701/(x702/(x703|x704)));

	if (t84 != 126U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x723 = 92U;
	static int16_t x724 = INT16_MIN;
	volatile int64_t t85 = -71181LL;

	t85 = (x721/(x722/(x723|x724)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x729 = INT32_MAX;
	static int32_t x730 = 139902961;
	int64_t x732 = 220LL;
	volatile int64_t t86 = 3540539197516062112LL;

	t86 = (x729/(x730/(x731|x732)));

	if (t86 != 3407LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x733 = INT32_MIN;
	int32_t t87 = 5874095;

	t87 = (x733/(x734/(x735|x736)));

	if (t87 != -2756718) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x737 = INT32_MIN;
	int8_t x740 = -1;
	static int64_t t88 = 7648LL;

	t88 = (x737/(x738/(x739|x740)));

	if (t88 != -16777216LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x746 = INT32_MIN;
	volatile int32_t x747 = INT32_MIN;
	int32_t t89 = 7;

	t89 = (x745/(x746/(x747|x748)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x753 = UINT64_MAX;
	volatile uint64_t x754 = 24025486004442LLU;
	static uint16_t x755 = UINT16_MAX;

	t90 = (x753/(x754/(x755|x756)));

	if (t90 != 50317707317LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x761 = -13578;
	volatile int32_t x764 = INT32_MIN;

	t91 = (x761/(x762/(x763|x764)));

	if (t91 != -45LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x765 = UINT64_MAX;
	int16_t x766 = INT16_MIN;
	uint16_t x767 = 2U;
	static uint32_t x768 = 2514073U;

	t92 = (x765/(x766/(x767|x768)));

	if (t92 != 10800201448307700LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x769 = UINT32_MAX;
	int32_t x770 = -472434345;
	uint64_t x772 = 62904990142129LLU;
	uint64_t t93 = 4319086897989781694LLU;

	t93 = (x769/(x770/(x771|x772)));

	if (t93 != 14646LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x773 = 3LL;
	int8_t x774 = -12;
	static int8_t x776 = -4;

	t94 = (x773/(x774/(x775|x776)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x785 = -1;
	int8_t x786 = INT8_MIN;
	static int16_t x787 = -1;
	int16_t x788 = INT16_MIN;

	t95 = (x785/(x786/(x787|x788)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x793 = UINT8_MAX;
	static int64_t x795 = INT64_MIN;
	int16_t x796 = INT16_MAX;

	t96 = (x793/(x794/(x795|x796)));

	if (t96 != 255LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x801 = INT64_MIN;
	static uint32_t x804 = UINT32_MAX;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x801/(x802/(x803|x804)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x813 = -1627816;
	static uint32_t x814 = 4773932U;
	int64_t x815 = -1LL;
	uint32_t x816 = UINT32_MAX;
	int64_t t98 = 1082459741LL;

	t98 = (x813/(x814/(x815|x816)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x822 = INT8_MAX;
	uint64_t x824 = 2LLU;
	static uint64_t t99 = 2LLU;

	t99 = (x821/(x822/(x823|x824)));

	if (t99 != 8490LLU) { NG(); } else { ; }
	
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

