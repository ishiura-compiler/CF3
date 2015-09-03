#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x26 = INT8_MIN;
uint8_t x79 = UINT8_MAX;
uint16_t x80 = 7U;
uint16_t x101 = UINT16_MAX;
int8_t x188 = 11;
int64_t x212 = -13693802011LL;
int32_t x276 = 2;
int8_t x306 = -1;
static uint64_t x308 = 7632LLU;
int32_t x322 = -1;
volatile int32_t t13 = 13391;
volatile uint32_t t15 = 16707701U;
uint8_t x357 = 0U;
int16_t x358 = INT16_MIN;
int32_t x365 = 192;
int32_t x366 = -1;
uint16_t x454 = UINT16_MAX;
int8_t x456 = INT8_MAX;
int8_t x479 = 0;
int32_t x480 = -802465;
int8_t x501 = 0;
static volatile uint64_t x526 = UINT64_MAX;
int16_t x527 = INT16_MIN;
static uint16_t x528 = 6U;
static volatile int32_t t25 = 1545;
uint32_t x551 = UINT32_MAX;
static uint16_t x564 = 4477U;
volatile uint32_t t27 = 342U;
static int8_t x603 = 0;
int8_t x711 = INT8_MIN;
volatile int16_t x756 = INT16_MIN;
uint32_t x822 = 35U;
uint16_t x823 = 1U;
int16_t x850 = INT16_MAX;
int32_t x927 = 1530047;
uint8_t x940 = 24U;
static uint64_t x958 = 22955866461870459LLU;
int32_t t44 = 164334;
static uint32_t x980 = 0U;
uint64_t x982 = 2913356146373354LLU;
uint8_t x984 = 100U;
int64_t t46 = -1908852467792LL;
int32_t x988 = 7;
int32_t x1068 = INT32_MIN;
int16_t x1104 = INT16_MIN;
uint64_t x1116 = 199310930LLU;
int16_t x1195 = INT16_MAX;
int32_t x1241 = INT32_MAX;
volatile uint32_t x1273 = UINT32_MAX;
uint64_t x1274 = 73716035995LLU;
int8_t x1275 = 0;
int64_t x1300 = -1LL;
static int32_t x1365 = 64156;
int32_t t61 = -25;
int64_t t62 = -1708963672466LL;
int32_t x1418 = -2;
volatile int8_t x1419 = -1;
int64_t x1434 = -1LL;
int16_t x1476 = 0;
int16_t x1494 = 12;
volatile int32_t t68 = -136;
uint8_t x1528 = 11U;
int32_t x1531 = 27084189;
uint8_t x1532 = 3U;
volatile int32_t t70 = -245324491;
static int64_t t71 = 366182901LL;
static int8_t x1586 = -1;
int64_t x1652 = INT64_MIN;
int64_t x1662 = INT64_MIN;
int32_t t75 = -57;
int16_t x1671 = -1;
uint16_t x1695 = 0U;
uint32_t x1761 = 5005U;
uint32_t x1769 = 9190132U;
uint32_t t82 = 604361866U;
static volatile int8_t x1868 = -1;
int16_t x1940 = INT16_MIN;
static volatile int32_t t86 = 0;
int8_t x1956 = 8;
uint16_t x2102 = 1592U;
volatile uint32_t t92 = UINT32_MAX;
int32_t t93 = INT32_MAX;
int8_t x2195 = 1;
int64_t x2196 = INT64_MIN;
volatile int64_t x2231 = -1LL;
volatile int32_t t96 = 24558354;
volatile int8_t x2259 = INT8_MAX;


