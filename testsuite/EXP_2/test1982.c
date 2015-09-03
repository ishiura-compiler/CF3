#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x16 = 0;
int8_t x31 = INT8_MIN;
static int32_t t2 = 30412365;
int32_t x69 = -1;
uint64_t x142 = UINT64_MAX;
int32_t x165 = INT32_MAX;
uint32_t x167 = 136631850U;
static int32_t t6 = 250;
uint64_t x171 = 44629848678323111LLU;
static int64_t x294 = INT64_MIN;
static int32_t t11 = 0;
static uint64_t x321 = 1275607779LLU;
static uint32_t x322 = 100U;
int8_t x343 = 1;
int32_t t14 = -1556;
static int64_t x396 = 1LL;
uint8_t x427 = UINT8_MAX;
volatile int32_t t16 = -1;
volatile int16_t x438 = INT16_MIN;
volatile int32_t t18 = -166575;
int16_t x493 = INT16_MIN;
int32_t x495 = 3772;
int64_t x740 = 5LL;
int8_t x785 = -1;
volatile int32_t x786 = -1;
int32_t t26 = -3992;
static int16_t x866 = INT16_MIN;
static uint16_t x867 = UINT16_MAX;
int32_t t27 = 313554182;
uint8_t x922 = UINT8_MAX;
uint64_t x923 = 84123371LLU;
static int8_t x980 = 26;
uint8_t x1061 = 41U;
static int64_t x1063 = INT64_MIN;
uint8_t x1076 = 15U;
uint64_t x1154 = 0LLU;
volatile int64_t x1189 = 173LL;
int64_t x1271 = INT64_MIN;
int32_t t44 = -15830;
uint64_t x1412 = 14LLU;
static int16_t x1447 = INT16_MIN;
volatile int32_t t46 = -3719;
int8_t x1456 = 1;
int8_t x1493 = INT8_MIN;
volatile int32_t t49 = -37;
int16_t x1554 = -224;
static uint32_t x1605 = 2U;
int64_t x1606 = INT64_MAX;
int8_t x1607 = -1;
volatile uint32_t x1625 = 50510172U;
static int16_t x1627 = -5271;
uint64_t x1685 = 2794865504LLU;
int32_t x1729 = INT32_MIN;
static int32_t x1732 = 1;
int32_t x1759 = INT32_MIN;
uint64_t x2137 = UINT64_MAX;
volatile int32_t t61 = -31659358;
uint16_t x2208 = 4U;
int64_t x2213 = INT64_MIN;
static volatile int32_t x2238 = -2269;
int32_t x2239 = INT32_MIN;
static uint8_t x2240 = 31U;
int8_t x2264 = 0;
int8_t x2317 = INT8_MAX;
volatile uint32_t x2351 = 1U;
volatile int32_t t71 = -36;
int16_t x2510 = INT16_MAX;
volatile uint32_t x2516 = 2U;
volatile int32_t t74 = -1;
static volatile int32_t x2530 = 1276398;
static int16_t x2649 = INT16_MAX;
volatile int32_t x2651 = -1;
int8_t x2674 = 1;
volatile int16_t x2675 = INT16_MIN;
uint8_t x2676 = 8U;
volatile int32_t t80 = -406;
static int32_t t81 = -1;
int8_t x2752 = 7;
volatile int32_t t82 = 1;
int32_t x2806 = -342;
int32_t x2937 = INT32_MAX;
static int64_t x2939 = -432LL;
static int32_t x3191 = 1564;
int32_t x3235 = 28157451;
volatile int32_t t91 = 3822;
int16_t x3244 = 3;
int32_t t92 = -2812;
uint8_t x3375 = UINT8_MAX;
int16_t x3376 = 13;
int16_t x3413 = 246;
volatile int32_t t94 = -84001092;
volatile int32_t x3427 = -2;
volatile uint8_t x3444 = 7U;
int32_t t97 = 666;
uint16_t x3584 = 1U;
int64_t x3586 = -48231650140LL;
static int8_t x3588 = 26;


