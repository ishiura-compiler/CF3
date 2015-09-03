#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = UINT32_MAX;
int16_t x17 = INT16_MAX;
static int8_t x68 = INT8_MIN;
static volatile int8_t x70 = -42;
volatile uint32_t x74 = 429939U;
uint32_t t7 = 125680315U;
uint32_t x88 = 243737167U;
uint16_t x98 = UINT16_MAX;
int8_t x117 = 5;
int8_t x120 = INT8_MAX;
uint16_t x144 = 20U;
int32_t x145 = INT32_MIN;
int32_t x156 = INT32_MIN;
uint64_t x163 = UINT64_MAX;
int64_t x172 = INT64_MIN;
uint32_t t19 = UINT32_MAX;
uint64_t x186 = 9135LLU;
static uint16_t x188 = 315U;
uint64_t x200 = UINT64_MAX;
volatile int8_t x218 = INT8_MAX;
volatile int32_t t23 = 12051453;
uint64_t x265 = 11412506895927767LLU;
uint8_t x282 = UINT8_MAX;
int16_t x331 = INT16_MAX;
uint16_t x339 = UINT16_MAX;
uint16_t x340 = 8233U;
uint16_t x343 = UINT16_MAX;
static uint16_t x349 = 6976U;
int16_t x350 = 1;
int32_t x354 = INT32_MIN;
int64_t x356 = INT64_MIN;
int32_t x411 = -98551792;
uint8_t x491 = 2U;
uint8_t x492 = 1U;
int64_t x506 = INT64_MAX;
volatile uint64_t x582 = UINT64_MAX;
int8_t x604 = -1;
uint32_t x630 = 3U;
volatile uint32_t x647 = UINT32_MAX;
uint32_t t44 = 16270U;
int8_t x687 = 1;
int64_t x769 = INT64_MAX;
int64_t x803 = -1LL;
static volatile int32_t t48 = 854;
static volatile int32_t x811 = -1;
static int64_t t49 = INT64_MAX;
int16_t x825 = INT16_MIN;
static int64_t t52 = -48847995120LL;
uint64_t x985 = 4341LLU;
uint64_t t56 = 4661389357317614774LLU;
int8_t x1064 = -1;
static int32_t x1076 = 343729;
volatile int32_t t62 = -4367;
volatile int16_t x1078 = INT16_MIN;
static volatile uint64_t x1080 = 57523941616591878LLU;
uint64_t t63 = 24LLU;
static uint32_t x1109 = 27231599U;
uint16_t x1190 = 2026U;
static int16_t x1193 = INT16_MAX;
volatile uint32_t t73 = 103U;
volatile int8_t x1254 = 19;
uint16_t x1275 = 0U;
int32_t x1279 = -1;
volatile uint64_t x1296 = UINT64_MAX;
int32_t x1307 = 1;
volatile uint64_t x1318 = UINT64_MAX;
uint16_t x1341 = UINT16_MAX;
static volatile uint32_t x1343 = 7U;
int32_t x1354 = INT32_MAX;
volatile int8_t x1355 = INT8_MIN;
volatile uint64_t t82 = 112576102556769LLU;
uint64_t t85 = 66678044LLU;
uint8_t x1421 = UINT8_MAX;
volatile int32_t t87 = 4105813;
static volatile uint32_t t90 = UINT32_MAX;
volatile int32_t x1484 = INT32_MAX;
int16_t x1499 = INT16_MAX;
uint64_t t93 = UINT64_MAX;
int32_t t95 = 23073925;
uint64_t t96 = UINT64_MAX;
volatile int8_t x1557 = INT8_MIN;
int64_t x1559 = -116LL;
volatile uint64_t t97 = UINT64_MAX;
uint16_t x1564 = 12U;
uint64_t x1569 = 5378783706250343071LLU;


