#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x17 = 47U;
volatile int32_t t0 = -5438720;
volatile int64_t x26 = INT64_MIN;
volatile uint32_t t2 = 8U;
volatile int16_t x35 = -1;
static volatile int16_t x45 = INT16_MAX;
static volatile int32_t t4 = 1579545;
volatile uint32_t x53 = UINT32_MAX;
static int64_t x55 = 230429780173742LL;
static uint8_t x69 = UINT8_MAX;
volatile int32_t x71 = INT32_MAX;
int32_t x72 = INT32_MAX;
volatile int16_t x87 = INT16_MAX;
volatile uint32_t x90 = 56917U;
int8_t x91 = INT8_MIN;
int32_t t10 = 19328;
uint32_t x95 = UINT32_MAX;
uint16_t x98 = 3868U;
int8_t x99 = INT8_MIN;
int8_t x107 = -11;
int32_t t13 = -340429;
int16_t x117 = INT16_MAX;
int8_t x126 = INT8_MIN;
volatile uint64_t t16 = 182206644761LLU;
uint16_t x166 = 31651U;
int64_t x172 = INT64_MAX;
int32_t t23 = -93449608;
uint64_t x192 = 6154129145799872LLU;
volatile int32_t x193 = 50144749;
static int64_t x198 = INT64_MAX;
int64_t x210 = -1LL;
int32_t x216 = INT32_MIN;
int8_t x221 = 1;
static uint8_t x226 = 1U;
volatile int32_t t33 = -4834503;
uint64_t x262 = 20549027722681408LLU;
static int16_t x263 = -1;
static uint64_t x266 = 103LLU;
uint64_t x277 = 7LLU;
static uint32_t x280 = 25908U;
int8_t x283 = -7;
volatile int32_t t40 = -102;
static uint16_t x296 = 6U;
volatile int32_t t41 = 14815651;
int64_t x311 = -1LL;
static volatile int32_t t43 = -1;
volatile int16_t x336 = INT16_MIN;
uint64_t x349 = 521385LLU;
static uint64_t t46 = 7688272059723LLU;
volatile uint32_t x363 = 0U;
volatile uint64_t t50 = 16416517LLU;
int32_t x381 = 30134117;
int32_t t51 = 31;
int32_t t52 = 2;
static int64_t x410 = INT64_MAX;
volatile int8_t x443 = 11;
uint64_t t57 = 584343LLU;
volatile uint8_t x445 = 0U;
static uint16_t x453 = 122U;
int32_t t63 = 415;
int32_t x491 = INT32_MIN;
uint64_t x493 = 92LLU;
uint8_t x495 = 1U;
static volatile uint64_t t65 = 2049564649826LLU;
static int8_t x499 = 6;
static volatile int16_t x501 = INT16_MAX;
int32_t x506 = INT32_MIN;
volatile int16_t x532 = INT16_MAX;
uint16_t x546 = UINT16_MAX;
uint32_t t70 = 128U;
static volatile uint32_t x556 = UINT32_MAX;
uint32_t x570 = 1826864582U;
int64_t t73 = -4419561645865052050LL;
static int16_t x575 = INT16_MIN;
static int64_t x583 = INT64_MAX;
uint8_t x586 = 18U;
int32_t x596 = INT32_MIN;
int32_t x604 = INT32_MIN;
volatile int16_t x606 = 390;
int64_t x616 = 5747747221039LL;
uint16_t x621 = UINT16_MAX;
int32_t t84 = 5056;
volatile uint8_t x626 = 18U;
volatile uint32_t t86 = UINT32_MAX;
uint32_t x661 = 15791U;
static int16_t x694 = INT16_MIN;
int64_t x710 = -816255LL;
uint32_t x713 = UINT32_MAX;
uint16_t x714 = UINT16_MAX;
static int64_t x716 = INT64_MIN;
int16_t x717 = 16;
volatile int64_t x739 = INT64_MAX;
uint64_t x741 = 127177580052474851LLU;
uint32_t x744 = 1240660U;


