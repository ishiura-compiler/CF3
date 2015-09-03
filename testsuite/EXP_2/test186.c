#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x5 = INT32_MIN;
uint64_t x18 = UINT64_MAX;
volatile uint64_t x20 = 2836665099LLU;
static uint8_t x30 = 4U;
volatile int16_t x33 = -264;
int8_t x39 = -1;
int32_t x41 = -1;
int16_t x42 = -1;
static int64_t x45 = -2197061002394LL;
static int16_t x46 = -23;
int16_t x57 = INT16_MIN;
int32_t x66 = -1;
static int16_t x67 = -228;
int32_t t13 = 30025;
int16_t x79 = INT16_MIN;
uint32_t t16 = 3U;
uint8_t x84 = UINT8_MAX;
static int16_t x87 = 1;
int64_t x88 = INT64_MAX;
static volatile uint64_t t18 = 20LLU;
static int64_t t21 = -3LL;
uint8_t x101 = 1U;
int16_t x124 = INT16_MAX;
uint16_t x130 = 21581U;
uint8_t x142 = 6U;
volatile int64_t t26 = 10LL;
uint32_t t27 = 32074U;
int32_t x159 = INT32_MIN;
uint64_t t29 = 855162LLU;
volatile int16_t x163 = -1;
uint32_t t30 = 3305U;
volatile int64_t x181 = -1LL;
uint32_t x184 = 191966U;
uint64_t t35 = 310996041LLU;
int8_t x190 = INT8_MIN;
uint8_t x191 = UINT8_MAX;
volatile int32_t x192 = -163;
static int32_t t37 = -4891;
int8_t x202 = -1;
volatile uint32_t x208 = UINT32_MAX;
int64_t t40 = -56498271568275LL;
int32_t x217 = 23686689;
uint32_t x219 = 15261U;
volatile uint64_t x224 = 3968LLU;
int64_t x232 = -1LL;
int16_t x255 = -1;
uint64_t x258 = 75LLU;
volatile uint64_t t53 = 8510630650432409LLU;
int64_t x267 = -377817226836404383LL;
static volatile int32_t x268 = INT32_MIN;
int64_t t55 = 68050743445LL;
static int32_t x273 = 30491073;
static int32_t x274 = -13200000;
uint64_t x277 = UINT64_MAX;
static uint64_t t57 = 183568LLU;
uint64_t x281 = UINT64_MAX;
uint64_t t58 = 6693235322406LLU;
volatile uint32_t x286 = UINT32_MAX;
int32_t x288 = -294;
volatile int64_t t61 = 2640LL;
int16_t x298 = INT16_MIN;
uint32_t x306 = 64068U;
volatile uint32_t t64 = 15U;
int8_t x319 = INT8_MIN;
static int32_t x320 = INT32_MIN;
volatile int8_t x336 = -50;
int64_t x351 = -65LL;
volatile uint32_t x352 = 1759423U;
volatile int64_t t71 = 1432441514LL;
volatile int16_t x356 = -23;
static volatile uint64_t t72 = 590368605LLU;
uint64_t x359 = 150519429826913LLU;
int16_t x367 = INT16_MAX;
uint64_t x381 = UINT64_MAX;
volatile uint16_t x382 = UINT16_MAX;
uint16_t x400 = 2U;
volatile uint32_t t81 = 48267U;
uint32_t x403 = UINT32_MAX;
int64_t x409 = 640390054952LL;
volatile uint64_t t84 = 148362LLU;
static uint64_t x418 = UINT64_MAX;
uint32_t x421 = UINT32_MAX;
static uint8_t x422 = 1U;
int16_t x425 = INT16_MIN;
static int16_t x431 = -1;
int8_t x437 = -1;
volatile int32_t x439 = INT32_MAX;
volatile uint64_t x440 = 15026026681LLU;
volatile int16_t x443 = INT16_MIN;
int32_t t92 = 146306094;
int16_t x451 = -1;
int32_t x454 = 3;
static int64_t t95 = 639571016934984LL;
uint16_t x461 = 43U;
int16_t x479 = 3685;


