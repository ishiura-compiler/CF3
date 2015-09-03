#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x3 = UINT32_MAX;
int32_t x4 = INT32_MIN;
volatile uint8_t x21 = 8U;
int64_t x29 = -364620221LL;
volatile int8_t x47 = -2;
int32_t x49 = INT32_MIN;
volatile int32_t t7 = INT32_MIN;
int64_t x61 = 3599469870868LL;
int8_t x64 = INT8_MIN;
volatile int64_t t8 = 48LL;
int8_t x67 = -1;
volatile int8_t x68 = INT8_MIN;
int16_t x69 = 1173;
uint32_t x76 = 53357396U;
int32_t x77 = INT32_MIN;
uint64_t x79 = UINT64_MAX;
uint16_t x105 = UINT16_MAX;
uint8_t x107 = UINT8_MAX;
volatile int32_t t15 = 12;
int32_t x123 = -9907;
volatile uint8_t x136 = UINT8_MAX;
uint16_t x158 = 0U;
uint64_t x160 = UINT64_MAX;
volatile int8_t x187 = INT8_MAX;
int32_t x198 = INT32_MIN;
static volatile int32_t t24 = 2;
int64_t x201 = INT64_MIN;
volatile int16_t x203 = INT16_MIN;
volatile int64_t t25 = INT64_MIN;
int64_t x206 = -668679246104LL;
static volatile int32_t t26 = 1866;
volatile int16_t x221 = INT16_MIN;
int64_t x233 = INT64_MIN;
static int16_t x235 = -1;
int32_t x236 = INT32_MIN;
uint64_t x240 = 901LLU;
int32_t x265 = 28383354;
int8_t x269 = -43;
int32_t x279 = -1;
int32_t x285 = INT32_MAX;
uint64_t x305 = UINT64_MAX;
volatile uint64_t t37 = UINT64_MAX;
static uint32_t x315 = 213340522U;
static uint64_t x316 = 3871LLU;
int32_t t38 = -397321920;
volatile int32_t t39 = -244;
int8_t x331 = -1;
int64_t t41 = INT64_MAX;
int32_t x346 = -232715;
int8_t x347 = -1;
volatile int64_t x348 = 1LL;
int32_t x375 = INT32_MAX;
int32_t x418 = INT32_MIN;
int16_t x487 = INT16_MIN;
int64_t x488 = INT64_MAX;
int32_t t49 = 113993587;
int64_t x497 = INT64_MIN;
uint64_t x505 = 3506LLU;
int64_t x506 = -1LL;
int16_t x508 = INT16_MAX;
int32_t x517 = INT32_MIN;
static volatile int32_t t54 = -387167804;
int32_t x536 = INT32_MIN;
int16_t x541 = INT16_MIN;
uint32_t x544 = 4537U;
volatile int32_t t56 = 0;
static int16_t x555 = 2;
static uint8_t x574 = 0U;
volatile int32_t t59 = -2443;
int32_t x594 = -1446752;
uint64_t x597 = 683661886073495LLU;
static int16_t x600 = INT16_MAX;
int64_t x616 = INT64_MAX;
uint8_t x623 = 1U;
volatile int16_t x647 = INT16_MAX;
uint8_t x662 = 1U;
volatile int32_t x663 = -3240;
static int16_t x690 = INT16_MIN;
static volatile int32_t x692 = INT32_MIN;
int64_t t70 = -1LL;
volatile int32_t t71 = 5381;
int16_t x719 = INT16_MIN;
int32_t x727 = -1;
int64_t x787 = -1LL;
uint16_t x792 = 1565U;
int64_t t77 = INT64_MIN;
int32_t x826 = INT32_MIN;
int32_t x853 = 7;
static int16_t x854 = INT16_MIN;
volatile int32_t t82 = -39407;
uint64_t x866 = 1584590582080651LLU;
uint32_t x871 = 41958918U;
volatile int8_t x872 = 1;
int16_t x888 = INT16_MIN;
uint32_t t86 = UINT32_MAX;
uint64_t x893 = 2LLU;
int16_t x894 = INT16_MIN;
volatile int32_t x917 = 1610217;
uint32_t x921 = 292946U;
int16_t x930 = -1;
int32_t x993 = -1;


