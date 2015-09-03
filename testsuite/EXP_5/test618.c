#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 3;
static uint64_t x18 = 3LLU;
static volatile int32_t x19 = INT32_MIN;
volatile int32_t t3 = -106975;
static volatile int16_t x27 = 6;
volatile uint64_t t7 = UINT64_MAX;
int32_t x42 = INT32_MAX;
static int32_t x49 = 29081188;
int64_t x52 = -1LL;
volatile uint32_t t10 = UINT32_MAX;
int8_t x62 = -1;
int64_t x65 = 8526902493205LL;
int16_t x83 = INT16_MIN;
int32_t x84 = -223;
static uint8_t x85 = UINT8_MAX;
int8_t x88 = -1;
volatile int32_t x99 = INT32_MAX;
int16_t x100 = INT16_MIN;
int8_t x110 = 3;
uint16_t x135 = 1U;
int32_t t18 = -156771299;
int32_t x142 = INT32_MIN;
uint64_t x143 = 116576807440409LLU;
volatile int32_t x168 = INT32_MAX;
static volatile int32_t t24 = 988887;
int16_t x179 = -2;
int32_t x180 = -1;
static int8_t x189 = 17;
uint64_t x190 = 13999LLU;
static int64_t x194 = INT64_MIN;
int32_t t28 = -3386;
static volatile int64_t x206 = INT64_MIN;
int32_t t30 = 2;
int32_t t32 = 473822;
static int16_t x245 = 57;
volatile int32_t x246 = -10;
int32_t x247 = -1050155;
int16_t x248 = -1;
static volatile int32_t t34 = -683830;
int8_t x270 = INT8_MIN;
static volatile int8_t x286 = -28;
volatile uint32_t x295 = UINT32_MAX;
int32_t t38 = 30964;
int32_t x311 = INT32_MIN;
static int16_t x312 = INT16_MIN;
volatile int64_t x322 = INT64_MIN;
volatile int64_t x324 = INT64_MAX;
static int32_t t42 = 7411096;
static int64_t x352 = INT64_MIN;
uint8_t x384 = 4U;
uint16_t x427 = 6410U;
uint8_t x445 = 25U;
int8_t x467 = -1;
uint32_t x470 = 62U;
int32_t t59 = -107522;
volatile int64_t x481 = INT64_MAX;
static uint64_t x503 = 6606303370LLU;
volatile int32_t t64 = -167391;
static int64_t x521 = 464359510LL;
int64_t x524 = -1LL;
volatile uint64_t x547 = 20555460567626LLU;
static volatile int32_t t68 = -14;
int16_t x553 = 4;
uint64_t x557 = UINT64_MAX;
static uint64_t t71 = UINT64_MAX;
uint32_t x586 = UINT32_MAX;
int32_t x587 = INT32_MIN;
uint16_t x600 = 2996U;
volatile int32_t x611 = INT32_MAX;
uint32_t x622 = 1U;
volatile int32_t t76 = -179;
uint16_t x626 = 36U;
uint8_t x631 = 17U;
int8_t x634 = INT8_MIN;
static int16_t x635 = -105;
volatile int16_t x636 = -1;
volatile int32_t t80 = 444;
static uint8_t x649 = UINT8_MAX;
int64_t x650 = INT64_MAX;
volatile int32_t t83 = -1;
int64_t x672 = 8457888078126LL;
uint8_t x693 = 30U;
int8_t x694 = -52;
int32_t x695 = INT32_MIN;
volatile int32_t t87 = 3139;
uint8_t x701 = 92U;
static int8_t x728 = -1;
int64_t x733 = 562738178LL;
static volatile int64_t x734 = -65155778257LL;
int64_t x737 = INT64_MAX;
static int64_t x740 = 470011217LL;
static int64_t t92 = 937708576608093794LL;
int64_t x750 = INT64_MIN;
uint16_t x759 = UINT16_MAX;
uint64_t t96 = UINT64_MAX;
uint64_t x783 = 159LLU;
uint8_t x797 = 6U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 261U;
	int32_t t0 = -29525092;

	t0 = (x1>>((x2/x3)<x4));

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MAX;
	uint32_t x10 = 1U;
	int64_t x11 = INT64_MIN;
	static int32_t x12 = 344591438;

	t1 = (x9>>((x10/x11)<x12));

	if (t1 != 1073741823) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 7301518506LLU;
	static volatile int8_t x14 = 34;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MAX;
	static uint64_t t2 = 1474045778923LLU;

	t2 = (x13>>((x14/x15)<x16));

	if (t2 != 3650759253LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x20 = INT32_MIN;

	t3 = (x17>>((x18/x19)<x20));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 28U;
	static int8_t x22 = INT8_MIN;
	uint16_t x23 = 55U;
	uint8_t x24 = 0U;
	int32_t t4 = 10;

	t4 = (x21>>((x22/x23)<x24));

	if (t4 != 14) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	uint64_t x26 = 31249600LLU;
	int16_t x28 = INT16_MAX;
	int32_t t5 = 8096;

	t5 = (x25>>((x26/x27)<x28));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x34 = 16214498U;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = 2;
	static volatile int32_t t6 = -200229460;

	t6 = (x33>>((x34/x35)<x36));

	if (t6 != 1073741823) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = 5;
	int8_t x39 = INT8_MIN;
	static int32_t x40 = INT32_MIN;

	t7 = (x37>>((x38/x39)<x40));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x41 = INT8_MAX;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	int32_t t8 = -949;

	t8 = (x41>>((x42/x43)<x44));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x50 = -1LL;
	volatile uint64_t x51 = 201LLU;
	volatile int32_t t9 = -2;

	t9 = (x49>>((x50/x51)<x52));

	if (t9 != 14540594) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x57 = UINT32_MAX;
	volatile int16_t x58 = INT16_MAX;
	int8_t x59 = 1;
	int8_t x60 = 1;

	t10 = (x57>>((x58/x59)<x60));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x61 = 62U;
	int8_t x63 = INT8_MIN;
	static uint16_t x64 = 1U;
	volatile int32_t t11 = 16150;

	t11 = (x61>>((x62/x63)<x64));

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x66 = -1;
	static volatile int64_t x67 = -1LL;
	uint64_t x68 = UINT64_MAX;
	static volatile int64_t t12 = 454725LL;

	t12 = (x65>>((x66/x67)<x68));

	if (t12 != 4263451246602LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = 57;
	volatile int32_t t13 = 47782;

	t13 = (x81>>((x82/x83)<x84));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x86 = 0;
	int64_t x87 = INT64_MIN;
	int32_t t14 = -57319278;

	t14 = (x85>>((x86/x87)<x88));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x97 = 2368764U;
	static int8_t x98 = INT8_MIN;
	uint32_t t15 = 202U;

	t15 = (x97>>((x98/x99)<x100));

	if (t15 != 2368764U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int8_t x111 = -1;
	int64_t x112 = -1LL;
	volatile int32_t t16 = -19829;

	t16 = (x109>>((x110/x111)<x112));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 24U;
	volatile uint16_t x131 = 21U;
	int8_t x132 = 4;
	uint32_t t17 = 53436U;

	t17 = (x129>>((x130/x131)<x132));

	if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x133 = INT16_MAX;
	volatile int32_t x134 = -1;
	volatile uint8_t x136 = 10U;

	t18 = (x133>>((x134/x135)<x136));

	if (t18 != 16383) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x137 = UINT64_MAX;
	static int64_t x138 = INT64_MIN;
	int8_t x139 = 7;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t19 = 130537135664676168LLU;

	t19 = (x137>>((x138/x139)<x140));

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x141 = UINT32_MAX;
	volatile int32_t x144 = INT32_MIN;
	volatile uint32_t t20 = 2981U;

	t20 = (x141>>((x142/x143)<x144));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x153 = 12305;
	uint32_t x154 = 659U;
	volatile int16_t x155 = INT16_MIN;
	static int8_t x156 = 48;
	volatile int32_t t21 = -3214;

	t21 = (x153>>((x154/x155)<x156));

	if (t21 != 6152) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x157 = 30U;
	int64_t x158 = -2499939508961440844LL;
	static volatile int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t22 = -51;

	t22 = (x157>>((x158/x159)<x160));

	if (t22 != 30) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x161 = 0;
	static volatile int32_t x162 = INT32_MAX;
	volatile int64_t x163 = INT64_MIN;
	int32_t x164 = -118043;
	volatile int32_t t23 = -9;

	t23 = (x161>>((x162/x163)<x164));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;

	t24 = (x165>>((x166/x167)<x168));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MIN;
	int64_t t25 = INT64_MAX;

	t25 = (x177>>((x178/x179)<x180));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x191 = 11236910;
	static uint32_t x192 = 1U;
	int32_t t26 = 416;

	t26 = (x189>>((x190/x191)<x192));

	if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x193 = 117197174044480395LLU;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = -203613793LL;
	volatile uint64_t t27 = 11941015617LLU;

	t27 = (x193>>((x194/x195)<x196));

	if (t27 != 117197174044480395LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x197 = 129U;
	int64_t x198 = INT64_MAX;
	volatile uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = INT8_MIN;

	t28 = (x197>>((x198/x199)<x200));

	if (t28 != 129) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x205 = 226641732896423369LL;
	int8_t x207 = INT8_MIN;
	static volatile uint8_t x208 = UINT8_MAX;
	static volatile int64_t t29 = -354LL;

	t29 = (x205>>((x206/x207)<x208));

	if (t29 != 226641732896423369LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x209 = 25260721;
	int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	uint32_t x212 = 3U;

	t30 = (x209>>((x210/x211)<x212));

	if (t30 != 25260721) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x217 = 0;
	volatile int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	volatile int32_t t31 = -567248073;

	t31 = (x217>>((x218/x219)<x220));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x221 = 76;
	uint8_t x222 = 10U;
	int64_t x223 = INT64_MIN;
	static volatile int32_t x224 = -1;

	t32 = (x221>>((x222/x223)<x224));

	if (t32 != 76) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x237 = 0U;
	uint16_t x238 = 1U;
	static volatile int32_t x239 = -1;
	int32_t x240 = INT32_MIN;
	volatile int32_t t33 = 0;

	t33 = (x237>>((x238/x239)<x240));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {


	t34 = (x245>>((x246/x247)<x248));

	if (t34 != 57) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x269 = INT8_MAX;
	int32_t x271 = INT32_MAX;
	int8_t x272 = INT8_MAX;
	volatile int32_t t35 = 28;

	t35 = (x269>>((x270/x271)<x272));

	if (t35 != 63) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x285 = 1656058643U;
	uint16_t x287 = UINT16_MAX;
	uint8_t x288 = 0U;
	volatile uint32_t t36 = 45628U;

	t36 = (x285>>((x286/x287)<x288));

	if (t36 != 1656058643U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x293 = 1;
	int16_t x294 = INT16_MAX;
	volatile uint64_t x296 = 142LLU;
	volatile int32_t t37 = 4708;

	t37 = (x293>>((x294/x295)<x296));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x297 = UINT8_MAX;
	static uint64_t x298 = 2290921044403307190LLU;
	static int32_t x299 = 51720148;
	static int16_t x300 = 31;

	t38 = (x297>>((x298/x299)<x300));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x301 = 786823294LL;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = UINT16_MAX;
	uint16_t x304 = UINT16_MAX;
	volatile int64_t t39 = -17008350089LL;

	t39 = (x301>>((x302/x303)<x304));

	if (t39 != 393411647LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x309 = INT32_MAX;
	volatile int16_t x310 = -1;
	volatile int32_t t40 = INT32_MAX;

	t40 = (x309>>((x310/x311)<x312));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = 2;
	static volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t41 = 36;

	t41 = (x313>>((x314/x315)<x316));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x321 = 133U;
	uint16_t x323 = 1U;

	t42 = (x321>>((x322/x323)<x324));

	if (t42 != 66) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x329 = 831;
	static int16_t x330 = 2;
	static int64_t x331 = -1LL;
	int16_t x332 = -9;
	int32_t t43 = 2555;

	t43 = (x329>>((x330/x331)<x332));

	if (t43 != 831) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x345 = 3LL;
	uint16_t x346 = 2U;
	int32_t x347 = 3;
	int32_t x348 = INT32_MIN;
	int64_t t44 = -11LL;

	t44 = (x345>>((x346/x347)<x348));

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x349 = UINT32_MAX;
	uint64_t x350 = 7221114LLU;
	int16_t x351 = 15;
	volatile uint32_t t45 = 4462813U;

	t45 = (x349>>((x350/x351)<x352));

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x357 = 2653U;
	static uint32_t x358 = UINT32_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	int64_t x360 = INT64_MAX;
	int32_t t46 = 24;

	t46 = (x357>>((x358/x359)<x360));

	if (t46 != 1326) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = -1LL;
	uint64_t x383 = UINT64_MAX;
	static uint32_t t47 = 60004U;

	t47 = (x381>>((x382/x383)<x384));

	if (t47 != 2147483647U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x406 = -1386692;
	volatile int64_t x407 = -1LL;
	volatile int32_t x408 = INT32_MIN;
	volatile int32_t t48 = -1;

	t48 = (x405>>((x406/x407)<x408));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MAX;
	static int32_t x415 = 514;
	static int16_t x416 = INT16_MIN;
	int64_t t49 = INT64_MAX;

	t49 = (x413>>((x414/x415)<x416));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x417 = 8U;
	int8_t x418 = INT8_MIN;
	uint64_t x419 = 1834120LLU;
	uint32_t x420 = 4187260U;
	uint32_t t50 = 3232U;

	t50 = (x417>>((x418/x419)<x420));

	if (t50 != 8U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x425 = UINT16_MAX;
	volatile int16_t x426 = 754;
	uint8_t x428 = UINT8_MAX;
	int32_t t51 = -203996658;

	t51 = (x425>>((x426/x427)<x428));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x437 = 7743911LLU;
	int64_t x438 = 42068786LL;
	int16_t x439 = -1;
	int8_t x440 = -1;
	static volatile uint64_t t52 = 289473277440529553LLU;

	t52 = (x437>>((x438/x439)<x440));

	if (t52 != 3871955LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x441 = 14U;
	uint16_t x442 = UINT16_MAX;
	uint16_t x443 = 1U;
	static volatile int8_t x444 = -1;
	volatile int32_t t53 = -35413;

	t53 = (x441>>((x442/x443)<x444));

	if (t53 != 14) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x446 = -1;
	int64_t x447 = INT64_MIN;
	volatile int64_t x448 = INT64_MIN;
	static volatile int32_t t54 = 506178362;

	t54 = (x445>>((x446/x447)<x448));

	if (t54 != 25) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x449 = 101297U;
	static int32_t x450 = INT32_MAX;
	static int64_t x451 = 47218LL;
	int16_t x452 = INT16_MIN;
	uint32_t t55 = 3209U;

	t55 = (x449>>((x450/x451)<x452));

	if (t55 != 101297U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x461 = UINT8_MAX;
	static uint8_t x462 = UINT8_MAX;
	static uint32_t x463 = 113706556U;
	static uint32_t x464 = 15533U;
	static volatile int32_t t56 = 42538554;

	t56 = (x461>>((x462/x463)<x464));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x465 = 53U;
	static int8_t x466 = -1;
	int32_t x468 = INT32_MAX;
	volatile int32_t t57 = -7597;

	t57 = (x465>>((x466/x467)<x468));

	if (t57 != 26) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x469 = 1;
	static int32_t x471 = 21873;
	int64_t x472 = 1657376203778LL;
	volatile int32_t t58 = 24620;

	t58 = (x469>>((x470/x471)<x472));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x477 = INT32_MAX;
	static uint8_t x478 = 12U;
	uint8_t x479 = UINT8_MAX;
	static uint8_t x480 = 12U;

	t59 = (x477>>((x478/x479)<x480));

	if (t59 != 1073741823) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x482 = 1U;
	uint8_t x483 = UINT8_MAX;
	volatile uint16_t x484 = 212U;
	int64_t t60 = 1LL;

	t60 = (x481>>((x482/x483)<x484));

	if (t60 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x485 = UINT64_MAX;
	volatile int64_t x486 = 110253133120LL;
	int8_t x487 = 17;
	static int64_t x488 = 3761210363172LL;
	volatile uint64_t t61 = 31469424532873057LLU;

	t61 = (x485>>((x486/x487)<x488));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x489 = INT8_MAX;
	static uint32_t x490 = 946U;
	int16_t x491 = 388;
	int16_t x492 = -13274;
	int32_t t62 = 35326;

	t62 = (x489>>((x490/x491)<x492));

	if (t62 != 63) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x501 = 48314950337811657LLU;
	volatile uint64_t x502 = 61313972734809LLU;
	uint8_t x504 = 68U;
	volatile uint64_t t63 = 1972LLU;

	t63 = (x501>>((x502/x503)<x504));

	if (t63 != 48314950337811657LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = 14;
	volatile int8_t x506 = -1;
	int64_t x507 = -6321LL;
	uint8_t x508 = 4U;

	t64 = (x505>>((x506/x507)<x508));

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x522 = 68273761LLU;
	uint16_t x523 = 3941U;
	int64_t t65 = -1236LL;

	t65 = (x521>>((x522/x523)<x524));

	if (t65 != 232179755LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x525 = UINT8_MAX;
	uint64_t x526 = UINT64_MAX;
	volatile int8_t x527 = INT8_MIN;
	volatile uint64_t x528 = UINT64_MAX;
	int32_t t66 = 1023248;

	t66 = (x525>>((x526/x527)<x528));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x533 = 100613224843248LLU;
	uint8_t x534 = UINT8_MAX;
	uint64_t x535 = UINT64_MAX;
	int16_t x536 = INT16_MAX;
	volatile uint64_t t67 = 125LLU;

	t67 = (x533>>((x534/x535)<x536));

	if (t67 != 50306612421624LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x545 = 18;
	static int64_t x546 = -6198099LL;
	int16_t x548 = -800;

	t68 = (x545>>((x546/x547)<x548));

	if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x549 = 30;
	uint32_t x550 = UINT32_MAX;
	uint64_t x551 = 4756265375LLU;
	int8_t x552 = INT8_MIN;
	int32_t t69 = 1;

	t69 = (x549>>((x550/x551)<x552));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x554 = INT8_MIN;
	static uint16_t x555 = 5454U;
	volatile int64_t x556 = INT64_MIN;
	int32_t t70 = 15504730;

	t70 = (x553>>((x554/x555)<x556));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x558 = INT16_MIN;
	static int64_t x559 = INT64_MIN;
	static int8_t x560 = INT8_MIN;

	t71 = (x557>>((x558/x559)<x560));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x585 = 5LLU;
	static uint32_t x588 = 2U;
	static uint64_t t72 = 770LLU;

	t72 = (x585>>((x586/x587)<x588));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x597 = 0U;
	int16_t x598 = INT16_MIN;
	static int64_t x599 = 59526LL;
	int32_t t73 = -102270777;

	t73 = (x597>>((x598/x599)<x600));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x605 = INT32_MAX;
	volatile int8_t x606 = 1;
	uint64_t x607 = UINT64_MAX;
	static volatile int32_t x608 = -20742607;
	static volatile int32_t t74 = -4783219;

	t74 = (x605>>((x606/x607)<x608));

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x609 = 0U;
	int32_t x610 = -1;
	int64_t x612 = 359597102324LL;
	int32_t t75 = -1193166;

	t75 = (x609>>((x610/x611)<x612));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x621 = 2675;
	int64_t x623 = -1LL;
	volatile uint16_t x624 = 31145U;

	t76 = (x621>>((x622/x623)<x624));

	if (t76 != 1337) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x625 = UINT32_MAX;
	uint64_t x627 = UINT64_MAX;
	int32_t x628 = -1;
	uint32_t t77 = 1975U;

	t77 = (x625>>((x626/x627)<x628));

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x629 = UINT8_MAX;
	volatile uint64_t x630 = 48704346LLU;
	int64_t x632 = INT64_MIN;
	int32_t t78 = 32;

	t78 = (x629>>((x630/x631)<x632));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x633 = 261;
	int32_t t79 = -30693;

	t79 = (x633>>((x634/x635)<x636));

	if (t79 != 261) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x641 = 27;
	uint64_t x642 = 1837142336243799LLU;
	static int16_t x643 = -1;
	int64_t x644 = INT64_MAX;

	t80 = (x641>>((x642/x643)<x644));

	if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x645 = 6U;
	int8_t x646 = INT8_MAX;
	uint64_t x647 = 52498089176168800LLU;
	uint8_t x648 = 7U;
	int32_t t81 = 960126;

	t81 = (x645>>((x646/x647)<x648));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x651 = 7;
	static uint64_t x652 = 1397626377LLU;
	volatile int32_t t82 = -96659;

	t82 = (x649>>((x650/x651)<x652));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x661 = UINT16_MAX;
	uint32_t x662 = UINT32_MAX;
	static int16_t x663 = -1;
	int8_t x664 = -1;

	t83 = (x661>>((x662/x663)<x664));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x665 = UINT32_MAX;
	int64_t x666 = 114986LL;
	int8_t x667 = -2;
	uint16_t x668 = UINT16_MAX;
	uint32_t t84 = 43U;

	t84 = (x665>>((x666/x667)<x668));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x669 = 3;
	volatile int64_t x670 = INT64_MAX;
	int32_t x671 = -9;
	volatile int32_t t85 = 111658999;

	t85 = (x669>>((x670/x671)<x672));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x677 = UINT16_MAX;
	int8_t x678 = INT8_MIN;
	volatile int64_t x679 = 183381LL;
	uint16_t x680 = UINT16_MAX;
	int32_t t86 = 702720570;

	t86 = (x677>>((x678/x679)<x680));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x696 = 21;

	t87 = (x693>>((x694/x695)<x696));

	if (t87 != 15) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x702 = 30;
	int64_t x703 = -1LL;
	uint16_t x704 = UINT16_MAX;
	int32_t t88 = -11523212;

	t88 = (x701>>((x702/x703)<x704));

	if (t88 != 46) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x725 = INT8_MAX;
	int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	static volatile int32_t t89 = 1022;

	t89 = (x725>>((x726/x727)<x728));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x729 = 665U;
	static int64_t x730 = INT64_MAX;
	uint8_t x731 = UINT8_MAX;
	static int64_t x732 = INT64_MIN;
	volatile int32_t t90 = 16174;

	t90 = (x729>>((x730/x731)<x732));

	if (t90 != 665) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x735 = INT64_MIN;
	volatile int16_t x736 = INT16_MAX;
	int64_t t91 = 8504LL;

	t91 = (x733>>((x734/x735)<x736));

	if (t91 != 281369089LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x738 = -12;
	int32_t x739 = -1;

	t92 = (x737>>((x738/x739)<x740));

	if (t92 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x745 = INT16_MAX;
	int32_t x746 = INT32_MAX;
	int8_t x747 = 1;
	int64_t x748 = 1178673821LL;
	volatile int32_t t93 = -283;

	t93 = (x745>>((x746/x747)<x748));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x749 = 1027518460471869LLU;
	volatile int16_t x751 = INT16_MIN;
	int16_t x752 = 4;
	volatile uint64_t t94 = 18770916LLU;

	t94 = (x749>>((x750/x751)<x752));

	if (t94 != 1027518460471869LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x757 = 24208150126660091LLU;
	int32_t x758 = INT32_MIN;
	static uint8_t x760 = 1U;
	volatile uint64_t t95 = 113LLU;

	t95 = (x757>>((x758/x759)<x760));

	if (t95 != 12104075063330045LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x769 = UINT64_MAX;
	int32_t x770 = INT32_MIN;
	static int16_t x771 = INT16_MIN;
	uint16_t x772 = 0U;

	t96 = (x769>>((x770/x771)<x772));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x781 = UINT32_MAX;
	uint16_t x782 = 22U;
	int16_t x784 = INT16_MIN;
	volatile uint32_t t97 = 712U;

	t97 = (x781>>((x782/x783)<x784));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x793 = INT8_MAX;
	int32_t x794 = -311101061;
	int64_t x795 = INT64_MIN;
	uint8_t x796 = 1U;
	int32_t t98 = -3148513;

	t98 = (x793>>((x794/x795)<x796));

	if (t98 != 63) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x798 = 1U;
	uint8_t x799 = UINT8_MAX;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t99 = -20962238;

	t99 = (x797>>((x798/x799)<x800));

	if (t99 != 3) { NG(); } else { ; }
	
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

