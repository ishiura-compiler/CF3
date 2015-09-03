#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -46046015;
int8_t x8 = INT8_MAX;
volatile int32_t t2 = 190518;
static volatile int8_t x15 = 10;
int32_t x17 = INT32_MIN;
volatile uint32_t x36 = 101U;
static uint64_t x39 = UINT64_MAX;
int64_t x40 = 26LL;
uint64_t x41 = 1387743307377864451LLU;
uint64_t x42 = 335170938499605LLU;
volatile int8_t x45 = INT8_MIN;
volatile int32_t t10 = -12;
uint16_t x49 = 1697U;
uint16_t x58 = 552U;
volatile int32_t t13 = -187735940;
int32_t t14 = -1012064408;
uint32_t x81 = 434U;
uint64_t x86 = UINT64_MAX;
int32_t t19 = -1;
int16_t x93 = -28;
static volatile int32_t t21 = 0;
uint32_t x97 = 4164U;
volatile int64_t x105 = INT64_MIN;
static int32_t t24 = 23;
int32_t t25 = 0;
int32_t x119 = INT32_MIN;
volatile uint64_t x120 = 3454LLU;
volatile int32_t t27 = -8197424;
int64_t x133 = INT64_MIN;
static uint8_t x135 = 3U;
int16_t x146 = -1;
uint8_t x155 = 0U;
int64_t x161 = -1LL;
static uint16_t x162 = 1U;
uint16_t x166 = 85U;
int32_t t35 = 5;
static int32_t x170 = INT32_MIN;
uint32_t x172 = UINT32_MAX;
int32_t t36 = 45094445;
static int64_t x173 = 603832066532LL;
int64_t x180 = -48923124138LL;
static int32_t t39 = 6;
volatile int8_t x193 = 1;
volatile int32_t t46 = -33;
int32_t t49 = 198;
int32_t t50 = -8379;
uint8_t x245 = 23U;
int8_t x247 = INT8_MIN;
volatile int32_t x250 = 50828;
volatile int32_t t52 = 17800;
int64_t x253 = INT64_MAX;
int32_t t54 = -603;
volatile int64_t x268 = INT64_MAX;
uint16_t x273 = 25104U;
static uint8_t x277 = UINT8_MAX;
static int8_t x278 = INT8_MIN;
int8_t x282 = -1;
int32_t x284 = 123;
int16_t x287 = 3;
uint32_t x288 = 3679951U;
volatile int32_t x295 = 346;
int32_t t66 = -28;
static uint8_t x315 = 54U;
uint8_t x317 = 60U;
int64_t x321 = -1LL;
int64_t x322 = -5LL;
static int64_t x325 = INT64_MAX;
int16_t x328 = -1;
int8_t x337 = INT8_MAX;
int32_t x372 = INT32_MAX;
int64_t x383 = INT64_MIN;
volatile int32_t t81 = 1;
static int32_t x386 = INT32_MIN;
uint32_t x388 = 0U;
volatile int32_t t83 = -26;
static int32_t t84 = 1375458;
int8_t x408 = 8;
int64_t x411 = -1LL;
int32_t t88 = -20367;
volatile int64_t x417 = INT64_MIN;
volatile int64_t x418 = INT64_MIN;
int16_t x420 = -1;
volatile uint32_t x423 = 12359480U;
static volatile uint8_t x435 = 17U;
uint8_t x440 = 42U;
static uint8_t x441 = 4U;
int64_t x442 = INT64_MIN;
int64_t x444 = INT64_MIN;
volatile int32_t t96 = -50258;
int64_t x461 = -66LL;


