#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x51 = 11U;
int64_t x52 = -3LL;
static uint64_t x69 = 446936671780899LLU;
int32_t t3 = INT32_MAX;
volatile int16_t x149 = INT16_MAX;
uint32_t x152 = 4190507U;
volatile int32_t t5 = 0;
static int32_t x222 = INT32_MIN;
int64_t x226 = -1LL;
static int64_t x228 = -1LL;
uint16_t x279 = 7U;
volatile int8_t x314 = 11;
uint64_t x317 = UINT64_MAX;
static uint32_t t16 = 1739017889U;
static int8_t x344 = 1;
volatile uint32_t x356 = 4768171U;
int16_t x400 = INT16_MAX;
volatile uint64_t x427 = UINT64_MAX;
int64_t x468 = INT64_MIN;
static volatile uint64_t t23 = 389843LLU;
int8_t x491 = INT8_MAX;
volatile int32_t t25 = -1222;
static int8_t x527 = INT8_MIN;
volatile uint8_t x528 = 58U;
static uint64_t x567 = UINT64_MAX;
uint16_t x665 = 24895U;
int16_t x683 = -1;
static volatile uint64_t t29 = 46747410877434LLU;
int64_t x718 = 5529LL;
static volatile uint32_t x773 = UINT32_MAX;
int8_t x776 = -1;
uint32_t x778 = UINT32_MAX;
static int64_t x786 = -16434521271103LL;
static int16_t x788 = 2;
volatile int64_t x794 = -21712403655LL;
int64_t x796 = -1LL;
volatile uint64_t t35 = 1LLU;
volatile uint8_t x929 = 0U;
static uint32_t x943 = UINT32_MAX;
int64_t x970 = INT64_MIN;
volatile int64_t x971 = INT64_MIN;
int32_t x990 = -1;
static volatile int32_t t42 = 26353613;
volatile int32_t x1001 = 81;
uint32_t x1003 = 150487092U;
volatile int64_t t44 = 4713009939LL;
int16_t x1106 = -1;
volatile int8_t x1107 = -1;
int64_t x1108 = 202016836399869LL;
int16_t x1118 = INT16_MIN;
int32_t x1221 = 88151;
volatile uint32_t x1255 = 3222U;
int64_t x1258 = 247186899158360122LL;
int64_t x1378 = -14LL;
int32_t x1387 = -40988;
static int16_t x1388 = -1;
static volatile uint8_t x1432 = UINT8_MAX;
int64_t x1464 = -1LL;
volatile int32_t t60 = -1001171502;
int16_t x1502 = INT16_MIN;
static volatile uint32_t x1558 = UINT32_MAX;
int32_t x1610 = -1;
static uint16_t x1622 = UINT16_MAX;
volatile uint32_t t67 = UINT32_MAX;
int64_t x1793 = INT64_MAX;
int32_t x1912 = INT32_MIN;
int32_t x1936 = -1527154;
uint16_t x1977 = 35U;
uint16_t x2085 = UINT16_MAX;
uint16_t x2086 = UINT16_MAX;
int8_t x2088 = INT8_MIN;
int64_t x2106 = INT64_MAX;
int32_t x2130 = 90636689;
volatile int32_t t78 = 89;
int8_t x2148 = 3;
uint8_t x2216 = 2U;
uint64_t x2230 = UINT64_MAX;
volatile int32_t t83 = 578;
uint32_t x2265 = 104503842U;
static int32_t x2268 = -1;
static int8_t x2302 = 7;
int64_t x2303 = -1LL;
static volatile uint64_t x2304 = UINT64_MAX;
int32_t t85 = -69;
static volatile uint8_t x2437 = 120U;
int32_t x2532 = 2;
volatile int8_t x2636 = -1;
int8_t x2665 = 0;
int16_t x2858 = -1;
static int8_t x2869 = INT8_MAX;
int8_t x2871 = 13;


