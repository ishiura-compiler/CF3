#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x9 = 16LLU;
volatile int16_t x12 = INT16_MIN;
int32_t x16 = INT32_MIN;
int64_t x25 = INT64_MAX;
volatile int8_t x26 = -1;
uint32_t x32 = 4U;
volatile uint8_t x45 = 35U;
int8_t x48 = -1;
int16_t x54 = -331;
volatile int8_t x55 = INT8_MIN;
int8_t x57 = INT8_MAX;
volatile uint8_t x63 = UINT8_MAX;
volatile int32_t t14 = -3202138;
int8_t x68 = INT8_MIN;
volatile int32_t x72 = 1;
volatile int32_t x74 = INT32_MIN;
uint32_t x77 = 3U;
int8_t x81 = INT8_MIN;
uint32_t x85 = UINT32_MAX;
int16_t x94 = -4;
int8_t x96 = INT8_MIN;
volatile int64_t x102 = INT64_MIN;
volatile int8_t x103 = INT8_MIN;
static int8_t x106 = -1;
volatile int8_t x109 = -1;
volatile int64_t x119 = INT64_MAX;
volatile int8_t x120 = INT8_MIN;
static volatile int32_t t27 = 1115787;
volatile uint8_t x122 = 4U;
uint32_t x125 = 2453000U;
uint8_t x130 = UINT8_MAX;
static volatile int32_t t31 = 0;
int32_t x139 = 46934;
static int16_t x140 = INT16_MIN;
uint8_t x142 = 5U;
static int16_t x148 = INT16_MIN;
int32_t t34 = -103379;
int8_t x150 = INT8_MIN;
volatile int32_t x151 = INT32_MIN;
int64_t x155 = -1LL;
volatile int32_t t36 = 313289533;
int16_t x159 = INT16_MIN;
volatile int32_t t37 = -48948006;
int16_t x165 = INT16_MIN;
int64_t x171 = 656LL;
volatile int32_t t40 = 283;
int32_t x173 = -1;
static volatile int32_t t42 = 0;
uint16_t x183 = 8U;
uint64_t x185 = 1497LLU;
uint16_t x188 = 5U;
int64_t x194 = -4349513931571067LL;
static uint32_t x195 = UINT32_MAX;
int64_t x198 = -1LL;
volatile uint16_t x202 = UINT16_MAX;
volatile int16_t x204 = -1;
int32_t x207 = INT32_MIN;
volatile int8_t x217 = INT8_MAX;
static int16_t x219 = -7;
int32_t t53 = 278;
int8_t x227 = INT8_MAX;
volatile int32_t t54 = 3446031;
uint32_t x231 = UINT32_MAX;
static uint8_t x237 = 3U;
int8_t x241 = INT8_MAX;
volatile int8_t x246 = INT8_MIN;
static int32_t x248 = -1;
volatile int32_t t59 = -31084634;
static volatile int32_t t61 = 539799;
static int32_t t62 = -250189966;
int16_t x265 = INT16_MIN;
static volatile int64_t x269 = INT64_MIN;
uint8_t x277 = UINT8_MAX;
static int8_t x286 = INT8_MIN;
int32_t t69 = -217966830;
int32_t x294 = INT32_MIN;
static int16_t x295 = INT16_MAX;
int32_t t71 = -6231142;
int64_t x297 = 325137114728LL;
uint16_t x298 = 346U;
int8_t x303 = 1;
static uint64_t x314 = 25196745867586LLU;
int8_t x320 = INT8_MIN;
static int32_t t78 = -50456252;
static int32_t x326 = INT32_MIN;
int64_t x327 = INT64_MIN;
static uint64_t x328 = 1LLU;
uint8_t x331 = UINT8_MAX;
static int32_t x336 = -1;
volatile int32_t t83 = 24;
int16_t x348 = 242;
uint64_t x350 = 61519195279332419LLU;
int16_t x353 = -27;
int8_t x355 = -3;
uint16_t x357 = UINT16_MAX;
static int64_t x358 = 846623309171025171LL;
uint64_t x360 = 227253LLU;
volatile uint8_t x366 = UINT8_MAX;
int16_t x372 = INT16_MIN;
volatile int32_t t90 = 1304067;
int16_t x377 = -1;
static int32_t t92 = -2;
uint16_t x383 = 2873U;
int64_t x394 = INT64_MIN;
int8_t x396 = 0;
int16_t x398 = -2117;
volatile int64_t x406 = INT64_MIN;
int16_t x408 = INT16_MAX;


