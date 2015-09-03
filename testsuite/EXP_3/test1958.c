#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = UINT16_MAX;
static uint64_t x8 = 2627LLU;
static volatile int64_t x9 = INT64_MIN;
uint16_t x17 = 9024U;
int8_t x22 = 5;
volatile int8_t x28 = 2;
volatile int32_t t8 = -101878;
int32_t x41 = INT32_MIN;
volatile int32_t t11 = -3234;
int64_t x54 = INT64_MAX;
volatile int32_t t13 = 274;
uint32_t x62 = 52U;
static int32_t t15 = -8888646;
int32_t x72 = -3;
static uint16_t x73 = 2753U;
int32_t t18 = 3;
int32_t t19 = -29403;
volatile int64_t x84 = 7LL;
int16_t x90 = INT16_MAX;
int32_t x93 = INT32_MIN;
int8_t x100 = INT8_MAX;
static uint8_t x105 = 0U;
static uint8_t x106 = 29U;
int32_t x110 = -1;
volatile int32_t t29 = -8;
uint8_t x123 = 30U;
int32_t t31 = 16290319;
int8_t x130 = -1;
volatile int32_t t32 = 27443465;
int32_t x134 = -1;
int16_t x135 = INT16_MAX;
static int64_t x136 = -8190667124LL;
volatile int32_t t35 = 0;
static volatile int32_t x147 = INT32_MIN;
uint8_t x148 = UINT8_MAX;
int32_t x157 = INT32_MAX;
int32_t x158 = 25;
volatile int32_t t39 = 409113739;
volatile int32_t t40 = -1655183;
static uint32_t x165 = 53U;
uint64_t x168 = UINT64_MAX;
volatile int32_t t41 = -35302;
volatile uint16_t x169 = 30743U;
volatile int64_t x172 = INT64_MIN;
int8_t x173 = INT8_MAX;
volatile int32_t x176 = -7076006;
uint16_t x177 = UINT16_MAX;
static uint64_t x188 = UINT64_MAX;
static int32_t x189 = INT32_MIN;
int64_t x201 = INT64_MAX;
int16_t x207 = 889;
int32_t t51 = -53785;
static int64_t x217 = INT64_MAX;
int8_t x221 = INT8_MIN;
int8_t x222 = -32;
volatile int32_t x223 = -1;
int8_t x231 = INT8_MIN;
volatile int8_t x240 = -3;
int8_t x246 = INT8_MAX;
int16_t x247 = INT16_MIN;
uint16_t x263 = 14978U;
uint16_t x264 = UINT16_MAX;
uint32_t x266 = 434395315U;
static uint8_t x268 = 0U;
int32_t t66 = 547;
uint8_t x275 = 13U;
volatile int32_t t68 = -3033264;
int16_t x277 = -1;
uint16_t x278 = UINT16_MAX;
int8_t x279 = INT8_MIN;
int8_t x283 = -7;
static uint8_t x284 = UINT8_MAX;
int8_t x287 = -1;
int8_t x288 = INT8_MIN;
volatile int32_t t72 = 100664941;
static int64_t x296 = -1LL;
uint64_t x302 = UINT64_MAX;
uint32_t x306 = 90543722U;
int64_t x308 = -1LL;
int32_t t76 = -491;
int8_t x310 = INT8_MIN;
int32_t t79 = 3764634;
int8_t x323 = -1;
int16_t x325 = INT16_MIN;
static int8_t x332 = -1;
int16_t x333 = -9;
volatile int8_t x334 = -1;
static volatile int8_t x335 = INT8_MIN;
int16_t x337 = INT16_MIN;
static volatile int16_t x338 = INT16_MAX;
int8_t x342 = INT8_MIN;
volatile int32_t x346 = INT32_MAX;
int32_t t86 = -60668469;
int32_t t87 = 1822;
int16_t x353 = 5441;
static volatile int32_t t89 = 530489687;
int32_t t91 = -1;
int32_t x369 = INT32_MAX;
static int8_t x374 = 1;
volatile int32_t t94 = 34722393;
int16_t x382 = INT16_MIN;
int16_t x386 = INT16_MIN;
int8_t x396 = INT8_MAX;


