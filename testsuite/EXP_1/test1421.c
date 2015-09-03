#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x48 = INT32_MIN;
int8_t x55 = 0;
static int32_t x108 = -18661409;
int8_t x161 = INT8_MIN;
volatile int32_t t4 = -6612133;
volatile uint8_t x315 = 5U;
static int8_t x370 = 2;
int32_t x373 = INT32_MAX;
volatile int8_t x375 = 0;
int64_t x376 = 2444452LL;
int64_t t10 = -18353LL;
uint64_t t11 = 3998936LLU;
int32_t x453 = -1;
uint64_t x454 = 3897462199102028280LLU;
volatile int32_t t13 = -13886;
static volatile uint64_t x488 = 994070229LLU;
volatile uint8_t x547 = 0U;
static uint64_t x679 = 0LLU;
static volatile uint32_t t19 = 102651859U;
int16_t x706 = INT16_MIN;
volatile int16_t x708 = INT16_MIN;
volatile int32_t t20 = -675685333;
int64_t t23 = -123729LL;
volatile uint64_t x819 = 23LLU;
int64_t t26 = 5LL;
int8_t x876 = INT8_MIN;
static int32_t t27 = -7569752;
uint8_t x932 = UINT8_MAX;
uint8_t x959 = 2U;
volatile int32_t x960 = 4531;
int64_t x994 = 341221681784635163LL;
uint16_t x995 = 0U;
static int32_t t32 = 358;
int8_t x1037 = INT8_MIN;
volatile int64_t t34 = 953478374937LL;
static int16_t x1087 = 5;
volatile int32_t t35 = -1;
int64_t x1160 = INT64_MIN;
int8_t x1181 = 47;
int8_t x1200 = -1;
int32_t t40 = 506868524;
int64_t x1225 = INT64_MIN;
int64_t x1257 = -1LL;
volatile int32_t x1345 = INT32_MAX;
static int8_t x1363 = 23;
int8_t x1610 = INT8_MIN;
int8_t x1612 = INT8_MIN;
uint64_t t48 = 1987276847612LLU;
int16_t x1695 = 2;
static uint64_t t51 = 52LLU;
int8_t x1846 = -29;
static volatile int32_t t53 = -22433531;
static volatile int64_t t55 = -5461LL;
static int16_t x1956 = INT16_MAX;
static int32_t x1969 = -1;
volatile int32_t t59 = 224119102;
int64_t x2001 = INT64_MIN;
volatile int8_t x2002 = INT8_MIN;
int16_t x2041 = INT16_MIN;
volatile int64_t t62 = -75872672LL;
int64_t x2049 = -1150074LL;
static uint16_t x2051 = 1U;
static int16_t x2052 = 18;
volatile int32_t t63 = -980;
int8_t x2081 = INT8_MIN;
uint8_t x2083 = 1U;
volatile int64_t x2084 = INT64_MIN;
volatile int64_t t64 = -182600914140LL;
int8_t x2107 = 6;
int32_t x2108 = 426;
volatile int32_t t65 = -2232846;
int8_t x2110 = -1;
volatile int64_t x2121 = INT64_MIN;
int64_t x2122 = INT64_MIN;
int8_t x2124 = -1;
volatile uint16_t x2177 = 3392U;
uint8_t x2180 = 35U;
volatile int32_t x2245 = INT32_MAX;
uint8_t x2247 = 2U;
volatile uint32_t x2293 = 7U;
int8_t x2333 = -1;
volatile uint32_t t74 = 5U;
static int8_t x2486 = INT8_MIN;
uint64_t x2505 = 551172714682466449LLU;
int32_t x2528 = INT32_MAX;
int32_t x2542 = INT32_MIN;
volatile int8_t x2544 = INT8_MIN;
int64_t x2586 = 16LL;
static volatile int8_t x2587 = 3;
uint8_t x2588 = UINT8_MAX;
int32_t t83 = 72;
volatile uint16_t x2868 = UINT16_MAX;
static volatile uint8_t x2985 = UINT8_MAX;
int32_t x3064 = -941846307;
volatile uint16_t x3253 = 176U;
static int16_t x3255 = 3;
static volatile int32_t t92 = -30;
uint16_t x3354 = 1U;
int32_t t97 = 177605;
static uint8_t x3389 = 2U;
volatile uint8_t x3391 = 13U;


