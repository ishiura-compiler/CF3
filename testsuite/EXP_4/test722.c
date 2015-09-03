#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x30 = 10;
int8_t x95 = INT8_MIN;
volatile int64_t t5 = INT64_MAX;
uint64_t x145 = 693574LLU;
int16_t x161 = INT16_MAX;
volatile int16_t x164 = 5007;
int64_t x211 = -1LL;
static volatile uint64_t t16 = 12319702LLU;
int64_t x278 = 0LL;
int16_t x279 = INT16_MAX;
int32_t x310 = -1;
int32_t x312 = INT32_MIN;
uint64_t x318 = 2804315LLU;
uint16_t x338 = UINT16_MAX;
volatile int64_t x342 = -1LL;
uint64_t t25 = 8222696594LLU;
int16_t x438 = 18;
int64_t x440 = -4559LL;
volatile int32_t x444 = -223;
volatile int32_t x474 = INT32_MIN;
int64_t x476 = 3763909281115LL;
int16_t x504 = 57;
uint8_t x554 = 16U;
int8_t x671 = -1;
volatile int32_t t35 = 60173;
static int8_t x675 = -1;
volatile int16_t x676 = INT16_MIN;
volatile int32_t t36 = 1531778;
int64_t x705 = 17929687536184396LL;
volatile uint8_t x845 = UINT8_MAX;
int32_t t39 = 3;
int32_t x851 = -10408875;
volatile int16_t x986 = 1;
static uint8_t x990 = 52U;
static int16_t x1042 = 0;
uint16_t x1096 = 570U;
int16_t x1127 = INT16_MAX;
int16_t x1171 = INT16_MAX;
int64_t x1172 = INT64_MIN;
int64_t t48 = 4349692727842LL;
volatile int16_t x1186 = -1;
volatile int32_t x1234 = -1;
int64_t x1242 = -1LL;
uint16_t x1244 = 61U;
uint32_t x1269 = UINT32_MAX;
static volatile uint16_t x1272 = 27U;
volatile int32_t x1304 = 306393655;
int16_t x1388 = INT16_MIN;
int16_t x1389 = 1;
int8_t x1391 = INT8_MIN;
uint32_t x1416 = UINT32_MAX;
uint32_t t60 = UINT32_MAX;
volatile int64_t x1433 = 0LL;
volatile uint16_t x1444 = UINT16_MAX;
static uint8_t x1471 = UINT8_MAX;
int32_t t65 = -165;
uint8_t x1498 = UINT8_MAX;
volatile int16_t x1539 = 190;
int32_t x1540 = INT32_MAX;
uint64_t x1589 = 1731LLU;
uint16_t x1618 = 1668U;
volatile int32_t x1619 = -1;
uint32_t x1658 = 4U;
int16_t x1700 = INT16_MIN;
static int16_t x1706 = -1;
int32_t x1707 = INT32_MIN;
volatile uint32_t x1709 = 102798U;
volatile uint32_t x1725 = UINT32_MAX;
int16_t x1750 = -1;
int32_t x1795 = INT32_MAX;
uint16_t x1817 = UINT16_MAX;
int64_t x1819 = 3111086029972LL;
static int8_t x1863 = 15;
volatile int32_t t83 = INT32_MAX;
static uint32_t x1935 = 1149U;
int64_t x2065 = 1162710827LL;
static int64_t x2066 = 57924LL;
static int32_t x2079 = INT32_MIN;
static uint32_t x2081 = 157U;
uint64_t x2123 = UINT64_MAX;
int32_t t92 = -2930;
uint32_t x2158 = 22153U;
volatile int32_t t93 = 0;
static int64_t x2189 = INT64_MAX;
static int32_t x2192 = INT32_MAX;
int8_t x2202 = 2;
int8_t x2203 = -57;
int64_t x2204 = INT64_MIN;
volatile uint64_t t96 = 4152077LLU;


