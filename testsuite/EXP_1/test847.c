#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = 3;
uint16_t x15 = 21674U;
int16_t x118 = 0;
int8_t x120 = INT8_MIN;
int32_t x172 = -1;
static uint64_t x188 = UINT64_MAX;
uint64_t t4 = 42560607819280LLU;
int8_t x213 = 0;
volatile uint8_t x414 = 2U;
static volatile int64_t t9 = -1691206743908LL;
int8_t x527 = INT8_MIN;
static uint64_t x953 = 4645LLU;
static uint16_t x954 = 44U;
int64_t x955 = INT64_MIN;
uint8_t x1045 = 87U;
int16_t x1057 = 208;
static volatile uint8_t x1118 = 1U;
int32_t t18 = 42355291;
volatile int8_t x1166 = 1;
uint32_t x1221 = 2856U;
volatile int64_t t22 = -2581742548290LL;
volatile int64_t x1332 = -1LL;
volatile uint32_t x1333 = 13U;
int64_t x1445 = 2299LL;
volatile int16_t x1447 = INT16_MIN;
int64_t t25 = -37645200045LL;
int32_t t26 = -1;
static volatile int64_t t27 = -152415517083LL;
uint64_t x1773 = 52872231LLU;
uint8_t x1798 = 9U;
int32_t x1888 = INT32_MAX;
int32_t t31 = 9081924;
volatile uint8_t x1949 = 25U;
uint64_t x1969 = 57LLU;
volatile uint64_t t33 = 2LLU;
static int64_t x2049 = 993118067LL;
uint8_t x2066 = 1U;
uint16_t x2069 = UINT16_MAX;
uint8_t x2234 = 17U;
int8_t x2236 = INT8_MAX;
int64_t x2328 = -1LL;
static int32_t x2379 = INT32_MAX;
uint32_t x2417 = 1498913U;
int32_t x2628 = -1;
uint64_t t44 = 102077LLU;
uint32_t t45 = 29745U;
uint64_t x2733 = 1166461943163562LLU;
volatile uint16_t x2790 = 2U;
uint16_t x2998 = 5U;
static int8_t x3030 = 0;
static uint64_t x3032 = UINT64_MAX;
volatile int32_t x3067 = INT32_MIN;
int16_t x3068 = -1;
uint64_t x3189 = UINT64_MAX;
int8_t x3192 = INT8_MAX;
uint32_t t55 = 1028965759U;
int64_t x3452 = INT64_MIN;
static volatile uint64_t x3513 = 1509370278362106LLU;
uint8_t x3514 = 4U;
volatile int8_t x3720 = -61;
uint64_t x3740 = 520895074174LLU;
volatile int8_t x3885 = 41;
uint64_t x3909 = 47LLU;
int8_t x3910 = 61;
static int64_t t64 = -977080533549LL;
uint32_t x4005 = UINT32_MAX;
uint8_t x4006 = 6U;
uint64_t x4077 = UINT64_MAX;
int8_t x4080 = INT8_MIN;
volatile uint64_t t68 = 14LLU;
uint16_t x4261 = UINT16_MAX;
uint8_t x4404 = 6U;
int64_t t73 = -2947408532LL;
volatile int8_t x4498 = 1;
int8_t x4526 = 1;
volatile int32_t t76 = 3943022;
static volatile uint32_t x4575 = UINT32_MAX;
int64_t t79 = 1762LL;
uint8_t x4893 = 107U;
int16_t x4894 = 1;
volatile uint32_t t80 = 34198U;
static int64_t x5015 = 30195110468914LL;
uint16_t x5357 = UINT16_MAX;
uint8_t x5359 = UINT8_MAX;
uint32_t t85 = 14745885U;
uint16_t x5498 = 4U;
static int32_t t88 = -853163;
static volatile uint64_t t89 = 428703528480LLU;
uint16_t x5769 = UINT16_MAX;
int8_t x5931 = INT8_MIN;
int16_t x5950 = 26;
volatile int32_t x6087 = INT32_MIN;
static volatile int64_t t96 = 189961711381205410LL;
static int16_t x6134 = 0;