void f0(void) {
	volatile int32_t x25 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	volatile uint32_t x28 = 391U;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x25>>((x26*x27)&x28));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x77 = 546381797352LL;
	int64_t x78 = -1LL;
	volatile int64_t t1 = 176947841400LL;

	t1 = (x77>>((x78*x79)&x80));

	if (t1 != 273190898676LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x102 = INT16_MAX;
	volatile int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = 126U;
	int32_t t2 = -58431;

	t2 = (x101>>((x102*x103)&x104));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int16_t x138 = 22;
	uint8_t x139 = 59U;
	int8_t x140 = 2;
	static int32_t t3 = 609164895;

	t3 = (x137>>((x138*x139)&x140));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x141 = 693979766;
	uint8_t x142 = 1U;
	int16_t x143 = 19;
	int16_t x144 = INT16_MIN;
	volatile int32_t t4 = 0;

	t4 = (x141>>((x142*x143)&x144));

	if (t4 != 693979766) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x185 = 35916743U;
	static int8_t x186 = 28;
	volatile int16_t x187 = INT16_MAX;
	uint32_t t5 = 1732U;

	t5 = (x185>>((x186*x187)&x188));

	if (t5 != 35916743U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x201 = 0U;
	int16_t x202 = INT16_MIN;
	int8_t x203 = 0;
	static int32_t x204 = 161307;
	volatile uint32_t t6 = 224U;

	t6 = (x201>>((x202*x203)&x204));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x209 = 79;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = 0U;
	volatile int32_t t7 = 71;

	t7 = (x209>>((x210*x211)&x212));

	if (t7 != 79) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x245 = INT16_MAX;
	int16_t x246 = -1;
	uint16_t x247 = 132U;
	uint8_t x248 = 2U;
	static int32_t t8 = 25279614;

	t8 = (x245>>((x246*x247)&x248));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x249 = 1;
	int64_t x250 = INT64_MAX;
	static int16_t x251 = -1;
	static volatile int32_t x252 = INT32_MAX;
	volatile int32_t t9 = -401340;

	t9 = (x249>>((x250*x251)&x252));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x273 = 1;
	uint16_t x274 = 26375U;
	uint32_t x275 = 35U;
	int32_t t10 = -592;

	t10 = (x273>>((x274*x275)&x276));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x289 = 7067548;
	int16_t x290 = INT16_MIN;
	static uint32_t x291 = UINT32_MAX;
	int16_t x292 = 1;
	int32_t t11 = -8259833;

	t11 = (x289>>((x290*x291)&x292));

	if (t11 != 7067548) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x305 = 95U;
	uint32_t x307 = 0U;
	volatile int32_t t12 = 4014;

	t12 = (x305>>((x306*x307)&x308));

	if (t12 != 95) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x321 = 121U;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = 1;

	t13 = (x321>>((x322*x323)&x324));

	if (t13 != 60) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x329 = 2977565LLU;
	uint16_t x330 = 37U;
	int64_t x331 = -1LL;
	static int8_t x332 = 0;
	uint64_t t14 = 6858962LLU;

	t14 = (x329>>((x330*x331)&x332));

	if (t14 != 2977565LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x349 = 2454719U;
	int64_t x350 = -1LL;
	volatile int32_t x351 = -1;
	static int16_t x352 = 1;

	t15 = (x349>>((x350*x351)&x352));

	if (t15 != 1227359U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x359 = INT16_MIN;
	volatile int8_t x360 = 7;
	int32_t t16 = 42;

	t16 = (x357>>((x358*x359)&x360));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x367 = INT8_MIN;
	uint32_t x368 = 1940469842U;
	static volatile int32_t t17 = 5946855;

	t17 = (x365>>((x366*x367)&x368));

	if (t17 != 192) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x401 = 1U;
	int64_t x402 = INT64_MAX;
	static uint16_t x403 = 0U;
	int32_t x404 = -50704469;
	int32_t t18 = 491;

	t18 = (x401>>((x402*x403)&x404));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x437 = 62LLU;
	static volatile int16_t x438 = 13;
	uint32_t x439 = 46619U;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t19 = 383923321LLU;

	t19 = (x437>>((x438*x439)&x440));

	if (t19 != 62LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x453 = UINT8_MAX;
	int64_t x455 = -1LL;
	int32_t t20 = 10668946;

	t20 = (x453>>((x454*x455)&x456));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x477 = INT16_MAX;
	int64_t x478 = INT64_MIN;
	int32_t t21 = 451012006;

	t21 = (x477>>((x478*x479)&x480));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x502 = 0U;
	static volatile int64_t x503 = 26905382LL;
	static uint8_t x504 = UINT8_MAX;
	volatile int32_t t22 = 214614;

	t22 = (x501>>((x502*x503)&x504));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x525 = 32596;
	volatile int32_t t23 = 8681549;

	t23 = (x525>>((x526*x527)&x528));

	if (t23 != 32596) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x529 = 236;
	volatile int8_t x530 = -3;
	int16_t x531 = INT16_MIN;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t24 = -3;

	t24 = (x529>>((x530*x531)&x532));

	if (t24 != 236) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x545 = UINT16_MAX;
	uint32_t x546 = 0U;
	volatile uint32_t x547 = UINT32_MAX;
	static int8_t x548 = INT8_MAX;

	t25 = (x545>>((x546*x547)&x548));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x549 = 815662737191LL;
	uint8_t x550 = 5U;
	int64_t x552 = INT64_MIN;
	int64_t t26 = -267699124248514798LL;

	t26 = (x549>>((x550*x551)&x552));

	if (t26 != 815662737191LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x561 = 8U;
	static int16_t x562 = 0;
	int32_t x563 = 7438;

	t27 = (x561>>((x562*x563)&x564));

	if (t27 != 8U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x601 = 873;
	int64_t x602 = -1LL;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t28 = -325528;

	t28 = (x601>>((x602*x603)&x604));

	if (t28 != 873) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x621 = 1220U;
	int16_t x622 = INT16_MIN;
	uint32_t x623 = 6460486U;
	uint16_t x624 = UINT16_MAX;
	int32_t t29 = 13654759;

	t29 = (x621>>((x622*x623)&x624));

	if (t29 != 1220) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x641 = INT8_MAX;
	volatile uint32_t x642 = 11069279U;
	uint8_t x643 = 0U;
	int64_t x644 = -1LL;
	static int32_t t30 = -57405;

	t30 = (x641>>((x642*x643)&x644));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = UINT64_MAX;
	uint16_t x647 = UINT16_MAX;
	uint8_t x648 = UINT8_MAX;
	uint64_t t31 = 24425030LLU;

	t31 = (x645>>((x646*x647)&x648));

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x669 = 3LLU;
	int8_t x670 = -1;
	uint64_t x671 = UINT64_MAX;
	int8_t x672 = -3;
	uint64_t t32 = 25048LLU;

	t32 = (x669>>((x670*x671)&x672));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x685 = INT64_MAX;
	uint8_t x686 = 119U;
	uint64_t x687 = UINT64_MAX;
	volatile uint64_t x688 = 9LLU;
	volatile int64_t t33 = 139818438567LL;

	t33 = (x685>>((x686*x687)&x688));

	if (t33 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x709 = 961831986U;
	int16_t x710 = INT16_MIN;
	volatile int32_t x712 = 1068245228;
	volatile uint32_t t34 = 56941U;

	t34 = (x709>>((x710*x711)&x712));

	if (t34 != 961831986U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x753 = 0;
	static uint8_t x754 = 1U;
	static int8_t x755 = 8;
	int32_t t35 = -11;

	t35 = (x753>>((x754*x755)&x756));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x777 = 62;
	int8_t x778 = 23;
	int16_t x779 = 1;
	int8_t x780 = -1;
	volatile int32_t t36 = 4005112;

	t36 = (x777>>((x778*x779)&x780));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x805 = UINT8_MAX;
	static uint16_t x806 = 3007U;
	int8_t x807 = INT8_MAX;
	int64_t x808 = INT64_MIN;
	int32_t t37 = -2209156;

	t37 = (x805>>((x806*x807)&x808));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x821 = 10LLU;
	int16_t x824 = 805;
	uint64_t t38 = 59313158488228LLU;

	t38 = (x821>>((x822*x823)&x824));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x837 = 375U;
	int16_t x838 = -1;
	int64_t x839 = -1LL;
	static int32_t x840 = INT32_MIN;
	volatile uint32_t t39 = 49638954U;

	t39 = (x837>>((x838*x839)&x840));

	if (t39 != 375U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x849 = 5245230077822014LLU;
	uint32_t x851 = 49U;
	volatile int32_t x852 = 17;
	uint64_t t40 = 1524706740LLU;

	t40 = (x849>>((x850*x851)&x852));

	if (t40 != 2622615038911007LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x873 = UINT8_MAX;
	volatile int32_t x874 = -6;
	static volatile int8_t x875 = INT8_MIN;
	int16_t x876 = 0;
	volatile int32_t t41 = -110173;

	t41 = (x873>>((x874*x875)&x876));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x925 = 6506U;
	uint32_t x926 = UINT32_MAX;
	int8_t x928 = 0;
	volatile int32_t t42 = 1457;

	t42 = (x925>>((x926*x927)&x928));

	if (t42 != 6506) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x937 = UINT8_MAX;
	uint64_t x938 = 2280933895889807432LLU;
	int32_t x939 = -1;
	volatile int32_t t43 = 1;

	t43 = (x937>>((x938*x939)&x940));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x957 = 15784;
	static volatile int8_t x959 = INT8_MIN;
	uint16_t x960 = 6U;

	t44 = (x957>>((x958*x959)&x960));

	if (t44 != 15784) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x977 = 0U;
	static uint8_t x978 = UINT8_MAX;
	int8_t x979 = INT8_MAX;
	volatile int32_t t45 = -3349;

	t45 = (x977>>((x978*x979)&x980));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x981 = INT64_MAX;
	uint32_t x983 = UINT32_MAX;

	t46 = (x981>>((x982*x983)&x984));

	if (t46 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x985 = INT32_MAX;
	uint32_t x986 = 16648945U;
	uint32_t x987 = 1079U;
	int32_t t47 = -459497;

	t47 = (x985>>((x986*x987)&x988));

	if (t47 != 16777215) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1065 = UINT32_MAX;
	static uint8_t x1066 = 6U;
	static int8_t x1067 = INT8_MAX;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x1065>>((x1066*x1067)&x1068));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1069 = 1;
	volatile int32_t x1070 = INT32_MAX;
	int8_t x1071 = 0;
	int64_t x1072 = INT64_MAX;
	volatile int32_t t49 = 1549191;

	t49 = (x1069>>((x1070*x1071)&x1072));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1101 = UINT16_MAX;
	int16_t x1102 = 0;
	int64_t x1103 = INT64_MIN;
	volatile int32_t t50 = -646;

	t50 = (x1101>>((x1102*x1103)&x1104));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1113 = 31;
	int8_t x1114 = 30;
	volatile uint8_t x1115 = 5U;
	volatile int32_t t51 = 1754;

	t51 = (x1113>>((x1114*x1115)&x1116));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1137 = 34;
	static int32_t x1138 = -32;
	int8_t x1139 = 2;
	int8_t x1140 = 1;
	volatile int32_t t52 = 18966654;

	t52 = (x1137>>((x1138*x1139)&x1140));

	if (t52 != 34) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1157 = 0;
	int64_t x1158 = 6701473LL;
	int16_t x1159 = 66;
	uint8_t x1160 = 1U;
	int32_t t53 = -821196730;

	t53 = (x1157>>((x1158*x1159)&x1160));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1193 = UINT64_MAX;
	int16_t x1194 = -1;
	int64_t x1196 = 64LL;
	uint64_t t54 = UINT64_MAX;

	t54 = (x1193>>((x1194*x1195)&x1196));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x1242 = -1;
	int64_t x1243 = -1LL;
	int64_t x1244 = INT64_MIN;
	volatile int32_t t55 = INT32_MAX;

	t55 = (x1241>>((x1242*x1243)&x1244));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1276 = -30;
	static volatile uint32_t t56 = UINT32_MAX;

	t56 = (x1273>>((x1274*x1275)&x1276));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1281 = 161U;
	uint32_t x1282 = 5U;
	uint8_t x1283 = 3U;
	int16_t x1284 = INT16_MIN;
	int32_t t57 = -36921448;

	t57 = (x1281>>((x1282*x1283)&x1284));

	if (t57 != 161) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1297 = UINT8_MAX;
	static int16_t x1298 = -1;
	volatile int8_t x1299 = -1;
	volatile int32_t t58 = -2;

	t58 = (x1297>>((x1298*x1299)&x1300));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1325 = UINT32_MAX;
	int8_t x1326 = 0;
	static uint8_t x1327 = 3U;
	int16_t x1328 = -838;
	uint32_t t59 = UINT32_MAX;

	t59 = (x1325>>((x1326*x1327)&x1328));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x1366 = -1LL;
	static int8_t x1367 = -4;
	volatile uint32_t x1368 = 185U;
	static volatile int32_t t60 = 6;

	t60 = (x1365>>((x1366*x1367)&x1368));

	if (t60 != 64156) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1373 = UINT8_MAX;
	int8_t x1374 = 22;
	int32_t x1375 = 0;
	uint16_t x1376 = UINT16_MAX;

	t61 = (x1373>>((x1374*x1375)&x1376));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1381 = 121LL;
	int16_t x1382 = -10;
	static uint64_t x1383 = UINT64_MAX;
	int64_t x1384 = INT64_MIN;

	t62 = (x1381>>((x1382*x1383)&x1384));

	if (t62 != 121LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1417 = 75U;
	static uint16_t x1420 = UINT16_MAX;
	volatile int32_t t63 = 0;

	t63 = (x1417>>((x1418*x1419)&x1420));

	if (t63 != 18) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1433 = 52;
	int32_t x1435 = INT32_MIN;
	uint16_t x1436 = 10U;
	volatile int32_t t64 = 143500118;

	t64 = (x1433>>((x1434*x1435)&x1436));

	if (t64 != 52) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1473 = INT64_MAX;
	volatile int8_t x1474 = INT8_MIN;
	uint32_t x1475 = 392465878U;
	static int64_t t65 = INT64_MAX;

	t65 = (x1473>>((x1474*x1475)&x1476));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x1485 = 1;
	int16_t x1486 = -15;
	static uint32_t x1487 = 182U;
	static uint16_t x1488 = 46U;
	volatile int32_t t66 = -615;

	t66 = (x1485>>((x1486*x1487)&x1488));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x1493 = 0U;
	uint32_t x1495 = 3884U;
	static volatile int8_t x1496 = 0;
	int32_t t67 = 3673440;

	t67 = (x1493>>((x1494*x1495)&x1496));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x1501 = 13U;
	uint64_t x1502 = UINT64_MAX;
	static uint64_t x1503 = UINT64_MAX;
	volatile int32_t x1504 = -1;

	t68 = (x1501>>((x1502*x1503)&x1504));

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1525 = UINT64_MAX;
	static uint8_t x1526 = UINT8_MAX;
	uint64_t x1527 = 6720LLU;
	uint64_t t69 = UINT64_MAX;

	t69 = (x1525>>((x1526*x1527)&x1528));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1529 = 4;
	static int32_t x1530 = -1;

	t70 = (x1529>>((x1530*x1531)&x1532));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1541 = 77663844071559LL;
	static int32_t x1542 = INT32_MIN;
	uint32_t x1543 = 1019204U;
	volatile int16_t x1544 = INT16_MIN;

	t71 = (x1541>>((x1542*x1543)&x1544));

	if (t71 != 77663844071559LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1585 = 421708U;
	uint64_t x1587 = 50LLU;
	volatile uint8_t x1588 = 5U;
	uint32_t t72 = 1U;

	t72 = (x1585>>((x1586*x1587)&x1588));

	if (t72 != 26356U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1597 = 12U;
	static int64_t x1598 = INT64_MIN;
	volatile uint64_t x1599 = 1302936460LLU;
	static volatile uint32_t x1600 = UINT32_MAX;
	int32_t t73 = -259645;

	t73 = (x1597>>((x1598*x1599)&x1600));

	if (t73 != 12) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1649 = 2291952235686782212LL;
	volatile uint16_t x1650 = 30U;
	int8_t x1651 = INT8_MAX;
	static volatile int64_t t74 = 2393236882LL;

	t74 = (x1649>>((x1650*x1651)&x1652));

	if (t74 != 2291952235686782212LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x1661 = INT16_MAX;
	uint64_t x1663 = 499237502551324473LLU;
	int32_t x1664 = INT32_MAX;

	t75 = (x1661>>((x1662*x1663)&x1664));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1669 = UINT8_MAX;
	static volatile int8_t x1670 = INT8_MIN;
	int16_t x1672 = INT16_MIN;
	volatile int32_t t76 = -33379;

	t76 = (x1669>>((x1670*x1671)&x1672));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1685 = 44U;
	int16_t x1686 = 1;
	int64_t x1687 = 31650319726680811LL;
	int16_t x1688 = 0;
	int32_t t77 = 2388;

	t77 = (x1685>>((x1686*x1687)&x1688));

	if (t77 != 44) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1689 = 0;
	uint8_t x1690 = 0U;
	int16_t x1691 = INT16_MIN;
	static volatile uint16_t x1692 = UINT16_MAX;
	volatile int32_t t78 = -11919743;

	t78 = (x1689>>((x1690*x1691)&x1692));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x1693 = 88256108;
	uint16_t x1694 = 2U;
	uint8_t x1696 = 0U;
	static int32_t t79 = 20009;

	t79 = (x1693>>((x1694*x1695)&x1696));

	if (t79 != 88256108) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1717 = 706LL;
	volatile uint32_t x1718 = 8275060U;
	static uint16_t x1719 = 0U;
	int8_t x1720 = -14;
	int64_t t80 = 451640020386008LL;

	t80 = (x1717>>((x1718*x1719)&x1720));

	if (t80 != 706LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x1762 = INT8_MIN;
	volatile int16_t x1763 = 45;
	uint32_t x1764 = 4U;
	uint32_t t81 = 693653U;

	t81 = (x1761>>((x1762*x1763)&x1764));

	if (t81 != 5005U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x1770 = -2;
	volatile uint64_t x1771 = 1LLU;
	int16_t x1772 = 0;

	t82 = (x1769>>((x1770*x1771)&x1772));

	if (t82 != 9190132U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1865 = INT8_MAX;
	int8_t x1866 = -1;
	uint8_t x1867 = 0U;
	int32_t t83 = 584;

	t83 = (x1865>>((x1866*x1867)&x1868));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1885 = UINT32_MAX;
	static int32_t x1886 = -1;
	static int16_t x1887 = INT16_MAX;
	static int8_t x1888 = INT8_MAX;
	volatile uint32_t t84 = 810871U;

	t84 = (x1885>>((x1886*x1887)&x1888));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1925 = 13U;
	volatile uint32_t x1926 = 6272U;
	uint16_t x1927 = 216U;
	uint16_t x1928 = 4U;
	int32_t t85 = 375184021;

	t85 = (x1925>>((x1926*x1927)&x1928));

	if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x1937 = 2204U;
	volatile uint8_t x1938 = 0U;
	int32_t x1939 = INT32_MIN;

	t86 = (x1937>>((x1938*x1939)&x1940));

	if (t86 != 2204) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1953 = 6475321962083972LLU;
	int8_t x1954 = INT8_MIN;
	uint64_t x1955 = 17LLU;
	uint64_t t87 = 927700252986412430LLU;

	t87 = (x1953>>((x1954*x1955)&x1956));

	if (t87 != 6475321962083972LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x2057 = UINT64_MAX;
	volatile uint64_t x2058 = UINT64_MAX;
	volatile int16_t x2059 = -1;
	static int64_t x2060 = -1LL;
	static uint64_t t88 = 1012116954156958LLU;

	t88 = (x2057>>((x2058*x2059)&x2060));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x2069 = 606478200U;
	int32_t x2070 = -1;
	int8_t x2071 = -1;
	int32_t x2072 = -1;
	static volatile uint32_t t89 = 1577178181U;

	t89 = (x2069>>((x2070*x2071)&x2072));

	if (t89 != 303239100U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x2097 = 59477426;
	int64_t x2098 = -1LL;
	int8_t x2099 = -1;
	int32_t x2100 = 51931;
	volatile int32_t t90 = 3053172;

	t90 = (x2097>>((x2098*x2099)&x2100));

	if (t90 != 29738713) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2101 = UINT32_MAX;
	uint32_t x2103 = 0U;
	static int64_t x2104 = -694957507714183547LL;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x2101>>((x2102*x2103)&x2104));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2121 = UINT32_MAX;
	static uint8_t x2122 = 0U;
	uint16_t x2123 = 132U;
	uint32_t x2124 = 221U;

	t92 = (x2121>>((x2122*x2123)&x2124));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2137 = INT32_MAX;
	uint8_t x2138 = 0U;
	uint32_t x2139 = UINT32_MAX;
	static volatile int64_t x2140 = INT64_MIN;

	t93 = (x2137>>((x2138*x2139)&x2140));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2177 = INT8_MAX;
	int16_t x2178 = INT16_MIN;
	uint64_t x2179 = UINT64_MAX;
	uint64_t x2180 = 20058LLU;
	volatile int32_t t94 = 200506377;

	t94 = (x2177>>((x2178*x2179)&x2180));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2193 = 17013LLU;
	volatile uint8_t x2194 = 3U;
	volatile uint64_t t95 = 1646170146431050LLU;

	t95 = (x2193>>((x2194*x2195)&x2196));

	if (t95 != 17013LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2229 = 474U;
	uint64_t x2230 = 0LLU;
	int8_t x2232 = 1;

	t96 = (x2229>>((x2230*x2231)&x2232));

	if (t96 != 474) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x2253 = 9U;
	int8_t x2254 = -1;
	volatile uint32_t x2255 = UINT32_MAX;
	uint32_t x2256 = 94990U;
	static int32_t t97 = 0;

	t97 = (x2253>>((x2254*x2255)&x2256));

	if (t97 != 9) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2257 = 6U;
	uint16_t x2258 = 12U;
	uint16_t x2260 = 1U;
	static int32_t t98 = -470585731;

	t98 = (x2257>>((x2258*x2259)&x2260));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2305 = 2134;
	int32_t x2306 = INT32_MIN;
	uint64_t x2307 = 22154135061LLU;
	uint8_t x2308 = UINT8_MAX;
	static volatile int32_t t99 = -196493988;

	t99 = (x2305>>((x2306*x2307)&x2308));

	if (t99 != 2134) { NG(); } else { ; }
	
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

