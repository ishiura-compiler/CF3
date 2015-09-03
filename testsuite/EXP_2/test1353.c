#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
uint16_t x5 = 1U;
uint8_t x7 = 108U;
uint32_t x11 = 91083U;
uint32_t x14 = 29445012U;
int32_t t3 = 201569;
volatile int16_t x22 = INT16_MIN;
static int32_t x31 = INT32_MIN;
volatile uint64_t t8 = 14544499259758LLU;
int8_t x52 = INT8_MIN;
int16_t x55 = -1;
volatile int16_t x68 = INT16_MAX;
int64_t t15 = -100090891415LL;
static int16_t x69 = -6008;
uint8_t x70 = 42U;
uint64_t x78 = 28872409620660LLU;
volatile int64_t x79 = 22759204320LL;
volatile int32_t x87 = 420612;
uint8_t x88 = UINT8_MAX;
uint64_t x89 = 522318LLU;
int8_t x90 = INT8_MAX;
static int8_t x92 = INT8_MIN;
int16_t x94 = INT16_MIN;
int8_t x97 = INT8_MIN;
volatile int32_t t25 = -18564516;
static uint8_t x111 = 24U;
volatile uint64_t x116 = 47248269912385509LLU;
int32_t x118 = INT32_MIN;
static volatile int32_t x120 = INT32_MIN;
volatile int32_t t28 = -511;
volatile uint16_t x128 = 280U;
volatile int32_t t29 = -36943;
int64_t x132 = INT64_MAX;
int8_t x135 = -1;
int16_t x137 = INT16_MIN;
static int64_t t32 = 133152555942869989LL;
int8_t x141 = -32;
int32_t x150 = INT32_MAX;
uint16_t x157 = 3U;
volatile int16_t x161 = 884;
volatile int32_t x163 = -1;
volatile int64_t x175 = -168209283961828LL;
volatile uint32_t x189 = 15711U;
static int64_t x191 = -1LL;
static uint32_t t43 = 439656935U;
static uint16_t x202 = 42U;
int16_t x211 = -1;
volatile int8_t x213 = INT8_MAX;
volatile int16_t x222 = INT16_MAX;
int16_t x228 = -1;
int8_t x230 = INT8_MIN;
static uint8_t x231 = UINT8_MAX;
uint16_t x233 = UINT16_MAX;
int8_t x234 = -1;
volatile uint64_t x240 = 88740LLU;
static int64_t x251 = -1176637LL;
static uint64_t x252 = UINT64_MAX;
uint64_t x259 = UINT64_MAX;
int8_t x268 = INT8_MAX;
int8_t x273 = 0;
int8_t x279 = -1;
int8_t x280 = INT8_MAX;
int8_t x282 = INT8_MIN;
int64_t x284 = INT64_MAX;
uint32_t x290 = UINT32_MAX;
static int16_t x291 = 257;
volatile int64_t t65 = 2819621194LL;
uint64_t x299 = 19041967898759LLU;
int32_t x306 = -1;
int32_t t68 = INT32_MIN;
volatile int32_t x310 = INT32_MAX;
uint8_t x311 = 3U;
volatile uint32_t t69 = 24162100U;
int64_t x313 = INT64_MIN;
static int8_t x314 = 62;
int32_t x315 = -1;
uint64_t x324 = UINT64_MAX;
int16_t x327 = 0;
volatile int64_t t73 = 771421805LL;
int64_t x329 = INT64_MIN;
int32_t x330 = INT32_MIN;
uint16_t x331 = 0U;
volatile int8_t x341 = INT8_MIN;
int8_t x343 = 1;
int8_t x345 = INT8_MAX;
static volatile int32_t t78 = 149950138;
uint16_t x363 = UINT16_MAX;
int64_t t79 = -4652792327LL;
static uint16_t x374 = 41U;
int8_t x376 = INT8_MIN;
volatile int64_t t83 = 7155366234623LL;
int64_t x386 = INT64_MIN;
int32_t x388 = INT32_MIN;
uint8_t x401 = 13U;
static int32_t x412 = INT32_MIN;
static int8_t x416 = 1;
static int64_t x419 = INT64_MIN;
volatile int64_t t90 = 379745390449868LL;
int8_t x434 = -1;
int64_t t95 = 3260LL;
int64_t x455 = -6667521113625LL;
int8_t x460 = -1;