void f0(void) {
	uint16_t x9 = 550U;
	int8_t x11 = -1;
	volatile int8_t x12 = 47;
	volatile int32_t t0 = 167803131;

	t0 = (((x9<<x10)+x11)-x12);

	if (t0 != 4352) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = 11555U;
	uint64_t x14 = 2LLU;
	volatile int64_t x16 = 1737097339928317LL;
	int64_t t1 = 35585LL;

	t1 = (((x13<<x14)+x15)-x16);

	if (t1 != -1737097339860423LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x117 = 685545LLU;
	static volatile int16_t x119 = -1;
	uint64_t t2 = 100274998666402680LLU;

	t2 = (((x117<<x118)+x119)-x120);

	if (t2 != 685672LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x169 = 3742283LLU;
	uint16_t x170 = 1U;
	int8_t x171 = INT8_MAX;
	uint64_t t3 = 75149757265LLU;

	t3 = (((x169<<x170)+x171)-x172);

	if (t3 != 7484694LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 2U;
	int16_t x187 = 1;

	t4 = (((x185<<x186)+x187)-x188);

	if (t4 != 4294967294LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x214 = 31U;
	volatile uint64_t x215 = 3526917572136450086LLU;
	uint16_t x216 = 9569U;
	static volatile uint64_t t5 = 1938361163851475854LLU;

	t5 = (((x213<<x214)+x215)-x216);

	if (t5 != 3526917572136440517LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x321 = 9U;
	int16_t x322 = 19;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t6 = -1207793;

	t6 = (((x321<<x322)+x323)-x324);

	if (t6 != 4685952) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x413 = 3;
	static uint64_t x415 = UINT64_MAX;
	static int16_t x416 = INT16_MAX;
	uint64_t t7 = 125LLU;

	t7 = (((x413<<x414)+x415)-x416);

	if (t7 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x473 = 189;
	static uint64_t x474 = 2LLU;
	static int64_t x475 = -8168LL;
	volatile uint32_t x476 = UINT32_MAX;
	int64_t t8 = 218825234709380265LL;

	t8 = (((x473<<x474)+x475)-x476);

	if (t8 != -4294974707LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x493 = INT16_MAX;
	static uint32_t x494 = 0U;
	static int8_t x495 = INT8_MAX;
	volatile int64_t x496 = INT64_MAX;

	t9 = (((x493<<x494)+x495)-x496);

	if (t9 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x525 = UINT32_MAX;
	uint8_t x526 = 5U;
	int32_t x528 = INT32_MIN;
	uint32_t t10 = 4328U;

	t10 = (((x525<<x526)+x527)-x528);

	if (t10 != 2147483488U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x557 = UINT8_MAX;
	volatile int8_t x558 = 1;
	uint16_t x559 = UINT16_MAX;
	volatile uint16_t x560 = 800U;
	volatile int32_t t11 = 37905154;

	t11 = (((x557<<x558)+x559)-x560);

	if (t11 != 65245) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x577 = UINT32_MAX;
	int8_t x578 = 0;
	static int16_t x579 = -1;
	int32_t x580 = INT32_MIN;
	volatile uint32_t t12 = 5U;

	t12 = (((x577<<x578)+x579)-x580);

	if (t12 != 2147483646U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x705 = 23U;
	static uint16_t x706 = 0U;
	volatile uint32_t x707 = UINT32_MAX;
	static int32_t x708 = 7089535;
	uint32_t t13 = 100683U;

	t13 = (((x705<<x706)+x707)-x708);

	if (t13 != 4287877783U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x956 = UINT16_MAX;
	volatile uint64_t t14 = 16164505306LLU;

	t14 = (((x953<<x954)+x955)-x956);

	if (t14 != 9305087741031022593LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x993 = 998308LL;
	static volatile uint8_t x994 = 0U;
	uint64_t x995 = 111583479410LLU;
	int64_t x996 = INT64_MIN;
	static uint64_t t15 = 11940996027LLU;

	t15 = (((x993<<x994)+x995)-x996);

	if (t15 != 9223372148439253526LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1046 = 1U;
	int32_t x1047 = -353881576;
	int16_t x1048 = 3;
	volatile int32_t t16 = 191270616;

	t16 = (((x1045<<x1046)+x1047)-x1048);

	if (t16 != -353881405) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x1058 = 3U;
	int64_t x1059 = 47876078988LL;
	int8_t x1060 = INT8_MIN;
	int64_t t17 = -11731LL;

	t17 = (((x1057<<x1058)+x1059)-x1060);

	if (t17 != 47876080780LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1117 = UINT8_MAX;
	static int8_t x1119 = INT8_MIN;
	uint16_t x1120 = 22917U;

	t18 = (((x1117<<x1118)+x1119)-x1120);

	if (t18 != -22535) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1141 = UINT64_MAX;
	int32_t x1142 = 23;
	int16_t x1143 = -13898;
	volatile int32_t x1144 = -26299333;
	volatile uint64_t t19 = 5994021384LLU;

	t19 = (((x1141<<x1142)+x1143)-x1144);

	if (t19 != 17896827LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1165 = UINT32_MAX;
	int32_t x1167 = INT32_MIN;
	uint8_t x1168 = 2U;
	uint32_t t20 = 0U;

	t20 = (((x1165<<x1166)+x1167)-x1168);

	if (t20 != 2147483644U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1222 = 1;
	int16_t x1223 = INT16_MIN;
	int8_t x1224 = -1;
	uint32_t t21 = 22U;

	t21 = (((x1221<<x1222)+x1223)-x1224);

	if (t21 != 4294940241U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1309 = 5;
	int8_t x1310 = 1;
	int64_t x1311 = 8LL;
	int64_t x1312 = 413396211734LL;

	t22 = (((x1309<<x1310)+x1311)-x1312);

	if (t22 != -413396211716LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1329 = UINT16_MAX;
	uint8_t x1330 = 15U;
	int16_t x1331 = INT16_MIN;
	volatile int64_t t23 = 63LL;

	t23 = (((x1329<<x1330)+x1331)-x1332);

	if (t23 != 2147418113LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1334 = 4;
	static int64_t x1335 = INT64_MIN;
	int16_t x1336 = -1;
	volatile int64_t t24 = -48386092LL;

	t24 = (((x1333<<x1334)+x1335)-x1336);

	if (t24 != -9223372036854775599LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1446 = 3U;
	int64_t x1448 = -1LL;

	t25 = (((x1445<<x1446)+x1447)-x1448);

	if (t25 != -14375LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1505 = 4002U;
	static uint8_t x1506 = 1U;
	int32_t x1507 = INT32_MIN;
	uint16_t x1508 = 0U;

	t26 = (((x1505<<x1506)+x1507)-x1508);

	if (t26 != -2147475644) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1541 = 17334U;
	int8_t x1542 = 0;
	int64_t x1543 = INT64_MIN;
	int16_t x1544 = -1;

	t27 = (((x1541<<x1542)+x1543)-x1544);

	if (t27 != -9223372036854758473LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1774 = 4U;
	int64_t x1775 = INT64_MIN;
	int64_t x1776 = INT64_MIN;
	uint64_t t28 = 221LLU;

	t28 = (((x1773<<x1774)+x1775)-x1776);

	if (t28 != 845955696LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1777 = UINT32_MAX;
	uint8_t x1778 = 1U;
	int16_t x1779 = INT16_MIN;
	int32_t x1780 = -1;
	static volatile uint32_t t29 = 1879671U;

	t29 = (((x1777<<x1778)+x1779)-x1780);

	if (t29 != 4294934527U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1797 = UINT64_MAX;
	uint64_t x1799 = 1050084417LLU;
	int16_t x1800 = -7427;
	uint64_t t30 = 1158109758251954LLU;

	t30 = (((x1797<<x1798)+x1799)-x1800);

	if (t30 != 1050091332LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1885 = 3961;
	uint16_t x1886 = 1U;
	volatile int16_t x1887 = -1;

	t31 = (((x1885<<x1886)+x1887)-x1888);

	if (t31 != -2147475726) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1950 = 0LLU;
	int64_t x1951 = 726492LL;
	int32_t x1952 = INT32_MIN;
	int64_t t32 = 33251LL;

	t32 = (((x1949<<x1950)+x1951)-x1952);

	if (t32 != 2148210165LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1970 = 29U;
	uint8_t x1971 = UINT8_MAX;
	int32_t x1972 = INT32_MIN;

	t33 = (((x1969<<x1970)+x1971)-x1972);

	if (t33 != 32749125887LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2050 = 0U;
	int16_t x2051 = 334;
	int64_t x2052 = -1LL;
	int64_t t34 = 597460884850307381LL;

	t34 = (((x2049<<x2050)+x2051)-x2052);

	if (t34 != 993118402LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2065 = UINT64_MAX;
	uint64_t x2067 = UINT64_MAX;
	int64_t x2068 = INT64_MIN;
	uint64_t t35 = 192LLU;

	t35 = (((x2065<<x2066)+x2067)-x2068);

	if (t35 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2070 = 1U;
	int8_t x2071 = INT8_MAX;
	uint16_t x2072 = UINT16_MAX;
	int32_t t36 = 5451510;

	t36 = (((x2069<<x2070)+x2071)-x2072);

	if (t36 != 65662) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2233 = 4064690199079029892LLU;
	static int8_t x2235 = INT8_MAX;
	volatile uint64_t t37 = 168LLU;

	t37 = (((x2233<<x2234)+x2235)-x2236);

	if (t37 != 6658180881045782528LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2325 = UINT16_MAX;
	static volatile int8_t x2326 = 14;
	static int32_t x2327 = INT32_MIN;
	static int64_t t38 = -31438973881336391LL;

	t38 = (((x2325<<x2326)+x2327)-x2328);

	if (t38 != -1073758207LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2341 = 1;
	uint8_t x2342 = 24U;
	uint32_t x2343 = 57397U;
	static volatile int16_t x2344 = -38;
	uint32_t t39 = 679897913U;

	t39 = (((x2341<<x2342)+x2343)-x2344);

	if (t39 != 16834651U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2377 = 102503U;
	uint8_t x2378 = 0U;
	volatile int32_t x2380 = INT32_MIN;
	volatile uint32_t t40 = 775U;

	t40 = (((x2377<<x2378)+x2379)-x2380);

	if (t40 != 102502U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2418 = 1U;
	int8_t x2419 = INT8_MIN;
	uint16_t x2420 = 109U;
	volatile uint32_t t41 = 7U;

	t41 = (((x2417<<x2418)+x2419)-x2420);

	if (t41 != 2997589U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2433 = UINT8_MAX;
	volatile uint64_t x2434 = 0LLU;
	int8_t x2435 = -55;
	uint64_t x2436 = UINT64_MAX;
	uint64_t t42 = 658201561328458526LLU;

	t42 = (((x2433<<x2434)+x2435)-x2436);

	if (t42 != 201LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2561 = 1970112004U;
	uint16_t x2562 = 1U;
	int32_t x2563 = 2093316;
	static uint16_t x2564 = 35U;
	static uint32_t t43 = 0U;

	t43 = (((x2561<<x2562)+x2563)-x2564);

	if (t43 != 3942317289U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2625 = 27U;
	uint16_t x2626 = 0U;
	uint64_t x2627 = UINT64_MAX;

	t44 = (((x2625<<x2626)+x2627)-x2628);

	if (t44 != 27LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2649 = 19870U;
	uint8_t x2650 = 14U;
	volatile uint16_t x2651 = UINT16_MAX;
	uint16_t x2652 = UINT16_MAX;

	t45 = (((x2649<<x2650)+x2651)-x2652);

	if (t45 != 325550080U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2734 = 6;
	volatile int32_t x2735 = -1;
	volatile uint8_t x2736 = 6U;
	uint64_t t46 = 1289827LLU;

	t46 = (((x2733<<x2734)+x2735)-x2736);

	if (t46 != 74653564362467961LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x2773 = 206117311351735LLU;
	uint16_t x2774 = 55U;
	int16_t x2775 = INT16_MAX;
	static uint64_t x2776 = UINT64_MAX;
	static volatile uint64_t t47 = 2489268LLU;

	t47 = (((x2773<<x2774)+x2775)-x2776);

	if (t47 != 15816641891325214720LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2781 = 8527229427078LL;
	volatile uint8_t x2782 = 7U;
	int16_t x2783 = INT16_MIN;
	volatile int16_t x2784 = INT16_MIN;
	static int64_t t48 = -843910979914280238LL;

	t48 = (((x2781<<x2782)+x2783)-x2784);

	if (t48 != 1091485366665984LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2789 = 1929443474022308LLU;
	int32_t x2791 = INT32_MIN;
	uint8_t x2792 = UINT8_MAX;
	uint64_t t49 = 3LLU;

	t49 = (((x2789<<x2790)+x2791)-x2792);

	if (t49 != 7717771748605329LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2853 = 14U;
	static uint16_t x2854 = 12U;
	static uint16_t x2855 = 2043U;
	int64_t x2856 = INT64_MAX;
	static int64_t t50 = -28955553259732LL;

	t50 = (((x2853<<x2854)+x2855)-x2856);

	if (t50 != -9223372036854716420LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2997 = INT16_MAX;
	volatile int16_t x2999 = -2082;
	uint8_t x3000 = 0U;
	volatile int32_t t51 = 229123742;

	t51 = (((x2997<<x2998)+x2999)-x3000);

	if (t51 != 1046462) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3029 = INT8_MAX;
	int16_t x3031 = -1;
	uint64_t t52 = 793943704461021LLU;

	t52 = (((x3029<<x3030)+x3031)-x3032);

	if (t52 != 127LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3065 = UINT16_MAX;
	int8_t x3066 = 6;
	int32_t t53 = -6372305;

	t53 = (((x3065<<x3066)+x3067)-x3068);

	if (t53 != -2143289407) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3190 = 2;
	int64_t x3191 = 53178770751023LL;
	volatile uint64_t t54 = 188730899749141731LLU;

	t54 = (((x3189<<x3190)+x3191)-x3192);

	if (t54 != 53178770750892LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3249 = UINT8_MAX;
	uint64_t x3250 = 1LLU;
	uint32_t x3251 = 1394091U;
	uint16_t x3252 = 5930U;

	t55 = (((x3249<<x3250)+x3251)-x3252);

	if (t55 != 1388671U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3449 = 3317;
	int16_t x3450 = 4;
	static int32_t x3451 = INT32_MIN;
	int64_t t56 = -171258526LL;

	t56 = (((x3449<<x3450)+x3451)-x3452);

	if (t56 != 9223372034707345232LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3515 = 12;
	int32_t x3516 = -1;
	volatile uint64_t t57 = 1652043LLU;

	t57 = (((x3513<<x3514)+x3515)-x3516);

	if (t57 != 24149924453793709LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3581 = 1U;
	volatile uint8_t x3582 = 1U;
	int32_t x3583 = INT32_MIN;
	int16_t x3584 = -2;
	volatile int32_t t58 = 11;

	t58 = (((x3581<<x3582)+x3583)-x3584);

	if (t58 != -2147483644) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3673 = 8;
	static uint8_t x3674 = 0U;
	int64_t x3675 = -1455337LL;
	static uint8_t x3676 = 5U;
	int64_t t59 = -1451599941384954468LL;

	t59 = (((x3673<<x3674)+x3675)-x3676);

	if (t59 != -1455334LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3717 = INT16_MAX;
	static volatile uint16_t x3718 = 2U;
	static int32_t x3719 = -1;
	int32_t t60 = 5;

	t60 = (((x3717<<x3718)+x3719)-x3720);

	if (t60 != 131128) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3737 = 2817U;
	volatile uint8_t x3738 = 3U;
	static int32_t x3739 = INT32_MIN;
	volatile uint64_t t61 = 23222357988LLU;

	t61 = (((x3737<<x3738)+x3739)-x3740);

	if (t61 != 18446743554961983626LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3886 = 3U;
	int8_t x3887 = INT8_MIN;
	int64_t x3888 = -1LL;
	int64_t t62 = -98LL;

	t62 = (((x3885<<x3886)+x3887)-x3888);

	if (t62 != 201LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3911 = 821U;
	volatile uint8_t x3912 = 38U;
	uint64_t t63 = 30LLU;

	t63 = (((x3909<<x3910)+x3911)-x3912);

	if (t63 != 16140901064495858447LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3941 = 74;
	uint8_t x3942 = 4U;
	volatile int16_t x3943 = INT16_MIN;
	static int64_t x3944 = INT64_MIN;

	t64 = (((x3941<<x3942)+x3943)-x3944);

	if (t64 != 9223372036854744224LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3977 = 5U;
	uint16_t x3978 = 0U;
	uint8_t x3979 = UINT8_MAX;
	int32_t x3980 = -246;
	volatile uint32_t t65 = 30872U;

	t65 = (((x3977<<x3978)+x3979)-x3980);

	if (t65 != 506U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4007 = -1LL;
	volatile int32_t x4008 = INT32_MIN;
	volatile int64_t t66 = 11979183508206108LL;

	t66 = (((x4005<<x4006)+x4007)-x4008);

	if (t66 != 6442450879LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4078 = 7;
	uint8_t x4079 = 1U;
	uint64_t t67 = 39270930LLU;

	t67 = (((x4077<<x4078)+x4079)-x4080);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4097 = 3542274491331LLU;
	int8_t x4098 = 8;
	volatile uint64_t x4099 = 7907333268560LLU;
	static volatile int32_t x4100 = -238296322;

	t68 = (((x4097<<x4098)+x4099)-x4100);

	if (t68 != 914729841345618LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4181 = 403600LLU;
	int8_t x4182 = 0;
	volatile int32_t x4183 = INT32_MIN;
	int64_t x4184 = INT64_MIN;
	volatile uint64_t t69 = 26175446381LLU;

	t69 = (((x4181<<x4182)+x4183)-x4184);

	if (t69 != 9223372034707695760LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4193 = 26;
	uint16_t x4194 = 3U;
	static int64_t x4195 = -9074724398104478LL;
	int32_t x4196 = INT32_MIN;
	static int64_t t70 = 153632534390446406LL;

	t70 = (((x4193<<x4194)+x4195)-x4196);

	if (t70 != -9074722250620622LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4262 = 5U;
	volatile uint64_t x4263 = 9849218LLU;
	uint16_t x4264 = 356U;
	uint64_t t71 = 429711621534611LLU;

	t71 = (((x4261<<x4262)+x4263)-x4264);

	if (t71 != 11945982LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x4393 = 3U;
	uint8_t x4394 = 13U;
	int16_t x4395 = -1;
	static volatile uint16_t x4396 = 6U;
	volatile int32_t t72 = 73469;

	t72 = (((x4393<<x4394)+x4395)-x4396);

	if (t72 != 24569) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4401 = 1000308868U;
	uint16_t x4402 = 3U;
	volatile int64_t x4403 = -1LL;

	t73 = (((x4401<<x4402)+x4403)-x4404);

	if (t73 != 3707503641LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4409 = INT8_MAX;
	int8_t x4410 = 18;
	static int16_t x4411 = INT16_MAX;
	int16_t x4412 = 6;
	int32_t t74 = -1478713;

	t74 = (((x4409<<x4410)+x4411)-x4412);

	if (t74 != 33325049) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4497 = 4U;
	uint8_t x4499 = 58U;
	volatile uint64_t x4500 = UINT64_MAX;
	uint64_t t75 = 9052308182293LLU;

	t75 = (((x4497<<x4498)+x4499)-x4500);

	if (t75 != 67LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4525 = 7;
	int32_t x4527 = 264286329;
	uint16_t x4528 = 3084U;

	t76 = (((x4525<<x4526)+x4527)-x4528);

	if (t76 != 264283259) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4545 = 24429U;
	int8_t x4546 = 7;
	static uint16_t x4547 = 75U;
	int16_t x4548 = INT16_MIN;
	uint32_t t77 = 1209269098U;

	t77 = (((x4545<<x4546)+x4547)-x4548);

	if (t77 != 3159755U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4553 = UINT32_MAX;
	static int8_t x4554 = 26;
	static uint32_t x4555 = UINT32_MAX;
	int8_t x4556 = INT8_MIN;
	uint32_t t78 = 344U;

	t78 = (((x4553<<x4554)+x4555)-x4556);

	if (t78 != 4227858559U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4573 = 15U;
	static int16_t x4574 = 7;
	static int64_t x4576 = -3LL;

	t79 = (((x4573<<x4574)+x4575)-x4576);

	if (t79 != 1922LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x4895 = INT8_MIN;
	uint32_t x4896 = 2U;

	t80 = (((x4893<<x4894)+x4895)-x4896);

	if (t80 != 84U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4905 = UINT16_MAX;
	static uint16_t x4906 = 1U;
	uint64_t x4907 = UINT64_MAX;
	static int64_t x4908 = INT64_MAX;
	static volatile uint64_t t81 = 303706895585LLU;

	t81 = (((x4905<<x4906)+x4907)-x4908);

	if (t81 != 9223372036854906878LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4973 = 113120956942LLU;
	uint8_t x4974 = 1U;
	volatile uint8_t x4975 = 7U;
	uint64_t x4976 = 1LLU;
	static volatile uint64_t t82 = 7395LLU;

	t82 = (((x4973<<x4974)+x4975)-x4976);

	if (t82 != 226241913890LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x5013 = UINT8_MAX;
	int8_t x5014 = 1;
	volatile int16_t x5016 = INT16_MIN;
	int64_t t83 = 2443908LL;

	t83 = (((x5013<<x5014)+x5015)-x5016);

	if (t83 != 30195110502192LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5069 = 58301533U;
	volatile uint8_t x5070 = 3U;
	int32_t x5071 = -7912;
	int16_t x5072 = INT16_MIN;
	uint32_t t84 = 99128U;

	t84 = (((x5069<<x5070)+x5071)-x5072);

	if (t84 != 466437120U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x5358 = 4;
	uint32_t x5360 = UINT32_MAX;

	t85 = (((x5357<<x5358)+x5359)-x5360);

	if (t85 != 1048816U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5497 = 80233LL;
	int16_t x5499 = -1;
	int32_t x5500 = INT32_MIN;
	int64_t t86 = -168840349002636130LL;

	t86 = (((x5497<<x5498)+x5499)-x5500);

	if (t86 != 2148767375LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5597 = UINT8_MAX;
	static uint16_t x5598 = 0U;
	uint32_t x5599 = UINT32_MAX;
	static int16_t x5600 = INT16_MAX;
	volatile uint32_t t87 = 4530695U;

	t87 = (((x5597<<x5598)+x5599)-x5600);

	if (t87 != 4294934783U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5665 = 7907U;
	int8_t x5666 = 3;
	volatile int8_t x5667 = -1;
	int32_t x5668 = INT32_MAX;

	t88 = (((x5665<<x5666)+x5667)-x5668);

	if (t88 != -2147420392) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5749 = 19197495766LLU;
	uint16_t x5750 = 3U;
	volatile uint32_t x5751 = 286403915U;
	uint64_t x5752 = 724838695602569LLU;

	t89 = (((x5749<<x5750)+x5751)-x5752);

	if (t89 != 18446019388880319090LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5770 = 1U;
	int32_t x5771 = -10376;
	int8_t x5772 = 50;
	int32_t t90 = 2664335;

	t90 = (((x5769<<x5770)+x5771)-x5772);

	if (t90 != 120644) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5869 = UINT64_MAX;
	static int32_t x5870 = 0;
	int64_t x5871 = -217826239LL;
	int64_t x5872 = INT64_MIN;
	uint64_t t91 = 51426LLU;

	t91 = (((x5869<<x5870)+x5871)-x5872);

	if (t91 != 9223372036636949568LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x5929 = UINT64_MAX;
	static volatile uint8_t x5930 = 62U;
	static uint64_t x5932 = 1947310454286652LLU;
	static volatile uint64_t t92 = 436626728437LLU;

	t92 = (((x5929<<x5930)+x5931)-x5932);

	if (t92 != 13833110744827876932LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5933 = INT16_MAX;
	int8_t x5934 = 6;
	int8_t x5935 = INT8_MIN;
	volatile uint8_t x5936 = 13U;
	static volatile int32_t t93 = 271;

	t93 = (((x5933<<x5934)+x5935)-x5936);

	if (t93 != 2096947) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5949 = UINT32_MAX;
	int32_t x5951 = INT32_MAX;
	static int16_t x5952 = INT16_MIN;
	volatile uint32_t t94 = 1476587120U;

	t94 = (((x5949<<x5950)+x5951)-x5952);

	if (t94 != 2080407551U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6081 = 83951229079650460LLU;
	int8_t x6082 = 27;
	static uint16_t x6083 = 1U;
	volatile uint8_t x6084 = 102U;
	static uint64_t t95 = 17LLU;

	t95 = (((x6081<<x6082)+x6083)-x6084);

	if (t95 != 10781054578909511579LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x6085 = INT8_MAX;
	static int8_t x6086 = 1;
	static int64_t x6088 = -1LL;

	t96 = (((x6085<<x6086)+x6087)-x6088);

	if (t96 != -2147483393LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x6133 = 985629;
	static int16_t x6135 = -1;
	uint32_t x6136 = 4059573U;
	volatile uint32_t t97 = 971831120U;

	t97 = (((x6133<<x6134)+x6135)-x6136);

	if (t97 != 4291893351U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6261 = 1006031397743202LLU;
	volatile int8_t x6262 = 6;
	volatile uint32_t x6263 = 117417305U;
	static uint8_t x6264 = 0U;
	volatile uint64_t t98 = 71305251178265LLU;

	t98 = (((x6261<<x6262)+x6263)-x6264);

	if (t98 != 64386009572982233LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6369 = 1360405LL;
	volatile int16_t x6370 = 3;
	uint64_t x6371 = UINT64_MAX;
	uint32_t x6372 = UINT32_MAX;
	volatile uint64_t t99 = 69433529554841LLU;

	t99 = (((x6369<<x6370)+x6371)-x6372);

	if (t99 != 18446744069425467560LLU) { NG(); } else { ; }
	
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