void f0(void) {
	int16_t x1 = 0;
	volatile int64_t x2 = INT64_MIN;
	static int32_t t0 = 72721;

	t0 = (x1/(x2<=(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x22 = INT64_MIN;
	volatile uint8_t x23 = 1U;
	int64_t x24 = 796LL;
	int32_t t1 = -1135;

	t1 = (x21/(x22<=(x23/x24)));

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x25 = 0;
	static int64_t x26 = INT64_MIN;
	int64_t x27 = 612093667344900713LL;
	int64_t x28 = -455282568551409LL;
	int32_t t2 = -645043623;

	t2 = (x25/(x26<=(x27/x28)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x30 = -1;
	static int32_t x31 = 15;
	int64_t x32 = INT64_MAX;
	volatile int64_t t3 = 257301943715051LL;

	t3 = (x29/(x30<=(x31/x32)));

	if (t3 != -364620221LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = 259642;
	volatile int32_t x34 = 4222131;
	int64_t x35 = INT64_MIN;
	volatile int8_t x36 = INT8_MIN;
	static int32_t t4 = -38;

	t4 = (x33/(x34<=(x35/x36)));

	if (t4 != 259642) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = -1;
	static int8_t x43 = -42;
	uint16_t x44 = 546U;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x41/(x42<=(x43/x44)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 258U;
	volatile int8_t x46 = -1;
	static int64_t x48 = INT64_MIN;
	int32_t t6 = 9;

	t6 = (x45/(x46<=(x47/x48)));

	if (t6 != 258) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x50 = INT8_MIN;
	volatile int64_t x51 = INT64_MIN;
	int32_t x52 = -85831256;

	t7 = (x49/(x50<=(x51/x52)));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x62 = 0;
	uint32_t x63 = 26495696U;

	t8 = (x61/(x62<=(x63/x64)));

	if (t8 != 3599469870868LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x65 = 199LL;
	int64_t x66 = INT64_MIN;
	static int64_t t9 = 13912534339LL;

	t9 = (x65/(x66<=(x67/x68)));

	if (t9 != 199LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x70 = INT64_MIN;
	static volatile uint32_t x71 = 169279U;
	int32_t x72 = -261201;
	static volatile int32_t t10 = 0;

	t10 = (x69/(x70<=(x71/x72)));

	if (t10 != 1173) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	uint64_t x74 = 109982LLU;
	volatile uint64_t x75 = 28456130560660LLU;
	volatile int32_t t11 = -50337074;

	t11 = (x73/(x74<=(x75/x76)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x78 = 42LLU;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x77/(x78<=(x79/x80)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x93 = 1;
	int64_t x94 = -852145874LL;
	int8_t x95 = -1;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t13 = -1;

	t13 = (x93/(x94<=(x95/x96)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x101 = UINT8_MAX;
	volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = 2U;
	volatile int64_t x104 = INT64_MIN;
	int32_t t14 = 12;

	t14 = (x101/(x102<=(x103/x104)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x106 = INT64_MIN;
	volatile int64_t x108 = INT64_MIN;

	t15 = (x105/(x106<=(x107/x108)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x113 = INT16_MIN;
	static volatile int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MAX;
	volatile int32_t t16 = 3652;

	t16 = (x113/(x114<=(x115/x116)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x121 = INT8_MIN;
	static uint16_t x122 = 0U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t17 = -491;

	t17 = (x121/(x122<=(x123/x124)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x133 = 3429U;
	uint8_t x134 = 58U;
	volatile int64_t x135 = INT64_MAX;
	static int32_t t18 = -3386527;

	t18 = (x133/(x134<=(x135/x136)));

	if (t18 != 3429) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x141 = INT32_MIN;
	int8_t x142 = -31;
	static uint16_t x143 = 6U;
	volatile uint8_t x144 = 1U;
	int32_t t19 = INT32_MIN;

	t19 = (x141/(x142<=(x143/x144)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x153 = INT64_MAX;
	int32_t x154 = INT32_MIN;
	volatile int32_t x155 = -58963;
	int16_t x156 = INT16_MAX;
	int64_t t20 = INT64_MAX;

	t20 = (x153/(x154<=(x155/x156)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x157 = -1;
	int32_t x159 = INT32_MIN;
	volatile int32_t t21 = -24827048;

	t21 = (x157/(x158<=(x159/x160)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MIN;
	static uint16_t x167 = 43U;
	static uint8_t x168 = 113U;
	uint32_t t22 = UINT32_MAX;

	t22 = (x165/(x166<=(x167/x168)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = -1;
	uint8_t x188 = 7U;
	int32_t t23 = -2032;

	t23 = (x185/(x186<=(x187/x188)));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x199 = 2;
	volatile int32_t x200 = 746;

	t24 = (x197/(x198<=(x199/x200)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x202 = -1;
	static int64_t x204 = -89084LL;

	t25 = (x201/(x202<=(x203/x204)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x207 = -1;
	static uint16_t x208 = 106U;

	t26 = (x205/(x206<=(x207/x208)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x213 = 333323U;
	int8_t x214 = -1;
	volatile int8_t x215 = -30;
	int64_t x216 = INT64_MIN;
	static volatile uint32_t t27 = 841012046U;

	t27 = (x213/(x214<=(x215/x216)));

	if (t27 != 333323U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x222 = 0LLU;
	volatile int64_t x223 = -1LL;
	uint32_t x224 = 37608857U;
	static int32_t t28 = -176126285;

	t28 = (x221/(x222<=(x223/x224)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x234 = INT8_MIN;
	volatile int64_t t29 = INT64_MIN;

	t29 = (x233/(x234<=(x235/x236)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x237 = INT16_MAX;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = -76;
	int32_t t30 = 121515;

	t30 = (x237/(x238<=(x239/x240)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x257 = INT32_MIN;
	static volatile int8_t x258 = INT8_MIN;
	volatile int32_t x259 = 3;
	int64_t x260 = INT64_MAX;
	static int32_t t31 = INT32_MIN;

	t31 = (x257/(x258<=(x259/x260)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x266 = INT16_MIN;
	volatile int64_t x267 = 2553416LL;
	int16_t x268 = INT16_MAX;
	int32_t t32 = 169848;

	t32 = (x265/(x266<=(x267/x268)));

	if (t32 != 28383354) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x270 = 910166643515LLU;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = INT32_MIN;
	int32_t t33 = -1296445;

	t33 = (x269/(x270<=(x271/x272)));

	if (t33 != -43) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x277 = 2906;
	int32_t x278 = INT32_MIN;
	static volatile int32_t x280 = -1;
	volatile int32_t t34 = -6263;

	t34 = (x277/(x278<=(x279/x280)));

	if (t34 != 2906) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x286 = -3136LL;
	int64_t x287 = -1LL;
	static int16_t x288 = -99;
	static volatile int32_t t35 = INT32_MAX;

	t35 = (x285/(x286<=(x287/x288)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x301 = 125U;
	int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MIN;
	static int8_t x304 = -7;
	int32_t t36 = 2043691;

	t36 = (x301/(x302<=(x303/x304)));

	if (t36 != 125) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	int8_t x308 = 2;

	t37 = (x305/(x306<=(x307/x308)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x313 = 102159864;
	uint32_t x314 = 22238U;

	t38 = (x313/(x314<=(x315/x316)));

	if (t38 != 102159864) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	volatile int64_t x323 = -1LL;
	uint32_t x324 = 776020456U;

	t39 = (x321/(x322<=(x323/x324)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x329 = INT64_MIN;
	volatile int64_t x330 = -5568439536LL;
	int8_t x332 = -1;
	static int64_t t40 = INT64_MIN;

	t40 = (x329/(x330<=(x331/x332)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x333 = INT64_MAX;
	static int8_t x334 = -1;
	volatile int16_t x335 = -1;
	static uint8_t x336 = 2U;

	t41 = (x333/(x334<=(x335/x336)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	int64_t x343 = 150293885775820LL;
	static int32_t x344 = 1956754;
	static volatile int64_t t42 = -50115LL;

	t42 = (x341/(x342<=(x343/x344)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x345 = 11U;
	volatile int32_t t43 = -1974;

	t43 = (x345/(x346<=(x347/x348)));

	if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x349 = 27U;
	int16_t x350 = -1;
	volatile int16_t x351 = INT16_MAX;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t44 = 8011888;

	t44 = (x349/(x350<=(x351/x352)));

	if (t44 != 27) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MIN;
	uint16_t x376 = 30U;
	static volatile uint64_t t45 = UINT64_MAX;

	t45 = (x373/(x374<=(x375/x376)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x413 = -1LL;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MIN;
	volatile int16_t x416 = -27;
	int64_t t46 = 7436229LL;

	t46 = (x413/(x414<=(x415/x416)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x417 = 557;
	int16_t x419 = -1078;
	volatile int16_t x420 = -3029;
	volatile int32_t t47 = 11246;

	t47 = (x417/(x418<=(x419/x420)));

	if (t47 != 557) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x469 = 233;
	uint16_t x470 = 2903U;
	int32_t x471 = INT32_MAX;
	int16_t x472 = INT16_MAX;
	int32_t t48 = -1;

	t48 = (x469/(x470<=(x471/x472)));

	if (t48 != 233) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x485 = UINT8_MAX;
	int64_t x486 = INT64_MIN;

	t49 = (x485/(x486<=(x487/x488)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x498 = INT64_MIN;
	int64_t x499 = 157552964LL;
	static int8_t x500 = INT8_MIN;
	int64_t t50 = INT64_MIN;

	t50 = (x497/(x498<=(x499/x500)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x507 = 2179824161873LL;
	static volatile uint64_t t51 = 65266428776243LLU;

	t51 = (x505/(x506<=(x507/x508)));

	if (t51 != 3506LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x509 = -4;
	static volatile int8_t x510 = INT8_MIN;
	int32_t x511 = 401252;
	int16_t x512 = INT16_MAX;
	volatile int32_t t52 = 36878276;

	t52 = (x509/(x510<=(x511/x512)));

	if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x518 = 1U;
	uint64_t x519 = 4148484LLU;
	int16_t x520 = INT16_MAX;
	int32_t t53 = INT32_MIN;

	t53 = (x517/(x518<=(x519/x520)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x521 = -529;
	uint64_t x522 = 32586284LLU;
	static int32_t x523 = INT32_MIN;
	static int16_t x524 = INT16_MAX;

	t54 = (x521/(x522<=(x523/x524)));

	if (t54 != -529) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x534 = INT8_MIN;
	volatile int64_t x535 = 19759408420LL;
	static volatile uint32_t t55 = UINT32_MAX;

	t55 = (x533/(x534<=(x535/x536)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x542 = INT16_MAX;
	int8_t x543 = -1;

	t56 = (x541/(x542<=(x543/x544)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MIN;
	int64_t x556 = -17372389491023LL;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x553/(x554<=(x555/x556)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x561 = UINT64_MAX;
	static uint16_t x562 = 0U;
	uint16_t x563 = 337U;
	volatile int32_t x564 = INT32_MIN;
	uint64_t t58 = UINT64_MAX;

	t58 = (x561/(x562<=(x563/x564)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x573 = -3;
	int64_t x575 = -1LL;
	int32_t x576 = -5249;

	t59 = (x573/(x574<=(x575/x576)));

	if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x593 = INT8_MIN;
	static uint16_t x595 = UINT16_MAX;
	int32_t x596 = -394045;
	int32_t t60 = -921966;

	t60 = (x593/(x594<=(x595/x596)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x598 = 0;
	int8_t x599 = INT8_MIN;
	volatile uint64_t t61 = 9440075LLU;

	t61 = (x597/(x598<=(x599/x600)));

	if (t61 != 683661886073495LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x613 = INT32_MIN;
	static int8_t x614 = INT8_MIN;
	volatile int64_t x615 = INT64_MIN;
	volatile int32_t t62 = INT32_MIN;

	t62 = (x613/(x614<=(x615/x616)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x617 = -515189591390LL;
	int16_t x618 = INT16_MIN;
	int8_t x619 = -1;
	volatile int8_t x620 = 1;
	int64_t t63 = -34451072443583833LL;

	t63 = (x617/(x618<=(x619/x620)));

	if (t63 != -515189591390LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x621 = 13406745239189344LL;
	int8_t x622 = -36;
	static int16_t x624 = -25;
	int64_t t64 = -68500211020546472LL;

	t64 = (x621/(x622<=(x623/x624)));

	if (t64 != 13406745239189344LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x633 = 0;
	int32_t x634 = -1;
	int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MAX;
	static int32_t t65 = 12;

	t65 = (x633/(x634<=(x635/x636)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x645 = INT16_MAX;
	int32_t x646 = INT32_MIN;
	uint16_t x648 = 31U;
	int32_t t66 = -1039;

	t66 = (x645/(x646<=(x647/x648)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x649 = -1LL;
	static int8_t x650 = INT8_MIN;
	volatile int32_t x651 = INT32_MIN;
	int64_t x652 = INT64_MAX;
	int64_t t67 = 1LL;

	t67 = (x649/(x650<=(x651/x652)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x661 = 526;
	volatile int32_t x664 = -1;
	static volatile int32_t t68 = -8165;

	t68 = (x661/(x662<=(x663/x664)));

	if (t68 != 526) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x689 = 1137;
	int64_t x691 = -957342864575LL;
	volatile int32_t t69 = -462;

	t69 = (x689/(x690<=(x691/x692)));

	if (t69 != 1137) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x693 = -104912010LL;
	int16_t x694 = -1;
	int16_t x695 = -1;
	uint8_t x696 = UINT8_MAX;

	t70 = (x693/(x694<=(x695/x696)));

	if (t70 != -104912010LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x701 = -1;
	static uint32_t x702 = UINT32_MAX;
	volatile int16_t x703 = -159;
	static uint64_t x704 = 3634952658LLU;

	t71 = (x701/(x702<=(x703/x704)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x717 = INT8_MAX;
	volatile int64_t x718 = INT64_MIN;
	static int16_t x720 = 2741;
	volatile int32_t t72 = -35;

	t72 = (x717/(x718<=(x719/x720)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x725 = INT32_MIN;
	int64_t x726 = -1LL;
	int16_t x728 = 180;
	int32_t t73 = INT32_MIN;

	t73 = (x725/(x726<=(x727/x728)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x769 = 26578702215665LLU;
	int8_t x770 = -12;
	int16_t x771 = 1;
	int16_t x772 = INT16_MAX;
	uint64_t t74 = 21993235078LLU;

	t74 = (x769/(x770<=(x771/x772)));

	if (t74 != 26578702215665LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x785 = -1;
	uint32_t x786 = 14U;
	uint64_t x788 = 1980384593995LLU;
	static int32_t t75 = -46633;

	t75 = (x785/(x786<=(x787/x788)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x789 = -1;
	int64_t x790 = INT64_MIN;
	static uint8_t x791 = UINT8_MAX;
	volatile int32_t t76 = 25;

	t76 = (x789/(x790<=(x791/x792)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x793 = INT64_MIN;
	int8_t x794 = 0;
	int32_t x795 = INT32_MIN;
	int16_t x796 = INT16_MIN;

	t77 = (x793/(x794<=(x795/x796)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x801 = 198126573381476LLU;
	static int16_t x802 = INT16_MIN;
	int8_t x803 = 1;
	int8_t x804 = INT8_MIN;
	uint64_t t78 = 3133677285511066LLU;

	t78 = (x801/(x802<=(x803/x804)));

	if (t78 != 198126573381476LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x813 = -5609;
	uint64_t x814 = 15824LLU;
	volatile int16_t x815 = INT16_MAX;
	volatile int8_t x816 = INT8_MIN;
	int32_t t79 = -157859199;

	t79 = (x813/(x814<=(x815/x816)));

	if (t79 != -5609) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x825 = INT8_MIN;
	int8_t x827 = INT8_MIN;
	int8_t x828 = -1;
	volatile int32_t t80 = -3;

	t80 = (x825/(x826<=(x827/x828)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x833 = UINT64_MAX;
	volatile int8_t x834 = -1;
	uint16_t x835 = UINT16_MAX;
	int32_t x836 = INT32_MIN;
	static volatile uint64_t t81 = UINT64_MAX;

	t81 = (x833/(x834<=(x835/x836)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x855 = INT8_MIN;
	static volatile int16_t x856 = INT16_MIN;

	t82 = (x853/(x854<=(x855/x856)));

	if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x865 = UINT8_MAX;
	int16_t x867 = INT16_MIN;
	int8_t x868 = INT8_MAX;
	int32_t t83 = 23820;

	t83 = (x865/(x866<=(x867/x868)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x869 = 33705567106LLU;
	static uint8_t x870 = 0U;
	uint64_t t84 = 34677763283LLU;

	t84 = (x869/(x870<=(x871/x872)));

	if (t84 != 33705567106LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x885 = 8U;
	volatile int8_t x886 = INT8_MIN;
	int16_t x887 = -4236;
	int32_t t85 = -305945789;

	t85 = (x885/(x886<=(x887/x888)));

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x889 = UINT32_MAX;
	int8_t x890 = INT8_MIN;
	static int64_t x891 = 44154LL;
	uint16_t x892 = 98U;

	t86 = (x889/(x890<=(x891/x892)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x895 = 9U;
	uint8_t x896 = 2U;
	static volatile uint64_t t87 = 2725957LLU;

	t87 = (x893/(x894<=(x895/x896)));

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x918 = 905U;
	int32_t x919 = -13;
	int8_t x920 = 1;
	volatile int32_t t88 = 19;

	t88 = (x917/(x918<=(x919/x920)));

	if (t88 != 1610217) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x922 = -1LL;
	int8_t x923 = INT8_MAX;
	static int16_t x924 = INT16_MIN;
	uint32_t t89 = 697U;

	t89 = (x921/(x922<=(x923/x924)));

	if (t89 != 292946U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x929 = -1817328443252LL;
	static int8_t x931 = -1;
	int8_t x932 = INT8_MIN;
	volatile int64_t t90 = 1238438570LL;

	t90 = (x929/(x930<=(x931/x932)));

	if (t90 != -1817328443252LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x941 = -35;
	int32_t x942 = -1;
	int32_t x943 = 38364447;
	int32_t x944 = INT32_MAX;
	int32_t t91 = 204903471;

	t91 = (x941/(x942<=(x943/x944)));

	if (t91 != -35) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x945 = INT32_MIN;
	int8_t x946 = INT8_MIN;
	uint8_t x947 = 7U;
	int16_t x948 = INT16_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x945/(x946<=(x947/x948)));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x949 = 1U;
	volatile int32_t x950 = INT32_MIN;
	int16_t x951 = INT16_MIN;
	volatile int32_t x952 = 5482;
	volatile int32_t t93 = -1004047;

	t93 = (x949/(x950<=(x951/x952)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x957 = INT16_MIN;
	volatile int64_t x958 = INT64_MIN;
	int8_t x959 = 47;
	volatile int8_t x960 = INT8_MIN;
	int32_t t94 = -26888;

	t94 = (x957/(x958<=(x959/x960)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x969 = -6;
	int8_t x970 = 0;
	int8_t x971 = INT8_MAX;
	uint32_t x972 = 51U;
	static volatile int32_t t95 = 39626002;

	t95 = (x969/(x970<=(x971/x972)));

	if (t95 != -6) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x981 = INT16_MIN;
	volatile uint16_t x982 = UINT16_MAX;
	int64_t x983 = INT64_MIN;
	int64_t x984 = -3186741988871LL;
	static volatile int32_t t96 = -691146132;

	t96 = (x981/(x982<=(x983/x984)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x989 = 3109010U;
	int8_t x990 = INT8_MIN;
	volatile uint8_t x991 = 4U;
	int64_t x992 = INT64_MIN;
	uint32_t t97 = 252U;

	t97 = (x989/(x990<=(x991/x992)));

	if (t97 != 3109010U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x994 = INT8_MIN;
	volatile int8_t x995 = INT8_MIN;
	static int32_t x996 = INT32_MIN;
	volatile int32_t t98 = 405850;

	t98 = (x993/(x994<=(x995/x996)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1013 = 238;
	uint64_t x1014 = 70364021244843490LLU;
	int64_t x1015 = INT64_MIN;
	uint32_t x1016 = 126890U;
	volatile int32_t t99 = 7993;

	t99 = (x1013/(x1014<=(x1015/x1016)));

	if (t99 != 238) { NG(); } else { ; }
	
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

