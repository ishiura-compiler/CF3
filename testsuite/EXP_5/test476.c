#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = -1079;
static volatile int32_t t0 = -257705;
int32_t x9 = INT32_MAX;
int64_t x10 = 116913LL;
int32_t t1 = -111695323;
int16_t x24 = -122;
uint32_t x25 = 38U;
int16_t x28 = 15;
volatile int32_t t6 = -2837;
int8_t x46 = -1;
uint64_t x57 = 1367031055687865LLU;
int8_t x68 = INT8_MAX;
uint16_t x79 = 12560U;
volatile int32_t x81 = INT32_MAX;
volatile int16_t x83 = INT16_MIN;
volatile int8_t x101 = INT8_MIN;
static uint32_t x103 = 3652U;
int32_t x109 = 1;
static int16_t x111 = 625;
int32_t t24 = -3;
int64_t x143 = INT64_MAX;
static int8_t x147 = INT8_MAX;
static int16_t x152 = INT16_MIN;
int64_t x160 = INT64_MIN;
uint32_t x176 = 2250U;
int32_t t31 = 11;
uint32_t x187 = 1797U;
uint32_t x191 = UINT32_MAX;
static int32_t t40 = -8472648;
volatile uint16_t x226 = UINT16_MAX;
volatile int32_t t41 = 0;
volatile int32_t t42 = -638156;
int64_t x241 = INT64_MIN;
int8_t x242 = INT8_MIN;
static int64_t x243 = -43383711LL;
volatile int32_t t47 = 914;
uint32_t x261 = UINT32_MAX;
int32_t x264 = INT32_MIN;
int16_t x270 = -1;
int8_t x272 = INT8_MIN;
int32_t t50 = 9070;
int64_t x274 = -1LL;
int64_t x277 = INT64_MIN;
volatile int32_t x288 = -1;
int64_t x294 = -1LL;
int16_t x295 = -28;
int8_t x296 = INT8_MAX;
volatile int32_t t55 = -5;
volatile int32_t t57 = 472843655;
int32_t x319 = -434551;
uint32_t x327 = 4475U;
int32_t x332 = INT32_MIN;
int64_t x333 = -4474175179850111LL;
uint8_t x338 = UINT8_MAX;
volatile uint8_t x350 = 23U;
int64_t x351 = -1LL;
int8_t x360 = -1;
int32_t t67 = -2;
int8_t x373 = INT8_MIN;
int32_t t70 = -97216;
int32_t x394 = -1;
uint32_t x401 = 13439U;
volatile uint64_t x420 = 469241738937594LLU;
static int16_t x437 = -425;
int16_t x438 = -96;
int32_t t80 = -54691;
static uint16_t x443 = 6872U;
static int8_t x445 = INT8_MAX;
static volatile int32_t x451 = INT32_MIN;
int64_t x452 = -3462391LL;
static int8_t x454 = 19;
int32_t t84 = -23192;
uint64_t x466 = 6550125947LLU;
static uint64_t x483 = 166LLU;
int32_t t88 = 86833320;
int16_t x489 = 14;
uint64_t x510 = UINT64_MAX;
volatile int32_t t92 = -190616;
int64_t x520 = INT64_MIN;
uint64_t x522 = UINT64_MAX;
int32_t t95 = -1;
uint32_t x528 = UINT32_MAX;
int32_t x529 = 143237857;
volatile int32_t x530 = INT32_MAX;
int8_t x538 = INT8_MIN;
uint16_t x539 = 0U;
volatile int32_t x543 = 2298;