void f0(void) {
	uint8_t x1 = 20U;
	volatile int64_t x2 = -76518303762LL;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -1;

	t0 = (((x1/x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -26947;

	t1 = (((x5/x6)*x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	uint32_t x10 = UINT32_MAX;
	volatile uint8_t x11 = 1U;
	static int16_t x12 = -387;

	t2 = (((x9/x10)*x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 25;
	uint64_t x14 = UINT64_MAX;
	volatile uint64_t x16 = 620692630664311002LLU;
	int32_t t3 = 713281;

	t3 = (((x13/x14)*x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	volatile int64_t x19 = INT64_MIN;
	int8_t x20 = -7;
	int32_t t4 = 0;

	t4 = (((x17/x18)*x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int16_t x22 = INT16_MIN;
	uint16_t x23 = 364U;
	uint32_t x24 = 83723402U;
	int32_t t5 = 47513;

	t5 = (((x21/x22)*x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	uint8_t x26 = 11U;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 46960U;
	int32_t t6 = -6995859;

	t6 = (((x25/x26)*x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 2LLU;
	uint8_t x35 = 1U;
	static int32_t t7 = -246;

	t7 = (((x33/x34)*x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	volatile int32_t x38 = -1;
	static int32_t t8 = 1;

	t8 = (((x37/x38)*x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x43 = -544707LL;
	uint64_t x44 = 666300064149339250LLU;
	static int32_t t9 = 1077;

	t9 = (((x41/x42)*x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	volatile int8_t x47 = -1;
	static int32_t x48 = 1239;

	t10 = (((x45/x46)*x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = 477U;
	int8_t x51 = INT8_MIN;
	int16_t x52 = 643;
	volatile int32_t t11 = -1491;

	t11 = (((x49/x50)*x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	uint32_t x54 = 13U;
	volatile uint32_t x55 = UINT32_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t12 = -335;

	t12 = (((x53/x54)*x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	int64_t x59 = -1LL;
	int16_t x60 = -1;

	t13 = (((x57/x58)*x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = -3;
	volatile uint8_t x64 = 66U;

	t14 = (((x61/x62)*x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1U;
	volatile int16_t x66 = -1;
	static uint8_t x67 = 0U;
	int8_t x68 = -1;
	volatile int32_t t15 = 18914;

	t15 = (((x65/x66)*x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 21255U;
	int8_t x70 = INT8_MIN;
	static int32_t x71 = -61;
	int32_t x72 = -1;
	static volatile int32_t t16 = 233;

	t16 = (((x69/x70)*x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 29U;
	int64_t x74 = 88758784704715LL;
	volatile int32_t x75 = 1502373;
	static volatile int16_t x76 = INT16_MAX;
	int32_t t17 = -15968943;

	t17 = (((x73/x74)*x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x82 = INT16_MAX;
	uint32_t x83 = 177560476U;
	static volatile uint8_t x84 = UINT8_MAX;
	static volatile int32_t t18 = -170681;

	t18 = (((x81/x82)*x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 0U;
	uint64_t x87 = 1694861305957489907LLU;
	int64_t x88 = INT64_MAX;

	t19 = (((x85/x86)*x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MAX;
	volatile uint32_t x92 = 199135U;
	volatile int32_t t20 = -61;

	t20 = (((x89/x90)*x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = -1;
	static int64_t x95 = 1LL;
	int64_t x96 = INT64_MIN;

	t21 = (((x93/x94)*x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x98 = -1;
	static volatile uint64_t x99 = UINT64_MAX;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t22 = 19066678;

	t22 = (((x97/x98)*x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 6U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t23 = 1584902;

	t23 = (((x101/x102)*x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = 560280054LLU;
	volatile int16_t x107 = -1;
	int8_t x108 = INT8_MIN;

	t24 = (((x105/x106)*x107)==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 217076897LLU;
	uint32_t x110 = 510U;
	static int32_t x111 = INT32_MIN;
	volatile uint32_t x112 = 1614053U;

	t25 = (((x109/x110)*x111)==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t26 = 393;

	t26 = (((x113/x114)*x115)==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 124079;
	uint32_t x118 = 111339U;

	t27 = (((x117/x118)*x119)==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -6;
	static uint8_t x122 = 116U;
	int16_t x123 = -5186;
	int32_t x124 = INT32_MAX;
	volatile int32_t t28 = -45489;

	t28 = (((x121/x122)*x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = 44U;
	volatile int16_t x136 = -1;
	volatile int32_t t29 = 22;

	t29 = (((x133/x134)*x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	static volatile int32_t x140 = -1;
	static volatile int32_t t30 = -9497078;

	t30 = (((x137/x138)*x139)==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x145 = UINT16_MAX;
	static volatile int8_t x147 = INT8_MAX;
	int64_t x148 = -1LL;
	volatile int32_t t31 = 4;

	t31 = (((x145/x146)*x147)==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = 1U;
	uint32_t x154 = 533133327U;
	int8_t x156 = INT8_MAX;
	static volatile int32_t t32 = -147;

	t32 = (((x153/x154)*x155)==x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x157 = -1;
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = 8069542632121268LL;
	volatile int32_t t33 = 46;

	t33 = (((x157/x158)*x159)==x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x163 = 1U;
	int16_t x164 = INT16_MIN;
	int32_t t34 = 349161107;

	t34 = (((x161/x162)*x163)==x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x165 = 6U;
	static uint8_t x167 = 8U;
	int32_t x168 = INT32_MIN;

	t35 = (((x165/x166)*x167)==x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 120U;
	int64_t x171 = -1909457820683374754LL;

	t36 = (((x169/x170)*x171)==x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = 1783806456LL;
	int32_t x175 = INT32_MIN;
	static int8_t x176 = -3;
	volatile int32_t t37 = 12;

	t37 = (((x173/x174)*x175)==x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x177 = INT32_MIN;
	uint8_t x178 = UINT8_MAX;
	volatile uint32_t x179 = 160800555U;
	volatile int32_t t38 = -3877;

	t38 = (((x177/x178)*x179)==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = -1LL;
	static uint32_t x186 = 114U;
	static int32_t x187 = INT32_MAX;
	volatile int16_t x188 = INT16_MIN;

	t39 = (((x185/x186)*x187)==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -1;
	uint8_t x190 = 22U;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MAX;
	int32_t t40 = -25744959;

	t40 = (((x189/x190)*x191)==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	int32_t t41 = 4;

	t41 = (((x193/x194)*x195)==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x205 = INT16_MIN;
	static uint32_t x206 = 49187674U;
	volatile int16_t x207 = -15;
	volatile int32_t x208 = 9349358;
	volatile int32_t t42 = 680610362;

	t42 = (((x205/x206)*x207)==x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = 22816U;
	int64_t x210 = INT64_MIN;
	int16_t x211 = -2350;
	int16_t x212 = INT16_MAX;
	static int32_t t43 = 81;

	t43 = (((x209/x210)*x211)==x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = UINT16_MAX;
	int32_t x214 = 823147;
	static int64_t x215 = INT64_MAX;
	int16_t x216 = 455;
	int32_t t44 = -526415;

	t44 = (((x213/x214)*x215)==x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x217 = -1;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 1U;
	int8_t x220 = INT8_MAX;
	int32_t t45 = 130;

	t45 = (((x217/x218)*x219)==x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x221 = -1LL;
	int32_t x222 = INT32_MIN;
	int64_t x223 = -384LL;
	int32_t x224 = INT32_MIN;

	t46 = (((x221/x222)*x223)==x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 369U;
	int32_t x226 = INT32_MIN;
	static uint64_t x227 = 35848LLU;
	uint16_t x228 = 23417U;
	volatile int32_t t47 = -45;

	t47 = (((x225/x226)*x227)==x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = -1LL;
	int64_t x230 = -1LL;
	volatile uint8_t x231 = UINT8_MAX;
	int32_t x232 = -1673481;
	volatile int32_t t48 = 18517891;

	t48 = (((x229/x230)*x231)==x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x237 = -1;
	int32_t x238 = 9320686;
	uint8_t x239 = 4U;
	int8_t x240 = INT8_MIN;

	t49 = (((x237/x238)*x239)==x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x241 = -5656353LL;
	int64_t x242 = -1LL;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = 3U;

	t50 = (((x241/x242)*x243)==x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x246 = 28284258177LLU;
	static int8_t x248 = -38;
	int32_t t51 = -122531794;

	t51 = (((x245/x246)*x247)==x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = -4661;
	uint64_t x251 = 102193LLU;
	uint8_t x252 = 60U;

	t52 = (((x249/x250)*x251)==x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x254 = INT32_MIN;
	static volatile uint64_t x255 = 4535563LLU;
	uint32_t x256 = 485894825U;
	int32_t t53 = -3;

	t53 = (((x253/x254)*x255)==x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x257 = UINT64_MAX;
	uint64_t x258 = 79311967LLU;
	static uint32_t x259 = 369U;
	int8_t x260 = INT8_MIN;

	t54 = (((x257/x258)*x259)==x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -1;
	int32_t x262 = 1995;
	int16_t x263 = INT16_MIN;
	volatile int16_t x264 = INT16_MAX;
	static volatile int32_t t55 = 748107551;

	t55 = (((x261/x262)*x263)==x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = -1;
	static uint64_t x266 = 2146268430449037193LLU;
	static int16_t x267 = INT16_MIN;
	static int32_t t56 = -55382;

	t56 = (((x265/x266)*x267)==x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x269 = 1;
	volatile int64_t x270 = INT64_MAX;
	volatile int32_t x271 = 7587;
	static int8_t x272 = -1;
	int32_t t57 = -1;

	t57 = (((x269/x270)*x271)==x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x274 = 57646533LLU;
	uint64_t x275 = 26298888517482LLU;
	int8_t x276 = INT8_MIN;
	volatile int32_t t58 = -12;

	t58 = (((x273/x274)*x275)==x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x279 = -209724LL;
	uint32_t x280 = 431045719U;
	volatile int32_t t59 = 35713;

	t59 = (((x277/x278)*x279)==x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x283 = 238U;
	int32_t t60 = -11094617;

	t60 = (((x281/x282)*x283)==x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x285 = 23U;
	static volatile int8_t x286 = -1;
	int32_t t61 = -19029514;

	t61 = (((x285/x286)*x287)==x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = -578314118016543240LL;
	int8_t x291 = 29;
	int32_t x292 = INT32_MIN;
	volatile int32_t t62 = -119970945;

	t62 = (((x289/x290)*x291)==x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MAX;
	volatile int8_t x296 = INT8_MIN;
	static int32_t t63 = -7022850;

	t63 = (((x293/x294)*x295)==x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x297 = 4;
	static int8_t x298 = 25;
	int16_t x299 = INT16_MIN;
	static volatile int32_t x300 = 343;
	volatile int32_t t64 = 263056428;

	t64 = (((x297/x298)*x299)==x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 172U;
	uint64_t x303 = 449477652799503LLU;
	volatile uint8_t x304 = 4U;
	int32_t t65 = -8968;

	t65 = (((x301/x302)*x303)==x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = UINT16_MAX;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = 46035LL;
	static int64_t x308 = -1841254LL;

	t66 = (((x305/x306)*x307)==x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x313 = 323205593U;
	volatile int32_t x314 = -662061;
	volatile int8_t x316 = INT8_MAX;
	static int32_t t67 = 6;

	t67 = (((x313/x314)*x315)==x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x318 = INT16_MIN;
	static int64_t x319 = 9479864926546LL;
	int64_t x320 = 105444LL;
	volatile int32_t t68 = 337798;

	t68 = (((x317/x318)*x319)==x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x323 = 0;
	uint32_t x324 = 31866U;
	volatile int32_t t69 = -10;

	t69 = (((x321/x322)*x323)==x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x326 = 187247987903649LLU;
	int8_t x327 = -1;
	static int32_t t70 = 726374355;

	t70 = (((x325/x326)*x327)==x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = UINT32_MAX;
	static uint8_t x330 = 1U;
	int32_t x331 = -1471;
	static int64_t x332 = INT64_MIN;
	int32_t t71 = -1980194;

	t71 = (((x329/x330)*x331)==x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x338 = -1;
	int32_t x339 = 111;
	static int16_t x340 = 10;
	int32_t t72 = 14457;

	t72 = (((x337/x338)*x339)==x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = UINT64_MAX;
	static volatile int64_t x342 = -6LL;
	int64_t x343 = -1LL;
	int32_t x344 = -3514981;
	static int32_t t73 = 1124;

	t73 = (((x341/x342)*x343)==x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = 3U;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t74 = -705554715;

	t74 = (((x345/x346)*x347)==x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x349 = INT64_MAX;
	static int32_t x350 = INT32_MAX;
	volatile uint32_t x351 = 11551U;
	int8_t x352 = INT8_MIN;
	int32_t t75 = -860950;

	t75 = (((x349/x350)*x351)==x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x353 = 3418U;
	int16_t x354 = INT16_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t76 = 46627;

	t76 = (((x353/x354)*x355)==x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = -1;
	static int64_t x364 = 37589554076493LL;
	static volatile int32_t t77 = 3800802;

	t77 = (((x361/x362)*x363)==x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MAX;
	volatile int32_t t78 = 7136839;

	t78 = (((x369/x370)*x371)==x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile uint64_t x374 = UINT64_MAX;
	int64_t x375 = -2LL;
	int64_t x376 = -1LL;
	int32_t t79 = -57;

	t79 = (((x373/x374)*x375)==x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = -641;
	volatile int16_t x378 = INT16_MIN;
	static uint16_t x379 = 390U;
	int8_t x380 = -1;
	static volatile int32_t t80 = 61723;

	t80 = (((x377/x378)*x379)==x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x381 = 189977811170LLU;
	int16_t x382 = -1;
	volatile uint8_t x384 = 29U;

	t81 = (((x381/x382)*x383)==x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MIN;
	int8_t x387 = -50;
	int32_t t82 = 83692675;

	t82 = (((x385/x386)*x387)==x388);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = 67287LL;
	uint64_t x390 = 32374LLU;
	volatile uint64_t x391 = 592961094047831LLU;
	uint16_t x392 = 14475U;

	t83 = (((x389/x390)*x391)==x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = INT16_MIN;
	static int64_t x394 = -31LL;
	int32_t x395 = -1;
	int16_t x396 = INT16_MIN;

	t84 = (((x393/x394)*x395)==x396);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = INT8_MAX;
	volatile int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	uint32_t x400 = 6753869U;
	volatile int32_t t85 = 1247738;

	t85 = (((x397/x398)*x399)==x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x401 = INT8_MAX;
	uint64_t x402 = 53842950223635318LLU;
	int16_t x403 = -15581;
	int8_t x404 = -1;
	static volatile int32_t t86 = 3091333;

	t86 = (((x401/x402)*x403)==x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x405 = 925U;
	static int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -1;
	volatile int32_t t87 = -31;

	t87 = (((x405/x406)*x407)==x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = -1;
	volatile int8_t x410 = -1;
	static int16_t x412 = -1;

	t88 = (((x409/x410)*x411)==x412);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = -1;
	int64_t x414 = -1LL;
	static uint32_t x415 = 89U;
	int8_t x416 = INT8_MAX;
	int32_t t89 = 330;

	t89 = (((x413/x414)*x415)==x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x419 = UINT16_MAX;
	int32_t t90 = -17415;

	t90 = (((x417/x418)*x419)==x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x421 = INT32_MIN;
	volatile int16_t x422 = 35;
	uint32_t x424 = 465049748U;
	int32_t t91 = -865;

	t91 = (((x421/x422)*x423)==x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x425 = 109U;
	int64_t x426 = INT64_MIN;
	int16_t x427 = 0;
	volatile int64_t x428 = INT64_MIN;
	volatile int32_t t92 = -1;

	t92 = (((x425/x426)*x427)==x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = UINT64_MAX;
	int32_t x430 = 8;
	int16_t x431 = 1;
	int16_t x432 = -1;
	int32_t t93 = 3373849;

	t93 = (((x429/x430)*x431)==x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = 906;
	int32_t x434 = -1;
	volatile int8_t x436 = -6;
	int32_t t94 = -339328;

	t94 = (((x433/x434)*x435)==x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = -1;
	int32_t x438 = INT32_MAX;
	uint64_t x439 = 6289067718LLU;
	int32_t t95 = -529021;

	t95 = (((x437/x438)*x439)==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x443 = 15665;

	t96 = (((x441/x442)*x443)==x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = -1;
	int64_t x446 = 8988603033201LL;
	static uint8_t x447 = UINT8_MAX;
	int32_t x448 = INT32_MAX;
	volatile int32_t t97 = 1855;

	t97 = (((x445/x446)*x447)==x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x457 = INT8_MAX;
	volatile uint64_t x458 = UINT64_MAX;
	volatile int16_t x459 = 1;
	int64_t x460 = INT64_MAX;
	int32_t t98 = -405568;

	t98 = (((x457/x458)*x459)==x460);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x462 = INT32_MIN;
	volatile int16_t x463 = INT16_MAX;
	static volatile int16_t x464 = -1;
	int32_t t99 = -69185546;

	t99 = (((x461/x462)*x463)==x464);

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

