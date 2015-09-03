#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x41 = -5;
uint16_t x161 = UINT16_MAX;
uint16_t x163 = UINT16_MAX;
static uint32_t x164 = 0U;
static int64_t x213 = -1LL;
int32_t x247 = INT32_MAX;
volatile int32_t t7 = 29;
volatile int32_t x277 = INT32_MIN;
static int16_t x287 = 3268;
static volatile int32_t t9 = -101;
uint16_t x655 = UINT16_MAX;
volatile int32_t t17 = 493;
int16_t x721 = INT16_MIN;
uint16_t x724 = 3U;
int32_t t20 = 31;
int32_t x755 = INT32_MAX;
int64_t x842 = 2470523478LL;
uint8_t x853 = UINT8_MAX;
static uint16_t x858 = UINT16_MAX;
int64_t x885 = 6116738953902617LL;
int64_t x973 = INT64_MIN;
volatile int16_t x998 = 19;
int32_t t28 = 3880;
uint16_t x1007 = 44U;
int8_t x1008 = 2;
volatile int64_t x1063 = 67LL;
int32_t t30 = 59093;
uint16_t x1139 = 1U;
int8_t x1140 = 17;
static int32_t t33 = -1;
static volatile int16_t x1153 = INT16_MAX;
static uint8_t x1186 = UINT8_MAX;
int16_t x1187 = 185;
int64_t x1193 = INT64_MIN;
volatile int32_t t37 = -32;
uint32_t x1209 = 3976220U;
int8_t x1212 = 0;
int16_t x1274 = INT16_MAX;
static int32_t x1290 = INT32_MIN;
int8_t x1329 = -46;
volatile int32_t x1377 = -1;
int16_t x1379 = INT16_MIN;
volatile int8_t x1518 = INT8_MIN;
uint8_t x1520 = 0U;
volatile int32_t t45 = 214382286;
uint32_t x1649 = UINT32_MAX;
int8_t x1743 = INT8_MIN;
static volatile int32_t t49 = 222;
static volatile int8_t x1782 = 2;
int32_t x1789 = -1;
uint8_t x1792 = 0U;
int64_t x1797 = INT64_MAX;
static int64_t x1799 = -15318463240871LL;
int32_t x1838 = -1;
static volatile int32_t t54 = 624199;
volatile int32_t x1967 = -541156550;
volatile int32_t t57 = -180704;
static int32_t x2118 = 487871965;
static int16_t x2153 = -1;
int64_t x2155 = INT64_MAX;
static int8_t x2156 = 1;
volatile int32_t t60 = -368451;
volatile int32_t t61 = -38287322;
int64_t x2181 = INT64_MIN;
uint8_t x2262 = 14U;
uint16_t x2264 = 3U;
int8_t x2350 = -23;
uint16_t x2353 = UINT16_MAX;
static volatile uint64_t x2356 = 4LLU;
static uint32_t x2394 = 4394307U;
static int32_t x2396 = 0;
uint16_t x2409 = 8018U;
int8_t x2410 = INT8_MIN;
uint8_t x2417 = 19U;
int8_t x2465 = -1;
int32_t t78 = 15;
volatile int64_t x2782 = -2706490086288983LL;
uint8_t x2783 = 0U;
volatile int32_t t79 = 186568;
int16_t x2849 = INT16_MIN;
uint8_t x2896 = 1U;
volatile int32_t t82 = 268379;
uint64_t x2986 = 14901LLU;
volatile int32_t t85 = -696883;
int32_t x3011 = INT32_MIN;
volatile uint16_t x3012 = 6U;
volatile int32_t t89 = 9765759;
volatile int8_t x3137 = 0;
uint64_t x3138 = 82410551LLU;
int16_t x3140 = 0;
uint32_t x3227 = 7U;
uint32_t x3285 = UINT32_MAX;
uint32_t x3320 = 7U;
uint32_t x3341 = 329U;
uint8_t x3342 = 39U;
volatile uint8_t x3389 = UINT8_MAX;
uint8_t x3391 = UINT8_MAX;
int8_t x3410 = INT8_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint32_t x2 = 120119U;
	int32_t x3 = 1837820;
	volatile uint64_t x4 = 3LLU;
	static int32_t t0 = 1;

	t0 = (((x1==x2)<x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x42 = INT64_MIN;
	uint32_t x43 = 4305826U;
	uint16_t x44 = 31U;
	volatile int32_t t1 = 47;

	t1 = (((x41==x42)<x43)>>x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x61 = 30U;
	static volatile uint16_t x62 = 390U;
	volatile int32_t x63 = INT32_MIN;
	uint16_t x64 = 0U;
	static volatile int32_t t2 = -48;

	t2 = (((x61==x62)<x63)>>x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x93 = INT16_MIN;
	int32_t x94 = 9089;
	volatile int16_t x95 = -1227;
	uint8_t x96 = 1U;
	int32_t t3 = 16086639;

	t3 = (((x93==x94)<x95)>>x96);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x162 = -1LL;
	volatile int32_t t4 = -8424115;

	t4 = (((x161==x162)<x163)>>x164);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	volatile int64_t x171 = INT64_MIN;
	uint8_t x172 = 3U;
	volatile int32_t t5 = 832;

	t5 = (((x169==x170)<x171)>>x172);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x214 = 1U;
	uint16_t x215 = UINT16_MAX;
	int8_t x216 = 4;
	int32_t t6 = -371125593;

	t6 = (((x213==x214)<x215)>>x216);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	static uint8_t x248 = 3U;

	t7 = (((x245==x246)<x247)>>x248);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	static uint32_t x280 = 14U;
	static int32_t t8 = 1;

	t8 = (((x277==x278)<x279)>>x280);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x285 = 10182976U;
	volatile int64_t x286 = -9499408LL;
	static int8_t x288 = 1;

	t9 = (((x285==x286)<x287)>>x288);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x293 = -200;
	uint16_t x294 = UINT16_MAX;
	volatile int64_t x295 = INT64_MAX;
	int8_t x296 = 0;
	volatile int32_t t10 = 3163447;

	t10 = (((x293==x294)<x295)>>x296);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x317 = INT32_MAX;
	uint64_t x318 = UINT64_MAX;
	static int16_t x319 = INT16_MAX;
	int16_t x320 = 1;
	int32_t t11 = 130044;

	t11 = (((x317==x318)<x319)>>x320);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x409 = INT32_MIN;
	static volatile int16_t x410 = 69;
	int8_t x411 = INT8_MIN;
	volatile uint8_t x412 = 3U;
	volatile int32_t t12 = 7441566;

	t12 = (((x409==x410)<x411)>>x412);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x617 = -2;
	volatile uint64_t x618 = 69010635709LLU;
	static int8_t x619 = INT8_MAX;
	int32_t x620 = 15;
	int32_t t13 = -607072631;

	t13 = (((x617==x618)<x619)>>x620);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x653 = INT8_MIN;
	int16_t x654 = INT16_MAX;
	static uint16_t x656 = 0U;
	int32_t t14 = 1;

	t14 = (((x653==x654)<x655)>>x656);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x669 = 42541LL;
	int32_t x670 = INT32_MAX;
	int32_t x671 = -12741;
	uint8_t x672 = 0U;
	int32_t t15 = 199405;

	t15 = (((x669==x670)<x671)>>x672);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x673 = INT32_MIN;
	volatile int16_t x674 = INT16_MAX;
	uint8_t x675 = 5U;
	uint8_t x676 = 2U;
	volatile int32_t t16 = -15114108;

	t16 = (((x673==x674)<x675)>>x676);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x689 = -30;
	int32_t x690 = -1;
	volatile uint32_t x691 = 1271530U;
	volatile uint8_t x692 = 16U;

	t17 = (((x689==x690)<x691)>>x692);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x722 = -1LL;
	static volatile int8_t x723 = -1;
	static int32_t t18 = -150513437;

	t18 = (((x721==x722)<x723)>>x724);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x729 = INT16_MAX;
	int64_t x730 = -1LL;
	uint32_t x731 = UINT32_MAX;
	uint8_t x732 = 24U;
	volatile int32_t t19 = 419960020;

	t19 = (((x729==x730)<x731)>>x732);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x749 = UINT8_MAX;
	uint8_t x750 = 5U;
	int64_t x751 = INT64_MAX;
	static int8_t x752 = 9;

	t20 = (((x749==x750)<x751)>>x752);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x753 = 57217884U;
	volatile int64_t x754 = INT64_MIN;
	static volatile uint8_t x756 = 3U;
	volatile int32_t t21 = 3149508;

	t21 = (((x753==x754)<x755)>>x756);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x841 = -1;
	static int32_t x843 = -73;
	int8_t x844 = 3;
	volatile int32_t t22 = 45;

	t22 = (((x841==x842)<x843)>>x844);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x854 = 20U;
	int64_t x855 = INT64_MIN;
	uint8_t x856 = 11U;
	volatile int32_t t23 = 1;

	t23 = (((x853==x854)<x855)>>x856);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x857 = 1363475547U;
	uint8_t x859 = 1U;
	static uint64_t x860 = 7LLU;
	volatile int32_t t24 = -764944;

	t24 = (((x857==x858)<x859)>>x860);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x886 = 6737U;
	volatile int32_t x887 = -4169;
	volatile uint16_t x888 = 8U;
	static volatile int32_t t25 = 383;

	t25 = (((x885==x886)<x887)>>x888);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x913 = INT8_MIN;
	int64_t x914 = INT64_MIN;
	uint64_t x915 = 16473329LLU;
	uint16_t x916 = 0U;
	static volatile int32_t t26 = -17543;

	t26 = (((x913==x914)<x915)>>x916);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x974 = 7;
	volatile int32_t x975 = 14321521;
	uint8_t x976 = 3U;
	int32_t t27 = 25892;

	t27 = (((x973==x974)<x975)>>x976);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x997 = UINT32_MAX;
	static uint16_t x999 = UINT16_MAX;
	uint8_t x1000 = 7U;

	t28 = (((x997==x998)<x999)>>x1000);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1005 = 1U;
	static int8_t x1006 = 1;
	volatile int32_t t29 = 1948514;

	t29 = (((x1005==x1006)<x1007)>>x1008);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1061 = UINT64_MAX;
	uint32_t x1062 = UINT32_MAX;
	volatile uint8_t x1064 = 20U;

	t30 = (((x1061==x1062)<x1063)>>x1064);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1085 = INT8_MIN;
	int64_t x1086 = INT64_MAX;
	static volatile int16_t x1087 = INT16_MIN;
	int64_t x1088 = 1LL;
	static volatile int32_t t31 = -220883857;

	t31 = (((x1085==x1086)<x1087)>>x1088);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1105 = INT8_MIN;
	volatile uint16_t x1106 = UINT16_MAX;
	static int8_t x1107 = 59;
	uint8_t x1108 = 15U;
	static int32_t t32 = -3220301;

	t32 = (((x1105==x1106)<x1107)>>x1108);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1137 = 1010;
	volatile int16_t x1138 = -351;

	t33 = (((x1137==x1138)<x1139)>>x1140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1154 = -3;
	int16_t x1155 = INT16_MAX;
	static uint8_t x1156 = 0U;
	int32_t t34 = 12752327;

	t34 = (((x1153==x1154)<x1155)>>x1156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1185 = INT64_MAX;
	uint16_t x1188 = 6U;
	static int32_t t35 = -4136751;

	t35 = (((x1185==x1186)<x1187)>>x1188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x1194 = 22U;
	int64_t x1195 = INT64_MAX;
	static uint32_t x1196 = 16U;
	volatile int32_t t36 = -6;

	t36 = (((x1193==x1194)<x1195)>>x1196);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1201 = 6486167470LLU;
	uint16_t x1202 = 11U;
	int32_t x1203 = -1;
	int8_t x1204 = 1;

	t37 = (((x1201==x1202)<x1203)>>x1204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1210 = -1;
	static int32_t x1211 = INT32_MIN;
	static volatile int32_t t38 = 7;

	t38 = (((x1209==x1210)<x1211)>>x1212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1217 = INT8_MAX;
	static int32_t x1218 = -1;
	static uint8_t x1219 = UINT8_MAX;
	uint8_t x1220 = 3U;
	static int32_t t39 = -27199290;

	t39 = (((x1217==x1218)<x1219)>>x1220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1273 = UINT32_MAX;
	int8_t x1275 = INT8_MAX;
	uint8_t x1276 = 0U;
	volatile int32_t t40 = -6726;

	t40 = (((x1273==x1274)<x1275)>>x1276);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1289 = INT16_MAX;
	static uint8_t x1291 = UINT8_MAX;
	int8_t x1292 = 7;
	static int32_t t41 = 15933542;

	t41 = (((x1289==x1290)<x1291)>>x1292);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1305 = 89640U;
	volatile int32_t x1306 = INT32_MIN;
	int32_t x1307 = -1;
	volatile uint16_t x1308 = 21U;
	volatile int32_t t42 = 28225;

	t42 = (((x1305==x1306)<x1307)>>x1308);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1330 = UINT8_MAX;
	volatile int8_t x1331 = INT8_MIN;
	volatile int32_t x1332 = 5;
	int32_t t43 = 8989;

	t43 = (((x1329==x1330)<x1331)>>x1332);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1378 = INT16_MIN;
	volatile uint16_t x1380 = 23U;
	static int32_t t44 = -15;

	t44 = (((x1377==x1378)<x1379)>>x1380);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1517 = 212LLU;
	int16_t x1519 = INT16_MIN;

	t45 = (((x1517==x1518)<x1519)>>x1520);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1573 = UINT8_MAX;
	int64_t x1574 = INT64_MAX;
	int16_t x1575 = 186;
	uint8_t x1576 = 31U;
	volatile int32_t t46 = -1065831242;

	t46 = (((x1573==x1574)<x1575)>>x1576);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1650 = INT16_MIN;
	int8_t x1651 = INT8_MAX;
	int8_t x1652 = 13;
	int32_t t47 = 1852;

	t47 = (((x1649==x1650)<x1651)>>x1652);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1705 = 0;
	int16_t x1706 = 694;
	int16_t x1707 = INT16_MIN;
	volatile uint16_t x1708 = 18U;
	static int32_t t48 = 29001;

	t48 = (((x1705==x1706)<x1707)>>x1708);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1741 = -1;
	int32_t x1742 = INT32_MAX;
	uint16_t x1744 = 1U;

	t49 = (((x1741==x1742)<x1743)>>x1744);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1781 = UINT8_MAX;
	uint32_t x1783 = 157U;
	int8_t x1784 = 0;
	int32_t t50 = -3581501;

	t50 = (((x1781==x1782)<x1783)>>x1784);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1790 = UINT8_MAX;
	volatile uint8_t x1791 = 9U;
	int32_t t51 = 1472036;

	t51 = (((x1789==x1790)<x1791)>>x1792);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x1798 = INT32_MIN;
	uint8_t x1800 = 0U;
	volatile int32_t t52 = 120510152;

	t52 = (((x1797==x1798)<x1799)>>x1800);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1837 = INT32_MAX;
	volatile int32_t x1839 = -1;
	uint16_t x1840 = 2U;
	int32_t t53 = -2;

	t53 = (((x1837==x1838)<x1839)>>x1840);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1873 = UINT32_MAX;
	uint32_t x1874 = 6661114U;
	static volatile int8_t x1875 = -5;
	static int16_t x1876 = 1;

	t54 = (((x1873==x1874)<x1875)>>x1876);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1953 = -1;
	int64_t x1954 = 1018773394LL;
	uint64_t x1955 = 165813727988145LLU;
	uint16_t x1956 = 5U;
	volatile int32_t t55 = 8;

	t55 = (((x1953==x1954)<x1955)>>x1956);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1965 = 2528;
	uint16_t x1966 = 0U;
	volatile uint64_t x1968 = 2LLU;
	int32_t t56 = -376;

	t56 = (((x1965==x1966)<x1967)>>x1968);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1989 = -1LL;
	static int32_t x1990 = -2165;
	uint64_t x1991 = UINT64_MAX;
	static int8_t x1992 = 0;

	t57 = (((x1989==x1990)<x1991)>>x1992);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2117 = 26U;
	uint32_t x2119 = 15691U;
	uint16_t x2120 = 4U;
	volatile int32_t t58 = -3;

	t58 = (((x2117==x2118)<x2119)>>x2120);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2145 = UINT64_MAX;
	uint16_t x2146 = UINT16_MAX;
	static volatile int8_t x2147 = -1;
	int8_t x2148 = 14;
	volatile int32_t t59 = -852942;

	t59 = (((x2145==x2146)<x2147)>>x2148);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2154 = 51247LLU;

	t60 = (((x2153==x2154)<x2155)>>x2156);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2157 = INT8_MIN;
	int32_t x2158 = -1;
	volatile int8_t x2159 = 38;
	int16_t x2160 = 1;

	t61 = (((x2157==x2158)<x2159)>>x2160);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2182 = UINT32_MAX;
	volatile uint32_t x2183 = 605950U;
	static int16_t x2184 = 18;
	static int32_t t62 = -1640;

	t62 = (((x2181==x2182)<x2183)>>x2184);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2185 = 3358;
	int64_t x2186 = INT64_MIN;
	int8_t x2187 = INT8_MIN;
	uint32_t x2188 = 24U;
	volatile int32_t t63 = -3882789;

	t63 = (((x2185==x2186)<x2187)>>x2188);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2193 = 0;
	int8_t x2194 = 0;
	static volatile int8_t x2195 = 1;
	volatile uint8_t x2196 = 7U;
	int32_t t64 = 2038802;

	t64 = (((x2193==x2194)<x2195)>>x2196);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2253 = 6064U;
	int64_t x2254 = -1LL;
	int32_t x2255 = INT32_MIN;
	uint32_t x2256 = 0U;
	volatile int32_t t65 = -29596;

	t65 = (((x2253==x2254)<x2255)>>x2256);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2261 = 8U;
	int8_t x2263 = INT8_MIN;
	volatile int32_t t66 = 4;

	t66 = (((x2261==x2262)<x2263)>>x2264);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x2349 = UINT8_MAX;
	int16_t x2351 = INT16_MIN;
	uint64_t x2352 = 0LLU;
	static volatile int32_t t67 = 104744;

	t67 = (((x2349==x2350)<x2351)>>x2352);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2354 = 44;
	int8_t x2355 = INT8_MIN;
	int32_t t68 = -3764158;

	t68 = (((x2353==x2354)<x2355)>>x2356);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x2393 = 43419375U;
	int64_t x2395 = INT64_MIN;
	volatile int32_t t69 = -8;

	t69 = (((x2393==x2394)<x2395)>>x2396);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x2411 = INT16_MIN;
	uint16_t x2412 = 3U;
	static int32_t t70 = -7936;

	t70 = (((x2409==x2410)<x2411)>>x2412);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2418 = 6645U;
	int64_t x2419 = INT64_MIN;
	uint8_t x2420 = 7U;
	static int32_t t71 = 46;

	t71 = (((x2417==x2418)<x2419)>>x2420);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x2466 = 8661868213111LLU;
	volatile uint64_t x2467 = 14215048577493774LLU;
	volatile int16_t x2468 = 0;
	volatile int32_t t72 = 246049589;

	t72 = (((x2465==x2466)<x2467)>>x2468);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2541 = INT16_MAX;
	static int16_t x2542 = -1;
	int64_t x2543 = INT64_MAX;
	uint64_t x2544 = 27LLU;
	int32_t t73 = -51578;

	t73 = (((x2541==x2542)<x2543)>>x2544);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2581 = INT16_MAX;
	volatile int8_t x2582 = 3;
	int16_t x2583 = INT16_MIN;
	uint8_t x2584 = 6U;
	int32_t t74 = 5543;

	t74 = (((x2581==x2582)<x2583)>>x2584);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2621 = INT16_MIN;
	uint64_t x2622 = 11LLU;
	static uint16_t x2623 = UINT16_MAX;
	uint16_t x2624 = 12U;
	volatile int32_t t75 = 1041283;

	t75 = (((x2621==x2622)<x2623)>>x2624);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x2633 = UINT8_MAX;
	static int64_t x2634 = -160116482557797LL;
	int64_t x2635 = 122LL;
	static int64_t x2636 = 7LL;
	static volatile int32_t t76 = -12505099;

	t76 = (((x2633==x2634)<x2635)>>x2636);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2637 = 1487U;
	uint64_t x2638 = UINT64_MAX;
	volatile int8_t x2639 = 1;
	volatile uint8_t x2640 = 3U;
	volatile int32_t t77 = -488230;

	t77 = (((x2637==x2638)<x2639)>>x2640);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2685 = 3U;
	int16_t x2686 = INT16_MIN;
	static uint16_t x2687 = 3800U;
	uint16_t x2688 = 7U;

	t78 = (((x2685==x2686)<x2687)>>x2688);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2781 = -24;
	static uint64_t x2784 = 5LLU;

	t79 = (((x2781==x2782)<x2783)>>x2784);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2850 = INT16_MIN;
	uint16_t x2851 = 4170U;
	static int16_t x2852 = 13;
	int32_t t80 = 50;

	t80 = (((x2849==x2850)<x2851)>>x2852);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2865 = 2U;
	uint64_t x2866 = 58712986LLU;
	int16_t x2867 = -1;
	int8_t x2868 = 1;
	int32_t t81 = -184971229;

	t81 = (((x2865==x2866)<x2867)>>x2868);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2893 = INT8_MIN;
	static volatile int32_t x2894 = INT32_MIN;
	int16_t x2895 = INT16_MAX;

	t82 = (((x2893==x2894)<x2895)>>x2896);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x2921 = INT16_MIN;
	static volatile int8_t x2922 = INT8_MIN;
	volatile int8_t x2923 = -1;
	int8_t x2924 = 2;
	volatile int32_t t83 = 14845826;

	t83 = (((x2921==x2922)<x2923)>>x2924);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x2949 = INT32_MIN;
	int16_t x2950 = INT16_MIN;
	static int64_t x2951 = -1LL;
	volatile uint8_t x2952 = 3U;
	volatile int32_t t84 = 215872328;

	t84 = (((x2949==x2950)<x2951)>>x2952);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2985 = INT64_MAX;
	volatile uint64_t x2987 = 3522573799383938LLU;
	uint8_t x2988 = 2U;

	t85 = (((x2985==x2986)<x2987)>>x2988);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2989 = INT16_MIN;
	uint64_t x2990 = 3LLU;
	int32_t x2991 = -7;
	int8_t x2992 = 3;
	static int32_t t86 = -502;

	t86 = (((x2989==x2990)<x2991)>>x2992);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3009 = INT64_MIN;
	int8_t x3010 = 0;
	int32_t t87 = 36754945;

	t87 = (((x3009==x3010)<x3011)>>x3012);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3013 = -28;
	int8_t x3014 = INT8_MAX;
	static volatile int8_t x3015 = -54;
	volatile int64_t x3016 = 3LL;
	volatile int32_t t88 = -430;

	t88 = (((x3013==x3014)<x3015)>>x3016);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3069 = 20U;
	int16_t x3070 = 28;
	uint8_t x3071 = 6U;
	volatile uint8_t x3072 = 24U;

	t89 = (((x3069==x3070)<x3071)>>x3072);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3139 = INT16_MIN;
	int32_t t90 = 1659;

	t90 = (((x3137==x3138)<x3139)>>x3140);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3141 = 8894U;
	static int8_t x3142 = INT8_MIN;
	int64_t x3143 = -1LL;
	static uint32_t x3144 = 17U;
	int32_t t91 = -34324991;

	t91 = (((x3141==x3142)<x3143)>>x3144);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x3225 = 14776125;
	uint16_t x3226 = UINT16_MAX;
	int64_t x3228 = 0LL;
	int32_t t92 = 234513;

	t92 = (((x3225==x3226)<x3227)>>x3228);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3265 = UINT32_MAX;
	static int32_t x3266 = INT32_MIN;
	int32_t x3267 = 8360095;
	volatile uint8_t x3268 = 1U;
	volatile int32_t t93 = 1;

	t93 = (((x3265==x3266)<x3267)>>x3268);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3286 = INT32_MIN;
	int8_t x3287 = -51;
	int64_t x3288 = 1LL;
	int32_t t94 = 23;

	t94 = (((x3285==x3286)<x3287)>>x3288);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x3317 = -112099419;
	int64_t x3318 = INT64_MAX;
	int8_t x3319 = INT8_MIN;
	volatile int32_t t95 = -19598868;

	t95 = (((x3317==x3318)<x3319)>>x3320);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3329 = 2U;
	int8_t x3330 = -50;
	volatile int32_t x3331 = INT32_MIN;
	static uint8_t x3332 = 1U;
	int32_t t96 = -1467943;

	t96 = (((x3329==x3330)<x3331)>>x3332);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3343 = -1;
	uint16_t x3344 = 10U;
	static volatile int32_t t97 = 36;

	t97 = (((x3341==x3342)<x3343)>>x3344);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3390 = -1;
	static uint8_t x3392 = 4U;
	int32_t t98 = 13613;

	t98 = (((x3389==x3390)<x3391)>>x3392);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x3409 = 99U;
	int32_t x3411 = INT32_MIN;
	int8_t x3412 = 1;
	volatile int32_t t99 = -283562;

	t99 = (((x3409==x3410)<x3411)>>x3412);

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

