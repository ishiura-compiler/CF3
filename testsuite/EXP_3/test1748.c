#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x38 = INT32_MIN;
volatile int64_t x83 = INT64_MIN;
int8_t x93 = INT8_MAX;
uint16_t x134 = 895U;
int8_t x136 = INT8_MIN;
int8_t x138 = INT8_MAX;
volatile int32_t t7 = -16812639;
volatile uint8_t x195 = 5U;
int8_t x215 = INT8_MAX;
volatile int32_t t15 = -49700;
static int32_t x230 = 801003;
uint64_t x271 = UINT64_MAX;
uint8_t x272 = 11U;
volatile int32_t x288 = -88;
static int16_t x290 = INT16_MIN;
volatile uint64_t t21 = 369060279030151717LLU;
uint32_t x311 = 1U;
volatile uint32_t t22 = 0U;
uint16_t x331 = 6U;
int8_t x369 = INT8_MAX;
uint32_t x370 = UINT32_MAX;
static volatile int8_t x371 = 1;
static uint32_t t28 = 28781U;
static int16_t x400 = -1;
volatile uint64_t t34 = 8198688579LLU;
volatile int64_t x484 = INT64_MIN;
uint64_t t37 = 0LLU;
int16_t x590 = -7421;
int16_t x592 = INT16_MIN;
int16_t x599 = INT16_MIN;
static uint64_t x613 = 487740034LLU;
volatile int16_t x616 = -1;
static uint32_t x627 = 1U;
static int64_t x652 = INT64_MIN;
uint32_t x694 = 1309507088U;
volatile int8_t x696 = -1;
int64_t x706 = INT64_MIN;
volatile uint8_t x711 = 2U;
uint16_t x754 = 14U;
uint32_t x755 = UINT32_MAX;
static int32_t t52 = -93570;
static uint64_t x790 = UINT64_MAX;
static int32_t x792 = INT32_MIN;
int16_t x798 = INT16_MIN;
int16_t x816 = INT16_MIN;
volatile int8_t x818 = INT8_MAX;
volatile int8_t x842 = -1;
volatile uint8_t x844 = 3U;
int32_t x962 = INT32_MIN;
uint8_t x981 = 5U;
uint32_t x982 = UINT32_MAX;
uint16_t x1001 = 1892U;
int16_t x1003 = INT16_MIN;
volatile uint64_t x1026 = 4075434LLU;
int64_t x1073 = 146919LL;
int64_t t72 = 2942141LL;
uint64_t t73 = 263631139LLU;
volatile int8_t x1114 = INT8_MAX;
int32_t t74 = -2269;
static int32_t x1118 = 100995;
int16_t x1128 = -1;
int32_t t78 = 6057452;
uint8_t x1174 = 12U;
volatile uint32_t t79 = 3651U;
uint32_t x1177 = 23197739U;
volatile uint32_t t80 = 2825841U;
int32_t x1225 = INT32_MIN;
uint64_t x1228 = 59574LLU;
uint64_t x1231 = UINT64_MAX;
static volatile uint32_t t83 = 4U;
int64_t x1242 = INT64_MIN;
int8_t x1328 = INT8_MAX;
volatile int64_t t86 = 95231465LL;
static volatile uint32_t x1338 = UINT32_MAX;
int32_t x1339 = INT32_MIN;
static volatile int8_t x1342 = INT8_MAX;
uint32_t x1343 = 3U;
int64_t t89 = -147981834495958LL;
int16_t x1364 = 12748;
uint64_t x1438 = UINT64_MAX;
static uint8_t x1447 = 0U;
uint32_t x1452 = UINT32_MAX;
uint32_t x1475 = 470U;
int16_t x1494 = INT16_MIN;


