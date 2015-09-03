#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 2U;
uint64_t x11 = UINT64_MAX;
uint8_t x13 = UINT8_MAX;
int8_t x19 = INT8_MIN;
int32_t t5 = 822578;
volatile int32_t t7 = 30;
int64_t x34 = INT64_MAX;
static uint8_t x36 = 0U;
static uint8_t x38 = UINT8_MAX;
static volatile int32_t t10 = -35;
int16_t x46 = INT16_MIN;
int32_t x47 = -3631;
uint16_t x51 = 26584U;
int8_t x53 = -1;
int64_t x61 = 277710094LL;
uint16_t x62 = 2068U;
static uint64_t x68 = 4630122309468690LLU;
volatile int16_t x74 = 1;
uint16_t x91 = 26U;
uint16_t x93 = 1882U;
static volatile int16_t x96 = -1;
int16_t x103 = INT16_MAX;
uint32_t x104 = 359474U;
static int8_t x128 = INT8_MIN;
volatile int32_t t26 = 4324;
int8_t x129 = INT8_MAX;
int16_t x133 = 4202;
static uint32_t x134 = 6540507U;
int16_t x135 = INT16_MAX;
static int32_t t28 = 4973539;
static volatile int32_t t30 = 18;
uint8_t x146 = 7U;
static int8_t x147 = INT8_MIN;
int32_t x148 = 175;
int16_t x151 = INT16_MIN;
volatile int32_t t32 = -2;
uint64_t x155 = 0LLU;
volatile int32_t t33 = 117635;
static uint8_t x157 = 24U;
static int8_t x159 = -1;
static uint64_t x166 = 9806162LLU;
int32_t t36 = 6;
uint8_t x171 = 39U;
int64_t x173 = -867LL;
int32_t x175 = 157;
static volatile int8_t x193 = -4;
static volatile int64_t x196 = INT64_MIN;
int16_t x198 = 2;
volatile int8_t x208 = -1;
static volatile int8_t x213 = -1;
static int8_t x217 = -15;
uint32_t x218 = 92164U;
static volatile int32_t t45 = -3;
uint32_t x223 = 2375912U;
volatile uint32_t x240 = UINT32_MAX;
uint32_t x255 = 190419561U;
int8_t x257 = -1;
uint64_t x258 = 17LLU;
int32_t x261 = 3;
static volatile int16_t x262 = 1488;
int8_t x267 = INT8_MAX;
uint64_t x268 = 54723LLU;
uint32_t x271 = 1150695U;
volatile int32_t x272 = INT32_MIN;
int32_t t55 = 129035898;
int32_t t58 = 12631;
int16_t x302 = INT16_MIN;
int32_t x312 = INT32_MAX;
volatile int16_t x317 = 19;
volatile int32_t t62 = -4153592;
int8_t x325 = INT8_MIN;
uint16_t x326 = 644U;
int8_t x334 = INT8_MIN;
int64_t x336 = -50566LL;
uint64_t x340 = UINT64_MAX;
volatile int32_t t65 = 5;
int16_t x343 = INT16_MIN;
int16_t x356 = INT16_MAX;
volatile int32_t t67 = 7;
int8_t x368 = INT8_MIN;
static uint16_t x372 = 76U;
volatile int8_t x377 = INT8_MIN;
uint64_t x378 = UINT64_MAX;
int64_t x380 = -1LL;
int8_t x396 = -1;
int32_t x397 = INT32_MAX;
uint32_t x398 = 9U;
static uint8_t x399 = 1U;
static int64_t x400 = -1088116LL;
uint16_t x405 = UINT16_MAX;
uint16_t x407 = UINT16_MAX;
int32_t t75 = 1059755340;
uint64_t x410 = UINT64_MAX;
static volatile uint32_t x412 = 7239U;
int32_t t78 = 22626672;
int32_t t79 = 571582;
volatile int32_t t82 = -52744452;
uint64_t x442 = UINT64_MAX;
static volatile uint32_t x450 = UINT32_MAX;
static int8_t x457 = -1;
uint64_t x463 = UINT64_MAX;
int64_t x505 = INT64_MIN;
int8_t x506 = INT8_MAX;
volatile int16_t x520 = INT16_MIN;
int8_t x521 = INT8_MIN;
volatile int32_t x538 = INT32_MIN;
volatile int8_t x542 = INT8_MIN;
uint64_t x543 = UINT64_MAX;
uint64_t x545 = UINT64_MAX;
int32_t t98 = 192;
uint16_t x553 = 97U;


