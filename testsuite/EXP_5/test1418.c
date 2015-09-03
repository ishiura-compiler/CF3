#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x24 = 1U;
uint64_t x34 = 3663099995745734LLU;
uint8_t x36 = 12U;
uint8_t x55 = 3U;
uint64_t x91 = UINT64_MAX;
int32_t x105 = INT32_MIN;
int64_t x106 = INT64_MIN;
int8_t x108 = 0;
int32_t x140 = 3;
int32_t t9 = -124;
int8_t x398 = -1;
volatile int8_t x400 = 0;
int32_t x463 = -6980780;
volatile uint16_t x465 = UINT16_MAX;
static int64_t x481 = INT64_MIN;
int16_t x550 = -1;
volatile uint16_t x552 = 1U;
int8_t x586 = INT8_MIN;
uint8_t x634 = UINT8_MAX;
static int32_t t21 = INT32_MIN;
uint32_t x678 = UINT32_MAX;
int32_t x685 = -8432048;
int32_t x697 = INT32_MIN;
volatile int16_t x699 = INT16_MIN;
uint32_t x756 = 0U;
volatile int32_t t28 = 30;
int8_t x893 = INT8_MAX;
int64_t x899 = -1479181LL;
int32_t t31 = 5276;
uint8_t x948 = 3U;
int32_t x1028 = 0;
int8_t x1030 = 1;
uint32_t x1032 = 2U;
uint8_t x1072 = 23U;
int32_t t37 = 0;
uint16_t x1113 = 70U;
uint64_t x1153 = UINT64_MAX;
volatile int64_t x1172 = 12LL;
int64_t x1206 = 7428214LL;
int16_t x1249 = -1;
static uint64_t x1259 = UINT64_MAX;
int16_t x1260 = 17;
static int64_t x1273 = 454337016343454435LL;
int8_t x1288 = 6;
int8_t x1304 = 1;
volatile int16_t x1334 = -1;
static int32_t t50 = -4017477;
static int32_t x1387 = INT32_MIN;
uint32_t t51 = 73730U;
volatile uint32_t x1396 = 2U;
uint32_t x1419 = UINT32_MAX;
int32_t t53 = -5381;
int64_t x1451 = -1LL;
volatile uint32_t x1515 = 116632128U;
static uint32_t x1525 = UINT32_MAX;
int8_t x1527 = -1;
static uint32_t t60 = 30758949U;
int16_t x1589 = -1;
int16_t x1592 = 1;
uint16_t x1630 = 2U;
static uint8_t x1631 = 6U;
static uint64_t x1689 = 57959832923714LLU;
int8_t x1722 = INT8_MIN;
int32_t t68 = -1;
uint16_t x1780 = 23U;
uint8_t x1832 = 1U;
int32_t t73 = -7611;
volatile int16_t x1945 = INT16_MAX;
volatile int8_t x1946 = INT8_MIN;
int8_t x1963 = INT8_MIN;
static int8_t x1964 = 0;
static int32_t x1997 = INT32_MIN;
volatile int32_t t77 = INT32_MIN;
volatile uint64_t x2089 = 450LLU;
int32_t x2090 = INT32_MIN;
static volatile uint64_t t78 = 331523634LLU;
uint8_t x2176 = 0U;
int32_t x2201 = INT32_MIN;
int32_t x2241 = 70;
int16_t x2242 = INT16_MIN;
uint8_t x2330 = 3U;
int8_t x2331 = -1;
volatile int32_t t86 = -6319;
int8_t x2333 = -1;
volatile int8_t x2335 = INT8_MAX;
static int32_t t87 = 2;
int32_t x2390 = -1;
uint8_t x2392 = 28U;
volatile uint64_t t88 = UINT64_MAX;
static uint8_t x2409 = 1U;
static uint8_t x2410 = UINT8_MAX;
volatile int8_t x2412 = 1;
int32_t t89 = -22569949;
volatile uint8_t x2448 = 3U;
uint8_t x2516 = 0U;
static int32_t t93 = -4;
volatile uint16_t x2534 = 4790U;
volatile int32_t t97 = 705845;
static volatile uint32_t x2710 = UINT32_MAX;
int16_t x2711 = -1;
volatile int32_t t98 = 3;
uint64_t x2768 = 13LLU;


