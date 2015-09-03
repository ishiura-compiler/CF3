#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile int64_t x2 = -1LL;
int32_t t2 = -64583;
static uint8_t x18 = 2U;
int64_t x22 = -58052701714LL;
volatile int32_t t4 = -332;
static int16_t x26 = INT16_MIN;
uint8_t x30 = 0U;
uint16_t x32 = UINT16_MAX;
volatile int32_t t6 = -631;
static volatile int8_t x41 = -1;
int32_t x51 = 18426558;
volatile int8_t x55 = -1;
volatile int32_t x59 = INT32_MAX;
volatile int8_t x60 = -14;
volatile int32_t t12 = 1;
uint64_t t13 = 251243912058555LLU;
uint16_t x75 = UINT16_MAX;
uint8_t x110 = UINT8_MAX;
uint16_t x114 = UINT16_MAX;
uint32_t x122 = 697569855U;
static uint32_t t23 = 206761U;
int32_t t24 = -16629962;
int16_t x136 = 184;
int8_t x138 = 6;
static volatile int8_t x141 = INT8_MIN;
volatile uint16_t x145 = 10097U;
uint8_t x147 = 6U;
int16_t x149 = -1;
int32_t t30 = -3;
static int32_t x159 = INT32_MIN;
int64_t x164 = -1LL;
int64_t x170 = -167742695LL;
static int16_t x178 = INT16_MAX;
uint8_t x181 = 5U;
int32_t x186 = -1;
static int32_t x220 = -133;
int32_t x242 = -1;
volatile int32_t t45 = -461;
uint16_t x251 = 0U;
int32_t x252 = INT32_MIN;
int8_t x256 = 1;
int64_t x268 = INT64_MIN;
int8_t x272 = -1;
int16_t x274 = INT16_MIN;
uint32_t x285 = UINT32_MAX;
volatile uint32_t x289 = 54U;
static int16_t x300 = INT16_MAX;
volatile int64_t t54 = -49052760890618161LL;
int32_t x310 = 23;
volatile uint64_t t58 = 3885650002684750LLU;
uint16_t x319 = 11U;
static uint32_t x321 = UINT32_MAX;
int32_t t62 = -682434605;
uint32_t x340 = UINT32_MAX;
static int32_t t67 = -32174;
int32_t x369 = INT32_MIN;
int64_t x370 = -3421630918LL;
uint64_t x372 = UINT64_MAX;
volatile int32_t t70 = -202;
static volatile uint32_t t71 = 488318687U;
static uint16_t x389 = UINT16_MAX;
static int16_t x391 = 1;
uint8_t x394 = UINT8_MAX;
uint16_t x396 = UINT16_MAX;
static volatile uint64_t x414 = 2258LLU;
static volatile uint32_t x420 = 6671U;
int16_t x431 = INT16_MIN;
volatile int8_t x435 = INT8_MAX;
int64_t x436 = 54LL;
int16_t x445 = 3094;
int64_t x447 = -1LL;
int16_t x448 = INT16_MAX;
int16_t x450 = 29;
uint8_t x458 = 15U;
int32_t x462 = INT32_MIN;
int8_t x469 = -1;
int8_t x477 = INT8_MIN;
int8_t x478 = INT8_MAX;
int8_t x479 = -1;
static volatile int32_t t88 = 18287566;
static uint64_t x482 = UINT64_MAX;
int16_t x488 = -1;
int64_t t91 = -192LL;
static int32_t x500 = INT32_MIN;
static volatile int8_t x502 = INT8_MIN;
volatile int32_t t94 = 5721;
int32_t x518 = -11;
int8_t x520 = INT8_MIN;
volatile int32_t t95 = 1100168;
uint64_t x522 = 860094994083LLU;
int32_t x526 = 41561;
int64_t x528 = INT64_MAX;
uint8_t x555 = UINT8_MAX;