void f0(void) {
	volatile int32_t x1 = 496;
	int16_t x3 = 1;
	static volatile uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = 44834981;

	t0 = (x1<=((x2*x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint16_t x6 = UINT16_MAX;
	volatile uint16_t x7 = 7374U;
	int16_t x8 = -1;
	volatile int32_t t1 = 479;

	t1 = (x5<=((x6*x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = -1;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 136700175;

	t2 = (x9<=((x10*x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 3;
	volatile uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -4843139;

	t3 = (x13<=((x14*x15)+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint32_t x18 = 0U;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 29;

	t4 = (x17<=((x18*x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile uint64_t x22 = 95264539920LLU;
	int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;

	t5 = (x21<=((x22*x23)+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 1799416U;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 16631576431LLU;
	int32_t t6 = -78660;

	t6 = (x25<=((x26*x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 12581497918327584LL;
	static int16_t x30 = 0;
	int64_t x31 = 23735LL;
	uint8_t x32 = 15U;

	t7 = (x29<=((x30*x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 48955480602987989LL;
	volatile uint64_t x35 = 401738747240579LLU;
	int32_t t8 = -1766;

	t8 = (x33<=((x34*x35)+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 15026565015041LLU;
	static int64_t x39 = 1LL;
	static uint8_t x40 = 0U;
	static volatile int32_t t9 = -1;

	t9 = (x37<=((x38*x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -8;
	int8_t x42 = -1;
	static volatile uint64_t x43 = UINT64_MAX;
	static int8_t x44 = INT8_MIN;

	t10 = (x41<=((x42*x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 686427;

	t11 = (x45<=((x46*x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 79;
	int32_t x50 = -43;
	uint32_t x52 = 1005850165U;
	int32_t t12 = -332260308;

	t12 = (x49<=((x50*x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 0U;
	volatile int64_t x55 = 13LL;
	int8_t x56 = 1;
	static volatile int32_t t13 = 8564194;

	t13 = (x53<=((x54*x55)+x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	volatile uint8_t x58 = 6U;
	int64_t x59 = -5786377LL;
	static int8_t x60 = INT8_MIN;
	int32_t t14 = 2;

	t14 = (x57<=((x58*x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x63 = -74971993LL;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -255;

	t15 = (x61<=((x62*x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static uint8_t x66 = 8U;
	int8_t x67 = -25;
	volatile int32_t t16 = -5;

	t16 = (x65<=((x66*x67)+x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 1707U;
	volatile int32_t t17 = -719966371;

	t17 = (x73<=((x74*x75)+x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int16_t x78 = -1;
	int64_t x79 = -1927942405061318LL;
	int32_t x80 = -151111;
	static int32_t t18 = 8657688;

	t18 = (x77<=((x78*x79)+x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -3342;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = 14323113179LLU;
	static volatile int32_t t19 = 0;

	t19 = (x81<=((x82*x83)+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = 44;
	int16_t x86 = INT16_MIN;
	static uint64_t x87 = 19537606700882514LLU;
	int8_t x88 = -11;
	int32_t t20 = -1902869;

	t20 = (x85<=((x86*x87)+x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x90 = 3213U;
	int32_t x92 = INT32_MIN;
	int32_t t21 = 51527573;

	t21 = (x89<=((x90*x91)+x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = 723941;
	uint32_t x95 = 7117267U;
	volatile int32_t t22 = 992582;

	t22 = (x93<=((x94*x95)+x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	int32_t t23 = 4120;

	t23 = (x101<=((x102*x103)+x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = 22;
	static int8_t x106 = 1;
	uint32_t x107 = 1372390U;
	static int16_t x108 = INT16_MIN;
	int32_t t24 = 9293;

	t24 = (x105<=((x106*x107)+x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = -6;
	static int16_t x122 = -1;
	volatile int8_t x123 = INT8_MIN;
	int8_t x124 = -8;
	int32_t t25 = -1;

	t25 = (x121<=((x122*x123)+x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = -1;
	static volatile int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;

	t26 = (x125<=((x126*x127)+x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x130 = 156LLU;
	int16_t x131 = -533;
	volatile int32_t x132 = INT32_MIN;
	int32_t t27 = 33;

	t27 = (x129<=((x130*x131)+x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x136 = INT8_MIN;

	t28 = (x133<=((x134*x135)+x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = 87040895;
	int32_t x138 = 5934;
	uint16_t x139 = 7U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t29 = 61492;

	t29 = (x137<=((x138*x139)+x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = INT16_MIN;
	volatile int8_t x142 = INT8_MIN;
	static int16_t x143 = INT16_MIN;
	int8_t x144 = 38;

	t30 = (x141<=((x142*x143)+x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x145 = 120LLU;
	int32_t t31 = -367701;

	t31 = (x145<=((x146*x147)+x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 0U;
	int8_t x150 = INT8_MIN;
	int16_t x152 = INT16_MAX;

	t32 = (x149<=((x150*x151)+x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -1329;
	int32_t x154 = INT32_MIN;
	int32_t x156 = INT32_MAX;

	t33 = (x153<=((x154*x155)+x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = 0;
	int64_t x160 = -1LL;
	int32_t t34 = 1;

	t34 = (x157<=((x158*x159)+x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 3U;
	int8_t x162 = INT8_MIN;
	static uint8_t x163 = 28U;
	int32_t x164 = -836696210;
	static int32_t t35 = 51;

	t35 = (x161<=((x162*x163)+x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x165 = -298551;
	int16_t x167 = INT16_MIN;
	int8_t x168 = 1;

	t36 = (x165<=((x166*x167)+x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	volatile uint32_t x170 = 191564U;
	uint32_t x172 = 0U;
	static volatile int32_t t37 = 631;

	t37 = (x169<=((x170*x171)+x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x174 = 2U;
	int64_t x176 = -395948LL;
	volatile int32_t t38 = 505818;

	t38 = (x173<=((x174*x175)+x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = UINT64_MAX;
	uint64_t x186 = 4557LLU;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = -48;
	static volatile int32_t t39 = 10;

	t39 = (x185<=((x186*x187)+x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MIN;
	volatile uint8_t x190 = 47U;
	static int64_t x191 = 0LL;
	volatile int64_t x192 = -128580423374757LL;
	volatile int32_t t40 = 964;

	t40 = (x189<=((x190*x191)+x192));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x194 = INT8_MIN;
	int32_t x195 = -19334;
	static int32_t t41 = -9931;

	t41 = (x193<=((x194*x195)+x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MAX;
	volatile int16_t x199 = INT16_MAX;
	int64_t x200 = -1LL;
	volatile int32_t t42 = -153;

	t42 = (x197<=((x198*x199)+x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MIN;
	static int8_t x206 = -1;
	volatile uint8_t x207 = 38U;
	int32_t t43 = 4287;

	t43 = (x205<=((x206*x207)+x208));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x214 = 52U;
	volatile uint16_t x215 = 0U;
	uint8_t x216 = UINT8_MAX;
	int32_t t44 = -1;

	t44 = (x213<=((x214*x215)+x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;

	t45 = (x217<=((x218*x219)+x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = 58U;
	int64_t x222 = -1LL;
	volatile uint16_t x224 = 25589U;
	static int32_t t46 = -54755;

	t46 = (x221<=((x222*x223)+x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = INT32_MAX;
	int8_t x226 = -1;
	int32_t x227 = 9;
	static int64_t x228 = 95953147130209LL;
	volatile int32_t t47 = -180931;

	t47 = (x225<=((x226*x227)+x228));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x237 = INT16_MAX;
	uint16_t x238 = 13225U;
	int8_t x239 = INT8_MIN;
	int32_t t48 = -346;

	t48 = (x237<=((x238*x239)+x240));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 3;
	int32_t x246 = -1;
	static volatile int64_t x247 = INT64_MAX;
	uint8_t x248 = 2U;
	int32_t t49 = -1221;

	t49 = (x245<=((x246*x247)+x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = 6;
	int32_t x250 = -1;
	static int32_t x251 = -1;
	int16_t x252 = -71;
	static int32_t t50 = 13359;

	t50 = (x249<=((x250*x251)+x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x253 = 3U;
	volatile int32_t x254 = INT32_MAX;
	uint32_t x256 = 251U;
	volatile int32_t t51 = -45;

	t51 = (x253<=((x254*x255)+x256));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = 2;
	volatile int32_t t52 = -478638;

	t52 = (x257<=((x258*x259)+x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x263 = 30175196LLU;
	uint32_t x264 = 18570U;
	volatile int32_t t53 = -17195;

	t53 = (x261<=((x262*x263)+x264));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x265 = -1LL;
	uint64_t x266 = UINT64_MAX;
	volatile int32_t t54 = 434;

	t54 = (x265<=((x266*x267)+x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x269 = 113U;
	int64_t x270 = -1LL;

	t55 = (x269<=((x270*x271)+x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x273 = 2U;
	uint8_t x274 = 1U;
	volatile int8_t x275 = INT8_MAX;
	uint32_t x276 = 194498U;
	volatile int32_t t56 = -2;

	t56 = (x273<=((x274*x275)+x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x290 = -631704211LL;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 3U;
	volatile int32_t t57 = 748798119;

	t57 = (x289<=((x290*x291)+x292));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x293 = 2U;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = -1;
	static int64_t x296 = -1LL;

	t58 = (x293<=((x294*x295)+x296));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x301 = 713173491321LLU;
	uint64_t x303 = 566LLU;
	int8_t x304 = 1;
	static volatile int32_t t59 = -3;

	t59 = (x301<=((x302*x303)+x304));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 13602297U;
	int16_t x308 = INT16_MAX;
	volatile int32_t t60 = -892;

	t60 = (x305<=((x306*x307)+x308));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x309 = 36380392085835830LL;
	static volatile uint64_t x310 = 46375524510021740LLU;
	static uint16_t x311 = 174U;
	int32_t t61 = -522905;

	t61 = (x309<=((x310*x311)+x312));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x318 = 523894LLU;
	int16_t x319 = INT16_MIN;
	int8_t x320 = -1;

	t62 = (x317<=((x318*x319)+x320));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x327 = 23590U;
	volatile uint8_t x328 = 12U;
	volatile int32_t t63 = -2;

	t63 = (x325<=((x326*x327)+x328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x333 = 5U;
	uint16_t x335 = 4U;
	static int32_t t64 = -2;

	t64 = (x333<=((x334*x335)+x336));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x337 = 456316;
	int64_t x338 = -1LL;
	static int64_t x339 = -3970123935401LL;

	t65 = (x337<=((x338*x339)+x340));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x341 = -1;
	int16_t x342 = -1;
	int32_t x344 = INT32_MIN;
	volatile int32_t t66 = -207878;

	t66 = (x341<=((x342*x343)+x344));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x353 = 0U;
	uint64_t x354 = UINT64_MAX;
	uint32_t x355 = 100927U;

	t67 = (x353<=((x354*x355)+x356));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = 384070119188783LL;
	uint8_t x358 = 99U;
	static int8_t x359 = INT8_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t68 = -128826908;

	t68 = (x357<=((x358*x359)+x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = -1;
	uint32_t x366 = 78U;
	static int16_t x367 = 32;
	int32_t t69 = -225452;

	t69 = (x365<=((x366*x367)+x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x369 = -3;
	int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = 5008241214020039LLU;
	int32_t t70 = -2;

	t70 = (x369<=((x370*x371)+x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x379 = 6118522U;
	static volatile int32_t t71 = 746;

	t71 = (x377<=((x378*x379)+x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x381 = 3;
	uint64_t x382 = 1516748LLU;
	static int8_t x383 = -1;
	uint32_t x384 = 11U;
	int32_t t72 = -1;

	t72 = (x381<=((x382*x383)+x384));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile uint64_t x395 = UINT64_MAX;
	static volatile int32_t t73 = 43470;

	t73 = (x393<=((x394*x395)+x396));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t t74 = 766285;

	t74 = (x397<=((x398*x399)+x400));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x406 = 12U;
	static uint16_t x408 = 140U;

	t75 = (x405<=((x406*x407)+x408));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x409 = 134656246359023LLU;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t t76 = -14;

	t76 = (x409<=((x410*x411)+x412));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x413 = 6225U;
	uint64_t x414 = 9LLU;
	volatile uint64_t x415 = 3061661577091408LLU;
	uint64_t x416 = UINT64_MAX;
	static int32_t t77 = 0;

	t77 = (x413<=((x414*x415)+x416));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MIN;
	static uint16_t x419 = 0U;
	int8_t x420 = INT8_MAX;

	t78 = (x417<=((x418*x419)+x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x421 = UINT8_MAX;
	static int8_t x422 = -3;
	int8_t x423 = 0;
	volatile uint8_t x424 = UINT8_MAX;

	t79 = (x421<=((x422*x423)+x424));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = -1;
	int16_t x430 = -764;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t80 = -191;

	t80 = (x429<=((x430*x431)+x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x433 = INT16_MIN;
	volatile uint16_t x434 = 81U;
	int32_t x435 = -1;
	int16_t x436 = -2647;
	int32_t t81 = -1736;

	t81 = (x433<=((x434*x435)+x436));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x437 = INT64_MIN;
	static int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MIN;
	int32_t x440 = -1;

	t82 = (x437<=((x438*x439)+x440));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x441 = INT64_MIN;
	uint8_t x443 = 1U;
	volatile uint16_t x444 = UINT16_MAX;
	volatile int32_t t83 = -3407923;

	t83 = (x441<=((x442*x443)+x444));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = -144504093813LL;
	uint32_t x446 = 831U;
	int8_t x447 = INT8_MAX;
	int16_t x448 = -11102;
	int32_t t84 = 1024030926;

	t84 = (x445<=((x446*x447)+x448));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x449 = INT16_MIN;
	volatile int32_t x451 = -1;
	int16_t x452 = INT16_MIN;
	volatile int32_t t85 = 444;

	t85 = (x449<=((x450*x451)+x452));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x458 = INT16_MIN;
	volatile int32_t x459 = -1;
	int64_t x460 = -3126628773712144851LL;
	int32_t t86 = -2;

	t86 = (x457<=((x458*x459)+x460));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x461 = 202283902LLU;
	volatile int32_t x462 = -1;
	uint16_t x464 = 130U;
	static volatile int32_t t87 = -10;

	t87 = (x461<=((x462*x463)+x464));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x473 = 2063;
	int8_t x474 = -3;
	static int32_t x475 = -1;
	int8_t x476 = 36;
	int32_t t88 = 228501739;

	t88 = (x473<=((x474*x475)+x476));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x477 = -1;
	volatile uint8_t x478 = 1U;
	int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	static volatile int32_t t89 = 898163;

	t89 = (x477<=((x478*x479)+x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = -1;
	int64_t x502 = 58201837963LL;
	int8_t x503 = INT8_MAX;
	int64_t x504 = -109LL;
	int32_t t90 = 1;

	t90 = (x501<=((x502*x503)+x504));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x507 = 124U;
	static volatile uint64_t x508 = 881LLU;
	volatile int32_t t91 = 0;

	t91 = (x505<=((x506*x507)+x508));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x509 = 18U;
	int16_t x510 = INT16_MIN;
	uint64_t x511 = 1154660702017858613LLU;
	uint16_t x512 = 7U;
	volatile int32_t t92 = -1;

	t92 = (x509<=((x510*x511)+x512));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x513 = -1;
	static uint16_t x514 = 85U;
	uint32_t x515 = 4134534U;
	static uint8_t x516 = 10U;
	volatile int32_t t93 = -1270415;

	t93 = (x513<=((x514*x515)+x516));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x517 = 77464904299541LL;
	volatile uint32_t x518 = 523836U;
	int64_t x519 = -83078LL;
	volatile int32_t t94 = -263868875;

	t94 = (x517<=((x518*x519)+x520));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x522 = INT16_MIN;
	static uint16_t x523 = 1749U;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t95 = -183179174;

	t95 = (x521<=((x522*x523)+x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x537 = 57U;
	uint64_t x539 = 28524LLU;
	volatile int8_t x540 = 1;
	volatile int32_t t96 = -5430918;

	t96 = (x537<=((x538*x539)+x540));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x541 = -1LL;
	int64_t x544 = INT64_MIN;
	volatile int32_t t97 = 0;

	t97 = (x541<=((x542*x543)+x544));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x546 = 865094302U;
	volatile int8_t x547 = -1;
	int8_t x548 = INT8_MIN;

	t98 = (x545<=((x546*x547)+x548));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x554 = INT16_MAX;
	int32_t x555 = -61;
	static int8_t x556 = INT8_MAX;
	int32_t t99 = 14;

	t99 = (x553<=((x554*x555)+x556));

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