void f0(void) {
	static volatile uint16_t x29 = 1U;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MAX;
	int32_t t0 = 388;

	t0 = (x29>>(x30/(x31%x32)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x53 = 8;
	int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MAX;
	uint64_t x56 = 5773391908814350812LLU;
	volatile int32_t t1 = 14674;

	t1 = (x53>>(x54/(x55%x56)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x69 = 2885U;
	int16_t x70 = INT16_MIN;
	static int64_t x71 = 1872062254LL;
	volatile int64_t x72 = INT64_MAX;
	uint32_t t2 = 222360072U;

	t2 = (x69>>(x70/(x71%x72)));

	if (t2 != 2885U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x77 = 464;
	int16_t x78 = 573;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t3 = 19371;

	t3 = (x77>>(x78/(x79%x80)));

	if (t3 != 464) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x85 = 434LLU;
	uint32_t x86 = 28212U;
	uint64_t x87 = 12452816852LLU;
	uint16_t x88 = UINT16_MAX;
	volatile uint64_t t4 = 360634521LLU;

	t4 = (x85>>(x86/(x87%x88)));

	if (t4 != 434LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = 2;
	uint32_t x96 = 75945491U;

	t5 = (x93>>(x94/(x95%x96)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x125 = 8885480;
	int64_t x126 = -1LL;
	uint16_t x127 = 43U;
	int16_t x128 = 1549;
	volatile int32_t t6 = -8099819;

	t6 = (x125>>(x126/(x127%x128)));

	if (t6 != 8885480) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x146 = -1LL;
	volatile int64_t x147 = -306971LL;
	uint16_t x148 = 251U;
	uint64_t t7 = 1046257588148836LLU;

	t7 = (x145>>(x146/(x147%x148)));

	if (t7 != 693574LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x157 = 15U;
	volatile uint32_t x158 = 15U;
	int8_t x159 = -1;
	volatile uint64_t x160 = 60586LLU;
	volatile int32_t t8 = 1;

	t8 = (x157>>(x158/(x159%x160)));

	if (t8 != 15) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x162 = UINT64_MAX;
	int16_t x163 = -3519;
	int32_t t9 = -190;

	t9 = (x161>>(x162/(x163%x164)));

	if (t9 != 16383) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int64_t x182 = -1LL;
	static volatile uint8_t x183 = UINT8_MAX;
	static int8_t x184 = INT8_MIN;
	uint32_t t10 = UINT32_MAX;

	t10 = (x181>>(x182/(x183%x184)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x197 = UINT64_MAX;
	static int32_t x198 = -31;
	static int32_t x199 = -445;
	int16_t x200 = INT16_MIN;
	static uint64_t t11 = UINT64_MAX;

	t11 = (x197>>(x198/(x199%x200)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x209 = INT8_MAX;
	uint64_t x210 = 5LLU;
	uint64_t x212 = 15198734LLU;
	volatile int32_t t12 = 3;

	t12 = (x209>>(x210/(x211%x212)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x213 = 1050U;
	uint32_t x214 = 1U;
	volatile int64_t x215 = INT64_MAX;
	volatile int16_t x216 = -4;
	int32_t t13 = 43753323;

	t13 = (x213>>(x214/(x215%x216)));

	if (t13 != 1050) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x221 = 6U;
	int8_t x222 = -1;
	volatile int8_t x223 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t14 = -32482291;

	t14 = (x221>>(x222/(x223%x224)));

	if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x233 = 31;
	static int32_t x234 = -1;
	uint16_t x235 = 1341U;
	volatile int64_t x236 = 247LL;
	static int32_t t15 = -11526129;

	t15 = (x233>>(x234/(x235%x236)));

	if (t15 != 31) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x261 = 1074363LLU;
	static uint8_t x262 = 0U;
	int8_t x263 = -9;
	static int32_t x264 = INT32_MIN;

	t16 = (x261>>(x262/(x263%x264)));

	if (t16 != 1074363LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x269 = 18850236U;
	static int32_t x270 = 45;
	int64_t x271 = -1LL;
	uint64_t x272 = 64534134140LLU;
	uint32_t t17 = 23376370U;

	t17 = (x269>>(x270/(x271%x272)));

	if (t17 != 18850236U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x280 = 257679U;
	uint64_t t18 = UINT64_MAX;

	t18 = (x277>>(x278/(x279%x280)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x281 = 8U;
	static int32_t x282 = -5;
	int64_t x283 = INT64_MAX;
	int8_t x284 = -19;
	static int32_t t19 = -1807260;

	t19 = (x281>>(x282/(x283%x284)));

	if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x309 = INT16_MAX;
	int8_t x311 = INT8_MIN;
	volatile int32_t t20 = 89560321;

	t20 = (x309>>(x310/(x311%x312)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int32_t x319 = -1;
	int16_t x320 = 23;
	volatile int32_t t21 = 1;

	t21 = (x317>>(x318/(x319%x320)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x321 = INT8_MAX;
	static int8_t x322 = 43;
	uint32_t x323 = 3610208U;
	uint16_t x324 = 54U;
	volatile int32_t t22 = 2007892;

	t22 = (x321>>(x322/(x323%x324)));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x337 = UINT8_MAX;
	uint16_t x339 = 12474U;
	volatile uint64_t x340 = 7722873LLU;
	int32_t t23 = 49916333;

	t23 = (x337>>(x338/(x339%x340)));

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x341 = UINT8_MAX;
	uint8_t x343 = 2U;
	int8_t x344 = INT8_MIN;
	int32_t t24 = -225758525;

	t24 = (x341>>(x342/(x343%x344)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x357 = 13575426723LLU;
	volatile int64_t x358 = -1LL;
	uint16_t x359 = UINT16_MAX;
	static uint16_t x360 = 31423U;

	t25 = (x357>>(x358/(x359%x360)));

	if (t25 != 13575426723LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x425 = 171682705LLU;
	static uint32_t x426 = 3U;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 23586631662380533LLU;
	uint64_t t26 = 754140918989943LLU;

	t26 = (x425>>(x426/(x427%x428)));

	if (t26 != 171682705LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x437 = 427U;
	uint8_t x439 = 14U;
	uint32_t t27 = 1U;

	t27 = (x437>>(x438/(x439%x440)));

	if (t27 != 213U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x441 = 2032289U;
	static int8_t x442 = INT8_MAX;
	uint16_t x443 = 8927U;
	volatile uint32_t t28 = 733267U;

	t28 = (x441>>(x442/(x443%x444)));

	if (t28 != 7U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x473 = INT8_MAX;
	int32_t x475 = INT32_MIN;
	volatile int32_t t29 = 1127476;

	t29 = (x473>>(x474/(x475%x476)));

	if (t29 != 63) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x501 = 797678LLU;
	int8_t x502 = 3;
	int8_t x503 = INT8_MIN;
	uint64_t t30 = 41481128482LLU;

	t30 = (x501>>(x502/(x503%x504)));

	if (t30 != 797678LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x553 = 29;
	static uint8_t x555 = 2U;
	int8_t x556 = -3;
	int32_t t31 = 758241;

	t31 = (x553>>(x554/(x555%x556)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x569 = 6882228586473138378LLU;
	volatile uint8_t x570 = 4U;
	volatile uint64_t x571 = 374878430339096LLU;
	volatile int16_t x572 = 161;
	uint64_t t32 = 53985LLU;

	t32 = (x569>>(x570/(x571%x572)));

	if (t32 != 6882228586473138378LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x597 = 901U;
	int8_t x598 = -1;
	int32_t x599 = INT32_MAX;
	int64_t x600 = 12710939878549LL;
	volatile uint32_t t33 = 9U;

	t33 = (x597>>(x598/(x599%x600)));

	if (t33 != 901U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x613 = 3U;
	static volatile uint8_t x614 = UINT8_MAX;
	static uint8_t x615 = 47U;
	int8_t x616 = INT8_MIN;
	int32_t t34 = 248706;

	t34 = (x613>>(x614/(x615%x616)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x669 = 344161725;
	int8_t x670 = -1;
	volatile int16_t x672 = INT16_MIN;

	t35 = (x669>>(x670/(x671%x672)));

	if (t35 != 172080862) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x673 = INT8_MAX;
	uint64_t x674 = 206LLU;

	t36 = (x673>>(x674/(x675%x676)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x706 = 102U;
	int8_t x707 = INT8_MIN;
	int32_t x708 = -533960;
	int64_t t37 = -3385005781963628LL;

	t37 = (x705>>(x706/(x707%x708)));

	if (t37 != 17929687536184396LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x817 = INT32_MAX;
	int32_t x818 = -1;
	int16_t x819 = -1;
	int32_t x820 = INT32_MAX;
	volatile int32_t t38 = 0;

	t38 = (x817>>(x818/(x819%x820)));

	if (t38 != 1073741823) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x846 = -1;
	int16_t x847 = INT16_MAX;
	uint8_t x848 = 12U;

	t39 = (x845>>(x846/(x847%x848)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x849 = 120814248U;
	static int8_t x850 = INT8_MIN;
	volatile int64_t x852 = -6339585947LL;
	volatile uint32_t t40 = 2800U;

	t40 = (x849>>(x850/(x851%x852)));

	if (t40 != 120814248U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x913 = UINT8_MAX;
	int8_t x914 = INT8_MAX;
	uint64_t x915 = 12560205553LLU;
	int64_t x916 = INT64_MIN;
	volatile int32_t t41 = 478;

	t41 = (x913>>(x914/(x915%x916)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x985 = 0U;
	uint64_t x987 = 4582864480LLU;
	uint8_t x988 = 15U;
	volatile int32_t t42 = -1;

	t42 = (x985>>(x986/(x987%x988)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x989 = 3;
	int8_t x991 = 13;
	uint32_t x992 = 110U;
	static int32_t t43 = -6053;

	t43 = (x989>>(x990/(x991%x992)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1041 = 16U;
	uint8_t x1043 = UINT8_MAX;
	uint32_t x1044 = UINT32_MAX;
	volatile int32_t t44 = -63;

	t44 = (x1041>>(x1042/(x1043%x1044)));

	if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1093 = INT8_MAX;
	int8_t x1094 = -1;
	int32_t x1095 = -430;
	int32_t t45 = 2491539;

	t45 = (x1093>>(x1094/(x1095%x1096)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1125 = 8;
	int16_t x1126 = 769;
	static uint32_t x1128 = 777737U;
	int32_t t46 = -24;

	t46 = (x1125>>(x1126/(x1127%x1128)));

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1161 = 0U;
	int16_t x1162 = INT16_MAX;
	volatile int16_t x1163 = INT16_MIN;
	static int64_t x1164 = 1764209657377715916LL;
	static volatile int32_t t47 = 16152;

	t47 = (x1161>>(x1162/(x1163%x1164)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1169 = 106345LL;
	static int8_t x1170 = -1;

	t48 = (x1169>>(x1170/(x1171%x1172)));

	if (t48 != 106345LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1185 = 109988442U;
	int8_t x1187 = INT8_MIN;
	uint8_t x1188 = UINT8_MAX;
	static uint32_t t49 = 7272U;

	t49 = (x1185>>(x1186/(x1187%x1188)));

	if (t49 != 109988442U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x1209 = INT64_MAX;
	volatile uint32_t x1210 = 62912U;
	int8_t x1211 = INT8_MIN;
	int32_t x1212 = INT32_MIN;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x1209>>(x1210/(x1211%x1212)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1233 = 19U;
	volatile int32_t x1235 = -1;
	int8_t x1236 = INT8_MIN;
	static volatile int32_t t51 = 3776188;

	t51 = (x1233>>(x1234/(x1235%x1236)));

	if (t51 != 9) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1241 = INT64_MAX;
	int64_t x1243 = INT64_MIN;
	int64_t t52 = INT64_MAX;

	t52 = (x1241>>(x1242/(x1243%x1244)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x1270 = 12U;
	static int8_t x1271 = INT8_MIN;
	uint32_t t53 = UINT32_MAX;

	t53 = (x1269>>(x1270/(x1271%x1272)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1273 = 2132817324795LLU;
	int8_t x1274 = 0;
	int8_t x1275 = INT8_MAX;
	static uint16_t x1276 = 5U;
	uint64_t t54 = 199471585460142LLU;

	t54 = (x1273>>(x1274/(x1275%x1276)));

	if (t54 != 2132817324795LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1301 = UINT8_MAX;
	volatile uint32_t x1302 = 6U;
	int16_t x1303 = -1;
	static int32_t t55 = 69;

	t55 = (x1301>>(x1302/(x1303%x1304)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1369 = 106360551;
	int16_t x1370 = -1;
	uint16_t x1371 = 87U;
	volatile int8_t x1372 = -5;
	volatile int32_t t56 = -503517817;

	t56 = (x1369>>(x1370/(x1371%x1372)));

	if (t56 != 106360551) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1373 = INT8_MAX;
	int32_t x1374 = 0;
	static volatile int16_t x1375 = INT16_MIN;
	uint32_t x1376 = UINT32_MAX;
	static int32_t t57 = 100621;

	t57 = (x1373>>(x1374/(x1375%x1376)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1385 = 171;
	int16_t x1386 = 0;
	volatile uint64_t x1387 = UINT64_MAX;
	int32_t t58 = -4634;

	t58 = (x1385>>(x1386/(x1387%x1388)));

	if (t58 != 171) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x1390 = -1;
	static int16_t x1392 = INT16_MAX;
	volatile int32_t t59 = 547;

	t59 = (x1389>>(x1390/(x1391%x1392)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1413 = UINT32_MAX;
	int8_t x1414 = INT8_MAX;
	int64_t x1415 = -474505489LL;

	t60 = (x1413>>(x1414/(x1415%x1416)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x1434 = 15;
	int16_t x1435 = 3;
	static uint32_t x1436 = 351104662U;
	volatile int64_t t61 = -7374312272862450LL;

	t61 = (x1433>>(x1434/(x1435%x1436)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1441 = INT64_MAX;
	static uint32_t x1442 = 115563110U;
	static int16_t x1443 = INT16_MIN;
	volatile int64_t t62 = INT64_MAX;

	t62 = (x1441>>(x1442/(x1443%x1444)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1457 = 1U;
	static int8_t x1458 = INT8_MAX;
	static uint64_t x1459 = 1900082811925LLU;
	uint64_t x1460 = UINT64_MAX;
	int32_t t63 = 18;

	t63 = (x1457>>(x1458/(x1459%x1460)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1469 = 1924U;
	uint8_t x1470 = 5U;
	uint16_t x1472 = UINT16_MAX;
	volatile int32_t t64 = 37;

	t64 = (x1469>>(x1470/(x1471%x1472)));

	if (t64 != 1924) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1489 = 3U;
	static uint64_t x1490 = 911230671LLU;
	int16_t x1491 = INT16_MIN;
	uint8_t x1492 = UINT8_MAX;

	t65 = (x1489>>(x1490/(x1491%x1492)));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1497 = 1;
	uint32_t x1499 = 14154475U;
	int64_t x1500 = -709LL;
	static volatile int32_t t66 = -339;

	t66 = (x1497>>(x1498/(x1499%x1500)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1537 = 1041758U;
	int8_t x1538 = 4;
	volatile uint32_t t67 = 72111U;

	t67 = (x1537>>(x1538/(x1539%x1540)));

	if (t67 != 1041758U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1590 = -1;
	uint8_t x1591 = 12U;
	int64_t x1592 = INT64_MAX;
	volatile uint64_t t68 = 850667024750LLU;

	t68 = (x1589>>(x1590/(x1591%x1592)));

	if (t68 != 1731LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1617 = 0U;
	static volatile uint64_t x1620 = 313435386576817428LLU;
	volatile int32_t t69 = 708;

	t69 = (x1617>>(x1618/(x1619%x1620)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1657 = 63U;
	static volatile uint16_t x1659 = 9513U;
	static uint16_t x1660 = 121U;
	int32_t t70 = -51206344;

	t70 = (x1657>>(x1658/(x1659%x1660)));

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1697 = 387271082U;
	int8_t x1698 = INT8_MIN;
	uint16_t x1699 = 827U;
	volatile uint32_t t71 = 224816U;

	t71 = (x1697>>(x1698/(x1699%x1700)));

	if (t71 != 387271082U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x1705 = 16;
	int16_t x1708 = -123;
	volatile int32_t t72 = -743955;

	t72 = (x1705>>(x1706/(x1707%x1708)));

	if (t72 != 16) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1710 = 1820U;
	volatile int16_t x1711 = -9;
	volatile int8_t x1712 = INT8_MIN;
	static volatile uint32_t t73 = 2403U;

	t73 = (x1709>>(x1710/(x1711%x1712)));

	if (t73 != 102798U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1726 = 80286LL;
	uint64_t x1727 = UINT64_MAX;
	int16_t x1728 = INT16_MIN;
	uint32_t t74 = 33U;

	t74 = (x1725>>(x1726/(x1727%x1728)));

	if (t74 != 1073741823U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x1749 = UINT32_MAX;
	int16_t x1751 = INT16_MAX;
	int64_t x1752 = INT64_MIN;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x1749>>(x1750/(x1751%x1752)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1757 = UINT64_MAX;
	volatile int8_t x1758 = -10;
	int8_t x1759 = -15;
	static int16_t x1760 = INT16_MIN;
	static volatile uint64_t t76 = UINT64_MAX;

	t76 = (x1757>>(x1758/(x1759%x1760)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1785 = 15U;
	volatile int8_t x1786 = INT8_MIN;
	int8_t x1787 = INT8_MIN;
	int32_t x1788 = INT32_MIN;
	static int32_t t77 = -2;

	t77 = (x1785>>(x1786/(x1787%x1788)));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1793 = 39538U;
	volatile int32_t x1794 = -1;
	volatile int32_t x1796 = INT32_MIN;
	uint32_t t78 = 114656U;

	t78 = (x1793>>(x1794/(x1795%x1796)));

	if (t78 != 39538U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1818 = -1;
	uint16_t x1820 = 4121U;
	static volatile int32_t t79 = -30961816;

	t79 = (x1817>>(x1818/(x1819%x1820)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1861 = INT8_MAX;
	uint32_t x1862 = 30U;
	static volatile int8_t x1864 = INT8_MIN;
	int32_t t80 = -2511;

	t80 = (x1861>>(x1862/(x1863%x1864)));

	if (t80 != 31) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1881 = INT8_MAX;
	static int32_t x1882 = INT32_MIN;
	int32_t x1883 = -71200765;
	uint32_t x1884 = 791461496U;
	static volatile int32_t t81 = 33748623;

	t81 = (x1881>>(x1882/(x1883%x1884)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1885 = INT8_MAX;
	uint16_t x1886 = 2U;
	static volatile int64_t x1887 = INT64_MAX;
	uint64_t x1888 = 12406829911LLU;
	static volatile int32_t t82 = 287;

	t82 = (x1885>>(x1886/(x1887%x1888)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x1889 = INT32_MAX;
	static int8_t x1890 = INT8_MAX;
	uint64_t x1891 = 22656178698938LLU;
	static uint16_t x1892 = 13699U;

	t83 = (x1889>>(x1890/(x1891%x1892)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1933 = 12U;
	uint32_t x1934 = 28U;
	uint64_t x1936 = 2757270213265488LLU;
	int32_t t84 = 1016;

	t84 = (x1933>>(x1934/(x1935%x1936)));

	if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1981 = INT8_MAX;
	int8_t x1982 = 1;
	uint32_t x1983 = UINT32_MAX;
	static int8_t x1984 = INT8_MAX;
	static int32_t t85 = -32168;

	t85 = (x1981>>(x1982/(x1983%x1984)));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2049 = 6519085U;
	volatile int16_t x2050 = -5;
	int64_t x2051 = INT64_MAX;
	uint16_t x2052 = UINT16_MAX;
	uint32_t t86 = 83U;

	t86 = (x2049>>(x2050/(x2051%x2052)));

	if (t86 != 6519085U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2053 = 1280;
	volatile int8_t x2054 = INT8_MAX;
	uint16_t x2055 = 18350U;
	int16_t x2056 = INT16_MAX;
	static volatile int32_t t87 = 1376056;

	t87 = (x2053>>(x2054/(x2055%x2056)));

	if (t87 != 1280) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x2067 = 52924LLU;
	int64_t x2068 = INT64_MIN;
	volatile int64_t t88 = -55345LL;

	t88 = (x2065>>(x2066/(x2067%x2068)));

	if (t88 != 581355413LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2077 = 5437U;
	uint8_t x2078 = 10U;
	volatile uint32_t x2080 = 204934477U;
	uint32_t t89 = 106946U;

	t89 = (x2077>>(x2078/(x2079%x2080)));

	if (t89 != 5437U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x2082 = 60187667LLU;
	int32_t x2083 = -984207042;
	int16_t x2084 = INT16_MAX;
	volatile uint32_t t90 = 130822833U;

	t90 = (x2081>>(x2082/(x2083%x2084)));

	if (t90 != 157U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2121 = INT16_MAX;
	volatile uint16_t x2122 = UINT16_MAX;
	static int32_t x2124 = 451600;
	int32_t t91 = -27;

	t91 = (x2121>>(x2122/(x2123%x2124)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2149 = 13;
	int32_t x2150 = -1;
	static volatile int32_t x2151 = INT32_MIN;
	int64_t x2152 = -19997LL;

	t92 = (x2149>>(x2150/(x2151%x2152)));

	if (t92 != 13) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2157 = 7U;
	volatile int8_t x2159 = INT8_MIN;
	int32_t x2160 = -3298869;

	t93 = (x2157>>(x2158/(x2159%x2160)));

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2190 = INT8_MAX;
	int16_t x2191 = INT16_MIN;
	int64_t t94 = INT64_MAX;

	t94 = (x2189>>(x2190/(x2191%x2192)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x2201 = INT8_MAX;
	volatile int32_t t95 = 47;

	t95 = (x2201>>(x2202/(x2203%x2204)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2269 = 11727944808738129LLU;
	uint32_t x2270 = UINT32_MAX;
	int16_t x2271 = -1;
	int8_t x2272 = INT8_MIN;

	t96 = (x2269>>(x2270/(x2271%x2272)));

	if (t96 != 5863972404369064LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2285 = UINT16_MAX;
	volatile int8_t x2286 = INT8_MIN;
	int32_t x2287 = -16712446;
	int16_t x2288 = INT16_MAX;
	int32_t t97 = -10;

	t97 = (x2285>>(x2286/(x2287%x2288)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2305 = UINT32_MAX;
	static int8_t x2306 = INT8_MIN;
	volatile int64_t x2307 = 246751LL;
	int64_t x2308 = INT64_MIN;
	uint32_t t98 = UINT32_MAX;

	t98 = (x2305>>(x2306/(x2307%x2308)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2373 = INT32_MAX;
	int8_t x2374 = 21;
	volatile int64_t x2375 = INT64_MAX;
	uint8_t x2376 = UINT8_MAX;
	int32_t t99 = INT32_MAX;

	t99 = (x2373>>(x2374/(x2375%x2376)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

