#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 340;
int32_t t2 = 5624564;
static int8_t x15 = INT8_MIN;
uint32_t x23 = UINT32_MAX;
int64_t x27 = INT64_MIN;
static volatile int32_t t5 = 626299;
static volatile int8_t x36 = 61;
static volatile uint8_t x38 = 1U;
int32_t x42 = -1;
uint64_t x47 = 1905001866LLU;
uint32_t x52 = 41702932U;
volatile int32_t t11 = 500;
static volatile int8_t x54 = INT8_MAX;
int32_t x55 = -311622;
int32_t t12 = -115193;
int32_t t14 = 410121;
static int32_t x66 = INT32_MAX;
volatile int8_t x69 = -14;
volatile int16_t x71 = INT16_MAX;
volatile int32_t t16 = 63274;
volatile uint32_t x73 = 19U;
static uint16_t x74 = 7684U;
int32_t x78 = INT32_MIN;
volatile int64_t x79 = INT64_MIN;
int64_t x80 = -785LL;
uint32_t x82 = UINT32_MAX;
int16_t x86 = INT16_MAX;
static uint32_t x89 = 3374759U;
int32_t x96 = INT32_MAX;
int32_t t22 = 1722;
int32_t t23 = -69652668;
volatile int32_t t24 = -3555;
int16_t x118 = INT16_MIN;
static uint64_t x128 = 3148670729174921759LLU;
uint64_t x129 = 183624LLU;
uint8_t x134 = 3U;
volatile uint16_t x143 = 872U;
uint16_t x147 = UINT16_MAX;
int32_t x157 = -52;
uint16_t x158 = 3U;
int32_t t37 = 21;
int16_t x165 = INT16_MAX;
volatile uint16_t x170 = 9449U;
int64_t x172 = INT64_MIN;
int64_t x176 = 123LL;
volatile int32_t t41 = -1061;
uint64_t x178 = UINT64_MAX;
volatile int16_t x179 = 420;
int8_t x182 = -63;
int64_t x193 = 24429611849844651LL;
int32_t x200 = INT32_MAX;
int32_t x205 = -4171965;
static int64_t x208 = -1LL;
int32_t x209 = INT32_MIN;
uint8_t x211 = 44U;
int8_t x216 = -1;
volatile int32_t t53 = 20873111;
volatile uint8_t x227 = UINT8_MAX;
static int16_t x228 = INT16_MIN;
static int32_t t54 = -3752;
int32_t x230 = INT32_MIN;
static volatile int8_t x231 = INT8_MAX;
int32_t x233 = -1;
int8_t x234 = INT8_MIN;
int16_t x238 = INT16_MIN;
static volatile int32_t t57 = -351;
static volatile uint8_t x254 = 0U;
int64_t x258 = INT64_MIN;
int32_t t62 = -951;
int32_t x261 = -1;
volatile int32_t x263 = INT32_MIN;
int32_t x270 = -3274;
volatile int16_t x277 = INT16_MIN;
static volatile int64_t x290 = 1740697099LL;
static uint64_t x291 = 2LLU;
int64_t x302 = -3119644LL;
uint16_t x308 = UINT16_MAX;
int16_t x319 = -166;
uint16_t x320 = UINT16_MAX;
static volatile uint32_t x324 = 49831U;
int16_t x328 = 0;
int32_t t78 = 214;
int16_t x335 = -2533;
static int8_t x336 = -11;
int32_t x337 = -1;
int32_t t81 = -369318;
static int8_t x343 = INT8_MAX;
static volatile int64_t x344 = 12LL;
volatile uint8_t x350 = UINT8_MAX;
volatile int64_t x351 = -1LL;
static int16_t x352 = INT16_MAX;
static int64_t x353 = -678732LL;
int16_t x354 = -24;
static int16_t x358 = -1;
uint16_t x359 = 25U;
int8_t x373 = 7;
volatile uint8_t x380 = 7U;
static volatile int8_t x382 = -10;
volatile uint32_t x384 = 2782438U;
int32_t t92 = -163;
volatile uint64_t x387 = 43LLU;
int32_t x389 = -1;
int32_t t94 = 2431;
int64_t x398 = -1683250192412030LL;
volatile int32_t t96 = 1;
int16_t x405 = 11;
int8_t x406 = INT8_MIN;
int32_t x410 = INT32_MIN;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	uint32_t x3 = UINT32_MAX;
	volatile int16_t x4 = 33;
	volatile int32_t t0 = 1;

	t0 = ((x1|(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 55847669373153389LLU;
	int64_t x6 = 921676425507884257LL;
	static volatile int16_t x7 = INT16_MAX;
	uint64_t x8 = 142LLU;
	volatile int32_t t1 = -15483;

	t1 = ((x5|(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -115307LL;
	volatile uint32_t x10 = 47894244U;
	int64_t x11 = INT64_MIN;
	uint16_t x12 = UINT16_MAX;

	t2 = ((x9|(x10/x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x14 = -77;
	int8_t x16 = -24;
	volatile int32_t t3 = 77;

	t3 = ((x13|(x14/x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 60;
	volatile int64_t x22 = INT64_MIN;
	volatile int64_t x24 = -891458755904LL;
	int32_t t4 = -22082060;

	t4 = ((x21|(x22/x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 29U;
	int16_t x26 = -1;
	uint32_t x28 = UINT32_MAX;

	t5 = ((x25|(x26/x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	volatile uint16_t x30 = 397U;
	int32_t x31 = INT32_MIN;
	volatile uint32_t x32 = 0U;
	int32_t t6 = 70536791;

	t6 = ((x29|(x30/x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -790160;
	int16_t x34 = 1348;
	int16_t x35 = -1;
	volatile int32_t t7 = 780;

	t7 = ((x33|(x34/x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	static int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t8 = 55;

	t8 = ((x37|(x38/x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	static volatile uint32_t x43 = UINT32_MAX;
	int8_t x44 = 3;
	volatile int32_t t9 = -431;

	t9 = ((x41|(x42/x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = -1LL;
	int16_t x48 = INT16_MAX;
	volatile int32_t t10 = 2;

	t10 = ((x45|(x46/x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 125U;
	static int32_t x50 = -152083;
	static int16_t x51 = 85;

	t11 = ((x49|(x50/x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 1;
	volatile uint16_t x56 = UINT16_MAX;

	t12 = ((x53|(x54/x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 2043U;
	int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile int32_t t13 = -3580451;

	t13 = ((x57|(x58/x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 216795906U;
	volatile uint64_t x62 = 15978945320LLU;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = 2780LLU;

	t14 = ((x61|(x62/x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MIN;
	volatile int16_t x67 = 50;
	int64_t x68 = 1LL;
	volatile int32_t t15 = 4772812;

	t15 = ((x65|(x66/x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = -1;
	int16_t x72 = INT16_MAX;

	t16 = ((x69|(x70/x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x75 = 14953U;
	static volatile int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -737936389;

	t17 = ((x73|(x74/x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MIN;
	volatile int32_t t18 = 3;

	t18 = ((x77|(x78/x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -62;
	uint8_t x83 = 12U;
	int32_t x84 = -1;
	int32_t t19 = 155269777;

	t19 = ((x81|(x82/x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 108762U;
	volatile int32_t x87 = -1;
	static int32_t x88 = -51;
	volatile int32_t t20 = 9380;

	t20 = ((x85|(x86/x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = 102008860;
	volatile int32_t x91 = -1;
	int64_t x92 = -1LL;
	int32_t t21 = -1;

	t21 = ((x89|(x90/x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 8181U;
	static int16_t x94 = -1;
	int8_t x95 = INT8_MAX;

	t22 = ((x93|(x94/x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x97 = INT8_MIN;
	int16_t x98 = 8;
	int16_t x99 = 233;
	int8_t x100 = INT8_MAX;

	t23 = ((x97|(x98/x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 34477805U;
	int64_t x102 = -13112475999012LL;
	uint32_t x103 = 444U;
	static volatile int32_t x104 = -37;

	t24 = ((x101|(x102/x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = 12;
	uint8_t x112 = 5U;
	int32_t t25 = 57014;

	t25 = ((x109|(x110/x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x113 = INT16_MIN;
	uint16_t x114 = 3553U;
	uint32_t x115 = 150U;
	int32_t x116 = INT32_MIN;
	volatile int32_t t26 = 114018502;

	t26 = ((x113|(x114/x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 1485394934776422970LLU;
	int32_t x119 = 209436402;
	static volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t27 = -103087;

	t27 = ((x117|(x118/x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	int32_t x122 = -1;
	uint8_t x123 = 2U;
	static int32_t x124 = -1;
	static volatile int32_t t28 = -6;

	t28 = ((x121|(x122/x123))==x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	int32_t t29 = -806323;

	t29 = ((x125|(x126/x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t30 = 228340101;

	t30 = ((x129|(x130/x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MAX;
	int64_t x135 = -37365680688LL;
	int32_t x136 = -1;
	int32_t t31 = -11467;

	t31 = ((x133|(x134/x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MAX;
	static uint8_t x138 = 1U;
	int8_t x139 = -1;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t32 = 7723478;

	t32 = ((x137|(x138/x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	volatile int64_t x142 = INT64_MIN;
	static uint32_t x144 = 1U;
	volatile int32_t t33 = 0;

	t33 = ((x141|(x142/x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int8_t x146 = -1;
	int32_t x148 = INT32_MAX;
	volatile int32_t t34 = -812258;

	t34 = ((x145|(x146/x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = UINT32_MAX;
	int8_t x150 = -1;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = -29;
	int32_t t35 = -418558;

	t35 = ((x149|(x150/x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	static int32_t x155 = INT32_MAX;
	int64_t x156 = -1LL;
	volatile int32_t t36 = 171124838;

	t36 = ((x153|(x154/x155))==x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x159 = -1;
	volatile uint64_t x160 = UINT64_MAX;

	t37 = ((x157|(x158/x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 10;
	int32_t x162 = INT32_MAX;
	uint16_t x163 = UINT16_MAX;
	uint64_t x164 = 119740989584425LLU;
	static volatile int32_t t38 = -3;

	t38 = ((x161|(x162/x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = 3219691LL;
	int64_t x167 = 109358579996LL;
	uint8_t x168 = 42U;
	static volatile int32_t t39 = -6209690;

	t39 = ((x165|(x166/x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 8197183575LLU;
	static int64_t x171 = INT64_MAX;
	static volatile int32_t t40 = -281008300;

	t40 = ((x169|(x170/x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	volatile int32_t x174 = INT32_MIN;
	volatile int16_t x175 = INT16_MIN;

	t41 = ((x173|(x174/x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = 388410776;
	uint8_t x180 = 8U;
	int32_t t42 = -100751943;

	t42 = ((x177|(x178/x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 0U;
	int8_t x183 = -7;
	uint16_t x184 = 4735U;
	int32_t t43 = 45059210;

	t43 = ((x181|(x182/x183))==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	uint16_t x186 = 214U;
	static uint64_t x187 = 12769880807635282LLU;
	uint32_t x188 = UINT32_MAX;
	int32_t t44 = 1916;

	t44 = ((x185|(x186/x187))==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 18742229888093LLU;
	int64_t x190 = -1LL;
	int8_t x191 = INT8_MAX;
	uint16_t x192 = 51U;
	volatile int32_t t45 = -72229;

	t45 = ((x189|(x190/x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x194 = 42210769452203201LLU;
	int32_t x195 = -26934644;
	uint16_t x196 = 71U;
	int32_t t46 = -34;

	t46 = ((x193|(x194/x195))==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x198 = -783;
	int32_t x199 = -130278898;
	int32_t t47 = 2;

	t47 = ((x197|(x198/x199))==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MIN;
	static uint8_t x202 = 31U;
	int16_t x203 = 1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t48 = 495004899;

	t48 = ((x201|(x202/x203))==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 5U;
	volatile int32_t t49 = -250082;

	t49 = ((x205|(x206/x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x210 = -20058822126194LL;
	static uint8_t x212 = 3U;
	static volatile int32_t t50 = -527;

	t50 = ((x209|(x210/x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t51 = -1268715;

	t51 = ((x213|(x214/x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = 4952081LL;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -1;
	int32_t t52 = 50577;

	t52 = ((x217|(x218/x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = INT32_MIN;
	static uint16_t x222 = 393U;
	static uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MAX;

	t53 = ((x221|(x222/x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 300U;
	uint8_t x226 = 15U;

	t54 = ((x225|(x226/x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x229 = UINT16_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t55 = 121447;

	t55 = ((x229|(x230/x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x235 = 9079339085322LLU;
	int8_t x236 = INT8_MIN;
	volatile int32_t t56 = 11812625;

	t56 = ((x233|(x234/x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 2U;
	int32_t x239 = 166436;
	uint64_t x240 = UINT64_MAX;

	t57 = ((x237|(x238/x239))==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x241 = UINT16_MAX;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MAX;
	uint16_t x244 = UINT16_MAX;
	static int32_t t58 = 21725152;

	t58 = ((x241|(x242/x243))==x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 242;
	uint8_t x246 = UINT8_MAX;
	volatile uint8_t x247 = 4U;
	int64_t x248 = 79902387079LL;
	volatile int32_t t59 = 0;

	t59 = ((x245|(x246/x247))==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x249 = UINT8_MAX;
	volatile int32_t x250 = INT32_MIN;
	uint16_t x251 = 6497U;
	int32_t x252 = -1;
	volatile int32_t t60 = 25;

	t60 = ((x249|(x250/x251))==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x253 = INT64_MIN;
	static int8_t x255 = INT8_MAX;
	int64_t x256 = 17867637LL;
	volatile int32_t t61 = -1928;

	t61 = ((x253|(x254/x255))==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	int64_t x260 = 117369LL;

	t62 = ((x257|(x258/x259))==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = INT32_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t63 = -350;

	t63 = ((x261|(x262/x263))==x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = 130730LL;
	uint8_t x267 = 13U;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t64 = 321;

	t64 = ((x265|(x266/x267))==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MAX;
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	volatile int32_t t65 = -6622709;

	t65 = ((x269|(x270/x271))==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = -1;
	static uint8_t x275 = 3U;
	int32_t x276 = INT32_MIN;
	int32_t t66 = 116;

	t66 = ((x273|(x274/x275))==x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = 113U;
	int64_t x279 = INT64_MIN;
	int16_t x280 = 7908;
	volatile int32_t t67 = -103525150;

	t67 = ((x277|(x278/x279))==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -755;
	int16_t x282 = INT16_MIN;
	int16_t x283 = -6900;
	int64_t x284 = INT64_MIN;
	static volatile int32_t t68 = -8099838;

	t68 = ((x281|(x282/x283))==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = INT16_MAX;
	static volatile int16_t x292 = -1;
	volatile int32_t t69 = 0;

	t69 = ((x289|(x290/x291))==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = -1;
	static int64_t x294 = -1LL;
	uint64_t x295 = UINT64_MAX;
	static int64_t x296 = -2139323LL;
	volatile int32_t t70 = -226;

	t70 = ((x293|(x294/x295))==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x297 = INT8_MAX;
	static uint32_t x298 = UINT32_MAX;
	static uint64_t x299 = UINT64_MAX;
	volatile uint8_t x300 = UINT8_MAX;
	int32_t t71 = 42;

	t71 = ((x297|(x298/x299))==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x301 = -1;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t72 = 2060390;

	t72 = ((x301|(x302/x303))==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = INT32_MAX;
	uint64_t x306 = 942267952LLU;
	static int8_t x307 = -22;
	static volatile int32_t t73 = 3648564;

	t73 = ((x305|(x306/x307))==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MAX;
	int64_t x311 = 3809738625704LL;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t74 = 354804;

	t74 = ((x309|(x310/x311))==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = 2;
	static int64_t x314 = 0LL;
	static int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;
	int32_t t75 = -151758083;

	t75 = ((x313|(x314/x315))==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = -1LL;
	static volatile int32_t t76 = 1466540;

	t76 = ((x317|(x318/x319))==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x322 = 40345939U;
	static int64_t x323 = -1LL;
	volatile int32_t t77 = 19;

	t77 = ((x321|(x322/x323))==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = 7;
	int16_t x326 = INT16_MIN;
	int64_t x327 = 997844879743082647LL;

	t78 = ((x325|(x326/x327))==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 3U;
	uint32_t x331 = 9016U;
	int32_t x332 = 31540;
	volatile int32_t t79 = -14348030;

	t79 = ((x329|(x330/x331))==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = 332504LL;
	int8_t x334 = -3;
	volatile int32_t t80 = 201540;

	t80 = ((x333|(x334/x335))==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x338 = -4473;
	static volatile uint64_t x339 = 2651LLU;
	static volatile int32_t x340 = INT32_MIN;

	t81 = ((x337|(x338/x339))==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static volatile int8_t x342 = 3;
	volatile int32_t t82 = 1969388;

	t82 = ((x341|(x342/x343))==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = INT32_MAX;
	volatile int32_t x346 = INT32_MAX;
	uint64_t x347 = 406933094441LLU;
	uint16_t x348 = 70U;
	volatile int32_t t83 = -398669;

	t83 = ((x345|(x346/x347))==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MIN;
	static volatile int32_t t84 = -1790755;

	t84 = ((x349|(x350/x351))==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x355 = -3;
	static int16_t x356 = -29;
	volatile int32_t t85 = -105578161;

	t85 = ((x353|(x354/x355))==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = INT64_MIN;
	int64_t x360 = INT64_MIN;
	int32_t t86 = 1785;

	t86 = ((x357|(x358/x359))==x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = -1LL;
	uint32_t x362 = 2621229U;
	uint32_t x363 = 3285U;
	volatile int8_t x364 = INT8_MIN;
	int32_t t87 = 1072580299;

	t87 = ((x361|(x362/x363))==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x365 = 1U;
	volatile uint32_t x366 = UINT32_MAX;
	int32_t x367 = 4;
	int64_t x368 = 15318LL;
	int32_t t88 = -1360389;

	t88 = ((x365|(x366/x367))==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x369 = INT64_MIN;
	uint8_t x370 = 15U;
	volatile uint16_t x371 = 9U;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t89 = 209890;

	t89 = ((x369|(x370/x371))==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = 84;
	static int16_t x375 = 2234;
	static volatile int32_t x376 = 12314;
	volatile int32_t t90 = 10;

	t90 = ((x373|(x374/x375))==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 27U;
	uint8_t x378 = UINT8_MAX;
	uint8_t x379 = 9U;
	volatile int32_t t91 = 151647212;

	t91 = ((x377|(x378/x379))==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = -1;
	int32_t x383 = INT32_MIN;

	t92 = ((x381|(x382/x383))==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int32_t x386 = INT32_MIN;
	uint16_t x388 = 271U;
	int32_t t93 = -143;

	t93 = ((x385|(x386/x387))==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x390 = 1486191378U;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MAX;

	t94 = ((x389|(x390/x391))==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x393 = 102U;
	static volatile uint32_t x394 = 4U;
	int64_t x395 = -6870718379747117LL;
	uint32_t x396 = 403612115U;
	static int32_t t95 = 255260;

	t95 = ((x393|(x394/x395))==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x399 = 13169U;
	static volatile uint16_t x400 = 3U;

	t96 = ((x397|(x398/x399))==x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MIN;
	volatile uint8_t x402 = 5U;
	int16_t x403 = INT16_MAX;
	int8_t x404 = -1;
	volatile int32_t t97 = -23020;

	t97 = ((x401|(x402/x403))==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x407 = 358246104610628283LLU;
	uint16_t x408 = 1394U;
	volatile int32_t t98 = 16410093;

	t98 = ((x405|(x406/x407))==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = 0U;
	int64_t x411 = 20LL;
	volatile int8_t x412 = INT8_MAX;
	volatile int32_t t99 = 7211807;

	t99 = ((x409|(x410/x411))==x412);

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

