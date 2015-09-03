#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 76;
volatile int32_t t1 = 3934705;
static int32_t t2 = -61092;
uint16_t x149 = 5U;
int32_t t4 = -98;
static int8_t x200 = 1;
uint16_t x245 = UINT16_MAX;
int16_t x246 = -1;
uint32_t x294 = 15U;
uint8_t x296 = 1U;
int8_t x303 = INT8_MIN;
int64_t x326 = INT64_MIN;
int32_t t12 = 242683009;
volatile int16_t x381 = -86;
int32_t x427 = INT32_MAX;
static volatile int32_t t16 = 18007;
int32_t t17 = -62766301;
uint32_t x478 = UINT32_MAX;
static int8_t x480 = 6;
uint16_t x548 = 2U;
uint16_t x568 = 24U;
int16_t x621 = -3022;
int8_t x624 = 15;
volatile int32_t t21 = -110;
static int64_t x773 = INT64_MAX;
uint8_t x776 = 12U;
static uint8_t x780 = 1U;
uint8_t x797 = 6U;
int64_t x825 = -1LL;
volatile int32_t x828 = 1;
uint8_t x884 = 25U;
volatile int32_t t33 = 11;
static uint32_t x926 = 47U;
uint16_t x941 = UINT16_MAX;
int16_t x1045 = INT16_MIN;
volatile uint8_t x1049 = 5U;
uint16_t x1078 = 164U;
static uint8_t x1141 = 65U;
uint8_t x1143 = 1U;
int16_t x1144 = 0;
uint16_t x1156 = 27U;
uint16_t x1168 = 5U;
int8_t x1207 = INT8_MAX;
static int16_t x1254 = INT16_MAX;
uint8_t x1256 = 14U;
uint8_t x1330 = UINT8_MAX;
static volatile int32_t t50 = -30233;
int32_t t51 = 136442109;
volatile uint32_t x1414 = 6998212U;
int16_t x1416 = 3;
volatile int32_t t53 = 43855;
int64_t x1539 = INT64_MIN;
int32_t x1637 = 30705972;
static int16_t x1639 = INT16_MIN;
uint16_t x1654 = 48U;
static uint64_t x1655 = 87LLU;
volatile int32_t t59 = 2981;
int16_t x1667 = -1;
static int32_t x1675 = 130;
int8_t x1687 = INT8_MIN;
int8_t x1694 = INT8_MAX;
volatile int8_t x1749 = INT8_MAX;
volatile uint8_t x1752 = 0U;
static int32_t t65 = 1013;
int16_t x1779 = 2715;
int8_t x1780 = 0;
int8_t x1854 = INT8_MIN;
volatile uint32_t x1872 = 0U;
volatile int32_t t71 = -60700;
uint8_t x1908 = 28U;
static uint32_t x1991 = 81666520U;
volatile int16_t x2007 = 3022;
volatile int32_t t75 = -39064087;
static int8_t x2053 = 0;
int32_t x2093 = -1;
static int8_t x2203 = INT8_MAX;
int32_t x2204 = 1;
int32_t x2225 = 419927121;
static volatile int8_t x2228 = 0;
int64_t x2275 = -1984945816LL;
volatile int32_t t81 = 2609;
static int16_t x2304 = 0;
int16_t x2319 = INT16_MAX;
volatile uint8_t x2458 = UINT8_MAX;
volatile int16_t x2459 = 6936;
volatile uint32_t x2497 = UINT32_MAX;
int32_t x2581 = INT32_MIN;
volatile uint8_t x2584 = 11U;
uint64_t x2618 = UINT64_MAX;
int64_t x2745 = -1LL;
int16_t x2747 = 23;
int32_t x2764 = 8;
static volatile int32_t t98 = 522;
uint8_t x2832 = 6U;


