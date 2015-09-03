#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x56 = 4U;
static int8_t x195 = INT8_MIN;
uint32_t x234 = UINT32_MAX;
volatile uint32_t t5 = 85462087U;
int16_t x274 = INT16_MIN;
uint32_t x276 = 50U;
static uint64_t x350 = 1400517LLU;
volatile int16_t x373 = INT16_MAX;
int32_t t9 = -58342424;
int64_t x397 = INT64_MAX;
volatile int64_t x398 = 16855526890660518LL;
int16_t x399 = INT16_MIN;
volatile int64_t x466 = INT64_MAX;
int8_t x503 = INT8_MIN;
static uint64_t x504 = 0LLU;
volatile int16_t x510 = -1;
static int16_t x659 = INT16_MAX;
uint8_t x815 = 31U;
int32_t t20 = 0;
static int32_t x913 = INT32_MIN;
volatile uint8_t x938 = UINT8_MAX;
uint16_t x959 = 2730U;
volatile uint32_t t25 = 5U;
int32_t x973 = INT32_MAX;
int8_t x975 = INT8_MIN;
uint32_t t28 = 224617U;
int16_t x1117 = INT16_MIN;
uint16_t x1246 = UINT16_MAX;
static volatile uint32_t t34 = 200322685U;
volatile uint64_t x1530 = 1796802754689265962LLU;
int8_t x1532 = 1;
volatile uint64_t t35 = 3668089006482630LLU;
uint8_t x1602 = UINT8_MAX;
volatile uint8_t x1604 = 2U;
uint32_t x1746 = 825154439U;
static int16_t x1748 = 9;
static int16_t x1901 = INT16_MAX;
int8_t x1902 = INT8_MAX;
static uint16_t x1903 = UINT16_MAX;
int16_t x1904 = 0;
int32_t x1954 = -197208;
int64_t t42 = -1328LL;
static volatile uint8_t x2145 = UINT8_MAX;
volatile int32_t t43 = -111;
int32_t x2162 = -180511292;
volatile uint64_t x2191 = 4058668LLU;
static uint64_t x2223 = 1045124136LLU;
uint16_t x2224 = 27U;
volatile uint64_t t47 = 33107088933139312LLU;
uint16_t x2226 = 32739U;
volatile uint32_t x2228 = 5U;
volatile uint64_t x2322 = 6152007605LLU;
int16_t x2323 = -1;
volatile uint64_t t49 = 51414979471998LLU;
int16_t x2445 = INT16_MAX;
volatile uint32_t t52 = 7051826U;
int64_t x2590 = INT64_MAX;
static int64_t t53 = -4547571974625686731LL;
int16_t x2642 = 20;
int8_t x2652 = 29;
static volatile int32_t t55 = 0;
uint16_t x2697 = UINT16_MAX;
uint32_t t56 = 3U;
uint16_t x2705 = 7299U;
volatile int16_t x2707 = -1;
static uint32_t x2713 = UINT32_MAX;
static uint32_t x2715 = 907721789U;
volatile int8_t x2718 = INT8_MIN;
volatile uint8_t x2719 = 6U;
static int32_t x2858 = INT32_MAX;
volatile int64_t t61 = 6082LL;
static uint8_t x3005 = UINT8_MAX;
static int64_t x3006 = -1LL;
uint16_t x3156 = 5U;
static int8_t x3193 = INT8_MIN;
uint8_t x3196 = 13U;
uint64_t t71 = 952249049LLU;
uint32_t t72 = 7476U;
static int8_t x3382 = -1;
volatile uint16_t x3384 = 2U;
static int32_t t75 = -101268;
static int64_t x3482 = -384327691LL;
static volatile uint64_t t77 = 37003488255777LLU;
uint64_t t79 = 31438528147490LLU;
int64_t x3693 = -4962507538524449LL;
uint64_t t81 = 6909857738529281672LLU;
int64_t x3725 = INT64_MAX;
static uint32_t x3729 = 936214U;
int32_t x3746 = -1;
static int64_t x3849 = INT64_MAX;
volatile uint64_t t85 = 295522354843595843LLU;
int32_t t88 = 102906;
int32_t x4034 = -5;
int8_t x4104 = 1;
uint32_t x4488 = 1U;
volatile int32_t x4615 = -3441032;
uint16_t x4878 = UINT16_MAX;


