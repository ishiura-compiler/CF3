#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MIN;
int64_t x20 = -363LL;
uint8_t x28 = 0U;
volatile int64_t t2 = -359LL;
uint32_t x38 = 7701U;
volatile int8_t x40 = INT8_MIN;
uint32_t x94 = 9U;
uint64_t x96 = 1622166250LLU;
int32_t x103 = INT32_MIN;
uint32_t x104 = 265326753U;
volatile int32_t x126 = INT32_MAX;
int16_t x127 = INT16_MIN;
static int32_t x135 = INT32_MAX;
uint64_t x143 = 262308962300829LLU;
volatile int64_t t21 = -1LL;
uint64_t x201 = UINT64_MAX;
int64_t x204 = INT64_MIN;
uint64_t x214 = 102959454855715LLU;
int64_t x247 = INT64_MIN;
int8_t x248 = INT8_MAX;
int16_t x283 = -11;
uint8_t x288 = 33U;
static volatile int64_t x296 = -1LL;
uint16_t x305 = 28329U;
uint32_t x316 = 166100U;
static volatile uint64_t t36 = 12LLU;
int32_t x338 = INT32_MIN;
int32_t x340 = 46109280;
static int8_t x354 = -1;
uint32_t x363 = 1333469U;
uint64_t t40 = 120789LLU;
int16_t x410 = -1;
int32_t x426 = 742;
uint64_t x430 = 158995346224179LLU;
static uint32_t x436 = 197740U;
int8_t x437 = INT8_MAX;
volatile int32_t t50 = -153;
uint8_t x465 = 3U;
volatile int8_t x466 = INT8_MAX;
int32_t x467 = -1;
volatile int32_t t52 = -7831141;
uint32_t x480 = 369460U;
volatile int32_t t53 = INT32_MAX;
static uint64_t x483 = 2895936385LLU;
int16_t x497 = INT16_MAX;
volatile int32_t x500 = INT32_MIN;
static volatile uint64_t t57 = 32903486LLU;
uint16_t x514 = UINT16_MAX;
int32_t x587 = 2208942;
int32_t t61 = INT32_MAX;
volatile int64_t x594 = 15087981LL;
volatile uint8_t x596 = 86U;
int8_t x600 = INT8_MIN;
int64_t x630 = 2074855535845452437LL;
uint64_t x638 = 247532520931959LLU;
volatile uint64_t t67 = 28027936867LLU;
int8_t x680 = 2;
static uint64_t x690 = UINT64_MAX;
int32_t x692 = INT32_MIN;
int8_t x697 = -1;
int32_t t75 = 813254;
static int32_t x739 = -182179725;
int16_t x748 = INT16_MIN;
static int64_t x765 = INT64_MIN;
uint64_t x767 = 1406757469277315LLU;
volatile int32_t t81 = INT32_MAX;
static int16_t x807 = INT16_MIN;
int32_t x817 = INT32_MAX;
uint16_t x818 = 4U;
static volatile int8_t x820 = INT8_MIN;
volatile uint64_t t84 = 5747705521LLU;
int16_t x833 = -3;
uint64_t x845 = 1063202LLU;
uint64_t t88 = 2081445793393828LLU;
int32_t x851 = INT32_MIN;
int32_t x853 = -1;
int32_t x865 = -1;
int8_t x874 = INT8_MAX;
int32_t x882 = 25;
volatile uint32_t t93 = 2252U;
uint64_t x894 = 65291478417721418LLU;
static int16_t x897 = INT16_MAX;
int16_t x898 = 1;
int32_t x902 = 23452856;
uint16_t x909 = 2619U;
static uint64_t t99 = UINT64_MAX;


