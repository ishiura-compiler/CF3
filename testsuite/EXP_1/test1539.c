#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 105074U;
static int8_t x10 = INT8_MAX;
static volatile uint32_t x18 = UINT32_MAX;
int8_t x30 = INT8_MIN;
static uint64_t x32 = UINT64_MAX;
int64_t x33 = INT64_MAX;
uint32_t x36 = 8U;
uint32_t t5 = 1U;
volatile int32_t x49 = INT32_MAX;
uint32_t x72 = 125U;
volatile int32_t x74 = -675;
uint64_t x77 = 180LLU;
int8_t x82 = -1;
int8_t x85 = INT8_MIN;
volatile int64_t t16 = -12773LL;
int8_t x95 = INT8_MIN;
volatile int64_t t19 = 1LL;
int64_t x101 = -1LL;
uint32_t x110 = 1158U;
int32_t t26 = -311;
volatile int64_t x136 = INT64_MIN;
static int64_t t27 = 161876059020772649LL;
uint16_t x140 = 21U;
uint8_t x142 = 2U;
static int8_t x150 = INT8_MIN;
static int64_t t30 = -808372420762783LL;
volatile int64_t x153 = 578175LL;
int16_t x156 = INT16_MIN;
uint16_t x159 = UINT16_MAX;
uint64_t t33 = 111362281286498LLU;
static int16_t x167 = -1;
uint16_t x170 = 1U;
uint64_t x173 = 6664411155766307648LLU;
volatile int8_t x176 = -1;
static int32_t t36 = 40946;
int16_t x178 = INT16_MIN;
uint32_t x179 = 1101U;
static int16_t x181 = INT16_MIN;
static int64_t x185 = -3779073LL;
uint64_t x186 = 5LLU;
uint8_t x189 = UINT8_MAX;
int32_t x193 = 46846285;
int16_t x194 = INT16_MAX;
volatile int8_t x195 = INT8_MAX;
int8_t x204 = INT8_MIN;
static volatile int8_t x207 = -1;
int64_t x214 = INT64_MIN;
int8_t x215 = INT8_MIN;
int64_t t45 = -275062209411LL;
int8_t x222 = INT8_MAX;
uint64_t x225 = UINT64_MAX;
int8_t x226 = -1;
volatile uint32_t x233 = 92U;
volatile int16_t x235 = INT16_MAX;
int64_t x242 = INT64_MAX;
int32_t x243 = 19;
volatile int64_t t51 = 1156LL;
int64_t x248 = INT64_MIN;
int64_t t52 = -127LL;
uint32_t x251 = UINT32_MAX;
uint64_t x262 = 13823122153146238LLU;
static int64_t x269 = INT64_MAX;
static int16_t x273 = 116;
static int64_t x282 = INT64_MIN;
int16_t x284 = INT16_MIN;
volatile int16_t x287 = 28;
int8_t x294 = INT8_MIN;
int32_t x298 = -1;
int8_t x304 = -1;
int32_t x306 = 0;
volatile int32_t t67 = 11994482;
int64_t x313 = INT64_MIN;
int16_t x334 = INT16_MAX;
volatile uint64_t x337 = 38423559770171313LLU;
int16_t x339 = -1;
uint64_t x351 = 80LLU;
uint64_t x353 = UINT64_MAX;
int32_t t75 = -882;
static volatile int32_t t76 = 183397;
int8_t x364 = 31;
static int32_t t78 = -3;
uint32_t t79 = 13895093U;
uint16_t x377 = 1U;
int64_t t80 = -15005528254955LL;
uint64_t x384 = 958291187655578LLU;
uint8_t x385 = 71U;
int16_t x395 = INT16_MAX;
int16_t x396 = INT16_MAX;
int16_t x397 = 2459;
volatile uint64_t t85 = 14324365074367610LLU;
int64_t x402 = -1LL;
uint64_t t86 = 28LLU;
volatile int32_t t87 = 40296960;
int64_t x423 = INT64_MAX;
static volatile int64_t t89 = 85LL;
int32_t x434 = 15;
static volatile int32_t x442 = INT32_MIN;
volatile uint32_t t93 = 1456578636U;
volatile uint32_t t96 = 488U;
int8_t x457 = INT8_MIN;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int64_t x2 = 63738821029142LL;
	int32_t x4 = -4483;
	static volatile uint32_t t0 = 5456316U;

	t0 = (((x1<=x2)-x3)%x4);

	if (t0 != 4294862223U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 7;
	int64_t x11 = -1LL;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t1 = -1LL;

	t1 = (((x9<=x10)-x11)%x12);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = -12;
	static int32_t x19 = INT32_MAX;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t2 = -211;

	t2 = (((x17<=x18)-x19)%x20);

	if (t2 != -32766) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = 7774;
	static int64_t x27 = -3792446304LL;
	static int32_t x28 = INT32_MAX;
	volatile int64_t t3 = 425854006979LL;

	t3 = (((x25<=x26)-x27)%x28);

	if (t3 != 1644962657LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MIN;
	int32_t x31 = 10;
	volatile uint64_t t4 = 4305827413968LLU;

	t4 = (((x29<=x30)-x31)%x32);

	if (t4 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x34 = UINT64_MAX;
	int16_t x35 = 1;

	t5 = (((x33<=x34)-x35)%x36);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 3621068U;
	volatile int8_t x38 = 46;
	int8_t x39 = 2;
	static volatile int16_t x40 = INT16_MIN;
	static volatile int32_t t6 = -1;

	t6 = (((x37<=x38)-x39)%x40);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MAX;
	int8_t x43 = -1;
	volatile uint8_t x44 = 65U;
	int32_t t7 = -1310972;

	t7 = (((x41<=x42)-x43)%x44);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MAX;
	volatile int64_t x46 = -1511135640551455LL;
	static volatile uint32_t x47 = 69U;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t8 = 20LLU;

	t8 = (((x45<=x46)-x47)%x48);

	if (t8 != 4294967227LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = INT16_MIN;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = 577;
	int32_t t9 = 6509;

	t9 = (((x49<=x50)-x51)%x52);

	if (t9 != 456) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 5;
	static volatile int16_t x54 = -399;
	volatile int8_t x55 = 62;
	uint32_t x56 = 1612406U;
	volatile uint32_t t10 = 124U;

	t10 = (((x53<=x54)-x55)%x56);

	if (t10 != 1130056U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MAX;
	int8_t x59 = 3;
	int8_t x60 = INT8_MIN;
	int32_t t11 = 54243262;

	t11 = (((x57<=x58)-x59)%x60);

	if (t11 != -3) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MAX;
	int32_t x71 = INT32_MAX;
	volatile uint32_t t12 = 521623U;

	t12 = (((x69<=x70)-x71)%x72);

	if (t12 != 25U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x73 = UINT8_MAX;
	volatile int64_t x75 = -3151LL;
	uint8_t x76 = UINT8_MAX;
	volatile int64_t t13 = 0LL;

	t13 = (((x73<=x74)-x75)%x76);

	if (t13 != 91LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x78 = INT8_MAX;
	static volatile int32_t x79 = 3763;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t14 = 1;

	t14 = (((x77<=x78)-x79)%x80);

	if (t14 != -3763) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int16_t x83 = INT16_MAX;
	volatile int16_t x84 = INT16_MIN;
	static int32_t t15 = 479;

	t15 = (((x81<=x82)-x83)%x84);

	if (t15 != -32766) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x86 = UINT16_MAX;
	static uint32_t x87 = 1382U;
	int64_t x88 = -1LL;

	t16 = (((x85<=x86)-x87)%x88);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = -1848;
	static volatile int16_t x90 = 9667;
	uint16_t x91 = 5U;
	int32_t x92 = -1;
	static int32_t t17 = 1014211;

	t17 = (((x89<=x90)-x91)%x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x93 = INT64_MIN;
	int16_t x94 = -1;
	uint16_t x96 = 790U;
	volatile int32_t t18 = -159650041;

	t18 = (((x93<=x94)-x95)%x96);

	if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = INT16_MAX;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;

	t19 = (((x97<=x98)-x99)%x100);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 1U;
	static volatile int64_t x104 = INT64_MAX;
	static int64_t t20 = 0LL;

	t20 = (((x101<=x102)-x103)%x104);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	int16_t x112 = -1;
	int32_t t21 = 748;

	t21 = (((x109<=x110)-x111)%x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MAX;
	uint8_t x114 = 5U;
	static uint16_t x115 = 1U;
	static int32_t x116 = 16463;
	volatile int32_t t22 = 27531;

	t22 = (((x113<=x114)-x115)%x116);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x117 = -1LL;
	uint16_t x118 = 2807U;
	volatile int8_t x119 = -1;
	static volatile int16_t x120 = INT16_MAX;
	int32_t t23 = 866;

	t23 = (((x117<=x118)-x119)%x120);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = 594U;
	int64_t x123 = -1LL;
	static uint64_t x124 = UINT64_MAX;
	uint64_t t24 = 4188580236LLU;

	t24 = (((x121<=x122)-x123)%x124);

	if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = 29;
	uint8_t x126 = 0U;
	int32_t x127 = -423;
	static volatile int8_t x128 = -1;
	static int32_t t25 = -405999;

	t25 = (((x125<=x126)-x127)%x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x129 = 8692245U;
	int8_t x130 = -1;
	int16_t x131 = -2508;
	uint8_t x132 = 2U;

	t26 = (((x129<=x130)-x131)%x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = -1;
	int16_t x134 = -807;
	static volatile int8_t x135 = 4;

	t27 = (((x133<=x134)-x135)%x136);

	if (t27 != -4LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = -6;
	uint32_t x138 = UINT32_MAX;
	volatile int16_t x139 = INT16_MAX;
	int32_t t28 = -59890;

	t28 = (((x137<=x138)-x139)%x140);

	if (t28 != -6) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	int8_t x143 = 40;
	volatile int64_t x144 = INT64_MIN;
	static volatile int64_t t29 = 89873LL;

	t29 = (((x141<=x142)-x143)%x144);

	if (t29 != -39LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = 1627305;
	int64_t x151 = 0LL;
	int16_t x152 = 59;

	t30 = (((x149<=x150)-x151)%x152);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x154 = INT64_MIN;
	static volatile int32_t x155 = INT32_MAX;
	int32_t t31 = -13;

	t31 = (((x153<=x154)-x155)%x156);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = 25U;
	int32_t x158 = INT32_MAX;
	int32_t x160 = 9604;
	static volatile int32_t t32 = 1115;

	t32 = (((x157<=x158)-x159)%x160);

	if (t32 != -7910) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 25;
	volatile int32_t x162 = INT32_MIN;
	uint64_t x163 = 19169045745176LLU;
	static int64_t x164 = INT64_MAX;

	t33 = (((x161<=x162)-x163)%x164);

	if (t33 != 9223352867809030633LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 8212U;
	uint32_t x166 = UINT32_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	uint32_t t34 = 24U;

	t34 = (((x165<=x166)-x167)%x168);

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -764476;
	static int64_t x171 = -18981815395137LL;
	static uint32_t x172 = UINT32_MAX;
	volatile int64_t t35 = 197LL;

	t35 = (((x169<=x170)-x171)%x172);

	if (t35 != 2354918533LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x174 = 0;
	volatile uint16_t x175 = UINT16_MAX;

	t36 = (((x173<=x174)-x175)%x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 1897037565413LLU;
	uint64_t x180 = 267860558086LLU;
	volatile uint64_t t37 = 630421484LLU;

	t37 = (((x177<=x178)-x179)%x180);

	if (t37 != 4294966196LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x182 = 63U;
	volatile int64_t x183 = -2152878028071LL;
	uint16_t x184 = 86U;
	volatile int64_t t38 = 523759707LL;

	t38 = (((x181<=x182)-x183)%x184);

	if (t38 != 60LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x187 = INT8_MIN;
	int64_t x188 = 2LL;
	volatile int64_t t39 = -13879656417690LL;

	t39 = (((x185<=x186)-x187)%x188);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x190 = INT64_MIN;
	static volatile uint8_t x191 = 58U;
	int32_t x192 = -1;
	volatile int32_t t40 = -66;

	t40 = (((x189<=x190)-x191)%x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x196 = -2653448LL;
	volatile int64_t t41 = 224150867182LL;

	t41 = (((x193<=x194)-x195)%x196);

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	volatile int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	volatile int32_t t42 = -10;

	t42 = (((x201<=x202)-x203)%x204);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = 6004232725LLU;
	uint16_t x206 = 668U;
	uint8_t x208 = UINT8_MAX;
	int32_t t43 = 22008780;

	t43 = (((x205<=x206)-x207)%x208);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 1836U;
	volatile int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	int16_t x212 = INT16_MAX;
	static int32_t t44 = -377607456;

	t44 = (((x209<=x210)-x211)%x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = 15;
	int64_t x216 = INT64_MIN;

	t45 = (((x213<=x214)-x215)%x216);

	if (t45 != 128LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = UINT16_MAX;
	static int8_t x218 = INT8_MIN;
	uint8_t x219 = 16U;
	int32_t x220 = INT32_MIN;
	static int32_t t46 = -1577;

	t46 = (((x217<=x218)-x219)%x220);

	if (t46 != -16) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x221 = UINT64_MAX;
	static uint16_t x223 = 17U;
	int16_t x224 = 15;
	int32_t t47 = -1;

	t47 = (((x221<=x222)-x223)%x224);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x227 = UINT32_MAX;
	volatile uint8_t x228 = 75U;
	uint32_t t48 = 7U;

	t48 = (((x225<=x226)-x227)%x228);

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = INT8_MIN;
	static int8_t x230 = -1;
	uint8_t x231 = 7U;
	int32_t x232 = INT32_MIN;
	int32_t t49 = -140975084;

	t49 = (((x229<=x230)-x231)%x232);

	if (t49 != -6) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x234 = INT8_MAX;
	static int16_t x236 = INT16_MAX;
	volatile int32_t t50 = -1;

	t50 = (((x233<=x234)-x235)%x236);

	if (t50 != -32766) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 0U;
	volatile int64_t x244 = INT64_MIN;

	t51 = (((x241<=x242)-x243)%x244);

	if (t51 != -18LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 1393722LLU;
	int64_t x246 = INT64_MIN;
	volatile int8_t x247 = INT8_MIN;

	t52 = (((x245<=x246)-x247)%x248);

	if (t52 != 129LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = -381;
	uint64_t x250 = 2763323011303LLU;
	int64_t x252 = INT64_MAX;
	static int64_t t53 = 13871396404LL;

	t53 = (((x249<=x250)-x251)%x252);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = UINT16_MAX;
	uint64_t x254 = 3514537742130445463LLU;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t54 = -20651919;

	t54 = (((x253<=x254)-x255)%x256);

	if (t54 != 129) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -1LL;
	volatile int32_t x258 = INT32_MIN;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = -1;
	uint64_t t55 = 262283161777595LLU;

	t55 = (((x257<=x258)-x259)%x260);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x261 = INT32_MIN;
	uint16_t x263 = 12U;
	volatile uint16_t x264 = 322U;
	int32_t t56 = -3612;

	t56 = (((x261<=x262)-x263)%x264);

	if (t56 != -12) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -104453349LL;
	static int8_t x266 = -1;
	int64_t x267 = 181491LL;
	volatile int8_t x268 = -1;
	static volatile int64_t t57 = 1446LL;

	t57 = (((x265<=x266)-x267)%x268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x270 = INT64_MIN;
	static int8_t x271 = -1;
	volatile int64_t x272 = INT64_MIN;
	volatile int64_t t58 = -87472LL;

	t58 = (((x269<=x270)-x271)%x272);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x274 = 11;
	static int32_t x275 = 1;
	int64_t x276 = 8943413LL;
	int64_t t59 = 3932480LL;

	t59 = (((x273<=x274)-x275)%x276);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x277 = -2417427;
	int16_t x278 = -5744;
	uint8_t x279 = UINT8_MAX;
	static int8_t x280 = 57;
	volatile int32_t t60 = 487;

	t60 = (((x277<=x278)-x279)%x280);

	if (t60 != -26) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = -1561;
	int16_t x283 = -6800;
	volatile int32_t t61 = -4321654;

	t61 = (((x281<=x282)-x283)%x284);

	if (t61 != 6800) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 1U;
	uint8_t x286 = UINT8_MAX;
	int64_t x288 = INT64_MIN;
	int64_t t62 = 1628LL;

	t62 = (((x285<=x286)-x287)%x288);

	if (t62 != -27LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -12;
	static int16_t x290 = INT16_MIN;
	int32_t x291 = 31;
	int16_t x292 = -1;
	int32_t t63 = -66206950;

	t63 = (((x289<=x290)-x291)%x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x293 = 4781U;
	volatile int32_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t64 = 0U;

	t64 = (((x293<=x294)-x295)%x296);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = 5943U;
	int8_t x299 = -7;
	int32_t x300 = 993339993;
	static volatile int32_t t65 = 468780267;

	t65 = (((x297<=x298)-x299)%x300);

	if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x301 = 1004619U;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = 87928U;
	volatile uint32_t t66 = 347U;

	t66 = (((x301<=x302)-x303)%x304);

	if (t66 != 4294879369U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x305 = UINT16_MAX;
	static int16_t x307 = -1;
	int16_t x308 = INT16_MIN;

	t67 = (((x305<=x306)-x307)%x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x309 = INT32_MAX;
	int32_t x310 = INT32_MIN;
	volatile int8_t x311 = -1;
	static volatile uint16_t x312 = 29170U;
	volatile int32_t t68 = -12;

	t68 = (((x309<=x310)-x311)%x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = -1LL;
	int16_t x316 = INT16_MAX;
	volatile int64_t t69 = -11LL;

	t69 = (((x313<=x314)-x315)%x316);

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = 1;
	static int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	int32_t x328 = -1;
	volatile int64_t t70 = -1LL;

	t70 = (((x325<=x326)-x327)%x328);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t71 = 883337658722574LL;

	t71 = (((x333<=x334)-x335)%x336);

	if (t71 != -65534LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x338 = -1;
	volatile int64_t x340 = INT64_MIN;
	int64_t t72 = 513909LL;

	t72 = (((x337<=x338)-x339)%x340);

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = 14U;
	int16_t x342 = 0;
	uint64_t x343 = 3426LLU;
	int32_t x344 = INT32_MAX;
	volatile uint64_t t73 = 15219236594LLU;

	t73 = (((x341<=x342)-x343)%x344);

	if (t73 != 2147480225LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = UINT64_MAX;
	uint8_t x350 = 49U;
	uint8_t x352 = 4U;
	static volatile uint64_t t74 = 12803059093463602LLU;

	t74 = (((x349<=x350)-x351)%x352);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x354 = -1;
	uint8_t x355 = 4U;
	uint8_t x356 = 53U;

	t75 = (((x353<=x354)-x355)%x356);

	if (t75 != -3) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = -1;
	uint16_t x359 = 3506U;
	static int16_t x360 = 1;

	t76 = (((x357<=x358)-x359)%x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = -1LL;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;
	int32_t t77 = -7;

	t77 = (((x361<=x362)-x363)%x364);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = -23;
	static uint64_t x366 = 14155260363549LLU;
	int8_t x367 = -1;
	int8_t x368 = INT8_MIN;

	t78 = (((x365<=x366)-x367)%x368);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x373 = 20U;
	int8_t x374 = INT8_MIN;
	volatile uint32_t x375 = 0U;
	int8_t x376 = 1;

	t79 = (((x373<=x374)-x375)%x376);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x378 = -3714785727039LL;
	int64_t x379 = -1LL;
	int32_t x380 = INT32_MAX;

	t80 = (((x377<=x378)-x379)%x380);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = -29;
	int32_t x382 = -22;
	int32_t x383 = -424;
	uint64_t t81 = 9110203011495067583LLU;

	t81 = (((x381<=x382)-x383)%x384);

	if (t81 != 425LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x386 = INT8_MIN;
	uint8_t x387 = UINT8_MAX;
	int64_t x388 = INT64_MIN;
	volatile int64_t t82 = 277LL;

	t82 = (((x385<=x386)-x387)%x388);

	if (t82 != -255LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x389 = UINT8_MAX;
	volatile int64_t x390 = -1LL;
	static volatile int16_t x391 = INT16_MIN;
	int16_t x392 = -1;
	volatile int32_t t83 = -1162;

	t83 = (((x389<=x390)-x391)%x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x393 = INT64_MIN;
	static int8_t x394 = INT8_MIN;
	static int32_t t84 = 18;

	t84 = (((x393<=x394)-x395)%x396);

	if (t84 != -32766) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 31U;
	uint64_t x400 = 971064802732893LLU;

	t85 = (((x397<=x398)-x399)%x400);

	if (t85 != 397080995516158LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = INT32_MIN;
	static volatile uint64_t x403 = 31915LLU;
	int32_t x404 = INT32_MIN;

	t86 = (((x401<=x402)-x403)%x404);

	if (t86 != 2147451734LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 16U;
	uint32_t x410 = UINT32_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	int16_t x412 = 9874;

	t87 = (((x409<=x410)-x411)%x412);

	if (t87 != -254) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MAX;
	uint16_t x418 = 2U;
	static int32_t x419 = -2046;
	int32_t x420 = INT32_MAX;
	int32_t t88 = 1;

	t88 = (((x417<=x418)-x419)%x420);

	if (t88 != 2046) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = 3;
	int64_t x422 = -1LL;
	int64_t x424 = -267800LL;

	t89 = (((x421<=x422)-x423)%x424);

	if (t89 != -200207LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	uint16_t x427 = 1U;
	int64_t x428 = 2678LL;
	volatile int64_t t90 = -3LL;

	t90 = (((x425<=x426)-x427)%x428);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x433 = -1;
	int8_t x435 = 18;
	static uint64_t x436 = UINT64_MAX;
	volatile uint64_t t91 = 4261128314207995LLU;

	t91 = (((x433<=x434)-x435)%x436);

	if (t91 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = INT8_MIN;
	static int8_t x438 = INT8_MAX;
	int8_t x439 = INT8_MAX;
	static volatile int8_t x440 = 1;
	volatile int32_t t92 = -974288424;

	t92 = (((x437<=x438)-x439)%x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x441 = INT64_MAX;
	int32_t x443 = 1;
	uint32_t x444 = UINT32_MAX;

	t93 = (((x441<=x442)-x443)%x444);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = 95230;
	static int16_t x446 = INT16_MAX;
	int64_t x447 = -1LL;
	uint64_t x448 = 14752661LLU;
	volatile uint64_t t94 = 24352801545LLU;

	t94 = (((x445<=x446)-x447)%x448);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x449 = 1676;
	int8_t x450 = -16;
	int16_t x451 = INT16_MIN;
	static int64_t x452 = INT64_MIN;
	static volatile int64_t t95 = 0LL;

	t95 = (((x449<=x450)-x451)%x452);

	if (t95 != 32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = 1U;
	uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 45U;
	static volatile uint8_t x456 = 1U;

	t96 = (((x453<=x454)-x455)%x456);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x458 = 7U;
	int16_t x459 = INT16_MIN;
	int8_t x460 = -1;
	int32_t t97 = -1;

	t97 = (((x457<=x458)-x459)%x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x461 = 3914764U;
	static int64_t x462 = -1LL;
	uint16_t x463 = 2U;
	int64_t x464 = INT64_MIN;
	int64_t t98 = 9107635LL;

	t98 = (((x461<=x462)-x463)%x464);

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x465 = INT32_MAX;
	volatile uint8_t x466 = UINT8_MAX;
	int32_t x467 = INT32_MAX;
	int16_t x468 = INT16_MIN;
	volatile int32_t t99 = -1;

	t99 = (((x465<=x466)-x467)%x468);

	if (t99 != -32767) { NG(); } else { ; }
	
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

