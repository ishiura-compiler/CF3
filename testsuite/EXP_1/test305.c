#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x122 = -199832611615050LL;
volatile uint32_t x123 = 2762U;
static volatile uint16_t x161 = 570U;
volatile int64_t x230 = -1LL;
uint16_t x411 = 2329U;
volatile uint32_t t6 = 0U;
volatile int32_t x413 = 2781352;
int64_t x441 = -9928780574LL;
static int16_t x443 = 0;
int64_t x475 = -1LL;
volatile uint64_t t11 = 31344LLU;
int16_t x708 = 1;
uint64_t t15 = 47477050005LLU;
volatile int8_t x749 = -4;
uint16_t x752 = 58U;
volatile int16_t x774 = INT16_MIN;
int32_t x783 = INT32_MAX;
uint8_t x784 = 30U;
volatile uint8_t x787 = 2U;
uint32_t x907 = 21304U;
volatile int32_t x908 = 0;
int64_t x938 = -1LL;
volatile int64_t t25 = 62079311856254802LL;
uint8_t x946 = UINT8_MAX;
int64_t x981 = INT64_MAX;
int16_t x984 = 0;
int64_t t27 = -29834LL;
static uint8_t x990 = 1U;
static uint8_t x992 = 10U;
int16_t x999 = 49;
int8_t x1000 = 3;
uint8_t x1116 = 56U;
int32_t x1165 = -515;
volatile uint64_t x1166 = 60718740085LLU;
static volatile uint8_t x1167 = UINT8_MAX;
int32_t x1183 = INT32_MIN;
int64_t x1225 = 4582736586777540LL;
int16_t x1227 = 2016;
static uint32_t x1258 = 2522U;
int32_t x1280 = 50;
int64_t x1363 = -1LL;
static int16_t x1442 = 26;
int8_t x1444 = 2;
int8_t x1520 = 0;
volatile int32_t x1584 = 15;
uint32_t x1589 = UINT32_MAX;
int64_t x1590 = -149943011319808275LL;
static volatile uint8_t x1670 = UINT8_MAX;
uint32_t t43 = 3163491U;
uint8_t x1712 = 28U;
int32_t x1741 = INT32_MIN;
int64_t x1742 = -1790208038322142LL;
static int64_t x1743 = 201LL;
volatile uint32_t x1796 = 1U;
static int16_t x1832 = 0;
int16_t x1858 = -1;
uint64_t t50 = 2795566LLU;
uint64_t x1978 = 200233599732159760LLU;
uint32_t x1980 = 51U;
static uint64_t t51 = 45LLU;
uint32_t x2072 = 7U;
uint8_t x2103 = UINT8_MAX;
int8_t x2123 = -7;
volatile int8_t x2255 = 20;
uint8_t x2256 = 1U;
uint64_t t59 = 8756LLU;
int32_t x2491 = INT32_MIN;
int32_t t61 = 725719677;
int32_t x2589 = INT32_MIN;
int64_t x2591 = INT64_MIN;
volatile uint64_t t63 = 1194565670LLU;
int32_t t64 = -4235401;
int64_t x2683 = INT64_MAX;
int16_t x2798 = INT16_MIN;
volatile int64_t t69 = -35931LL;
static int32_t t70 = 204883;
int8_t x2828 = 1;
uint64_t x2922 = UINT64_MAX;
int8_t x2930 = -11;
uint32_t t74 = 52U;
volatile int64_t t75 = -648902984LL;
int16_t x3025 = -1;
uint32_t x3026 = 367U;
int32_t x3033 = INT32_MIN;
uint64_t x3035 = 1279231901LLU;
volatile uint16_t x3036 = 22U;
int8_t x3267 = INT8_MIN;
int16_t x3289 = INT16_MAX;
volatile int64_t x3291 = INT64_MIN;
uint16_t x3292 = 3U;
static uint16_t x3372 = 2U;
int16_t x3386 = -1;
uint8_t x3429 = UINT8_MAX;
volatile int64_t t85 = -1550725270953163681LL;
int64_t x3565 = INT64_MIN;
static int16_t x3566 = -4;
int16_t x3567 = INT16_MAX;
int16_t x3579 = 6706;
uint64_t t89 = 176548183LLU;
int8_t x3654 = INT8_MIN;
static int32_t x3655 = INT32_MIN;
volatile int64_t x3656 = 0LL;
int8_t x3673 = INT8_MIN;
uint64_t x3675 = 5344012LLU;
int8_t x3676 = 7;
int8_t x3694 = INT8_MIN;
uint64_t x3696 = 30LLU;
uint16_t x3818 = UINT16_MAX;
int64_t x3917 = INT64_MIN;
static volatile int16_t x3918 = -14901;
static int32_t x3919 = 12064;
static int8_t x3920 = 28;
int8_t x3958 = INT8_MIN;
static volatile uint64_t t96 = 27579LLU;
uint8_t x4000 = 1U;
volatile int32_t t98 = 1285;
volatile uint64_t x4049 = 11252LLU;