void f0(void) {
	int64_t x1 = 183271320750LL;
	int16_t x2 = -1;
	uint32_t x3 = 19U;
	static int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -39;

	t0 = ((x1&(x2%x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 2812649111574952176LLU;
	int32_t x7 = INT32_MAX;
	volatile int64_t x8 = INT64_MIN;
	static volatile int32_t t1 = -49711535;

	t1 = ((x5&(x6%x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = 4U;
	volatile int32_t x11 = INT32_MAX;
	int32_t t2 = -596510247;

	t2 = ((x9&(x10%x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 2318;
	static uint16_t x14 = 1U;
	uint8_t x15 = 8U;
	int32_t t3 = 1171226;

	t3 = ((x13&(x14%x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	int8_t x20 = 15;
	static int32_t t4 = -1;

	t4 = ((x17&(x18%x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x27 = 31LLU;
	int8_t x28 = INT8_MAX;
	int32_t t5 = -8500;

	t5 = ((x25&(x26%x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static volatile uint8_t x30 = 26U;
	static uint64_t x31 = 425912304LLU;
	int32_t t6 = 2097405;

	t6 = ((x29&(x30%x31))<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = 1677;
	int8_t x34 = INT8_MAX;
	volatile int8_t x35 = -1;
	static int16_t x36 = INT16_MIN;
	int32_t t7 = 45092;

	t7 = ((x33&(x34%x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = UINT64_MAX;
	volatile int8_t x39 = INT8_MAX;
	int64_t x40 = INT64_MIN;
	volatile int32_t t8 = -110515;

	t8 = ((x37&(x38%x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	static int8_t x44 = INT8_MIN;
	static volatile int32_t t9 = -834731;

	t9 = ((x41&(x42%x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = -1;
	int16_t x47 = -65;
	volatile int32_t t10 = -16657;

	t10 = ((x45&(x46%x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 448U;
	int32_t x50 = -1;
	volatile int64_t x51 = 103431LL;
	int16_t x52 = INT16_MAX;
	int32_t t11 = -470007;

	t11 = ((x49&(x50%x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x56 = 136283307255410071LLU;
	int32_t t12 = -20534380;

	t12 = ((x53&(x54%x55))<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x58 = -1;
	static uint32_t x59 = 302156U;
	static volatile int8_t x60 = INT8_MIN;
	int32_t t13 = -3;

	t13 = ((x57&(x58%x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = 192726LL;
	uint64_t x62 = UINT64_MAX;
	static volatile uint8_t x64 = UINT8_MAX;

	t14 = ((x61&(x62%x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -23811573449615LL;
	uint32_t x66 = 3938U;
	static int16_t x67 = -131;
	int32_t t15 = 21151;

	t15 = ((x65&(x66%x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 94U;
	int16_t x70 = -746;
	int8_t x71 = -1;
	volatile int32_t t16 = -68209;

	t16 = ((x69&(x70%x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	static volatile uint16_t x75 = 509U;
	int32_t x76 = -1;
	int32_t t17 = 3;

	t17 = ((x73&(x74%x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x78 = -3379LL;
	int16_t x79 = 5792;
	static int16_t x80 = 14311;
	static int32_t t18 = -2514;

	t18 = ((x77&(x78%x79))<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	static int16_t x84 = -1;
	int32_t t19 = 3299;

	t19 = ((x81&(x82%x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = -8294471LL;
	int32_t t20 = 31011773;

	t20 = ((x85&(x86%x87))<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = INT32_MAX;
	volatile int64_t x95 = INT64_MAX;
	static volatile int32_t t21 = -159;

	t21 = ((x93&(x94%x95))<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = 1973991;
	int32_t t22 = -3484906;

	t22 = ((x97&(x98%x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 7U;
	static int32_t x104 = -1;
	int32_t t23 = 36933046;

	t23 = ((x101&(x102%x103))<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 73321944LL;
	static volatile uint16_t x107 = 1U;
	volatile int16_t x108 = -1;
	int32_t t24 = -4850611;

	t24 = ((x105&(x106%x107))<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = -4LL;
	uint16_t x111 = 454U;
	uint32_t x112 = 7U;
	static int32_t t25 = -917667;

	t25 = ((x109&(x110%x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 13700231777LL;
	volatile uint8_t x114 = 33U;
	int64_t x115 = INT64_MIN;
	static int64_t x116 = 661LL;
	static int32_t t26 = 13;

	t26 = ((x113&(x114%x115))<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MAX;
	static volatile int32_t x118 = INT32_MIN;

	t27 = ((x117&(x118%x119))<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 1860669263702LLU;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 7308U;
	volatile int32_t t28 = -133135253;

	t28 = ((x121&(x122%x123))<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x126 = 12U;
	uint64_t x127 = 12061LLU;
	static volatile int8_t x128 = -31;
	int32_t t29 = 101340;

	t29 = ((x125&(x126%x127))<=x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 50050LLU;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;
	volatile int32_t t30 = 97989;

	t30 = ((x129&(x130%x131))<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = INT64_MAX;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	int64_t x136 = -736633808498259278LL;

	t31 = ((x133&(x134%x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MIN;
	volatile uint64_t x138 = UINT64_MAX;
	static volatile int32_t t32 = -985455021;

	t32 = ((x137&(x138%x139))<=x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 3356U;
	static uint64_t x143 = UINT64_MAX;
	int32_t x144 = 2;
	int32_t t33 = 0;

	t33 = ((x141&(x142%x143))<=x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	volatile int16_t x147 = INT16_MAX;

	t34 = ((x145&(x146%x147))<=x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x149 = 17872845092LLU;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t35 = -7914267;

	t35 = ((x149&(x150%x151))<=x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 5881U;
	static uint8_t x154 = 1U;
	uint64_t x156 = UINT64_MAX;

	t36 = ((x153&(x154%x155))<=x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -751195608;
	static volatile int32_t x158 = -1;
	uint32_t x160 = 241245605U;

	t37 = ((x157&(x158%x159))<=x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	int32_t x163 = -1;
	static int8_t x164 = INT8_MIN;
	static int32_t t38 = -944762760;

	t38 = ((x161&(x162%x163))<=x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x166 = 495291107023LLU;
	int8_t x167 = INT8_MIN;
	int32_t x168 = -784608;
	volatile int32_t t39 = 37558707;

	t39 = ((x165&(x166%x167))<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 179LLU;
	int64_t x170 = INT64_MIN;
	int64_t x172 = INT64_MIN;

	t40 = ((x169&(x170%x171))<=x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = -1;
	int32_t x175 = 19397;
	int64_t x176 = INT64_MAX;
	volatile int32_t t41 = -52068572;

	t41 = ((x173&(x174%x175))<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	volatile int16_t x180 = INT16_MAX;

	t42 = ((x177&(x178%x179))<=x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = -54978753275684052LL;
	static uint32_t x182 = 40864U;
	int64_t x184 = INT64_MAX;
	volatile int32_t t43 = 616;

	t43 = ((x181&(x182%x183))<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x186 = -1;
	volatile int8_t x187 = INT8_MAX;
	volatile int32_t t44 = 63972709;

	t44 = ((x185&(x186%x187))<=x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MIN;
	static int32_t x191 = 767731;
	uint8_t x192 = 1U;
	int32_t t45 = -989007630;

	t45 = ((x189&(x190%x191))<=x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = 3;
	uint8_t x196 = 6U;
	int32_t t46 = 9917563;

	t46 = ((x193&(x194%x195))<=x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x197 = 1625U;
	uint32_t x199 = 643U;
	int32_t x200 = INT32_MAX;
	static int32_t t47 = -1839;

	t47 = ((x197&(x198%x199))<=x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = INT64_MIN;
	static volatile int8_t x203 = INT8_MAX;
	int32_t t48 = -1906;

	t48 = ((x201&(x202%x203))<=x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	static uint8_t x206 = 2U;
	int8_t x208 = -1;
	int32_t t49 = -719285106;

	t49 = ((x205&(x206%x207))<=x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = -91;
	volatile int64_t x210 = -704471LL;
	static int8_t x211 = INT8_MAX;
	uint8_t x212 = 0U;
	static volatile int32_t t50 = -49;

	t50 = ((x209&(x210%x211))<=x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = 12;
	int32_t x214 = 157;
	static int8_t x215 = -1;
	int64_t x216 = INT64_MAX;
	int32_t t51 = -1937;

	t51 = ((x213&(x214%x215))<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x218 = 13589LL;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t52 = 1953947;

	t52 = ((x217&(x218%x219))<=x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 1322161LLU;
	uint8_t x222 = UINT8_MAX;
	volatile int32_t x223 = INT32_MAX;
	static volatile int64_t x224 = 990906188226917LL;

	t53 = ((x221&(x222%x223))<=x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 8695220394LLU;
	int16_t x226 = -32;
	uint16_t x228 = 1U;

	t54 = ((x225&(x226%x227))<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	static int32_t x230 = INT32_MIN;
	uint8_t x232 = 73U;
	int32_t t55 = -2743;

	t55 = ((x229&(x230%x231))<=x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	volatile int32_t x234 = 428774;
	volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = 5203LLU;
	int32_t t56 = -1947295;

	t56 = ((x233&(x234%x235))<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x238 = 40U;
	uint32_t x239 = 1427U;
	int32_t x240 = 1;
	int32_t t57 = -13;

	t57 = ((x237&(x238%x239))<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x242 = -1;
	uint64_t x243 = 1752889569161942222LLU;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t58 = 760950;

	t58 = ((x241&(x242%x243))<=x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -15108;
	uint8_t x247 = UINT8_MAX;

	t59 = ((x245&(x246%x247))<=x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = -1260;
	int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	volatile int32_t t60 = 12038;

	t60 = ((x249&(x250%x251))<=x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 1U;
	uint64_t x254 = 55980426206411LLU;
	volatile uint8_t x255 = 29U;
	int16_t x256 = 6;

	t61 = ((x253&(x254%x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -389854813234LL;
	int32_t x258 = 1;
	int16_t x259 = INT16_MIN;
	static uint16_t x260 = UINT16_MAX;

	t62 = ((x257&(x258%x259))<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = -1LL;
	int8_t x263 = 3;
	uint32_t x264 = UINT32_MAX;
	static int32_t t63 = 40444153;

	t63 = ((x261&(x262%x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x266 = -21459039;
	int8_t x267 = -1;
	uint8_t x268 = 18U;
	volatile int32_t t64 = -5;

	t64 = ((x265&(x266%x267))<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = INT8_MIN;
	volatile int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	volatile int32_t t65 = -51771;

	t65 = ((x269&(x270%x271))<=x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MAX;
	uint64_t x274 = 326LLU;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t66 = -83905;

	t66 = ((x273&(x274%x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x278 = UINT8_MAX;
	volatile int64_t x279 = 5922251300149837LL;
	uint8_t x280 = 0U;
	volatile int32_t t67 = 13;

	t67 = ((x277&(x278%x279))<=x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	static int16_t x282 = INT16_MAX;
	static int32_t x283 = -1;
	uint32_t x284 = 678189072U;
	static volatile int32_t t68 = -1710;

	t68 = ((x281&(x282%x283))<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x285 = -1;
	int16_t x287 = INT16_MIN;
	int64_t x288 = 12166810LL;

	t69 = ((x285&(x286%x287))<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 760706U;
	static int32_t x290 = INT32_MAX;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t70 = 0;

	t70 = ((x289&(x290%x291))<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	int16_t x296 = 1;

	t71 = ((x293&(x294%x295))<=x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	volatile int32_t t72 = -1;

	t72 = ((x297&(x298%x299))<=x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MAX;
	int64_t x302 = -1LL;
	uint64_t x304 = 3LLU;
	int32_t t73 = 8420517;

	t73 = ((x301&(x302%x303))<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	volatile int64_t x306 = 3198LL;
	int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t74 = -541478526;

	t74 = ((x305&(x306%x307))<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = -125149;
	int8_t x310 = INT8_MIN;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1LL;
	volatile int32_t t75 = 4;

	t75 = ((x309&(x310%x311))<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = 24U;
	volatile int32_t x315 = INT32_MIN;
	uint32_t x316 = 0U;
	int32_t t76 = -3616;

	t76 = ((x313&(x314%x315))<=x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = 1;
	static uint64_t x318 = UINT64_MAX;
	volatile int8_t x319 = INT8_MIN;
	int32_t t77 = 330886564;

	t77 = ((x317&(x318%x319))<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x321 = 11411U;
	int8_t x322 = 63;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 31U;

	t78 = ((x321&(x322%x323))<=x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t t79 = 8;

	t79 = ((x325&(x326%x327))<=x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 39;
	static int64_t x330 = -122258862825LL;
	uint32_t x332 = 11619791U;
	volatile int32_t t80 = 32;

	t80 = ((x329&(x330%x331))<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x333 = 0U;
	volatile uint8_t x334 = 0U;
	int16_t x335 = INT16_MIN;
	static int32_t t81 = -1;

	t81 = ((x333&(x334%x335))<=x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x337 = 10U;
	static int32_t x338 = -75390;
	int64_t x339 = INT64_MIN;
	volatile int16_t x340 = -1;
	static int32_t t82 = 0;

	t82 = ((x337&(x338%x339))<=x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x341 = INT32_MIN;
	static uint16_t x342 = UINT16_MAX;
	int64_t x343 = 203974096766672110LL;
	volatile uint32_t x344 = 10767U;

	t83 = ((x341&(x342%x343))<=x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -98825741;
	int8_t x346 = INT8_MIN;
	volatile uint16_t x347 = UINT16_MAX;
	int32_t t84 = 0;

	t84 = ((x345&(x346%x347))<=x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 1524197LLU;
	uint8_t x351 = 22U;
	static int16_t x352 = -1;
	int32_t t85 = 2076;

	t85 = ((x349&(x350%x351))<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x354 = -1;
	int16_t x356 = INT16_MAX;
	int32_t t86 = -19907618;

	t86 = ((x353&(x354%x355))<=x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x359 = 97;
	int32_t t87 = 23041;

	t87 = ((x357&(x358%x359))<=x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x361 = 8U;
	int8_t x362 = INT8_MAX;
	static uint8_t x363 = 19U;
	volatile int32_t x364 = INT32_MIN;
	static int32_t t88 = -87422;

	t88 = ((x361&(x362%x363))<=x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = 2LL;
	static int64_t x367 = INT64_MAX;
	uint32_t x368 = 5255U;
	int32_t t89 = -8911;

	t89 = ((x365&(x366%x367))<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -9506555LL;
	int32_t x370 = INT32_MIN;
	volatile int64_t x371 = INT64_MAX;

	t90 = ((x369&(x370%x371))<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	volatile uint64_t x374 = 100888857LLU;
	uint32_t x375 = 656090427U;
	int8_t x376 = INT8_MAX;
	int32_t t91 = 116;

	t91 = ((x373&(x374%x375))<=x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = INT8_MIN;
	uint32_t x379 = 177265514U;
	volatile int64_t x380 = -242LL;

	t92 = ((x377&(x378%x379))<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = INT16_MAX;
	volatile uint16_t x382 = 1U;
	static uint16_t x384 = 6U;
	static volatile int32_t t93 = -203348490;

	t93 = ((x381&(x382%x383))<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	static volatile int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;
	int64_t x392 = -1LL;
	volatile int32_t t94 = -3892848;

	t94 = ((x389&(x390%x391))<=x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -1;
	int16_t x395 = 1;
	static int32_t t95 = -88714112;

	t95 = ((x393&(x394%x395))<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	int16_t x399 = -23;
	uint64_t x400 = 329641451932802LLU;
	static int32_t t96 = -117740128;

	t96 = ((x397&(x398%x399))<=x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = -749;
	static uint16_t x403 = 9U;
	volatile uint8_t x404 = UINT8_MAX;
	int32_t t97 = -1;

	t97 = ((x401&(x402%x403))<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x405 = 121U;
	volatile int32_t x407 = INT32_MAX;
	volatile int32_t t98 = 7196190;

	t98 = ((x405&(x406%x407))<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x409 = -1;
	volatile int32_t x410 = INT32_MAX;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t99 = 120515037;

	t99 = ((x409&(x410%x411))<=x412);

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

