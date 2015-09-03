#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
int32_t x9 = INT32_MIN;
uint32_t x10 = 1686U;
int8_t x13 = -47;
static volatile int32_t t4 = 51706;
static volatile int8_t x22 = INT8_MIN;
static int16_t x26 = -1;
static volatile int32_t t7 = 49314;
uint16_t x36 = 716U;
volatile int64_t x47 = INT64_MAX;
volatile int64_t x48 = 615622284359872LL;
uint16_t x49 = 216U;
int8_t x53 = -1;
uint8_t x55 = UINT8_MAX;
int64_t x62 = INT64_MIN;
int8_t x72 = INT8_MIN;
uint16_t x76 = 8309U;
volatile uint16_t x80 = 1U;
volatile int64_t x81 = -1LL;
int32_t x83 = -502319359;
volatile uint16_t x84 = 1U;
static int16_t x85 = INT16_MIN;
static volatile uint16_t x95 = 1U;
volatile uint16_t x96 = UINT16_MAX;
volatile int8_t x101 = INT8_MIN;
volatile int64_t x111 = -1LL;
uint64_t x112 = 31319521334406930LLU;
int8_t x116 = 2;
static int8_t x123 = -1;
static volatile int64_t x127 = INT64_MAX;
int32_t x128 = 136636;
volatile int32_t x131 = -1;
static int64_t x132 = INT64_MIN;
int32_t t32 = -13;
static int32_t x145 = -1;
volatile int32_t t33 = 1838902;
static int8_t x154 = 2;
uint32_t x157 = 440744378U;
static int32_t x160 = INT32_MAX;
uint8_t x162 = 1U;
static int32_t x164 = -1;
volatile uint32_t x171 = 50367188U;
volatile int32_t t40 = 111798;
uint16_t x177 = 3U;
int64_t x190 = -1LL;
uint64_t x196 = UINT64_MAX;
int32_t t46 = 6222238;
int16_t x215 = INT16_MAX;
int32_t x217 = 29245;
volatile int32_t t50 = 2184;
uint64_t x227 = UINT64_MAX;
int32_t t52 = -89;
int16_t x229 = INT16_MAX;
uint32_t x238 = 968699U;
int8_t x244 = INT8_MIN;
uint16_t x248 = UINT16_MAX;
int32_t t59 = -19184286;
volatile uint8_t x266 = 18U;
static int64_t x269 = INT64_MIN;
volatile int32_t t62 = 10697;
int64_t x275 = -1LL;
int8_t x278 = INT8_MAX;
uint64_t x281 = UINT64_MAX;
int16_t x285 = INT16_MAX;
volatile int16_t x294 = -1;
volatile uint32_t x295 = 243U;
int32_t x296 = INT32_MIN;
static uint8_t x301 = UINT8_MAX;
volatile uint64_t x307 = 94696323310115LLU;
int32_t t70 = 43076;
uint32_t x312 = 1U;
volatile int32_t t71 = -659259110;
volatile int32_t t72 = -341;
volatile int32_t x326 = INT32_MAX;
volatile int8_t x327 = INT8_MAX;
uint32_t x330 = 10365974U;
int8_t x331 = INT8_MIN;
static int8_t x346 = INT8_MIN;
uint64_t x368 = 41362495472LLU;
volatile int32_t t81 = 2461741;
int8_t x374 = INT8_MIN;
int64_t x376 = INT64_MIN;
int32_t x378 = -223;
volatile int16_t x382 = -6985;
uint32_t x385 = 783U;
int8_t x395 = INT8_MAX;
uint8_t x397 = 6U;
uint16_t x405 = UINT16_MAX;
int64_t x414 = INT64_MIN;
volatile int32_t t92 = -455;
static int8_t x420 = -19;
static int32_t t95 = 32076;
int64_t x430 = 28992LL;
volatile uint32_t x438 = 48318819U;
int32_t t98 = -5878;
int16_t x443 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 5U;
	static int32_t x3 = -2963;
	int16_t x4 = -1;
	volatile int32_t t0 = -1357883;

	t0 = (x1<=((x2-x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint32_t x6 = 1486U;
	int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 69150504;

	t1 = (x5<=((x6-x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	static int32_t x12 = -1;
	static volatile int32_t t2 = 1;

	t2 = (x9<=((x10-x11)==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 353181226245LLU;
	int32_t x15 = -364288804;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 705836;

	t3 = (x13<=((x14-x15)==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 996382535U;
	int16_t x18 = INT16_MIN;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MAX;

	t4 = (x17<=((x18-x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	static uint16_t x23 = UINT16_MAX;
	uint32_t x24 = UINT32_MAX;
	static int32_t t5 = 192;

	t5 = (x21<=((x22-x23)==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x27 = -810195502;
	int32_t x28 = 215669482;
	static volatile int32_t t6 = 4942128;

	t6 = (x25<=((x26-x27)==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	static volatile int64_t x30 = INT64_MIN;
	static int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;

	t7 = (x29<=((x30-x31)==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	volatile int16_t x34 = INT16_MAX;
	volatile uint8_t x35 = 0U;
	int32_t t8 = 52389;

	t8 = (x33<=((x34-x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 0;
	int32_t x38 = INT32_MIN;
	int16_t x39 = -5023;
	static int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 696;

	t9 = (x37<=((x38-x39)==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 35U;
	static int64_t x42 = -1LL;
	uint64_t x43 = 4646418617489LLU;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 36492;

	t10 = (x41<=((x42-x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 30U;
	uint8_t x46 = UINT8_MAX;
	static volatile int32_t t11 = 117485;

	t11 = (x45<=((x46-x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	static int16_t x51 = -1;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = -1670;

	t12 = (x49<=((x50-x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x54 = -1;
	volatile int64_t x56 = -1LL;
	static volatile int32_t t13 = 119745602;

	t13 = (x53<=((x54-x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint64_t x58 = 4643LLU;
	static uint16_t x59 = UINT16_MAX;
	static uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -53;

	t14 = (x57<=((x58-x59)==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 2384U;
	int64_t x63 = INT64_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -681;

	t15 = (x61<=((x62-x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -56;
	volatile int32_t x66 = INT32_MIN;
	static volatile int16_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = 1297013;

	t16 = (x65<=((x66-x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int16_t x70 = INT16_MAX;
	int64_t x71 = 818530LL;
	static volatile int32_t t17 = 73;

	t17 = (x69<=((x70-x71)==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int32_t x74 = 11523174;
	uint16_t x75 = 127U;
	int32_t t18 = -19746118;

	t18 = (x73<=((x74-x75)==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -6735;
	volatile uint8_t x78 = 5U;
	int16_t x79 = -1;
	static int32_t t19 = -592096;

	t19 = (x77<=((x78-x79)==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	int32_t t20 = 52391;

	t20 = (x81<=((x82-x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = INT32_MIN;
	int16_t x87 = -241;
	int64_t x88 = INT64_MAX;
	int32_t t21 = 29323;

	t21 = (x85<=((x86-x87)==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -1LL;
	int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MIN;
	static uint64_t x92 = 294637162518LLU;
	volatile int32_t t22 = -12;

	t22 = (x89<=((x90-x91)==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint32_t x94 = 0U;
	int32_t t23 = 25270;

	t23 = (x93<=((x94-x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x102 = UINT16_MAX;
	volatile uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t24 = -8020;

	t24 = (x101<=((x102-x103)==x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = 5LLU;
	uint8_t x107 = 21U;
	uint8_t x108 = 101U;
	int32_t t25 = -1;

	t25 = (x105<=((x106-x107)==x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = 65;
	volatile int32_t t26 = -1617835;

	t26 = (x109<=((x110-x111)==x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x113 = UINT16_MAX;
	int32_t x114 = 1420105;
	volatile int32_t x115 = -1;
	static volatile int32_t t27 = -282207165;

	t27 = (x113<=((x114-x115)==x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1578;
	uint8_t x122 = UINT8_MAX;
	int8_t x124 = -1;
	volatile int32_t t28 = -18798094;

	t28 = (x121<=((x122-x123)==x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	uint8_t x126 = 5U;
	int32_t t29 = 0;

	t29 = (x125<=((x126-x127)==x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MIN;
	static int8_t x130 = INT8_MIN;
	volatile int32_t t30 = 195;

	t30 = (x129<=((x130-x131)==x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = 13;
	volatile int16_t x134 = INT16_MIN;
	volatile uint8_t x135 = 62U;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t31 = -14915;

	t31 = (x133<=((x134-x135)==x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 546199537LLU;
	static volatile uint8_t x142 = 1U;
	int8_t x143 = -1;
	volatile uint16_t x144 = 5U;

	t32 = (x141<=((x142-x143)==x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x146 = INT16_MIN;
	volatile uint8_t x147 = 3U;
	int8_t x148 = 1;

	t33 = (x145<=((x146-x147)==x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int16_t x150 = 209;
	volatile int16_t x151 = INT16_MIN;
	uint32_t x152 = 40687U;
	int32_t t34 = -483067;

	t34 = (x149<=((x150-x151)==x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 125U;
	int32_t x155 = 53851;
	int16_t x156 = -1;
	volatile int32_t t35 = 32180023;

	t35 = (x153<=((x154-x155)==x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;
	volatile int32_t t36 = -152460;

	t36 = (x157<=((x158-x159)==x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	uint16_t x163 = 2991U;
	int32_t t37 = -48802;

	t37 = (x161<=((x162-x163)==x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 2751U;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MIN;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t38 = 13;

	t38 = (x165<=((x166-x167)==x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = 6;
	int8_t x170 = INT8_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t39 = 435;

	t39 = (x169<=((x170-x171)==x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = 93U;
	static volatile uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 11LLU;

	t40 = (x173<=((x174-x175)==x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x178 = -1;
	volatile int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t41 = 4;

	t41 = (x177<=((x178-x179)==x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 227298112;
	volatile uint16_t x182 = UINT16_MAX;
	int16_t x183 = -2006;
	int16_t x184 = INT16_MIN;
	int32_t t42 = -311904;

	t42 = (x181<=((x182-x183)==x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x185 = 1U;
	int16_t x186 = -1;
	static volatile uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;
	volatile int32_t t43 = 1210;

	t43 = (x185<=((x186-x187)==x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	int16_t x191 = -110;
	int64_t x192 = INT64_MIN;
	volatile int32_t t44 = 7343002;

	t44 = (x189<=((x190-x191)==x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	volatile int16_t x194 = -115;
	int32_t x195 = -1;
	static volatile int32_t t45 = 6;

	t45 = (x193<=((x194-x195)==x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	static volatile uint32_t x198 = 38714U;
	uint8_t x199 = 15U;
	uint8_t x200 = 19U;

	t46 = (x197<=((x198-x199)==x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = 936;
	uint16_t x206 = 44U;
	volatile int64_t x207 = -240LL;
	int32_t x208 = -18224293;
	volatile int32_t t47 = -54;

	t47 = (x205<=((x206-x207)==x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MAX;
	volatile uint32_t x210 = 1422864200U;
	int16_t x211 = INT16_MIN;
	int64_t x212 = -15087935387127235LL;
	volatile int32_t t48 = 170394;

	t48 = (x209<=((x210-x211)==x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 1027677LLU;
	int64_t x214 = INT64_MAX;
	uint32_t x216 = 13273261U;
	int32_t t49 = -879980;

	t49 = (x213<=((x214-x215)==x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x218 = 1012696663675047LLU;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;

	t50 = (x217<=((x218-x219)==x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = UINT32_MAX;
	static int32_t x222 = INT32_MIN;
	int8_t x223 = -1;
	static uint8_t x224 = UINT8_MAX;
	volatile int32_t t51 = 1839;

	t51 = (x221<=((x222-x223)==x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -1;
	static int32_t x226 = -1;
	uint64_t x228 = UINT64_MAX;

	t52 = (x225<=((x226-x227)==x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int16_t x232 = -1950;
	int32_t t53 = -76593299;

	t53 = (x229<=((x230-x231)==x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MIN;
	uint32_t x234 = 1U;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = UINT16_MAX;
	int32_t t54 = 7307;

	t54 = (x233<=((x234-x235)==x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MAX;
	int32_t x239 = -2004;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t55 = 52;

	t55 = (x237<=((x238-x239)==x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x241 = INT8_MAX;
	volatile int16_t x242 = 11673;
	int8_t x243 = INT8_MIN;
	int32_t t56 = 0;

	t56 = (x241<=((x242-x243)==x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	static int64_t x246 = -1LL;
	volatile int8_t x247 = INT8_MIN;
	volatile int32_t t57 = 862214675;

	t57 = (x245<=((x246-x247)==x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x253 = 7U;
	int8_t x254 = 0;
	int64_t x255 = -105331LL;
	static int8_t x256 = 38;
	int32_t t58 = -11254;

	t58 = (x253<=((x254-x255)==x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	static int8_t x259 = 0;
	volatile uint8_t x260 = UINT8_MAX;

	t59 = (x257<=((x258-x259)==x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = UINT64_MAX;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	static int32_t t60 = -405;

	t60 = (x261<=((x262-x263)==x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = -15LL;
	int16_t x267 = -1;
	uint64_t x268 = 3LLU;
	int32_t t61 = 0;

	t61 = (x265<=((x266-x267)==x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x270 = INT8_MIN;
	static int32_t x271 = 661749973;
	int8_t x272 = -1;

	t62 = (x269<=((x270-x271)==x272));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x273 = INT64_MAX;
	int8_t x274 = 1;
	volatile int32_t x276 = INT32_MAX;
	static int32_t t63 = 206916;

	t63 = (x273<=((x274-x275)==x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x277 = INT32_MIN;
	int16_t x279 = -1;
	int32_t x280 = INT32_MIN;
	volatile int32_t t64 = 65;

	t64 = (x277<=((x278-x279)==x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x282 = -31;
	volatile uint8_t x283 = 10U;
	int32_t x284 = -1;
	static int32_t t65 = 67;

	t65 = (x281<=((x282-x283)==x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x286 = 2U;
	uint8_t x287 = 56U;
	uint16_t x288 = UINT16_MAX;
	int32_t t66 = 177;

	t66 = (x285<=((x286-x287)==x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = UINT16_MAX;
	static int32_t t67 = 30940702;

	t67 = (x293<=((x294-x295)==x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x297 = INT32_MAX;
	int64_t x298 = 75114105846LL;
	static int16_t x299 = -3;
	int8_t x300 = INT8_MIN;
	volatile int32_t t68 = -37850;

	t68 = (x297<=((x298-x299)==x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x302 = -242767LL;
	int8_t x303 = INT8_MAX;
	uint16_t x304 = 14U;
	volatile int32_t t69 = 0;

	t69 = (x301<=((x302-x303)==x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 15520693038LLU;
	static int32_t x306 = INT32_MAX;
	int8_t x308 = -15;

	t70 = (x305<=((x306-x307)==x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = 9744609U;
	int8_t x310 = INT8_MIN;
	int16_t x311 = -1;

	t71 = (x309<=((x310-x311)==x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x317 = INT8_MIN;
	int8_t x318 = -1;
	int16_t x319 = -1;
	int32_t x320 = -1;

	t72 = (x317<=((x318-x319)==x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x321 = 3129394U;
	uint64_t x322 = UINT64_MAX;
	uint64_t x323 = 180LLU;
	uint32_t x324 = UINT32_MAX;
	int32_t t73 = 5;

	t73 = (x321<=((x322-x323)==x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x325 = -1;
	volatile int16_t x328 = INT16_MIN;
	int32_t t74 = -1;

	t74 = (x325<=((x326-x327)==x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x332 = INT8_MAX;
	static volatile int32_t t75 = 7296;

	t75 = (x329<=((x330-x331)==x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x333 = UINT64_MAX;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MAX;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t76 = -49658615;

	t76 = (x333<=((x334-x335)==x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x341 = 578477651207LLU;
	int32_t x342 = INT32_MIN;
	static volatile int32_t x343 = INT32_MIN;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t77 = 1;

	t77 = (x341<=((x342-x343)==x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x345 = 14388;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t78 = 464;

	t78 = (x345<=((x346-x347)==x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x349 = -6286039231231955LL;
	uint16_t x350 = 6493U;
	uint8_t x351 = 92U;
	int8_t x352 = 0;
	int32_t t79 = 183;

	t79 = (x349<=((x350-x351)==x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x361 = UINT64_MAX;
	uint64_t x362 = 10LLU;
	int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t80 = 924;

	t80 = (x361<=((x362-x363)==x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x365 = UINT64_MAX;
	static uint16_t x366 = 3U;
	int64_t x367 = INT64_MAX;

	t81 = (x365<=((x366-x367)==x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MAX;
	int16_t x370 = -1;
	static uint8_t x371 = 14U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t82 = 143122151;

	t82 = (x369<=((x370-x371)==x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = 1516916378856982LLU;
	static uint16_t x375 = UINT16_MAX;
	volatile int32_t t83 = -3807576;

	t83 = (x373<=((x374-x375)==x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x377 = 31U;
	uint8_t x379 = 2U;
	int32_t x380 = INT32_MIN;
	int32_t t84 = 586156;

	t84 = (x377<=((x378-x379)==x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t85 = 3;

	t85 = (x381<=((x382-x383)==x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x386 = -1;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = INT8_MIN;
	static int32_t t86 = 2;

	t86 = (x385<=((x386-x387)==x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = 6601607352771260LLU;
	static uint8_t x391 = 0U;
	int64_t x392 = 228073LL;
	volatile int32_t t87 = -513539;

	t87 = (x389<=((x390-x391)==x392));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x393 = 917984U;
	int64_t x394 = 99LL;
	int8_t x396 = -1;
	int32_t t88 = -242885;

	t88 = (x393<=((x394-x395)==x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x398 = 65U;
	static uint64_t x399 = 43969892548LLU;
	uint8_t x400 = 87U;
	int32_t t89 = 40271757;

	t89 = (x397<=((x398-x399)==x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	static volatile int8_t x408 = INT8_MAX;
	volatile int32_t t90 = 17425689;

	t90 = (x405<=((x406-x407)==x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = 9689683660LL;
	volatile uint64_t x410 = 1746LLU;
	int64_t x411 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;
	int32_t t91 = 0;

	t91 = (x409<=((x410-x411)==x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x413 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = UINT32_MAX;

	t92 = (x413<=((x414-x415)==x416));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = -29;
	volatile int32_t t93 = 0;

	t93 = (x417<=((x418-x419)==x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = UINT64_MAX;
	int64_t x422 = -1LL;
	static uint64_t x423 = 961455489664LLU;
	int8_t x424 = INT8_MIN;
	volatile int32_t t94 = -199;

	t94 = (x421<=((x422-x423)==x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = -1;
	static int16_t x426 = INT16_MAX;
	volatile uint16_t x427 = UINT16_MAX;
	int64_t x428 = 4002382315969485LL;

	t95 = (x425<=((x426-x427)==x428));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x429 = INT64_MIN;
	uint64_t x431 = UINT64_MAX;
	uint64_t x432 = 254089599428199LLU;
	int32_t t96 = 5039;

	t96 = (x429<=((x430-x431)==x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = -13;
	volatile int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t97 = -1930837;

	t97 = (x433<=((x434-x435)==x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x437 = 17161U;
	static volatile int16_t x439 = -1;
	static volatile uint16_t x440 = UINT16_MAX;

	t98 = (x437<=((x438-x439)==x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x441 = -561470978171971275LL;
	int8_t x442 = -8;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t99 = 218890;

	t99 = (x441<=((x442-x443)==x444));

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