void f0(void) {
	int32_t x1 = -1;
	int32_t x3 = -1;
	int8_t x4 = -1;
	volatile uint32_t t0 = 65553185U;

	t0 = ((x1|x2)<<(x3/x4));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 0U;
	int64_t x14 = 3651970LL;
	static int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t1 = -125044543095301835LL;

	t1 = ((x13|x14)<<(x15/x16));

	if (t1 != 3651970LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x18 = 3U;
	int8_t x19 = INT8_MIN;
	static volatile int16_t x20 = INT16_MAX;
	int32_t t2 = 126;

	t2 = ((x17|x18)<<(x19/x20));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x37 = 25201U;
	static uint16_t x38 = 8U;
	volatile uint64_t x39 = 31652907989975LLU;
	volatile int64_t x40 = INT64_MIN;
	int32_t t3 = -39886592;

	t3 = ((x37|x38)<<(x39/x40));

	if (t3 != 25209) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = 15554;
	int16_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t4 = 489132357;

	t4 = ((x45|x46)<<(x47/x48));

	if (t4 != 15615) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x65 = 2U;
	volatile uint8_t x66 = 69U;
	int8_t x67 = INT8_MIN;
	volatile int32_t t5 = -19;

	t5 = ((x65|x66)<<(x67/x68));

	if (t5 != 142) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x69 = 3227460U;
	static uint8_t x71 = 1U;
	int8_t x72 = INT8_MIN;
	static volatile uint32_t t6 = 3U;

	t6 = ((x69|x70)<<(x71/x72));

	if (t6 != 4294967254U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x73 = UINT32_MAX;
	static uint64_t x75 = UINT64_MAX;
	int16_t x76 = -1;

	t7 = ((x73|x74)<<(x75/x76));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x85 = UINT32_MAX;
	int8_t x86 = 24;
	int8_t x87 = INT8_MAX;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = ((x85|x86)<<(x87/x88));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x89 = UINT32_MAX;
	static int16_t x90 = INT16_MIN;
	int8_t x91 = -1;
	int64_t x92 = -182723491LL;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = ((x89|x90)<<(x91/x92));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x93 = UINT64_MAX;
	volatile int8_t x94 = 12;
	int8_t x95 = 5;
	volatile uint32_t x96 = 34312063U;
	uint64_t t10 = UINT64_MAX;

	t10 = ((x93|x94)<<(x95/x96));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x97 = INT64_MAX;
	static uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MAX;
	static int64_t t11 = INT64_MAX;

	t11 = ((x97|x98)<<(x99/x100));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x105 = UINT64_MAX;
	uint8_t x106 = 18U;
	static int8_t x107 = 13;
	int32_t x108 = INT32_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x105|x106)<<(x107/x108));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x118 = 774820668U;
	uint8_t x119 = 12U;
	static uint32_t t13 = 1835757064U;

	t13 = ((x117|x118)<<(x119/x120));

	if (t13 != 774820669U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x129 = INT8_MIN;
	uint32_t x130 = 673910U;
	uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t14 = 840U;

	t14 = ((x129|x130)<<(x131/x132));

	if (t14 != 4294967286U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x141 = 0U;
	uint64_t x142 = 3LLU;
	uint8_t x143 = 2U;
	volatile uint64_t t15 = 25655364765LLU;

	t15 = ((x141|x142)<<(x143/x144));

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x146 = 240748648U;
	static int32_t x147 = 371;
	int64_t x148 = INT64_MIN;
	uint32_t t16 = 448358U;

	t16 = ((x145|x146)<<(x147/x148));

	if (t16 != 2388232296U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x153 = UINT16_MAX;
	static uint8_t x154 = 14U;
	int16_t x155 = -1;
	volatile int32_t t17 = -1;

	t17 = ((x153|x154)<<(x155/x156));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x161 = UINT16_MAX;
	static volatile int16_t x162 = INT16_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t18 = -411637136;

	t18 = ((x161|x162)<<(x163/x164));

	if (t18 != 131070) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x169 = 269849U;
	int8_t x170 = -1;
	volatile int16_t x171 = -1;

	t19 = ((x169|x170)<<(x171/x172));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x185 = -63;
	int8_t x187 = INT8_MAX;
	uint64_t t20 = 102607LLU;

	t20 = ((x185|x186)<<(x187/x188));

	if (t20 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x197 = 0;
	static int32_t x198 = INT32_MAX;
	uint32_t x199 = 3881U;
	volatile int32_t t21 = INT32_MAX;

	t21 = ((x197|x198)<<(x199/x200));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x217 = 3073U;
	uint8_t x219 = 0U;
	uint64_t x220 = 154LLU;
	static uint32_t t22 = 1770835677U;

	t22 = ((x217|x218)<<(x219/x220));

	if (t22 != 3199U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x229 = 1565U;
	uint8_t x230 = UINT8_MAX;
	static int32_t x231 = -1;
	int64_t x232 = INT64_MAX;

	t23 = ((x229|x230)<<(x231/x232));

	if (t23 != 1791) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 132422U;
	int32_t x235 = -1;
	int16_t x236 = 2449;
	volatile uint32_t t24 = 9750U;

	t24 = ((x233|x234)<<(x235/x236));

	if (t24 != 196607U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x245 = -1;
	uint64_t x246 = 3LLU;
	uint8_t x247 = 37U;
	uint16_t x248 = 12801U;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x245|x246)<<(x247/x248));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = INT32_MIN;
	volatile int64_t x268 = INT64_MIN;
	volatile uint64_t t26 = 724393806226LLU;

	t26 = ((x265|x266)<<(x267/x268));

	if (t26 != 18446744073709537751LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x277 = 1249;
	static int16_t x278 = INT16_MAX;
	volatile uint64_t x279 = 568LLU;
	int8_t x280 = -1;
	int32_t t27 = 185021;

	t27 = ((x277|x278)<<(x279/x280));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x281 = 48671931U;
	static int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	uint32_t t28 = 205627U;

	t28 = ((x281|x282)<<(x283/x284));

	if (t28 != 97343998U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 62U;
	volatile uint16_t x324 = UINT16_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x321|x322)<<(x323/x324));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint32_t x332 = 120079U;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x329|x330)<<(x331/x332));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x337 = UINT32_MAX;
	uint8_t x338 = 0U;
	volatile uint32_t t31 = 10478923U;

	t31 = ((x337|x338)<<(x339/x340));

	if (t31 != 4294967168U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x341 = 115536LLU;
	static int32_t x342 = INT32_MAX;
	static int16_t x344 = INT16_MAX;
	volatile uint64_t t32 = 484146436527LLU;

	t32 = ((x341|x342)<<(x343/x344));

	if (t32 != 8589934588LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x351 = 38U;
	int64_t x352 = 1680934668LL;
	int32_t t33 = -153559;

	t33 = ((x349|x350)<<(x351/x352));

	if (t33 != 6977) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x353 = 389240540LLU;
	volatile int64_t x355 = -1LL;
	volatile uint64_t t34 = 7239984352403598110LLU;

	t34 = ((x353|x354)<<(x355/x356));

	if (t34 != 18446744071951308508LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	static volatile uint64_t x363 = 1LLU;
	int16_t x364 = -1;
	uint32_t t35 = UINT32_MAX;

	t35 = ((x361|x362)<<(x363/x364));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x409 = -1LL;
	uint64_t x410 = UINT64_MAX;
	int32_t x412 = INT32_MIN;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x409|x410)<<(x411/x412));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x469 = 369845LLU;
	static int8_t x470 = -1;
	int64_t x471 = -611171LL;
	uint32_t x472 = 134476054U;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x469|x470)<<(x471/x472));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x489 = 725LLU;
	int32_t x490 = INT32_MIN;
	uint64_t t38 = 1273LLU;

	t38 = ((x489|x490)<<(x491/x492));

	if (t38 != 18446744065119619924LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x505 = UINT32_MAX;
	uint16_t x507 = 10U;
	int8_t x508 = INT8_MAX;
	int64_t t39 = INT64_MAX;

	t39 = ((x505|x506)<<(x507/x508));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x517 = 8;
	volatile uint16_t x518 = 3365U;
	uint16_t x519 = UINT16_MAX;
	int32_t x520 = 46557;
	static int32_t t40 = 3;

	t40 = ((x517|x518)<<(x519/x520));

	if (t40 != 6746) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x581 = -1;
	volatile int16_t x583 = 59;
	int16_t x584 = INT16_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x581|x582)<<(x583/x584));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x601 = UINT16_MAX;
	volatile uint16_t x602 = 12U;
	uint64_t x603 = 1087792471649869LLU;
	int32_t t42 = -12;

	t42 = ((x601|x602)<<(x603/x604));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x629 = 0;
	static int8_t x631 = INT8_MIN;
	int16_t x632 = INT16_MIN;
	volatile uint32_t t43 = 1594186977U;

	t43 = ((x629|x630)<<(x631/x632));

	if (t43 != 3U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x645 = 23309297U;
	int32_t x646 = INT32_MIN;
	static int8_t x648 = INT8_MIN;

	t44 = ((x645|x646)<<(x647/x648));

	if (t44 != 46618594U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x685 = INT16_MIN;
	uint64_t x686 = UINT64_MAX;
	int16_t x688 = INT16_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = ((x685|x686)<<(x687/x688));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x753 = 3U;
	int16_t x754 = -1;
	static volatile int8_t x755 = INT8_MIN;
	uint8_t x756 = UINT8_MAX;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = ((x753|x754)<<(x755/x756));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x770 = UINT16_MAX;
	static volatile uint32_t x771 = 2033528U;
	static volatile int32_t x772 = -1;
	volatile int64_t t47 = INT64_MAX;

	t47 = ((x769|x770)<<(x771/x772));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x801 = 0;
	volatile int32_t x802 = 83084;
	uint16_t x804 = 26U;

	t48 = ((x801|x802)<<(x803/x804));

	if (t48 != 83084) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x809 = INT64_MAX;
	int64_t x810 = INT64_MAX;
	uint16_t x812 = 34U;

	t49 = ((x809|x810)<<(x811/x812));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x826 = 822022192021280LLU;
	uint8_t x827 = 0U;
	volatile int16_t x828 = 2730;
	uint64_t t50 = 79889296835LLU;

	t50 = ((x825|x826)<<(x827/x828));

	if (t50 != 18446744073709535008LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x897 = INT8_MAX;
	int64_t x898 = 1LL;
	static int8_t x899 = 1;
	uint64_t x900 = UINT64_MAX;
	static volatile int64_t t51 = -16726195749785LL;

	t51 = ((x897|x898)<<(x899/x900));

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x949 = 235515657241127326LL;
	int32_t x950 = INT32_MAX;
	uint8_t x951 = 66U;
	int8_t x952 = INT8_MAX;

	t52 = ((x949|x950)<<(x951/x952));

	if (t52 != 235515659105075199LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x953 = 7U;
	uint64_t x954 = 563518183812525006LLU;
	int16_t x955 = -1;
	int8_t x956 = INT8_MIN;
	volatile uint64_t t53 = 24LLU;

	t53 = ((x953|x954)<<(x955/x956));

	if (t53 != 563518183812525007LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x981 = INT8_MAX;
	uint32_t x982 = 33024U;
	int8_t x983 = -1;
	int16_t x984 = INT16_MIN;
	static uint32_t t54 = 1524389447U;

	t54 = ((x981|x982)<<(x983/x984));

	if (t54 != 33151U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x986 = INT64_MIN;
	uint16_t x987 = 1121U;
	volatile int32_t x988 = INT32_MIN;
	volatile uint64_t t55 = 12891129068LLU;

	t55 = ((x985|x986)<<(x987/x988));

	if (t55 != 9223372036854780149LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x997 = 0;
	volatile uint64_t x998 = 44LLU;
	int8_t x999 = INT8_MIN;
	int64_t x1000 = INT64_MAX;

	t56 = ((x997|x998)<<(x999/x1000));

	if (t56 != 44LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1005 = INT64_MIN;
	volatile uint64_t x1006 = UINT64_MAX;
	int8_t x1007 = INT8_MIN;
	static int32_t x1008 = INT32_MIN;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x1005|x1006)<<(x1007/x1008));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1013 = UINT64_MAX;
	uint64_t x1014 = UINT64_MAX;
	static int8_t x1015 = INT8_MAX;
	volatile uint32_t x1016 = 10085447U;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x1013|x1014)<<(x1015/x1016));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1017 = 28134U;
	int64_t x1018 = INT64_MAX;
	uint64_t x1019 = 287612589174LLU;
	int64_t x1020 = INT64_MIN;
	int64_t t59 = INT64_MAX;

	t59 = ((x1017|x1018)<<(x1019/x1020));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1033 = INT16_MAX;
	int8_t x1034 = INT8_MAX;
	int16_t x1035 = 89;
	int64_t x1036 = INT64_MAX;
	int32_t t60 = 12;

	t60 = ((x1033|x1034)<<(x1035/x1036));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1061 = 3083923658LLU;
	volatile int32_t x1062 = -187762175;
	uint64_t x1063 = 139569322605710971LLU;
	static volatile uint64_t t61 = 189578576506LLU;

	t61 = ((x1061|x1062)<<(x1063/x1064));

	if (t61 != 18446744073573169867LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1073 = 252U;
	static int8_t x1074 = INT8_MAX;
	int8_t x1075 = -1;

	t62 = ((x1073|x1074)<<(x1075/x1076));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1077 = 245LLU;
	static uint8_t x1079 = 3U;

	t63 = ((x1077|x1078)<<(x1079/x1080));

	if (t63 != 18446744073709519093LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1105 = 642LLU;
	int16_t x1106 = 12224;
	uint32_t x1107 = UINT32_MAX;
	uint64_t x1108 = UINT64_MAX;
	uint64_t t64 = 926794867265044LLU;

	t64 = ((x1105|x1106)<<(x1107/x1108));

	if (t64 != 12226LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x1110 = -5;
	static int64_t x1111 = INT64_MAX;
	uint64_t x1112 = UINT64_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = ((x1109|x1110)<<(x1111/x1112));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x1113 = INT8_MIN;
	uint64_t x1114 = UINT64_MAX;
	int8_t x1115 = 1;
	int32_t x1116 = INT32_MIN;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x1113|x1114)<<(x1115/x1116));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1121 = 39350628216LLU;
	int16_t x1122 = INT16_MIN;
	int8_t x1123 = 1;
	int32_t x1124 = INT32_MIN;
	static volatile uint64_t t67 = 2330258151860879407LLU;

	t67 = ((x1121|x1122)<<(x1123/x1124));

	if (t67 != 18446744073709547384LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x1133 = 13334026904809301LLU;
	int16_t x1134 = 6231;
	int16_t x1135 = -1;
	static uint8_t x1136 = 112U;
	uint64_t t68 = 195339527LLU;

	t68 = ((x1133|x1134)<<(x1135/x1136));

	if (t68 != 13334026904813399LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1169 = 0LL;
	volatile uint16_t x1170 = 1U;
	int16_t x1171 = -14;
	int8_t x1172 = 18;
	volatile int64_t t69 = 3855314941197407773LL;

	t69 = ((x1169|x1170)<<(x1171/x1172));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1185 = INT64_MIN;
	static uint64_t x1186 = 50137077264849LLU;
	uint64_t x1187 = 5766962325408LLU;
	uint64_t x1188 = 2678473004557LLU;
	static volatile uint64_t t70 = 4847LLU;

	t70 = ((x1185|x1186)<<(x1187/x1188));

	if (t70 != 200548309059396LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x1189 = 11835U;
	uint8_t x1191 = 26U;
	int64_t x1192 = INT64_MAX;
	uint32_t t71 = 22564U;

	t71 = ((x1189|x1190)<<(x1191/x1192));

	if (t71 != 12283U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1194 = 2223U;
	volatile int32_t x1195 = INT32_MAX;
	int64_t x1196 = INT64_MIN;
	int32_t t72 = 395384;

	t72 = ((x1193|x1194)<<(x1195/x1196));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1225 = 161U;
	static uint32_t x1226 = 712U;
	int8_t x1227 = INT8_MIN;
	int32_t x1228 = 5925;

	t73 = ((x1225|x1226)<<(x1227/x1228));

	if (t73 != 745U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1253 = 1035045U;
	volatile uint16_t x1255 = 1510U;
	int64_t x1256 = INT64_MIN;
	static uint32_t t74 = 19U;

	t74 = ((x1253|x1254)<<(x1255/x1256));

	if (t74 != 1035063U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1273 = 14656U;
	static int8_t x1274 = 0;
	volatile int32_t x1276 = -1;
	static volatile int32_t t75 = -2786;

	t75 = ((x1273|x1274)<<(x1275/x1276));

	if (t75 != 14656) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1277 = -26625393261051445LL;
	uint64_t x1278 = UINT64_MAX;
	volatile uint8_t x1280 = 3U;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x1277|x1278)<<(x1279/x1280));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x1293 = 282U;
	int32_t x1294 = -314811136;
	int8_t x1295 = 5;
	volatile uint32_t t77 = 54U;

	t77 = ((x1293|x1294)<<(x1295/x1296));

	if (t77 != 3980156186U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1305 = 975132928U;
	static uint16_t x1306 = UINT16_MAX;
	int64_t x1308 = INT64_MIN;
	uint32_t t78 = 8U;

	t78 = ((x1305|x1306)<<(x1307/x1308));

	if (t78 != 975175679U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1317 = 29832;
	uint32_t x1319 = 40U;
	uint16_t x1320 = 1743U;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x1317|x1318)<<(x1319/x1320));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x1342 = 23170U;
	int8_t x1344 = -7;
	volatile int32_t t80 = -1;

	t80 = ((x1341|x1342)<<(x1343/x1344));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1353 = 0U;
	static volatile uint16_t x1356 = 331U;
	uint32_t t81 = 13875U;

	t81 = ((x1353|x1354)<<(x1355/x1356));

	if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1369 = 43LLU;
	int8_t x1370 = INT8_MIN;
	uint32_t x1371 = UINT32_MAX;
	volatile int16_t x1372 = INT16_MIN;

	t82 = ((x1369|x1370)<<(x1371/x1372));

	if (t82 != 18446744073709551446LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1377 = 49452870155424429LLU;
	int32_t x1378 = INT32_MIN;
	int32_t x1379 = -3945;
	int32_t x1380 = INT32_MIN;
	uint64_t t83 = 12148146726LLU;

	t83 = ((x1377|x1378)<<(x1379/x1380));

	if (t83 != 18446744071943541421LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x1397 = 45506459;
	int64_t x1398 = INT64_MAX;
	static int8_t x1399 = INT8_MIN;
	int16_t x1400 = INT16_MAX;
	int64_t t84 = INT64_MAX;

	t84 = ((x1397|x1398)<<(x1399/x1400));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1413 = 739LLU;
	int64_t x1414 = -161898417233533798LL;
	int8_t x1415 = INT8_MIN;
	int64_t x1416 = INT64_MAX;

	t85 = ((x1413|x1414)<<(x1415/x1416));

	if (t85 != 18284845656476018427LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1422 = 1U;
	volatile int16_t x1423 = INT16_MAX;
	static volatile int16_t x1424 = INT16_MAX;
	volatile int32_t t86 = 503607;

	t86 = ((x1421|x1422)<<(x1423/x1424));

	if (t86 != 510) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x1425 = 23U;
	volatile int16_t x1426 = 0;
	static volatile int16_t x1427 = INT16_MIN;
	static int32_t x1428 = INT32_MAX;

	t87 = ((x1425|x1426)<<(x1427/x1428));

	if (t87 != 23) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x1437 = 6491LL;
	uint32_t x1438 = 8788839U;
	int64_t x1439 = -1LL;
	volatile int8_t x1440 = -1;
	int64_t t88 = -1LL;

	t88 = ((x1437|x1438)<<(x1439/x1440));

	if (t88 != 17577726LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x1465 = UINT32_MAX;
	volatile int32_t x1466 = INT32_MIN;
	static int32_t x1467 = INT32_MIN;
	int64_t x1468 = INT64_MIN;
	uint32_t t89 = UINT32_MAX;

	t89 = ((x1465|x1466)<<(x1467/x1468));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1473 = -1;
	uint32_t x1474 = 7808U;
	int16_t x1475 = INT16_MAX;
	int32_t x1476 = INT32_MAX;

	t90 = ((x1473|x1474)<<(x1475/x1476));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1481 = INT16_MIN;
	uint32_t x1482 = UINT32_MAX;
	static int32_t x1483 = 17785252;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = ((x1481|x1482)<<(x1483/x1484));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x1497 = 36564150114LL;
	uint8_t x1498 = UINT8_MAX;
	uint32_t x1500 = 338736U;
	int64_t t92 = 3254502426LL;

	t92 = ((x1497|x1498)<<(x1499/x1500));

	if (t92 != 36564150271LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1529 = 818;
	static uint64_t x1530 = UINT64_MAX;
	volatile int8_t x1531 = INT8_MAX;
	volatile int16_t x1532 = -2393;

	t93 = ((x1529|x1530)<<(x1531/x1532));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x1537 = UINT64_MAX;
	static uint32_t x1538 = 5053U;
	int32_t x1539 = -303;
	int32_t x1540 = 2082902;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x1537|x1538)<<(x1539/x1540));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x1549 = UINT8_MAX;
	uint8_t x1550 = UINT8_MAX;
	uint16_t x1551 = UINT16_MAX;
	int64_t x1552 = -5646494LL;

	t95 = ((x1549|x1550)<<(x1551/x1552));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1553 = 61U;
	uint64_t x1554 = UINT64_MAX;
	static int16_t x1555 = -1;
	volatile uint16_t x1556 = UINT16_MAX;

	t96 = ((x1553|x1554)<<(x1555/x1556));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1558 = UINT64_MAX;
	static volatile int32_t x1560 = INT32_MAX;

	t97 = ((x1557|x1558)<<(x1559/x1560));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x1561 = 14273059U;
	volatile int64_t x1562 = 14LL;
	int8_t x1563 = -1;
	static volatile int64_t t98 = -5865177LL;

	t98 = ((x1561|x1562)<<(x1563/x1564));

	if (t98 != 14273071LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1570 = 1;
	int8_t x1571 = INT8_MIN;
	static uint64_t x1572 = 3299561302997678581LLU;
	volatile uint64_t t99 = 349393401905616617LLU;

	t99 = ((x1569|x1570)<<(x1571/x1572));

	if (t99 != 6100381936625013728LLU) { NG(); } else { ; }
	
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

