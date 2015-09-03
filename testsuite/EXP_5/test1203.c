#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x46 = -1;
int32_t x47 = INT32_MIN;
volatile uint64_t x69 = 998LLU;
volatile uint64_t t1 = 16283686583LLU;
uint32_t x73 = 20104818U;
int8_t x141 = 7;
int16_t x152 = -1;
static int64_t x173 = INT64_MAX;
volatile int16_t x176 = -1;
int64_t t8 = -2094739715LL;
volatile uint8_t x186 = 8U;
volatile int32_t x206 = INT32_MIN;
int32_t x236 = -1;
volatile uint64_t t12 = 505LLU;
uint32_t x252 = UINT32_MAX;
uint32_t t14 = 592U;
int8_t x285 = INT8_MAX;
int64_t x287 = INT64_MIN;
uint64_t x295 = 59755673589LLU;
volatile uint32_t x463 = 9748401U;
volatile int32_t x464 = -1;
volatile int16_t x527 = INT16_MIN;
volatile int32_t t21 = -22863871;
int32_t x541 = INT32_MAX;
int16_t x544 = -1;
int64_t x576 = -1LL;
static int64_t x651 = INT64_MIN;
uint32_t x654 = 43865490U;
int8_t x656 = -1;
uint32_t x664 = UINT32_MAX;
static int64_t x678 = -8681452LL;
int32_t x679 = -1;
uint32_t t27 = UINT32_MAX;
uint32_t t28 = 265070U;
int16_t x717 = 0;
int64_t x868 = -40LL;
int64_t x870 = -43271295LL;
volatile int32_t t31 = -3;
int32_t x895 = -1;
static volatile uint64_t x903 = UINT64_MAX;
static int64_t x1018 = -1LL;
int32_t t36 = 779017316;
static uint16_t x1065 = 30117U;
int8_t x1066 = INT8_MAX;
volatile int32_t t37 = 10421213;
uint8_t x1095 = 0U;
static int32_t t41 = -35869;
static int32_t x1141 = INT32_MAX;
int32_t x1143 = -24723724;
uint32_t x1146 = 7091735U;
uint64_t x1167 = 2893337641915949220LLU;
volatile uint32_t t45 = UINT32_MAX;
static int16_t x1169 = INT16_MAX;
int32_t t47 = -324;
static int32_t t48 = -17;
volatile int8_t x1269 = INT8_MAX;
volatile uint32_t x1429 = 1638817361U;
int64_t x1469 = INT64_MAX;
int16_t x1470 = INT16_MAX;
int32_t x1552 = -1;
int32_t x1566 = -1;
uint32_t x1567 = 413371U;
int16_t x1647 = INT16_MIN;
uint32_t x1695 = UINT32_MAX;
static uint16_t x1729 = 250U;
int32_t x1730 = 337;
volatile uint64_t x1732 = UINT64_MAX;
uint32_t x1738 = 59942456U;
static int32_t x1790 = INT32_MIN;
static volatile int32_t x1839 = INT32_MIN;
int32_t x1850 = INT32_MAX;
volatile int32_t t66 = -6162924;
int16_t x1911 = INT16_MIN;
int32_t x2067 = INT32_MIN;
uint64_t x2069 = UINT64_MAX;
static uint64_t t72 = 972660LLU;
static volatile uint32_t x2101 = UINT32_MAX;
static uint64_t x2185 = 6357922483LLU;
uint64_t x2218 = UINT64_MAX;
static volatile int32_t x2296 = 0;
volatile int32_t t76 = -9523;
uint8_t x2313 = 1U;
volatile int32_t t77 = 893275678;
uint32_t x2335 = 112U;
static uint64_t x2337 = 215849290551284091LLU;
uint32_t x2339 = 4U;
volatile uint32_t x2340 = UINT32_MAX;
int8_t x2394 = -35;
int8_t x2398 = -1;
int8_t x2498 = 48;
int64_t x2511 = INT64_MIN;
int32_t t88 = -27443;
int32_t x2663 = 50952407;
int32_t t89 = 22666772;
volatile int16_t x2761 = 432;
int16_t x2788 = -1;
static uint8_t x2790 = 26U;
int8_t x2792 = 0;
uint32_t t92 = 7193U;
static int16_t x2934 = -1;
int32_t x2939 = INT32_MIN;
uint64_t t95 = UINT64_MAX;
volatile uint32_t x3004 = UINT32_MAX;
int64_t x3061 = INT64_MAX;


