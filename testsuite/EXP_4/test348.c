#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 195032;
int64_t x13 = -1LL;
volatile int32_t t5 = 287512;
int16_t x30 = -3;
uint64_t x41 = UINT64_MAX;
int16_t x42 = INT16_MIN;
int32_t x44 = -1;
static int16_t x47 = INT16_MIN;
int16_t x52 = 3;
static volatile int32_t t10 = -1452650;
volatile int32_t t11 = 24796;
int64_t x57 = -38085618583LL;
static int8_t x70 = -22;
int16_t x73 = INT16_MIN;
int32_t t16 = -317634;
int64_t x98 = 122LL;
int32_t x102 = 0;
uint64_t x107 = 463442762371326710LLU;
uint8_t x116 = 0U;
int32_t t22 = -3104953;
int8_t x118 = INT8_MIN;
int16_t x120 = INT16_MIN;
int8_t x128 = INT8_MAX;
int32_t t24 = 248;
static volatile uint32_t x129 = 11851U;
uint32_t x138 = 1024290U;
static volatile int32_t t26 = 50;
static int64_t x141 = 303895307354220037LL;
int8_t x145 = INT8_MIN;
static int32_t x146 = -1;
static uint16_t x158 = 0U;
uint64_t x159 = 2373291527341300LLU;
uint8_t x160 = UINT8_MAX;
volatile uint64_t x163 = UINT64_MAX;
int32_t t31 = 0;
static volatile int32_t t32 = 1414;
uint16_t x177 = 860U;
int32_t t34 = 41;
int8_t x186 = -1;
int32_t x187 = INT32_MIN;
static uint32_t x188 = UINT32_MAX;
uint32_t x190 = 127487U;
volatile uint16_t x196 = 110U;
volatile int32_t t39 = 488867703;
uint16_t x205 = 3U;
uint8_t x210 = 9U;
int8_t x214 = INT8_MIN;
volatile int32_t t43 = -12240;
int16_t x227 = 0;
int64_t x247 = -1LL;
uint8_t x248 = 1U;
uint64_t x253 = UINT64_MAX;
static volatile int32_t t47 = 1490969;
static int16_t x269 = -1092;
int64_t x274 = INT64_MIN;
int16_t x277 = INT16_MAX;
int8_t x278 = 31;
uint64_t x282 = 3411964316011260LLU;
uint8_t x288 = 101U;
int32_t t52 = 68925402;
volatile int16_t x294 = INT16_MIN;
volatile int8_t x295 = 0;
int32_t t57 = 1;
volatile uint16_t x319 = 1U;
static int32_t x320 = 0;
int32_t t58 = -807198189;
static int8_t x322 = -1;
static volatile uint32_t x328 = UINT32_MAX;
int32_t t60 = -933;
int8_t x335 = 20;
int16_t x349 = -1;
volatile int16_t x355 = -2082;
int32_t t68 = 0;
int16_t x366 = -5823;
static int16_t x372 = INT16_MIN;
int32_t t70 = -280782;
uint32_t x374 = UINT32_MAX;
uint64_t x382 = 1650LLU;
uint8_t x384 = 8U;
volatile uint16_t x386 = 461U;
int32_t x394 = INT32_MAX;
int8_t x395 = INT8_MIN;
volatile int64_t x403 = -1LL;
int32_t t76 = -1;
uint32_t x405 = 1U;
int32_t x406 = 6215578;
uint16_t x408 = UINT16_MAX;
volatile uint8_t x417 = 105U;
volatile int32_t t81 = 17512;
volatile int16_t x425 = -430;
uint64_t x427 = UINT64_MAX;
volatile int32_t x438 = -1;
volatile int32_t t83 = 1342;
int32_t x445 = -1;
int64_t x468 = 2340606015LL;
uint32_t x472 = UINT32_MAX;
int8_t x491 = INT8_MAX;
uint16_t x501 = UINT16_MAX;
static volatile int64_t x505 = INT64_MAX;
static uint8_t x506 = 2U;
static int32_t x507 = INT32_MIN;
int32_t x509 = INT32_MIN;
volatile int32_t t97 = 10;
int32_t x514 = INT32_MIN;
int16_t x515 = INT16_MAX;
volatile int64_t x522 = 8167036LL;


