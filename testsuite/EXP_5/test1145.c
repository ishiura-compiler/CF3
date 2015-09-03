#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 4U;
int32_t t0 = 5142;
int8_t x313 = 11;
volatile uint8_t x317 = 0U;
int16_t x318 = 849;
volatile int32_t t5 = 24343460;
volatile uint32_t x472 = 1U;
uint32_t x594 = 14008675U;
int16_t x813 = INT16_MIN;
uint16_t x816 = 3U;
int16_t x826 = INT16_MAX;
uint32_t x845 = 6U;
uint32_t t14 = 2669U;
static volatile uint64_t t16 = 249846611189695LLU;
uint8_t x1044 = UINT8_MAX;
uint8_t x1154 = 31U;
int8_t x1290 = INT8_MAX;
int32_t t22 = INT32_MAX;
uint64_t t23 = 2011384830895LLU;
uint32_t x1333 = 1561118975U;
uint8_t x1416 = 55U;
int64_t x1575 = 11LL;
volatile uint8_t x1606 = 13U;
volatile int16_t x1607 = 4;
int64_t x1608 = -282LL;
uint64_t x1761 = 533363715028LLU;
static int8_t x1787 = 0;
int64_t x1792 = -1LL;
static uint64_t x1793 = 98399261LLU;
uint32_t x1794 = 4U;
int16_t x1796 = INT16_MIN;
int32_t t36 = 187;
uint32_t x1986 = UINT32_MAX;
volatile int32_t x1987 = 0;
static volatile uint64_t x2000 = UINT64_MAX;
uint64_t x2106 = 32258683883127003LLU;
int64_t t43 = 219438767112558LL;
uint8_t x2178 = UINT8_MAX;
uint16_t x2367 = 30U;
volatile int32_t t45 = 913324027;
int16_t x2393 = INT16_MIN;
uint16_t x2394 = 254U;
int8_t x2395 = 7;
int8_t x2432 = 0;
int8_t x2710 = 37;
uint64_t x2712 = UINT64_MAX;
uint64_t t50 = 479803LLU;
static uint8_t x2743 = 3U;
static volatile uint64_t t52 = 335015185088422LLU;
uint64_t t53 = UINT64_MAX;
int16_t x2973 = 5;
uint64_t t54 = 46LLU;
uint64_t x2990 = UINT64_MAX;
int16_t x3062 = INT16_MAX;
int64_t x3096 = 380621136LL;
int16_t x3315 = 5;
int8_t x3430 = INT8_MAX;
int64_t x3473 = INT64_MIN;
int8_t x3555 = 3;
int64_t x3556 = -1LL;
volatile int64_t x3572 = INT64_MIN;
int8_t x3800 = -1;
static uint64_t x3884 = 64164834234414554LLU;
volatile int64_t t74 = 37779563LL;
int32_t x4073 = INT32_MIN;
int64_t x4076 = -1LL;
static volatile uint8_t x4263 = 11U;
volatile int8_t x4273 = INT8_MIN;
uint64_t x4310 = UINT64_MAX;
int32_t x4320 = 464;
int16_t x4374 = 3;
uint8_t x4375 = 17U;
static uint64_t x4454 = 1LLU;
int32_t x4518 = INT32_MAX;
uint16_t x4520 = UINT16_MAX;
static int32_t x4529 = INT32_MIN;
int16_t x4728 = INT16_MIN;
int32_t x4738 = INT32_MAX;
int16_t x4740 = INT16_MAX;
volatile int32_t t92 = -77282766;
int16_t x4757 = INT16_MAX;
int8_t x4776 = INT8_MIN;
volatile int16_t x4807 = 4;
volatile int64_t t95 = 174297LL;
int32_t t98 = -58352;


