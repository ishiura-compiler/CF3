
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x70 = UINT64_MAX;
uint16_t x71 = 12308U;
volatile uint8_t x72 = 28U;
volatile int32_t x282 = INT32_MIN;
volatile uint32_t x284 = 1U;
static volatile uint8_t x397 = 1U;
static int8_t x399 = -1;
int8_t x481 = INT8_MIN;
static int64_t x482 = INT64_MIN;
volatile int16_t x535 = INT16_MIN;
volatile uint8_t x585 = 2U;
uint64_t x586 = 7874LLU;
uint64_t x683 = 1939507111LLU;
volatile int64_t t14 = 361816139LL;
uint16_t x863 = 847U;
volatile int32_t x866 = INT32_MAX;
volatile uint32_t t16 = 1528U;
static int64_t x943 = -3257492621736069LL;
volatile int64_t t18 = 29LL;
volatile uint64_t x966 = UINT64_MAX;
int64_t x968 = 31LL;
volatile uint64_t t19 = 129755875192LLU;
int8_t x990 = 13;
int64_t t20 = -1LL;
static int8_t x1064 = 0;
static volatile uint64_t x1110 = UINT64_MAX;
int32_t x1191 = -1;
static int8_t x1206 = 1;
int8_t x1340 = 0;
volatile uint64_t x1394 = UINT64_MAX;
static uint16_t x1424 = 27U;
int8_t x1672 = 31;
volatile int64_t t33 = -30349940530LL;
volatile uint16_t x1692 = 19U;
int64_t x1797 = INT64_MIN;
static int32_t x1802 = INT32_MIN;
uint16_t x1803 = 51U;
uint64_t x1837 = UINT64_MAX;
uint16_t x1964 = 26U;
static int16_t x2005 = INT16_MAX;
static volatile uint32_t x2008 = 11U;
int16_t x2054 = -1;
int64_t t42 = -2526LL;
uint64_t x2113 = 1435158LLU;
uint8_t x2115 = 13U;
static volatile uint64_t t43 = 9LLU;
volatile int64_t t45 = 249LL;
int64_t x2257 = INT64_MAX;
int8_t x2258 = 5;
uint64_t x2259 = UINT64_MAX;
uint32_t x2265 = 1148937U;
static volatile uint64_t t50 = 12LLU;
volatile int8_t x2522 = -1;
int32_t t52 = -8401;
int64_t x2547 = INT64_MIN;
int8_t x2548 = 15;
int16_t x2618 = INT16_MIN;
int8_t x2862 = INT8_MIN;
uint16_t x2864 = 2U;
uint32_t x2913 = UINT32_MAX;
int64_t x3010 = INT64_MIN;
volatile int64_t t58 = -3647685973229228358LL;
int8_t x3263 = -13;
uint64_t t62 = 469642609419LLU;
uint8_t x3540 = 3U;
static int64_t t65 = -2141272443LL;
uint8_t x3590 = 55U;
int32_t t66 = -1;
uint64_t x3853 = 5186906LLU;
uint8_t x3988 = 5U;
static int16_t x4043 = INT16_MIN;
uint64_t t73 = 6287LLU;
static uint16_t x4131 = 14264U;
int32_t t74 = -4300563;
uint64_t t78 = 10793200160105LLU;
int32_t x4409 = INT32_MIN;
int64_t x4410 = -1LL;
uint64_t x4411 = 15LLU;
static int64_t x4467 = INT64_MIN;
static int8_t x4468 = 4;
volatile uint8_t x4493 = 2U;
int16_t x4602 = INT16_MIN;
int8_t x4603 = 20;
volatile uint8_t x4617 = 100U;
int16_t x4652 = 5;
volatile uint32_t x4662 = 2515U;
static uint64_t x4725 = 1LLU;
volatile uint64_t t89 = 29987201365794100LLU;
uint64_t x4733 = 0LLU;
int8_t x4734 = INT8_MIN;
volatile uint64_t x4774 = 773251716701837LLU;
int8_t x4775 = INT8_MIN;
uint8_t x4776 = 6U;
int8_t x4811 = -7;
volatile uint8_t x4833 = 8U;
int8_t x4834 = -1;
volatile int16_t x4835 = INT16_MIN;
static volatile int64_t x4958 = INT64_MIN;
uint8_t x5213 = 0U;
static int16_t x5230 = INT16_MIN;
static uint16_t x5232 = 1U;
volatile uint32_t t98 = 49874430U;
static volatile int16_t x5305 = INT16_MIN;
int64_t x5310 = INT64_MIN;
uint64_t t102 = 3LLU;
int32_t x5494 = -192919;
int64_t x5534 = -1125239560555LL;
uint64_t x5589 = UINT64_MAX;
int32_t x5595 = -7666061;
volatile int8_t x5609 = -30;
uint16_t x5611 = UINT16_MAX;
static volatile uint16_t x5649 = 3197U;
int64_t x5658 = 3990095105525LL;
volatile uint64_t x5693 = 370LLU;
volatile uint16_t x5697 = 1354U;
uint32_t x5726 = UINT32_MAX;
uint32_t x5727 = UINT32_MAX;
static uint8_t x5728 = 12U;
volatile int16_t x5789 = INT16_MAX;
uint8_t x5792 = 0U;
int32_t x5911 = INT32_MIN;
int16_t x5942 = INT16_MIN;
volatile uint32_t x5988 = 2U;
int32_t t118 = -16;
uint8_t x6028 = 0U;
int8_t x6070 = 0;
int32_t t120 = 12913;
static uint64_t x6255 = 28038272914869LLU;
uint8_t x6256 = 0U;
volatile int32_t x6331 = INT32_MIN;
volatile uint64_t x6354 = 119528LLU;
uint64_t x6357 = 50918969486888275LLU;
uint64_t t125 = 2092731934849LLU;
static uint16_t x6439 = 1043U;
static int8_t x6461 = 0;
int8_t x6462 = INT8_MIN;
int32_t x6464 = 1;
static int8_t x6469 = INT8_MIN;
static uint8_t x6496 = 1U;
int64_t t130 = 17919219915371524LL;
volatile uint64_t t133 = 3656LLU;
static int32_t x6710 = -1;
volatile uint64_t x6711 = 181304528673LLU;
volatile uint64_t x6766 = UINT64_MAX;
volatile int8_t x6767 = INT8_MAX;
uint8_t x6768 = 10U;
uint32_t x6783 = UINT32_MAX;
volatile uint64_t x6817 = 15712493LLU;
int64_t x6945 = -1LL;
int16_t x6947 = 106;
volatile uint64_t t140 = 40891541LLU;
int64_t x7082 = -2785328673392923312LL;
static uint8_t x7083 = 1U;
uint32_t x7270 = UINT32_MAX;
int64_t x7285 = INT64_MIN;
int64_t x7343 = -1LL;
uint8_t x7432 = 7U;
int64_t x7497 = INT64_MIN;
uint8_t x7595 = UINT8_MAX;
volatile int32_t t151 = 0;
int16_t x7638 = INT16_MIN;
static volatile int32_t t153 = 106;
static uint64_t x7657 = 14063940386422LLU;
uint64_t x7658 = UINT64_MAX;
int64_t x7755 = INT64_MAX;
uint32_t x7850 = 116408648U;
static volatile int8_t x7851 = 3;
volatile uint32_t x7902 = UINT32_MAX;
uint8_t x7904 = 0U;
volatile uint16_t x7941 = 111U;
static volatile int16_t x7943 = INT16_MAX;
int8_t x7958 = INT8_MAX;
int32_t x8049 = INT32_MIN;
int32_t x8093 = -1;
uint32_t x8281 = 294670U;
uint64_t x8282 = UINT64_MAX;
int8_t x8287 = INT8_MAX;
uint64_t t171 = 134110291057LLU;
volatile uint8_t x8373 = 94U;
static uint32_t x8379 = 23741911U;
volatile int32_t t174 = -11;
volatile uint16_t x8418 = 503U;
static int32_t x8419 = INT32_MIN;
uint32_t t175 = 663292U;
uint32_t x8453 = UINT32_MAX;
int64_t x8454 = -471358839662433344LL;
int64_t x8457 = -1LL;
volatile uint16_t x8472 = 20U;
static uint64_t t178 = 14026LLU;
int32_t x8694 = INT32_MIN;
static int16_t x8711 = -2562;
uint32_t x8771 = 2377551U;
uint32_t x8772 = 0U;
int32_t x8838 = -1;
uint8_t x8840 = 23U;
int16_t x8862 = INT16_MIN;
int64_t x8871 = INT64_MAX;
static int64_t t186 = 676614247856713LL;
uint32_t x8983 = 3243U;
volatile int64_t t187 = -136694952979639444LL;
static volatile uint32_t x9065 = UINT32_MAX;
uint32_t x9069 = 12832U;
uint16_t x9072 = 22U;
int64_t t192 = 1849244415172274LL;
static uint8_t x9136 = 35U;
volatile int8_t x9183 = INT8_MIN;
volatile int64_t t195 = 116867259LL;
int32_t x9265 = -8143760;
static uint16_t x9422 = UINT16_MAX;


