#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 2029U;
int16_t x6 = 718;
uint32_t x7 = 31U;
static int16_t x15 = INT16_MIN;
int16_t x18 = -1;
uint32_t x22 = 1436U;
int8_t x24 = 38;
int16_t x27 = -1;
uint64_t x28 = 185364511243575062LLU;
volatile int32_t t6 = 1;
int32_t t8 = -2;
uint64_t x51 = 69408441967784LLU;
volatile int64_t t9 = 82761721745LL;
int8_t x53 = 4;
volatile uint8_t x85 = 1U;
uint32_t x90 = UINT32_MAX;
volatile int8_t x103 = -1;
static int32_t x125 = -809084;
int16_t x127 = 0;
static int8_t x130 = INT8_MAX;
static uint64_t x136 = 68425032LLU;
uint8_t x143 = 1U;
uint64_t x154 = 54020752909483848LLU;
uint8_t x174 = 2U;
static volatile int64_t x175 = INT64_MIN;
static uint16_t x193 = 3414U;
static volatile uint64_t x195 = UINT64_MAX;
int32_t x198 = INT32_MIN;
int32_t t25 = 2;
int8_t x205 = INT8_MIN;
uint16_t x207 = 0U;
int64_t x208 = INT64_MAX;
volatile int32_t x217 = INT32_MIN;
static int16_t x218 = INT16_MIN;
int16_t x223 = 668;
volatile int8_t x224 = 15;
uint64_t x225 = 12902946378LLU;
static uint8_t x245 = 46U;
int64_t x248 = INT64_MAX;
volatile int32_t x278 = -1;
int8_t x286 = 37;
int8_t x287 = 1;
static uint64_t x288 = 870147713796LLU;
volatile int32_t t39 = -1;
volatile int32_t t40 = -363644;
int16_t x305 = INT16_MIN;
int32_t x317 = INT32_MAX;
int32_t x352 = 48345;
int64_t x356 = INT64_MAX;
uint16_t x366 = 27U;
int8_t x369 = INT8_MIN;
int16_t x370 = INT16_MIN;
uint16_t x372 = UINT16_MAX;
uint8_t x375 = 3U;
int64_t x382 = -1LL;
int8_t x384 = INT8_MAX;
uint16_t x388 = 285U;
int16_t x432 = 705;
volatile uint8_t x436 = UINT8_MAX;
static int64_t x441 = -1LL;
int16_t x446 = 0;
volatile int16_t x449 = INT16_MAX;
uint8_t x452 = 23U;
static int32_t t60 = -193042013;
static int64_t x462 = INT64_MAX;
volatile int64_t t64 = -415535552LL;
volatile int32_t x533 = INT32_MAX;
uint8_t x538 = UINT8_MAX;
int32_t x550 = INT32_MIN;
uint8_t x551 = 7U;
static uint64_t t68 = 162087LLU;
uint32_t x555 = 859391U;
volatile int32_t t73 = 1005796934;
int16_t x600 = INT16_MAX;
volatile int32_t t76 = -112254653;
volatile int8_t x606 = -1;
int32_t x609 = 13;
int32_t t78 = 3014539;
uint64_t x628 = 882240LLU;
static int64_t x663 = 2362401169LL;
int64_t x664 = 14129773902LL;
int32_t x665 = -1;
int8_t x673 = 60;
volatile int32_t x676 = 39811;
int8_t x682 = INT8_MAX;
int32_t x705 = 1;
static volatile int32_t t90 = -3610203;
int32_t x722 = INT32_MAX;
uint8_t x724 = UINT8_MAX;
uint64_t x781 = 798901892575LLU;
uint16_t x784 = 25229U;
uint8_t x796 = UINT8_MAX;