void f0(void) {
	uint32_t x1 = 50476777U;
	int16_t x2 = -106;
	volatile uint8_t x3 = 6U;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -1062852352;

	t0 = (x1<=(x2+(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 11399LL;
	int16_t x6 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	static volatile uint64_t x8 = 38760282736733LLU;

	t1 = (x5<=(x6+(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 5391;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 3U;
	int64_t x12 = -819LL;
	int32_t t2 = 23;

	t2 = (x9<=(x10+(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = -1LL;
	uint8_t x15 = UINT8_MAX;
	volatile int8_t x16 = -52;
	static int32_t t3 = -804531;

	t3 = (x13<=(x14+(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 2683;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = 0U;
	static volatile int32_t t4 = -347473;

	t4 = (x17<=(x18+(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = -6592315LL;
	int16_t x23 = 10877;
	uint32_t x24 = 92191431U;

	t5 = (x21<=(x22+(x23*x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	volatile int16_t x26 = INT16_MIN;
	int16_t x27 = 205;
	uint8_t x28 = 3U;
	static int32_t t6 = -381807686;

	t6 = (x25<=(x26+(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	volatile int16_t x31 = 1;
	volatile int8_t x32 = 1;
	int32_t t7 = -354850058;

	t7 = (x29<=(x30+(x31*x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x43 = 3;
	static volatile int32_t t8 = 315856038;

	t8 = (x41<=(x42+(x43*x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = 41U;
	static uint8_t x46 = 63U;
	int8_t x48 = 6;
	volatile int32_t t9 = -2269251;

	t9 = (x45<=(x46+(x47*x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	volatile int16_t x50 = INT16_MIN;
	uint16_t x51 = 23U;

	t10 = (x49<=(x50+(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = 60043120LLU;
	int16_t x54 = 657;
	static int32_t x55 = 422983;
	static int8_t x56 = INT8_MIN;

	t11 = (x53<=(x54+(x55*x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = 14061881U;
	int16_t x59 = -2;
	int64_t x60 = -314478503LL;
	volatile int32_t t12 = -10353;

	t12 = (x57<=(x58+(x59*x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = INT8_MIN;
	static int8_t x62 = -2;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	volatile int32_t t13 = 19928438;

	t13 = (x61<=(x62+(x63*x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 1;
	uint8_t x71 = UINT8_MAX;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t14 = 167910595;

	t14 = (x69<=(x70+(x71*x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x74 = INT64_MAX;
	uint16_t x75 = 1U;
	int64_t x76 = -106947LL;
	int32_t t15 = -21521;

	t15 = (x73<=(x74+(x75*x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 0U;
	int16_t x80 = INT16_MIN;

	t16 = (x77<=(x78+(x79*x80)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = -3;
	volatile int64_t x82 = INT64_MAX;
	static uint16_t x83 = UINT16_MAX;
	int8_t x84 = -1;
	int32_t t17 = -17097;

	t17 = (x81<=(x82+(x83*x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x97 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	volatile uint64_t x100 = 1458139504373734264LLU;
	int32_t t18 = 0;

	t18 = (x97<=(x98+(x99*x100)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x101 = INT16_MIN;
	volatile int64_t x103 = INT64_MAX;
	uint64_t x104 = 5LLU;
	static int32_t t19 = -19155;

	t19 = (x101<=(x102+(x103*x104)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = -1LL;
	static int64_t x106 = INT64_MIN;
	volatile int32_t x108 = INT32_MIN;
	int32_t t20 = 7789;

	t20 = (x105<=(x106+(x107*x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x109 = -1;
	uint16_t x110 = 2U;
	int32_t x111 = 1;
	int64_t x112 = INT64_MIN;
	volatile int32_t t21 = 3374494;

	t21 = (x109<=(x110+(x111*x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x113 = 386;
	static uint64_t x114 = UINT64_MAX;
	int32_t x115 = -1;

	t22 = (x113<=(x114+(x115*x116)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x117 = 125701U;
	int64_t x119 = -1LL;
	static int32_t t23 = 1158571;

	t23 = (x117<=(x118+(x119*x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 1245U;
	volatile int32_t x126 = -4084668;
	int16_t x127 = 0;

	t24 = (x125<=(x126+(x127*x128)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x130 = INT8_MIN;
	uint32_t x131 = 15044U;
	int8_t x132 = 1;
	static volatile int32_t t25 = 142;

	t25 = (x129<=(x130+(x131*x132)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x137 = 88U;
	int64_t x139 = 14168748609LL;
	volatile uint32_t x140 = 439389537U;

	t26 = (x137<=(x138+(x139*x140)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x142 = 20;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = 0;
	volatile int32_t t27 = 30008;

	t27 = (x141<=(x142+(x143*x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x147 = -1;
	uint16_t x148 = 620U;
	volatile int32_t t28 = 15187;

	t28 = (x145<=(x146+(x147*x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 3U;
	static uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t29 = 7;

	t29 = (x149<=(x150+(x151*x152)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile int32_t t30 = 17;

	t30 = (x157<=(x158+(x159*x160)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = 286730LL;
	uint32_t x162 = 4433U;
	volatile int64_t x164 = INT64_MIN;

	t31 = (x161<=(x162+(x163*x164)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x165 = 1U;
	static volatile uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	uint8_t x168 = UINT8_MAX;

	t32 = (x165<=(x166+(x167*x168)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 5782LLU;
	int64_t x174 = -1LL;
	int64_t x175 = -235438675997966LL;
	static volatile uint64_t x176 = 6871959158020114922LLU;
	int32_t t33 = -14965436;

	t33 = (x173<=(x174+(x175*x176)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 1;

	t34 = (x177<=(x178+(x179*x180)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x185 = 5U;
	volatile int32_t t35 = -24519452;

	t35 = (x185<=(x186+(x187*x188)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x189 = 791332926356476348LLU;
	int8_t x191 = INT8_MIN;
	uint32_t x192 = 0U;
	int32_t t36 = -2;

	t36 = (x189<=(x190+(x191*x192)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 44514383U;
	int32_t t37 = 92301;

	t37 = (x193<=(x194+(x195*x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x197 = -3;
	volatile int16_t x198 = INT16_MAX;
	uint32_t x199 = 3U;
	int16_t x200 = INT16_MIN;
	volatile int32_t t38 = -12616956;

	t38 = (x197<=(x198+(x199*x200)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x201 = INT8_MAX;
	volatile int8_t x202 = INT8_MAX;
	int64_t x203 = -435567964094541231LL;
	uint16_t x204 = 4U;

	t39 = (x201<=(x202+(x203*x204)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x206 = -1;
	uint64_t x207 = 55383LLU;
	static int16_t x208 = 2;
	volatile int32_t t40 = 1;

	t40 = (x205<=(x206+(x207*x208)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x209 = INT16_MIN;
	static uint8_t x211 = 58U;
	volatile uint32_t x212 = UINT32_MAX;
	int32_t t41 = -168;

	t41 = (x209<=(x210+(x211*x212)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = 10453U;
	static volatile uint32_t x215 = 1U;
	uint16_t x216 = 147U;
	static volatile int32_t t42 = 1;

	t42 = (x213<=(x214+(x215*x216)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x221 = INT64_MAX;
	uint16_t x222 = 103U;
	int8_t x223 = -1;
	int32_t x224 = INT32_MAX;

	t43 = (x221<=(x222+(x223*x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t44 = 21;

	t44 = (x225<=(x226+(x227*x228)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x229 = 116330705U;
	uint64_t x230 = 55LLU;
	int16_t x231 = -5528;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t45 = -80;

	t45 = (x229<=(x230+(x231*x232)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x246 = 1455328016373LLU;
	int32_t t46 = -975173;

	t46 = (x245<=(x246+(x247*x248)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x254 = -11752;
	static uint16_t x255 = 6954U;
	static uint32_t x256 = UINT32_MAX;

	t47 = (x253<=(x254+(x255*x256)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x270 = 91LLU;
	uint64_t x271 = 22498922LLU;
	static int32_t x272 = -1;
	int32_t t48 = 7822670;

	t48 = (x269<=(x270+(x271*x272)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x273 = UINT16_MAX;
	uint64_t x275 = 403120108400LLU;
	int16_t x276 = INT16_MIN;
	static int32_t t49 = -1885684;

	t49 = (x273<=(x274+(x275*x276)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x279 = -1LL;
	static uint16_t x280 = 506U;
	int32_t t50 = -50731160;

	t50 = (x277<=(x278+(x279*x280)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x281 = 1U;
	uint64_t x283 = 28948544LLU;
	volatile int32_t x284 = INT32_MAX;
	int32_t t51 = -304010645;

	t51 = (x281<=(x282+(x283*x284)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = INT16_MIN;
	static int16_t x286 = INT16_MAX;
	volatile uint64_t x287 = 32352LLU;

	t52 = (x285<=(x286+(x287*x288)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x293 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t53 = 2609;

	t53 = (x293<=(x294+(x295*x296)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x297 = 314U;
	volatile int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MAX;
	int16_t x300 = 71;
	volatile int32_t t54 = 2386154;

	t54 = (x297<=(x298+(x299*x300)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x301 = 2;
	uint16_t x302 = 12U;
	int32_t x303 = -1;
	volatile int8_t x304 = -10;
	int32_t t55 = 10143372;

	t55 = (x301<=(x302+(x303*x304)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = 3;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = 25792LL;
	uint32_t x308 = 3176U;
	volatile int32_t t56 = -875863;

	t56 = (x305<=(x306+(x307*x308)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = INT64_MIN;
	static int32_t x314 = INT32_MIN;
	int16_t x315 = 82;
	int32_t x316 = 485772;

	t57 = (x313<=(x314+(x315*x316)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x317 = INT64_MIN;
	volatile int64_t x318 = -6206975575403LL;

	t58 = (x317<=(x318+(x319*x320)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = 14;
	int8_t x323 = -1;
	volatile int32_t x324 = 1;
	static volatile int32_t t59 = 63883;

	t59 = (x321<=(x322+(x323*x324)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	uint32_t x327 = 28534820U;

	t60 = (x325<=(x326+(x327*x328)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = INT16_MIN;
	volatile int64_t x330 = 829702900994128LL;
	int16_t x331 = -2;
	volatile int8_t x332 = 2;
	volatile int32_t t61 = -6955;

	t61 = (x329<=(x330+(x331*x332)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x333 = INT64_MIN;
	static uint16_t x334 = UINT16_MAX;
	static uint16_t x336 = 786U;
	volatile int32_t t62 = -152;

	t62 = (x333<=(x334+(x335*x336)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = INT8_MAX;
	uint8_t x342 = 122U;
	int64_t x343 = 60193846LL;
	int16_t x344 = INT16_MIN;
	static int32_t t63 = 15579668;

	t63 = (x341<=(x342+(x343*x344)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x345 = 2;
	int64_t x346 = INT64_MIN;
	static uint32_t x347 = 754257U;
	int16_t x348 = -3;
	int32_t t64 = 170;

	t64 = (x345<=(x346+(x347*x348)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x350 = 12U;
	int16_t x351 = INT16_MAX;
	int64_t x352 = 23112855457313LL;
	static volatile int32_t t65 = 421;

	t65 = (x349<=(x350+(x351*x352)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x353 = UINT32_MAX;
	static int32_t x354 = -1;
	uint64_t x356 = 7966540945506LLU;
	volatile int32_t t66 = -7;

	t66 = (x353<=(x354+(x355*x356)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = 0;
	int32_t t67 = 152630;

	t67 = (x357<=(x358+(x359*x360)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = -1182408LL;
	volatile uint16_t x363 = 46U;
	uint16_t x364 = UINT16_MAX;

	t68 = (x361<=(x362+(x363*x364)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x365 = 7633286LLU;
	uint8_t x367 = 14U;
	int16_t x368 = -1;
	static int32_t t69 = 12;

	t69 = (x365<=(x366+(x367*x368)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x369 = -9;
	int32_t x370 = -1;
	uint8_t x371 = 36U;

	t70 = (x369<=(x370+(x371*x372)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x373 = -1;
	volatile int8_t x375 = -13;
	static volatile int16_t x376 = INT16_MIN;
	volatile int32_t t71 = 16099;

	t71 = (x373<=(x374+(x375*x376)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x383 = 945639622193332LLU;
	static int32_t t72 = -504084673;

	t72 = (x381<=(x382+(x383*x384)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x385 = 747519U;
	uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 89764U;
	static volatile int32_t t73 = -1617;

	t73 = (x385<=(x386+(x387*x388)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x393 = -214LL;
	uint8_t x396 = 52U;
	static int32_t t74 = 32;

	t74 = (x393<=(x394+(x395*x396)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x397 = -1;
	uint64_t x398 = 9279160751861423LLU;
	uint32_t x399 = 823U;
	volatile int8_t x400 = INT8_MIN;
	int32_t t75 = -1;

	t75 = (x397<=(x398+(x399*x400)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 62060LLU;
	static int32_t x404 = INT32_MIN;

	t76 = (x401<=(x402+(x403*x404)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x407 = INT8_MAX;
	int32_t t77 = -586690;

	t77 = (x405<=(x406+(x407*x408)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x409 = -1;
	uint64_t x410 = 61089LLU;
	static int16_t x411 = 17;
	uint8_t x412 = 99U;
	int32_t t78 = 165230;

	t78 = (x409<=(x410+(x411*x412)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x413 = 5114U;
	uint16_t x414 = 1730U;
	int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	int32_t t79 = 34172;

	t79 = (x413<=(x414+(x415*x416)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x418 = UINT16_MAX;
	uint32_t x419 = 10728466U;
	int16_t x420 = 45;
	volatile int32_t t80 = 1;

	t80 = (x417<=(x418+(x419*x420)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x421 = 12U;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MAX;
	static volatile int8_t x424 = 1;

	t81 = (x421<=(x422+(x423*x424)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x426 = -2009LL;
	int32_t x428 = -1;
	volatile int32_t t82 = 69809745;

	t82 = (x425<=(x426+(x427*x428)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x437 = INT32_MIN;
	uint32_t x439 = 23430643U;
	int16_t x440 = INT16_MIN;

	t83 = (x437<=(x438+(x439*x440)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x441 = INT32_MAX;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 77U;
	int8_t x444 = INT8_MIN;
	volatile int32_t t84 = -23;

	t84 = (x441<=(x442+(x443*x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x446 = -1LL;
	int16_t x447 = INT16_MIN;
	volatile int8_t x448 = 0;
	int32_t t85 = 402337931;

	t85 = (x445<=(x446+(x447*x448)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x449 = 2080;
	static volatile int16_t x450 = INT16_MAX;
	volatile int32_t x451 = -70;
	volatile uint8_t x452 = 2U;
	int32_t t86 = -264876148;

	t86 = (x449<=(x450+(x451*x452)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x453 = INT8_MIN;
	uint32_t x454 = UINT32_MAX;
	volatile int8_t x455 = 7;
	uint8_t x456 = 54U;
	volatile int32_t t87 = 180;

	t87 = (x453<=(x454+(x455*x456)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x461 = 803LLU;
	int8_t x462 = INT8_MAX;
	int16_t x463 = INT16_MAX;
	static int16_t x464 = INT16_MIN;
	int32_t t88 = 730;

	t88 = (x461<=(x462+(x463*x464)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x465 = INT32_MIN;
	uint32_t x466 = 1686521602U;
	volatile int32_t x467 = -87064201;
	int32_t t89 = 8310931;

	t89 = (x465<=(x466+(x467*x468)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = INT32_MIN;
	int32_t x470 = -4241;
	static uint16_t x471 = 183U;
	volatile int32_t t90 = -465;

	t90 = (x469<=(x470+(x471*x472)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x477 = 309;
	volatile int8_t x478 = INT8_MIN;
	static volatile uint16_t x479 = UINT16_MAX;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t91 = -217393;

	t91 = (x477<=(x478+(x479*x480)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x481 = INT64_MIN;
	uint8_t x482 = 96U;
	uint8_t x483 = 1U;
	int16_t x484 = -1;
	static int32_t t92 = -57056;

	t92 = (x481<=(x482+(x483*x484)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x489 = INT64_MIN;
	uint64_t x490 = UINT64_MAX;
	volatile int64_t x492 = -1LL;
	volatile int32_t t93 = 459299;

	t93 = (x489<=(x490+(x491*x492)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x497 = -1;
	uint16_t x498 = 24U;
	uint64_t x499 = 26551195735658051LLU;
	int32_t x500 = INT32_MAX;
	int32_t t94 = -65382;

	t94 = (x497<=(x498+(x499*x500)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x502 = -3;
	int16_t x503 = -1;
	volatile uint32_t x504 = 45638U;
	int32_t t95 = 1;

	t95 = (x501<=(x502+(x503*x504)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x508 = 0U;
	volatile int32_t t96 = 18530;

	t96 = (x505<=(x506+(x507*x508)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x510 = 0LL;
	static volatile uint16_t x511 = 4U;
	static int64_t x512 = -1LL;

	t97 = (x509<=(x510+(x511*x512)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x513 = -261249;
	int32_t x516 = 500;
	static volatile int32_t t98 = 230899;

	t98 = (x513<=(x514+(x515*x516)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x521 = UINT32_MAX;
	int16_t x523 = INT16_MIN;
	uint16_t x524 = 24U;
	volatile int32_t t99 = 14;

	t99 = (x521<=(x522+(x523*x524)));

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