void f0(void) {
	static uint16_t x5 = 1U;
	static uint16_t x6 = UINT16_MAX;
	int16_t x7 = 6298;
	volatile int32_t t0 = 45;

	t0 = ((x5|x6)<<(x7<=x8));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x17 = 20U;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	volatile int32_t t1 = INT32_MAX;

	t1 = ((x17|x18)<<(x19<=x20));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MAX;
	int64_t x26 = 35105289968LL;
	uint64_t x27 = UINT64_MAX;

	t2 = ((x25|x26)<<(x27<=x28));

	if (t2 != 35105308671LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 5384LLU;
	static int64_t x30 = -62714524659034007LL;
	static int16_t x31 = INT16_MAX;
	int8_t x32 = 1;
	volatile uint64_t t3 = 318185580LLU;

	t3 = ((x29|x30)<<(x31<=x32));

	if (t3 != 18384029549050518889LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x37 = INT8_MAX;
	int64_t x39 = INT64_MAX;
	uint32_t t4 = 1455832433U;

	t4 = ((x37|x38)<<(x39<=x40));

	if (t4 != 7807U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = INT16_MAX;
	uint16_t x46 = UINT16_MAX;
	int16_t x47 = -1;
	int8_t x48 = INT8_MAX;
	volatile int32_t t5 = -1;

	t5 = ((x45|x46)<<(x47<=x48));

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x69 = 7U;
	int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	static int32_t x72 = INT32_MIN;
	uint32_t t6 = 103U;

	t6 = ((x69|x70)<<(x71<=x72));

	if (t6 != 14U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x73 = -1;
	uint32_t x74 = 216129244U;
	static int32_t x75 = -3;
	int64_t x76 = INT64_MAX;
	volatile uint32_t t7 = 23U;

	t7 = ((x73|x74)<<(x75<=x76));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x77 = UINT16_MAX;
	int8_t x78 = INT8_MAX;
	static uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;
	volatile int32_t t8 = -110705237;

	t8 = ((x77|x78)<<(x79<=x80));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x85 = UINT16_MAX;
	uint16_t x86 = 15280U;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	static int32_t t9 = -7409;

	t9 = ((x85|x86)<<(x87<=x88));

	if (t9 != 131070) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x89 = 17140210LLU;
	int16_t x90 = -1657;
	volatile int8_t x91 = -1;
	volatile int8_t x92 = INT8_MIN;
	uint64_t t10 = 14872555058752012LLU;

	t10 = ((x89|x90)<<(x91<=x92));

	if (t10 != 18446744073709550071LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x93 = INT8_MIN;
	int16_t x95 = -1;
	uint32_t t11 = 53U;

	t11 = ((x93|x94)<<(x95<=x96));

	if (t11 != 4294967177U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x101 = 11LLU;
	static volatile int32_t x102 = -1;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x101|x102)<<(x103<=x104));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint64_t x114 = 390043810462682936LLU;
	int32_t x115 = -13;
	int32_t x116 = INT32_MIN;
	static volatile uint64_t t13 = 5390LLU;

	t13 = ((x113|x114)<<(x115<=x116));

	if (t13 != 390043810462683135LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x117 = 3490U;
	uint64_t x118 = UINT64_MAX;
	static int32_t x119 = 4592;
	static volatile uint16_t x120 = 26U;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x117|x118)<<(x119<=x120));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x125 = 149U;
	int16_t x128 = -1;
	volatile uint32_t t15 = 2813U;

	t15 = ((x125|x126)<<(x127<=x128));

	if (t15 != 4294967294U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MAX;
	int16_t x131 = 6;
	uint16_t x132 = 110U;
	volatile uint32_t t16 = 100611306U;

	t16 = ((x129|x130)<<(x131<=x132));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x133 = INT32_MAX;
	uint64_t x134 = UINT64_MAX;
	int16_t x136 = -1;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x133|x134)<<(x135<=x136));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x141 = UINT64_MAX;
	int16_t x142 = INT16_MIN;
	static int16_t x144 = INT16_MIN;
	uint64_t t18 = 8942LLU;

	t18 = ((x141|x142)<<(x143<=x144));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x145 = 189892813;
	int32_t x146 = 1057;
	volatile int32_t x147 = -1;
	int32_t x148 = INT32_MAX;
	int32_t t19 = 1;

	t19 = ((x145|x146)<<(x147<=x148));

	if (t19 != 379787738) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x161 = 133426897LL;
	int64_t x162 = 1858015174414575145LL;
	int16_t x163 = 141;
	int8_t x164 = -1;
	static volatile int64_t t20 = 6LL;

	t20 = ((x161|x162)<<(x163<=x164));

	if (t20 != 1858015174510243577LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x181 = UINT32_MAX;
	int64_t x182 = 23LL;
	static uint32_t x183 = 3438U;
	int16_t x184 = -23;

	t21 = ((x181|x182)<<(x183<=x184));

	if (t21 != 8589934590LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x185 = 1161688U;
	uint16_t x186 = UINT16_MAX;
	static uint32_t x187 = UINT32_MAX;
	int64_t x188 = -1LL;
	static uint32_t t22 = 1246U;

	t22 = ((x185|x186)<<(x187<=x188));

	if (t22 != 1179647U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x202 = 2U;
	static int8_t x203 = INT8_MIN;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x201|x202)<<(x203<=x204));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x213 = 17U;
	int8_t x215 = -25;
	static int32_t x216 = INT32_MIN;
	uint64_t t24 = 314401LLU;

	t24 = ((x213|x214)<<(x215<=x216));

	if (t24 != 102959454855731LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x241 = 517U;
	static uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 31591972LLU;
	static uint16_t x244 = UINT16_MAX;
	static uint64_t t25 = UINT64_MAX;

	t25 = ((x241|x242)<<(x243<=x244));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x245 = 106481033LLU;
	volatile int8_t x246 = -1;
	uint64_t t26 = 339562523974198LLU;

	t26 = ((x245|x246)<<(x247<=x248));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x253 = 101090LLU;
	static uint64_t x254 = UINT64_MAX;
	int64_t x255 = -1LL;
	uint16_t x256 = 323U;
	uint64_t t27 = 61LLU;

	t27 = ((x253|x254)<<(x255<=x256));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile uint32_t x266 = 94U;
	uint64_t x267 = UINT64_MAX;
	volatile uint64_t x268 = UINT64_MAX;
	volatile uint32_t t28 = 58918U;

	t28 = ((x265|x266)<<(x267<=x268));

	if (t28 != 4294967228U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x281 = 1;
	int8_t x282 = INT8_MAX;
	static int64_t x284 = INT64_MIN;
	volatile int32_t t29 = -520107;

	t29 = ((x281|x282)<<(x283<=x284));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x285 = 32324001LLU;
	int64_t x286 = -211831LL;
	uint32_t x287 = 1U;
	uint64_t t30 = 121322596932LLU;

	t30 = ((x285|x286)<<(x287<=x288));

	if (t30 != 18446744073709288274LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x289 = 2889595993LLU;
	static int64_t x290 = INT64_MIN;
	static uint64_t x291 = 11271397413LLU;
	int16_t x292 = INT16_MIN;
	uint64_t t31 = 9443783LLU;

	t31 = ((x289|x290)<<(x291<=x292));

	if (t31 != 5779191986LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x294 = INT16_MIN;
	int32_t x295 = INT32_MIN;
	static uint32_t t32 = 191U;

	t32 = ((x293|x294)<<(x295<=x296));

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MAX;
	uint8_t x304 = 23U;
	static volatile int32_t t33 = 2129;

	t33 = ((x301|x302)<<(x303<=x304));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x306 = INT16_MAX;
	int16_t x307 = -1;
	static volatile uint16_t x308 = UINT16_MAX;
	int32_t t34 = 119168;

	t34 = ((x305|x306)<<(x307<=x308));

	if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	static int64_t x315 = 3610365320054LL;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = ((x313|x314)<<(x315<=x316));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x329 = UINT64_MAX;
	static volatile uint16_t x330 = 12968U;
	uint32_t x331 = UINT32_MAX;
	static uint64_t x332 = 12417831713LLU;

	t36 = ((x329|x330)<<(x331<=x332));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x337 = 14161165U;
	uint32_t x339 = UINT32_MAX;
	uint32_t t37 = 4U;

	t37 = ((x337|x338)<<(x339<=x340));

	if (t37 != 2161644813U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x353 = UINT32_MAX;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -54;
	static uint32_t t38 = UINT32_MAX;

	t38 = ((x353|x354)<<(x355<=x356));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x361 = INT32_MIN;
	uint64_t x362 = 69278LLU;
	static uint8_t x364 = UINT8_MAX;
	uint64_t t39 = 555925058938641431LLU;

	t39 = ((x361|x362)<<(x363<=x364));

	if (t39 != 18446744071562137246LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x365 = 1045LLU;
	volatile uint32_t x366 = 3U;
	int8_t x367 = INT8_MIN;
	int64_t x368 = 1LL;

	t40 = ((x365|x366)<<(x367<=x368));

	if (t40 != 2094LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x373 = 1487458912083877LL;
	int64_t x374 = 90LL;
	volatile int32_t x375 = INT32_MAX;
	uint16_t x376 = 9366U;
	int64_t t41 = -111475038LL;

	t41 = ((x373|x374)<<(x375<=x376));

	if (t41 != 1487458912083967LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = 4966U;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -5;
	volatile uint32_t t42 = 27760927U;

	t42 = ((x385|x386)<<(x387<=x388));

	if (t42 != 4294911692U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x397 = 66314296221244LLU;
	volatile int64_t x398 = INT64_MIN;
	volatile uint8_t x399 = 98U;
	int8_t x400 = 0;
	static volatile uint64_t t43 = 597803899459584LLU;

	t43 = ((x397|x398)<<(x399<=x400));

	if (t43 != 9223438351150997052LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x405 = 905847448U;
	static int8_t x406 = -1;
	int8_t x407 = 23;
	volatile uint16_t x408 = 7U;
	uint32_t t44 = UINT32_MAX;

	t44 = ((x405|x406)<<(x407<=x408));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x409 = 3329LLU;
	uint32_t x411 = 891147U;
	static int64_t x412 = -31736856511166LL;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x409|x410)<<(x411<=x412));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x421 = 0LL;
	uint32_t x422 = UINT32_MAX;
	uint8_t x423 = 1U;
	int8_t x424 = 0;
	volatile int64_t t46 = -4185LL;

	t46 = ((x421|x422)<<(x423<=x424));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x425 = INT16_MAX;
	volatile int32_t x427 = 15376;
	static int16_t x428 = INT16_MIN;
	int32_t t47 = 43932;

	t47 = ((x425|x426)<<(x427<=x428));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x429 = UINT64_MAX;
	uint64_t x431 = 4LLU;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t48 = 153594590LLU;

	t48 = ((x429|x430)<<(x431<=x432));

	if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x433 = 3682639;
	static uint16_t x434 = 225U;
	int64_t x435 = -1LL;
	static int32_t t49 = 23035;

	t49 = ((x433|x434)<<(x435<=x436));

	if (t49 != 7365598) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x438 = 4U;
	volatile uint16_t x439 = 2U;
	static int8_t x440 = INT8_MIN;

	t50 = ((x437|x438)<<(x439<=x440));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x445 = INT8_MAX;
	int32_t x446 = INT32_MAX;
	uint8_t x447 = UINT8_MAX;
	volatile int32_t x448 = INT32_MIN;
	int32_t t51 = INT32_MAX;

	t51 = ((x445|x446)<<(x447<=x448));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x468 = UINT32_MAX;

	t52 = ((x465|x466)<<(x467<=x468));

	if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x477 = INT8_MAX;
	static int32_t x478 = INT32_MAX;
	uint32_t x479 = 6338545U;

	t53 = ((x477|x478)<<(x479<=x480));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x481 = -1;
	uint64_t x482 = 3487807LLU;
	volatile int16_t x484 = INT16_MIN;
	uint64_t t54 = 3707167LLU;

	t54 = ((x481|x482)<<(x483<=x484));

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x493 = INT16_MIN;
	uint64_t x494 = 2886500600765107051LLU;
	uint16_t x495 = 7U;
	uint8_t x496 = 1U;
	volatile uint64_t t55 = 2068918835006548LLU;

	t55 = ((x493|x494)<<(x495<=x496));

	if (t55 != 18446744073709538155LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x498 = UINT64_MAX;
	volatile uint64_t x499 = 16647477201LLU;
	volatile uint64_t t56 = 51158830LLU;

	t56 = ((x497|x498)<<(x499<=x500));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x501 = INT8_MAX;
	volatile uint64_t x502 = 10944412756LLU;
	volatile int64_t x503 = -1LL;
	int64_t x504 = INT64_MAX;

	t57 = ((x501|x502)<<(x503<=x504));

	if (t57 != 21888825598LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x513 = 1;
	int64_t x515 = -7587892LL;
	uint8_t x516 = UINT8_MAX;
	static volatile int32_t t58 = -119842;

	t58 = ((x513|x514)<<(x515<=x516));

	if (t58 != 131070) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x525 = 1649U;
	int8_t x526 = INT8_MAX;
	int16_t x527 = INT16_MAX;
	static int8_t x528 = -1;
	volatile int32_t t59 = -1325;

	t59 = ((x525|x526)<<(x527<=x528));

	if (t59 != 1663) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x585 = 16U;
	int8_t x586 = 43;
	uint8_t x588 = UINT8_MAX;
	uint32_t t60 = 1419043692U;

	t60 = ((x585|x586)<<(x587<=x588));

	if (t60 != 59U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x589 = INT32_MAX;
	int32_t x590 = INT32_MAX;
	volatile int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MIN;

	t61 = ((x589|x590)<<(x591<=x592));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x593 = UINT64_MAX;
	uint64_t x595 = 111730192372LLU;
	uint64_t t62 = UINT64_MAX;

	t62 = ((x593|x594)<<(x595<=x596));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x597 = 228991642549587604LL;
	uint8_t x598 = UINT8_MAX;
	int64_t x599 = INT64_MIN;
	volatile int64_t t63 = 63282647121LL;

	t63 = ((x597|x598)<<(x599<=x600));

	if (t63 != 457983285099175422LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x605 = INT16_MAX;
	static uint8_t x606 = UINT8_MAX;
	static int64_t x607 = INT64_MAX;
	uint64_t x608 = 4257002LLU;
	int32_t t64 = 11;

	t64 = ((x605|x606)<<(x607<=x608));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x613 = 738U;
	int8_t x614 = INT8_MIN;
	static int16_t x615 = -1;
	uint8_t x616 = UINT8_MAX;
	uint32_t t65 = 1U;

	t65 = ((x613|x614)<<(x615<=x616));

	if (t65 != 4294967236U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x629 = UINT32_MAX;
	int32_t x631 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	int64_t t66 = 15595860570979924LL;

	t66 = ((x629|x630)<<(x631<=x632));

	if (t66 != 4149711072552550398LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x637 = 115705316544893LLU;
	int8_t x639 = -1;
	static int16_t x640 = -1;

	t67 = ((x637|x638)<<(x639<=x640));

	if (t67 != 512885666555646LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x657 = INT32_MAX;
	volatile uint32_t x658 = 16262324U;
	int32_t x659 = -1;
	static int64_t x660 = 395781006129196555LL;
	volatile uint32_t t68 = 395U;

	t68 = ((x657|x658)<<(x659<=x660));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x669 = INT32_MIN;
	static uint64_t x670 = 19440931573247LLU;
	volatile uint16_t x671 = 4973U;
	int64_t x672 = -14075LL;
	volatile uint64_t t69 = 2045565LLU;

	t69 = ((x669|x670)<<(x671<=x672));

	if (t69 != 18446744073471659519LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x677 = UINT16_MAX;
	volatile uint8_t x678 = UINT8_MAX;
	static int16_t x679 = INT16_MIN;
	volatile int32_t t70 = 793283987;

	t70 = ((x677|x678)<<(x679<=x680));

	if (t70 != 131070) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x689 = 74LLU;
	static volatile int16_t x691 = 2;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x689|x690)<<(x691<=x692));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x698 = 93745U;
	uint64_t x699 = 203503106592923LLU;
	int32_t x700 = 69;
	uint32_t t72 = UINT32_MAX;

	t72 = ((x697|x698)<<(x699<=x700));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x717 = 119648676845999575LLU;
	volatile uint8_t x718 = 0U;
	int8_t x719 = INT8_MAX;
	static int32_t x720 = 15;
	volatile uint64_t t73 = 12521500LLU;

	t73 = ((x717|x718)<<(x719<=x720));

	if (t73 != 119648676845999575LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x725 = INT16_MIN;
	uint64_t x726 = 394LLU;
	int64_t x727 = INT64_MIN;
	static volatile int16_t x728 = -1;
	uint64_t t74 = 274604138236940LLU;

	t74 = ((x725|x726)<<(x727<=x728));

	if (t74 != 18446744073709486868LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x729 = 3;
	uint8_t x730 = 13U;
	int16_t x731 = -1;
	static uint16_t x732 = 0U;

	t75 = ((x729|x730)<<(x731<=x732));

	if (t75 != 30) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x737 = UINT32_MAX;
	static int8_t x738 = -1;
	volatile int32_t x740 = -5;
	volatile uint32_t t76 = 20556324U;

	t76 = ((x737|x738)<<(x739<=x740));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x745 = 15;
	volatile int32_t x746 = 118858504;
	uint8_t x747 = 0U;
	volatile int32_t t77 = 28297379;

	t77 = ((x745|x746)<<(x747<=x748));

	if (t77 != 118858511) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x766 = 3798147733190463LLU;
	uint32_t x768 = UINT32_MAX;
	uint64_t t78 = 484LLU;

	t78 = ((x765|x766)<<(x767<=x768));

	if (t78 != 9227170184587966271LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x773 = 8U;
	int64_t x774 = INT64_MAX;
	static int8_t x775 = -2;
	static int32_t x776 = -136369;
	volatile int64_t t79 = INT64_MAX;

	t79 = ((x773|x774)<<(x775<=x776));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x781 = INT16_MIN;
	uint32_t x782 = UINT32_MAX;
	int16_t x783 = 465;
	int16_t x784 = -1;
	uint32_t t80 = UINT32_MAX;

	t80 = ((x781|x782)<<(x783<=x784));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x785 = 44;
	int32_t x786 = INT32_MAX;
	int16_t x787 = INT16_MAX;
	int8_t x788 = INT8_MAX;

	t81 = ((x785|x786)<<(x787<=x788));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x805 = UINT64_MAX;
	int16_t x806 = INT16_MIN;
	uint32_t x808 = 604837U;
	uint64_t t82 = UINT64_MAX;

	t82 = ((x805|x806)<<(x807<=x808));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x819 = 1U;
	static int32_t t83 = INT32_MAX;

	t83 = ((x817|x818)<<(x819<=x820));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x821 = 2712LLU;
	int32_t x822 = 0;
	uint8_t x823 = UINT8_MAX;
	static uint16_t x824 = UINT16_MAX;

	t84 = ((x821|x822)<<(x823<=x824));

	if (t84 != 5424LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x825 = -1;
	uint32_t x826 = 26928U;
	static volatile int32_t x827 = INT32_MAX;
	int64_t x828 = 1291570322973514LL;
	uint32_t t85 = 25704280U;

	t85 = ((x825|x826)<<(x827<=x828));

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x834 = 36218808638LLU;
	int8_t x835 = INT8_MIN;
	int8_t x836 = 1;
	static volatile uint64_t t86 = 149378LLU;

	t86 = ((x833|x834)<<(x835<=x836));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x841 = UINT8_MAX;
	uint64_t x842 = 441985606157068LLU;
	uint64_t x843 = 5189883563095LLU;
	volatile int32_t x844 = 12842;
	uint64_t t87 = 151253519LLU;

	t87 = ((x841|x842)<<(x843<=x844));

	if (t87 != 441985606157311LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x846 = -4;
	static int32_t x847 = 10;
	uint64_t x848 = 5730399LLU;

	t88 = ((x845|x846)<<(x847<=x848));

	if (t88 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x849 = INT8_MIN;
	uint32_t x850 = UINT32_MAX;
	int16_t x852 = INT16_MAX;
	volatile uint32_t t89 = 495U;

	t89 = ((x849|x850)<<(x851<=x852));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x854 = 3064275U;
	static int8_t x855 = 34;
	static int64_t x856 = -1LL;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = ((x853|x854)<<(x855<=x856));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x866 = 0LLU;
	int8_t x867 = INT8_MIN;
	int32_t x868 = -205031336;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x865|x866)<<(x867<=x868));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x873 = 21U;
	volatile int16_t x875 = INT16_MAX;
	uint32_t x876 = UINT32_MAX;
	static int32_t t92 = -150653;

	t92 = ((x873|x874)<<(x875<=x876));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x881 = 22469U;
	int8_t x883 = 56;
	static int32_t x884 = 0;

	t93 = ((x881|x882)<<(x883<=x884));

	if (t93 != 22493U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x893 = -1LL;
	uint64_t x895 = UINT64_MAX;
	int64_t x896 = 3352647949LL;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x893|x894)<<(x895<=x896));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x899 = 1;
	volatile int8_t x900 = 0;
	static int32_t t95 = 3269;

	t95 = ((x897|x898)<<(x899<=x900));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x901 = 20U;
	int8_t x903 = 1;
	static int64_t x904 = INT64_MIN;
	volatile uint32_t t96 = 1434617U;

	t96 = ((x901|x902)<<(x903<=x904));

	if (t96 != 23452860U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x910 = 0;
	uint8_t x911 = 40U;
	int16_t x912 = -27;
	int32_t t97 = 3;

	t97 = ((x909|x910)<<(x911<=x912));

	if (t97 != 2619) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x913 = 342;
	volatile int16_t x914 = INT16_MAX;
	int8_t x915 = INT8_MIN;
	int32_t x916 = INT32_MIN;
	volatile int32_t t98 = 54;

	t98 = ((x913|x914)<<(x915<=x916));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x925 = -4540352081218751LL;
	volatile uint64_t x926 = UINT64_MAX;
	int64_t x927 = INT64_MAX;
	uint16_t x928 = UINT16_MAX;

	t99 = ((x925|x926)<<(x927<=x928));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

