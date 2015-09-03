#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
static uint8_t x2 = 3U;
int64_t t0 = INT64_MIN;
static volatile uint32_t t1 = 2341U;
int8_t x15 = INT8_MAX;
uint16_t x18 = 6303U;
int8_t x20 = -44;
int32_t x22 = INT32_MIN;
volatile int8_t x25 = -1;
volatile uint64_t x34 = 19779391LLU;
int64_t x36 = INT64_MAX;
int64_t t8 = INT64_MAX;
volatile int32_t x37 = -1;
volatile uint32_t t9 = 4856786U;
int64_t x44 = INT64_MIN;
static int16_t x45 = INT16_MAX;
volatile uint64_t x48 = UINT64_MAX;
static uint32_t x52 = 440U;
static int8_t x53 = 1;
static volatile int64_t t13 = -4681755LL;
uint64_t x57 = 4291913756LLU;
uint16_t x58 = 10U;
static volatile int64_t x81 = INT64_MIN;
uint8_t x82 = 28U;
uint16_t x84 = 77U;
uint32_t x94 = 70661345U;
int8_t x96 = -1;
volatile int8_t x98 = -1;
static int32_t x101 = INT32_MIN;
uint32_t x102 = 841937U;
uint64_t x103 = UINT64_MAX;
int16_t x110 = INT16_MIN;
volatile int64_t t27 = 4559200491LL;
int8_t x118 = -1;
int64_t x123 = INT64_MAX;
int32_t x124 = 19313;
volatile uint64_t x129 = 42945137003413LLU;
uint8_t x131 = 24U;
int32_t x136 = -1;
uint8_t x144 = UINT8_MAX;
static int32_t x154 = -580283182;
uint64_t t40 = 11335LLU;
static volatile int32_t x168 = 28420;
static uint8_t x170 = 25U;
static int16_t x177 = 1;
int64_t x182 = -6LL;
volatile int16_t x187 = -1;
int8_t x189 = 6;
int32_t x200 = INT32_MIN;
int32_t t49 = -214;
int64_t x203 = -37878LL;
uint64_t x205 = UINT64_MAX;
static volatile int16_t x221 = -15;
uint32_t x223 = UINT32_MAX;
static uint8_t x224 = 8U;
uint8_t x229 = 0U;
int16_t x230 = INT16_MIN;
volatile int64_t t58 = 458081LL;
int8_t x238 = 0;
uint64_t x244 = 0LLU;
int16_t x245 = -1;
static volatile int32_t x246 = -130;
static volatile int8_t x249 = -1;
int32_t x253 = -1;
static int8_t x257 = INT8_MAX;
int8_t x260 = -3;
static uint8_t x261 = 0U;
volatile int8_t x273 = INT8_MIN;
int8_t x276 = INT8_MIN;
int64_t t68 = 28471427195314LL;
static int16_t x280 = INT16_MAX;
int8_t x286 = INT8_MAX;
volatile uint32_t x289 = 28416995U;
uint16_t x293 = 151U;
static uint8_t x297 = UINT8_MAX;
static int8_t x299 = INT8_MIN;
volatile int32_t t74 = -6752578;
uint32_t x302 = 68078U;
uint32_t x304 = 337666015U;
volatile uint64_t t78 = 824251LLU;
int32_t x319 = 834;
volatile int32_t t80 = 7382;
int8_t x332 = -1;
volatile int64_t t82 = -5915336832044523LL;
static uint32_t x339 = 5655U;
volatile uint32_t t84 = 2433761U;
static volatile uint16_t x356 = 10U;
int16_t x357 = INT16_MIN;
volatile int16_t x361 = 137;
static volatile int16_t x362 = INT16_MIN;
uint64_t t91 = 0LLU;
volatile int8_t x369 = -1;
int16_t x382 = INT16_MIN;
static int64_t x384 = INT64_MIN;
static uint64_t x387 = 1108538LLU;
uint64_t t96 = 8151624867831319LLU;
volatile int64_t x389 = INT64_MIN;
static volatile int64_t x390 = INT64_MAX;
uint64_t x391 = UINT64_MAX;
int32_t x393 = INT32_MIN;
volatile int8_t x397 = -48;
static volatile int32_t t99 = INT32_MIN;