void f0(void) {
	int8_t x3 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -1;

	t0 = (x1*((x2*x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	uint32_t x6 = UINT32_MAX;
	static uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 4042U;
	volatile int64_t t1 = 4945586414LL;

	t1 = (x5*((x6*x7)==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint32_t x14 = 38853511U;
	static uint16_t x15 = 26U;
	int8_t x16 = INT8_MAX;

	t2 = (x13*((x14*x15)==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MIN;
	static volatile uint8_t x19 = 1U;
	int8_t x20 = -7;
	static volatile int32_t t3 = -249986;

	t3 = (x17*((x18*x19)==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 123198;
	volatile int16_t x23 = INT16_MIN;
	static int16_t x24 = 174;

	t4 = (x21*((x22*x23)==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1;
	static volatile int16_t x27 = -73;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t5 = -503675235;

	t5 = (x25*((x26*x27)==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	int8_t x31 = INT8_MIN;

	t6 = (x29*((x30*x31)==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	static int16_t x34 = INT16_MIN;
	uint64_t x35 = 2271441LLU;
	uint64_t x36 = 29534LLU;
	volatile uint64_t t7 = 40166726601611LLU;

	t7 = (x33*((x34*x35)==x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x42 = 2359261731822LLU;
	static uint8_t x43 = 14U;
	uint8_t x44 = 7U;
	volatile int32_t t8 = 115268499;

	t8 = (x41*((x42*x43)==x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x45 = 2191124U;
	volatile int16_t x46 = -1943;
	volatile uint32_t x47 = 769U;
	int8_t x48 = INT8_MIN;
	uint32_t t9 = 16568570U;

	t9 = (x45*((x46*x47)==x48));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = UINT32_MAX;
	static volatile uint32_t x50 = 1368970932U;
	uint32_t x52 = 299673782U;
	uint32_t t10 = 868075U;

	t10 = (x49*((x50*x51)==x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -1;
	volatile int64_t x54 = -23398911LL;
	int64_t x56 = 15858LL;
	int32_t t11 = 5624;

	t11 = (x53*((x54*x55)==x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = INT16_MIN;
	uint32_t x58 = 2339985U;

	t12 = (x57*((x58*x59)==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x69 = 5499750485772LLU;
	int32_t x70 = -12;
	volatile int8_t x71 = -1;
	uint32_t x72 = 62421013U;

	t13 = (x69*((x70*x71)==x72));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = 5192;
	int8_t x74 = 5;
	int32_t x76 = 637961;
	volatile int32_t t14 = 49604;

	t14 = (x73*((x74*x75)==x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 3U;
	volatile int32_t x80 = INT32_MAX;
	int64_t t15 = -304LL;

	t15 = (x77*((x78*x79)==x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = -1;
	int32_t x83 = 73851;
	volatile uint32_t x84 = 1349016949U;
	volatile int32_t t16 = -4685425;

	t16 = (x81*((x82*x83)==x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = INT32_MAX;
	int32_t x90 = 946;
	uint32_t x91 = 3490102U;
	static uint64_t x92 = 112924054138245215LLU;
	static int32_t t17 = -4;

	t17 = (x89*((x90*x91)==x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = INT8_MIN;
	static int8_t x94 = 13;
	volatile int16_t x95 = -1;
	uint32_t x96 = 25175U;
	volatile int32_t t18 = -52909;

	t18 = (x93*((x94*x95)==x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x101 = INT64_MIN;
	int32_t x102 = 1684438;
	int8_t x103 = INT8_MAX;
	static int8_t x104 = -1;
	static int64_t t19 = -25541LL;

	t19 = (x101*((x102*x103)==x104));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x109 = INT32_MAX;
	int16_t x111 = 45;
	int8_t x112 = -1;
	int32_t t20 = -17053075;

	t20 = (x109*((x110*x111)==x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = 58;
	static int64_t x115 = 226379LL;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t21 = -412945518;

	t21 = (x113*((x114*x115)==x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x117 = 37845517U;
	int64_t x118 = INT64_MIN;
	volatile int32_t x119 = 0;
	volatile uint32_t x120 = 126450848U;
	volatile uint32_t t22 = 8302054U;

	t22 = (x117*((x118*x119)==x120));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 23463881U;
	volatile uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;

	t23 = (x121*((x122*x123)==x124));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -74755;
	static uint64_t x128 = 6651LLU;

	t24 = (x125*((x126*x127)==x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = -9088019LL;
	static int16_t x130 = INT16_MIN;
	uint32_t x131 = 109960368U;
	uint32_t x132 = 1956U;
	int64_t t25 = 13603413231339010LL;

	t25 = (x129*((x130*x131)==x132));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = 1393542827947268032LLU;
	volatile int64_t t26 = -18657891480LL;

	t26 = (x133*((x134*x135)==x136));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x137 = INT64_MIN;
	uint8_t x139 = UINT8_MAX;
	uint16_t x140 = 4164U;
	volatile int64_t t27 = 1889782609663760LL;

	t27 = (x137*((x138*x139)==x140));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x142 = 0U;
	volatile uint16_t x143 = UINT16_MAX;
	uint16_t x144 = UINT16_MAX;
	static int32_t t28 = 1190170;

	t28 = (x141*((x142*x143)==x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x146 = INT16_MAX;
	int32_t x148 = INT32_MAX;
	volatile int32_t t29 = 6;

	t29 = (x145*((x146*x147)==x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x150 = -1;
	volatile int32_t x151 = 2150;
	static int64_t x152 = INT64_MIN;

	t30 = (x149*((x150*x151)==x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x153 = 2U;
	uint64_t x154 = 22406989398245LLU;
	int32_t x155 = 1827981;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t31 = 1929;

	t31 = (x153*((x154*x155)==x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = 1583696729U;
	uint32_t x158 = UINT32_MAX;
	static volatile int64_t x160 = INT64_MIN;
	static uint32_t t32 = 3033U;

	t32 = (x157*((x158*x159)==x160));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = -1;
	uint32_t x162 = 3948935U;
	int32_t x163 = -179;
	int32_t t33 = 119020032;

	t33 = (x161*((x162*x163)==x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x165 = -1;
	int8_t x166 = -7;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MAX;
	static volatile int32_t t34 = 60185239;

	t34 = (x165*((x166*x167)==x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = -1;
	int32_t x171 = INT32_MIN;
	static int32_t x172 = -586690;
	volatile int32_t t35 = -114;

	t35 = (x169*((x170*x171)==x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x177 = UINT32_MAX;
	static int16_t x179 = 10;
	int32_t x180 = 3234;
	volatile uint32_t t36 = 1369480077U;

	t36 = (x177*((x178*x179)==x180));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x182 = -1LL;
	int8_t x183 = 0;
	int16_t x184 = 1206;
	int32_t t37 = -11;

	t37 = (x181*((x182*x183)==x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = 4;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = -1;
	int32_t t38 = 3374;

	t38 = (x185*((x186*x187)==x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x201 = UINT64_MAX;
	static uint16_t x202 = 1U;
	int64_t x203 = -3709841216821621LL;
	uint32_t x204 = 9706U;
	uint64_t t39 = 56711990957519LLU;

	t39 = (x201*((x202*x203)==x204));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x213 = 691659792860114LLU;
	uint8_t x214 = 0U;
	volatile uint64_t x215 = 5305461019607879223LLU;
	static volatile int64_t x216 = INT64_MAX;
	uint64_t t40 = 3374482512626LLU;

	t40 = (x213*((x214*x215)==x216));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = INT8_MAX;
	int64_t x218 = 1LL;
	int8_t x219 = 1;
	volatile int32_t t41 = 31984161;

	t41 = (x217*((x218*x219)==x220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = 332;
	static int8_t x230 = -1;
	int64_t x231 = 33LL;
	static uint64_t x232 = 993116740593LLU;
	volatile int32_t t42 = -24;

	t42 = (x229*((x230*x231)==x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x233 = 678;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t43 = 1705;

	t43 = (x233*((x234*x235)==x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x237 = UINT32_MAX;
	static uint64_t x238 = 1082168936LLU;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;
	uint32_t t44 = 53U;

	t44 = (x237*((x238*x239)==x240));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x243 = 13418U;
	static volatile int64_t x244 = INT64_MIN;

	t45 = (x241*((x242*x243)==x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = INT64_MAX;
	int64_t x250 = 53058886962199547LL;
	volatile int64_t t46 = 102LL;

	t46 = (x249*((x250*x251)==x252));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	uint64_t x255 = 177LLU;
	volatile int64_t t47 = -2LL;

	t47 = (x253*((x254*x255)==x256));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x257 = INT16_MIN;
	static uint64_t x258 = UINT64_MAX;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int64_t x260 = INT64_MAX;
	int32_t t48 = 3;

	t48 = (x257*((x258*x259)==x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x265 = 29U;
	int16_t x266 = 10106;
	int16_t x267 = -1;
	int32_t t49 = -550687;

	t49 = (x265*((x266*x267)==x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = -1;
	int32_t x270 = -1;
	static int16_t x271 = -2507;
	volatile int32_t t50 = -785;

	t50 = (x269*((x270*x271)==x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = INT16_MIN;
	volatile int8_t x275 = -25;
	static uint32_t x276 = 90U;
	volatile int32_t t51 = -79026497;

	t51 = (x273*((x274*x275)==x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x286 = UINT8_MAX;
	volatile int64_t x287 = -1LL;
	uint8_t x288 = UINT8_MAX;
	uint32_t t52 = 0U;

	t52 = (x285*((x286*x287)==x288));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x290 = -1;
	uint32_t x291 = 268025U;
	int8_t x292 = -1;
	static volatile uint32_t t53 = 2U;

	t53 = (x289*((x290*x291)==x292));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = INT64_MAX;
	uint8_t x298 = UINT8_MAX;
	int16_t x299 = -5159;

	t54 = (x297*((x298*x299)==x300));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = -1;
	uint16_t x304 = 0U;
	volatile int32_t t55 = -477073643;

	t55 = (x301*((x302*x303)==x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = -247;
	int32_t x307 = -5;
	int8_t x308 = -1;
	volatile int32_t t56 = 460;

	t56 = (x305*((x306*x307)==x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x309 = 5260U;
	int8_t x311 = -1;
	static uint8_t x312 = 0U;
	int32_t t57 = -91;

	t57 = (x309*((x310*x311)==x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x313 = 1LLU;
	volatile uint64_t x314 = 1528LLU;
	int8_t x315 = INT8_MIN;
	static volatile int64_t x316 = 3504015LL;

	t58 = (x313*((x314*x315)==x316));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x317 = UINT32_MAX;
	int8_t x318 = 18;
	uint16_t x320 = 666U;
	uint32_t t59 = 2241U;

	t59 = (x317*((x318*x319)==x320));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x322 = -5426;
	static int16_t x323 = -1;
	int64_t x324 = INT64_MIN;
	volatile uint32_t t60 = 666U;

	t60 = (x321*((x322*x323)==x324));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = INT8_MAX;
	static volatile uint16_t x326 = UINT16_MAX;
	volatile int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MIN;
	static int32_t t61 = -31876;

	t61 = (x325*((x326*x327)==x328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x329 = 62U;
	volatile int32_t x330 = INT32_MIN;
	int32_t x331 = 0;
	volatile uint64_t x332 = UINT64_MAX;

	t62 = (x329*((x330*x331)==x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x337 = -23;
	int16_t x338 = -8;
	int16_t x339 = INT16_MIN;
	static volatile int32_t t63 = -1;

	t63 = (x337*((x338*x339)==x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = -1;
	uint64_t x342 = 604267546011582834LLU;
	volatile int16_t x343 = -4;
	volatile int32_t x344 = -1;
	int32_t t64 = 32291685;

	t64 = (x341*((x342*x343)==x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = INT64_MAX;
	volatile uint16_t x346 = 27817U;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MIN;
	int64_t t65 = 173845112LL;

	t65 = (x345*((x346*x347)==x348));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = 1U;
	int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t66 = 0;

	t66 = (x357*((x358*x359)==x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x361 = INT8_MIN;
	static int8_t x362 = INT8_MIN;
	volatile uint32_t x363 = 9148619U;
	int16_t x364 = 12791;

	t67 = (x361*((x362*x363)==x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x365 = -1;
	uint64_t x366 = 460906LLU;
	int64_t x367 = 23314056318111734LL;
	int32_t x368 = INT32_MIN;
	int32_t t68 = -1801;

	t68 = (x365*((x366*x367)==x368));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x371 = INT8_MIN;
	static int32_t t69 = -788;

	t69 = (x369*((x370*x371)==x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x373 = -25;
	int64_t x374 = -2831532860649967920LL;
	int64_t x375 = -1LL;
	int32_t x376 = -1;

	t70 = (x373*((x374*x375)==x376));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = 6068152LLU;
	volatile int8_t x388 = INT8_MIN;

	t71 = (x385*((x386*x387)==x388));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x390 = 5537458LLU;
	static int32_t x392 = -111497172;
	volatile int32_t t72 = 110690278;

	t72 = (x389*((x390*x391)==x392));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x393 = UINT16_MAX;
	static uint16_t x395 = UINT16_MAX;
	static volatile int32_t t73 = 1314945;

	t73 = (x393*((x394*x395)==x396));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x401 = 1U;
	uint64_t x402 = 297774566374649LLU;
	static uint16_t x403 = 451U;
	int8_t x404 = -2;
	volatile uint32_t t74 = 17530489U;

	t74 = (x401*((x402*x403)==x404));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x405 = INT16_MIN;
	volatile int16_t x406 = -160;
	int32_t x407 = 198;
	static int8_t x408 = -1;
	static int32_t t75 = -5;

	t75 = (x405*((x406*x407)==x408));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x409 = -1LL;
	static int16_t x410 = INT16_MIN;
	int8_t x411 = -3;
	uint16_t x412 = 1U;
	static int64_t t76 = -72LL;

	t76 = (x409*((x410*x411)==x412));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x413 = -35;
	uint8_t x415 = UINT8_MAX;
	static uint8_t x416 = UINT8_MAX;
	int32_t t77 = -81623;

	t77 = (x413*((x414*x415)==x416));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = -4434461224203015LL;
	uint16_t x418 = 15U;
	int16_t x419 = INT16_MIN;
	volatile int64_t t78 = 9798981002058384LL;

	t78 = (x417*((x418*x419)==x420));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x429 = INT32_MAX;
	static uint64_t x430 = UINT64_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t79 = 9242;

	t79 = (x429*((x430*x431)==x432));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = -750819843LL;
	int8_t x434 = INT8_MIN;
	int64_t t80 = 2392032LL;

	t80 = (x433*((x434*x435)==x436));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x437 = INT64_MAX;
	int64_t x438 = 75419307LL;
	volatile int16_t x439 = INT16_MAX;
	static int8_t x440 = -1;
	int64_t t81 = -339295LL;

	t81 = (x437*((x438*x439)==x440));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x441 = -1;
	volatile uint32_t x442 = UINT32_MAX;
	uint8_t x443 = 3U;
	volatile int8_t x444 = -1;
	volatile int32_t t82 = -1548;

	t82 = (x441*((x442*x443)==x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x446 = -64842408098232904LL;
	volatile int32_t t83 = -47;

	t83 = (x445*((x446*x447)==x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x449 = 154;
	uint64_t x451 = 12726692179317LLU;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t84 = -7;

	t84 = (x449*((x450*x451)==x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x457 = 2496627U;
	uint64_t x459 = UINT64_MAX;
	uint16_t x460 = 7U;
	uint32_t t85 = 128U;

	t85 = (x457*((x458*x459)==x460));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x461 = INT64_MIN;
	static uint32_t x463 = 52U;
	uint32_t x464 = 81618U;
	int64_t t86 = 58LL;

	t86 = (x461*((x462*x463)==x464));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x470 = -1;
	int16_t x471 = -1;
	int32_t x472 = 1788;
	static int32_t t87 = -78;

	t87 = (x469*((x470*x471)==x472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x480 = INT16_MIN;

	t88 = (x477*((x478*x479)==x480));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x481 = 6820148682311270831LLU;
	int64_t x483 = -2783843710LL;
	uint32_t x484 = 264648U;
	static volatile uint64_t t89 = 7058LLU;

	t89 = (x481*((x482*x483)==x484));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x485 = INT32_MIN;
	volatile int16_t x486 = -1;
	int8_t x487 = 1;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x485*((x486*x487)==x488));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x493 = INT64_MIN;
	uint64_t x494 = 2LLU;
	volatile int64_t x495 = INT64_MAX;
	int32_t x496 = INT32_MIN;

	t91 = (x493*((x494*x495)==x496));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x497 = INT16_MIN;
	static int8_t x498 = 1;
	int8_t x499 = -1;
	int32_t t92 = -14446054;

	t92 = (x497*((x498*x499)==x500));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x501 = UINT64_MAX;
	static int64_t x503 = -52506LL;
	int64_t x504 = INT64_MAX;
	uint64_t t93 = 29966527208860LLU;

	t93 = (x501*((x502*x503)==x504));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x505 = UINT16_MAX;
	int32_t x506 = 13158;
	uint32_t x507 = 208U;
	uint16_t x508 = 6U;

	t94 = (x505*((x506*x507)==x508));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x517 = -57;
	static int8_t x519 = INT8_MIN;

	t95 = (x517*((x518*x519)==x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x521 = 1;
	static uint16_t x523 = 100U;
	uint32_t x524 = 479172U;
	static volatile int32_t t96 = -19714;

	t96 = (x521*((x522*x523)==x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x525 = INT32_MIN;
	uint32_t x527 = UINT32_MAX;
	int32_t t97 = -1;

	t97 = (x525*((x526*x527)==x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x545 = UINT32_MAX;
	int32_t x546 = -100;
	int32_t x547 = -1;
	volatile int8_t x548 = -1;
	uint32_t t98 = 124U;

	t98 = (x545*((x546*x547)==x548));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x553 = 52U;
	volatile uint64_t x554 = 727LLU;
	static uint64_t x556 = 10657820937079308LLU;
	int32_t t99 = 88593363;

	t99 = (x553*((x554*x555)==x556));

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