void f0(void) {
	int8_t x1 = -1;
	volatile int32_t x2 = INT32_MAX;
	uint8_t x3 = 21U;

	t0 = (x1+((x2>>x3)&x4));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x69 = 58105LLU;
	volatile int64_t x70 = 384200417588LL;
	volatile uint8_t x71 = 52U;
	static uint16_t x72 = UINT16_MAX;
	uint64_t t1 = 14766100248LLU;

	t1 = (x69+((x70>>x71)&x72));

	if (t1 != 58105LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = 5576074LL;
	volatile uint16_t x195 = 0U;
	static int8_t x196 = INT8_MIN;
	int64_t t2 = -23297337LL;

	t2 = (x193+((x194>>x195)&x196));

	if (t2 != -9223372036849199744LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x305 = 251LL;
	volatile uint64_t x306 = UINT64_MAX;
	int8_t x307 = 0;
	static uint32_t x308 = UINT32_MAX;
	uint64_t t3 = 41143689419473145LLU;

	t3 = (x305+((x306>>x307)&x308));

	if (t3 != 4294967546LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x314 = 25LLU;
	uint8_t x315 = 3U;
	uint64_t x316 = UINT64_MAX;
	uint64_t t4 = 2156246900628471119LLU;

	t4 = (x313+((x314>>x315)&x316));

	if (t4 != 14LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x319 = 0U;
	uint16_t x320 = 18U;

	t5 = (x317+((x318>>x319)&x320));

	if (t5 != 16) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x325 = INT16_MIN;
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 0U;
	int16_t x328 = 880;
	int32_t t6 = -16;

	t6 = (x325+((x326>>x327)&x328));

	if (t6 != -32656) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x469 = INT8_MIN;
	int16_t x470 = 36;
	uint8_t x471 = 0U;
	static uint32_t t7 = 15277U;

	t7 = (x469+((x470>>x471)&x472));

	if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x593 = -1033580LL;
	uint32_t x595 = 7U;
	static int64_t x596 = INT64_MAX;
	volatile int64_t t8 = 13996336248253LL;

	t8 = (x593+((x594>>x595)&x596));

	if (t8 != -924138LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x669 = INT64_MIN;
	volatile uint64_t x670 = 4147236436LLU;
	int8_t x671 = 1;
	int16_t x672 = INT16_MIN;
	volatile uint64_t t9 = 541011783638LLU;

	t9 = (x669+((x670>>x671)&x672));

	if (t9 != 9223372038928367616LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x785 = -31;
	int16_t x786 = INT16_MAX;
	volatile int64_t x787 = 0LL;
	volatile int8_t x788 = INT8_MAX;
	int32_t t10 = 166;

	t10 = (x785+((x786>>x787)&x788));

	if (t10 != 96) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x814 = 73999671LL;
	volatile uint8_t x815 = 7U;
	int64_t t11 = -490663917599LL;

	t11 = (x813+((x814>>x815)&x816));

	if (t11 != -32766LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x825 = -16117529LL;
	uint16_t x827 = 3U;
	static uint8_t x828 = 12U;
	static volatile int64_t t12 = -295215520942722801LL;

	t12 = (x825+((x826>>x827)&x828));

	if (t12 != -16117517LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x846 = 113U;
	int8_t x847 = 3;
	int64_t x848 = INT64_MIN;
	int64_t t13 = -11098541608416LL;

	t13 = (x845+((x846>>x847)&x848));

	if (t13 != 6LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x969 = INT8_MAX;
	int8_t x970 = 19;
	uint8_t x971 = 0U;
	volatile uint32_t x972 = UINT32_MAX;

	t14 = (x969+((x970>>x971)&x972));

	if (t14 != 146U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x993 = -1LL;
	int16_t x994 = 503;
	uint16_t x995 = 1U;
	int16_t x996 = INT16_MIN;
	volatile int64_t t15 = 29025687LL;

	t15 = (x993+((x994>>x995)&x996));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1005 = INT32_MIN;
	uint32_t x1006 = 877465979U;
	uint16_t x1007 = 22U;
	uint64_t x1008 = UINT64_MAX;

	t16 = (x1005+((x1006>>x1007)&x1008));

	if (t16 != 18446744071562068177LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1041 = -1LL;
	int16_t x1042 = 7;
	volatile int16_t x1043 = 3;
	volatile int64_t t17 = -9586959386LL;

	t17 = (x1041+((x1042>>x1043)&x1044));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1045 = 1;
	uint8_t x1046 = UINT8_MAX;
	uint8_t x1047 = 24U;
	int8_t x1048 = -7;
	static int32_t t18 = 96215857;

	t18 = (x1045+((x1046>>x1047)&x1048));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1141 = -1LL;
	uint64_t x1142 = 2191780074868661830LLU;
	uint8_t x1143 = 0U;
	volatile int32_t x1144 = -12258972;
	uint64_t t19 = 7LLU;

	t19 = (x1141+((x1142>>x1143)&x1144));

	if (t19 != 2191780074867413059LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1153 = -1;
	static uint8_t x1155 = 10U;
	uint32_t x1156 = 10453546U;
	uint32_t t20 = UINT32_MAX;

	t20 = (x1153+((x1154>>x1155)&x1156));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1237 = 1U;
	uint8_t x1238 = 1U;
	uint32_t x1239 = 23U;
	static int64_t x1240 = INT64_MIN;
	int64_t t21 = -7984294905LL;

	t21 = (x1237+((x1238>>x1239)&x1240));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1289 = INT32_MAX;
	static int16_t x1291 = 12;
	static volatile int8_t x1292 = INT8_MIN;

	t22 = (x1289+((x1290>>x1291)&x1292));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1329 = 2036933069LLU;
	static int16_t x1330 = INT16_MAX;
	volatile int8_t x1331 = 1;
	static volatile int64_t x1332 = INT64_MAX;

	t23 = (x1329+((x1330>>x1331)&x1332));

	if (t23 != 2036949452LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1334 = UINT8_MAX;
	uint32_t x1335 = 0U;
	int64_t x1336 = INT64_MIN;
	int64_t t24 = -1202637933LL;

	t24 = (x1333+((x1334>>x1335)&x1336));

	if (t24 != 1561118975LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1413 = 2937252LLU;
	uint64_t x1414 = 32LLU;
	volatile uint8_t x1415 = 7U;
	volatile uint64_t t25 = 1141LLU;

	t25 = (x1413+((x1414>>x1415)&x1416));

	if (t25 != 2937252LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1521 = UINT8_MAX;
	uint16_t x1522 = 423U;
	volatile uint8_t x1523 = 20U;
	static uint64_t x1524 = 3827489057199584116LLU;
	uint64_t t26 = 571898396LLU;

	t26 = (x1521+((x1522>>x1523)&x1524));

	if (t26 != 255LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1541 = -3;
	static uint64_t x1542 = UINT64_MAX;
	int8_t x1543 = 0;
	volatile uint64_t x1544 = 376165586LLU;
	volatile uint64_t t27 = 790326635LLU;

	t27 = (x1541+((x1542>>x1543)&x1544));

	if (t27 != 376165583LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1573 = INT64_MIN;
	uint64_t x1574 = UINT64_MAX;
	volatile int64_t x1576 = INT64_MIN;
	uint64_t t28 = 290086077606569105LLU;

	t28 = (x1573+((x1574>>x1575)&x1576));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1601 = 0;
	uint64_t x1602 = 2832512LLU;
	uint8_t x1603 = 13U;
	uint16_t x1604 = 27302U;
	uint64_t t29 = 7534236369LLU;

	t29 = (x1601+((x1602>>x1603)&x1604));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1605 = 60U;
	volatile int64_t t30 = 233647LL;

	t30 = (x1605+((x1606>>x1607)&x1608));

	if (t30 != 60LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1633 = -277936602799805851LL;
	static int16_t x1634 = INT16_MAX;
	int8_t x1635 = 3;
	uint8_t x1636 = 7U;
	volatile int64_t t31 = 10589796479LL;

	t31 = (x1633+((x1634>>x1635)&x1636));

	if (t31 != -277936602799805844LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1762 = 151075115U;
	uint8_t x1763 = 9U;
	uint16_t x1764 = 100U;
	uint64_t t32 = 33882647291139LLU;

	t32 = (x1761+((x1762>>x1763)&x1764));

	if (t32 != 533363715032LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1785 = -1LL;
	int64_t x1786 = INT64_MAX;
	static uint8_t x1788 = 2U;
	int64_t t33 = 24761LL;

	t33 = (x1785+((x1786>>x1787)&x1788));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1789 = UINT32_MAX;
	static volatile uint8_t x1790 = 7U;
	int8_t x1791 = 7;
	int64_t t34 = -249448469221684LL;

	t34 = (x1789+((x1790>>x1791)&x1792));

	if (t34 != 4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1795 = 2;
	uint64_t t35 = 2437LLU;

	t35 = (x1793+((x1794>>x1795)&x1796));

	if (t35 != 98399261LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1817 = -1;
	int16_t x1818 = INT16_MAX;
	int8_t x1819 = 2;
	int8_t x1820 = INT8_MAX;

	t36 = (x1817+((x1818>>x1819)&x1820));

	if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1825 = 378005545134LLU;
	int32_t x1826 = INT32_MAX;
	volatile uint8_t x1827 = 1U;
	int32_t x1828 = 665672;
	static uint64_t t37 = 51LLU;

	t37 = (x1825+((x1826>>x1827)&x1828));

	if (t37 != 378006210806LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1985 = -1;
	uint8_t x1988 = 40U;
	volatile uint32_t t38 = 999U;

	t38 = (x1985+((x1986>>x1987)&x1988));

	if (t38 != 39U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x1997 = -1LL;
	static volatile uint16_t x1998 = UINT16_MAX;
	int8_t x1999 = 4;
	static volatile uint64_t t39 = 2265394772LLU;

	t39 = (x1997+((x1998>>x1999)&x2000));

	if (t39 != 4094LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2045 = INT32_MIN;
	uint8_t x2046 = 14U;
	int8_t x2047 = 4;
	int16_t x2048 = -3;
	int32_t t40 = INT32_MIN;

	t40 = (x2045+((x2046>>x2047)&x2048));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2089 = 2023708563U;
	uint64_t x2090 = UINT64_MAX;
	static volatile int8_t x2091 = 6;
	static int64_t x2092 = -1LL;
	static volatile uint64_t t41 = 992LLU;

	t41 = (x2089+((x2090>>x2091)&x2092));

	if (t41 != 288230378175420306LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2105 = INT8_MIN;
	uint32_t x2107 = 4U;
	int16_t x2108 = 193;
	static uint64_t t42 = 0LLU;

	t42 = (x2105+((x2106>>x2107)&x2108));

	if (t42 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2117 = -1;
	int64_t x2118 = INT64_MAX;
	int8_t x2119 = 14;
	volatile int64_t x2120 = INT64_MIN;

	t43 = (x2117+((x2118>>x2119)&x2120));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x2177 = INT8_MIN;
	uint16_t x2179 = 1U;
	int32_t x2180 = INT32_MIN;
	static int32_t t44 = -8039;

	t44 = (x2177+((x2178>>x2179)&x2180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2365 = INT16_MIN;
	volatile uint8_t x2366 = 5U;
	static volatile uint8_t x2368 = UINT8_MAX;

	t45 = (x2365+((x2366>>x2367)&x2368));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2396 = -1;
	int32_t t46 = 1010054;

	t46 = (x2393+((x2394>>x2395)&x2396));

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2401 = INT32_MAX;
	volatile int8_t x2402 = 42;
	volatile uint8_t x2403 = 2U;
	uint32_t x2404 = 219533U;
	volatile uint32_t t47 = 41114754U;

	t47 = (x2401+((x2402>>x2403)&x2404));

	if (t47 != 2147483655U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2429 = 134;
	uint8_t x2430 = 1U;
	uint16_t x2431 = 23U;
	int32_t t48 = 5;

	t48 = (x2429+((x2430>>x2431)&x2432));

	if (t48 != 134) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2465 = INT16_MIN;
	uint16_t x2466 = 1U;
	static int8_t x2467 = 0;
	uint16_t x2468 = 25U;
	int32_t t49 = 0;

	t49 = (x2465+((x2466>>x2467)&x2468));

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2709 = INT32_MIN;
	uint8_t x2711 = 25U;

	t50 = (x2709+((x2710>>x2711)&x2712));

	if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2741 = 205519U;
	int32_t x2742 = INT32_MAX;
	int32_t x2744 = INT32_MAX;
	uint32_t t51 = 48718U;

	t51 = (x2741+((x2742>>x2743)&x2744));

	if (t51 != 268640974U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2833 = INT16_MAX;
	uint16_t x2834 = UINT16_MAX;
	uint16_t x2835 = 0U;
	volatile uint64_t x2836 = UINT64_MAX;

	t52 = (x2833+((x2834>>x2835)&x2836));

	if (t52 != 98302LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2865 = -1;
	static volatile uint64_t x2866 = 4LLU;
	uint64_t x2867 = 0LLU;
	volatile int16_t x2868 = INT16_MIN;

	t53 = (x2865+((x2866>>x2867)&x2868));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x2974 = 36203064130287055LLU;
	uint16_t x2975 = 23U;
	int64_t x2976 = 214401497LL;

	t54 = (x2973+((x2974>>x2975)&x2976));

	if (t54 != 295253LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2989 = -1LL;
	uint64_t x2991 = 0LLU;
	volatile uint8_t x2992 = UINT8_MAX;
	uint64_t t55 = 49112LLU;

	t55 = (x2989+((x2990>>x2991)&x2992));

	if (t55 != 254LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2997 = INT16_MIN;
	uint64_t x2998 = 1LLU;
	static int32_t x2999 = 0;
	int8_t x3000 = INT8_MAX;
	volatile uint64_t t56 = 12229899082LLU;

	t56 = (x2997+((x2998>>x2999)&x3000));

	if (t56 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3061 = UINT16_MAX;
	uint16_t x3063 = 1U;
	uint16_t x3064 = 1100U;
	int32_t t57 = 33;

	t57 = (x3061+((x3062>>x3063)&x3064));

	if (t57 != 66635) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3093 = INT8_MIN;
	int64_t x3094 = INT64_MAX;
	static int16_t x3095 = 0;
	static volatile int64_t t58 = -3063584467027078LL;

	t58 = (x3093+((x3094>>x3095)&x3096));

	if (t58 != 380621008LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3313 = INT64_MIN;
	static volatile uint8_t x3314 = 0U;
	static uint16_t x3316 = 5U;
	int64_t t59 = INT64_MIN;

	t59 = (x3313+((x3314>>x3315)&x3316));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3345 = INT8_MIN;
	uint8_t x3346 = 30U;
	int8_t x3347 = 9;
	uint16_t x3348 = 414U;
	static volatile int32_t t60 = 7;

	t60 = (x3345+((x3346>>x3347)&x3348));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3393 = UINT16_MAX;
	uint32_t x3394 = 11838532U;
	int8_t x3395 = 1;
	uint64_t x3396 = 101643LLU;
	uint64_t t61 = 205577567872021325LLU;

	t61 = (x3393+((x3394>>x3395)&x3396));

	if (t61 != 65537LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3429 = INT16_MIN;
	volatile int8_t x3431 = 23;
	uint8_t x3432 = UINT8_MAX;
	static volatile int32_t t62 = -1;

	t62 = (x3429+((x3430>>x3431)&x3432));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3474 = UINT16_MAX;
	uint16_t x3475 = 0U;
	int32_t x3476 = -351;
	static int64_t t63 = 264615324LL;

	t63 = (x3473+((x3474>>x3475)&x3476));

	if (t63 != -9223372036854710623LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3553 = 1;
	int64_t x3554 = 8506LL;
	int64_t t64 = -8459987211552666LL;

	t64 = (x3553+((x3554>>x3555)&x3556));

	if (t64 != 1064LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3569 = INT32_MAX;
	static uint8_t x3570 = 1U;
	static volatile uint8_t x3571 = 0U;
	volatile int64_t t65 = 104330LL;

	t65 = (x3569+((x3570>>x3571)&x3572));

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3581 = UINT8_MAX;
	uint8_t x3582 = 2U;
	uint16_t x3583 = 1U;
	uint32_t x3584 = UINT32_MAX;
	uint32_t t66 = 2053U;

	t66 = (x3581+((x3582>>x3583)&x3584));

	if (t66 != 256U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3593 = INT16_MIN;
	static uint64_t x3594 = 231323117LLU;
	uint16_t x3595 = 25U;
	int64_t x3596 = INT64_MAX;
	volatile uint64_t t67 = 82288LLU;

	t67 = (x3593+((x3594>>x3595)&x3596));

	if (t67 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3725 = 2;
	volatile int64_t x3726 = 1630394825LL;
	static uint8_t x3727 = 0U;
	uint32_t x3728 = 49210U;
	int64_t t68 = -126938219929009487LL;

	t68 = (x3725+((x3726>>x3727)&x3728));

	if (t68 != 49162LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3797 = INT32_MIN;
	int64_t x3798 = 136183200LL;
	int32_t x3799 = 33;
	volatile int64_t t69 = 2987621LL;

	t69 = (x3797+((x3798>>x3799)&x3800));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3857 = 714;
	int8_t x3858 = 0;
	uint16_t x3859 = 0U;
	int32_t x3860 = -15265969;
	volatile int32_t t70 = -51533899;

	t70 = (x3857+((x3858>>x3859)&x3860));

	if (t70 != 714) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3881 = UINT8_MAX;
	int16_t x3882 = 2356;
	int64_t x3883 = 1LL;
	volatile uint64_t t71 = 71057141LLU;

	t71 = (x3881+((x3882>>x3883)&x3884));

	if (t71 != 1433LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3921 = INT16_MAX;
	int32_t x3922 = 1;
	int8_t x3923 = 1;
	static int64_t x3924 = -1LL;
	int64_t t72 = 742433540LL;

	t72 = (x3921+((x3922>>x3923)&x3924));

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4053 = INT8_MAX;
	uint16_t x4054 = UINT16_MAX;
	uint64_t x4055 = 2LLU;
	int8_t x4056 = INT8_MAX;
	volatile int32_t t73 = 2;

	t73 = (x4053+((x4054>>x4055)&x4056));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x4065 = INT16_MAX;
	int64_t x4066 = 3793118686LL;
	uint8_t x4067 = 13U;
	static int32_t x4068 = -1;

	t74 = (x4065+((x4066>>x4067)&x4068));

	if (t74 != 495794LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4074 = INT64_MAX;
	static uint8_t x4075 = 0U;
	int64_t t75 = 2795048475894609963LL;

	t75 = (x4073+((x4074>>x4075)&x4076));

	if (t75 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4145 = INT32_MIN;
	volatile uint32_t x4146 = 2045U;
	uint8_t x4147 = 11U;
	int32_t x4148 = INT32_MIN;
	volatile uint32_t t76 = 304036U;

	t76 = (x4145+((x4146>>x4147)&x4148));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4197 = -59441158;
	static uint16_t x4198 = 378U;
	uint8_t x4199 = 15U;
	static int8_t x4200 = INT8_MAX;
	volatile int32_t t77 = 37244;

	t77 = (x4197+((x4198>>x4199)&x4200));

	if (t77 != -59441158) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4261 = 66U;
	uint8_t x4262 = UINT8_MAX;
	uint8_t x4264 = UINT8_MAX;
	volatile int32_t t78 = 191697268;

	t78 = (x4261+((x4262>>x4263)&x4264));

	if (t78 != 66) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4269 = INT64_MIN;
	uint8_t x4270 = 2U;
	uint8_t x4271 = 0U;
	static int32_t x4272 = 4949294;
	volatile int64_t t79 = -712504LL;

	t79 = (x4269+((x4270>>x4271)&x4272));

	if (t79 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4274 = 1384U;
	int8_t x4275 = 3;
	int8_t x4276 = -1;
	uint32_t t80 = 6938355U;

	t80 = (x4273+((x4274>>x4275)&x4276));

	if (t80 != 45U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4301 = -1;
	uint16_t x4302 = 88U;
	volatile int64_t x4303 = 14LL;
	uint16_t x4304 = UINT16_MAX;
	volatile int32_t t81 = 158653;

	t81 = (x4301+((x4302>>x4303)&x4304));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4309 = 774660LL;
	int8_t x4311 = 2;
	int32_t x4312 = -25760;
	volatile uint64_t t82 = 17806002232463589LLU;

	t82 = (x4309+((x4310>>x4311)&x4312));

	if (t82 != 4611686018428136804LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4317 = INT64_MIN;
	static int16_t x4318 = INT16_MAX;
	int64_t x4319 = 1LL;
	int64_t t83 = -2364636LL;

	t83 = (x4317+((x4318>>x4319)&x4320));

	if (t83 != -9223372036854775344LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4345 = 1405U;
	volatile uint64_t x4346 = 6LLU;
	int16_t x4347 = 0;
	static int64_t x4348 = -1LL;
	volatile uint64_t t84 = 3430407LLU;

	t84 = (x4345+((x4346>>x4347)&x4348));

	if (t84 != 1411LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4373 = UINT32_MAX;
	int64_t x4376 = INT64_MAX;
	volatile int64_t t85 = 7623900LL;

	t85 = (x4373+((x4374>>x4375)&x4376));

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4453 = -1536158458756LL;
	int8_t x4455 = 1;
	uint32_t x4456 = 126237U;
	static uint64_t t86 = 215531982388962941LLU;

	t86 = (x4453+((x4454>>x4455)&x4456));

	if (t86 != 18446742537551092860LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4493 = 7578U;
	static volatile uint64_t x4494 = UINT64_MAX;
	int8_t x4495 = 1;
	int8_t x4496 = -1;
	uint64_t t87 = 1402572169LLU;

	t87 = (x4493+((x4494>>x4495)&x4496));

	if (t87 != 9223372036854783385LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4517 = 139764LLU;
	uint32_t x4519 = 3U;
	uint64_t t88 = 588LLU;

	t88 = (x4517+((x4518>>x4519)&x4520));

	if (t88 != 205299LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4530 = 3258508;
	uint8_t x4531 = 6U;
	int16_t x4532 = -1;
	int32_t t89 = 1163;

	t89 = (x4529+((x4530>>x4531)&x4532));

	if (t89 != -2147432734) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4565 = INT32_MIN;
	uint64_t x4566 = 3006587750448470306LLU;
	uint8_t x4567 = 31U;
	static int16_t x4568 = 11;
	volatile uint64_t t90 = 4794238696545733LLU;

	t90 = (x4565+((x4566>>x4567)&x4568));

	if (t90 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4725 = UINT16_MAX;
	volatile uint32_t x4726 = UINT32_MAX;
	static int8_t x4727 = 30;
	uint32_t t91 = 52U;

	t91 = (x4725+((x4726>>x4727)&x4728));

	if (t91 != 65535U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4737 = 11U;
	uint8_t x4739 = 2U;

	t92 = (x4737+((x4738>>x4739)&x4740));

	if (t92 != 32778) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4758 = 6429U;
	uint8_t x4759 = 22U;
	int64_t x4760 = -1LL;
	static int64_t t93 = 14678915827214982LL;

	t93 = (x4757+((x4758>>x4759)&x4760));

	if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4773 = INT8_MIN;
	uint16_t x4774 = 118U;
	static int8_t x4775 = 1;
	volatile int32_t t94 = 1807546;

	t94 = (x4773+((x4774>>x4775)&x4776));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4805 = INT64_MIN;
	int16_t x4806 = INT16_MAX;
	uint16_t x4808 = UINT16_MAX;

	t95 = (x4805+((x4806>>x4807)&x4808));

	if (t95 != -9223372036854773761LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x4825 = 437585163670LL;
	volatile uint32_t x4826 = 0U;
	uint8_t x4827 = 8U;
	int32_t x4828 = -1;
	int64_t t96 = 5435076LL;

	t96 = (x4825+((x4826>>x4827)&x4828));

	if (t96 != 437585163670LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4873 = 7U;
	int64_t x4874 = 88520931723LL;
	uint8_t x4875 = 2U;
	int8_t x4876 = -3;
	static volatile int64_t t97 = -3352610653LL;

	t97 = (x4873+((x4874>>x4875)&x4876));

	if (t97 != 22130232935LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4917 = UINT16_MAX;
	int16_t x4918 = 1226;
	uint32_t x4919 = 20U;
	int8_t x4920 = 0;

	t98 = (x4917+((x4918>>x4919)&x4920));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x4945 = 2;
	int16_t x4946 = 299;
	uint32_t x4947 = 10U;
	uint64_t x4948 = UINT64_MAX;
	uint64_t t99 = 383LLU;

	t99 = (x4945+((x4946>>x4947)&x4948));

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

