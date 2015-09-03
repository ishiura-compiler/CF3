#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MAX;
int32_t t1 = -176263;
volatile int16_t x19 = -1;
static uint16_t x29 = UINT16_MAX;
uint8_t x38 = UINT8_MAX;
volatile int8_t x43 = -17;
volatile uint32_t x45 = UINT32_MAX;
uint64_t x47 = UINT64_MAX;
volatile int8_t x49 = INT8_MAX;
static volatile int64_t x54 = INT64_MIN;
static int8_t x59 = -1;
static volatile int32_t t12 = -263417276;
int8_t x66 = INT8_MAX;
int8_t x67 = 14;
int16_t x73 = INT16_MIN;
int64_t x75 = INT64_MAX;
int16_t x89 = 15;
static int64_t x91 = 1346936195387LL;
uint16_t x99 = UINT16_MAX;
volatile int32_t t20 = -23;
static volatile int8_t x106 = INT8_MIN;
static uint64_t x109 = 30099LLU;
uint32_t x110 = 0U;
uint64_t x114 = UINT64_MAX;
static int16_t x116 = INT16_MIN;
uint32_t x119 = 60U;
uint16_t x120 = 130U;
static int16_t x121 = -1;
static int8_t x124 = -1;
uint32_t x133 = UINT32_MAX;
volatile int32_t t27 = 152;
volatile int16_t x139 = INT16_MIN;
static int8_t x146 = -1;
uint16_t x154 = UINT16_MAX;
int8_t x157 = -1;
int16_t x185 = -22;
static volatile int32_t t34 = -468906;
int64_t x190 = -1LL;
int8_t x193 = INT8_MIN;
uint64_t x198 = UINT64_MAX;
volatile int32_t t37 = 5752;
static int8_t x203 = 1;
static int64_t x209 = -1LL;
uint64_t x212 = 1LLU;
static uint16_t x231 = 19831U;
int32_t x248 = INT32_MIN;
static int32_t t48 = -62687;
static int64_t x279 = INT64_MIN;
uint8_t x280 = 48U;
int32_t x282 = -1;
volatile uint8_t x284 = 51U;
int16_t x293 = -1;
uint8_t x294 = UINT8_MAX;
volatile int32_t t52 = -168;
int32_t t53 = -412877;
uint16_t x301 = 167U;
static volatile int8_t x307 = INT8_MIN;
uint8_t x308 = 1U;
int16_t x310 = INT16_MIN;
int64_t x316 = INT64_MIN;
int8_t x321 = INT8_MAX;
uint16_t x325 = 413U;
volatile int8_t x340 = INT8_MAX;
int32_t t61 = -1;
int32_t x356 = -1;
int32_t t63 = 856009;
static int32_t t65 = -87717;
volatile uint32_t x365 = 257118U;
int8_t x372 = INT8_MIN;
int16_t x375 = 2;
int32_t x385 = INT32_MIN;
uint8_t x392 = 2U;
uint64_t x404 = 119510LLU;
static int32_t x405 = -282;
int32_t t73 = 48031075;
static uint16_t x412 = 38U;
volatile int32_t t74 = -522886;
static volatile int8_t x419 = 6;
static int64_t x420 = INT64_MIN;
volatile int32_t t76 = -1275;
int64_t x443 = -5LL;
uint64_t x445 = 124616072LLU;
uint64_t x448 = 49091326477675LLU;
int32_t x453 = INT32_MIN;
int32_t t82 = -58782811;
uint32_t x457 = UINT32_MAX;
volatile uint16_t x458 = 7466U;
volatile int32_t x461 = -1;
uint32_t x468 = 1U;
int8_t x473 = INT8_MIN;
int32_t x476 = INT32_MIN;
int32_t x477 = 1931;
uint16_t x481 = 15383U;
static int16_t x492 = INT16_MIN;
volatile int32_t t91 = 1;
int16_t x513 = -23;
static volatile int32_t x515 = INT32_MAX;
volatile int32_t t94 = 910317163;
volatile uint64_t x517 = UINT64_MAX;
int16_t x518 = -1;
int8_t x539 = -1;
static volatile int32_t t97 = -829147423;
int8_t x542 = -1;
static volatile uint64_t x544 = 54307024647LLU;


