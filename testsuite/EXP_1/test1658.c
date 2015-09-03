#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x69 = INT64_MAX;
uint16_t x70 = 373U;
int64_t x85 = -52LL;
int8_t x158 = INT8_MAX;
int16_t x160 = 0;
static volatile int64_t t5 = 108LL;
volatile int64_t x226 = -1LL;
uint8_t x228 = 11U;
int16_t x238 = -1;
volatile uint64_t x250 = 2291997635057347759LLU;
int32_t x251 = -115;
int8_t x277 = 3;
uint16_t x280 = 1U;
uint32_t x355 = UINT32_MAX;
static int32_t x357 = INT32_MIN;
volatile int64_t x446 = 236796LL;
static volatile uint32_t x494 = 652U;
uint8_t x496 = 5U;
int16_t x523 = INT16_MIN;
int8_t x524 = 5;
static int64_t x699 = INT64_MIN;
static int8_t x708 = 9;
static uint64_t x729 = 254716LLU;
int8_t x773 = 3;
int64_t t23 = -181425011025796LL;
static int64_t x863 = INT64_MAX;
static int8_t x869 = INT8_MIN;
int16_t x900 = 0;
static uint8_t x952 = 2U;
volatile int8_t x970 = -1;
volatile int8_t x985 = -22;
static uint64_t x989 = UINT64_MAX;
int32_t x991 = 13;
int8_t x1010 = -21;
uint16_t x1089 = 56U;
static int32_t x1150 = 2802;
volatile int8_t x1208 = 1;
int8_t x1222 = -1;
volatile int64_t x1226 = -46429LL;
int8_t x1228 = 1;
int32_t x1237 = INT32_MAX;
volatile uint64_t x1274 = 25244139LLU;
int32_t x1275 = -288727999;
int32_t t45 = 16472907;
static int8_t x1281 = -5;
uint32_t x1284 = 1U;
uint8_t x1308 = 4U;
int32_t t50 = -125747;
uint16_t x1452 = 27U;
volatile uint32_t x1463 = 4U;
uint8_t x1465 = UINT8_MAX;
int64_t x1483 = -23423497384965LL;
volatile uint8_t x1532 = 2U;
int32_t t58 = 1;
uint64_t x1578 = 6367LLU;
int32_t t64 = 523632;
int16_t x1705 = INT16_MIN;
static int16_t x1706 = -1;
int32_t t66 = 0;
uint16_t x1716 = 30U;
static uint8_t x1730 = 28U;
int8_t x1736 = 0;
int16_t x1752 = 5;
uint16_t x1802 = UINT16_MAX;
uint64_t x1831 = UINT64_MAX;
uint8_t x1871 = 14U;
volatile int16_t x1883 = 7;
int32_t t75 = -7725;
volatile int32_t t77 = 54465565;
volatile int16_t x2074 = 620;
uint64_t x2122 = 2591935LLU;
int16_t x2142 = 3311;
int64_t t83 = 488868262496973550LL;
uint64_t x2255 = UINT64_MAX;
uint8_t x2451 = 42U;
volatile int32_t t86 = -16455302;
static volatile uint8_t x2496 = 19U;
static uint32_t x2529 = 229467240U;
int8_t x2530 = -1;
int32_t t88 = -7074;
int32_t t90 = -171156448;
static int64_t x2597 = 187LL;
uint64_t t91 = 44280165LLU;
int8_t x2620 = 1;
int32_t t94 = -7047;


