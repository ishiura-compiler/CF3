#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
volatile int32_t t0 = -255936;
volatile int16_t x9 = 1844;
int32_t x21 = INT32_MIN;
uint16_t x24 = UINT16_MAX;
uint64_t x30 = 413LLU;
static uint8_t x42 = 4U;
volatile int32_t t7 = 254;
volatile int32_t t8 = -1;
static int16_t x60 = 0;
int32_t t10 = 58;
uint64_t x68 = 5924318429LLU;
uint64_t x70 = UINT64_MAX;
uint64_t x79 = UINT64_MAX;
uint32_t x82 = 35548252U;
int16_t x84 = -1;
static volatile int32_t t15 = -1;
int16_t x90 = -1;
uint8_t x91 = 50U;
int16_t x101 = 0;
int16_t x103 = INT16_MIN;
uint32_t x120 = 6U;
uint32_t x137 = 92230670U;
uint32_t x150 = 975U;
int16_t x152 = INT16_MIN;
volatile int16_t x158 = 21;
volatile uint8_t x160 = 15U;
uint8_t x161 = 4U;
uint16_t x166 = 832U;
int64_t x168 = -15LL;
static int32_t t31 = 2;
int64_t x171 = -1LL;
volatile uint16_t x177 = 14U;
volatile int32_t t33 = 25947218;
int16_t x183 = 18;
int64_t x186 = -3LL;
int8_t x187 = INT8_MAX;
uint16_t x189 = 3U;
int32_t t36 = 6388;
static volatile uint64_t x193 = 3LLU;
int32_t x194 = INT32_MIN;
int32_t t38 = 12867;
uint32_t x208 = UINT32_MAX;
volatile int32_t t39 = -3;
volatile int8_t x214 = INT8_MIN;
int32_t t41 = 3;
uint64_t x224 = 8587120870971LLU;
int8_t x228 = 1;
static int8_t x247 = INT8_MAX;
int32_t t45 = 48078;
uint32_t x253 = 698U;
int16_t x254 = INT16_MIN;
volatile uint16_t x256 = UINT16_MAX;
uint64_t x259 = 902802455388LLU;
uint64_t x266 = 180860706560722461LLU;
int16_t x273 = INT16_MAX;
uint64_t x281 = UINT64_MAX;
int64_t x283 = 165192511LL;
int32_t t53 = 219386;
static int64_t x286 = -4360LL;
static int8_t x291 = INT8_MIN;
int16_t x300 = INT16_MAX;
int16_t x307 = 1644;
int16_t x327 = -62;
int32_t t59 = -962;
static volatile int8_t x331 = -61;
static int16_t x333 = INT16_MAX;
int32_t x336 = INT32_MAX;
uint8_t x346 = UINT8_MAX;
int32_t x349 = 103;
uint8_t x350 = 12U;
uint32_t x355 = 123U;
uint32_t x356 = 134118U;
static uint32_t x372 = UINT32_MAX;
static int32_t t71 = -486389;
int8_t x383 = INT8_MIN;
volatile int8_t x394 = INT8_MIN;
int8_t x402 = -3;
int64_t x404 = 2997694817LL;
int32_t x405 = INT32_MIN;
uint64_t x407 = 97054253601744LLU;
int64_t x414 = INT64_MIN;
uint16_t x416 = UINT16_MAX;
uint8_t x421 = 0U;
static uint16_t x432 = 87U;
volatile int32_t t79 = 1262;
volatile int8_t x434 = -1;
volatile int32_t t80 = 133;
uint64_t x458 = 75571549LLU;
static uint16_t x470 = 23U;
volatile int8_t x481 = 13;
static int64_t x483 = -1LL;
static int16_t x486 = INT16_MIN;
int16_t x488 = INT16_MIN;
int8_t x494 = -1;
static int16_t x503 = -1;
volatile int32_t t97 = -194817;
uint8_t x513 = UINT8_MAX;


