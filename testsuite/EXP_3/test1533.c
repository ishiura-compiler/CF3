#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 51LLU;
static int32_t x6 = -1;
static int8_t x8 = -1;
volatile int16_t x10 = -1;
int8_t x26 = INT8_MIN;
int32_t t6 = 95;
int16_t x37 = INT16_MIN;
int16_t x38 = INT16_MIN;
static int8_t x46 = -1;
uint32_t x62 = UINT32_MAX;
uint32_t t14 = 17U;
uint16_t x65 = 3267U;
uint64_t x68 = 167177846672LLU;
int32_t x72 = 22329;
static int64_t x79 = INT64_MIN;
int16_t x81 = -11;
int64_t x89 = -442524940648LL;
int64_t t22 = 3093LL;
volatile int64_t t24 = -131063684LL;
uint32_t x109 = 1468169U;
uint32_t x112 = 883239U;
int32_t x115 = INT32_MAX;
uint64_t x116 = 836117074087256687LLU;
volatile uint32_t x124 = UINT32_MAX;
volatile int32_t x133 = INT32_MIN;
volatile int8_t x134 = INT8_MAX;
static int8_t x137 = INT8_MIN;
int8_t x149 = -36;
int32_t x154 = 1002158;
uint32_t x158 = 35791U;
static int16_t x159 = INT16_MIN;
uint8_t x161 = UINT8_MAX;
int32_t x163 = INT32_MAX;
static int32_t t36 = 280927773;
int64_t x166 = -1LL;
volatile uint8_t x167 = UINT8_MAX;
static volatile uint64_t x181 = UINT64_MAX;
volatile int8_t x182 = INT8_MAX;
uint16_t x185 = 30941U;
int32_t x190 = -1;
volatile int64_t x193 = -7028028LL;
uint64_t x198 = 2119544LLU;
static uint64_t t44 = 335434070LLU;
uint8_t x202 = 8U;
int64_t x203 = -4009075505914775362LL;
int32_t t45 = 3357;
static int16_t x207 = 0;
static int64_t x210 = -1LL;
int8_t x211 = INT8_MAX;
int64_t t47 = -1401578167421858LL;
int64_t t50 = -3LL;
int32_t x227 = INT32_MIN;
volatile uint32_t x234 = 3757231U;
int64_t t52 = -38175LL;
int64_t t53 = 56532122225076LL;
int16_t x241 = 1592;
int32_t x243 = INT32_MAX;
uint64_t x244 = 24701656LLU;
int32_t t54 = -128817264;
volatile int32_t x252 = -1;
uint32_t x257 = UINT32_MAX;
int16_t x258 = -52;
static int32_t t57 = 4968231;
int32_t t58 = -189;
volatile int32_t x275 = INT32_MIN;
volatile int16_t x306 = -1969;
volatile int64_t t68 = 610LL;
volatile int32_t t69 = 1;
volatile int64_t x318 = INT64_MIN;
int64_t x320 = INT64_MIN;
int64_t x322 = INT64_MIN;
static int32_t x328 = INT32_MAX;
int16_t x331 = -1;
uint8_t x336 = 43U;
static uint16_t x338 = UINT16_MAX;
int32_t t75 = -127299900;
int32_t x352 = INT32_MAX;
int16_t x355 = -21;
int8_t x356 = -1;
uint16_t x358 = 141U;
uint32_t x364 = UINT32_MAX;
static int16_t x366 = INT16_MIN;
int16_t x367 = INT16_MAX;
uint8_t x380 = UINT8_MAX;
uint32_t x384 = 124U;
int16_t x385 = 289;
int32_t x386 = -2;
uint8_t x396 = 15U;
volatile int32_t t88 = 40;
static int64_t x409 = -14LL;
volatile uint8_t x410 = 28U;
int64_t x413 = INT64_MAX;
int16_t x421 = INT16_MIN;
uint32_t x431 = 43632876U;
uint32_t x435 = 512277U;
uint64_t x444 = UINT64_MAX;
uint32_t t97 = 520274098U;
int32_t x452 = -1;