void f0(void) {
	volatile uint32_t x6 = UINT32_MAX;
	uint64_t x7 = 1037500354LLU;
	uint64_t x8 = 2722362520443147464LLU;

	t0 = (x5==((x6*x7)&x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x11 = -1LL;
	int64_t x12 = INT64_MAX;

	t1 = (x9==((x10*x11)&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static uint32_t x14 = UINT32_MAX;
	uint8_t x15 = 0U;
	static uint16_t x16 = 1U;
	volatile int32_t t2 = -2;

	t2 = (x13==((x14*x15)&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MAX;
	volatile int16_t x20 = INT16_MIN;
	int32_t t3 = -1;

	t3 = (x17==((x18*x19)&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = -1;
	int8_t x22 = -1;
	int8_t x23 = -51;
	volatile int32_t t4 = 652;

	t4 = (x21==((x22*x23)&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int32_t t5 = 0;

	t5 = (x25==((x26*x27)&x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1193;
	int8_t x30 = INT8_MIN;
	volatile uint16_t x31 = 16367U;
	uint64_t x32 = 232449125481131LLU;

	t6 = (x29==((x30*x31)&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	static uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 123U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t7 = -1006;

	t7 = (x37==((x38*x39)&x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = -1;
	int64_t x42 = 7761854774938366LL;
	uint32_t x43 = 215U;
	static uint32_t x44 = 10U;
	volatile int32_t t8 = 61;

	t8 = (x41==((x42*x43)&x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -1;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 29843417;
	int32_t t9 = -3353;

	t9 = (x45==((x46*x47)&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	volatile uint32_t x60 = 39U;
	volatile int32_t t10 = 503;

	t10 = (x57==((x58*x59)&x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x65 = INT64_MAX;
	uint64_t x66 = UINT64_MAX;
	uint64_t x67 = UINT64_MAX;
	static int32_t t11 = 6360723;

	t11 = (x65==((x66*x67)&x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	static uint16_t x71 = 32761U;
	static volatile int64_t x72 = INT64_MIN;
	int32_t t12 = -3295066;

	t12 = (x69==((x70*x71)&x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = -1;
	static int32_t x80 = -491;
	static volatile int32_t t13 = 6791;

	t13 = (x77==((x78*x79)&x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x82 = -1;
	uint64_t x84 = 1215428220714871846LLU;
	int32_t t14 = 150852;

	t14 = (x81==((x82*x83)&x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = 7979;
	int32_t x86 = INT32_MAX;
	static int32_t x87 = -1;
	uint64_t x88 = UINT64_MAX;
	int32_t t15 = -39492995;

	t15 = (x85==((x86*x87)&x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x93 = INT32_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	int8_t x96 = 44;
	volatile int32_t t16 = 2;

	t16 = (x93==((x94*x95)&x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = 1942752;
	int32_t x98 = -1;
	static int16_t x99 = -93;
	uint16_t x100 = 19U;
	static volatile int32_t t17 = 153945;

	t17 = (x97==((x98*x99)&x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x102 = INT8_MIN;
	static uint8_t x104 = 1U;
	volatile int32_t t18 = -120;

	t18 = (x101==((x102*x103)&x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x105 = 1;
	int8_t x106 = -1;
	static int64_t x107 = 1011945954LL;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t19 = 14116283;

	t19 = (x105==((x106*x107)&x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x110 = 130U;
	uint16_t x112 = UINT16_MAX;
	static int32_t t20 = 3519;

	t20 = (x109==((x110*x111)&x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = INT64_MIN;
	static uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MAX;
	static int32_t x116 = -94594;
	static int32_t t21 = -269452041;

	t21 = (x113==((x114*x115)&x116));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = -1LL;
	volatile uint32_t x126 = 1820867045U;
	uint8_t x127 = 1U;
	int64_t x128 = -20649749226831534LL;
	int32_t t22 = -1;

	t22 = (x125==((x126*x127)&x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x133 = 15;
	int64_t x134 = 674216983606LL;
	static volatile uint32_t x135 = 6U;
	volatile int8_t x136 = -7;
	volatile int32_t t23 = 2;

	t23 = (x133==((x134*x135)&x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MIN;
	static volatile int8_t x138 = INT8_MIN;
	int8_t x139 = -6;
	int16_t x140 = 1;

	t24 = (x137==((x138*x139)&x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = INT64_MIN;
	uint8_t x142 = 0U;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t25 = 1696;

	t25 = (x141==((x142*x143)&x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = INT64_MAX;
	uint16_t x146 = UINT16_MAX;
	volatile uint8_t x148 = UINT8_MAX;
	static int32_t t26 = 2;

	t26 = (x145==((x146*x147)&x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x149 = 24;
	uint64_t x150 = 316092864465LLU;
	int64_t x151 = -1569149920LL;
	int32_t t27 = 31030;

	t27 = (x149==((x150*x151)&x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = -1219;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = -1;
	int32_t t28 = 4043010;

	t28 = (x157==((x158*x159)&x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x165 = INT64_MAX;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -2205051;
	uint8_t x168 = UINT8_MAX;
	int32_t t29 = 82;

	t29 = (x165==((x166*x167)&x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x169 = INT32_MAX;
	int16_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int16_t x172 = -1;
	static volatile int32_t t30 = 3656603;

	t30 = (x169==((x170*x171)&x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x173 = 91U;
	volatile int64_t x174 = -1LL;
	volatile int16_t x175 = -5994;

	t31 = (x173==((x174*x175)&x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = -11;
	static uint32_t x179 = 75314606U;
	static volatile uint64_t x180 = 189228421099377LLU;
	static int32_t t32 = -45419;

	t32 = (x177==((x178*x179)&x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x185 = 413677029U;
	int64_t x186 = -1LL;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t33 = 3216857;

	t33 = (x185==((x186*x187)&x188));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x189 = -1;
	static uint64_t x190 = 30020987145LLU;
	static int64_t x192 = INT64_MIN;
	int32_t t34 = 574624534;

	t34 = (x189==((x190*x191)&x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 1904172LLU;
	volatile uint8_t x198 = UINT8_MAX;
	int32_t x199 = 161815;
	volatile uint8_t x200 = 2U;
	volatile int32_t t35 = 0;

	t35 = (x197==((x198*x199)&x200));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = INT64_MIN;
	static int32_t x206 = 6;
	uint8_t x207 = 1U;
	int32_t x208 = INT32_MAX;
	volatile int32_t t36 = 9;

	t36 = (x205==((x206*x207)&x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = -2;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;
	static int32_t t37 = -1;

	t37 = (x209==((x210*x211)&x212));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = INT8_MAX;
	static int16_t x214 = INT16_MIN;
	static int64_t x215 = 1LL;
	volatile int64_t x216 = INT64_MIN;
	volatile int32_t t38 = 3;

	t38 = (x213==((x214*x215)&x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = -368228LL;
	int16_t x218 = 44;
	volatile uint64_t x219 = 10LLU;
	int16_t x220 = -1;
	volatile int32_t t39 = 14;

	t39 = (x217==((x218*x219)&x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = 15;
	int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	int16_t x224 = INT16_MIN;

	t40 = (x221==((x222*x223)&x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	int8_t x227 = INT8_MAX;
	uint32_t x228 = 25410U;

	t41 = (x225==((x226*x227)&x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x230 = INT16_MIN;
	static int16_t x231 = INT16_MIN;
	volatile int16_t x232 = -1;

	t42 = (x229==((x230*x231)&x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t43 = -467385314;

	t43 = (x233==((x234*x235)&x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x244 = -1;
	int32_t t44 = 2;

	t44 = (x241==((x242*x243)&x244));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x245 = 15U;
	int32_t x246 = -1;
	static uint8_t x247 = 2U;
	int8_t x248 = INT8_MIN;
	int32_t t45 = 10;

	t45 = (x245==((x246*x247)&x248));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x253 = 1638U;
	int64_t x254 = 5977273504257634LL;
	static uint64_t x255 = 1628562439LLU;
	static volatile uint32_t x256 = 1416529820U;
	volatile int32_t t46 = -1;

	t46 = (x253==((x254*x255)&x256));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = -106089;
	int8_t x259 = INT8_MAX;
	uint8_t x260 = UINT8_MAX;

	t47 = (x257==((x258*x259)&x260));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x262 = UINT8_MAX;
	static volatile int8_t x263 = INT8_MIN;
	volatile int32_t t48 = -872348;

	t48 = (x261==((x262*x263)&x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = -29075023371866LL;
	int32_t x267 = -386;
	volatile uint32_t x268 = UINT32_MAX;
	static int32_t t49 = -53743;

	t49 = (x265==((x266*x267)&x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = INT64_MIN;
	volatile int8_t x271 = -1;

	t50 = (x269==((x270*x271)&x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x273 = INT16_MAX;
	static int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MAX;
	int32_t t51 = -60419617;

	t51 = (x273==((x274*x275)&x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x278 = -1;
	int64_t x279 = 46327829744397543LL;
	int16_t x280 = 49;
	static int32_t t52 = -24868641;

	t52 = (x277==((x278*x279)&x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x281 = UINT8_MAX;
	static uint64_t x282 = 7791305815LLU;
	uint64_t x283 = 63500042822869626LLU;
	uint16_t x284 = 0U;
	static int32_t t53 = -400259203;

	t53 = (x281==((x282*x283)&x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x285 = INT32_MIN;
	static volatile int16_t x286 = INT16_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t t54 = -157697197;

	t54 = (x285==((x286*x287)&x288));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = INT64_MIN;

	t55 = (x293==((x294*x295)&x296));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	uint16_t x303 = 65U;
	int64_t x304 = INT64_MAX;
	volatile int32_t t56 = -428442;

	t56 = (x301==((x302*x303)&x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x305 = 18768;
	uint16_t x306 = UINT16_MAX;
	static int8_t x307 = INT8_MIN;
	int16_t x308 = -1;

	t57 = (x305==((x306*x307)&x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x317 = -2988LL;
	int16_t x318 = 3;
	static uint32_t x320 = 2435U;
	static int32_t t58 = 0;

	t58 = (x317==((x318*x319)&x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = -1;
	int16_t x322 = INT16_MIN;
	uint32_t x323 = 2029017736U;
	volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t59 = 58871175;

	t59 = (x321==((x322*x323)&x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x325 = INT64_MAX;
	uint16_t x326 = 102U;
	uint16_t x328 = UINT16_MAX;
	int32_t t60 = -253;

	t60 = (x325==((x326*x327)&x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int16_t x330 = -1;
	static int32_t x331 = 75;
	int32_t t61 = 632167;

	t61 = (x329==((x330*x331)&x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x334 = UINT16_MAX;
	static int16_t x335 = INT16_MIN;
	int64_t x336 = 2LL;
	int32_t t62 = -7222722;

	t62 = (x333==((x334*x335)&x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x337 = -152327600779779LL;
	int16_t x339 = INT16_MIN;
	static int8_t x340 = -1;
	volatile int32_t t63 = -5609609;

	t63 = (x337==((x338*x339)&x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	static volatile int16_t x343 = -1;
	uint16_t x344 = 2U;
	volatile int32_t t64 = 167563806;

	t64 = (x341==((x342*x343)&x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x349 = INT64_MIN;
	volatile int64_t x352 = INT64_MIN;
	int32_t t65 = -605690;

	t65 = (x349==((x350*x351)&x352));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x357 = UINT64_MAX;
	volatile uint16_t x358 = 1U;
	uint16_t x359 = 184U;
	static volatile int32_t t66 = 13334;

	t66 = (x357==((x358*x359)&x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x361 = -1;
	static int64_t x362 = -1LL;
	static uint8_t x363 = 13U;
	int16_t x364 = INT16_MIN;

	t67 = (x361==((x362*x363)&x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 0U;
	int64_t x372 = -442LL;
	int32_t t68 = 780946059;

	t68 = (x369==((x370*x371)&x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	static uint8_t x376 = 121U;
	volatile int32_t t69 = 23437;

	t69 = (x373==((x374*x375)&x376));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x381 = -3;
	volatile int16_t x382 = INT16_MIN;
	int8_t x383 = 1;
	int16_t x384 = INT16_MIN;

	t70 = (x381==((x382*x383)&x384));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	volatile int64_t x391 = -293LL;
	volatile uint32_t x392 = 410U;
	int32_t t71 = 6506259;

	t71 = (x389==((x390*x391)&x392));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x393 = -1LL;
	uint32_t x395 = UINT32_MAX;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t72 = 9;

	t72 = (x393==((x394*x395)&x396));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x402 = INT16_MIN;
	static uint32_t x403 = 1548U;
	static int64_t x404 = INT64_MAX;
	int32_t t73 = -2;

	t73 = (x401==((x402*x403)&x404));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x405 = -570LL;
	int32_t x406 = -1;
	static uint8_t x407 = 60U;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t74 = -12484077;

	t74 = (x405==((x406*x407)&x408));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x409 = 635895583120040LL;
	volatile uint32_t x410 = 1U;
	static int64_t x411 = 96422225674294038LL;
	volatile uint16_t x412 = 63U;
	volatile int32_t t75 = 1182;

	t75 = (x409==((x410*x411)&x412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	volatile uint32_t x416 = 29284U;
	volatile int32_t t76 = 320635686;

	t76 = (x413==((x414*x415)&x416));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = -1255869;
	volatile int32_t t77 = -86;

	t77 = (x417==((x418*x419)&x420));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = INT32_MAX;
	int8_t x426 = 0;
	volatile int8_t x427 = INT8_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t78 = 0;

	t78 = (x425==((x426*x427)&x428));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x430 = 136664U;
	static int8_t x431 = INT8_MIN;
	int32_t x432 = 7959;
	volatile int32_t t79 = 84;

	t79 = (x429==((x430*x431)&x432));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x439 = INT8_MAX;
	static int8_t x440 = -2;

	t80 = (x437==((x438*x439)&x440));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x441 = 5;
	int32_t x442 = -1;
	int8_t x444 = -1;
	int32_t t81 = 643747;

	t81 = (x441==((x442*x443)&x444));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x446 = -1;
	uint64_t x447 = UINT64_MAX;
	volatile int64_t x448 = INT64_MIN;
	int32_t t82 = 7460;

	t82 = (x445==((x446*x447)&x448));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x449 = -511306622;
	volatile int8_t x450 = 0;
	volatile int32_t t83 = 849240376;

	t83 = (x449==((x450*x451)&x452));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x453 = INT64_MAX;
	volatile int64_t x455 = -1LL;
	uint16_t x456 = 65U;

	t84 = (x453==((x454*x455)&x456));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x457 = INT8_MIN;
	uint16_t x458 = UINT16_MAX;
	int32_t x459 = 27;
	int16_t x460 = -6;
	volatile int32_t t85 = -102;

	t85 = (x457==((x458*x459)&x460));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x465 = 6U;
	static uint64_t x467 = 8883310736435LLU;
	uint32_t x468 = UINT32_MAX;
	volatile int32_t t86 = 13116048;

	t86 = (x465==((x466*x467)&x468));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x473 = 400643132;
	int32_t x474 = 1657;
	static uint16_t x475 = UINT16_MAX;
	int32_t x476 = -674861;
	int32_t t87 = 190;

	t87 = (x473==((x474*x475)&x476));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x481 = UINT32_MAX;
	static volatile int8_t x482 = 0;
	uint8_t x484 = 12U;

	t88 = (x481==((x482*x483)&x484));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x485 = 40674759;
	volatile uint8_t x486 = 9U;
	uint64_t x487 = 104985794698865LLU;
	uint16_t x488 = UINT16_MAX;
	static volatile int32_t t89 = -1;

	t89 = (x485==((x486*x487)&x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x490 = 39992429U;
	uint64_t x491 = UINT64_MAX;
	static int16_t x492 = -1;
	int32_t t90 = 27957793;

	t90 = (x489==((x490*x491)&x492));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x505 = -1;
	int8_t x506 = -1;
	uint32_t x507 = 14795U;
	static volatile uint64_t x508 = UINT64_MAX;
	volatile int32_t t91 = -27831;

	t91 = (x505==((x506*x507)&x508));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x509 = UINT64_MAX;
	int32_t x511 = 0;
	static uint64_t x512 = 53879LLU;

	t92 = (x509==((x510*x511)&x512));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x513 = -1LL;
	int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MIN;
	static int32_t x516 = INT32_MAX;
	int32_t t93 = 97427;

	t93 = (x513==((x514*x515)&x516));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x517 = -1;
	int32_t x518 = -3224;
	int16_t x519 = -207;
	static int32_t t94 = -199;

	t94 = (x517==((x518*x519)&x520));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x521 = INT64_MIN;
	uint32_t x523 = 5U;
	uint16_t x524 = UINT16_MAX;

	t95 = (x521==((x522*x523)&x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x525 = 1U;
	int64_t x526 = -1LL;
	int64_t x527 = -972454154285286LL;
	static int32_t t96 = 0;

	t96 = (x525==((x526*x527)&x528));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x531 = 647U;
	static int32_t x532 = -1;
	volatile int32_t t97 = 208552131;

	t97 = (x529==((x530*x531)&x532));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x537 = 3749U;
	int32_t x540 = INT32_MAX;
	volatile int32_t t98 = 43;

	t98 = (x537==((x538*x539)&x540));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x541 = -189;
	uint64_t x542 = 11LLU;
	int32_t x544 = 20241795;
	int32_t t99 = 1253932;

	t99 = (x541==((x542*x543)&x544));

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

