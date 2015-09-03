#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MIN;
uint16_t x29 = 0U;
volatile uint64_t t1 = 3797687656331472LLU;
int8_t x103 = 3;
uint64_t x104 = UINT64_MAX;
uint64_t x114 = 8489566306267LLU;
int16_t x116 = -3;
uint64_t x185 = 193298LLU;
int16_t x251 = 1;
volatile int8_t x252 = -1;
volatile int32_t t9 = 738222;
int8_t x331 = 20;
int16_t x332 = 16057;
static int64_t t11 = -10545601654LL;
uint64_t x660 = 1730197312060060982LLU;
static uint64_t t13 = 737145404LLU;
int64_t x729 = INT64_MIN;
static uint64_t x730 = 1673128044143385482LLU;
static uint8_t x740 = 87U;
int64_t x838 = 72960203LL;
uint64_t x910 = UINT64_MAX;
uint8_t x935 = 0U;
volatile uint16_t x990 = 3014U;
static int16_t x1063 = 1;
uint16_t x1091 = 3U;
volatile int32_t x1100 = -1;
uint8_t x1262 = 0U;
int32_t x1301 = INT32_MAX;
static int64_t t31 = -2LL;
static volatile uint8_t x1467 = 3U;
uint16_t x1526 = 485U;
uint8_t x1567 = 5U;
volatile int64_t t36 = -46221118026087260LL;
uint8_t x1632 = 4U;
uint8_t x1647 = 1U;
uint16_t x1709 = 4991U;
static int32_t x1710 = INT32_MAX;
int8_t x1825 = -1;
volatile int8_t x1828 = 1;
static uint64_t t41 = 608063495003832589LLU;
int16_t x1905 = -3510;
uint8_t x1920 = 3U;
uint32_t t43 = 7380025U;
static volatile int16_t x2101 = INT16_MIN;
uint64_t x2103 = 10LLU;
int32_t x2104 = 417793;
uint16_t x2126 = 0U;
int8_t x2127 = 2;
static uint16_t x2194 = UINT16_MAX;
int64_t x2196 = INT64_MIN;
uint64_t x2344 = 13931LLU;
volatile int64_t t55 = -1LL;
volatile uint32_t t56 = 118U;
uint64_t t57 = 56471211901LLU;
uint8_t x2855 = 3U;
static uint8_t x2856 = 31U;
static int32_t t62 = 96299180;
uint32_t x3058 = UINT32_MAX;
uint32_t t64 = 1U;
volatile int8_t x3087 = 46;
int16_t x3392 = -209;
uint8_t x3403 = 1U;
volatile uint8_t x3495 = 0U;
volatile uint16_t x3604 = 1553U;
int64_t t74 = -570183862083692194LL;
volatile uint32_t x3677 = 443764U;
static volatile int8_t x3679 = 17;
uint32_t t76 = 4031687U;
uint64_t x3708 = 538310178964209LLU;
static int64_t t79 = -474149387154333858LL;
static uint64_t t83 = 154799231155690LLU;
uint16_t x4109 = 11U;
int64_t t85 = -397531018984LL;
int64_t x4294 = 946131LL;
volatile int64_t x4518 = 31931LL;
static uint32_t x4542 = 216084093U;
volatile int16_t x4544 = -212;
int64_t x4573 = -7936LL;
uint8_t x4576 = UINT8_MAX;
int64_t t94 = -28199767LL;
uint32_t x4685 = 29984423U;
volatile uint32_t x4979 = 30U;
volatile int32_t t97 = -1030270;
uint64_t x5012 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = 684533U;
	uint64_t x2 = UINT64_MAX;
	static uint16_t x3 = 31U;
	uint64_t t0 = 241528LLU;

	t0 = ((x1|(x2>>x3))^x4);

	if (t0 != 18446744065119649791LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x30 = 186110443365372390LLU;
	volatile int16_t x31 = 3;
	uint8_t x32 = 54U;

	t1 = ((x29|(x30>>x31))^x32);

	if (t1 != 23263805420671498LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x61 = 1115U;
	uint64_t x62 = 414360013LLU;
	int8_t x63 = 0;
	int8_t x64 = -1;
	volatile uint64_t t2 = 2982471757229100902LLU;

	t2 = ((x61|(x62>>x63))^x64);

	if (t2 != 18446744073295190560LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	uint64_t t3 = 316552LLU;

	t3 = ((x101|(x102>>x103))^x104);

	if (t3 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x109 = 29112U;
	int32_t x110 = 3409;
	uint8_t x111 = 2U;
	int64_t x112 = INT64_MIN;
	int64_t t4 = -1737LL;

	t4 = ((x109|(x110>>x111))^x112);

	if (t4 != -9223372036854746116LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x113 = 40U;
	int8_t x115 = 17;
	static volatile uint64_t t5 = 2450999644438378112LLU;

	t5 = ((x113|(x114>>x115))^x116);

	if (t5 != 18446744073644781335LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x129 = INT32_MAX;
	volatile int16_t x130 = INT16_MAX;
	uint32_t x131 = 2U;
	int64_t x132 = INT64_MIN;
	int64_t t6 = 4093127185LL;

	t6 = ((x129|(x130>>x131))^x132);

	if (t6 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x186 = INT32_MAX;
	static int32_t x187 = 1;
	uint64_t x188 = 2190821727LLU;
	uint64_t t7 = 99LLU;

	t7 = ((x185|(x186>>x187))^x188);

	if (t7 != 3177887392LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x209 = 8578U;
	int64_t x210 = 113378793500172856LL;
	static uint64_t x211 = 59LLU;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t8 = 1196496365387657LL;

	t8 = ((x209|(x210>>x211))^x212);

	if (t8 != 8573LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x249 = -1;
	int16_t x250 = INT16_MAX;

	t9 = ((x249|(x250>>x251))^x252);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MAX;
	uint8_t x327 = 31U;
	uint8_t x328 = 93U;
	volatile int32_t t10 = -204;

	t10 = ((x325|(x326>>x327))^x328);

	if (t10 != -35) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x329 = -1LL;
	uint8_t x330 = 0U;

	t11 = ((x329|(x330>>x331))^x332);

	if (t11 != -16058LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x477 = 13;
	volatile uint8_t x478 = 2U;
	int8_t x479 = 0;
	uint32_t x480 = 64U;
	uint32_t t12 = 47253U;

	t12 = ((x477|(x478>>x479))^x480);

	if (t12 != 79U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x657 = -1;
	int8_t x658 = 1;
	volatile uint32_t x659 = 2U;

	t13 = ((x657|(x658>>x659))^x660);

	if (t13 != 16716546761649490633LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x731 = 35;
	int16_t x732 = -1;
	static uint64_t t14 = 230534696844547350LLU;

	t14 = ((x729|(x730>>x731))^x732);

	if (t14 != 9223372036806081373LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x737 = INT64_MAX;
	volatile int8_t x738 = 0;
	volatile int32_t x739 = 0;
	int64_t t15 = 56598710999188468LL;

	t15 = ((x737|(x738>>x739))^x740);

	if (t15 != 9223372036854775720LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x837 = UINT16_MAX;
	static int16_t x839 = 12;
	int32_t x840 = INT32_MIN;
	static volatile int64_t t16 = -865699771964LL;

	t16 = ((x837|(x838>>x839))^x840);

	if (t16 != -2147418113LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x881 = 1;
	int8_t x882 = 54;
	uint8_t x883 = 7U;
	static int16_t x884 = 2036;
	volatile int32_t t17 = 498581575;

	t17 = ((x881|(x882>>x883))^x884);

	if (t17 != 2037) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x909 = INT64_MIN;
	int8_t x911 = 1;
	int8_t x912 = INT8_MIN;
	volatile uint64_t t18 = 33365753LLU;

	t18 = ((x909|(x910>>x911))^x912);

	if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x929 = -1;
	int32_t x930 = 907;
	static uint16_t x931 = 9U;
	uint32_t x932 = UINT32_MAX;
	volatile uint32_t t19 = 2454834U;

	t19 = ((x929|(x930>>x931))^x932);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x933 = 140192299;
	static int16_t x934 = INT16_MAX;
	static int32_t x936 = INT32_MIN;
	volatile int32_t t20 = -60;

	t20 = ((x933|(x934>>x935))^x936);

	if (t20 != -2007269377) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x989 = INT64_MIN;
	int8_t x991 = 0;
	uint8_t x992 = 1U;
	volatile int64_t t21 = -50316273705793LL;

	t21 = ((x989|(x990>>x991))^x992);

	if (t21 != -9223372036854772793LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1061 = UINT32_MAX;
	uint32_t x1062 = UINT32_MAX;
	uint64_t x1064 = UINT64_MAX;
	static uint64_t t22 = 12170232864274860LLU;

	t22 = ((x1061|(x1062>>x1063))^x1064);

	if (t22 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x1089 = -4;
	int16_t x1090 = INT16_MAX;
	uint16_t x1092 = UINT16_MAX;
	int32_t t23 = -1;

	t23 = ((x1089|(x1090>>x1091))^x1092);

	if (t23 != -65536) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1097 = -580428282LL;
	int64_t x1098 = 1904490LL;
	int8_t x1099 = 4;
	int64_t t24 = 2565LL;

	t24 = ((x1097|(x1098>>x1099))^x1100);

	if (t24 != 580395273LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1169 = -1;
	uint32_t x1170 = 49U;
	int8_t x1171 = 1;
	int8_t x1172 = INT8_MIN;
	static uint32_t t25 = 178362U;

	t25 = ((x1169|(x1170>>x1171))^x1172);

	if (t25 != 127U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1193 = 5728;
	uint32_t x1194 = 45792U;
	int8_t x1195 = 0;
	int64_t x1196 = INT64_MIN;
	int64_t t26 = 84LL;

	t26 = ((x1193|(x1194>>x1195))^x1196);

	if (t26 != -9223372036854728992LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1241 = -1;
	uint16_t x1242 = UINT16_MAX;
	uint16_t x1243 = 1U;
	uint8_t x1244 = 25U;
	static volatile int32_t t27 = -59;

	t27 = ((x1241|(x1242>>x1243))^x1244);

	if (t27 != -26) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1261 = INT64_MIN;
	uint8_t x1263 = 30U;
	int64_t x1264 = 3559LL;
	volatile int64_t t28 = -762995113355862LL;

	t28 = ((x1261|(x1262>>x1263))^x1264);

	if (t28 != -9223372036854772249LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1277 = 33034989LLU;
	static int8_t x1278 = 11;
	int8_t x1279 = 1;
	uint32_t x1280 = 953708532U;
	volatile uint64_t t29 = 2LLU;

	t29 = ((x1277|(x1278>>x1279))^x1280);

	if (t29 != 958430489LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1302 = 319531U;
	uint16_t x1303 = 3U;
	int64_t x1304 = 1308903885607LL;
	static int64_t t30 = -272LL;

	t30 = ((x1301|(x1302>>x1303))^x1304);

	if (t30 != 1308878681304LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1341 = INT64_MIN;
	static uint16_t x1342 = UINT16_MAX;
	uint8_t x1343 = 9U;
	int8_t x1344 = -24;

	t31 = ((x1341|(x1342>>x1343))^x1344);

	if (t31 != 9223372036854775703LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1465 = 2261218011789732649LLU;
	uint8_t x1466 = 78U;
	int16_t x1468 = INT16_MIN;
	volatile uint64_t t32 = 973260361627709LLU;

	t32 = ((x1465|(x1466>>x1467))^x1468);

	if (t32 != 16185526061919808297LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1525 = INT8_MAX;
	uint8_t x1527 = 3U;
	uint64_t x1528 = 1792995974593251LLU;
	uint64_t t33 = 1LLU;

	t33 = ((x1525|(x1526>>x1527))^x1528);

	if (t33 != 1792995974593180LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1565 = 14LLU;
	int32_t x1566 = 7900370;
	uint32_t x1568 = 4U;
	uint64_t t34 = 1884LLU;

	t34 = ((x1565|(x1566>>x1567))^x1568);

	if (t34 != 246890LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1569 = -1;
	volatile uint64_t x1570 = 9905738563590279LLU;
	int8_t x1571 = 29;
	uint32_t x1572 = 11U;
	volatile uint64_t t35 = 55440LLU;

	t35 = ((x1569|(x1570>>x1571))^x1572);

	if (t35 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1621 = 412468631817655LL;
	volatile uint32_t x1622 = UINT32_MAX;
	uint8_t x1623 = 3U;
	static int8_t x1624 = 52;

	t36 = ((x1621|(x1622>>x1623))^x1624);

	if (t36 != 412468794884043LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1629 = INT64_MIN;
	uint8_t x1630 = UINT8_MAX;
	int16_t x1631 = 0;
	volatile int64_t t37 = 100530212716634LL;

	t37 = ((x1629|(x1630>>x1631))^x1632);

	if (t37 != -9223372036854775557LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1645 = INT32_MAX;
	static int16_t x1646 = 116;
	int8_t x1648 = 9;
	volatile int32_t t38 = -5;

	t38 = ((x1645|(x1646>>x1647))^x1648);

	if (t38 != 2147483638) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x1711 = 6U;
	uint64_t x1712 = 25353614831LLU;
	volatile uint64_t t39 = 29757818413946223LLU;

	t39 = ((x1709|(x1710>>x1711))^x1712);

	if (t39 != 25347131920LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1797 = UINT32_MAX;
	uint32_t x1798 = UINT32_MAX;
	volatile uint16_t x1799 = 2U;
	int32_t x1800 = -1;
	uint32_t t40 = 6885U;

	t40 = ((x1797|(x1798>>x1799))^x1800);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1826 = 136219555LLU;
	uint8_t x1827 = 18U;

	t41 = ((x1825|(x1826>>x1827))^x1828);

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1906 = 464264U;
	int8_t x1907 = 0;
	volatile uint32_t x1908 = 2U;
	uint32_t t42 = 1930U;

	t42 = ((x1905|(x1906>>x1907))^x1908);

	if (t42 != 4294965192U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1917 = INT32_MIN;
	uint32_t x1918 = 2U;
	volatile uint8_t x1919 = 1U;

	t43 = ((x1917|(x1918>>x1919))^x1920);

	if (t43 != 2147483650U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1945 = INT64_MIN;
	uint8_t x1946 = UINT8_MAX;
	uint8_t x1947 = 13U;
	volatile int32_t x1948 = -1;
	volatile int64_t t44 = INT64_MAX;

	t44 = ((x1945|(x1946>>x1947))^x1948);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2053 = 2072270U;
	int32_t x2054 = INT32_MAX;
	int16_t x2055 = 0;
	uint16_t x2056 = 123U;
	uint32_t t45 = 26365642U;

	t45 = ((x2053|(x2054>>x2055))^x2056);

	if (t45 != 2147483524U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2102 = 699U;
	volatile int32_t t46 = -1;

	t46 = ((x2101|(x2102>>x2103))^x2104);

	if (t46 != -401407) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x2125 = 2181466191069LLU;
	static int32_t x2128 = INT32_MAX;
	volatile uint64_t t47 = 204677853954862681LLU;

	t47 = ((x2125|(x2126>>x2127))^x2128);

	if (t47 != 2180073098018LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2193 = UINT8_MAX;
	static int16_t x2195 = 0;
	int64_t t48 = 6324969537LL;

	t48 = ((x2193|(x2194>>x2195))^x2196);

	if (t48 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2213 = INT16_MAX;
	int16_t x2214 = 1116;
	volatile int8_t x2215 = 1;
	volatile int16_t x2216 = INT16_MIN;
	int32_t t49 = -18435;

	t49 = ((x2213|(x2214>>x2215))^x2216);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2341 = 47558838U;
	volatile uint64_t x2342 = 8553LLU;
	uint64_t x2343 = 0LLU;
	static volatile uint64_t t50 = 1269989LLU;

	t50 = ((x2341|(x2342>>x2343))^x2344);

	if (t50 != 47548308LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2369 = 6;
	uint64_t x2370 = 225LLU;
	uint8_t x2371 = 29U;
	uint64_t x2372 = 3LLU;
	uint64_t t51 = 49LLU;

	t51 = ((x2369|(x2370>>x2371))^x2372);

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2405 = INT16_MIN;
	static uint64_t x2406 = 1679LLU;
	uint8_t x2407 = 0U;
	static int32_t x2408 = INT32_MIN;
	static volatile uint64_t t52 = 1305801210665LLU;

	t52 = ((x2405|(x2406>>x2407))^x2408);

	if (t52 != 2147452559LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2541 = -64;
	static uint64_t x2542 = 4160130058565536LLU;
	uint16_t x2543 = 9U;
	int8_t x2544 = INT8_MIN;
	static volatile uint64_t t53 = 19959332256111LLU;

	t53 = ((x2541|(x2542>>x2543))^x2544);

	if (t53 != 91LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2545 = 28867LLU;
	uint64_t x2546 = UINT64_MAX;
	static uint8_t x2547 = 1U;
	volatile int64_t x2548 = -723809204860936LL;
	uint64_t t54 = 56470689549692607LLU;

	t54 = ((x2545|(x2546>>x2547))^x2548);

	if (t54 != 9224095846059636743LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2553 = INT32_MAX;
	int64_t x2554 = INT64_MAX;
	uint8_t x2555 = 6U;
	int8_t x2556 = INT8_MAX;

	t55 = ((x2553|(x2554>>x2555))^x2556);

	if (t55 != 144115188075855744LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2685 = INT16_MAX;
	uint32_t x2686 = 635U;
	uint8_t x2687 = 18U;
	int32_t x2688 = -1;

	t56 = ((x2685|(x2686>>x2687))^x2688);

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2709 = INT32_MAX;
	uint64_t x2710 = UINT64_MAX;
	uint16_t x2711 = 0U;
	int64_t x2712 = INT64_MAX;

	t57 = ((x2709|(x2710>>x2711))^x2712);

	if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2785 = INT32_MIN;
	uint64_t x2786 = 25280997932780LLU;
	int8_t x2787 = 4;
	uint32_t x2788 = 2582260U;
	volatile uint64_t t58 = 3479012697384361LLU;

	t58 = ((x2785|(x2786>>x2787))^x2788);

	if (t58 != 18446744073225702682LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2793 = INT32_MIN;
	int32_t x2794 = INT32_MAX;
	int64_t x2795 = 0LL;
	int32_t x2796 = -310921;
	volatile int32_t t59 = 497408;

	t59 = ((x2793|(x2794>>x2795))^x2796);

	if (t59 != 310920) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2809 = 1;
	uint64_t x2810 = 60LLU;
	int16_t x2811 = 4;
	uint8_t x2812 = 0U;
	volatile uint64_t t60 = 1230422254299540668LLU;

	t60 = ((x2809|(x2810>>x2811))^x2812);

	if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2853 = UINT64_MAX;
	int16_t x2854 = INT16_MAX;
	uint64_t t61 = 60294LLU;

	t61 = ((x2853|(x2854>>x2855))^x2856);

	if (t61 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2957 = -14;
	uint16_t x2958 = 1U;
	static uint32_t x2959 = 0U;
	uint16_t x2960 = 1553U;

	t62 = ((x2957|(x2958>>x2959))^x2960);

	if (t62 != -1566) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2969 = -1;
	int64_t x2970 = INT64_MAX;
	uint8_t x2971 = 7U;
	int8_t x2972 = -14;
	int64_t t63 = 57979976099732144LL;

	t63 = ((x2969|(x2970>>x2971))^x2972);

	if (t63 != 13LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3057 = -1;
	int8_t x3059 = 15;
	uint8_t x3060 = UINT8_MAX;

	t64 = ((x3057|(x3058>>x3059))^x3060);

	if (t64 != 4294967040U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3085 = UINT64_MAX;
	int64_t x3086 = INT64_MAX;
	static int16_t x3088 = -6046;
	volatile uint64_t t65 = 132136342LLU;

	t65 = ((x3085|(x3086>>x3087))^x3088);

	if (t65 != 6045LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3125 = UINT32_MAX;
	uint32_t x3126 = UINT32_MAX;
	static int8_t x3127 = 0;
	int64_t x3128 = INT64_MIN;
	static int64_t t66 = -431750467LL;

	t66 = ((x3125|(x3126>>x3127))^x3128);

	if (t66 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3205 = 1186100U;
	int8_t x3206 = INT8_MAX;
	uint32_t x3207 = 1U;
	int8_t x3208 = INT8_MIN;
	static uint32_t t67 = 1209809504U;

	t67 = ((x3205|(x3206>>x3207))^x3208);

	if (t67 != 4293781183U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3269 = -1;
	static uint64_t x3270 = 1245981675829882026LLU;
	uint8_t x3271 = 0U;
	uint16_t x3272 = 12U;
	static volatile uint64_t t68 = 6764733603717966549LLU;

	t68 = ((x3269|(x3270>>x3271))^x3272);

	if (t68 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3321 = -6;
	volatile uint32_t x3322 = UINT32_MAX;
	int16_t x3323 = 1;
	volatile int64_t x3324 = 14549LL;
	static int64_t t69 = -111LL;

	t69 = ((x3321|(x3322>>x3323))^x3324);

	if (t69 != 4294952746LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3337 = 4683U;
	int32_t x3338 = INT32_MAX;
	uint8_t x3339 = 0U;
	int8_t x3340 = INT8_MAX;
	uint32_t t70 = 47196788U;

	t70 = ((x3337|(x3338>>x3339))^x3340);

	if (t70 != 2147483520U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3389 = INT16_MIN;
	int8_t x3390 = 3;
	static int8_t x3391 = 1;
	int32_t t71 = 30;

	t71 = ((x3389|(x3390>>x3391))^x3392);

	if (t71 != 32558) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3401 = UINT32_MAX;
	static int32_t x3402 = 1143631;
	static int8_t x3404 = INT8_MAX;
	static uint32_t t72 = 1997399U;

	t72 = ((x3401|(x3402>>x3403))^x3404);

	if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x3493 = INT64_MIN;
	static int32_t x3494 = 6725;
	int8_t x3496 = -1;
	int64_t t73 = 4596529LL;

	t73 = ((x3493|(x3494>>x3495))^x3496);

	if (t73 != 9223372036854769082LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3601 = INT64_MIN;
	int16_t x3602 = 5366;
	static int16_t x3603 = 13;

	t74 = ((x3601|(x3602>>x3603))^x3604);

	if (t74 != -9223372036854774255LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3621 = UINT32_MAX;
	uint16_t x3622 = UINT16_MAX;
	volatile int16_t x3623 = 30;
	volatile int32_t x3624 = -1;
	volatile uint32_t t75 = 1U;

	t75 = ((x3621|(x3622>>x3623))^x3624);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x3678 = 798052009;
	static uint32_t x3680 = 1U;

	t76 = ((x3677|(x3678>>x3679))^x3680);

	if (t76 != 448509U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3705 = INT8_MAX;
	static int16_t x3706 = INT16_MAX;
	int16_t x3707 = 4;
	uint64_t t77 = 477882858581209LLU;

	t77 = ((x3705|(x3706>>x3707))^x3708);

	if (t77 != 538310178964750LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3781 = INT64_MIN;
	uint8_t x3782 = UINT8_MAX;
	int8_t x3783 = 1;
	int8_t x3784 = -3;
	int64_t t78 = 701575878676869LL;

	t78 = ((x3781|(x3782>>x3783))^x3784);

	if (t78 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x3945 = -1LL;
	uint16_t x3946 = 1377U;
	volatile uint16_t x3947 = 10U;
	static volatile int32_t x3948 = -102264000;

	t79 = ((x3945|(x3946>>x3947))^x3948);

	if (t79 != 102263999LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x3977 = INT64_MAX;
	static int8_t x3978 = 0;
	int16_t x3979 = 4;
	static int8_t x3980 = INT8_MIN;
	int64_t t80 = 132074719632335666LL;

	t80 = ((x3977|(x3978>>x3979))^x3980);

	if (t80 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3993 = 0LLU;
	volatile uint32_t x3994 = 8U;
	uint32_t x3995 = 0U;
	static uint16_t x3996 = 97U;
	volatile uint64_t t81 = 67034379215350650LLU;

	t81 = ((x3993|(x3994>>x3995))^x3996);

	if (t81 != 105LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x4013 = UINT16_MAX;
	uint8_t x4014 = 106U;
	static int32_t x4015 = 23;
	uint16_t x4016 = 11U;
	volatile int32_t t82 = 0;

	t82 = ((x4013|(x4014>>x4015))^x4016);

	if (t82 != 65524) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x4097 = 262302716LL;
	uint64_t x4098 = 2380632658964367LLU;
	int8_t x4099 = 1;
	int32_t x4100 = INT32_MIN;

	t83 = ((x4097|(x4098>>x4099))^x4100);

	if (t83 != 18445553756272558079LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4110 = INT8_MAX;
	uint8_t x4111 = 6U;
	int32_t x4112 = 128;
	int32_t t84 = 1;

	t84 = ((x4109|(x4110>>x4111))^x4112);

	if (t84 != 139) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x4173 = INT64_MIN;
	uint8_t x4174 = 1U;
	static volatile int8_t x4175 = 0;
	int8_t x4176 = INT8_MIN;

	t85 = ((x4173|(x4174>>x4175))^x4176);

	if (t85 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4213 = -3;
	volatile uint64_t x4214 = 6342715593755764437LLU;
	volatile uint8_t x4215 = 1U;
	uint64_t x4216 = 20070799LLU;
	volatile uint64_t t86 = 628101139925616LLU;

	t86 = ((x4213|(x4214>>x4215))^x4216);

	if (t86 != 18446744073689480816LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4293 = -9739201963937567LL;
	volatile uint8_t x4295 = 9U;
	volatile int64_t x4296 = -1LL;
	int64_t t87 = 150538436LL;

	t87 = ((x4293|(x4294>>x4295))^x4296);

	if (t87 != 9739201963935752LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x4369 = UINT8_MAX;
	static uint32_t x4370 = 1U;
	static uint32_t x4371 = 10U;
	static int64_t x4372 = INT64_MIN;
	int64_t t88 = 315LL;

	t88 = ((x4369|(x4370>>x4371))^x4372);

	if (t88 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4417 = 192713983263277835LL;
	int16_t x4418 = 7;
	uint32_t x4419 = 1U;
	volatile int32_t x4420 = INT32_MIN;
	volatile int64_t t89 = -3183948902LL;

	t89 = ((x4417|(x4418>>x4419))^x4420);

	if (t89 != -192713983140527349LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x4465 = INT8_MIN;
	uint64_t x4466 = UINT64_MAX;
	int16_t x4467 = 3;
	uint32_t x4468 = UINT32_MAX;
	uint64_t t90 = 39722153581315726LLU;

	t90 = ((x4465|(x4466>>x4467))^x4468);

	if (t90 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x4493 = -46847;
	static uint16_t x4494 = UINT16_MAX;
	int16_t x4495 = 5;
	int16_t x4496 = INT16_MIN;
	int32_t t91 = -417864036;

	t91 = ((x4493|(x4494>>x4495))^x4496);

	if (t91 != 53247) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4517 = INT16_MAX;
	uint8_t x4519 = 7U;
	volatile uint8_t x4520 = 1U;
	static volatile int64_t t92 = -4002LL;

	t92 = ((x4517|(x4518>>x4519))^x4520);

	if (t92 != 32766LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4541 = 4U;
	volatile int16_t x4543 = 6;
	static uint32_t t93 = 10U;

	t93 = ((x4541|(x4542>>x4543))^x4544);

	if (t93 != 4291591057U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4574 = 949651173;
	static int8_t x4575 = 1;

	t94 = ((x4573|(x4574>>x4575))^x4576);

	if (t94 != -7283LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4686 = UINT16_MAX;
	volatile uint16_t x4687 = 1U;
	static uint64_t x4688 = 28294323LLU;
	static volatile uint64_t t95 = 3LLU;

	t95 = ((x4685|(x4686>>x4687))^x4688);

	if (t95 != 6701900LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x4761 = 17688579353234156LLU;
	uint8_t x4762 = UINT8_MAX;
	int32_t x4763 = 7;
	int32_t x4764 = 9;
	volatile uint64_t t96 = 183494822LLU;

	t96 = ((x4761|(x4762>>x4763))^x4764);

	if (t96 != 17688579353234148LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x4977 = 13;
	volatile uint16_t x4978 = 10U;
	uint16_t x4980 = 1603U;

	t97 = ((x4977|(x4978>>x4979))^x4980);

	if (t97 != 1614) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5009 = INT8_MIN;
	volatile int8_t x5010 = 42;
	static uint32_t x5011 = 0U;
	static uint64_t t98 = 16428114514LLU;

	t98 = ((x5009|(x5010>>x5011))^x5012);

	if (t98 != 85LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5033 = -11838;
	uint32_t x5034 = UINT32_MAX;
	uint8_t x5035 = 7U;
	int64_t x5036 = 749LL;
	volatile int64_t t99 = 671859122LL;

	t99 = ((x5033|(x5034>>x5035))^x5036);

	if (t99 != 4294966546LL) { NG(); } else { ; }
	
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

