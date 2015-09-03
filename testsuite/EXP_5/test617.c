#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = 108782;
int8_t x12 = INT8_MIN;
static uint8_t x25 = UINT8_MAX;
volatile uint32_t x27 = UINT32_MAX;
int32_t t4 = -61046562;
volatile uint16_t x42 = 13528U;
uint32_t t5 = 18U;
int8_t x63 = -1;
static int8_t x64 = -39;
volatile int64_t x68 = INT64_MIN;
static uint32_t t7 = 1384031418U;
int32_t t8 = 1174;
int32_t t9 = 7;
static uint64_t x89 = UINT64_MAX;
volatile uint64_t x90 = 1107LLU;
uint16_t x117 = 20U;
uint64_t x119 = 2157531152LLU;
int32_t x121 = 116;
volatile int64_t t14 = INT64_MAX;
static uint64_t x142 = 5LLU;
uint64_t x153 = 2250601576519240LLU;
uint64_t t18 = 162505054057LLU;
volatile uint32_t t19 = 72978405U;
static volatile int8_t x194 = -13;
int8_t x197 = 2;
int8_t x202 = 1;
volatile int32_t t24 = 8208180;
uint64_t x227 = 2264355810526688LLU;
uint32_t x228 = 102U;
uint8_t x238 = 1U;
uint64_t x246 = 6LLU;
volatile uint16_t x257 = 23223U;
static int8_t x258 = 7;
static int16_t x259 = 474;
uint32_t x261 = 1U;
int8_t x281 = 18;
volatile int16_t x282 = -1;
volatile int32_t t33 = 667;
volatile int32_t t34 = 546;
volatile int64_t x294 = -1LL;
int32_t x295 = -1;
static volatile int16_t x296 = INT16_MIN;
static int16_t x343 = INT16_MAX;
uint64_t x351 = UINT64_MAX;
int8_t x352 = INT8_MIN;
int8_t x362 = -1;
volatile uint64_t x370 = 229535298289164550LLU;
int16_t x372 = INT16_MIN;
uint64_t x385 = 44217011LLU;
static int64_t x389 = 13572606066LL;
int32_t x398 = -1;
int8_t x401 = 0;
volatile uint64_t x402 = 350LLU;
int16_t x403 = INT16_MIN;
int64_t x418 = 119539434LL;
uint32_t x420 = 51429U;
volatile int64_t x423 = INT64_MIN;
volatile uint64_t t49 = 88302455LLU;
uint64_t x435 = 12457318736785640LLU;
int64_t x446 = 1228530LL;
static int64_t x447 = -67479LL;
static volatile int64_t t51 = 985882054313LL;
static int8_t x508 = INT8_MIN;
int32_t t55 = -54;
volatile uint32_t x525 = UINT32_MAX;
uint32_t x545 = 18920U;
uint16_t x547 = UINT16_MAX;
volatile uint32_t t59 = 4063243U;
uint32_t x569 = 387794535U;
static int32_t x592 = INT32_MIN;
uint16_t x595 = 5U;
volatile uint32_t t63 = UINT32_MAX;
volatile uint16_t x597 = 6671U;
int64_t x600 = -1LL;
int8_t x606 = 1;
static int32_t x607 = INT32_MAX;
static volatile int64_t x620 = 47155979075291LL;
static uint16_t x622 = 11725U;
volatile uint16_t x638 = 55U;
volatile int16_t x640 = -1;
volatile int8_t x648 = INT8_MAX;
uint8_t x653 = UINT8_MAX;
static volatile uint64_t x655 = 579227LLU;
static int32_t x670 = -3;
uint16_t x681 = 32U;
static int32_t t74 = 0;
int8_t x706 = -3;
volatile uint8_t x708 = 0U;
volatile int32_t t76 = 30;
uint32_t x717 = 3U;
volatile int8_t x734 = -1;
static volatile uint32_t x736 = 12165U;
uint64_t t80 = 66005377983756863LLU;
volatile int32_t x741 = 226217;
volatile uint8_t x748 = 14U;
int16_t x772 = -6832;
static int16_t x781 = 6;
int64_t x782 = INT64_MIN;
uint32_t x785 = UINT32_MAX;
uint8_t x787 = 13U;
uint8_t x788 = UINT8_MAX;
int8_t x796 = INT8_MIN;
volatile int8_t x811 = INT8_MAX;
int32_t t89 = -20041785;
uint64_t x817 = 888LLU;
uint64_t x818 = 123602443442LLU;
int32_t x826 = -1;
int32_t x851 = -233910;
int16_t x867 = INT16_MIN;
volatile int64_t x876 = INT64_MIN;


