#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x25 = INT64_MAX;
volatile uint16_t x27 = 175U;
static volatile int16_t x28 = 0;
int64_t x69 = INT64_MAX;
int8_t x72 = 0;
int64_t x75 = INT64_MIN;
volatile int64_t t3 = 533LL;
int8_t x99 = -30;
volatile uint64_t x100 = 1LLU;
int64_t x101 = INT64_MIN;
static uint64_t x102 = 110005995013329LLU;
uint64_t t5 = 59290474763LLU;
volatile int32_t t6 = 729;
int16_t x149 = -526;
static uint64_t x152 = 3388639848LLU;
volatile int32_t t7 = 5865516;
int32_t t9 = -14;
static uint16_t x205 = 262U;
int8_t x206 = INT8_MAX;
uint16_t x232 = 15U;
volatile int64_t x257 = 137936003597546872LL;
int8_t x266 = -2;
static int64_t x279 = -1LL;
int64_t t14 = 77554406262868LL;
int8_t x287 = INT8_MAX;
volatile uint32_t x314 = UINT32_MAX;
static uint32_t t16 = 222533590U;
uint32_t x322 = UINT32_MAX;
uint8_t x324 = 0U;
static volatile int64_t x332 = INT64_MIN;
volatile int64_t t18 = 0LL;
uint16_t x359 = 60U;
int8_t x385 = -1;
static int32_t x419 = -1;
int8_t x426 = -7;
volatile int32_t t26 = 19;
volatile uint64_t t27 = 453431532116222LLU;
static uint32_t t28 = 6806642U;
int64_t x457 = -777505865143LL;
volatile int64_t t29 = 250LL;
uint64_t t30 = 5LLU;
volatile int64_t x481 = -1LL;
uint64_t x484 = 1125LLU;
static volatile int64_t t32 = -2101987544770LL;
int8_t x506 = INT8_MIN;
volatile uint8_t x507 = 4U;
uint32_t t34 = 1101589905U;
int8_t x515 = 16;
int8_t x543 = 27;
volatile uint32_t x544 = UINT32_MAX;
volatile int64_t t36 = 2311LL;
volatile uint8_t x588 = UINT8_MAX;
volatile uint8_t x599 = 7U;
volatile uint8_t x600 = UINT8_MAX;
static int32_t x606 = INT32_MAX;
int16_t x610 = 2607;
int8_t x627 = INT8_MAX;
volatile int64_t x674 = INT64_MIN;
uint8_t x704 = 11U;
static volatile uint64_t t45 = 265768905003LLU;
uint16_t x722 = 1U;
int8_t x768 = INT8_MAX;
volatile int64_t x813 = -1LL;
int64_t x850 = INT64_MIN;
volatile int16_t x864 = INT16_MIN;
int64_t x872 = INT64_MIN;
static int32_t t57 = 14726116;
volatile uint32_t t58 = 42012U;
volatile int32_t x883 = INT32_MIN;
volatile int64_t t59 = 5637LL;
static int8_t x885 = -1;
static int16_t x887 = INT16_MIN;
int32_t x910 = INT32_MIN;
volatile int64_t x911 = INT64_MIN;
int16_t x912 = 30;
uint16_t x949 = UINT16_MAX;
uint16_t x993 = 313U;
int8_t x994 = INT8_MAX;
volatile int8_t x1009 = -1;
int16_t x1012 = 0;
uint32_t t67 = 2032U;
volatile int16_t x1018 = -1;
int16_t x1021 = INT16_MIN;
int16_t x1022 = -1;
int16_t x1023 = INT16_MIN;
volatile uint32_t x1024 = 1U;
int64_t x1029 = INT64_MIN;
int32_t x1032 = INT32_MAX;
volatile int64_t t70 = 60LL;
static volatile int32_t t72 = -11331;
uint16_t x1076 = 1U;
static int32_t x1112 = INT32_MAX;
int64_t x1140 = -1LL;
uint64_t x1153 = UINT64_MAX;
static volatile int32_t t81 = -107906023;
static uint64_t x1176 = 790LLU;
uint64_t t87 = 100961306600866LLU;
int16_t x1210 = INT16_MIN;
static volatile uint32_t t89 = 32194936U;
uint64_t x1269 = UINT64_MAX;
uint8_t x1272 = 6U;
int16_t x1277 = 7875;
uint32_t x1289 = 1063496643U;
uint16_t x1291 = 13U;
volatile int64_t t98 = 5465280767LL;
int16_t x1329 = INT16_MAX;
int8_t x1330 = 1;
static uint64_t x1331 = 18LLU;
int64_t x1332 = INT64_MIN;