void f0(void) {
	int64_t x9 = -1256078871186LL;
	uint16_t x10 = UINT16_MAX;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = 7;
	static int32_t t0 = -1;

	t0 = ((x9<=(x10|x11))<<x12);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile int16_t x14 = INT16_MAX;
	uint16_t x15 = 3U;
	volatile int32_t t1 = 244614545;

	t1 = ((x13<=(x14|x15))<<x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = INT16_MAX;
	int32_t x30 = -29030;
	uint16_t x32 = 2U;

	t2 = ((x29<=(x30|x31))<<x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 3287U;
	uint32_t x72 = 0U;
	int32_t t3 = -1;

	t3 = ((x69<=(x70|x71))<<x72);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x77 = UINT32_MAX;
	volatile int64_t x78 = 153304LL;
	int8_t x79 = INT8_MAX;
	int16_t x80 = 1;
	volatile int32_t t4 = -3969;

	t4 = ((x77<=(x78|x79))<<x80);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static uint32_t x143 = 1U;
	int16_t x144 = 2;
	volatile int32_t t5 = -7884;

	t5 = ((x141<=(x142|x143))<<x144);

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x166 = 2U;
	volatile int8_t x168 = 0;

	t6 = ((x165<=(x166|x167))<<x168);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x169 = -1LL;
	uint8_t x170 = 5U;
	uint8_t x172 = 1U;
	volatile int32_t t7 = 34;

	t7 = ((x169<=(x170|x171))<<x172);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x213 = 739691260863LLU;
	volatile int64_t x214 = -1LL;
	volatile uint8_t x215 = 0U;
	int8_t x216 = 2;
	volatile int32_t t8 = 8;

	t8 = ((x213<=(x214|x215))<<x216);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = 35428570012489031LL;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 6;
	int32_t t9 = -1;

	t9 = ((x253<=(x254|x255))<<x256);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x265 = INT8_MIN;
	volatile uint8_t x266 = 7U;
	volatile int32_t x267 = INT32_MAX;
	volatile int16_t x268 = 1;
	volatile int32_t t10 = 7310897;

	t10 = ((x265<=(x266|x267))<<x268);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x293 = UINT64_MAX;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = 14;

	t11 = ((x293<=(x294|x295))<<x296);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x323 = UINT64_MAX;
	uint16_t x324 = 5U;
	int32_t t12 = -90487;

	t12 = ((x321<=(x322|x323))<<x324);

	if (t12 != 32) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x341 = 431U;
	int32_t x342 = 900297308;
	int8_t x344 = 7;
	volatile int32_t t13 = -3591;

	t13 = ((x341<=(x342|x343))<<x344);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x375 = 69;
	int64_t x376 = 9LL;

	t14 = ((x373<=(x374|x375))<<x376);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint16_t x394 = 28592U;
	int32_t x395 = INT32_MIN;
	int32_t t15 = 3;

	t15 = ((x393<=(x394|x395))<<x396);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x425 = INT32_MAX;
	int32_t x426 = -7308;
	uint16_t x428 = 2U;

	t16 = ((x425<=(x426|x427))<<x428);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x437 = 1962U;
	int8_t x439 = INT8_MIN;
	static uint8_t x440 = 7U;
	static volatile int32_t t17 = 2015;

	t17 = ((x437<=(x438|x439))<<x440);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x445 = INT64_MAX;
	int64_t x446 = -1LL;
	int32_t x447 = INT32_MIN;
	volatile uint32_t x448 = 1U;

	t18 = ((x445<=(x446|x447))<<x448);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x481 = 74290;
	volatile uint8_t x482 = 124U;
	int64_t x483 = -15223506LL;
	int8_t x484 = 1;
	volatile int32_t t19 = 113108;

	t19 = ((x481<=(x482|x483))<<x484);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x494 = -107185875;
	static uint32_t x496 = 4U;
	volatile int32_t t20 = 31241386;

	t20 = ((x493<=(x494|x495))<<x496);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x525 = -1;
	int32_t x526 = -16813694;
	volatile int32_t x527 = INT32_MIN;
	int8_t x528 = 0;
	static int32_t t21 = 22992;

	t21 = ((x525<=(x526|x527))<<x528);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x553 = 426635LLU;
	int64_t x554 = -38083092LL;
	int64_t x555 = 798829712281LL;
	uint8_t x556 = 11U;
	static volatile int32_t t22 = -4021904;

	t22 = ((x553<=(x554|x555))<<x556);

	if (t22 != 2048) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x653 = INT64_MAX;
	static volatile int32_t x654 = INT32_MIN;
	int32_t x655 = -1;
	static int8_t x656 = 0;
	int32_t t23 = 220602979;

	t23 = ((x653<=(x654|x655))<<x656);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x661 = UINT64_MAX;
	static uint16_t x662 = 1U;
	int64_t x663 = 416856791827338LL;
	uint16_t x664 = 2U;
	static int32_t t24 = 21684857;

	t24 = ((x661<=(x662|x663))<<x664);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x737 = 58U;
	static uint64_t x738 = UINT64_MAX;
	volatile int64_t x739 = INT64_MIN;
	volatile int32_t t25 = 312504382;

	t25 = ((x737<=(x738|x739))<<x740);

	if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x787 = INT8_MAX;
	uint32_t x788 = 5U;

	t26 = ((x785<=(x786|x787))<<x788);

	if (t26 != 32) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x865 = INT32_MIN;
	static int16_t x868 = 0;

	t27 = ((x865<=(x866|x867))<<x868);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x877 = INT64_MIN;
	int64_t x878 = -1LL;
	uint8_t x879 = 0U;
	int8_t x880 = 3;
	int32_t t28 = 32;

	t28 = ((x877<=(x878|x879))<<x880);

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x921 = -3476496;
	uint8_t x924 = 2U;
	volatile int32_t t29 = -1;

	t29 = ((x921<=(x922|x923))<<x924);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x973 = -1;
	int32_t x974 = -1;
	int16_t x975 = 4155;
	static volatile int8_t x976 = 2;
	int32_t t30 = -8085813;

	t30 = ((x973<=(x974|x975))<<x976);

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x977 = 28;
	static int16_t x978 = INT16_MAX;
	static int16_t x979 = -2448;
	volatile int32_t t31 = -124467270;

	t31 = ((x977<=(x978|x979))<<x980);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x981 = 1639U;
	int8_t x982 = INT8_MAX;
	uint8_t x983 = 51U;
	volatile uint16_t x984 = 0U;
	int32_t t32 = -27;

	t32 = ((x981<=(x982|x983))<<x984);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1001 = INT16_MAX;
	uint64_t x1002 = 132115467168009007LLU;
	uint32_t x1003 = UINT32_MAX;
	uint8_t x1004 = 6U;
	int32_t t33 = 12642;

	t33 = ((x1001<=(x1002|x1003))<<x1004);

	if (t33 != 64) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1062 = INT8_MAX;
	int8_t x1064 = 0;
	static volatile int32_t t34 = 106195;

	t34 = ((x1061<=(x1062|x1063))<<x1064);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x1073 = UINT8_MAX;
	int8_t x1074 = -1;
	uint16_t x1075 = 40U;
	volatile int32_t t35 = 55;

	t35 = ((x1073<=(x1074|x1075))<<x1076);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1101 = INT16_MAX;
	int32_t x1102 = -484629144;
	static int64_t x1103 = -1LL;
	static uint8_t x1104 = 14U;
	volatile int32_t t36 = -2237;

	t36 = ((x1101<=(x1102|x1103))<<x1104);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x1153 = UINT8_MAX;
	int64_t x1155 = 64089158061027653LL;
	uint8_t x1156 = 6U;
	volatile int32_t t37 = -1771337;

	t37 = ((x1153<=(x1154|x1155))<<x1156);

	if (t37 != 64) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1161 = INT8_MIN;
	uint64_t x1162 = 5979LLU;
	int16_t x1163 = -1;
	uint16_t x1164 = 26U;
	volatile int32_t t38 = -23;

	t38 = ((x1161<=(x1162|x1163))<<x1164);

	if (t38 != 67108864) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1190 = -12;
	uint8_t x1191 = 53U;
	uint8_t x1192 = 1U;
	static volatile int32_t t39 = 21470;

	t39 = ((x1189<=(x1190|x1191))<<x1192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1269 = INT64_MIN;
	static volatile uint16_t x1270 = UINT16_MAX;
	volatile int8_t x1272 = 18;
	int32_t t40 = 77;

	t40 = ((x1269<=(x1270|x1271))<<x1272);

	if (t40 != 262144) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x1273 = -1;
	int8_t x1274 = -1;
	volatile uint8_t x1275 = UINT8_MAX;
	uint16_t x1276 = 3U;
	volatile int32_t t41 = -4315270;

	t41 = ((x1273<=(x1274|x1275))<<x1276);

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1281 = 8U;
	int16_t x1282 = INT16_MAX;
	volatile int8_t x1283 = -1;
	uint16_t x1284 = 1U;
	int32_t t42 = 3556471;

	t42 = ((x1281<=(x1282|x1283))<<x1284);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1285 = 924386;
	static int32_t x1286 = 21478;
	static volatile int32_t x1287 = INT32_MIN;
	int8_t x1288 = 1;
	int32_t t43 = 25;

	t43 = ((x1285<=(x1286|x1287))<<x1288);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1369 = -1;
	uint64_t x1370 = UINT64_MAX;
	uint8_t x1371 = 0U;
	volatile int8_t x1372 = 0;

	t44 = ((x1369<=(x1370|x1371))<<x1372);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1409 = -1101076LL;
	int32_t x1410 = -6920260;
	uint16_t x1411 = UINT16_MAX;
	int32_t t45 = -113236420;

	t45 = ((x1409<=(x1410|x1411))<<x1412);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1445 = INT32_MIN;
	uint64_t x1446 = UINT64_MAX;
	int16_t x1448 = 0;

	t46 = ((x1445<=(x1446|x1447))<<x1448);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1449 = 3;
	uint8_t x1450 = UINT8_MAX;
	int64_t x1451 = 30LL;
	static volatile int16_t x1452 = 1;
	int32_t t47 = 74029;

	t47 = ((x1449<=(x1450|x1451))<<x1452);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1453 = INT8_MIN;
	int8_t x1454 = INT8_MIN;
	uint16_t x1455 = 2U;
	volatile int32_t t48 = -2813;

	t48 = ((x1453<=(x1454|x1455))<<x1456);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1494 = 2352613;
	int32_t x1495 = 53991585;
	uint8_t x1496 = 2U;

	t49 = ((x1493<=(x1494|x1495))<<x1496);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1553 = INT32_MIN;
	volatile int8_t x1555 = -11;
	static uint8_t x1556 = 16U;
	int32_t t50 = -681801;

	t50 = ((x1553<=(x1554|x1555))<<x1556);

	if (t50 != 65536) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x1577 = UINT16_MAX;
	static uint32_t x1578 = UINT32_MAX;
	int8_t x1579 = INT8_MIN;
	static int16_t x1580 = 0;
	volatile int32_t t51 = 5;

	t51 = ((x1577<=(x1578|x1579))<<x1580);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x1608 = 2U;
	int32_t t52 = 16325713;

	t52 = ((x1605<=(x1606|x1607))<<x1608);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1626 = -145;
	volatile uint16_t x1628 = 0U;
	volatile int32_t t53 = 126893;

	t53 = ((x1625<=(x1626|x1627))<<x1628);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1661 = -1;
	int64_t x1662 = INT64_MIN;
	static volatile uint16_t x1663 = 74U;
	static int8_t x1664 = 8;
	static volatile int32_t t54 = -3228;

	t54 = ((x1661<=(x1662|x1663))<<x1664);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1686 = 2U;
	int8_t x1687 = -1;
	uint8_t x1688 = 1U;
	volatile int32_t t55 = -3;

	t55 = ((x1685<=(x1686|x1687))<<x1688);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1730 = 12049813U;
	uint16_t x1731 = UINT16_MAX;
	volatile int32_t t56 = -162;

	t56 = ((x1729<=(x1730|x1731))<<x1732);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x1757 = INT8_MAX;
	static int32_t x1758 = 316538;
	uint8_t x1760 = 23U;
	int32_t t57 = -480761;

	t57 = ((x1757<=(x1758|x1759))<<x1760);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1853 = UINT16_MAX;
	volatile int32_t x1854 = 1776892;
	int16_t x1855 = -1;
	int16_t x1856 = 15;
	int32_t t58 = -7;

	t58 = ((x1853<=(x1854|x1855))<<x1856);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1929 = -1LL;
	uint32_t x1930 = 4U;
	volatile int32_t x1931 = INT32_MAX;
	static uint16_t x1932 = 24U;
	static int32_t t59 = -80;

	t59 = ((x1929<=(x1930|x1931))<<x1932);

	if (t59 != 16777216) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2037 = 1U;
	int16_t x2038 = INT16_MAX;
	int8_t x2039 = -1;
	uint32_t x2040 = 22U;
	int32_t t60 = 0;

	t60 = ((x2037<=(x2038|x2039))<<x2040);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x2138 = 34296390375LLU;
	int8_t x2139 = INT8_MAX;
	uint8_t x2140 = 15U;

	t61 = ((x2137<=(x2138|x2139))<<x2140);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2189 = UINT32_MAX;
	static uint32_t x2190 = 264202170U;
	int64_t x2191 = -1LL;
	uint8_t x2192 = 15U;
	volatile int32_t t62 = -326765;

	t62 = ((x2189<=(x2190|x2191))<<x2192);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2205 = 45080264U;
	uint16_t x2206 = UINT16_MAX;
	uint32_t x2207 = UINT32_MAX;
	static volatile int32_t t63 = -377082;

	t63 = ((x2205<=(x2206|x2207))<<x2208);

	if (t63 != 16) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2214 = 3U;
	int32_t x2215 = INT32_MIN;
	uint16_t x2216 = 23U;
	int32_t t64 = -1126;

	t64 = ((x2213<=(x2214|x2215))<<x2216);

	if (t64 != 8388608) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2237 = UINT64_MAX;
	volatile int32_t t65 = 1583;

	t65 = ((x2237<=(x2238|x2239))<<x2240);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2245 = INT64_MIN;
	static int16_t x2246 = INT16_MIN;
	int16_t x2247 = -1;
	uint8_t x2248 = 1U;
	int32_t t66 = -6;

	t66 = ((x2245<=(x2246|x2247))<<x2248);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2261 = 62LLU;
	volatile int64_t x2262 = INT64_MIN;
	int16_t x2263 = -2;
	volatile int32_t t67 = -14;

	t67 = ((x2261<=(x2262|x2263))<<x2264);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x2281 = 15298715U;
	int16_t x2282 = INT16_MIN;
	uint32_t x2283 = 296223U;
	volatile uint16_t x2284 = 1U;
	int32_t t68 = 11;

	t68 = ((x2281<=(x2282|x2283))<<x2284);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x2318 = UINT32_MAX;
	int8_t x2319 = INT8_MAX;
	volatile uint16_t x2320 = 2U;
	int32_t t69 = -76248;

	t69 = ((x2317<=(x2318|x2319))<<x2320);

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2349 = 11;
	int16_t x2350 = INT16_MAX;
	static uint16_t x2352 = 11U;
	int32_t t70 = -549796737;

	t70 = ((x2349<=(x2350|x2351))<<x2352);

	if (t70 != 2048) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x2365 = -1LL;
	int16_t x2366 = INT16_MIN;
	uint8_t x2367 = 17U;
	int16_t x2368 = 13;

	t71 = ((x2365<=(x2366|x2367))<<x2368);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x2449 = INT64_MIN;
	uint32_t x2450 = 2254561U;
	uint32_t x2451 = 570803625U;
	uint16_t x2452 = 12U;
	int32_t t72 = -5557638;

	t72 = ((x2449<=(x2450|x2451))<<x2452);

	if (t72 != 4096) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2509 = -1;
	int32_t x2511 = INT32_MIN;
	int32_t x2512 = 1;
	int32_t t73 = 252175;

	t73 = ((x2509<=(x2510|x2511))<<x2512);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2513 = UINT64_MAX;
	int32_t x2514 = 4041;
	volatile uint32_t x2515 = 323812U;

	t74 = ((x2513<=(x2514|x2515))<<x2516);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x2529 = -4404;
	int16_t x2531 = INT16_MIN;
	static uint8_t x2532 = 13U;
	int32_t t75 = 30100;

	t75 = ((x2529<=(x2530|x2531))<<x2532);

	if (t75 != 8192) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2650 = 5846209322601378LL;
	uint8_t x2652 = 30U;
	volatile int32_t t76 = -100;

	t76 = ((x2649<=(x2650|x2651))<<x2652);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2661 = INT16_MAX;
	uint8_t x2662 = 2U;
	uint32_t x2663 = UINT32_MAX;
	volatile uint64_t x2664 = 20LLU;
	static volatile int32_t t77 = 124257862;

	t77 = ((x2661<=(x2662|x2663))<<x2664);

	if (t77 != 1048576) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x2673 = UINT64_MAX;
	static volatile int32_t t78 = 3403098;

	t78 = ((x2673<=(x2674|x2675))<<x2676);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2689 = -3;
	int32_t x2690 = INT32_MIN;
	int8_t x2691 = INT8_MIN;
	static uint8_t x2692 = 0U;
	volatile int32_t t79 = 241819;

	t79 = ((x2689<=(x2690|x2691))<<x2692);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2697 = INT16_MIN;
	uint8_t x2698 = 3U;
	int32_t x2699 = -58854;
	int8_t x2700 = 17;

	t80 = ((x2697<=(x2698|x2699))<<x2700);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x2733 = INT16_MAX;
	uint8_t x2734 = UINT8_MAX;
	int32_t x2735 = 167213660;
	int8_t x2736 = 1;

	t81 = ((x2733<=(x2734|x2735))<<x2736);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2749 = INT8_MIN;
	volatile int64_t x2750 = INT64_MIN;
	int32_t x2751 = -1;

	t82 = ((x2749<=(x2750|x2751))<<x2752);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2781 = INT32_MIN;
	int8_t x2782 = INT8_MIN;
	int16_t x2783 = INT16_MIN;
	uint8_t x2784 = 0U;
	volatile int32_t t83 = 21;

	t83 = ((x2781<=(x2782|x2783))<<x2784);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2805 = 11U;
	static int64_t x2807 = -1LL;
	volatile int16_t x2808 = 1;
	int32_t t84 = 408957;

	t84 = ((x2805<=(x2806|x2807))<<x2808);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2821 = 353295LLU;
	int16_t x2822 = 1;
	volatile int64_t x2823 = -1LL;
	uint32_t x2824 = 0U;
	volatile int32_t t85 = -2;

	t85 = ((x2821<=(x2822|x2823))<<x2824);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2877 = INT16_MIN;
	int32_t x2878 = -755728;
	volatile int64_t x2879 = -589509565089084LL;
	int8_t x2880 = 19;
	static volatile int32_t t86 = -441;

	t86 = ((x2877<=(x2878|x2879))<<x2880);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2938 = 2U;
	static int64_t x2940 = 1LL;
	int32_t t87 = 28823330;

	t87 = ((x2937<=(x2938|x2939))<<x2940);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x2969 = -1;
	int32_t x2970 = INT32_MIN;
	volatile uint8_t x2971 = 25U;
	uint32_t x2972 = 8U;
	int32_t t88 = 1272540;

	t88 = ((x2969<=(x2970|x2971))<<x2972);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3177 = -1;
	int8_t x3178 = 5;
	volatile int64_t x3179 = INT64_MIN;
	volatile uint8_t x3180 = 18U;
	int32_t t89 = 226872646;

	t89 = ((x3177<=(x3178|x3179))<<x3180);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3189 = INT8_MIN;
	int64_t x3190 = 163178971630790LL;
	int8_t x3192 = 1;
	volatile int32_t t90 = -14885385;

	t90 = ((x3189<=(x3190|x3191))<<x3192);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3233 = -1LL;
	volatile uint64_t x3234 = 174726LLU;
	int16_t x3236 = 7;

	t91 = ((x3233<=(x3234|x3235))<<x3236);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3241 = 0;
	int8_t x3242 = 15;
	volatile uint64_t x3243 = UINT64_MAX;

	t92 = ((x3241<=(x3242|x3243))<<x3244);

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3373 = -3589;
	static int8_t x3374 = INT8_MIN;
	int32_t t93 = 210077898;

	t93 = ((x3373<=(x3374|x3375))<<x3376);

	if (t93 != 8192) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3414 = INT64_MIN;
	uint32_t x3415 = 37U;
	uint8_t x3416 = 0U;

	t94 = ((x3413<=(x3414|x3415))<<x3416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3425 = 3U;
	volatile int64_t x3426 = 215401338138LL;
	int8_t x3428 = 29;
	int32_t t95 = -28338;

	t95 = ((x3425<=(x3426|x3427))<<x3428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3441 = INT64_MIN;
	int8_t x3442 = -24;
	static int32_t x3443 = 348022207;
	int32_t t96 = 102419974;

	t96 = ((x3441<=(x3442|x3443))<<x3444);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3465 = INT16_MIN;
	static uint32_t x3466 = 870592273U;
	int64_t x3467 = 67516993663528LL;
	int16_t x3468 = 3;

	t97 = ((x3465<=(x3466|x3467))<<x3468);

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3581 = -1LL;
	int8_t x3582 = 1;
	volatile uint8_t x3583 = 7U;
	volatile int32_t t98 = 98342;

	t98 = ((x3581<=(x3582|x3583))<<x3584);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3585 = 1542U;
	int64_t x3587 = -1LL;
	volatile int32_t t99 = 240562;

	t99 = ((x3585<=(x3586|x3587))<<x3588);

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

