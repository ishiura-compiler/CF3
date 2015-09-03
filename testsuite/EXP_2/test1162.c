#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x188 = INT32_MIN;
int8_t x207 = 11;
volatile uint64_t t5 = 19199LLU;
int64_t x348 = 16490621154230LL;
int64_t t6 = -14200651LL;
static uint64_t x413 = 440626957312674759LLU;
uint64_t t8 = 69583852267182948LLU;
uint16_t x545 = UINT16_MAX;
volatile int32_t x584 = INT32_MIN;
uint32_t x917 = 1U;
static uint16_t x920 = 211U;
int32_t x925 = -1;
int32_t x928 = -3;
uint64_t x965 = 493065387087810LLU;
uint32_t x983 = 0U;
int16_t x991 = 23;
uint16_t x1015 = 9U;
uint64_t t18 = 290127035LLU;
volatile uint16_t x1017 = 77U;
volatile int64_t t20 = -58108160605LL;
uint16_t x1063 = 26U;
int32_t t21 = -7808;
static uint64_t t23 = 64764859573298534LLU;
int16_t x1277 = INT16_MIN;
volatile int16_t x1286 = INT16_MAX;
int64_t x1317 = INT64_MAX;
static int16_t x1327 = 23;
static int64_t x1380 = INT64_MIN;
int8_t x1518 = 11;
int32_t x1521 = INT32_MIN;
uint16_t x1522 = UINT16_MAX;
volatile uint64_t x1608 = 783910358722LLU;
uint32_t x1854 = 363943U;
static int32_t x1856 = INT32_MAX;
static uint16_t x1872 = UINT16_MAX;
uint8_t x1955 = 5U;
volatile int8_t x1956 = INT8_MIN;
int16_t x2199 = 2;
volatile int64_t x2205 = INT64_MIN;
int64_t t44 = 32668999LL;
int16_t x2368 = -1;
volatile int16_t x2607 = 8;
int64_t x2808 = INT64_MIN;
uint8_t x3079 = 29U;
int32_t x3080 = INT32_MIN;
int64_t t60 = 69LL;
uint16_t x3423 = 2U;
uint64_t x3456 = 13653773651LLU;
static uint8_t x3572 = 2U;
int8_t x3673 = -6;
static int8_t x3901 = -1;
int8_t x3904 = INT8_MIN;
uint16_t x3953 = UINT16_MAX;
uint8_t x4117 = 115U;
static int8_t x4123 = 1;
static volatile uint64_t t71 = 7LLU;
uint64_t x4198 = 12LLU;
int64_t x4225 = -1LL;
uint8_t x4227 = 6U;
volatile uint8_t x4313 = UINT8_MAX;
volatile int32_t x4316 = INT32_MAX;
static volatile int16_t x4369 = INT16_MIN;
volatile uint32_t x4380 = 120U;
volatile int64_t t82 = -6580635351LL;
int64_t t83 = 376LL;
static uint8_t x4456 = UINT8_MAX;
volatile uint64_t t86 = 138788606155516LLU;
volatile int64_t x4538 = INT64_MAX;
uint8_t x4559 = 19U;
uint64_t x4834 = 401970709738672986LLU;
uint8_t x4949 = 10U;
volatile uint64_t x5004 = 262766591453378697LLU;
int8_t x5085 = INT8_MAX;
int32_t x5094 = INT32_MAX;
volatile uint16_t x5095 = 3U;
int32_t x5100 = INT32_MAX;
volatile uint64_t x5288 = UINT64_MAX;
int8_t x5296 = -1;
int64_t t99 = -6350LL;