void f0(void) {
	int8_t x41 = INT8_MIN;
	volatile uint32_t x42 = 3612U;
	static uint16_t x43 = UINT16_MAX;
	int8_t x44 = 1;
	uint32_t t0 = 214904U;

	t0 = ((x41%(x42-x43))>>x44);

	if (t0 != 30897U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x53 = 9818029339664LLU;
	volatile int64_t x54 = -1124432793556138986LL;
	uint16_t x55 = 0U;
	uint64_t t1 = 798326915441LLU;

	t1 = ((x53%(x54-x55))>>x56);

	if (t1 != 613626833729LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = 19311U;
	static int32_t x67 = 23364921;
	int16_t x68 = 23;
	volatile uint32_t t2 = 53002664U;

	t2 = ((x65%(x66-x67))>>x68);

	if (t2 != 2U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x193 = 61799629U;
	int64_t x194 = -20197131402LL;
	volatile uint64_t x196 = 13LLU;
	volatile int64_t t3 = -897741033127469LL;

	t3 = ((x193%(x194-x195))>>x196);

	if (t3 != 7543LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x233 = -1;
	static uint16_t x235 = 24U;
	uint64_t x236 = 15LLU;
	volatile uint32_t t4 = 421308811U;

	t4 = ((x233%(x234-x235))>>x236);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	static uint16_t x264 = 26U;

	t5 = ((x261%(x262-x263))>>x264);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x273 = INT64_MIN;
	static uint8_t x275 = 0U;
	static int64_t t6 = 39684228158514LL;

	t6 = ((x273%(x274-x275))>>x276);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x277 = INT64_MAX;
	volatile uint16_t x278 = 659U;
	uint64_t x279 = UINT64_MAX;
	uint32_t x280 = 24U;
	volatile uint64_t t7 = 184225LLU;

	t7 = ((x277%(x278-x279))>>x280);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x349 = INT8_MIN;
	static int16_t x351 = -1;
	static volatile int64_t x352 = 3LL;
	uint64_t t8 = 14LLU;

	t8 = ((x349%(x350-x351))>>x352);

	if (t8 != 88196LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x374 = 3377;
	int32_t x375 = 2;
	static uint8_t x376 = 21U;

	t9 = ((x373%(x374-x375))>>x376);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x400 = 2U;
	int64_t t10 = -6707LL;

	t10 = ((x397%(x398-x399))>>x400);

	if (t10 != 849706911387091LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x405 = 1U;
	volatile int64_t x406 = -2630190LL;
	static uint16_t x407 = 3U;
	uint32_t x408 = 60U;
	volatile int64_t t11 = 50657654217LL;

	t11 = ((x405%(x406-x407))>>x408);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x465 = UINT32_MAX;
	volatile uint8_t x467 = 1U;
	uint64_t x468 = 15LLU;
	volatile int64_t t12 = -4158268203LL;

	t12 = ((x465%(x466-x467))>>x468);

	if (t12 != 131071LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x481 = UINT8_MAX;
	uint64_t x482 = UINT64_MAX;
	static int32_t x483 = INT32_MAX;
	volatile uint16_t x484 = 2U;
	uint64_t t13 = 3357LLU;

	t13 = ((x481%(x482-x483))>>x484);

	if (t13 != 63LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x501 = 7U;
	volatile uint16_t x502 = UINT16_MAX;
	static volatile int32_t t14 = 201;

	t14 = ((x501%(x502-x503))>>x504);

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x509 = INT64_MIN;
	int8_t x511 = 0;
	int32_t x512 = 2;
	static int64_t t15 = 904LL;

	t15 = ((x509%(x510-x511))>>x512);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x557 = 1;
	int16_t x558 = INT16_MIN;
	uint16_t x559 = 4756U;
	static volatile uint16_t x560 = 1U;
	int32_t t16 = 1029566256;

	t16 = ((x557%(x558-x559))>>x560);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x645 = 60286;
	uint16_t x646 = 1820U;
	int8_t x647 = -29;
	volatile uint16_t x648 = 0U;
	static volatile int32_t t17 = -2589;

	t17 = ((x645%(x646-x647))>>x648);

	if (t17 != 1118) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x657 = 117LLU;
	uint32_t x658 = 12770515U;
	int32_t x660 = 8;
	volatile uint64_t t18 = 27491740499LLU;

	t18 = ((x657%(x658-x659))>>x660);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x669 = 216;
	static int32_t x670 = 82543364;
	volatile uint64_t x671 = UINT64_MAX;
	uint16_t x672 = 7U;
	static uint64_t t19 = 1536028499LLU;

	t19 = ((x669%(x670-x671))>>x672);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x813 = 16234;
	int16_t x814 = -3;
	int8_t x816 = 3;

	t20 = ((x813%(x814-x815))>>x816);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x877 = 8U;
	static int32_t x878 = INT32_MAX;
	int16_t x879 = INT16_MAX;
	volatile int8_t x880 = 12;
	volatile int32_t t21 = 109804295;

	t21 = ((x877%(x878-x879))>>x880);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x893 = UINT32_MAX;
	static int8_t x894 = INT8_MAX;
	volatile int16_t x895 = INT16_MAX;
	int8_t x896 = 1;
	volatile uint32_t t22 = 100105754U;

	t22 = ((x893%(x894-x895))>>x896);

	if (t22 != 16319U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x914 = -1;
	static uint64_t x915 = 47498937LLU;
	volatile uint8_t x916 = 0U;
	volatile uint64_t t23 = 23907LLU;

	t23 = ((x913%(x914-x915))>>x916);

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x937 = UINT32_MAX;
	int16_t x939 = INT16_MIN;
	uint8_t x940 = 0U;
	uint32_t t24 = 933226U;

	t24 = ((x937%(x938-x939))>>x940);

	if (t24 != 28938U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x957 = UINT32_MAX;
	volatile int16_t x958 = -1;
	int64_t x960 = 20LL;

	t25 = ((x957%(x958-x959))>>x960);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x974 = INT64_MIN;
	static uint16_t x976 = 3U;
	static volatile int64_t t26 = 389804721LL;

	t26 = ((x973%(x974-x975))>>x976);

	if (t26 != 268435455LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1005 = -17;
	uint64_t x1006 = 453547624LLU;
	static uint16_t x1007 = 654U;
	int8_t x1008 = 1;
	uint64_t t27 = 3LLU;

	t27 = ((x1005%(x1006-x1007))>>x1008);

	if (t27 != 104038654LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1013 = 479U;
	int32_t x1014 = -2;
	volatile uint16_t x1015 = UINT16_MAX;
	uint8_t x1016 = 1U;

	t28 = ((x1013%(x1014-x1015))>>x1016);

	if (t28 != 239U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x1017 = INT32_MIN;
	uint64_t x1018 = 354775LLU;
	static volatile uint16_t x1019 = 813U;
	static int16_t x1020 = 3;
	volatile uint64_t t29 = 29017287447288LLU;

	t29 = ((x1017%(x1018-x1019))>>x1020);

	if (t29 != 31318LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1065 = 110U;
	static int16_t x1066 = INT16_MIN;
	volatile int32_t x1067 = -11673;
	int16_t x1068 = 11;
	static uint32_t t30 = 47954U;

	t30 = ((x1065%(x1066-x1067))>>x1068);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1118 = 811541359LLU;
	int32_t x1119 = -199650;
	int16_t x1120 = 1;
	static uint64_t t31 = 1378972171381LLU;

	t31 = ((x1117%(x1118-x1119))>>x1120);

	if (t31 != 106495952LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1245 = 1U;
	uint8_t x1247 = 125U;
	int16_t x1248 = 0;
	int32_t t32 = -103575;

	t32 = ((x1245%(x1246-x1247))>>x1248);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1297 = INT8_MIN;
	volatile uint64_t x1298 = UINT64_MAX;
	static uint64_t x1299 = 158070184641787301LLU;
	int16_t x1300 = 59;
	static volatile uint64_t t33 = 30536379253873LLU;

	t33 = ((x1297%(x1298-x1299))>>x1300);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1465 = INT8_MIN;
	static volatile int32_t x1466 = INT32_MAX;
	volatile uint32_t x1467 = 97U;
	uint32_t x1468 = 2U;

	t34 = ((x1465%(x1466-x1467))>>x1468);

	if (t34 != 17U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1529 = -3010092036LL;
	static volatile int16_t x1531 = INT16_MIN;

	t35 = ((x1529%(x1530-x1531))>>x1532);

	if (t35 != 239358261903236140LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1601 = INT32_MAX;
	int16_t x1603 = INT16_MAX;
	volatile int32_t t36 = -1;

	t36 = ((x1601%(x1602-x1603))>>x1604);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1745 = INT16_MIN;
	int16_t x1747 = INT16_MAX;
	volatile uint32_t t37 = 1U;

	t37 = ((x1745%(x1746-x1747))>>x1748);

	if (t37 != 330715U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t t38 = -6493;

	t38 = ((x1901%(x1902-x1903))>>x1904);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1953 = INT8_MIN;
	uint64_t x1955 = 57LLU;
	volatile uint64_t x1956 = 12LLU;
	static volatile uint64_t t39 = 103171556LLU;

	t39 = ((x1953%(x1954-x1955))>>x1956);

	if (t39 != 48LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2013 = 15U;
	int64_t x2014 = 500LL;
	int16_t x2015 = INT16_MIN;
	uint8_t x2016 = 1U;
	static int64_t t40 = 63384567428295LL;

	t40 = ((x2013%(x2014-x2015))>>x2016);

	if (t40 != 7LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2073 = UINT16_MAX;
	volatile int16_t x2074 = INT16_MAX;
	static uint32_t x2075 = UINT32_MAX;
	volatile int32_t x2076 = 0;
	uint32_t t41 = 37267U;

	t41 = ((x2073%(x2074-x2075))>>x2076);

	if (t41 != 32767U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2113 = 12877928941LL;
	int64_t x2114 = -4LL;
	int32_t x2115 = INT32_MIN;
	static int64_t x2116 = 1LL;

	t42 = ((x2113%(x2114-x2115))>>x2116);

	if (t42 != 1070255360LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2146 = INT8_MIN;
	volatile int16_t x2147 = INT16_MIN;
	volatile uint64_t x2148 = 3LLU;

	t43 = ((x2145%(x2146-x2147))>>x2148);

	if (t43 != 31) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2161 = INT32_MAX;
	uint64_t x2163 = 103017LLU;
	static uint16_t x2164 = 1U;
	uint64_t t44 = 1371209535LLU;

	t44 = ((x2161%(x2162-x2163))>>x2164);

	if (t44 != 1073741823LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2189 = UINT8_MAX;
	volatile int32_t x2190 = -1;
	static int64_t x2192 = 1LL;
	uint64_t t45 = 4568089654352436LLU;

	t45 = ((x2189%(x2190-x2191))>>x2192);

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2217 = INT8_MAX;
	int64_t x2218 = 1LL;
	int16_t x2219 = INT16_MAX;
	uint8_t x2220 = 11U;
	volatile int64_t t46 = -2623747930LL;

	t46 = ((x2217%(x2218-x2219))>>x2220);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2221 = INT16_MIN;
	int16_t x2222 = -168;

	t47 = ((x2221%(x2222-x2223))>>x2224);

	if (t47 != 7LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2225 = UINT16_MAX;
	int64_t x2227 = INT64_MAX;
	static int64_t t48 = -120564854121LL;

	t48 = ((x2225%(x2226-x2227))>>x2228);

	if (t48 != 2047LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x2321 = -43033707149161LL;
	static volatile int16_t x2324 = 1;

	t49 = ((x2321%(x2322-x2323))>>x2324);

	if (t49 != 1155666553LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2446 = INT16_MIN;
	uint64_t x2447 = 1179LLU;
	int32_t x2448 = 13;
	volatile uint64_t t50 = 418574920977183LLU;

	t50 = ((x2445%(x2446-x2447))>>x2448);

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2449 = 5U;
	int16_t x2450 = -1;
	static int16_t x2451 = 13872;
	int8_t x2452 = 10;
	int32_t t51 = -1580546;

	t51 = ((x2449%(x2450-x2451))>>x2452);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2481 = 3U;
	int8_t x2482 = INT8_MIN;
	uint32_t x2483 = UINT32_MAX;
	volatile uint16_t x2484 = 3U;

	t52 = ((x2481%(x2482-x2483))>>x2484);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2589 = INT8_MAX;
	uint16_t x2591 = 1552U;
	int16_t x2592 = 1;

	t53 = ((x2589%(x2590-x2591))>>x2592);

	if (t53 != 63LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2641 = INT16_MAX;
	volatile int64_t x2643 = -129658477179LL;
	uint32_t x2644 = 2U;
	int64_t t54 = -149291553106491LL;

	t54 = ((x2641%(x2642-x2643))>>x2644);

	if (t54 != 8191LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2649 = 3U;
	uint16_t x2650 = 184U;
	int8_t x2651 = 0;

	t55 = ((x2649%(x2650-x2651))>>x2652);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2698 = 0U;
	uint32_t x2699 = 397245U;
	uint32_t x2700 = 1U;

	t56 = ((x2697%(x2698-x2699))>>x2700);

	if (t56 != 32767U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2706 = INT8_MIN;
	int8_t x2708 = 1;
	volatile int32_t t57 = -828576;

	t57 = ((x2705%(x2706-x2707))>>x2708);

	if (t57 != 30) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2714 = -13012LL;
	uint16_t x2716 = 1U;
	int64_t t58 = 48510518048058LL;

	t58 = ((x2713%(x2714-x2715))>>x2716);

	if (t58 != 332014045LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2717 = 6251249251425LL;
	uint8_t x2720 = 1U;
	volatile int64_t t59 = -717286622182LL;

	t59 = ((x2717%(x2718-x2719))>>x2720);

	if (t59 != 40LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2725 = 0;
	static int16_t x2726 = INT16_MIN;
	int16_t x2727 = INT16_MAX;
	uint16_t x2728 = 0U;
	int32_t t60 = -3359608;

	t60 = ((x2725%(x2726-x2727))>>x2728);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2857 = INT16_MAX;
	volatile int64_t x2859 = -237048060LL;
	int8_t x2860 = 12;

	t61 = ((x2857%(x2858-x2859))>>x2860);

	if (t61 != 7LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2889 = 6U;
	volatile int8_t x2890 = 14;
	volatile uint8_t x2891 = 41U;
	int8_t x2892 = 3;
	static int32_t t62 = -35;

	t62 = ((x2889%(x2890-x2891))>>x2892);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2957 = UINT8_MAX;
	int16_t x2958 = -1;
	uint16_t x2959 = UINT16_MAX;
	int8_t x2960 = 0;
	int32_t t63 = 185310;

	t63 = ((x2957%(x2958-x2959))>>x2960);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3007 = 61U;
	int8_t x3008 = 6;
	int64_t t64 = 77678774883217LL;

	t64 = ((x3005%(x3006-x3007))>>x3008);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3093 = 0;
	static uint8_t x3094 = UINT8_MAX;
	int8_t x3095 = 3;
	static int64_t x3096 = 15LL;
	volatile int32_t t65 = 2977843;

	t65 = ((x3093%(x3094-x3095))>>x3096);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x3153 = UINT64_MAX;
	uint32_t x3154 = 6499U;
	int16_t x3155 = INT16_MAX;
	uint64_t t66 = 0LLU;

	t66 = ((x3153%(x3154-x3155))>>x3156);

	if (t66 != 21562744LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3189 = INT64_MIN;
	uint64_t x3190 = 191LLU;
	volatile int64_t x3191 = INT64_MIN;
	static volatile uint8_t x3192 = 1U;
	volatile uint64_t t67 = 504635634252483LLU;

	t67 = ((x3189%(x3190-x3191))>>x3192);

	if (t67 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x3194 = 7602103LLU;
	int8_t x3195 = INT8_MIN;
	volatile uint64_t t68 = 11529LLU;

	t68 = ((x3193%(x3194-x3195))>>x3196);

	if (t68 != 457LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x3233 = 17;
	int16_t x3234 = INT16_MAX;
	volatile int8_t x3235 = -1;
	uint8_t x3236 = 8U;
	static volatile int32_t t69 = 411549589;

	t69 = ((x3233%(x3234-x3235))>>x3236);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3285 = INT32_MAX;
	static volatile int8_t x3286 = 3;
	int8_t x3287 = INT8_MIN;
	static uint16_t x3288 = 8U;
	static int32_t t70 = -957858523;

	t70 = ((x3285%(x3286-x3287))>>x3288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x3297 = 24U;
	volatile int16_t x3298 = -1;
	uint64_t x3299 = 6030866741225667LLU;
	static int8_t x3300 = 1;

	t71 = ((x3297%(x3298-x3299))>>x3300);

	if (t71 != 12LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3313 = 116U;
	int8_t x3314 = INT8_MAX;
	int16_t x3315 = -1;
	int32_t x3316 = 6;

	t72 = ((x3313%(x3314-x3315))>>x3316);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3317 = -38;
	static uint16_t x3318 = 166U;
	uint32_t x3319 = UINT32_MAX;
	static volatile uint64_t x3320 = 1LLU;
	uint32_t t73 = 14285U;

	t73 = ((x3317%(x3318-x3319))>>x3320);

	if (t73 != 68U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3381 = UINT32_MAX;
	volatile int16_t x3383 = INT16_MIN;
	volatile uint32_t t74 = 0U;

	t74 = ((x3381%(x3382-x3383))>>x3384);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x3413 = 5427U;
	int8_t x3414 = INT8_MIN;
	uint16_t x3415 = 720U;
	static int16_t x3416 = 29;

	t75 = ((x3413%(x3414-x3415))>>x3416);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3453 = 1U;
	int8_t x3454 = INT8_MAX;
	int8_t x3455 = 0;
	int64_t x3456 = 0LL;
	volatile int32_t t76 = -458577;

	t76 = ((x3453%(x3454-x3455))>>x3456);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3481 = UINT64_MAX;
	static int8_t x3483 = 14;
	volatile uint32_t x3484 = 27U;

	t77 = ((x3481%(x3482-x3483))>>x3484);

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3513 = -9;
	int32_t x3514 = 47470;
	uint64_t x3515 = 36LLU;
	uint16_t x3516 = 61U;
	volatile uint64_t t78 = 407LLU;

	t78 = ((x3513%(x3514-x3515))>>x3516);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3629 = -4;
	volatile uint64_t x3630 = 13LLU;
	int16_t x3631 = INT16_MAX;
	volatile int8_t x3632 = 49;

	t79 = ((x3629%(x3630-x3631))>>x3632);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3685 = 11LLU;
	volatile int16_t x3686 = -260;
	int64_t x3687 = -1LL;
	uint16_t x3688 = 0U;
	volatile uint64_t t80 = 3LLU;

	t80 = ((x3685%(x3686-x3687))>>x3688);

	if (t80 != 11LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3694 = 0U;
	uint64_t x3695 = 58248LLU;
	uint8_t x3696 = 50U;

	t81 = ((x3693%(x3694-x3695))>>x3696);

	if (t81 != 16379LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x3726 = 62U;
	volatile int16_t x3727 = INT16_MAX;
	int8_t x3728 = 0;
	volatile int64_t t82 = 1826112LL;

	t82 = ((x3725%(x3726-x3727))>>x3728);

	if (t82 != 11322LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3730 = -1;
	uint8_t x3731 = 0U;
	static uint32_t x3732 = 0U;
	volatile uint32_t t83 = 13699U;

	t83 = ((x3729%(x3730-x3731))>>x3732);

	if (t83 != 936214U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3745 = 1;
	int64_t x3747 = INT64_MIN;
	uint8_t x3748 = 7U;
	static volatile int64_t t84 = 2875440625LL;

	t84 = ((x3745%(x3746-x3747))>>x3748);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3850 = 26U;
	static uint64_t x3851 = 2045995584LLU;
	uint16_t x3852 = 4U;

	t85 = ((x3849%(x3850-x3851))>>x3852);

	if (t85 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3869 = INT8_MAX;
	uint16_t x3870 = UINT16_MAX;
	uint64_t x3871 = 315LLU;
	static volatile uint16_t x3872 = 44U;
	volatile uint64_t t86 = 333LLU;

	t86 = ((x3869%(x3870-x3871))>>x3872);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x3941 = 16U;
	volatile uint64_t x3942 = UINT64_MAX;
	static volatile uint16_t x3943 = 869U;
	uint8_t x3944 = 6U;
	volatile uint64_t t87 = 19LLU;

	t87 = ((x3941%(x3942-x3943))>>x3944);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x3985 = INT16_MAX;
	int32_t x3986 = INT32_MIN;
	int16_t x3987 = INT16_MIN;
	volatile uint16_t x3988 = 4U;

	t88 = ((x3985%(x3986-x3987))>>x3988);

	if (t88 != 2047) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4021 = -1;
	uint8_t x4022 = 2U;
	static volatile uint64_t x4023 = UINT64_MAX;
	int64_t x4024 = 1LL;
	static volatile uint64_t t89 = 275145LLU;

	t89 = ((x4021%(x4022-x4023))>>x4024);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x4033 = 0U;
	static uint32_t x4035 = UINT32_MAX;
	int8_t x4036 = 0;
	volatile uint32_t t90 = 897537339U;

	t90 = ((x4033%(x4034-x4035))>>x4036);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4101 = 125413859LLU;
	uint64_t x4102 = 5809270218175631839LLU;
	static int16_t x4103 = -1;
	uint64_t t91 = 8673555495904997390LLU;

	t91 = ((x4101%(x4102-x4103))>>x4104);

	if (t91 != 62706929LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4197 = INT32_MIN;
	uint64_t x4198 = UINT64_MAX;
	uint16_t x4199 = 81U;
	int16_t x4200 = 25;
	volatile uint64_t t92 = 1LLU;

	t92 = ((x4197%(x4198-x4199))>>x4200);

	if (t92 != 549755813824LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x4357 = INT16_MIN;
	int32_t x4358 = -1;
	int8_t x4359 = INT8_MAX;
	uint8_t x4360 = 2U;
	static volatile int32_t t93 = -3386630;

	t93 = ((x4357%(x4358-x4359))>>x4360);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x4445 = 410U;
	int16_t x4446 = INT16_MIN;
	uint64_t x4447 = 29387748930463874LLU;
	static volatile uint32_t x4448 = 15U;
	uint64_t t94 = 28144195465951LLU;

	t94 = ((x4445%(x4446-x4447))>>x4448);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4485 = 6780305378116LLU;
	volatile int32_t x4486 = INT32_MIN;
	static int16_t x4487 = INT16_MIN;
	uint64_t t95 = 14534566LLU;

	t95 = ((x4485%(x4486-x4487))>>x4488);

	if (t95 != 3390152689058LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4513 = 116;
	static int64_t x4514 = 6002713715167036LL;
	volatile int64_t x4515 = -1LL;
	uint16_t x4516 = 44U;
	int64_t t96 = 264064454895LL;

	t96 = ((x4513%(x4514-x4515))>>x4516);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x4613 = 9U;
	uint64_t x4614 = UINT64_MAX;
	int8_t x4616 = 20;
	volatile uint64_t t97 = 7300LLU;

	t97 = ((x4613%(x4614-x4615))>>x4616);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4657 = INT32_MAX;
	int64_t x4658 = INT64_MIN;
	static int8_t x4659 = -1;
	static int8_t x4660 = 3;
	int64_t t98 = 359922215837937LL;

	t98 = ((x4657%(x4658-x4659))>>x4660);

	if (t98 != 268435455LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4877 = INT32_MAX;
	uint64_t x4879 = 2120409453850832LLU;
	int8_t x4880 = 7;
	uint64_t t99 = 2256661105241LLU;

	t99 = ((x4877%(x4878-x4879))>>x4880);

	if (t99 != 16777215LLU) { NG(); } else { ; }
	
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