void f0(void) {
	int16_t x1 = -106;
	int32_t x2 = -1;
	uint64_t x3 = 3765LLU;
	int32_t t0 = 428320;

	t0 = ((x1+x2)|(x3<=x4));

	if (t0 != -107) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -199LL;
	int64_t x7 = INT64_MAX;
	volatile int64_t t1 = 131779393483955LL;

	t1 = ((x5+x6)|(x7<=x8));

	if (t1 != -200LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static uint32_t x11 = UINT32_MAX;
	int16_t x12 = -94;
	int64_t t2 = 4074421556980056373LL;

	t2 = ((x9+x10)|(x11<=x12));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	static volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	static uint8_t x16 = 116U;
	volatile int32_t t3 = 2577;

	t3 = ((x13+x14)|(x15<=x16));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 135431488LL;
	int32_t x22 = 4570414;
	static uint32_t x23 = 35888U;
	int16_t x24 = INT16_MIN;
	volatile int64_t t4 = -80LL;

	t4 = ((x21+x22)|(x23<=x24));

	if (t4 != 140001903LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	static int8_t x27 = -5;
	uint64_t x28 = 12LLU;
	int32_t t5 = 425;

	t5 = ((x25+x26)|(x27<=x28));

	if (t5 != -32896) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MAX;
	int32_t x30 = -1;
	uint32_t x31 = 391880U;
	uint8_t x32 = 0U;

	t6 = ((x29+x30)|(x31<=x32));

	if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static uint64_t x34 = UINT64_MAX;
	uint64_t x35 = 794000339596LLU;
	uint16_t x36 = UINT16_MAX;
	uint64_t t7 = 126992137011794LLU;

	t7 = ((x33+x34)|(x35<=x36));

	if (t7 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = INT32_MIN;
	uint8_t x40 = 75U;
	volatile int32_t t8 = -15;

	t8 = ((x37+x38)|(x39<=x40));

	if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 666U;
	uint64_t x42 = 1917LLU;
	uint16_t x43 = 29U;
	int16_t x44 = -176;
	volatile uint64_t t9 = 374588166793LLU;

	t9 = ((x41+x42)|(x43<=x44));

	if (t9 != 2583LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = -7;
	int8_t x47 = -1;
	uint16_t x48 = 0U;
	int32_t t10 = -24668358;

	t10 = ((x45+x46)|(x47<=x48));

	if (t10 != -7) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MAX;
	volatile int8_t x51 = 21;
	static volatile int8_t x52 = INT8_MIN;
	volatile int64_t t11 = -742473LL;

	t11 = ((x49+x50)|(x51<=x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x53 = 95273223LLU;
	volatile int16_t x54 = 18;
	int8_t x55 = -9;
	uint32_t x56 = 14585U;
	static uint64_t t12 = 1928636LLU;

	t12 = ((x53+x54)|(x55<=x56));

	if (t12 != 95273241LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 3851818817LLU;
	uint8_t x58 = 2U;
	static int8_t x59 = 19;
	static int64_t x60 = INT64_MIN;
	volatile uint64_t t13 = 65294414042113LLU;

	t13 = ((x57+x58)|(x59<=x60));

	if (t13 != 3851818819LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	volatile uint32_t x63 = 931U;
	uint32_t x64 = 2487013U;

	t14 = ((x61+x62)|(x63<=x64));

	if (t14 != 65535U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x66 = INT8_MAX;
	static int64_t x67 = 88LL;
	int32_t t15 = -166167962;

	t15 = ((x65+x66)|(x67<=x68));

	if (t15 != 3395) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x69 = -15;
	uint8_t x70 = UINT8_MAX;
	volatile uint32_t x71 = UINT32_MAX;
	int32_t t16 = -4;

	t16 = ((x69+x70)|(x71<=x72));

	if (t16 != 240) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = INT8_MAX;
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = INT64_MAX;
	uint32_t x76 = 2276U;
	static volatile int32_t t17 = -522085;

	t17 = ((x73+x74)|(x75<=x76));

	if (t17 != 382) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -1;
	int64_t x78 = INT64_MAX;
	static int32_t x80 = INT32_MIN;
	int64_t t18 = INT64_MAX;

	t18 = ((x77+x78)|(x79<=x80));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = UINT64_MAX;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = 1;
	static volatile uint64_t t19 = 10237443447LLU;

	t19 = ((x81+x82)|(x83<=x84));

	if (t19 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = UINT16_MAX;
	volatile int64_t x86 = -1LL;
	int32_t x87 = 2;
	volatile int32_t x88 = -209;
	volatile int64_t t20 = 144489794585257LL;

	t20 = ((x85+x86)|(x87<=x88));

	if (t20 != 65534LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x90 = INT8_MAX;
	int64_t x91 = INT64_MAX;
	static int16_t x92 = 2;
	int64_t t21 = -210758809LL;

	t21 = ((x89+x90)|(x91<=x92));

	if (t21 != -442524940521LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -1LL;
	uint32_t x96 = 16600U;

	t22 = ((x93+x94)|(x95<=x96));

	if (t22 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 6;
	volatile uint8_t x98 = 11U;
	uint8_t x99 = 24U;
	int32_t x100 = -14204;
	volatile int32_t t23 = 1622478;

	t23 = ((x97+x98)|(x99<=x100));

	if (t23 != 17) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -4;
	int64_t x102 = 663481626421LL;
	int32_t x103 = -1;
	volatile int16_t x104 = -1;

	t24 = ((x101+x102)|(x103<=x104));

	if (t24 != 663481626417LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 1675;
	uint32_t x111 = 854878U;
	static uint32_t t25 = 11U;

	t25 = ((x109+x110)|(x111<=x112));

	if (t25 != 1469845U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MIN;
	volatile uint64_t t26 = 10869003913695LLU;

	t26 = ((x113+x114)|(x115<=x116));

	if (t26 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = UINT16_MAX;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t27 = -73;

	t27 = ((x117+x118)|(x119<=x120));

	if (t27 != 98303) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile int16_t x122 = -1;
	int16_t x123 = 89;
	int32_t t28 = -12916625;

	t28 = ((x121+x122)|(x123<=x124));

	if (t28 != -129) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int64_t x128 = 6273635574864644LL;
	volatile uint64_t t29 = 120634448335LLU;

	t29 = ((x125+x126)|(x127<=x128));

	if (t29 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = 66LLU;
	volatile int32_t t30 = 308;

	t30 = ((x133+x134)|(x135<=x136));

	if (t30 != -2147483521) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = INT64_MAX;
	volatile int32_t x139 = -12347;
	int64_t x140 = INT64_MIN;
	int64_t t31 = 6330LL;

	t31 = ((x137+x138)|(x139<=x140));

	if (t31 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int64_t x146 = -9939371437482199LL;
	int16_t x147 = 425;
	int8_t x148 = -1;
	volatile int64_t t32 = 5LL;

	t32 = ((x145+x146)|(x147<=x148));

	if (t32 != -9939371437416664LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x150 = -1;
	static int32_t x151 = 1551863;
	int8_t x152 = INT8_MAX;
	int32_t t33 = -1;

	t33 = ((x149+x150)|(x151<=x152));

	if (t33 != -37) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	int16_t x155 = 181;
	static uint64_t x156 = 751992639231711LLU;
	int32_t t34 = -400337;

	t34 = ((x153+x154)|(x155<=x156));

	if (t34 != 1002031) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	int32_t x160 = -1;
	volatile uint32_t t35 = 756773494U;

	t35 = ((x157+x158)|(x159<=x160));

	if (t35 != 2147519439U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x162 = INT32_MIN;
	uint16_t x164 = UINT16_MAX;

	t36 = ((x161+x162)|(x163<=x164));

	if (t36 != -2147483393) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = -6;
	int32_t x168 = -9544800;
	int64_t t37 = -552736665994601488LL;

	t37 = ((x165+x166)|(x167<=x168));

	if (t37 != -7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	static volatile int64_t x170 = -4629LL;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	int64_t t38 = 206576119901771621LL;

	t38 = ((x169+x170)|(x171<=x172));

	if (t38 != -4757LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -901543572;
	static volatile uint32_t x178 = 193U;
	static int8_t x179 = INT8_MIN;
	volatile int32_t x180 = 782140744;
	volatile uint32_t t39 = 38788U;

	t39 = ((x177+x178)|(x179<=x180));

	if (t39 != 3393423917U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x183 = -1;
	volatile int32_t x184 = -18077168;
	volatile uint64_t t40 = 4236LLU;

	t40 = ((x181+x182)|(x183<=x184));

	if (t40 != 126LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x186 = 1LL;
	uint32_t x187 = 18142150U;
	int64_t x188 = INT64_MAX;
	volatile int64_t t41 = -25659156890LL;

	t41 = ((x185+x186)|(x187<=x188));

	if (t41 != 30943LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x189 = 2255U;
	static uint32_t x191 = UINT32_MAX;
	int16_t x192 = 1;
	volatile int32_t t42 = 556;

	t42 = ((x189+x190)|(x191<=x192));

	if (t42 != 2254) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x194 = 4515LLU;
	int64_t x195 = -1LL;
	static int16_t x196 = 89;
	volatile uint64_t t43 = 490751LLU;

	t43 = ((x193+x194)|(x195<=x196));

	if (t43 != 18446744073702528103LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -14971;
	int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;

	t44 = ((x197+x198)|(x199<=x200));

	if (t44 != 2104573LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = 0U;
	uint8_t x204 = 35U;

	t45 = ((x201+x202)|(x203<=x204));

	if (t45 != 9) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	static uint32_t x208 = 229U;
	volatile int32_t t46 = -253336;

	t46 = ((x205+x206)|(x207<=x208));

	if (t46 != 32639) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	int16_t x212 = INT16_MAX;

	t47 = ((x209+x210)|(x211<=x212));

	if (t47 != -2147483649LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = 1;
	int32_t x214 = -1;
	static uint8_t x215 = UINT8_MAX;
	static int8_t x216 = INT8_MIN;
	int32_t t48 = 0;

	t48 = ((x213+x214)|(x215<=x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 974441547;
	static volatile uint8_t x218 = 26U;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MIN;
	static int32_t t49 = -1;

	t49 = ((x217+x218)|(x219<=x220));

	if (t49 != 974441573) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -1LL;
	volatile uint16_t x222 = UINT16_MAX;
	uint16_t x223 = 20U;
	uint8_t x224 = 17U;

	t50 = ((x221+x222)|(x223<=x224));

	if (t50 != 65534LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = UINT32_MAX;
	uint16_t x226 = UINT16_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	volatile uint32_t t51 = 9U;

	t51 = ((x225+x226)|(x227<=x228));

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	static int64_t x235 = -1896404815LL;
	static int16_t x236 = -1;

	t52 = ((x233+x234)|(x235<=x236));

	if (t52 != -9223372036851018577LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = 1073LL;
	int64_t x238 = INT64_MIN;
	int8_t x239 = -1;
	uint32_t x240 = 3384U;

	t53 = ((x237+x238)|(x239<=x240));

	if (t53 != -9223372036854774735LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x242 = 3725;

	t54 = ((x241+x242)|(x243<=x244));

	if (t54 != 5317) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	static int32_t x250 = 6;
	uint64_t x251 = 1430072LLU;
	int32_t t55 = 0;

	t55 = ((x249+x250)|(x251<=x252));

	if (t55 != -121) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x259 = INT64_MAX;
	uint64_t x260 = 12156LLU;
	uint32_t t56 = 291753U;

	t56 = ((x257+x258)|(x259<=x260));

	if (t56 != 4294967243U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = -560;
	int8_t x262 = INT8_MIN;
	volatile uint64_t x263 = 21585369LLU;
	int8_t x264 = -17;

	t57 = ((x261+x262)|(x263<=x264));

	if (t57 != -687) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = -1;
	static int8_t x267 = -1;
	uint8_t x268 = 57U;

	t58 = ((x265+x266)|(x267<=x268));

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -12;
	int8_t x270 = INT8_MAX;
	volatile int16_t x271 = INT16_MIN;
	uint16_t x272 = 2691U;
	static volatile int32_t t59 = -1036606791;

	t59 = ((x269+x270)|(x271<=x272));

	if (t59 != 115) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = 207;
	uint8_t x276 = 19U;
	volatile int32_t t60 = 219;

	t60 = ((x273+x274)|(x275<=x276));

	if (t60 != -32561) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = -1;
	int8_t x278 = -1;
	static uint8_t x279 = UINT8_MAX;
	volatile uint32_t x280 = 70070421U;
	int32_t t61 = 4;

	t61 = ((x277+x278)|(x279<=x280));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	uint32_t x283 = 213U;
	uint8_t x284 = 12U;
	uint32_t t62 = 310U;

	t62 = ((x281+x282)|(x283<=x284));

	if (t62 != 4294967167U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	volatile uint64_t x288 = 6550382112LLU;
	volatile uint64_t t63 = 26288983LLU;

	t63 = ((x285+x286)|(x287<=x288));

	if (t63 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x293 = 0U;
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = 3;
	uint64_t x296 = UINT64_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x293+x294)|(x295<=x296));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = 344401366LL;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = 0;
	int64_t x300 = 1118301499347441451LL;
	int64_t t65 = -147LL;

	t65 = ((x297+x298)|(x299<=x300));

	if (t65 != 344401239LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 87U;
	int32_t x302 = 50601;
	int8_t x303 = -1;
	uint32_t x304 = UINT32_MAX;
	static int32_t t66 = 27551249;

	t66 = ((x301+x302)|(x303<=x304));

	if (t66 != 50689) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x305 = 156714;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t67 = 10948;

	t67 = ((x305+x306)|(x307<=x308));

	if (t67 != 154745) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = UINT64_MAX;
	uint8_t x312 = 31U;

	t68 = ((x309+x310)|(x311<=x312));

	if (t68 != -2147483649LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = -1;
	volatile int32_t x314 = 335242;
	static int8_t x315 = INT8_MIN;
	uint16_t x316 = 1554U;

	t69 = ((x313+x314)|(x315<=x316));

	if (t69 != 335241) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 6661U;
	volatile int64_t x319 = INT64_MIN;
	volatile int64_t t70 = 1733293LL;

	t70 = ((x317+x318)|(x319<=x320));

	if (t70 != -9223372036854769147LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = 55345819U;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int64_t t71 = 3559744700004LL;

	t71 = ((x321+x322)|(x323<=x324));

	if (t71 != -9223372036799429989LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x325 = INT8_MIN;
	static uint32_t x326 = 2U;
	uint8_t x327 = 0U;
	volatile uint32_t t72 = 967809134U;

	t72 = ((x325+x326)|(x327<=x328));

	if (t72 != 4294967171U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = -327;
	uint64_t x330 = 11194033231436LLU;
	static int16_t x332 = 212;
	volatile uint64_t t73 = 5081LLU;

	t73 = ((x329+x330)|(x331<=x332));

	if (t73 != 11194033231109LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = 19039464948LL;
	int16_t x334 = INT16_MAX;
	static int32_t x335 = -1;
	volatile int64_t t74 = -181440369925712LL;

	t74 = ((x333+x334)|(x335<=x336));

	if (t74 != 19039497715LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = UINT16_MAX;
	static int8_t x339 = 6;
	volatile uint8_t x340 = 6U;

	t75 = ((x337+x338)|(x339<=x340));

	if (t75 != 131071) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = 1U;
	volatile int16_t x342 = -1;
	volatile int64_t x343 = INT64_MIN;
	int32_t x344 = -1;
	static volatile int32_t t76 = -8437;

	t76 = ((x341+x342)|(x343<=x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = -1;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	volatile int8_t x348 = 0;
	int32_t t77 = 1;

	t77 = ((x345+x346)|(x347<=x348));

	if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = 353;
	int64_t x350 = 7161053742LL;
	uint8_t x351 = 10U;
	int64_t t78 = 10LL;

	t78 = ((x349+x350)|(x351<=x352));

	if (t78 != 7161054095LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x353 = 194144U;
	volatile uint8_t x354 = 123U;
	volatile uint32_t t79 = 2916U;

	t79 = ((x353+x354)|(x355<=x356));

	if (t79 != 194267U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = -4037;
	uint32_t x359 = 964602991U;
	static volatile int8_t x360 = 4;
	static int32_t t80 = 42;

	t80 = ((x357+x358)|(x359<=x360));

	if (t80 != -3896) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x361 = 240;
	volatile int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MIN;
	volatile int32_t t81 = 1682;

	t81 = ((x361+x362)|(x363<=x364));

	if (t81 != 367) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x365 = 15U;
	uint32_t x368 = 59405U;
	volatile int32_t t82 = 91964;

	t82 = ((x365+x366)|(x367<=x368));

	if (t82 != -32753) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	static uint32_t x376 = 15512U;
	static volatile int32_t t83 = 32342364;

	t83 = ((x373+x374)|(x375<=x376));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	static int8_t x379 = -1;
	int32_t t84 = -25762;

	t84 = ((x377+x378)|(x379<=x380));

	if (t84 != -129) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x381 = 3;
	volatile int32_t x382 = INT32_MIN;
	static uint64_t x383 = UINT64_MAX;
	static int32_t t85 = -6635490;

	t85 = ((x381+x382)|(x383<=x384));

	if (t85 != -2147483645) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x387 = INT16_MIN;
	static volatile int32_t x388 = INT32_MIN;
	int32_t t86 = 248487488;

	t86 = ((x385+x386)|(x387<=x388));

	if (t86 != 287) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x393 = 9U;
	int32_t x394 = 334492;
	volatile uint8_t x395 = UINT8_MAX;
	volatile uint32_t t87 = 12269383U;

	t87 = ((x393+x394)|(x395<=x396));

	if (t87 != 334501U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	volatile int8_t x400 = -1;

	t88 = ((x397+x398)|(x399<=x400));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x401 = INT32_MAX;
	volatile int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MIN;
	int32_t t89 = -1610847;

	t89 = ((x401+x402)|(x403<=x404));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = -14;
	uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	volatile uint64_t x408 = UINT64_MAX;
	uint32_t t90 = 61826U;

	t90 = ((x405+x406)|(x407<=x408));

	if (t90 != 4294967281U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x411 = 0;
	static uint64_t x412 = 91399054414LLU;
	static volatile int64_t t91 = 352587752032LL;

	t91 = ((x409+x410)|(x411<=x412));

	if (t91 != 15LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	volatile uint8_t x416 = 102U;
	static int64_t t92 = -12538084LL;

	t92 = ((x413+x414)|(x415<=x416));

	if (t92 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x422 = 3U;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = 36558929;
	volatile int32_t t93 = 0;

	t93 = ((x421+x422)|(x423<=x424));

	if (t93 != -32765) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = 1;
	static int64_t x427 = INT64_MIN;
	uint8_t x428 = 63U;
	static volatile int32_t t94 = -19;

	t94 = ((x425+x426)|(x427<=x428));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x429 = INT32_MIN;
	volatile int32_t x430 = 113792;
	volatile int64_t x432 = INT64_MIN;
	volatile int32_t t95 = -243447;

	t95 = ((x429+x430)|(x431<=x432));

	if (t95 != -2147369856) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x433 = INT8_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	int32_t x436 = -1;
	volatile uint32_t t96 = 333448U;

	t96 = ((x433+x434)|(x435<=x436));

	if (t96 != 4294967167U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x441 = 106664U;
	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MIN;

	t97 = ((x441+x442)|(x443<=x444));

	if (t97 != 106537U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = 823191401071LLU;
	volatile int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MAX;
	int64_t x448 = 11125213LL;
	volatile uint64_t t98 = 583782LLU;

	t98 = ((x445+x446)|(x447<=x448));

	if (t98 != 823191368303LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = INT16_MIN;
	uint32_t x450 = 66U;
	static uint32_t x451 = 278782U;
	volatile uint32_t t99 = 5U;

	t99 = ((x449+x450)|(x451<=x452));

	if (t99 != 4294934595U) { NG(); } else { ; }
	
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