void f0(void) {
	uint64_t x1 = 58864LLU;
	int8_t x2 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	volatile int32_t x4 = INT32_MIN;
	static volatile uint64_t t0 = 591671LLU;

	t0 = (x1<<((x2/x3)<x4));

	if (t0 != 117728LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 47;
	uint32_t x10 = UINT32_MAX;
	volatile int32_t t1 = -981;

	t1 = (x9<<((x10/x11)<x12));

	if (t1 != 94) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	uint32_t x18 = 226023U;
	volatile uint32_t x19 = 4088082U;
	int32_t x20 = -456;
	volatile uint64_t t2 = 10LLU;

	t2 = (x17<<((x18/x19)<x20));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x26 = 10;
	int64_t x28 = INT64_MIN;
	static int32_t t3 = 228817;

	t3 = (x25<<((x26/x27)<x28));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MAX;
	int64_t x34 = 43LL;
	int8_t x35 = INT8_MAX;
	int16_t x36 = -1;

	t4 = (x33<<((x34/x35)<x36));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x41 = 4283U;
	uint8_t x43 = 16U;
	int8_t x44 = INT8_MIN;

	t5 = (x41<<((x42/x43)<x44));

	if (t5 != 4283U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x61 = UINT64_MAX;
	int32_t x62 = -819090050;
	uint64_t t6 = UINT64_MAX;

	t6 = (x61<<((x62/x63)<x64));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x65 = 2039U;
	int16_t x66 = -1;
	uint32_t x67 = UINT32_MAX;

	t7 = (x65<<((x66/x67)<x68));

	if (t7 != 2039U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x73 = 56U;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = UINT64_MAX;
	static volatile uint64_t x76 = 334497245LLU;

	t8 = (x73<<((x74/x75)<x76));

	if (t8 != 112) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = 18;
	int64_t x78 = -1862022676529LL;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MAX;

	t9 = (x77<<((x78/x79)<x80));

	if (t9 != 18) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x81 = 158409169044519552LLU;
	int16_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int8_t x84 = -4;
	volatile uint64_t t10 = 411229664779821606LLU;

	t10 = (x81<<((x82/x83)<x84));

	if (t10 != 158409169044519552LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x91 = INT16_MAX;
	volatile uint32_t x92 = 68U;
	static volatile uint64_t t11 = 0LLU;

	t11 = (x89<<((x90/x91)<x92));

	if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x118 = 811538112;
	int8_t x120 = 1;
	int32_t t12 = 7;

	t12 = (x117<<((x118/x119)<x120));

	if (t12 != 40) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x122 = 64499782U;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = 77U;
	volatile int32_t t13 = -188;

	t13 = (x121<<((x122/x123)<x124));

	if (t13 != 116) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x125 = INT64_MAX;
	volatile uint32_t x126 = 121U;
	int8_t x127 = INT8_MAX;
	int64_t x128 = -1LL;

	t14 = (x125<<((x126/x127)<x128));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x141 = 15U;
	volatile uint32_t x143 = 700208U;
	uint8_t x144 = 121U;
	volatile uint32_t t15 = 728782691U;

	t15 = (x141<<((x142/x143)<x144));

	if (t15 != 30U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x145 = INT8_MAX;
	static uint16_t x146 = 208U;
	int32_t x147 = -1019616;
	uint8_t x148 = 6U;
	static volatile int32_t t16 = -88402;

	t16 = (x145<<((x146/x147)<x148));

	if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	static uint32_t x152 = 7253U;
	volatile uint32_t t17 = 3306U;

	t17 = (x149<<((x150/x151)<x152));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x154 = UINT16_MAX;
	static int16_t x155 = -1;
	uint16_t x156 = UINT16_MAX;

	t18 = (x153<<((x154/x155)<x156));

	if (t18 != 4501203153038480LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x165 = 20256760U;
	int8_t x166 = INT8_MIN;
	volatile int8_t x167 = 9;
	int64_t x168 = -1LL;

	t19 = (x165<<((x166/x167)<x168));

	if (t19 != 40513520U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x193 = 0;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	int32_t t20 = -82;

	t20 = (x193<<((x194/x195)<x196));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x198 = -1;
	int32_t x199 = -1;
	int8_t x200 = -1;
	int32_t t21 = -10537562;

	t21 = (x197<<((x198/x199)<x200));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x201 = 209771LLU;
	uint32_t x203 = 76461584U;
	int32_t x204 = -1;
	volatile uint64_t t22 = 4873241927291467342LLU;

	t22 = (x201<<((x202/x203)<x204));

	if (t22 != 419542LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x205 = 10U;
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = 1LLU;
	volatile int32_t t23 = 122950376;

	t23 = (x205<<((x206/x207)<x208));

	if (t23 != 20) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x209 = 2991;
	uint32_t x210 = 124458608U;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;

	t24 = (x209<<((x210/x211)<x212));

	if (t24 != 5982) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x225 = 2113U;
	static int64_t x226 = INT64_MIN;
	int32_t t25 = 532;

	t25 = (x225<<((x226/x227)<x228));

	if (t25 != 2113) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x229 = 581U;
	volatile int64_t x230 = -1223733726LL;
	int8_t x231 = 1;
	int32_t x232 = -408176461;
	volatile int32_t t26 = 6311;

	t26 = (x229<<((x230/x231)<x232));

	if (t26 != 1162) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x237 = 0LLU;
	int32_t x239 = -1;
	int64_t x240 = INT64_MIN;
	static volatile uint64_t t27 = 3LLU;

	t27 = (x237<<((x238/x239)<x240));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x245 = UINT32_MAX;
	static uint64_t x247 = 68323351877LLU;
	static uint8_t x248 = 0U;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = (x245<<((x246/x247)<x248));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x260 = INT8_MAX;
	int32_t t29 = 1;

	t29 = (x257<<((x258/x259)<x260));

	if (t29 != 46446) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x262 = 15772681U;
	volatile int8_t x263 = -1;
	int8_t x264 = INT8_MIN;
	volatile uint32_t t30 = 26U;

	t30 = (x261<<((x262/x263)<x264));

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x265 = UINT32_MAX;
	static int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MAX;
	static int32_t x268 = -1;
	uint32_t t31 = UINT32_MAX;

	t31 = (x265<<((x266/x267)<x268));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x269 = 173U;
	int32_t x270 = -1;
	int64_t x271 = 109898071605LL;
	uint16_t x272 = 776U;
	volatile int32_t t32 = -70953839;

	t32 = (x269<<((x270/x271)<x272));

	if (t32 != 346) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x283 = -1;
	uint64_t x284 = UINT64_MAX;

	t33 = (x281<<((x282/x283)<x284));

	if (t33 != 36) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x289 = INT8_MAX;
	volatile int64_t x290 = -116296732776910120LL;
	uint32_t x291 = 2260000U;
	volatile int64_t x292 = INT64_MIN;

	t34 = (x289<<((x290/x291)<x292));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x293 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

	t35 = (x293<<((x294/x295)<x296));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x297 = UINT64_MAX;
	static uint8_t x298 = 3U;
	static volatile int64_t x299 = -26LL;
	int32_t x300 = INT32_MIN;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x297<<((x298/x299)<x300));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x317 = 8U;
	static uint64_t x318 = 5904687657031984453LLU;
	static uint32_t x319 = 10U;
	int64_t x320 = INT64_MAX;
	static volatile uint32_t t37 = 106861064U;

	t37 = (x317<<((x318/x319)<x320));

	if (t37 != 16U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = INT32_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t38 = -9839;

	t38 = (x341<<((x342/x343)<x344));

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	static uint64_t t39 = 3251070LLU;

	t39 = (x349<<((x350/x351)<x352));

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x361 = 3;
	volatile int8_t x363 = -1;
	static int64_t x364 = INT64_MIN;
	volatile int32_t t40 = 14020;

	t40 = (x361<<((x362/x363)<x364));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x369 = 705786766981572275LLU;
	volatile int64_t x371 = -1229912749460379LL;
	uint64_t t41 = 52492669005LLU;

	t41 = (x369<<((x370/x371)<x372));

	if (t41 != 1411573533963144550LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x386 = INT32_MAX;
	uint32_t x387 = 257877807U;
	int32_t x388 = 85;
	volatile uint64_t t42 = 196LLU;

	t42 = (x385<<((x386/x387)<x388));

	if (t42 != 88434022LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x390 = INT16_MIN;
	int32_t x391 = 45;
	uint32_t x392 = 5U;
	int64_t t43 = -97593945105438LL;

	t43 = (x389<<((x390/x391)<x392));

	if (t43 != 13572606066LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int16_t x399 = 578;
	int16_t x400 = -1;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x397<<((x398/x399)<x400));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x404 = -1649105571017165449LL;
	int32_t t45 = -2;

	t45 = (x401<<((x402/x403)<x404));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x409 = 8297;
	int8_t x410 = -1;
	volatile int16_t x411 = INT16_MIN;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t46 = -1;

	t46 = (x409<<((x410/x411)<x412));

	if (t46 != 8297) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x417 = UINT8_MAX;
	volatile uint32_t x419 = 4014860U;
	volatile int32_t t47 = -5;

	t47 = (x417<<((x418/x419)<x420));

	if (t47 != 510) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x421 = INT16_MAX;
	int32_t x422 = -1042340330;
	uint32_t x424 = UINT32_MAX;
	static volatile int32_t t48 = -251;

	t48 = (x421<<((x422/x423)<x424));

	if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x425 = UINT64_MAX;
	static int8_t x426 = INT8_MAX;
	static int8_t x427 = -1;
	int16_t x428 = -1;

	t49 = (x425<<((x426/x427)<x428));

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x433 = 11;
	uint8_t x434 = 0U;
	static int16_t x436 = -111;
	volatile int32_t t50 = 55;

	t50 = (x433<<((x434/x435)<x436));

	if (t50 != 22) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x445 = 198673425109451LL;
	volatile int32_t x448 = INT32_MAX;

	t51 = (x445<<((x446/x447)<x448));

	if (t51 != 397346850218902LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x453 = 46023546951LL;
	volatile int8_t x454 = INT8_MAX;
	int32_t x455 = -1;
	volatile int64_t x456 = INT64_MIN;
	int64_t t52 = -1613077LL;

	t52 = (x453<<((x454/x455)<x456));

	if (t52 != 46023546951LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x481 = UINT16_MAX;
	volatile int32_t x482 = 131629595;
	volatile int8_t x483 = -1;
	volatile uint64_t x484 = UINT64_MAX;
	static int32_t t53 = 21946;

	t53 = (x481<<((x482/x483)<x484));

	if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x497 = UINT16_MAX;
	volatile int32_t x498 = INT32_MIN;
	static int16_t x499 = INT16_MIN;
	uint16_t x500 = 3U;
	int32_t t54 = 7;

	t54 = (x497<<((x498/x499)<x500));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x505 = 0;
	int16_t x506 = INT16_MAX;
	uint16_t x507 = 960U;

	t55 = (x505<<((x506/x507)<x508));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x521 = 42U;
	static int32_t x522 = -27;
	int32_t x523 = -58952972;
	volatile int16_t x524 = -1;
	volatile int32_t t56 = -2791;

	t56 = (x521<<((x522/x523)<x524));

	if (t56 != 42) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x526 = 9386015U;
	uint64_t x527 = 10901069707LLU;
	int32_t x528 = 59;
	volatile uint32_t t57 = 5U;

	t57 = (x525<<((x526/x527)<x528));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x533 = 38148U;
	uint16_t x534 = 9U;
	int32_t x535 = INT32_MAX;
	int32_t x536 = -1;
	volatile uint32_t t58 = 2U;

	t58 = (x533<<((x534/x535)<x536));

	if (t58 != 38148U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x546 = 500U;
	int32_t x548 = -1;

	t59 = (x545<<((x546/x547)<x548));

	if (t59 != 18920U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x570 = INT64_MIN;
	uint32_t x571 = 620319U;
	int8_t x572 = INT8_MAX;
	uint32_t t60 = 24U;

	t60 = (x569<<((x570/x571)<x572));

	if (t60 != 775589070U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x573 = 7U;
	volatile int32_t x574 = -123397;
	static int16_t x575 = 585;
	static uint64_t x576 = UINT64_MAX;
	volatile int32_t t61 = -20;

	t61 = (x573<<((x574/x575)<x576));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x589 = 30212U;
	volatile int8_t x590 = 7;
	int8_t x591 = INT8_MIN;
	static int32_t t62 = 177318;

	t62 = (x589<<((x590/x591)<x592));

	if (t62 != 30212) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x593 = UINT32_MAX;
	volatile int16_t x594 = 1;
	int8_t x596 = 0;

	t63 = (x593<<((x594/x595)<x596));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x598 = INT16_MIN;
	int16_t x599 = INT16_MAX;
	volatile int32_t t64 = -4;

	t64 = (x597<<((x598/x599)<x600));

	if (t64 != 6671) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x605 = UINT16_MAX;
	int8_t x608 = -1;
	int32_t t65 = -1441930;

	t65 = (x605<<((x606/x607)<x608));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x617 = 10U;
	volatile int64_t x618 = -1LL;
	int32_t x619 = -1;
	int32_t t66 = 41252643;

	t66 = (x617<<((x618/x619)<x620));

	if (t66 != 20) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x621 = UINT16_MAX;
	int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t67 = -9138289;

	t67 = (x621<<((x622/x623)<x624));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x625 = 260002;
	int64_t x626 = 8908470570632410LL;
	uint16_t x627 = UINT16_MAX;
	uint64_t x628 = 1210807772517LLU;
	volatile int32_t t68 = -24;

	t68 = (x625<<((x626/x627)<x628));

	if (t68 != 520004) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x637 = 26;
	int32_t x639 = INT32_MAX;
	int32_t t69 = 79;

	t69 = (x637<<((x638/x639)<x640));

	if (t69 != 26) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x641 = INT16_MAX;
	int32_t x642 = INT32_MAX;
	uint8_t x643 = 2U;
	int8_t x644 = INT8_MIN;
	int32_t t70 = -354;

	t70 = (x641<<((x642/x643)<x644));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x645 = 538U;
	uint32_t x646 = 21254700U;
	uint8_t x647 = 1U;
	int32_t t71 = -55960998;

	t71 = (x645<<((x646/x647)<x648));

	if (t71 != 538) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x654 = INT16_MIN;
	int64_t x656 = -1LL;
	volatile int32_t t72 = 26704327;

	t72 = (x653<<((x654/x655)<x656));

	if (t72 != 510) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x669 = 2734494071890847LLU;
	int32_t x671 = INT32_MAX;
	int8_t x672 = INT8_MIN;
	uint64_t t73 = 123425234507LLU;

	t73 = (x669<<((x670/x671)<x672));

	if (t73 != 2734494071890847LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x682 = -1;
	uint32_t x683 = UINT32_MAX;
	int8_t x684 = INT8_MAX;

	t74 = (x681<<((x682/x683)<x684));

	if (t74 != 64) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x705 = INT8_MAX;
	uint8_t x707 = 2U;
	volatile int32_t t75 = 24734419;

	t75 = (x705<<((x706/x707)<x708));

	if (t75 != 254) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x709 = 9U;
	static int64_t x710 = INT64_MAX;
	uint8_t x711 = UINT8_MAX;
	uint64_t x712 = UINT64_MAX;

	t76 = (x709<<((x710/x711)<x712));

	if (t76 != 18) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x718 = UINT8_MAX;
	volatile uint32_t x719 = 800000U;
	int8_t x720 = -1;
	static uint32_t t77 = 16U;

	t77 = (x717<<((x718/x719)<x720));

	if (t77 != 6U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x725 = 78293;
	volatile int8_t x726 = INT8_MIN;
	uint32_t x727 = UINT32_MAX;
	int32_t x728 = -1;
	int32_t t78 = 1631549;

	t78 = (x725<<((x726/x727)<x728));

	if (t78 != 156586) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x729 = 312430;
	static volatile int16_t x730 = INT16_MIN;
	int16_t x731 = -1;
	volatile int8_t x732 = 0;
	volatile int32_t t79 = 121378;

	t79 = (x729<<((x730/x731)<x732));

	if (t79 != 312430) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x733 = 1LLU;
	int32_t x735 = INT32_MIN;

	t80 = (x733<<((x734/x735)<x736));

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x742 = INT16_MIN;
	int8_t x743 = -2;
	volatile int8_t x744 = INT8_MIN;
	volatile int32_t t81 = 1697;

	t81 = (x741<<((x742/x743)<x744));

	if (t81 != 226217) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x745 = UINT32_MAX;
	uint64_t x746 = 8LLU;
	volatile int16_t x747 = -1;
	volatile uint32_t t82 = 2U;

	t82 = (x745<<((x746/x747)<x748));

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x769 = 4090U;
	int8_t x770 = INT8_MIN;
	static uint32_t x771 = UINT32_MAX;
	uint32_t t83 = 2574U;

	t83 = (x769<<((x770/x771)<x772));

	if (t83 != 8180U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x783 = INT64_MIN;
	int8_t x784 = -1;
	static volatile int32_t t84 = 29772;

	t84 = (x781<<((x782/x783)<x784));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x786 = INT64_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (x785<<((x786/x787)<x788));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x789 = 1;
	uint8_t x790 = UINT8_MAX;
	int32_t x791 = 724;
	static int8_t x792 = INT8_MIN;
	volatile int32_t t86 = 1;

	t86 = (x789<<((x790/x791)<x792));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x793 = 1LLU;
	int32_t x794 = -1;
	uint32_t x795 = UINT32_MAX;
	uint64_t t87 = 61283151497LLU;

	t87 = (x793<<((x794/x795)<x796));

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x809 = UINT8_MAX;
	int16_t x810 = 0;
	int32_t x812 = INT32_MIN;
	int32_t t88 = -358;

	t88 = (x809<<((x810/x811)<x812));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x813 = 130649;
	static uint16_t x814 = UINT16_MAX;
	volatile uint64_t x815 = 1499419408923782LLU;
	int64_t x816 = -8348794525375204LL;

	t89 = (x813<<((x814/x815)<x816));

	if (t89 != 261298) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x819 = -11641;
	uint8_t x820 = UINT8_MAX;
	static uint64_t t90 = 96754LLU;

	t90 = (x817<<((x818/x819)<x820));

	if (t90 != 1776LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x825 = 141157;
	uint64_t x827 = 257305484LLU;
	int8_t x828 = INT8_MAX;
	static volatile int32_t t91 = -112806073;

	t91 = (x825<<((x826/x827)<x828));

	if (t91 != 141157) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x829 = 1U;
	static uint64_t x830 = 246313379737LLU;
	int32_t x831 = INT32_MIN;
	static int8_t x832 = 25;
	volatile int32_t t92 = -15213;

	t92 = (x829<<((x830/x831)<x832));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x833 = 0;
	uint32_t x834 = UINT32_MAX;
	int32_t x835 = INT32_MIN;
	int64_t x836 = INT64_MAX;
	int32_t t93 = -1111;

	t93 = (x833<<((x834/x835)<x836));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x845 = 7998U;
	static uint16_t x846 = UINT16_MAX;
	uint8_t x847 = 15U;
	volatile int32_t x848 = -1;
	volatile uint32_t t94 = 843U;

	t94 = (x845<<((x846/x847)<x848));

	if (t94 != 7998U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x849 = 1511U;
	uint64_t x850 = 1504733816LLU;
	volatile uint64_t x852 = 6367793874796146541LLU;
	uint32_t t95 = 240260U;

	t95 = (x849<<((x850/x851)<x852));

	if (t95 != 3022U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x853 = 12588939U;
	int16_t x854 = INT16_MAX;
	volatile int64_t x855 = INT64_MIN;
	static uint16_t x856 = UINT16_MAX;
	uint32_t t96 = 7919481U;

	t96 = (x853<<((x854/x855)<x856));

	if (t96 != 25177878U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x865 = 269;
	volatile int8_t x866 = -57;
	static int8_t x868 = INT8_MIN;
	static int32_t t97 = -66217293;

	t97 = (x865<<((x866/x867)<x868));

	if (t97 != 269) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x873 = 0U;
	volatile int8_t x874 = -25;
	int8_t x875 = INT8_MAX;
	volatile int32_t t98 = 49959;

	t98 = (x873<<((x874/x875)<x876));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x877 = 0;
	volatile int32_t x878 = -1;
	uint32_t x879 = 4U;
	int32_t x880 = 6385;
	int32_t t99 = 6;

	t99 = (x877<<((x878/x879)<x880));

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