void f0(void) {
	uint64_t x37 = UINT64_MAX;
	static int64_t x39 = INT64_MIN;
	static volatile uint16_t x40 = UINT16_MAX;
	static uint64_t t0 = 31326438314759406LLU;

	t0 = ((x37%x38)<<(x39&x40));

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x45 = -1;
	int8_t x46 = -1;
	int32_t x47 = 1;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t1 = -8975;

	t1 = ((x45%x46)<<(x47&x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x81 = 3673334242728LLU;
	volatile int16_t x82 = INT16_MIN;
	static volatile uint32_t x84 = UINT32_MAX;
	static uint64_t t2 = 98633LLU;

	t2 = ((x81%x82)<<(x83&x84));

	if (t2 != 3673334242728LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x85 = 7439;
	int8_t x86 = 12;
	uint8_t x87 = 4U;
	int16_t x88 = -240;
	volatile int32_t t3 = -1084385;

	t3 = ((x85%x86)<<(x87&x88));

	if (t3 != 11) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x94 = UINT32_MAX;
	static int64_t x95 = 312LL;
	int64_t x96 = 371157000LL;
	volatile uint32_t t4 = 118U;

	t4 = ((x93%x94)<<(x95&x96));

	if (t4 != 32512U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x133 = 0;
	volatile int8_t x135 = INT8_MAX;
	int32_t t5 = -276;

	t5 = ((x133%x134)<<(x135&x136));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x137 = INT32_MAX;
	volatile int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MAX;
	static volatile int32_t t6 = -1543969;

	t6 = ((x137%x138)<<(x139&x140));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x141 = 36U;
	int8_t x142 = 2;
	volatile uint8_t x143 = 115U;
	volatile int64_t x144 = INT64_MIN;

	t7 = ((x141%x142)<<(x143&x144));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x153 = -350862;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	volatile int8_t x156 = 0;
	static volatile uint64_t t8 = 14460LLU;

	t8 = ((x153%x154)<<(x155&x156));

	if (t8 != 18446744073709200754LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x173 = 31U;
	static uint16_t x174 = 12U;
	int32_t x175 = INT32_MIN;
	volatile uint8_t x176 = 0U;
	int32_t t9 = -3421907;

	t9 = ((x173%x174)<<(x175&x176));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x185 = 16U;
	int64_t x186 = -1LL;
	volatile uint8_t x187 = 13U;
	int64_t x188 = 880LL;
	int64_t t10 = -107922LL;

	t10 = ((x185%x186)<<(x187&x188));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x193 = 11U;
	static uint32_t x194 = 16U;
	volatile uint32_t x196 = 22957053U;
	uint32_t t11 = 108129U;

	t11 = ((x193%x194)<<(x195&x196));

	if (t11 != 352U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = 20;
	volatile int32_t x203 = INT32_MIN;
	uint32_t x204 = 7697056U;
	static volatile uint32_t t12 = 3387649U;

	t12 = ((x201%x202)<<(x203&x204));

	if (t12 != 15U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x209 = -1;
	volatile uint32_t x210 = 1022571U;
	static int8_t x211 = 1;
	volatile int8_t x212 = INT8_MAX;
	static uint32_t t13 = 41760U;

	t13 = ((x209%x210)<<(x211&x212));

	if (t13 != 338190U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x213 = 0;
	uint8_t x214 = 1U;
	volatile uint8_t x216 = 12U;
	static int32_t t14 = 398796;

	t14 = ((x213%x214)<<(x215&x216));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x225 = 0U;
	int16_t x226 = -661;
	int8_t x227 = 4;
	uint32_t x228 = 2U;

	t15 = ((x225%x226)<<(x227&x228));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x229 = INT8_MAX;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = 1U;
	volatile int32_t t16 = -20068146;

	t16 = ((x229%x230)<<(x231&x232));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x241 = 30993013LL;
	volatile int16_t x242 = -119;
	static int64_t x243 = INT64_MAX;
	static int64_t x244 = INT64_MIN;
	int64_t t17 = -423249051LL;

	t17 = ((x241%x242)<<(x243&x244));

	if (t17 != 58LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x257 = 19U;
	volatile int64_t x258 = INT64_MAX;
	uint8_t x259 = 1U;
	int8_t x260 = -12;
	int64_t t18 = 385516038548LL;

	t18 = ((x257%x258)<<(x259&x260));

	if (t18 != 19LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x269 = 226001;
	uint8_t x270 = 14U;
	volatile int32_t t19 = 7926;

	t19 = ((x269%x270)<<(x271&x272));

	if (t19 != 26624) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x285 = UINT64_MAX;
	static volatile int8_t x286 = -1;
	uint8_t x287 = 0U;
	uint64_t t20 = 2677LLU;

	t20 = ((x285%x286)<<(x287&x288));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x289 = 93552959229558LLU;
	static uint64_t x291 = UINT64_MAX;
	uint16_t x292 = 11U;

	t21 = ((x289%x290)<<(x291&x292));

	if (t21 != 191596460502134784LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x309 = INT32_MIN;
	volatile uint32_t x310 = 95707470U;
	uint8_t x312 = UINT8_MAX;

	t22 = ((x309%x310)<<(x311&x312));

	if (t22 != 83838616U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	uint8_t x327 = 1U;
	static int32_t x328 = INT32_MAX;
	int32_t t23 = 0;

	t23 = ((x325%x326)<<(x327&x328));

	if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x329 = INT8_MAX;
	volatile uint8_t x330 = 27U;
	volatile int32_t x332 = -1;
	static volatile int32_t t24 = -13619;

	t24 = ((x329%x330)<<(x331&x332));

	if (t24 != 1216) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int32_t x342 = -10;
	uint64_t x343 = 5513LLU;
	int16_t x344 = INT16_MIN;
	uint32_t t25 = 44755712U;

	t25 = ((x341%x342)<<(x343&x344));

	if (t25 != 9U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static volatile int32_t x356 = INT32_MAX;
	int64_t t26 = -1LL;

	t26 = ((x353%x354)<<(x355&x356));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x361 = -1;
	volatile int8_t x362 = 1;
	int16_t x363 = INT16_MAX;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t27 = -1910911;

	t27 = ((x361%x362)<<(x363&x364));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x372 = UINT32_MAX;

	t28 = ((x369%x370)<<(x371&x372));

	if (t28 != 254U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x385 = INT64_MIN;
	uint64_t x386 = 41LLU;
	int32_t x387 = INT32_MAX;
	volatile int16_t x388 = 1;
	volatile uint64_t t29 = 27051488735470LLU;

	t29 = ((x385%x386)<<(x387&x388));

	if (t29 != 16LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x397 = 1046U;
	volatile uint32_t x398 = 194483526U;
	uint8_t x399 = 9U;
	uint32_t t30 = 62256208U;

	t30 = ((x397%x398)<<(x399&x400));

	if (t30 != 535552U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x405 = 39;
	static volatile int8_t x406 = -1;
	uint32_t x407 = 182U;
	volatile int8_t x408 = 3;
	volatile int32_t t31 = 1720;

	t31 = ((x405%x406)<<(x407&x408));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x445 = 17U;
	int16_t x446 = -84;
	uint8_t x447 = 1U;
	static int8_t x448 = INT8_MAX;
	uint32_t t32 = 15U;

	t32 = ((x445%x446)<<(x447&x448));

	if (t32 != 34U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x457 = 13370U;
	static int64_t x458 = INT64_MIN;
	static uint16_t x459 = UINT16_MAX;
	int32_t x460 = INT32_MIN;
	static int64_t t33 = -1325417LL;

	t33 = ((x457%x458)<<(x459&x460));

	if (t33 != 13370LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x461 = -1;
	uint64_t x462 = 238229930000854195LLU;
	uint8_t x463 = UINT8_MAX;
	uint32_t x464 = 3335U;

	t34 = ((x461%x462)<<(x463&x464));

	if (t34 != 13189051346403660800LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x481 = 1;
	volatile uint16_t x482 = UINT16_MAX;
	uint16_t x483 = UINT16_MAX;
	static int32_t t35 = 8;

	t35 = ((x481%x482)<<(x483&x484));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x509 = INT64_MAX;
	int32_t x510 = INT32_MIN;
	uint16_t x511 = 514U;
	static uint64_t x512 = 107LLU;
	volatile int64_t t36 = 219LL;

	t36 = ((x509%x510)<<(x511&x512));

	if (t36 != 8589934588LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x513 = UINT64_MAX;
	uint16_t x514 = UINT16_MAX;
	static int8_t x515 = 3;
	int32_t x516 = -68;

	t37 = ((x513%x514)<<(x515&x516));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x553 = INT16_MIN;
	uint64_t x554 = 12379005LLU;
	volatile uint32_t x555 = 44083U;
	static volatile uint32_t x556 = 28U;
	volatile uint64_t t38 = 2829LLU;

	t38 = ((x553%x554)<<(x555&x556));

	if (t38 != 399370354688LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x569 = INT64_MAX;
	static int64_t x570 = -111422573316196548LL;
	uint16_t x571 = 95U;
	int32_t x572 = INT32_MIN;
	int64_t t39 = -31910031LL;

	t39 = ((x569%x570)<<(x571&x572));

	if (t39 != 86721024926658871LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x589 = 311521760;
	volatile uint8_t x591 = UINT8_MAX;
	static int32_t t40 = -7;

	t40 = ((x589%x590)<<(x591&x592));

	if (t40 != 3022) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x593 = INT8_MAX;
	int16_t x594 = INT16_MIN;
	uint32_t x595 = 5U;
	int16_t x596 = 63;
	static int32_t t41 = -529429;

	t41 = ((x593%x594)<<(x595&x596));

	if (t41 != 4064) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x597 = 468U;
	uint16_t x598 = UINT16_MAX;
	static uint8_t x600 = 87U;
	static int32_t t42 = -76;

	t42 = ((x597%x598)<<(x599&x600));

	if (t42 != 468) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x614 = -545LL;
	uint32_t x615 = 4U;
	volatile uint64_t t43 = 2922817828519075LLU;

	t43 = ((x613%x614)<<(x615&x616));

	if (t43 != 7803840544LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x621 = UINT64_MAX;
	static uint64_t x622 = 1LLU;
	int32_t x623 = -1;
	volatile uint32_t x624 = 15U;
	volatile uint64_t t44 = 31756386785LLU;

	t44 = ((x621%x622)<<(x623&x624));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x625 = UINT8_MAX;
	int16_t x626 = INT16_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t45 = 405;

	t45 = ((x625%x626)<<(x627&x628));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x637 = 916145908LLU;
	int16_t x638 = 21;
	uint32_t x639 = UINT32_MAX;
	volatile uint8_t x640 = 1U;
	uint64_t t46 = 470LLU;

	t46 = ((x637%x638)<<(x639&x640));

	if (t46 != 26LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x649 = UINT64_MAX;
	int64_t x650 = 752LL;
	uint32_t x651 = 1394426590U;
	uint64_t t47 = 805334897104357590LLU;

	t47 = ((x649%x650)<<(x651&x652));

	if (t47 != 447LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x693 = 15;
	uint8_t x695 = 5U;
	volatile uint32_t t48 = 3039U;

	t48 = ((x693%x694)<<(x695&x696));

	if (t48 != 480U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x705 = 872034677182013LL;
	static int64_t x707 = INT64_MIN;
	static int16_t x708 = 48;
	volatile int64_t t49 = 153284066LL;

	t49 = ((x705%x706)<<(x707&x708));

	if (t49 != 872034677182013LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x709 = -1LL;
	int16_t x710 = -1;
	int64_t x712 = INT64_MIN;
	int64_t t50 = -333969310LL;

	t50 = ((x709%x710)<<(x711&x712));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x713 = 843LLU;
	int32_t x714 = INT32_MIN;
	uint16_t x715 = 26U;
	int16_t x716 = INT16_MAX;
	uint64_t t51 = 524597309194284LLU;

	t51 = ((x713%x714)<<(x715&x716));

	if (t51 != 56572772352LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x753 = INT8_MAX;
	int64_t x756 = INT64_MIN;

	t52 = ((x753%x754)<<(x755&x756));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x765 = INT8_MAX;
	int32_t x766 = 61;
	int64_t x767 = INT64_MIN;
	static int16_t x768 = 0;
	static volatile int32_t t53 = 0;

	t53 = ((x765%x766)<<(x767&x768));

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x785 = 170763373693LLU;
	static volatile int64_t x786 = -388501LL;
	int32_t x787 = 5;
	static uint32_t x788 = 845435U;
	volatile uint64_t t54 = 307579LLU;

	t54 = ((x785%x786)<<(x787&x788));

	if (t54 != 341526747386LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x789 = INT32_MIN;
	uint32_t x791 = 44U;
	volatile uint64_t t55 = 16860314335LLU;

	t55 = ((x789%x790)<<(x791&x792));

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x793 = INT32_MIN;
	static volatile int8_t x794 = INT8_MIN;
	static volatile uint16_t x795 = 1U;
	int16_t x796 = -1;
	int32_t t56 = 6213;

	t56 = ((x793%x794)<<(x795&x796));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x797 = 842173536552140LLU;
	int16_t x799 = INT16_MIN;
	static uint64_t x800 = 1LLU;
	static uint64_t t57 = 54067125LLU;

	t57 = ((x797%x798)<<(x799&x800));

	if (t57 != 842173536552140LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x813 = 212LLU;
	uint16_t x814 = 54U;
	static int8_t x815 = INT8_MAX;
	volatile uint64_t t58 = 14738704LLU;

	t58 = ((x813%x814)<<(x815&x816));

	if (t58 != 50LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x817 = 326586452LLU;
	volatile uint16_t x819 = UINT16_MAX;
	int64_t x820 = INT64_MIN;
	volatile uint64_t t59 = 20600550362LLU;

	t59 = ((x817%x818)<<(x819&x820));

	if (t59 != 110LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x841 = INT16_MIN;
	int16_t x843 = -3671;
	static volatile int32_t t60 = 946;

	t60 = ((x841%x842)<<(x843&x844));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x905 = INT32_MIN;
	int64_t x906 = -1LL;
	int8_t x907 = 0;
	uint16_t x908 = UINT16_MAX;
	int64_t t61 = -785067LL;

	t61 = ((x905%x906)<<(x907&x908));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x917 = 1421390U;
	volatile int64_t x918 = -3LL;
	int32_t x919 = INT32_MIN;
	volatile uint16_t x920 = 1U;
	volatile int64_t t62 = -3LL;

	t62 = ((x917%x918)<<(x919&x920));

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x961 = INT8_MAX;
	int64_t x963 = -415876LL;
	int16_t x964 = 2;
	int32_t t63 = 2560384;

	t63 = ((x961%x962)<<(x963&x964));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x983 = UINT32_MAX;
	volatile int64_t x984 = INT64_MIN;
	static uint32_t t64 = 576241U;

	t64 = ((x981%x982)<<(x983&x984));

	if (t64 != 5U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x989 = INT64_MIN;
	volatile int64_t x990 = INT64_MIN;
	volatile int8_t x991 = INT8_MAX;
	uint64_t x992 = 234181133LLU;
	static int64_t t65 = 29314921481014LL;

	t65 = ((x989%x990)<<(x991&x992));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1002 = -1;
	uint8_t x1004 = 26U;
	static volatile int32_t t66 = 51523;

	t66 = ((x1001%x1002)<<(x1003&x1004));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1009 = 135166;
	int64_t x1010 = -1LL;
	int16_t x1011 = -1;
	uint8_t x1012 = 46U;
	volatile int64_t t67 = 1LL;

	t67 = ((x1009%x1010)<<(x1011&x1012));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x1025 = 12187U;
	int64_t x1027 = INT64_MIN;
	uint32_t x1028 = 6U;
	uint64_t t68 = 22144LLU;

	t68 = ((x1025%x1026)<<(x1027&x1028));

	if (t68 != 12187LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1057 = 4;
	int64_t x1058 = INT64_MIN;
	int16_t x1059 = 1;
	int64_t x1060 = -1LL;
	int64_t t69 = -550343494215276LL;

	t69 = ((x1057%x1058)<<(x1059&x1060));

	if (t69 != 8LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1069 = 58U;
	uint32_t x1070 = UINT32_MAX;
	uint16_t x1071 = 3U;
	uint16_t x1072 = UINT16_MAX;
	volatile uint32_t t70 = 2042391U;

	t70 = ((x1069%x1070)<<(x1071&x1072));

	if (t70 != 464U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x1074 = -56;
	int64_t x1075 = INT64_MIN;
	int16_t x1076 = INT16_MAX;
	static int64_t t71 = -2558743699541LL;

	t71 = ((x1073%x1074)<<(x1075&x1076));

	if (t71 != 31LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1089 = 251280754123024LL;
	volatile int32_t x1090 = INT32_MIN;
	int32_t x1091 = 2;
	uint16_t x1092 = UINT16_MAX;

	t72 = ((x1089%x1090)<<(x1091&x1092));

	if (t72 != 6179947584LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1097 = 26058337LLU;
	int8_t x1098 = -4;
	uint8_t x1099 = 1U;
	int8_t x1100 = 2;

	t73 = ((x1097%x1098)<<(x1099&x1100));

	if (t73 != 26058337LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1113 = 1;
	int16_t x1115 = 3917;
	volatile int16_t x1116 = INT16_MIN;

	t74 = ((x1113%x1114)<<(x1115&x1116));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1117 = 1605982398LLU;
	volatile int64_t x1119 = INT64_MIN;
	static volatile uint8_t x1120 = UINT8_MAX;
	volatile uint64_t t75 = 7483325681975925LLU;

	t75 = ((x1117%x1118)<<(x1119&x1120));

	if (t75 != 60903LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1125 = 0U;
	static int64_t x1126 = INT64_MAX;
	int32_t x1127 = 0;
	volatile int64_t t76 = -10406LL;

	t76 = ((x1125%x1126)<<(x1127&x1128));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1137 = UINT16_MAX;
	volatile uint16_t x1138 = 115U;
	uint8_t x1139 = 0U;
	static uint8_t x1140 = UINT8_MAX;
	int32_t t77 = -224825;

	t77 = ((x1137%x1138)<<(x1139&x1140));

	if (t77 != 100) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1165 = INT8_MIN;
	int8_t x1166 = INT8_MIN;
	int32_t x1167 = INT32_MIN;
	uint16_t x1168 = 13591U;

	t78 = ((x1165%x1166)<<(x1167&x1168));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x1173 = 268355255U;
	int32_t x1175 = INT32_MIN;
	uint8_t x1176 = UINT8_MAX;

	t79 = ((x1173%x1174)<<(x1175&x1176));

	if (t79 != 11U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x1178 = -909115;
	uint32_t x1179 = UINT32_MAX;
	uint8_t x1180 = 3U;

	t80 = ((x1177%x1178)<<(x1179&x1180));

	if (t80 != 185581912U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x1189 = 2527U;
	int64_t x1190 = 6876740LL;
	uint8_t x1191 = 16U;
	uint64_t x1192 = UINT64_MAX;
	volatile int64_t t81 = -2278538678810453358LL;

	t81 = ((x1189%x1190)<<(x1191&x1192));

	if (t81 != 165609472LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1226 = 84347607U;
	static int32_t x1227 = INT32_MIN;
	uint32_t t82 = 39U;

	t82 = ((x1225%x1226)<<(x1227&x1228));

	if (t82 != 38793473U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x1229 = 5569063;
	static uint32_t x1230 = 99U;
	static uint8_t x1232 = 9U;

	t83 = ((x1229%x1230)<<(x1231&x1232));

	if (t83 != 8192U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x1241 = 394618510LLU;
	volatile uint32_t x1243 = 6411439U;
	int64_t x1244 = 8706LL;
	uint64_t t84 = 30178904901468028LLU;

	t84 = ((x1241%x1242)<<(x1243&x1244));

	if (t84 != 1578474040LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x1321 = INT8_MIN;
	uint64_t x1322 = 1014616589668577LLU;
	int8_t x1323 = INT8_MIN;
	uint8_t x1324 = 2U;
	uint64_t t85 = 18LLU;

	t85 = ((x1321%x1322)<<(x1323&x1324));

	if (t85 != 1014473534821628LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1325 = INT8_MAX;
	volatile int64_t x1326 = INT64_MIN;
	static int16_t x1327 = INT16_MIN;

	t86 = ((x1325%x1326)<<(x1327&x1328));

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x1337 = INT32_MAX;
	int32_t x1340 = INT32_MAX;
	volatile uint32_t t87 = 983U;

	t87 = ((x1337%x1338)<<(x1339&x1340));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1341 = INT64_MAX;
	int32_t x1344 = 3645;
	int64_t t88 = -1559606856390LL;

	t88 = ((x1341%x1342)<<(x1343&x1344));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1349 = UINT32_MAX;
	int64_t x1350 = -5148634406LL;
	int64_t x1351 = INT64_MIN;
	uint16_t x1352 = UINT16_MAX;

	t89 = ((x1349%x1350)<<(x1351&x1352));

	if (t89 != 4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x1361 = 232287219172823948LLU;
	int8_t x1362 = INT8_MAX;
	static uint8_t x1363 = 22U;
	volatile uint64_t t90 = 0LLU;

	t90 = ((x1361%x1362)<<(x1363&x1364));

	if (t90 != 880LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x1393 = 35U;
	static int16_t x1394 = -1;
	int64_t x1395 = 13LL;
	int32_t x1396 = INT32_MAX;
	static int32_t t91 = -83521;

	t91 = ((x1393%x1394)<<(x1395&x1396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1437 = INT16_MIN;
	static volatile uint64_t x1439 = 1912LLU;
	int32_t x1440 = INT32_MIN;
	uint64_t t92 = 3767378801894089LLU;

	t92 = ((x1437%x1438)<<(x1439&x1440));

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1441 = 12LLU;
	static uint16_t x1442 = 60U;
	int64_t x1443 = INT64_MIN;
	uint32_t x1444 = 234U;
	volatile uint64_t t93 = 789847474444605625LLU;

	t93 = ((x1441%x1442)<<(x1443&x1444));

	if (t93 != 12LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1445 = 18LLU;
	uint64_t x1446 = UINT64_MAX;
	static volatile uint16_t x1448 = 1U;
	volatile uint64_t t94 = 4987LLU;

	t94 = ((x1445%x1446)<<(x1447&x1448));

	if (t94 != 18LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1449 = INT64_MIN;
	static int64_t x1450 = -1LL;
	int64_t x1451 = INT64_MIN;
	int64_t t95 = 461354988361LL;

	t95 = ((x1449%x1450)<<(x1451&x1452));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x1473 = 111018316LLU;
	static int64_t x1474 = INT64_MIN;
	static volatile int32_t x1476 = INT32_MIN;
	volatile uint64_t t96 = 3896974124863885026LLU;

	t96 = ((x1473%x1474)<<(x1475&x1476));

	if (t96 != 111018316LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1477 = 6124277LLU;
	int64_t x1478 = -17LL;
	volatile int64_t x1479 = INT64_MAX;
	volatile uint8_t x1480 = 57U;
	uint64_t t97 = 489111531LLU;

	t97 = ((x1477%x1478)<<(x1479&x1480));

	if (t97 != 16861477004875137024LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1485 = UINT32_MAX;
	int8_t x1486 = -1;
	int32_t x1487 = 57;
	int8_t x1488 = INT8_MIN;
	volatile uint32_t t98 = 0U;

	t98 = ((x1485%x1486)<<(x1487&x1488));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x1493 = 20384100U;
	static int8_t x1495 = -1;
	uint32_t x1496 = 5U;
	volatile uint32_t t99 = 743U;

	t99 = ((x1493%x1494)<<(x1495&x1496));

	if (t99 != 652291200U) { NG(); } else { ; }
	
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