void f0(void) {
	volatile int8_t x1 = -1;
	int64_t x2 = 1LL;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	int32_t t0 = -3249;

	t0 = ((x1==x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	static volatile uint16_t x7 = 56U;
	static int32_t t1 = -318336309;

	t1 = ((x5==x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = INT8_MIN;
	volatile uint64_t x11 = 20804287861LLU;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -469541;

	t2 = ((x9==x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1522387411U;
	int64_t x14 = INT64_MIN;
	int32_t x15 = 660888986;
	int64_t x16 = INT64_MAX;
	int32_t t3 = -133;

	t3 = ((x13==x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 13;
	int8_t x19 = INT8_MAX;
	int16_t x20 = -4;
	int32_t t4 = 992682820;

	t4 = ((x17==x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 2;
	static uint32_t x23 = 1471U;
	int64_t x24 = INT64_MAX;
	int32_t t5 = -11;

	t5 = ((x21==x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int8_t x27 = -1;
	int32_t t6 = -396710;

	t6 = ((x25==x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 11U;
	volatile uint32_t x30 = 1247U;
	uint64_t x31 = 141627726LLU;
	static volatile uint8_t x32 = 23U;
	volatile int32_t t7 = -2716;

	t7 = ((x29==x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	int8_t x34 = -1;
	int8_t x35 = -13;
	int16_t x36 = 495;

	t8 = ((x33==x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -29814034754424072LL;
	int64_t x38 = -1LL;
	int8_t x39 = INT8_MAX;
	static int16_t x40 = INT16_MAX;
	static int32_t t9 = -2570971;

	t9 = ((x37==x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = 24;
	int32_t x43 = -1162;
	uint8_t x44 = 4U;
	volatile int32_t t10 = -11646;

	t10 = ((x41==x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	static uint16_t x46 = 20715U;
	int64_t x47 = 88457LL;
	int8_t x48 = -36;

	t11 = ((x45==x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	int8_t x50 = -1;
	int32_t x51 = INT32_MAX;
	uint8_t x52 = 8U;
	volatile int32_t t12 = -19914;

	t12 = ((x49==x50)==(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 6;
	static uint32_t x55 = UINT32_MAX;
	int16_t x56 = -6;

	t13 = ((x53==x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 12011LLU;
	int32_t x58 = INT32_MIN;
	static uint8_t x59 = 2U;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -21717;

	t14 = ((x57==x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MIN;

	t15 = ((x61==x62)==(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 610729736U;
	static int32_t x66 = INT32_MAX;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = -1;
	int32_t t16 = -10;

	t16 = ((x65==x66)==(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -908721565698364LL;
	static volatile int32_t x70 = 109;
	static int64_t x71 = INT64_MIN;
	int32_t t17 = 1;

	t17 = ((x69==x70)==(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -1;
	int16_t x75 = INT16_MIN;
	int8_t x76 = INT8_MIN;

	t18 = ((x73==x74)==(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	uint32_t x78 = 229843U;
	volatile uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;

	t19 = ((x77==x78)==(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	static int8_t x82 = 1;
	int64_t x83 = 193119646329LL;
	volatile int32_t t20 = 945;

	t20 = ((x81==x82)==(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1280498;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -77755;

	t21 = ((x85==x86)==(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static volatile uint32_t x91 = 5908U;
	static int32_t x92 = -1;
	static volatile int32_t t22 = 1924;

	t22 = ((x89==x90)==(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MAX;
	int32_t x95 = -1;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 134041553;

	t23 = ((x93==x94)==(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 38U;
	int32_t x98 = -1;
	int8_t x99 = INT8_MIN;
	volatile int32_t t24 = 41071252;

	t24 = ((x97==x98)==(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -342;
	int32_t x102 = INT32_MIN;
	static int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MAX;
	int32_t t25 = 19027441;

	t25 = ((x101==x102)==(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x107 = INT64_MIN;
	uint16_t x108 = 54U;
	int32_t t26 = -940303;

	t26 = ((x105==x106)==(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 29U;
	int8_t x111 = 3;
	uint32_t x112 = 23004813U;
	volatile int32_t t27 = 481361075;

	t27 = ((x109==x110)==(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	static volatile uint64_t x114 = UINT64_MAX;
	int8_t x115 = 1;
	volatile uint8_t x116 = 6U;
	int32_t t28 = -1204;

	t28 = ((x113==x114)==(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = -1LL;

	t29 = ((x117==x118)==(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 9924U;
	static int16_t x122 = INT16_MIN;
	int16_t x124 = -625;
	static volatile int32_t t30 = -66961;

	t30 = ((x121==x122)==(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 0U;
	uint64_t x127 = 32558LLU;
	volatile int32_t x128 = 158;

	t31 = ((x125==x126)==(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -422406946;
	volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = INT16_MAX;

	t32 = ((x129==x130)==(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static int32_t t33 = -3102422;

	t33 = ((x133==x134)==(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 2U;
	uint8_t x138 = UINT8_MAX;
	static volatile uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 409795;

	t34 = ((x137==x138)==(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = 12027160710300LL;
	static int32_t x143 = INT32_MAX;
	static volatile uint32_t x144 = UINT32_MAX;

	t35 = ((x141==x142)==(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	uint16_t x146 = 15790U;
	volatile int32_t t36 = 2;

	t36 = ((x145==x146)==(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	int64_t x152 = -1LL;
	int32_t t37 = -25819834;

	t37 = ((x149==x150)==(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1;
	int32_t x154 = -27;
	int8_t x155 = 1;
	volatile uint64_t x156 = UINT64_MAX;
	static volatile int32_t t38 = 51606752;

	t38 = ((x153==x154)==(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x159 = INT32_MIN;
	int32_t x160 = 30192723;

	t39 = ((x157==x158)==(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	volatile uint8_t x162 = 4U;
	int32_t x163 = -18456;
	uint8_t x164 = UINT8_MAX;

	t40 = ((x161==x162)==(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = 58;
	int32_t x167 = INT32_MAX;

	t41 = ((x165==x166)==(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MAX;
	static int16_t x171 = -103;
	int32_t t42 = -402;

	t42 = ((x169==x170)==(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int8_t x175 = -1;
	int32_t t43 = -553947530;

	t43 = ((x173==x174)==(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = -2;
	int64_t x179 = INT64_MIN;
	int32_t x180 = 32313;
	volatile int32_t t44 = -822;

	t44 = ((x177==x178)==(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	static int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = -38832390;

	t45 = ((x181==x182)==(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -1LL;
	int64_t x186 = 18703561103LL;
	static uint16_t x187 = UINT16_MAX;
	int32_t t46 = 34;

	t46 = ((x185==x186)==(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = -1LL;
	uint32_t x191 = 3896U;
	uint16_t x192 = UINT16_MAX;
	static int32_t t47 = -598;

	t47 = ((x189==x190)==(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	uint16_t x194 = 279U;
	uint16_t x195 = 131U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 393443570;

	t48 = ((x193==x194)==(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 4649581U;
	volatile int16_t x198 = 92;
	int8_t x199 = 55;
	uint32_t x200 = UINT32_MAX;
	int32_t t49 = 3534;

	t49 = ((x197==x198)==(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = 2;
	int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;
	volatile int32_t t50 = 1229917;

	t50 = ((x201==x202)==(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -60;
	static int8_t x206 = 1;
	int32_t x208 = -9085;

	t51 = ((x205==x206)==(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int64_t x210 = INT64_MIN;
	int8_t x211 = -1;
	uint32_t x212 = 90U;
	static int32_t t52 = -973;

	t52 = ((x209==x210)==(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = -216025363LL;
	int64_t x214 = 1345LL;
	static volatile uint16_t x215 = UINT16_MAX;
	volatile int32_t x216 = INT32_MAX;
	static volatile int32_t t53 = -1844;

	t53 = ((x213==x214)==(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = INT16_MAX;
	int32_t x219 = -1;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -15014938;

	t54 = ((x217==x218)==(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = 2843333;

	t55 = ((x221==x222)==(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int32_t x226 = 54;
	static int32_t x227 = INT32_MIN;
	static int8_t x228 = -5;
	int32_t t56 = -104;

	t56 = ((x225==x226)==(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	static int64_t x230 = -52105872894LL;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -27525095;

	t57 = ((x229==x230)==(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = -136880;
	uint32_t x235 = 17U;
	uint16_t x236 = 2U;
	int32_t t58 = 18;

	t58 = ((x233==x234)==(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	uint64_t x238 = 32890591675048LLU;
	volatile uint8_t x239 = 2U;
	static volatile int32_t t59 = 22;

	t59 = ((x237==x238)==(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MAX;
	volatile int32_t x243 = -1;
	uint32_t x244 = 119U;
	volatile int32_t t60 = -7;

	t60 = ((x241==x242)==(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	volatile int8_t x248 = -1;
	int32_t t61 = 68771684;

	t61 = ((x245==x246)==(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 78U;
	int64_t x250 = -1LL;
	uint8_t x251 = 63U;
	volatile int16_t x252 = -1;
	int32_t t62 = -965;

	t62 = ((x249==x250)==(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	uint8_t x254 = 0U;
	int8_t x255 = INT8_MIN;
	int8_t x256 = -1;
	int32_t t63 = -266580620;

	t63 = ((x253==x254)==(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	static int8_t x258 = 2;
	int64_t x259 = -17910225846851734LL;
	int16_t x260 = INT16_MIN;
	int32_t t64 = -56423816;

	t64 = ((x257==x258)==(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = 4U;
	volatile int32_t t65 = 8180;

	t65 = ((x261==x262)==(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 21397LLU;
	int32_t x267 = 21;

	t66 = ((x265==x266)==(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	uint16_t x270 = 1U;
	int64_t x271 = INT64_MAX;
	uint32_t x272 = 140U;
	int32_t t67 = -21224005;

	t67 = ((x269==x270)==(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 109U;
	int8_t x274 = 1;
	static volatile int8_t x276 = INT8_MAX;

	t68 = ((x273==x274)==(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x280 = -1;
	volatile int32_t t69 = -358141879;

	t69 = ((x277==x278)==(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x281 = -232;
	int8_t x282 = -1;
	volatile int32_t t70 = -57;

	t70 = ((x281==x282)==(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 1075758U;
	int16_t x286 = -1;
	volatile int32_t t71 = 346;

	t71 = ((x285==x286)==(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -13;
	static int64_t x290 = INT64_MIN;
	int64_t x291 = -1LL;
	int64_t x292 = -1744845428LL;

	t72 = ((x289==x290)==(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 126834024117LLU;
	static int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	volatile int32_t t73 = -129916;

	t73 = ((x293==x294)==(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	static int16_t x298 = INT16_MIN;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t x300 = -1;
	static int32_t t74 = 53498;

	t74 = ((x297==x298)==(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = 1512;
	volatile uint64_t x303 = 58476595364226136LLU;
	uint16_t x304 = 2U;
	volatile int32_t t75 = -1317;

	t75 = ((x301==x302)==(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -177LL;
	uint8_t x307 = 1U;

	t76 = ((x305==x306)==(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 852666;

	t77 = ((x309==x310)==(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	static int32_t x315 = -1;
	volatile int32_t x316 = 2;
	volatile int32_t t78 = 465784202;

	t78 = ((x313==x314)==(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x318 = 3;
	int16_t x319 = INT16_MAX;
	static int8_t x320 = INT8_MAX;

	t79 = ((x317==x318)==(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	uint64_t x322 = 6LLU;
	volatile uint16_t x324 = UINT16_MAX;
	static int32_t t80 = -19;

	t80 = ((x321==x322)==(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = 25;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -13140;

	t81 = ((x325==x326)==(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int64_t x330 = INT64_MAX;
	static int16_t x331 = INT16_MAX;
	int32_t t82 = -1;

	t82 = ((x329==x330)==(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x336 = 1750419540U;
	int32_t t83 = -331404;

	t83 = ((x333==x334)==(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x339 = -227;
	int64_t x340 = INT64_MAX;
	int32_t t84 = -1627283;

	t84 = ((x337==x338)==(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MAX;
	int16_t x343 = -6969;
	volatile int16_t x344 = INT16_MAX;
	volatile int32_t t85 = 308;

	t85 = ((x341==x342)==(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MAX;
	volatile int16_t x347 = 459;
	int16_t x348 = -1;

	t86 = ((x345==x346)==(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	static int8_t x352 = 24;

	t87 = ((x349==x350)==(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	uint16_t x355 = 9446U;
	static int16_t x356 = -1;
	volatile int32_t t88 = -3;

	t88 = ((x353==x354)==(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int8_t x358 = INT8_MAX;
	static int32_t x359 = 168;
	volatile int8_t x360 = INT8_MIN;

	t89 = ((x357==x358)==(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 2U;
	int16_t x362 = INT16_MAX;
	uint32_t x363 = 772U;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t90 = 111359;

	t90 = ((x361==x362)==(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = -26964;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;

	t91 = ((x365==x366)==(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MIN;
	volatile uint64_t x371 = UINT64_MAX;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t92 = 220567;

	t92 = ((x369==x370)==(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int8_t x375 = -1;
	int64_t x376 = 114527129LL;
	int32_t t93 = -3106443;

	t93 = ((x373==x374)==(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 15U;
	int8_t x378 = 0;
	uint64_t x379 = 2524494LLU;
	static uint16_t x380 = 8343U;

	t94 = ((x377==x378)==(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x381 = INT32_MAX;
	uint8_t x383 = 2U;
	int16_t x384 = INT16_MIN;
	static int32_t t95 = -12;

	t95 = ((x381==x382)==(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int8_t x387 = -1;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -63968048;

	t96 = ((x385==x386)==(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = -4133831;

	t97 = ((x389==x390)==(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MAX;
	int32_t t98 = -189254675;

	t98 = ((x393==x394)==(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MIN;
	int32_t x399 = 1377;
	uint8_t x400 = 10U;
	int32_t t99 = -258;

	t99 = ((x397==x398)==(x399|x400));

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