void f0(void) {
	static int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	uint8_t x47 = 2U;
	int32_t t0 = 8982;

	t0 = (((x45<x46)<<x47)/x48);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x53 = INT32_MIN;
	static uint16_t x54 = UINT16_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t1 = 56;

	t1 = (((x53<x54)<<x55)/x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x101 = -745LL;
	int32_t x102 = INT32_MIN;
	volatile uint32_t x103 = 2U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t2 = 6LL;

	t2 = (((x101<x102)<<x103)/x104);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x105 = 24U;
	volatile uint8_t x106 = 1U;
	int8_t x107 = 0;
	int32_t t3 = -2701619;

	t3 = (((x105<x106)<<x107)/x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x162 = 6U;
	volatile int8_t x163 = 9;
	static volatile int16_t x164 = INT16_MIN;

	t4 = (((x161<x162)<<x163)/x164);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x301 = 4;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = 0;
	uint64_t x304 = 617366277LLU;
	static volatile uint64_t t5 = 27551858701156LLU;

	t5 = (((x301<x302)<<x303)/x304);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x313 = INT32_MIN;
	volatile uint64_t x314 = 401329196538LLU;
	int64_t x316 = -14LL;
	volatile int64_t t6 = -63936872365653908LL;

	t6 = (((x313<x314)<<x315)/x316);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x345 = INT8_MAX;
	volatile uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 13U;
	int32_t x348 = -1;
	int32_t t7 = -1;

	t7 = (((x345<x346)<<x347)/x348);

	if (t7 != -8192) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x357 = 9957U;
	volatile uint16_t x358 = UINT16_MAX;
	static int8_t x359 = 1;
	static uint16_t x360 = 1U;
	int32_t t8 = 3;

	t8 = (((x357<x358)<<x359)/x360);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x369 = 7U;
	static uint8_t x371 = 7U;
	int8_t x372 = -33;
	volatile int32_t t9 = -830080;

	t9 = (((x369<x370)<<x371)/x372);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x374 = 1098552667581828LLU;

	t10 = (((x373<x374)<<x375)/x376);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x421 = INT32_MAX;
	static volatile int32_t x422 = -19222407;
	uint32_t x423 = 4U;
	volatile uint64_t x424 = UINT64_MAX;

	t11 = (((x421<x422)<<x423)/x424);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x445 = INT16_MAX;
	uint32_t x446 = 501299U;
	int8_t x447 = 1;
	int64_t x448 = INT64_MIN;
	volatile int64_t t12 = -47743826553545541LL;

	t12 = (((x445<x446)<<x447)/x448);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x455 = 18U;
	static int8_t x456 = INT8_MAX;

	t13 = (((x453<x454)<<x455)/x456);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x485 = 1195U;
	static int32_t x486 = -310;
	uint32_t x487 = 1U;
	static volatile uint64_t t14 = 9570LLU;

	t14 = (((x485<x486)<<x487)/x488);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x541 = INT8_MAX;
	volatile int64_t x542 = INT64_MIN;
	volatile uint16_t x543 = 3U;
	uint8_t x544 = 13U;
	volatile int32_t t15 = 700;

	t15 = (((x541<x542)<<x543)/x544);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x545 = UINT64_MAX;
	int64_t x546 = INT64_MIN;
	int16_t x548 = -1;
	int32_t t16 = -3;

	t16 = (((x545<x546)<<x547)/x548);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x589 = INT64_MAX;
	uint8_t x590 = UINT8_MAX;
	uint64_t x591 = 3LLU;
	int32_t x592 = INT32_MIN;
	volatile int32_t t17 = -392859;

	t17 = (((x589<x590)<<x591)/x592);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x653 = INT16_MAX;
	int16_t x654 = -8;
	static uint8_t x655 = 7U;
	volatile uint64_t x656 = UINT64_MAX;
	static uint64_t t18 = 169712908204LLU;

	t18 = (((x653<x654)<<x655)/x656);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x677 = INT32_MAX;
	int8_t x678 = -7;
	static volatile uint32_t x680 = 14141317U;

	t19 = (((x677<x678)<<x679)/x680);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x705 = INT64_MIN;
	static int32_t x707 = 1;

	t20 = (((x705<x706)<<x707)/x708);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x717 = INT64_MIN;
	volatile int32_t x718 = INT32_MAX;
	int8_t x719 = 28;
	static volatile int8_t x720 = 38;
	volatile int32_t t21 = 7522;

	t21 = (((x717<x718)<<x719)/x720);

	if (t21 != 7064090) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x725 = INT8_MIN;
	static int8_t x726 = 1;
	int16_t x727 = 0;
	int8_t x728 = 7;
	static int32_t t22 = 45518994;

	t22 = (((x725<x726)<<x727)/x728);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x773 = 9U;
	int16_t x774 = INT16_MIN;
	volatile uint8_t x775 = 19U;
	int64_t x776 = INT64_MAX;

	t23 = (((x773<x774)<<x775)/x776);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x785 = 1720658;
	int64_t x786 = -1LL;
	uint8_t x787 = 3U;
	volatile uint8_t x788 = 2U;
	volatile int32_t t24 = 29278;

	t24 = (((x785<x786)<<x787)/x788);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x817 = INT32_MAX;
	uint16_t x818 = 11U;
	int64_t x820 = INT64_MAX;
	static volatile int64_t t25 = -1054423749889266664LL;

	t25 = (((x817<x818)<<x819)/x820);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x841 = 54U;
	volatile uint16_t x842 = 3U;
	int16_t x843 = 18;
	int64_t x844 = -22287LL;

	t26 = (((x841<x842)<<x843)/x844);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x873 = UINT64_MAX;
	static int16_t x874 = INT16_MIN;
	static uint32_t x875 = 6U;

	t27 = (((x873<x874)<<x875)/x876);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x905 = -496LL;
	uint8_t x906 = 17U;
	int64_t x907 = 1LL;
	static uint32_t x908 = 2313166U;
	volatile uint32_t t28 = 93785U;

	t28 = (((x905<x906)<<x907)/x908);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x925 = -1547;
	uint32_t x926 = 571U;
	uint8_t x927 = 17U;
	int64_t x928 = INT64_MIN;
	volatile int64_t t29 = -1167254970278464183LL;

	t29 = (((x925<x926)<<x927)/x928);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x929 = 4220939265LL;
	int32_t x930 = 2036;
	volatile uint16_t x931 = 6U;
	volatile int32_t t30 = 0;

	t30 = (((x929<x930)<<x931)/x932);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x957 = INT32_MAX;
	volatile int8_t x958 = 1;
	int32_t t31 = 4;

	t31 = (((x957<x958)<<x959)/x960);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x993 = UINT32_MAX;
	uint8_t x996 = UINT8_MAX;

	t32 = (((x993<x994)<<x995)/x996);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1038 = 1016337308559010584LLU;
	uint8_t x1039 = 0U;
	int32_t x1040 = 465325942;
	static int32_t t33 = -10;

	t33 = (((x1037<x1038)<<x1039)/x1040);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1061 = 101U;
	static volatile uint32_t x1062 = 981225U;
	volatile int8_t x1063 = 7;
	int64_t x1064 = INT64_MIN;

	t34 = (((x1061<x1062)<<x1063)/x1064);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1085 = INT64_MIN;
	int16_t x1086 = 1351;
	int8_t x1088 = -1;

	t35 = (((x1085<x1086)<<x1087)/x1088);

	if (t35 != -32) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1089 = -14;
	int16_t x1090 = 5216;
	int8_t x1091 = 2;
	int32_t x1092 = INT32_MIN;
	int32_t t36 = -7690319;

	t36 = (((x1089<x1090)<<x1091)/x1092);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1117 = 8238816;
	uint8_t x1118 = 0U;
	static volatile uint32_t x1119 = 8U;
	int8_t x1120 = INT8_MIN;
	int32_t t37 = -32310;

	t37 = (((x1117<x1118)<<x1119)/x1120);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1157 = INT8_MIN;
	int32_t x1158 = -1;
	volatile uint8_t x1159 = 1U;
	volatile int64_t t38 = 1642072LL;

	t38 = (((x1157<x1158)<<x1159)/x1160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1182 = 1907U;
	volatile uint16_t x1183 = 0U;
	uint32_t x1184 = 127U;
	volatile uint32_t t39 = 258279394U;

	t39 = (((x1181<x1182)<<x1183)/x1184);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1197 = 10U;
	volatile int16_t x1198 = -1;
	uint32_t x1199 = 0U;

	t40 = (((x1197<x1198)<<x1199)/x1200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1226 = -33;
	uint64_t x1227 = 30LLU;
	int32_t x1228 = INT32_MIN;
	volatile int32_t t41 = -467090;

	t41 = (((x1225<x1226)<<x1227)/x1228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1258 = 8547785940LLU;
	uint16_t x1259 = 14U;
	int16_t x1260 = 3;
	int32_t t42 = 110565723;

	t42 = (((x1257<x1258)<<x1259)/x1260);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1346 = INT16_MIN;
	volatile uint64_t x1347 = 0LLU;
	int16_t x1348 = -493;
	static int32_t t43 = -715206;

	t43 = (((x1345<x1346)<<x1347)/x1348);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1361 = INT64_MIN;
	int32_t x1362 = INT32_MIN;
	int8_t x1364 = INT8_MAX;
	static int32_t t44 = 3282;

	t44 = (((x1361<x1362)<<x1363)/x1364);

	if (t44 != 66052) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1557 = 2012080;
	static volatile int64_t x1558 = -1LL;
	volatile uint16_t x1559 = 1U;
	volatile uint64_t x1560 = 60210LLU;
	uint64_t t45 = 5LLU;

	t45 = (((x1557<x1558)<<x1559)/x1560);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1565 = -1;
	volatile int8_t x1566 = 1;
	volatile uint8_t x1567 = 4U;
	int32_t x1568 = INT32_MAX;
	int32_t t46 = 55;

	t46 = (((x1565<x1566)<<x1567)/x1568);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1609 = -1;
	uint32_t x1611 = 14U;
	int32_t t47 = 757413;

	t47 = (((x1609<x1610)<<x1611)/x1612);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1661 = 1763333121320673LLU;
	int64_t x1662 = INT64_MIN;
	int64_t x1663 = 14LL;
	uint64_t x1664 = 330671912030182134LLU;

	t48 = (((x1661<x1662)<<x1663)/x1664);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1689 = -1;
	int32_t x1690 = -1;
	uint8_t x1691 = 13U;
	static uint32_t x1692 = 363783359U;
	volatile uint32_t t49 = 641044266U;

	t49 = (((x1689<x1690)<<x1691)/x1692);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x1693 = 485015547U;
	int8_t x1694 = INT8_MAX;
	int16_t x1696 = INT16_MAX;
	int32_t t50 = 9109;

	t50 = (((x1693<x1694)<<x1695)/x1696);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1741 = 477175532LLU;
	static int8_t x1742 = INT8_MIN;
	int32_t x1743 = 13;
	uint64_t x1744 = 11559337765LLU;

	t51 = (((x1741<x1742)<<x1743)/x1744);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1841 = INT8_MAX;
	static int16_t x1842 = INT16_MAX;
	int8_t x1843 = 0;
	static int64_t x1844 = INT64_MIN;
	volatile int64_t t52 = 502240542LL;

	t52 = (((x1841<x1842)<<x1843)/x1844);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1845 = 39;
	static uint8_t x1847 = 2U;
	uint8_t x1848 = UINT8_MAX;

	t53 = (((x1845<x1846)<<x1847)/x1848);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1865 = 6;
	uint8_t x1866 = UINT8_MAX;
	uint8_t x1867 = 9U;
	int8_t x1868 = 7;
	static int32_t t54 = -248;

	t54 = (((x1865<x1866)<<x1867)/x1868);

	if (t54 != 73) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1905 = 124U;
	uint8_t x1906 = 1U;
	int16_t x1907 = 5;
	int64_t x1908 = 98338476LL;

	t55 = (((x1905<x1906)<<x1907)/x1908);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1925 = INT8_MAX;
	int8_t x1926 = -1;
	uint8_t x1927 = 13U;
	int32_t x1928 = -9;
	volatile int32_t t56 = 42487;

	t56 = (((x1925<x1926)<<x1927)/x1928);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1945 = INT16_MIN;
	int8_t x1946 = 12;
	static uint16_t x1947 = 20U;
	int64_t x1948 = -1LL;
	volatile int64_t t57 = 4289824830505LL;

	t57 = (((x1945<x1946)<<x1947)/x1948);

	if (t57 != -1048576LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x1953 = 31U;
	int16_t x1954 = 195;
	static uint16_t x1955 = 0U;
	volatile int32_t t58 = -1;

	t58 = (((x1953<x1954)<<x1955)/x1956);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1970 = 3;
	uint32_t x1971 = 2U;
	int8_t x1972 = INT8_MIN;

	t59 = (((x1969<x1970)<<x1971)/x1972);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x2003 = 0U;
	int64_t x2004 = -1LL;
	int64_t t60 = 2263175689LL;

	t60 = (((x2001<x2002)<<x2003)/x2004);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2033 = INT8_MAX;
	volatile int16_t x2034 = -492;
	volatile uint16_t x2035 = 7U;
	uint8_t x2036 = UINT8_MAX;
	volatile int32_t t61 = -956;

	t61 = (((x2033<x2034)<<x2035)/x2036);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2042 = 3;
	static uint16_t x2043 = 1U;
	volatile int64_t x2044 = 383410430LL;

	t62 = (((x2041<x2042)<<x2043)/x2044);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2050 = 173;

	t63 = (((x2049<x2050)<<x2051)/x2052);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2082 = INT64_MIN;

	t64 = (((x2081<x2082)<<x2083)/x2084);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2105 = 0;
	static volatile int64_t x2106 = 251675LL;

	t65 = (((x2105<x2106)<<x2107)/x2108);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2109 = -1;
	static int16_t x2111 = 2;
	int64_t x2112 = INT64_MAX;
	int64_t t66 = -81LL;

	t66 = (((x2109<x2110)<<x2111)/x2112);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2123 = 0;
	int32_t t67 = 1295;

	t67 = (((x2121<x2122)<<x2123)/x2124);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x2178 = UINT16_MAX;
	int8_t x2179 = 21;
	volatile int32_t t68 = 391718;

	t68 = (((x2177<x2178)<<x2179)/x2180);

	if (t68 != 59918) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2233 = -1;
	int16_t x2234 = -6170;
	int16_t x2235 = 0;
	int8_t x2236 = INT8_MAX;
	volatile int32_t t69 = 28370;

	t69 = (((x2233<x2234)<<x2235)/x2236);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2246 = 25497804134951911LLU;
	int32_t x2248 = 163245;
	int32_t t70 = -1;

	t70 = (((x2245<x2246)<<x2247)/x2248);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2294 = INT64_MIN;
	uint16_t x2295 = 21U;
	static uint64_t x2296 = UINT64_MAX;
	volatile uint64_t t71 = 2393LLU;

	t71 = (((x2293<x2294)<<x2295)/x2296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x2313 = 8U;
	int64_t x2314 = INT64_MAX;
	uint8_t x2315 = 1U;
	int32_t x2316 = INT32_MIN;
	volatile int32_t t72 = -1;

	t72 = (((x2313<x2314)<<x2315)/x2316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2334 = 54408707530LLU;
	volatile int16_t x2335 = 0;
	int16_t x2336 = -434;
	volatile int32_t t73 = -28560249;

	t73 = (((x2333<x2334)<<x2335)/x2336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2477 = -36LL;
	volatile int64_t x2478 = INT64_MAX;
	volatile int8_t x2479 = 30;
	uint32_t x2480 = UINT32_MAX;

	t74 = (((x2477<x2478)<<x2479)/x2480);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2485 = 404154LL;
	volatile uint8_t x2487 = 2U;
	int8_t x2488 = -9;
	volatile int32_t t75 = -11301599;

	t75 = (((x2485<x2486)<<x2487)/x2488);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2506 = UINT64_MAX;
	int8_t x2507 = 9;
	uint8_t x2508 = UINT8_MAX;
	static volatile int32_t t76 = -16211211;

	t76 = (((x2505<x2506)<<x2507)/x2508);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x2525 = -837LL;
	static uint16_t x2526 = 4U;
	uint8_t x2527 = 9U;
	volatile int32_t t77 = 243;

	t77 = (((x2525<x2526)<<x2527)/x2528);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2541 = -1;
	static int8_t x2543 = 1;
	int32_t t78 = -7030664;

	t78 = (((x2541<x2542)<<x2543)/x2544);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2581 = 123360477645602393LL;
	uint64_t x2582 = UINT64_MAX;
	int8_t x2583 = 8;
	int8_t x2584 = -1;
	int32_t t79 = 356212;

	t79 = (((x2581<x2582)<<x2583)/x2584);

	if (t79 != -256) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x2585 = -1;
	int32_t t80 = -4662084;

	t80 = (((x2585<x2586)<<x2587)/x2588);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x2697 = -1;
	int64_t x2698 = INT64_MAX;
	int32_t x2699 = 3;
	static uint32_t x2700 = UINT32_MAX;
	uint32_t t81 = 263U;

	t81 = (((x2697<x2698)<<x2699)/x2700);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2733 = -1280;
	int64_t x2734 = -1LL;
	uint16_t x2735 = 0U;
	volatile uint16_t x2736 = 2005U;
	int32_t t82 = 3;

	t82 = (((x2733<x2734)<<x2735)/x2736);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2853 = -28592;
	int8_t x2854 = 1;
	volatile uint32_t x2855 = 1U;
	int16_t x2856 = INT16_MIN;

	t83 = (((x2853<x2854)<<x2855)/x2856);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2865 = INT16_MIN;
	uint64_t x2866 = 131792394069849388LLU;
	int8_t x2867 = 1;
	volatile int32_t t84 = 13;

	t84 = (((x2865<x2866)<<x2867)/x2868);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2957 = -1;
	uint64_t x2958 = UINT64_MAX;
	int16_t x2959 = 1;
	int8_t x2960 = 37;
	volatile int32_t t85 = -42;

	t85 = (((x2957<x2958)<<x2959)/x2960);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2986 = -1LL;
	int16_t x2987 = 0;
	int16_t x2988 = INT16_MIN;
	int32_t t86 = 2242;

	t86 = (((x2985<x2986)<<x2987)/x2988);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3013 = 75537;
	int32_t x3014 = INT32_MAX;
	uint8_t x3015 = 19U;
	uint8_t x3016 = 1U;
	static int32_t t87 = 1472776;

	t87 = (((x3013<x3014)<<x3015)/x3016);

	if (t87 != 524288) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3041 = 63252251560911LLU;
	static int64_t x3042 = INT64_MIN;
	volatile uint8_t x3043 = 1U;
	int8_t x3044 = INT8_MIN;
	volatile int32_t t88 = 5400019;

	t88 = (((x3041<x3042)<<x3043)/x3044);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3061 = INT16_MAX;
	uint8_t x3062 = 4U;
	static uint16_t x3063 = 2U;
	static volatile int32_t t89 = -199672;

	t89 = (((x3061<x3062)<<x3063)/x3064);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x3153 = INT32_MIN;
	int16_t x3154 = -1;
	static uint16_t x3155 = 25U;
	volatile int8_t x3156 = INT8_MIN;
	static volatile int32_t t90 = 3;

	t90 = (((x3153<x3154)<<x3155)/x3156);

	if (t90 != -262144) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3254 = UINT32_MAX;
	int64_t x3256 = 1769617955LL;
	int64_t t91 = -1LL;

	t91 = (((x3253<x3254)<<x3255)/x3256);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x3257 = -1LL;
	int32_t x3258 = INT32_MIN;
	uint8_t x3259 = 1U;
	volatile uint16_t x3260 = 39U;

	t92 = (((x3257<x3258)<<x3259)/x3260);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3301 = INT8_MAX;
	int16_t x3302 = 9;
	static uint32_t x3303 = 26U;
	uint8_t x3304 = UINT8_MAX;
	static int32_t t93 = -147;

	t93 = (((x3301<x3302)<<x3303)/x3304);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3313 = -1;
	volatile int16_t x3314 = -34;
	static volatile int8_t x3315 = 1;
	volatile uint16_t x3316 = 733U;
	volatile int32_t t94 = 63;

	t94 = (((x3313<x3314)<<x3315)/x3316);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3345 = -2698773;
	int64_t x3346 = INT64_MIN;
	static uint8_t x3347 = 13U;
	int8_t x3348 = -54;
	volatile int32_t t95 = -4;

	t95 = (((x3345<x3346)<<x3347)/x3348);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3353 = 1;
	static uint16_t x3355 = 1U;
	volatile uint64_t x3356 = 1238215LLU;
	volatile uint64_t t96 = 3601339LLU;

	t96 = (((x3353<x3354)<<x3355)/x3356);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x3357 = UINT32_MAX;
	int64_t x3358 = INT64_MIN;
	static uint16_t x3359 = 23U;
	static uint8_t x3360 = 49U;

	t97 = (((x3357<x3358)<<x3359)/x3360);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3390 = 244U;
	int32_t x3392 = -1;
	volatile int32_t t98 = -117403047;

	t98 = (((x3389<x3390)<<x3391)/x3392);

	if (t98 != -8192) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3433 = INT32_MIN;
	uint8_t x3434 = 111U;
	static uint8_t x3435 = 21U;
	volatile uint16_t x3436 = 38U;
	int32_t t99 = -22733983;

	t99 = (((x3433<x3434)<<x3435)/x3436);

	if (t99 != 55188) { NG(); } else { ; }
	
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