void f0(void) {
	int32_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = 2;
	int32_t x88 = 14720678;
	static int32_t t0 = 92131;

	t0 = ((x85|(x86>>x87))%x88);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x97 = 12U;
	uint64_t x98 = 28623LLU;
	static volatile uint8_t x99 = 3U;
	int16_t x100 = -1;
	volatile uint64_t t1 = 4939008903868136171LLU;

	t1 = ((x97|(x98>>x99))%x100);

	if (t1 != 3581LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x165 = 1314885495LLU;
	int16_t x166 = 346;
	static uint16_t x167 = 0U;
	uint8_t x168 = 40U;
	uint64_t t2 = 2950945572550LLU;

	t2 = ((x165|(x166>>x167))%x168);

	if (t2 != 23LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint8_t x186 = 3U;
	uint8_t x187 = 1U;
	static volatile uint32_t t3 = 2U;

	t3 = ((x185|(x186>>x187))%x188);

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint64_t x206 = 365504144LLU;
	int8_t x208 = 25;
	static volatile uint64_t t4 = 8LLU;

	t4 = ((x205|(x206>>x207))%x208);

	if (t4 != 7LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x249 = INT64_MIN;
	static uint64_t x250 = 12474992325LLU;
	uint8_t x251 = 12U;
	uint64_t x252 = 20197816122LLU;

	t5 = ((x249|(x250>>x251))%x252);

	if (t5 != 19994164170LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x345 = INT64_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile uint8_t x347 = 0U;

	t6 = ((x345|(x346>>x347))%x348);

	if (t6 != 2719082394507LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x405 = 14200U;
	uint32_t x406 = 428U;
	uint32_t x407 = 3U;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t7 = 74132LLU;

	t7 = ((x405|(x406>>x407))%x408);

	if (t7 != 14205LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x414 = 116041683234313096LLU;
	uint64_t x415 = 30LLU;
	volatile uint64_t x416 = 4994LLU;

	t8 = ((x413|(x414>>x415))%x416);

	if (t8 != 1487LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x485 = 8U;
	volatile uint32_t x486 = 2612955U;
	uint8_t x487 = 5U;
	uint16_t x488 = UINT16_MAX;
	uint32_t t9 = 1897072566U;

	t9 = ((x485|(x486>>x487))%x488);

	if (t9 != 16127U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x546 = INT8_MAX;
	volatile int8_t x547 = 1;
	volatile int16_t x548 = -824;
	volatile int32_t t10 = -11817766;

	t10 = ((x545|(x546>>x547))%x548);

	if (t10 != 439) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x581 = INT16_MIN;
	volatile uint64_t x582 = UINT64_MAX;
	int8_t x583 = 4;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x581|(x582>>x583))%x584);

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x673 = 49U;
	uint64_t x674 = 6526783485548LLU;
	volatile int16_t x675 = 0;
	volatile int64_t x676 = -1137896212151541542LL;
	uint64_t t12 = 171909512123927LLU;

	t12 = ((x673|(x674>>x675))%x676);

	if (t12 != 6526783485565LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x918 = 2U;
	int32_t x919 = 0;
	static volatile uint32_t t13 = 837U;

	t13 = ((x917|(x918>>x919))%x920);

	if (t13 != 3U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x926 = UINT32_MAX;
	int8_t x927 = 11;
	uint32_t t14 = 391U;

	t14 = ((x925|(x926>>x927))%x928);

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x966 = 440;
	volatile uint8_t x967 = 2U;
	int16_t x968 = INT16_MIN;
	volatile uint64_t t15 = 15431LLU;

	t15 = ((x965|(x966>>x967))%x968);

	if (t15 != 493065387087854LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x981 = -1;
	static uint32_t x982 = 46160U;
	int8_t x984 = -1;
	static uint32_t t16 = 130659U;

	t16 = ((x981|(x982>>x983))%x984);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x989 = 49U;
	int64_t x990 = INT64_MAX;
	int32_t x992 = -1;
	static volatile int64_t t17 = -26685LL;

	t17 = ((x989|(x990>>x991))%x992);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x1013 = -6176533702229LL;
	uint64_t x1014 = UINT64_MAX;
	static int32_t x1016 = INT32_MIN;

	t18 = ((x1013|(x1014>>x1015))%x1016);

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1018 = UINT16_MAX;
	static uint64_t x1019 = 3LLU;
	int16_t x1020 = 122;
	volatile int32_t t19 = -60557;

	t19 = ((x1017|(x1018>>x1019))%x1020);

	if (t19 != 17) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1049 = 7158434216569LL;
	static int32_t x1050 = 11721;
	uint8_t x1051 = 1U;
	uint16_t x1052 = 120U;

	t20 = ((x1049|(x1050>>x1051))%x1052);

	if (t20 != 5LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1061 = -1;
	int32_t x1062 = INT32_MAX;
	volatile uint16_t x1064 = 5U;

	t21 = ((x1061|(x1062>>x1063))%x1064);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1097 = INT16_MIN;
	uint8_t x1098 = 32U;
	volatile uint8_t x1099 = 4U;
	static int8_t x1100 = -1;
	int32_t t22 = 580;

	t22 = ((x1097|(x1098>>x1099))%x1100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1129 = UINT32_MAX;
	static int16_t x1130 = INT16_MAX;
	uint16_t x1131 = 0U;
	volatile uint64_t x1132 = 58888333909LLU;

	t23 = ((x1129|(x1130>>x1131))%x1132);

	if (t23 != 4294967295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1157 = 830180304LL;
	static volatile int16_t x1158 = 1692;
	int16_t x1159 = 3;
	uint64_t x1160 = 16173699273740LLU;
	uint64_t t24 = 3010246477LLU;

	t24 = ((x1157|(x1158>>x1159))%x1160);

	if (t24 != 830180307LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1165 = 7U;
	uint16_t x1166 = 105U;
	uint16_t x1167 = 1U;
	volatile uint16_t x1168 = 91U;
	int32_t t25 = 656512649;

	t25 = ((x1165|(x1166>>x1167))%x1168);

	if (t25 != 55) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1278 = 138220641;
	uint8_t x1279 = 9U;
	static volatile uint8_t x1280 = 8U;
	static volatile int32_t t26 = 3092;

	t26 = ((x1277|(x1278>>x1279))%x1280);

	if (t26 != -6) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1285 = UINT8_MAX;
	uint16_t x1287 = 2U;
	static int16_t x1288 = INT16_MIN;
	int32_t t27 = 7277;

	t27 = ((x1285|(x1286>>x1287))%x1288);

	if (t27 != 8191) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1318 = 7456U;
	int8_t x1319 = 0;
	int32_t x1320 = INT32_MIN;
	int64_t t28 = 0LL;

	t28 = ((x1317|(x1318>>x1319))%x1320);

	if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1325 = INT8_MIN;
	static volatile uint8_t x1326 = UINT8_MAX;
	volatile uint8_t x1328 = 14U;
	static volatile int32_t t29 = 52497;

	t29 = ((x1325|(x1326>>x1327))%x1328);

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1373 = INT32_MIN;
	volatile int32_t x1374 = INT32_MAX;
	static uint64_t x1375 = 29LLU;
	volatile int8_t x1376 = INT8_MIN;
	int32_t t30 = -13;

	t30 = ((x1373|(x1374>>x1375))%x1376);

	if (t30 != -125) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1377 = 112924956184LL;
	int32_t x1378 = INT32_MAX;
	int32_t x1379 = 6;
	volatile int64_t t31 = -638549320558813LL;

	t31 = ((x1377|(x1378>>x1379))%x1380);

	if (t31 != 112944218111LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1461 = INT32_MAX;
	uint16_t x1462 = 1144U;
	uint8_t x1463 = 4U;
	int32_t x1464 = -12;
	static int32_t t32 = 3879335;

	t32 = ((x1461|(x1462>>x1463))%x1464);

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1517 = 6606526106241422197LLU;
	int8_t x1519 = 29;
	int64_t x1520 = INT64_MAX;
	volatile uint64_t t33 = 100LLU;

	t33 = ((x1517|(x1518>>x1519))%x1520);

	if (t33 != 6606526106241422197LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1523 = 0LL;
	int32_t x1524 = INT32_MIN;
	volatile int32_t t34 = 226980;

	t34 = ((x1521|(x1522>>x1523))%x1524);

	if (t34 != -2147418113) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1541 = 1670;
	int64_t x1542 = 405293412LL;
	int64_t x1543 = 0LL;
	int32_t x1544 = -13762043;
	static volatile int64_t t35 = 3172160129703934LL;

	t35 = ((x1541|(x1542>>x1543))%x1544);

	if (t35 != 6195831LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1605 = INT16_MIN;
	uint64_t x1606 = UINT64_MAX;
	int8_t x1607 = 1;
	static volatile uint64_t t36 = 7LLU;

	t36 = ((x1605|(x1606>>x1607))%x1608);

	if (t36 != 685371064215LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1697 = 5193;
	int32_t x1698 = INT32_MAX;
	volatile int8_t x1699 = 1;
	int8_t x1700 = -1;
	int32_t t37 = 467505;

	t37 = ((x1697|(x1698>>x1699))%x1700);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1853 = INT64_MAX;
	uint8_t x1855 = 23U;
	volatile int64_t t38 = 78212442133065LL;

	t38 = ((x1853|(x1854>>x1855))%x1856);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1869 = UINT16_MAX;
	static uint16_t x1870 = 9U;
	uint8_t x1871 = 15U;
	int32_t t39 = -113111;

	t39 = ((x1869|(x1870>>x1871))%x1872);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1953 = 60111381U;
	uint8_t x1954 = 97U;
	volatile uint32_t t40 = 440440U;

	t40 = ((x1953|(x1954>>x1955))%x1956);

	if (t40 != 60111383U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x2101 = 12U;
	int32_t x2102 = INT32_MAX;
	uint16_t x2103 = 3U;
	volatile int32_t x2104 = -1;
	volatile int32_t t41 = -1016;

	t41 = ((x2101|(x2102>>x2103))%x2104);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2197 = UINT32_MAX;
	int16_t x2198 = 0;
	uint64_t x2200 = 16LLU;
	volatile uint64_t t42 = 235LLU;

	t42 = ((x2197|(x2198>>x2199))%x2200);

	if (t42 != 15LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2206 = 2677LLU;
	uint32_t x2207 = 6U;
	int64_t x2208 = INT64_MIN;
	static uint64_t t43 = 7947072LLU;

	t43 = ((x2205|(x2206>>x2207))%x2208);

	if (t43 != 41LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2241 = 11955026666369LL;
	uint8_t x2242 = 1U;
	volatile uint16_t x2243 = 4U;
	int16_t x2244 = INT16_MIN;

	t44 = ((x2241|(x2242>>x2243))%x2244);

	if (t44 != 9089LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x2365 = 476U;
	static int16_t x2366 = 0;
	static volatile uint16_t x2367 = 12U;
	volatile int32_t t45 = -81651;

	t45 = ((x2365|(x2366>>x2367))%x2368);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2373 = INT8_MIN;
	volatile uint16_t x2374 = UINT16_MAX;
	volatile uint8_t x2375 = 1U;
	int8_t x2376 = -2;
	int32_t t46 = -61;

	t46 = ((x2373|(x2374>>x2375))%x2376);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2449 = 4895742U;
	uint16_t x2450 = 6U;
	volatile uint64_t x2451 = 0LLU;
	int32_t x2452 = INT32_MIN;
	static uint32_t t47 = 1936662U;

	t47 = ((x2449|(x2450>>x2451))%x2452);

	if (t47 != 4895742U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2473 = UINT64_MAX;
	static int64_t x2474 = 40435373752375LL;
	int16_t x2475 = 0;
	int64_t x2476 = -1LL;
	uint64_t t48 = 294720081244159LLU;

	t48 = ((x2473|(x2474>>x2475))%x2476);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2585 = INT64_MAX;
	int64_t x2586 = INT64_MAX;
	uint8_t x2587 = 0U;
	int64_t x2588 = 4LL;
	int64_t t49 = -1097863LL;

	t49 = ((x2585|(x2586>>x2587))%x2588);

	if (t49 != 3LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2605 = INT8_MIN;
	static uint64_t x2606 = UINT64_MAX;
	uint8_t x2608 = UINT8_MAX;
	static uint64_t t50 = 216LLU;

	t50 = ((x2605|(x2606>>x2607))%x2608);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2733 = INT8_MAX;
	int16_t x2734 = 2166;
	static uint64_t x2735 = 16LLU;
	uint64_t x2736 = UINT64_MAX;
	uint64_t t51 = 13245659892663001LLU;

	t51 = ((x2733|(x2734>>x2735))%x2736);

	if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2781 = INT8_MAX;
	int64_t x2782 = 10LL;
	volatile uint8_t x2783 = 7U;
	static volatile int64_t x2784 = -111362573333125579LL;
	int64_t t52 = -82180730149LL;

	t52 = ((x2781|(x2782>>x2783))%x2784);

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x2805 = 2U;
	static volatile uint64_t x2806 = 1818LLU;
	uint8_t x2807 = 8U;
	uint64_t t53 = 45039LLU;

	t53 = ((x2805|(x2806>>x2807))%x2808);

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2941 = -1606;
	uint8_t x2942 = UINT8_MAX;
	static int16_t x2943 = 0;
	volatile int64_t x2944 = -2669742LL;
	int64_t t54 = 1LL;

	t54 = ((x2941|(x2942>>x2943))%x2944);

	if (t54 != -1537LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2953 = -1;
	static volatile uint32_t x2954 = UINT32_MAX;
	int64_t x2955 = 0LL;
	int32_t x2956 = -10520788;
	volatile uint32_t t55 = 5U;

	t55 = ((x2953|(x2954>>x2955))%x2956);

	if (t55 != 10520787U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x2985 = 346U;
	uint32_t x2986 = 1672361434U;
	uint32_t x2987 = 2U;
	int64_t x2988 = -1LL;
	int64_t t56 = 64941312888422LL;

	t56 = ((x2985|(x2986>>x2987))%x2988);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3077 = UINT8_MAX;
	volatile uint16_t x3078 = 45U;
	volatile int32_t t57 = 703424098;

	t57 = ((x3077|(x3078>>x3079))%x3080);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3093 = -1LL;
	static uint32_t x3094 = UINT32_MAX;
	int16_t x3095 = 1;
	static uint64_t x3096 = 70LLU;
	volatile uint64_t t58 = 8878LLU;

	t58 = ((x3093|(x3094>>x3095))%x3096);

	if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3221 = 26U;
	static uint64_t x3222 = 5294LLU;
	static int8_t x3223 = 9;
	volatile int8_t x3224 = INT8_MIN;
	uint64_t t59 = 300048987989014LLU;

	t59 = ((x3221|(x3222>>x3223))%x3224);

	if (t59 != 26LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3289 = INT64_MIN;
	static uint32_t x3290 = 286550U;
	uint64_t x3291 = 6LLU;
	volatile uint8_t x3292 = UINT8_MAX;

	t60 = ((x3289|(x3290>>x3291))%x3292);

	if (t60 != -241LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3301 = INT64_MIN;
	int16_t x3302 = INT16_MAX;
	volatile int8_t x3303 = 0;
	uint32_t x3304 = 1159759U;
	int64_t t61 = -1814623248802132LL;

	t61 = ((x3301|(x3302>>x3303))%x3304);

	if (t61 != -867635LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3421 = -59;
	static int64_t x3422 = 109256358LL;
	int8_t x3424 = -1;
	volatile int64_t t62 = -99955LL;

	t62 = ((x3421|(x3422>>x3423))%x3424);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3453 = -1;
	uint8_t x3454 = 2U;
	int64_t x3455 = 1LL;
	volatile uint64_t t63 = 4686407001LLU;

	t63 = ((x3453|(x3454>>x3455))%x3456);

	if (t63 != 7110868248LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3545 = -1;
	int64_t x3546 = 2463486088993LL;
	uint32_t x3547 = 14U;
	int64_t x3548 = INT64_MAX;
	static int64_t t64 = 260304086693543613LL;

	t64 = ((x3545|(x3546>>x3547))%x3548);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3569 = INT16_MIN;
	int8_t x3570 = 0;
	int8_t x3571 = 0;
	int32_t t65 = -5072430;

	t65 = ((x3569|(x3570>>x3571))%x3572);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3674 = INT16_MAX;
	uint16_t x3675 = 3U;
	volatile int64_t x3676 = INT64_MIN;
	volatile int64_t t66 = -2694542062614LL;

	t66 = ((x3673|(x3674>>x3675))%x3676);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3717 = INT32_MAX;
	int8_t x3718 = 16;
	uint8_t x3719 = 5U;
	int64_t x3720 = INT64_MIN;
	volatile int64_t t67 = 83420512913LL;

	t67 = ((x3717|(x3718>>x3719))%x3720);

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x3902 = INT16_MAX;
	uint16_t x3903 = 23U;
	volatile int32_t t68 = 1;

	t68 = ((x3901|(x3902>>x3903))%x3904);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x3954 = INT32_MAX;
	static int8_t x3955 = 8;
	int32_t x3956 = -11;
	int32_t t69 = 47067155;

	t69 = ((x3953|(x3954>>x3955))%x3956);

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4118 = 12U;
	volatile uint8_t x4119 = 5U;
	int64_t x4120 = 16LL;
	int64_t t70 = -49561389274LL;

	t70 = ((x4117|(x4118>>x4119))%x4120);

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4121 = INT16_MAX;
	uint64_t x4122 = 233LLU;
	int16_t x4124 = -1;

	t71 = ((x4121|(x4122>>x4123))%x4124);

	if (t71 != 32767LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4149 = INT32_MIN;
	int64_t x4150 = INT64_MAX;
	uint16_t x4151 = 49U;
	int32_t x4152 = 48;
	volatile int64_t t72 = 155503175970645LL;

	t72 = ((x4149|(x4150>>x4151))%x4152);

	if (t72 != -17LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x4181 = 476036784;
	uint32_t x4182 = 784U;
	volatile int64_t x4183 = 0LL;
	int8_t x4184 = INT8_MAX;
	volatile uint32_t t73 = 103U;

	t73 = ((x4181|(x4182>>x4183))%x4184);

	if (t73 != 19U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4197 = 1U;
	uint8_t x4199 = 3U;
	int64_t x4200 = 256LL;
	volatile uint64_t t74 = 2842937907674LLU;

	t74 = ((x4197|(x4198>>x4199))%x4200);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x4201 = INT8_MIN;
	static uint8_t x4202 = UINT8_MAX;
	volatile uint8_t x4203 = 3U;
	volatile int64_t x4204 = -117681180LL;
	int64_t t75 = -15801475LL;

	t75 = ((x4201|(x4202>>x4203))%x4204);

	if (t75 != -97LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4226 = INT8_MAX;
	int8_t x4228 = -17;
	int64_t t76 = -29033255232LL;

	t76 = ((x4225|(x4226>>x4227))%x4228);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4305 = 4;
	uint16_t x4306 = UINT16_MAX;
	uint16_t x4307 = 0U;
	uint32_t x4308 = 343662U;
	uint32_t t77 = 77U;

	t77 = ((x4305|(x4306>>x4307))%x4308);

	if (t77 != 65535U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4314 = 15889;
	volatile int16_t x4315 = 1;
	int32_t t78 = 0;

	t78 = ((x4313|(x4314>>x4315))%x4316);

	if (t78 != 8191) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4333 = INT64_MIN;
	static int16_t x4334 = 723;
	uint8_t x4335 = 25U;
	int64_t x4336 = INT64_MIN;
	static volatile int64_t t79 = 392LL;

	t79 = ((x4333|(x4334>>x4335))%x4336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4370 = UINT16_MAX;
	uint16_t x4371 = 15U;
	volatile int8_t x4372 = 6;
	int32_t t80 = 365764;

	t80 = ((x4369|(x4370>>x4371))%x4372);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4377 = 1689731U;
	static uint32_t x4378 = 866065U;
	int16_t x4379 = 1;
	volatile uint32_t t81 = 27U;

	t81 = ((x4377|(x4378>>x4379))%x4380);

	if (t81 != 59U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4389 = -1LL;
	int16_t x4390 = 1150;
	static int8_t x4391 = 2;
	volatile uint32_t x4392 = 85660113U;

	t82 = ((x4389|(x4390>>x4391))%x4392);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x4413 = 25LL;
	uint32_t x4414 = UINT32_MAX;
	uint64_t x4415 = 13LLU;
	int16_t x4416 = -1;

	t83 = ((x4413|(x4414>>x4415))%x4416);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4445 = -1LL;
	uint64_t x4446 = 30699714324197086LLU;
	volatile int16_t x4447 = 0;
	int8_t x4448 = INT8_MAX;
	volatile uint64_t t84 = 259LLU;

	t84 = ((x4445|(x4446>>x4447))%x4448);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x4453 = UINT16_MAX;
	uint16_t x4454 = 1U;
	uint8_t x4455 = 18U;
	int32_t t85 = -7;

	t85 = ((x4453|(x4454>>x4455))%x4456);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4513 = 0;
	volatile uint64_t x4514 = UINT64_MAX;
	int32_t x4515 = 3;
	static volatile int32_t x4516 = INT32_MIN;

	t86 = ((x4513|(x4514>>x4515))%x4516);

	if (t86 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4537 = 3386084LL;
	uint8_t x4539 = 2U;
	int64_t x4540 = INT64_MAX;
	volatile int64_t t87 = 2775LL;

	t87 = ((x4537|(x4538>>x4539))%x4540);

	if (t87 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x4557 = 358386377776332LLU;
	int32_t x4558 = 22248174;
	int8_t x4560 = -1;
	volatile uint64_t t88 = 6559402234LLU;

	t88 = ((x4557|(x4558>>x4559))%x4560);

	if (t88 != 358386377776366LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4833 = UINT64_MAX;
	static int32_t x4835 = 3;
	int32_t x4836 = 2481;
	volatile uint64_t t89 = 16LLU;

	t89 = ((x4833|(x4834>>x4835))%x4836);

	if (t89 != 1686LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4865 = INT16_MIN;
	uint64_t x4866 = 189608210LLU;
	uint8_t x4867 = 5U;
	int32_t x4868 = 63183;
	uint64_t t90 = 54218626967062LLU;

	t90 = ((x4865|(x4866>>x4867))%x4868);

	if (t90 != 42585LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x4945 = 29U;
	uint32_t x4946 = UINT32_MAX;
	static int8_t x4947 = 2;
	int8_t x4948 = -1;
	uint32_t t91 = 117488046U;

	t91 = ((x4945|(x4946>>x4947))%x4948);

	if (t91 != 1073741823U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x4950 = INT16_MAX;
	int64_t x4951 = 1LL;
	int16_t x4952 = INT16_MAX;
	static volatile int32_t t92 = -28;

	t92 = ((x4949|(x4950>>x4951))%x4952);

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4969 = INT16_MIN;
	uint64_t x4970 = 112211LLU;
	uint8_t x4971 = 9U;
	static uint32_t x4972 = 90716U;
	uint64_t t93 = 1481318036998348061LLU;

	t93 = ((x4969|(x4970>>x4971))%x4972);

	if (t93 != 54031LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5001 = INT32_MIN;
	static uint64_t x5002 = 116627639709178017LLU;
	static volatile uint8_t x5003 = 8U;
	volatile uint64_t t94 = 1102842157900LLU;

	t94 = ((x5001|(x5002>>x5003))%x5004);

	if (t94 != 53082670772151842LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x5086 = INT16_MAX;
	volatile int8_t x5087 = 0;
	volatile int8_t x5088 = INT8_MIN;
	int32_t t95 = -3547;

	t95 = ((x5085|(x5086>>x5087))%x5088);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5093 = INT8_MAX;
	int32_t x5096 = INT32_MIN;
	static int32_t t96 = 303675971;

	t96 = ((x5093|(x5094>>x5095))%x5096);

	if (t96 != 268435455) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5097 = 123916LLU;
	volatile uint16_t x5098 = UINT16_MAX;
	int8_t x5099 = 0;
	volatile uint64_t t97 = 5435090788936LLU;

	t97 = ((x5097|(x5098>>x5099))%x5100);

	if (t97 != 131071LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5285 = -2;
	uint32_t x5286 = UINT32_MAX;
	int8_t x5287 = 8;
	static volatile uint64_t t98 = 20396461156663LLU;

	t98 = ((x5285|(x5286>>x5287))%x5288);

	if (t98 != 4294967295LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5293 = UINT32_MAX;
	static int64_t x5294 = 3LL;
	uint16_t x5295 = 12U;

	t99 = ((x5293|(x5294>>x5295))%x5296);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

