#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 127469979951LLU;
int8_t x8 = -1;
static uint32_t x9 = 0U;
static volatile uint8_t x12 = 25U;
static int16_t x21 = -1;
int64_t t4 = 115LL;
static int16_t x49 = 2160;
volatile uint8_t x51 = UINT8_MAX;
int32_t x54 = -1700;
uint8_t x57 = 0U;
uint16_t x58 = UINT16_MAX;
int64_t x65 = -315448282LL;
static int64_t t10 = 3900380774385547677LL;
int8_t x74 = -4;
uint64_t x80 = 4660LLU;
uint64_t t13 = 7LLU;
uint32_t x100 = UINT32_MAX;
int8_t x101 = -1;
static volatile uint8_t x120 = 4U;
volatile int32_t x152 = -1;
volatile int32_t x153 = INT32_MIN;
int8_t x154 = INT8_MIN;
int32_t x157 = -1;
uint32_t x159 = UINT32_MAX;
uint16_t x165 = 0U;
int16_t x169 = -1898;
uint32_t x171 = UINT32_MAX;
volatile uint32_t t26 = 635035U;
int8_t x189 = INT8_MIN;
int16_t x196 = -1;
int64_t x209 = -1LL;
static uint32_t x210 = 539050769U;
int16_t x215 = -8;
int16_t x219 = 547;
uint32_t x225 = 124388134U;
int32_t x229 = INT32_MAX;
uint64_t x235 = UINT64_MAX;
uint8_t x247 = UINT8_MAX;
static uint16_t x248 = UINT16_MAX;
int32_t t40 = -12;
uint8_t x249 = UINT8_MAX;
static uint32_t x252 = 3837U;
static int32_t x254 = INT32_MAX;
uint64_t x255 = 221139793LLU;
uint16_t x261 = UINT16_MAX;
int16_t x268 = INT16_MAX;
static int32_t x284 = INT32_MAX;
volatile int8_t x294 = -1;
static int8_t x300 = INT8_MAX;
uint64_t x312 = 1657622264336701LLU;
uint16_t x314 = 367U;
int32_t x316 = -1;
int32_t t54 = 0;
int8_t x325 = -4;
uint32_t x327 = UINT32_MAX;
uint32_t t56 = 7871U;
int16_t x332 = -1;
int64_t x334 = INT64_MIN;
int64_t t58 = 1016576095376078846LL;
volatile int32_t t60 = 2;
uint64_t x351 = 35736498399709058LLU;
uint16_t x352 = 485U;
volatile uint64_t t61 = 2066040858474301LLU;
int64_t x361 = 28289208LL;
int32_t x366 = -1;
volatile int64_t t65 = -838200LL;
int64_t x381 = INT64_MIN;
int8_t x394 = INT8_MIN;
volatile uint64_t t69 = 90384031244LLU;
static uint32_t x444 = UINT32_MAX;
static int16_t x450 = INT16_MIN;
static int64_t x451 = 4942895LL;
static uint64_t x453 = 1204LLU;
static uint64_t t79 = 0LLU;
int64_t x460 = -1LL;
int8_t x471 = 4;
static volatile uint32_t t83 = 119U;
static int64_t x490 = INT64_MIN;
volatile uint64_t t86 = 37979648LLU;
uint8_t x516 = 3U;
volatile uint32_t t88 = UINT32_MAX;
uint32_t t89 = 22441U;
volatile uint16_t x533 = 7U;
uint32_t t91 = 40785286U;
static int16_t x540 = INT16_MIN;
int32_t x541 = -1;
uint64_t x542 = 536461176510LLU;
uint16_t x550 = 3947U;
int16_t x554 = INT16_MIN;
int64_t t96 = 92642LL;
static uint16_t x573 = 215U;
volatile int32_t t98 = 51710607;
static volatile int16_t x579 = -1;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = 22;
	uint64_t x4 = 34728429LLU;
	uint64_t t0 = 147259935454794LLU;

	t0 = (x1^(x2%(x3*x4)));

	if (t0 != 127532070150LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -17LL;
	uint16_t x6 = 94U;
	uint64_t x7 = UINT64_MAX;
	volatile uint64_t t1 = 1005636547LLU;

	t1 = (x5^(x6%(x7*x8)));

	if (t1 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = 404;
	volatile int32_t x11 = 7463673;
	volatile uint32_t t2 = 992231U;

	t2 = (x9^(x10%(x11*x12)));

	if (t2 != 404U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = INT16_MIN;
	static uint16_t x23 = 71U;
	static int8_t x24 = 10;
	int32_t t3 = 572496;

	t3 = (x21^(x22%(x23*x24)));

	if (t3 != 107) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -20;
	int64_t x26 = -93558123711LL;
	int8_t x27 = INT8_MAX;
	int32_t x28 = -1;

	t4 = (x25^(x26%(x27*x28)));

	if (t4 != 42LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MAX;
	uint16_t x42 = 1895U;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile int64_t t5 = 3559286813983LL;

	t5 = (x41^(x42%(x43*x44)));

	if (t5 != 9223372036854773912LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x50 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t6 = -29;

	t6 = (x49^(x50%(x51*x52)));

	if (t6 != -34959) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = 8;
	int8_t x55 = INT8_MIN;
	int16_t x56 = 14;
	volatile int32_t t7 = -15995;

	t7 = (x53^(x54%(x55*x56)));

	if (t7 != -1708) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x59 = 29U;
	uint16_t x60 = 14U;
	int32_t t8 = 24205512;

	t8 = (x57^(x58%(x59*x60)));

	if (t8 != 169) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x61 = INT16_MIN;
	uint8_t x62 = 99U;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	volatile int64_t t9 = 116380413LL;

	t9 = (x61^(x62%(x63*x64)));

	if (t9 != -32669LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x66 = INT8_MIN;
	static volatile int16_t x67 = INT16_MIN;
	static volatile int8_t x68 = INT8_MIN;

	t10 = (x65^(x66%(x67*x68)));

	if (t10 != 315448230LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x69 = -1;
	static volatile uint8_t x70 = 9U;
	int64_t x71 = -463907LL;
	int8_t x72 = INT8_MIN;
	volatile int64_t t11 = 1291959LL;

	t11 = (x69^(x70%(x71*x72)));

	if (t11 != -10LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = 1;
	uint32_t x75 = 207065U;
	int16_t x76 = -163;
	uint32_t t12 = 581578U;

	t12 = (x73^(x74%(x75*x76)));

	if (t12 != 33751590U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x77 = INT64_MAX;
	static volatile uint8_t x78 = 4U;
	int8_t x79 = INT8_MIN;

	t13 = (x77^(x78%(x79*x80)));

	if (t13 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x85 = -21;
	int32_t x86 = INT32_MIN;
	volatile int8_t x87 = 1;
	int8_t x88 = INT8_MIN;
	volatile int32_t t14 = 16226125;

	t14 = (x85^(x86%(x87*x88)));

	if (t14 != -21) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	int32_t x98 = 723833796;
	int8_t x99 = INT8_MIN;
	uint32_t t15 = 147774202U;

	t15 = (x97^(x98%(x99*x100)));

	if (t15 != 187U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = INT16_MAX;
	uint8_t x103 = 2U;
	static int8_t x104 = INT8_MIN;
	static int32_t t16 = 489;

	t16 = (x101^(x102%(x103*x104)));

	if (t16 != -256) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = UINT8_MAX;
	static uint32_t x106 = 82U;
	static uint64_t x107 = 5676048090LLU;
	volatile int8_t x108 = -55;
	uint64_t t17 = 30097160LLU;

	t17 = (x105^(x106%(x107*x108)));

	if (t17 != 173LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = 1;
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = -1;
	static int32_t t18 = -702;

	t18 = (x117^(x118%(x119*x120)));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x129 = 613783408613705LL;
	volatile int8_t x130 = 0;
	volatile uint32_t x131 = 355717U;
	static uint8_t x132 = 2U;
	volatile int64_t t19 = 1589345719070076752LL;

	t19 = (x129^(x130%(x131*x132)));

	if (t19 != 613783408613705LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x133 = INT32_MAX;
	static int64_t x134 = -21506929160221926LL;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	int64_t t20 = 7893290LL;

	t20 = (x133^(x134%(x135*x136)));

	if (t20 != -1462897435LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = -6612945;
	uint16_t x143 = 27U;
	volatile uint16_t x144 = 4U;
	static volatile int32_t t21 = -3056;

	t21 = (x141^(x142%(x143*x144)));

	if (t21 != -152) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = INT32_MIN;
	static volatile int32_t x150 = -1;
	uint16_t x151 = 82U;
	static int32_t t22 = INT32_MAX;

	t22 = (x149^(x150%(x151*x152)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x155 = 580U;
	uint64_t x156 = 9LLU;
	static volatile uint64_t t23 = 44332960138631502LLU;

	t23 = (x153^(x154%(x155*x156)));

	if (t23 != 18446744071562069836LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x158 = 8;
	static int64_t x160 = -303LL;
	static int64_t t24 = 1LL;

	t24 = (x157^(x158%(x159*x160)));

	if (t24 != -9LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x166 = 3908450LLU;
	uint64_t x167 = 4635665680108000197LLU;
	int8_t x168 = -1;
	uint64_t t25 = 7709529958LLU;

	t25 = (x165^(x166%(x167*x168)));

	if (t25 != 3908450LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x170 = INT32_MAX;
	int16_t x172 = INT16_MAX;

	t26 = (x169^(x170%(x171*x172)));

	if (t26 != 2147485545U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x173 = INT16_MIN;
	volatile uint64_t x174 = UINT64_MAX;
	volatile int16_t x175 = INT16_MAX;
	static int8_t x176 = -2;
	volatile uint64_t t27 = 219034308LLU;

	t27 = (x173^(x174%(x175*x176)));

	if (t27 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = INT64_MIN;
	static int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	volatile uint32_t x184 = 409U;
	volatile int64_t t28 = -3151LL;

	t28 = (x181^(x182%(x183*x184)));

	if (t28 != 9223372036854441246LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x185 = -348;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = 2321U;
	int64_t x188 = 54220952052770LL;
	volatile int64_t t29 = 49313043LL;

	t29 = (x185^(x186%(x187*x188)));

	if (t29 != -293LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x190 = 9U;
	volatile uint32_t x191 = UINT32_MAX;
	volatile uint8_t x192 = 103U;
	uint32_t t30 = 15U;

	t30 = (x189^(x190%(x191*x192)));

	if (t30 != 4294967177U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MIN;
	static volatile uint64_t t31 = 1LLU;

	t31 = (x193^(x194%(x195*x196)));

	if (t31 != 4294934528LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x211 = 15914U;
	uint32_t x212 = 2083U;
	volatile int64_t t32 = 22378LL;

	t32 = (x209^(x210%(x211*x212)));

	if (t32 != -8668978LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x213 = -55;
	int16_t x214 = -11;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t33 = 323235;

	t33 = (x213^(x214%(x215*x216)));

	if (t33 != 60) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x217 = INT16_MIN;
	static int64_t x218 = INT64_MAX;
	uint64_t x220 = 1LLU;
	volatile uint64_t t34 = 915036125LLU;

	t34 = (x217^(x218%(x219*x220)));

	if (t34 != 18446744073709518877LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x226 = INT8_MIN;
	static volatile uint64_t x227 = 7LLU;
	static uint8_t x228 = 112U;
	volatile uint64_t t35 = 107011LLU;

	t35 = (x225^(x226%(x227*x228)));

	if (t35 != 124387606LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x230 = 78U;
	static uint8_t x231 = UINT8_MAX;
	int64_t x232 = 1020269894567240LL;
	static volatile int64_t t36 = -95786072LL;

	t36 = (x229^(x230%(x231*x232)));

	if (t36 != 2147483569LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MIN;
	static volatile int64_t x236 = -8820577539LL;
	volatile uint64_t t37 = 188942859LLU;

	t37 = (x233^(x234%(x235*x236)));

	if (t37 != 18446744071953978607LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x237 = INT32_MIN;
	static uint32_t x238 = 38722U;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = INT16_MAX;
	uint32_t t38 = 556U;

	t38 = (x237^(x238%(x239*x240)));

	if (t38 != 2147522370U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = -1;
	int8_t x243 = 7;
	int8_t x244 = INT8_MIN;
	int32_t t39 = -15724;

	t39 = (x241^(x242%(x243*x244)));

	if (t39 != -256) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x245 = UINT16_MAX;
	volatile uint16_t x246 = UINT16_MAX;

	t40 = (x245^(x246%(x247*x248)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x250 = -1;
	int16_t x251 = 403;
	volatile uint32_t t41 = 3U;

	t41 = (x249^(x250%(x251*x252)));

	if (t41 != 861487U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x256 = INT16_MIN;
	uint64_t t42 = 3LLU;

	t42 = (x253^(x254%(x255*x256)));

	if (t42 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x262 = 2031;
	int16_t x263 = INT16_MIN;
	uint32_t x264 = UINT32_MAX;
	uint32_t t43 = 2U;

	t43 = (x261^(x262%(x263*x264)));

	if (t43 != 63504U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	static volatile int32_t t44 = -309058292;

	t44 = (x265^(x266%(x267*x268)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x269 = INT32_MAX;
	static uint8_t x270 = UINT8_MAX;
	volatile int16_t x271 = INT16_MIN;
	volatile uint8_t x272 = 58U;
	int32_t t45 = -1005398;

	t45 = (x269^(x270%(x271*x272)));

	if (t45 != 2147483392) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x273 = 14U;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = -11;
	int32_t x276 = 1;
	uint32_t t46 = 311U;

	t46 = (x273^(x274%(x275*x276)));

	if (t46 != 4294967280U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	static uint64_t x283 = 61LLU;
	volatile uint64_t t47 = 3LLU;

	t47 = (x281^(x282%(x283*x284)));

	if (t47 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x285 = UINT64_MAX;
	static int8_t x286 = -1;
	int8_t x287 = -50;
	int16_t x288 = 194;
	uint64_t t48 = 103142469613617328LLU;

	t48 = (x285^(x286%(x287*x288)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x289 = 3600006801519245292LL;
	int8_t x290 = INT8_MAX;
	volatile int8_t x291 = 3;
	int64_t x292 = -1LL;
	int64_t t49 = -47945240057LL;

	t49 = (x289^(x290%(x291*x292)));

	if (t49 != 3600006801519245293LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x293 = 3U;
	int64_t x295 = -1LL;
	uint16_t x296 = UINT16_MAX;
	static volatile int64_t t50 = -680576745090LL;

	t50 = (x293^(x294%(x295*x296)));

	if (t50 != -4LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x297 = -1LL;
	static int64_t x298 = -1LL;
	int8_t x299 = INT8_MAX;
	int64_t t51 = -142577877831103LL;

	t51 = (x297^(x298%(x299*x300)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = 94512199LLU;
	int32_t x304 = INT32_MIN;
	uint64_t t52 = UINT64_MAX;

	t52 = (x301^(x302%(x303*x304)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x309 = 0LLU;
	static int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MIN;
	volatile uint64_t t53 = 192632854892LLU;

	t53 = (x309^(x310%(x311*x312)));

	if (t53 != 2147483647LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x313 = -1;
	static int8_t x315 = -1;

	t54 = (x313^(x314%(x315*x316)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = -71084331324848LL;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = INT16_MIN;
	int64_t t55 = 268136497921169100LL;

	t55 = (x321^(x322%(x323*x324)));

	if (t55 != 21968LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x326 = -1;
	int8_t x328 = -1;

	t56 = (x325^(x326%(x327*x328)));

	if (t56 != 4294967292U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x329 = UINT32_MAX;
	volatile uint32_t x330 = UINT32_MAX;
	uint64_t x331 = 6769790LLU;
	volatile uint64_t t57 = 19683LLU;

	t57 = (x329^(x330%(x331*x332)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = INT16_MAX;
	int8_t x335 = -2;
	int8_t x336 = INT8_MIN;

	t58 = (x333^(x334%(x335*x336)));

	if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x341 = 2U;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 28U;
	uint16_t x344 = 2U;
	volatile uint32_t t59 = 2719U;

	t59 = (x341^(x342%(x343*x344)));

	if (t59 != 4294967282U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	static volatile uint16_t x347 = 1U;
	uint16_t x348 = 2U;

	t60 = (x345^(x346%(x347*x348)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x349 = INT32_MAX;
	int32_t x350 = -1;

	t61 = (x349^(x350%(x351*x352)));

	if (t61 != 1114542350321170762LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = -33;
	uint32_t x359 = UINT32_MAX;
	static int16_t x360 = -1;
	static volatile uint32_t t62 = 1U;

	t62 = (x357^(x358%(x359*x360)));

	if (t62 != 65535U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x362 = INT8_MIN;
	static volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = 7U;
	int64_t t63 = 1435725LL;

	t63 = (x361^(x362%(x363*x364)));

	if (t63 != 28289976LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x365 = 134605;
	volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t64 = 118050673377004LLU;

	t64 = (x365^(x366%(x367*x368)));

	if (t64 != 160306LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = -1;
	static int32_t x375 = -146;
	int64_t x376 = -1LL;

	t65 = (x373^(x374%(x375*x376)));

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x382 = 58LL;
	int32_t x383 = -4146337;
	int32_t x384 = -30;
	static int64_t t66 = -516LL;

	t66 = (x381^(x382%(x383*x384)));

	if (t66 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x385 = 18U;
	int64_t x386 = INT64_MAX;
	int64_t x387 = -1LL;
	uint8_t x388 = 127U;
	static int64_t t67 = 1515009175396807LL;

	t67 = (x385^(x386%(x387*x388)));

	if (t67 != 18LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = -1;
	volatile int32_t x390 = INT32_MAX;
	static int64_t x391 = INT64_MAX;
	int16_t x392 = -1;
	int64_t t68 = 232057031381858142LL;

	t68 = (x389^(x390%(x391*x392)));

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x393 = INT64_MAX;
	uint64_t x395 = 474988330LLU;
	uint8_t x396 = 65U;

	t69 = (x393^(x394%(x395*x396)));

	if (t69 != 9223372029385091619LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x409 = INT8_MAX;
	static uint32_t x410 = UINT32_MAX;
	volatile int8_t x411 = INT8_MIN;
	static volatile int32_t x412 = -20;
	uint32_t t70 = 531121535U;

	t70 = (x409^(x410%(x411*x412)));

	if (t70 != 1408U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x417 = -1;
	uint16_t x418 = 30U;
	int8_t x419 = INT8_MIN;
	volatile int16_t x420 = INT16_MAX;
	int32_t t71 = -24953;

	t71 = (x417^(x418%(x419*x420)));

	if (t71 != -31) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x421 = INT32_MIN;
	static int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MAX;
	static int64_t x424 = 69LL;
	int64_t t72 = 28LL;

	t72 = (x421^(x422%(x423*x424)));

	if (t72 != 2147483520LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x425 = -1;
	static int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MIN;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t73 = 112593LLU;

	t73 = (x425^(x426%(x427*x428)));

	if (t73 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x429 = INT16_MAX;
	volatile uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 3U;
	volatile int32_t x432 = 51435955;
	volatile int32_t t74 = 27;

	t74 = (x429^(x430%(x431*x432)));

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x437 = INT32_MIN;
	uint8_t x438 = 0U;
	int64_t x439 = -1LL;
	uint64_t x440 = UINT64_MAX;
	uint64_t t75 = 98451769832212443LLU;

	t75 = (x437^(x438%(x439*x440)));

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x441 = UINT8_MAX;
	uint32_t x442 = 833826682U;
	int16_t x443 = -1;
	volatile uint32_t t76 = 170660389U;

	t76 = (x441^(x442%(x443*x444)));

	if (t76 != 255U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	volatile int64_t t77 = -2772391802169LL;

	t77 = (x445^(x446%(x447*x448)));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x449 = INT16_MAX;
	static uint64_t x452 = 805344139603518LLU;
	static uint64_t t78 = 459184354747LLU;

	t78 = (x449^(x450%(x451*x452)));

	if (t78 != 3765198995732030817LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x454 = INT8_MAX;
	int16_t x455 = 11;
	int16_t x456 = -355;

	t79 = (x453^(x454%(x455*x456)));

	if (t79 != 1227LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x457 = UINT32_MAX;
	uint8_t x458 = 92U;
	static int8_t x459 = INT8_MIN;
	static int64_t t80 = -489LL;

	t80 = (x457^(x458%(x459*x460)));

	if (t80 != 4294967203LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x465 = 1011071372U;
	int16_t x466 = INT16_MAX;
	int8_t x467 = -63;
	static int16_t x468 = INT16_MIN;
	static uint32_t t81 = 1198U;

	t81 = (x465^(x466%(x467*x468)));

	if (t81 != 1011074675U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x469 = 1;
	int8_t x470 = 3;
	volatile int32_t x472 = 91;
	int32_t t82 = 28665321;

	t82 = (x469^(x470%(x471*x472)));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x473 = 295U;
	int32_t x474 = -5138990;
	int16_t x475 = 3845;
	volatile int8_t x476 = INT8_MAX;

	t83 = (x473^(x474%(x475*x476)));

	if (t83 != 4294711687U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x489 = 12399949580LL;
	static int32_t x491 = 21;
	int16_t x492 = INT16_MIN;
	static volatile int64_t t84 = -889724LL;

	t84 = (x489^(x490%(x491*x492)));

	if (t84 != -12399954164LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x497 = 58;
	volatile int16_t x498 = -1;
	uint8_t x499 = 3U;
	volatile uint8_t x500 = UINT8_MAX;
	volatile int32_t t85 = 0;

	t85 = (x497^(x498%(x499*x500)));

	if (t85 != -59) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x501 = INT64_MIN;
	uint16_t x502 = 261U;
	uint32_t x503 = 3U;
	static volatile uint64_t x504 = 1045289979744LLU;

	t86 = (x501^(x502%(x503*x504)));

	if (t86 != 9223372036854776069LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x505 = 332U;
	int32_t x506 = 276;
	int16_t x507 = -7;
	uint32_t x508 = UINT32_MAX;
	uint32_t t87 = 538U;

	t87 = (x505^(x506%(x507*x508)));

	if (t87 != 335U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x513 = UINT32_MAX;
	static int16_t x514 = 120;
	int32_t x515 = -1;

	t88 = (x513^(x514%(x515*x516)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x521 = 1U;
	static int8_t x522 = INT8_MAX;
	volatile int16_t x523 = INT16_MIN;
	volatile uint32_t x524 = 7904U;

	t89 = (x521^(x522%(x523*x524)));

	if (t89 != 126U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x525 = 3U;
	int16_t x526 = -1;
	int64_t x527 = 4556623272LL;
	volatile int64_t x528 = -1LL;
	int64_t t90 = -6410579218LL;

	t90 = (x525^(x526%(x527*x528)));

	if (t90 != -4LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x534 = INT16_MIN;
	uint32_t x535 = UINT32_MAX;
	int16_t x536 = INT16_MAX;

	t91 = (x533^(x534%(x535*x536)));

	if (t91 != 4294934535U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x537 = 282568555LLU;
	static volatile int64_t x538 = 45658988453LL;
	static int8_t x539 = INT8_MIN;
	volatile uint64_t t92 = 8575LLU;

	t92 = (x537^(x538%(x539*x540)));

	if (t92 != 283867342LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x543 = -1LL;
	int64_t x544 = -1LL;
	uint64_t t93 = UINT64_MAX;

	t93 = (x541^(x542%(x543*x544)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x549 = -1;
	int16_t x551 = -1;
	volatile uint32_t x552 = 1256114U;
	volatile uint32_t t94 = 131896122U;

	t94 = (x549^(x550%(x551*x552)));

	if (t94 != 4294963348U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x553 = INT64_MIN;
	static int16_t x555 = -1;
	volatile uint32_t x556 = 27253420U;
	volatile int64_t t95 = 8858658510707212LL;

	t95 = (x553^(x554%(x555*x556)));

	if (t95 != -9223372036827555156LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x565 = 0U;
	int64_t x566 = -1LL;
	uint16_t x567 = UINT16_MAX;
	int64_t x568 = -1LL;

	t96 = (x565^(x566%(x567*x568)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x569 = -159;
	static int8_t x570 = INT8_MIN;
	uint64_t x571 = UINT64_MAX;
	volatile uint32_t x572 = 480U;
	uint64_t t97 = 29347639LLU;

	t97 = (x569^(x570%(x571*x572)));

	if (t97 != 18446744073709551105LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x574 = INT16_MAX;
	int8_t x575 = 14;
	static int32_t x576 = 48702185;

	t98 = (x573^(x574%(x575*x576)));

	if (t98 != 32552) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x577 = -1;
	uint32_t x578 = 5459U;
	int16_t x580 = INT16_MIN;
	volatile uint32_t t99 = 3504503U;

	t99 = (x577^(x578%(x579*x580)));

	if (t99 != 4294961836U) { NG(); } else { ; }
	
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

