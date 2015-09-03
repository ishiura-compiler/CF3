#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 7U;
int32_t t6 = 1764953;
static volatile uint64_t x244 = 3LLU;
int8_t x319 = -1;
volatile int16_t x338 = -4213;
uint64_t x561 = 3539724566282044LLU;
volatile uint64_t t13 = 172923613561LLU;
static uint64_t x579 = 20LLU;
uint64_t t15 = 27974028689245LLU;
uint8_t x593 = UINT8_MAX;
static volatile int64_t t18 = -421309533677LL;
uint64_t x641 = 5271524986LLU;
int32_t x689 = 1;
volatile int32_t x721 = 29814874;
uint64_t x722 = UINT64_MAX;
int32_t x723 = INT32_MAX;
int16_t x749 = INT16_MIN;
int64_t x751 = INT64_MAX;
int64_t x786 = -1LL;
int64_t t23 = -263904116LL;
uint8_t x960 = 5U;
int64_t t26 = 21499003410LL;
int64_t t27 = -1790715925794780127LL;
static volatile int64_t t28 = -1188232395378184930LL;
static uint8_t x1093 = UINT8_MAX;
int16_t x1106 = -1;
int16_t x1107 = INT16_MAX;
volatile uint64_t x1108 = 1LLU;
volatile int32_t t31 = 2486;
int16_t x1185 = 25;
int32_t t33 = -1;
static uint16_t x1241 = 772U;
volatile uint8_t x1268 = 2U;
static volatile int32_t t35 = 7;
int8_t x1293 = -15;
uint8_t x1328 = 28U;
int64_t x1342 = INT64_MIN;
volatile int16_t x1354 = -6;
volatile int32_t x1371 = INT32_MIN;
volatile int32_t t40 = 103043878;
volatile int8_t x1401 = INT8_MIN;
int64_t x1402 = 434022LL;
int64_t x1403 = INT64_MIN;
uint8_t x1422 = 48U;
uint32_t x1562 = 317881U;
uint32_t t47 = 384U;
int16_t x1565 = INT16_MAX;
volatile uint64_t x1864 = 26LLU;
int32_t x1930 = -368;
int8_t x1973 = -1;
static volatile int32_t t54 = -1256727;
static int64_t t55 = -2665835LL;
volatile uint32_t x2093 = UINT32_MAX;
uint32_t t58 = 111U;
uint8_t x2108 = 14U;
static volatile int64_t t62 = -109005LL;
int8_t x2151 = INT8_MIN;
static int32_t t63 = 137621;
static int16_t x2153 = INT16_MIN;
int16_t x2154 = -1;
int16_t x2450 = INT16_MIN;
uint64_t t67 = 236090518529LLU;
int8_t x2453 = INT8_MIN;
static int16_t x2498 = INT16_MIN;
int64_t x2499 = 219074LL;
uint32_t x2532 = 44U;
int8_t x2558 = -1;
volatile uint16_t x2706 = 11684U;
uint32_t x2707 = 7876854U;
uint64_t x2919 = 300008888LLU;
static int16_t x2939 = 4641;
int8_t x2966 = -44;
int16_t x2989 = 1;
uint64_t x2991 = 1546619847LLU;
static uint64_t t79 = 5486670477968239194LLU;
static uint16_t x3039 = 509U;
static uint8_t x3040 = 4U;
volatile int32_t t81 = 871259;
uint64_t x3088 = 8LLU;
int64_t x3103 = INT64_MIN;
volatile uint64_t x3147 = 6048612634129470LLU;
uint8_t x3148 = 0U;
volatile uint64_t t84 = 131057406772338919LLU;
int16_t x3157 = INT16_MAX;
volatile int16_t x3167 = INT16_MIN;
int8_t x3220 = 32;
int32_t t89 = -857686793;
int8_t x3283 = INT8_MIN;
int32_t x3363 = -1;
int16_t x3404 = 52;
static volatile int64_t t92 = 1000033043LL;
int64_t x3417 = 662479608721986140LL;
int32_t x3478 = INT32_MAX;
int16_t x3479 = INT16_MIN;
volatile int64_t t95 = 441254557376480LL;
uint16_t x3525 = 5U;
static uint8_t x3576 = 30U;
volatile int16_t x3598 = INT16_MIN;
int32_t x3599 = -3450605;