void f0(void) {
	static uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 55U;
	volatile int8_t x8 = -6;
	volatile uint64_t t0 = 8067682921237651LLU;

	t0 = ((x5-(x6-x7))/x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x10 = -1LL;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	uint64_t t1 = 2LLU;

	t1 = ((x9-(x10-x11))/x12);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 25U;
	static uint64_t x14 = 52836447646402LLU;
	int32_t x15 = 12007162;
	uint16_t x16 = 678U;
	uint64_t t2 = 618889097669897LLU;

	t2 = ((x13-(x14-x15))/x16);

	if (t2 != 27207509199519044LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 20U;
	static int32_t x19 = INT32_MIN;
	volatile uint64_t t3 = 3723796146LLU;

	t3 = ((x17-(x18-x19))/x20);

	if (t3 != 6502968601LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 14392;
	int64_t x26 = INT64_MIN;
	static int64_t x27 = INT64_MIN;
	int8_t x28 = -1;
	int64_t t4 = -457513521LL;

	t4 = ((x25-(x26-x27))/x28);

	if (t4 != -14392LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int8_t x31 = -1;
	volatile uint64_t x32 = UINT64_MAX;
	uint64_t t5 = 11LLU;

	t5 = ((x29-(x30-x31))/x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x34 = 1845068837248LLU;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = 219816806658868LLU;
	volatile uint64_t t6 = 297710216LLU;

	t6 = ((x33-(x34-x35))/x36);

	if (t6 != 41959LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = -3;
	static uint8_t x40 = UINT8_MAX;
	int64_t t7 = -22625008711595223LL;

	t7 = ((x37-(x38-x39))/x40);

	if (t7 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x43 = 3650262325594682538LL;
	int8_t x44 = INT8_MIN;
	volatile int64_t t8 = -16766822765LL;

	t8 = ((x41-(x42-x43))/x44);

	if (t8 != -28517674418708457LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x47 = -19;
	volatile uint64_t x48 = 119LLU;
	uint64_t t9 = 609952791551LLU;

	t9 = ((x45-(x46-x47))/x48);

	if (t9 != 155014637618895371LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 23U;
	int64_t x50 = -1LL;
	int8_t x51 = -1;
	static int64_t x52 = INT64_MIN;
	int64_t t10 = -449446563412709LL;

	t10 = ((x49-(x50-x51))/x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	volatile uint32_t x54 = 13U;
	static int8_t x55 = INT8_MAX;
	volatile uint16_t x56 = UINT16_MAX;
	volatile uint32_t t11 = 1028U;

	t11 = ((x53-(x54-x55))/x56);

	if (t11 != 65536U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = 1652449194LL;
	static uint32_t x59 = 8981480U;
	uint8_t x60 = 25U;
	static int64_t t12 = 459998590145815LL;

	t12 = ((x57-(x58-x59))/x60);

	if (t12 != -65740019LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = 1371855;
	int8_t x68 = -6;

	t13 = ((x65-(x66-x67))/x68);

	if (t13 != -228604) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x69 = 903U;
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MAX;
	uint16_t x72 = 20U;
	volatile uint32_t t14 = 0U;

	t14 = ((x69-(x70-x71))/x72);

	if (t14 != 51U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	static int16_t x74 = -481;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 368U;
	volatile int32_t t15 = 3677;

	t15 = ((x73-(x74-x75))/x76);

	if (t15 != 90) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 5190U;
	int32_t x78 = -3;
	uint32_t x80 = UINT32_MAX;

	t16 = ((x77-(x78-x79))/x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = -1;
	int8_t x82 = -1;
	static volatile int16_t x83 = -1;
	int32_t t17 = 118046670;

	t17 = ((x81-(x82-x83))/x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 96LLU;
	static int16_t x86 = -1;

	t18 = ((x85-(x86-x87))/x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = 7952309647425505LL;
	uint8_t x90 = 1U;
	uint64_t x91 = 1047629692088401LLU;
	volatile int8_t x92 = -1;
	volatile uint64_t t19 = 364828878365223988LLU;

	t19 = ((x89-(x90-x91))/x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = 721414906;
	int64_t x94 = -1LL;
	int16_t x95 = INT16_MAX;
	volatile uint64_t x96 = UINT64_MAX;
	volatile uint64_t t20 = 629286831462143LLU;

	t20 = ((x93-(x94-x95))/x96);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -6;
	volatile int8_t x98 = 4;
	static volatile uint8_t x99 = 52U;
	int64_t x100 = 10878080LL;

	t21 = ((x97-(x98-x99))/x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = INT32_MAX;
	uint8_t x103 = 1U;
	static int16_t x104 = INT16_MIN;
	static volatile int32_t t22 = 17387;

	t22 = ((x101-(x102-x103))/x104);

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x121 = 19898621253LLU;
	static uint32_t x122 = UINT32_MAX;
	static int32_t x123 = -29;
	uint64_t t23 = 51197995617154LLU;

	t23 = ((x121-(x122-x123))/x124);

	if (t23 != 607276LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = -3;
	volatile uint16_t x126 = 82U;
	static uint32_t x127 = UINT32_MAX;
	int8_t x128 = -35;
	uint32_t t24 = 1563563024U;

	t24 = ((x125-(x126-x127))/x128);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -1;
	volatile int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	volatile int32_t t25 = -61406607;

	t25 = ((x129-(x130-x131))/x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = -1;
	int64_t x143 = 117594221043047LL;
	int16_t x144 = INT16_MIN;

	t26 = ((x141-(x142-x143))/x144);

	if (t26 != -3588690827LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x145 = 14U;
	uint8_t x146 = 1U;
	static int16_t x147 = INT16_MIN;
	uint32_t x148 = 6962529U;

	t27 = ((x145-(x146-x147))/x148);

	if (t27 != 616U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MAX;
	static int64_t x154 = -60114967LL;
	int16_t x155 = INT16_MIN;
	int16_t x156 = 3572;
	int64_t t28 = 41507LL;

	t28 = ((x153-(x154-x155))/x156);

	if (t28 != 16820LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 252300952U;
	uint64_t x160 = 2695173649387LLU;

	t29 = ((x157-(x158-x159))/x160);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x161 = 15354U;
	uint32_t x162 = UINT32_MAX;
	int8_t x164 = -3;

	t30 = ((x161-(x162-x163))/x164);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = -1;
	static int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t31 = 1553138294117LL;

	t31 = ((x165-(x166-x167))/x168);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x169 = INT8_MIN;
	volatile int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MAX;
	uint32_t x172 = 348802U;
	static uint32_t t32 = 594U;

	t32 = ((x169-(x170-x171))/x172);

	if (t32 != 12313U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = 502773U;
	volatile uint32_t x174 = 17917438U;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = -1;
	volatile uint32_t t33 = 8314U;

	t33 = ((x173-(x174-x175))/x176);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x182 = -1LL;
	static uint8_t x183 = 18U;
	int64_t t34 = 3047766627LL;

	t34 = ((x181-(x182-x183))/x184);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = 7;
	int64_t x186 = 126711693LL;
	static int32_t x187 = -537616;
	volatile uint64_t x188 = 392857032488456LLU;

	t35 = ((x185-(x186-x187))/x188);

	if (t35 != 46955LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x189 = 10U;
	int32_t t36 = -133950;

	t36 = ((x189-(x190-x191))/x192);

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = 0U;
	int8_t x194 = INT8_MIN;
	volatile uint16_t x195 = 991U;
	static int32_t x196 = INT32_MAX;

	t37 = ((x193-(x194-x195))/x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	volatile int32_t x199 = -1;
	int64_t x200 = -349905418853226574LL;
	int64_t t38 = 1881413574055836331LL;

	t38 = ((x197-(x198-x199))/x200);

	if (t38 != -26LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MIN;
	int8_t x203 = -2;
	static int16_t x204 = 542;
	int32_t t39 = 19268218;

	t39 = ((x201-(x202-x203))/x204);

	if (t39 != -60) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x205 = 30429U;
	static int8_t x206 = -1;
	int64_t x207 = -363485176115645LL;

	t40 = ((x205-(x206-x207))/x208);

	if (t40 != -84630LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = -364501;
	uint16_t x210 = 1U;
	int16_t x211 = INT16_MIN;
	volatile uint8_t x212 = 23U;
	static int32_t t41 = 502166431;

	t41 = ((x209-(x210-x211))/x212);

	if (t41 != -17272) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x213 = 0;
	int16_t x214 = 1;
	uint64_t x215 = 33411LLU;
	int8_t x216 = 25;
	volatile uint64_t t42 = 4811958LLU;

	t42 = ((x213-(x214-x215))/x216);

	if (t42 != 1336LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x218 = 3U;
	static int32_t x220 = -326;
	uint32_t t43 = 80686U;

	t43 = ((x217-(x218-x219))/x220);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	int32_t x223 = -7930;
	static volatile uint64_t t44 = 11064LLU;

	t44 = ((x221-(x222-x223))/x224);

	if (t44 != 4648877034705026LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = -1;
	volatile uint64_t x226 = UINT64_MAX;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = -1;
	static uint64_t t45 = 51399737210481229LLU;

	t45 = ((x225-(x226-x227))/x228);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x229 = 1U;
	int8_t x230 = -1;
	int16_t x231 = -1;
	int64_t t46 = -655842841860498272LL;

	t46 = ((x229-(x230-x231))/x232);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x237 = INT32_MAX;
	uint8_t x238 = UINT8_MAX;
	uint8_t x239 = 18U;
	int8_t x240 = INT8_MIN;
	int32_t t47 = -23167;

	t47 = ((x237-(x238-x239))/x240);

	if (t47 != -16777214) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 0U;
	int64_t x243 = INT64_MAX;
	volatile int64_t x244 = -303332912664898795LL;
	static uint64_t t48 = 588576960LLU;

	t48 = ((x241-(x242-x243))/x244);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x245 = 0U;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t49 = 5247261LL;

	t49 = ((x245-(x246-x247))/x248);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MIN;
	static int8_t x250 = INT8_MAX;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = 13895;
	uint64_t t50 = 164LLU;

	t50 = ((x249-(x250-x251))/x252);

	if (t50 != 663790718737299LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x253 = -1LL;
	int16_t x254 = -37;
	volatile int16_t x256 = -7;
	int64_t t51 = 5406LL;

	t51 = ((x253-(x254-x255))/x256);

	if (t51 != -5LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = -497642;
	volatile int64_t x259 = INT64_MIN;
	uint64_t x260 = 4140677961956598LLU;
	volatile uint64_t t52 = 694LLU;

	t52 = ((x257-(x258-x259))/x260);

	if (t52 != 2227LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	static uint8_t x264 = 14U;

	t53 = ((x261-(x262-x263))/x264);

	if (t53 != 658812288346769709LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x265 = UINT64_MAX;
	uint64_t x266 = 2434140210818LLU;
	uint64_t t54 = 7133514LLU;

	t54 = ((x265-(x266-x267))/x268);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = 494169LL;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MIN;

	t55 = ((x269-(x270-x271))/x272);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x275 = -1LL;
	uint8_t x276 = UINT8_MAX;
	int64_t t56 = 9260868801401232LL;

	t56 = ((x273-(x274-x275))/x276);

	if (t56 != 171337LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x278 = INT8_MIN;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;

	t57 = ((x277-(x278-x279))/x280);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x282 = -1;
	int32_t x283 = -1980;
	static int16_t x284 = INT16_MIN;

	t58 = ((x281-(x282-x283))/x284);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = 0;
	volatile int16_t x287 = -4783;
	uint32_t t59 = 2U;

	t59 = ((x285-(x286-x287))/x288);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x289 = 53U;
	int64_t x290 = -2088024531343LL;
	uint16_t x291 = 0U;
	int8_t x292 = INT8_MIN;
	int64_t t60 = 2613377966LL;

	t60 = ((x289-(x290-x291))/x292);

	if (t60 != -16312691651LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x293 = 2U;
	int32_t x294 = 535580;
	volatile int64_t x295 = -52638LL;
	static int16_t x296 = INT16_MAX;

	t61 = ((x293-(x294-x295))/x296);

	if (t61 != -17LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t62 = 122289035337087LLU;

	t62 = ((x297-(x298-x299))/x300);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = 1;
	int64_t x302 = -1LL;
	static int8_t x303 = -1;
	uint64_t x304 = 13749260363LLU;
	volatile uint64_t t63 = 64350171LLU;

	t63 = ((x301-(x302-x303))/x304);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x305 = 3U;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = -3922;

	t64 = ((x305-(x306-x307))/x308);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	volatile int8_t x314 = -1;
	int8_t x315 = INT8_MIN;
	volatile int8_t x316 = INT8_MIN;
	int32_t t65 = 9156;

	t65 = ((x313-(x314-x315))/x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = 419199529LLU;
	int8_t x318 = -1;
	static volatile uint64_t t66 = 297776019LLU;

	t66 = ((x317-(x318-x319))/x320);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -55;
	static volatile int64_t x324 = INT64_MAX;
	int64_t t67 = 2345520907826LL;

	t67 = ((x321-(x322-x323))/x324);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = -1901;
	uint16_t x330 = UINT16_MAX;
	static int64_t x331 = -100985155210385125LL;
	static int32_t x332 = -167023;
	int64_t t68 = 10948LL;

	t68 = ((x329-(x330-x331))/x332);

	if (t68 != 604618257428LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x333 = INT32_MIN;
	static uint32_t x334 = 1144863127U;
	int32_t x335 = INT32_MIN;
	volatile uint32_t t69 = 354689U;

	t69 = ((x333-(x334-x335))/x336);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = -4;
	volatile uint64_t x343 = 65246644731783LLU;
	volatile uint64_t x344 = 484703852674749LLU;
	volatile uint64_t t70 = 0LLU;

	t70 = ((x341-(x342-x343))/x344);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;

	t71 = ((x349-(x350-x351))/x352);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x353 = 5073LLU;
	static int16_t x354 = -1;
	uint64_t x355 = UINT64_MAX;

	t72 = ((x353-(x354-x355))/x356);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x357 = 341U;
	int8_t x358 = -1;
	uint32_t x360 = 52730098U;
	volatile uint64_t t73 = 7029630LLU;

	t73 = ((x357-(x358-x359))/x360);

	if (t73 != 2854525LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x365 = -1455;
	uint8_t x366 = 0U;
	int8_t x368 = -2;
	volatile int32_t t74 = 2180;

	t74 = ((x365-(x366-x367))/x368);

	if (t74 != -15656) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x369 = INT32_MAX;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MAX;
	volatile int64_t x372 = INT64_MAX;
	int64_t t75 = 0LL;

	t75 = ((x369-(x370-x371))/x372);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x373 = INT16_MIN;
	uint64_t x374 = 423779343007LLU;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = UINT8_MAX;
	uint64_t t76 = 2863374361LLU;

	t76 = ((x373-(x374-x375))/x376);

	if (t76 != 36170084757158431LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x383 = INT8_MIN;
	uint16_t x384 = 1U;
	uint64_t t77 = 98547736375871LLU;

	t77 = ((x381-(x382-x383))/x384);

	if (t77 != 18446744073709485952LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x385 = INT16_MIN;
	uint64_t x386 = 3516830LLU;
	int8_t x387 = -1;
	uint16_t x388 = 2620U;
	uint64_t t78 = 4LLU;

	t78 = ((x385-(x386-x387))/x388);

	if (t78 != 7040742012864886LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 68722771U;
	int32_t x390 = INT32_MAX;
	static uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 16U;
	volatile uint32_t t79 = 5797940U;

	t79 = ((x389-(x390-x391))/x392);

	if (t79 != 138512901U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x393 = 1;
	int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	uint32_t x396 = 101U;
	uint64_t t80 = 4LLU;

	t80 = ((x393-(x394-x395))/x396);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = INT16_MAX;
	int16_t x398 = -797;
	uint32_t x399 = 13U;

	t81 = ((x397-(x398-x399))/x400);

	if (t81 != 16788U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = -1;
	int16_t x402 = -1;
	int16_t x404 = INT16_MIN;
	uint32_t t82 = 2970U;

	t82 = ((x401-(x402-x403))/x404);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x405 = -1LL;
	uint64_t x406 = 20999597755035LLU;
	int16_t x407 = 46;
	volatile uint64_t x408 = 5LLU;
	volatile uint64_t t83 = 282085079198LLU;

	t83 = ((x405-(x406-x407))/x408);

	if (t83 != 3689344614822359325LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x410 = 2U;
	volatile uint64_t x411 = 650859LLU;
	volatile int8_t x412 = INT8_MIN;

	t84 = ((x409-(x410-x411))/x412);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = 23;
	volatile int8_t x414 = 60;
	int16_t x415 = -1;
	int16_t x416 = INT16_MAX;
	int32_t t85 = -4110;

	t85 = ((x413-(x414-x415))/x416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = INT32_MIN;
	int32_t x419 = INT32_MIN;
	uint16_t x420 = 7915U;
	volatile uint64_t t86 = 497603573LLU;

	t86 = ((x417-(x418-x419))/x420);

	if (t86 != 2330605694177458LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x423 = INT8_MIN;
	uint32_t x424 = 3516U;
	volatile uint32_t t87 = 1527689U;

	t87 = ((x421-(x422-x423))/x424);

	if (t87 != 1221549U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x426 = INT32_MAX;
	static int64_t x427 = -1LL;
	int8_t x428 = -3;
	int64_t t88 = 231001733244098LL;

	t88 = ((x425-(x426-x427))/x428);

	if (t88 != 715838805LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x429 = 0U;
	int16_t x430 = 1;
	static int8_t x432 = INT8_MIN;
	uint32_t t89 = 8057U;

	t89 = ((x429-(x430-x431))/x432);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x438 = INT8_MAX;
	uint64_t t90 = 3223LLU;

	t90 = ((x437-(x438-x439))/x440);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	int32_t x444 = 8;
	static volatile int32_t t91 = 0;

	t91 = ((x441-(x442-x443))/x444);

	if (t91 != 268427264) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x445 = 0U;
	volatile int16_t x446 = -1;
	static uint8_t x447 = UINT8_MAX;
	int16_t x448 = 367;

	t92 = ((x445-(x446-x447))/x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x449 = 829349;
	int16_t x450 = INT16_MIN;
	uint16_t x452 = 4U;
	volatile int32_t t93 = 6830;

	t93 = ((x449-(x450-x451))/x452);

	if (t93 != 215529) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = INT8_MIN;
	int8_t x455 = -1;
	uint64_t x456 = 113805397134309LLU;
	static volatile uint64_t t94 = 2037493LLU;

	t94 = ((x453-(x454-x455))/x456);

	if (t94 != 162090LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x457 = 6904436;
	int32_t x458 = 39;
	int64_t x459 = 1869431706LL;
	int8_t x460 = -1;

	t95 = ((x457-(x458-x459))/x460);

	if (t95 != -1876336103LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x462 = UINT64_MAX;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = 341455U;
	uint64_t t96 = 2179369836923351LLU;

	t96 = ((x461-(x462-x463))/x464);

	if (t96 != 54023938942355LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MIN;
	volatile int32_t x476 = INT32_MAX;
	static volatile int32_t t97 = 29966;

	t97 = ((x473-(x474-x475))/x476);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x477 = INT8_MIN;
	uint64_t x478 = UINT64_MAX;
	static int32_t x480 = 286122559;
	volatile uint64_t t98 = 54806LLU;

	t98 = ((x477-(x478-x479))/x480);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = INT64_MIN;
	static volatile uint64_t x482 = 382378858702073LLU;
	int64_t x483 = 7868300880390LL;
	volatile uint8_t x484 = 42U;
	volatile uint64_t t99 = 28869620890563971LLU;

	t99 = ((x481-(x482-x483))/x484);

	if (t99 != 219595179197546526LLU) { NG(); } else { ; }
	
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

