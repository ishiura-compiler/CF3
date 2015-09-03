#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 396136;
int8_t x109 = -1;
uint32_t x111 = 25U;
uint8_t x136 = 8U;
int32_t x153 = INT32_MIN;
uint32_t x154 = 585U;
volatile int32_t x162 = -665051927;
int16_t x163 = INT16_MIN;
int16_t x281 = INT16_MIN;
uint64_t x283 = 166LLU;
uint32_t x291 = 2U;
volatile uint32_t t7 = 160313U;
static int16_t x341 = -1;
volatile uint64_t t8 = 29LLU;
int8_t x369 = INT8_MIN;
uint8_t x370 = 0U;
uint16_t x371 = 21U;
volatile int8_t x383 = 6;
static uint16_t x384 = 6U;
uint64_t x462 = 65527LLU;
uint16_t x505 = 13U;
volatile int8_t x507 = INT8_MAX;
static volatile int16_t x534 = 412;
static volatile int64_t x641 = INT64_MIN;
int64_t x643 = -1LL;
int8_t x701 = INT8_MIN;
int32_t x737 = INT32_MIN;
int64_t x755 = -1LL;
uint64_t x766 = 24184363794067LLU;
int64_t x767 = 251053578LL;
uint8_t x768 = 18U;
int64_t t24 = -787LL;
uint16_t x787 = UINT16_MAX;
volatile uint32_t t25 = 21U;
uint8_t x813 = 31U;
volatile int16_t x814 = -3432;
volatile int64_t t28 = -46517LL;
int32_t x833 = INT32_MIN;
int64_t x865 = INT64_MAX;
volatile uint32_t x935 = 326U;
static volatile int16_t x949 = 803;
static int64_t x957 = INT64_MIN;
volatile int8_t x972 = 2;
static int16_t x1197 = 0;
int64_t x1210 = -1LL;
static uint8_t x1285 = UINT8_MAX;
static uint16_t x1288 = 6U;
static int32_t t38 = 3418432;
static int16_t x1295 = INT16_MAX;
uint64_t t39 = 9104284126771LLU;
int16_t x1346 = -2;
static int64_t x1347 = INT64_MAX;
int32_t x1377 = INT32_MIN;
uint16_t x1380 = 4U;
int8_t x1449 = INT8_MAX;
int32_t x1450 = INT32_MAX;
static int32_t x1451 = INT32_MAX;
uint32_t x1452 = 2U;
static int16_t x1482 = 112;
volatile uint64_t x1483 = 12295561045LLU;
int32_t x1753 = INT32_MAX;
int16_t x1757 = INT16_MIN;
int64_t t50 = -881127752686403513LL;
int32_t t51 = 11215;
uint8_t x1821 = UINT8_MAX;
int8_t x1823 = INT8_MAX;
static volatile int64_t x1843 = INT64_MIN;
static int16_t x1881 = -461;
volatile int64_t t54 = -1693206335066893021LL;
int16_t x1897 = INT16_MIN;
int8_t x1900 = 0;
uint32_t t55 = 561816231U;
int32_t t56 = -157;
volatile int64_t t57 = 0LL;
volatile uint32_t x1946 = 43426570U;
volatile int16_t x1950 = -6402;
uint32_t x1952 = 5U;
volatile uint32_t t61 = 10394U;
uint64_t x2032 = 15LLU;
uint32_t t62 = 3535U;
int32_t x2046 = -1;
uint8_t x2047 = 14U;
uint8_t x2048 = 0U;
static volatile int64_t x2141 = INT64_MIN;
int16_t x2150 = INT16_MIN;
int16_t x2154 = INT16_MIN;
int16_t x2157 = INT16_MIN;
int16_t x2385 = 5725;
uint16_t x2388 = 1U;
int32_t x2478 = 61345361;
uint32_t x2536 = 1U;
volatile uint8_t x2567 = 31U;
int8_t x2568 = 1;
volatile int32_t t77 = 14;
int16_t x2641 = -1;
uint16_t x2644 = 1U;
int32_t x2821 = INT32_MIN;
int8_t x2822 = INT8_MAX;
volatile int64_t t81 = 16771583356LL;
static int16_t x2881 = INT16_MAX;
uint32_t x2884 = 2U;
volatile int32_t t83 = -88353121;
static int16_t x3101 = 3402;
uint8_t x3103 = 5U;
static int16_t x3104 = 0;
volatile int32_t t84 = 41;
static int32_t t86 = -3948;
int8_t x3202 = -1;
static int16_t x3213 = -1;
int8_t x3292 = 1;
int32_t t91 = 6566909;
int32_t x3554 = 163;
volatile int32_t t94 = 0;
int32_t x3622 = -486;
volatile int16_t x3628 = 11;
uint8_t x3696 = 35U;
int64_t t97 = 24LL;
volatile int32_t t98 = INT32_MIN;
uint16_t x3759 = 37U;


