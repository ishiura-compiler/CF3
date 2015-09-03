#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -15347044277348743LL;
int16_t x2 = INT16_MAX;
uint32_t x3 = 57729U;
static int32_t t1 = 2;
static volatile uint16_t x13 = 18U;
int32_t t3 = -740;
uint16_t x23 = 55U;
volatile int32_t t5 = -255782213;
uint8_t x25 = UINT8_MAX;
uint64_t x26 = UINT64_MAX;
int32_t x31 = -1;
int32_t t7 = -2419;
static int8_t x36 = 9;
volatile int8_t x39 = -1;
int64_t x43 = 0LL;
static volatile int32_t t12 = 256659;
int64_t x58 = -1LL;
int16_t x67 = -127;
int32_t t17 = -2977;
static uint8_t x92 = 1U;
uint64_t x104 = 0LLU;
uint8_t x113 = 1U;
int32_t t26 = -29668424;
uint32_t x120 = 9333757U;
uint64_t x122 = UINT64_MAX;
int64_t x124 = -1LL;
static int32_t t28 = -22095883;
uint8_t x127 = 8U;
static volatile int32_t x139 = -650205;
uint8_t x140 = 1U;
int32_t x147 = INT32_MAX;
static int64_t x151 = INT64_MAX;
static volatile int32_t t35 = 0;
int64_t x154 = -271385911427881854LL;
int64_t x156 = INT64_MIN;
int32_t t36 = -6008;
volatile int8_t x157 = INT8_MIN;
int8_t x163 = INT8_MIN;
int32_t x164 = INT32_MIN;
int16_t x171 = -1;
volatile int32_t t40 = -161268;
int64_t x173 = -1LL;
static uint16_t x178 = UINT16_MAX;
int32_t x179 = INT32_MAX;
volatile int32_t t45 = -98960;
int64_t x194 = INT64_MIN;
static int32_t x201 = -1;
int16_t x203 = -5;
int64_t x204 = INT64_MIN;
int8_t x212 = 0;
static volatile int32_t t50 = -13983383;
int8_t x215 = -1;
volatile int16_t x228 = INT16_MAX;
uint64_t x232 = 360898LLU;
int16_t x235 = INT16_MIN;
uint32_t x237 = 3768U;
int32_t x243 = INT32_MAX;
volatile int32_t t60 = -3;
int16_t x253 = 2633;
uint8_t x254 = 7U;
static int16_t x256 = -1;
int32_t x260 = 7272675;
volatile int32_t t62 = -213;
volatile int8_t x287 = -1;
uint8_t x291 = UINT8_MAX;
volatile int32_t x293 = -584547647;
int32_t x295 = 54146;
static int32_t x296 = INT32_MAX;
volatile int8_t x300 = -1;
static int16_t x308 = INT16_MIN;
int16_t x310 = INT16_MIN;
int32_t x318 = -1;
volatile int64_t x323 = -1726901180201LL;
int16_t x336 = 535;
volatile int32_t t80 = 363;
int8_t x345 = INT8_MIN;
static int32_t x354 = INT32_MIN;
volatile int32_t x358 = 4;
int8_t x362 = INT8_MIN;
volatile int32_t t87 = 1;
int32_t x368 = INT32_MIN;
static int32_t x370 = INT32_MAX;
volatile int64_t x374 = -1LL;
volatile uint16_t x379 = 704U;
volatile int32_t t92 = -14905;
uint8_t x389 = 6U;
volatile uint16_t x393 = 14331U;
volatile uint64_t x394 = UINT64_MAX;
int64_t x401 = 459768094022373695LL;
int32_t x403 = INT32_MAX;
volatile int32_t t97 = 948162;
uint32_t x405 = 33401U;