void f0(void) {
	uint64_t x1 = 386896596556309587LLU;
	int64_t x2 = -1LL;
	static int8_t x3 = -1;
	uint16_t x4 = 12U;
	volatile uint64_t t0 = 1684918688050LLU;

	t0 = (x1<<((x2-x3)%x4));

	if (t0 != 386896596556309587LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x49 = UINT32_MAX;
	static int32_t x50 = INT32_MAX;
	static uint32_t t1 = 146656U;

	t1 = (x49<<((x50-x51)%x52));

	if (t1 != 4294967292U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x70 = INT64_MIN;
	static int64_t x71 = INT64_MIN;
	static int32_t x72 = -1;
	volatile uint64_t t2 = 27804588610145301LLU;

	t2 = (x69<<((x70-x71)%x72));

	if (t2 != 446936671780899LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x89 = INT32_MAX;
	volatile int16_t x90 = INT16_MAX;
	int16_t x91 = -11122;
	int16_t x92 = -1;

	t3 = (x89<<((x90-x91)%x92));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x137 = 155794012069LL;
	uint8_t x138 = 11U;
	int16_t x139 = INT16_MAX;
	volatile int8_t x140 = -1;
	int64_t t4 = -1631087428144LL;

	t4 = (x137<<((x138-x139)%x140));

	if (t4 != 155794012069LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;

	t5 = (x149<<((x150-x151)%x152));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x197 = 246048053040944LL;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	volatile int64_t t6 = 1050718097174126854LL;

	t6 = (x197<<((x198-x199)%x200));

	if (t6 != 246048053040944LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x205 = INT64_MAX;
	uint8_t x206 = UINT8_MAX;
	volatile int16_t x207 = -1;
	int16_t x208 = -1;
	int64_t t7 = INT64_MAX;

	t7 = (x205<<((x206-x207)%x208));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x209 = 4556;
	volatile int64_t x210 = -1LL;
	int32_t x211 = -1;
	static volatile uint32_t x212 = UINT32_MAX;
	volatile int32_t t8 = -2437;

	t8 = (x209<<((x210-x211)%x212));

	if (t8 != 4556) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x221 = UINT8_MAX;
	static uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t9 = 245112007;

	t9 = (x221<<((x222-x223)%x224));

	if (t9 != 4080) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x225 = UINT8_MAX;
	uint32_t x227 = UINT32_MAX;
	int32_t t10 = 80;

	t10 = (x225<<((x226-x227)%x228));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x237 = INT16_MAX;
	uint64_t x238 = UINT64_MAX;
	int32_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;
	int32_t t11 = -1;

	t11 = (x237<<((x238-x239)%x240));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x257 = 1;
	volatile uint8_t x258 = 1U;
	volatile int8_t x259 = -1;
	int32_t x260 = INT32_MAX;
	volatile int32_t t12 = -182875;

	t12 = (x257<<((x258-x259)%x260));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x277 = 27U;
	int16_t x278 = 1;
	uint64_t x280 = 3LLU;
	int32_t t13 = -1;

	t13 = (x277<<((x278-x279)%x280));

	if (t13 != 54) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x313 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	uint64_t t14 = 80591733235201480LLU;

	t14 = (x313<<((x314-x315)%x316));

	if (t14 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x318 = -1;
	int8_t x319 = -1;
	uint16_t x320 = 6739U;
	uint64_t t15 = UINT64_MAX;

	t15 = (x317<<((x318-x319)%x320));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x337 = 29U;
	static int16_t x338 = 19;
	uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MAX;

	t16 = (x337<<((x338-x339)%x340));

	if (t16 != 30408704U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x341 = 7701U;
	uint8_t x342 = 2U;
	int64_t x343 = 533LL;
	static int32_t t17 = 61687;

	t17 = (x341<<((x342-x343)%x344));

	if (t17 != 7701) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x353 = INT64_MAX;
	static int16_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x353<<((x354-x355)%x356));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x373 = 2;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	int8_t x376 = -1;
	int32_t t19 = 12064;

	t19 = (x373<<((x374-x375)%x376));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x397<<((x398-x399)%x400));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x425 = 8619630239426LLU;
	volatile int16_t x426 = -1;
	int16_t x428 = INT16_MAX;
	volatile uint64_t t21 = 8361871707031739LLU;

	t21 = (x425<<((x426-x427)%x428));

	if (t21 != 8619630239426LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x465 = INT16_MAX;
	int8_t x466 = -1;
	uint64_t x467 = UINT64_MAX;
	int32_t t22 = 59928960;

	t22 = (x465<<((x466-x467)%x468));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x481 = 93708LLU;
	int32_t x482 = -1;
	int16_t x483 = -1;
	int16_t x484 = -235;

	t23 = (x481<<((x482-x483)%x484));

	if (t23 != 93708LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x489 = 66284875156184LLU;
	static int8_t x490 = INT8_MIN;
	int8_t x492 = -3;
	static volatile uint64_t t24 = 7819LLU;

	t24 = (x489<<((x490-x491)%x492));

	if (t24 != 66284875156184LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x497 = 0U;
	int16_t x498 = 5452;
	static int32_t x499 = 66229911;
	int64_t x500 = -1LL;

	t25 = (x497<<((x498-x499)%x500));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x525 = 27U;
	int8_t x526 = 2;
	volatile uint32_t t26 = 7250673U;

	t26 = (x525<<((x526-x527)%x528));

	if (t26 != 442368U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x565 = UINT16_MAX;
	static uint8_t x566 = 7U;
	int64_t x568 = -1LL;
	volatile int32_t t27 = -703331;

	t27 = (x565<<((x566-x567)%x568));

	if (t27 != 16776960) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x666 = -9463289;
	int64_t x667 = -2727784529643647558LL;
	int8_t x668 = -1;
	int32_t t28 = 1;

	t28 = (x665<<((x666-x667)%x668));

	if (t28 != 24895) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x681 = 1645933LLU;
	static int16_t x682 = -1;
	uint64_t x684 = 13LLU;

	t29 = (x681<<((x682-x683)%x684));

	if (t29 != 1645933LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x717 = INT64_MAX;
	int32_t x719 = -774796456;
	int8_t x720 = -1;
	int64_t t30 = INT64_MAX;

	t30 = (x717<<((x718-x719)%x720));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x774 = -196467470610874635LL;
	volatile int16_t x775 = -1;
	uint32_t t31 = UINT32_MAX;

	t31 = (x773<<((x774-x775)%x776));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x777 = 280695395991894LLU;
	uint8_t x779 = 1U;
	volatile int8_t x780 = 62;
	uint64_t t32 = 58294967817942LLU;

	t32 = (x777<<((x778-x779)%x780));

	if (t32 != 1122781583967576LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x785 = UINT64_MAX;
	int16_t x787 = -1;
	static volatile uint64_t t33 = UINT64_MAX;

	t33 = (x785<<((x786-x787)%x788));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x793 = 2709473768LLU;
	uint32_t x795 = UINT32_MAX;
	uint64_t t34 = 3067077131903LLU;

	t34 = (x793<<((x794-x795)%x796));

	if (t34 != 2709473768LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x845 = 187LLU;
	uint16_t x846 = 1308U;
	uint64_t x847 = 236651244973521323LLU;
	static uint8_t x848 = 28U;

	t35 = (x845<<((x846-x847)%x848));

	if (t35 != 392167424LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x893 = INT8_MAX;
	static int32_t x894 = INT32_MIN;
	volatile int32_t x895 = INT32_MIN;
	static uint16_t x896 = 175U;
	static int32_t t36 = 26591;

	t36 = (x893<<((x894-x895)%x896));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x897 = UINT64_MAX;
	int64_t x898 = INT64_MIN;
	static int32_t x899 = INT32_MIN;
	volatile int64_t x900 = 12LL;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x897<<((x898-x899)%x900));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x930 = INT8_MIN;
	int64_t x931 = -1LL;
	int32_t x932 = -1;
	volatile int32_t t38 = -533045759;

	t38 = (x929<<((x930-x931)%x932));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x941 = INT32_MAX;
	static volatile int8_t x942 = -1;
	uint64_t x944 = UINT64_MAX;
	int32_t t39 = INT32_MAX;

	t39 = (x941<<((x942-x943)%x944));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x961 = UINT8_MAX;
	static int64_t x962 = -1LL;
	volatile int8_t x963 = 19;
	int64_t x964 = -1LL;
	volatile int32_t t40 = -533;

	t40 = (x961<<((x962-x963)%x964));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x969 = 10940LLU;
	int16_t x972 = -17;
	volatile uint64_t t41 = 57LLU;

	t41 = (x969<<((x970-x971)%x972));

	if (t41 != 10940LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x989 = 737;
	static int64_t x991 = -10836LL;
	static volatile int16_t x992 = -1;

	t42 = (x989<<((x990-x991)%x992));

	if (t42 != 737) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x1002 = 22377U;
	uint16_t x1004 = 24U;
	volatile int32_t t43 = 1906083;

	t43 = (x1001<<((x1002-x1003)%x1004));

	if (t43 != 663552) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1049 = 7979LL;
	int32_t x1050 = -1;
	static int8_t x1051 = -1;
	int32_t x1052 = INT32_MIN;

	t44 = (x1049<<((x1050-x1051)%x1052));

	if (t44 != 7979LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1105 = 13614U;
	int32_t t45 = -53206;

	t45 = (x1105<<((x1106-x1107)%x1108));

	if (t45 != 13614) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1117 = UINT16_MAX;
	int64_t x1119 = INT64_MIN;
	int8_t x1120 = -1;
	int32_t t46 = -64437301;

	t46 = (x1117<<((x1118-x1119)%x1120));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1177 = 2424653523488400LL;
	int16_t x1178 = -1;
	int8_t x1179 = INT8_MAX;
	int32_t x1180 = -1;
	static int64_t t47 = 0LL;

	t47 = (x1177<<((x1178-x1179)%x1180));

	if (t47 != 2424653523488400LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1185 = 238013;
	uint64_t x1186 = UINT64_MAX;
	int32_t x1187 = -1;
	uint32_t x1188 = UINT32_MAX;
	volatile int32_t t48 = -14042315;

	t48 = (x1185<<((x1186-x1187)%x1188));

	if (t48 != 238013) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1222 = -1LL;
	int64_t x1223 = INT64_MIN;
	int8_t x1224 = -3;
	volatile int32_t t49 = -3324973;

	t49 = (x1221<<((x1222-x1223)%x1224));

	if (t49 != 176302) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1253 = 0U;
	volatile int32_t x1254 = INT32_MAX;
	uint8_t x1256 = 9U;
	int32_t t50 = 50636451;

	t50 = (x1253<<((x1254-x1255)%x1256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1257 = 22850LL;
	static int16_t x1259 = -1;
	int32_t x1260 = -1;
	volatile int64_t t51 = -6939802038655LL;

	t51 = (x1257<<((x1258-x1259)%x1260));

	if (t51 != 22850LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1273 = 149;
	volatile int8_t x1274 = INT8_MIN;
	static volatile int16_t x1275 = INT16_MIN;
	static volatile int8_t x1276 = INT8_MAX;
	volatile int32_t t52 = -2337352;

	t52 = (x1273<<((x1274-x1275)%x1276));

	if (t52 != 298) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1325 = 177140261;
	static uint64_t x1326 = 7283860847589937605LLU;
	int32_t x1327 = INT32_MAX;
	int8_t x1328 = 6;
	static int32_t t53 = 153;

	t53 = (x1325<<((x1326-x1327)%x1328));

	if (t53 != 708561044) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1329 = UINT32_MAX;
	int32_t x1330 = INT32_MIN;
	volatile int16_t x1331 = -1;
	int16_t x1332 = -1;
	uint32_t t54 = UINT32_MAX;

	t54 = (x1329<<((x1330-x1331)%x1332));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1373 = UINT64_MAX;
	int64_t x1374 = INT64_MIN;
	int8_t x1375 = INT8_MIN;
	uint8_t x1376 = UINT8_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x1373<<((x1374-x1375)%x1376));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1377 = 38U;
	int16_t x1379 = INT16_MIN;
	uint8_t x1380 = 30U;
	int32_t t56 = -729203;

	t56 = (x1377<<((x1378-x1379)%x1380));

	if (t56 != 637534208) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1385 = 49U;
	uint16_t x1386 = UINT16_MAX;
	volatile int32_t t57 = 62;

	t57 = (x1385<<((x1386-x1387)%x1388));

	if (t57 != 49) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1421 = INT32_MAX;
	int16_t x1422 = INT16_MIN;
	int8_t x1423 = INT8_MIN;
	int32_t x1424 = -1;
	static volatile int32_t t58 = INT32_MAX;

	t58 = (x1421<<((x1422-x1423)%x1424));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1429 = 2U;
	int32_t x1430 = INT32_MIN;
	static int16_t x1431 = INT16_MIN;
	static int32_t t59 = 1967;

	t59 = (x1429<<((x1430-x1431)%x1432));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1461 = 25U;
	volatile uint32_t x1462 = UINT32_MAX;
	uint32_t x1463 = UINT32_MAX;

	t60 = (x1461<<((x1462-x1463)%x1464));

	if (t60 != 25) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1497 = 135408910;
	volatile int8_t x1498 = 0;
	static int8_t x1499 = INT8_MAX;
	int32_t x1500 = -1;
	int32_t t61 = -482;

	t61 = (x1497<<((x1498-x1499)%x1500));

	if (t61 != 135408910) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1501 = INT64_MAX;
	int16_t x1503 = INT16_MIN;
	int64_t x1504 = INT64_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (x1501<<((x1502-x1503)%x1504));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1557 = 30;
	int16_t x1559 = -2;
	static int32_t x1560 = INT32_MIN;
	int32_t t63 = -19612515;

	t63 = (x1557<<((x1558-x1559)%x1560));

	if (t63 != 60) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1609 = 0U;
	uint64_t x1611 = UINT64_MAX;
	int64_t x1612 = -1LL;
	volatile int32_t t64 = -208217;

	t64 = (x1609<<((x1610-x1611)%x1612));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1621 = UINT64_MAX;
	int8_t x1623 = INT8_MAX;
	int16_t x1624 = 13;
	static uint64_t t65 = 36201449206LLU;

	t65 = (x1621<<((x1622-x1623)%x1624));

	if (t65 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1637 = 232277LLU;
	static uint64_t x1638 = UINT64_MAX;
	static volatile uint8_t x1639 = 1U;
	int32_t x1640 = INT32_MAX;
	uint64_t t66 = 44236LLU;

	t66 = (x1637<<((x1638-x1639)%x1640));

	if (t66 != 929108LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1657 = UINT32_MAX;
	uint32_t x1658 = UINT32_MAX;
	volatile uint8_t x1659 = 0U;
	uint8_t x1660 = UINT8_MAX;

	t67 = (x1657<<((x1658-x1659)%x1660));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1701 = 0LL;
	volatile int64_t x1702 = INT64_MIN;
	int8_t x1703 = INT8_MIN;
	uint8_t x1704 = 10U;
	int64_t t68 = -45LL;

	t68 = (x1701<<((x1702-x1703)%x1704));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x1794 = INT32_MAX;
	int16_t x1795 = INT16_MAX;
	int32_t x1796 = -1;
	int64_t t69 = INT64_MAX;

	t69 = (x1793<<((x1794-x1795)%x1796));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1909 = 20056U;
	static int32_t x1910 = INT32_MIN;
	int64_t x1911 = INT64_MIN;
	volatile int32_t t70 = 2847980;

	t70 = (x1909<<((x1910-x1911)%x1912));

	if (t70 != 20056) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1917 = 0U;
	int8_t x1918 = INT8_MAX;
	int16_t x1919 = -7;
	static int32_t x1920 = -6;
	volatile uint32_t t71 = 1U;

	t71 = (x1917<<((x1918-x1919)%x1920));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1933 = 126801U;
	volatile uint64_t x1934 = UINT64_MAX;
	static int32_t x1935 = -1;
	static volatile uint32_t t72 = 10U;

	t72 = (x1933<<((x1934-x1935)%x1936));

	if (t72 != 126801U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1978 = 10U;
	int8_t x1979 = INT8_MIN;
	volatile int16_t x1980 = 9;
	int32_t t73 = 0;

	t73 = (x1977<<((x1978-x1979)%x1980));

	if (t73 != 280) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1981 = 1722396744245LLU;
	int64_t x1982 = INT64_MIN;
	int16_t x1983 = -1;
	int8_t x1984 = INT8_MAX;
	uint64_t t74 = 7339352055034409339LLU;

	t74 = (x1981<<((x1982-x1983)%x1984));

	if (t74 != 1722396744245LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2013 = 134660;
	uint16_t x2014 = 7526U;
	int64_t x2015 = 1955346482472LL;
	volatile int8_t x2016 = -1;
	volatile int32_t t75 = 283896835;

	t75 = (x2013<<((x2014-x2015)%x2016));

	if (t75 != 134660) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2087 = INT64_MAX;
	volatile int32_t t76 = -8088;

	t76 = (x2085<<((x2086-x2087)%x2088));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2105 = 4U;
	static int32_t x2107 = 2805550;
	int8_t x2108 = -1;
	int32_t t77 = 411530968;

	t77 = (x2105<<((x2106-x2107)%x2108));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x2129 = 13U;
	int8_t x2131 = -1;
	int32_t x2132 = -1;

	t78 = (x2129<<((x2130-x2131)%x2132));

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2145 = INT16_MAX;
	static int8_t x2146 = INT8_MAX;
	int8_t x2147 = INT8_MIN;
	int32_t t79 = 41951137;

	t79 = (x2145<<((x2146-x2147)%x2148));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2213 = 107;
	int8_t x2214 = INT8_MIN;
	volatile int64_t x2215 = INT64_MIN;
	int32_t t80 = -51;

	t80 = (x2213<<((x2214-x2215)%x2216));

	if (t80 != 107) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2229 = UINT16_MAX;
	volatile int16_t x2231 = -1;
	int32_t x2232 = INT32_MIN;
	static int32_t t81 = 328479189;

	t81 = (x2229<<((x2230-x2231)%x2232));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2233 = 0U;
	uint8_t x2234 = 30U;
	static int16_t x2235 = INT16_MIN;
	int8_t x2236 = INT8_MIN;
	volatile int32_t t82 = -1;

	t82 = (x2233<<((x2234-x2235)%x2236));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2261 = INT16_MAX;
	int16_t x2262 = -1;
	static int32_t x2263 = INT32_MIN;
	int32_t x2264 = -1;

	t83 = (x2261<<((x2262-x2263)%x2264));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2266 = 314417609514625LL;
	static volatile int16_t x2267 = -1255;
	volatile uint32_t t84 = 195076U;

	t84 = (x2265<<((x2266-x2267)%x2268));

	if (t84 != 104503842U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2301 = 6U;

	t85 = (x2301<<((x2302-x2303)%x2304));

	if (t85 != 1536) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2433 = INT8_MAX;
	volatile uint16_t x2434 = 473U;
	int8_t x2435 = -1;
	uint16_t x2436 = 1U;
	int32_t t86 = -1940;

	t86 = (x2433<<((x2434-x2435)%x2436));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x2438 = 12508410984LLU;
	uint64_t x2439 = 816155784186354047LLU;
	static volatile int16_t x2440 = 1;
	static volatile int32_t t87 = 0;

	t87 = (x2437<<((x2438-x2439)%x2440));

	if (t87 != 120) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x2529 = 0U;
	int32_t x2530 = -1;
	int64_t x2531 = INT64_MIN;
	int32_t t88 = -1184;

	t88 = (x2529<<((x2530-x2531)%x2532));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2577 = 123678LLU;
	int8_t x2578 = 1;
	int64_t x2579 = -1LL;
	uint64_t x2580 = 38860864159415460LLU;
	static volatile uint64_t t89 = 3696063635388518354LLU;

	t89 = (x2577<<((x2578-x2579)%x2580));

	if (t89 != 494712LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x2593 = 6;
	int16_t x2594 = 279;
	uint8_t x2595 = 0U;
	volatile int8_t x2596 = INT8_MIN;
	int32_t t90 = 36431;

	t90 = (x2593<<((x2594-x2595)%x2596));

	if (t90 != 50331648) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2601 = UINT32_MAX;
	static int8_t x2602 = 2;
	volatile uint16_t x2603 = 0U;
	int64_t x2604 = INT64_MAX;
	static volatile uint32_t t91 = 2861U;

	t91 = (x2601<<((x2602-x2603)%x2604));

	if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2633 = INT16_MAX;
	int8_t x2634 = 4;
	uint8_t x2635 = UINT8_MAX;
	int32_t t92 = -942;

	t92 = (x2633<<((x2634-x2635)%x2636));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x2666 = -1LL;
	int8_t x2667 = -1;
	int8_t x2668 = 56;
	static int32_t t93 = -1337987;

	t93 = (x2665<<((x2666-x2667)%x2668));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x2721 = 6U;
	int8_t x2722 = -4;
	int16_t x2723 = INT16_MIN;
	int8_t x2724 = -1;
	int32_t t94 = 9953;

	t94 = (x2721<<((x2722-x2723)%x2724));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x2761 = 8372U;
	int64_t x2762 = INT64_MIN;
	volatile int64_t x2763 = INT64_MIN;
	static int8_t x2764 = INT8_MIN;
	volatile int32_t t95 = 2;

	t95 = (x2761<<((x2762-x2763)%x2764));

	if (t95 != 8372) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2805 = 177281682163217LLU;
	int8_t x2806 = -1;
	static int16_t x2807 = INT16_MIN;
	static uint8_t x2808 = 40U;
	volatile uint64_t t96 = 26658LLU;

	t96 = (x2805<<((x2806-x2807)%x2808));

	if (t96 != 22692055316891776LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2857 = 405629U;
	uint32_t x2859 = UINT32_MAX;
	volatile int8_t x2860 = INT8_MIN;
	static uint32_t t97 = 9085357U;

	t97 = (x2857<<((x2858-x2859)%x2860));

	if (t97 != 405629U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2870 = INT16_MIN;
	uint64_t x2872 = 31LLU;
	volatile int32_t t98 = 703129665;

	t98 = (x2869<<((x2870-x2871)%x2872));

	if (t98 != 508) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2897 = 28U;
	int16_t x2898 = INT16_MIN;
	int32_t x2899 = INT32_MIN;
	int16_t x2900 = INT16_MIN;
	volatile uint32_t t99 = 257109453U;

	t99 = (x2897<<((x2898-x2899)%x2900));

	if (t99 != 28U) { NG(); } else { ; }
	
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

