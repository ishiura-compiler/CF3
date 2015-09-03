#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static int16_t x2 = 2974;
uint64_t x4 = UINT64_MAX;
int8_t x10 = 3;
int64_t x11 = INT64_MIN;
uint64_t x12 = 19LLU;
int16_t x15 = INT16_MAX;
int8_t x23 = INT8_MIN;
static uint8_t x25 = 46U;
uint16_t x26 = UINT16_MAX;
static volatile int32_t t6 = 6;
volatile uint16_t x55 = 78U;
static int16_t x69 = -1;
int8_t x71 = INT8_MAX;
uint64_t x75 = UINT64_MAX;
uint64_t x76 = UINT64_MAX;
static int64_t x79 = 515823025897153LL;
static int8_t x82 = 12;
int32_t t15 = 955;
int64_t x90 = INT64_MIN;
volatile uint8_t x125 = 80U;
int32_t t23 = 0;
int32_t t25 = 46261;
int16_t x145 = INT16_MIN;
int32_t t26 = -168266856;
volatile int32_t t27 = 10660;
int32_t x159 = 175950;
int8_t x168 = -1;
int64_t x173 = 2606277915LL;
int16_t x175 = INT16_MIN;
int16_t x177 = INT16_MIN;
static int32_t x179 = INT32_MAX;
static uint32_t x182 = UINT32_MAX;
static int16_t x185 = 0;
uint8_t x193 = UINT8_MAX;
uint64_t x195 = UINT64_MAX;
uint8_t x196 = 4U;
static uint16_t x199 = UINT16_MAX;
static volatile int32_t t38 = 239611;
int16_t x201 = 34;
volatile int32_t t39 = 550;
volatile int8_t x207 = -1;
volatile int64_t x211 = 7944LL;
uint8_t x213 = 107U;
int8_t x220 = INT8_MAX;
uint32_t x231 = 1963887U;
int16_t x241 = INT16_MAX;
volatile int64_t x243 = -61260184329500LL;
int32_t x258 = INT32_MIN;
volatile int32_t t51 = 3;
static int8_t x273 = INT8_MIN;
static int16_t x286 = INT16_MIN;
uint8_t x296 = 0U;
static volatile int32_t t57 = -113826;
static volatile uint64_t x303 = UINT64_MAX;
int16_t x313 = 12006;
int16_t x314 = INT16_MIN;
static int32_t x321 = 953083107;
static uint8_t x325 = 86U;
static int32_t x330 = INT32_MIN;
static int8_t x335 = INT8_MIN;
uint16_t x339 = 0U;
int32_t t66 = 374595076;
static volatile int64_t x343 = -1LL;
volatile uint64_t x344 = 65485140124175LLU;
volatile int8_t x351 = 1;
static int32_t t70 = -492754;
int32_t x375 = -726;
volatile uint32_t x376 = UINT32_MAX;
int16_t x378 = INT16_MIN;
static uint16_t x379 = UINT16_MAX;
volatile int16_t x380 = -1;
volatile int32_t t72 = 557928;
int32_t x389 = INT32_MAX;
static int16_t x392 = -1;
int32_t t74 = -65974;
int32_t x395 = -1;
int32_t t77 = 66;
static int8_t x411 = -1;
uint64_t x412 = UINT64_MAX;
static volatile uint64_t x414 = 1799774163001LLU;
uint32_t x416 = 379845U;
volatile int64_t x418 = INT64_MAX;
volatile int32_t t81 = 226693;
uint8_t x423 = 1U;
uint8_t x424 = 8U;
volatile uint8_t x431 = 0U;
static int8_t x432 = INT8_MAX;
int32_t t84 = 715454387;
int32_t x434 = -1;
volatile int32_t t85 = -5806217;
volatile int32_t x448 = 1;
volatile int32_t t87 = -1;
int32_t x458 = INT32_MAX;
volatile int8_t x464 = INT8_MAX;
static volatile int32_t t90 = 22806414;
int32_t x466 = -122175;
int32_t x467 = -1;
int32_t x468 = 35584;
int8_t x469 = 18;
static uint8_t x471 = 32U;
int8_t x472 = INT8_MIN;
volatile int32_t t92 = 20;
int64_t x474 = INT64_MIN;
int64_t x479 = 140365067075811LL;
static int16_t x481 = -12;
int32_t x486 = INT32_MAX;
int8_t x488 = -1;
static int64_t x489 = INT64_MIN;
int16_t x490 = -4;
int64_t x493 = INT64_MIN;
int64_t x494 = -434136675351827122LL;
static volatile uint8_t x497 = 0U;


