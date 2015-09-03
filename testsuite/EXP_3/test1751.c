#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 239196;
static volatile int32_t t1 = -185971;
static uint32_t x14 = 3290165U;
static int8_t x15 = INT8_MIN;
volatile int64_t x16 = INT64_MIN;
int16_t x18 = INT16_MIN;
static int32_t t5 = -1517;
volatile int32_t t7 = 2459;
int32_t x33 = -3730972;
static volatile uint32_t x42 = 1152U;
int16_t x43 = -96;
volatile int32_t t10 = -1;
int8_t x45 = INT8_MAX;
uint8_t x54 = 18U;
int64_t x56 = 123583546LL;
volatile uint32_t x59 = 1522U;
static int64_t x64 = INT64_MAX;
static uint64_t x65 = 2LLU;
static int32_t x69 = 6675078;
uint8_t x79 = 3U;
uint64_t x86 = 17177729263329507LLU;
int16_t x87 = INT16_MIN;
static volatile int32_t t20 = 0;
static int16_t x91 = INT16_MAX;
static volatile int32_t t21 = -7039;
uint32_t x95 = UINT32_MAX;
int16_t x96 = -1;
uint16_t x97 = UINT16_MAX;
uint32_t x107 = 2133926698U;
uint8_t x111 = UINT8_MAX;
static uint32_t x112 = 64U;
volatile int32_t x117 = INT32_MIN;
int64_t x120 = -1LL;
int32_t t29 = -3915350;
uint16_t x127 = 194U;
static uint32_t x131 = 3180U;
static int16_t x137 = INT16_MIN;
int32_t x146 = -14145;
int32_t t36 = 131206967;
int16_t x158 = -1;
volatile int16_t x163 = INT16_MAX;
static uint64_t x166 = 70577414147LLU;
int64_t x169 = INT64_MAX;
volatile int64_t x173 = 10LL;
int16_t x174 = 3483;
int32_t x176 = -1;
volatile int32_t t43 = -67990542;
uint32_t x182 = 2558809U;
int16_t x184 = -1;
static volatile int32_t t44 = 439;
int32_t x191 = INT32_MAX;
int8_t x192 = 1;
int32_t t46 = 200940413;
static uint16_t x195 = 532U;
int32_t t48 = -353262;
int8_t x202 = 2;
int32_t x209 = INT32_MAX;
static int8_t x217 = INT8_MIN;
static uint32_t x224 = 127440U;
static int64_t x226 = -6LL;
static volatile int32_t t55 = 21306;
int16_t x234 = -1;
static int16_t x236 = -1;
int16_t x241 = 809;
int32_t x243 = -58565;
volatile int16_t x247 = 22;
volatile int64_t x249 = -26486116545493935LL;
uint16_t x261 = 311U;
static int32_t x273 = 970;
uint8_t x275 = 8U;
int16_t x278 = INT16_MIN;
static uint64_t x280 = UINT64_MAX;
uint64_t x282 = 12545417805LLU;
int32_t x285 = INT32_MIN;
volatile int16_t x286 = INT16_MIN;
static volatile int32_t t69 = -20220;
int64_t x289 = -1LL;
int64_t x290 = -1LL;
int16_t x295 = -8;
volatile uint16_t x296 = 3U;
volatile int32_t t71 = -4;
uint32_t x304 = 776622444U;
volatile int8_t x313 = 9;
volatile uint32_t x317 = 15112U;
volatile int32_t t76 = 542;
volatile int8_t x322 = INT8_MIN;
volatile uint16_t x335 = 5U;
uint64_t x352 = 2018521LLU;
int32_t x356 = INT32_MIN;
static int32_t t85 = -3382742;
volatile int16_t x363 = 2838;
volatile uint8_t x367 = UINT8_MAX;
int16_t x368 = -32;
static int32_t x373 = 141481;
static volatile int8_t x374 = -19;
int64_t x376 = INT64_MAX;
int32_t x380 = 1;
int8_t x389 = 6;
static uint64_t x393 = 109268474394LLU;
uint16_t x394 = 128U;
volatile int32_t t95 = -424100082;
int16_t x400 = INT16_MAX;
static volatile uint8_t x408 = 0U;
volatile int32_t t99 = -47650;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int64_t x2 = INT64_MIN;
	volatile int32_t x3 = -1;
	int16_t x4 = INT16_MIN;

	t0 = ((x1%x2)<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 12LLU;
	int64_t x7 = INT64_MAX;
	volatile int32_t x8 = INT32_MIN;

	t1 = ((x5%x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 45;
	static int16_t x10 = INT16_MIN;
	static int64_t x11 = INT64_MIN;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 879901959;

	t2 = ((x9%x10)<(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t t3 = -22160838;

	t3 = ((x13%x14)<(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -22;
	static int32_t x19 = 0;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 5;

	t4 = ((x17%x18)<(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = 3978049038LLU;
	static volatile int64_t x23 = INT64_MAX;
	uint64_t x24 = 520750LLU;

	t5 = ((x21%x22)<(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 39;
	int64_t x26 = INT64_MAX;
	uint32_t x27 = 17U;
	int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = 42573;

	t6 = ((x25%x26)<(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static int64_t x30 = 498374097411LL;
	uint64_t x31 = UINT64_MAX;
	uint32_t x32 = 72547U;

	t7 = ((x29%x30)<(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 475096;
	int32_t x35 = -1;
	uint8_t x36 = 4U;
	int32_t t8 = -9233;

	t8 = ((x33%x34)<(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 15LLU;
	int64_t x38 = -1LL;
	static uint64_t x39 = UINT64_MAX;
	int8_t x40 = -1;
	static int32_t t9 = 152851262;

	t9 = ((x37%x38)<(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -8;
	static int16_t x44 = -12748;

	t10 = ((x41%x42)<(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = 26;
	int8_t x47 = 2;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -262;

	t11 = ((x45%x46)<(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	volatile int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	static uint64_t x52 = UINT64_MAX;
	int32_t t12 = -3929564;

	t12 = ((x49%x50)<(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1;
	int64_t x55 = -1LL;
	static volatile int32_t t13 = -89334476;

	t13 = ((x53%x54)<(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	static uint32_t x58 = UINT32_MAX;
	int32_t x60 = 176;
	int32_t t14 = 45;

	t14 = ((x57%x58)<(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int8_t x62 = 62;
	static uint8_t x63 = 2U;
	int32_t t15 = -40;

	t15 = ((x61%x62)<(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = UINT8_MAX;
	uint32_t x67 = 282968U;
	static volatile int64_t x68 = -1LL;
	static int32_t t16 = -6;

	t16 = ((x65%x66)<(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = UINT8_MAX;
	static volatile uint8_t x71 = 3U;
	uint32_t x72 = UINT32_MAX;
	int32_t t17 = -38;

	t17 = ((x69%x70)<(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 1;
	int32_t x78 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t18 = 47580;

	t18 = ((x77%x78)<(x79&x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -91890261015LL;
	static uint8_t x82 = 78U;
	volatile int16_t x83 = 4815;
	volatile int32_t x84 = -115;
	static int32_t t19 = -361;

	t19 = ((x81%x82)<(x83&x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	volatile int64_t x88 = -1LL;

	t20 = ((x85%x86)<(x87&x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x89 = UINT32_MAX;
	uint32_t x90 = 1821U;
	uint64_t x92 = 1449085533LLU;

	t21 = ((x89%x90)<(x91&x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	volatile int32_t t22 = 36;

	t22 = ((x93%x94)<(x95&x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = 10;
	volatile int16_t x99 = -1;
	int8_t x100 = INT8_MIN;
	int32_t t23 = 1019124;

	t23 = ((x97%x98)<(x99&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MAX;
	uint64_t x102 = UINT64_MAX;
	static volatile int64_t x103 = 3378416451727475802LL;
	int32_t x104 = INT32_MAX;
	static volatile int32_t t24 = -6567;

	t24 = ((x101%x102)<(x103&x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MAX;
	int32_t x106 = INT32_MIN;
	uint16_t x108 = UINT16_MAX;
	static volatile int32_t t25 = 9;

	t25 = ((x105%x106)<(x107&x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 2;
	static volatile uint64_t x110 = 22255090LLU;
	static volatile int32_t t26 = 334189;

	t26 = ((x109%x110)<(x111&x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MIN;
	volatile int32_t t27 = 4999947;

	t27 = ((x113%x114)<(x115&x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = -6;
	int64_t x119 = 275526LL;
	volatile int32_t t28 = -234049;

	t28 = ((x117%x118)<(x119&x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int64_t x122 = INT64_MAX;
	int16_t x123 = -27;
	volatile int32_t x124 = INT32_MAX;

	t29 = ((x121%x122)<(x123&x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	uint32_t x128 = 8736U;
	static volatile int32_t t30 = -29529258;

	t30 = ((x125%x126)<(x127&x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = -15;
	uint32_t x130 = 105763U;
	uint8_t x132 = 0U;
	int32_t t31 = -211980;

	t31 = ((x129%x130)<(x131&x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = 23U;
	static uint64_t x134 = 1260081641591618LLU;
	static int16_t x135 = INT16_MIN;
	volatile uint64_t x136 = UINT64_MAX;
	static int32_t t32 = -39286097;

	t32 = ((x133%x134)<(x135&x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x138 = 234285401LLU;
	volatile uint64_t x139 = 3731398997LLU;
	int32_t x140 = INT32_MIN;
	int32_t t33 = 814232;

	t33 = ((x137%x138)<(x139&x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = 426360943650380LLU;
	int32_t x143 = INT32_MAX;
	int16_t x144 = INT16_MAX;
	static volatile int32_t t34 = 116561271;

	t34 = ((x141%x142)<(x143&x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	static int16_t x147 = 70;
	int64_t x148 = INT64_MIN;
	int32_t t35 = 21678804;

	t35 = ((x145%x146)<(x147&x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	static int16_t x150 = -1;
	int16_t x151 = INT16_MAX;
	int8_t x152 = 0;

	t36 = ((x149%x150)<(x151&x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 63541U;
	int8_t x154 = INT8_MIN;
	volatile int64_t x155 = INT64_MIN;
	volatile int16_t x156 = INT16_MIN;
	static volatile int32_t t37 = 65394;

	t37 = ((x153%x154)<(x155&x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int64_t x159 = 186444713338207LL;
	volatile int16_t x160 = INT16_MAX;
	int32_t t38 = 8197392;

	t38 = ((x157%x158)<(x159&x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MAX;
	int16_t x164 = -1;
	int32_t t39 = -1531592;

	t39 = ((x161%x162)<(x163&x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -227114LL;
	int8_t x167 = INT8_MAX;
	uint16_t x168 = 2U;
	int32_t t40 = -129986750;

	t40 = ((x165%x166)<(x167&x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x170 = 6U;
	uint64_t x171 = 436397840LLU;
	int8_t x172 = INT8_MIN;
	volatile int32_t t41 = 1622;

	t41 = ((x169%x170)<(x171&x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x175 = INT16_MAX;
	int32_t t42 = -128355;

	t42 = ((x173%x174)<(x175&x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 176688100U;
	uint16_t x178 = 13768U;
	uint8_t x179 = 7U;
	int32_t x180 = -784939;

	t43 = ((x177%x178)<(x179&x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	static int32_t x183 = INT32_MIN;

	t44 = ((x181%x182)<(x183&x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 35368560606389635LLU;
	int8_t x187 = -1;
	int8_t x188 = 30;
	int32_t t45 = -710863;

	t45 = ((x185%x186)<(x187&x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 49;
	volatile int8_t x190 = INT8_MIN;

	t46 = ((x189%x190)<(x191&x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 197390635;
	volatile uint16_t x194 = 3624U;
	int8_t x196 = -7;
	volatile int32_t t47 = -222121336;

	t47 = ((x193%x194)<(x195&x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 0U;
	int64_t x200 = -1LL;

	t48 = ((x197%x198)<(x199&x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = 141111435LL;
	int32_t x203 = -1;
	int32_t x204 = -1;
	int32_t t49 = -2596;

	t49 = ((x201%x202)<(x203&x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x210 = 272228U;
	static int64_t x211 = -1LL;
	static int8_t x212 = 1;
	volatile int32_t t50 = 21550;

	t50 = ((x209%x210)<(x211&x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = UINT8_MAX;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MAX;
	int32_t x216 = 129717;
	volatile int32_t t51 = -17;

	t51 = ((x213%x214)<(x215&x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = INT32_MIN;
	int32_t x219 = 51516831;
	int8_t x220 = 0;
	volatile int32_t t52 = -745683321;

	t52 = ((x217%x218)<(x219&x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = 138U;
	int16_t x222 = -1;
	static int32_t x223 = INT32_MIN;
	int32_t t53 = -1;

	t53 = ((x221%x222)<(x223&x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = 47LL;
	int32_t x227 = INT32_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t54 = -873937856;

	t54 = ((x225%x226)<(x227&x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	static volatile int32_t x232 = -1;

	t55 = ((x229%x230)<(x231&x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	uint32_t x235 = 197959U;
	volatile int32_t t56 = 196;

	t56 = ((x233%x234)<(x235&x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = UINT32_MAX;
	static int16_t x238 = INT16_MIN;
	uint16_t x239 = 164U;
	volatile int64_t x240 = -1LL;
	int32_t t57 = 10;

	t57 = ((x237%x238)<(x239&x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t58 = -1226;

	t58 = ((x241%x242)<(x243&x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 399819254559LLU;
	volatile uint32_t x246 = UINT32_MAX;
	static int16_t x248 = -281;
	volatile int32_t t59 = -13524;

	t59 = ((x245%x246)<(x247&x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x250 = INT64_MIN;
	static int32_t x251 = -1;
	volatile uint64_t x252 = UINT64_MAX;
	volatile int32_t t60 = 2223106;

	t60 = ((x249%x250)<(x251&x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MIN;
	static int16_t x255 = INT16_MIN;
	int32_t x256 = 3;
	static volatile int32_t t61 = -40;

	t61 = ((x253%x254)<(x255&x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x258 = -61;
	volatile int32_t x259 = INT32_MIN;
	static volatile int32_t x260 = -1;
	int32_t t62 = 1113;

	t62 = ((x257%x258)<(x259&x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x262 = 3134583493LLU;
	static uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t63 = 19999549;

	t63 = ((x261%x262)<(x263&x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	static int32_t x266 = INT32_MIN;
	int16_t x267 = 233;
	int16_t x268 = -132;
	volatile int32_t t64 = -1924;

	t64 = ((x265%x266)<(x267&x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 2U;
	volatile int64_t x270 = 1LL;
	volatile int64_t x271 = INT64_MAX;
	int8_t x272 = 14;
	int32_t t65 = 44;

	t65 = ((x269%x270)<(x271&x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x274 = -35475;
	uint16_t x276 = 4202U;
	int32_t t66 = -1287;

	t66 = ((x273%x274)<(x275&x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = INT16_MAX;
	uint8_t x279 = 1U;
	int32_t t67 = 6560;

	t67 = ((x277%x278)<(x279&x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x283 = 21620LL;
	static uint64_t x284 = 8LLU;
	int32_t t68 = -14928;

	t68 = ((x281%x282)<(x283&x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x287 = 25090U;
	volatile int32_t x288 = 28262870;

	t69 = ((x285%x286)<(x287&x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x291 = 795574036348541309LLU;
	static int8_t x292 = INT8_MIN;
	int32_t t70 = 3;

	t70 = ((x289%x290)<(x291&x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -7;
	int32_t x294 = INT32_MAX;

	t71 = ((x293%x294)<(x295&x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	int16_t x298 = INT16_MAX;
	static uint16_t x299 = 29014U;
	uint8_t x300 = 11U;
	static int32_t t72 = 151;

	t72 = ((x297%x298)<(x299&x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x301 = 944257254U;
	static int8_t x302 = INT8_MAX;
	uint32_t x303 = 0U;
	int32_t t73 = 5277055;

	t73 = ((x301%x302)<(x303&x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	volatile uint32_t x307 = 1034285340U;
	static int64_t x308 = -1159417744792634959LL;
	int32_t t74 = -13373;

	t74 = ((x305%x306)<(x307&x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x314 = 1;
	int8_t x315 = INT8_MIN;
	static volatile int64_t x316 = -48LL;
	static volatile int32_t t75 = 457;

	t75 = ((x313%x314)<(x315&x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x318 = INT16_MIN;
	volatile int16_t x319 = -871;
	int16_t x320 = -5;

	t76 = ((x317%x318)<(x319&x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -105542;
	int64_t x323 = -1LL;
	volatile uint32_t x324 = 5701U;
	int32_t t77 = 703;

	t77 = ((x321%x322)<(x323&x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = 0;
	uint16_t x326 = 3U;
	volatile int16_t x327 = INT16_MAX;
	int16_t x328 = -1182;
	static volatile int32_t t78 = -52747;

	t78 = ((x325%x326)<(x327&x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 5177131592135624LLU;
	int32_t x330 = INT32_MIN;
	volatile int64_t x331 = INT64_MIN;
	int64_t x332 = -676016LL;
	volatile int32_t t79 = -20415;

	t79 = ((x329%x330)<(x331&x332));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t80 = 518327;

	t80 = ((x333%x334)<(x335&x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MAX;
	int64_t x340 = 17544811537LL;
	int32_t t81 = 509232210;

	t81 = ((x337%x338)<(x339&x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x341 = -1LL;
	int8_t x342 = -58;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = 8;
	volatile int32_t t82 = -1800;

	t82 = ((x341%x342)<(x343&x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 427U;
	volatile uint64_t x346 = 2LLU;
	static volatile int32_t x347 = INT32_MIN;
	int16_t x348 = -1;
	volatile int32_t t83 = 13;

	t83 = ((x345%x346)<(x347&x348));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x350 = 2642091U;
	int64_t x351 = -1LL;
	int32_t t84 = 36;

	t84 = ((x349%x350)<(x351&x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x353 = INT64_MIN;
	uint64_t x354 = 74581400005739LLU;
	int32_t x355 = INT32_MIN;

	t85 = ((x353%x354)<(x355&x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t x360 = 56LLU;
	volatile int32_t t86 = 110841;

	t86 = ((x357%x358)<(x359&x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x361 = -1;
	uint64_t x362 = 50317LLU;
	int16_t x364 = -4646;
	volatile int32_t t87 = 63829374;

	t87 = ((x361%x362)<(x363&x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x365 = UINT64_MAX;
	static volatile int16_t x366 = INT16_MIN;
	int32_t t88 = 28744731;

	t88 = ((x365%x366)<(x367&x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x369 = -1;
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MAX;
	static int8_t x372 = -1;
	volatile int32_t t89 = 175666;

	t89 = ((x369%x370)<(x371&x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x375 = 2U;
	volatile int32_t t90 = 59682;

	t90 = ((x373%x374)<(x375&x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = -1;
	volatile int8_t x378 = -50;
	int64_t x379 = INT64_MAX;
	volatile int32_t t91 = 98;

	t91 = ((x377%x378)<(x379&x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 37769465208902LLU;
	int64_t x382 = -1LL;
	volatile int64_t x383 = INT64_MIN;
	volatile uint16_t x384 = 30287U;
	volatile int32_t t92 = -2;

	t92 = ((x381%x382)<(x383&x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = 44;
	int32_t x386 = -1;
	static uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MAX;
	volatile int32_t t93 = 272;

	t93 = ((x385%x386)<(x387&x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = -1;
	int8_t x391 = 10;
	uint8_t x392 = 39U;
	volatile int32_t t94 = -9397322;

	t94 = ((x389%x390)<(x391&x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x395 = -162395604LL;
	int16_t x396 = INT16_MAX;

	t95 = ((x393%x394)<(x395&x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t t96 = 1;

	t96 = ((x397%x398)<(x399&x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -30082;
	int32_t x402 = INT32_MIN;
	int64_t x403 = 12588LL;
	int16_t x404 = 0;
	static volatile int32_t t97 = -383;

	t97 = ((x401%x402)<(x403&x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x405 = 68298996;
	volatile int32_t x406 = INT32_MAX;
	static int64_t x407 = INT64_MIN;
	static volatile int32_t t98 = 0;

	t98 = ((x405%x406)<(x407&x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -1;
	uint16_t x410 = 1U;
	static int64_t x411 = -1LL;
	int32_t x412 = INT32_MAX;

	t99 = ((x409%x410)<(x411&x412));

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