void f0(void) {
	static int64_t x53 = INT64_MAX;
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 2U;
	volatile int64_t t0 = -9137206LL;

	t0 = (((x53-x54)&x55)<<x56);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x121 = UINT64_MAX;
	volatile uint16_t x124 = 14U;
	uint64_t t1 = 10495277825LLU;

	t1 = (((x121-x122)&x123)<<x124);

	if (t1 != 1179648LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x162 = INT8_MAX;
	int32_t x163 = -3842;
	int32_t x164 = 6;
	volatile int32_t t2 = 0;

	t2 = (((x161-x162)&x163)<<x164);

	if (t2 != 11904) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x189 = INT16_MIN;
	uint64_t x190 = 357777151497258021LLU;
	uint16_t x191 = 26U;
	int16_t x192 = 13;
	uint64_t t3 = 28607284466760LLU;

	t3 = (((x189-x190)&x191)<<x192);

	if (t3 != 212992LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x229 = -1LL;
	uint32_t x231 = UINT32_MAX;
	uint32_t x232 = 41U;
	volatile int64_t t4 = 2535292220LL;

	t4 = (((x229-x230)&x231)<<x232);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x285 = -1;
	static int8_t x286 = -3;
	int8_t x287 = -1;
	uint8_t x288 = 0U;
	volatile int32_t t5 = 140410;

	t5 = (((x285-x286)&x287)<<x288);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x409 = -1;
	uint32_t x410 = 8118073U;
	volatile uint16_t x412 = 8U;

	t6 = (((x409-x410)&x411)<<x412);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x414 = 6U;
	int32_t x415 = INT32_MAX;
	uint8_t x416 = 6U;
	uint32_t t7 = 7505053U;

	t7 = (((x413-x414)&x415)<<x416);

	if (t7 != 178006144U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x433 = INT16_MIN;
	static volatile uint64_t x434 = 264101789760228586LLU;
	int8_t x435 = -1;
	uint8_t x436 = 13U;
	uint64_t t8 = 3720388LLU;

	t8 = (((x433-x434)&x435)<<x436);

	if (t8 != 13193938981666078720LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x442 = INT32_MIN;
	volatile uint8_t x444 = 62U;
	volatile int64_t t9 = 949218LL;

	t9 = (((x441-x442)&x443)<<x444);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x453 = 2715562U;
	volatile int16_t x454 = 480;
	uint64_t x455 = 59LLU;
	int16_t x456 = 1;
	uint64_t t10 = 622908LLU;

	t10 = (((x453-x454)&x455)<<x456);

	if (t10 != 20LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x473 = 31;
	uint64_t x474 = 2397LLU;
	volatile uint16_t x476 = 15U;

	t11 = (((x473-x474)&x475)<<x476);

	if (t11 != 18446744073632022528LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x477 = 511211665005893LLU;
	static uint32_t x478 = UINT32_MAX;
	int32_t x479 = -344237778;
	static volatile int8_t x480 = 4;
	uint64_t t12 = 16181903761299LLU;

	t12 = (((x477-x478)&x479)<<x480);

	if (t12 != 8179312417149024LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x481 = INT16_MIN;
	int64_t x482 = 21392732468949LL;
	volatile uint16_t x483 = 1435U;
	uint16_t x484 = 10U;
	volatile int64_t t13 = 856753506LL;

	t13 = (((x481-x482)&x483)<<x484);

	if (t13 != 273408LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x521 = UINT32_MAX;
	int8_t x522 = INT8_MAX;
	volatile int8_t x523 = INT8_MIN;
	volatile uint8_t x524 = 8U;
	volatile uint32_t t14 = 15947U;

	t14 = (((x521-x522)&x523)<<x524);

	if (t14 != 4294934528U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x705 = UINT32_MAX;
	static int64_t x706 = 186174LL;
	uint64_t x707 = UINT64_MAX;

	t15 = (((x705-x706)&x707)<<x708);

	if (t15 != 8589562242LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x750 = UINT64_MAX;
	int32_t x751 = INT32_MIN;
	uint64_t t16 = 198701275924846907LLU;

	t16 = (((x749-x750)&x751)<<x752);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x773 = INT16_MIN;
	uint32_t x775 = 14024U;
	volatile uint16_t x776 = 2U;
	uint32_t t17 = 28189U;

	t17 = (((x773-x774)&x775)<<x776);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x781 = -5690LL;
	int16_t x782 = INT16_MAX;
	static int64_t t18 = -16717648049014808LL;

	t18 = (((x781-x782)&x783)<<x784);

	if (t18 != 2305801716324368384LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x785 = 6U;
	int16_t x786 = INT16_MIN;
	int64_t x788 = 16LL;
	int32_t t19 = 1066;

	t19 = (((x785-x786)&x787)<<x788);

	if (t19 != 131072) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x789 = 12080570910332LLU;
	uint8_t x790 = 15U;
	int32_t x791 = INT32_MAX;
	int8_t x792 = 0;
	volatile uint64_t t20 = 98814414452997321LLU;

	t20 = (((x789-x790)&x791)<<x792);

	if (t20 != 975390317LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x837 = 4U;
	int64_t x838 = INT64_MAX;
	static volatile uint8_t x839 = UINT8_MAX;
	int16_t x840 = 43;
	volatile int64_t t21 = 837397LL;

	t21 = (((x837-x838)&x839)<<x840);

	if (t21 != 43980465111040LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x877 = 35294041LLU;
	volatile int32_t x878 = INT32_MAX;
	static uint32_t x879 = 974U;
	volatile uint8_t x880 = 17U;
	volatile uint64_t t22 = 257549LLU;

	t22 = (((x877-x878)&x879)<<x880);

	if (t22 != 110362624LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x905 = INT8_MAX;
	volatile int16_t x906 = -1;
	uint32_t t23 = 1267U;

	t23 = (((x905-x906)&x907)<<x908);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x925 = 67LLU;
	int8_t x926 = INT8_MIN;
	int8_t x927 = INT8_MIN;
	uint8_t x928 = 1U;
	uint64_t t24 = 62LLU;

	t24 = (((x925-x926)&x927)<<x928);

	if (t24 != 256LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x937 = 629U;
	volatile int32_t x939 = INT32_MAX;
	static int8_t x940 = 1;

	t25 = (((x937-x938)&x939)<<x940);

	if (t25 != 1260LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x945 = 117366947U;
	volatile int8_t x947 = INT8_MIN;
	uint16_t x948 = 1U;
	static volatile uint32_t t26 = 243430U;

	t26 = (((x945-x946)&x947)<<x948);

	if (t26 != 234733312U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x982 = 388;
	int64_t x983 = INT64_MAX;

	t27 = (((x981-x982)&x983)<<x984);

	if (t27 != 9223372036854775419LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x989 = -8;
	uint16_t x991 = UINT16_MAX;
	static int32_t t28 = -1;

	t28 = (((x989-x990)&x991)<<x992);

	if (t28 != 67099648) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x997 = 483;
	int32_t x998 = -1;
	int32_t t29 = -14;

	t29 = (((x997-x998)&x999)<<x1000);

	if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1005 = UINT64_MAX;
	int32_t x1006 = -21801696;
	uint32_t x1007 = 503U;
	uint8_t x1008 = 15U;
	volatile uint64_t t30 = 63620811043337712LLU;

	t30 = (((x1005-x1006)&x1007)<<x1008);

	if (t30 != 7045120LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1113 = -81;
	int32_t x1114 = INT32_MIN;
	int64_t x1115 = INT64_MIN;
	volatile int64_t t31 = 192486639010LL;

	t31 = (((x1113-x1114)&x1115)<<x1116);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x1168 = 0U;
	uint64_t t32 = 7815343754842035LLU;

	t32 = (((x1165-x1166)&x1167)<<x1168);

	if (t32 != 136LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1181 = UINT64_MAX;
	static int8_t x1182 = INT8_MIN;
	uint32_t x1184 = 29U;
	volatile uint64_t t33 = 1169912327LLU;

	t33 = (((x1181-x1182)&x1183)<<x1184);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1226 = -1;
	uint8_t x1228 = 0U;
	int64_t t34 = 148245888232936704LL;

	t34 = (((x1225-x1226)&x1227)<<x1228);

	if (t34 != 960LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1257 = -1;
	int8_t x1259 = INT8_MIN;
	static uint32_t x1260 = 5U;
	volatile uint32_t t35 = 13643245U;

	t35 = (((x1257-x1258)&x1259)<<x1260);

	if (t35 != 4294885376U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x1277 = 1016U;
	volatile uint64_t x1278 = UINT64_MAX;
	uint16_t x1279 = 82U;
	static uint64_t t36 = 4491LLU;

	t36 = (((x1277-x1278)&x1279)<<x1280);

	if (t36 != 90071992547409920LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1361 = UINT16_MAX;
	int64_t x1362 = -1LL;
	int8_t x1364 = 1;
	static int64_t t37 = 383394451153637LL;

	t37 = (((x1361-x1362)&x1363)<<x1364);

	if (t37 != 131072LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1441 = 14;
	volatile int32_t x1443 = 6234;
	volatile int32_t t38 = 119188;

	t38 = (((x1441-x1442)&x1443)<<x1444);

	if (t38 != 24896) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1517 = 2U;
	static uint32_t x1518 = UINT32_MAX;
	int32_t x1519 = INT32_MIN;
	uint32_t t39 = 2U;

	t39 = (((x1517-x1518)&x1519)<<x1520);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1581 = 0U;
	uint32_t x1582 = 1227U;
	static uint8_t x1583 = 3U;
	uint32_t t40 = 147531513U;

	t40 = (((x1581-x1582)&x1583)<<x1584);

	if (t40 != 32768U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1591 = -1LL;
	uint16_t x1592 = 0U;
	volatile int64_t t41 = -341515184416640LL;

	t41 = (((x1589-x1590)&x1591)<<x1592);

	if (t41 != 149943015614775570LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1617 = INT16_MIN;
	uint16_t x1618 = 2U;
	uint64_t x1619 = 854376769514LLU;
	int8_t x1620 = 8;
	volatile uint64_t t42 = 521286LLU;

	t42 = (((x1617-x1618)&x1619)<<x1620);

	if (t42 != 218720444606976LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x1669 = 182932U;
	volatile int8_t x1671 = -1;
	int32_t x1672 = 3;

	t43 = (((x1669-x1670)&x1671)<<x1672);

	if (t43 != 1461416U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1709 = UINT32_MAX;
	int64_t x1710 = -716930LL;
	static int64_t x1711 = INT64_MAX;
	volatile int64_t t44 = -463517LL;

	t44 = (((x1709-x1710)&x1711)<<x1712);

	if (t44 != 1153113953769881600LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x1744 = 24U;
	int64_t t45 = 6755021510836LL;

	t45 = (((x1741-x1742)&x1743)<<x1744);

	if (t45 != 3355443200LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x1793 = -1;
	volatile int32_t x1794 = INT32_MAX;
	uint8_t x1795 = 9U;
	int32_t t46 = -29759925;

	t46 = (((x1793-x1794)&x1795)<<x1796);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1805 = 2;
	int16_t x1806 = -1;
	uint64_t x1807 = 1LLU;
	volatile int8_t x1808 = 1;
	uint64_t t47 = 17767LLU;

	t47 = (((x1805-x1806)&x1807)<<x1808);

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1829 = INT8_MIN;
	volatile int16_t x1830 = INT16_MIN;
	int64_t x1831 = -1LL;
	volatile int64_t t48 = 7LL;

	t48 = (((x1829-x1830)&x1831)<<x1832);

	if (t48 != 32640LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1857 = 78498;
	static uint16_t x1859 = 9331U;
	int8_t x1860 = 1;
	int32_t t49 = -14718644;

	t49 = (((x1857-x1858)&x1859)<<x1860);

	if (t49 != 16454) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1921 = 60;
	int8_t x1922 = -1;
	uint64_t x1923 = 31087919354491531LLU;
	volatile int8_t x1924 = 7;

	t50 = (((x1921-x1922)&x1923)<<x1924);

	if (t50 != 1152LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1977 = 6808591U;
	uint64_t x1979 = 8943891196LLU;

	t51 = (((x1977-x1978)&x1979)<<x1980);

	if (t51 != 1720375057655529472LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2069 = 1;
	static int16_t x2070 = -1;
	uint32_t x2071 = 52U;
	uint32_t t52 = 310U;

	t52 = (((x2069-x2070)&x2071)<<x2072);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2101 = -2557841112858592687LL;
	int32_t x2102 = INT32_MIN;
	int32_t x2104 = 26;
	int64_t t53 = -498186466901403LL;

	t53 = (((x2101-x2102)&x2103)<<x2104);

	if (t53 != 5435817984LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2105 = 0U;
	static int16_t x2106 = -1;
	uint8_t x2107 = 13U;
	uint8_t x2108 = 10U;
	volatile int32_t t54 = 84;

	t54 = (((x2105-x2106)&x2107)<<x2108);

	if (t54 != 1024) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2121 = INT8_MAX;
	uint32_t x2122 = 91831196U;
	uint8_t x2124 = 26U;
	uint32_t t55 = 53482405U;

	t55 = (((x2121-x2122)&x2123)<<x2124);

	if (t55 != 2214592512U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x2169 = INT32_MIN;
	static int8_t x2170 = INT8_MIN;
	int32_t x2171 = INT32_MAX;
	volatile uint8_t x2172 = 1U;
	int32_t t56 = -216335;

	t56 = (((x2169-x2170)&x2171)<<x2172);

	if (t56 != 256) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x2249 = -1;
	int8_t x2250 = -8;
	static uint32_t x2251 = 3475785U;
	int8_t x2252 = 0;
	uint32_t t57 = 10U;

	t57 = (((x2249-x2250)&x2251)<<x2252);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x2253 = 6U;
	volatile int64_t x2254 = 30986965LL;
	int64_t t58 = -122LL;

	t58 = (((x2253-x2254)&x2255)<<x2256);

	if (t58 != 32LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2285 = 69145226U;
	uint16_t x2286 = 0U;
	uint64_t x2287 = 4350321906226736LLU;
	uint16_t x2288 = 1U;

	t59 = (((x2285-x2286)&x2287)<<x2288);

	if (t59 != 134358016LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2489 = UINT32_MAX;
	static int32_t x2490 = INT32_MIN;
	static uint16_t x2492 = 14U;
	volatile uint32_t t60 = 237657U;

	t60 = (((x2489-x2490)&x2491)<<x2492);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2577 = INT16_MAX;
	int32_t x2578 = -601306739;
	volatile int16_t x2579 = 198;
	static int8_t x2580 = 6;

	t61 = (((x2577-x2578)&x2579)<<x2580);

	if (t61 != 4224) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2590 = UINT32_MAX;
	static uint8_t x2592 = 5U;
	volatile int64_t t62 = -4967717640LL;

	t62 = (((x2589-x2590)&x2591)<<x2592);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x2617 = INT32_MIN;
	uint64_t x2618 = 8574726621739LLU;
	uint32_t x2619 = 41124655U;
	int16_t x2620 = 48;

	t63 = (((x2617-x2618)&x2619)<<x2620);

	if (t63 != 73464968921481216LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2629 = 2U;
	int8_t x2630 = INT8_MIN;
	uint8_t x2631 = 57U;
	volatile uint8_t x2632 = 3U;

	t64 = (((x2629-x2630)&x2631)<<x2632);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2641 = -1LL;
	uint8_t x2642 = 85U;
	int32_t x2643 = INT32_MAX;
	volatile uint8_t x2644 = 16U;
	volatile int64_t t65 = 17098162808399LL;

	t65 = (((x2641-x2642)&x2643)<<x2644);

	if (t65 != 140737482719232LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2681 = 20;
	uint64_t x2682 = 246838328182643104LLU;
	volatile int8_t x2684 = 15;
	uint64_t t66 = 8627509887LLU;

	t66 = (((x2681-x2682)&x2683)<<x2684);

	if (t66 != 9722310469644582912LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x2717 = UINT32_MAX;
	volatile int8_t x2718 = -3;
	volatile uint64_t x2719 = 17396287194353974LLU;
	int16_t x2720 = 1;
	static volatile uint64_t t67 = 63309679371LLU;

	t67 = (((x2717-x2718)&x2719)<<x2720);

	if (t67 != 4LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2757 = 13LLU;
	int64_t x2758 = 761580259229LL;
	static int64_t x2759 = INT64_MIN;
	int32_t x2760 = 1;
	uint64_t t68 = 27698245170LLU;

	t68 = (((x2757-x2758)&x2759)<<x2760);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2797 = INT8_MIN;
	volatile int64_t x2799 = -1LL;
	volatile uint16_t x2800 = 32U;

	t69 = (((x2797-x2798)&x2799)<<x2800);

	if (t69 != 140187732541440LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x2813 = -15;
	int8_t x2814 = 1;
	int16_t x2815 = INT16_MAX;
	uint64_t x2816 = 5LLU;

	t70 = (((x2813-x2814)&x2815)<<x2816);

	if (t70 != 1048064) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2825 = UINT32_MAX;
	uint64_t x2826 = 30148906892990856LLU;
	uint64_t x2827 = 50LLU;
	volatile uint64_t t71 = 22596LLU;

	t71 = (((x2825-x2826)&x2827)<<x2828);

	if (t71 != 100LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2897 = 7;
	int64_t x2898 = -1LL;
	int16_t x2899 = -1;
	uint8_t x2900 = 1U;
	volatile int64_t t72 = -171830LL;

	t72 = (((x2897-x2898)&x2899)<<x2900);

	if (t72 != 16LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2921 = 0;
	int32_t x2923 = INT32_MIN;
	uint8_t x2924 = 29U;
	static volatile uint64_t t73 = 926000003LLU;

	t73 = (((x2921-x2922)&x2923)<<x2924);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2929 = INT8_MAX;
	static uint32_t x2931 = UINT32_MAX;
	volatile uint64_t x2932 = 6LLU;

	t74 = (((x2929-x2930)&x2931)<<x2932);

	if (t74 != 8832U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3013 = INT64_MIN;
	int32_t x3014 = INT32_MIN;
	int16_t x3015 = INT16_MAX;
	volatile int8_t x3016 = 3;

	t75 = (((x3013-x3014)&x3015)<<x3016);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3021 = 13U;
	int32_t x3022 = -125445178;
	uint64_t x3023 = UINT64_MAX;
	static uint64_t x3024 = 18LLU;
	uint64_t t76 = 408830355960814487LLU;

	t76 = (((x3021-x3022)&x3023)<<x3024);

	if (t76 != 32884704149504LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3027 = 36531560LLU;
	uint16_t x3028 = 7U;
	static uint64_t t77 = 4LLU;

	t77 = (((x3025-x3026)&x3027)<<x3028);

	if (t77 != 4675993600LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3034 = 407256231LLU;
	uint64_t t78 = 1465582596829LLU;

	t78 = (((x3033-x3034)&x3035)<<x3036);

	if (t78 != 4800883409813504LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3265 = 1091;
	volatile uint8_t x3266 = UINT8_MAX;
	uint8_t x3268 = 0U;
	volatile int32_t t79 = 220467;

	t79 = (((x3265-x3266)&x3267)<<x3268);

	if (t79 != 768) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x3290 = 1U;
	static int64_t t80 = 31048138LL;

	t80 = (((x3289-x3290)&x3291)<<x3292);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3301 = -1293822LL;
	static volatile int32_t x3302 = -334149498;
	static int32_t x3303 = INT32_MIN;
	uint8_t x3304 = 1U;
	int64_t t81 = 2139830945838375584LL;

	t81 = (((x3301-x3302)&x3303)<<x3304);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3357 = INT16_MIN;
	int32_t x3358 = INT32_MIN;
	int64_t x3359 = INT64_MAX;
	volatile int16_t x3360 = 3;
	volatile int64_t t82 = -329565551785LL;

	t82 = (((x3357-x3358)&x3359)<<x3360);

	if (t82 != 17179607040LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3369 = INT64_MAX;
	volatile uint8_t x3370 = 6U;
	int16_t x3371 = INT16_MAX;
	int64_t t83 = -106144095807045989LL;

	t83 = (((x3369-x3370)&x3371)<<x3372);

	if (t83 != 131044LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3385 = 24793719U;
	static volatile int64_t x3387 = INT64_MAX;
	uint32_t x3388 = 10U;
	volatile int64_t t84 = 2663717637312LL;

	t84 = (((x3385-x3386)&x3387)<<x3388);

	if (t84 != 25388769280LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3430 = -1;
	int64_t x3431 = 10LL;
	int16_t x3432 = 20;

	t85 = (((x3429-x3430)&x3431)<<x3432);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3473 = 14;
	int64_t x3474 = 57LL;
	uint32_t x3475 = 967591419U;
	int32_t x3476 = 0;
	int64_t t86 = 544450743116757LL;

	t86 = (((x3473-x3474)&x3475)<<x3476);

	if (t86 != 967591377LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x3505 = 45U;
	volatile int64_t x3506 = -1LL;
	int64_t x3507 = 9524LL;
	int16_t x3508 = 1;
	static int64_t t87 = -22480504LL;

	t87 = (((x3505-x3506)&x3507)<<x3508);

	if (t87 != 72LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3568 = 57;
	int64_t t88 = 4590470537LL;

	t88 = (((x3565-x3566)&x3567)<<x3568);

	if (t88 != 576460752303423488LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3577 = INT64_MAX;
	uint64_t x3578 = 645787918LLU;
	uint32_t x3580 = 2U;

	t89 = (((x3577-x3578)&x3579)<<x3580);

	if (t89 != 10432LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3653 = 1U;
	int32_t t90 = 25518;

	t90 = (((x3653-x3654)&x3655)<<x3656);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x3674 = 1189711876606LLU;
	static volatile uint64_t t91 = 144689017477665LLU;

	t91 = (((x3673-x3674)&x3675)<<x3676);

	if (t91 != 8683520LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3693 = INT8_MIN;
	volatile uint32_t x3695 = 3U;
	uint32_t t92 = 125U;

	t92 = (((x3693-x3694)&x3695)<<x3696);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3817 = 892485135628LL;
	uint8_t x3819 = 1U;
	uint8_t x3820 = 1U;
	volatile int64_t t93 = -8136LL;

	t93 = (((x3817-x3818)&x3819)<<x3820);

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t t94 = 10142552015LL;

	t94 = (((x3917-x3918)&x3919)<<x3920);

	if (t94 != 2894807957504LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3925 = 18;
	int32_t x3926 = -1;
	int16_t x3927 = 0;
	uint8_t x3928 = 1U;
	int32_t t95 = 200;

	t95 = (((x3925-x3926)&x3927)<<x3928);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3957 = 1137308797LLU;
	int64_t x3959 = -1LL;
	uint8_t x3960 = 6U;

	t96 = (((x3957-x3958)&x3959)<<x3960);

	if (t96 != 72787771200LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3977 = -4521028639419338101LL;
	int64_t x3978 = -1LL;
	static int8_t x3979 = 1;
	volatile uint16_t x3980 = 4U;
	int64_t t97 = 489008138811111045LL;

	t97 = (((x3977-x3978)&x3979)<<x3980);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3997 = INT8_MAX;
	uint8_t x3998 = 13U;
	uint8_t x3999 = 5U;

	t98 = (((x3997-x3998)&x3999)<<x4000);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4050 = -1;
	uint64_t x4051 = 6399642969758002LLU;
	uint64_t x4052 = 20LLU;
	volatile uint64_t t99 = 221786LLU;

	t99 = (((x4049-x4050)&x4051)<<x4052);

	if (t99 != 2466250752LLU) { NG(); } else { ; }
	
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