void f0(void) {
	static volatile uint64_t x1 = 262175LLU;
	volatile uint8_t x2 = UINT8_MAX;
	static uint64_t x3 = 20832435121377LLU;

	t0 = ((x1/x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	int32_t x6 = INT32_MAX;
	static int16_t x7 = INT16_MAX;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 10703;

	t1 = ((x5/x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int8_t x11 = -5;
	static int32_t x12 = -1;
	int32_t t2 = 797846;

	t2 = ((x9/x10)==(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x18 = -1;
	uint32_t x19 = UINT32_MAX;
	static int16_t x20 = INT16_MIN;
	int32_t t3 = -13;

	t3 = ((x17/x18)==(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MAX;
	int16_t x23 = 2;
	volatile int32_t t4 = -391;

	t4 = ((x21/x22)==(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1;
	int16_t x31 = INT16_MIN;
	volatile uint32_t x32 = 12U;
	int32_t t5 = 81910;

	t5 = ((x29/x30)==(x31*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = 0;
	int8_t x38 = INT8_MIN;
	uint64_t x39 = 241028303753937LLU;
	int16_t x40 = 0;
	int32_t t6 = 30;

	t6 = ((x37/x38)==(x39*x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 0U;

	t7 = ((x41/x42)==(x43*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = -1;
	volatile int8_t x46 = INT8_MIN;
	static uint8_t x47 = 92U;
	volatile int64_t x48 = -55313185447LL;

	t8 = ((x45/x46)==(x47*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = 61;
	static volatile int32_t x54 = INT32_MIN;
	int8_t x55 = -3;
	static volatile int16_t x56 = 119;
	volatile int32_t t9 = -15013920;

	t9 = ((x53/x54)==(x55*x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = 289LLU;
	int64_t x58 = -114LL;
	int16_t x59 = -1862;

	t10 = ((x57/x58)==(x59*x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	uint16_t x67 = 1U;
	static volatile int32_t t11 = -11739437;

	t11 = ((x65/x66)==(x67*x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = 16U;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t12 = -1598739;

	t12 = ((x69/x70)==(x71*x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = -11;
	int64_t x78 = INT64_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t13 = 89152447;

	t13 = ((x77/x78)==(x79*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = 270LL;
	volatile int64_t x83 = -1LL;
	int32_t t14 = 29846719;

	t14 = ((x81/x82)==(x83*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = -3;
	static int8_t x87 = 1;
	int16_t x88 = -1;

	t15 = ((x85/x86)==(x87*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = INT8_MIN;
	static volatile uint16_t x92 = 808U;
	static volatile int32_t t16 = 5;

	t16 = ((x89/x90)==(x91*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x97 = 134U;
	static volatile uint16_t x98 = 2U;
	static int64_t x99 = 13320LL;
	int16_t x100 = -989;
	volatile int32_t t17 = -23204190;

	t17 = ((x97/x98)==(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x102 = 332112865LLU;
	uint64_t x104 = 98874283124LLU;
	volatile int32_t t18 = 923;

	t18 = ((x101/x102)==(x103*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = INT64_MAX;
	int32_t x106 = 2069;
	volatile uint8_t x107 = UINT8_MAX;
	static int8_t x108 = 1;
	volatile int32_t t19 = -1335457;

	t19 = ((x105/x106)==(x107*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MIN;
	static uint16_t x110 = 3860U;
	uint32_t x111 = 223236695U;
	int32_t x112 = 5;
	volatile int32_t t20 = -6201;

	t20 = ((x109/x110)==(x111*x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x113 = 0;
	int64_t x114 = INT64_MAX;
	uint32_t x115 = UINT32_MAX;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x113/x114)==(x115*x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	static uint32_t x119 = UINT32_MAX;
	static volatile int32_t t22 = -14784;

	t22 = ((x117/x118)==(x119*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = UINT16_MAX;
	int64_t x122 = INT64_MIN;
	int32_t x123 = -2395;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t23 = 7409063;

	t23 = ((x121/x122)==(x123*x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x129 = 2;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = -1;
	int32_t x132 = 7;
	volatile int32_t t24 = -739;

	t24 = ((x129/x130)==(x131*x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x138 = 23U;
	volatile int16_t x139 = INT16_MAX;
	uint8_t x140 = 10U;
	static int32_t t25 = -107562501;

	t25 = ((x137/x138)==(x139*x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = -43545529LL;
	int16_t x148 = INT16_MAX;
	static int32_t t26 = -1;

	t26 = ((x145/x146)==(x147*x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = -1;
	static uint64_t x151 = 41332095064758LLU;
	volatile int32_t t27 = 3513948;

	t27 = ((x149/x150)==(x151*x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x153 = 274U;
	int64_t x154 = -1LL;
	volatile uint8_t x155 = 81U;
	int16_t x156 = INT16_MAX;
	volatile int32_t t28 = 26898784;

	t28 = ((x153/x154)==(x155*x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x157 = 39475LLU;
	int8_t x159 = 1;
	int32_t t29 = -479737532;

	t29 = ((x157/x158)==(x159*x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x162 = UINT64_MAX;
	static uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 100U;
	static int32_t t30 = -250;

	t30 = ((x161/x162)==(x163*x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MAX;
	int64_t x167 = -1LL;

	t31 = ((x165/x166)==(x167*x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -13;
	static int64_t x170 = INT64_MIN;
	int64_t x172 = -1LL;
	static volatile int32_t t32 = -7059;

	t32 = ((x169/x170)==(x171*x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x178 = UINT16_MAX;
	int64_t x179 = 1LL;
	uint8_t x180 = UINT8_MAX;

	t33 = ((x177/x178)==(x179*x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	volatile int16_t x184 = -1;
	static int32_t t34 = -4;

	t34 = ((x181/x182)==(x183*x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = 50472422;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t35 = -149314440;

	t35 = ((x185/x186)==(x187*x188));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x190 = 739406U;
	int32_t x191 = 128141;
	int8_t x192 = INT8_MIN;

	t36 = ((x189/x190)==(x191*x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x195 = INT32_MIN;
	uint64_t x196 = 58876421845127LLU;
	volatile int32_t t37 = -504872624;

	t37 = ((x193/x194)==(x195*x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x201 = 380444;
	uint16_t x202 = 1242U;
	static uint8_t x203 = UINT8_MAX;
	uint8_t x204 = UINT8_MAX;

	t38 = ((x201/x202)==(x203*x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = 847571LLU;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = 14066LL;

	t39 = ((x205/x206)==(x207*x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x213 = 6LLU;
	int16_t x215 = -1;
	int64_t x216 = 3242303297901LL;
	volatile int32_t t40 = 964895;

	t40 = ((x213/x214)==(x215*x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x217 = 62U;
	static int32_t x218 = INT32_MAX;
	int32_t x219 = 0;
	int64_t x220 = INT64_MIN;

	t41 = ((x217/x218)==(x219*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MAX;
	static int64_t x222 = 1030278802505341LL;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t42 = 4405;

	t42 = ((x221/x222)==(x223*x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x225 = -36LL;
	int64_t x226 = -1LL;
	int8_t x227 = INT8_MIN;
	int32_t t43 = -26;

	t43 = ((x225/x226)==(x227*x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x229 = 11973935U;
	volatile uint32_t x230 = 366783124U;
	uint64_t x231 = 3LLU;
	static volatile uint64_t x232 = 13531126295LLU;
	int32_t t44 = -1774684;

	t44 = ((x229/x230)==(x231*x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -57;
	uint32_t x248 = 60U;

	t45 = ((x245/x246)==(x247*x248));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = 1;
	static volatile int16_t x251 = INT16_MIN;
	uint8_t x252 = 5U;
	int32_t t46 = 1833;

	t46 = ((x249/x250)==(x251*x252));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x255 = 8273;
	int32_t t47 = -10425731;

	t47 = ((x253/x254)==(x255*x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x257 = -1;
	int64_t x258 = INT64_MAX;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t48 = 5836;

	t48 = ((x257/x258)==(x259*x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x261 = -3139LL;
	int8_t x262 = INT8_MIN;
	static int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t49 = 80210;

	t49 = ((x261/x262)==(x263*x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x267 = 11U;
	uint32_t x268 = 75859227U;
	int32_t t50 = -10524789;

	t50 = ((x265/x266)==(x267*x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x274 = -1LL;
	int64_t x275 = -1LL;
	static uint16_t x276 = UINT16_MAX;
	static int32_t t51 = 13675;

	t51 = ((x273/x274)==(x275*x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x277 = -1;
	static uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 4U;
	uint32_t x280 = 773215757U;
	volatile int32_t t52 = 94785346;

	t52 = ((x277/x278)==(x279*x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x282 = INT8_MAX;
	int16_t x284 = INT16_MIN;

	t53 = ((x281/x282)==(x283*x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x285 = -131034985;
	volatile uint32_t x287 = 10577U;
	uint32_t x288 = UINT32_MAX;
	static int32_t t54 = 61016;

	t54 = ((x285/x286)==(x287*x288));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = -1LL;
	volatile int16_t x290 = -14622;
	int32_t x292 = -257842;
	int32_t t55 = 392;

	t55 = ((x289/x290)==(x291*x292));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x297 = 0U;
	static int32_t x298 = 42367996;
	static int16_t x299 = INT16_MIN;
	static volatile int32_t t56 = 1;

	t56 = ((x297/x298)==(x299*x300));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x301 = INT32_MIN;
	static uint64_t x302 = 326LLU;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -657;
	static volatile int32_t t57 = -27523947;

	t57 = ((x301/x302)==(x303*x304));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x305 = INT32_MAX;
	int32_t x306 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t58 = -586;

	t58 = ((x305/x306)==(x307*x308));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x325 = 81494U;
	volatile int16_t x326 = -1;
	uint16_t x328 = 595U;

	t59 = ((x325/x326)==(x327*x328));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x329 = -3;
	int64_t x330 = -2328LL;
	static int16_t x332 = -1;
	int32_t t60 = -68665678;

	t60 = ((x329/x330)==(x331*x332));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x334 = 1U;
	uint64_t x335 = 201LLU;
	static volatile int32_t t61 = 3428963;

	t61 = ((x333/x334)==(x335*x336));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x337 = -1LL;
	static volatile uint32_t x338 = 43U;
	int16_t x339 = INT16_MAX;
	volatile uint8_t x340 = 0U;
	volatile int32_t t62 = 517003320;

	t62 = ((x337/x338)==(x339*x340));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x341 = 47U;
	static int8_t x342 = -3;
	int64_t x343 = 5596038178580LL;
	int8_t x344 = INT8_MIN;
	volatile int32_t t63 = 5250;

	t63 = ((x341/x342)==(x343*x344));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x345 = 0U;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = -81799;
	static volatile int32_t t64 = 84956314;

	t64 = ((x345/x346)==(x347*x348));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x351 = UINT64_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t65 = 8;

	t65 = ((x349/x350)==(x351*x352));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = INT32_MIN;
	volatile int16_t x354 = INT16_MIN;
	volatile int32_t t66 = 46;

	t66 = ((x353/x354)==(x355*x356));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x357 = INT64_MAX;
	volatile int16_t x358 = -398;
	int32_t x359 = -1;
	uint16_t x360 = 4U;
	int32_t t67 = 10;

	t67 = ((x357/x358)==(x359*x360));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MAX;
	int64_t x363 = INT64_MAX;
	int8_t x364 = 0;
	volatile int32_t t68 = -142960;

	t68 = ((x361/x362)==(x363*x364));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x369 = -855501780LL;
	static volatile int8_t x370 = 8;
	int8_t x371 = INT8_MIN;
	volatile int32_t t69 = -96;

	t69 = ((x369/x370)==(x371*x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x373 = -55;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = 20U;
	int16_t x376 = INT16_MIN;
	int32_t t70 = -1;

	t70 = ((x373/x374)==(x375*x376));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x377 = -6;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -6769;
	volatile int32_t x380 = 52;

	t71 = ((x377/x378)==(x379*x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x381 = UINT32_MAX;
	static uint32_t x382 = UINT32_MAX;
	volatile int16_t x384 = -7131;
	int32_t t72 = 125740;

	t72 = ((x381/x382)==(x383*x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x385 = 20389436;
	int16_t x386 = INT16_MAX;
	static int64_t x387 = -10303LL;
	uint16_t x388 = 11U;
	int32_t t73 = -576;

	t73 = ((x385/x386)==(x387*x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = 109;
	int32_t x395 = 237610;
	int8_t x396 = INT8_MAX;
	volatile int32_t t74 = 203743350;

	t74 = ((x393/x394)==(x395*x396));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x401 = INT32_MIN;
	int32_t x403 = 2947749;
	int32_t t75 = -25589236;

	t75 = ((x401/x402)==(x403*x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x406 = UINT32_MAX;
	volatile uint8_t x408 = 14U;
	int32_t t76 = 5887;

	t76 = ((x405/x406)==(x407*x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x413 = INT8_MIN;
	int8_t x415 = 3;
	volatile int32_t t77 = 6964;

	t77 = ((x413/x414)==(x415*x416));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x422 = -1;
	volatile int32_t x423 = INT32_MIN;
	static int64_t x424 = 2831730LL;
	int32_t t78 = 180862890;

	t78 = ((x421/x422)==(x423*x424));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x429 = INT32_MIN;
	uint32_t x430 = 2968U;
	int32_t x431 = 59538;

	t79 = ((x429/x430)==(x431*x432));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x433 = INT8_MIN;
	int16_t x435 = 10;
	static int32_t x436 = -62;

	t80 = ((x433/x434)==(x435*x436));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x437 = INT16_MAX;
	int16_t x438 = INT16_MAX;
	static uint64_t x439 = UINT64_MAX;
	uint16_t x440 = 208U;
	int32_t t81 = -28540728;

	t81 = ((x437/x438)==(x439*x440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x441 = INT8_MIN;
	static uint8_t x442 = UINT8_MAX;
	int16_t x443 = INT16_MIN;
	static int64_t x444 = -1LL;
	volatile int32_t t82 = 74340;

	t82 = ((x441/x442)==(x443*x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x445 = 1LLU;
	static int32_t x446 = INT32_MAX;
	static int16_t x447 = -1;
	static int8_t x448 = -18;
	int32_t t83 = -123;

	t83 = ((x445/x446)==(x447*x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x453 = INT8_MIN;
	static int8_t x454 = INT8_MIN;
	int32_t x455 = INT32_MAX;
	uint64_t x456 = UINT64_MAX;
	int32_t t84 = 164960;

	t84 = ((x453/x454)==(x455*x456));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x457 = UINT16_MAX;
	volatile uint16_t x459 = 748U;
	int8_t x460 = 10;
	int32_t t85 = -14210221;

	t85 = ((x457/x458)==(x459*x460));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x461 = -1;
	int32_t x462 = INT32_MAX;
	int8_t x463 = 1;
	int64_t x464 = -1LL;
	static volatile int32_t t86 = 15804;

	t86 = ((x461/x462)==(x463*x464));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x465 = UINT16_MAX;
	volatile uint32_t x466 = UINT32_MAX;
	uint8_t x467 = 0U;
	int16_t x468 = -1963;
	int32_t t87 = 123;

	t87 = ((x465/x466)==(x467*x468));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x469 = -1;
	volatile uint16_t x471 = 3743U;
	uint32_t x472 = 44U;
	volatile int32_t t88 = 23562446;

	t88 = ((x469/x470)==(x471*x472));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x473 = -1;
	int64_t x474 = INT64_MIN;
	uint32_t x475 = UINT32_MAX;
	static int8_t x476 = -20;
	int32_t t89 = 129203;

	t89 = ((x473/x474)==(x475*x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x477 = 16976U;
	int8_t x478 = INT8_MAX;
	uint64_t x479 = 49585809964560199LLU;
	int16_t x480 = -1;
	int32_t t90 = 108;

	t90 = ((x477/x478)==(x479*x480));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x482 = INT16_MAX;
	static int32_t x484 = INT32_MIN;
	static int32_t t91 = -10898;

	t91 = ((x481/x482)==(x483*x484));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x485 = 14U;
	int64_t x487 = 1939131060LL;
	volatile int32_t t92 = -61177;

	t92 = ((x485/x486)==(x487*x488));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x489 = UINT32_MAX;
	int64_t x490 = INT64_MIN;
	int16_t x491 = INT16_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t93 = -19651;

	t93 = ((x489/x490)==(x491*x492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x493 = 10U;
	volatile int8_t x495 = -1;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t94 = 161454171;

	t94 = ((x493/x494)==(x495*x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x501 = -1;
	static int32_t x502 = INT32_MAX;
	static uint32_t x504 = 4793U;
	int32_t t95 = 592590;

	t95 = ((x501/x502)==(x503*x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x505 = INT16_MIN;
	volatile int16_t x506 = INT16_MIN;
	static int8_t x507 = -1;
	uint32_t x508 = 96893U;
	volatile int32_t t96 = -297044;

	t96 = ((x505/x506)==(x507*x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x509 = -1;
	int16_t x510 = INT16_MIN;
	int64_t x511 = -1LL;
	uint8_t x512 = UINT8_MAX;

	t97 = ((x509/x510)==(x511*x512));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x514 = -1;
	int16_t x515 = 7;
	static int8_t x516 = -1;
	int32_t t98 = 28484238;

	t98 = ((x513/x514)==(x515*x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x517 = INT16_MIN;
	uint32_t x518 = 1427930594U;
	static int8_t x519 = -47;
	uint64_t x520 = 1933660304381454LLU;
	volatile int32_t t99 = 3;

	t99 = ((x517/x518)==(x519*x520));

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

