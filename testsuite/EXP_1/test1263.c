#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x80 = 11U;
uint32_t x109 = UINT32_MAX;
int16_t x114 = INT16_MAX;
uint8_t x115 = 5U;
int32_t x124 = -1806;
static volatile int16_t x137 = 163;
volatile uint16_t x139 = 0U;
uint64_t x172 = 60497693176LLU;
uint8_t x179 = 7U;
int16_t x248 = -3;
volatile uint16_t x282 = UINT16_MAX;
int32_t x298 = INT32_MIN;
int32_t x304 = INT32_MAX;
volatile uint8_t x308 = 4U;
int32_t x318 = INT32_MAX;
int32_t x320 = -4;
volatile int32_t t16 = -3948;
static volatile int64_t t18 = -2LL;
int8_t x401 = 0;
int16_t x487 = 4;
volatile uint32_t x539 = 4U;
static uint32_t x617 = UINT32_MAX;
volatile int32_t t25 = 37;
int8_t x715 = 4;
int16_t x732 = -235;
volatile int8_t x753 = -17;
static volatile int64_t x754 = -11334985375LL;
static int8_t x756 = -10;
volatile int32_t t28 = 31160885;
static int16_t x823 = 1;
int16_t x824 = -1;
volatile int32_t t29 = -273;
volatile uint8_t x879 = 7U;
int32_t x880 = 7637;
int16_t x915 = 18;
int32_t x952 = -1;
volatile int32_t t33 = 1884749;
uint16_t x965 = 7U;
volatile int16_t x968 = 0;
volatile int32_t t34 = -1;
static int8_t x978 = -54;
int8_t x979 = 7;
static uint64_t x1073 = 6989433393353504619LLU;
int16_t x1075 = 9;
static volatile uint8_t x1076 = 1U;
uint8_t x1091 = 2U;
static volatile int32_t x1173 = INT32_MAX;
volatile uint8_t x1228 = 10U;
volatile int32_t t44 = -136323;
int64_t x1261 = -1LL;
static uint8_t x1264 = 17U;
int8_t x1319 = 8;
uint8_t x1325 = 120U;
uint8_t x1327 = 19U;
uint64_t x1341 = 4728119087641LLU;
int32_t t48 = 102;
volatile uint32_t x1467 = 8U;
static volatile int32_t t49 = 3;
int8_t x1471 = 1;
int16_t x1480 = -1;
volatile int32_t t51 = 30;
int8_t x1648 = 15;
static int16_t x1742 = INT16_MAX;
uint16_t x1743 = 0U;
int32_t t55 = 154;
static volatile int32_t x1828 = -13;
int8_t x1841 = INT8_MAX;
uint64_t x1843 = 19LLU;
uint16_t x1865 = UINT16_MAX;
int8_t x1911 = 4;
uint64_t x1944 = UINT64_MAX;
int32_t x1966 = -4;
int64_t x2022 = INT64_MIN;
int32_t x2024 = INT32_MAX;
int64_t x2029 = 4587LL;
volatile int16_t x2122 = INT16_MIN;
uint32_t x2125 = 13821596U;
volatile uint64_t x2220 = 19807LLU;
static int8_t x2261 = INT8_MIN;
static volatile uint8_t x2262 = 9U;
volatile int32_t t74 = 331;
volatile int64_t x2338 = 5671249376LL;
int8_t x2340 = -12;
volatile int8_t x2341 = INT8_MIN;
volatile int64_t t78 = -2811995981483LL;
uint16_t x2361 = UINT16_MAX;
uint16_t x2505 = 3U;
int32_t t81 = -156271;
int32_t x2529 = INT32_MIN;
static int64_t x2537 = -925905985LL;
uint16_t x2539 = 15U;
int32_t t83 = 12093731;
static uint32_t x2541 = UINT32_MAX;
static int32_t t84 = -9;
volatile int32_t x2589 = -1;
static int16_t x2590 = INT16_MAX;
int8_t x2645 = INT8_MIN;
static uint64_t x2647 = 3LLU;
static int32_t x2648 = INT32_MAX;
uint8_t x2693 = UINT8_MAX;
int8_t x2709 = INT8_MIN;
int16_t x2712 = INT16_MIN;
uint32_t x2737 = 2U;
int32_t t90 = 4496148;
volatile uint8_t x2763 = 3U;
volatile uint16_t x2924 = UINT16_MAX;
volatile int32_t t95 = -164;
int32_t t96 = -3676838;
int32_t t98 = -724;
int8_t x3244 = -1;