void f0(void) {
	volatile uint64_t x18 = 1LLU;
	static int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;

	t0 = (x17>>(x18<(x19/x20)));

	if (t0 != 47) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x21 = 18U;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 421046859LLU;
	int32_t x24 = INT32_MIN;
	volatile int32_t t1 = 268918062;

	t1 = (x21>>(x22<(x23/x24)));

	if (t1 != 18) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x25 = 9621U;
	volatile uint8_t x27 = 126U;
	uint64_t x28 = 110597003416LLU;

	t2 = (x25>>(x26<(x27/x28)));

	if (t2 != 9621U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x33 = 3;
	uint8_t x34 = UINT8_MAX;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t3 = 0;

	t3 = (x33>>(x34<(x35/x36)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x46 = INT16_MAX;
	uint64_t x47 = 3741582035612694878LLU;
	volatile int64_t x48 = 226068049052LL;

	t4 = (x45>>(x46<(x47/x48)));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x49 = INT16_MAX;
	int64_t x50 = -1LL;
	int32_t x51 = INT32_MIN;
	int8_t x52 = 1;
	volatile int32_t t5 = -206612;

	t5 = (x49>>(x50<(x51/x52)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x54 = INT32_MAX;
	int16_t x56 = INT16_MIN;
	uint32_t t6 = UINT32_MAX;

	t6 = (x53>>(x54<(x55/x56)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = 73U;
	uint64_t x58 = 22063547900547LLU;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = 45U;
	static volatile uint32_t t7 = 2U;

	t7 = (x57>>(x58<(x59/x60)));

	if (t7 != 36U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x70 = -58;
	volatile int32_t t8 = -1752;

	t8 = (x69>>(x70<(x71/x72)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x85 = 5744LL;
	int16_t x86 = 50;
	uint8_t x88 = 3U;
	int64_t t9 = -1937090323123LL;

	t9 = (x85>>(x86<(x87/x88)));

	if (t9 != 2872LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x89 = 0;
	int32_t x92 = -1;

	t10 = (x89>>(x90<(x91/x92)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x93 = 7864LLU;
	volatile int32_t x94 = -1;
	volatile int32_t x96 = 226940;
	uint64_t t11 = 14003626963217LLU;

	t11 = (x93>>(x94<(x95/x96)));

	if (t11 != 7864LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x97 = UINT32_MAX;
	int8_t x100 = INT8_MIN;
	uint32_t t12 = UINT32_MAX;

	t12 = (x97>>(x98<(x99/x100)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x105 = INT8_MAX;
	int64_t x106 = -1LL;
	static int8_t x108 = INT8_MIN;

	t13 = (x105>>(x106<(x107/x108)));

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = UINT32_MAX;
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int32_t x116 = -16333824;
	volatile uint32_t t14 = 152976451U;

	t14 = (x113>>(x114<(x115/x116)));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x118 = -1;
	volatile int8_t x119 = 3;
	static int8_t x120 = -1;
	volatile int32_t t15 = -4139206;

	t15 = (x117>>(x118<(x119/x120)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = UINT8_MAX;

	t16 = (x125>>(x126<(x127/x128)));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x133 = 15U;
	int8_t x134 = INT8_MAX;
	static uint8_t x135 = 3U;
	static uint32_t x136 = 1463072U;
	int32_t t17 = 20879;

	t17 = (x133>>(x134<(x135/x136)));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x161 = INT64_MAX;
	int16_t x162 = 301;
	uint8_t x163 = 1U;
	int64_t x164 = 229159547444423236LL;
	int64_t t18 = INT64_MAX;

	t18 = (x161>>(x162<(x163/x164)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x165 = INT64_MAX;
	uint32_t x167 = 8981U;
	volatile int32_t x168 = INT32_MIN;
	int64_t t19 = INT64_MAX;

	t19 = (x165>>(x166<(x167/x168)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x169 = 24584U;
	static int64_t x170 = INT64_MIN;
	static volatile int32_t x171 = 24;
	static int32_t t20 = -97378755;

	t20 = (x169>>(x170<(x171/x172)));

	if (t20 != 12292) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MAX;
	int64_t x176 = 10LL;
	volatile int32_t t21 = -414;

	t21 = (x173>>(x174<(x175/x176)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MIN;
	int8_t x184 = 1;
	volatile int32_t t22 = -27290;

	t22 = (x181>>(x182<(x183/x184)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x185 = 1;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	static uint16_t x188 = 2U;

	t23 = (x185>>(x186<(x187/x188)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x189 = INT32_MAX;
	int64_t x190 = -12368578345LL;
	uint8_t x191 = 76U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x189>>(x190<(x191/x192)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x194 = 133500205214528455LLU;
	int64_t x195 = INT64_MIN;
	volatile int64_t x196 = INT64_MIN;
	int32_t t25 = 9;

	t25 = (x193>>(x194<(x195/x196)));

	if (t25 != 50144749) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x197 = 25980964;
	int32_t x199 = INT32_MAX;
	static int16_t x200 = -1;
	int32_t t26 = 2895;

	t26 = (x197>>(x198<(x199/x200)));

	if (t26 != 25980964) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x209 = 25;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	static int32_t t27 = -685;

	t27 = (x209>>(x210<(x211/x212)));

	if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x213 = 29;
	static volatile int16_t x214 = 3374;
	uint16_t x215 = 515U;
	static volatile int32_t t28 = -117;

	t28 = (x213>>(x214<(x215/x216)));

	if (t28 != 29) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 1748U;
	volatile int32_t x219 = -1;
	int16_t x220 = -2559;
	static volatile int32_t t29 = 1558780;

	t29 = (x217>>(x218<(x219/x220)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x222 = UINT16_MAX;
	uint64_t x223 = 26961227239LLU;
	int16_t x224 = -1;
	volatile int32_t t30 = 328550523;

	t30 = (x221>>(x222<(x223/x224)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x225 = INT32_MAX;
	int32_t x227 = 16062;
	int32_t x228 = 13352972;
	volatile int32_t t31 = INT32_MAX;

	t31 = (x225>>(x226<(x227/x228)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x229 = INT64_MAX;
	static uint64_t x230 = UINT64_MAX;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = 3;
	static volatile int64_t t32 = INT64_MAX;

	t32 = (x229>>(x230<(x231/x232)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x245 = 2254U;
	uint32_t x246 = 1741467504U;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = 1871513421U;

	t33 = (x245>>(x246<(x247/x248)));

	if (t33 != 2254) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = INT16_MIN;
	static int64_t x252 = 53LL;
	int32_t t34 = 12927056;

	t34 = (x249>>(x250<(x251/x252)));

	if (t34 != 16383) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x253 = INT8_MAX;
	static int16_t x254 = 31;
	int8_t x255 = 0;
	static uint16_t x256 = 1321U;
	volatile int32_t t35 = -1397;

	t35 = (x253>>(x254<(x255/x256)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x261 = 23739900716LL;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t36 = -113661526290954LL;

	t36 = (x261>>(x262<(x263/x264)));

	if (t36 != 23739900716LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x265 = UINT64_MAX;
	static volatile int16_t x267 = -1;
	int64_t x268 = INT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x265>>(x266<(x267/x268)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x269 = 86;
	int8_t x270 = -1;
	int32_t x271 = 4162494;
	static volatile int16_t x272 = INT16_MIN;
	int32_t t38 = 433495865;

	t38 = (x269>>(x270<(x271/x272)));

	if (t38 != 86) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x278 = UINT8_MAX;
	volatile int16_t x279 = INT16_MIN;
	uint64_t t39 = 14317LLU;

	t39 = (x277>>(x278<(x279/x280)));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x281 = 12;
	int16_t x282 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;

	t40 = (x281>>(x282<(x283/x284)));

	if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x293 = 22U;
	uint64_t x294 = 291350LLU;
	static int8_t x295 = INT8_MIN;

	t41 = (x293>>(x294<(x295/x296)));

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x297 = UINT64_MAX;
	uint8_t x298 = 0U;
	int8_t x299 = INT8_MAX;
	volatile uint8_t x300 = UINT8_MAX;
	static uint64_t t42 = UINT64_MAX;

	t42 = (x297>>(x298<(x299/x300)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x309 = INT8_MAX;
	static int64_t x310 = INT64_MIN;
	uint32_t x312 = 2113U;

	t43 = (x309>>(x310<(x311/x312)));

	if (t43 != 63) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x333 = 10;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	volatile int32_t t44 = 436045;

	t44 = (x333>>(x334<(x335/x336)));

	if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = 178;
	volatile int8_t x339 = 7;
	uint64_t x340 = 314118LLU;
	volatile int32_t t45 = INT32_MAX;

	t45 = (x337>>(x338<(x339/x340)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x350 = 103U;
	uint32_t x351 = 933938U;
	uint16_t x352 = UINT16_MAX;

	t46 = (x349>>(x350<(x351/x352)));

	if (t46 != 521385LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x353 = 6U;
	volatile int16_t x354 = INT16_MIN;
	static int64_t x355 = 101933889680LL;
	int8_t x356 = INT8_MAX;
	volatile int32_t t47 = -3734;

	t47 = (x353>>(x354<(x355/x356)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x357 = 30LL;
	int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	static uint16_t x360 = UINT16_MAX;
	int64_t t48 = 912651353740LL;

	t48 = (x357>>(x358<(x359/x360)));

	if (t48 != 15LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MAX;
	int8_t x364 = -9;
	volatile int32_t t49 = 311750988;

	t49 = (x361>>(x362<(x363/x364)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x374 = 170;
	int64_t x375 = -1LL;
	uint64_t x376 = 3107275268758LLU;

	t50 = (x373>>(x374<(x375/x376)));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x382 = INT64_MAX;
	static int32_t x383 = INT32_MIN;
	uint16_t x384 = 18U;

	t51 = (x381>>(x382<(x383/x384)));

	if (t51 != 30134117) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x385 = 4U;
	static int64_t x386 = INT64_MAX;
	static volatile int64_t x387 = INT64_MIN;
	static int8_t x388 = INT8_MIN;

	t52 = (x385>>(x386<(x387/x388)));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x409 = UINT8_MAX;
	int16_t x411 = 44;
	int16_t x412 = -7;
	int32_t t53 = -503;

	t53 = (x409>>(x410<(x411/x412)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x413 = 30933548432032LLU;
	static int16_t x414 = INT16_MAX;
	uint64_t x415 = UINT64_MAX;
	static int16_t x416 = -1;
	uint64_t t54 = 757277935018427LLU;

	t54 = (x413>>(x414<(x415/x416)));

	if (t54 != 30933548432032LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x417 = 30990547U;
	static volatile int16_t x418 = INT16_MIN;
	static int8_t x419 = INT8_MIN;
	volatile int16_t x420 = -1;
	volatile uint32_t t55 = 346642574U;

	t55 = (x417>>(x418<(x419/x420)));

	if (t55 != 15495273U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x421 = UINT32_MAX;
	static volatile int64_t x422 = 168782651470LL;
	static uint8_t x423 = 3U;
	static uint32_t x424 = 21730797U;
	uint32_t t56 = UINT32_MAX;

	t56 = (x421>>(x422<(x423/x424)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x441 = UINT64_MAX;
	static int64_t x442 = INT64_MIN;
	static volatile int64_t x444 = INT64_MAX;

	t57 = (x441>>(x442<(x443/x444)));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x446 = INT16_MAX;
	uint64_t x447 = 1487969459434201LLU;
	volatile int8_t x448 = INT8_MIN;
	volatile int32_t t58 = -59399711;

	t58 = (x445>>(x446<(x447/x448)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x449 = UINT64_MAX;
	int16_t x450 = -34;
	int32_t x451 = -1;
	int16_t x452 = 7;
	uint64_t t59 = 1147090724LLU;

	t59 = (x449>>(x450<(x451/x452)));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x454 = -2;
	int16_t x455 = INT16_MIN;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t60 = 458441718;

	t60 = (x453>>(x454<(x455/x456)));

	if (t60 != 122) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x457 = 7U;
	volatile uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 19806U;
	uint32_t x460 = 250U;
	uint32_t t61 = 9867U;

	t61 = (x457>>(x458<(x459/x460)));

	if (t61 != 7U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x481 = 41U;
	static volatile int32_t x482 = -1;
	int32_t x483 = INT32_MAX;
	uint8_t x484 = UINT8_MAX;
	volatile uint32_t t62 = 14151099U;

	t62 = (x481>>(x482<(x483/x484)));

	if (t62 != 20U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x485 = UINT8_MAX;
	int16_t x486 = INT16_MIN;
	int32_t x487 = -1;
	uint32_t x488 = 3U;

	t63 = (x485>>(x486<(x487/x488)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x489 = INT64_MAX;
	int64_t x490 = INT64_MIN;
	uint32_t x492 = 1700813231U;
	int64_t t64 = -14085859371774LL;

	t64 = (x489>>(x490<(x491/x492)));

	if (t64 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x494 = INT64_MIN;
	uint8_t x496 = 52U;

	t65 = (x493>>(x494<(x495/x496)));

	if (t65 != 46LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x497 = 1U;
	uint8_t x498 = UINT8_MAX;
	uint8_t x500 = 61U;
	uint32_t t66 = 0U;

	t66 = (x497>>(x498<(x499/x500)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x502 = 0U;
	static uint64_t x503 = 144LLU;
	uint16_t x504 = 29545U;
	volatile int32_t t67 = -787084;

	t67 = (x501>>(x502<(x503/x504)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x505 = 85U;
	int16_t x507 = -1;
	int16_t x508 = -13;
	int32_t t68 = -264671420;

	t68 = (x505>>(x506<(x507/x508)));

	if (t68 != 42) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x529 = 3260LLU;
	int8_t x530 = 3;
	int8_t x531 = INT8_MAX;
	static volatile uint64_t t69 = 1884329605942LLU;

	t69 = (x529>>(x530<(x531/x532)));

	if (t69 != 3260LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x545 = 55525381U;
	static uint64_t x547 = 141637680280237872LLU;
	int64_t x548 = INT64_MIN;

	t70 = (x545>>(x546<(x547/x548)));

	if (t70 != 55525381U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x549 = UINT16_MAX;
	static volatile int64_t x550 = INT64_MIN;
	int32_t x551 = INT32_MIN;
	int64_t x552 = INT64_MIN;
	volatile int32_t t71 = 317421;

	t71 = (x549>>(x550<(x551/x552)));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x553 = INT16_MAX;
	int8_t x554 = INT8_MIN;
	volatile int8_t x555 = INT8_MIN;
	int32_t t72 = -488794;

	t72 = (x553>>(x554<(x555/x556)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x569 = INT64_MAX;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = 5U;

	t73 = (x569>>(x570<(x571/x572)));

	if (t73 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x573 = UINT16_MAX;
	int64_t x574 = INT64_MIN;
	int64_t x576 = 5087968699814LL;
	volatile int32_t t74 = -785;

	t74 = (x573>>(x574<(x575/x576)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x581 = INT16_MAX;
	static int64_t x582 = INT64_MIN;
	int64_t x584 = INT64_MIN;
	volatile int32_t t75 = -1;

	t75 = (x581>>(x582<(x583/x584)));

	if (t75 != 16383) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x585 = 807444678;
	int16_t x587 = INT16_MIN;
	uint64_t x588 = 649308998LLU;
	int32_t t76 = 202301;

	t76 = (x585>>(x586<(x587/x588)));

	if (t76 != 403722339) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x589 = INT32_MAX;
	int64_t x590 = INT64_MAX;
	uint8_t x591 = 0U;
	int32_t x592 = -90;
	int32_t t77 = INT32_MAX;

	t77 = (x589>>(x590<(x591/x592)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x593 = UINT64_MAX;
	int8_t x594 = INT8_MIN;
	uint16_t x595 = 2U;
	uint64_t t78 = 150657962178LLU;

	t78 = (x593>>(x594<(x595/x596)));

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x597 = UINT8_MAX;
	volatile int64_t x598 = INT64_MIN;
	uint8_t x599 = 15U;
	static uint16_t x600 = 391U;
	volatile int32_t t79 = 62;

	t79 = (x597>>(x598<(x599/x600)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x601 = 0U;
	int32_t x602 = 123822861;
	static int16_t x603 = 6378;
	static int32_t t80 = 3737003;

	t80 = (x601>>(x602<(x603/x604)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x605 = 2U;
	volatile int32_t x607 = INT32_MAX;
	static int16_t x608 = INT16_MAX;
	static int32_t t81 = -656253165;

	t81 = (x605>>(x606<(x607/x608)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x613 = INT32_MAX;
	int16_t x614 = 8;
	int8_t x615 = -1;
	static volatile int32_t t82 = INT32_MAX;

	t82 = (x613>>(x614<(x615/x616)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x617 = 471213319077LL;
	static uint32_t x618 = 213144U;
	static int16_t x619 = 0;
	volatile int64_t x620 = INT64_MIN;
	int64_t t83 = -121624781935LL;

	t83 = (x617>>(x618<(x619/x620)));

	if (t83 != 471213319077LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x622 = UINT32_MAX;
	static int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;

	t84 = (x621>>(x622<(x623/x624)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x625 = 1U;
	int64_t x627 = INT64_MAX;
	uint16_t x628 = UINT16_MAX;
	int32_t t85 = 1;

	t85 = (x625>>(x626<(x627/x628)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x629 = UINT32_MAX;
	volatile int64_t x630 = -218399LL;
	int64_t x631 = INT64_MAX;
	int32_t x632 = INT32_MIN;

	t86 = (x629>>(x630<(x631/x632)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x637 = INT32_MAX;
	volatile int8_t x638 = INT8_MAX;
	uint16_t x639 = 21344U;
	int8_t x640 = INT8_MIN;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x637>>(x638<(x639/x640)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x645 = 2U;
	static uint64_t x646 = 3508LLU;
	volatile uint32_t x647 = UINT32_MAX;
	int8_t x648 = -1;
	volatile int32_t t88 = 4808449;

	t88 = (x645>>(x646<(x647/x648)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x653 = UINT16_MAX;
	int16_t x654 = INT16_MAX;
	int16_t x655 = INT16_MAX;
	int32_t x656 = -3601108;
	volatile int32_t t89 = 1;

	t89 = (x653>>(x654<(x655/x656)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x662 = INT8_MIN;
	int8_t x663 = INT8_MIN;
	static volatile uint64_t x664 = 16909LLU;
	static uint32_t t90 = 30964007U;

	t90 = (x661>>(x662<(x663/x664)));

	if (t90 != 15791U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x693 = INT32_MAX;
	static int64_t x695 = INT64_MAX;
	uint8_t x696 = 8U;
	int32_t t91 = 25;

	t91 = (x693>>(x694<(x695/x696)));

	if (t91 != 1073741823) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x709 = 26;
	uint8_t x711 = UINT8_MAX;
	volatile uint64_t x712 = UINT64_MAX;
	int32_t t92 = -292087571;

	t92 = (x709>>(x710<(x711/x712)));

	if (t92 != 26) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x715 = 26U;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x713>>(x714<(x715/x716)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x718 = -1;
	uint16_t x719 = 2607U;
	static int16_t x720 = -1;
	volatile int32_t t94 = 3;

	t94 = (x717>>(x718<(x719/x720)));

	if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x725 = 200U;
	volatile int8_t x726 = INT8_MAX;
	int64_t x727 = INT64_MIN;
	int8_t x728 = -61;
	int32_t t95 = -1973;

	t95 = (x725>>(x726<(x727/x728)));

	if (t95 != 100) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x737 = 8382638U;
	int32_t x738 = INT32_MAX;
	int64_t x740 = INT64_MIN;
	uint32_t t96 = 32749U;

	t96 = (x737>>(x738<(x739/x740)));

	if (t96 != 8382638U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x742 = 3201;
	static uint32_t x743 = 2251380U;
	static uint64_t t97 = 10713688398662513LLU;

	t97 = (x741>>(x742<(x743/x744)));

	if (t97 != 127177580052474851LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x749 = 470U;
	static uint16_t x750 = 1U;
	uint64_t x751 = 678967741562LLU;
	uint64_t x752 = 2138LLU;
	static int32_t t98 = -14955067;

	t98 = (x749>>(x750<(x751/x752)));

	if (t98 != 235) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x753 = 587732LLU;
	uint8_t x754 = 1U;
	static volatile int32_t x755 = INT32_MIN;
	int8_t x756 = 43;
	volatile uint64_t t99 = 1207182513689115LLU;

	t99 = (x753>>(x754<(x755/x756)));

	if (t99 != 587732LLU) { NG(); } else { ; }
	
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