void f0(void) {
	int8_t x1 = 44;
	uint16_t x2 = UINT16_MAX;
	uint8_t x3 = 106U;
	static uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 0;

	t0 = (x1%((x2<=x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x8 = 74U;
	volatile int32_t t1 = 2377;

	t1 = (x5%((x6<=x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -3;
	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = -492;
	static uint16_t x12 = UINT16_MAX;
	int32_t t2 = -7337;

	t2 = (x9%((x10<=x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 31U;
	int64_t x14 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -5;

	t3 = (x13%((x14<=x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 369135U;
	static volatile uint32_t x19 = 1U;
	volatile uint8_t x20 = UINT8_MAX;
	volatile uint32_t t4 = 407U;

	t4 = (x17%((x18<=x19)<x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static volatile int64_t x23 = INT64_MAX;
	int32_t t5 = 1;

	t5 = (x21%((x22<=x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int32_t x26 = INT32_MAX;

	t6 = (x25%((x26<=x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 26252U;
	int16_t x34 = INT16_MAX;
	uint16_t x35 = 6282U;
	int64_t x36 = 3LL;
	uint32_t t7 = 9U;

	t7 = (x33%((x34<=x35)<x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MAX;
	int64_t x39 = INT64_MIN;
	uint64_t x40 = 9951847LLU;

	t8 = (x37%((x38<=x39)<x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -4047381079699072LL;
	int8_t x50 = -1;
	int16_t x52 = 203;

	t9 = (x49%((x50<=x51)<x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x54 = 8271598947970LL;
	static uint8_t x55 = 3U;
	int64_t x56 = 7679937000LL;
	volatile int32_t t10 = 2;

	t10 = (x53%((x54<=x55)<x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x77 = 8;
	volatile int32_t x78 = INT32_MIN;
	uint32_t x79 = 267808536U;
	static int8_t x80 = INT8_MAX;
	int32_t t11 = 1;

	t11 = (x77%((x78<=x79)<x80));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x86 = 103U;
	volatile int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MAX;
	int32_t t12 = 45;

	t12 = (x85%((x86<=x87)<x88));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x89 = 4608U;
	int8_t x91 = -39;
	static volatile uint64_t x92 = 12897915361LLU;
	int32_t t13 = -1010;

	t13 = (x89%((x90<=x91)<x92));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x93 = 30U;
	int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 3U;
	volatile int32_t t14 = 144941952;

	t14 = (x93%((x94<=x95)<x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x101 = INT32_MAX;
	int16_t x102 = 40;
	uint8_t x104 = 6U;
	int32_t t15 = 53827965;

	t15 = (x101%((x102<=x103)<x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x121 = 0U;
	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 5U;
	int32_t x124 = 80585;
	static int32_t t16 = -858333;

	t16 = (x121%((x122<=x123)<x124));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x126 = INT8_MIN;
	volatile int32_t x128 = 1640979;
	static int32_t t17 = -165989961;

	t17 = (x125%((x126<=x127)<x128));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x129 = INT16_MAX;
	int32_t x131 = INT32_MAX;
	uint64_t x132 = UINT64_MAX;
	static volatile int32_t t18 = 46301848;

	t18 = (x129%((x130<=x131)<x132));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x133 = INT16_MIN;
	int16_t x134 = 88;
	int64_t x135 = INT64_MIN;
	volatile int32_t t19 = 2590;

	t19 = (x133%((x134<=x135)<x136));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 2527255041784LLU;
	uint16_t x144 = 52U;
	int32_t t20 = 881850;

	t20 = (x141%((x142<=x143)<x144));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = INT32_MIN;
	static volatile int32_t x155 = INT32_MIN;
	uint64_t x156 = 15482159LLU;
	int32_t t21 = 457424;

	t21 = (x153%((x154<=x155)<x156));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t22 = 24985;

	t22 = (x173%((x174<=x175)<x176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = UINT8_MAX;
	static uint32_t x183 = UINT32_MAX;
	uint16_t x184 = 1080U;
	static volatile int32_t t23 = -7030625;

	t23 = (x181%((x182<=x183)<x184));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x194 = -321;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t24 = 656862488;

	t24 = (x193%((x194<=x195)<x196));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x197 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;

	t25 = (x197%((x198<=x199)<x200));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x206 = 395979315LLU;
	volatile int32_t t26 = 2;

	t26 = (x205%((x206<=x207)<x208));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x209 = -1;
	int16_t x210 = -1;
	volatile int32_t x211 = INT32_MAX;
	volatile uint32_t x212 = 53U;
	volatile int32_t t27 = -3712;

	t27 = (x209%((x210<=x211)<x212));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x219 = INT8_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	volatile int32_t t28 = 306;

	t28 = (x217%((x218<=x219)<x220));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x221 = UINT32_MAX;
	uint32_t x222 = 31254589U;
	uint32_t t29 = 61992U;

	t29 = (x221%((x222<=x223)<x224));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x226 = 14;
	static int32_t x227 = -40623735;
	static int8_t x228 = 3;
	volatile uint64_t t30 = 4308343343263315LLU;

	t30 = (x225%((x226<=x227)<x228));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x229 = INT8_MIN;
	static int32_t x230 = INT32_MIN;
	static volatile int32_t x231 = INT32_MAX;
	uint16_t x232 = 559U;
	static int32_t t31 = 478545;

	t31 = (x229%((x230<=x231)<x232));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x241 = -1;
	static uint64_t x242 = 3LLU;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MAX;
	volatile int32_t t32 = 154174609;

	t32 = (x241%((x242<=x243)<x244));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x246 = INT8_MAX;
	int64_t x247 = -109199748431212806LL;
	int32_t t33 = 9;

	t33 = (x245%((x246<=x247)<x248));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x249 = 44U;
	int16_t x250 = -1;
	static volatile int8_t x251 = INT8_MIN;
	volatile int32_t x252 = 2896295;
	volatile int32_t t34 = -20426;

	t34 = (x249%((x250<=x251)<x252));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x257 = 2051142;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = 72U;
	int32_t x260 = 4110539;
	volatile int32_t t35 = -2;

	t35 = (x257%((x258<=x259)<x260));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x265 = 1413104880U;
	int16_t x266 = INT16_MIN;
	int64_t x267 = -133309LL;
	volatile uint32_t x268 = UINT32_MAX;
	volatile uint32_t t36 = 22U;

	t36 = (x265%((x266<=x267)<x268));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x277 = UINT64_MAX;
	uint32_t x279 = UINT32_MAX;
	uint8_t x280 = 13U;
	uint64_t t37 = 655498LLU;

	t37 = (x277%((x278<=x279)<x280));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x285 = -7;
	static int32_t t38 = 58203660;

	t38 = (x285%((x286<=x287)<x288));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 64U;
	volatile uint64_t x292 = UINT64_MAX;

	t39 = (x289%((x290<=x291)<x292));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x293 = 10U;
	uint16_t x294 = 32147U;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MAX;

	t40 = (x293%((x294<=x295)<x296));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x306 = 733U;
	volatile uint16_t x307 = 7U;
	int8_t x308 = 1;
	static volatile int32_t t41 = 474;

	t41 = (x305%((x306<=x307)<x308));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	int32_t t42 = 2;

	t42 = (x313%((x314<=x315)<x316));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x318 = INT16_MIN;
	static volatile int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t43 = -21408374;

	t43 = (x317%((x318<=x319)<x320));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x321 = 3U;
	uint8_t x322 = 1U;
	int64_t x323 = INT64_MIN;
	static volatile int64_t x324 = INT64_MAX;
	static volatile int32_t t44 = -22928317;

	t44 = (x321%((x322<=x323)<x324));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x325 = -1LL;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MAX;
	static volatile int64_t t45 = 3799524221027LL;

	t45 = (x325%((x326<=x327)<x328));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x349 = 3U;
	uint16_t x350 = 73U;
	static uint8_t x351 = UINT8_MAX;
	static volatile uint32_t t46 = 51844U;

	t46 = (x349%((x350<=x351)<x352));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MIN;
	static volatile int32_t t47 = -1678716;

	t47 = (x353%((x354<=x355)<x356));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x357 = 745;
	uint16_t x358 = 22U;
	volatile uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 2U;
	int32_t t48 = -53;

	t48 = (x357%((x358<=x359)<x360));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x365 = 15U;
	uint16_t x367 = 11426U;
	volatile uint16_t x368 = 2U;
	volatile int32_t t49 = 2271;

	t49 = (x365%((x366<=x367)<x368));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x371 = 0LLU;
	static int32_t t50 = -1546081;

	t50 = (x369%((x370<=x371)<x372));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x373 = 3LLU;
	static int16_t x374 = INT16_MIN;
	volatile int32_t x376 = 17470;
	uint64_t t51 = 3910737369LLU;

	t51 = (x373%((x374<=x375)<x376));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x377 = INT32_MAX;
	volatile uint32_t x378 = 12944U;
	volatile uint64_t x379 = 3239758119173588LLU;
	static volatile int16_t x380 = INT16_MAX;
	static volatile int32_t t52 = 2755027;

	t52 = (x377%((x378<=x379)<x380));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x381 = UINT8_MAX;
	uint16_t x383 = 0U;
	volatile int32_t t53 = 539421737;

	t53 = (x381%((x382<=x383)<x384));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x385 = INT8_MIN;
	static uint32_t x386 = 119U;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t t54 = -251159194;

	t54 = (x385%((x386<=x387)<x388));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x425 = -1LL;
	static int32_t x426 = -1;
	int16_t x427 = INT16_MIN;
	int8_t x428 = 28;
	int64_t t55 = 491321LL;

	t55 = (x425%((x426<=x427)<x428));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x429 = INT8_MAX;
	int16_t x430 = INT16_MAX;
	int32_t x431 = INT32_MIN;
	volatile int32_t t56 = -1;

	t56 = (x429%((x430<=x431)<x432));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = 0;
	volatile int16_t x435 = INT16_MIN;
	int32_t t57 = 125;

	t57 = (x433%((x434<=x435)<x436));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x442 = UINT64_MAX;
	int32_t x443 = -1;
	static int16_t x444 = INT16_MAX;
	int64_t t58 = -770117LL;

	t58 = (x441%((x442<=x443)<x444));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x445 = 6;
	static int8_t x447 = -12;
	static int32_t x448 = INT32_MAX;
	int32_t t59 = 134761761;

	t59 = (x445%((x446<=x447)<x448));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x450 = -13;
	static uint16_t x451 = UINT16_MAX;

	t60 = (x449%((x450<=x451)<x452));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x461 = 3024273405637134677LLU;
	int64_t x463 = -39LL;
	int8_t x464 = 1;
	static uint64_t t61 = 0LLU;

	t61 = (x461%((x462<=x463)<x464));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x473 = 105922U;
	static uint8_t x474 = UINT8_MAX;
	static uint8_t x475 = 30U;
	static uint32_t x476 = 97516025U;
	uint32_t t62 = 111908U;

	t62 = (x473%((x474<=x475)<x476));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x481 = INT32_MIN;
	uint64_t x482 = UINT64_MAX;
	int8_t x483 = -3;
	volatile int8_t x484 = INT8_MAX;
	int32_t t63 = -540;

	t63 = (x481%((x482<=x483)<x484));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x489 = -1LL;
	static volatile uint64_t x490 = UINT64_MAX;
	uint16_t x491 = UINT16_MAX;
	uint32_t x492 = UINT32_MAX;

	t64 = (x489%((x490<=x491)<x492));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MIN;
	uint16_t x523 = 117U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t65 = 5948;

	t65 = (x521%((x522<=x523)<x524));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x534 = 6U;
	volatile uint16_t x535 = 102U;
	volatile uint8_t x536 = 2U;
	int32_t t66 = 2168;

	t66 = (x533%((x534<=x535)<x536));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x537 = INT8_MIN;
	static volatile uint32_t x539 = 362076U;
	uint32_t x540 = 153626U;
	int32_t t67 = -9567;

	t67 = (x537%((x538<=x539)<x540));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x549 = UINT64_MAX;
	int8_t x552 = 3;

	t68 = (x549%((x550<=x551)<x552));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x553 = 814154876942LLU;
	int32_t x554 = INT32_MAX;
	volatile int8_t x556 = INT8_MAX;
	volatile uint64_t t69 = 3633812LLU;

	t69 = (x553%((x554<=x555)<x556));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x557 = INT8_MAX;
	static uint32_t x558 = 12512072U;
	static int16_t x559 = -9820;
	int8_t x560 = INT8_MAX;
	static int32_t t70 = -1;

	t70 = (x557%((x558<=x559)<x560));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x565 = -1;
	volatile int8_t x566 = INT8_MAX;
	uint64_t x567 = UINT64_MAX;
	uint16_t x568 = 56U;
	static int32_t t71 = -65;

	t71 = (x565%((x566<=x567)<x568));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x573 = 13;
	uint32_t x574 = 898898038U;
	int8_t x575 = INT8_MAX;
	int16_t x576 = 8;
	int32_t t72 = 1128;

	t72 = (x573%((x574<=x575)<x576));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x581 = 1;
	volatile uint16_t x582 = 7U;
	int64_t x583 = INT64_MIN;
	int32_t x584 = INT32_MAX;

	t73 = (x581%((x582<=x583)<x584));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x589 = -1;
	int16_t x590 = INT16_MAX;
	static int32_t x591 = -21;
	static uint16_t x592 = 2472U;
	int32_t t74 = -1312;

	t74 = (x589%((x590<=x591)<x592));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x597 = -18655421LL;
	static uint8_t x598 = UINT8_MAX;
	volatile int16_t x599 = -70;
	static int64_t t75 = -13491141595341846LL;

	t75 = (x597%((x598<=x599)<x600));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x601 = -28069;
	volatile int32_t x602 = -33;
	int8_t x603 = 3;
	volatile int8_t x604 = 5;

	t76 = (x601%((x602<=x603)<x604));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x605 = 1778U;
	static uint8_t x607 = 0U;
	int8_t x608 = 3;
	static int32_t t77 = 1171;

	t77 = (x605%((x606<=x607)<x608));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x610 = INT32_MAX;
	uint64_t x611 = 1700LLU;
	volatile int8_t x612 = 20;

	t78 = (x609%((x610<=x611)<x612));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x621 = INT8_MIN;
	uint16_t x622 = 1495U;
	int8_t x623 = -7;
	uint8_t x624 = 6U;
	volatile int32_t t79 = 77896884;

	t79 = (x621%((x622<=x623)<x624));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x625 = UINT32_MAX;
	int32_t x626 = -17131499;
	uint32_t x627 = 1808U;
	uint32_t t80 = 3U;

	t80 = (x625%((x626<=x627)<x628));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x633 = INT32_MAX;
	static volatile int16_t x634 = -199;
	uint64_t x635 = UINT64_MAX;
	int64_t x636 = 83953304079LL;
	int32_t t81 = 1510138;

	t81 = (x633%((x634<=x635)<x636));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x645 = UINT64_MAX;
	int16_t x646 = INT16_MAX;
	int16_t x647 = INT16_MIN;
	uint16_t x648 = UINT16_MAX;
	uint64_t t82 = 158LLU;

	t82 = (x645%((x646<=x647)<x648));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x657 = -1;
	int8_t x658 = 0;
	static uint32_t x659 = UINT32_MAX;
	int32_t x660 = 1934;
	int32_t t83 = 99526;

	t83 = (x657%((x658<=x659)<x660));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x661 = INT32_MIN;
	static uint16_t x662 = UINT16_MAX;
	static int32_t t84 = 393;

	t84 = (x661%((x662<=x663)<x664));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x666 = 1897U;
	int64_t x667 = -1LL;
	static int32_t x668 = INT32_MAX;
	volatile int32_t t85 = 0;

	t85 = (x665%((x666<=x667)<x668));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x669 = 1;
	int32_t x670 = INT32_MAX;
	int64_t x671 = 264681652193762LL;
	uint8_t x672 = 21U;
	int32_t t86 = 49;

	t86 = (x669%((x670<=x671)<x672));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x674 = UINT8_MAX;
	static uint16_t x675 = UINT16_MAX;
	static int32_t t87 = 38061;

	t87 = (x673%((x674<=x675)<x676));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x677 = -3768028LL;
	int64_t x678 = INT64_MAX;
	int16_t x679 = INT16_MIN;
	volatile int64_t x680 = 17538759526LL;
	volatile int64_t t88 = -2731029240LL;

	t88 = (x677%((x678<=x679)<x680));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x681 = INT16_MIN;
	volatile uint64_t x683 = 1603487072491576LLU;
	int8_t x684 = 55;
	volatile int32_t t89 = 0;

	t89 = (x681%((x682<=x683)<x684));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x706 = 34U;
	volatile int8_t x707 = -1;
	volatile int64_t x708 = INT64_MAX;

	t90 = (x705%((x706<=x707)<x708));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x721 = -17897LL;
	int16_t x723 = INT16_MIN;
	static int64_t t91 = -102270426797LL;

	t91 = (x721%((x722<=x723)<x724));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x733 = 13U;
	static int16_t x734 = INT16_MAX;
	int32_t x735 = INT32_MAX;
	static volatile uint32_t x736 = 1297U;
	int32_t t92 = -32572830;

	t92 = (x733%((x734<=x735)<x736));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x737 = -1;
	volatile int8_t x738 = 21;
	volatile int32_t x739 = -1;
	volatile uint8_t x740 = UINT8_MAX;
	static int32_t t93 = -55741773;

	t93 = (x737%((x738<=x739)<x740));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x741 = INT16_MAX;
	uint16_t x742 = 30U;
	static volatile int32_t x743 = 4958702;
	int8_t x744 = INT8_MAX;
	int32_t t94 = -145302;

	t94 = (x741%((x742<=x743)<x744));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x753 = INT8_MAX;
	int16_t x754 = INT16_MIN;
	static int8_t x755 = INT8_MIN;
	static volatile uint32_t x756 = 167515400U;
	volatile int32_t t95 = -405055;

	t95 = (x753%((x754<=x755)<x756));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x761 = 55907078324322027LL;
	volatile int32_t x762 = 6465114;
	static int16_t x763 = INT16_MAX;
	volatile int16_t x764 = INT16_MAX;
	int64_t t96 = -1137018487280722110LL;

	t96 = (x761%((x762<=x763)<x764));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x782 = 7590U;
	int64_t x783 = -785726LL;
	static volatile uint64_t t97 = 1LLU;

	t97 = (x781%((x782<=x783)<x784));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x793 = -29907;
	volatile int8_t x794 = 1;
	volatile uint64_t x795 = 3071LLU;
	int32_t t98 = 40440;

	t98 = (x793%((x794<=x795)<x796));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x797 = INT16_MIN;
	volatile int64_t x798 = -14440824881544LL;
	static int64_t x799 = INT64_MIN;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t99 = -3124019;

	t99 = (x797%((x798<=x799)<x800));

	if (t99 != 0) { NG(); } else { ; }
	
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