void f0(void) {
	int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;

	t0 = (((x1<x2)&x3)|x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static volatile uint32_t x6 = 3U;
	int8_t x7 = INT8_MIN;
	static uint32_t x8 = 349925U;

	t1 = (((x5<x6)&x7)|x8);

	if (t1 != 349925U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 1;
	uint64_t x10 = 554195611497605029LLU;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = INT32_MIN;
	uint64_t t2 = 3410736072792957LLU;

	t2 = (((x9<x10)&x11)|x12);

	if (t2 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 4U;
	uint32_t x16 = 798099U;
	static uint32_t t3 = 28003U;

	t3 = (((x13<x14)&x15)|x16);

	if (t3 != 798099U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -1002990;

	t4 = (((x17<x18)&x19)|x20);

	if (t4 != -44) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1421603102LL;
	volatile uint32_t x23 = 3001U;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -52213LL;

	t5 = (((x21<x22)&x23)|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 2;
	volatile int16_t x27 = -1;
	int8_t x28 = -2;
	int32_t t6 = -4281;

	t6 = (((x25<x26)&x27)|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 17;
	int16_t x30 = 195;
	volatile int32_t x31 = 2;
	int64_t x32 = -1600614242029382559LL;
	int64_t t7 = 1270LL;

	t7 = (((x29<x30)&x31)|x32);

	if (t7 != -1600614242029382559LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	static int8_t x35 = -11;

	t8 = (((x33<x34)&x35)|x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	static int16_t x39 = 176;
	uint32_t x40 = 31U;

	t9 = (((x37<x38)&x39)|x40);

	if (t9 != 31U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MAX;
	int64_t t10 = 136666297127LL;

	t10 = (((x41<x42)&x43)|x44);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 2573U;
	volatile int64_t x47 = INT64_MAX;
	static volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x45<x46)&x47)|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -6;
	uint16_t x50 = UINT16_MAX;
	volatile uint8_t x51 = UINT8_MAX;
	volatile uint32_t t12 = 1U;

	t12 = (((x49<x50)&x51)|x52);

	if (t12 != 441U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = -1;
	volatile int64_t x55 = -747266160125LL;
	int8_t x56 = INT8_MIN;

	t13 = (((x53<x54)&x55)|x56);

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = 4;
	static int64_t x60 = -633248LL;
	int64_t t14 = 1492980LL;

	t14 = (((x57<x58)&x59)|x60);

	if (t14 != -633248LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;
	volatile int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MIN;
	static volatile int64_t t15 = 8136772919353835LL;

	t15 = (((x61<x62)&x63)|x64);

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MAX;
	int8_t x66 = 1;
	volatile uint8_t x67 = 7U;
	int8_t x68 = 27;
	int32_t t16 = 9;

	t16 = (((x65<x66)&x67)|x68);

	if (t16 != 27) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MAX;
	static volatile uint32_t x71 = 63U;
	int8_t x72 = -58;
	volatile uint32_t t17 = 0U;

	t17 = (((x69<x70)&x71)|x72);

	if (t17 != 4294967239U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 16522230U;
	int32_t x74 = -1;
	int64_t x75 = -13857LL;
	static int8_t x76 = 18;
	volatile int64_t t18 = -14838125159814920LL;

	t18 = (((x73<x74)&x75)|x76);

	if (t18 != 19LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x77 = 2265072387561LLU;
	volatile uint32_t x78 = UINT32_MAX;
	int8_t x79 = 8;
	static uint16_t x80 = 2013U;
	int32_t t19 = -918250973;

	t19 = (((x77<x78)&x79)|x80);

	if (t19 != 2013) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x83 = INT64_MAX;
	volatile int64_t t20 = -3473392265LL;

	t20 = (((x81<x82)&x83)|x84);

	if (t20 != 77LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 23U;
	int8_t x86 = 14;
	int32_t x87 = 330;
	int32_t x88 = -68;
	volatile int32_t t21 = 94349;

	t21 = (((x85<x86)&x87)|x88);

	if (t21 != -68) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 3984;
	int16_t x90 = -168;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = -1LL;
	static volatile int64_t t22 = 0LL;

	t22 = (((x89<x90)&x91)|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int16_t x95 = INT16_MIN;
	volatile int32_t t23 = 51458547;

	t23 = (((x93<x94)&x95)|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile int16_t x99 = -1;
	volatile uint32_t x100 = 387028840U;
	static volatile uint32_t t24 = 10510U;

	t24 = (((x97<x98)&x99)|x100);

	if (t24 != 387028841U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x104 = -1;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x101<x102)&x103)|x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -1332742LL;
	static int64_t x107 = INT64_MAX;
	uint32_t x108 = UINT32_MAX;
	int64_t t26 = -3000842LL;

	t26 = (((x105<x106)&x107)|x108);

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	int64_t x111 = -587405LL;
	uint8_t x112 = UINT8_MAX;

	t27 = (((x109<x110)&x111)|x112);

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = INT64_MAX;
	volatile uint32_t x115 = 30U;
	volatile int8_t x116 = -39;
	uint32_t t28 = 1620162U;

	t28 = (((x113<x114)&x115)|x116);

	if (t28 != 4294967257U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = 536121U;
	uint16_t x119 = 7U;
	uint8_t x120 = 5U;
	static volatile int32_t t29 = -6687;

	t29 = (((x117<x118)&x119)|x120);

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = 1836;
	uint8_t x122 = 9U;
	volatile int64_t t30 = -9853476LL;

	t30 = (((x121<x122)&x123)|x124);

	if (t30 != 19313LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -3518;
	static int32_t x126 = INT32_MAX;
	uint8_t x127 = 0U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -104056185;

	t31 = (((x125<x126)&x127)|x128);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 17197624U;
	uint32_t x132 = 12688702U;
	static uint32_t t32 = 117944U;

	t32 = (((x129<x130)&x131)|x132);

	if (t32 != 12688702U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -6;
	static uint16_t x134 = UINT16_MAX;
	uint8_t x135 = 124U;
	static volatile int32_t t33 = 476370;

	t33 = (((x133<x134)&x135)|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 1595838106931213111LLU;
	uint64_t x138 = UINT64_MAX;
	volatile uint16_t x139 = 717U;
	volatile int8_t x140 = -9;
	int32_t t34 = 1;

	t34 = (((x137<x138)&x139)|x140);

	if (t34 != -9) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int64_t x142 = -1LL;
	int16_t x143 = 2893;
	volatile int32_t t35 = 38892344;

	t35 = (((x141<x142)&x143)|x144);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 265629U;
	volatile int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 73U;
	volatile uint32_t t36 = 1529007U;

	t36 = (((x145<x146)&x147)|x148);

	if (t36 != 73U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = 1;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 25U;
	static int32_t t37 = -176149;

	t37 = (((x149<x150)&x151)|x152);

	if (t37 != 25) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile uint16_t x155 = 17U;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 2801334;

	t38 = (((x153<x154)&x155)|x156);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -257;
	volatile uint16_t x158 = 27452U;
	static uint64_t x159 = UINT64_MAX;
	volatile int8_t x160 = INT8_MIN;
	static volatile uint64_t t39 = 332254711LLU;

	t39 = (((x157<x158)&x159)|x160);

	if (t39 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 492648;
	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = 11LLU;

	t40 = (((x161<x162)&x163)|x164);

	if (t40 != 11LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	static int32_t x167 = 96406;
	int32_t t41 = -125;

	t41 = (((x165<x166)&x167)|x168);

	if (t41 != 28420) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 3720379U;
	static volatile int64_t x171 = -1LL;
	int32_t x172 = -720;
	static int64_t t42 = -71509LL;

	t42 = (((x169<x170)&x171)|x172);

	if (t42 != -720LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -1074;
	int32_t x176 = INT32_MAX;
	volatile int32_t t43 = INT32_MAX;

	t43 = (((x173<x174)&x175)|x176);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 67U;
	int8_t x179 = -32;
	volatile uint8_t x180 = 4U;
	volatile int32_t t44 = -798538;

	t44 = (((x177<x178)&x179)|x180);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 0;
	int32_t x183 = -13902;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (((x181<x182)&x183)|x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MAX;
	static uint32_t x186 = 18336428U;
	int8_t x188 = -29;
	int32_t t46 = -14;

	t46 = (((x185<x186)&x187)|x188);

	if (t46 != -29) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	uint64_t x191 = 251320018916150LLU;
	static volatile uint16_t x192 = 56U;
	uint64_t t47 = 293LLU;

	t47 = (((x189<x190)&x191)|x192);

	if (t47 != 56LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = -3683;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t48 = -2;

	t48 = (((x193<x194)&x195)|x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = 1022431861;
	int32_t x199 = 674503283;

	t49 = (((x197<x198)&x199)|x200);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = UINT64_MAX;
	volatile int8_t x204 = INT8_MAX;
	int64_t t50 = 7286388097523LL;

	t50 = (((x201<x202)&x203)|x204);

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x206 = 26145;
	int32_t x207 = INT32_MAX;
	int32_t x208 = -1;
	int32_t t51 = 4456933;

	t51 = (((x205<x206)&x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 0U;
	int16_t x210 = 11646;
	volatile uint16_t x211 = 61U;
	uint32_t x212 = 2195721U;
	uint32_t t52 = 432046339U;

	t52 = (((x209<x210)&x211)|x212);

	if (t52 != 2195721U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -81LL;
	uint16_t x214 = 1U;
	volatile int16_t x215 = -2086;
	int8_t x216 = INT8_MAX;
	static int32_t t53 = 16089;

	t53 = (((x213<x214)&x215)|x216);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	uint32_t x218 = UINT32_MAX;
	static int8_t x219 = INT8_MIN;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = INT32_MIN;

	t54 = (((x217<x218)&x219)|x220);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MIN;
	static volatile uint32_t t55 = 35U;

	t55 = (((x221<x222)&x223)|x224);

	if (t55 != 8U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	static uint32_t x226 = 45778314U;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 3414439;
	int64_t t56 = -402LL;

	t56 = (((x225<x226)&x227)|x228);

	if (t56 != 3414439LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MAX;
	static int32_t t57 = 64836;

	t57 = (((x229<x230)&x231)|x232);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	static volatile uint8_t x234 = 1U;
	int64_t x235 = INT64_MAX;
	static uint8_t x236 = 1U;

	t58 = (((x233<x234)&x235)|x236);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	uint16_t x239 = 476U;
	uint8_t x240 = 57U;
	volatile int32_t t59 = -1;

	t59 = (((x237<x238)&x239)|x240);

	if (t59 != 57) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int8_t x242 = INT8_MIN;
	static uint8_t x243 = 0U;
	uint64_t t60 = 0LLU;

	t60 = (((x241<x242)&x243)|x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x247 = 4149752180LL;
	volatile uint8_t x248 = 127U;
	int64_t t61 = 148363430027551917LL;

	t61 = (((x245<x246)&x247)|x248);

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 1792546754U;
	static int64_t x251 = -136497057LL;
	volatile int8_t x252 = -1;
	volatile int64_t t62 = -1199188567LL;

	t62 = (((x249<x250)&x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	volatile uint32_t x256 = UINT32_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (((x253<x254)&x255)|x256);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 174332U;
	uint16_t x259 = 241U;
	volatile int32_t t64 = 44808;

	t64 = (((x257<x258)&x259)|x260);

	if (t64 != -3) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -1;
	volatile int64_t x263 = -1LL;
	uint64_t x264 = 10964LLU;
	uint64_t t65 = 2058293989568938LLU;

	t65 = (((x261<x262)&x263)|x264);

	if (t65 != 10964LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	static int16_t x267 = INT16_MAX;
	uint64_t x268 = 2LLU;
	volatile uint64_t t66 = 60517794176LLU;

	t66 = (((x265<x266)&x267)|x268);

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static volatile int16_t x270 = 902;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = -7;
	static volatile int32_t t67 = 411;

	t67 = (((x269<x270)&x271)|x272);

	if (t67 != -7) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x274 = UINT32_MAX;
	int64_t x275 = INT64_MAX;

	t68 = (((x273<x274)&x275)|x276);

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	uint16_t x278 = 30U;
	int16_t x279 = 1452;
	int32_t t69 = -86257;

	t69 = (((x277<x278)&x279)|x280);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile int64_t x282 = INT64_MIN;
	uint16_t x283 = UINT16_MAX;
	static int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = (((x281<x282)&x283)|x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int32_t x287 = INT32_MAX;
	int32_t x288 = INT32_MAX;
	int32_t t71 = INT32_MAX;

	t71 = (((x285<x286)&x287)|x288);

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = 10;
	volatile int64_t x291 = -1LL;
	volatile int64_t x292 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = (((x289<x290)&x291)|x292);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x294 = UINT8_MAX;
	uint64_t x295 = 466931433LLU;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t73 = 3696LLU;

	t73 = (((x293<x294)&x295)|x296);

	if (t73 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 3U;
	int16_t x300 = INT16_MIN;

	t74 = (((x297<x298)&x299)|x300);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static volatile uint64_t x303 = 475437LLU;
	static uint64_t t75 = 54990611LLU;

	t75 = (((x301<x302)&x303)|x304);

	if (t75 != 337666015LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 44746478871LLU;
	volatile uint64_t x306 = 513059366304916LLU;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = -319191;

	t76 = (((x305<x306)&x307)|x308);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x309 = -821;
	uint8_t x310 = UINT8_MAX;
	volatile uint64_t x311 = 66101LLU;
	int64_t x312 = -17LL;
	uint64_t t77 = 13470267LLU;

	t77 = (((x309<x310)&x311)|x312);

	if (t77 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	int16_t x314 = -5682;
	uint8_t x315 = 1U;
	uint64_t x316 = 352751018823711202LLU;

	t78 = (((x313<x314)&x315)|x316);

	if (t78 != 352751018823711203LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MAX;
	int8_t x318 = INT8_MAX;
	uint32_t x320 = UINT32_MAX;
	uint32_t t79 = UINT32_MAX;

	t79 = (((x317<x318)&x319)|x320);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -21;
	static int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = 20;

	t80 = (((x321<x322)&x323)|x324);

	if (t80 != 20) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x325 = INT8_MAX;
	volatile int8_t x326 = INT8_MIN;
	volatile int64_t x327 = INT64_MIN;
	uint64_t x328 = 3LLU;
	volatile uint64_t t81 = 8125558212735626LLU;

	t81 = (((x325<x326)&x327)|x328);

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 1U;
	int64_t x331 = -30501488LL;

	t82 = (((x329<x330)&x331)|x332);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	static uint8_t x335 = 0U;
	volatile int16_t x336 = 0;
	int32_t t83 = -4186;

	t83 = (((x333<x334)&x335)|x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	uint32_t x338 = 57U;
	int32_t x340 = 211;

	t84 = (((x337<x338)&x339)|x340);

	if (t84 != 211U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 233768592284547LLU;
	int32_t x342 = INT32_MIN;
	int16_t x343 = 0;
	volatile int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 60145082;

	t85 = (((x341<x342)&x343)|x344);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MAX;
	int64_t x346 = -1LL;
	volatile int64_t x347 = -79943405268366062LL;
	volatile int64_t x348 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (((x345<x346)&x347)|x348);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = -26861195;
	uint16_t x351 = UINT16_MAX;
	static volatile int32_t x352 = -12039353;
	volatile int32_t t87 = 1;

	t87 = (((x349<x350)&x351)|x352);

	if (t87 != -12039353) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 112656230U;
	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	volatile int32_t t88 = 108148;

	t88 = (((x353<x354)&x355)|x356);

	if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = -1LL;
	static int64_t x360 = INT64_MIN;
	static volatile int64_t t89 = -793666212152206LL;

	t89 = (((x357<x358)&x359)|x360);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x363 = -1;
	int64_t x364 = -32494788591LL;
	volatile int64_t t90 = -1LL;

	t90 = (((x361<x362)&x363)|x364);

	if (t90 != -32494788591LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 5;
	int32_t x366 = -1;
	uint64_t x367 = 3559567348LLU;
	volatile uint64_t x368 = 49209LLU;

	t91 = (((x365<x366)&x367)|x368);

	if (t91 != 49209LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MAX;
	volatile uint32_t x371 = 13419U;
	volatile uint32_t x372 = 58U;
	volatile uint32_t t92 = 0U;

	t92 = (((x369<x370)&x371)|x372);

	if (t92 != 59U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	uint16_t x374 = 11U;
	volatile int8_t x375 = -1;
	int16_t x376 = -1;
	int32_t t93 = 401608987;

	t93 = (((x373<x374)&x375)|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 1U;
	volatile uint8_t x379 = 30U;
	int64_t x380 = 889442061819LL;
	static volatile int64_t t94 = 82907660761LL;

	t94 = (((x377<x378)&x379)|x380);

	if (t94 != 889442061819LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 90U;
	volatile int8_t x383 = -4;
	volatile int64_t t95 = INT64_MIN;

	t95 = (((x381<x382)&x383)|x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = UINT64_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	static volatile int64_t x388 = INT64_MIN;

	t96 = (((x385<x386)&x387)|x388);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x392 = -3940259LL;
	static volatile uint64_t t97 = 178066750813290962LLU;

	t97 = (((x389<x390)&x391)|x392);

	if (t97 != 18446744073705611357LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 1937563662U;
	volatile int8_t x396 = INT8_MAX;
	volatile uint32_t t98 = 3U;

	t98 = (((x393<x394)&x395)|x396);

	if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -1;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;

	t99 = (((x397<x398)&x399)|x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

