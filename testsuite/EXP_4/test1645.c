#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 29U;
volatile int64_t x21 = 102569184383LL;
volatile int8_t x23 = INT8_MIN;
volatile int64_t t2 = 3421698508LL;
static int32_t x30 = 4268;
static int8_t x34 = -1;
static int16_t x39 = INT16_MAX;
int32_t t5 = -575950;
int32_t x68 = 11545933;
volatile int16_t x86 = INT16_MAX;
uint8_t x97 = 1U;
volatile uint32_t x101 = 5677U;
volatile int64_t x111 = -22299968LL;
uint16_t x121 = 4U;
int64_t x123 = INT64_MIN;
volatile int32_t t14 = -13469922;
uint64_t x127 = UINT64_MAX;
volatile int16_t x128 = INT16_MIN;
static uint64_t x131 = UINT64_MAX;
uint64_t x137 = UINT64_MAX;
int16_t x141 = INT16_MAX;
static volatile int16_t x145 = INT16_MAX;
int64_t x148 = INT64_MIN;
int32_t t19 = -3166855;
int32_t x152 = INT32_MIN;
static volatile int16_t x155 = INT16_MIN;
volatile int32_t t21 = 0;
uint16_t x163 = 2344U;
volatile uint64_t x177 = 1LLU;
uint32_t x178 = 8025056U;
uint32_t x188 = UINT32_MAX;
int32_t x208 = 312933674;
uint16_t x235 = UINT16_MAX;
uint8_t x241 = 94U;
int32_t x243 = -13031;
int32_t t36 = 7783657;
volatile int64_t t37 = 129140LL;
int64_t x257 = 48224LL;
uint64_t x271 = 1LLU;
static volatile int8_t x292 = 2;
int64_t t42 = 3LL;
uint8_t x303 = 11U;
uint32_t x316 = 1U;
volatile int32_t x342 = -13;
volatile int64_t x343 = INT64_MIN;
uint64_t x358 = 30LLU;
volatile uint16_t x360 = 91U;
uint32_t t49 = 6U;
int64_t x363 = 616300253278225498LL;
volatile int16_t x364 = -1;
volatile uint32_t t50 = 4066755U;
int8_t x371 = INT8_MIN;
volatile int8_t x381 = 0;
int16_t x382 = INT16_MAX;
volatile uint32_t t55 = 1957U;
int32_t x431 = INT32_MIN;
uint32_t x465 = 24205337U;
int64_t x466 = INT64_MIN;
int64_t x474 = INT64_MAX;
uint32_t x476 = UINT32_MAX;
uint8_t x481 = 2U;
int64_t x483 = INT64_MIN;
int16_t x484 = 1;
volatile int64_t x489 = 219392966LL;
int64_t x492 = INT64_MIN;
int8_t x497 = INT8_MAX;
volatile int32_t t62 = -12;
int64_t x507 = INT64_MIN;
int64_t x510 = INT64_MAX;
volatile uint8_t x520 = 9U;
static int8_t x534 = INT8_MIN;
int64_t x552 = -1LL;
uint64_t x554 = UINT64_MAX;
volatile int32_t t71 = 700;
static volatile int32_t t72 = 1;
static uint16_t x590 = 6U;
volatile uint8_t x598 = UINT8_MAX;
static uint64_t x599 = 168LLU;
volatile int32_t t77 = 2526930;
int16_t x603 = -2534;
int8_t x604 = -1;
static uint8_t x617 = 3U;
int8_t x618 = INT8_MAX;
int8_t x632 = INT8_MAX;
int64_t x639 = INT64_MIN;
uint8_t x640 = 0U;
volatile int32_t t83 = 649432;
static volatile int32_t t84 = -1505;
int16_t x649 = 496;
int64_t x651 = -1LL;
static volatile int8_t x652 = 1;
int8_t x687 = INT8_MAX;
static int32_t x708 = -87917;
int32_t x755 = INT32_MIN;
int32_t t96 = -15761;
static volatile uint8_t x757 = UINT8_MAX;
uint8_t x763 = UINT8_MAX;
int64_t x770 = 0LL;