void f0(void) {
	uint16_t x4 = 5030U;
	int32_t t0 = 511783629;

	t0 = ((x1%x2)<=(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = 14880756583LLU;
	int16_t x7 = 28;
	uint32_t x8 = 5483U;

	t1 = ((x5%x6)<=(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 22069U;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 17U;
	volatile uint32_t x12 = 525452915U;
	int32_t t2 = 118;

	t2 = ((x9%x10)<=(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -4053;
	int8_t x15 = INT8_MIN;
	volatile int32_t x16 = 66;

	t3 = ((x13%x14)<=(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -57;
	static int8_t x18 = -3;
	static volatile uint16_t x19 = UINT16_MAX;
	static int64_t x20 = -1LL;
	int32_t t4 = 2848;

	t4 = ((x17%x18)<=(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static volatile int8_t x22 = 2;
	volatile uint32_t x24 = 42201U;

	t5 = ((x21%x22)<=(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x27 = 2U;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 99064;

	t6 = ((x25%x26)<=(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 342;
	int64_t x30 = INT64_MIN;
	volatile int8_t x32 = INT8_MAX;

	t7 = ((x29%x30)<=(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 191458717876127LL;
	uint32_t x34 = 231151U;
	static uint64_t x35 = 3808037109235969LLU;
	volatile int32_t t8 = 1749796;

	t8 = ((x33%x34)<=(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1629053;
	int16_t x38 = INT16_MIN;
	volatile uint8_t x40 = 4U;
	int32_t t9 = 15;

	t9 = ((x37%x38)<=(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	static uint16_t x42 = 2U;
	uint64_t x44 = 84400859377078LLU;
	volatile int32_t t10 = -698360;

	t10 = ((x41%x42)<=(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	int16_t x46 = -1;
	int64_t x47 = -59815251537375330LL;
	int16_t x48 = 218;
	volatile int32_t t11 = -1402611;

	t11 = ((x45%x46)<=(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = -867231537;
	int32_t x55 = -1;
	static int16_t x56 = -7738;

	t12 = ((x53%x54)<=(x55&x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -56;
	int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -1;

	t13 = ((x57%x58)<=(x59&x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -491;
	static uint64_t x62 = 3118052LLU;
	int64_t x63 = INT64_MIN;
	volatile uint32_t x64 = 62559U;
	int32_t t14 = 20964;

	t14 = ((x61%x62)<=(x63&x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	int64_t x68 = INT64_MAX;
	int32_t t15 = -14806217;

	t15 = ((x65%x66)<=(x67&x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = 43582616713526580LLU;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = 5402223299980LLU;
	static volatile uint8_t x72 = 6U;
	int32_t t16 = -1614934;

	t16 = ((x69%x70)<=(x71&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = 2262;
	int16_t x74 = INT16_MIN;
	static uint8_t x75 = UINT8_MAX;
	int64_t x76 = -1LL;

	t17 = ((x73%x74)<=(x75&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 12242U;
	uint64_t x78 = UINT64_MAX;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;
	int32_t t18 = -1;

	t18 = ((x77%x78)<=(x79&x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = 795390902323518647LL;
	static uint8_t x82 = UINT8_MAX;
	volatile int16_t x83 = -1;
	uint8_t x84 = 0U;
	int32_t t19 = -5;

	t19 = ((x81%x82)<=(x83&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	int16_t x86 = INT16_MIN;
	int32_t x87 = -33737325;
	static int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 78937144;

	t20 = ((x85%x86)<=(x87&x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = UINT64_MAX;
	static int64_t x90 = 4203899857444191LL;
	int16_t x91 = -1;
	int32_t t21 = 1;

	t21 = ((x89%x90)<=(x91&x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MAX;
	static uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MAX;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t22 = -145895;

	t22 = ((x97%x98)<=(x99&x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 15U;
	int64_t x103 = -1LL;
	int32_t t23 = 327668;

	t23 = ((x101%x102)<=(x103&x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 309819U;
	uint32_t x106 = 93749U;
	int64_t x107 = -1LL;
	int32_t x108 = INT32_MIN;
	static int32_t t24 = -1714;

	t24 = ((x105%x106)<=(x107&x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = 63;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = INT32_MIN;
	int32_t x112 = 4121;
	int32_t t25 = -813666;

	t25 = ((x109%x110)<=(x111&x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;

	t26 = ((x113%x114)<=(x115&x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 0U;
	int32_t x118 = -1;
	int64_t x119 = -70813197LL;
	volatile int32_t t27 = -25119860;

	t27 = ((x117%x118)<=(x119&x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 69147164LLU;
	uint16_t x123 = UINT16_MAX;

	t28 = ((x121%x122)<=(x123&x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 568956562245768LLU;
	static uint8_t x126 = 16U;
	static volatile int32_t x128 = INT32_MIN;
	volatile int32_t t29 = 706136134;

	t29 = ((x125%x126)<=(x127&x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -10391793063781969LL;
	int64_t x130 = INT64_MIN;
	int32_t x131 = 35002727;
	uint32_t x132 = UINT32_MAX;
	static int32_t t30 = -1109314;

	t30 = ((x129%x130)<=(x131&x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x133 = 26U;
	volatile int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	volatile int64_t x136 = INT64_MAX;
	static int32_t t31 = -26;

	t31 = ((x133%x134)<=(x135&x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = -1;
	static int32_t t32 = 444681715;

	t32 = ((x137%x138)<=(x139&x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 161614U;
	int8_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	uint16_t x144 = 63U;
	static int32_t t33 = -203;

	t33 = ((x141%x142)<=(x143&x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 348309883LLU;
	volatile int32_t x146 = INT32_MIN;
	uint8_t x148 = 42U;
	static int32_t t34 = 12477;

	t34 = ((x145%x146)<=(x147&x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x150 = UINT32_MAX;
	int8_t x152 = INT8_MAX;

	t35 = ((x149%x150)<=(x151&x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 42U;
	int32_t x155 = -1;

	t36 = ((x153%x154)<=(x155&x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = -911;
	int32_t t37 = -4;

	t37 = ((x157%x158)<=(x159&x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = -1;
	static int64_t x162 = 9678546562087122LL;
	int32_t t38 = -25381394;

	t38 = ((x161%x162)<=(x163&x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = -1;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MAX;
	static volatile int32_t t39 = -2277;

	t39 = ((x165%x166)<=(x167&x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = INT16_MAX;
	int32_t x172 = INT32_MIN;

	t40 = ((x169%x170)<=(x171&x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = 14252;
	int32_t x175 = -1;
	volatile int16_t x176 = -1;
	volatile int32_t t41 = 163166;

	t41 = ((x173%x174)<=(x175&x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	volatile int8_t x180 = 29;
	static volatile int32_t t42 = 7;

	t42 = ((x177%x178)<=(x179&x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = UINT32_MAX;
	uint64_t x182 = 811214525015796307LLU;
	uint64_t x183 = 26838373493720LLU;
	uint16_t x184 = 13878U;
	volatile int32_t t43 = 30814925;

	t43 = ((x181%x182)<=(x183&x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = 1481U;
	int8_t x187 = -11;
	static int64_t x188 = 49485933LL;
	volatile int32_t t44 = -1;

	t44 = ((x185%x186)<=(x187&x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = INT64_MAX;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MIN;

	t45 = ((x189%x190)<=(x191&x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = UINT16_MAX;
	uint64_t x195 = UINT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t46 = 0;

	t46 = ((x193%x194)<=(x195&x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x197 = 57;
	uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 0U;
	int32_t x200 = INT32_MIN;
	int32_t t47 = 1;

	t47 = ((x197%x198)<=(x199&x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x202 = 1U;
	volatile int32_t t48 = 0;

	t48 = ((x201%x202)<=(x203&x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static int64_t x206 = 2333538369079129663LL;
	static uint8_t x207 = 18U;
	uint64_t x208 = 24LLU;
	int32_t t49 = 52;

	t49 = ((x205%x206)<=(x207&x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = 58;
	int16_t x210 = INT16_MAX;
	static uint8_t x211 = 72U;

	t50 = ((x209%x210)<=(x211&x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = -2;
	volatile uint32_t x214 = 44U;
	static int64_t x216 = INT64_MAX;
	volatile int32_t t51 = 71;

	t51 = ((x213%x214)<=(x215&x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -3063;
	int64_t x218 = INT64_MIN;
	uint32_t x219 = 60977U;
	volatile uint64_t x220 = 7437611554LLU;
	volatile int32_t t52 = -27050634;

	t52 = ((x217%x218)<=(x219&x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MAX;
	static int8_t x223 = INT8_MIN;
	volatile int32_t x224 = 61979;
	volatile int32_t t53 = 466182416;

	t53 = ((x221%x222)<=(x223&x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	volatile int32_t t54 = -3;

	t54 = ((x225%x226)<=(x227&x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = 8U;
	int8_t x230 = INT8_MAX;
	int8_t x231 = INT8_MAX;
	int32_t t55 = 3140;

	t55 = ((x229%x230)<=(x231&x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int64_t x234 = INT64_MAX;
	volatile uint16_t x236 = 15U;
	int32_t t56 = -261726211;

	t56 = ((x233%x234)<=(x235&x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 7211U;
	int32_t t57 = 32763;

	t57 = ((x237%x238)<=(x239&x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	volatile int16_t x244 = -1;
	volatile int32_t t58 = -2079;

	t58 = ((x241%x242)<=(x243&x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 24269U;
	volatile int64_t x246 = 52940183397440251LL;
	volatile int64_t x247 = 2484751LL;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t59 = 48994132;

	t59 = ((x245%x246)<=(x247&x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = UINT16_MAX;
	static int64_t x250 = INT64_MIN;
	volatile int8_t x251 = INT8_MIN;
	static uint16_t x252 = 2347U;

	t60 = ((x249%x250)<=(x251&x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x255 = UINT64_MAX;
	int32_t t61 = -22209;

	t61 = ((x253%x254)<=(x255&x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	static int64_t x259 = -127768313810748019LL;

	t62 = ((x257%x258)<=(x259&x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MAX;
	static int8_t x262 = -1;
	volatile int8_t x263 = INT8_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t63 = 296184586;

	t63 = ((x261%x262)<=(x263&x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	volatile uint8_t x267 = 2U;
	int32_t x268 = -1;
	volatile int32_t t64 = 1;

	t64 = ((x265%x266)<=(x267&x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = -72347650LL;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 7917453616396884LLU;
	int64_t x276 = INT64_MIN;
	static int32_t t65 = 476990;

	t65 = ((x273%x274)<=(x275&x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = UINT64_MAX;
	uint64_t x279 = 7186LLU;
	volatile uint16_t x280 = UINT16_MAX;
	volatile int32_t t66 = 2479534;

	t66 = ((x277%x278)<=(x279&x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = 0;
	volatile int8_t x282 = INT8_MAX;
	static int8_t x283 = -1;
	uint32_t x284 = 254183U;
	static volatile int32_t t67 = 909632;

	t67 = ((x281%x282)<=(x283&x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int64_t x286 = INT64_MIN;
	int16_t x288 = 3;
	volatile int32_t t68 = -63620;

	t68 = ((x285%x286)<=(x287&x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = -269037639195LL;
	static int16_t x290 = 4966;
	int8_t x292 = 0;
	static int32_t t69 = 27694111;

	t69 = ((x289%x290)<=(x291&x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x294 = INT16_MAX;
	int32_t t70 = -31335776;

	t70 = ((x293%x294)<=(x295&x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = -1;
	uint16_t x298 = 2U;
	int64_t x299 = -1391307602132LL;
	static int32_t t71 = 6489299;

	t71 = ((x297%x298)<=(x299&x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 11388696U;
	int16_t x302 = INT16_MIN;
	int64_t x303 = -102LL;
	uint64_t x304 = 493882080LLU;
	int32_t t72 = -161686;

	t72 = ((x301%x302)<=(x303&x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x305 = -1;
	int64_t x306 = -45353780258437933LL;
	uint64_t x307 = UINT64_MAX;
	volatile int32_t t73 = -843631;

	t73 = ((x305%x306)<=(x307&x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x309 = UINT32_MAX;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = INT64_MIN;
	volatile int32_t t74 = 229814;

	t74 = ((x309%x310)<=(x311&x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x313 = -1LL;
	int64_t x314 = -31147LL;
	int16_t x315 = -3169;
	volatile int8_t x316 = INT8_MIN;
	int32_t t75 = 126;

	t75 = ((x313%x314)<=(x315&x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x317 = -1;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = 10199U;
	volatile int32_t t76 = -22384;

	t76 = ((x317%x318)<=(x319&x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int32_t x324 = INT32_MAX;
	int32_t t77 = 3;

	t77 = ((x321%x322)<=(x323&x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MAX;
	int16_t x327 = -1;
	int32_t x328 = 183113;
	static volatile int32_t t78 = 329;

	t78 = ((x325%x326)<=(x327&x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = INT32_MIN;
	static int32_t x330 = INT32_MAX;
	volatile uint8_t x331 = 6U;
	uint64_t x332 = 6196960LLU;
	volatile int32_t t79 = -8;

	t79 = ((x329%x330)<=(x331&x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = -7;
	static int16_t x334 = INT16_MIN;
	int8_t x335 = -3;

	t80 = ((x333%x334)<=(x335&x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = -1;
	int64_t x338 = -32386673607997LL;
	volatile int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t81 = 14580;

	t81 = ((x337%x338)<=(x339&x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 349LLU;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	uint32_t x344 = 21182U;
	volatile int32_t t82 = 21518395;

	t82 = ((x341%x342)<=(x343&x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x346 = 48U;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t83 = 262773693;

	t83 = ((x345%x346)<=(x347&x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x349 = INT16_MAX;
	static volatile int8_t x350 = 1;
	int16_t x351 = -1;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t84 = -6;

	t84 = ((x349%x350)<=(x351&x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	int32_t x356 = -1;
	static int32_t t85 = -9;

	t85 = ((x353%x354)<=(x355&x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = 3;
	int8_t x359 = -1;
	int16_t x360 = -13810;
	volatile int32_t t86 = -2714;

	t86 = ((x357%x358)<=(x359&x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = 500377786U;
	static volatile int64_t x363 = INT64_MAX;
	volatile uint64_t x364 = UINT64_MAX;

	t87 = ((x361%x362)<=(x363&x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = 182LLU;
	uint64_t x366 = 74344797LLU;
	volatile uint8_t x367 = 16U;
	volatile int32_t t88 = -25615;

	t88 = ((x365%x366)<=(x367&x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	static int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;
	static int32_t t89 = -89;

	t89 = ((x369%x370)<=(x371&x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = -1;
	volatile int8_t x375 = -41;
	static volatile int8_t x376 = INT8_MIN;
	int32_t t90 = -19;

	t90 = ((x373%x374)<=(x375&x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x377 = -247;
	int8_t x378 = INT8_MAX;
	uint8_t x380 = 3U;
	int32_t t91 = 5;

	t91 = ((x377%x378)<=(x379&x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = 14U;
	int32_t x382 = INT32_MIN;
	static int8_t x383 = INT8_MIN;
	static int64_t x384 = INT64_MIN;

	t92 = ((x381%x382)<=(x383&x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x385 = -1;
	int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;
	int32_t t93 = -131;

	t93 = ((x385%x386)<=(x387&x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 1890U;
	static volatile int32_t t94 = 910132031;

	t94 = ((x389%x390)<=(x391&x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x395 = -46;
	static uint64_t x396 = 326166220506764LLU;
	int32_t t95 = 41400;

	t95 = ((x393%x394)<=(x395&x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	int16_t x400 = -1;
	int32_t t96 = -124410971;

	t96 = ((x397%x398)<=(x399&x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x402 = 1U;
	static volatile int8_t x404 = INT8_MAX;

	t97 = ((x401%x402)<=(x403&x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x406 = -37;
	int32_t x407 = -22905177;
	static uint16_t x408 = 4679U;
	int32_t t98 = 0;

	t98 = ((x405%x406)<=(x407&x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -3LL;
	int32_t x410 = -1;
	int64_t x411 = INT64_MIN;
	uint32_t x412 = 1978U;
	volatile int32_t t99 = -53607569;

	t99 = ((x409%x410)<=(x411&x412));

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

