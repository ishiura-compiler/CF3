#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 6538072U;
volatile uint32_t t0 = 15U;
int8_t x11 = INT8_MAX;
int8_t x12 = -5;
int8_t x16 = INT8_MIN;
uint16_t x27 = 67U;
int64_t x28 = INT64_MAX;
uint8_t x29 = 15U;
static volatile int32_t x32 = INT32_MIN;
int16_t x35 = 27;
int32_t x49 = -396;
static int16_t x52 = -2088;
volatile int32_t t8 = -22236;
volatile int32_t x55 = -222576182;
uint64_t t11 = 159374115LLU;
int32_t t12 = 464;
int32_t x70 = INT32_MAX;
static uint64_t t13 = 77858640570981LLU;
volatile int32_t x80 = INT32_MIN;
uint64_t x82 = 12301536165098069LLU;
uint32_t t16 = 856U;
volatile int32_t t17 = -473;
uint16_t x89 = 5049U;
volatile int32_t x90 = -1;
volatile int32_t x107 = -54;
static volatile uint64_t x110 = 86855686337LLU;
volatile uint16_t x111 = UINT16_MAX;
uint8_t x120 = 51U;
static uint64_t x122 = UINT64_MAX;
uint8_t x123 = UINT8_MAX;
uint16_t x129 = 1U;
static uint64_t x131 = 635041891LLU;
uint64_t x134 = 7324577254LLU;
uint8_t x135 = UINT8_MAX;
int64_t t27 = -3360511108LL;
static volatile uint64_t x140 = 400105036824382LLU;
uint8_t x141 = 0U;
int16_t x142 = INT16_MIN;
uint32_t x150 = 1292U;
uint64_t t31 = 108543LLU;
static uint64_t x153 = 3LLU;
int16_t x154 = -1;
volatile uint64_t t32 = 34726883022538LLU;
static int32_t x162 = INT32_MAX;
static volatile int32_t t34 = -1597;
uint32_t x168 = 89U;
int64_t x177 = INT64_MAX;
int32_t t42 = 97;
int16_t x206 = INT16_MIN;
int8_t x207 = INT8_MIN;
uint64_t x208 = 28417475LLU;
static uint32_t x209 = 77946668U;
int16_t x211 = INT16_MIN;
int64_t x215 = -37374LL;
int32_t t45 = 11105130;
uint16_t x220 = 491U;
int8_t x229 = INT8_MAX;
int64_t x232 = 1011LL;
int64_t x241 = INT64_MIN;
volatile int8_t x246 = -1;
uint32_t x247 = 544234U;
uint64_t x257 = 1LLU;
int32_t x266 = -5036;
int32_t x267 = -298;
static volatile uint16_t x268 = 2U;
volatile int64_t x270 = -1LL;
uint32_t x272 = 6838U;
static volatile int32_t x273 = -1;
uint64_t x282 = 2067580611387471137LLU;
int8_t x283 = 2;
int8_t x284 = INT8_MAX;
uint32_t x287 = 1690U;
int16_t x289 = INT16_MIN;
static volatile uint16_t x290 = 21U;
uint8_t x294 = UINT8_MAX;
static int64_t x301 = 0LL;
volatile int64_t t63 = 16094787763546LL;
uint32_t t64 = 12437U;
static int16_t x314 = 10151;
volatile int32_t t65 = -218947;
volatile uint64_t x331 = 55941424253911918LLU;
int8_t x340 = INT8_MIN;
volatile int32_t t70 = -3376;
int64_t x344 = -3691994318799451LL;
volatile int64_t t71 = 15646059LL;
uint64_t x345 = UINT64_MAX;
uint64_t t72 = 366958003080LLU;
static volatile uint8_t x349 = UINT8_MAX;
int64_t x359 = INT64_MIN;
int32_t t75 = -3273;
int8_t x362 = -1;
volatile int32_t t76 = -2;
uint32_t t77 = 10530U;
int32_t x370 = INT32_MIN;
uint64_t x373 = 123648679561LLU;
uint64_t x376 = 6847529162997LLU;
int8_t x379 = INT8_MIN;
int64_t x383 = INT64_MIN;
int32_t t81 = -1;
static volatile int32_t x386 = INT32_MIN;
int16_t x387 = 953;
uint32_t x389 = 15698U;
int8_t x392 = INT8_MAX;
volatile uint32_t x403 = 5U;
int32_t x408 = 2074365;
int32_t t85 = 8355495;
volatile int32_t t87 = -1;
static uint8_t x428 = UINT8_MAX;
int32_t t90 = -1435391;
int64_t x432 = 32523787826685LL;
int32_t x434 = INT32_MAX;
static volatile uint64_t t92 = 213012384839784LLU;
volatile int32_t t93 = 25110;
int64_t x443 = INT64_MIN;
int64_t x446 = INT64_MIN;
volatile int16_t x449 = INT16_MAX;
int32_t x460 = INT32_MAX;
uint32_t t98 = 720U;
int16_t x465 = INT16_MIN;


