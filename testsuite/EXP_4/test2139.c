#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
int8_t x3 = 0;
int16_t x6 = INT16_MAX;
uint64_t x19 = 22709LLU;
int32_t x42 = INT32_MIN;
uint32_t x66 = UINT32_MAX;
static volatile int32_t x70 = INT32_MIN;
uint8_t x74 = UINT8_MAX;
uint32_t x77 = UINT32_MAX;
int16_t x84 = -67;
int32_t t13 = 972;
static volatile uint32_t x91 = UINT32_MAX;
static int64_t x115 = -4838300971118939LL;
int64_t x116 = INT64_MIN;
uint32_t t17 = 234214U;
static volatile int32_t t18 = 53;
volatile int32_t x132 = INT32_MIN;
static uint64_t t20 = UINT64_MAX;
uint32_t x153 = 15470623U;
int32_t x155 = 5;
uint16_t x162 = UINT16_MAX;
static volatile uint32_t x177 = 9149065U;
int64_t x180 = 12423557421948LL;
static int8_t x204 = 60;
volatile int32_t t25 = 1;
uint64_t x207 = 16863558322514473LLU;
int16_t x208 = 217;
static volatile uint16_t x214 = 1062U;
int16_t x248 = INT16_MIN;
volatile int8_t x250 = INT8_MIN;
volatile int64_t x259 = INT64_MAX;
uint64_t x266 = 840944627729LLU;
int64_t x270 = -87447578080LL;
int16_t x271 = -1;
static volatile uint32_t t35 = 4U;
int16_t x277 = INT16_MAX;
int16_t x281 = INT16_MAX;
int32_t t37 = -22;
uint8_t x289 = UINT8_MAX;
int32_t t38 = -425;
static int64_t x295 = -82288746330357LL;
int32_t t39 = 139361;
int16_t x301 = INT16_MAX;
static int16_t x311 = INT16_MIN;
uint16_t x312 = 87U;
uint64_t x317 = 41027009LLU;
uint16_t x318 = 166U;
static uint8_t x324 = UINT8_MAX;
uint64_t x329 = 663LLU;
int64_t x330 = INT64_MAX;
uint8_t x341 = UINT8_MAX;
static int64_t x342 = -830LL;
int32_t x343 = -210778;
volatile int32_t t46 = 48642;
int32_t x348 = INT32_MAX;
int8_t x363 = -1;
static int16_t x387 = INT16_MIN;
uint32_t x400 = UINT32_MAX;
int8_t x414 = -24;
int8_t x424 = 2;
volatile uint8_t x429 = UINT8_MAX;
volatile int8_t x443 = INT8_MIN;
uint32_t x450 = UINT32_MAX;
int8_t x463 = INT8_MIN;
uint16_t x477 = UINT16_MAX;
volatile int8_t x479 = -1;
uint32_t x480 = UINT32_MAX;
int8_t x481 = 4;
int32_t x503 = INT32_MIN;
volatile int16_t x520 = 1;
uint64_t t71 = 401188754114650191LLU;
static uint8_t x521 = 0U;
uint32_t x525 = 2204U;
int64_t x528 = -1LL;
int32_t x536 = -1;
static int16_t x555 = INT16_MAX;
int64_t x586 = 64LL;
int8_t x597 = 11;
static int32_t x610 = 4661998;
volatile uint8_t x611 = UINT8_MAX;
uint16_t x616 = 1U;
static volatile int64_t x621 = 1LL;
volatile uint32_t t87 = 29067U;
static int8_t x630 = -1;
int64_t x637 = 33066575780391LL;
uint16_t x639 = UINT16_MAX;
static int64_t x655 = -14577643415LL;
static uint8_t x657 = 0U;
uint8_t x666 = 124U;
static volatile int32_t t93 = -3671;
static int32_t x669 = INT32_MAX;
int32_t x683 = INT32_MIN;
uint64_t x684 = UINT64_MAX;
int32_t x694 = -1;
int8_t x708 = 14;
volatile int32_t t98 = -3058728;
uint32_t t99 = UINT32_MAX;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	volatile int16_t x4 = -2418;
	int64_t t0 = -3267224099278LL;

	t0 = (x1>>(x2<(x3^x4)));

	if (t0 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1478749878434617LL;
	static int32_t x7 = -727074694;
	static int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -1973099572848027214LL;

	t1 = (x5>>(x6<(x7^x8)));

	if (t1 != 739374939217308LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 3628638U;
	int32_t x10 = -448780;
	int32_t x11 = -1;
	int64_t x12 = 111965456266LL;
	uint32_t t2 = 1103592U;

	t2 = (x9>>(x10<(x11^x12)));

	if (t2 != 3628638U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 132735LLU;
	int8_t x14 = -12;
	static int8_t x15 = 24;
	volatile int64_t x16 = 135904045215591630LL;
	volatile uint64_t t3 = 268702LLU;

	t3 = (x13>>(x14<(x15^x16)));

	if (t3 != 66367LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 5U;
	uint16_t x18 = 1U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -30;

	t4 = (x17>>(x18<(x19^x20)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint64_t x22 = 623LLU;
	static volatile uint16_t x23 = 530U;
	static uint32_t x24 = 56U;
	int32_t t5 = 145672115;

	t5 = (x21>>(x22<(x23^x24)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 8021U;
	int8_t x34 = 51;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MAX;
	int32_t t6 = 3877;

	t6 = (x33>>(x34<(x35^x36)));

	if (t6 != 4010) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 3U;
	int64_t x43 = -4419042549702656289LL;
	int64_t x44 = 2204680LL;
	volatile int32_t t7 = 1549;

	t7 = (x41>>(x42<(x43^x44)));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = INT64_MAX;
	volatile uint32_t x62 = UINT32_MAX;
	int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MAX;
	static volatile int64_t t8 = INT64_MAX;

	t8 = (x61>>(x62<(x63^x64)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x65 = 2U;
	int16_t x67 = -3873;
	uint64_t x68 = 6797634813722872812LLU;
	int32_t t9 = 643056;

	t9 = (x65>>(x66<(x67^x68)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = UINT8_MAX;
	int32_t x71 = 120;
	uint8_t x72 = 100U;
	int32_t t10 = -12;

	t10 = (x69>>(x70<(x71^x72)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MAX;
	volatile uint64_t x75 = 255747806750147LLU;
	uint16_t x76 = 61U;
	static int32_t t11 = -189049878;

	t11 = (x73>>(x74<(x75^x76)));

	if (t11 != 16383) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = -5;
	volatile int8_t x79 = INT8_MIN;
	volatile int32_t x80 = INT32_MIN;
	volatile uint32_t t12 = 188049043U;

	t12 = (x77>>(x78<(x79^x80)));

	if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x81 = UINT16_MAX;
	static uint16_t x82 = 18941U;
	int16_t x83 = -1;

	t13 = (x81>>(x82<(x83^x84)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	int64_t t14 = INT64_MAX;

	t14 = (x89>>(x90<(x91^x92)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x97 = 6718669130274LL;
	volatile int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MAX;
	int8_t x100 = INT8_MAX;
	static volatile int64_t t15 = -16689554398635848LL;

	t15 = (x97>>(x98<(x99^x100)));

	if (t15 != 3359334565137LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x113 = 6U;
	int32_t x114 = 6574099;
	volatile int32_t t16 = -27593852;

	t16 = (x113>>(x114<(x115^x116)));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x117 = 4269U;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = 30;

	t17 = (x117>>(x118<(x119^x120)));

	if (t17 != 4269U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x121 = 0U;
	uint64_t x122 = 1827182346292435154LLU;
	volatile int16_t x123 = -1;
	int8_t x124 = INT8_MIN;

	t18 = (x121>>(x122<(x123^x124)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x129 = 8000U;
	uint32_t x130 = UINT32_MAX;
	uint32_t x131 = 1U;
	int32_t t19 = -3847;

	t19 = (x129>>(x130<(x131^x132)));

	if (t19 != 8000) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x137 = UINT64_MAX;
	uint8_t x138 = 62U;
	static int32_t x139 = INT32_MIN;
	static int64_t x140 = INT64_MAX;

	t20 = (x137>>(x138<(x139^x140)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	int32_t x144 = -114;
	int32_t t21 = 436280711;

	t21 = (x141>>(x142<(x143^x144)));

	if (t21 != 16383) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x154 = -7;
	uint8_t x156 = 4U;
	static volatile uint32_t t22 = 221833130U;

	t22 = (x153>>(x154<(x155^x156)));

	if (t22 != 7735311U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x161 = 61U;
	int32_t x163 = INT32_MAX;
	uint16_t x164 = 44U;
	volatile int32_t t23 = -3;

	t23 = (x161>>(x162<(x163^x164)));

	if (t23 != 30) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x178 = 62U;
	int8_t x179 = INT8_MIN;
	uint32_t t24 = 1293739622U;

	t24 = (x177>>(x178<(x179^x180)));

	if (t24 != 9149065U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x201 = 37U;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;

	t25 = (x201>>(x202<(x203^x204)));

	if (t25 != 37) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x205 = 8501602736LLU;
	uint32_t x206 = 7293U;
	volatile uint64_t t26 = 15670233361LLU;

	t26 = (x205>>(x206<(x207^x208)));

	if (t26 != 4250801368LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x213 = 93U;
	static int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t27 = 126;

	t27 = (x213>>(x214<(x215^x216)));

	if (t27 != 46) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x229 = INT16_MAX;
	int64_t x230 = INT64_MIN;
	int64_t x231 = 16560647LL;
	uint16_t x232 = 155U;
	volatile int32_t t28 = 2;

	t28 = (x229>>(x230<(x231^x232)));

	if (t28 != 16383) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x233 = 13231610735915156LLU;
	static uint8_t x234 = 49U;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	uint64_t t29 = 845LLU;

	t29 = (x233>>(x234<(x235^x236)));

	if (t29 != 6615805367957578LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x237 = 119849932614581LLU;
	static int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MAX;
	int8_t x240 = 5;
	uint64_t t30 = 839192222720599LLU;

	t30 = (x237>>(x238<(x239^x240)));

	if (t30 != 59924966307290LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x245 = 30087456864638LLU;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = INT16_MIN;
	volatile uint64_t t31 = 13352LLU;

	t31 = (x245>>(x246<(x247^x248)));

	if (t31 != 30087456864638LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x249 = 112564044;
	uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = -1;
	volatile int32_t t32 = 558;

	t32 = (x249>>(x250<(x251^x252)));

	if (t32 != 112564044) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x257 = INT16_MAX;
	uint16_t x258 = 1U;
	static volatile int8_t x260 = INT8_MIN;
	int32_t t33 = 2543;

	t33 = (x257>>(x258<(x259^x260)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x265 = INT32_MAX;
	static uint32_t x267 = 5835859U;
	uint16_t x268 = 2U;
	int32_t t34 = INT32_MAX;

	t34 = (x265>>(x266<(x267^x268)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x269 = UINT32_MAX;
	volatile uint8_t x272 = UINT8_MAX;

	t35 = (x269>>(x270<(x271^x272)));

	if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x278 = INT16_MIN;
	int32_t x279 = 7840919;
	uint16_t x280 = 15603U;
	volatile int32_t t36 = 215895;

	t36 = (x277>>(x278<(x279^x280)));

	if (t36 != 16383) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x282 = 4;
	volatile int16_t x283 = INT16_MIN;
	volatile uint32_t x284 = UINT32_MAX;

	t37 = (x281>>(x282<(x283^x284)));

	if (t37 != 16383) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x290 = UINT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = -1;

	t38 = (x289>>(x290<(x291^x292)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = INT8_MIN;
	int16_t x296 = 175;

	t39 = (x293>>(x294<(x295^x296)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x302 = INT8_MAX;
	volatile int8_t x303 = INT8_MIN;
	static int64_t x304 = INT64_MIN;
	int32_t t40 = 450;

	t40 = (x301>>(x302<(x303^x304)));

	if (t40 != 16383) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x309 = INT32_MAX;
	uint8_t x310 = UINT8_MAX;
	static volatile int32_t t41 = INT32_MAX;

	t41 = (x309>>(x310<(x311^x312)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x319 = -2413833446844219LL;
	uint64_t x320 = 13LLU;
	volatile uint64_t t42 = 24027LLU;

	t42 = (x317>>(x318<(x319^x320)));

	if (t42 != 20513504LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x321 = 0U;
	volatile uint16_t x322 = 11U;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t t43 = -13606;

	t43 = (x321>>(x322<(x323^x324)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x325 = 11U;
	volatile int16_t x326 = INT16_MAX;
	static int64_t x327 = INT64_MIN;
	int16_t x328 = 0;
	volatile uint32_t t44 = 1379830135U;

	t44 = (x325>>(x326<(x327^x328)));

	if (t44 != 11U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x331 = INT32_MIN;
	volatile int16_t x332 = -1;
	static volatile uint64_t t45 = 1073664836585814LLU;

	t45 = (x329>>(x330<(x331^x332)));

	if (t45 != 663LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x344 = -1LL;

	t46 = (x341>>(x342<(x343^x344)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x345 = 1U;
	int32_t x346 = -2;
	int8_t x347 = -16;
	uint32_t t47 = 113993970U;

	t47 = (x345>>(x346<(x347^x348)));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x357 = 8U;
	int64_t x358 = 430LL;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t48 = -196;

	t48 = (x357>>(x358<(x359^x360)));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x361 = 5U;
	static uint16_t x362 = 870U;
	volatile uint64_t x364 = 4824LLU;
	static int32_t t49 = 7;

	t49 = (x361>>(x362<(x363^x364)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x369 = INT16_MAX;
	uint64_t x370 = 2003118315954LLU;
	uint8_t x371 = 15U;
	volatile uint32_t x372 = UINT32_MAX;
	volatile int32_t t50 = 6;

	t50 = (x369>>(x370<(x371^x372)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x377 = 10;
	volatile int16_t x378 = INT16_MIN;
	uint32_t x379 = 118790U;
	static int16_t x380 = -72;
	int32_t t51 = 7871790;

	t51 = (x377>>(x378<(x379^x380)));

	if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x385 = 1801483LLU;
	int16_t x386 = INT16_MAX;
	uint16_t x388 = 28U;
	uint64_t t52 = 18487170018LLU;

	t52 = (x385>>(x386<(x387^x388)));

	if (t52 != 1801483LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x393 = INT64_MAX;
	static int16_t x394 = -14;
	int64_t x395 = INT64_MIN;
	int32_t x396 = -10554260;
	int64_t t53 = 98727840525328372LL;

	t53 = (x393>>(x394<(x395^x396)));

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 31694315716429668LLU;
	int32_t x399 = INT32_MIN;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x397>>(x398<(x399^x400)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x401 = UINT64_MAX;
	int32_t x402 = -6;
	static volatile int8_t x403 = -33;
	int32_t x404 = INT32_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x401>>(x402<(x403^x404)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x413 = 822U;
	uint8_t x415 = 37U;
	int64_t x416 = INT64_MIN;
	volatile int32_t t56 = 12;

	t56 = (x413>>(x414<(x415^x416)));

	if (t56 != 822) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x417 = INT64_MAX;
	int8_t x418 = INT8_MAX;
	volatile int64_t x419 = INT64_MAX;
	int8_t x420 = INT8_MIN;
	volatile int64_t t57 = INT64_MAX;

	t57 = (x417>>(x418<(x419^x420)));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x421 = UINT8_MAX;
	uint8_t x422 = 0U;
	int8_t x423 = 0;
	int32_t t58 = -49;

	t58 = (x421>>(x422<(x423^x424)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x430 = INT16_MAX;
	int32_t x431 = 8009271;
	static uint64_t x432 = 411LLU;
	volatile int32_t t59 = 1;

	t59 = (x429>>(x430<(x431^x432)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x433 = 0;
	uint16_t x434 = 3U;
	uint8_t x435 = 7U;
	int16_t x436 = -1;
	static int32_t t60 = -4268160;

	t60 = (x433>>(x434<(x435^x436)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x441 = 11U;
	int64_t x442 = INT64_MIN;
	int8_t x444 = -1;
	volatile int32_t t61 = -441;

	t61 = (x441>>(x442<(x443^x444)));

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x449 = 986269871LL;
	volatile uint8_t x451 = UINT8_MAX;
	static volatile uint32_t x452 = UINT32_MAX;
	volatile int64_t t62 = 6797207LL;

	t62 = (x449>>(x450<(x451^x452)));

	if (t62 != 986269871LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x457 = 7994216U;
	static uint8_t x458 = 7U;
	int32_t x459 = INT32_MAX;
	int64_t x460 = 111LL;
	volatile uint32_t t63 = 1675664354U;

	t63 = (x457>>(x458<(x459^x460)));

	if (t63 != 3997108U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x461 = INT16_MAX;
	volatile uint32_t x462 = 1U;
	static volatile uint8_t x464 = 11U;
	int32_t t64 = -149898289;

	t64 = (x461>>(x462<(x463^x464)));

	if (t64 != 16383) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 1779636LLU;
	volatile uint32_t x475 = 112U;
	int32_t x476 = INT32_MIN;
	volatile uint32_t t65 = 30338U;

	t65 = (x473>>(x474<(x475^x476)));

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x478 = 0U;
	int32_t t66 = -99192;

	t66 = (x477>>(x478<(x479^x480)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x482 = -245;
	uint64_t x483 = 97LLU;
	int32_t x484 = INT32_MAX;
	static volatile int32_t t67 = 51299;

	t67 = (x481>>(x482<(x483^x484)));

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x485 = 61U;
	static uint8_t x486 = 104U;
	uint32_t x487 = 909119913U;
	int16_t x488 = INT16_MIN;
	int32_t t68 = -725;

	t68 = (x485>>(x486<(x487^x488)));

	if (t68 != 30) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x493 = 114479727757658LLU;
	int32_t x494 = -609009113;
	volatile uint64_t x495 = UINT64_MAX;
	static int64_t x496 = INT64_MAX;
	uint64_t t69 = 2884994954905269101LLU;

	t69 = (x493>>(x494<(x495^x496)));

	if (t69 != 114479727757658LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x501 = UINT64_MAX;
	volatile int16_t x502 = -1;
	int16_t x504 = -1;
	uint64_t t70 = 0LLU;

	t70 = (x501>>(x502<(x503^x504)));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x517 = 91055LLU;
	volatile uint64_t x518 = 4609548395310716674LLU;
	uint64_t x519 = 1711250LLU;

	t71 = (x517>>(x518<(x519^x520)));

	if (t71 != 91055LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x522 = 1;
	volatile uint32_t x523 = 115407756U;
	int8_t x524 = INT8_MAX;
	int32_t t72 = -316901565;

	t72 = (x521>>(x522<(x523^x524)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x526 = -2;
	static volatile int64_t x527 = INT64_MIN;
	uint32_t t73 = 1059U;

	t73 = (x525>>(x526<(x527^x528)));

	if (t73 != 1102U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x529 = UINT32_MAX;
	static uint64_t x530 = UINT64_MAX;
	int64_t x531 = INT64_MIN;
	static int16_t x532 = INT16_MAX;
	static volatile uint32_t t74 = UINT32_MAX;

	t74 = (x529>>(x530<(x531^x532)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x533 = 389U;
	volatile int32_t x534 = INT32_MAX;
	int8_t x535 = 41;
	volatile int32_t t75 = 3518489;

	t75 = (x533>>(x534<(x535^x536)));

	if (t75 != 389) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x553 = INT64_MAX;
	volatile int8_t x554 = INT8_MAX;
	int64_t x556 = INT64_MAX;
	volatile int64_t t76 = 38042939539LL;

	t76 = (x553>>(x554<(x555^x556)));

	if (t76 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x557 = 58U;
	int32_t x558 = 1;
	int64_t x559 = 27LL;
	static int32_t x560 = -153248;
	static int32_t t77 = 12;

	t77 = (x557>>(x558<(x559^x560)));

	if (t77 != 58) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x569 = INT32_MAX;
	uint8_t x570 = UINT8_MAX;
	static int64_t x571 = INT64_MAX;
	int8_t x572 = -1;
	static volatile int32_t t78 = INT32_MAX;

	t78 = (x569>>(x570<(x571^x572)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x573 = 4U;
	int8_t x574 = -15;
	static int16_t x575 = INT16_MAX;
	static uint32_t x576 = 743070354U;
	static volatile int32_t t79 = -1;

	t79 = (x573>>(x574<(x575^x576)));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x577 = 32118LLU;
	uint8_t x578 = UINT8_MAX;
	int64_t x579 = INT64_MAX;
	volatile int8_t x580 = -1;
	volatile uint64_t t80 = 598436379261136LLU;

	t80 = (x577>>(x578<(x579^x580)));

	if (t80 != 32118LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x585 = 18750993U;
	int8_t x587 = -3;
	int64_t x588 = INT64_MIN;
	uint32_t t81 = 3375909U;

	t81 = (x585>>(x586<(x587^x588)));

	if (t81 != 9375496U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x598 = UINT16_MAX;
	static uint8_t x599 = 0U;
	static int32_t x600 = INT32_MAX;
	static int32_t t82 = -321585461;

	t82 = (x597>>(x598<(x599^x600)));

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x601 = 96259U;
	int8_t x602 = INT8_MAX;
	uint8_t x603 = 6U;
	int32_t x604 = INT32_MAX;
	uint32_t t83 = 242436U;

	t83 = (x601>>(x602<(x603^x604)));

	if (t83 != 48129U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x609 = INT16_MAX;
	uint16_t x612 = 0U;
	volatile int32_t t84 = -22922134;

	t84 = (x609>>(x610<(x611^x612)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x613 = 27339U;
	int64_t x614 = INT64_MIN;
	int16_t x615 = 2302;
	static int32_t t85 = 411406;

	t85 = (x613>>(x614<(x615^x616)));

	if (t85 != 13669) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x622 = 6U;
	int16_t x623 = 0;
	int16_t x624 = INT16_MAX;
	volatile int64_t t86 = 102359540LL;

	t86 = (x621>>(x622<(x623^x624)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x625 = 1209U;
	int32_t x626 = -1;
	volatile int64_t x627 = -2101964997027LL;
	int64_t x628 = -35LL;

	t87 = (x625>>(x626<(x627^x628)));

	if (t87 != 604U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x629 = INT64_MAX;
	int8_t x631 = INT8_MIN;
	uint32_t x632 = 1921U;
	int64_t t88 = INT64_MAX;

	t88 = (x629>>(x630<(x631^x632)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x638 = UINT32_MAX;
	static int64_t x640 = INT64_MIN;
	int64_t t89 = -92272LL;

	t89 = (x637>>(x638<(x639^x640)));

	if (t89 != 33066575780391LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x653 = 1U;
	int32_t x654 = 62;
	uint32_t x656 = 8U;
	int32_t t90 = -10275;

	t90 = (x653>>(x654<(x655^x656)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x658 = -1;
	volatile uint64_t x659 = 4LLU;
	int16_t x660 = INT16_MAX;
	int32_t t91 = 6734;

	t91 = (x657>>(x658<(x659^x660)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x661 = 15U;
	static int8_t x662 = -1;
	uint8_t x663 = UINT8_MAX;
	uint8_t x664 = 54U;
	uint32_t t92 = 13755113U;

	t92 = (x661>>(x662<(x663^x664)));

	if (t92 != 7U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x665 = 0;
	static int8_t x667 = -1;
	static volatile int64_t x668 = INT64_MAX;

	t93 = (x665>>(x666<(x667^x668)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x670 = 93431343LLU;
	int64_t x671 = -1LL;
	int64_t x672 = 836639LL;
	volatile int32_t t94 = -4;

	t94 = (x669>>(x670<(x671^x672)));

	if (t94 != 1073741823) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x681 = 24LLU;
	uint32_t x682 = 6525U;
	volatile uint64_t t95 = 5313105806261422033LLU;

	t95 = (x681>>(x682<(x683^x684)));

	if (t95 != 12LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x693 = INT8_MAX;
	int64_t x695 = INT64_MAX;
	static int32_t x696 = INT32_MIN;
	int32_t t96 = -3;

	t96 = (x693>>(x694<(x695^x696)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x701 = 9U;
	static int8_t x702 = -1;
	uint16_t x703 = 1U;
	int64_t x704 = 59343488308LL;
	int32_t t97 = 1487;

	t97 = (x701>>(x702<(x703^x704)));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x705 = INT16_MAX;
	uint16_t x706 = UINT16_MAX;
	int8_t x707 = -8;

	t98 = (x705>>(x706<(x707^x708)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x709 = UINT32_MAX;
	uint32_t x710 = UINT32_MAX;
	static int8_t x711 = -1;
	int8_t x712 = -1;

	t99 = (x709>>(x710<(x711^x712)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