void f0(void) {
	uint16_t x2 = 2U;
	int64_t x3 = -4230801286271LL;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -150;

	t0 = ((x1*x2)<=(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MIN;
	volatile uint64_t x6 = 3027344972LLU;
	volatile uint16_t x7 = 6216U;
	static uint64_t x8 = 204LLU;

	t1 = ((x5*x6)<=(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = 1;
	uint8_t x14 = 79U;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t2 = 29841;

	t2 = ((x13*x14)<=(x15/x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = UINT64_MAX;
	uint8_t x18 = 0U;
	int8_t x20 = 2;
	volatile int32_t t3 = 221;

	t3 = ((x17*x18)<=(x19/x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 14;
	int32_t x26 = -532740;
	volatile uint16_t x27 = UINT16_MAX;
	static uint16_t x28 = UINT16_MAX;
	volatile int32_t t4 = 3324;

	t4 = ((x25*x26)<=(x27/x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x30 = INT8_MIN;
	uint64_t x31 = 68496919593535LLU;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t5 = 11;

	t5 = ((x29*x30)<=(x31/x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = 6;
	uint8_t x39 = 1U;
	volatile int64_t x40 = INT64_MIN;
	volatile int32_t t6 = -136571118;

	t6 = ((x37*x38)<=(x39/x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 715U;
	static int8_t x42 = INT8_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t7 = 0;

	t7 = ((x41*x42)<=(x43/x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x46 = 11317;
	int16_t x48 = -1;
	static volatile int32_t t8 = 2;

	t8 = ((x45*x46)<=(x47/x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = -1LL;
	int8_t x51 = INT8_MAX;
	static int64_t x52 = INT64_MIN;
	int32_t t9 = 141503260;

	t9 = ((x49*x50)<=(x51/x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 0;
	int32_t x55 = INT32_MAX;
	int8_t x56 = -52;
	volatile int32_t t10 = -70457;

	t10 = ((x53*x54)<=(x55/x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = -513128152040154LL;
	static uint64_t x58 = 1966441030548LLU;
	volatile uint64_t x60 = 7329874LLU;
	volatile int32_t t11 = 765;

	t11 = ((x57*x58)<=(x59/x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = -1;
	static uint32_t x62 = UINT32_MAX;
	int64_t x63 = -1LL;
	int32_t x64 = 60102;

	t12 = ((x61*x62)<=(x63/x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MAX;
	int64_t x68 = 3889868LL;
	int32_t t13 = 0;

	t13 = ((x65*x66)<=(x67/x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 0;
	int8_t x70 = INT8_MIN;
	volatile int64_t x71 = 264176962LL;
	int32_t x72 = 931936075;
	volatile int32_t t14 = -194898661;

	t14 = ((x69*x70)<=(x71/x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = INT8_MIN;
	uint64_t x76 = 361134736LLU;
	int32_t t15 = -317;

	t15 = ((x73*x74)<=(x75/x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x85 = INT32_MIN;
	volatile uint64_t x86 = 26LLU;
	int16_t x87 = INT16_MIN;
	int32_t x88 = -37003416;
	int32_t t16 = -2895729;

	t16 = ((x85*x86)<=(x87/x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x90 = 11U;
	int16_t x92 = INT16_MIN;
	static int32_t t17 = 68378568;

	t17 = ((x89*x90)<=(x91/x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x93 = UINT8_MAX;
	int8_t x94 = -63;
	volatile int64_t x95 = 955160442492LL;
	int64_t x96 = INT64_MAX;
	volatile int32_t t18 = -221553;

	t18 = ((x93*x94)<=(x95/x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x98 = UINT32_MAX;
	int16_t x100 = INT16_MAX;
	int32_t t19 = 958;

	t19 = ((x97*x98)<=(x99/x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 3U;
	uint8_t x102 = 56U;
	int8_t x103 = 36;
	int8_t x104 = INT8_MIN;

	t20 = ((x101*x102)<=(x103/x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	uint32_t x107 = UINT32_MAX;
	static uint64_t x108 = UINT64_MAX;
	int32_t t21 = -88;

	t21 = ((x105*x106)<=(x107/x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x111 = -1;
	int64_t x112 = -1LL;
	int32_t t22 = 874;

	t22 = ((x109*x110)<=(x111/x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	int16_t x115 = -1;
	volatile int32_t t23 = 4679565;

	t23 = ((x113*x114)<=(x115/x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = 33;
	static uint64_t x118 = 35817419598463097LLU;
	int32_t t24 = 146000;

	t24 = ((x117*x118)<=(x119/x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x122 = 409U;
	volatile int16_t x123 = -1;
	int32_t t25 = 22;

	t25 = ((x121*x122)<=(x123/x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -13124786LL;
	int8_t x126 = 9;
	int32_t x127 = -2406;
	uint16_t x128 = 1U;
	static int32_t t26 = 738;

	t26 = ((x125*x126)<=(x127/x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x134 = INT32_MAX;
	int32_t x135 = -1041939714;
	uint8_t x136 = UINT8_MAX;

	t27 = ((x133*x134)<=(x135/x136));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 2922885191LLU;
	static int64_t x138 = 1454874860LL;
	int32_t x140 = -1;
	volatile int32_t t28 = 1729377;

	t28 = ((x137*x138)<=(x139/x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x145 = -1;
	volatile int8_t x147 = -1;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t29 = -115240;

	t29 = ((x145*x146)<=(x147/x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = -1;
	static uint16_t x150 = UINT16_MAX;
	static volatile int8_t x151 = INT8_MIN;
	volatile int32_t x152 = 293104456;
	volatile int32_t t30 = -135248;

	t30 = ((x149*x150)<=(x151/x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	int64_t x155 = INT64_MIN;
	int32_t x156 = -52952;
	static int32_t t31 = 58;

	t31 = ((x153*x154)<=(x155/x156));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x158 = 359;
	int8_t x159 = INT8_MAX;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t32 = -146;

	t32 = ((x157*x158)<=(x159/x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = 5;
	uint8_t x166 = 32U;
	int64_t x167 = -1LL;
	int32_t x168 = INT32_MAX;
	volatile int32_t t33 = 71;

	t33 = ((x165*x166)<=(x167/x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x186 = 6U;
	int16_t x187 = -1;
	uint64_t x188 = 3901413406956017874LLU;

	t34 = ((x185*x186)<=(x187/x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	static volatile int8_t x191 = INT8_MIN;
	int64_t x192 = -7447093552146592LL;
	static volatile int32_t t35 = -338882432;

	t35 = ((x189*x190)<=(x191/x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x194 = INT16_MAX;
	volatile uint8_t x195 = 30U;
	int32_t x196 = 258900;
	volatile int32_t t36 = -2;

	t36 = ((x193*x194)<=(x195/x196));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x199 = INT32_MAX;
	uint8_t x200 = 6U;

	t37 = ((x197*x198)<=(x199/x200));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x201 = UINT16_MAX;
	static volatile uint8_t x202 = UINT8_MAX;
	int32_t x204 = -50965616;
	volatile int32_t t38 = 169;

	t38 = ((x201*x202)<=(x203/x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x210 = 18U;
	int8_t x211 = INT8_MIN;
	int32_t t39 = -494128858;

	t39 = ((x209*x210)<=(x211/x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -6189813;
	uint8_t x214 = UINT8_MAX;
	static int64_t x215 = -1LL;
	uint64_t x216 = 364711489024LLU;
	int32_t t40 = -257589555;

	t40 = ((x213*x214)<=(x215/x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x229 = INT16_MAX;
	int32_t x230 = -1;
	int32_t x232 = -1;
	int32_t t41 = 2889557;

	t41 = ((x229*x230)<=(x231/x232));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile uint32_t x238 = 53U;
	volatile uint64_t x239 = 653386917354LLU;
	static uint64_t x240 = 1593307697350282464LLU;
	int32_t t42 = -497355;

	t42 = ((x237*x238)<=(x239/x240));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x241 = 4093U;
	int8_t x242 = INT8_MAX;
	static uint32_t x243 = 59591U;
	int32_t x244 = INT32_MIN;
	int32_t t43 = -3479;

	t43 = ((x241*x242)<=(x243/x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x245 = 134U;
	uint8_t x246 = 13U;
	uint16_t x247 = UINT16_MAX;
	static volatile int32_t t44 = -241;

	t44 = ((x245*x246)<=(x247/x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x253 = -11909LL;
	uint32_t x254 = 10806U;
	int32_t x255 = 0;
	static volatile int16_t x256 = INT16_MAX;
	volatile int32_t t45 = -105427;

	t45 = ((x253*x254)<=(x255/x256));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = -1;
	int8_t x262 = -12;
	int8_t x263 = -1;
	uint8_t x264 = 2U;
	static int32_t t46 = -60379900;

	t46 = ((x261*x262)<=(x263/x264));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = -1510720LL;
	int32_t x266 = -546;
	volatile int16_t x267 = INT16_MIN;
	static volatile int8_t x268 = 12;
	static volatile int32_t t47 = 134;

	t47 = ((x265*x266)<=(x267/x268));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x273 = 24U;
	int8_t x274 = 7;
	int64_t x275 = 21367LL;
	static int16_t x276 = INT16_MAX;

	t48 = ((x273*x274)<=(x275/x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = 1;
	int32_t t49 = -12;

	t49 = ((x277*x278)<=(x279/x280));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x281 = 1306U;
	uint16_t x283 = UINT16_MAX;
	int32_t t50 = 1;

	t50 = ((x281*x282)<=(x283/x284));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = UINT8_MAX;
	uint8_t x287 = 10U;
	static int16_t x288 = INT16_MIN;
	int32_t t51 = 27367;

	t51 = ((x285*x286)<=(x287/x288));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x295 = 2895447350271612465LLU;
	volatile int8_t x296 = -1;

	t52 = ((x293*x294)<=(x295/x296));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x297 = -1LL;
	static int32_t x298 = -16;
	int16_t x299 = -1;
	static uint32_t x300 = 3684U;

	t53 = ((x297*x298)<=(x299/x300));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x302 = UINT8_MAX;
	static uint32_t x303 = 173388U;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t54 = -31;

	t54 = ((x301*x302)<=(x303/x304));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x305 = 59287LLU;
	int64_t x306 = -1LL;
	static int32_t t55 = -30;

	t55 = ((x305*x306)<=(x307/x308));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x309 = 98U;
	int16_t x311 = -1;
	int16_t x312 = -2985;
	int32_t t56 = -3028663;

	t56 = ((x309*x310)<=(x311/x312));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x313 = UINT32_MAX;
	static volatile uint8_t x314 = 15U;
	volatile uint64_t x315 = 1247504LLU;
	volatile int32_t t57 = -57;

	t57 = ((x313*x314)<=(x315/x316));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x322 = -1;
	int16_t x323 = INT16_MAX;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t58 = -6;

	t58 = ((x321*x322)<=(x323/x324));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = 12475796564293040LL;
	int32_t x328 = INT32_MIN;
	int32_t t59 = 3078323;

	t59 = ((x325*x326)<=(x327/x328));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x329 = 1086U;
	int32_t x330 = -1;
	static int8_t x331 = INT8_MIN;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t60 = 1971776;

	t60 = ((x329*x330)<=(x331/x332));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = -44171;
	int8_t x339 = -1;

	t61 = ((x337*x338)<=(x339/x340));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint16_t x342 = 0U;
	volatile uint32_t x343 = 3220211U;
	int64_t x344 = -1LL;
	int32_t t62 = 199402;

	t62 = ((x341*x342)<=(x343/x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x353 = INT16_MAX;
	uint64_t x354 = 619137LLU;
	int64_t x355 = -1LL;

	t63 = ((x353*x354)<=(x355/x356));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x357 = UINT64_MAX;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = -1;
	static volatile uint64_t x360 = 507539784918634497LLU;
	volatile int32_t t64 = 2;

	t64 = ((x357*x358)<=(x359/x360));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x361 = -1LL;
	uint16_t x362 = 0U;
	static int16_t x363 = INT16_MIN;
	uint8_t x364 = UINT8_MAX;

	t65 = ((x361*x362)<=(x363/x364));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x366 = INT16_MAX;
	uint8_t x367 = 102U;
	volatile int8_t x368 = INT8_MAX;
	static volatile int32_t t66 = -96;

	t66 = ((x365*x366)<=(x367/x368));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x369 = -1;
	static int8_t x370 = INT8_MAX;
	int16_t x371 = 58;
	volatile int32_t t67 = -8163313;

	t67 = ((x369*x370)<=(x371/x372));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x373 = INT8_MIN;
	int64_t x374 = -1LL;
	uint16_t x376 = UINT16_MAX;
	int32_t t68 = -16620157;

	t68 = ((x373*x374)<=(x375/x376));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x386 = 20U;
	volatile int16_t x387 = -1;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t69 = 45;

	t69 = ((x385*x386)<=(x387/x388));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x389 = -52;
	volatile int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = 0U;
	int32_t t70 = 0;

	t70 = ((x389*x390)<=(x391/x392));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x397 = -1;
	volatile int32_t x398 = -21181994;
	volatile int16_t x399 = 0;
	int16_t x400 = -1;
	int32_t t71 = 6;

	t71 = ((x397*x398)<=(x399/x400));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x401 = 1648653U;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = -46;
	static int32_t t72 = -1;

	t72 = ((x401*x402)<=(x403/x404));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MAX;

	t73 = ((x405*x406)<=(x407/x408));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x409 = -1;
	int64_t x410 = -21175867814995LL;
	uint8_t x411 = 2U;

	t74 = ((x409*x410)<=(x411/x412));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = 1978080LLU;
	int32_t x415 = -1;
	int32_t x416 = -1105;
	volatile int32_t t75 = -3;

	t75 = ((x413*x414)<=(x415/x416));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x417 = 2;
	int16_t x418 = INT16_MAX;

	t76 = ((x417*x418)<=(x419/x420));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x425 = -976677993551562LL;
	volatile int64_t x426 = -1LL;
	static int16_t x427 = -250;
	uint8_t x428 = UINT8_MAX;
	int32_t t77 = 1;

	t77 = ((x425*x426)<=(x427/x428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x437 = 7064279988422LL;
	volatile int8_t x438 = -1;
	uint32_t x439 = 31684152U;
	int16_t x440 = -1;
	volatile int32_t t78 = -6208;

	t78 = ((x437*x438)<=(x439/x440));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x441 = -1LL;
	volatile uint16_t x442 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t79 = -7137;

	t79 = ((x441*x442)<=(x443/x444));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x446 = -3051;
	volatile int64_t x447 = INT64_MIN;
	volatile int32_t t80 = 1;

	t80 = ((x445*x446)<=(x447/x448));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x449 = INT8_MAX;
	volatile int16_t x450 = -1;
	int16_t x451 = -1;
	int64_t x452 = INT64_MIN;
	int32_t t81 = 671790;

	t81 = ((x449*x450)<=(x451/x452));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x454 = UINT32_MAX;
	int32_t x455 = 12490;
	int16_t x456 = -6;

	t82 = ((x453*x454)<=(x455/x456));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = INT32_MIN;
	static int32_t t83 = 17624129;

	t83 = ((x457*x458)<=(x459/x460));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x462 = -51;
	int16_t x463 = INT16_MIN;
	int64_t x464 = INT64_MIN;
	volatile int32_t t84 = 3;

	t84 = ((x461*x462)<=(x463/x464));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x465 = UINT8_MAX;
	static volatile uint64_t x466 = UINT64_MAX;
	int8_t x467 = INT8_MAX;
	volatile int32_t t85 = 44288;

	t85 = ((x465*x466)<=(x467/x468));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x474 = 241;
	int8_t x475 = -1;
	static int32_t t86 = -1;

	t86 = ((x473*x474)<=(x475/x476));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x478 = 2U;
	static int64_t x479 = INT64_MIN;
	uint64_t x480 = 11711368793LLU;
	volatile int32_t t87 = 3;

	t87 = ((x477*x478)<=(x479/x480));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x482 = 0U;
	int64_t x483 = INT64_MAX;
	volatile int8_t x484 = INT8_MIN;
	int32_t t88 = -775616467;

	t88 = ((x481*x482)<=(x483/x484));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x485 = 8253773143293398953LLU;
	volatile uint64_t x486 = 2708445271548LLU;
	volatile uint32_t x487 = 1U;
	uint8_t x488 = 18U;
	volatile int32_t t89 = 45138;

	t89 = ((x485*x486)<=(x487/x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x489 = -368;
	volatile uint64_t x490 = 76922947485666215LLU;
	int8_t x491 = 1;
	volatile int32_t t90 = 1807830;

	t90 = ((x489*x490)<=(x491/x492));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x493 = 1;
	int16_t x494 = 9;
	int16_t x495 = INT16_MIN;
	int32_t x496 = -1;

	t91 = ((x493*x494)<=(x495/x496));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x505 = INT8_MIN;
	uint64_t x506 = 0LLU;
	volatile int64_t x507 = -1LL;
	static volatile int32_t x508 = INT32_MIN;
	volatile int32_t t92 = -77436107;

	t92 = ((x505*x506)<=(x507/x508));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x509 = INT8_MAX;
	int16_t x510 = INT16_MIN;
	static uint64_t x511 = 0LLU;
	static volatile uint8_t x512 = 33U;
	int32_t t93 = -9037092;

	t93 = ((x509*x510)<=(x511/x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x514 = 784U;
	uint8_t x516 = UINT8_MAX;

	t94 = ((x513*x514)<=(x515/x516));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x519 = 1656537505U;
	int64_t x520 = -407180537819935LL;
	static volatile int32_t t95 = 4572222;

	t95 = ((x517*x518)<=(x519/x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x525 = 0;
	volatile int8_t x526 = INT8_MIN;
	uint32_t x527 = 127087022U;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t96 = 4058;

	t96 = ((x525*x526)<=(x527/x528));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x537 = -1;
	volatile uint64_t x538 = 16739211995LLU;
	int8_t x540 = INT8_MIN;

	t97 = ((x537*x538)<=(x539/x540));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x541 = INT8_MAX;
	int32_t x543 = INT32_MIN;
	volatile int32_t t98 = -1169;

	t98 = ((x541*x542)<=(x543/x544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x545 = INT32_MIN;
	uint64_t x546 = UINT64_MAX;
	volatile uint32_t x547 = 256U;
	int8_t x548 = INT8_MIN;
	int32_t t99 = 0;

	t99 = ((x545*x546)<=(x547/x548));

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