void f0(void) {
    	int16_t x25 = INT16_MAX;
	static volatile int8_t x26 = INT8_MAX;
	int16_t x27 = -1;
	static volatile int8_t x28 = 6;
	int32_t t0 = -1;

    t0 = ((x25-(x26%x27))<<x28);

    if (t0 != 2097088) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x69 = INT32_MIN;
	volatile uint64_t t1 = 14LLU;

    t1 = ((x69-(x70%x71))<<x72);

    if (t1 != 17870281172043431936LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x177 = 307U;
	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = 10LL;
	static int64_t t2 = -58LL;

    t2 = ((x177-(x178%x179))<<x180);

    if (t2 != 314368LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x281 = 126U;
	int16_t x283 = INT16_MIN;
	volatile int32_t t3 = 295706;

    t3 = ((x281-(x282%x283))<<x284);

    if (t3 != 252) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x289 = -1;
	uint64_t x290 = 566311295982439LLU;
	int8_t x291 = -1;
	int8_t x292 = 3;
	volatile uint64_t t4 = 6157909059851605LLU;

    t4 = ((x289-(x290%x291))<<x292);

    if (t4 != 18442213583341692096LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x333 = INT8_MAX;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = 1;
	uint8_t x336 = 4U;
	static uint64_t t5 = 41001037189110089LLU;

    t5 = ((x333-(x334%x335))<<x336);

    if (t5 != 2032LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x341 = 203052609455363LLU;
	volatile int64_t x342 = -1LL;
	volatile int16_t x343 = INT16_MAX;
	int16_t x344 = 1;
	uint64_t t6 = 4074377551608849203LLU;

    t6 = ((x341-(x342%x343))<<x344);

    if (t6 != 406105218910728LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x398 = 7U;
	static int16_t x400 = 6;
	volatile int32_t t7 = -36492;

    t7 = ((x397-(x398%x399))<<x400);

    if (t7 != 64) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x437 = 6;
	static uint16_t x438 = 4U;
	uint32_t x439 = UINT32_MAX;
	static uint32_t x440 = 14U;
	static volatile uint32_t t8 = 39983U;

    t8 = ((x437-(x438%x439))<<x440);

    if (t8 != 32768U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x483 = 716U;
	uint16_t x484 = 10U;
	static int64_t t9 = 75299699507LL;

    t9 = ((x481-(x482%x483))<<x484);

    if (t9 != 299008LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x533 = 45U;
	int32_t x534 = INT32_MIN;
	static int8_t x536 = 9;
	volatile int32_t t10 = 1;

    t10 = ((x533-(x534%x535))<<x536);

    if (t10 != 23040) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x545 = -2136;
	int16_t x546 = -1;
	uint64_t x547 = 122054419109812107LLU;
	int8_t x548 = 1;
	uint64_t t11 = 675LLU;

    t11 = ((x545-(x546%x547))<<x548);

    if (t11 != 18413690497453700428LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x587 = INT64_MIN;
	int8_t x588 = 0;
	volatile uint64_t t12 = 552995952314353973LLU;

    t12 = ((x585-(x586%x587))<<x588);

    if (t12 != 18446744073709543744LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x681 = INT16_MIN;
	static uint8_t x682 = 19U;
	uint32_t x684 = 10U;
	volatile uint64_t t13 = 37043935825454098LLU;

    t13 = ((x681-(x682%x683))<<x684);

    if (t13 != 18446744073675977728LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x777 = UINT16_MAX;
	static int16_t x778 = INT16_MAX;
	int64_t x779 = -1LL;
	volatile uint8_t x780 = 19U;

    t14 = ((x777-(x778%x779))<<x780);

    if (t14 != 34359214080LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x861 = UINT64_MAX;
	uint8_t x862 = 1U;
	static int16_t x864 = 1;
	uint64_t t15 = 3660655652LLU;

    t15 = ((x861-(x862%x863))<<x864);

    if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x865 = 1197U;
	static uint32_t x867 = 14041946U;
	uint8_t x868 = 1U;

    t16 = ((x865-(x866%x867))<<x868);

    if (t16 != 4268753980U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x913 = INT16_MIN;
	uint8_t x914 = UINT8_MAX;
	static uint32_t x915 = 7678U;
	int16_t x916 = 1;
	volatile uint32_t t17 = 392521U;

    t17 = ((x913-(x914%x915))<<x916);

    if (t17 != 4294901250U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x941 = 9;
	int32_t x942 = INT32_MIN;
	int8_t x944 = 1;

    t18 = ((x941-(x942%x943))<<x944);

    if (t18 != 4294967314LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x965 = INT8_MIN;
	int8_t x967 = INT8_MIN;

    t19 = ((x965-(x966%x967))<<x968);

    if (t19 != 18446743526101221376LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x989 = INT16_MAX;
	int64_t x991 = INT64_MIN;
	uint8_t x992 = 0U;

    t20 = ((x989-(x990%x991))<<x992);

    if (t20 != 32754LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1061 = INT16_MAX;
	volatile int64_t x1062 = INT64_MIN;
	static int64_t x1063 = INT64_MIN;
	int64_t t21 = -71175071045642LL;

    t21 = ((x1061-(x1062%x1063))<<x1064);

    if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1109 = INT64_MAX;
	volatile int32_t x1111 = -1;
	int8_t x1112 = 3;
	uint64_t t22 = 11004LLU;

    t22 = ((x1109-(x1110%x1111))<<x1112);

    if (t22 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1189 = -1;
	static volatile uint64_t x1190 = 1063904514978578LLU;
	uint8_t x1192 = 1U;
	static volatile uint64_t t23 = 15902558803907LLU;

    t23 = ((x1189-(x1190%x1191))<<x1192);

    if (t23 != 18444616264679594458LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1197 = UINT64_MAX;
	int8_t x1198 = INT8_MIN;
	static volatile uint8_t x1199 = UINT8_MAX;
	volatile int8_t x1200 = 13;
	static uint64_t t24 = 455188635714733147LLU;

    t24 = ((x1197-(x1198%x1199))<<x1200);

    if (t24 != 1040384LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1205 = -1;
	uint64_t x1207 = 216610612455LLU;
	uint8_t x1208 = 30U;
	uint64_t t25 = 69535775LLU;

    t25 = ((x1205-(x1206%x1207))<<x1208);

    if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1229 = 4U;
	static int64_t x1230 = INT64_MIN;
	static int8_t x1231 = -1;
	uint8_t x1232 = 0U;
	int64_t t26 = 63057149LL;

    t26 = ((x1229-(x1230%x1231))<<x1232);

    if (t26 != 4LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1313 = 8U;
	volatile int32_t x1314 = 1;
	static int8_t x1315 = -1;
	uint8_t x1316 = 26U;
	static volatile uint32_t t27 = 254U;

    t27 = ((x1313-(x1314%x1315))<<x1316);

    if (t27 != 536870912U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1337 = -1295;
	uint64_t x1338 = UINT64_MAX;
	int64_t x1339 = -917186632LL;
	uint64_t t28 = 12LLU;

    t28 = ((x1337-(x1338%x1339))<<x1340);

    if (t28 != 18446744072792363690LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x1393 = INT32_MAX;
	volatile int64_t x1395 = -3571409655565LL;
	uint32_t x1396 = 22U;
	uint64_t t29 = 1898LLU;

    t29 = ((x1393-(x1394%x1395))<<x1396);

    if (t29 != 3476173468989390848LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1401 = 49U;
	int32_t x1402 = 18;
	volatile uint64_t x1403 = 311LLU;
	static uint8_t x1404 = 2U;
	volatile uint64_t t30 = 100162852161096LLU;

    t30 = ((x1401-(x1402%x1403))<<x1404);

    if (t30 != 124LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1421 = 2;
	int8_t x1422 = INT8_MIN;
	static uint32_t x1423 = 4699614U;
	uint32_t t31 = 1277032U;

    t31 = ((x1421-(x1422%x1423))<<x1424);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1637 = 1982LL;
	volatile uint8_t x1638 = UINT8_MAX;
	int16_t x1639 = INT16_MIN;
	uint8_t x1640 = 29U;
	volatile int64_t t32 = -11310400LL;

    t32 = ((x1637-(x1638%x1639))<<x1640);

    if (t32 != 927176065024LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1669 = -1;
	static int64_t x1670 = -75LL;
	static int16_t x1671 = INT16_MAX;

    t33 = ((x1669-(x1670%x1671))<<x1672);

    if (t33 != 158913789952LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1689 = 248404011U;
	volatile int16_t x1690 = 147;
	int16_t x1691 = 4211;
	volatile uint32_t t34 = 15U;

    t34 = ((x1689-(x1690%x1691))<<x1692);

    if (t34 != 3166699520U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x1761 = 26U;
	volatile int64_t x1762 = -1LL;
	uint8_t x1763 = 1U;
	uint32_t x1764 = 4U;
	static int64_t t35 = -1497174573LL;

    t35 = ((x1761-(x1762%x1763))<<x1764);

    if (t35 != 416LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1785 = 2;
	volatile int64_t x1786 = INT64_MIN;
	uint16_t x1787 = 6U;
	volatile uint8_t x1788 = 4U;
	volatile int64_t t36 = 1LL;

    t36 = ((x1785-(x1786%x1787))<<x1788);

    if (t36 != 64LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1798 = INT8_MIN;
	uint64_t x1799 = 213665357005LLU;
	volatile int8_t x1800 = 20;
	volatile uint64_t t37 = 220557843177LLU;

    t37 = ((x1797-(x1798%x1799))<<x1800);

    if (t37 != 18263228310773301248LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1801 = -1;
	uint16_t x1804 = 13U;
	int32_t t38 = 0;

    t38 = ((x1801-(x1802%x1803))<<x1804);

    if (t38 != 204800) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1838 = INT8_MIN;
	int64_t x1839 = -1LL;
	volatile int8_t x1840 = 2;
	static uint64_t t39 = 9LLU;

    t39 = ((x1837-(x1838%x1839))<<x1840);

    if (t39 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x1961 = 89U;
	static int16_t x1962 = -1727;
	uint64_t x1963 = UINT64_MAX;
	volatile uint64_t t40 = 210663318826LLU;

    t40 = ((x1961-(x1962%x1963))<<x1964);

    if (t40 != 121869697024LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2006 = INT16_MIN;
	volatile int64_t x2007 = 3238710833240LL;
	volatile int64_t t41 = -105884LL;

    t41 = ((x2005-(x2006%x2007))<<x2008);

    if (t41 != 134215680LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x2053 = 7391578533099LL;
	static volatile int8_t x2055 = -1;
	int16_t x2056 = 2;

    t42 = ((x2053-(x2054%x2055))<<x2056);

    if (t42 != 29566314132396LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2114 = UINT16_MAX;
	static int8_t x2116 = 0;

    t43 = ((x2113-(x2114%x2115))<<x2116);

    if (t43 != 1435156LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x2153 = INT8_MAX;
	volatile int32_t x2154 = -1;
	int64_t x2155 = INT64_MAX;
	uint64_t x2156 = 6LLU;
	volatile int64_t t44 = -1LL;

    t44 = ((x2153-(x2154%x2155))<<x2156);

    if (t44 != 8192LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2169 = -1;
	static int8_t x2170 = INT8_MIN;
	int64_t x2171 = 1561589709012897441LL;
	volatile int8_t x2172 = 7;

    t45 = ((x2169-(x2170%x2171))<<x2172);

    if (t45 != 16256LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2209 = 61U;
	int16_t x2210 = INT16_MIN;
	uint8_t x2211 = UINT8_MAX;
	int64_t x2212 = 3LL;
	volatile int32_t t46 = 6490035;

    t46 = ((x2209-(x2210%x2211))<<x2212);

    if (t46 != 1512) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x2260 = 26LL;
	volatile uint64_t t47 = 625LLU;

    t47 = ((x2257-(x2258%x2259))<<x2260);

    if (t47 != 18446744073306898432LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x2266 = INT32_MIN;
	volatile uint64_t x2267 = 1951LLU;
	uint32_t x2268 = 12U;
	uint64_t t48 = 49115838534097255LLU;

    t48 = ((x2265-(x2266%x2267))<<x2268);

    if (t48 != 4705697792LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2293 = -1;
	uint16_t x2294 = UINT16_MAX;
	uint64_t x2295 = 17187533452210807LLU;
	uint8_t x2296 = 13U;
	uint64_t t49 = 9LLU;

    t49 = ((x2293-(x2294%x2295))<<x2296);

    if (t49 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x2453 = 141951072LLU;
	int16_t x2454 = -19;
	static int64_t x2455 = INT64_MAX;
	uint8_t x2456 = 49U;

    t50 = ((x2453-(x2454%x2455))<<x2456);

    if (t50 != 64739244643450880LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x2457 = 53573188941710927LLU;
	int32_t x2458 = -5179708;
	int8_t x2459 = 54;
	static uint16_t x2460 = 43U;
	static uint64_t t51 = 32423938LLU;

    t51 = ((x2457-(x2458%x2459))<<x2460);

    if (t51 != 15578892293027921920LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2521 = 32U;
	volatile uint8_t x2523 = 51U;
	int16_t x2524 = 0;

    t52 = ((x2521-(x2522%x2523))<<x2524);

    if (t52 != 33) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2545 = INT8_MAX;
	static int64_t x2546 = -51566790335LL;
	int64_t t53 = 1639963562936477322LL;

    t53 = ((x2545-(x2546%x2547))<<x2548);

    if (t53 != 1689740589858816LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x2617 = -1LL;
	int8_t x2619 = INT8_MAX;
	static uint16_t x2620 = 0U;
	int64_t t54 = -296899512350LL;

    t54 = ((x2617-(x2618%x2619))<<x2620);

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x2769 = INT64_MIN;
	uint64_t x2770 = 419940LLU;
	uint32_t x2771 = UINT32_MAX;
	uint8_t x2772 = 18U;
	uint64_t t55 = 9LLU;

    t55 = ((x2769-(x2770%x2771))<<x2772);

    if (t55 != 18446743963624800256LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x2861 = 127U;
	static int8_t x2863 = INT8_MIN;
	int32_t t56 = 23665462;

    t56 = ((x2861-(x2862%x2863))<<x2864);

    if (t56 != 508) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x2914 = UINT16_MAX;
	volatile uint32_t x2915 = UINT32_MAX;
	uint32_t x2916 = 25U;
	volatile uint32_t t57 = 1571U;

    t57 = ((x2913-(x2914%x2915))<<x2916);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3009 = 11U;
	int8_t x3011 = -7;
	int8_t x3012 = 28;

    t58 = ((x3009-(x3010%x3011))<<x3012);

    if (t58 != 3221225472LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3205 = INT8_MAX;
	uint64_t x3206 = 163809646806170LLU;
	volatile int16_t x3207 = INT16_MIN;
	uint64_t x3208 = 0LLU;
	volatile uint64_t t59 = 592803LLU;

    t59 = ((x3205-(x3206%x3207))<<x3208);

    if (t59 != 18446580264062745573LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x3261 = 71U;
	int32_t x3262 = INT32_MAX;
	uint8_t x3264 = 9U;
	uint32_t t60 = 29U;

    t60 = ((x3261-(x3262%x3263))<<x3264);

    if (t60 != 31232U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x3333 = INT8_MIN;
	uint32_t x3334 = 273U;
	uint64_t x3335 = 32065LLU;
	int32_t x3336 = 14;
	uint64_t t61 = 707463323605110546LLU;

    t61 = ((x3333-(x3334%x3335))<<x3336);

    if (t61 != 18446744073702981632LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x3357 = 7U;
	volatile uint64_t x3358 = 13306974995LLU;
	static int32_t x3359 = INT32_MIN;
	uint8_t x3360 = 0U;

    t62 = ((x3357-(x3358%x3359))<<x3360);

    if (t62 != 18446744060402576628LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x3481 = UINT64_MAX;
	static uint8_t x3482 = 49U;
	int64_t x3483 = INT64_MAX;
	static uint16_t x3484 = 11U;
	uint64_t t63 = 16455265LLU;

    t63 = ((x3481-(x3482%x3483))<<x3484);

    if (t63 != 18446744073709449216LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x3505 = INT16_MAX;
	int8_t x3506 = 1;
	volatile uint32_t x3507 = UINT32_MAX;
	int8_t x3508 = 10;
	static uint32_t t64 = 228877U;

    t64 = ((x3505-(x3506%x3507))<<x3508);

    if (t64 != 33552384U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x3537 = -1;
	volatile int16_t x3538 = -4;
	volatile int64_t x3539 = INT64_MIN;

    t65 = ((x3537-(x3538%x3539))<<x3540);

    if (t65 != 24LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x3589 = UINT16_MAX;
	uint8_t x3591 = 1U;
	static int16_t x3592 = 1;

    t66 = ((x3589-(x3590%x3591))<<x3592);

    if (t66 != 131070) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x3854 = -1LL;
	int16_t x3855 = 10399;
	uint32_t x3856 = 5U;
	uint64_t t67 = 3LLU;

    t67 = ((x3853-(x3854%x3855))<<x3856);

    if (t67 != 165981024LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x3985 = INT8_MAX;
	uint32_t x3986 = UINT32_MAX;
	volatile int16_t x3987 = INT16_MIN;
	volatile uint32_t t68 = 22U;

    t68 = ((x3985-(x3986%x3987))<<x3988);

    if (t68 != 4293922816U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x3989 = -1LL;
	volatile int32_t x3990 = -1;
	int8_t x3991 = 30;
	uint8_t x3992 = 0U;
	volatile int64_t t69 = 7LL;

    t69 = ((x3989-(x3990%x3991))<<x3992);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x4013 = 25555U;
	int8_t x4014 = INT8_MIN;
	uint32_t x4015 = UINT32_MAX;
	int32_t x4016 = 6;
	uint32_t t70 = 75U;

    t70 = ((x4013-(x4014%x4015))<<x4016);

    if (t70 != 1643712U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x4041 = INT8_MAX;
	int8_t x4042 = INT8_MAX;
	static int8_t x4044 = 9;
	int32_t t71 = -1539;

    t71 = ((x4041-(x4042%x4043))<<x4044);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x4045 = UINT64_MAX;
	uint8_t x4046 = UINT8_MAX;
	int64_t x4047 = -928652919428857LL;
	volatile uint8_t x4048 = 3U;
	volatile uint64_t t72 = 6LLU;

    t72 = ((x4045-(x4046%x4047))<<x4048);

    if (t72 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x4093 = 800U;
	uint64_t x4094 = UINT64_MAX;
	volatile int64_t x4095 = INT64_MAX;
	uint16_t x4096 = 2U;

    t73 = ((x4093-(x4094%x4095))<<x4096);

    if (t73 != 3196LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x4129 = UINT8_MAX;
	volatile int32_t x4130 = -1;
	volatile uint16_t x4132 = 10U;

    t74 = ((x4129-(x4130%x4131))<<x4132);

    if (t74 != 262144) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x4149 = UINT8_MAX;
	uint64_t x4150 = 311639329293993LLU;
	volatile int64_t x4151 = INT64_MIN;
	static volatile uint16_t x4152 = 48U;
	volatile uint64_t t75 = 48856853438299726LLU;

    t75 = ((x4149-(x4150%x4151))<<x4152);

    if (t75 != 13426919339051712512LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x4173 = UINT64_MAX;
	int16_t x4174 = 2;
	volatile uint64_t x4175 = UINT64_MAX;
	uint16_t x4176 = 0U;
	uint64_t t76 = 44LLU;

    t76 = ((x4173-(x4174%x4175))<<x4176);

    if (t76 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x4217 = UINT64_MAX;
	int32_t x4218 = INT32_MIN;
	int16_t x4219 = -1;
	volatile int32_t x4220 = 0;
	uint64_t t77 = UINT64_MAX;

    t77 = ((x4217-(x4218%x4219))<<x4220);

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x4349 = 1843904577969288LLU;
	int32_t x4350 = -49306;
	static int16_t x4351 = INT16_MIN;
	int32_t x4352 = 1;

    t78 = ((x4349-(x4350%x4351))<<x4352);

    if (t78 != 3687809155971652LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x4412 = 0U;
	volatile uint64_t t79 = 257612238LLU;

    t79 = ((x4409-(x4410%x4411))<<x4412);

    if (t79 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x4465 = 6703U;
	uint64_t x4466 = 0LLU;
	volatile uint64_t t80 = 1071485LLU;

    t80 = ((x4465-(x4466%x4467))<<x4468);

    if (t80 != 107248LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x4494 = 148LLU;
	int64_t x4495 = INT64_MAX;
	uint16_t x4496 = 4U;
	uint64_t t81 = 4875629LLU;

    t81 = ((x4493-(x4494%x4495))<<x4496);

    if (t81 != 18446744073709549280LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4501 = INT8_MIN;
	int32_t x4502 = INT32_MAX;
	uint32_t x4503 = 64304642U;
	uint8_t x4504 = 27U;
	uint32_t t82 = 10297U;

    t82 = ((x4501-(x4502%x4503))<<x4504);

    if (t82 != 402653184U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4573 = 15263;
	static volatile int64_t x4574 = -330922174LL;
	int16_t x4575 = INT16_MAX;
	uint8_t x4576 = 0U;
	volatile int64_t t83 = 1529LL;

    t83 = ((x4573-(x4574%x4575))<<x4576);

    if (t83 != 23504LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x4601 = 88739U;
	volatile uint8_t x4604 = 1U;
	volatile uint32_t t84 = 4U;

    t84 = ((x4601-(x4602%x4603))<<x4604);

    if (t84 != 177494U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4618 = 12U;
	int8_t x4619 = INT8_MIN;
	uint8_t x4620 = 2U;
	volatile uint32_t t85 = 139078724U;

    t85 = ((x4617-(x4618%x4619))<<x4620);

    if (t85 != 352U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x4649 = 204444069538035660LLU;
	int32_t x4650 = -1796;
	int64_t x4651 = INT64_MAX;
	uint64_t t86 = 22030527648LLU;

    t86 = ((x4649-(x4650%x4651))<<x4652);

    if (t86 != 6542210225217198592LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4661 = -1;
	int16_t x4663 = INT16_MAX;
	static int8_t x4664 = 12;
	static uint32_t t87 = 78U;

    t87 = ((x4661-(x4662%x4663))<<x4664);

    if (t87 != 4284661760U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4721 = -9;
	static int32_t x4722 = INT32_MIN;
	static int16_t x4723 = -199;
	volatile uint8_t x4724 = 27U;
	static volatile int32_t t88 = 3741076;

    t88 = ((x4721-(x4722%x4723))<<x4724);

    if (t88 != 1879048192) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x4726 = INT32_MIN;
	int64_t x4727 = 2784LL;
	static uint64_t x4728 = 8LLU;

    t89 = ((x4725-(x4726%x4727))<<x4728);

    if (t89 != 180480LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x4735 = INT8_MIN;
	int8_t x4736 = 3;
	uint64_t t90 = 8507472728503540917LLU;

    t90 = ((x4733-(x4734%x4735))<<x4736);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x4773 = 16U;
	volatile uint64_t t91 = 29589LLU;

    t91 = ((x4773-(x4774%x4775))<<x4776);

    if (t91 != 18397255963840635072LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x4809 = UINT8_MAX;
	volatile int64_t x4810 = -15LL;
	static uint8_t x4812 = 50U;
	volatile int64_t t92 = -468LL;

    t92 = ((x4809-(x4810%x4811))<<x4812);

    if (t92 != 288230376151711744LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x4836 = 5U;
	int32_t t93 = -1;

    t93 = ((x4833-(x4834%x4835))<<x4836);

    if (t93 != 288) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x4901 = UINT16_MAX;
	volatile int64_t x4902 = INT64_MIN;
	uint8_t x4903 = UINT8_MAX;
	uint8_t x4904 = 4U;
	volatile int64_t t94 = -15LL;

    t94 = ((x4901-(x4902%x4903))<<x4904);

    if (t94 != 1050608LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x4957 = -1LL;
	uint16_t x4959 = UINT16_MAX;
	volatile int32_t x4960 = 1;
	volatile int64_t t95 = 20176558LL;

    t95 = ((x4957-(x4958%x4959))<<x4960);

    if (t95 != 65534LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x5214 = -361301552;
	volatile int32_t x5215 = INT32_MIN;
	static int16_t x5216 = 1;
	int32_t t96 = -84470;

    t96 = ((x5213-(x5214%x5215))<<x5216);

    if (t96 != 722603104) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x5229 = 78389LLU;
	static int16_t x5231 = INT16_MIN;
	static uint64_t t97 = 991460404343566LLU;

    t97 = ((x5229-(x5230%x5231))<<x5232);

    if (t97 != 156778LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x5257 = -61124074;
	uint32_t x5258 = 102375189U;
	volatile int8_t x5259 = -3;
	int32_t x5260 = 2;

    t98 = ((x5257-(x5258%x5259))<<x5260);

    if (t98 != 3640970244U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x5306 = UINT64_MAX;
	int16_t x5307 = 746;
	int8_t x5308 = 1;
	volatile uint64_t t99 = 1215721905182663838LLU;

    t99 = ((x5305-(x5306%x5307))<<x5308);

    if (t99 != 18446744073709485294LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x5309 = 395870U;
	volatile int16_t x5311 = -21;
	int16_t x5312 = 7;
	volatile int64_t t100 = 19282LL;

    t100 = ((x5309-(x5310%x5311))<<x5312);

    if (t100 != 50672384LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x5365 = -1;
	int8_t x5366 = INT8_MIN;
	volatile int16_t x5367 = INT16_MAX;
	uint8_t x5368 = 4U;
	volatile int32_t t101 = 9333808;

    t101 = ((x5365-(x5366%x5367))<<x5368);

    if (t101 != 2032) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5409 = 7600144340894LLU;
	static int64_t x5410 = INT64_MIN;
	static uint32_t x5411 = 7956U;
	volatile int16_t x5412 = 4;

    t102 = ((x5409-(x5410%x5411))<<x5412);

    if (t102 != 121602309469408LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x5493 = 6438714LL;
	static int64_t x5495 = -1LL;
	static volatile int64_t x5496 = 13LL;
	static volatile int64_t t103 = 694202001755055209LL;

    t103 = ((x5493-(x5494%x5495))<<x5496);

    if (t103 != 52745945088LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5533 = INT16_MAX;
	int32_t x5535 = -1;
	int8_t x5536 = 0;
	int64_t t104 = -2134523566LL;

    t104 = ((x5533-(x5534%x5535))<<x5536);

    if (t104 != 32767LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x5590 = 46;
	int32_t x5591 = INT32_MIN;
	volatile int8_t x5592 = 0;
	volatile uint64_t t105 = 3LLU;

    t105 = ((x5589-(x5590%x5591))<<x5592);

    if (t105 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x5593 = -1;
	int64_t x5594 = INT64_MIN;
	int64_t x5596 = 1LL;
	int64_t t106 = -1LL;

    t106 = ((x5593-(x5594%x5595))<<x5596);

    if (t106 != 10599278LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x5610 = 1721754463U;
	int8_t x5612 = 0;
	volatile uint32_t t107 = 263927217U;

    t107 = ((x5609-(x5610%x5611))<<x5612);

    if (t107 != 4294948323U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x5650 = 82538504;
	static int32_t x5651 = -1;
	int32_t x5652 = 17;
	static int32_t t108 = 0;

    t108 = ((x5649-(x5650%x5651))<<x5652);

    if (t108 != 419037184) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x5657 = 1007281U;
	static uint16_t x5659 = 1211U;
	uint8_t x5660 = 1U;
	int64_t t109 = -5LL;

    t109 = ((x5657-(x5658%x5659))<<x5660);

    if (t109 != 2013196LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5694 = INT32_MIN;
	static int8_t x5695 = 7;
	int16_t x5696 = 1;
	volatile uint64_t t110 = 444773988156LLU;

    t110 = ((x5693-(x5694%x5695))<<x5696);

    if (t110 != 744LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x5698 = 214;
	static uint8_t x5699 = 4U;
	int8_t x5700 = 1;
	int32_t t111 = -250137;

    t111 = ((x5697-(x5698%x5699))<<x5700);

    if (t111 != 2704) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x5701 = INT16_MAX;
	int16_t x5702 = -621;
	volatile int16_t x5703 = INT16_MAX;
	uint8_t x5704 = 0U;
	int32_t t112 = 406;

    t112 = ((x5701-(x5702%x5703))<<x5704);

    if (t112 != 33388) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x5725 = INT8_MIN;
	uint32_t t113 = 189053768U;

    t113 = ((x5725-(x5726%x5727))<<x5728);

    if (t113 != 4294443008U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x5790 = INT64_MAX;
	int8_t x5791 = INT8_MIN;
	volatile int64_t t114 = 54054423LL;

    t114 = ((x5789-(x5790%x5791))<<x5792);

    if (t114 != 32640LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x5909 = INT16_MIN;
	int16_t x5910 = INT16_MIN;
	uint8_t x5912 = 17U;
	volatile int32_t t115 = -559;

    t115 = ((x5909-(x5910%x5911))<<x5912);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x5941 = INT64_MAX;
	int64_t x5943 = -1LL;
	uint16_t x5944 = 0U;
	volatile int64_t t116 = INT64_MAX;

    t116 = ((x5941-(x5942%x5943))<<x5944);

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x5953 = INT8_MAX;
	int64_t x5954 = -1LL;
	int64_t x5955 = -1LL;
	int8_t x5956 = 6;
	int64_t t117 = 99622460LL;

    t117 = ((x5953-(x5954%x5955))<<x5956);

    if (t117 != 8128LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x5985 = 12U;
	int8_t x5986 = INT8_MAX;
	int8_t x5987 = -1;

    t118 = ((x5985-(x5986%x5987))<<x5988);

    if (t118 != 48) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x6025 = UINT32_MAX;
	static int32_t x6026 = -1;
	int8_t x6027 = INT8_MIN;
	uint32_t t119 = 117U;

    t119 = ((x6025-(x6026%x6027))<<x6028);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x6069 = 0;
	static int8_t x6071 = INT8_MAX;
	static int8_t x6072 = 16;

    t120 = ((x6069-(x6070%x6071))<<x6072);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x6173 = 51237802606114546LLU;
	int16_t x6174 = -6399;
	int8_t x6175 = INT8_MIN;
	static uint16_t x6176 = 3U;
	volatile uint64_t t121 = 1283LLU;

    t121 = ((x6173-(x6174%x6175))<<x6176);

    if (t121 != 409902420848917384LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x6253 = 107U;
	static int64_t x6254 = 612328955811084LL;
	volatile uint64_t t122 = 22669320LLU;

    t122 = ((x6253-(x6254%x6255))<<x6256);

    if (t122 != 18446720548484952888LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x6329 = INT32_MIN;
	static uint64_t x6330 = 528009073759239LLU;
	static volatile int64_t x6332 = 0LL;
	uint64_t t123 = 1335692704LLU;

    t123 = ((x6329-(x6330%x6331))<<x6332);

    if (t123 != 18446216062488308729LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x6353 = 24;
	uint8_t x6355 = 3U;
	uint32_t x6356 = 6U;
	volatile uint64_t t124 = 168391163928496067LLU;

    t124 = ((x6353-(x6354%x6355))<<x6356);

    if (t124 != 1408LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x6358 = INT32_MIN;
	static uint16_t x6359 = UINT16_MAX;
	uint64_t x6360 = 0LLU;

    t125 = ((x6357-(x6358%x6359))<<x6360);

    if (t125 != 50918969486921043LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x6437 = UINT64_MAX;
	uint64_t x6438 = 4LLU;
	uint16_t x6440 = 1U;
	volatile uint64_t t126 = 7375673LLU;

    t126 = ((x6437-(x6438%x6439))<<x6440);

    if (t126 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x6441 = UINT32_MAX;
	int64_t x6442 = -10LL;
	static volatile int16_t x6443 = INT16_MIN;
	int8_t x6444 = 4;
	volatile int64_t t127 = -1983896946LL;

    t127 = ((x6441-(x6442%x6443))<<x6444);

    if (t127 != 68719476880LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x6463 = -41;
	volatile int32_t t128 = 19736;

    t128 = ((x6461-(x6462%x6463))<<x6464);

    if (t128 != 10) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x6470 = 1789434486U;
	int8_t x6471 = -1;
	uint8_t x6472 = 22U;
	static volatile uint32_t t129 = 3964683U;

    t129 = ((x6469-(x6470%x6471))<<x6472);

    if (t129 != 1115684864U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x6493 = 0;
	static volatile int64_t x6494 = INT64_MIN;
	volatile int32_t x6495 = -1;

    t130 = ((x6493-(x6494%x6495))<<x6496);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x6533 = 136950LLU;
	int64_t x6534 = -387815355LL;
	int8_t x6535 = INT8_MIN;
	static uint64_t x6536 = 41LLU;
	volatile uint64_t t131 = 8157LLU;

    t131 = ((x6533-(x6534%x6535))<<x6536);

    if (t131 != 301285977219923968LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6553 = -1;
	uint64_t x6554 = UINT64_MAX;
	volatile uint8_t x6555 = UINT8_MAX;
	int8_t x6556 = 58;
	uint64_t t132 = 3093LLU;

    t132 = ((x6553-(x6554%x6555))<<x6556);

    if (t132 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x6601 = -1447822043259LL;
	int64_t x6602 = INT64_MIN;
	uint64_t x6603 = 82LLU;
	uint8_t x6604 = 25U;

    t133 = ((x6601-(x6602%x6603))<<x6604);

    if (t133 != 6759385922225045504LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x6709 = UINT8_MAX;
	int8_t x6712 = 1;
	volatile uint64_t t134 = 1LLU;

    t134 = ((x6709-(x6710%x6711))<<x6712);

    if (t134 != 18446744039702266276LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x6765 = 3816U;
	static uint64_t t135 = 59626715995979LLU;

    t135 = ((x6765-(x6766%x6767))<<x6768);

    if (t135 != 3906560LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x6781 = -14;
	int32_t x6782 = INT32_MAX;
	int16_t x6784 = 2;
	uint32_t t136 = 0U;

    t136 = ((x6781-(x6782%x6783))<<x6784);

    if (t136 != 4294967244U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x6818 = UINT16_MAX;
	uint64_t x6819 = UINT64_MAX;
	volatile uint8_t x6820 = 60U;
	volatile uint64_t t137 = 8461391837061536315LLU;

    t137 = ((x6817-(x6818%x6819))<<x6820);

    if (t137 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x6841 = -1;
	volatile uint32_t x6842 = 2911725U;
	volatile uint32_t x6843 = UINT32_MAX;
	uint8_t x6844 = 13U;
	uint32_t t138 = 2044961661U;

    t138 = ((x6841-(x6842%x6843))<<x6844);

    if (t138 != 1916944384U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x6901 = 512561182U;
	int16_t x6902 = INT16_MIN;
	int32_t x6903 = INT32_MIN;
	int8_t x6904 = 13;
	uint32_t t139 = 1U;

    t139 = ((x6901-(x6902%x6903))<<x6904);

    if (t139 != 2986590208U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x6946 = 28442603182089671LLU;
	uint8_t x6948 = 59U;

    t140 = ((x6945-(x6946%x6947))<<x6948);

    if (t140 != 5764607523034234880LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x7081 = 1467746644822034LLU;
	uint8_t x7084 = 9U;
	volatile uint64_t t141 = 72LLU;

    t141 = ((x7081-(x7082%x7083))<<x7084);

    if (t141 != 751486282148881408LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x7129 = 1098819856LLU;
	int32_t x7130 = INT32_MIN;
	volatile int16_t x7131 = 25;
	uint8_t x7132 = 3U;
	volatile uint64_t t142 = 4110824190152997690LLU;

    t142 = ((x7129-(x7130%x7131))<<x7132);

    if (t142 != 8790559032LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x7269 = INT32_MAX;
	int32_t x7271 = INT32_MIN;
	uint8_t x7272 = 20U;
	uint32_t t143 = 8913920U;

    t143 = ((x7269-(x7270%x7271))<<x7272);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x7286 = UINT64_MAX;
	int8_t x7287 = -7;
	uint16_t x7288 = 54U;
	uint64_t t144 = 12986671290250LLU;

    t144 = ((x7285-(x7286%x7287))<<x7288);

    if (t144 != 18338657682652659712LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x7341 = 5015U;
	static int8_t x7342 = INT8_MIN;
	volatile uint16_t x7344 = 15U;
	int64_t t145 = 2480LL;

    t145 = ((x7341-(x7342%x7343))<<x7344);

    if (t145 != 164331520LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x7429 = UINT32_MAX;
	uint16_t x7430 = UINT16_MAX;
	int32_t x7431 = 23291;
	volatile uint32_t t146 = 2051282U;

    t146 = ((x7429-(x7430%x7431))<<x7432);

    if (t146 != 4292541184U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x7461 = 4;
	int8_t x7462 = INT8_MIN;
	volatile int64_t x7463 = -3603611659430572LL;
	static uint8_t x7464 = 1U;
	static volatile int64_t t147 = -238LL;

    t147 = ((x7461-(x7462%x7463))<<x7464);

    if (t147 != 264LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x7498 = -46;
	uint64_t x7499 = UINT64_MAX;
	volatile uint8_t x7500 = 0U;
	uint64_t t148 = 56530907653LLU;

    t148 = ((x7497-(x7498%x7499))<<x7500);

    if (t148 != 9223372036854775854LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x7533 = 17U;
	int32_t x7534 = -2176353;
	static int16_t x7535 = INT16_MAX;
	static volatile uint8_t x7536 = 1U;
	int32_t t149 = -27;

    t149 = ((x7533-(x7534%x7535))<<x7536);

    if (t149 != 27496) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x7565 = -1;
	int64_t x7566 = -3656LL;
	volatile int16_t x7567 = INT16_MIN;
	uint8_t x7568 = 1U;
	static int64_t t150 = 167LL;

    t150 = ((x7565-(x7566%x7567))<<x7568);

    if (t150 != 7310LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x7593 = -25;
	int8_t x7594 = INT8_MIN;
	uint8_t x7596 = 0U;

    t151 = ((x7593-(x7594%x7595))<<x7596);

    if (t151 != 103) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x7613 = -94;
	volatile int64_t x7614 = -1LL;
	uint64_t x7615 = 575827520LLU;
	int8_t x7616 = 15;
	static volatile uint64_t t152 = 6571LLU;

    t152 = ((x7613-(x7614%x7615))<<x7616);

    if (t152 != 18446727180100665344LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x7637 = UINT8_MAX;
	int16_t x7639 = INT16_MIN;
	uint16_t x7640 = 3U;

    t153 = ((x7637-(x7638%x7639))<<x7640);

    if (t153 != 2040) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x7659 = 43U;
	static uint8_t x7660 = 0U;
	static volatile uint64_t t154 = 438446306057071LLU;

    t154 = ((x7657-(x7658%x7659))<<x7660);

    if (t154 != 14063940386382LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x7725 = 93U;
	int32_t x7726 = 224400182;
	int8_t x7727 = INT8_MIN;
	int8_t x7728 = 0;
	volatile int32_t t155 = -77330311;

    t155 = ((x7725-(x7726%x7727))<<x7728);

    if (t155 != 39) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x7753 = 1;
	int64_t x7754 = INT64_MAX;
	int16_t x7756 = 2;
	int64_t t156 = 11674441LL;

    t156 = ((x7753-(x7754%x7755))<<x7756);

    if (t156 != 4LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x7797 = -3542;
	volatile uint64_t x7798 = 11863LLU;
	int64_t x7799 = INT64_MAX;
	uint8_t x7800 = 13U;
	uint64_t t157 = 15339211LLU;

    t157 = ((x7797-(x7798%x7799))<<x7800);

    if (t157 != 18446744073583353856LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x7849 = UINT16_MAX;
	uint8_t x7852 = 19U;
	volatile uint32_t t158 = 29297U;

    t158 = ((x7849-(x7850%x7851))<<x7852);

    if (t158 != 4293394432U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x7881 = UINT16_MAX;
	int16_t x7882 = 0;
	static int32_t x7883 = INT32_MAX;
	uint8_t x7884 = 5U;
	volatile int32_t t159 = 1;

    t159 = ((x7881-(x7882%x7883))<<x7884);

    if (t159 != 2097120) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x7901 = 4U;
	uint8_t x7903 = UINT8_MAX;
	uint32_t t160 = 1889169U;

    t160 = ((x7901-(x7902%x7903))<<x7904);

    if (t160 != 4U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x7942 = UINT64_MAX;
	volatile uint32_t x7944 = 3U;
	uint64_t t161 = 385047LLU;

    t161 = ((x7941-(x7942%x7943))<<x7944);

    if (t161 != 768LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x7957 = 11779066004912LLU;
	static int8_t x7959 = -1;
	uint8_t x7960 = 9U;
	volatile uint64_t t162 = 166LLU;

    t162 = ((x7957-(x7958%x7959))<<x7960);

    if (t162 != 6030881794514944LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x8050 = -1;
	volatile uint64_t x8051 = 7394058331357188LLU;
	volatile int8_t x8052 = 1;
	uint64_t t163 = 1793164LLU;

    t163 = ((x8049-(x8050%x8051))<<x8052);

    if (t163 != 18434818878805134834LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x8089 = 408;
	static volatile uint8_t x8090 = 1U;
	int8_t x8091 = INT8_MIN;
	static uint32_t x8092 = 3U;
	volatile int32_t t164 = -3;

    t164 = ((x8089-(x8090%x8091))<<x8092);

    if (t164 != 3256) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x8094 = -1;
	int32_t x8095 = INT32_MAX;
	static uint8_t x8096 = 14U;
	int32_t t165 = -13;

    t165 = ((x8093-(x8094%x8095))<<x8096);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x8105 = 8758558U;
	uint16_t x8106 = UINT16_MAX;
	uint32_t x8107 = 36327960U;
	int8_t x8108 = 1;
	static volatile uint32_t t166 = 10803U;

    t166 = ((x8105-(x8106%x8107))<<x8108);

    if (t166 != 17386046U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x8153 = -361150361;
	uint64_t x8154 = 63LLU;
	volatile int16_t x8155 = INT16_MIN;
	volatile uint8_t x8156 = 1U;
	uint64_t t167 = 18601971LLU;

    t167 = ((x8153-(x8154%x8155))<<x8156);

    if (t167 != 18446744072987250768LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x8245 = INT16_MAX;
	static volatile int8_t x8246 = -1;
	volatile uint64_t x8247 = UINT64_MAX;
	uint64_t x8248 = 0LLU;
	uint64_t t168 = 765993864LLU;

    t168 = ((x8245-(x8246%x8247))<<x8248);

    if (t168 != 32767LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x8283 = 90465798LL;
	volatile uint8_t x8284 = 14U;
	uint64_t t169 = 73189673LLU;

    t169 = ((x8281-(x8282%x8283))<<x8284);

    if (t169 != 18446743603231932416LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x8285 = 7U;
	uint16_t x8286 = 218U;
	uint16_t x8288 = 1U;
	static volatile uint32_t t170 = 26U;

    t170 = ((x8285-(x8286%x8287))<<x8288);

    if (t170 != 4294967128U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x8289 = 8043033771837962091LLU;
	int32_t x8290 = 0;
	int32_t x8291 = -3620760;
	int16_t x8292 = 0;

    t171 = ((x8289-(x8290%x8291))<<x8292);

    if (t171 != 8043033771837962091LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x8374 = 21648U;
	volatile uint8_t x8375 = 14U;
	uint8_t x8376 = 3U;
	volatile int32_t t172 = 84;

    t172 = ((x8373-(x8374%x8375))<<x8376);

    if (t172 != 720) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x8377 = -1;
	uint64_t x8378 = 71998LLU;
	static uint8_t x8380 = 1U;
	volatile uint64_t t173 = 101066245492465LLU;

    t173 = ((x8377-(x8378%x8379))<<x8380);

    if (t173 != 18446744073709407618LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x8405 = INT16_MAX;
	int16_t x8406 = INT16_MIN;
	volatile uint8_t x8407 = 8U;
	volatile int64_t x8408 = 1LL;

    t174 = ((x8405-(x8406%x8407))<<x8408);

    if (t174 != 65534) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x8417 = 232U;
	uint16_t x8420 = 1U;

    t175 = ((x8417-(x8418%x8419))<<x8420);

    if (t175 != 4294966754U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x8455 = 27U;
	volatile uint16_t x8456 = 0U;
	int64_t t176 = 3159LL;

    t176 = ((x8453-(x8454%x8455))<<x8456);

    if (t176 != 4294967297LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x8458 = -858LL;
	static volatile int64_t x8459 = INT64_MIN;
	int64_t x8460 = 6LL;
	int64_t t177 = -1303578848LL;

    t177 = ((x8457-(x8458%x8459))<<x8460);

    if (t177 != 54848LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x8469 = INT64_MAX;
	uint64_t x8470 = 253552172000LLU;
	int16_t x8471 = 1;

    t178 = ((x8469-(x8470%x8471))<<x8472);

    if (t178 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x8545 = UINT32_MAX;
	volatile uint8_t x8546 = UINT8_MAX;
	int16_t x8547 = INT16_MAX;
	uint8_t x8548 = 12U;
	uint32_t t179 = 304965U;

    t179 = ((x8545-(x8546%x8547))<<x8548);

    if (t179 != 4293918720U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x8593 = INT32_MIN;
	uint64_t x8594 = 111006502579430026LLU;
	static uint16_t x8595 = UINT16_MAX;
	volatile int32_t x8596 = 1;
	uint64_t t180 = 7985774LLU;

    t180 = ((x8593-(x8594%x8595))<<x8596);

    if (t180 != 18446744069414556718LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x8693 = 909518717;
	int8_t x8695 = 1;
	uint64_t x8696 = 0LLU;
	volatile int32_t t181 = 798;

    t181 = ((x8693-(x8694%x8695))<<x8696);

    if (t181 != 909518717) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x8709 = INT32_MIN;
	uint64_t x8710 = UINT64_MAX;
	static uint8_t x8712 = 3U;
	volatile uint64_t t182 = 3884LLU;

    t182 = ((x8709-(x8710%x8711))<<x8712);

    if (t182 != 18446744056529661944LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x8769 = 2806U;
	static int64_t x8770 = -1LL;
	int64_t t183 = 11LL;

    t183 = ((x8769-(x8770%x8771))<<x8772);

    if (t183 != 2807LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x8837 = UINT64_MAX;
	volatile uint16_t x8839 = UINT16_MAX;
	uint64_t t184 = 496765076LLU;

    t184 = ((x8837-(x8838%x8839))<<x8840);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x8861 = UINT64_MAX;
	int32_t x8863 = -1;
	volatile uint16_t x8864 = 14U;
	static uint64_t t185 = 46385LLU;

    t185 = ((x8861-(x8862%x8863))<<x8864);

    if (t185 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x8869 = -1;
	int64_t x8870 = -1LL;
	uint8_t x8872 = 3U;

    t186 = ((x8869-(x8870%x8871))<<x8872);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x8981 = -1;
	volatile int64_t x8982 = INT64_MIN;
	uint32_t x8984 = 2U;

    t187 = ((x8981-(x8982%x8983))<<x8984);

    if (t187 != 2584LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x9021 = 13758U;
	uint64_t x9022 = UINT64_MAX;
	int64_t x9023 = INT64_MIN;
	int8_t x9024 = 1;
	volatile uint64_t t188 = 6850598003844LLU;

    t188 = ((x9021-(x9022%x9023))<<x9024);

    if (t188 != 27518LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x9049 = INT8_MAX;
	int16_t x9050 = 6467;
	volatile int8_t x9051 = -1;
	uint32_t x9052 = 0U;
	volatile int32_t t189 = 123628;

    t189 = ((x9049-(x9050%x9051))<<x9052);

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x9066 = INT8_MAX;
	int16_t x9067 = INT16_MAX;
	volatile int16_t x9068 = 0;
	volatile uint32_t t190 = 100U;

    t190 = ((x9065-(x9066%x9067))<<x9068);

    if (t190 != 4294967168U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x9070 = -1;
	int32_t x9071 = INT32_MIN;
	volatile uint32_t t191 = 1627U;

    t191 = ((x9069-(x9070%x9071))<<x9072);

    if (t191 != 2285895680U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x9089 = 485219LL;
	int8_t x9090 = -5;
	volatile int32_t x9091 = INT32_MAX;
	uint8_t x9092 = 10U;

    t192 = ((x9089-(x9090%x9091))<<x9092);

    if (t192 != 496869376LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x9113 = -24;
	int16_t x9114 = INT16_MAX;
	uint32_t x9115 = UINT32_MAX;
	int8_t x9116 = 1;
	uint32_t t193 = 249524U;

    t193 = ((x9113-(x9114%x9115))<<x9116);

    if (t193 != 4294901714U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x9133 = -1LL;
	int64_t x9134 = INT64_MIN;
	uint16_t x9135 = 180U;
	int64_t t194 = -2448383357LL;

    t194 = ((x9133-(x9134%x9135))<<x9136);

    if (t194 != 240518168576LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x9181 = 34U;
	int64_t x9182 = -1572232LL;
	uint64_t x9184 = 1LLU;

    t195 = ((x9181-(x9182%x9183))<<x9184);

    if (t195 != 84LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x9266 = 258LLU;
	volatile uint16_t x9267 = UINT16_MAX;
	static uint8_t x9268 = 0U;
	volatile uint64_t t196 = 56050375LLU;

    t196 = ((x9265-(x9266%x9267))<<x9268);

    if (t196 != 18446744073701407598LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x9325 = -1;
	uint64_t x9326 = 28659154209807LLU;
	int64_t x9327 = 15751084LL;
	uint32_t x9328 = 31U;
	volatile uint64_t t197 = 2932777LLU;

    t197 = ((x9325-(x9326%x9327))<<x9328);

    if (t197 != 18426088381982179328LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x9397 = 1;
	int8_t x9398 = -1;
	int64_t x9399 = INT64_MAX;
	uint64_t x9400 = 36LLU;
	int64_t t198 = 283504535594399LL;

    t198 = ((x9397-(x9398%x9399))<<x9400);

    if (t198 != 137438953472LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x9421 = 1307;
	uint16_t x9423 = UINT16_MAX;
	uint8_t x9424 = 3U;
	int32_t t199 = -64766;

    t199 = ((x9421-(x9422%x9423))<<x9424);

    if (t199 != 10456) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