void f0(void) {
	static volatile int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	static uint8_t x4 = UINT8_MAX;

	t0 = (x1/((x2<x3)+x4));

	if (t0 != 25639U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 0U;
	static uint32_t x10 = 59352986U;
	volatile uint32_t t1 = 10129371U;

	t1 = (x9/((x10<x11)+x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -10944;
	uint16_t x14 = 8657U;
	uint64_t x15 = UINT64_MAX;
	int32_t t2 = 0;

	t2 = (x13/((x14<x15)+x16));

	if (t2 != 86) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = 4787;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t3 = -24385146;

	t3 = (x17/((x18<x19)+x20));

	if (t3 != -37) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = UINT16_MAX;
	uint64_t x26 = 1684109898660523700LLU;
	volatile int64_t t4 = 17037477153LL;

	t4 = (x25/((x26<x27)+x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = 7;
	int8_t x31 = INT8_MIN;
	volatile int32_t t5 = -33720;

	t5 = (x29/((x30<x31)+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint32_t x34 = 30U;
	uint32_t x36 = 266U;
	uint32_t t6 = 37U;

	t6 = (x33/((x34<x35)+x36));

	if (t6 != 16146493U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = 0;
	static int16_t x38 = INT16_MIN;
	volatile int64_t x39 = -1LL;
	int32_t x40 = INT32_MIN;
	volatile int32_t t7 = 223;

	t7 = (x37/((x38<x39)+x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x50 = INT8_MIN;
	static int32_t x51 = 6776104;

	t8 = (x49/((x50<x51)+x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -1658907122594480029LL;
	uint16_t x54 = 23611U;
	static int16_t x56 = -7332;
	volatile int64_t t9 = 55889854LL;

	t9 = (x53/((x54<x55)+x56));

	if (t9 != 226255745034708LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 201037174LLU;
	int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = 15U;
	volatile uint64_t t10 = 739989078074LLU;

	t10 = (x57/((x58<x59)+x60));

	if (t10 != 13402478LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x61 = 1235832636677958LLU;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = 455U;
	int64_t x64 = INT64_MIN;

	t11 = (x61/((x62<x63)+x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	volatile uint8_t x66 = UINT8_MAX;
	int16_t x67 = -1238;
	volatile int16_t x68 = INT16_MIN;

	t12 = (x65/((x66<x67)+x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 962445836488LLU;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;

	t13 = (x69/((x70<x71)+x72));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x73 = INT8_MAX;
	static int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t14 = -935989;

	t14 = (x73/((x74<x75)+x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -7484LL;
	uint16_t x78 = 107U;
	volatile int32_t x79 = INT32_MIN;
	volatile int64_t t15 = 398LL;

	t15 = (x77/((x78<x79)+x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -1;
	static volatile int32_t x83 = INT32_MAX;
	uint32_t x84 = UINT32_MAX;

	t16 = (x81/((x82<x83)+x84));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -1;
	int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -2;

	t17 = (x85/((x86<x87)+x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x91 = UINT32_MAX;
	volatile uint64_t x92 = 5107652421LLU;
	static uint64_t t18 = 8030170111534LLU;

	t18 = (x89/((x90<x91)+x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = 105U;
	uint64_t x99 = 589480227962694844LLU;
	int16_t x100 = INT16_MIN;
	volatile int32_t t19 = 234630;

	t19 = (x97/((x98<x99)+x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 1996251600U;
	uint32_t x106 = 132589U;
	static int32_t x108 = INT32_MIN;
	uint32_t t20 = 32999218U;

	t20 = (x105/((x106<x107)+x108));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = 235;
	uint64_t x112 = 335977040623077LLU;
	volatile uint64_t t21 = 802658342339LLU;

	t21 = (x109/((x110<x111)+x112));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x113 = -1LL;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int64_t t22 = 1LL;

	t22 = (x113/((x114<x115)+x116));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = 1LLU;
	static int32_t x118 = 71638;
	int32_t x119 = INT32_MIN;
	uint64_t t23 = 1896LLU;

	t23 = (x117/((x118<x119)+x120));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = -1;
	int32_t x124 = 1;
	volatile int32_t t24 = 4;

	t24 = (x121/((x122<x123)+x124));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int8_t x126 = INT8_MIN;
	volatile int16_t x127 = 1;
	int64_t x128 = 24894LL;
	volatile int64_t t25 = -22426432112LL;

	t25 = (x125/((x126<x127)+x128));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x130 = INT16_MIN;
	volatile int16_t x132 = INT16_MAX;
	int32_t t26 = 15364073;

	t26 = (x129/((x130<x131)+x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -67290818236256LL;
	int8_t x136 = INT8_MAX;

	t27 = (x133/((x134<x135)+x136));

	if (t27 != -529848962490LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 1890245785910LLU;
	static int8_t x138 = INT8_MAX;
	static uint8_t x139 = UINT8_MAX;
	uint64_t t28 = 51LLU;

	t28 = (x137/((x138<x139)+x140));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x143 = UINT16_MAX;
	int32_t x144 = -16266007;
	volatile int32_t t29 = 2315;

	t29 = (x141/((x142<x143)+x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = 185627;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t30 = -153565047;

	t30 = (x145/((x146<x147)+x148));

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	static int16_t x151 = 110;
	uint64_t x152 = 6211350008586LLU;

	t31 = (x149/((x150<x151)+x152));

	if (t31 != 2969844LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x155 = UINT16_MAX;
	static int32_t x156 = -197;

	t32 = (x153/((x154<x155)+x156));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -71518;
	uint32_t x158 = UINT32_MAX;
	volatile uint16_t x159 = 327U;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t33 = 1;

	t33 = (x157/((x158<x159)+x160));

	if (t33 != 558) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -13;
	int16_t x163 = INT16_MAX;
	static uint16_t x164 = UINT16_MAX;

	t34 = (x161/((x162<x163)+x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MAX;
	volatile int64_t x166 = 62544793997LL;
	int64_t x167 = INT64_MIN;
	volatile uint32_t t35 = 448445U;

	t35 = (x165/((x166<x167)+x168));

	if (t35 != 24129029U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x169 = 2U;
	static int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	int64_t t36 = -111199917887638261LL;

	t36 = (x169/((x170<x171)+x172));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 804U;
	uint64_t x174 = 3737502138986LLU;
	static volatile uint32_t x175 = 39893567U;
	int32_t x176 = INT32_MIN;
	static uint32_t t37 = 28009810U;

	t37 = (x173/((x174<x175)+x176));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = -1;
	int32_t x180 = -466573375;
	volatile int64_t t38 = -130LL;

	t38 = (x177/((x178<x179)+x180));

	if (t38 != -19768320549LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 7U;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = 312361797U;
	int16_t x188 = INT16_MAX;
	int32_t t39 = -6982;

	t39 = (x185/((x186<x187)+x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = 1;
	int16_t x190 = INT16_MIN;
	int64_t x191 = -1LL;
	int8_t x192 = INT8_MIN;
	int32_t t40 = -24504438;

	t40 = (x189/((x190<x191)+x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x193 = INT32_MAX;
	volatile int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;
	static volatile int32_t x196 = -11966;
	static int32_t t41 = -253124;

	t41 = (x193/((x194<x195)+x196));

	if (t41 != -179480) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = UINT16_MAX;
	static int32_t x202 = -1;
	static int16_t x203 = -1;
	int16_t x204 = INT16_MIN;

	t42 = (x201/((x202<x203)+x204));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = -1;
	volatile uint64_t t43 = 5299551712820LLU;

	t43 = (x205/((x206<x207)+x208));

	if (t43 != 649133796179LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x210 = -765;
	volatile uint16_t x212 = 2U;
	volatile uint32_t t44 = 10U;

	t44 = (x209/((x210<x211)+x212));

	if (t44 != 38973334U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x213 = 637U;
	static uint32_t x214 = 1U;
	volatile uint16_t x216 = UINT16_MAX;

	t45 = (x213/((x214<x215)+x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 26U;
	volatile int64_t x218 = -1LL;
	int16_t x219 = 5322;
	int32_t t46 = -271773;

	t46 = (x217/((x218<x219)+x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x225 = -1LL;
	static int64_t x226 = 251064468263886203LL;
	int16_t x227 = INT16_MAX;
	uint16_t x228 = UINT16_MAX;
	int64_t t47 = -118864LL;

	t47 = (x225/((x226<x227)+x228));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x230 = 3LLU;
	int32_t x231 = -1;
	volatile int64_t t48 = -3LL;

	t48 = (x229/((x230<x231)+x232));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = 2274323559558LL;
	static uint8_t x234 = 0U;
	int8_t x235 = -4;
	static int64_t x236 = INT64_MAX;
	int64_t t49 = 11907509088304521LL;

	t49 = (x233/((x234<x235)+x236));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x237 = -128129979807LL;
	int64_t x238 = -4522864493309LL;
	int16_t x239 = 1;
	int16_t x240 = INT16_MIN;
	int64_t t50 = 5241454150827LL;

	t50 = (x237/((x238<x239)+x240));

	if (t50 != 3910336LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x242 = 273010831LL;
	volatile int16_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int64_t t51 = 4150786534572078977LL;

	t51 = (x241/((x242<x243)+x244));

	if (t51 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x245 = -1;
	int64_t x248 = 2086LL;
	volatile int64_t t52 = 654785567045051LL;

	t52 = (x245/((x246<x247)+x248));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x258 = INT32_MAX;
	static int64_t x259 = 1940LL;
	int16_t x260 = -14;
	volatile uint64_t t53 = 8541481753708LLU;

	t53 = (x257/((x258<x259)+x260));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = 32445U;
	uint32_t x262 = 873U;
	volatile int32_t x263 = 317484129;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t54 = 696235781;

	t54 = (x261/((x262<x263)+x264));

	if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x265 = 7;
	int32_t t55 = -1914849;

	t55 = (x265/((x266<x267)+x268));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = 29;
	static volatile uint16_t x271 = 20672U;
	static uint32_t t56 = 18U;

	t56 = (x269/((x270<x271)+x272));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x274 = INT64_MIN;
	static int64_t x275 = -1LL;
	static int32_t x276 = -140676669;
	static int32_t t57 = 3;

	t57 = (x273/((x274<x275)+x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -1;
	int16_t x278 = -1191;
	static int64_t x279 = 84LL;
	static volatile uint8_t x280 = 27U;
	volatile int32_t t58 = -52266454;

	t58 = (x277/((x278<x279)+x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MIN;
	static int64_t t59 = 25614626986285362LL;

	t59 = (x281/((x282<x283)+x284));

	if (t59 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = -1;
	static int16_t x286 = INT16_MIN;
	volatile int32_t x288 = -5716391;
	static volatile int32_t t60 = 134;

	t60 = (x285/((x286<x287)+x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x291 = INT8_MAX;
	int32_t x292 = 3332787;
	int32_t t61 = -4938336;

	t61 = (x289/((x290<x291)+x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = -1;
	uint32_t x295 = 5415135U;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t62 = 13226;

	t62 = (x293/((x294<x295)+x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x302 = INT16_MAX;
	int32_t x303 = -1;
	uint32_t x304 = 23192U;

	t63 = (x301/((x302<x303)+x304));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x309 = 301336631U;
	int32_t x310 = -1;
	int32_t x311 = -1;
	static int32_t x312 = -99208;

	t64 = (x309/((x310<x311)+x312));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MAX;
	static uint16_t x315 = 53U;
	static uint8_t x316 = 2U;

	t65 = (x313/((x314<x315)+x316));

	if (t65 != 16383) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = -1LL;
	int32_t x319 = -1;
	volatile uint32_t x320 = 6245U;
	static uint32_t t66 = 30404U;

	t66 = (x317/((x318<x319)+x320));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	static uint8_t x323 = UINT8_MAX;
	volatile uint8_t x324 = 26U;
	volatile int32_t t67 = 1573;

	t67 = (x321/((x322<x323)+x324));

	if (t67 != -82595524) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x326 = 29U;
	int32_t x327 = -1;
	uint32_t x328 = 774062403U;
	static uint32_t t68 = 1015U;

	t68 = (x325/((x326<x327)+x328));

	if (t68 != 5U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	static volatile int64_t x332 = INT64_MIN;
	volatile int64_t t69 = -7LL;

	t69 = (x329/((x330<x331)+x332));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x337 = 0;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MIN;

	t70 = (x337/((x338<x339)+x340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = INT16_MIN;
	volatile uint8_t x342 = 14U;
	static uint64_t x343 = UINT64_MAX;

	t71 = (x341/((x342<x343)+x344));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x346 = 54;
	uint32_t x347 = 5U;
	volatile int32_t x348 = -1;

	t72 = (x345/((x346<x347)+x348));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MIN;
	volatile uint16_t x352 = 1U;
	volatile int32_t t73 = -11207;

	t73 = (x349/((x350<x351)+x352));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MIN;
	static uint64_t x354 = UINT64_MAX;
	uint64_t x355 = 4647014457561108007LLU;
	int8_t x356 = 2;
	volatile int64_t t74 = -451172300930LL;

	t74 = (x353/((x354<x355)+x356));

	if (t74 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = 373;
	uint32_t x358 = 1U;
	uint16_t x360 = UINT16_MAX;

	t75 = (x357/((x358<x359)+x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x363 = INT16_MIN;
	static int16_t x364 = -1;

	t76 = (x361/((x362<x363)+x364));

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x365 = 16;
	static int8_t x366 = -1;
	static volatile int64_t x367 = INT64_MIN;
	uint32_t x368 = UINT32_MAX;

	t77 = (x365/((x366<x367)+x368));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x369 = UINT32_MAX;
	int64_t x371 = 6081780242004072LL;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t78 = 21U;

	t78 = (x369/((x370<x371)+x372));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x374 = 3U;
	int16_t x375 = 0;
	static uint64_t t79 = 1169907361770785464LLU;

	t79 = (x373/((x374<x375)+x376));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = INT8_MIN;
	static volatile uint8_t x378 = UINT8_MAX;
	int64_t x380 = 12661LL;
	volatile int64_t t80 = -9022LL;

	t80 = (x377/((x378<x379)+x380));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	uint8_t x384 = 1U;

	t81 = (x381/((x382<x383)+x384));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = INT64_MIN;
	int32_t x388 = INT32_MIN;
	volatile int64_t t82 = 11974201LL;

	t82 = (x385/((x386<x387)+x388));

	if (t82 != 4294967298LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = 11;
	uint32_t t83 = 1931U;

	t83 = (x389/((x390<x391)+x392));

	if (t83 != 122U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = 7308240;
	int16_t x402 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	volatile int32_t t84 = 542;

	t84 = (x401/((x402<x403)+x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x405 = -1;
	int32_t x406 = -735;
	int8_t x407 = INT8_MIN;

	t85 = (x405/((x406<x407)+x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x409 = INT8_MIN;
	static int64_t x410 = INT64_MAX;
	volatile uint16_t x411 = 1U;
	uint32_t x412 = UINT32_MAX;
	uint32_t t86 = 146863318U;

	t86 = (x409/((x410<x411)+x412));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = 4;
	uint64_t x414 = 946659557356314LLU;
	volatile int8_t x415 = -1;
	static int8_t x416 = 36;

	t87 = (x413/((x414<x415)+x416));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = 15U;
	volatile int32_t t88 = -5943290;

	t88 = (x417/((x418<x419)+x420));

	if (t88 != 2184) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x421 = INT32_MAX;
	uint64_t x422 = 1333829416461LLU;
	uint32_t x423 = 186U;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t89 = 368188225;

	t89 = (x421/((x422<x423)+x424));

	if (t89 != 8421504) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = -1;
	static int8_t x426 = -1;
	int8_t x427 = -1;

	t90 = (x425/((x426<x427)+x428));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x429 = INT64_MIN;
	int16_t x430 = -1;
	static int32_t x431 = INT32_MAX;
	int64_t t91 = -9518LL;

	t91 = (x429/((x430<x431)+x432));

	if (t91 != -283588LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x433 = 3108509459LLU;
	int64_t x435 = INT64_MAX;
	int8_t x436 = 1;

	t92 = (x433/((x434<x435)+x436));

	if (t92 != 1554254729LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x437 = -1;
	static volatile int32_t x438 = INT32_MIN;
	int8_t x439 = -7;
	volatile int16_t x440 = INT16_MAX;

	t93 = (x437/((x438<x439)+x440));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 24241196765LLU;
	static int8_t x442 = -1;
	int64_t x444 = INT64_MIN;
	volatile uint64_t t94 = 1279857LLU;

	t94 = (x441/((x442<x443)+x444));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x445 = INT64_MIN;
	static int64_t x447 = -4502283030LL;
	uint8_t x448 = 0U;
	int64_t t95 = INT64_MIN;

	t95 = (x445/((x446<x447)+x448));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x450 = INT64_MIN;
	volatile uint32_t x451 = 480U;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t96 = 2412;

	t96 = (x449/((x450<x451)+x452));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = -1LL;
	uint32_t x454 = UINT32_MAX;
	static int16_t x455 = INT16_MIN;
	int16_t x456 = -1;
	static int64_t t97 = 794885213907LL;

	t97 = (x453/((x454<x455)+x456));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x457 = 46U;
	volatile int64_t x458 = INT64_MAX;
	int64_t x459 = 5386566968129LL;

	t98 = (x457/((x458<x459)+x460));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x466 = 243LLU;
	uint8_t x467 = 0U;
	uint8_t x468 = 2U;
	static volatile int32_t t99 = -65107;

	t99 = (x465/((x466<x467)+x468));

	if (t99 != -16384) { NG(); } else { ; }
	
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