void f0(void) {
	uint8_t x45 = 40U;
	int32_t x48 = -1;
	volatile int32_t t0 = -24;

	t0 = (x45>>((x46==x47)-x48));

	if (t0 != 20) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x70 = INT64_MAX;
	int64_t x71 = -1LL;
	uint64_t x72 = UINT64_MAX;

	t1 = (x69>>((x70==x71)-x72));

	if (t1 != 499LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x74 = 6;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -1;
	uint32_t t2 = 1499U;

	t2 = (x73>>((x74==x75)-x76));

	if (t2 != 10052409U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x105 = 4LLU;
	static volatile int32_t x106 = INT32_MIN;
	static int16_t x107 = 14;
	static int64_t x108 = -3LL;
	static volatile uint64_t t3 = 47107LLU;

	t3 = (x105>>((x106==x107)-x108));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x113 = INT32_MAX;
	volatile int8_t x114 = INT8_MIN;
	static int32_t x115 = INT32_MAX;
	int8_t x116 = -24;
	volatile int32_t t4 = -432312;

	t4 = (x113>>((x114==x115)-x116));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x142 = UINT16_MAX;
	static uint16_t x143 = 2978U;
	static int8_t x144 = -1;
	int32_t t5 = 163853;

	t5 = (x141>>((x142==x143)-x144));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x145 = INT64_MAX;
	int8_t x146 = 0;
	int64_t x147 = INT64_MIN;
	int16_t x148 = -3;
	int64_t t6 = 32509012169666420LL;

	t6 = (x145>>((x146==x147)-x148));

	if (t6 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = -528;
	int8_t x151 = INT8_MIN;
	static int64_t t7 = -35LL;

	t7 = (x149>>((x150==x151)-x152));

	if (t7 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x174 = 15979U;
	static int16_t x175 = INT16_MIN;

	t8 = (x173>>((x174==x175)-x176));

	if (t8 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x185 = INT16_MAX;
	int8_t x187 = INT8_MAX;
	int16_t x188 = -1;
	volatile int32_t t9 = -24813833;

	t9 = (x185>>((x186==x187)-x188));

	if (t9 != 16383) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x193 = 3U;
	static int16_t x194 = 1377;
	int32_t x195 = INT32_MIN;
	int32_t x196 = -1;
	static volatile int32_t t10 = -641691177;

	t10 = (x193>>((x194==x195)-x196));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x205 = 13U;
	int64_t x207 = INT64_MIN;
	int8_t x208 = -9;
	volatile int32_t t11 = 60715199;

	t11 = (x205>>((x206==x207)-x208));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x233 = 54836LLU;
	static int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MIN;

	t12 = (x233>>((x234==x235)-x236));

	if (t12 != 27418LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x249 = 22616U;
	int64_t x250 = -1LL;
	int8_t x251 = 38;
	int32_t t13 = 14748092;

	t13 = (x249>>((x250==x251)-x252));

	if (t13 != 11308) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x253 = 468246U;
	int32_t x254 = -1;
	uint64_t x255 = 2092409505LLU;
	int32_t x256 = -1;

	t14 = (x253>>((x254==x255)-x256));

	if (t14 != 234123U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x261 = 217;
	uint16_t x262 = 19084U;
	static int64_t x263 = -1LL;
	int8_t x264 = -1;
	int32_t t15 = -62;

	t15 = (x261>>((x262==x263)-x264));

	if (t15 != 108) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x277 = 104808522497765LL;
	uint16_t x278 = 22905U;
	uint32_t x279 = 528U;
	int8_t x280 = -26;
	volatile int64_t t16 = -578317LL;

	t16 = (x277>>((x278==x279)-x280));

	if (t16 != 1561768LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x286 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t17 = -827216;

	t17 = (x285>>((x286==x287)-x288));

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x293 = INT64_MAX;
	static int64_t x294 = -1LL;
	int16_t x296 = -3;
	volatile int64_t t18 = 1597124671581726634LL;

	t18 = (x293>>((x294==x295)-x296));

	if (t18 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x461 = 351653146U;
	volatile int8_t x462 = INT8_MIN;
	uint32_t t19 = 0U;

	t19 = (x461>>((x462==x463)-x464));

	if (t19 != 175826573U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x513 = 5540U;
	int64_t x514 = INT64_MIN;
	uint16_t x515 = 997U;
	volatile int8_t x516 = -9;
	volatile int32_t t20 = -6012;

	t20 = (x513>>((x514==x515)-x516));

	if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x525 = 6U;
	static int64_t x526 = INT64_MIN;
	static uint32_t x528 = UINT32_MAX;

	t21 = (x525>>((x526==x527)-x528));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x542 = UINT32_MAX;
	volatile int16_t x543 = INT16_MIN;
	int32_t t22 = 6584747;

	t22 = (x541>>((x542==x543)-x544));

	if (t22 != 1073741823) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x573 = 3216U;
	int16_t x574 = INT16_MIN;
	static volatile uint16_t x575 = 792U;
	static volatile int32_t t23 = -22202;

	t23 = (x573>>((x574==x575)-x576));

	if (t23 != 1608) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x649 = UINT64_MAX;
	volatile int64_t x650 = 50LL;
	int64_t x652 = -1LL;
	volatile uint64_t t24 = 1583303LLU;

	t24 = (x649>>((x650==x651)-x652));

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x653 = INT32_MAX;
	int8_t x655 = -1;
	volatile int32_t t25 = -2713388;

	t25 = (x653>>((x654==x655)-x656));

	if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x661 = 11U;
	uint64_t x662 = 112LLU;
	int16_t x663 = 542;
	static int32_t t26 = 193263;

	t26 = (x661>>((x662==x663)-x664));

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x677 = UINT32_MAX;
	static uint8_t x680 = 0U;

	t27 = (x677>>((x678==x679)-x680));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x681 = 124930863U;
	uint8_t x682 = 1U;
	static uint16_t x683 = UINT16_MAX;
	int64_t x684 = -1LL;

	t28 = (x681>>((x682==x683)-x684));

	if (t28 != 62465431U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x718 = 154440LL;
	volatile int64_t x719 = -1LL;
	int64_t x720 = -1LL;
	int32_t t29 = 183493;

	t29 = (x717>>((x718==x719)-x720));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x865 = 915558767LLU;
	volatile int64_t x866 = INT64_MAX;
	static int8_t x867 = INT8_MIN;
	uint64_t t30 = 2LLU;

	t30 = (x865>>((x866==x867)-x868));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x869 = INT16_MAX;
	int64_t x871 = INT64_MAX;
	volatile uint32_t x872 = UINT32_MAX;

	t31 = (x869>>((x870==x871)-x872));

	if (t31 != 16383) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x885 = UINT64_MAX;
	static int8_t x886 = -3;
	int16_t x887 = -1;
	static int16_t x888 = -52;
	static uint64_t t32 = 3810066585LLU;

	t32 = (x885>>((x886==x887)-x888));

	if (t32 != 4095LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x893 = 3;
	static int64_t x894 = INT64_MIN;
	uint64_t x896 = UINT64_MAX;
	int32_t t33 = -1205621;

	t33 = (x893>>((x894==x895)-x896));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x901 = 5644390502LLU;
	int8_t x902 = INT8_MIN;
	int32_t x904 = -1;
	volatile uint64_t t34 = 1300080615056LLU;

	t34 = (x901>>((x902==x903)-x904));

	if (t34 != 2822195251LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1001 = INT16_MAX;
	uint16_t x1002 = UINT16_MAX;
	int32_t x1003 = -1;
	int16_t x1004 = -1;
	static int32_t t35 = 1898;

	t35 = (x1001>>((x1002==x1003)-x1004));

	if (t35 != 16383) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1017 = 15;
	uint16_t x1019 = 390U;
	int32_t x1020 = -1;

	t36 = (x1017>>((x1018==x1019)-x1020));

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1067 = 1171211584346912842LL;
	int8_t x1068 = -1;

	t37 = (x1065>>((x1066==x1067)-x1068));

	if (t37 != 15058) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x1073 = 311427U;
	int32_t x1074 = INT32_MIN;
	int8_t x1075 = -51;
	int32_t x1076 = -1;
	uint32_t t38 = 849309408U;

	t38 = (x1073>>((x1074==x1075)-x1076));

	if (t38 != 155713U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1093 = 3U;
	volatile uint16_t x1094 = 31U;
	int16_t x1096 = 0;
	static volatile int32_t t39 = 3;

	t39 = (x1093>>((x1094==x1095)-x1096));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1117 = 7U;
	int8_t x1118 = -1;
	uint16_t x1119 = 2950U;
	int32_t x1120 = -1;
	int32_t t40 = -1044402;

	t40 = (x1117>>((x1118==x1119)-x1120));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1133 = 21U;
	int64_t x1134 = -1LL;
	uint32_t x1135 = UINT32_MAX;
	volatile uint64_t x1136 = UINT64_MAX;

	t41 = (x1133>>((x1134==x1135)-x1136));

	if (t41 != 10) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1137 = 23;
	int64_t x1138 = INT64_MIN;
	int16_t x1139 = INT16_MIN;
	int64_t x1140 = -1LL;
	volatile int32_t t42 = -1;

	t42 = (x1137>>((x1138==x1139)-x1140));

	if (t42 != 11) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1142 = -677;
	int16_t x1144 = -1;
	volatile int32_t t43 = 55121198;

	t43 = (x1141>>((x1142==x1143)-x1144));

	if (t43 != 1073741823) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1145 = 6U;
	int32_t x1147 = -97411375;
	volatile int16_t x1148 = -1;
	static volatile int32_t t44 = 471;

	t44 = (x1145>>((x1146==x1147)-x1148));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1165 = UINT32_MAX;
	int32_t x1166 = 10;
	static int8_t x1168 = 0;

	t45 = (x1165>>((x1166==x1167)-x1168));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1170 = INT16_MIN;
	int32_t x1171 = INT32_MIN;
	static uint64_t x1172 = UINT64_MAX;
	int32_t t46 = -6;

	t46 = (x1169>>((x1170==x1171)-x1172));

	if (t46 != 16383) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1209 = INT32_MAX;
	volatile int64_t x1210 = 13397554LL;
	volatile int8_t x1211 = -1;
	int16_t x1212 = -27;

	t47 = (x1209>>((x1210==x1211)-x1212));

	if (t47 != 15) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1241 = 19U;
	static int8_t x1242 = INT8_MIN;
	uint64_t x1243 = 1013560LLU;
	volatile int8_t x1244 = 0;

	t48 = (x1241>>((x1242==x1243)-x1244));

	if (t48 != 19) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1257 = UINT64_MAX;
	volatile int8_t x1258 = INT8_MAX;
	uint32_t x1259 = 0U;
	int8_t x1260 = -1;
	uint64_t t49 = 422591061988LLU;

	t49 = (x1257>>((x1258==x1259)-x1260));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1270 = 5U;
	int8_t x1271 = -1;
	int16_t x1272 = -1;
	volatile int32_t t50 = 217;

	t50 = (x1269>>((x1270==x1271)-x1272));

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x1393 = INT8_MAX;
	int8_t x1394 = INT8_MAX;
	int64_t x1395 = -1LL;
	static uint32_t x1396 = UINT32_MAX;
	int32_t t51 = -7570;

	t51 = (x1393>>((x1394==x1395)-x1396));

	if (t51 != 63) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1430 = INT8_MAX;
	uint64_t x1431 = 92962LLU;
	int64_t x1432 = -1LL;
	uint32_t t52 = 882U;

	t52 = (x1429>>((x1430==x1431)-x1432));

	if (t52 != 819408680U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1471 = 445;
	int16_t x1472 = -1;
	int64_t t53 = -866875177147011LL;

	t53 = (x1469>>((x1470==x1471)-x1472));

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1493 = 7999348451LL;
	volatile uint32_t x1494 = 19481U;
	int16_t x1495 = 1871;
	uint64_t x1496 = UINT64_MAX;
	volatile int64_t t54 = -346260379638934LL;

	t54 = (x1493>>((x1494==x1495)-x1496));

	if (t54 != 3999674225LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1549 = UINT16_MAX;
	int8_t x1550 = -1;
	static int64_t x1551 = INT64_MAX;
	static int32_t t55 = -997;

	t55 = (x1549>>((x1550==x1551)-x1552));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1565 = 248366U;
	static volatile int16_t x1568 = -1;
	volatile uint32_t t56 = 2760426U;

	t56 = (x1565>>((x1566==x1567)-x1568));

	if (t56 != 124183U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x1581 = 3U;
	uint8_t x1582 = UINT8_MAX;
	int32_t x1583 = -1;
	volatile int64_t x1584 = -1LL;
	int32_t t57 = -3841;

	t57 = (x1581>>((x1582==x1583)-x1584));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1645 = 2022856690306LLU;
	uint64_t x1646 = UINT64_MAX;
	static volatile int8_t x1648 = 0;
	uint64_t t58 = 2310367LLU;

	t58 = (x1645>>((x1646==x1647)-x1648));

	if (t58 != 2022856690306LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x1693 = INT8_MAX;
	volatile int32_t x1694 = INT32_MIN;
	uint32_t x1696 = UINT32_MAX;
	static int32_t t59 = 1;

	t59 = (x1693>>((x1694==x1695)-x1696));

	if (t59 != 63) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1731 = 93973875378113LLU;
	int32_t t60 = -32313;

	t60 = (x1729>>((x1730==x1731)-x1732));

	if (t60 != 125) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1737 = 69365407LLU;
	int32_t x1739 = INT32_MIN;
	int32_t x1740 = -1;
	uint64_t t61 = 46226022LLU;

	t61 = (x1737>>((x1738==x1739)-x1740));

	if (t61 != 34682703LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x1789 = INT16_MAX;
	static volatile uint64_t x1791 = 2056LLU;
	volatile uint8_t x1792 = 0U;
	int32_t t62 = 426405;

	t62 = (x1789>>((x1790==x1791)-x1792));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1825 = UINT32_MAX;
	uint8_t x1826 = UINT8_MAX;
	int8_t x1827 = -1;
	volatile int8_t x1828 = -7;
	uint32_t t63 = 43757U;

	t63 = (x1825>>((x1826==x1827)-x1828));

	if (t63 != 33554431U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x1837 = 65255833U;
	int8_t x1838 = -1;
	volatile uint16_t x1840 = 0U;
	static volatile uint32_t t64 = 5230163U;

	t64 = (x1837>>((x1838==x1839)-x1840));

	if (t64 != 65255833U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1849 = INT8_MAX;
	int8_t x1851 = INT8_MIN;
	static int8_t x1852 = -13;
	volatile int32_t t65 = -308814;

	t65 = (x1849>>((x1850==x1851)-x1852));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1889 = INT16_MAX;
	volatile int8_t x1890 = 0;
	static volatile uint64_t x1891 = 110LLU;
	static volatile int32_t x1892 = -1;

	t66 = (x1889>>((x1890==x1891)-x1892));

	if (t66 != 16383) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x1909 = 336U;
	int64_t x1910 = INT64_MIN;
	static int32_t x1912 = -29;
	static volatile uint32_t t67 = 5657250U;

	t67 = (x1909>>((x1910==x1911)-x1912));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1969 = INT16_MAX;
	uint64_t x1970 = UINT64_MAX;
	static uint64_t x1971 = UINT64_MAX;
	static int8_t x1972 = -1;
	int32_t t68 = -356;

	t68 = (x1969>>((x1970==x1971)-x1972));

	if (t68 != 8191) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1989 = INT32_MAX;
	volatile int32_t x1990 = INT32_MIN;
	int8_t x1991 = INT8_MIN;
	uint8_t x1992 = 0U;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x1989>>((x1990==x1991)-x1992));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2057 = UINT8_MAX;
	int32_t x2058 = -1;
	int16_t x2059 = -1;
	static volatile uint32_t x2060 = UINT32_MAX;
	volatile int32_t t70 = 0;

	t70 = (x2057>>((x2058==x2059)-x2060));

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2065 = 57253LL;
	uint16_t x2066 = UINT16_MAX;
	uint32_t x2068 = UINT32_MAX;
	volatile int64_t t71 = -317851131354437190LL;

	t71 = (x2065>>((x2066==x2067)-x2068));

	if (t71 != 28626LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2070 = 12394;
	uint8_t x2071 = 6U;
	int16_t x2072 = -1;

	t72 = (x2069>>((x2070==x2071)-x2072));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2102 = 3;
	static int64_t x2103 = INT64_MIN;
	uint16_t x2104 = 0U;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x2101>>((x2102==x2103)-x2104));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2186 = 1739;
	int8_t x2187 = -3;
	static volatile int32_t x2188 = -8;
	static uint64_t t74 = 8612053299483631611LLU;

	t74 = (x2185>>((x2186==x2187)-x2188));

	if (t74 != 24835634LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2217 = INT8_MAX;
	int32_t x2219 = INT32_MIN;
	int16_t x2220 = 0;
	volatile int32_t t75 = -1307773;

	t75 = (x2217>>((x2218==x2219)-x2220));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2293 = 469;
	uint32_t x2294 = 3U;
	static volatile int8_t x2295 = INT8_MIN;

	t76 = (x2293>>((x2294==x2295)-x2296));

	if (t76 != 469) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2314 = 1;
	uint64_t x2315 = 309770725793LLU;
	static int8_t x2316 = -1;

	t77 = (x2313>>((x2314==x2315)-x2316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x2333 = 1U;
	int16_t x2334 = -1;
	static uint64_t x2336 = UINT64_MAX;
	static volatile int32_t t78 = 923;

	t78 = (x2333>>((x2334==x2335)-x2336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2338 = 577948621584320LLU;
	volatile uint64_t t79 = 371143LLU;

	t79 = (x2337>>((x2338==x2339)-x2340));

	if (t79 != 107924645275642045LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2393 = 146387927683727LL;
	uint8_t x2395 = 125U;
	int64_t x2396 = -1LL;
	volatile int64_t t80 = -1014LL;

	t80 = (x2393>>((x2394==x2395)-x2396));

	if (t80 != 73193963841863LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2397 = 1095U;
	uint16_t x2399 = 12U;
	volatile int8_t x2400 = -3;
	int32_t t81 = 64833915;

	t81 = (x2397>>((x2398==x2399)-x2400));

	if (t81 != 136) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2413 = INT16_MAX;
	volatile int8_t x2414 = INT8_MAX;
	uint16_t x2415 = UINT16_MAX;
	volatile int16_t x2416 = -1;
	volatile int32_t t82 = 1;

	t82 = (x2413>>((x2414==x2415)-x2416));

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2465 = 3948U;
	uint8_t x2466 = 3U;
	static int8_t x2467 = -3;
	int64_t x2468 = -1LL;
	int32_t t83 = 1292503;

	t83 = (x2465>>((x2466==x2467)-x2468));

	if (t83 != 1974) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2497 = 155684501;
	uint32_t x2499 = UINT32_MAX;
	volatile int8_t x2500 = -4;
	volatile int32_t t84 = -3501;

	t84 = (x2497>>((x2498==x2499)-x2500));

	if (t84 != 9730281) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2509 = 1404644;
	uint32_t x2510 = UINT32_MAX;
	uint32_t x2512 = UINT32_MAX;
	volatile int32_t t85 = 6;

	t85 = (x2509>>((x2510==x2511)-x2512));

	if (t85 != 702322) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2513 = 14062U;
	int8_t x2514 = INT8_MIN;
	uint8_t x2515 = 1U;
	int16_t x2516 = -16;
	uint32_t t86 = 17574U;

	t86 = (x2513>>((x2514==x2515)-x2516));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2517 = 114278;
	int8_t x2518 = -4;
	uint16_t x2519 = UINT16_MAX;
	volatile int8_t x2520 = -1;
	int32_t t87 = 1466;

	t87 = (x2517>>((x2518==x2519)-x2520));

	if (t87 != 57139) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2585 = UINT8_MAX;
	static int8_t x2586 = INT8_MAX;
	int16_t x2587 = -1;
	int64_t x2588 = -1LL;

	t88 = (x2585>>((x2586==x2587)-x2588));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2661 = 157U;
	uint8_t x2662 = 66U;
	int64_t x2664 = -1LL;

	t89 = (x2661>>((x2662==x2663)-x2664));

	if (t89 != 78) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x2762 = 57;
	static uint32_t x2763 = 11572U;
	uint32_t x2764 = UINT32_MAX;
	volatile int32_t t90 = 2597187;

	t90 = (x2761>>((x2762==x2763)-x2764));

	if (t90 != 216) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2785 = INT32_MAX;
	int16_t x2786 = INT16_MAX;
	int16_t x2787 = -1;
	int32_t t91 = -1545802;

	t91 = (x2785>>((x2786==x2787)-x2788));

	if (t91 != 1073741823) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2789 = 7U;
	int8_t x2791 = -1;

	t92 = (x2789>>((x2790==x2791)-x2792));

	if (t92 != 7U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2921 = 129501095LL;
	int32_t x2922 = INT32_MIN;
	int16_t x2923 = -142;
	static volatile uint64_t x2924 = UINT64_MAX;
	int64_t t93 = 144797485846583457LL;

	t93 = (x2921>>((x2922==x2923)-x2924));

	if (t93 != 64750547LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2933 = 9U;
	uint32_t x2935 = 5U;
	int8_t x2936 = -1;
	int32_t t94 = 7284;

	t94 = (x2933>>((x2934==x2935)-x2936));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x2937 = UINT64_MAX;
	int8_t x2938 = 2;
	volatile uint16_t x2940 = 0U;

	t95 = (x2937>>((x2938==x2939)-x2940));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2965 = 14826LLU;
	uint32_t x2966 = UINT32_MAX;
	volatile int32_t x2967 = INT32_MIN;
	int16_t x2968 = 0;
	uint64_t t96 = 490489LLU;

	t96 = (x2965>>((x2966==x2967)-x2968));

	if (t96 != 14826LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x3001 = 3U;
	int64_t x3002 = -1LL;
	static int16_t x3003 = 0;
	uint32_t t97 = 65005U;

	t97 = (x3001>>((x3002==x3003)-x3004));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3049 = 31481U;
	volatile int16_t x3050 = INT16_MAX;
	static int32_t x3051 = 229;
	volatile int16_t x3052 = -14;
	int32_t t98 = -6023748;

	t98 = (x3049>>((x3050==x3051)-x3052));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3062 = 5U;
	int32_t x3063 = -1;
	volatile int16_t x3064 = -1;
	int64_t t99 = -1522231562547341LL;

	t99 = (x3061>>((x3062==x3063)-x3064));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

