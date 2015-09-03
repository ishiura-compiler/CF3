#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x99 = 0U;
uint16_t x100 = 8057U;
int64_t x133 = 7526344475LL;
int16_t x135 = 1;
static volatile int64_t x256 = 449254169863LL;
uint8_t x295 = 4U;
uint8_t x783 = 26U;
int32_t x1164 = INT32_MIN;
uint16_t x1228 = 2073U;
static volatile uint16_t x1257 = 44U;
uint64_t t17 = 16115469017872LLU;
int32_t x1370 = INT32_MIN;
int32_t t18 = -3648;
static int8_t x1394 = -1;
int8_t x1437 = INT8_MIN;
int32_t x1438 = -1;
volatile uint8_t x1495 = 49U;
int16_t x1496 = -40;
uint64_t x1508 = 996362649LLU;
int64_t x1652 = 58LL;
volatile uint64_t t24 = 90201431878LLU;
uint8_t x1679 = 3U;
static uint16_t x1699 = 7U;
int8_t x1744 = INT8_MIN;
int64_t x1847 = 1LL;
uint64_t t30 = 328576866039LLU;
volatile uint64_t x1857 = UINT64_MAX;
uint64_t t32 = 16489LLU;
uint32_t x1933 = 31550386U;
volatile int64_t t33 = -1447LL;
static int8_t x1937 = INT8_MIN;
static int16_t x1940 = -1;
uint64_t x2277 = 1648328705532118058LLU;
uint8_t x2279 = 5U;
int16_t x2683 = 0;
volatile int32_t t38 = 36511887;
uint32_t x2929 = UINT32_MAX;
int32_t x3113 = -129803;
int16_t x3122 = INT16_MAX;
static int8_t x3123 = 0;
volatile int64_t x3124 = INT64_MAX;
uint64_t t44 = 72748199999699LLU;
static uint32_t x3225 = UINT32_MAX;
volatile int8_t x3227 = 19;
static int64_t x3228 = -1LL;
uint8_t x3246 = 12U;
static int8_t x3247 = 1;
volatile uint64_t x3248 = 14065792910LLU;
int8_t x3353 = -6;
int32_t x3416 = INT32_MIN;
uint64_t x3513 = UINT64_MAX;
int32_t x3589 = -1;
volatile uint64_t t53 = 144247898017408484LLU;
volatile uint16_t x3637 = 17748U;
uint32_t x3846 = 15431U;
static int32_t x3918 = -1;
volatile uint32_t x4010 = 317U;
static volatile int8_t x4092 = INT8_MIN;
volatile int64_t t60 = -20870458LL;
static uint16_t x4162 = UINT16_MAX;
uint64_t t61 = 111930LLU;
static volatile int32_t t63 = 99209;
uint8_t x4484 = 50U;
int32_t x4540 = -1;
volatile uint64_t x4582 = UINT64_MAX;
static uint64_t t68 = 36032182LLU;
volatile int8_t x4663 = 1;
static uint32_t x4664 = 3412145U;
static int16_t x4887 = 0;
uint32_t x4932 = 6389983U;
int32_t x4982 = INT32_MIN;
volatile uint32_t x5010 = 2972303U;
static uint16_t x5013 = 4U;
volatile int8_t x5015 = 1;
static int32_t x5300 = -15471813;
static int8_t x5324 = INT8_MIN;
int64_t x5418 = INT64_MIN;
uint64_t x5449 = UINT64_MAX;
static volatile int16_t x5704 = -1;
static int8_t x5765 = INT8_MIN;
volatile uint32_t t81 = 2938U;
static int64_t x5910 = INT64_MIN;
uint64_t t83 = 962034248LLU;
uint32_t x6078 = 36348U;
int8_t x6293 = -4;
int8_t x6349 = INT8_MIN;
uint8_t x6359 = 7U;
int16_t x6587 = 13;
volatile uint32_t x6641 = 42558U;
uint16_t x6643 = 18U;
int32_t x6686 = 740;
volatile int32_t x6782 = 43716851;
uint16_t x6784 = UINT16_MAX;
int16_t x6791 = 20;
int16_t x6805 = 276;
static int32_t t96 = -261167;
static int8_t x6984 = 1;
static volatile uint8_t x7107 = 5U;
static volatile int32_t t99 = 55812619;


