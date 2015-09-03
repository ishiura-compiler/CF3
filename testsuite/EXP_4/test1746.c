#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
int32_t x10 = INT32_MAX;
static volatile uint8_t x11 = 15U;
volatile int8_t x29 = INT8_MAX;
int16_t x30 = -1;
int64_t x43 = INT64_MAX;
volatile int64_t t4 = 1LL;
int8_t x51 = INT8_MIN;
volatile uint32_t x52 = 198725215U;
volatile int64_t t6 = 26627LL;
int8_t x59 = -9;
volatile uint16_t x80 = 3789U;
int32_t t11 = -1046;
static uint16_t x104 = 20U;
volatile int64_t x117 = -56461220202LL;
volatile int8_t x125 = INT8_MIN;
volatile uint32_t t15 = 3115997U;
volatile int8_t x141 = INT8_MIN;
static int16_t x146 = 1;
int8_t x154 = INT8_MIN;
int8_t x159 = INT8_MIN;
int64_t x173 = -6852LL;
static int8_t x174 = -1;
int8_t x196 = -1;
volatile int8_t x198 = INT8_MAX;
int64_t x201 = 55313840797051LL;
static volatile int64_t x202 = 36LL;
int8_t x203 = -24;
volatile uint64_t t27 = 64LLU;
uint8_t x214 = 46U;
volatile int32_t t29 = -427167654;
int8_t x230 = INT8_MAX;
int16_t x231 = -15485;
volatile int16_t x232 = -1;
int32_t t31 = 61;
static int32_t x243 = INT32_MIN;
uint8_t x247 = UINT8_MAX;
int32_t x258 = -466631639;
int16_t x276 = INT16_MAX;
volatile int8_t x278 = INT8_MIN;
static volatile int8_t x282 = -7;
int8_t x284 = INT8_MIN;
static volatile int64_t t39 = -122465276LL;
int8_t x285 = 3;
int32_t x289 = INT32_MIN;
static int8_t x302 = INT8_MIN;
int32_t t46 = -1;
volatile int64_t x317 = INT64_MIN;
uint32_t x333 = UINT32_MAX;
static int64_t x336 = INT64_MAX;
volatile int8_t x337 = INT8_MIN;
static int32_t x338 = 5954;
int32_t x339 = -1;
static volatile uint8_t x340 = UINT8_MAX;
int8_t x344 = INT8_MIN;
uint64_t x346 = UINT64_MAX;
int16_t x347 = -971;
int8_t x348 = INT8_MIN;
volatile uint64_t t51 = 43466123988528791LLU;
static uint16_t x361 = UINT16_MAX;
uint16_t x367 = UINT16_MAX;
static volatile int32_t x375 = INT32_MAX;
int64_t t56 = 9763442213050LL;
int32_t x384 = INT32_MIN;
static volatile uint64_t t57 = 79751LLU;
volatile uint64_t t59 = 5LLU;
static int16_t x435 = INT16_MIN;
int16_t x436 = -1;
uint32_t x447 = 4U;
int8_t x454 = 4;
int32_t x490 = -1;
volatile int16_t x494 = INT16_MIN;
volatile uint16_t x500 = 43U;
int16_t x501 = INT16_MAX;
static volatile int64_t t76 = 236340075LL;
int8_t x512 = 56;
volatile uint32_t x523 = 111442U;
uint64_t x526 = 57483578915095188LLU;
volatile int64_t t80 = -9399490LL;
int16_t x533 = INT16_MIN;
volatile int16_t x547 = INT16_MAX;
int16_t x551 = -1;
static volatile int32_t t83 = -65592;
uint16_t x553 = 255U;
volatile uint32_t t85 = 286259267U;
int8_t x566 = INT8_MAX;
uint16_t x567 = 69U;
static uint64_t t86 = 1934752461250LLU;
int16_t x570 = 34;
uint8_t x577 = 2U;
int16_t x579 = -153;
volatile int64_t t88 = -2741800506448711LL;
int16_t x594 = 3;
int64_t t90 = 1006989711823164LL;
uint8_t x610 = 3U;
static int16_t x613 = -1;
int32_t x637 = -564735141;
static int64_t x639 = INT64_MAX;
int16_t x641 = -1;
volatile int64_t x662 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 6U;
	uint32_t x2 = 54815U;
	volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -8632LL;

	t0 = (x1/(x2%(x3&x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	uint16_t x12 = 203U;
	int32_t t1 = INT32_MAX;

	t1 = (x9/(x10%(x11&x12)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	static int32_t x23 = INT32_MIN;
	static volatile int64_t x24 = 1136708711835069839LL;
	volatile int64_t t2 = 27842592LL;

	t2 = (x21/(x22%(x23&x24)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x31 = 47U;
	static uint16_t x32 = 5U;
	volatile int32_t t3 = -180429;

	t3 = (x29/(x30%(x31&x32)));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x41 = 83U;
	static int16_t x42 = INT16_MIN;
	static int32_t x44 = -1;

	t4 = (x41/(x42%(x43&x44)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x45 = INT64_MAX;
	static int32_t x46 = -1;
	int64_t x47 = 23LL;
	int16_t x48 = INT16_MAX;
	static int64_t t5 = 117303589381752114LL;

	t5 = (x45/(x46%(x47&x48)));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = 673780LL;
	int8_t x50 = INT8_MIN;

	t6 = (x49/(x50%(x51&x52)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = 2027851;
	int32_t x58 = -4060;
	static uint16_t x60 = 4209U;
	static volatile int32_t t7 = -240;

	t7 = (x57/(x58%(x59&x60)));

	if (t7 != -499) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x65 = 497602157880236256LL;
	int16_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = INT64_MAX;
	static uint64_t t8 = 156593135877LLU;

	t8 = (x65/(x66%(x67&x68)));

	if (t8 != 497602157880236256LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = -2;
	volatile uint64_t x70 = UINT64_MAX;
	int64_t x71 = 6114464216255LL;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t9 = 4977701923793643439LLU;

	t9 = (x69/(x70%(x71&x72)));

	if (t9 != 3882747LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x77 = 10U;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = 57U;
	volatile int32_t t10 = 699710967;

	t10 = (x77/(x78%(x79&x80)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x97 = 26;
	int16_t x98 = 1051;
	int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MIN;

	t11 = (x97/(x98%(x99&x100)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x101 = 79532LL;
	volatile int8_t x102 = -1;
	int8_t x103 = INT8_MAX;
	volatile int64_t t12 = -367341267702578895LL;

	t12 = (x101/(x102%(x103&x104)));

	if (t12 != -79532LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MAX;
	int64_t x115 = -916LL;
	uint16_t x116 = UINT16_MAX;
	static volatile int64_t t13 = 165483562593736163LL;

	t13 = (x113/(x114%(x115&x116)));

	if (t13 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x118 = INT16_MAX;
	int16_t x119 = -1;
	int32_t x120 = 297087;
	int64_t t14 = -32015451LL;

	t14 = (x117/(x118%(x119&x120)));

	if (t14 != -1723112LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x126 = -1;
	uint32_t x127 = 10759U;
	int8_t x128 = INT8_MIN;

	t15 = (x125/(x126%(x127&x128)));

	if (t15 != 762736U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x142 = -1;
	volatile int8_t x143 = INT8_MAX;
	uint8_t x144 = UINT8_MAX;
	int32_t t16 = 2430;

	t16 = (x141/(x142%(x143&x144)));

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x145 = 32709198LLU;
	int8_t x147 = INT8_MAX;
	static int16_t x148 = 10413;
	static volatile uint64_t t17 = 23LLU;

	t17 = (x145/(x146%(x147&x148)));

	if (t17 != 32709198LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x155 = 56718806111029195LL;
	uint64_t x156 = UINT64_MAX;
	static volatile uint64_t t18 = 103283840639265049LLU;

	t18 = (x153/(x154%(x155&x156)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x157 = -14;
	uint16_t x158 = 15721U;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t19 = -6027248LL;

	t19 = (x157/(x158%(x159&x160)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x165 = -1LL;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 13U;
	int64_t x168 = -1LL;
	static volatile int64_t t20 = 8867447114LL;

	t20 = (x165/(x166%(x167&x168)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = 820U;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = 38U;
	uint32_t t21 = 46760260U;

	t21 = (x169/(x170%(x171&x172)));

	if (t21 != 97612893U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x175 = UINT8_MAX;
	volatile uint32_t x176 = 3707U;
	volatile int64_t t22 = -6542526070952659LL;

	t22 = (x173/(x174%(x175&x176)));

	if (t22 != -190LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x181 = 1535U;
	uint64_t x182 = 33672479635145LLU;
	int16_t x183 = -1;
	int64_t x184 = 142001972977395946LL;
	static uint64_t t23 = 201401LLU;

	t23 = (x181/(x182%(x183&x184)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x193 = 331U;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	int32_t t24 = -15846941;

	t24 = (x193/(x194%(x195&x196)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x197 = INT16_MAX;
	int64_t x199 = -1LL;
	uint64_t x200 = 3856LLU;
	volatile uint64_t t25 = 1238799128995LLU;

	t25 = (x197/(x198%(x199&x200)));

	if (t25 != 258LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t26 = -320433LL;

	t26 = (x201/(x202%(x203&x204)));

	if (t26 != 1536495577695LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x209 = INT8_MIN;
	int8_t x210 = -1;
	volatile uint64_t x211 = UINT64_MAX;
	volatile int32_t x212 = INT32_MAX;

	t27 = (x209/(x210%(x211&x212)));

	if (t27 != 6148914691236517162LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x213 = INT16_MAX;
	static int64_t x215 = INT64_MAX;
	uint8_t x216 = 29U;
	volatile int64_t t28 = -3511382461801LL;

	t28 = (x213/(x214%(x215&x216)));

	if (t28 != 1927LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x217 = INT32_MIN;
	static int32_t x218 = INT32_MIN;
	int16_t x219 = -1;
	volatile int16_t x220 = INT16_MAX;

	t29 = (x217/(x218%(x219&x220)));

	if (t29 != 1073741824) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x225 = 0U;
	int8_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t30 = 12380;

	t30 = (x225/(x226%(x227&x228)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x229 = UINT8_MAX;

	t31 = (x229/(x230%(x231&x232)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x241 = UINT64_MAX;
	int64_t x242 = -104883822899587LL;
	int16_t x244 = INT16_MIN;
	static volatile uint64_t t32 = 103LLU;

	t32 = (x241/(x242%(x243&x244)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x245 = UINT64_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	static uint32_t x248 = 4747159U;
	uint64_t t33 = UINT64_MAX;

	t33 = (x245/(x246%(x247&x248)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -2094219263567069161LL;
	int32_t x256 = -1;
	int64_t t34 = 0LL;

	t34 = (x253/(x254%(x255&x256)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x257 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int64_t t35 = 2049189LL;

	t35 = (x257/(x258%(x259&x260)));

	if (t35 != 106015770538560641LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x261 = INT32_MIN;
	static int64_t x262 = 73LL;
	int8_t x263 = INT8_MAX;
	static volatile int32_t x264 = -2962;
	static volatile int64_t t36 = -104517757LL;

	t36 = (x261/(x262%(x263&x264)));

	if (t36 != -29417584LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x273 = 0LL;
	uint64_t x274 = 6917647230889201LLU;
	volatile uint8_t x275 = UINT8_MAX;
	volatile uint64_t t37 = 987916210433LLU;

	t37 = (x273/(x274%(x275&x276)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x277 = 15284;
	uint32_t x279 = UINT32_MAX;
	uint32_t x280 = 103350978U;
	volatile uint32_t t38 = 676U;

	t38 = (x277/(x278%(x279&x280)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x281 = -1LL;
	static int8_t x283 = -2;

	t39 = (x281/(x282%(x283&x284)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x286 = INT32_MAX;
	static volatile int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	static int32_t t40 = 17;

	t40 = (x285/(x286%(x287&x288)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x290 = 19U;
	static uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 6026839811LLU;
	volatile uint64_t t41 = 1LLU;

	t41 = (x289/(x290%(x291&x292)));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x293 = -1;
	int16_t x294 = INT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	volatile uint32_t t42 = 4460974U;

	t42 = (x293/(x294%(x295&x296)));

	if (t42 != 131076U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x297 = 44U;
	uint32_t x298 = 37U;
	uint16_t x299 = 1505U;
	int64_t x300 = INT64_MAX;
	volatile int64_t t43 = 187013615LL;

	t43 = (x297/(x298%(x299&x300)));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x301 = -1;
	static uint16_t x303 = 8958U;
	int64_t x304 = INT64_MAX;
	volatile int64_t t44 = -731262LL;

	t44 = (x301/(x302%(x303&x304)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x305 = -1;
	static int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MIN;
	int16_t x308 = 631;
	static int32_t t45 = -85;

	t45 = (x305/(x306%(x307&x308)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = 7;
	int32_t x315 = -116;
	static int16_t x316 = INT16_MIN;

	t46 = (x313/(x314%(x315&x316)));

	if (t46 != -4681) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x318 = -7LL;
	static int64_t x319 = INT64_MAX;
	uint64_t x320 = 13684778LLU;
	volatile uint64_t t47 = 53845384475751LLU;

	t47 = (x317/(x318%(x319&x320)));

	if (t47 != 2241396690520LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x334 = INT64_MAX;
	static volatile int32_t x335 = INT32_MIN;
	static volatile int64_t t48 = -59372649LL;

	t48 = (x333/(x334%(x335&x336)));

	if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t t49 = 306647;

	t49 = (x337/(x338%(x339&x340)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x341 = 951261LLU;
	int64_t x342 = -1LL;
	static int16_t x343 = INT16_MAX;
	volatile uint64_t t50 = 5LLU;

	t50 = (x341/(x342%(x343&x344)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x345 = INT64_MIN;

	t51 = (x345/(x346%(x347&x348)));

	if (t51 != 9016003946094600LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x362 = -1;
	static volatile int8_t x363 = -22;
	static uint16_t x364 = 6491U;
	int32_t t52 = -20240284;

	t52 = (x361/(x362%(x363&x364)));

	if (t52 != -65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x365 = UINT32_MAX;
	uint8_t x366 = 1U;
	static volatile int32_t x368 = INT32_MAX;
	uint32_t t53 = UINT32_MAX;

	t53 = (x365/(x366%(x367&x368)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x369 = 1U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	static uint64_t x372 = 1305443502501052256LLU;
	static volatile uint64_t t54 = 114LLU;

	t54 = (x369/(x370%(x371&x372)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x373 = -1;
	static uint64_t x374 = 15334136842646LLU;
	int8_t x376 = -1;
	uint64_t t55 = 795246446738024LLU;

	t55 = (x373/(x374%(x375&x376)));

	if (t55 != 16715017058LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x377 = INT64_MIN;
	static volatile int64_t x378 = INT64_MAX;
	int8_t x379 = INT8_MIN;
	static uint16_t x380 = 228U;

	t56 = (x377/(x378%(x379&x380)));

	if (t56 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x381 = 6809275809276LLU;
	int8_t x382 = INT8_MAX;
	int64_t x383 = 28726420549LL;

	t57 = (x381/(x382%(x383&x384)));

	if (t57 != 53616344954LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x389 = 19759LLU;
	int32_t x390 = INT32_MIN;
	static volatile uint32_t x391 = 780750U;
	volatile int8_t x392 = -1;
	volatile uint64_t t58 = 1504571LLU;

	t58 = (x389/(x390%(x391&x392)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x393 = 0U;
	uint64_t x394 = 99LLU;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MIN;

	t59 = (x393/(x394%(x395&x396)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x401 = INT16_MAX;
	volatile int64_t x402 = 16133949LL;
	volatile int16_t x403 = 242;
	static volatile int32_t x404 = -1;
	int64_t t60 = 107513490710LL;

	t60 = (x401/(x402%(x403&x404)));

	if (t60 != 642LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x409 = INT8_MIN;
	int64_t x410 = -1LL;
	static uint16_t x411 = UINT16_MAX;
	static int64_t x412 = INT64_MAX;
	volatile int64_t t61 = 65772LL;

	t61 = (x409/(x410%(x411&x412)));

	if (t61 != 128LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x413 = 985379238597985LLU;
	int16_t x414 = -1532;
	volatile int32_t x415 = INT32_MAX;
	uint64_t x416 = 7073086062834158954LLU;
	volatile uint64_t t62 = 2270062501LLU;

	t62 = (x413/(x414%(x415&x416)));

	if (t62 != 3527338LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x417 = INT32_MIN;
	uint8_t x418 = 33U;
	int32_t x419 = -7563437;
	uint16_t x420 = 25726U;
	volatile int32_t t63 = 59;

	t63 = (x417/(x418%(x419&x420)));

	if (t63 != -65075262) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x425 = 485;
	static uint8_t x426 = 12U;
	volatile int16_t x427 = INT16_MIN;
	uint64_t x428 = 738439047979450LLU;
	uint64_t t64 = 3703580231083801LLU;

	t64 = (x425/(x426%(x427&x428)));

	if (t64 != 40LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x429 = 0;
	uint8_t x430 = 58U;
	uint64_t x431 = UINT64_MAX;
	volatile int64_t x432 = 379146415LL;
	static uint64_t t65 = 275778083LLU;

	t65 = (x429/(x430%(x431&x432)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x433 = INT64_MAX;
	int16_t x434 = INT16_MAX;
	int64_t t66 = -1303324014547238429LL;

	t66 = (x433/(x434%(x435&x436)));

	if (t66 != 281483566907400LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x437 = INT8_MAX;
	volatile uint32_t x438 = 52599U;
	static int64_t x439 = 197315832LL;
	volatile int16_t x440 = -1;
	volatile int64_t t67 = 11052772666588941LL;

	t67 = (x437/(x438%(x439&x440)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x445 = UINT32_MAX;
	int8_t x446 = -1;
	uint8_t x448 = 60U;
	static volatile uint32_t t68 = 241990370U;

	t68 = (x445/(x446%(x447&x448)));

	if (t68 != 1431655765U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x453 = INT32_MIN;
	uint16_t x455 = 816U;
	int16_t x456 = -8;
	volatile int32_t t69 = -5544123;

	t69 = (x453/(x454%(x455&x456)));

	if (t69 != -536870912) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x465 = UINT64_MAX;
	static int8_t x466 = INT8_MAX;
	volatile int16_t x467 = 978;
	uint16_t x468 = 27606U;
	uint64_t t70 = 365206178232285LLU;

	t70 = (x465/(x466%(x467&x468)));

	if (t70 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x469 = 150U;
	int16_t x470 = INT16_MIN;
	int64_t x471 = -1LL;
	int32_t x472 = INT32_MIN;
	int64_t t71 = -3040532190557729321LL;

	t71 = (x469/(x470%(x471&x472)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x481 = INT8_MAX;
	int64_t x482 = INT64_MIN;
	static volatile int16_t x483 = -3176;
	int8_t x484 = INT8_MIN;
	int64_t t72 = 1LL;

	t72 = (x481/(x482%(x483&x484)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x489 = -262908545;
	uint16_t x491 = 12680U;
	int8_t x492 = -1;
	int32_t t73 = -4286;

	t73 = (x489/(x490%(x491&x492)));

	if (t73 != 262908545) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x493 = 1870186372692453LLU;
	volatile uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MAX;
	uint64_t t74 = 53979290759582608LLU;

	t74 = (x493/(x494%(x495&x496)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x497 = UINT8_MAX;
	int32_t x498 = -1;
	uint16_t x499 = 73U;
	static volatile int32_t t75 = 1517972;

	t75 = (x497/(x498%(x499&x500)));

	if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x502 = INT32_MAX;
	int64_t x503 = -1LL;
	int16_t x504 = INT16_MIN;

	t76 = (x501/(x502%(x503&x504)));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x509 = -511438765512307807LL;
	int16_t x510 = -1;
	int16_t x511 = -9256;
	int64_t t77 = -845584193360679LL;

	t77 = (x509/(x510%(x511&x512)));

	if (t77 != 511438765512307807LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x521 = INT32_MIN;
	uint32_t x522 = 1901U;
	static volatile int16_t x524 = INT16_MIN;
	static uint32_t t78 = 1803U;

	t78 = (x521/(x522%(x523&x524)));

	if (t78 != 1129659U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x525 = INT16_MAX;
	uint16_t x527 = 8947U;
	int32_t x528 = INT32_MAX;
	volatile uint64_t t79 = 5572740512924547500LLU;

	t79 = (x525/(x526%(x527&x528)));

	if (t79 != 24LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x529 = 29U;
	volatile int32_t x530 = 177;
	volatile int64_t x531 = 10LL;
	static uint16_t x532 = UINT16_MAX;

	t80 = (x529/(x530%(x531&x532)));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x534 = INT8_MAX;
	volatile int64_t x535 = -1LL;
	int64_t x536 = INT64_MAX;
	int64_t t81 = 1LL;

	t81 = (x533/(x534%(x535&x536)));

	if (t81 != -258LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x545 = -1LL;
	int16_t x546 = 17;
	uint8_t x548 = 5U;
	volatile int64_t t82 = 210874116655LL;

	t82 = (x545/(x546%(x547&x548)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x549 = INT16_MAX;
	static uint16_t x550 = UINT16_MAX;
	static int32_t x552 = INT32_MIN;

	t83 = (x549/(x550%(x551&x552)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x554 = -112410;
	int16_t x555 = INT16_MIN;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t84 = 220;

	t84 = (x553/(x554%(x555&x556)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x561 = 1682U;
	int8_t x562 = -1;
	int8_t x563 = INT8_MIN;
	static volatile uint8_t x564 = UINT8_MAX;

	t85 = (x561/(x562%(x563&x564)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x565 = -7211;
	uint64_t x568 = 628569016816074LLU;

	t86 = (x565/(x566%(x567&x568)));

	if (t86 != 292805461487453085LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x569 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	int64_t x572 = -274LL;
	static volatile int64_t t87 = 168LL;

	t87 = (x569/(x570%(x571&x572)));

	if (t87 != -63161283LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x578 = UINT16_MAX;
	int64_t x580 = INT64_MIN;

	t88 = (x577/(x578%(x579&x580)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x593 = 2514U;
	int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MIN;
	int32_t t89 = -8821373;

	t89 = (x593/(x594%(x595&x596)));

	if (t89 != 838) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x601 = UINT8_MAX;
	volatile int8_t x602 = 1;
	int64_t x603 = INT64_MIN;
	static int32_t x604 = INT32_MIN;

	t90 = (x601/(x602%(x603&x604)));

	if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x605 = -1LL;
	volatile int32_t x606 = INT32_MIN;
	volatile int32_t x607 = INT32_MAX;
	int16_t x608 = INT16_MIN;
	int64_t t91 = -3495791788223330LL;

	t91 = (x605/(x606%(x607&x608)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x609 = -1;
	uint64_t x611 = UINT64_MAX;
	volatile uint32_t x612 = 500944U;
	uint64_t t92 = 1LLU;

	t92 = (x609/(x610%(x611&x612)));

	if (t92 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x614 = -136;
	uint64_t x615 = 5522907577LLU;
	static int16_t x616 = INT16_MIN;
	volatile uint64_t t93 = 122926175LLU;

	t93 = (x613/(x614%(x615&x616)));

	if (t93 != 87455385489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x617 = UINT16_MAX;
	int8_t x618 = -1;
	static uint16_t x619 = UINT16_MAX;
	volatile int16_t x620 = -1;
	static volatile int32_t t94 = -14101169;

	t94 = (x617/(x618%(x619&x620)));

	if (t94 != -65535) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x629 = 8011U;
	static uint16_t x630 = UINT16_MAX;
	uint8_t x631 = 41U;
	int32_t x632 = -1;
	static int32_t t95 = -29680;

	t95 = (x629/(x630%(x631&x632)));

	if (t95 != 471) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x638 = INT16_MIN;
	static uint64_t x640 = UINT64_MAX;
	uint64_t t96 = 29067LLU;

	t96 = (x637/(x638%(x639&x640)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x642 = INT32_MIN;
	volatile int16_t x643 = -45;
	volatile int32_t x644 = 2246;
	int32_t t97 = 330595;

	t97 = (x641/(x642%(x643&x644)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x649 = 1U;
	static uint64_t x650 = 4308359868830LLU;
	int8_t x651 = -10;
	static volatile int16_t x652 = INT16_MIN;
	uint64_t t98 = 76LLU;

	t98 = (x649/(x650%(x651&x652)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x661 = INT32_MIN;
	volatile int32_t x663 = -12;
	int16_t x664 = -1;
	static int64_t t99 = 251LL;

	t99 = (x661/(x662%(x663&x664)));

	if (t99 != 268435456LL) { NG(); } else { ; }
	
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

