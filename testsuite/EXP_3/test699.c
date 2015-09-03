#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -5;
static int64_t x3 = INT64_MIN;
uint16_t x7 = 2741U;
volatile int32_t t2 = -4561;
uint64_t x18 = 1396LLU;
int32_t x23 = 1;
int64_t x24 = INT64_MAX;
volatile int32_t t5 = -8528868;
int64_t x26 = -1LL;
uint32_t x30 = 3976U;
uint64_t x34 = UINT64_MAX;
int64_t x39 = 1281144000697LL;
uint64_t x48 = 6084377555991830LLU;
int32_t t11 = 8956;
int16_t x49 = 190;
int64_t x51 = INT64_MAX;
volatile int8_t x55 = INT8_MIN;
int32_t t13 = 218527516;
volatile uint8_t x79 = UINT8_MAX;
int32_t t19 = -30602;
int8_t x98 = -1;
int16_t x103 = INT16_MIN;
int32_t t22 = -4;
volatile uint64_t x112 = 13016040114873LLU;
int8_t x114 = -1;
int8_t x122 = -1;
volatile int32_t t27 = 2096;
static uint8_t x131 = 8U;
uint8_t x133 = 7U;
int16_t x137 = -12;
int64_t x145 = INT64_MIN;
uint8_t x156 = 1U;
int32_t t33 = 1;
int32_t t35 = 0;
static int8_t x165 = 17;
volatile int32_t t36 = -1;
volatile int32_t t37 = 763237;
static uint64_t x175 = UINT64_MAX;
int8_t x176 = INT8_MIN;
uint8_t x178 = UINT8_MAX;
volatile int64_t x185 = 390714LL;
int32_t x186 = 1;
volatile int64_t x194 = -122080400157215375LL;
int32_t x198 = INT32_MAX;
int64_t x201 = -1LL;
uint8_t x202 = 8U;
int32_t x204 = -1;
int32_t t44 = -150;
static int8_t x206 = -1;
int16_t x209 = 1;
int32_t x224 = INT32_MIN;
int32_t x226 = INT32_MAX;
static int32_t t50 = -657021;
volatile int16_t x237 = INT16_MIN;
int64_t x239 = -46152332734402LL;
uint8_t x240 = 6U;
static volatile int32_t t54 = 0;
int32_t t55 = -1;
volatile int32_t t56 = -39375;
int8_t x260 = INT8_MIN;
int32_t x263 = INT32_MAX;
uint64_t x264 = 424181932LLU;
volatile uint32_t x269 = UINT32_MAX;
int32_t x271 = -1;
int32_t x272 = INT32_MAX;
int32_t x276 = INT32_MIN;
int8_t x280 = -1;
volatile int32_t t63 = -215000;
int32_t t65 = 211569;
static int32_t x301 = -1;
int16_t x303 = INT16_MIN;
volatile int32_t t67 = 187509805;
volatile uint64_t x306 = 13462788165502152LLU;
static uint32_t x315 = UINT32_MAX;
int8_t x320 = INT8_MIN;
int32_t x330 = INT32_MAX;
int64_t x334 = -4042140235811748LL;
int32_t x336 = INT32_MIN;
static int32_t t74 = -6468;
int32_t x338 = INT32_MIN;
uint64_t x345 = 4996LLU;
int8_t x346 = 13;
int32_t t77 = -109523593;
volatile int64_t x351 = -1LL;
static uint32_t x355 = 2124498186U;
int16_t x360 = -7588;
uint32_t x381 = 17299878U;
volatile int16_t x382 = -1;
uint16_t x386 = UINT16_MAX;
int8_t x387 = 3;
static int32_t x395 = -453594263;
int64_t x396 = INT64_MAX;
volatile int32_t x397 = -29;
int64_t x398 = INT64_MIN;
volatile int32_t x404 = INT32_MIN;
int8_t x413 = INT8_MIN;
static uint16_t x415 = 1965U;
volatile uint16_t x418 = 154U;
int32_t x427 = 1524834;
static volatile int32_t x434 = -84;
int32_t t95 = 1022;
int16_t x448 = INT16_MAX;
int8_t x451 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 392583;

	t0 = ((x1-x2)<=(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 77685765LL;
	uint16_t x6 = 446U;
	uint64_t x8 = 16468303620LLU;
	volatile int32_t t1 = 51;

	t1 = ((x5-x6)<=(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 7LLU;
	static uint32_t x10 = UINT32_MAX;
	static uint8_t x11 = 86U;
	int64_t x12 = INT64_MIN;

	t2 = ((x9-x10)<=(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	static uint16_t x14 = UINT16_MAX;
	volatile int32_t x15 = 4;
	uint16_t x16 = 113U;
	static int32_t t3 = 238;

	t3 = ((x13-x14)<=(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -8602776;

	t4 = ((x17-x18)<=(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int32_t x22 = -1;

	t5 = ((x21-x22)<=(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MAX;
	int32_t t6 = -8167571;

	t6 = ((x25-x26)<=(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7929U;
	static uint32_t x31 = 1268636843U;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 1;

	t7 = ((x29-x30)<=(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int16_t x35 = -1;
	volatile uint8_t x36 = UINT8_MAX;
	static int32_t t8 = -116862;

	t8 = ((x33-x34)<=(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static int16_t x38 = -1;
	static int32_t x40 = -31511;
	volatile int32_t t9 = -104039859;

	t9 = ((x37-x38)<=(x39%x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 10616LLU;
	int64_t x42 = 484576333931326864LL;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 120891355U;
	int32_t t10 = 0;

	t10 = ((x41-x42)<=(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MAX;
	uint32_t x47 = 10773281U;

	t11 = ((x45-x46)<=(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 5981065;

	t12 = ((x49-x50)<=(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x54 = -1LL;
	static uint16_t x56 = 1449U;

	t13 = ((x53-x54)<=(x55%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	volatile uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MAX;
	int32_t x68 = 2;
	volatile int32_t t14 = -2;

	t14 = ((x65-x66)<=(x67%x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	static uint32_t x70 = 505067U;
	int32_t x71 = 15;
	volatile int64_t x72 = -110757395LL;
	volatile int32_t t15 = 0;

	t15 = ((x69-x70)<=(x71%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = -1LL;
	volatile int8_t x74 = -1;
	int16_t x75 = -1;
	static volatile int64_t x76 = INT64_MAX;
	static volatile int32_t t16 = -937199304;

	t16 = ((x73-x74)<=(x75%x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = 17005U;
	uint64_t x78 = 1829114263812813100LLU;
	int16_t x80 = -1;
	int32_t t17 = -31687829;

	t17 = ((x77-x78)<=(x79%x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile uint64_t x82 = 37617428LLU;
	volatile int64_t x83 = -1LL;
	volatile int16_t x84 = 582;
	volatile int32_t t18 = 138;

	t18 = ((x81-x82)<=(x83%x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 39U;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 1254621LLU;

	t19 = ((x85-x86)<=(x87%x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -1LL;
	int16_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int32_t x92 = INT32_MAX;
	volatile int32_t t20 = -101718;

	t20 = ((x89-x90)<=(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = INT8_MIN;
	static int32_t x99 = INT32_MIN;
	uint32_t x100 = UINT32_MAX;
	int32_t t21 = 1;

	t21 = ((x97-x98)<=(x99%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = UINT8_MAX;
	static int64_t x102 = -1LL;
	static int32_t x104 = -1;

	t22 = ((x101-x102)<=(x103%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = 2356663059974195LL;
	uint32_t x106 = 1237U;
	static int64_t x107 = 896LL;
	int64_t x108 = INT64_MIN;
	int32_t t23 = 12049;

	t23 = ((x105-x106)<=(x107%x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	int8_t x110 = -1;
	static volatile uint16_t x111 = 2U;
	volatile int32_t t24 = -83726165;

	t24 = ((x109-x110)<=(x111%x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 90U;
	int64_t x115 = INT64_MIN;
	volatile uint16_t x116 = 484U;
	int32_t t25 = -95124;

	t25 = ((x113-x114)<=(x115%x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	static volatile int16_t x124 = INT16_MIN;
	static volatile int32_t t26 = 1002403;

	t26 = ((x121-x122)<=(x123%x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MAX;
	static uint32_t x126 = 685U;
	static int32_t x127 = 1;
	uint32_t x128 = 185852114U;

	t27 = ((x125-x126)<=(x127%x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	volatile uint32_t x130 = UINT32_MAX;
	static uint64_t x132 = 38LLU;
	volatile int32_t t28 = 52229;

	t28 = ((x129-x130)<=(x131%x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x134 = -19;
	volatile uint32_t x135 = 23504362U;
	static uint64_t x136 = 1231123LLU;
	volatile int32_t t29 = 474957;

	t29 = ((x133-x134)<=(x135%x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x138 = 70609054489522LLU;
	volatile int8_t x139 = -1;
	static volatile int8_t x140 = -1;
	static volatile int32_t t30 = 32305725;

	t30 = ((x137-x138)<=(x139%x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x141 = 422;
	int16_t x142 = -1;
	static uint16_t x143 = 658U;
	uint32_t x144 = 37068U;
	static volatile int32_t t31 = -181495;

	t31 = ((x141-x142)<=(x143%x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x146 = -1;
	uint32_t x147 = 2750U;
	static uint64_t x148 = 53981LLU;
	volatile int32_t t32 = 352497131;

	t32 = ((x145-x146)<=(x147%x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 150269746859LL;
	volatile int8_t x154 = 43;
	volatile int16_t x155 = -12287;

	t33 = ((x153-x154)<=(x155%x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = -1;
	static int8_t x158 = INT8_MIN;
	uint64_t x159 = UINT64_MAX;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t34 = 5965120;

	t34 = ((x157-x158)<=(x159%x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = 9489U;

	t35 = ((x161-x162)<=(x163%x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x166 = 609738LLU;
	int64_t x167 = 42LL;
	int32_t x168 = INT32_MIN;

	t36 = ((x165-x166)<=(x167%x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	volatile uint16_t x170 = 39U;
	static int16_t x171 = INT16_MIN;
	uint8_t x172 = 3U;

	t37 = ((x169-x170)<=(x171%x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MAX;
	uint32_t x174 = UINT32_MAX;
	int32_t t38 = -4911;

	t38 = ((x173-x174)<=(x175%x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x177 = -3;
	int16_t x179 = INT16_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t39 = 446908730;

	t39 = ((x177-x178)<=(x179%x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	volatile int32_t t40 = -3213690;

	t40 = ((x185-x186)<=(x187%x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = 0;
	int8_t x190 = -1;
	uint8_t x191 = 27U;
	int16_t x192 = -1;
	int32_t t41 = 1979044;

	t41 = ((x189-x190)<=(x191%x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x193 = 2878U;
	int8_t x195 = 2;
	int8_t x196 = INT8_MAX;
	int32_t t42 = -3726349;

	t42 = ((x193-x194)<=(x195%x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MAX;
	uint8_t x199 = 100U;
	int16_t x200 = INT16_MIN;
	int32_t t43 = 30;

	t43 = ((x197-x198)<=(x199%x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x203 = 290511U;

	t44 = ((x201-x202)<=(x203%x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MIN;
	volatile int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MAX;
	volatile int32_t t45 = 245868;

	t45 = ((x205-x206)<=(x207%x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x210 = -2504930141LL;
	uint32_t x211 = 0U;
	int32_t x212 = INT32_MAX;
	static volatile int32_t t46 = 7;

	t46 = ((x209-x210)<=(x211%x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MIN;
	volatile uint8_t x218 = 0U;
	static int8_t x219 = -19;
	static int8_t x220 = -1;
	volatile int32_t t47 = -85490;

	t47 = ((x217-x218)<=(x219%x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 63U;
	int32_t x222 = -76344;
	int8_t x223 = -1;
	volatile int32_t t48 = 654;

	t48 = ((x221-x222)<=(x223%x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int8_t x227 = INT8_MAX;
	int16_t x228 = 6352;
	volatile int32_t t49 = -526802227;

	t49 = ((x225-x226)<=(x227%x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x229 = UINT64_MAX;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = 7U;
	int64_t x232 = INT64_MIN;

	t50 = ((x229-x230)<=(x231%x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x233 = INT32_MIN;
	uint32_t x234 = UINT32_MAX;
	uint32_t x235 = UINT32_MAX;
	volatile int16_t x236 = INT16_MAX;
	int32_t t51 = 431314;

	t51 = ((x233-x234)<=(x235%x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x238 = -1;
	int32_t t52 = -54;

	t52 = ((x237-x238)<=(x239%x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = UINT8_MAX;
	volatile uint16_t x242 = 30323U;
	uint8_t x243 = 0U;
	uint16_t x244 = 1U;
	volatile int32_t t53 = -394642214;

	t53 = ((x241-x242)<=(x243%x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x245 = 18040214LLU;
	int32_t x246 = 192649;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;

	t54 = ((x245-x246)<=(x247%x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	int16_t x250 = -1350;
	uint16_t x251 = 26U;
	uint64_t x252 = 7061579421087LLU;

	t55 = ((x249-x250)<=(x251%x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 2733941413LLU;
	int8_t x254 = INT8_MIN;
	static uint64_t x255 = 2992550926LLU;
	int8_t x256 = -1;

	t56 = ((x253-x254)<=(x255%x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 2616U;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	volatile int32_t t57 = 3099;

	t57 = ((x257-x258)<=(x259%x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = 24;
	uint8_t x262 = 86U;
	static int32_t t58 = 15499456;

	t58 = ((x261-x262)<=(x263%x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = -37;
	int16_t x266 = -1;
	int32_t x267 = INT32_MIN;
	volatile int16_t x268 = INT16_MAX;
	int32_t t59 = -588815;

	t59 = ((x265-x266)<=(x267%x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x270 = 826647556;
	int32_t t60 = -371;

	t60 = ((x269-x270)<=(x271%x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 28471238909152575LLU;
	int64_t x274 = INT64_MAX;
	int16_t x275 = -27;
	int32_t t61 = -4171;

	t61 = ((x273-x274)<=(x275%x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	int32_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	int32_t t62 = 0;

	t62 = ((x277-x278)<=(x279%x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x285 = 43U;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = UINT64_MAX;
	uint64_t x288 = UINT64_MAX;

	t63 = ((x285-x286)<=(x287%x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MAX;
	static volatile int32_t t64 = 9962;

	t64 = ((x289-x290)<=(x291%x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = -5;

	t65 = ((x293-x294)<=(x295%x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	int8_t x298 = INT8_MAX;
	static int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t66 = -244422848;

	t66 = ((x297-x298)<=(x299%x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x302 = -1;
	int16_t x304 = 75;

	t67 = ((x301-x302)<=(x303%x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 2917U;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t68 = -3562;

	t68 = ((x305-x306)<=(x307%x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = 0;
	static uint16_t x311 = 193U;
	uint8_t x312 = 17U;
	int32_t t69 = -332072;

	t69 = ((x309-x310)<=(x311%x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = 40175162519746303LLU;
	int8_t x314 = -16;
	int16_t x316 = 220;
	int32_t t70 = 278867;

	t70 = ((x313-x314)<=(x315%x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x318 = -28;
	int16_t x319 = INT16_MIN;
	int32_t t71 = -51502425;

	t71 = ((x317-x318)<=(x319%x320));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = 6;
	int32_t x326 = -7;
	volatile int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t72 = -3;

	t72 = ((x325-x326)<=(x327%x328));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 6258U;
	int8_t x331 = -1;
	static volatile int8_t x332 = -14;
	volatile int32_t t73 = -494868892;

	t73 = ((x329-x330)<=(x331%x332));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	int64_t x335 = INT64_MIN;

	t74 = ((x333-x334)<=(x335%x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = 57297LL;
	static uint16_t x339 = 1544U;
	uint16_t x340 = 13605U;
	int32_t t75 = 4099741;

	t75 = ((x337-x338)<=(x339%x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x341 = UINT16_MAX;
	static volatile int8_t x342 = -4;
	static int8_t x343 = INT8_MAX;
	uint16_t x344 = 63U;
	static int32_t t76 = -83671;

	t76 = ((x341-x342)<=(x343%x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x347 = UINT32_MAX;
	static int64_t x348 = INT64_MIN;

	t77 = ((x345-x346)<=(x347%x348));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = -1LL;
	static volatile int8_t x350 = 5;
	uint8_t x352 = 8U;
	int32_t t78 = -75;

	t78 = ((x349-x350)<=(x351%x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x353 = 136569209U;
	int8_t x354 = -1;
	static int32_t x356 = -139833010;
	int32_t t79 = 1858;

	t79 = ((x353-x354)<=(x355%x356));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x357 = INT16_MIN;
	uint32_t x358 = 2818U;
	volatile int32_t x359 = 539354;
	volatile int32_t t80 = -928241319;

	t80 = ((x357-x358)<=(x359%x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = -16;
	int64_t x364 = INT64_MIN;
	static int32_t t81 = 9066;

	t81 = ((x361-x362)<=(x363%x364));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x369 = 87895030885753577LL;
	static int8_t x370 = INT8_MAX;
	int64_t x371 = 0LL;
	volatile int32_t x372 = -1;
	int32_t t82 = -2;

	t82 = ((x369-x370)<=(x371%x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x373 = 5U;
	int8_t x374 = INT8_MAX;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MIN;
	static int32_t t83 = -54821;

	t83 = ((x373-x374)<=(x375%x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x383 = INT32_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t84 = 222;

	t84 = ((x381-x382)<=(x383%x384));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x388 = -1;
	int32_t t85 = -31742205;

	t85 = ((x385-x386)<=(x387%x388));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 560951LLU;
	int16_t x394 = 1;
	static int32_t t86 = -182495567;

	t86 = ((x393-x394)<=(x395%x396));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x399 = 1LL;
	static uint64_t x400 = UINT64_MAX;
	volatile int32_t t87 = 105344;

	t87 = ((x397-x398)<=(x399%x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint32_t x402 = 2433U;
	volatile int16_t x403 = -1;
	volatile int32_t t88 = -20846105;

	t88 = ((x401-x402)<=(x403%x404));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x405 = UINT16_MAX;
	static int32_t x406 = -226489078;
	static uint16_t x407 = 0U;
	static uint64_t x408 = 3124870LLU;
	static volatile int32_t t89 = 380;

	t89 = ((x405-x406)<=(x407%x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x414 = -1;
	int32_t x416 = INT32_MAX;
	int32_t t90 = -381918;

	t90 = ((x413-x414)<=(x415%x416));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x417 = UINT32_MAX;
	static volatile int64_t x419 = 9LL;
	uint32_t x420 = UINT32_MAX;
	volatile int32_t t91 = -182766;

	t91 = ((x417-x418)<=(x419%x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = -1;
	int16_t x422 = 401;
	int32_t x423 = -1;
	uint8_t x424 = 38U;
	int32_t t92 = -480;

	t92 = ((x421-x422)<=(x423%x424));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x425 = 66367110U;
	static volatile int32_t x426 = -740891041;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t93 = -106258;

	t93 = ((x425-x426)<=(x427%x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x429 = UINT64_MAX;
	int64_t x430 = INT64_MAX;
	volatile int16_t x431 = -1;
	int16_t x432 = INT16_MAX;
	volatile int32_t t94 = -139;

	t94 = ((x429-x430)<=(x431%x432));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = INT8_MAX;
	static int8_t x435 = -9;
	volatile uint32_t x436 = UINT32_MAX;

	t95 = ((x433-x434)<=(x435%x436));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x437 = UINT8_MAX;
	int32_t x438 = -3280551;
	uint64_t x439 = 30LLU;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t96 = 0;

	t96 = ((x437-x438)<=(x439%x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = INT64_MIN;
	volatile int32_t x446 = INT32_MIN;
	uint8_t x447 = 0U;
	volatile int32_t t97 = 18;

	t97 = ((x445-x446)<=(x447%x448));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x449 = 645562118129638950LLU;
	static volatile uint16_t x450 = 0U;
	int16_t x452 = 1;
	volatile int32_t t98 = 1180260;

	t98 = ((x449-x450)<=(x451%x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = 751113;
	uint32_t x454 = UINT32_MAX;
	static int64_t x455 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	int32_t t99 = 10;

	t99 = ((x453-x454)<=(x455%x456));

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

