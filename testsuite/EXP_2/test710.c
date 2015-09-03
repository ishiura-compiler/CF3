#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -92777;
static int32_t x8 = -64957;
int16_t x11 = 1393;
volatile int32_t t2 = -473394079;
uint64_t x14 = UINT64_MAX;
static int8_t x15 = INT8_MIN;
static int32_t t5 = -623500;
int16_t x29 = INT16_MAX;
int64_t x30 = INT64_MIN;
volatile int32_t t7 = 227024378;
int8_t x34 = 2;
uint16_t x38 = 13249U;
uint32_t x46 = UINT32_MAX;
int32_t t11 = 6388;
uint64_t x49 = 269074246747331520LLU;
int64_t x50 = 22763249LL;
int32_t t14 = 1;
uint8_t x65 = 1U;
int8_t x68 = 0;
static volatile int16_t x81 = INT16_MAX;
int64_t x87 = INT64_MIN;
uint16_t x94 = 3U;
volatile uint64_t x98 = 622497011LLU;
static int16_t x99 = 2;
static int8_t x108 = 1;
static int8_t x110 = -1;
static volatile int8_t x121 = -5;
int64_t x122 = INT64_MAX;
int16_t x123 = INT16_MIN;
volatile uint16_t x126 = 18U;
static volatile int32_t t28 = -29;
int64_t x129 = -1LL;
volatile uint16_t x130 = 11U;
int32_t x132 = INT32_MIN;
volatile int32_t t30 = -51209;
uint8_t x159 = UINT8_MAX;
uint16_t x160 = UINT16_MAX;
static uint8_t x164 = 4U;
volatile int8_t x174 = INT8_MIN;
volatile uint8_t x178 = 7U;
static int32_t x184 = -1576701;
int32_t t40 = 5;
static int8_t x188 = -1;
uint8_t x190 = 0U;
uint32_t x197 = 28011846U;
static uint8_t x209 = 0U;
uint16_t x210 = UINT16_MAX;
int64_t x213 = -3LL;
int16_t x218 = INT16_MAX;
int64_t x222 = INT64_MIN;
int16_t x229 = INT16_MIN;
int32_t x233 = 140042027;
int64_t x237 = -1LL;
int64_t x238 = 989192982819LL;
uint8_t x239 = 16U;
volatile int16_t x244 = INT16_MAX;
static int64_t x249 = INT64_MIN;
int32_t x257 = -108132;
static uint8_t x263 = 1U;
int16_t x266 = INT16_MIN;
int8_t x267 = -8;
int32_t t61 = -934854;
int64_t x273 = -189LL;
static uint16_t x276 = 89U;
int16_t x284 = INT16_MIN;
volatile int32_t t66 = -959607984;
volatile uint8_t x296 = UINT8_MAX;
int32_t t68 = -881707;
volatile int16_t x299 = -1;
volatile int32_t t69 = 127;
volatile int32_t t70 = -459699400;
int16_t x305 = INT16_MIN;
uint16_t x308 = UINT16_MAX;
int16_t x317 = INT16_MIN;
volatile uint16_t x318 = 173U;
volatile int32_t t74 = 19746;
int64_t x331 = 318LL;
int32_t t76 = -54;
static int32_t x336 = -110;
uint16_t x340 = 9184U;
static int32_t t78 = 61;
static volatile int32_t t79 = 231;
uint16_t x348 = 185U;
uint32_t x350 = 82971573U;
int64_t x352 = INT64_MIN;
static volatile int64_t x355 = INT64_MIN;
uint64_t x359 = UINT64_MAX;
int32_t x365 = INT32_MAX;
static volatile int16_t x366 = INT16_MIN;
uint16_t x373 = 30630U;
volatile int8_t x389 = 21;
volatile uint64_t x392 = 4291943697786LLU;
volatile int32_t t90 = 0;
static volatile uint16_t x393 = 472U;
static int32_t t92 = -449;
uint32_t x414 = UINT32_MAX;
uint8_t x420 = UINT8_MAX;
static uint8_t x421 = 38U;
int32_t x426 = INT32_MIN;
int8_t x427 = -1;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int64_t x2 = -112784886LL;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -1LL;

	t0 = ((x1*(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 68276;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	volatile int32_t t1 = -14739;

	t1 = ((x5*(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	volatile int16_t x10 = -1;
	int8_t x12 = 6;

	t2 = ((x9*(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	uint32_t x16 = 6852U;
	static int32_t t3 = 112;

	t3 = ((x13*(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static int16_t x18 = -3824;
	uint32_t x19 = 387U;
	static int16_t x20 = INT16_MAX;
	int32_t t4 = -11801;

	t4 = ((x17*(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static int32_t x22 = 0;
	uint32_t x23 = 584U;
	static volatile int16_t x24 = INT16_MIN;

	t5 = ((x21*(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint64_t x26 = 7597367195102LLU;
	uint16_t x27 = 1005U;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = -1471;

	t6 = ((x25*(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x31 = -1;
	int32_t x32 = 249;

	t7 = ((x29*(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x35 = INT32_MAX;
	volatile uint8_t x36 = UINT8_MAX;
	int32_t t8 = -102972580;

	t8 = ((x33*(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	int64_t x39 = -6607034437LL;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -172038087;

	t9 = ((x37*(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static int16_t x42 = INT16_MAX;
	uint64_t x43 = UINT64_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -919;

	t10 = ((x41*(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	uint32_t x47 = 1573932U;
	int8_t x48 = -1;

	t11 = ((x45*(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -12666448;

	t12 = ((x49*(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -1;
	static int8_t x58 = INT8_MIN;
	uint64_t x59 = UINT64_MAX;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t13 = -922468467;

	t13 = ((x57*(x58%x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 1618U;
	static int64_t x62 = INT64_MIN;
	int64_t x63 = 2744165788283883LL;
	static volatile uint8_t x64 = UINT8_MAX;

	t14 = ((x61*(x62%x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x66 = 2U;
	int16_t x67 = -1;
	volatile int32_t t15 = 320765977;

	t15 = ((x65*(x66%x67))==x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = 0;
	volatile int16_t x75 = INT16_MIN;
	static uint32_t x76 = UINT32_MAX;
	int32_t t16 = 248;

	t16 = ((x73*(x74%x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = 51U;
	volatile uint8_t x78 = 3U;
	int32_t x79 = -1;
	int16_t x80 = 164;
	int32_t t17 = 396069361;

	t17 = ((x77*(x78%x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = -13184;
	static int16_t x84 = -1;
	int32_t t18 = -19946925;

	t18 = ((x81*(x82%x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -7962038LL;
	static int32_t x86 = INT32_MIN;
	volatile int32_t x88 = -1;
	volatile int32_t t19 = -26253;

	t19 = ((x85*(x86%x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int16_t x90 = INT16_MIN;
	static int16_t x91 = 49;
	static int8_t x92 = -1;
	volatile int32_t t20 = 3;

	t20 = ((x89*(x90%x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -3761;
	volatile int16_t x95 = INT16_MIN;
	int16_t x96 = 10065;
	static volatile int32_t t21 = 1;

	t21 = ((x93*(x94%x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	static uint32_t x100 = 5847484U;
	volatile int32_t t22 = 905447733;

	t22 = ((x97*(x98%x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = -1LL;
	uint64_t x103 = UINT64_MAX;
	volatile int64_t x104 = INT64_MAX;
	int32_t t23 = 43;

	t23 = ((x101*(x102%x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MAX;
	uint16_t x106 = 844U;
	volatile uint64_t x107 = 107LLU;
	int32_t t24 = -100965;

	t24 = ((x105*(x106%x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x111 = -3;
	int64_t x112 = INT64_MIN;
	volatile int32_t t25 = -1330;

	t25 = ((x109*(x110%x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = 12LLU;
	int64_t x118 = -3641442115566813453LL;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = 0;
	static volatile int32_t t26 = 18428;

	t26 = ((x117*(x118%x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x124 = 3338U;
	int32_t t27 = 355218;

	t27 = ((x121*(x122%x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = UINT64_MAX;
	static int32_t x127 = INT32_MIN;
	uint16_t x128 = UINT16_MAX;

	t28 = ((x125*(x126%x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x131 = -1;
	int32_t t29 = -60;

	t29 = ((x129*(x130%x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	static uint16_t x134 = 8458U;
	volatile int16_t x135 = 456;
	volatile int8_t x136 = INT8_MAX;

	t30 = ((x133*(x134%x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = 21;
	int64_t x142 = -1LL;
	int16_t x143 = 6574;
	static uint32_t x144 = 1839099U;
	int32_t t31 = 1584;

	t31 = ((x141*(x142%x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = 5137518428LL;
	int64_t x150 = 261414854LL;
	uint16_t x151 = 23U;
	int64_t x152 = INT64_MAX;
	volatile int32_t t32 = 5479;

	t32 = ((x149*(x150%x151))==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -360865795LL;
	static int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MIN;
	int16_t x156 = 8109;
	int32_t t33 = 13;

	t33 = ((x153*(x154%x155))==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x157 = 1170U;
	int16_t x158 = -1;
	static int32_t t34 = -192948786;

	t34 = ((x157*(x158%x159))==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	volatile int32_t t35 = 2025212;

	t35 = ((x161*(x162%x163))==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = -5768LL;
	int16_t x166 = INT16_MIN;
	int32_t x167 = 3636;
	int64_t x168 = -1LL;
	volatile int32_t t36 = 51;

	t36 = ((x165*(x166%x167))==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int16_t x170 = INT16_MAX;
	uint32_t x171 = 2924U;
	int32_t x172 = 94;
	static volatile int32_t t37 = 1013598;

	t37 = ((x169*(x170%x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 57;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = 18544436LL;
	static volatile int32_t t38 = 9;

	t38 = ((x173*(x174%x175))==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 81U;
	static int8_t x179 = INT8_MAX;
	static int16_t x180 = -1;
	volatile int32_t t39 = -33;

	t39 = ((x177*(x178%x179))==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = INT16_MAX;
	static volatile int32_t x182 = -1;
	uint8_t x183 = 49U;

	t40 = ((x181*(x182%x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = 7;
	uint16_t x187 = 1U;
	int32_t t41 = -7963343;

	t41 = ((x185*(x186%x187))==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	int32_t x191 = INT32_MAX;
	int8_t x192 = -1;
	volatile int32_t t42 = 4;

	t42 = ((x189*(x190%x191))==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = INT8_MIN;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -1;
	int32_t t43 = 61006;

	t43 = ((x193*(x194%x195))==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = INT64_MAX;
	uint64_t x199 = 531222331762991729LLU;
	int16_t x200 = INT16_MAX;
	int32_t t44 = 3147;

	t44 = ((x197*(x198%x199))==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = 822LLU;
	volatile int32_t x204 = -107154922;
	volatile int32_t t45 = 3710;

	t45 = ((x201*(x202%x203))==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 10847494;
	static volatile int64_t x207 = INT64_MAX;
	volatile int64_t x208 = -267804059032897LL;
	volatile int32_t t46 = -885300783;

	t46 = ((x205*(x206%x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x211 = 8;
	uint64_t x212 = 23301LLU;
	int32_t t47 = 101;

	t47 = ((x209*(x210%x211))==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = INT8_MIN;
	static int16_t x215 = INT16_MIN;
	int64_t x216 = -793996130041267LL;
	static volatile int32_t t48 = 31650;

	t48 = ((x213*(x214%x215))==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x217 = 0U;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = -1;
	int32_t t49 = 43494;

	t49 = ((x217*(x218%x219))==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = -1;
	static uint16_t x223 = UINT16_MAX;
	int64_t x224 = -1LL;
	volatile int32_t t50 = 823728177;

	t50 = ((x221*(x222%x223))==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MAX;
	volatile int32_t x227 = INT32_MIN;
	volatile int32_t x228 = -1;
	volatile int32_t t51 = -5917;

	t51 = ((x225*(x226%x227))==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = -5525;
	int16_t x231 = INT16_MAX;
	uint64_t x232 = UINT64_MAX;
	static int32_t t52 = -1001941678;

	t52 = ((x229*(x230%x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x234 = 3U;
	int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MAX;
	volatile int32_t t53 = 23441667;

	t53 = ((x233*(x234%x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x240 = -1090;
	int32_t t54 = 20382653;

	t54 = ((x237*(x238%x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	uint8_t x243 = 28U;
	int32_t t55 = -338572;

	t55 = ((x241*(x242%x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MAX;
	uint16_t x246 = 1U;
	static int32_t x247 = INT32_MAX;
	int64_t x248 = -1LL;
	int32_t t56 = -3;

	t56 = ((x245*(x246%x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x250 = UINT64_MAX;
	uint16_t x251 = 1U;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t57 = -269;

	t57 = ((x249*(x250%x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x253 = -51;
	static uint32_t x254 = 2U;
	int8_t x255 = -12;
	int8_t x256 = 12;
	volatile int32_t t58 = -1414518;

	t58 = ((x253*(x254%x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x258 = 31U;
	int8_t x259 = -1;
	volatile int16_t x260 = -1;
	volatile int32_t t59 = -61194;

	t59 = ((x257*(x258%x259))==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 2U;
	int64_t x262 = -1LL;
	int32_t x264 = INT32_MIN;
	volatile int32_t t60 = 246550033;

	t60 = ((x261*(x262%x263))==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 2272434U;
	volatile uint16_t x268 = 3U;

	t61 = ((x265*(x266%x267))==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = -1;
	static int16_t x270 = 1197;
	int32_t x271 = INT32_MAX;
	uint16_t x272 = 0U;
	int32_t t62 = -4;

	t62 = ((x269*(x270%x271))==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x274 = UINT64_MAX;
	volatile int16_t x275 = INT16_MAX;
	volatile int32_t t63 = 110;

	t63 = ((x273*(x274%x275))==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = -1LL;
	int64_t x278 = INT64_MIN;
	volatile uint16_t x279 = 67U;
	volatile uint8_t x280 = 2U;
	volatile int32_t t64 = 5253673;

	t64 = ((x277*(x278%x279))==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x281 = 2829837LLU;
	int32_t x282 = -1;
	int16_t x283 = INT16_MAX;
	int32_t t65 = -995;

	t65 = ((x281*(x282%x283))==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x285 = INT64_MIN;
	uint64_t x286 = 7050785799903052235LLU;
	int8_t x287 = -1;
	int16_t x288 = -1;

	t66 = ((x285*(x286%x287))==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x289 = 1427815U;
	uint32_t x290 = 94U;
	volatile uint64_t x291 = 7459LLU;
	int64_t x292 = 15900653741LL;
	static int32_t t67 = 11576;

	t67 = ((x289*(x290%x291))==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -39171064668375679LL;
	int32_t x294 = INT32_MIN;
	volatile int8_t x295 = INT8_MIN;

	t68 = ((x293*(x294%x295))==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = 2748875116862737LL;
	int8_t x298 = -1;
	uint8_t x300 = UINT8_MAX;

	t69 = ((x297*(x298%x299))==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = 5;
	uint32_t x302 = 190U;
	uint32_t x303 = 2040590611U;
	int8_t x304 = -1;

	t70 = ((x301*(x302%x303))==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x306 = INT16_MIN;
	uint32_t x307 = 2U;
	int32_t t71 = -36073;

	t71 = ((x305*(x306%x307))==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x309 = 3315U;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MAX;
	static uint8_t x312 = UINT8_MAX;
	volatile int32_t t72 = -85335;

	t72 = ((x309*(x310%x311))==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x313 = 6;
	uint32_t x314 = 1U;
	int16_t x315 = 1899;
	uint32_t x316 = 28U;
	int32_t t73 = -215;

	t73 = ((x313*(x314%x315))==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x319 = -349439;
	int16_t x320 = INT16_MAX;

	t74 = ((x317*(x318%x319))==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 559566052U;
	uint8_t x326 = 0U;
	uint64_t x327 = 77419742703649LLU;
	volatile int16_t x328 = INT16_MIN;
	static int32_t t75 = 215957;

	t75 = ((x325*(x326%x327))==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x329 = 8U;
	static int16_t x330 = -13;
	static int64_t x332 = INT64_MIN;

	t76 = ((x329*(x330%x331))==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = -1;
	static uint8_t x334 = 0U;
	static uint32_t x335 = 15239U;
	int32_t t77 = -13;

	t77 = ((x333*(x334%x335))==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = 42;
	int32_t x339 = -1;

	t78 = ((x337*(x338%x339))==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x341 = -124;
	int64_t x342 = INT64_MAX;
	int32_t x343 = 261;
	static int32_t x344 = INT32_MAX;

	t79 = ((x341*(x342%x343))==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x345 = 49U;
	int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	int32_t t80 = -13;

	t80 = ((x345*(x346%x347))==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x349 = -1;
	static uint8_t x351 = 38U;
	int32_t t81 = 108198;

	t81 = ((x349*(x350%x351))==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = 189500802;
	uint64_t x354 = 32866603LLU;
	int32_t x356 = -404;
	int32_t t82 = -15;

	t82 = ((x353*(x354%x355))==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x357 = 941U;
	int8_t x358 = INT8_MIN;
	static uint64_t x360 = UINT64_MAX;
	static int32_t t83 = 2039981;

	t83 = ((x357*(x358%x359))==x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = 1407954795U;
	uint64_t x362 = 17LLU;
	static int8_t x363 = 1;
	uint64_t x364 = 19440427374LLU;
	static volatile int32_t t84 = 494453942;

	t84 = ((x361*(x362%x363))==x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x367 = -1;
	int16_t x368 = -1;
	volatile int32_t t85 = -4;

	t85 = ((x365*(x366%x367))==x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	static volatile int32_t x372 = INT32_MIN;
	int32_t t86 = -1719071;

	t86 = ((x369*(x370%x371))==x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x374 = INT8_MAX;
	int32_t x375 = 45;
	int16_t x376 = INT16_MAX;
	int32_t t87 = -47;

	t87 = ((x373*(x374%x375))==x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MIN;
	static uint64_t x378 = 1943745LLU;
	static int32_t x379 = 52;
	int64_t x380 = 125384750642408LL;
	int32_t t88 = 39923299;

	t88 = ((x377*(x378%x379))==x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x381 = 1262;
	uint8_t x382 = 24U;
	static int32_t x383 = -1;
	int32_t x384 = -1;
	int32_t t89 = 218;

	t89 = ((x381*(x382%x383))==x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 25801U;

	t90 = ((x389*(x390%x391))==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x394 = 1;
	uint64_t x395 = 68401285345297303LLU;
	int8_t x396 = INT8_MAX;
	volatile int32_t t91 = 4749290;

	t91 = ((x393*(x394%x395))==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = 0U;
	uint64_t x398 = 1LLU;
	static int64_t x399 = -1LL;
	static volatile int8_t x400 = INT8_MIN;

	t92 = ((x397*(x398%x399))==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x401 = INT8_MAX;
	int16_t x402 = -1;
	static int64_t x403 = 19171439190141LL;
	uint64_t x404 = 522214008295053LLU;
	volatile int32_t t93 = 2;

	t93 = ((x401*(x402%x403))==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MAX;
	int64_t x406 = -1LL;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t94 = -1;

	t94 = ((x405*(x406%x407))==x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x409 = 84258063207089LLU;
	int32_t x410 = -1;
	uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t95 = 69;

	t95 = ((x409*(x410%x411))==x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MAX;
	static volatile uint32_t x415 = 19349385U;
	int32_t x416 = -121149;
	volatile int32_t t96 = -5;

	t96 = ((x413*(x414%x415))==x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x417 = -1;
	static int64_t x418 = 551660259255966LL;
	int64_t x419 = INT64_MIN;
	volatile int32_t t97 = 818525;

	t97 = ((x417*(x418%x419))==x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x422 = 316724LL;
	uint64_t x423 = 164029221480996939LLU;
	uint16_t x424 = 10471U;
	static int32_t t98 = 333469;

	t98 = ((x421*(x422%x423))==x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x425 = INT64_MAX;
	uint32_t x428 = 15858031U;
	int32_t t99 = -29;

	t99 = ((x425*(x426%x427))==x428);

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