void f0(void) {
	int16_t x97 = -15349;
	volatile int8_t x98 = -1;
	int32_t t0 = 246593;

	t0 = (((x97*x98)<<x99)*x100);

	if (t0 != 123666893) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x134 = INT16_MAX;
	int8_t x136 = 1;
	int64_t t1 = -52758279167667LL;

	t1 = (((x133*x134)<<x135)*x136);

	if (t1 != 493231458824650LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x253 = INT32_MIN;
	static uint32_t x254 = 1383898072U;
	uint64_t x255 = 2LLU;
	volatile int64_t t2 = -985395413LL;

	t2 = (((x253*x254)<<x255)*x256);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x293 = 796029U;
	static volatile int8_t x294 = INT8_MIN;
	static volatile uint16_t x296 = 35U;
	static uint32_t t3 = 1397537U;

	t3 = (((x293*x294)<<x295)*x296);

	if (t3 != 3070183424U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x341 = UINT64_MAX;
	int16_t x342 = -1;
	static int8_t x343 = 14;
	int32_t x344 = INT32_MAX;
	uint64_t t4 = 116167941396955947LLU;

	t4 = (((x341*x342)<<x343)*x344);

	if (t4 != 35184372072448LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x346 = -1;
	uint64_t x347 = 2LLU;
	static int16_t x348 = 1;
	volatile uint32_t t5 = 0U;

	t5 = (((x345*x346)<<x347)*x348);

	if (t5 != 4U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x397 = 48177U;
	uint64_t x398 = 1LLU;
	volatile uint16_t x399 = 32U;
	static int64_t x400 = -1LL;
	uint64_t t6 = 2138177423760242688LLU;

	t6 = (((x397*x398)<<x399)*x400);

	if (t6 != 18446537155070132224LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x525 = INT8_MIN;
	int64_t x526 = -11946762LL;
	uint32_t x527 = 1U;
	volatile int64_t x528 = 650000LL;
	int64_t t7 = 75238280LL;

	t7 = (((x525*x526)<<x527)*x528);

	if (t7 != 1987941196800000LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x717 = -1;
	int16_t x718 = INT16_MIN;
	int8_t x719 = 0;
	uint16_t x720 = 6U;
	volatile int32_t t8 = -201337;

	t8 = (((x717*x718)<<x719)*x720);

	if (t8 != 196608) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x721 = 5950375951188LLU;
	int64_t x722 = INT64_MAX;
	uint16_t x723 = 5U;
	static int16_t x724 = 67;
	static volatile uint64_t t9 = 23594LLU;

	t9 = (((x721*x722)<<x723)*x724);

	if (t9 != 18433986467670204544LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x781 = -8;
	volatile int64_t x782 = -1LL;
	uint8_t x784 = 63U;
	volatile int64_t t10 = 31LL;

	t10 = (((x781*x782)<<x783)*x784);

	if (t10 != 33822867456LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x881 = 21057U;
	static int8_t x882 = INT8_MIN;
	volatile uint8_t x883 = 5U;
	int32_t x884 = INT32_MIN;
	volatile uint32_t t11 = 1697U;

	t11 = (((x881*x882)<<x883)*x884);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x937 = UINT8_MAX;
	uint64_t x938 = UINT64_MAX;
	uint16_t x939 = 1U;
	uint32_t x940 = 3U;
	volatile uint64_t t12 = 306LLU;

	t12 = (((x937*x938)<<x939)*x940);

	if (t12 != 18446744073709550086LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1073 = INT32_MIN;
	static int64_t x1074 = -1LL;
	uint8_t x1075 = 0U;
	static volatile uint16_t x1076 = UINT16_MAX;
	static volatile int64_t t13 = 198329407613973LL;

	t13 = (((x1073*x1074)<<x1075)*x1076);

	if (t13 != 140735340871680LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1161 = UINT64_MAX;
	uint8_t x1162 = 17U;
	uint16_t x1163 = 19U;
	uint64_t t14 = 3730454932502647LLU;

	t14 = (((x1161*x1162)<<x1163)*x1164);

	if (t14 != 19140298416324608LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1193 = 0U;
	uint64_t x1194 = 2LLU;
	static uint8_t x1195 = 6U;
	volatile int8_t x1196 = INT8_MIN;
	uint64_t t15 = 206270256056803LLU;

	t15 = (((x1193*x1194)<<x1195)*x1196);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1225 = 1;
	volatile uint64_t x1226 = 0LLU;
	int32_t x1227 = 4;
	uint64_t t16 = 1385048715LLU;

	t16 = (((x1225*x1226)<<x1227)*x1228);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1258 = UINT64_MAX;
	int32_t x1259 = 18;
	int64_t x1260 = INT64_MIN;

	t17 = (((x1257*x1258)<<x1259)*x1260);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1369 = 0;
	int8_t x1371 = 27;
	uint16_t x1372 = UINT16_MAX;

	t18 = (((x1369*x1370)<<x1371)*x1372);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1393 = UINT32_MAX;
	volatile uint32_t x1395 = 13U;
	int16_t x1396 = -1;
	static volatile uint32_t t19 = 7704195U;

	t19 = (((x1393*x1394)<<x1395)*x1396);

	if (t19 != 4294959104U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x1439 = 1U;
	volatile uint64_t x1440 = 3797511180008527540LLU;
	static volatile uint64_t t20 = 19LLU;

	t20 = (((x1437*x1438)<<x1439)*x1440);

	if (t20 != 12932170249286366208LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1493 = INT64_MAX;
	int8_t x1494 = 0;
	volatile int64_t t21 = -1857441LL;

	t21 = (((x1493*x1494)<<x1495)*x1496);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1505 = 0U;
	int32_t x1506 = -1;
	int8_t x1507 = 0;
	volatile uint64_t t22 = 168245795375937425LLU;

	t22 = (((x1505*x1506)<<x1507)*x1508);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1649 = 7055848813216245782LLU;
	volatile uint32_t x1650 = UINT32_MAX;
	uint8_t x1651 = 1U;
	static volatile uint64_t t23 = 626300LLU;

	t23 = (((x1649*x1650)<<x1651)*x1652);

	if (t23 != 8702230970810488328LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1653 = 0;
	int64_t x1654 = -1LL;
	static uint8_t x1655 = 14U;
	uint64_t x1656 = 173538491LLU;

	t24 = (((x1653*x1654)<<x1655)*x1656);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1657 = INT32_MAX;
	uint64_t x1658 = UINT64_MAX;
	volatile int8_t x1659 = 11;
	static int16_t x1660 = INT16_MAX;
	uint64_t t25 = 5LLU;

	t25 = (((x1657*x1658)<<x1659)*x1660);

	if (t25 != 18302633283747313664LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x1673 = 3U;
	volatile int64_t x1674 = 103172LL;
	volatile uint8_t x1675 = 0U;
	volatile uint64_t x1676 = UINT64_MAX;
	static volatile uint64_t t26 = 2228257205LLU;

	t26 = (((x1673*x1674)<<x1675)*x1676);

	if (t26 != 18446744073709242100LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1677 = 1;
	uint8_t x1678 = 0U;
	int64_t x1680 = -1071876332317771196LL;
	int64_t t27 = -48465480LL;

	t27 = (((x1677*x1678)<<x1679)*x1680);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1697 = -1;
	static int64_t x1698 = -1LL;
	uint8_t x1700 = 83U;
	int64_t t28 = -38622064LL;

	t28 = (((x1697*x1698)<<x1699)*x1700);

	if (t28 != 10624LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1741 = -1LL;
	uint64_t x1742 = 986199LLU;
	static int16_t x1743 = 1;
	volatile uint64_t t29 = 56907701991LLU;

	t29 = (((x1741*x1742)<<x1743)*x1744);

	if (t29 != 252466944LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1845 = UINT8_MAX;
	uint64_t x1846 = 1493278932455641912LLU;
	int32_t x1848 = INT32_MIN;

	t30 = (((x1845*x1846)<<x1847)*x1848);

	if (t30 != 7477271946162339840LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1858 = 1206U;
	uint8_t x1859 = 18U;
	static int16_t x1860 = -2;
	static uint64_t t31 = 18224LLU;

	t31 = (((x1857*x1858)<<x1859)*x1860);

	if (t31 != 632291328LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1881 = 10236LLU;
	static int64_t x1882 = INT64_MIN;
	static uint8_t x1883 = 3U;
	volatile int16_t x1884 = INT16_MAX;

	t32 = (((x1881*x1882)<<x1883)*x1884);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1934 = INT16_MIN;
	uint8_t x1935 = 7U;
	int64_t x1936 = -18090373LL;

	t33 = (((x1933*x1934)<<x1935)*x1936);

	if (t33 != -5918368859160576LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1938 = UINT32_MAX;
	volatile uint8_t x1939 = 10U;
	static volatile uint32_t t34 = 11019U;

	t34 = (((x1937*x1938)<<x1939)*x1940);

	if (t34 != 4294836224U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2237 = 6573899;
	uint32_t x2238 = 225389741U;
	static int8_t x2239 = 1;
	static int8_t x2240 = 29;
	volatile uint32_t t35 = 111317973U;

	t35 = (((x2237*x2238)<<x2239)*x2240);

	if (t35 != 1346474406U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2278 = 30;
	int32_t x2280 = -1;
	volatile uint64_t t36 = 7739698918469681LLU;

	t36 = (((x2277*x2278)<<x2279)*x2280);

	if (t36 != 4024433028188103296LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2417 = INT16_MIN;
	int8_t x2418 = -1;
	uint32_t x2419 = 0U;
	uint8_t x2420 = 3U;
	volatile int32_t t37 = 1;

	t37 = (((x2417*x2418)<<x2419)*x2420);

	if (t37 != 98304) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2681 = INT16_MIN;
	volatile int32_t x2682 = -1;
	int16_t x2684 = INT16_MIN;

	t38 = (((x2681*x2682)<<x2683)*x2684);

	if (t38 != -1073741824) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2885 = 18711574U;
	volatile uint8_t x2886 = 0U;
	int8_t x2887 = 7;
	static int32_t x2888 = -486581;
	volatile uint32_t t39 = 216082U;

	t39 = (((x2885*x2886)<<x2887)*x2888);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2930 = 12706U;
	uint8_t x2931 = 0U;
	int8_t x2932 = -1;
	uint32_t t40 = 4056U;

	t40 = (((x2929*x2930)<<x2931)*x2932);

	if (t40 != 12706U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3041 = UINT64_MAX;
	uint8_t x3042 = 8U;
	static uint16_t x3043 = 4U;
	int8_t x3044 = INT8_MIN;
	volatile uint64_t t41 = 293582692LLU;

	t41 = (((x3041*x3042)<<x3043)*x3044);

	if (t41 != 16384LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3114 = INT8_MIN;
	volatile uint16_t x3115 = 2U;
	uint8_t x3116 = 10U;
	volatile int32_t t42 = -16756;

	t42 = (((x3113*x3114)<<x3115)*x3116);

	if (t42 != 664591360) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x3121 = 2412481383LLU;
	volatile uint64_t t43 = 57823208LLU;

	t43 = (((x3121*x3122)<<x3123)*x3124);

	if (t43 != 9223292987077299047LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x3133 = 1360133473LLU;
	int32_t x3134 = 598077;
	static uint8_t x3135 = 3U;
	int32_t x3136 = 2;

	t44 = (((x3133*x3134)<<x3135)*x3136);

	if (t44 != 13015432754102736LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3221 = -1;
	static uint32_t x3222 = UINT32_MAX;
	uint8_t x3223 = 4U;
	static int8_t x3224 = INT8_MAX;
	volatile uint32_t t45 = 342383U;

	t45 = (((x3221*x3222)<<x3223)*x3224);

	if (t45 != 2032U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x3226 = UINT8_MAX;
	volatile int64_t t46 = -1039233LL;

	t46 = (((x3225*x3226)<<x3227)*x3228);

	if (t46 != -4161273856LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3245 = 2030LLU;
	static uint64_t t47 = 6464716LLU;

	t47 = (((x3245*x3246)<<x3247)*x3248);

	if (t47 != 685285430575200LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x3354 = INT16_MIN;
	static int32_t x3355 = 0;
	volatile uint16_t x3356 = 0U;
	volatile int32_t t48 = -69334;

	t48 = (((x3353*x3354)<<x3355)*x3356);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x3413 = -1;
	int8_t x3414 = 0;
	static int16_t x3415 = 1;
	static int32_t t49 = 4154053;

	t49 = (((x3413*x3414)<<x3415)*x3416);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3514 = INT16_MAX;
	uint16_t x3515 = 7U;
	uint64_t x3516 = UINT64_MAX;
	static volatile uint64_t t50 = 2298819108114282451LLU;

	t50 = (((x3513*x3514)<<x3515)*x3516);

	if (t50 != 4194176LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3561 = UINT64_MAX;
	static uint16_t x3562 = 0U;
	static int32_t x3563 = 2;
	int16_t x3564 = 1739;
	uint64_t t51 = 8993LLU;

	t51 = (((x3561*x3562)<<x3563)*x3564);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x3581 = 44395748LLU;
	int64_t x3582 = -1LL;
	static int64_t x3583 = 14LL;
	uint32_t x3584 = 157U;
	uint64_t t52 = 51805LLU;

	t52 = (((x3581*x3582)<<x3583)*x3584);

	if (t52 != 18446629875059720192LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x3590 = 2400713817046LLU;
	uint8_t x3591 = 10U;
	uint32_t x3592 = 39U;

	t53 = (((x3589*x3590)<<x3591)*x3592);

	if (t53 != 18350869166712002560LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3638 = 8U;
	int8_t x3639 = 0;
	volatile int8_t x3640 = INT8_MAX;
	volatile int32_t t54 = -1503;

	t54 = (((x3637*x3638)<<x3639)*x3640);

	if (t54 != 18031968) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x3805 = 2U;
	volatile uint32_t x3806 = 48552965U;
	uint8_t x3807 = 0U;
	static int8_t x3808 = -1;
	uint32_t t55 = 1585U;

	t55 = (((x3805*x3806)<<x3807)*x3808);

	if (t55 != 4197861366U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x3845 = -67853;
	uint8_t x3847 = 10U;
	int8_t x3848 = 11;
	volatile uint32_t t56 = 7U;

	t56 = (((x3845*x3846)<<x3847)*x3848);

	if (t56 != 125656064U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3913 = -1;
	int64_t x3914 = -5511854LL;
	uint16_t x3915 = 6U;
	uint32_t x3916 = 33117U;
	int64_t t57 = -11706080LL;

	t57 = (((x3913*x3914)<<x3915)*x3916);

	if (t57 != 11682308410752LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3917 = 0U;
	int8_t x3919 = 6;
	int32_t x3920 = 130289;
	int32_t t58 = 366529479;

	t58 = (((x3917*x3918)<<x3919)*x3920);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4009 = INT8_MIN;
	volatile int8_t x4011 = 7;
	int16_t x4012 = 346;
	volatile uint32_t t59 = 1024850U;

	t59 = (((x4009*x4010)<<x4011)*x4012);

	if (t59 != 2497937408U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x4089 = INT32_MIN;
	int64_t x4090 = -1LL;
	int8_t x4091 = 0;

	t60 = (((x4089*x4090)<<x4091)*x4092);

	if (t60 != -274877906944LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4161 = 392501078017564296LLU;
	volatile uint16_t x4163 = 0U;
	uint64_t x4164 = UINT64_MAX;

	t61 = (((x4161*x4162)<<x4163)*x4164);

	if (t61 != 10649834943748365960LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x4233 = 493197506304577353LLU;
	int8_t x4234 = 13;
	uint8_t x4235 = 56U;
	uint16_t x4236 = 2094U;
	static uint64_t t62 = 109741LLU;

	t62 = (((x4233*x4234)<<x4235)*x4236);

	if (t62 != 9655717601082343424LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4241 = -1;
	volatile uint8_t x4242 = 0U;
	int16_t x4243 = 0;
	uint8_t x4244 = 95U;

	t63 = (((x4241*x4242)<<x4243)*x4244);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4409 = 496LLU;
	volatile uint64_t x4410 = 1630LLU;
	int32_t x4411 = 0;
	static int8_t x4412 = INT8_MAX;
	uint64_t t64 = 96LLU;

	t64 = (((x4409*x4410)<<x4411)*x4412);

	if (t64 != 102676960LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4481 = 0U;
	uint64_t x4482 = 20747595822113837LLU;
	volatile uint8_t x4483 = 4U;
	static uint64_t t65 = 30444703150053450LLU;

	t65 = (((x4481*x4482)<<x4483)*x4484);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4537 = 3LLU;
	int8_t x4538 = -15;
	uint8_t x4539 = 21U;
	uint64_t t66 = 12207275793103LLU;

	t66 = (((x4537*x4538)<<x4539)*x4540);

	if (t66 != 94371840LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4549 = -1;
	int32_t x4550 = -1;
	static uint16_t x4551 = 1U;
	static volatile int16_t x4552 = -1;
	static int32_t t67 = 18295576;

	t67 = (((x4549*x4550)<<x4551)*x4552);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4581 = -1;
	uint32_t x4583 = 14U;
	volatile int32_t x4584 = 22301;

	t68 = (((x4581*x4582)<<x4583)*x4584);

	if (t68 != 365379584LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4661 = 3U;
	static uint64_t x4662 = 6759159624051LLU;
	static volatile uint64_t t69 = 2812915063LLU;

	t69 = (((x4661*x4662)<<x4663)*x4664);

	if (t69 != 9252187776478135058LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x4885 = INT8_MIN;
	uint64_t x4886 = 31780634715168089LLU;
	int16_t x4888 = INT16_MAX;
	volatile uint64_t t70 = 41588112LLU;

	t70 = (((x4885*x4886)<<x4887)*x4888);

	if (t70 != 2597289500385127552LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4929 = UINT32_MAX;
	uint64_t x4930 = UINT64_MAX;
	uint64_t x4931 = 17LLU;
	volatile uint64_t t71 = 1598316102LLU;

	t71 = (((x4929*x4930)<<x4931)*x4932);

	if (t71 != 18321207071644450816LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x4981 = UINT32_MAX;
	int16_t x4983 = 4;
	int64_t x4984 = 8170LL;
	volatile int64_t t72 = 40784LL;

	t72 = (((x4981*x4982)<<x4983)*x4984);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5009 = UINT64_MAX;
	uint32_t x5011 = 1U;
	volatile int64_t x5012 = INT64_MIN;
	uint64_t t73 = 33565672301LLU;

	t73 = (((x5009*x5010)<<x5011)*x5012);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5014 = 29793249267674LLU;
	static uint32_t x5016 = 136870938U;
	volatile uint64_t t74 = 502839446701798LLU;

	t74 = (((x5013*x5014)<<x5015)*x5016);

	if (t74 != 8796264356340408608LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x5145 = 101U;
	static uint16_t x5146 = 73U;
	static volatile int16_t x5147 = 15;
	uint32_t x5148 = 223U;
	uint32_t t75 = 3080515U;

	t75 = (((x5145*x5146)<<x5147)*x5148);

	if (t75 != 2336849920U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5297 = 485LLU;
	int64_t x5298 = INT64_MIN;
	volatile uint8_t x5299 = 2U;
	volatile uint64_t t76 = 2039305LLU;

	t76 = (((x5297*x5298)<<x5299)*x5300);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x5321 = 2548LLU;
	int16_t x5322 = -1;
	uint32_t x5323 = 9U;
	uint64_t t77 = 223800216LLU;

	t77 = (((x5321*x5322)<<x5323)*x5324);

	if (t77 != 166985728LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x5417 = 942482326024LLU;
	volatile uint8_t x5419 = 1U;
	int8_t x5420 = INT8_MIN;
	uint64_t t78 = 640250023991749LLU;

	t78 = (((x5417*x5418)<<x5419)*x5420);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x5450 = -1;
	uint8_t x5451 = 55U;
	int32_t x5452 = INT32_MAX;
	static uint64_t t79 = 7LLU;

	t79 = (((x5449*x5450)<<x5451)*x5452);

	if (t79 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5701 = UINT32_MAX;
	uint8_t x5702 = 9U;
	int8_t x5703 = 1;
	volatile uint32_t t80 = 1440894585U;

	t80 = (((x5701*x5702)<<x5703)*x5704);

	if (t80 != 18U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5766 = -43;
	uint16_t x5767 = 3U;
	uint32_t x5768 = 34776U;

	t81 = (((x5765*x5766)<<x5767)*x5768);

	if (t81 != 1531256832U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5881 = 1914U;
	volatile int16_t x5882 = -3348;
	uint8_t x5883 = 25U;
	int64_t x5884 = -1LL;
	volatile int64_t t82 = -3770550LL;

	t82 = (((x5881*x5882)<<x5883)*x5884);

	if (t82 != -4026531840LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5909 = UINT64_MAX;
	static uint8_t x5911 = 1U;
	uint16_t x5912 = 3123U;

	t83 = (((x5909*x5910)<<x5911)*x5912);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x6077 = INT32_MIN;
	int8_t x6079 = 0;
	int16_t x6080 = -744;
	uint32_t t84 = 11U;

	t84 = (((x6077*x6078)<<x6079)*x6080);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6294 = INT8_MIN;
	int16_t x6295 = 4;
	uint8_t x6296 = UINT8_MAX;
	volatile int32_t t85 = 80;

	t85 = (((x6293*x6294)<<x6295)*x6296);

	if (t85 != 2088960) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6350 = INT16_MIN;
	uint16_t x6351 = 2U;
	static int8_t x6352 = INT8_MAX;
	volatile int32_t t86 = 0;

	t86 = (((x6349*x6350)<<x6351)*x6352);

	if (t86 != 2130706432) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x6357 = INT8_MIN;
	int16_t x6358 = INT16_MIN;
	uint32_t x6360 = 17016U;
	uint32_t t87 = 1U;

	t87 = (((x6357*x6358)<<x6359)*x6360);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x6585 = INT16_MIN;
	volatile uint32_t x6586 = 95034228U;
	static int32_t x6588 = INT32_MAX;
	uint32_t t88 = 882602518U;

	t88 = (((x6585*x6586)<<x6587)*x6588);

	if (t88 != 1073741824U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6642 = 14265515589819909LLU;
	static int8_t x6644 = -1;
	volatile uint64_t t89 = 133451791897571265LLU;

	t89 = (((x6641*x6642)<<x6643)*x6644);

	if (t89 != 4373423411840942080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6685 = 2376;
	uint8_t x6687 = 0U;
	volatile int8_t x6688 = -10;
	volatile int32_t t90 = -3272;

	t90 = (((x6685*x6686)<<x6687)*x6688);

	if (t90 != -17582400) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6701 = -152669302980506LL;
	volatile uint64_t x6702 = 20128LLU;
	uint16_t x6703 = 0U;
	int32_t x6704 = INT32_MIN;
	volatile uint64_t t91 = 1637664760173469306LLU;

	t91 = (((x6701*x6702)<<x6703)*x6704);

	if (t91 != 12625936250772127744LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6781 = UINT32_MAX;
	volatile int8_t x6783 = 5;
	static uint32_t t92 = 838U;

	t92 = (((x6781*x6782)<<x6783)*x6784);

	if (t92 != 889331296U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6789 = 146636170293971027LLU;
	int8_t x6790 = 0;
	uint64_t x6792 = UINT64_MAX;
	volatile uint64_t t93 = 919492427556259448LLU;

	t93 = (((x6789*x6790)<<x6791)*x6792);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6806 = 425166U;
	volatile uint8_t x6807 = 12U;
	static uint16_t x6808 = UINT16_MAX;
	volatile uint32_t t94 = 268341U;

	t94 = (((x6805*x6806)<<x6807)*x6808);

	if (t94 != 2535358464U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6901 = 43U;
	static int64_t x6902 = 73388389361LL;
	int32_t x6903 = 0;
	int16_t x6904 = INT16_MAX;
	static volatile int64_t t95 = -109646LL;

	t95 = (((x6901*x6902)<<x6903)*x6904);

	if (t95 != 103402846230251141LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x6937 = -55;
	int16_t x6938 = -839;
	volatile uint64_t x6939 = 12LLU;
	static volatile int8_t x6940 = -1;

	t96 = (((x6937*x6938)<<x6939)*x6940);

	if (t96 != -189009920) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6981 = 4U;
	uint64_t x6982 = 84LLU;
	static int8_t x6983 = 7;
	uint64_t t97 = 984753677LLU;

	t97 = (((x6981*x6982)<<x6983)*x6984);

	if (t97 != 43008LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x7105 = 0U;
	static uint16_t x7106 = UINT16_MAX;
	int64_t x7108 = INT64_MIN;
	volatile int64_t t98 = 1LL;

	t98 = (((x7105*x7106)<<x7107)*x7108);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x7141 = INT8_MIN;
	static int16_t x7142 = -1;
	static int8_t x7143 = 0;
	int16_t x7144 = -1;

	t99 = (((x7141*x7142)<<x7143)*x7144);

	if (t99 != -128) { NG(); } else { ; }
	
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