void f0(void) {
	static volatile int8_t x21 = INT8_MIN;
	static int32_t x22 = -1;
	int8_t x23 = INT8_MAX;
	int32_t t0 = 6;

	t0 = (x21+((x22<x23)<<x24));

	if (t0 != -126) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x33 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	int32_t t1 = -377;

	t1 = (x33+((x34<x35)<<x36));

	if (t1 != 3968) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x53 = INT32_MIN;
	static volatile int64_t x54 = -217072652820006LL;
	uint8_t x56 = 7U;
	volatile int32_t t2 = 6695;

	t2 = (x53+((x54<x55)<<x56));

	if (t2 != -2147483520) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x85 = 0U;
	int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 2U;
	int32_t t3 = -133595;

	t3 = (x85+((x86<x87)<<x88));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x89 = -412;
	volatile int16_t x90 = -1;
	static uint8_t x92 = 1U;
	int32_t t4 = 5;

	t4 = (x89+((x90<x91)<<x92));

	if (t4 != -412) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x107 = -1;
	int32_t t5 = 1760;

	t5 = (x105+((x106<x107)<<x108));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x137 = 262838274209LLU;
	uint16_t x138 = 59U;
	volatile uint32_t x139 = UINT32_MAX;
	static volatile uint64_t t6 = 1379118650764024582LLU;

	t6 = (x137+((x138<x139)<<x140));

	if (t6 != 262838274217LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x161 = -1;
	volatile uint8_t x162 = 16U;
	int16_t x163 = -1;
	static uint32_t x164 = 7U;
	int32_t t7 = -216871;

	t7 = (x161+((x162<x163)<<x164));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x246 = 1U;
	uint32_t x247 = 112960U;
	uint16_t x248 = 1U;
	static volatile int32_t t8 = -416;

	t8 = (x245+((x246<x247)<<x248));

	if (t8 != 32769) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x265 = 27567;
	volatile int64_t x266 = -1LL;
	volatile int32_t x267 = INT32_MIN;
	uint32_t x268 = 2U;

	t9 = (x265+((x266<x267)<<x268));

	if (t9 != 27567) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x285 = -27;
	int16_t x286 = -6534;
	static uint32_t x287 = UINT32_MAX;
	static volatile uint8_t x288 = 0U;
	volatile int32_t t10 = 0;

	t10 = (x285+((x286<x287)<<x288));

	if (t10 != -26) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x305 = INT64_MIN;
	uint16_t x306 = 2U;
	int16_t x307 = 5;
	static uint8_t x308 = 28U;
	static volatile int64_t t11 = -1019LL;

	t11 = (x305+((x306<x307)<<x308));

	if (t11 != -9223372036586340352LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x337 = INT32_MIN;
	uint8_t x338 = 5U;
	volatile int8_t x339 = INT8_MIN;
	int16_t x340 = 2;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x337+((x338<x339)<<x340));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x341 = 0;
	int16_t x342 = INT16_MAX;
	volatile int32_t x343 = INT32_MAX;
	uint64_t x344 = 9LLU;
	int32_t t13 = -238;

	t13 = (x341+((x342<x343)<<x344));

	if (t13 != 512) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x397 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x397+((x398<x399)<<x400));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x461 = 69U;
	static uint8_t x462 = 63U;
	uint8_t x464 = 8U;
	int32_t t15 = 876;

	t15 = (x461+((x462<x463)<<x464));

	if (t15 != 69) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x466 = INT32_MAX;
	static volatile uint64_t x467 = 60891654890966169LLU;
	static uint8_t x468 = 16U;
	int32_t t16 = 2065275;

	t16 = (x465+((x466<x467)<<x468));

	if (t16 != 131071) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x482 = -4006400635343LL;
	volatile int32_t x483 = INT32_MIN;
	volatile int8_t x484 = 1;
	int64_t t17 = -1241343838306030887LL;

	t17 = (x481+((x482<x483)<<x484));

	if (t17 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x549 = INT64_MAX;
	int8_t x551 = INT8_MIN;
	int64_t t18 = INT64_MAX;

	t18 = (x549+((x550<x551)<<x552));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x585 = 521U;
	int64_t x587 = INT64_MAX;
	uint8_t x588 = 0U;
	volatile int32_t t19 = -1602;

	t19 = (x585+((x586<x587)<<x588));

	if (t19 != 522) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x633 = -224;
	static int64_t x635 = 9565831908023LL;
	volatile uint16_t x636 = 17U;
	int32_t t20 = 2101;

	t20 = (x633+((x634<x635)<<x636));

	if (t20 != 130848) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x665 = INT32_MIN;
	int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	int16_t x668 = 0;

	t21 = (x665+((x666<x667)<<x668));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x677 = -1LL;
	int32_t x679 = INT32_MAX;
	int16_t x680 = 1;
	volatile int64_t t22 = -647441740479870026LL;

	t22 = (x677+((x678<x679)<<x680));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x686 = INT16_MIN;
	uint64_t x687 = 32021480086LLU;
	int8_t x688 = 21;
	static volatile int32_t t23 = -220322069;

	t23 = (x685+((x686<x687)<<x688));

	if (t23 != -8432048) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x698 = -1;
	uint8_t x700 = 20U;
	int32_t t24 = INT32_MIN;

	t24 = (x697+((x698<x699)<<x700));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MIN;
	int16_t x703 = -1303;
	volatile int16_t x704 = 0;
	int32_t t25 = 1;

	t25 = (x701+((x702<x703)<<x704));

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x753 = 144798;
	int8_t x754 = INT8_MAX;
	uint64_t x755 = UINT64_MAX;
	static int32_t t26 = 1584340;

	t26 = (x753+((x754<x755)<<x756));

	if (t26 != 144799) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x801 = -12;
	volatile int16_t x802 = 6779;
	int64_t x803 = INT64_MIN;
	volatile uint16_t x804 = 1U;
	int32_t t27 = 24071;

	t27 = (x801+((x802<x803)<<x804));

	if (t27 != -12) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x845 = -553333;
	int16_t x846 = 12;
	uint32_t x847 = 7U;
	volatile uint8_t x848 = 3U;

	t28 = (x845+((x846<x847)<<x848));

	if (t28 != -553333) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x894 = -606LL;
	uint16_t x895 = 64U;
	int8_t x896 = 10;
	int32_t t29 = 217402;

	t29 = (x893+((x894<x895)<<x896));

	if (t29 != 1151) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x897 = -1LL;
	int32_t x898 = -524028123;
	volatile uint16_t x900 = 19U;
	static volatile int64_t t30 = 587376895LL;

	t30 = (x897+((x898<x899)<<x900));

	if (t30 != 524287LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x925 = 40;
	int16_t x926 = 2111;
	volatile int64_t x927 = -1LL;
	volatile int8_t x928 = 3;

	t31 = (x925+((x926<x927)<<x928));

	if (t31 != 40) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x945 = -1;
	volatile int32_t x946 = INT32_MIN;
	volatile uint64_t x947 = 4341802026896332LLU;
	int32_t t32 = -26;

	t32 = (x945+((x946<x947)<<x948));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x977 = INT64_MAX;
	int64_t x978 = INT64_MAX;
	int16_t x979 = -169;
	int8_t x980 = 1;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x977+((x978<x979)<<x980));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1025 = 1001700085U;
	static volatile uint32_t x1026 = 3782U;
	int8_t x1027 = -1;
	volatile uint32_t t34 = 72900627U;

	t34 = (x1025+((x1026<x1027)<<x1028));

	if (t34 != 1001700086U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1029 = 0;
	int8_t x1031 = INT8_MIN;
	volatile int32_t t35 = 1;

	t35 = (x1029+((x1030<x1031)<<x1032));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1069 = 6;
	volatile int8_t x1070 = -1;
	int8_t x1071 = -1;
	static int32_t t36 = 191872380;

	t36 = (x1069+((x1070<x1071)<<x1072));

	if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1097 = 126060;
	uint8_t x1098 = 35U;
	int16_t x1099 = -182;
	int64_t x1100 = 3LL;

	t37 = (x1097+((x1098<x1099)<<x1100));

	if (t37 != 126060) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1114 = 196870655U;
	int64_t x1115 = -1LL;
	volatile uint16_t x1116 = 1U;
	static volatile int32_t t38 = -2;

	t38 = (x1113+((x1114<x1115)<<x1116));

	if (t38 != 70) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1145 = INT32_MIN;
	int16_t x1146 = -1341;
	uint16_t x1147 = 3211U;
	uint8_t x1148 = 5U;
	int32_t t39 = -13142225;

	t39 = (x1145+((x1146<x1147)<<x1148));

	if (t39 != -2147483616) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1154 = UINT16_MAX;
	static int8_t x1155 = INT8_MAX;
	static uint32_t x1156 = 11U;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x1153+((x1154<x1155)<<x1156));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1169 = -1628LL;
	volatile int32_t x1170 = INT32_MAX;
	volatile uint64_t x1171 = 161648LLU;
	static int64_t t41 = -150430LL;

	t41 = (x1169+((x1170<x1171)<<x1172));

	if (t41 != -1628LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1205 = 2U;
	int16_t x1207 = -1;
	static int8_t x1208 = 23;
	volatile int32_t t42 = -118211978;

	t42 = (x1205+((x1206<x1207)<<x1208));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1229 = 14256U;
	static volatile uint32_t x1230 = 28384U;
	static uint16_t x1231 = 1896U;
	static volatile int16_t x1232 = 1;
	volatile int32_t t43 = 14;

	t43 = (x1229+((x1230<x1231)<<x1232));

	if (t43 != 14256) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1250 = INT8_MIN;
	int32_t x1251 = INT32_MAX;
	volatile uint32_t x1252 = 14U;
	volatile int32_t t44 = -3;

	t44 = (x1249+((x1250<x1251)<<x1252));

	if (t44 != 16383) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1257 = UINT64_MAX;
	volatile int16_t x1258 = -370;
	static volatile uint64_t t45 = 646477297108872582LLU;

	t45 = (x1257+((x1258<x1259)<<x1260));

	if (t45 != 131071LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1274 = INT32_MAX;
	uint16_t x1275 = 2U;
	uint8_t x1276 = 1U;
	static volatile int64_t t46 = -473481337332LL;

	t46 = (x1273+((x1274<x1275)<<x1276));

	if (t46 != 454337016343454435LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1285 = 0;
	int16_t x1286 = INT16_MAX;
	int64_t x1287 = INT64_MIN;
	volatile int32_t t47 = -103464;

	t47 = (x1285+((x1286<x1287)<<x1288));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1301 = INT32_MIN;
	uint32_t x1302 = 804694U;
	uint8_t x1303 = 126U;
	volatile int32_t t48 = INT32_MIN;

	t48 = (x1301+((x1302<x1303)<<x1304));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1325 = INT16_MIN;
	volatile int64_t x1326 = -7518329439LL;
	volatile int64_t x1327 = 1618452929965487232LL;
	static uint16_t x1328 = 13U;
	volatile int32_t t49 = -4;

	t49 = (x1325+((x1326<x1327)<<x1328));

	if (t49 != -24576) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1333 = -5;
	static int16_t x1335 = -67;
	uint16_t x1336 = 3U;

	t50 = (x1333+((x1334<x1335)<<x1336));

	if (t50 != -5) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1385 = 3708U;
	uint8_t x1386 = 9U;
	int64_t x1388 = 4LL;

	t51 = (x1385+((x1386<x1387)<<x1388));

	if (t51 != 3708U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x1393 = 0U;
	uint32_t x1394 = 1359208U;
	uint8_t x1395 = 0U;
	volatile int32_t t52 = -1;

	t52 = (x1393+((x1394<x1395)<<x1396));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1417 = 0U;
	int64_t x1418 = -1LL;
	int32_t x1420 = 1;

	t53 = (x1417+((x1418<x1419)<<x1420));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1421 = -8648;
	int32_t x1422 = -1;
	uint8_t x1423 = 15U;
	uint32_t x1424 = 1U;
	int32_t t54 = -467;

	t54 = (x1421+((x1422<x1423)<<x1424));

	if (t54 != -8646) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1441 = INT32_MAX;
	int64_t x1442 = -1LL;
	uint64_t x1443 = 549369423554735LLU;
	volatile uint8_t x1444 = 2U;
	int32_t t55 = INT32_MAX;

	t55 = (x1441+((x1442<x1443)<<x1444));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1449 = INT8_MAX;
	int64_t x1450 = -1LL;
	uint16_t x1452 = 31U;
	volatile int32_t t56 = -2;

	t56 = (x1449+((x1450<x1451)<<x1452));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x1453 = -3;
	static int64_t x1454 = 238798913418075333LL;
	uint8_t x1455 = 28U;
	static int64_t x1456 = 0LL;
	volatile int32_t t57 = 56025;

	t57 = (x1453+((x1454<x1455)<<x1456));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1505 = 1U;
	uint16_t x1506 = 5U;
	int64_t x1507 = -1LL;
	volatile uint32_t x1508 = 15U;
	int32_t t58 = -194282;

	t58 = (x1505+((x1506<x1507)<<x1508));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1513 = INT32_MIN;
	uint16_t x1514 = UINT16_MAX;
	uint8_t x1516 = 14U;
	static volatile int32_t t59 = 3851;

	t59 = (x1513+((x1514<x1515)<<x1516));

	if (t59 != -2147467264) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1526 = -24;
	uint8_t x1528 = 0U;

	t60 = (x1525+((x1526<x1527)<<x1528));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1553 = UINT32_MAX;
	volatile uint32_t x1554 = 1887U;
	static int8_t x1555 = INT8_MAX;
	static uint8_t x1556 = 5U;
	uint32_t t61 = UINT32_MAX;

	t61 = (x1553+((x1554<x1555)<<x1556));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1590 = INT64_MAX;
	volatile uint64_t x1591 = 996742LLU;
	volatile int32_t t62 = 249202702;

	t62 = (x1589+((x1590<x1591)<<x1592));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x1597 = -14805;
	int16_t x1598 = -1;
	static int64_t x1599 = 71LL;
	static uint16_t x1600 = 1U;
	volatile int32_t t63 = 63;

	t63 = (x1597+((x1598<x1599)<<x1600));

	if (t63 != -14803) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1629 = INT16_MIN;
	int8_t x1632 = 4;
	volatile int32_t t64 = 60966372;

	t64 = (x1629+((x1630<x1631)<<x1632));

	if (t64 != -32752) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1677 = INT8_MIN;
	static int16_t x1678 = INT16_MAX;
	int64_t x1679 = INT64_MIN;
	volatile int16_t x1680 = 24;
	volatile int32_t t65 = 319;

	t65 = (x1677+((x1678<x1679)<<x1680));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x1690 = INT64_MIN;
	int16_t x1691 = INT16_MIN;
	uint8_t x1692 = 16U;
	volatile uint64_t t66 = 1LLU;

	t66 = (x1689+((x1690<x1691)<<x1692));

	if (t66 != 57959832989250LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x1701 = UINT16_MAX;
	int64_t x1702 = -1LL;
	uint64_t x1703 = 16728141852800LLU;
	int16_t x1704 = 21;
	volatile int32_t t67 = -257334535;

	t67 = (x1701+((x1702<x1703)<<x1704));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1721 = INT8_MAX;
	uint64_t x1723 = UINT64_MAX;
	static int8_t x1724 = 1;

	t68 = (x1721+((x1722<x1723)<<x1724));

	if (t68 != 129) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1737 = -6633722;
	volatile int64_t x1738 = INT64_MIN;
	uint32_t x1739 = 2U;
	volatile uint8_t x1740 = 3U;
	int32_t t69 = -5;

	t69 = (x1737+((x1738<x1739)<<x1740));

	if (t69 != -6633714) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x1777 = UINT32_MAX;
	int64_t x1778 = -3242LL;
	int32_t x1779 = -1;
	uint32_t t70 = 13914109U;

	t70 = (x1777+((x1778<x1779)<<x1780));

	if (t70 != 8388607U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1793 = INT8_MIN;
	int8_t x1794 = -1;
	uint64_t x1795 = UINT64_MAX;
	int16_t x1796 = 21;
	volatile int32_t t71 = -11415661;

	t71 = (x1793+((x1794<x1795)<<x1796));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1829 = -1334124;
	uint32_t x1830 = 103U;
	int8_t x1831 = INT8_MIN;
	volatile int32_t t72 = 7088;

	t72 = (x1829+((x1830<x1831)<<x1832));

	if (t72 != -1334122) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1897 = -1;
	uint64_t x1898 = UINT64_MAX;
	int16_t x1899 = INT16_MAX;
	uint64_t x1900 = 1LLU;

	t73 = (x1897+((x1898<x1899)<<x1900));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x1947 = -1;
	static uint8_t x1948 = 5U;
	static int32_t t74 = 363245256;

	t74 = (x1945+((x1946<x1947)<<x1948));

	if (t74 != 32799) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1961 = 3811U;
	uint8_t x1962 = 3U;
	volatile uint32_t t75 = 1U;

	t75 = (x1961+((x1962<x1963)<<x1964));

	if (t75 != 3811U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1969 = UINT64_MAX;
	int64_t x1970 = 841LL;
	int64_t x1971 = INT64_MAX;
	uint32_t x1972 = 5U;
	uint64_t t76 = 372118904197LLU;

	t76 = (x1969+((x1970<x1971)<<x1972));

	if (t76 != 31LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x1998 = INT32_MAX;
	volatile int8_t x1999 = INT8_MIN;
	volatile int16_t x2000 = 7;

	t77 = (x1997+((x1998<x1999)<<x2000));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2091 = 0;
	volatile int8_t x2092 = 1;

	t78 = (x2089+((x2090<x2091)<<x2092));

	if (t78 != 452LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x2173 = 0U;
	volatile int64_t x2174 = -40713355991255905LL;
	static uint16_t x2175 = UINT16_MAX;
	uint32_t t79 = 70664U;

	t79 = (x2173+((x2174<x2175)<<x2176));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2177 = 5236526LLU;
	int64_t x2178 = INT64_MIN;
	int16_t x2179 = INT16_MIN;
	static uint16_t x2180 = 22U;
	volatile uint64_t t80 = 3226516504796094690LLU;

	t80 = (x2177+((x2178<x2179)<<x2180));

	if (t80 != 9430830LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2202 = 3U;
	static uint16_t x2203 = UINT16_MAX;
	static volatile uint8_t x2204 = 3U;
	volatile int32_t t81 = 11582;

	t81 = (x2201+((x2202<x2203)<<x2204));

	if (t81 != -2147483640) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2213 = INT8_MIN;
	uint16_t x2214 = 35U;
	static int64_t x2215 = -1LL;
	static uint8_t x2216 = 12U;
	int32_t t82 = -1;

	t82 = (x2213+((x2214<x2215)<<x2216));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2243 = -7;
	uint8_t x2244 = 0U;
	int32_t t83 = -18187;

	t83 = (x2241+((x2242<x2243)<<x2244));

	if (t83 != 71) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2289 = 3U;
	static volatile int16_t x2290 = INT16_MAX;
	int16_t x2291 = INT16_MAX;
	uint8_t x2292 = 28U;
	volatile int32_t t84 = 379739;

	t84 = (x2289+((x2290<x2291)<<x2292));

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2301 = INT64_MAX;
	static int32_t x2302 = INT32_MIN;
	uint32_t x2303 = 6230U;
	uint8_t x2304 = 14U;
	int64_t t85 = INT64_MAX;

	t85 = (x2301+((x2302<x2303)<<x2304));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2329 = INT16_MIN;
	volatile int8_t x2332 = 0;

	t86 = (x2329+((x2330<x2331)<<x2332));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2334 = -1022;
	int8_t x2336 = 19;

	t87 = (x2333+((x2334<x2335)<<x2336));

	if (t87 != 524287) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2389 = UINT64_MAX;
	uint64_t x2391 = UINT64_MAX;

	t88 = (x2389+((x2390<x2391)<<x2392));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x2411 = 1;

	t89 = (x2409+((x2410<x2411)<<x2412));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2445 = UINT8_MAX;
	static int64_t x2446 = INT64_MIN;
	int64_t x2447 = INT64_MIN;
	int32_t t90 = 1971716;

	t90 = (x2445+((x2446<x2447)<<x2448));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x2473 = 644;
	int16_t x2474 = 16;
	int32_t x2475 = 1608;
	volatile uint8_t x2476 = 2U;
	int32_t t91 = -83;

	t91 = (x2473+((x2474<x2475)<<x2476));

	if (t91 != 648) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2489 = -1;
	int8_t x2490 = -14;
	int64_t x2491 = 11425957041186LL;
	int32_t x2492 = 13;
	volatile int32_t t92 = 416253;

	t92 = (x2489+((x2490<x2491)<<x2492));

	if (t92 != 8191) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2513 = 15596U;
	int16_t x2514 = INT16_MIN;
	int8_t x2515 = -1;

	t93 = (x2513+((x2514<x2515)<<x2516));

	if (t93 != 15597) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2533 = UINT64_MAX;
	volatile int16_t x2535 = INT16_MIN;
	static int16_t x2536 = 13;
	static uint64_t t94 = UINT64_MAX;

	t94 = (x2533+((x2534<x2535)<<x2536));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2549 = INT64_MAX;
	uint16_t x2550 = UINT16_MAX;
	int16_t x2551 = INT16_MAX;
	volatile int32_t x2552 = 0;
	static volatile int64_t t95 = INT64_MAX;

	t95 = (x2549+((x2550<x2551)<<x2552));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2677 = INT64_MIN;
	int64_t x2678 = INT64_MIN;
	int32_t x2679 = INT32_MIN;
	int16_t x2680 = 1;
	volatile int64_t t96 = 89LL;

	t96 = (x2677+((x2678<x2679)<<x2680));

	if (t96 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2701 = INT16_MIN;
	int8_t x2702 = INT8_MIN;
	volatile int16_t x2703 = -2;
	static uint8_t x2704 = 0U;

	t97 = (x2701+((x2702<x2703)<<x2704));

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x2709 = -1;
	static uint8_t x2712 = 2U;

	t98 = (x2709+((x2710<x2711)<<x2712));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2765 = -3693916LL;
	int32_t x2766 = INT32_MIN;
	int8_t x2767 = INT8_MIN;
	static volatile int64_t t99 = 229013716LL;

	t99 = (x2765+((x2766<x2767)<<x2768));

	if (t99 != -3685724LL) { NG(); } else { ; }
	
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