void f0(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int8_t x23 = 0;
	int8_t x24 = INT8_MIN;
	int32_t t0 = -398623724;

	t0 = (((x21==x22)>>x23)-x24);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x77 = UINT16_MAX;
	uint64_t x78 = 6704334556LLU;
	int8_t x79 = 0;
	int32_t t1 = 0;

	t1 = (((x77==x78)>>x79)-x80);

	if (t1 != -11) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x110 = INT16_MIN;
	int16_t x111 = 1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t2 = 1246527;

	t2 = (((x109==x110)>>x111)-x112);

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x113 = -2;
	volatile uint8_t x116 = UINT8_MAX;
	volatile int32_t t3 = 0;

	t3 = (((x113==x114)>>x115)-x116);

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x117 = -1419678;
	int8_t x118 = INT8_MIN;
	static uint8_t x119 = 5U;
	uint64_t x120 = 3076273967LLU;
	static uint64_t t4 = 40LLU;

	t4 = (((x117==x118)>>x119)-x120);

	if (t4 != 18446744070633277649LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x121 = 0U;
	static int64_t x122 = INT64_MIN;
	volatile uint16_t x123 = 8U;
	volatile int32_t t5 = 24261647;

	t5 = (((x121==x122)>>x123)-x124);

	if (t5 != 1806) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x138 = 106U;
	volatile int8_t x140 = -1;
	int32_t t6 = 3434;

	t6 = (((x137==x138)>>x139)-x140);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x169 = 14762U;
	static volatile int16_t x170 = -1;
	static int32_t x171 = 1;
	uint64_t t7 = 0LLU;

	t7 = (((x169==x170)>>x171)-x172);

	if (t7 != 18446744013211858440LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x177 = 61U;
	uint64_t x178 = 10462LLU;
	int64_t x180 = 2766667332190500191LL;
	static volatile int64_t t8 = 108LL;

	t8 = (((x177==x178)>>x179)-x180);

	if (t8 != -2766667332190500191LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x189 = -96876;
	volatile uint8_t x190 = 0U;
	int16_t x191 = 1;
	volatile int16_t x192 = -1;
	static volatile int32_t t9 = -1065326207;

	t9 = (((x189==x190)>>x191)-x192);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x245 = INT16_MIN;
	static volatile int32_t x246 = INT32_MIN;
	static int16_t x247 = 1;
	int32_t t10 = -10671766;

	t10 = (((x245==x246)>>x247)-x248);

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x281 = UINT16_MAX;
	volatile uint16_t x283 = 3U;
	int32_t x284 = -1;
	volatile int32_t t11 = 24;

	t11 = (((x281==x282)>>x283)-x284);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x293 = -54754;
	static uint16_t x294 = UINT16_MAX;
	volatile int32_t x295 = 0;
	uint32_t x296 = 207357123U;
	volatile uint32_t t12 = 12605074U;

	t12 = (((x293==x294)>>x295)-x296);

	if (t12 != 4087610173U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x297 = UINT64_MAX;
	uint16_t x299 = 7U;
	volatile int16_t x300 = INT16_MIN;
	int32_t t13 = 0;

	t13 = (((x297==x298)>>x299)-x300);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MAX;
	static uint8_t x303 = 4U;
	int32_t t14 = 4894670;

	t14 = (((x301==x302)>>x303)-x304);

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x305 = INT16_MAX;
	volatile int8_t x306 = 22;
	uint8_t x307 = 1U;
	volatile int32_t t15 = -15519963;

	t15 = (((x305==x306)>>x307)-x308);

	if (t15 != -4) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x317 = 1372392975U;
	volatile int16_t x319 = 24;

	t16 = (((x317==x318)>>x319)-x320);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x329 = -1;
	uint32_t x330 = 25865U;
	int8_t x331 = 1;
	volatile int8_t x332 = -1;
	volatile int32_t t17 = -285856;

	t17 = (((x329==x330)>>x331)-x332);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = UINT64_MAX;
	uint16_t x339 = 3U;
	volatile int64_t x340 = -1LL;

	t18 = (((x337==x338)>>x339)-x340);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x402 = -3;
	volatile int32_t x403 = 2;
	volatile int8_t x404 = 0;
	static int32_t t19 = -117344;

	t19 = (((x401==x402)>>x403)-x404);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x417 = 7025708293080LLU;
	int32_t x418 = INT32_MIN;
	volatile uint16_t x419 = 1U;
	uint32_t x420 = UINT32_MAX;
	uint32_t t20 = 8133943U;

	t20 = (((x417==x418)>>x419)-x420);

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x425 = INT32_MAX;
	int32_t x426 = 11368775;
	volatile int16_t x427 = 1;
	int64_t x428 = INT64_MAX;
	volatile int64_t t21 = 15164986384LL;

	t21 = (((x425==x426)>>x427)-x428);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x485 = 5U;
	int16_t x486 = 1079;
	volatile uint64_t x488 = 233929LLU;
	volatile uint64_t t22 = 60743407LLU;

	t22 = (((x485==x486)>>x487)-x488);

	if (t22 != 18446744073709317687LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x509 = INT64_MIN;
	uint32_t x510 = 62U;
	uint16_t x511 = 15U;
	volatile uint64_t x512 = 2873736418LLU;
	uint64_t t23 = 187LLU;

	t23 = (((x509==x510)>>x511)-x512);

	if (t23 != 18446744070835815198LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x537 = 124U;
	volatile int64_t x538 = INT64_MIN;
	uint16_t x540 = 5594U;
	volatile int32_t t24 = -8000;

	t24 = (((x537==x538)>>x539)-x540);

	if (t24 != -5594) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x618 = 43U;
	uint8_t x619 = 1U;
	volatile int8_t x620 = INT8_MIN;

	t25 = (((x617==x618)>>x619)-x620);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x713 = -1;
	static volatile int16_t x714 = -9;
	int8_t x716 = 12;
	static volatile int32_t t26 = 21;

	t26 = (((x713==x714)>>x715)-x716);

	if (t26 != -12) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x729 = INT16_MIN;
	volatile uint32_t x730 = 1127469U;
	uint8_t x731 = 6U;
	int32_t t27 = 25564;

	t27 = (((x729==x730)>>x731)-x732);

	if (t27 != 235) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x755 = 2U;

	t28 = (((x753==x754)>>x755)-x756);

	if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x821 = 2205;
	static int64_t x822 = INT64_MIN;

	t29 = (((x821==x822)>>x823)-x824);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x877 = INT16_MAX;
	int64_t x878 = INT64_MIN;
	int32_t t30 = -311715;

	t30 = (((x877==x878)>>x879)-x880);

	if (t30 != -7637) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x913 = -1;
	static volatile int32_t x914 = -1;
	static volatile int64_t x916 = INT64_MAX;
	int64_t t31 = -3LL;

	t31 = (((x913==x914)>>x915)-x916);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x933 = -1;
	volatile int16_t x934 = -1;
	uint32_t x935 = 3U;
	int8_t x936 = 43;
	volatile int32_t t32 = 967183;

	t32 = (((x933==x934)>>x935)-x936);

	if (t32 != -43) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x949 = -1;
	int8_t x950 = -1;
	volatile uint16_t x951 = 14U;

	t33 = (((x949==x950)>>x951)-x952);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x966 = -1;
	static uint8_t x967 = 1U;

	t34 = (((x965==x966)>>x967)-x968);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x977 = INT16_MIN;
	uint16_t x980 = 1U;
	static volatile int32_t t35 = -395913811;

	t35 = (((x977==x978)>>x979)-x980);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1045 = INT64_MIN;
	volatile int8_t x1046 = INT8_MIN;
	uint8_t x1047 = 9U;
	int16_t x1048 = -1;
	static volatile int32_t t36 = 7;

	t36 = (((x1045==x1046)>>x1047)-x1048);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1074 = UINT64_MAX;
	int32_t t37 = 31426;

	t37 = (((x1073==x1074)>>x1075)-x1076);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1089 = INT16_MIN;
	int16_t x1090 = INT16_MAX;
	uint64_t x1092 = 25986LLU;
	uint64_t t38 = 92776996551LLU;

	t38 = (((x1089==x1090)>>x1091)-x1092);

	if (t38 != 18446744073709525630LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1133 = UINT64_MAX;
	volatile uint16_t x1134 = 8994U;
	volatile uint8_t x1135 = 24U;
	static uint8_t x1136 = UINT8_MAX;
	int32_t t39 = 79953;

	t39 = (((x1133==x1134)>>x1135)-x1136);

	if (t39 != -255) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1141 = -3688;
	int8_t x1142 = INT8_MIN;
	uint16_t x1143 = 1U;
	uint32_t x1144 = 54830U;
	static volatile uint32_t t40 = 592U;

	t40 = (((x1141==x1142)>>x1143)-x1144);

	if (t40 != 4294912466U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1174 = 99426696162521LL;
	volatile uint8_t x1175 = 1U;
	int32_t x1176 = INT32_MAX;
	volatile int32_t t41 = 405;

	t41 = (((x1173==x1174)>>x1175)-x1176);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x1193 = 3U;
	static uint64_t x1194 = 291951813043314LLU;
	static volatile int8_t x1195 = 1;
	uint32_t x1196 = 126U;
	volatile uint32_t t42 = 2055199068U;

	t42 = (((x1193==x1194)>>x1195)-x1196);

	if (t42 != 4294967170U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1221 = INT16_MIN;
	int8_t x1222 = -1;
	static int8_t x1223 = 21;
	static int8_t x1224 = INT8_MIN;
	volatile int32_t t43 = -22227;

	t43 = (((x1221==x1222)>>x1223)-x1224);

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1225 = -1;
	static int32_t x1226 = -1;
	volatile int16_t x1227 = 0;

	t44 = (((x1225==x1226)>>x1227)-x1228);

	if (t44 != -9) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x1262 = 236615U;
	volatile uint32_t x1263 = 16U;
	volatile int32_t t45 = 1;

	t45 = (((x1261==x1262)>>x1263)-x1264);

	if (t45 != -17) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1317 = INT8_MAX;
	int16_t x1318 = INT16_MIN;
	int32_t x1320 = -1;
	volatile int32_t t46 = -108;

	t46 = (((x1317==x1318)>>x1319)-x1320);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1326 = INT8_MIN;
	int16_t x1328 = INT16_MIN;
	static volatile int32_t t47 = -152;

	t47 = (((x1325==x1326)>>x1327)-x1328);

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1342 = INT8_MIN;
	uint8_t x1343 = 30U;
	int32_t x1344 = -1;

	t48 = (((x1341==x1342)>>x1343)-x1344);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1465 = UINT32_MAX;
	volatile uint16_t x1466 = 87U;
	uint8_t x1468 = 103U;

	t49 = (((x1465==x1466)>>x1467)-x1468);

	if (t49 != -103) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x1469 = UINT16_MAX;
	int8_t x1470 = INT8_MAX;
	int8_t x1472 = INT8_MIN;
	volatile int32_t t50 = -22021;

	t50 = (((x1469==x1470)>>x1471)-x1472);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1477 = UINT8_MAX;
	uint32_t x1478 = 20U;
	int32_t x1479 = 0;

	t51 = (((x1477==x1478)>>x1479)-x1480);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1645 = INT8_MAX;
	int8_t x1646 = -1;
	uint8_t x1647 = 10U;
	volatile int32_t t52 = -96808432;

	t52 = (((x1645==x1646)>>x1647)-x1648);

	if (t52 != -15) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x1709 = 3640376U;
	uint32_t x1710 = UINT32_MAX;
	static int8_t x1711 = 1;
	int8_t x1712 = INT8_MIN;
	volatile int32_t t53 = -838;

	t53 = (((x1709==x1710)>>x1711)-x1712);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1741 = 3U;
	static int32_t x1744 = -8165;
	static volatile int32_t t54 = -6;

	t54 = (((x1741==x1742)>>x1743)-x1744);

	if (t54 != 8165) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1785 = 0;
	int32_t x1786 = -1;
	uint16_t x1787 = 25U;
	int8_t x1788 = -1;

	t55 = (((x1785==x1786)>>x1787)-x1788);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1825 = 14U;
	uint64_t x1826 = 1407716685929592180LLU;
	volatile uint8_t x1827 = 16U;
	static int32_t t56 = 5930381;

	t56 = (((x1825==x1826)>>x1827)-x1828);

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1842 = 388757U;
	int16_t x1844 = INT16_MIN;
	volatile int32_t t57 = -1;

	t57 = (((x1841==x1842)>>x1843)-x1844);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1866 = INT32_MAX;
	uint16_t x1867 = 6U;
	int32_t x1868 = 154130;
	volatile int32_t t58 = 6813;

	t58 = (((x1865==x1866)>>x1867)-x1868);

	if (t58 != -154130) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1889 = 0;
	int16_t x1890 = -1;
	int8_t x1891 = 8;
	int8_t x1892 = -35;
	volatile int32_t t59 = 340517;

	t59 = (((x1889==x1890)>>x1891)-x1892);

	if (t59 != 35) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1909 = -24;
	uint64_t x1910 = 7997888194754392LLU;
	static int32_t x1912 = -1;
	int32_t t60 = -98432897;

	t60 = (((x1909==x1910)>>x1911)-x1912);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1913 = INT8_MIN;
	volatile int16_t x1914 = INT16_MAX;
	int16_t x1915 = 2;
	static int16_t x1916 = INT16_MIN;
	volatile int32_t t61 = 238;

	t61 = (((x1913==x1914)>>x1915)-x1916);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1917 = 160883U;
	volatile uint8_t x1918 = 79U;
	int8_t x1919 = 1;
	uint16_t x1920 = 752U;
	volatile int32_t t62 = 678662;

	t62 = (((x1917==x1918)>>x1919)-x1920);

	if (t62 != -752) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1941 = -1;
	int64_t x1942 = -1LL;
	uint8_t x1943 = 3U;
	volatile uint64_t t63 = 33431944556305657LLU;

	t63 = (((x1941==x1942)>>x1943)-x1944);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1965 = 165;
	uint32_t x1967 = 1U;
	int64_t x1968 = 23764251019725LL;
	int64_t t64 = 919490732071LL;

	t64 = (((x1965==x1966)>>x1967)-x1968);

	if (t64 != -23764251019725LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x2021 = UINT8_MAX;
	uint8_t x2023 = 2U;
	int32_t t65 = 28;

	t65 = (((x2021==x2022)>>x2023)-x2024);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2030 = 86691U;
	volatile int8_t x2031 = 2;
	uint16_t x2032 = 120U;
	volatile int32_t t66 = -528217981;

	t66 = (((x2029==x2030)>>x2031)-x2032);

	if (t66 != -120) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2065 = INT8_MIN;
	volatile uint64_t x2066 = UINT64_MAX;
	uint8_t x2067 = 6U;
	int32_t x2068 = INT32_MAX;
	static int32_t t67 = 27;

	t67 = (((x2065==x2066)>>x2067)-x2068);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2121 = UINT64_MAX;
	static volatile int16_t x2123 = 1;
	volatile uint64_t x2124 = 104990179054622425LLU;
	volatile uint64_t t68 = 3737356790858117533LLU;

	t68 = (((x2121==x2122)>>x2123)-x2124);

	if (t68 != 18341753894654929191LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2126 = -17849;
	uint16_t x2127 = 1U;
	static uint64_t x2128 = 4221LLU;
	uint64_t t69 = 328933417LLU;

	t69 = (((x2125==x2126)>>x2127)-x2128);

	if (t69 != 18446744073709547395LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2157 = UINT32_MAX;
	volatile uint64_t x2158 = 3874054LLU;
	uint32_t x2159 = 1U;
	int8_t x2160 = -6;
	static int32_t t70 = -1935;

	t70 = (((x2157==x2158)>>x2159)-x2160);

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2169 = INT64_MAX;
	static int8_t x2170 = INT8_MIN;
	volatile uint8_t x2171 = 15U;
	int8_t x2172 = INT8_MIN;
	volatile int32_t t71 = 1834514;

	t71 = (((x2169==x2170)>>x2171)-x2172);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2217 = -1;
	volatile int32_t x2218 = -426351;
	static volatile uint16_t x2219 = 0U;
	static volatile uint64_t t72 = 3232319371268438232LLU;

	t72 = (((x2217==x2218)>>x2219)-x2220);

	if (t72 != 18446744073709531809LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2241 = -1;
	uint16_t x2242 = 355U;
	static uint64_t x2243 = 11LLU;
	int8_t x2244 = INT8_MIN;
	volatile int32_t t73 = 0;

	t73 = (((x2241==x2242)>>x2243)-x2244);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2263 = 12U;
	uint8_t x2264 = UINT8_MAX;

	t74 = (((x2261==x2262)>>x2263)-x2264);

	if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2269 = INT16_MAX;
	uint8_t x2270 = 0U;
	volatile uint16_t x2271 = 1U;
	uint8_t x2272 = UINT8_MAX;
	volatile int32_t t75 = -463792234;

	t75 = (((x2269==x2270)>>x2271)-x2272);

	if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x2281 = 521905LLU;
	int32_t x2282 = INT32_MAX;
	uint8_t x2283 = 0U;
	uint16_t x2284 = 1U;
	volatile int32_t t76 = 10561290;

	t76 = (((x2281==x2282)>>x2283)-x2284);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2337 = -1;
	uint8_t x2339 = 4U;
	static int32_t t77 = 1175620;

	t77 = (((x2337==x2338)>>x2339)-x2340);

	if (t77 != 12) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x2342 = -5;
	uint8_t x2343 = 0U;
	int64_t x2344 = INT64_MAX;

	t78 = (((x2341==x2342)>>x2343)-x2344);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2362 = INT16_MAX;
	uint16_t x2363 = 5U;
	uint32_t x2364 = 2888407U;
	uint32_t t79 = 0U;

	t79 = (((x2361==x2362)>>x2363)-x2364);

	if (t79 != 4292078889U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2497 = INT8_MAX;
	static int32_t x2498 = INT32_MIN;
	static uint8_t x2499 = 20U;
	int8_t x2500 = 3;
	int32_t t80 = -11975466;

	t80 = (((x2497==x2498)>>x2499)-x2500);

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2506 = INT32_MAX;
	volatile uint32_t x2507 = 15U;
	static int16_t x2508 = INT16_MIN;

	t81 = (((x2505==x2506)>>x2507)-x2508);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2530 = -1;
	uint8_t x2531 = 6U;
	int16_t x2532 = 27;
	volatile int32_t t82 = 1;

	t82 = (((x2529==x2530)>>x2531)-x2532);

	if (t82 != -27) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x2538 = INT32_MAX;
	int16_t x2540 = INT16_MIN;

	t83 = (((x2537==x2538)>>x2539)-x2540);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2542 = -2LL;
	int8_t x2543 = 1;
	int8_t x2544 = INT8_MIN;

	t84 = (((x2541==x2542)>>x2543)-x2544);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2591 = 14U;
	uint64_t x2592 = 245077180673197672LLU;
	uint64_t t85 = 4224850961396008353LLU;

	t85 = (((x2589==x2590)>>x2591)-x2592);

	if (t85 != 18201666893036353944LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2646 = INT32_MAX;
	volatile int32_t t86 = 4;

	t86 = (((x2645==x2646)>>x2647)-x2648);

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x2649 = INT16_MIN;
	uint32_t x2650 = 3936215U;
	uint16_t x2651 = 0U;
	static int64_t x2652 = INT64_MAX;
	int64_t t87 = 1052704339612085LL;

	t87 = (((x2649==x2650)>>x2651)-x2652);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2694 = INT16_MIN;
	int8_t x2695 = 18;
	int64_t x2696 = INT64_MAX;
	volatile int64_t t88 = -40089477797909466LL;

	t88 = (((x2693==x2694)>>x2695)-x2696);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2710 = INT16_MAX;
	uint8_t x2711 = 17U;
	volatile int32_t t89 = -164654388;

	t89 = (((x2709==x2710)>>x2711)-x2712);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2738 = 1878500480U;
	volatile int8_t x2739 = 7;
	int32_t x2740 = 387144;

	t90 = (((x2737==x2738)>>x2739)-x2740);

	if (t90 != -387144) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2761 = -1484;
	int64_t x2762 = 0LL;
	static volatile int32_t x2764 = -4;
	volatile int32_t t91 = -22;

	t91 = (((x2761==x2762)>>x2763)-x2764);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x2777 = 205LL;
	volatile uint32_t x2778 = UINT32_MAX;
	uint16_t x2779 = 27U;
	static int32_t x2780 = 7809119;
	int32_t t92 = 12790400;

	t92 = (((x2777==x2778)>>x2779)-x2780);

	if (t92 != -7809119) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x2921 = INT32_MIN;
	static volatile int64_t x2922 = INT64_MAX;
	static uint8_t x2923 = 21U;
	int32_t t93 = 175;

	t93 = (((x2921==x2922)>>x2923)-x2924);

	if (t93 != -65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2945 = 2822U;
	int8_t x2946 = 10;
	uint8_t x2947 = 18U;
	int16_t x2948 = INT16_MAX;
	static int32_t t94 = 6036256;

	t94 = (((x2945==x2946)>>x2947)-x2948);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x2977 = INT32_MIN;
	static int64_t x2978 = -129569794054295103LL;
	uint16_t x2979 = 1U;
	uint16_t x2980 = UINT16_MAX;

	t95 = (((x2977==x2978)>>x2979)-x2980);

	if (t95 != -65535) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2981 = INT32_MIN;
	int8_t x2982 = INT8_MAX;
	volatile uint8_t x2983 = 2U;
	volatile int32_t x2984 = 88821992;

	t96 = (((x2981==x2982)>>x2983)-x2984);

	if (t96 != -88821992) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2989 = INT64_MIN;
	int32_t x2990 = -1;
	volatile uint8_t x2991 = 0U;
	volatile int8_t x2992 = INT8_MIN;
	static volatile int32_t t97 = 716422735;

	t97 = (((x2989==x2990)>>x2991)-x2992);

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x3037 = INT64_MIN;
	static uint32_t x3038 = UINT32_MAX;
	uint16_t x3039 = 0U;
	volatile int16_t x3040 = INT16_MAX;

	t98 = (((x3037==x3038)>>x3039)-x3040);

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x3241 = -1LL;
	static volatile int64_t x3242 = INT64_MIN;
	uint16_t x3243 = 1U;
	volatile int32_t t99 = -3924045;

	t99 = (((x3241==x3242)>>x3243)-x3244);

	if (t99 != 1) { NG(); } else { ; }
	
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