void f0(void) {
	uint8_t x2 = 42U;
	static int16_t x3 = -1;
	int8_t x4 = 61;
	volatile int32_t t0 = 1560776;

	t0 = (x1>>(x2<=(x3<=x4)));

	if (t0 != 29) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 24749738568116118LL;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 54947290114297813LLU;
	int16_t x8 = INT16_MIN;
	int64_t t1 = -534398581889LL;

	t1 = (x5>>(x6<=(x7<=x8)));

	if (t1 != 12374869284058059LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x22 = 1U;
	int8_t x24 = INT8_MAX;

	t2 = (x21>>(x22<=(x23<=x24)));

	if (t2 != 51284592191LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = 647443761U;
	int16_t x31 = -1;
	uint64_t x32 = UINT64_MAX;
	volatile uint32_t t3 = 22U;

	t3 = (x29>>(x30<=(x31<=x32)));

	if (t3 != 647443761U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = UINT64_MAX;
	uint64_t x35 = 24529181LLU;
	volatile int16_t x36 = INT16_MIN;
	uint64_t t4 = 6633LLU;

	t4 = (x33>>(x34<=(x35<=x36)));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x37 = 4950;
	static int64_t x38 = -530494226589280828LL;
	int8_t x40 = 14;

	t5 = (x37>>(x38<=(x39<=x40)));

	if (t5 != 2475) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x65 = 14U;
	int16_t x66 = INT16_MIN;
	uint16_t x67 = UINT16_MAX;
	static int32_t t6 = 2019802;

	t6 = (x65>>(x66<=(x67<=x68)));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x69 = INT8_MAX;
	uint8_t x70 = 2U;
	volatile uint8_t x71 = 13U;
	volatile uint32_t x72 = 117555U;
	int32_t t7 = 408778446;

	t7 = (x69>>(x70<=(x71<=x72)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x77 = INT64_MAX;
	uint64_t x78 = 38833569833189LLU;
	volatile int8_t x79 = INT8_MAX;
	static uint16_t x80 = UINT16_MAX;
	int64_t t8 = INT64_MAX;

	t8 = (x77>>(x78<=(x79<=x80)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x85 = 1U;
	int16_t x87 = INT16_MAX;
	static uint8_t x88 = 17U;
	volatile int32_t t9 = -20300188;

	t9 = (x85>>(x86<=(x87<=x88)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x98 = INT32_MIN;
	int32_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t10 = 121;

	t10 = (x97>>(x98<=(x99<=x100)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x102 = INT64_MAX;
	static int16_t x103 = INT16_MIN;
	static int8_t x104 = INT8_MIN;
	volatile uint32_t t11 = 262796127U;

	t11 = (x101>>(x102<=(x103<=x104)));

	if (t11 != 5677U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x109 = INT32_MAX;
	volatile uint8_t x110 = 20U;
	int32_t x112 = INT32_MIN;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x109>>(x110<=(x111<=x112)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x117 = UINT8_MAX;
	static int8_t x118 = 13;
	volatile int32_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t13 = 0;

	t13 = (x117>>(x118<=(x119<=x120)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x122 = UINT8_MAX;
	int16_t x124 = -1;

	t14 = (x121>>(x122<=(x123<=x124)));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x125 = 36235U;
	static int8_t x126 = INT8_MAX;
	volatile uint32_t t15 = 1U;

	t15 = (x125>>(x126<=(x127<=x128)));

	if (t15 != 36235U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x129 = 7982613;
	int8_t x130 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t16 = 76;

	t16 = (x129>>(x130<=(x131<=x132)));

	if (t16 != 3991306) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x138 = INT32_MIN;
	int8_t x139 = -1;
	int32_t x140 = INT32_MIN;
	uint64_t t17 = 1517903069LLU;

	t17 = (x137>>(x138<=(x139<=x140)));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x142 = UINT32_MAX;
	volatile uint16_t x143 = 67U;
	int32_t x144 = -11783;
	volatile int32_t t18 = -2;

	t18 = (x141>>(x142<=(x143<=x144)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x146 = INT8_MIN;
	int8_t x147 = 1;

	t19 = (x145>>(x146<=(x147<=x148)));

	if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x149 = 779219099LLU;
	static uint8_t x150 = 3U;
	int32_t x151 = INT32_MIN;
	volatile uint64_t t20 = 39839LLU;

	t20 = (x149>>(x150<=(x151<=x152)));

	if (t20 != 779219099LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x153 = INT16_MAX;
	uint64_t x154 = 22015825LLU;
	volatile int64_t x156 = 4LL;

	t21 = (x153>>(x154<=(x155<=x156)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x161 = 37U;
	volatile int64_t x162 = INT64_MIN;
	volatile int16_t x164 = -1;
	volatile int32_t t22 = 20290;

	t22 = (x161>>(x162<=(x163<=x164)));

	if (t22 != 18) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x173 = 27U;
	int8_t x174 = 7;
	uint32_t x175 = 520757U;
	volatile uint8_t x176 = 0U;
	volatile uint32_t t23 = 44U;

	t23 = (x173>>(x174<=(x175<=x176)));

	if (t23 != 27U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x179 = -1LL;
	uint8_t x180 = UINT8_MAX;
	uint64_t t24 = 3046292308440726203LLU;

	t24 = (x177>>(x178<=(x179<=x180)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x181 = 66704145930LLU;
	uint64_t x182 = 846798834LLU;
	volatile int32_t x183 = INT32_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile uint64_t t25 = 35294LLU;

	t25 = (x181>>(x182<=(x183<=x184)));

	if (t25 != 66704145930LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x185 = 31LLU;
	int32_t x186 = INT32_MIN;
	static volatile uint8_t x187 = 63U;
	uint64_t t26 = 3LLU;

	t26 = (x185>>(x186<=(x187<=x188)));

	if (t26 != 15LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x189 = 6706;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	int64_t x192 = -7696LL;
	volatile int32_t t27 = -34;

	t27 = (x189>>(x190<=(x191<=x192)));

	if (t27 != 6706) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x197 = 2147;
	static int8_t x198 = INT8_MIN;
	uint64_t x199 = 6090LLU;
	uint8_t x200 = 0U;
	static volatile int32_t t28 = -482981;

	t28 = (x197>>(x198<=(x199<=x200)));

	if (t28 != 1073) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x205 = 13U;
	static volatile int8_t x206 = INT8_MIN;
	uint16_t x207 = UINT16_MAX;
	int32_t t29 = 13157959;

	t29 = (x205>>(x206<=(x207<=x208)));

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x209 = 130845U;
	static int8_t x210 = -5;
	int16_t x211 = 476;
	int8_t x212 = INT8_MIN;
	uint32_t t30 = 2226U;

	t30 = (x209>>(x210<=(x211<=x212)));

	if (t30 != 65422U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MAX;
	int16_t x215 = -1;
	static uint8_t x216 = 2U;
	static int32_t t31 = INT32_MAX;

	t31 = (x213>>(x214<=(x215<=x216)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x217 = 944U;
	uint16_t x218 = 40U;
	static int32_t x219 = INT32_MAX;
	volatile uint8_t x220 = 4U;
	static volatile uint32_t t32 = 3716U;

	t32 = (x217>>(x218<=(x219<=x220)));

	if (t32 != 944U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x221 = 11773;
	static int16_t x222 = -1;
	int16_t x223 = -1;
	int8_t x224 = -10;
	volatile int32_t t33 = 64603;

	t33 = (x221>>(x222<=(x223<=x224)));

	if (t33 != 5886) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x229 = 161461;
	uint64_t x230 = UINT64_MAX;
	static volatile uint16_t x231 = 5U;
	static int16_t x232 = INT16_MIN;
	static volatile int32_t t34 = -2983;

	t34 = (x229>>(x230<=(x231<=x232)));

	if (t34 != 161461) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x233 = 538476894474513551LLU;
	int16_t x234 = 3797;
	int16_t x236 = -22;
	static uint64_t t35 = 0LLU;

	t35 = (x233>>(x234<=(x235<=x236)));

	if (t35 != 538476894474513551LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x242 = -1;
	volatile int8_t x244 = INT8_MAX;

	t36 = (x241>>(x242<=(x243<=x244)));

	if (t36 != 47) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x253 = INT64_MAX;
	volatile uint32_t x254 = 1U;
	uint16_t x255 = 31440U;
	uint32_t x256 = 177960U;

	t37 = (x253>>(x254<=(x255<=x256)));

	if (t37 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 592U;
	uint8_t x260 = 5U;
	int64_t t38 = -395LL;

	t38 = (x257>>(x258<=(x259<=x260)));

	if (t38 != 48224LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x269 = 132239115487LLU;
	int32_t x270 = -1;
	int16_t x272 = 1499;
	volatile uint64_t t39 = 4039513564531LLU;

	t39 = (x269>>(x270<=(x271<=x272)));

	if (t39 != 66119557743LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	volatile int16_t x280 = -1;
	uint64_t t40 = 1355814LLU;

	t40 = (x277>>(x278<=(x279<=x280)));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MAX;
	int32_t x283 = -1;
	int8_t x284 = INT8_MIN;
	volatile int32_t t41 = -13113;

	t41 = (x281>>(x282<=(x283<=x284)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x289 = INT64_MAX;
	volatile int16_t x290 = -1;
	static int32_t x291 = -7041;

	t42 = (x289>>(x290<=(x291<=x292)));

	if (t42 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x301 = INT8_MAX;
	uint64_t x302 = 656LLU;
	static int64_t x304 = -500375LL;
	volatile int32_t t43 = -319;

	t43 = (x301>>(x302<=(x303<=x304)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x313 = 139992;
	static int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	int32_t t44 = -11;

	t44 = (x313>>(x314<=(x315<=x316)));

	if (t44 != 69996) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = 42;
	int32_t x323 = 124060;
	uint32_t x324 = 451U;
	volatile int32_t t45 = 8084985;

	t45 = (x321>>(x322<=(x323<=x324)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x329 = 3;
	int64_t x330 = INT64_MAX;
	uint16_t x331 = UINT16_MAX;
	volatile uint16_t x332 = UINT16_MAX;
	static int32_t t46 = -736237143;

	t46 = (x329>>(x330<=(x331<=x332)));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x337 = UINT8_MAX;
	volatile int32_t x338 = -62523;
	uint32_t x339 = 1620565U;
	uint64_t x340 = 10LLU;
	int32_t t47 = -82863;

	t47 = (x337>>(x338<=(x339<=x340)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x341 = UINT32_MAX;
	static int16_t x344 = -2804;
	volatile uint32_t t48 = 4U;

	t48 = (x341>>(x342<=(x343<=x344)));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x357 = 83393699U;
	uint32_t x359 = 4031823U;

	t49 = (x357>>(x358<=(x359<=x360)));

	if (t49 != 83393699U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x361 = UINT32_MAX;
	volatile int32_t x362 = -5672568;

	t50 = (x361>>(x362<=(x363<=x364)));

	if (t50 != 2147483647U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x369 = 2704267384798LLU;
	static uint16_t x370 = 24189U;
	static volatile int32_t x372 = -1;
	volatile uint64_t t51 = 993518573137LLU;

	t51 = (x369>>(x370<=(x371<=x372)));

	if (t51 != 2704267384798LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x383 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t52 = 0;

	t52 = (x381>>(x382<=(x383<=x384)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x401 = INT32_MAX;
	volatile uint32_t x402 = 0U;
	volatile uint32_t x403 = 568U;
	static uint64_t x404 = UINT64_MAX;
	static int32_t t53 = -3215;

	t53 = (x401>>(x402<=(x403<=x404)));

	if (t53 != 1073741823) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x405 = 786485091995LL;
	int8_t x406 = 13;
	int32_t x407 = 31;
	volatile int8_t x408 = INT8_MIN;
	int64_t t54 = -3985342620844LL;

	t54 = (x405>>(x406<=(x407<=x408)));

	if (t54 != 786485091995LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x413 = 84782770U;
	int8_t x414 = INT8_MIN;
	static uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 25U;

	t55 = (x413>>(x414<=(x415<=x416)));

	if (t55 != 42391385U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x429 = 22U;
	uint32_t x430 = 1197U;
	int64_t x432 = 7687625699518838LL;
	int32_t t56 = 15316498;

	t56 = (x429>>(x430<=(x431<=x432)));

	if (t56 != 22) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x445 = 38;
	int32_t x446 = -17;
	int64_t x447 = 205LL;
	volatile uint8_t x448 = 33U;
	int32_t t57 = 259556;

	t57 = (x445>>(x446<=(x447<=x448)));

	if (t57 != 19) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x467 = INT16_MIN;
	static int64_t x468 = -1LL;
	uint32_t t58 = 17807U;

	t58 = (x465>>(x466<=(x467<=x468)));

	if (t58 != 12102668U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x473 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	int32_t t59 = 24;

	t59 = (x473>>(x474<=(x475<=x476)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x482 = INT64_MAX;
	int32_t t60 = -54607;

	t60 = (x481>>(x482<=(x483<=x484)));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x490 = 0;
	static int64_t x491 = -1LL;
	volatile int64_t t61 = -1972392LL;

	t61 = (x489>>(x490<=(x491<=x492)));

	if (t61 != 109696483LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x498 = 7796;
	uint16_t x499 = 5U;
	static int64_t x500 = -2428097LL;

	t62 = (x497>>(x498<=(x499<=x500)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x501 = 6U;
	uint8_t x502 = UINT8_MAX;
	static int32_t x503 = INT32_MIN;
	uint32_t x504 = 1U;
	uint32_t t63 = 74263174U;

	t63 = (x501>>(x502<=(x503<=x504)));

	if (t63 != 6U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = INT16_MAX;
	int32_t x506 = INT32_MIN;
	uint32_t x508 = 183548442U;
	int32_t t64 = 3;

	t64 = (x505>>(x506<=(x507<=x508)));

	if (t64 != 16383) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x509 = 259LLU;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = INT8_MAX;
	volatile uint64_t t65 = 375635867281599LLU;

	t65 = (x509>>(x510<=(x511<=x512)));

	if (t65 != 259LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x513 = INT8_MAX;
	static volatile int32_t x514 = INT32_MAX;
	int32_t x515 = INT32_MIN;
	uint64_t x516 = 748147935LLU;
	volatile int32_t t66 = 137;

	t66 = (x513>>(x514<=(x515<=x516)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x517 = INT32_MAX;
	static int8_t x518 = INT8_MAX;
	volatile uint32_t x519 = 79745974U;
	int32_t t67 = INT32_MAX;

	t67 = (x517>>(x518<=(x519<=x520)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x525 = INT16_MAX;
	volatile int16_t x526 = -1;
	uint16_t x527 = UINT16_MAX;
	int64_t x528 = 720103100LL;
	int32_t t68 = -6;

	t68 = (x525>>(x526<=(x527<=x528)));

	if (t68 != 16383) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x533 = 12739U;
	static int16_t x535 = INT16_MIN;
	int32_t x536 = INT32_MAX;
	int32_t t69 = -14;

	t69 = (x533>>(x534<=(x535<=x536)));

	if (t69 != 6369) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x549 = INT8_MAX;
	static uint8_t x550 = 1U;
	volatile uint64_t x551 = UINT64_MAX;
	int32_t t70 = -1;

	t70 = (x549>>(x550<=(x551<=x552)));

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x553 = 7919U;
	int64_t x555 = -1LL;
	uint32_t x556 = 5627U;

	t71 = (x553>>(x554<=(x555<=x556)));

	if (t71 != 7919) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x561 = 7391U;
	uint64_t x562 = 11122807LLU;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = -6;

	t72 = (x561>>(x562<=(x563<=x564)));

	if (t72 != 7391) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x569 = INT16_MAX;
	int8_t x570 = INT8_MAX;
	int8_t x571 = INT8_MIN;
	uint8_t x572 = 44U;
	int32_t t73 = -105478494;

	t73 = (x569>>(x570<=(x571<=x572)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x577 = 286;
	static uint32_t x578 = 95419U;
	int8_t x579 = 3;
	int32_t x580 = INT32_MIN;
	int32_t t74 = 160;

	t74 = (x577>>(x578<=(x579<=x580)));

	if (t74 != 286) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x589 = 3492U;
	int64_t x591 = INT64_MIN;
	int32_t x592 = 1341845;
	int32_t t75 = -29;

	t75 = (x589>>(x590<=(x591<=x592)));

	if (t75 != 3492) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x593 = 1388;
	int32_t x594 = -3553;
	int64_t x595 = -27193LL;
	uint32_t x596 = 3438U;
	int32_t t76 = 1046998617;

	t76 = (x593>>(x594<=(x595<=x596)));

	if (t76 != 694) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x597 = UINT8_MAX;
	volatile int8_t x600 = INT8_MAX;

	t77 = (x597>>(x598<=(x599<=x600)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MIN;
	volatile int32_t t78 = -117324588;

	t78 = (x601>>(x602<=(x603<=x604)));

	if (t78 != 16383) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x609 = INT32_MAX;
	int32_t x610 = INT32_MIN;
	volatile int32_t x611 = 192237518;
	static volatile uint8_t x612 = 1U;
	int32_t t79 = -2233;

	t79 = (x609>>(x610<=(x611<=x612)));

	if (t79 != 1073741823) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x613 = 198545423528074437LLU;
	int64_t x614 = INT64_MIN;
	int8_t x615 = -1;
	int32_t x616 = -543247116;
	uint64_t t80 = 65325125648LLU;

	t80 = (x613>>(x614<=(x615<=x616)));

	if (t80 != 99272711764037218LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x619 = 103U;
	int8_t x620 = INT8_MAX;
	static int32_t t81 = -35821;

	t81 = (x617>>(x618<=(x619<=x620)));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x629 = 2688765U;
	volatile uint64_t x630 = 50333LLU;
	static volatile int8_t x631 = -3;
	volatile uint32_t t82 = 379278928U;

	t82 = (x629>>(x630<=(x631<=x632)));

	if (t82 != 2688765U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x637 = 9U;
	static int8_t x638 = INT8_MIN;

	t83 = (x637>>(x638<=(x639<=x640)));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x641 = 12U;
	uint8_t x642 = 10U;
	int32_t x643 = INT32_MIN;
	uint32_t x644 = UINT32_MAX;

	t84 = (x641>>(x642<=(x643<=x644)));

	if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x650 = UINT16_MAX;
	int32_t t85 = 65;

	t85 = (x649>>(x650<=(x651<=x652)));

	if (t85 != 496) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x661 = INT16_MAX;
	volatile uint8_t x662 = 2U;
	volatile int32_t x663 = INT32_MAX;
	static uint64_t x664 = UINT64_MAX;
	int32_t t86 = -40567;

	t86 = (x661>>(x662<=(x663<=x664)));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x673 = 282462U;
	uint16_t x674 = 13480U;
	int16_t x675 = INT16_MAX;
	static int32_t x676 = INT32_MAX;
	static volatile uint32_t t87 = 29260U;

	t87 = (x673>>(x674<=(x675<=x676)));

	if (t87 != 282462U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x677 = 147;
	int16_t x678 = -18;
	static volatile int32_t x679 = INT32_MAX;
	static uint32_t x680 = 180U;
	static int32_t t88 = 2242117;

	t88 = (x677>>(x678<=(x679<=x680)));

	if (t88 != 73) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x685 = INT32_MAX;
	volatile int8_t x686 = -1;
	int8_t x688 = INT8_MAX;
	static int32_t t89 = 488480479;

	t89 = (x685>>(x686<=(x687<=x688)));

	if (t89 != 1073741823) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x693 = UINT16_MAX;
	int16_t x694 = INT16_MIN;
	int8_t x695 = INT8_MIN;
	uint64_t x696 = 1644690436376421893LLU;
	int32_t t90 = 505948;

	t90 = (x693>>(x694<=(x695<=x696)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x701 = 867;
	int8_t x702 = INT8_MIN;
	static int32_t x703 = -1;
	uint8_t x704 = 20U;
	volatile int32_t t91 = -13777;

	t91 = (x701>>(x702<=(x703<=x704)));

	if (t91 != 433) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x705 = 0U;
	int32_t x706 = INT32_MIN;
	int32_t x707 = 503576483;
	int32_t t92 = -178878;

	t92 = (x705>>(x706<=(x707<=x708)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x709 = 40U;
	int8_t x710 = INT8_MAX;
	uint32_t x711 = 13U;
	volatile int32_t x712 = INT32_MAX;
	uint32_t t93 = 1U;

	t93 = (x709>>(x710<=(x711<=x712)));

	if (t93 != 40U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x725 = 0;
	static int8_t x726 = -1;
	uint32_t x727 = 12083U;
	uint16_t x728 = 292U;
	volatile int32_t t94 = -81484226;

	t94 = (x725>>(x726<=(x727<=x728)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x729 = 401682910388960482LLU;
	static int64_t x730 = INT64_MAX;
	int8_t x731 = 7;
	uint64_t x732 = UINT64_MAX;
	uint64_t t95 = 19809803LLU;

	t95 = (x729>>(x730<=(x731<=x732)));

	if (t95 != 401682910388960482LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x753 = INT16_MAX;
	volatile int16_t x754 = -23;
	int64_t x756 = -42541531LL;

	t96 = (x753>>(x754<=(x755<=x756)));

	if (t96 != 16383) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x758 = INT16_MIN;
	uint64_t x759 = 33728401569928381LLU;
	volatile uint64_t x760 = UINT64_MAX;
	volatile int32_t t97 = -1906;

	t97 = (x757>>(x758<=(x759<=x760)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x761 = 15U;
	uint8_t x762 = 1U;
	int64_t x764 = INT64_MIN;
	volatile int32_t t98 = -15;

	t98 = (x761>>(x762<=(x763<=x764)));

	if (t98 != 15) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x769 = 0;
	int64_t x771 = INT64_MIN;
	uint16_t x772 = UINT16_MAX;
	int32_t t99 = 5;

	t99 = (x769>>(x770<=(x771<=x772)));

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