void f0(void) {
	static volatile int64_t x71 = INT64_MAX;
	static uint32_t x72 = 2U;
	int64_t t0 = -746971328402LL;

	t0 = (((x69<=x70)&x71)>>x72);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x77 = -1LL;
	int16_t x78 = 2;
	int8_t x79 = 26;
	uint8_t x80 = 0U;
	int32_t t1 = 4;

	t1 = (((x77<=x78)&x79)>>x80);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	static uint8_t x88 = 28U;
	int32_t t2 = 65762504;

	t2 = (((x85<=x86)&x87)>>x88);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x137 = 5866740U;
	int16_t x138 = 9996;
	uint32_t x139 = 15U;
	static volatile uint8_t x140 = 1U;
	volatile uint32_t t3 = 189U;

	t3 = (((x137<=x138)&x139)>>x140);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x157 = INT32_MIN;
	static int16_t x159 = -1;
	int32_t t4 = 7;

	t4 = (((x157<=x158)&x159)>>x160);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x173 = 1172U;
	uint32_t x174 = 36981U;
	volatile int64_t x175 = -1LL;
	uint8_t x176 = 32U;

	t5 = (((x173<=x174)&x175)>>x176);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x185 = 213285528U;
	int32_t x186 = INT32_MAX;
	int8_t x187 = -1;
	uint8_t x188 = 3U;
	int32_t t6 = 1;

	t6 = (((x185<=x186)&x187)>>x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x225 = INT32_MAX;
	int64_t x227 = -208416757LL;
	volatile int64_t t7 = 492661LL;

	t7 = (((x225<=x226)&x227)>>x228);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x237 = INT8_MIN;
	volatile uint64_t x239 = 92LLU;
	int16_t x240 = 59;
	static uint64_t t8 = 5LLU;

	t8 = (((x237<=x238)&x239)>>x240);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x249 = INT8_MIN;
	static int16_t x252 = 13;
	static int32_t t9 = -1561658;

	t9 = (((x249<=x250)&x251)>>x252);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x261 = INT64_MIN;
	int32_t x262 = -1;
	uint8_t x263 = 4U;
	static int8_t x264 = 0;
	volatile int32_t t10 = 161008;

	t10 = (((x261<=x262)&x263)>>x264);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	uint64_t t11 = 5955820LLU;

	t11 = (((x277<=x278)&x279)>>x280);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x285 = 1;
	static volatile uint32_t x286 = 5U;
	static int16_t x287 = -1;
	volatile uint16_t x288 = 0U;
	int32_t t12 = 1;

	t12 = (((x285<=x286)&x287)>>x288);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x353 = 1;
	int16_t x354 = 577;
	static int8_t x356 = 4;
	volatile uint32_t t13 = 3U;

	t13 = (((x353<=x354)&x355)>>x356);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x358 = -4675218571495LL;
	static uint16_t x359 = UINT16_MAX;
	int64_t x360 = 1LL;
	volatile int32_t t14 = 2945;

	t14 = (((x357<=x358)&x359)>>x360);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x361 = -1;
	static uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = 7;
	int32_t t15 = 12352471;

	t15 = (((x361<=x362)&x363)>>x364);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x445 = 194108U;
	uint64_t x447 = 1452438190587313LLU;
	static int8_t x448 = 0;
	uint64_t t16 = 16LLU;

	t16 = (((x445<=x446)&x447)>>x448);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x493 = INT8_MAX;
	int32_t x495 = INT32_MAX;
	static volatile int32_t t17 = -4;

	t17 = (((x493<=x494)&x495)>>x496);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x521 = 226334290351347LLU;
	static uint32_t x522 = UINT32_MAX;
	static int32_t t18 = 11078;

	t18 = (((x521<=x522)&x523)>>x524);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x697 = 361U;
	volatile int64_t x698 = INT64_MAX;
	uint16_t x700 = 20U;
	int64_t t19 = 13215518887032184LL;

	t19 = (((x697<=x698)&x699)>>x700);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x705 = UINT32_MAX;
	int64_t x706 = -1209905653404LL;
	int32_t x707 = -1;
	int32_t t20 = 130293;

	t20 = (((x705<=x706)&x707)>>x708);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x730 = 1810U;
	int8_t x731 = -1;
	uint32_t x732 = 0U;
	volatile int32_t t21 = 56761613;

	t21 = (((x729<=x730)&x731)>>x732);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x745 = 23206U;
	int16_t x746 = INT16_MIN;
	static int64_t x747 = INT64_MIN;
	int8_t x748 = 21;
	volatile int64_t t22 = 18986LL;

	t22 = (((x745<=x746)&x747)>>x748);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x774 = INT32_MIN;
	int64_t x775 = -727111940LL;
	volatile uint32_t x776 = 22U;

	t23 = (((x773<=x774)&x775)>>x776);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x841 = 3LLU;
	volatile int16_t x842 = INT16_MIN;
	volatile uint16_t x843 = 1U;
	uint8_t x844 = 2U;
	volatile int32_t t24 = -10013;

	t24 = (((x841<=x842)&x843)>>x844);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x861 = -1;
	static int8_t x862 = -1;
	uint8_t x864 = 13U;
	int64_t t25 = 358093LL;

	t25 = (((x861<=x862)&x863)>>x864);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x870 = UINT32_MAX;
	uint32_t x871 = UINT32_MAX;
	int8_t x872 = 0;
	uint32_t t26 = 158U;

	t26 = (((x869<=x870)&x871)>>x872);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x897 = INT32_MIN;
	int16_t x898 = INT16_MIN;
	int8_t x899 = INT8_MAX;
	static int32_t t27 = -386994;

	t27 = (((x897<=x898)&x899)>>x900);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x905 = -3981471;
	int64_t x906 = INT64_MIN;
	uint64_t x907 = 15673714LLU;
	uint8_t x908 = 0U;
	uint64_t t28 = 99LLU;

	t28 = (((x905<=x906)&x907)>>x908);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x929 = 1;
	int16_t x930 = -1;
	int16_t x931 = -3;
	uint32_t x932 = 28U;
	volatile int32_t t29 = 0;

	t29 = (((x929<=x930)&x931)>>x932);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x949 = 71908933U;
	uint32_t x950 = 405203071U;
	static int8_t x951 = 8;
	int32_t t30 = -22;

	t30 = (((x949<=x950)&x951)>>x952);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x969 = -1;
	int64_t x971 = -3059876934577614847LL;
	static int8_t x972 = 3;
	int64_t t31 = 2604289LL;

	t31 = (((x969<=x970)&x971)>>x972);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x986 = 13141;
	volatile uint64_t x987 = 150837908931552051LLU;
	volatile int8_t x988 = 0;
	static uint64_t t32 = 14624LLU;

	t32 = (((x985<=x986)&x987)>>x988);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x990 = 6;
	int32_t x992 = 1;
	int32_t t33 = -175000738;

	t33 = (((x989<=x990)&x991)>>x992);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1009 = -3168279372LL;
	static int64_t x1011 = INT64_MIN;
	volatile int8_t x1012 = 1;
	static int64_t t34 = 643435446226LL;

	t34 = (((x1009<=x1010)&x1011)>>x1012);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1021 = INT8_MIN;
	static int8_t x1022 = INT8_MAX;
	uint32_t x1023 = 7220016U;
	volatile int8_t x1024 = 4;
	volatile uint32_t t35 = 28U;

	t35 = (((x1021<=x1022)&x1023)>>x1024);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1049 = 16282U;
	int32_t x1050 = 294911;
	int32_t x1051 = INT32_MAX;
	int8_t x1052 = 2;
	static int32_t t36 = 2209351;

	t36 = (((x1049<=x1050)&x1051)>>x1052);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1090 = 17U;
	int8_t x1091 = INT8_MIN;
	static uint8_t x1092 = 15U;
	int32_t t37 = 129131;

	t37 = (((x1089<=x1090)&x1091)>>x1092);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1105 = INT16_MAX;
	int8_t x1106 = INT8_MIN;
	int64_t x1107 = 100018595717776950LL;
	uint8_t x1108 = 2U;
	static int64_t t38 = -103LL;

	t38 = (((x1105<=x1106)&x1107)>>x1108);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1141 = INT16_MIN;
	static int8_t x1142 = INT8_MIN;
	uint8_t x1143 = 6U;
	uint16_t x1144 = 7U;
	volatile int32_t t39 = 61;

	t39 = (((x1141<=x1142)&x1143)>>x1144);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1149 = INT32_MAX;
	uint64_t x1151 = 747600677LLU;
	uint8_t x1152 = 36U;
	static volatile uint64_t t40 = 3196310359LLU;

	t40 = (((x1149<=x1150)&x1151)>>x1152);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1205 = INT64_MAX;
	int16_t x1206 = INT16_MIN;
	static uint32_t x1207 = 6557U;
	uint32_t t41 = 173000U;

	t41 = (((x1205<=x1206)&x1207)>>x1208);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1221 = -1;
	static int64_t x1223 = INT64_MIN;
	static volatile int16_t x1224 = 10;
	volatile int64_t t42 = 1841232620308838047LL;

	t42 = (((x1221<=x1222)&x1223)>>x1224);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1225 = 4319270167476LL;
	uint8_t x1227 = 11U;
	int32_t t43 = -10577;

	t43 = (((x1225<=x1226)&x1227)>>x1228);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1238 = INT64_MAX;
	int32_t x1239 = 143106;
	int32_t x1240 = 0;
	int32_t t44 = -330785929;

	t44 = (((x1237<=x1238)&x1239)>>x1240);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1273 = INT64_MIN;
	static uint16_t x1276 = 12U;

	t45 = (((x1273<=x1274)&x1275)>>x1276);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1282 = 15683484199573978LL;
	int8_t x1283 = -1;
	volatile int32_t t46 = -7752;

	t46 = (((x1281<=x1282)&x1283)>>x1284);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1305 = 3442843153600LLU;
	static int64_t x1306 = INT64_MIN;
	int64_t x1307 = INT64_MAX;
	int64_t t47 = -26596LL;

	t47 = (((x1305<=x1306)&x1307)>>x1308);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1309 = INT32_MIN;
	int64_t x1310 = INT64_MIN;
	volatile int16_t x1311 = INT16_MIN;
	volatile uint16_t x1312 = 2U;
	int32_t t48 = 55276155;

	t48 = (((x1309<=x1310)&x1311)>>x1312);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1353 = INT8_MIN;
	int16_t x1354 = INT16_MIN;
	int64_t x1355 = -3538783055047LL;
	volatile uint8_t x1356 = 11U;
	int64_t t49 = -3171154469894LL;

	t49 = (((x1353<=x1354)&x1355)>>x1356);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1405 = INT8_MIN;
	int32_t x1406 = -160;
	uint16_t x1407 = 5982U;
	static uint8_t x1408 = 0U;

	t50 = (((x1405<=x1406)&x1407)>>x1408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1441 = 100530LLU;
	int16_t x1442 = INT16_MIN;
	int16_t x1443 = INT16_MAX;
	int8_t x1444 = 0;
	int32_t t51 = 8394;

	t51 = (((x1441<=x1442)&x1443)>>x1444);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1449 = 17454U;
	int8_t x1450 = INT8_MIN;
	int64_t x1451 = -59806714847LL;
	static int64_t t52 = -3909341001687644LL;

	t52 = (((x1449<=x1450)&x1451)>>x1452);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1461 = INT32_MIN;
	volatile int64_t x1462 = INT64_MIN;
	static int8_t x1464 = 1;
	uint32_t t53 = 6743U;

	t53 = (((x1461<=x1462)&x1463)>>x1464);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1466 = UINT64_MAX;
	int32_t x1467 = INT32_MAX;
	int8_t x1468 = 16;
	volatile int32_t t54 = 20483752;

	t54 = (((x1465<=x1466)&x1467)>>x1468);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x1481 = -1LL;
	int64_t x1482 = INT64_MIN;
	int8_t x1484 = 2;
	volatile int64_t t55 = 500LL;

	t55 = (((x1481<=x1482)&x1483)>>x1484);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x1489 = UINT32_MAX;
	volatile int64_t x1490 = INT64_MAX;
	volatile uint32_t x1491 = UINT32_MAX;
	static uint8_t x1492 = 25U;
	uint32_t t56 = 92940U;

	t56 = (((x1489<=x1490)&x1491)>>x1492);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1517 = UINT32_MAX;
	uint16_t x1518 = 2U;
	int16_t x1519 = 2;
	static int16_t x1520 = 1;
	int32_t t57 = -11;

	t57 = (((x1517<=x1518)&x1519)>>x1520);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x1529 = 21U;
	static int16_t x1530 = -1;
	int16_t x1531 = INT16_MAX;

	t58 = (((x1529<=x1530)&x1531)>>x1532);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1541 = INT32_MIN;
	uint64_t x1542 = 148LLU;
	volatile int16_t x1543 = 320;
	int8_t x1544 = 28;
	static int32_t t59 = 23372;

	t59 = (((x1541<=x1542)&x1543)>>x1544);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1569 = -1;
	static uint8_t x1570 = 59U;
	int64_t x1571 = INT64_MIN;
	volatile int8_t x1572 = 2;
	volatile int64_t t60 = 2545LL;

	t60 = (((x1569<=x1570)&x1571)>>x1572);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1577 = INT8_MIN;
	static int16_t x1579 = INT16_MAX;
	uint8_t x1580 = 7U;
	volatile int32_t t61 = -46;

	t61 = (((x1577<=x1578)&x1579)>>x1580);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x1601 = INT16_MIN;
	uint8_t x1602 = 1U;
	volatile int64_t x1603 = 639043886307686209LL;
	uint16_t x1604 = 14U;
	volatile int64_t t62 = -67208364458751054LL;

	t62 = (((x1601<=x1602)&x1603)>>x1604);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1613 = INT8_MIN;
	int64_t x1614 = INT64_MIN;
	int16_t x1615 = INT16_MIN;
	uint32_t x1616 = 15U;
	int32_t t63 = 0;

	t63 = (((x1613<=x1614)&x1615)>>x1616);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x1657 = -10;
	volatile int64_t x1658 = INT64_MIN;
	int32_t x1659 = 1457007;
	volatile uint32_t x1660 = 10U;

	t64 = (((x1657<=x1658)&x1659)>>x1660);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x1677 = 1335U;
	uint64_t x1678 = 220LLU;
	int64_t x1679 = INT64_MIN;
	uint8_t x1680 = 0U;
	int64_t t65 = -388810684LL;

	t65 = (((x1677<=x1678)&x1679)>>x1680);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1707 = -1;
	static volatile uint8_t x1708 = 4U;

	t66 = (((x1705<=x1706)&x1707)>>x1708);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1713 = INT16_MIN;
	uint8_t x1714 = 1U;
	static int64_t x1715 = -1LL;
	volatile int64_t t67 = -15389803480784LL;

	t67 = (((x1713<=x1714)&x1715)>>x1716);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1729 = INT32_MAX;
	uint8_t x1731 = 63U;
	static uint8_t x1732 = 0U;
	volatile int32_t t68 = -74350488;

	t68 = (((x1729<=x1730)&x1731)>>x1732);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x1733 = -1;
	static int16_t x1734 = INT16_MIN;
	uint32_t x1735 = UINT32_MAX;
	static uint32_t t69 = 0U;

	t69 = (((x1733<=x1734)&x1735)>>x1736);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1749 = INT8_MAX;
	uint16_t x1750 = 0U;
	int64_t x1751 = -340717791LL;
	volatile int64_t t70 = -1173LL;

	t70 = (((x1749<=x1750)&x1751)>>x1752);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x1769 = UINT16_MAX;
	uint64_t x1770 = 942497459300284LLU;
	int64_t x1771 = INT64_MAX;
	volatile uint32_t x1772 = 1U;
	int64_t t71 = 490550515959849393LL;

	t71 = (((x1769<=x1770)&x1771)>>x1772);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1801 = 26985U;
	static int8_t x1803 = INT8_MIN;
	int8_t x1804 = 3;
	int32_t t72 = 80490;

	t72 = (((x1801<=x1802)&x1803)>>x1804);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1829 = -1;
	int16_t x1830 = INT16_MIN;
	volatile uint8_t x1832 = 5U;
	volatile uint64_t t73 = 89642413355LLU;

	t73 = (((x1829<=x1830)&x1831)>>x1832);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1869 = INT32_MIN;
	uint8_t x1870 = UINT8_MAX;
	static int8_t x1872 = 0;
	volatile int32_t t74 = 17;

	t74 = (((x1869<=x1870)&x1871)>>x1872);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1881 = INT16_MIN;
	static volatile int64_t x1882 = 915366803LL;
	volatile uint16_t x1884 = 13U;

	t75 = (((x1881<=x1882)&x1883)>>x1884);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1893 = 6U;
	volatile uint8_t x1894 = UINT8_MAX;
	int64_t x1895 = INT64_MIN;
	volatile uint8_t x1896 = 10U;
	int64_t t76 = -26185890702577LL;

	t76 = (((x1893<=x1894)&x1895)>>x1896);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1969 = 454433498834LL;
	int8_t x1970 = INT8_MAX;
	int32_t x1971 = -3441127;
	uint16_t x1972 = 7U;

	t77 = (((x1969<=x1970)&x1971)>>x1972);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2073 = -2;
	int16_t x2075 = -1;
	static int8_t x2076 = 0;
	volatile int32_t t78 = -902009;

	t78 = (((x2073<=x2074)&x2075)>>x2076);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x2101 = 30U;
	volatile int32_t x2102 = 2;
	volatile int16_t x2103 = 31;
	uint16_t x2104 = 3U;
	int32_t t79 = 3;

	t79 = (((x2101<=x2102)&x2103)>>x2104);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2121 = UINT64_MAX;
	static volatile int8_t x2123 = 13;
	int8_t x2124 = 7;
	volatile int32_t t80 = 4510;

	t80 = (((x2121<=x2122)&x2123)>>x2124);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2141 = -22;
	static uint8_t x2143 = 2U;
	int64_t x2144 = 0LL;
	volatile int32_t t81 = 95965008;

	t81 = (((x2141<=x2142)&x2143)>>x2144);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x2193 = INT8_MIN;
	uint32_t x2194 = 1006075U;
	uint64_t x2195 = UINT64_MAX;
	uint8_t x2196 = 8U;
	uint64_t t82 = 7763006478906LLU;

	t82 = (((x2193<=x2194)&x2195)>>x2196);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2249 = INT8_MAX;
	volatile int64_t x2250 = INT64_MAX;
	int64_t x2251 = INT64_MIN;
	uint8_t x2252 = 22U;

	t83 = (((x2249<=x2250)&x2251)>>x2252);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2253 = 101339861;
	static int16_t x2254 = INT16_MAX;
	uint8_t x2256 = 1U;
	uint64_t t84 = 823517706841779LLU;

	t84 = (((x2253<=x2254)&x2255)>>x2256);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2449 = INT16_MIN;
	int64_t x2450 = -201270LL;
	uint16_t x2452 = 2U;
	int32_t t85 = -96770324;

	t85 = (((x2449<=x2450)&x2451)>>x2452);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2469 = 1U;
	uint16_t x2470 = UINT16_MAX;
	static int32_t x2471 = -1;
	static volatile int8_t x2472 = 10;

	t86 = (((x2469<=x2470)&x2471)>>x2472);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x2493 = -1;
	uint8_t x2494 = 19U;
	static uint64_t x2495 = 511840243LLU;
	volatile uint64_t t87 = 593793LLU;

	t87 = (((x2493<=x2494)&x2495)>>x2496);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2531 = 971U;
	int8_t x2532 = 0;

	t88 = (((x2529<=x2530)&x2531)>>x2532);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2569 = UINT32_MAX;
	volatile int64_t x2570 = INT64_MAX;
	volatile int8_t x2571 = -52;
	uint32_t x2572 = 7U;
	int32_t t89 = 27036;

	t89 = (((x2569<=x2570)&x2571)>>x2572);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x2589 = INT32_MIN;
	int16_t x2590 = -4;
	int32_t x2591 = -1;
	uint8_t x2592 = 16U;

	t90 = (((x2589<=x2590)&x2591)>>x2592);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2598 = -128;
	uint64_t x2599 = 782LLU;
	int16_t x2600 = 0;

	t91 = (((x2597<=x2598)&x2599)>>x2600);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x2613 = 225157791U;
	static int8_t x2614 = -54;
	volatile int8_t x2615 = -1;
	uint8_t x2616 = 2U;
	int32_t t92 = -204;

	t92 = (((x2613<=x2614)&x2615)>>x2616);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x2617 = -290075651061127LL;
	int64_t x2618 = INT64_MAX;
	int16_t x2619 = INT16_MIN;
	int32_t t93 = 24137;

	t93 = (((x2617<=x2618)&x2619)>>x2620);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2649 = -1;
	int16_t x2650 = -1;
	volatile uint16_t x2651 = 369U;
	int8_t x2652 = 15;

	t94 = (((x2649<=x2650)&x2651)>>x2652);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2685 = INT32_MIN;
	uint32_t x2686 = UINT32_MAX;
	volatile int8_t x2687 = INT8_MIN;
	uint16_t x2688 = 9U;
	int32_t t95 = -1252;

	t95 = (((x2685<=x2686)&x2687)>>x2688);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x2705 = 0U;
	uint64_t x2706 = 935309870849LLU;
	uint16_t x2707 = UINT16_MAX;
	int32_t x2708 = 1;
	int32_t t96 = -13889;

	t96 = (((x2705<=x2706)&x2707)>>x2708);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2717 = 3944U;
	int8_t x2718 = -1;
	int16_t x2719 = INT16_MAX;
	uint8_t x2720 = 18U;
	volatile int32_t t97 = -961057685;

	t97 = (((x2717<=x2718)&x2719)>>x2720);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2721 = INT32_MIN;
	int16_t x2722 = 177;
	uint32_t x2723 = UINT32_MAX;
	volatile int8_t x2724 = 0;
	volatile uint32_t t98 = 13657U;

	t98 = (((x2721<=x2722)&x2723)>>x2724);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2813 = INT8_MIN;
	static uint64_t x2814 = 28086261205591483LLU;
	static int32_t x2815 = INT32_MIN;
	int32_t x2816 = 1;
	int32_t t99 = 8899332;

	t99 = (((x2813<=x2814)&x2815)>>x2816);

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

