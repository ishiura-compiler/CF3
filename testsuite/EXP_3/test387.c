#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = -1;
static int16_t x7 = INT16_MIN;
uint64_t x17 = UINT64_MAX;
int16_t x21 = -1;
volatile int32_t t3 = -3;
static volatile uint32_t x30 = 27133594U;
static int64_t x31 = -1LL;
int64_t x37 = -1LL;
static int8_t x38 = -1;
uint64_t x44 = UINT64_MAX;
uint64_t x50 = 17141954541999LLU;
int16_t x52 = -1;
volatile int32_t t10 = 15303;
static uint64_t x59 = 95514078031LLU;
static int8_t x62 = INT8_MIN;
int16_t x67 = -1;
volatile int32_t t13 = 127465;
int32_t x73 = INT32_MIN;
volatile int8_t x81 = -3;
uint16_t x86 = UINT16_MAX;
int16_t x87 = -1;
static volatile int64_t x92 = -359987956LL;
int32_t x108 = -1;
volatile uint64_t x117 = 183569957827860076LLU;
uint16_t x121 = 3U;
int8_t x124 = INT8_MAX;
volatile int16_t x125 = 7616;
volatile int32_t t26 = 1002921908;
int16_t x130 = INT16_MIN;
static uint64_t x132 = 58708LLU;
uint32_t x135 = 277352985U;
static volatile int32_t t28 = -1;
uint64_t x148 = 943761991036199LLU;
int16_t x152 = INT16_MIN;
volatile int32_t t31 = -28898;
uint16_t x153 = 368U;
int8_t x165 = INT8_MIN;
static uint16_t x168 = UINT16_MAX;
int64_t x188 = -187230841LL;
int32_t x189 = -28;
uint32_t x190 = 5U;
static int64_t x200 = -1LL;
int8_t x201 = -4;
volatile int16_t x205 = 3;
int32_t x221 = INT32_MAX;
int8_t x230 = INT8_MIN;
static uint16_t x241 = 7140U;
static int32_t x263 = INT32_MIN;
int32_t x274 = INT32_MAX;
int16_t x284 = INT16_MAX;
volatile int8_t x288 = -7;
uint16_t x292 = UINT16_MAX;
int16_t x298 = -1;
int16_t x299 = 1160;
volatile int32_t t53 = -494263;
uint32_t x311 = 2091710881U;
volatile uint8_t x334 = UINT8_MAX;
uint64_t x355 = UINT64_MAX;
int16_t x361 = INT16_MIN;
uint16_t x367 = 0U;
int8_t x373 = INT8_MIN;
uint16_t x374 = UINT16_MAX;
int16_t x376 = -112;
volatile int32_t x387 = -1;
int64_t x398 = INT64_MIN;
int8_t x401 = INT8_MIN;
static volatile int32_t x415 = -1;
uint16_t x416 = 13712U;
int32_t t65 = 133738713;
uint8_t x427 = UINT8_MAX;
static int16_t x441 = INT16_MIN;
volatile int32_t t71 = -53;
int16_t x449 = -1;
int16_t x454 = -1744;
int64_t x457 = 215LL;
static int64_t x458 = INT64_MIN;
int32_t t74 = -96550718;
int16_t x465 = INT16_MIN;
volatile int8_t x467 = INT8_MIN;
static int32_t x472 = INT32_MIN;
static uint16_t x474 = UINT16_MAX;
static volatile int32_t t79 = -1;
int64_t x489 = INT64_MIN;
int16_t x500 = INT16_MIN;
uint64_t x502 = UINT64_MAX;
uint8_t x503 = UINT8_MAX;
volatile int32_t t82 = 842467;
int8_t x511 = 1;
static int8_t x512 = INT8_MIN;
uint32_t x521 = 5543790U;
int32_t x522 = -1;
uint64_t x538 = UINT64_MAX;
static int32_t x540 = 1080315;
int16_t x551 = -1;
static uint8_t x552 = 0U;
int32_t t88 = -15378;
int16_t x560 = INT16_MIN;
int32_t x566 = INT32_MAX;
volatile uint32_t x580 = 101463U;
uint64_t x581 = UINT64_MAX;
volatile int32_t t95 = -102903;
static uint64_t x595 = 2013546LLU;
volatile int64_t x603 = 48313113LL;
int8_t x605 = 51;
int16_t x606 = INT16_MIN;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int32_t x2 = 1272630;
	int32_t x3 = 325672765;
	int8_t x4 = -1;
	int32_t t0 = -58;

	t0 = ((x1/x2)<=(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 886195LLU;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -337478648;

	t1 = ((x5/x6)<=(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x18 = INT16_MIN;
	static int8_t x19 = -1;
	volatile int32_t x20 = -1;
	volatile int32_t t2 = 184892031;

	t2 = ((x17/x18)<=(x19*x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x22 = -1LL;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;

	t3 = ((x21/x22)<=(x23*x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x29 = 104U;
	uint16_t x32 = UINT16_MAX;
	int32_t t4 = 855242965;

	t4 = ((x29/x30)<=(x31*x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = UINT32_MAX;
	volatile int32_t x35 = 623499;
	uint32_t x36 = 8335U;
	volatile int32_t t5 = 117;

	t5 = ((x33/x34)<=(x35*x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x39 = 1048455;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t6 = 22207;

	t6 = ((x37/x38)<=(x39*x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = 82;
	int16_t x42 = 1;
	int64_t x43 = INT64_MAX;
	int32_t t7 = 1;

	t7 = ((x41/x42)<=(x43*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x45 = INT64_MIN;
	uint16_t x46 = 75U;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = -4;
	static volatile int32_t t8 = -806;

	t8 = ((x45/x46)<=(x47*x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 2104177060537LLU;
	int32_t x51 = -1;
	volatile int32_t t9 = -73202;

	t9 = ((x49/x50)<=(x51*x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	uint64_t x54 = 1012073599030277LLU;
	int32_t x55 = -1;
	static int32_t x56 = -653140;

	t10 = ((x53/x54)<=(x55*x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MAX;
	uint16_t x60 = 5531U;
	int32_t t11 = -12;

	t11 = ((x57/x58)<=(x59*x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x61 = UINT8_MAX;
	static volatile uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t12 = 104;

	t12 = ((x61/x62)<=(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MAX;
	int16_t x66 = INT16_MIN;
	int16_t x68 = -1;

	t13 = ((x65/x66)<=(x67*x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = INT8_MAX;
	uint8_t x70 = 13U;
	static int64_t x71 = -1LL;
	static int16_t x72 = INT16_MAX;
	volatile int32_t t14 = -3879691;

	t14 = ((x69/x70)<=(x71*x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x74 = UINT16_MAX;
	int16_t x75 = -72;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t15 = -477066874;

	t15 = ((x73/x74)<=(x75*x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 2618U;
	uint64_t x78 = UINT64_MAX;
	static uint8_t x79 = 0U;
	int32_t x80 = 31000090;
	int32_t t16 = -724;

	t16 = ((x77/x78)<=(x79*x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x82 = -436925;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 22196741494LLU;
	volatile int32_t t17 = 390569;

	t17 = ((x81/x82)<=(x83*x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MAX;
	uint16_t x88 = 123U;
	int32_t t18 = 251099998;

	t18 = ((x85/x86)<=(x87*x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = 5591;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;
	volatile int32_t t19 = 504016;

	t19 = ((x89/x90)<=(x91*x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = 52757330886930LL;
	uint64_t x95 = UINT64_MAX;
	uint32_t x96 = 16141U;
	static volatile int32_t t20 = -596;

	t20 = ((x93/x94)<=(x95*x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x97 = INT16_MIN;
	int8_t x98 = 10;
	uint64_t x99 = UINT64_MAX;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t21 = -11;

	t21 = ((x97/x98)<=(x99*x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -37;
	int16_t x102 = INT16_MIN;
	static uint32_t x103 = 68871U;
	int32_t x104 = 10;
	volatile int32_t t22 = 1896477;

	t22 = ((x101/x102)<=(x103*x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = 37;
	volatile int32_t x106 = INT32_MAX;
	static int64_t x107 = -5706160437LL;
	int32_t t23 = -749261;

	t23 = ((x105/x106)<=(x107*x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x118 = INT8_MIN;
	volatile int64_t x119 = -1LL;
	uint32_t x120 = 25980445U;
	volatile int32_t t24 = -17386;

	t24 = ((x117/x118)<=(x119*x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x122 = INT64_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	int32_t t25 = 997908700;

	t25 = ((x121/x122)<=(x123*x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x126 = -1LL;
	int32_t x127 = INT32_MAX;
	uint16_t x128 = 1U;

	t26 = ((x125/x126)<=(x127*x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	volatile int32_t x131 = INT32_MIN;
	int32_t t27 = 731;

	t27 = ((x129/x130)<=(x131*x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	uint64_t x134 = 20523073966436LLU;
	static int8_t x136 = -1;

	t28 = ((x133/x134)<=(x135*x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MAX;
	static int16_t x138 = INT16_MIN;
	volatile int8_t x139 = INT8_MIN;
	uint64_t x140 = 244084336795389LLU;
	int32_t t29 = -6;

	t29 = ((x137/x138)<=(x139*x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = 7794;
	uint16_t x146 = 1783U;
	volatile int8_t x147 = INT8_MIN;
	static int32_t t30 = -295540427;

	t30 = ((x145/x146)<=(x147*x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = INT64_MAX;
	static uint64_t x150 = 211130238LLU;
	int32_t x151 = -1;

	t31 = ((x149/x150)<=(x151*x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x154 = INT16_MAX;
	int64_t x155 = 20956LL;
	int32_t x156 = -16119;
	volatile int32_t t32 = 0;

	t32 = ((x153/x154)<=(x155*x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	volatile int32_t t33 = -7390705;

	t33 = ((x165/x166)<=(x167*x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = 1718;
	int64_t x175 = -12LL;
	int64_t x176 = 4652003948436LL;
	int32_t t34 = -139;

	t34 = ((x173/x174)<=(x175*x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x185 = 10639U;
	uint8_t x186 = 15U;
	static volatile int32_t x187 = -1;
	volatile int32_t t35 = -3114965;

	t35 = ((x185/x186)<=(x187*x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x191 = 0;
	uint16_t x192 = UINT16_MAX;
	int32_t t36 = 5;

	t36 = ((x189/x190)<=(x191*x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = 6006752LLU;
	int8_t x198 = -6;
	static volatile int16_t x199 = INT16_MIN;
	int32_t t37 = -234;

	t37 = ((x197/x198)<=(x199*x200));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x202 = INT8_MAX;
	static int16_t x203 = INT16_MIN;
	uint8_t x204 = 125U;
	static volatile int32_t t38 = 20045530;

	t38 = ((x201/x202)<=(x203*x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x206 = 104708707109455913LLU;
	int32_t x207 = -99419;
	volatile int64_t x208 = 377LL;
	int32_t t39 = 229;

	t39 = ((x205/x206)<=(x207*x208));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x213 = 456130351U;
	int32_t x214 = INT32_MIN;
	volatile int8_t x215 = -4;
	static volatile int8_t x216 = -1;
	volatile int32_t t40 = -530415437;

	t40 = ((x213/x214)<=(x215*x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x222 = 90906120884LL;
	volatile int16_t x223 = -1;
	int64_t x224 = -1LL;
	int32_t t41 = 111;

	t41 = ((x221/x222)<=(x223*x224));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	static uint8_t x227 = 28U;
	int32_t x228 = -1;
	volatile int32_t t42 = -2015893;

	t42 = ((x225/x226)<=(x227*x228));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x229 = 2112005848743602LLU;
	uint16_t x231 = 1516U;
	volatile int8_t x232 = INT8_MIN;
	int32_t t43 = -96463920;

	t43 = ((x229/x230)<=(x231*x232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x242 = INT64_MIN;
	static volatile uint16_t x243 = 197U;
	static int64_t x244 = -1LL;
	int32_t t44 = 3;

	t44 = ((x241/x242)<=(x243*x244));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = INT16_MAX;
	static volatile uint8_t x250 = UINT8_MAX;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 0U;
	int32_t t45 = -6850557;

	t45 = ((x249/x250)<=(x251*x252));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = -634;
	uint32_t x264 = 1U;
	int32_t t46 = -953805563;

	t46 = ((x261/x262)<=(x263*x264));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x265 = -1;
	int32_t x266 = 9;
	uint8_t x267 = 54U;
	uint8_t x268 = 6U;
	volatile int32_t t47 = -1614609;

	t47 = ((x265/x266)<=(x267*x268));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x269 = UINT64_MAX;
	volatile uint16_t x270 = 12549U;
	uint8_t x271 = 54U;
	uint8_t x272 = 83U;
	volatile int32_t t48 = 3613;

	t48 = ((x269/x270)<=(x271*x272));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = 12;
	int32_t x275 = 63;
	volatile int32_t x276 = -1;
	volatile int32_t t49 = -12281564;

	t49 = ((x273/x274)<=(x275*x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 760037LLU;
	static int32_t t50 = -443427;

	t50 = ((x281/x282)<=(x283*x284));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x285 = 1711U;
	static int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MIN;
	int32_t t51 = -1;

	t51 = ((x285/x286)<=(x287*x288));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x289 = -28;
	int16_t x290 = INT16_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	volatile int32_t t52 = 3;

	t52 = ((x289/x290)<=(x291*x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = 18488U;
	int32_t x300 = -1433;

	t53 = ((x297/x298)<=(x299*x300));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 29893U;
	static int8_t x307 = 1;
	int16_t x308 = -1;
	volatile int32_t t54 = 4718;

	t54 = ((x305/x306)<=(x307*x308));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x309 = -1;
	int8_t x310 = INT8_MIN;
	volatile int16_t x312 = INT16_MAX;
	static int32_t t55 = -426;

	t55 = ((x309/x310)<=(x311*x312));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x333 = -1;
	static uint16_t x335 = 1568U;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t56 = -35;

	t56 = ((x333/x334)<=(x335*x336));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x353 = -7713724;
	volatile int32_t x354 = INT32_MAX;
	int64_t x356 = 528619611861073397LL;
	static volatile int32_t t57 = -9937;

	t57 = ((x353/x354)<=(x355*x356));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x362 = INT64_MIN;
	static uint32_t x363 = 79215U;
	int8_t x364 = INT8_MIN;
	int32_t t58 = 226;

	t58 = ((x361/x362)<=(x363*x364));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x365 = -1;
	uint64_t x366 = UINT64_MAX;
	uint64_t x368 = 3412935286843746LLU;
	static int32_t t59 = -164;

	t59 = ((x365/x366)<=(x367*x368));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x375 = -1;
	volatile int32_t t60 = 15;

	t60 = ((x373/x374)<=(x375*x376));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x377 = -1;
	volatile int8_t x378 = INT8_MAX;
	volatile uint64_t x379 = 18940005LLU;
	int8_t x380 = INT8_MIN;
	volatile int32_t t61 = -436126;

	t61 = ((x377/x378)<=(x379*x380));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x385 = -1;
	static volatile int16_t x386 = -445;
	static uint32_t x388 = 10538U;
	int32_t t62 = -31598;

	t62 = ((x385/x386)<=(x387*x388));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int8_t x399 = INT8_MAX;
	int32_t x400 = 9912407;
	volatile int32_t t63 = 31;

	t63 = ((x397/x398)<=(x399*x400));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x402 = INT16_MIN;
	static uint16_t x403 = UINT16_MAX;
	volatile int8_t x404 = -1;
	volatile int32_t t64 = 4;

	t64 = ((x401/x402)<=(x403*x404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x413 = 0U;
	int64_t x414 = INT64_MAX;

	t65 = ((x413/x414)<=(x415*x416));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x417 = 3LL;
	int32_t x418 = INT32_MAX;
	int8_t x419 = 0;
	uint8_t x420 = 36U;
	int32_t t66 = -2005;

	t66 = ((x417/x418)<=(x419*x420));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x425 = 403498U;
	volatile uint8_t x426 = 79U;
	int16_t x428 = 15;
	int32_t t67 = -3054938;

	t67 = ((x425/x426)<=(x427*x428));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x429 = INT8_MIN;
	uint64_t x430 = 6748057LLU;
	int8_t x431 = -2;
	uint8_t x432 = UINT8_MAX;
	int32_t t68 = 324409;

	t68 = ((x429/x430)<=(x431*x432));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	int64_t x439 = -105959LL;
	volatile int16_t x440 = INT16_MIN;
	static int32_t t69 = 703887;

	t69 = ((x437/x438)<=(x439*x440));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = -1;
	volatile uint32_t x444 = UINT32_MAX;
	volatile int32_t t70 = -471647;

	t70 = ((x441/x442)<=(x443*x444));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x445 = 32894116U;
	int8_t x446 = -1;
	uint16_t x447 = 1U;
	volatile uint8_t x448 = UINT8_MAX;

	t71 = ((x445/x446)<=(x447*x448));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x450 = 2;
	uint8_t x451 = UINT8_MAX;
	uint64_t x452 = UINT64_MAX;
	static volatile int32_t t72 = -932247367;

	t72 = ((x449/x450)<=(x451*x452));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x453 = 64091285438LLU;
	int16_t x455 = 6665;
	int64_t x456 = -2139708610048LL;
	int32_t t73 = 184254;

	t73 = ((x453/x454)<=(x455*x456));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x459 = UINT8_MAX;
	uint8_t x460 = 7U;

	t74 = ((x457/x458)<=(x459*x460));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x466 = INT8_MIN;
	volatile int64_t x468 = -1LL;
	volatile int32_t t75 = 1;

	t75 = ((x465/x466)<=(x467*x468));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x469 = INT16_MIN;
	int32_t x470 = -1;
	static uint32_t x471 = UINT32_MAX;
	volatile int32_t t76 = 0;

	t76 = ((x469/x470)<=(x471*x472));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x473 = INT64_MIN;
	uint16_t x475 = 223U;
	int16_t x476 = -1;
	volatile int32_t t77 = -28083;

	t77 = ((x473/x474)<=(x475*x476));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x477 = -1LL;
	volatile int8_t x478 = INT8_MAX;
	uint64_t x479 = 714701LLU;
	int32_t x480 = -6548990;
	volatile int32_t t78 = -478;

	t78 = ((x477/x478)<=(x479*x480));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x485 = INT8_MAX;
	static uint32_t x486 = UINT32_MAX;
	volatile uint16_t x487 = 56U;
	int16_t x488 = INT16_MIN;

	t79 = ((x485/x486)<=(x487*x488));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x490 = 1U;
	uint64_t x491 = UINT64_MAX;
	volatile int64_t x492 = 21571771LL;
	volatile int32_t t80 = -1246;

	t80 = ((x489/x490)<=(x491*x492));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x497 = 7U;
	int8_t x498 = 21;
	int16_t x499 = INT16_MIN;
	volatile int32_t t81 = 142572173;

	t81 = ((x497/x498)<=(x499*x500));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x501 = -1013819;
	uint32_t x504 = 366795U;

	t82 = ((x501/x502)<=(x503*x504));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x509 = -1LL;
	int16_t x510 = INT16_MIN;
	int32_t t83 = 154903666;

	t83 = ((x509/x510)<=(x511*x512));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x523 = 15U;
	int32_t x524 = -14989574;
	volatile int32_t t84 = -49676;

	t84 = ((x521/x522)<=(x523*x524));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x525 = -1805;
	uint32_t x526 = 6U;
	uint64_t x527 = 1432967LLU;
	int8_t x528 = INT8_MIN;
	volatile int32_t t85 = 22881924;

	t85 = ((x525/x526)<=(x527*x528));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x537 = UINT32_MAX;
	static uint64_t x539 = UINT64_MAX;
	static volatile int32_t t86 = 17;

	t86 = ((x537/x538)<=(x539*x540));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x541 = 336827747998528981LLU;
	int64_t x542 = INT64_MIN;
	int64_t x543 = -1LL;
	int8_t x544 = INT8_MAX;
	int32_t t87 = 105381702;

	t87 = ((x541/x542)<=(x543*x544));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x549 = INT16_MAX;
	static volatile uint32_t x550 = UINT32_MAX;

	t88 = ((x549/x550)<=(x551*x552));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x557 = INT32_MIN;
	int16_t x558 = 180;
	int8_t x559 = -50;
	volatile int32_t t89 = -6054320;

	t89 = ((x557/x558)<=(x559*x560));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x565 = INT64_MAX;
	uint64_t x567 = 6454207544121108LLU;
	int16_t x568 = INT16_MAX;
	volatile int32_t t90 = 7848584;

	t90 = ((x565/x566)<=(x567*x568));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x569 = 1088U;
	int32_t x570 = INT32_MIN;
	static volatile int64_t x571 = 49363935LL;
	int8_t x572 = INT8_MIN;
	volatile int32_t t91 = 99399802;

	t91 = ((x569/x570)<=(x571*x572));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x573 = -1;
	volatile uint64_t x574 = UINT64_MAX;
	int8_t x575 = 7;
	volatile int64_t x576 = -1LL;
	volatile int32_t t92 = 160;

	t92 = ((x573/x574)<=(x575*x576));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x577 = INT16_MIN;
	uint8_t x578 = UINT8_MAX;
	int8_t x579 = -1;
	volatile int32_t t93 = -458336;

	t93 = ((x577/x578)<=(x579*x580));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x582 = UINT64_MAX;
	int32_t x583 = -10794;
	volatile int8_t x584 = -12;
	volatile int32_t t94 = 46072;

	t94 = ((x581/x582)<=(x583*x584));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x589 = 247U;
	static volatile int64_t x590 = INT64_MAX;
	uint8_t x591 = 1U;
	int16_t x592 = 16089;

	t95 = ((x589/x590)<=(x591*x592));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x593 = -1;
	static int16_t x594 = -1;
	static int8_t x596 = 1;
	volatile int32_t t96 = 34483;

	t96 = ((x593/x594)<=(x595*x596));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x597 = 8394U;
	uint8_t x598 = UINT8_MAX;
	uint16_t x599 = 1U;
	int16_t x600 = 821;
	volatile int32_t t97 = 50683297;

	t97 = ((x597/x598)<=(x599*x600));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x601 = INT64_MIN;
	static uint8_t x602 = 7U;
	volatile uint64_t x604 = 191666988104695LLU;
	volatile int32_t t98 = 6;

	t98 = ((x601/x602)<=(x603*x604));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x607 = -1;
	int64_t x608 = -1LL;
	static volatile int32_t t99 = 113289856;

	t99 = ((x605/x606)<=(x607*x608));

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