void f0(void) {
	volatile int8_t x33 = 31;
	uint8_t x34 = 6U;
	uint16_t x35 = 424U;
	uint16_t x36 = 10U;

	t0 = (x33+((x34/x35)<<x36));

	if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x110 = 0U;
	uint8_t x112 = 1U;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x109+((x110/x111)<<x112));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x113 = INT32_MIN;
	int16_t x114 = 1;
	static int16_t x115 = INT16_MIN;
	uint16_t x116 = 3U;
	int32_t t2 = INT32_MIN;

	t2 = (x113+((x114/x115)<<x116));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = 20823U;
	int32_t t3 = INT32_MIN;

	t3 = (x133+((x134/x135)<<x136));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x155 = 175U;
	int32_t x156 = 1;
	uint32_t t4 = 709U;

	t4 = (x153+((x154/x155)<<x156));

	if (t4 != 2147483654U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x161 = -1LL;
	uint8_t x164 = 12U;
	volatile int64_t t5 = -8552519292840660LL;

	t5 = (x161+((x162/x163)<<x164));

	if (t5 != 83128319LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x282 = UINT8_MAX;
	int16_t x284 = 1;
	static volatile uint64_t t6 = 17328978157677LLU;

	t6 = (x281+((x282/x283)<<x284));

	if (t6 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x289 = INT32_MIN;
	static uint32_t x290 = 63656485U;
	uint8_t x292 = 2U;

	t7 = (x289+((x290/x291)<<x292));

	if (t7 != 2274796616U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x342 = INT32_MAX;
	uint64_t x343 = 118379594LLU;
	uint8_t x344 = 1U;

	t8 = (x341+((x342/x343)<<x344));

	if (t8 != 35LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x372 = 2U;
	volatile int32_t t9 = -837690;

	t9 = (x369+((x370/x371)<<x372));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x381 = -339372;
	volatile uint16_t x382 = 56U;
	static volatile int32_t t10 = -20;

	t10 = (x381+((x382/x383)<<x384));

	if (t10 != -338796) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x421 = UINT32_MAX;
	volatile uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = 10U;
	volatile uint32_t t11 = 210984U;

	t11 = (x421+((x422/x423)<<x424));

	if (t11 != 134221823U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x461 = -1;
	uint8_t x463 = UINT8_MAX;
	uint8_t x464 = 8U;
	volatile uint64_t t12 = 0LLU;

	t12 = (x461+((x462/x463)<<x464));

	if (t12 != 65535LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x477 = 2787;
	int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	int16_t x480 = 1;
	static int32_t t13 = 3787918;

	t13 = (x477+((x478/x479)<<x480));

	if (t13 != 2787) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x506 = INT8_MAX;
	uint8_t x508 = 0U;
	volatile int32_t t14 = -185122279;

	t14 = (x505+((x506/x507)<<x508));

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x517 = -1430;
	static uint8_t x518 = 0U;
	static int64_t x519 = INT64_MIN;
	static uint16_t x520 = 1U;
	volatile int64_t t15 = 11698975056979LL;

	t15 = (x517+((x518/x519)<<x520));

	if (t15 != -1430LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x533 = INT16_MIN;
	int16_t x535 = INT16_MIN;
	static uint8_t x536 = 3U;
	int32_t t16 = -1966991;

	t16 = (x533+((x534/x535)<<x536));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x642 = 212205418776LLU;
	static uint8_t x644 = 1U;
	uint64_t t17 = 457LLU;

	t17 = (x641+((x642/x643)<<x644));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x702 = 3551009U;
	uint16_t x703 = 31724U;
	static uint16_t x704 = 0U;
	static volatile uint32_t t18 = 7U;

	t18 = (x701+((x702/x703)<<x704));

	if (t18 != 4294967279U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x705 = INT64_MIN;
	uint64_t x706 = UINT64_MAX;
	volatile int64_t x707 = INT64_MIN;
	static int64_t x708 = 0LL;
	uint64_t t19 = 506892797LLU;

	t19 = (x705+((x706/x707)<<x708));

	if (t19 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x713 = 7527775LLU;
	static int8_t x714 = INT8_MIN;
	int64_t x715 = INT64_MAX;
	int32_t x716 = 1;
	uint64_t t20 = 3787708658605272LLU;

	t20 = (x713+((x714/x715)<<x716));

	if (t20 != 7527775LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x738 = UINT16_MAX;
	int8_t x739 = 14;
	int8_t x740 = 9;
	int32_t t21 = 51;

	t21 = (x737+((x738/x739)<<x740));

	if (t21 != -2145086976) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x753 = INT64_MAX;
	uint64_t x754 = 2235422935717171LLU;
	static volatile int16_t x756 = 15;
	uint64_t t22 = 32543503589LLU;

	t22 = (x753+((x754/x755)<<x756));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x765 = 15791U;
	volatile uint64_t t23 = 171213LLU;

	t23 = (x765+((x766/x767)<<x768));

	if (t23 != 25252609455LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x769 = -1LL;
	volatile int8_t x770 = INT8_MIN;
	static uint16_t x771 = UINT16_MAX;
	int32_t x772 = 0;

	t24 = (x769+((x770/x771)<<x772));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x785 = INT16_MIN;
	static uint32_t x786 = UINT32_MAX;
	uint16_t x788 = 1U;

	t25 = (x785+((x786/x787)<<x788));

	if (t25 != 98306U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x789 = -1LL;
	uint8_t x790 = 8U;
	volatile uint8_t x791 = 1U;
	volatile uint16_t x792 = 0U;
	volatile int64_t t26 = 207607954788625LL;

	t26 = (x789+((x790/x791)<<x792));

	if (t26 != 7LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x805 = INT16_MIN;
	int32_t x806 = 951;
	volatile uint64_t x807 = UINT64_MAX;
	static uint8_t x808 = 7U;
	static uint64_t t27 = 4249095777804645161LLU;

	t27 = (x805+((x806/x807)<<x808));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x815 = -2177147726337422LL;
	uint32_t x816 = 44U;

	t28 = (x813+((x814/x815)<<x816));

	if (t28 != 31LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x834 = UINT8_MAX;
	uint32_t x835 = 1761855U;
	static int16_t x836 = 0;
	uint32_t t29 = 1229090U;

	t29 = (x833+((x834/x835)<<x836));

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x866 = -1;
	uint8_t x867 = 3U;
	int8_t x868 = 1;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x865+((x866/x867)<<x868));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x885 = -69980621;
	uint8_t x886 = UINT8_MAX;
	int64_t x887 = 27700641LL;
	uint16_t x888 = 2U;
	int64_t t31 = -62762456357006LL;

	t31 = (x885+((x886/x887)<<x888));

	if (t31 != -69980621LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x933 = INT64_MIN;
	int16_t x934 = -7;
	int8_t x936 = 0;
	volatile int64_t t32 = -541760308186761696LL;

	t32 = (x933+((x934/x935)<<x936));

	if (t32 != -9223372036841601062LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x950 = -1;
	volatile int64_t x951 = -1LL;
	uint8_t x952 = 0U;
	volatile int64_t t33 = 986618942587414LL;

	t33 = (x949+((x950/x951)<<x952));

	if (t33 != 804LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x958 = 660U;
	volatile int32_t x959 = 1;
	uint8_t x960 = 17U;
	int64_t t34 = -3LL;

	t34 = (x957+((x958/x959)<<x960));

	if (t34 != -9223372036768268288LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x969 = 5335U;
	uint8_t x970 = 0U;
	int16_t x971 = INT16_MIN;
	volatile uint32_t t35 = 976515711U;

	t35 = (x969+((x970/x971)<<x972));

	if (t35 != 5335U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1198 = -1;
	static int32_t x1199 = -204;
	volatile int8_t x1200 = 28;
	volatile int32_t t36 = -6967089;

	t36 = (x1197+((x1198/x1199)<<x1200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1209 = -1LL;
	int8_t x1211 = INT8_MAX;
	int32_t x1212 = 2;
	int64_t t37 = -22127323251876140LL;

	t37 = (x1209+((x1210/x1211)<<x1212));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1286 = 0U;
	int8_t x1287 = 1;

	t38 = (x1285+((x1286/x1287)<<x1288));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1293 = -810931061LL;
	uint64_t x1294 = 161948973131LLU;
	int8_t x1296 = 3;

	t39 = (x1293+((x1294/x1295)<<x1296));

	if (t39 != 18446744072938160083LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x1345 = -37;
	uint8_t x1348 = 58U;
	volatile int64_t t40 = -340052480050467LL;

	t40 = (x1345+((x1346/x1347)<<x1348));

	if (t40 != -37LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1378 = 31U;
	int64_t x1379 = 1665810082LL;
	static int64_t t41 = -231083LL;

	t41 = (x1377+((x1378/x1379)<<x1380));

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1385 = 44234;
	int64_t x1386 = INT64_MAX;
	uint16_t x1387 = 25U;
	int16_t x1388 = 1;
	int64_t t42 = -38923267414277975LL;

	t42 = (x1385+((x1386/x1387)<<x1388));

	if (t42 != 737869762948426298LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t t43 = 27154;

	t43 = (x1449+((x1450/x1451)<<x1452));

	if (t43 != 131) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1481 = 54U;
	volatile int16_t x1484 = 2;
	volatile uint64_t t44 = 104402LLU;

	t44 = (x1481+((x1482/x1483)<<x1484));

	if (t44 != 54LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1509 = -1LL;
	uint8_t x1510 = 9U;
	uint16_t x1511 = 13U;
	static uint8_t x1512 = 1U;
	volatile int64_t t45 = 470452919241668LL;

	t45 = (x1509+((x1510/x1511)<<x1512));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1669 = 719328776U;
	static int16_t x1670 = 435;
	volatile int32_t x1671 = INT32_MIN;
	int32_t x1672 = 0;
	uint32_t t46 = 222073499U;

	t46 = (x1669+((x1670/x1671)<<x1672));

	if (t46 != 719328776U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x1754 = 18906U;
	int64_t x1755 = INT64_MAX;
	uint8_t x1756 = 0U;
	volatile int64_t t47 = -975021114325LL;

	t47 = (x1753+((x1754/x1755)<<x1756));

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1758 = -1;
	volatile uint64_t x1759 = 5022308LLU;
	uint8_t x1760 = 21U;
	volatile uint64_t t48 = 12294214231617LLU;

	t48 = (x1757+((x1758/x1759)<<x1760));

	if (t48 != 7702758617683820544LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x1777 = 1U;
	int64_t x1778 = -1LL;
	int16_t x1779 = -3117;
	uint8_t x1780 = 44U;
	int64_t t49 = 42061604740433LL;

	t49 = (x1777+((x1778/x1779)<<x1780));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1793 = -871839LL;
	int8_t x1794 = INT8_MIN;
	uint32_t x1795 = 1362880U;
	volatile uint8_t x1796 = 3U;

	t50 = (x1793+((x1794/x1795)<<x1796));

	if (t50 != -846631LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1801 = -1;
	static uint8_t x1802 = UINT8_MAX;
	int32_t x1803 = INT32_MAX;
	volatile uint16_t x1804 = 0U;

	t51 = (x1801+((x1802/x1803)<<x1804));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1822 = UINT8_MAX;
	static int8_t x1824 = 2;
	int32_t t52 = 89;

	t52 = (x1821+((x1822/x1823)<<x1824));

	if (t52 != 263) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1841 = -1;
	volatile int16_t x1842 = -122;
	volatile int16_t x1844 = 0;
	int64_t t53 = 14383693385LL;

	t53 = (x1841+((x1842/x1843)<<x1844));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1882 = 907U;
	static int64_t x1883 = INT64_MIN;
	int16_t x1884 = 7;

	t54 = (x1881+((x1882/x1883)<<x1884));

	if (t54 != -461LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1898 = UINT32_MAX;
	static uint8_t x1899 = 9U;

	t55 = (x1897+((x1898/x1899)<<x1900));

	if (t55 != 477185820U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x1901 = INT16_MAX;
	static uint8_t x1902 = 64U;
	static volatile uint8_t x1903 = UINT8_MAX;
	int32_t x1904 = 1;

	t56 = (x1901+((x1902/x1903)<<x1904));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1929 = -1;
	int64_t x1930 = INT64_MAX;
	uint32_t x1931 = 1156U;
	static uint32_t x1932 = 10U;

	t57 = (x1929+((x1930/x1931)<<x1932));

	if (t57 != 8170184226418070527LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1945 = INT8_MAX;
	int8_t x1947 = -1;
	int16_t x1948 = 0;
	uint32_t t58 = 1996405322U;

	t58 = (x1945+((x1946/x1947)<<x1948));

	if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1949 = -1LL;
	uint64_t x1951 = 33902584998869941LLU;
	uint64_t t59 = 213LLU;

	t59 = (x1949+((x1950/x1951)<<x1952));

	if (t59 != 17407LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x1953 = -53199;
	volatile int8_t x1954 = INT8_MIN;
	static int64_t x1955 = INT64_MIN;
	static uint16_t x1956 = 7U;
	volatile int64_t t60 = 883299560LL;

	t60 = (x1953+((x1954/x1955)<<x1956));

	if (t60 != -53199LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1981 = INT32_MIN;
	uint32_t x1982 = UINT32_MAX;
	uint16_t x1983 = UINT16_MAX;
	uint8_t x1984 = 1U;

	t61 = (x1981+((x1982/x1983)<<x1984));

	if (t61 != 2147614722U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2029 = INT8_MAX;
	uint32_t x2030 = 2642837U;
	int16_t x2031 = INT16_MIN;

	t62 = (x2029+((x2030/x2031)<<x2032));

	if (t62 != 127U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x2045 = -1;
	volatile int32_t t63 = -31;

	t63 = (x2045+((x2046/x2047)<<x2048));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2061 = 0U;
	uint64_t x2062 = UINT64_MAX;
	uint16_t x2063 = UINT16_MAX;
	volatile int8_t x2064 = 3;
	uint64_t t64 = 1405162691LLU;

	t64 = (x2061+((x2062/x2063)<<x2064));

	if (t64 != 2251834173947912LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2142 = 3U;
	int64_t x2143 = INT64_MIN;
	uint16_t x2144 = 0U;
	int64_t t65 = INT64_MIN;

	t65 = (x2141+((x2142/x2143)<<x2144));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2149 = -1;
	int64_t x2151 = INT64_MIN;
	uint8_t x2152 = 2U;
	static volatile int64_t t66 = 262521188609611574LL;

	t66 = (x2149+((x2150/x2151)<<x2152));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2153 = -1;
	int8_t x2155 = INT8_MIN;
	int8_t x2156 = 0;
	static int32_t t67 = 120323;

	t67 = (x2153+((x2154/x2155)<<x2156));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2158 = -1LL;
	static int16_t x2159 = -1;
	uint8_t x2160 = 34U;
	static int64_t t68 = -19671801819326LL;

	t68 = (x2157+((x2158/x2159)<<x2160));

	if (t68 != 17179836416LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2189 = 2;
	static int16_t x2190 = 10;
	static volatile int64_t x2191 = INT64_MIN;
	volatile uint16_t x2192 = 4U;
	static int64_t t69 = -30LL;

	t69 = (x2189+((x2190/x2191)<<x2192));

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2193 = -1;
	uint32_t x2194 = 284874U;
	uint32_t x2195 = 988165406U;
	uint8_t x2196 = 2U;
	uint32_t t70 = UINT32_MAX;

	t70 = (x2193+((x2194/x2195)<<x2196));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2229 = INT64_MIN;
	int8_t x2230 = 0;
	int16_t x2231 = INT16_MIN;
	volatile int32_t x2232 = 9;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x2229+((x2230/x2231)<<x2232));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x2386 = UINT16_MAX;
	uint16_t x2387 = UINT16_MAX;
	volatile int32_t t72 = 5654;

	t72 = (x2385+((x2386/x2387)<<x2388));

	if (t72 != 5727) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2413 = -277;
	uint64_t x2414 = UINT64_MAX;
	int32_t x2415 = INT32_MIN;
	uint16_t x2416 = 1U;
	uint64_t t73 = 2958025972379492982LLU;

	t73 = (x2413+((x2414/x2415)<<x2416));

	if (t73 != 18446744073709551341LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2477 = INT32_MIN;
	int32_t x2479 = INT32_MIN;
	static uint16_t x2480 = 24U;
	int32_t t74 = INT32_MIN;

	t74 = (x2477+((x2478/x2479)<<x2480));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2485 = INT32_MIN;
	static uint16_t x2486 = 21U;
	uint8_t x2487 = 17U;
	int16_t x2488 = 0;
	volatile int32_t t75 = 9871;

	t75 = (x2485+((x2486/x2487)<<x2488));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2533 = INT32_MIN;
	uint64_t x2534 = 318LLU;
	int16_t x2535 = INT16_MIN;
	uint64_t t76 = 1371537402LLU;

	t76 = (x2533+((x2534/x2535)<<x2536));

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2565 = INT8_MAX;
	static int8_t x2566 = INT8_MAX;

	t77 = (x2565+((x2566/x2567)<<x2568));

	if (t77 != 135) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x2569 = INT64_MIN;
	static uint8_t x2570 = 3U;
	volatile int8_t x2571 = INT8_MIN;
	int8_t x2572 = 11;
	int64_t t78 = INT64_MIN;

	t78 = (x2569+((x2570/x2571)<<x2572));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2642 = 59U;
	uint32_t x2643 = UINT32_MAX;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (x2641+((x2642/x2643)<<x2644));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2823 = INT16_MAX;
	int16_t x2824 = 3;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x2821+((x2822/x2823)<<x2824));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2845 = 1650767U;
	int16_t x2846 = INT16_MIN;
	static int64_t x2847 = -1LL;
	static volatile uint32_t x2848 = 20U;

	t81 = (x2845+((x2846/x2847)<<x2848));

	if (t81 != 34361389135LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2882 = INT16_MIN;
	static volatile int16_t x2883 = INT16_MIN;
	int32_t t82 = 188;

	t82 = (x2881+((x2882/x2883)<<x2884));

	if (t82 != 32771) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2949 = 2U;
	static int16_t x2950 = -1;
	uint8_t x2951 = UINT8_MAX;
	uint8_t x2952 = 24U;

	t83 = (x2949+((x2950/x2951)<<x2952));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3102 = 7720;

	t84 = (x3101+((x3102/x3103)<<x3104));

	if (t84 != 4946) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3109 = 1820LLU;
	uint8_t x3110 = 99U;
	volatile uint64_t x3111 = 92840447970854163LLU;
	uint16_t x3112 = 5U;
	volatile uint64_t t85 = 531673LLU;

	t85 = (x3109+((x3110/x3111)<<x3112));

	if (t85 != 1820LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3137 = -3026;
	int16_t x3138 = 4;
	int32_t x3139 = INT32_MAX;
	uint8_t x3140 = 2U;

	t86 = (x3137+((x3138/x3139)<<x3140));

	if (t86 != -3026) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x3201 = 0;
	int32_t x3203 = INT32_MIN;
	volatile int8_t x3204 = 9;
	volatile int32_t t87 = 272;

	t87 = (x3201+((x3202/x3203)<<x3204));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3214 = UINT16_MAX;
	static uint64_t x3215 = 1411511577584LLU;
	static volatile uint64_t x3216 = 10LLU;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x3213+((x3214/x3215)<<x3216));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x3289 = 379471644U;
	uint16_t x3290 = UINT16_MAX;
	int64_t x3291 = INT64_MIN;
	volatile int64_t t89 = -5712LL;

	t89 = (x3289+((x3290/x3291)<<x3292));

	if (t89 != 379471644LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3385 = INT8_MAX;
	int32_t x3386 = -1;
	uint16_t x3387 = UINT16_MAX;
	static uint16_t x3388 = 29U;
	int32_t t90 = -14;

	t90 = (x3385+((x3386/x3387)<<x3388));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3405 = -1;
	int32_t x3406 = -1;
	int32_t x3407 = -1;
	uint8_t x3408 = 17U;

	t91 = (x3405+((x3406/x3407)<<x3408));

	if (t91 != 131071) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3537 = 7487U;
	volatile uint32_t x3538 = 2441084U;
	volatile int16_t x3539 = INT16_MIN;
	static uint8_t x3540 = 22U;
	uint32_t t92 = 2918166U;

	t92 = (x3537+((x3538/x3539)<<x3540));

	if (t92 != 7487U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x3549 = INT16_MAX;
	static volatile int32_t x3550 = -134;
	static int16_t x3551 = -1;
	int8_t x3552 = 0;
	int32_t t93 = 3454;

	t93 = (x3549+((x3550/x3551)<<x3552));

	if (t93 != 32901) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3553 = 3289U;
	int8_t x3555 = INT8_MAX;
	volatile int8_t x3556 = 1;

	t94 = (x3553+((x3554/x3555)<<x3556));

	if (t94 != 3291) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3621 = -2795;
	static int32_t x3623 = INT32_MIN;
	int16_t x3624 = 5;
	int32_t t95 = 3631756;

	t95 = (x3621+((x3622/x3623)<<x3624));

	if (t95 != -2795) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3625 = UINT64_MAX;
	int16_t x3626 = -1;
	uint64_t x3627 = 3092802871LLU;
	volatile uint64_t t96 = 77208301929LLU;

	t96 = (x3625+((x3626/x3627)<<x3628));

	if (t96 != 12215111481343LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3693 = INT64_MIN;
	int64_t x3694 = -1LL;
	volatile int8_t x3695 = -1;

	t97 = (x3693+((x3694/x3695)<<x3696));

	if (t97 != -9223372002495037440LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3713 = INT32_MIN;
	volatile int8_t x3714 = INT8_MIN;
	volatile int16_t x3715 = INT16_MIN;
	uint16_t x3716 = 2U;

	t98 = (x3713+((x3714/x3715)<<x3716));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3757 = 2911U;
	int32_t x3758 = -1;
	uint8_t x3760 = 3U;
	uint32_t t99 = 3025957U;

	t99 = (x3757+((x3758/x3759)<<x3760));

	if (t99 != 2911U) { NG(); } else { ; }
	
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