void f0(void) {
	static int32_t x21 = INT32_MIN;
	int8_t x22 = -1;
	uint32_t x23 = 61403U;
	int8_t x24 = 7;

	t0 = (x21==((x22<x23)<<x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x45 = -1LL;
	uint64_t x46 = UINT64_MAX;
	uint16_t x47 = 3568U;
	int8_t x48 = 23;

	t1 = (x45==((x46<x47)<<x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x69 = 1542302116883056LLU;
	volatile int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MAX;
	uint64_t x72 = 0LLU;

	t2 = (x69==((x70<x71)<<x72));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x97 = 0U;
	int32_t x98 = INT32_MIN;
	int8_t x99 = -59;
	int8_t x100 = 2;
	volatile int32_t t3 = 16419331;

	t3 = (x97==((x98<x99)<<x100));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x150 = INT64_MIN;
	volatile int64_t x151 = INT64_MAX;
	int8_t x152 = 10;

	t4 = (x149==((x150<x151)<<x152));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x197 = INT32_MIN;
	volatile int8_t x198 = INT8_MIN;
	uint16_t x199 = 0U;
	static int32_t t5 = 121051;

	t5 = (x197==((x198<x199)<<x200));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x247 = 126U;
	int8_t x248 = 0;
	int32_t t6 = 638;

	t6 = (x245==((x246<x247)<<x248));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x265 = 18485037285LLU;
	int8_t x266 = INT8_MIN;
	int8_t x267 = 38;
	uint32_t x268 = 28U;
	int32_t t7 = 12;

	t7 = (x265==((x266<x267)<<x268));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x295 = 23U;
	volatile int32_t t8 = -21008687;

	t8 = (x293==((x294<x295)<<x296));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x301 = -3956892LL;
	uint16_t x302 = 1U;
	static int32_t x304 = 0;
	int32_t t9 = 378865839;

	t9 = (x301==((x302<x303)<<x304));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x325 = 112U;
	int16_t x327 = INT16_MIN;
	int8_t x328 = 27;
	volatile int32_t t10 = -63108;

	t10 = (x325==((x326<x327)<<x328));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x341 = 2;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -118150871;
	uint8_t x344 = 12U;
	static volatile int32_t t11 = 1008963;

	t11 = (x341==((x342<x343)<<x344));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x365 = 1;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = 2U;

	t12 = (x365==((x366<x367)<<x368));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = 22U;
	int32_t t13 = -18203514;

	t13 = (x369==((x370<x371)<<x372));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x382 = -1;
	static int32_t x383 = -1;
	volatile uint64_t x384 = 1LLU;
	volatile int32_t t14 = 1453;

	t14 = (x381==((x382<x383)<<x384));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x401 = 1932268LLU;
	static int32_t x402 = INT32_MIN;
	static volatile uint32_t x403 = UINT32_MAX;
	uint16_t x404 = 11U;
	int32_t t15 = 25254;

	t15 = (x401==((x402<x403)<<x404));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x425 = UINT32_MAX;
	uint8_t x426 = UINT8_MAX;
	volatile int32_t x428 = 11;

	t16 = (x425==((x426<x427)<<x428));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x453 = INT16_MAX;
	uint8_t x454 = UINT8_MAX;
	volatile int32_t x455 = -1;
	uint16_t x456 = 1U;

	t17 = (x453==((x454<x455)<<x456));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x477 = -1;
	uint64_t x479 = 615471LLU;
	volatile int32_t t18 = 28488552;

	t18 = (x477==((x478<x479)<<x480));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x545 = INT32_MAX;
	static volatile int16_t x546 = INT16_MAX;
	int16_t x547 = INT16_MIN;
	volatile int32_t t19 = 6995;

	t19 = (x545==((x546<x547)<<x548));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x565 = UINT64_MAX;
	volatile int64_t x566 = 2603836LL;
	uint64_t x567 = UINT64_MAX;
	volatile int32_t t20 = 1793548;

	t20 = (x565==((x566<x567)<<x568));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x622 = -1;
	int64_t x623 = 0LL;

	t21 = (x621==((x622<x623)<<x624));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x677 = 3132U;
	int32_t x678 = INT32_MIN;
	static int8_t x679 = 1;
	volatile uint16_t x680 = 26U;
	int32_t t22 = -841828;

	t22 = (x677==((x678<x679)<<x680));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x709 = INT32_MAX;
	volatile uint64_t x710 = 4536939306470335775LLU;
	int16_t x711 = 2861;
	static int32_t x712 = 0;
	volatile int32_t t23 = 6;

	t23 = (x709==((x710<x711)<<x712));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x721 = UINT16_MAX;
	uint32_t x722 = 526716839U;
	static int64_t x723 = 108799209677743LL;
	int16_t x724 = 14;
	volatile int32_t t24 = -239;

	t24 = (x721==((x722<x723)<<x724));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x741 = 540052LLU;
	uint8_t x742 = 1U;
	uint16_t x743 = 451U;
	volatile uint8_t x744 = 1U;
	volatile int32_t t25 = 421;

	t25 = (x741==((x742<x743)<<x744));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x774 = 167;
	volatile uint32_t x775 = 1173817U;
	volatile int32_t t26 = 148724;

	t26 = (x773==((x774<x775)<<x776));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x777 = -1LL;
	int32_t x778 = -29496247;
	int64_t x779 = INT64_MAX;
	volatile int32_t t27 = -1;

	t27 = (x777==((x778<x779)<<x780));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x785 = 52U;
	static int16_t x786 = INT16_MIN;
	volatile int16_t x787 = INT16_MIN;
	uint16_t x788 = 0U;
	static volatile int32_t t28 = -335265;

	t28 = (x785==((x786<x787)<<x788));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x798 = -1;
	uint16_t x799 = 44U;
	volatile int16_t x800 = 9;
	volatile int32_t t29 = 20803154;

	t29 = (x797==((x798<x799)<<x800));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x826 = INT8_MIN;
	int32_t x827 = INT32_MIN;
	int32_t t30 = -215;

	t30 = (x825==((x826<x827)<<x828));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x829 = 838U;
	uint16_t x830 = UINT16_MAX;
	int32_t x831 = INT32_MIN;
	int16_t x832 = 25;
	int32_t t31 = -550690649;

	t31 = (x829==((x830<x831)<<x832));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x881 = -47;
	volatile int64_t x882 = 5828LL;
	uint32_t x883 = 4134018U;
	volatile int32_t t32 = 93326;

	t32 = (x881==((x882<x883)<<x884));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x893 = -1LL;
	int32_t x894 = -1;
	static volatile int8_t x895 = -48;
	uint16_t x896 = 3U;

	t33 = (x893==((x894<x895)<<x896));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x917 = 10U;
	int8_t x918 = -1;
	int16_t x919 = -1;
	int16_t x920 = 7;
	volatile int32_t t34 = 127;

	t34 = (x917==((x918<x919)<<x920));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x925 = INT8_MIN;
	int8_t x927 = INT8_MIN;
	int16_t x928 = 1;
	int32_t t35 = 15344372;

	t35 = (x925==((x926<x927)<<x928));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x942 = 9437378LLU;
	static int16_t x943 = INT16_MIN;
	static uint16_t x944 = 0U;
	int32_t t36 = 70;

	t36 = (x941==((x942<x943)<<x944));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1046 = -5;
	int16_t x1047 = INT16_MIN;
	volatile int8_t x1048 = 1;
	volatile int32_t t37 = 0;

	t37 = (x1045==((x1046<x1047)<<x1048));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1050 = 1501U;
	uint16_t x1051 = UINT16_MAX;
	int16_t x1052 = 2;
	static volatile int32_t t38 = -1815473;

	t38 = (x1049==((x1050<x1051)<<x1052));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1061 = INT64_MAX;
	uint32_t x1062 = 12U;
	int64_t x1063 = INT64_MAX;
	int16_t x1064 = 0;
	volatile int32_t t39 = 16;

	t39 = (x1061==((x1062<x1063)<<x1064));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1077 = 17494U;
	int8_t x1079 = -5;
	uint8_t x1080 = 5U;
	volatile int32_t t40 = -116819;

	t40 = (x1077==((x1078<x1079)<<x1080));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1089 = -1;
	volatile int64_t x1090 = -1LL;
	uint16_t x1091 = 294U;
	int8_t x1092 = 0;
	volatile int32_t t41 = -646;

	t41 = (x1089==((x1090<x1091)<<x1092));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1105 = 41U;
	int32_t x1106 = INT32_MIN;
	static volatile int64_t x1107 = INT64_MIN;
	volatile uint8_t x1108 = 0U;
	static int32_t t42 = -43;

	t42 = (x1105==((x1106<x1107)<<x1108));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1142 = UINT8_MAX;
	static int32_t t43 = -669436349;

	t43 = (x1141==((x1142<x1143)<<x1144));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1153 = -39;
	int32_t x1154 = INT32_MIN;
	int32_t x1155 = INT32_MIN;
	volatile int32_t t44 = 6591811;

	t44 = (x1153==((x1154<x1155)<<x1156));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1165 = 23;
	int8_t x1166 = 18;
	uint64_t x1167 = UINT64_MAX;
	volatile int32_t t45 = 0;

	t45 = (x1165==((x1166<x1167)<<x1168));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1205 = INT16_MIN;
	int8_t x1206 = -1;
	uint8_t x1208 = 4U;
	volatile int32_t t46 = -3642573;

	t46 = (x1205==((x1206<x1207)<<x1208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1253 = INT8_MIN;
	int8_t x1255 = INT8_MAX;
	volatile int32_t t47 = -1430920;

	t47 = (x1253==((x1254<x1255)<<x1256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x1277 = 2909;
	int32_t x1278 = 423201508;
	int8_t x1279 = 5;
	uint8_t x1280 = 0U;
	volatile int32_t t48 = 18689728;

	t48 = (x1277==((x1278<x1279)<<x1280));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x1281 = 0U;
	static int64_t x1282 = 45217890LL;
	int8_t x1283 = -11;
	uint8_t x1284 = 1U;
	int32_t t49 = 20652;

	t49 = (x1281==((x1282<x1283)<<x1284));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1329 = -1LL;
	static int32_t x1331 = 705078733;
	int8_t x1332 = 3;

	t50 = (x1329==((x1330<x1331)<<x1332));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x1333 = INT8_MIN;
	volatile int16_t x1334 = 855;
	uint32_t x1335 = 25969314U;
	volatile uint8_t x1336 = 0U;

	t51 = (x1333==((x1334<x1335)<<x1336));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1393 = 9;
	uint32_t x1394 = 11408U;
	int16_t x1395 = INT16_MIN;
	volatile uint16_t x1396 = 12U;
	volatile int32_t t52 = -458560;

	t52 = (x1393==((x1394<x1395)<<x1396));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1413 = -5358198954455309LL;
	uint8_t x1415 = UINT8_MAX;

	t53 = (x1413==((x1414<x1415)<<x1416));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1501 = INT32_MIN;
	int16_t x1502 = 305;
	int64_t x1503 = INT64_MIN;
	uint16_t x1504 = 14U;
	int32_t t54 = 110328750;

	t54 = (x1501==((x1502<x1503)<<x1504));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1525 = INT8_MIN;
	uint8_t x1526 = UINT8_MAX;
	int64_t x1527 = INT64_MAX;
	uint8_t x1528 = 29U;
	int32_t t55 = 0;

	t55 = (x1525==((x1526<x1527)<<x1528));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x1537 = -193;
	uint8_t x1538 = UINT8_MAX;
	uint32_t x1540 = 8U;
	static volatile int32_t t56 = 203;

	t56 = (x1537==((x1538<x1539)<<x1540));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1577 = INT8_MIN;
	int8_t x1578 = INT8_MIN;
	int8_t x1579 = INT8_MIN;
	uint32_t x1580 = 19U;
	int32_t t57 = 51188326;

	t57 = (x1577==((x1578<x1579)<<x1580));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1638 = INT16_MIN;
	uint8_t x1640 = 11U;
	int32_t t58 = -25089;

	t58 = (x1637==((x1638<x1639)<<x1640));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1653 = INT32_MIN;
	int32_t x1656 = 1;

	t59 = (x1653==((x1654<x1655)<<x1656));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x1665 = UINT16_MAX;
	int16_t x1666 = 79;
	int16_t x1668 = 0;
	int32_t t60 = -282;

	t60 = (x1665==((x1666<x1667)<<x1668));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1673 = -1;
	int32_t x1674 = INT32_MIN;
	uint16_t x1676 = 10U;
	static volatile int32_t t61 = -5;

	t61 = (x1673==((x1674<x1675)<<x1676));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1685 = -344LL;
	int64_t x1686 = -1077977341455439543LL;
	volatile uint8_t x1688 = 5U;
	volatile int32_t t62 = 0;

	t62 = (x1685==((x1686<x1687)<<x1688));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1693 = 11U;
	static int32_t x1695 = INT32_MIN;
	uint16_t x1696 = 3U;
	volatile int32_t t63 = -29424;

	t63 = (x1693==((x1694<x1695)<<x1696));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1701 = -2;
	static int64_t x1702 = -192007193875736LL;
	uint64_t x1703 = 494010LLU;
	static uint8_t x1704 = 19U;
	static volatile int32_t t64 = -43365;

	t64 = (x1701==((x1702<x1703)<<x1704));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1750 = -1643961LL;
	uint32_t x1751 = 13677755U;

	t65 = (x1749==((x1750<x1751)<<x1752));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x1777 = -1;
	uint64_t x1778 = 5650LLU;
	volatile int32_t t66 = -649435;

	t66 = (x1777==((x1778<x1779)<<x1780));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1801 = UINT64_MAX;
	static int8_t x1802 = INT8_MIN;
	int8_t x1803 = 33;
	int8_t x1804 = 9;
	static volatile int32_t t67 = -237937;

	t67 = (x1801==((x1802<x1803)<<x1804));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1821 = UINT16_MAX;
	static int64_t x1822 = 114875361429377111LL;
	int32_t x1823 = -422;
	static uint16_t x1824 = 1U;
	int32_t t68 = -1;

	t68 = (x1821==((x1822<x1823)<<x1824));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1833 = 7417506U;
	int16_t x1834 = -26;
	volatile int8_t x1835 = INT8_MIN;
	uint8_t x1836 = 16U;
	int32_t t69 = -4;

	t69 = (x1833==((x1834<x1835)<<x1836));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1853 = INT64_MIN;
	volatile int8_t x1855 = INT8_MIN;
	static volatile uint8_t x1856 = 13U;
	int32_t t70 = 1;

	t70 = (x1853==((x1854<x1855)<<x1856));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1869 = UINT8_MAX;
	int32_t x1870 = INT32_MIN;
	static uint32_t x1871 = UINT32_MAX;

	t71 = (x1869==((x1870<x1871)<<x1872));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x1905 = -42775744LL;
	int32_t x1906 = -7736677;
	int16_t x1907 = INT16_MIN;
	static volatile int32_t t72 = 104;

	t72 = (x1905==((x1906<x1907)<<x1908));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1989 = UINT64_MAX;
	static int8_t x1990 = INT8_MAX;
	int8_t x1992 = 0;
	volatile int32_t t73 = -13889;

	t73 = (x1989==((x1990<x1991)<<x1992));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2005 = 422150284U;
	static uint8_t x2006 = 0U;
	uint8_t x2008 = 11U;
	int32_t t74 = 2289987;

	t74 = (x2005==((x2006<x2007)<<x2008));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2013 = -1LL;
	int64_t x2014 = INT64_MIN;
	int8_t x2015 = INT8_MAX;
	volatile int8_t x2016 = 1;

	t75 = (x2013==((x2014<x2015)<<x2016));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2054 = 3644;
	volatile uint32_t x2055 = 3690U;
	uint8_t x2056 = 0U;
	volatile int32_t t76 = 12753;

	t76 = (x2053==((x2054<x2055)<<x2056));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x2094 = -38931582841LL;
	static volatile int32_t x2095 = INT32_MIN;
	uint8_t x2096 = 3U;
	int32_t t77 = 88;

	t77 = (x2093==((x2094<x2095)<<x2096));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2201 = 1;
	volatile int32_t x2202 = INT32_MIN;
	int32_t t78 = -683;

	t78 = (x2201==((x2202<x2203)<<x2204));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2226 = INT64_MAX;
	uint64_t x2227 = UINT64_MAX;
	int32_t t79 = 595368213;

	t79 = (x2225==((x2226<x2227)<<x2228));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x2233 = INT64_MAX;
	volatile uint8_t x2234 = UINT8_MAX;
	uint64_t x2235 = 76002LLU;
	uint32_t x2236 = 1U;
	static volatile int32_t t80 = -338433300;

	t80 = (x2233==((x2234<x2235)<<x2236));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2273 = INT16_MAX;
	uint64_t x2274 = 7583LLU;
	int32_t x2276 = 19;

	t81 = (x2273==((x2274<x2275)<<x2276));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x2301 = INT16_MIN;
	int8_t x2302 = INT8_MIN;
	static uint8_t x2303 = UINT8_MAX;
	volatile int32_t t82 = -1;

	t82 = (x2301==((x2302<x2303)<<x2304));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2317 = 212502054571048484LLU;
	volatile int64_t x2318 = 588798456731169479LL;
	volatile uint16_t x2320 = 2U;
	volatile int32_t t83 = -937480;

	t83 = (x2317==((x2318<x2319)<<x2320));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2361 = INT64_MAX;
	uint16_t x2362 = 11793U;
	int32_t x2363 = -42;
	static uint16_t x2364 = 14U;
	volatile int32_t t84 = -368;

	t84 = (x2361==((x2362<x2363)<<x2364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x2445 = INT8_MIN;
	uint32_t x2446 = UINT32_MAX;
	volatile int8_t x2447 = INT8_MAX;
	int16_t x2448 = 0;
	volatile int32_t t85 = -24123621;

	t85 = (x2445==((x2446<x2447)<<x2448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2457 = INT16_MAX;
	uint8_t x2460 = 11U;
	int32_t t86 = -4;

	t86 = (x2457==((x2458<x2459)<<x2460));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2498 = INT32_MAX;
	volatile uint16_t x2499 = 155U;
	volatile uint8_t x2500 = 29U;
	static volatile int32_t t87 = 350618309;

	t87 = (x2497==((x2498<x2499)<<x2500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2533 = INT32_MIN;
	uint16_t x2534 = 1U;
	int64_t x2535 = INT64_MAX;
	uint32_t x2536 = 24U;
	int32_t t88 = -30;

	t88 = (x2533==((x2534<x2535)<<x2536));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2549 = INT8_MAX;
	int64_t x2550 = -1LL;
	int8_t x2551 = INT8_MIN;
	int8_t x2552 = 12;
	int32_t t89 = -8092;

	t89 = (x2549==((x2550<x2551)<<x2552));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2582 = 30994U;
	static volatile int32_t x2583 = -1;
	static volatile int32_t t90 = -7272;

	t90 = (x2581==((x2582<x2583)<<x2584));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2597 = -164618673560954LL;
	volatile uint64_t x2598 = 269LLU;
	static int64_t x2599 = INT64_MIN;
	int16_t x2600 = 1;
	static int32_t t91 = 3502;

	t91 = (x2597==((x2598<x2599)<<x2600));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2605 = -351389032;
	static volatile uint64_t x2606 = 2154455059044LLU;
	static volatile int8_t x2607 = -1;
	int8_t x2608 = 7;
	volatile int32_t t92 = 468;

	t92 = (x2605==((x2606<x2607)<<x2608));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2617 = 70U;
	uint16_t x2619 = UINT16_MAX;
	uint8_t x2620 = 0U;
	int32_t t93 = -1999;

	t93 = (x2617==((x2618<x2619)<<x2620));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x2661 = UINT32_MAX;
	volatile int8_t x2662 = INT8_MAX;
	int32_t x2663 = 69302518;
	int8_t x2664 = 1;
	int32_t t94 = -528661375;

	t94 = (x2661==((x2662<x2663)<<x2664));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x2746 = 11442U;
	uint8_t x2748 = 9U;
	volatile int32_t t95 = -9884;

	t95 = (x2745==((x2746<x2747)<<x2748));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2757 = UINT64_MAX;
	int16_t x2758 = INT16_MIN;
	static int32_t x2759 = INT32_MAX;
	static uint32_t x2760 = 8U;
	int32_t t96 = 0;

	t96 = (x2757==((x2758<x2759)<<x2760));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2761 = INT64_MAX;
	uint64_t x2762 = 0LLU;
	volatile int8_t x2763 = -1;
	static volatile int32_t t97 = 81;

	t97 = (x2761==((x2762<x2763)<<x2764));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2765 = 18U;
	int8_t x2766 = INT8_MIN;
	volatile uint32_t x2767 = UINT32_MAX;
	uint16_t x2768 = 3U;

	t98 = (x2765==((x2766<x2767)<<x2768));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x2829 = 1074742U;
	int16_t x2830 = INT16_MAX;
	int64_t x2831 = INT64_MAX;
	int32_t t99 = -83;

	t99 = (x2829==((x2830<x2831)<<x2832));

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