void f0(void) {
	int16_t x3 = INT16_MAX;
	volatile int32_t t0 = 14789385;

	t0 = ((x1|x2)<=(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 15U;
	uint32_t x6 = UINT32_MAX;
	uint8_t x7 = 0U;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t1 = 44320810;

	t1 = ((x5|x6)<=(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2U;
	volatile int32_t t2 = 2084344;

	t2 = ((x9|x10)<=(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MIN;
	int16_t x16 = -10;
	int32_t t3 = -8309406;

	t3 = ((x13|x14)<=(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MAX;
	uint64_t x24 = 25923486633677LLU;
	volatile int32_t t4 = 110748483;

	t4 = ((x21|x22)<=(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x27 = INT8_MAX;
	volatile int8_t x28 = -3;
	int32_t t5 = 3;

	t5 = ((x25|x26)<=(x27*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 2U;
	int32_t x34 = INT32_MIN;
	volatile int64_t x35 = -1591235046971964783LL;
	static int32_t x36 = -1;

	t6 = ((x33|x34)<=(x35*x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -43;
	volatile int8_t x38 = -5;
	static uint32_t x39 = UINT32_MAX;
	static int32_t x40 = -957923;
	int32_t t7 = 16253;

	t7 = ((x37|x38)<=(x39*x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 2040U;
	uint64_t x54 = 196059724LLU;
	int16_t x56 = 2;
	int32_t t8 = 12714931;

	t8 = ((x53|x54)<=(x55*x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = -1;
	static int16_t x59 = 1;
	uint8_t x60 = 1U;
	static int32_t t9 = 352;

	t9 = ((x57|x58)<=(x59*x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	uint64_t x63 = 4133716LLU;
	uint16_t x64 = 1U;
	int32_t t10 = 331;

	t10 = ((x61|x62)<=(x63*x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x70 = -9;
	static int8_t x72 = 1;
	volatile int32_t t11 = -40435;

	t11 = ((x69|x70)<=(x71*x72));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = UINT64_MAX;
	uint8_t x74 = UINT8_MAX;
	int32_t t12 = -1737;

	t12 = ((x73|x74)<=(x75*x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = -1;
	int8_t x78 = -1;
	static int16_t x80 = 2;
	volatile int32_t t13 = -365;

	t13 = ((x77|x78)<=(x79*x80));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t14 = -403168;

	t14 = ((x81|x82)<=(x83*x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -156358;
	int8_t x86 = 0;
	uint16_t x87 = 19410U;
	int16_t x88 = INT16_MIN;

	t15 = ((x85|x86)<=(x87*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	int32_t x91 = INT32_MAX;
	volatile uint64_t x92 = 134201834186LLU;
	static volatile int32_t t16 = 820;

	t16 = ((x89|x90)<=(x91*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = -15150;
	volatile int64_t x98 = -13869028569LL;
	int64_t x99 = INT64_MAX;
	int8_t x100 = -1;
	volatile int32_t t17 = 7081;

	t17 = ((x97|x98)<=(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MAX;
	static uint64_t x104 = 205260529LLU;
	int32_t t18 = 3644;

	t18 = ((x101|x102)<=(x103*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = 4;
	static volatile uint32_t x110 = 3U;
	uint32_t x111 = 45629U;
	static int8_t x112 = -1;
	int32_t t19 = -12289;

	t19 = ((x109|x110)<=(x111*x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = INT64_MIN;
	static volatile uint8_t x118 = UINT8_MAX;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 1;
	int32_t t20 = -772466;

	t20 = ((x117|x118)<=(x119*x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = 26U;
	uint32_t x124 = 380684U;
	volatile int32_t t21 = -3113;

	t21 = ((x121|x122)<=(x123*x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x126 = INT32_MIN;
	int16_t x127 = 74;
	uint32_t x128 = 942U;
	volatile int32_t t22 = -3;

	t22 = ((x125|x126)<=(x127*x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = -1;
	uint16_t x134 = UINT16_MAX;
	volatile int32_t x135 = -1;
	uint32_t x136 = 26125U;

	t23 = ((x133|x134)<=(x135*x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MIN;
	static uint16_t x138 = UINT16_MAX;
	int16_t x139 = -247;
	int64_t x140 = -159089LL;
	int32_t t24 = 5;

	t24 = ((x137|x138)<=(x139*x140));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = 8;
	int16_t x142 = INT16_MIN;
	volatile int64_t x143 = -1LL;
	static uint16_t x144 = UINT16_MAX;

	t25 = ((x141|x142)<=(x143*x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x146 = 0;
	static int64_t x147 = -1LL;
	volatile int8_t x148 = INT8_MIN;

	t26 = ((x145|x146)<=(x147*x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x149 = 33U;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = -1;
	static volatile int32_t x152 = INT32_MAX;

	t27 = ((x149|x150)<=(x151*x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x154 = 18671U;
	static uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 322U;
	int32_t t28 = 97298;

	t28 = ((x153|x154)<=(x155*x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x157 = 745360737;
	int16_t x158 = INT16_MIN;
	int64_t x160 = 5749318LL;
	static volatile int32_t t29 = 0;

	t29 = ((x157|x158)<=(x159*x160));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = 123446800;
	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	int8_t x164 = -16;
	volatile int32_t t30 = -15;

	t30 = ((x161|x162)<=(x163*x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = 1U;
	int64_t x166 = -61LL;
	uint16_t x167 = 29U;
	int32_t t31 = -225981;

	t31 = ((x165|x166)<=(x167*x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x174 = INT16_MAX;
	volatile uint16_t x176 = 73U;
	static volatile int32_t t32 = -818;

	t32 = ((x173|x174)<=(x175*x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x178 = INT8_MIN;
	uint64_t x180 = 7482122993062LLU;
	static volatile int32_t t33 = -97823;

	t33 = ((x177|x178)<=(x179*x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = 0;
	int64_t x183 = INT64_MAX;
	int16_t x184 = -1;
	int32_t t34 = 9111341;

	t34 = ((x181|x182)<=(x183*x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x186 = -1;
	volatile int32_t x187 = 0;
	int32_t x188 = INT32_MAX;
	int32_t t35 = -1930;

	t35 = ((x185|x186)<=(x187*x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x189 = 46615003LLU;
	int8_t x190 = 2;
	static volatile uint32_t x191 = UINT32_MAX;
	volatile int16_t x192 = INT16_MIN;
	static volatile int32_t t36 = 496;

	t36 = ((x189|x190)<=(x191*x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x194 = 9368U;
	int32_t t37 = 21885671;

	t37 = ((x193|x194)<=(x195*x196));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x197 = UINT16_MAX;
	volatile uint8_t x198 = 1U;
	static int64_t x200 = -1LL;

	t38 = ((x197|x198)<=(x199*x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x202 = 43352LL;
	static int16_t x203 = INT16_MIN;
	uint32_t x204 = 26046U;

	t39 = ((x201|x202)<=(x203*x204));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x205 = 11U;
	int8_t x206 = INT8_MIN;
	static int64_t x208 = -30427557LL;
	volatile int32_t t40 = -582307965;

	t40 = ((x205|x206)<=(x207*x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x209 = 6U;
	int64_t x210 = INT64_MAX;
	static uint64_t x212 = 5724846LLU;
	static int32_t t41 = 0;

	t41 = ((x209|x210)<=(x211*x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x214 = INT16_MIN;
	volatile uint16_t x215 = 125U;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t42 = 991537917;

	t42 = ((x213|x214)<=(x215*x216));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = INT16_MIN;
	uint64_t x218 = 30128054545623LLU;
	int16_t x219 = INT16_MAX;
	int32_t t43 = -65022932;

	t43 = ((x217|x218)<=(x219*x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x229 = 18046U;
	int8_t x230 = INT8_MIN;
	int16_t x232 = INT16_MAX;
	static volatile int32_t t44 = 62;

	t44 = ((x229|x230)<=(x231*x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MIN;
	static uint16_t x238 = 5435U;
	int8_t x239 = -1;
	int16_t x240 = -143;
	int32_t t45 = 125090;

	t45 = ((x237|x238)<=(x239*x240));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x242 = -1LL;
	uint32_t x244 = 3U;
	int32_t t46 = 95773;

	t46 = ((x241|x242)<=(x243*x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x245 = INT32_MIN;
	uint8_t x246 = 6U;
	uint16_t x247 = 0U;
	int32_t x248 = INT32_MAX;
	static int32_t t47 = -62567016;

	t47 = ((x245|x246)<=(x247*x248));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x249 = INT64_MIN;
	int64_t x250 = -1083860462859242LL;
	uint64_t x251 = 3331933LLU;
	static volatile uint8_t x252 = UINT8_MAX;
	int32_t t48 = 26536422;

	t48 = ((x249|x250)<=(x251*x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x257 = INT64_MIN;
	uint64_t x259 = 220348106LLU;
	uint64_t x260 = 13442LLU;
	int32_t t49 = -2147;

	t49 = ((x257|x258)<=(x259*x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = UINT16_MAX;
	int64_t x262 = INT64_MIN;
	uint32_t x263 = 940473914U;
	uint16_t x264 = UINT16_MAX;
	static int32_t t50 = -2;

	t50 = ((x261|x262)<=(x263*x264));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = -1;
	uint8_t x266 = 22U;
	static int16_t x267 = INT16_MAX;
	uint16_t x268 = UINT16_MAX;

	t51 = ((x265|x266)<=(x267*x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x274 = 216952837644357664LLU;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = -1;
	int32_t t52 = 72935086;

	t52 = ((x273|x274)<=(x275*x276));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x277 = -29162708295000LL;
	int64_t x278 = INT64_MIN;
	uint32_t x279 = 6U;
	int8_t x280 = -1;
	int32_t t53 = -2922840;

	t53 = ((x277|x278)<=(x279*x280));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x281 = -14;
	int64_t x282 = -6733851602LL;
	uint64_t x283 = 439364LLU;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t54 = 590;

	t54 = ((x281|x282)<=(x283*x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = INT16_MAX;
	static int8_t x287 = 0;
	int64_t x288 = -12865956206423LL;
	int32_t t55 = 21204;

	t55 = ((x285|x286)<=(x287*x288));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x289 = INT64_MAX;
	int16_t x290 = -1;
	int64_t x291 = -1LL;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t56 = 15609;

	t56 = ((x289|x290)<=(x291*x292));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x293 = INT16_MAX;
	uint8_t x294 = 24U;
	uint64_t x295 = 97690505817009LLU;

	t57 = ((x293|x294)<=(x295*x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = INT8_MAX;
	uint8_t x302 = 4U;
	uint32_t x304 = 60331U;
	int32_t t58 = -1738236;

	t58 = ((x301|x302)<=(x303*x304));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = 1;
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = 26588555482481LLU;
	volatile int64_t x312 = 2977LL;
	int32_t t59 = -14;

	t59 = ((x309|x310)<=(x311*x312));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x315 = 6U;
	static volatile int16_t x316 = INT16_MIN;
	volatile int32_t t60 = -1557096;

	t60 = ((x313|x314)<=(x315*x316));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = -1;
	static int64_t x318 = -1LL;
	static uint64_t x319 = 6226894LLU;
	int8_t x320 = INT8_MAX;
	int32_t t61 = 117;

	t61 = ((x317|x318)<=(x319*x320));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x322 = INT32_MIN;
	uint32_t x323 = 1U;
	static int8_t x324 = INT8_MIN;
	static int32_t t62 = 29638;

	t62 = ((x321|x322)<=(x323*x324));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	int32_t t63 = -1761910;

	t63 = ((x325|x326)<=(x327*x328));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x329 = 77373776LLU;
	int16_t x331 = INT16_MIN;
	volatile int16_t x332 = 1859;
	volatile int32_t t64 = -904;

	t64 = ((x329|x330)<=(x331*x332));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x333 = 345149300822087819LLU;
	volatile uint32_t x334 = 298U;
	volatile uint64_t x336 = UINT64_MAX;
	int32_t t65 = 35384;

	t65 = ((x333|x334)<=(x335*x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MAX;
	int64_t x340 = 3LL;

	t66 = ((x337|x338)<=(x339*x340));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = UINT8_MAX;
	volatile int32_t t67 = 45;

	t67 = ((x341|x342)<=(x343*x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x349 = UINT64_MAX;
	int32_t x350 = 57887;
	volatile int16_t x352 = -7;
	volatile int32_t t68 = -32515;

	t68 = ((x349|x350)<=(x351*x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = -451LL;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -238;
	int32_t t69 = 185287;

	t69 = ((x353|x354)<=(x355*x356));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x365 = INT8_MAX;
	uint32_t x366 = 1U;
	int64_t x367 = 16665991LL;
	int32_t x368 = -1;

	t70 = ((x365|x366)<=(x367*x368));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x373 = 5789;
	int16_t x374 = INT16_MIN;
	int32_t t71 = -2;

	t71 = ((x373|x374)<=(x375*x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x377 = 207076036532708474LLU;

	t72 = ((x377|x378)<=(x379*x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x381 = 0;
	int64_t x382 = 0LL;
	uint32_t x383 = 2173078U;
	static uint32_t x384 = 381621U;
	static int32_t t73 = -2542;

	t73 = ((x381|x382)<=(x383*x384));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x390 = INT32_MIN;
	int16_t x391 = 1;

	t74 = ((x389|x390)<=(x391*x392));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t75 = 1170858;

	t75 = ((x393|x394)<=(x395*x396));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x397 = 5;
	int8_t x398 = -1;
	volatile int8_t x399 = INT8_MAX;
	volatile uint16_t x400 = 114U;
	static volatile int32_t t76 = 36965984;

	t76 = ((x397|x398)<=(x399*x400));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x401 = -1LL;
	volatile int32_t x402 = 17555;
	int64_t x403 = -12LL;
	int8_t x404 = INT8_MAX;

	t77 = ((x401|x402)<=(x403*x404));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x405 = -1;
	volatile uint32_t x406 = 8143U;
	int32_t x407 = INT32_MAX;
	volatile int16_t x408 = -1;
	volatile int32_t t78 = -49080725;

	t78 = ((x405|x406)<=(x407*x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x409 = INT8_MIN;
	volatile int16_t x410 = INT16_MAX;
	int32_t t79 = 65370782;

	t79 = ((x409|x410)<=(x411*x412));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x413 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int32_t t80 = -4;

	t80 = ((x413|x414)<=(x415*x416));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x417 = 4077395379984LLU;
	volatile int32_t x419 = 9318;
	int16_t x420 = INT16_MAX;

	t81 = ((x417|x418)<=(x419*x420));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x421 = 170072990;
	static uint16_t x422 = 327U;
	static volatile int32_t t82 = 255693;

	t82 = ((x421|x422)<=(x423*x424));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x425 = -1;
	int8_t x426 = -7;
	volatile int64_t x427 = -1522LL;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t83 = -15150;

	t83 = ((x425|x426)<=(x427*x428));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x429 = INT64_MIN;
	int32_t x430 = 1;

	t84 = ((x429|x430)<=(x431*x432));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x433 = -6;
	uint32_t x435 = 1119018623U;
	volatile int16_t x436 = 12672;

	t85 = ((x433|x434)<=(x435*x436));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x441 = -4451;
	volatile int32_t x442 = INT32_MIN;
	int16_t x443 = 6;
	volatile uint8_t x444 = 122U;
	volatile int32_t t86 = 1;

	t86 = ((x441|x442)<=(x443*x444));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x445 = UINT32_MAX;
	int64_t x446 = 13921031570LL;
	volatile uint32_t x447 = UINT32_MAX;

	t87 = ((x445|x446)<=(x447*x448));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = 61;
	volatile int8_t x454 = -44;
	static uint16_t x455 = 7601U;
	static uint8_t x456 = 4U;
	volatile int32_t t88 = -1119;

	t88 = ((x453|x454)<=(x455*x456));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x457 = 3U;
	uint16_t x459 = 5U;
	uint32_t x460 = 907959815U;
	volatile int32_t t89 = 30;

	t89 = ((x457|x458)<=(x459*x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x461 = INT16_MIN;
	volatile uint8_t x462 = 37U;
	uint64_t x463 = 3628810604LLU;

	t90 = ((x461|x462)<=(x463*x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x465 = INT64_MAX;
	int32_t t91 = 191182;

	t91 = ((x465|x466)<=(x467*x468));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x470 = INT16_MIN;

	t92 = ((x469|x470)<=(x471*x472));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = -1;
	uint64_t x475 = 484LLU;
	int8_t x476 = INT8_MIN;
	static int32_t t93 = 364918;

	t93 = ((x473|x474)<=(x475*x476));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x477 = 48331U;
	volatile int32_t x478 = INT32_MAX;
	volatile uint64_t x480 = UINT64_MAX;
	int32_t t94 = -51520;

	t94 = ((x477|x478)<=(x479*x480));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x482 = INT8_MIN;
	int16_t x483 = INT16_MIN;
	uint8_t x484 = UINT8_MAX;
	static int32_t t95 = 3607716;

	t95 = ((x481|x482)<=(x483*x484));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x485 = -1;
	int32_t x487 = -1;
	static volatile int32_t t96 = 2444;

	t96 = ((x485|x486)<=(x487*x488));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x491 = 55U;
	int32_t x492 = -3955;
	int32_t t97 = 985305;

	t97 = ((x489|x490)<=(x491*x492));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x495 = 1;
	int32_t x496 = INT32_MAX;
	volatile int32_t t98 = -8;

	t98 = ((x493|x494)<=(x495*x496));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x498 = 0;
	uint64_t x499 = 7791389LLU;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t99 = -631421;

	t99 = ((x497|x498)<=(x499*x500));

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