void f0(void) {
	static int16_t x1 = -8419;
	uint16_t x2 = UINT16_MAX;
	volatile int32_t x3 = -1431;
	volatile int32_t t0 = -918410;

	t0 = ((x1+(x2<x3))+x4);

	if (t0 != -8547) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -176;
	uint16_t x8 = 11U;
	int32_t t1 = 904452;

	t1 = ((x5+(x6<x7))+x8);

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 17302161569361LL;
	static uint16_t x10 = UINT16_MAX;
	int64_t x12 = 37622LL;
	volatile int64_t t2 = 329524329568785181LL;

	t2 = ((x9+(x10<x11))+x12);

	if (t2 != 17302161606984LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static uint64_t x15 = 17231LLU;
	int8_t x16 = INT8_MAX;

	t3 = ((x13+(x14<x15))+x16);

	if (t3 != 382) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -37;
	int64_t x18 = 118076LL;
	static volatile int8_t x19 = INT8_MIN;
	uint64_t x20 = 51738023349100LLU;
	volatile uint64_t t4 = 2800529124268707806LLU;

	t4 = ((x17+(x18<x19))+x20);

	if (t4 != 51738023349063LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 4568783LLU;
	volatile uint32_t x23 = UINT32_MAX;
	uint32_t x24 = 1187U;
	uint64_t t5 = 16643615919701534LLU;

	t5 = ((x21+(x22<x23))+x24);

	if (t5 != 4569971LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 5U;
	uint64_t x26 = 4LLU;
	volatile uint8_t x27 = 102U;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -6;

	t6 = ((x25+(x26<x27))+x28);

	if (t6 != -122) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static int8_t x30 = 1;
	static int64_t x32 = INT64_MIN;
	static volatile int64_t t7 = 4321855006280256LL;

	t7 = ((x29+(x30<x31))+x32);

	if (t7 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x33 = 25289649798862340LLU;
	static int8_t x34 = -1;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = UINT32_MAX;

	t8 = ((x33+(x34<x35))+x36);

	if (t8 != 25289654093829636LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 13570697676LLU;
	static uint32_t x38 = UINT32_MAX;
	volatile int16_t x39 = 144;
	int8_t x40 = INT8_MIN;
	uint64_t t9 = 1LLU;

	t9 = ((x37+(x38<x39))+x40);

	if (t9 != 13570697548LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = -1;
	int16_t x43 = INT16_MAX;
	uint8_t x44 = 2U;
	int32_t t10 = 250446603;

	t10 = ((x41+(x42<x43))+x44);

	if (t10 != -2147483645) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = 1;
	int64_t x48 = 21139022153LL;
	int64_t t11 = -2989651756LL;

	t11 = ((x45+(x46<x47))+x48);

	if (t11 != 18991538506LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 94U;
	static int64_t x50 = INT64_MAX;
	volatile int64_t x51 = -1LL;
	volatile int32_t t12 = 25992106;

	t12 = ((x49+(x50<x51))+x52);

	if (t12 != -34) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static volatile uint16_t x54 = 17U;
	static volatile uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 21;

	t13 = ((x53+(x54<x55))+x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -16;
	uint32_t x62 = 0U;
	int32_t x63 = INT32_MIN;
	int32_t x64 = 28007;
	int32_t t14 = -1011220760;

	t14 = ((x61+(x62<x63))+x64);

	if (t14 != 27992) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MAX;
	uint8_t x67 = UINT8_MAX;

	t15 = ((x65+(x66<x67))+x68);

	if (t15 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x71 = INT32_MAX;
	volatile int16_t x72 = -1;
	int32_t t16 = 0;

	t16 = ((x69+(x70<x71))+x72);

	if (t16 != -6008) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = 12U;
	int8_t x74 = INT8_MIN;
	int64_t x75 = -82877484696LL;
	int16_t x76 = -6141;
	volatile int32_t t17 = -110;

	t17 = ((x73+(x74<x75))+x76);

	if (t17 != -6129) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -3360;
	int16_t x80 = INT16_MIN;
	int32_t t18 = 654749135;

	t18 = ((x77+(x78<x79))+x80);

	if (t18 != -36128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int32_t x82 = 78072;
	int64_t x83 = INT64_MAX;
	volatile uint8_t x84 = 88U;
	int32_t t19 = 100316507;

	t19 = ((x81+(x82<x83))+x84);

	if (t19 != -2147483559) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 959807192877LLU;
	int32_t x86 = -9;
	uint64_t t20 = 63085486607349LLU;

	t20 = ((x85+(x86<x87))+x88);

	if (t20 != 959807193133LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x91 = UINT64_MAX;
	static uint64_t t21 = 726781144808755LLU;

	t21 = ((x89+(x90<x91))+x92);

	if (t21 != 522191LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int32_t x95 = INT32_MIN;
	uint16_t x96 = 10667U;
	volatile uint32_t t22 = 3423U;

	t22 = ((x93+(x94<x95))+x96);

	if (t22 != 10666U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = 163731793959LLU;
	uint16_t x99 = UINT16_MAX;
	int64_t x100 = -10580317425650796LL;
	static volatile int64_t t23 = -79251256LL;

	t23 = ((x97+(x98<x99))+x100);

	if (t23 != -10580317425650924LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 159735597957LL;
	int64_t x102 = INT64_MAX;
	static uint64_t x103 = 67913446049821979LLU;
	static volatile int16_t x104 = -1;
	volatile int64_t t24 = -252783341538635LL;

	t24 = ((x101+(x102<x103))+x104);

	if (t24 != 159735597956LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	volatile int32_t x106 = INT32_MIN;
	volatile int64_t x107 = INT64_MIN;
	static volatile int16_t x108 = INT16_MIN;

	t25 = ((x105+(x106<x107))+x108);

	if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	volatile int32_t x110 = -1;
	uint8_t x112 = 6U;
	volatile int32_t t26 = 2;

	t26 = ((x109+(x110<x111))+x112);

	if (t26 != -32761) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 345749259382LL;
	volatile int16_t x114 = -477;
	uint32_t x115 = 8851U;
	volatile uint64_t t27 = 15529556753850LLU;

	t27 = ((x113+(x114<x115))+x116);

	if (t27 != 47248615661644891LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = 6;
	int16_t x119 = -3;

	t28 = ((x117+(x118<x119))+x120);

	if (t28 != -2147483641) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MAX;
	uint64_t x126 = 2729463426270945LLU;
	int8_t x127 = INT8_MIN;

	t29 = ((x125+(x126<x127))+x128);

	if (t29 != 408) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x129 = 461943LLU;
	uint32_t x130 = 585028U;
	int64_t x131 = INT64_MAX;
	uint64_t t30 = 431187240497368LLU;

	t30 = ((x129+(x130<x131))+x132);

	if (t30 != 9223372036855237751LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int16_t x134 = -159;
	int64_t x136 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = ((x133+(x134<x135))+x136);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MAX;
	static int64_t x140 = 14LL;

	t32 = ((x137+(x138<x139))+x140);

	if (t32 != -32753LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = INT16_MAX;
	volatile int32_t t33 = -849705;

	t33 = ((x141+(x142<x143))+x144);

	if (t33 != 32736) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile uint16_t x146 = UINT16_MAX;
	uint16_t x147 = 434U;
	static int16_t x148 = 3446;
	int64_t t34 = -5LL;

	t34 = ((x145+(x146<x147))+x148);

	if (t34 != -9223372036854772362LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 1354U;
	int8_t x151 = INT8_MAX;
	int64_t x152 = -12397896870789LL;
	static int64_t t35 = 80741260882980127LL;

	t35 = ((x149+(x150<x151))+x152);

	if (t35 != -12397896869435LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x158 = 113U;
	int8_t x159 = -1;
	int64_t x160 = INT64_MIN;
	int64_t t36 = -208271841LL;

	t36 = ((x157+(x158<x159))+x160);

	if (t36 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x162 = INT16_MAX;
	int32_t x164 = 0;
	int32_t t37 = -1;

	t37 = ((x161+(x162<x163))+x164);

	if (t37 != 884) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MIN;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = -3;
	static uint32_t t38 = 25U;

	t38 = ((x165+(x166<x167))+x168);

	if (t38 != 4294967293U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = INT16_MIN;
	uint8_t x174 = UINT8_MAX;
	int32_t x176 = 75753741;
	volatile int32_t t39 = -1051110855;

	t39 = ((x173+(x174<x175))+x176);

	if (t39 != 75720973) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = -1LL;
	uint8_t x182 = UINT8_MAX;
	static int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MAX;
	volatile int64_t t40 = -468464LL;

	t40 = ((x181+(x182<x183))+x184);

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = 0;
	int8_t x186 = INT8_MIN;
	static uint16_t x187 = UINT16_MAX;
	volatile uint64_t x188 = 139931044259914LLU;
	volatile uint64_t t41 = 3035279LLU;

	t41 = ((x185+(x186<x187))+x188);

	if (t41 != 139931044259915LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = 10U;
	int16_t x192 = INT16_MAX;
	uint32_t t42 = 245149934U;

	t42 = ((x189+(x190<x191))+x192);

	if (t42 != 48478U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 3910U;
	static volatile int32_t x195 = INT32_MIN;
	int32_t x196 = -20962;

	t43 = ((x193+(x194<x195))+x196);

	if (t43 != 4294946334U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x201 = 3U;
	int16_t x203 = 34;
	int32_t x204 = -432;
	volatile int32_t t44 = -838;

	t44 = ((x201+(x202<x203))+x204);

	if (t44 != -429) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x205 = -6;
	uint16_t x206 = UINT16_MAX;
	static int64_t x207 = -1LL;
	int16_t x208 = 6;
	volatile int32_t t45 = -1763103;

	t45 = ((x205+(x206<x207))+x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x209 = 73811269U;
	uint64_t x210 = 73LLU;
	static int32_t x212 = INT32_MIN;
	uint32_t t46 = 125U;

	t46 = ((x209+(x210<x211))+x212);

	if (t46 != 2221294918U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x214 = INT64_MAX;
	int8_t x215 = -1;
	static int8_t x216 = -1;
	static volatile int32_t t47 = 75;

	t47 = ((x213+(x214<x215))+x216);

	if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = -1;
	uint64_t x223 = 116915785309340398LLU;
	int16_t x224 = INT16_MIN;
	volatile int32_t t48 = -663;

	t48 = ((x221+(x222<x223))+x224);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	static int8_t x227 = -1;
	volatile int32_t t49 = -1;

	t49 = ((x225+(x226<x227))+x228);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	uint64_t x232 = 7000708377LLU;
	volatile uint64_t t50 = 200514986204LLU;

	t50 = ((x229+(x230<x231))+x232);

	if (t50 != 7000708377LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x235 = 5;
	static int64_t x236 = INT64_MIN;
	volatile int64_t t51 = -4647903LL;

	t51 = ((x233+(x234<x235))+x236);

	if (t51 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MAX;
	int32_t x239 = INT32_MIN;
	volatile uint64_t t52 = 4079309571242LLU;

	t52 = ((x237+(x238<x239))+x240);

	if (t52 != 154275LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MIN;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = 1;
	int64_t x244 = -1LL;
	int64_t t53 = -1LL;

	t53 = ((x241+(x242<x243))+x244);

	if (t53 != -129LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = -1;
	uint32_t x248 = UINT32_MAX;
	static uint32_t t54 = UINT32_MAX;

	t54 = ((x245+(x246<x247))+x248);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = 0;
	static int8_t x250 = 1;
	uint64_t t55 = UINT64_MAX;

	t55 = ((x249+(x250<x251))+x252);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x257 = 112U;
	int32_t x258 = INT32_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t56 = -7283;

	t56 = ((x257+(x258<x259))+x260);

	if (t56 != -2147483535) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = 984LL;
	int16_t x262 = 12772;
	uint8_t x263 = 12U;
	int16_t x264 = INT16_MAX;
	int64_t t57 = 111275122512LL;

	t57 = ((x261+(x262<x263))+x264);

	if (t57 != 33751LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = -1LL;
	volatile int64_t x266 = -5623LL;
	volatile int8_t x267 = 59;
	int64_t t58 = 82130LL;

	t58 = ((x265+(x266<x267))+x268);

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x269 = UINT32_MAX;
	uint32_t x270 = 3098U;
	static volatile uint16_t x271 = UINT16_MAX;
	uint16_t x272 = 6085U;
	uint32_t t59 = 482U;

	t59 = ((x269+(x270<x271))+x272);

	if (t59 != 6085U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x274 = INT64_MIN;
	volatile uint16_t x275 = 183U;
	volatile int8_t x276 = -1;
	static volatile int32_t t60 = 180;

	t60 = ((x273+(x274<x275))+x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x277 = 10U;
	static uint8_t x278 = 102U;
	uint32_t t61 = 0U;

	t61 = ((x277+(x278<x279))+x280);

	if (t61 != 137U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x281 = INT64_MIN;
	static int64_t x283 = -558628747317522LL;
	int64_t t62 = 2096780695584688LL;

	t62 = ((x281+(x282<x283))+x284);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = 237U;
	uint32_t x286 = 19598963U;
	uint16_t x287 = 35U;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t63 = 1063492400147181100LLU;

	t63 = ((x285+(x286<x287))+x288);

	if (t63 != 236LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = 4491198LL;
	int8_t x292 = 9;
	volatile int64_t t64 = -60388LL;

	t64 = ((x289+(x290<x291))+x292);

	if (t64 != 4491207LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MAX;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;

	t65 = ((x293+(x294<x295))+x296);

	if (t65 != 32766LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -5;
	static volatile uint16_t x298 = 27U;
	static uint8_t x300 = 4U;
	static volatile int32_t t66 = 135196;

	t66 = ((x297+(x298<x299))+x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x301 = 302626;
	uint64_t x302 = 5535979908430472LLU;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	static int32_t t67 = 256037069;

	t67 = ((x301+(x302<x303))+x304);

	if (t67 != 269858) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x305 = INT32_MIN;
	volatile uint8_t x307 = 4U;
	int16_t x308 = -1;

	t68 = ((x305+(x306<x307))+x308);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = -1;
	volatile uint32_t x312 = 25175656U;

	t69 = ((x309+(x310<x311))+x312);

	if (t69 != 25175655U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x316 = 60U;
	volatile int64_t t70 = 139199003682445LL;

	t70 = ((x313+(x314<x315))+x316);

	if (t70 != -9223372036854775748LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = -1952LL;
	uint64_t x319 = 5666867693LLU;
	int16_t x320 = INT16_MAX;
	int64_t t71 = -9588154085LL;

	t71 = ((x317+(x318<x319))+x320);

	if (t71 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x321 = INT32_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	uint16_t x323 = 0U;
	volatile uint64_t t72 = 1454587491358LLU;

	t72 = ((x321+(x322<x323))+x324);

	if (t72 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = -896107LL;
	int64_t x328 = 625066051448LL;

	t73 = ((x325+(x326<x327))+x328);

	if (t73 != 625066051704LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x332 = 936573U;
	int64_t t74 = 489497313474762208LL;

	t74 = ((x329+(x330<x331))+x332);

	if (t74 != -9223372036853839234LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x333 = 36;
	int16_t x334 = INT16_MAX;
	volatile uint16_t x335 = 2U;
	volatile int8_t x336 = 6;
	int32_t t75 = -189;

	t75 = ((x333+(x334<x335))+x336);

	if (t75 != 42) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x342 = -30;
	uint8_t x344 = UINT8_MAX;
	int32_t t76 = 2516549;

	t76 = ((x341+(x342<x343))+x344);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 109729774LLU;
	volatile uint64_t x348 = 0LLU;
	static uint64_t t77 = 523LLU;

	t77 = ((x345+(x346<x347))+x348);

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = UINT16_MAX;
	int32_t x356 = -1;

	t78 = ((x353+(x354<x355))+x356);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = 8143LL;
	uint32_t x362 = 0U;
	static volatile int32_t x364 = INT32_MIN;

	t79 = ((x361+(x362<x363))+x364);

	if (t79 != -2147475504LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = -104;
	volatile uint8_t x367 = 6U;
	int64_t x368 = 77083816327153LL;
	volatile int64_t t80 = -530518122558LL;

	t80 = ((x365+(x366<x367))+x368);

	if (t80 != 77083816327026LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = -1;
	uint8_t x370 = 113U;
	int64_t x371 = INT64_MIN;
	int32_t x372 = 1;
	volatile int32_t t81 = -25565;

	t81 = ((x369+(x370<x371))+x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = 67408951010627619LL;
	int32_t x375 = -1;
	int64_t t82 = -1LL;

	t82 = ((x373+(x374<x375))+x376);

	if (t82 != 67408951010627491LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x377 = 1;
	uint32_t x378 = 886212U;
	static uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MIN;

	t83 = ((x377+(x378<x379))+x380);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x385 = 2U;
	int16_t x387 = INT16_MIN;
	int32_t t84 = 183558453;

	t84 = ((x385+(x386<x387))+x388);

	if (t84 != -2147483645) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	uint64_t x404 = 29331LLU;
	volatile uint64_t t85 = 22166802149344LLU;

	t85 = ((x401+(x402<x403))+x404);

	if (t85 != 29345LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x405 = UINT8_MAX;
	static uint64_t x406 = 36LLU;
	volatile uint8_t x407 = 12U;
	int16_t x408 = -107;
	static int32_t t86 = -221469830;

	t86 = ((x405+(x406<x407))+x408);

	if (t86 != 148) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = -913317556LL;
	int8_t x410 = 0;
	int16_t x411 = 3417;
	int64_t t87 = 323LL;

	t87 = ((x409+(x410<x411))+x412);

	if (t87 != -3060801203LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x413 = INT8_MAX;
	int32_t x414 = -1;
	int32_t x415 = INT32_MIN;
	volatile int32_t t88 = -31324344;

	t88 = ((x413+(x414<x415))+x416);

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = UINT16_MAX;
	static int64_t x418 = INT64_MAX;
	int64_t x420 = 64451079LL;
	volatile int64_t t89 = 13499602192923LL;

	t89 = ((x417+(x418<x419))+x420);

	if (t89 != 64516614LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 105433819U;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int64_t x424 = INT64_MIN;

	t90 = ((x421+(x422<x423))+x424);

	if (t90 != -9223372036749341989LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x425 = 11499180581796LLU;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	int16_t x428 = INT16_MAX;
	static uint64_t t91 = 14063384552LLU;

	t91 = ((x425+(x426<x427))+x428);

	if (t91 != 11499180614564LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = 77773595905LL;
	int32_t x430 = -1;
	int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MIN;
	static volatile int64_t t92 = 1LL;

	t92 = ((x429+(x430<x431))+x432);

	if (t92 != -9223371959081179903LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x433 = UINT8_MAX;
	volatile int16_t x435 = INT16_MAX;
	uint16_t x436 = 77U;
	volatile int32_t t93 = 478821;

	t93 = ((x433+(x434<x435))+x436);

	if (t93 != 333) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x437 = 5315U;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = INT16_MAX;
	int8_t x440 = 40;
	volatile int32_t t94 = -3;

	t94 = ((x437+(x438<x439))+x440);

	if (t94 != 5355) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x441 = UINT16_MAX;
	volatile int64_t x442 = 29LL;
	volatile uint32_t x443 = UINT32_MAX;
	static int64_t x444 = INT64_MIN;

	t95 = ((x441+(x442<x443))+x444);

	if (t95 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x445 = 15U;
	volatile int8_t x446 = -1;
	uint64_t x447 = 781580747170LLU;
	int32_t x448 = -6163;
	volatile int32_t t96 = -902344004;

	t96 = ((x445+(x446<x447))+x448);

	if (t96 != -6148) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x449 = INT16_MIN;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 10014906898916001LLU;
	static uint16_t x452 = 640U;
	volatile int32_t t97 = 11942;

	t97 = ((x449+(x450<x451))+x452);

	if (t97 != -32128) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = INT8_MIN;
	int8_t x454 = 6;
	int64_t x456 = -495089115530474017LL;
	volatile int64_t t98 = 1421422113901226LL;

	t98 = ((x453+(x454<x455))+x456);

	if (t98 != -495089115530474145LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x457 = INT64_MIN;
	int8_t x458 = 0;
	int64_t x459 = INT64_MAX;
	int64_t t99 = INT64_MIN;

	t99 = ((x457+(x458<x459))+x460);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