void f0(void) {
	int32_t x26 = 6176;
	int64_t t0 = -7937588116LL;

	t0 = ((x25/x26)>>(x27&x28));

	if (t0 != 1493421638091770LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x70 = 7;
	volatile uint16_t x71 = 0U;
	volatile int64_t t1 = -3343829031836398LL;

	t1 = ((x69/x70)>>(x71&x72));

	if (t1 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x73 = 43352708700LL;
	uint32_t x74 = 914288U;
	uint8_t x76 = 3U;
	static volatile int64_t t2 = 3659522207811LL;

	t2 = ((x73/x74)>>(x75&x76));

	if (t2 != 47416LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x77 = INT8_MIN;
	static int64_t x78 = -1LL;
	uint16_t x79 = 46U;
	int8_t x80 = -1;

	t3 = ((x77/x78)>>(x79&x80));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x97 = 136515480U;
	int32_t x98 = INT32_MIN;
	uint32_t t4 = 4886789U;

	t4 = ((x97/x98)>>(x99&x100));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x103 = 74U;
	uint32_t x104 = 10U;

	t5 = ((x101/x102)>>(x103&x104));

	if (t5 != 81LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x113 = 4;
	static int32_t x114 = -856817;
	int8_t x115 = 1;
	uint8_t x116 = UINT8_MAX;

	t6 = ((x113/x114)>>(x115&x116));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x150 = INT16_MAX;
	int16_t x151 = 24;

	t7 = ((x149/x150)>>(x151&x152));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x153 = 13U;
	volatile uint16_t x154 = UINT16_MAX;
	int8_t x155 = INT8_MAX;
	int8_t x156 = 2;
	int32_t t8 = 14;

	t8 = ((x153/x154)>>(x155&x156));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x177 = 23U;
	uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 7U;
	uint16_t x180 = 9U;

	t9 = ((x177/x178)>>(x179&x180));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x207 = UINT64_MAX;
	uint8_t x208 = 7U;
	volatile int32_t t10 = -11449;

	t10 = ((x205/x206)>>(x207&x208));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x229 = INT16_MIN;
	int32_t x230 = INT32_MIN;
	int64_t x231 = -754250LL;
	int32_t t11 = 71216824;

	t11 = ((x229/x230)>>(x231&x232));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x258 = INT64_MIN;
	uint64_t x259 = 1LLU;
	volatile int64_t x260 = 84044791437921LL;
	volatile int64_t t12 = -259465366LL;

	t12 = ((x257/x258)>>(x259&x260));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x265 = -1LL;
	static uint8_t x267 = 2U;
	uint16_t x268 = UINT16_MAX;
	int64_t t13 = 1175LL;

	t13 = ((x265/x266)>>(x267&x268));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x277 = INT64_MIN;
	volatile int8_t x278 = INT8_MIN;
	int32_t x280 = 0;

	t14 = ((x277/x278)>>(x279&x280));

	if (t14 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x285 = -1;
	int16_t x286 = INT16_MIN;
	static int8_t x288 = 4;
	static volatile int32_t t15 = -19;

	t15 = ((x285/x286)>>(x287&x288));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x313 = INT32_MIN;
	uint8_t x315 = 14U;
	volatile int16_t x316 = INT16_MIN;

	t16 = ((x313/x314)>>(x315&x316));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x321 = 4066U;
	int32_t x323 = -217125;
	uint32_t t17 = 253U;

	t17 = ((x321/x322)>>(x323&x324));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x329 = -1;
	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = 5094;

	t18 = ((x329/x330)>>(x331&x332));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x357 = -1416;
	volatile int64_t x358 = -1LL;
	uint32_t x360 = 188451441U;
	volatile int64_t t19 = 49053602802LL;

	t19 = ((x357/x358)>>(x359&x360));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x365 = -914078379305287766LL;
	static uint64_t x366 = 56075LLU;
	uint32_t x367 = 890U;
	int32_t x368 = INT32_MIN;
	uint64_t t20 = 60073LLU;

	t20 = ((x365/x366)>>(x367&x368));

	if (t20 != 312664568781172LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x386 = INT64_MIN;
	uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 1U;
	int64_t t21 = -2267752028215472LL;

	t21 = ((x385/x386)>>(x387&x388));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x397 = INT8_MAX;
	int64_t x398 = 92LL;
	uint16_t x399 = 1528U;
	static volatile int64_t x400 = INT64_MIN;
	volatile int64_t t22 = 327150193778922682LL;

	t22 = ((x397/x398)>>(x399&x400));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = 4011;
	volatile uint8_t x407 = 26U;
	int8_t x408 = INT8_MIN;
	int32_t t23 = 21754924;

	t23 = ((x405/x406)>>(x407&x408));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x417 = UINT16_MAX;
	int64_t x418 = INT64_MIN;
	static uint8_t x420 = 13U;
	volatile int64_t t24 = -64274664291473456LL;

	t24 = ((x417/x418)>>(x419&x420));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x425 = INT64_MIN;
	int64_t x427 = INT64_MIN;
	volatile uint16_t x428 = 64U;
	int64_t t25 = 4061738LL;

	t25 = ((x425/x426)>>(x427&x428));

	if (t25 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x429 = INT32_MIN;
	volatile int16_t x430 = -191;
	static int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MAX;

	t26 = ((x429/x430)>>(x431&x432));

	if (t26 != 11243369) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x445 = -1;
	uint64_t x446 = 75503191134858337LLU;
	uint8_t x447 = 4U;
	static volatile int16_t x448 = -2024;

	t27 = ((x445/x446)>>(x447&x448));

	if (t27 != 244LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x449 = UINT32_MAX;
	int8_t x450 = -1;
	int8_t x451 = -7;
	uint8_t x452 = 1U;

	t28 = ((x449/x450)>>(x451&x452));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x458 = INT16_MIN;
	int64_t x459 = INT64_MIN;
	volatile int8_t x460 = INT8_MAX;

	t29 = ((x457/x458)>>(x459&x460));

	if (t29 != 23727595LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x469 = 3466780486LLU;
	static uint32_t x470 = 15171U;
	volatile int16_t x471 = 1;
	uint32_t x472 = 3676U;

	t30 = ((x469/x470)>>(x471&x472));

	if (t30 != 228513LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x477 = 2U;
	uint64_t x478 = 57403LLU;
	volatile uint8_t x479 = 0U;
	int32_t x480 = INT32_MIN;
	uint64_t t31 = 1229LLU;

	t31 = ((x477/x478)>>(x479&x480));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x482 = INT32_MAX;
	static uint16_t x483 = 1U;

	t32 = ((x481/x482)>>(x483&x484));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x489 = UINT8_MAX;
	volatile uint32_t x490 = 70U;
	static volatile int64_t x491 = INT64_MIN;
	volatile int16_t x492 = INT16_MAX;
	uint32_t t33 = 27U;

	t33 = ((x489/x490)>>(x491&x492));

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x505 = 21187U;
	static volatile int8_t x508 = -1;

	t34 = ((x505/x506)>>(x507&x508));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x513 = UINT64_MAX;
	uint16_t x514 = UINT16_MAX;
	int64_t x516 = INT64_MIN;
	volatile uint64_t t35 = 2212240LLU;

	t35 = ((x513/x514)>>(x515&x516));

	if (t35 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x541 = -1LL;
	uint32_t x542 = UINT32_MAX;

	t36 = ((x541/x542)>>(x543&x544));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x553 = 553993LLU;
	volatile uint32_t x554 = UINT32_MAX;
	volatile uint32_t x555 = 7305906U;
	volatile int8_t x556 = INT8_MAX;
	uint64_t t37 = 513278966231LLU;

	t37 = ((x553/x554)>>(x555&x556));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x585 = 21U;
	int8_t x586 = INT8_MIN;
	int32_t x587 = INT32_MIN;
	volatile int32_t t38 = 0;

	t38 = ((x585/x586)>>(x587&x588));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x597 = 1U;
	int16_t x598 = INT16_MIN;
	volatile int32_t t39 = -5;

	t39 = ((x597/x598)>>(x599&x600));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x605 = INT8_MIN;
	static int8_t x607 = 1;
	static volatile int8_t x608 = -4;
	volatile int32_t t40 = -192726;

	t40 = ((x605/x606)>>(x607&x608));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x609 = UINT16_MAX;
	int8_t x611 = 0;
	volatile uint8_t x612 = 1U;
	int32_t t41 = -576;

	t41 = ((x609/x610)>>(x611&x612));

	if (t41 != 25) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x625 = 4688U;
	int64_t x626 = -286221233LL;
	uint64_t x628 = 7533596LLU;
	volatile int64_t t42 = -4303418383708501861LL;

	t42 = ((x625/x626)>>(x627&x628));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x657 = INT8_MIN;
	static uint16_t x658 = 233U;
	int64_t x659 = INT64_MAX;
	uint64_t x660 = 22LLU;
	int32_t t43 = -34023404;

	t43 = ((x657/x658)>>(x659&x660));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x673 = INT64_MIN;
	int8_t x675 = 3;
	uint64_t x676 = UINT64_MAX;
	int64_t t44 = -74169982968LL;

	t44 = ((x673/x674)>>(x675&x676));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x701 = 6LLU;
	int16_t x702 = 14988;
	uint8_t x703 = UINT8_MAX;

	t45 = ((x701/x702)>>(x703&x704));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x705 = 17099679LL;
	uint32_t x706 = UINT32_MAX;
	volatile int64_t x707 = -1LL;
	uint32_t x708 = 1U;
	volatile int64_t t46 = -12774919963346557LL;

	t46 = ((x705/x706)>>(x707&x708));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x721 = INT8_MAX;
	volatile uint8_t x723 = 0U;
	int64_t x724 = INT64_MIN;
	int32_t t47 = -32758;

	t47 = ((x721/x722)>>(x723&x724));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x765 = 945U;
	static int16_t x766 = INT16_MIN;
	uint64_t x767 = 5LLU;
	volatile int32_t t48 = -46841645;

	t48 = ((x765/x766)>>(x767&x768));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x781 = INT64_MIN;
	int32_t x782 = -5565685;
	static int8_t x783 = 1;
	int16_t x784 = 802;
	int64_t t49 = 59LL;

	t49 = ((x781/x782)>>(x783&x784));

	if (t49 != 1657185420456LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x789 = INT16_MAX;
	static int32_t x790 = INT32_MIN;
	uint16_t x791 = UINT16_MAX;
	int64_t x792 = INT64_MIN;
	int32_t t50 = 14103914;

	t50 = ((x789/x790)>>(x791&x792));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x814 = INT8_MAX;
	uint8_t x815 = 2U;
	int32_t x816 = INT32_MAX;
	volatile int64_t t51 = -9274LL;

	t51 = ((x813/x814)>>(x815&x816));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x829 = 3;
	uint32_t x830 = UINT32_MAX;
	static uint16_t x831 = 455U;
	uint32_t x832 = 31U;
	uint32_t t52 = 10U;

	t52 = ((x829/x830)>>(x831&x832));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x837 = 27LLU;
	int64_t x838 = INT64_MIN;
	int32_t x839 = -1432;
	uint64_t x840 = 4LLU;
	volatile uint64_t t53 = 6LLU;

	t53 = ((x837/x838)>>(x839&x840));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x849 = INT32_MAX;
	volatile int8_t x851 = 23;
	int32_t x852 = INT32_MIN;
	int64_t t54 = 12941249542LL;

	t54 = ((x849/x850)>>(x851&x852));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x853 = 257228LLU;
	int16_t x854 = INT16_MIN;
	uint32_t x855 = 0U;
	int16_t x856 = INT16_MIN;
	static uint64_t t55 = 587LLU;

	t55 = ((x853/x854)>>(x855&x856));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x861 = UINT32_MAX;
	uint8_t x862 = 5U;
	uint8_t x863 = 81U;
	uint32_t t56 = 8621U;

	t56 = ((x861/x862)>>(x863&x864));

	if (t56 != 858993459U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x869 = -1;
	static int32_t x870 = -1;
	int64_t x871 = 9265535LL;

	t57 = ((x869/x870)>>(x871&x872));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x873 = UINT32_MAX;
	uint8_t x874 = UINT8_MAX;
	int32_t x875 = INT32_MIN;
	uint16_t x876 = UINT16_MAX;

	t58 = ((x873/x874)>>(x875&x876));

	if (t58 != 16843009U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x881 = INT8_MAX;
	int64_t x882 = -77183LL;
	int8_t x884 = INT8_MAX;

	t59 = ((x881/x882)>>(x883&x884));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x886 = -1;
	uint8_t x888 = 86U;
	volatile int32_t t60 = -9078022;

	t60 = ((x885/x886)>>(x887&x888));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x909 = INT16_MAX;
	int32_t t61 = 1;

	t61 = ((x909/x910)>>(x911&x912));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x925 = UINT32_MAX;
	volatile int64_t x926 = INT64_MIN;
	int64_t x927 = INT64_MIN;
	uint16_t x928 = 20334U;
	volatile int64_t t62 = 755LL;

	t62 = ((x925/x926)>>(x927&x928));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x929 = INT16_MIN;
	int32_t x930 = -1;
	static int8_t x931 = 1;
	int64_t x932 = INT64_MIN;
	volatile int32_t t63 = 7;

	t63 = ((x929/x930)>>(x931&x932));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x950 = 15923U;
	uint8_t x951 = 3U;
	int8_t x952 = INT8_MAX;
	int32_t t64 = -3672;

	t64 = ((x949/x950)>>(x951&x952));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x995 = INT8_MAX;
	static int32_t x996 = 45597;
	volatile int32_t t65 = 389;

	t65 = ((x993/x994)>>(x995&x996));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x997 = INT32_MIN;
	volatile uint64_t x998 = 413198803655732LLU;
	static int64_t x999 = INT64_MIN;
	uint64_t x1000 = 116111110LLU;
	uint64_t t66 = 131291719433051LLU;

	t66 = ((x997/x998)>>(x999&x1000));

	if (t66 != 44643LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1010 = 110250681U;
	int64_t x1011 = 13324266561169LL;

	t67 = ((x1009/x1010)>>(x1011&x1012));

	if (t67 != 38U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x1017 = -1;
	uint8_t x1019 = 1U;
	int16_t x1020 = INT16_MAX;
	int32_t t68 = 1;

	t68 = ((x1017/x1018)>>(x1019&x1020));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t t69 = -27175907;

	t69 = ((x1021/x1022)>>(x1023&x1024));

	if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x1030 = INT16_MIN;
	volatile int64_t x1031 = INT64_MIN;

	t70 = ((x1029/x1030)>>(x1031&x1032));

	if (t70 != 281474976710656LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x1033 = -1;
	volatile int64_t x1034 = -1LL;
	uint8_t x1035 = 2U;
	volatile int64_t x1036 = INT64_MIN;
	volatile int64_t t71 = 7972056759780LL;

	t71 = ((x1033/x1034)>>(x1035&x1036));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1061 = UINT16_MAX;
	uint8_t x1062 = 1U;
	int16_t x1063 = -631;
	volatile uint8_t x1064 = 21U;

	t72 = ((x1061/x1062)>>(x1063&x1064));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1069 = INT16_MAX;
	static uint8_t x1070 = 45U;
	uint64_t x1071 = 6135450931527LLU;
	static int16_t x1072 = 1;
	static int32_t t73 = -911253793;

	t73 = ((x1069/x1070)>>(x1071&x1072));

	if (t73 != 364) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1073 = 4856881;
	static int16_t x1074 = INT16_MAX;
	int64_t x1075 = INT64_MIN;
	int32_t t74 = -53658293;

	t74 = ((x1073/x1074)>>(x1075&x1076));

	if (t74 != 148) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1097 = INT16_MIN;
	uint32_t x1098 = UINT32_MAX;
	static uint16_t x1099 = 5U;
	volatile int8_t x1100 = INT8_MAX;
	volatile uint32_t t75 = 173770U;

	t75 = ((x1097/x1098)>>(x1099&x1100));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x1109 = -26;
	int16_t x1110 = -3;
	int8_t x1111 = 4;
	int32_t t76 = -62342237;

	t76 = ((x1109/x1110)>>(x1111&x1112));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1117 = 7158U;
	int64_t x1118 = INT64_MAX;
	static uint32_t x1119 = 33080U;
	static int32_t x1120 = INT32_MIN;
	int64_t t77 = 13051318LL;

	t77 = ((x1117/x1118)>>(x1119&x1120));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1121 = -52;
	static volatile int32_t x1122 = INT32_MIN;
	int64_t x1123 = INT64_MIN;
	uint16_t x1124 = UINT16_MAX;
	int32_t t78 = -1856;

	t78 = ((x1121/x1122)>>(x1123&x1124));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x1137 = 245;
	int32_t x1138 = INT32_MIN;
	int8_t x1139 = 1;
	int32_t t79 = 1;

	t79 = ((x1137/x1138)>>(x1139&x1140));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x1154 = UINT16_MAX;
	int64_t x1155 = 406700769064LL;
	uint32_t x1156 = 1U;
	volatile uint64_t t80 = 11314813168871LLU;

	t80 = ((x1153/x1154)>>(x1155&x1156));

	if (t80 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1161 = INT32_MIN;
	int8_t x1162 = INT8_MIN;
	int16_t x1163 = 6;
	uint8_t x1164 = 10U;

	t81 = ((x1161/x1162)>>(x1163&x1164));

	if (t81 != 4194304) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1165 = UINT64_MAX;
	uint32_t x1166 = 151U;
	int8_t x1167 = 0;
	volatile int32_t x1168 = -1;
	uint64_t t82 = 1394451204247172324LLU;

	t82 = ((x1165/x1166)>>(x1167&x1168));

	if (t82 != 122163868037811600LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x1173 = INT16_MIN;
	static volatile int32_t x1174 = -1;
	volatile uint16_t x1175 = 142U;
	int32_t t83 = -20;

	t83 = ((x1173/x1174)>>(x1175&x1176));

	if (t83 != 512) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1181 = 10;
	volatile int32_t x1182 = -3591;
	uint8_t x1183 = 2U;
	int32_t x1184 = INT32_MAX;
	int32_t t84 = 6;

	t84 = ((x1181/x1182)>>(x1183&x1184));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1185 = -1;
	volatile uint64_t x1186 = 205LLU;
	int16_t x1187 = INT16_MAX;
	volatile int8_t x1188 = 56;
	volatile uint64_t t85 = 54814142374296LLU;

	t85 = ((x1185/x1186)>>(x1187&x1188));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1193 = UINT8_MAX;
	int16_t x1194 = INT16_MAX;
	volatile uint16_t x1195 = 6U;
	int32_t x1196 = -1540;
	int32_t t86 = 7;

	t86 = ((x1193/x1194)>>(x1195&x1196));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x1201 = 15676140746552LL;
	uint64_t x1202 = 27408416826150LLU;
	static int8_t x1203 = INT8_MIN;
	uint8_t x1204 = 22U;

	t87 = ((x1201/x1202)>>(x1203&x1204));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1205 = -772LL;
	int32_t x1206 = -1;
	int16_t x1207 = -15279;
	uint32_t x1208 = 60U;
	volatile int64_t t88 = 13204727313483LL;

	t88 = ((x1205/x1206)>>(x1207&x1208));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1209 = UINT32_MAX;
	int32_t x1211 = 13;
	uint16_t x1212 = 8U;

	t89 = ((x1209/x1210)>>(x1211&x1212));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1233 = -3;
	int8_t x1234 = INT8_MAX;
	volatile int8_t x1235 = 0;
	static volatile uint16_t x1236 = 188U;
	int32_t t90 = -1;

	t90 = ((x1233/x1234)>>(x1235&x1236));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1257 = INT8_MIN;
	int16_t x1258 = INT16_MAX;
	uint8_t x1259 = 14U;
	volatile int16_t x1260 = -1;
	int32_t t91 = -3378;

	t91 = ((x1257/x1258)>>(x1259&x1260));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1265 = -1LL;
	int16_t x1266 = -1;
	static volatile uint8_t x1267 = 0U;
	static int16_t x1268 = INT16_MIN;
	int64_t t92 = 457724658967LL;

	t92 = ((x1265/x1266)>>(x1267&x1268));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x1270 = INT64_MAX;
	uint64_t x1271 = 1890LLU;
	static volatile uint64_t t93 = 101641LLU;

	t93 = ((x1269/x1270)>>(x1271&x1272));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x1278 = UINT64_MAX;
	int16_t x1279 = -15891;
	int64_t x1280 = 1LL;
	uint64_t t94 = 976LLU;

	t94 = ((x1277/x1278)>>(x1279&x1280));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1290 = INT64_MIN;
	volatile uint8_t x1292 = 4U;
	volatile int64_t t95 = -1721436350LL;

	t95 = ((x1289/x1290)>>(x1291&x1292));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x1305 = 31716U;
	volatile int64_t x1306 = -1428243LL;
	volatile int64_t x1307 = -1LL;
	uint8_t x1308 = 17U;
	static volatile int64_t t96 = -687895264627457LL;

	t96 = ((x1305/x1306)>>(x1307&x1308));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1313 = 263811990603200LL;
	uint16_t x1314 = 1U;
	static uint8_t x1315 = 3U;
	int64_t x1316 = INT64_MAX;
	int64_t t97 = 276805962759655563LL;

	t97 = ((x1313/x1314)>>(x1315&x1316));

	if (t97 != 32976498825400LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1317 = -1LL;
	int16_t x1318 = INT16_MAX;
	int32_t x1319 = -700682;
	uint8_t x1320 = 54U;

	t98 = ((x1317/x1318)>>(x1319&x1320));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t t99 = 14264;

	t99 = ((x1329/x1330)>>(x1331&x1332));

	if (t99 != 32767) { NG(); } else { ; }
	
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