void f0(void) {
	static int16_t x17 = 1;
	uint32_t x18 = 64728U;
	static uint32_t x19 = UINT32_MAX;
	static uint8_t x20 = 1U;
	uint32_t t0 = 10255U;

	t0 = (((x17|x18)/x19)>>x20);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x21 = UINT64_MAX;
	volatile int64_t x22 = 2LL;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = 1U;
	uint64_t t1 = 448734LLU;

	t1 = (((x21|x22)/x23)>>x24);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x73 = -1364;
	int8_t x74 = INT8_MAX;
	uint32_t x75 = 136270U;
	volatile uint64_t x76 = 15LLU;

	t2 = (((x73|x74)/x75)>>x76);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x121 = -291374;
	int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 0U;
	static int32_t t3 = -724551;

	t3 = (((x121|x122)/x123)>>x124);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x185 = INT64_MIN;
	uint64_t x186 = 8318887833909LLU;
	int16_t x187 = INT16_MIN;
	volatile int8_t x188 = 14;
	volatile uint64_t t4 = 49667678177630796LLU;

	t4 = (((x185|x186)/x187)>>x188);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x194 = 12U;
	volatile int32_t x195 = INT32_MAX;
	uint64_t x196 = 0LLU;
	int32_t t5 = 752;

	t5 = (((x193|x194)/x195)>>x196);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x229 = INT8_MIN;
	static uint16_t x230 = 0U;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = 1U;

	t6 = (((x229|x230)/x231)>>x232);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x241 = 11;
	int16_t x242 = -15639;
	static uint64_t x243 = 84397LLU;
	uint64_t t7 = 148711059801042LLU;

	t7 = (((x241|x242)/x243)>>x244);

	if (t7 != 27321385940420LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x317 = 3661137832152557762LLU;
	uint8_t x318 = UINT8_MAX;
	static int16_t x320 = 4;
	uint64_t t8 = 616738459907071003LLU;

	t8 = (((x317|x318)/x319)>>x320);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x337 = INT16_MAX;
	int16_t x339 = -1;
	uint32_t x340 = 1U;
	static volatile int32_t t9 = 99;

	t9 = (((x337|x338)/x339)>>x340);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = 1;
	int64_t x387 = INT64_MIN;
	int8_t x388 = 0;
	int64_t t10 = 372LL;

	t10 = (((x385|x386)/x387)>>x388);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x405 = -463;
	volatile int16_t x406 = INT16_MAX;
	int8_t x407 = -1;
	uint8_t x408 = 0U;
	volatile int32_t t11 = -98498;

	t11 = (((x405|x406)/x407)>>x408);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x493 = 1864964LL;
	static volatile int32_t x494 = INT32_MAX;
	int32_t x495 = INT32_MIN;
	uint16_t x496 = 28U;
	int64_t t12 = 179478LL;

	t12 = (((x493|x494)/x495)>>x496);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MIN;
	uint8_t x564 = 16U;

	t13 = (((x561|x562)/x563)>>x564);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x569 = INT16_MIN;
	static int32_t x570 = -1;
	uint8_t x571 = UINT8_MAX;
	volatile uint16_t x572 = 0U;
	volatile int32_t t14 = 3;

	t14 = (((x569|x570)/x571)>>x572);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x577 = INT32_MAX;
	static int8_t x578 = INT8_MIN;
	uint8_t x580 = 7U;

	t15 = (((x577|x578)/x579)>>x580);

	if (t15 != 7205759403792793LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x594 = INT64_MAX;
	int32_t x595 = INT32_MAX;
	uint8_t x596 = 3U;
	int64_t t16 = -25LL;

	t16 = (((x593|x594)/x595)>>x596);

	if (t16 != 536870912LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x625 = UINT64_MAX;
	uint16_t x626 = 1591U;
	int64_t x627 = 124922345LL;
	int16_t x628 = 5;
	uint64_t t17 = 294268LLU;

	t17 = (((x625|x626)/x627)>>x628);

	if (t17 != 4614552763LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x633 = 0;
	int16_t x634 = INT16_MIN;
	int64_t x635 = 225609751610LL;
	int8_t x636 = 1;

	t18 = (((x633|x634)/x635)>>x636);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x642 = 284;
	int64_t x643 = 57LL;
	static uint32_t x644 = 52U;
	volatile uint64_t t19 = 5054LLU;

	t19 = (((x641|x642)/x643)>>x644);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x690 = INT32_MIN;
	static int16_t x691 = INT16_MIN;
	uint8_t x692 = 3U;
	volatile int32_t t20 = -70236236;

	t20 = (((x689|x690)/x691)>>x692);

	if (t20 != 8191) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x724 = 1;
	uint64_t t21 = 24337949177623LLU;

	t21 = (((x721|x722)/x723)>>x724);

	if (t21 != 4294967298LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x750 = INT64_MAX;
	uint8_t x752 = 16U;
	int64_t t22 = -1136771LL;

	t22 = (((x749|x750)/x751)>>x752);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x785 = UINT8_MAX;
	volatile int8_t x787 = -1;
	volatile uint8_t x788 = 5U;

	t23 = (((x785|x786)/x787)>>x788);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x829 = 3U;
	int16_t x830 = INT16_MIN;
	int8_t x831 = -1;
	uint8_t x832 = 4U;
	int32_t t24 = 1139;

	t24 = (((x829|x830)/x831)>>x832);

	if (t24 != 2047) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x893 = INT64_MIN;
	static int32_t x894 = -13007036;
	int64_t x895 = INT64_MIN;
	uint8_t x896 = 1U;
	int64_t t25 = 16582938020765121LL;

	t25 = (((x893|x894)/x895)>>x896);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x957 = INT8_MIN;
	static volatile int64_t x958 = INT64_MAX;
	volatile int32_t x959 = INT32_MIN;

	t26 = (((x957|x958)/x959)>>x960);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x961 = 4187;
	volatile int64_t x962 = INT64_MIN;
	int64_t x963 = -1LL;
	static int16_t x964 = 0;

	t27 = (((x961|x962)/x963)>>x964);

	if (t27 != 9223372036854771621LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x985 = -2;
	static int16_t x986 = -1;
	int64_t x987 = 1397705LL;
	uint8_t x988 = 5U;

	t28 = (((x985|x986)/x987)>>x988);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x997 = 104U;
	volatile int8_t x998 = INT8_MIN;
	int16_t x999 = 13142;
	uint64_t x1000 = 7LLU;
	int32_t t29 = 229;

	t29 = (((x997|x998)/x999)>>x1000);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1094 = -2300;
	int8_t x1095 = -1;
	uint8_t x1096 = 4U;
	volatile int32_t t30 = 282751577;

	t30 = (((x1093|x1094)/x1095)>>x1096);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1105 = 1;

	t31 = (((x1105|x1106)/x1107)>>x1108);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x1149 = 6414U;
	int32_t x1150 = 1;
	int64_t x1151 = INT64_MAX;
	uint8_t x1152 = 24U;
	int64_t t32 = -50424986LL;

	t32 = (((x1149|x1150)/x1151)>>x1152);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1186 = INT32_MIN;
	int16_t x1187 = INT16_MIN;
	static volatile int8_t x1188 = 0;

	t33 = (((x1185|x1186)/x1187)>>x1188);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1242 = 373LLU;
	int16_t x1243 = INT16_MIN;
	volatile uint16_t x1244 = 9U;
	volatile uint64_t t34 = 6823869174938756LLU;

	t34 = (((x1241|x1242)/x1243)>>x1244);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1265 = -13592;
	static int8_t x1266 = -1;
	uint16_t x1267 = 10U;

	t35 = (((x1265|x1266)/x1267)>>x1268);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1294 = INT64_MIN;
	int8_t x1295 = INT8_MIN;
	volatile uint8_t x1296 = 3U;
	int64_t t36 = 489943112LL;

	t36 = (((x1293|x1294)/x1295)>>x1296);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1325 = 43558761LL;
	volatile int8_t x1326 = 9;
	static int64_t x1327 = INT64_MAX;
	volatile int64_t t37 = -39384LL;

	t37 = (((x1325|x1326)/x1327)>>x1328);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1341 = UINT32_MAX;
	volatile int16_t x1343 = INT16_MIN;
	int16_t x1344 = 1;
	int64_t t38 = 188385818LL;

	t38 = (((x1341|x1342)/x1343)>>x1344);

	if (t38 != 140737488289792LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1353 = -157719625512729LL;
	uint64_t x1355 = 66456280202700LLU;
	static uint8_t x1356 = 62U;
	volatile uint64_t t39 = 1904724499893828LLU;

	t39 = (((x1353|x1354)/x1355)>>x1356);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1369 = INT8_MIN;
	uint8_t x1370 = UINT8_MAX;
	uint8_t x1372 = 1U;

	t40 = (((x1369|x1370)/x1371)>>x1372);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1377 = UINT32_MAX;
	uint8_t x1378 = UINT8_MAX;
	static int16_t x1379 = -47;
	int8_t x1380 = 0;
	volatile uint32_t t41 = 40056U;

	t41 = (((x1377|x1378)/x1379)>>x1380);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1404 = 3;
	int64_t t42 = 130LL;

	t42 = (((x1401|x1402)/x1403)>>x1404);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1421 = 7;
	int16_t x1423 = 125;
	static volatile uint8_t x1424 = 1U;
	int32_t t43 = -14671165;

	t43 = (((x1421|x1422)/x1423)>>x1424);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1489 = INT8_MIN;
	int32_t x1490 = INT32_MIN;
	int64_t x1491 = -478468153152092LL;
	volatile uint8_t x1492 = 45U;
	int64_t t44 = 0LL;

	t44 = (((x1489|x1490)/x1491)>>x1492);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x1525 = INT8_MAX;
	int32_t x1526 = -1;
	int16_t x1527 = -1627;
	volatile int32_t x1528 = 1;
	volatile int32_t t45 = 1467;

	t45 = (((x1525|x1526)/x1527)>>x1528);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1557 = -1LL;
	volatile int16_t x1558 = -1;
	int8_t x1559 = INT8_MAX;
	int8_t x1560 = 3;
	volatile int64_t t46 = -1147809431744LL;

	t46 = (((x1557|x1558)/x1559)>>x1560);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1561 = UINT8_MAX;
	uint8_t x1563 = UINT8_MAX;
	uint32_t x1564 = 0U;

	t47 = (((x1561|x1562)/x1563)>>x1564);

	if (t47 != 1246U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1566 = INT64_MIN;
	int16_t x1567 = INT16_MIN;
	volatile uint16_t x1568 = 46U;
	volatile int64_t t48 = -17148632819236259LL;

	t48 = (((x1565|x1566)/x1567)>>x1568);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x1797 = 29U;
	uint32_t x1798 = 19996U;
	int64_t x1799 = INT64_MIN;
	int32_t x1800 = 57;
	int64_t t49 = 1124391247272674622LL;

	t49 = (((x1797|x1798)/x1799)>>x1800);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x1837 = INT16_MIN;
	uint16_t x1838 = UINT16_MAX;
	static int16_t x1839 = -2;
	uint32_t x1840 = 0U;
	volatile int32_t t50 = -757;

	t50 = (((x1837|x1838)/x1839)>>x1840);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1861 = INT64_MAX;
	static int8_t x1862 = INT8_MAX;
	uint64_t x1863 = 116323LLU;
	uint64_t t51 = 3020906528223LLU;

	t51 = (((x1861|x1862)/x1863)>>x1864);

	if (t51 != 1181528LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1881 = 1864317U;
	volatile uint16_t x1882 = UINT16_MAX;
	static volatile uint8_t x1883 = 15U;
	uint8_t x1884 = 12U;
	volatile uint32_t t52 = 3U;

	t52 = (((x1881|x1882)/x1883)>>x1884);

	if (t52 != 30U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1929 = -1;
	int64_t x1931 = INT64_MAX;
	int16_t x1932 = 4;
	int64_t t53 = 505214567692LL;

	t53 = (((x1929|x1930)/x1931)>>x1932);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x1974 = INT32_MIN;
	volatile int8_t x1975 = -1;
	static volatile uint16_t x1976 = 9U;

	t54 = (((x1973|x1974)/x1975)>>x1976);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2033 = 1;
	volatile uint32_t x2034 = UINT32_MAX;
	static volatile int64_t x2035 = INT64_MIN;
	static int8_t x2036 = 0;

	t55 = (((x2033|x2034)/x2035)>>x2036);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2057 = 7U;
	static int32_t x2058 = -1;
	uint8_t x2059 = 21U;
	static int8_t x2060 = 6;
	volatile int32_t t56 = -21876;

	t56 = (((x2057|x2058)/x2059)>>x2060);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2077 = -1;
	int64_t x2078 = INT64_MIN;
	int16_t x2079 = INT16_MAX;
	uint8_t x2080 = 2U;
	volatile int64_t t57 = -3864255303771925LL;

	t57 = (((x2077|x2078)/x2079)>>x2080);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x2094 = UINT16_MAX;
	int16_t x2095 = 11;
	static uint8_t x2096 = 10U;

	t58 = (((x2093|x2094)/x2095)>>x2096);

	if (t58 != 381300U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2097 = -1;
	int64_t x2098 = INT64_MIN;
	uint64_t x2099 = UINT64_MAX;
	int16_t x2100 = 18;
	static volatile uint64_t t59 = 31659494920916LLU;

	t59 = (((x2097|x2098)/x2099)>>x2100);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2105 = INT16_MIN;
	uint32_t x2106 = 1U;
	int64_t x2107 = INT64_MAX;
	volatile int64_t t60 = 258193380162282744LL;

	t60 = (((x2105|x2106)/x2107)>>x2108);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2109 = INT32_MAX;
	int64_t x2110 = -1LL;
	uint16_t x2111 = 26U;
	int8_t x2112 = 3;
	volatile int64_t t61 = 21LL;

	t61 = (((x2109|x2110)/x2111)>>x2112);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2125 = UINT16_MAX;
	volatile int16_t x2126 = INT16_MIN;
	int64_t x2127 = INT64_MIN;
	int64_t x2128 = 55LL;

	t62 = (((x2125|x2126)/x2127)>>x2128);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2149 = INT16_MIN;
	static int32_t x2150 = -1;
	uint8_t x2152 = 7U;

	t63 = (((x2149|x2150)/x2151)>>x2152);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2155 = -1LL;
	uint16_t x2156 = 2U;
	int64_t t64 = 679136968LL;

	t64 = (((x2153|x2154)/x2155)>>x2156);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2273 = INT64_MIN;
	uint64_t x2274 = 21682359024LLU;
	int16_t x2275 = -497;
	volatile uint8_t x2276 = 13U;
	uint64_t t65 = 2145222317270314LLU;

	t65 = (((x2273|x2274)/x2275)>>x2276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x2321 = 0;
	int16_t x2322 = -113;
	volatile uint64_t x2323 = 592714107LLU;
	uint8_t x2324 = 0U;
	uint64_t t66 = 191414558707LLU;

	t66 = (((x2321|x2322)/x2323)>>x2324);

	if (t66 != 31122498782LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2449 = 2092134491LLU;
	int32_t x2451 = INT32_MIN;
	volatile uint32_t x2452 = 53U;

	t67 = (((x2449|x2450)/x2451)>>x2452);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x2454 = 1385U;
	volatile int64_t x2455 = INT64_MIN;
	uint8_t x2456 = 1U;
	volatile int64_t t68 = 2332402LL;

	t68 = (((x2453|x2454)/x2455)>>x2456);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2493 = 2U;
	int64_t x2494 = -1LL;
	static int64_t x2495 = INT64_MIN;
	int8_t x2496 = 19;
	int64_t t69 = 10097365680LL;

	t69 = (((x2493|x2494)/x2495)>>x2496);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x2497 = 27431705LLU;
	static int16_t x2500 = 0;
	volatile uint64_t t70 = 5724349778132238LLU;

	t70 = (((x2497|x2498)/x2499)>>x2500);

	if (t70 != 84203255857424LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2525 = -1LL;
	int64_t x2526 = INT64_MIN;
	int16_t x2527 = 2247;
	static uint64_t x2528 = 46LLU;
	volatile int64_t t71 = 41LL;

	t71 = (((x2525|x2526)/x2527)>>x2528);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2529 = -1727;
	int64_t x2530 = -1LL;
	volatile int16_t x2531 = -407;
	int64_t t72 = -981960109922433835LL;

	t72 = (((x2529|x2530)/x2531)>>x2532);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2557 = 1054U;
	int16_t x2559 = -3;
	uint8_t x2560 = 9U;
	static int32_t t73 = -408850;

	t73 = (((x2557|x2558)/x2559)>>x2560);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x2705 = UINT32_MAX;
	int8_t x2708 = 19;
	static volatile uint32_t t74 = 375632U;

	t74 = (((x2705|x2706)/x2707)>>x2708);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2917 = -1;
	int16_t x2918 = -2933;
	uint8_t x2920 = 4U;
	volatile uint64_t t75 = 0LLU;

	t75 = (((x2917|x2918)/x2919)>>x2920);

	if (t75 != 3842957827LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2937 = INT16_MAX;
	uint8_t x2938 = 4U;
	uint32_t x2940 = 21U;
	volatile int32_t t76 = 7521691;

	t76 = (((x2937|x2938)/x2939)>>x2940);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2965 = INT8_MAX;
	int64_t x2967 = INT64_MIN;
	int8_t x2968 = 1;
	volatile int64_t t77 = -18LL;

	t77 = (((x2965|x2966)/x2967)>>x2968);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2990 = INT8_MIN;
	uint16_t x2992 = 2U;
	static volatile uint64_t t78 = 2590136405LLU;

	t78 = (((x2989|x2990)/x2991)>>x2992);

	if (t78 != 2981783808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x2993 = UINT64_MAX;
	uint8_t x2994 = 33U;
	uint8_t x2995 = UINT8_MAX;
	volatile uint8_t x2996 = 1U;

	t79 = (((x2993|x2994)/x2995)>>x2996);

	if (t79 != 36170086419038336LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3005 = INT64_MIN;
	static int8_t x3006 = INT8_MAX;
	int8_t x3007 = -1;
	volatile uint32_t x3008 = 3U;
	volatile int64_t t80 = -6LL;

	t80 = (((x3005|x3006)/x3007)>>x3008);

	if (t80 != 1152921504606846960LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x3037 = INT32_MAX;
	int8_t x3038 = -1;

	t81 = (((x3037|x3038)/x3039)>>x3040);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x3085 = 2082U;
	uint32_t x3086 = 14435439U;
	int8_t x3087 = -1;
	volatile uint32_t t82 = 386845U;

	t82 = (((x3085|x3086)/x3087)>>x3088);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3101 = -1;
	int64_t x3102 = -1LL;
	static uint8_t x3104 = 5U;
	int64_t t83 = -19LL;

	t83 = (((x3101|x3102)/x3103)>>x3104);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3145 = 0U;
	int8_t x3146 = -32;

	t84 = (((x3145|x3146)/x3147)>>x3148);

	if (t84 != 3049LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3158 = INT32_MAX;
	uint64_t x3159 = UINT64_MAX;
	volatile uint8_t x3160 = 1U;
	volatile uint64_t t85 = 397606792814LLU;

	t85 = (((x3157|x3158)/x3159)>>x3160);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3165 = 331809670485895LL;
	static int8_t x3166 = INT8_MIN;
	int8_t x3168 = 3;
	static int64_t t86 = 456861LL;

	t86 = (((x3165|x3166)/x3167)>>x3168);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3217 = -1;
	int16_t x3218 = -1;
	int64_t x3219 = INT64_MIN;
	volatile int64_t t87 = 2590LL;

	t87 = (((x3217|x3218)/x3219)>>x3220);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x3229 = 9872540LLU;
	uint64_t x3230 = 106078668941LLU;
	uint64_t x3231 = 286240286LLU;
	int16_t x3232 = 1;
	uint64_t t88 = 202217897876032LLU;

	t88 = (((x3229|x3230)/x3231)>>x3232);

	if (t88 != 185LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3273 = INT16_MIN;
	volatile int8_t x3274 = INT8_MIN;
	int16_t x3275 = INT16_MIN;
	int8_t x3276 = 11;

	t89 = (((x3273|x3274)/x3275)>>x3276);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3281 = UINT64_MAX;
	static int8_t x3282 = -1;
	static uint8_t x3284 = 1U;
	uint64_t t90 = 171220976148LLU;

	t90 = (((x3281|x3282)/x3283)>>x3284);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3361 = INT8_MIN;
	uint16_t x3362 = UINT16_MAX;
	int32_t x3364 = 17;
	static volatile int32_t t91 = -130236;

	t91 = (((x3361|x3362)/x3363)>>x3364);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3401 = INT32_MAX;
	int8_t x3402 = INT8_MAX;
	int64_t x3403 = INT64_MIN;

	t92 = (((x3401|x3402)/x3403)>>x3404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3418 = -1;
	uint64_t x3419 = UINT64_MAX;
	volatile int32_t x3420 = 18;
	static volatile uint64_t t93 = 28LLU;

	t93 = (((x3417|x3418)/x3419)>>x3420);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3477 = -8019917;
	int16_t x3480 = 1;
	int32_t t94 = 355592441;

	t94 = (((x3477|x3478)/x3479)>>x3480);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3521 = 5;
	int32_t x3522 = -1;
	int64_t x3523 = INT64_MIN;
	volatile uint8_t x3524 = 1U;

	t95 = (((x3521|x3522)/x3523)>>x3524);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3526 = 182U;
	int32_t x3527 = 76971688;
	volatile uint64_t x3528 = 1LLU;
	volatile int32_t t96 = 0;

	t96 = (((x3525|x3526)/x3527)>>x3528);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3573 = -51129031536456LL;
	uint16_t x3574 = 5U;
	volatile int16_t x3575 = INT16_MIN;
	static int64_t t97 = 1504343379255716LL;

	t97 = (((x3573|x3574)/x3575)>>x3576);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3597 = INT8_MIN;
	uint32_t x3600 = 0U;
	int32_t t98 = -402915;

	t98 = (((x3597|x3598)/x3599)>>x3600);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3633 = INT16_MIN;
	int16_t x3634 = -488;
	static int16_t x3635 = -1;
	uint16_t x3636 = 18U;
	int32_t t99 = -196184480;

	t99 = (((x3633|x3634)/x3635)>>x3636);

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

