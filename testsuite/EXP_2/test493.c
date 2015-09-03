#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x7 = 20U;
uint16_t x19 = 8214U;
uint8_t x20 = 69U;
int32_t x21 = 761446896;
int16_t x46 = -1;
static int64_t t9 = -209288574841283948LL;
static int64_t t10 = -15059621507749335LL;
int8_t x55 = INT8_MAX;
int32_t t12 = -5;
int64_t t13 = 68291LL;
int64_t x72 = INT64_MAX;
static uint32_t x89 = UINT32_MAX;
uint16_t x97 = 34U;
volatile int64_t x103 = -1LL;
volatile int64_t t21 = -2722473284LL;
volatile int8_t x107 = -62;
static int16_t x108 = INT16_MIN;
volatile int64_t t23 = 59259LL;
int8_t x114 = INT8_MAX;
int8_t x116 = INT8_MIN;
int32_t t26 = INT32_MAX;
volatile uint64_t x126 = 329253796748978510LLU;
uint8_t x127 = UINT8_MAX;
uint64_t t27 = 6023542LLU;
static uint16_t x129 = 8215U;
volatile uint64_t t28 = 436919LLU;
volatile int8_t x152 = -2;
int32_t x161 = -1;
static int8_t x165 = -1;
static int8_t x166 = INT8_MIN;
int16_t x172 = INT16_MIN;
static int16_t x174 = 280;
int64_t x184 = INT64_MAX;
volatile int64_t t36 = INT64_MAX;
static int8_t x192 = -8;
int64_t t38 = 1113501006515LL;
volatile int64_t t44 = -3LL;
int32_t x250 = INT32_MIN;
int16_t x266 = INT16_MIN;
static volatile int8_t x273 = 34;
static volatile int32_t x274 = -80947;
static uint8_t x277 = UINT8_MAX;
int16_t x280 = INT16_MIN;
int16_t x287 = INT16_MAX;
uint64_t t59 = 1194781LLU;
static uint64_t x303 = 5LLU;
int32_t x312 = -1;
int32_t x313 = INT32_MIN;
int16_t x329 = -1;
int16_t x334 = INT16_MIN;
int16_t x346 = INT16_MIN;
static int64_t t70 = 11461017831937995LL;
int32_t t74 = -1;
static uint8_t x409 = 26U;
int32_t x423 = -1;
volatile uint64_t t87 = 472575LLU;
uint16_t x473 = UINT16_MAX;
static int64_t x474 = -1LL;
volatile int16_t x476 = INT16_MIN;
uint8_t x491 = 0U;
volatile int32_t x497 = 332;
int8_t x502 = -1;
static int16_t x503 = 1760;
volatile int32_t t98 = -2911961;
uint32_t x506 = 547621U;


void f0(void) {
	static uint64_t x5 = 148127750424849LLU;
	int64_t x6 = -1LL;
	int32_t x8 = -1;
	static volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x5|(x6*x7))|x8);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = 1;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -455395;

	t1 = ((x9|(x10*x11))|x12);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 0;
	uint16_t x14 = UINT16_MAX;
	static int32_t x15 = -1;
	int64_t x16 = INT64_MAX;
	volatile int64_t t2 = 542030707LL;

	t2 = ((x13|(x14*x15))|x16);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 927434930204LLU;
	int8_t x18 = -1;
	static uint64_t t3 = UINT64_MAX;

	t3 = ((x17|(x18*x19))|x20);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -1LL;
	volatile int32_t x23 = -42963;
	int64_t x24 = 10961602222LL;
	volatile int64_t t4 = -17LL;

	t4 = ((x21|(x22*x23))|x24);

	if (t4 != 11500709887LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	volatile uint8_t x30 = UINT8_MAX;
	static int16_t x31 = -244;
	uint16_t x32 = UINT16_MAX;
	static int32_t t5 = -533627;

	t5 = ((x29|(x30*x31))|x32);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = 918196LLU;
	int32_t x35 = -10680335;
	int8_t x36 = -1;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x33|(x34*x35))|x36);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MIN;
	uint8_t x38 = 0U;
	int32_t x39 = 21518;
	uint16_t x40 = 3345U;
	int64_t t7 = 6451LL;

	t7 = ((x37|(x38*x39))|x40);

	if (t7 != -9223372036854772463LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 60U;
	int8_t x42 = INT8_MIN;
	volatile int64_t x43 = 4584LL;
	int64_t x44 = -1LL;
	volatile int64_t t8 = -53877473904LL;

	t8 = ((x41|(x42*x43))|x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	int64_t x48 = 7780433794038LL;

	t9 = ((x45|(x46*x47))|x48);

	if (t9 != -27658LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 1U;
	uint8_t x50 = 0U;
	static int8_t x51 = INT8_MIN;
	int64_t x52 = 2318LL;

	t10 = ((x49|(x50*x51))|x52);

	if (t10 != 2319LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 4249028829659596661LLU;
	static int16_t x54 = -107;
	volatile int8_t x56 = INT8_MIN;
	static uint64_t t11 = UINT64_MAX;

	t11 = ((x53|(x54*x55))|x56);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = INT16_MIN;
	uint8_t x64 = 9U;

	t12 = ((x61|(x62*x63))|x64);

	if (t12 != -1073741815) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	int16_t x66 = -22;
	volatile uint16_t x67 = 559U;
	int64_t x68 = -1LL;

	t13 = ((x65|(x66*x67))|x68);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -7;
	volatile int16_t x70 = 5412;
	uint64_t x71 = 143292289055988404LLU;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x69|(x70*x71))|x72);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = 57;
	volatile int16_t x74 = 264;
	int8_t x75 = 1;
	int16_t x76 = -1;
	volatile int32_t t15 = 3248;

	t15 = ((x73|(x74*x75))|x76);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 2;
	int8_t x78 = -1;
	int32_t x79 = -1;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = ((x77|(x78*x79))|x80);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 64503LL;
	uint16_t x82 = 2260U;
	uint64_t x83 = 56520LLU;
	int8_t x84 = -6;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x81|(x82*x83))|x84);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	uint8_t x87 = 17U;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t18 = UINT64_MAX;

	t18 = ((x85|(x86*x87))|x88);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x90 = 3662172U;
	static uint8_t x91 = 57U;
	static int8_t x92 = 0;
	uint32_t t19 = UINT32_MAX;

	t19 = ((x89|(x90*x91))|x92);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = 1U;
	static int64_t x99 = INT64_MIN;
	int8_t x100 = -1;
	int64_t t20 = -3297372324LL;

	t20 = ((x97|(x98*x99))|x100);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	uint16_t x102 = UINT16_MAX;
	int64_t x104 = INT64_MIN;

	t21 = ((x101|(x102*x103))|x104);

	if (t21 != -65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 8U;
	static int16_t x106 = INT16_MIN;
	volatile int32_t t22 = -10416;

	t22 = ((x105|(x106*x107))|x108);

	if (t22 != -32760) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = INT32_MIN;
	uint32_t x110 = 946947U;
	int16_t x111 = INT16_MAX;
	static volatile int64_t x112 = 5720404760464LL;

	t23 = ((x109|(x110*x111))|x112);

	if (t23 != 5720828518397LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = 5163;
	int8_t x115 = INT8_MIN;
	int32_t t24 = -14606813;

	t24 = ((x113|(x114*x115))|x116);

	if (t24 != -85) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -118396470LL;
	static uint32_t x118 = 41045798U;
	volatile uint32_t x119 = 29186185U;
	static volatile int32_t x120 = -303716157;
	volatile int64_t t25 = -985689LL;

	t25 = ((x117|(x118*x119))|x120);

	if (t25 != -5153LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = INT32_MAX;
	volatile int8_t x122 = INT8_MAX;
	uint16_t x123 = 2943U;
	uint16_t x124 = 25U;

	t26 = ((x121|(x122*x123))|x124);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = UINT32_MAX;
	volatile uint16_t x128 = 12U;

	t27 = ((x125|(x126*x127))|x128);

	if (t27 != 10172741877229420543LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = INT64_MIN;
	static int16_t x132 = INT16_MIN;

	t28 = ((x129|(x130*x131))|x132);

	if (t28 != 18446744073709527063LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x137 = UINT8_MAX;
	int16_t x138 = -83;
	uint64_t x139 = 2120979693380702LLU;
	static volatile int32_t x140 = -13;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x137|(x138*x139))|x140);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MIN;
	uint32_t t30 = UINT32_MAX;

	t30 = ((x149|(x150*x151))|x152);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x153 = 3U;
	int8_t x154 = -1;
	volatile int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x153|(x154*x155))|x156);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x162 = 9U;
	uint16_t x163 = 17U;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t32 = -322880;

	t32 = ((x161|(x162*x163))|x164);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x167 = 15;
	volatile int16_t x168 = -110;
	volatile int32_t t33 = -118683;

	t33 = ((x165|(x166*x167))|x168);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x170 = 106811941LLU;
	static uint64_t x171 = UINT64_MAX;
	volatile uint64_t t34 = 51LLU;

	t34 = ((x169|(x170*x171))|x172);

	if (t34 != 18446744073709530587LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MAX;
	uint16_t x175 = 1U;
	int64_t x176 = INT64_MIN;
	volatile int64_t t35 = -310787575364LL;

	t35 = ((x173|(x174*x175))|x176);

	if (t35 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x181 = UINT32_MAX;
	int8_t x182 = -1;
	volatile int8_t x183 = INT8_MIN;

	t36 = ((x181|(x182*x183))|x184);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x185 = 1452U;
	int8_t x186 = 1;
	uint64_t x187 = 12873047247416446LLU;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t37 = 13230415880LLU;

	t37 = ((x185|(x186*x187))|x188);

	if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x189 = 973U;
	uint8_t x190 = UINT8_MAX;
	int64_t x191 = 6LL;

	t38 = ((x189|(x190*x191))|x192);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x193 = -1;
	int64_t x194 = INT64_MAX;
	static int32_t x195 = -1;
	uint16_t x196 = 60U;
	volatile int64_t t39 = 4031528264737055145LL;

	t39 = ((x193|(x194*x195))|x196);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = 13;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = UINT64_MAX;
	uint16_t x200 = 6U;
	static volatile uint64_t t40 = 32216445142006LLU;

	t40 = ((x197|(x198*x199))|x200);

	if (t40 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x201 = INT64_MIN;
	uint32_t x202 = 42U;
	static volatile int8_t x203 = INT8_MIN;
	volatile int16_t x204 = -10;
	int64_t t41 = -38453LL;

	t41 = ((x201|(x202*x203))|x204);

	if (t41 != -10LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MIN;
	static int8_t x206 = -1;
	int64_t x207 = 14LL;
	int32_t x208 = -227532985;
	int64_t t42 = 196786841LL;

	t42 = ((x205|(x206*x207))|x208);

	if (t42 != -9LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = -165929LL;
	int16_t x211 = -1;
	int8_t x212 = INT8_MIN;
	int64_t t43 = -38622064LL;

	t43 = ((x209|(x210*x211))|x212);

	if (t43 != -87LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x213 = INT64_MAX;
	int8_t x214 = 2;
	int8_t x215 = INT8_MIN;
	static int32_t x216 = INT32_MIN;

	t44 = ((x213|(x214*x215))|x216);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x217 = 236548700U;
	int64_t x218 = 460827LL;
	static int64_t x219 = 14954583771LL;
	int64_t x220 = -1LL;
	int64_t t45 = -258769251502LL;

	t45 = ((x217|(x218*x219))|x220);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = -1LL;
	volatile int16_t x222 = INT16_MAX;
	volatile uint16_t x223 = 7U;
	int16_t x224 = INT16_MIN;
	int64_t t46 = 0LL;

	t46 = ((x221|(x222*x223))|x224);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = -1LL;
	static volatile int64_t t47 = 198142982LL;

	t47 = ((x229|(x230*x231))|x232);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x237 = 1156;
	uint16_t x238 = UINT16_MAX;
	volatile int8_t x239 = INT8_MAX;
	uint8_t x240 = UINT8_MAX;
	static int32_t t48 = -954963206;

	t48 = ((x237|(x238*x239))|x240);

	if (t48 != 8323071) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = UINT64_MAX;
	static int8_t x242 = -1;
	static uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x241|(x242*x243))|x244);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x249 = -1LL;
	uint32_t x251 = 7299201U;
	int32_t x252 = -1;
	volatile int64_t t50 = 5030LL;

	t50 = ((x249|(x250*x251))|x252);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x253 = -1;
	uint16_t x254 = 7U;
	static volatile int16_t x255 = INT16_MIN;
	static int16_t x256 = INT16_MIN;
	volatile int32_t t51 = 23;

	t51 = ((x253|(x254*x255))|x256);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = -1;
	int8_t x258 = 7;
	int16_t x259 = -1;
	uint32_t x260 = 225699U;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x257|(x258*x259))|x260);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x261 = -1LL;
	int64_t x262 = 11898153873270844LL;
	int16_t x263 = 4;
	int32_t x264 = INT32_MAX;
	int64_t t53 = -1LL;

	t53 = ((x261|(x262*x263))|x264);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = 1;
	uint8_t x267 = 1U;
	int64_t x268 = INT64_MIN;
	volatile int64_t t54 = -2541405305LL;

	t54 = ((x265|(x266*x267))|x268);

	if (t54 != -32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x275 = INT8_MAX;
	static int8_t x276 = INT8_MAX;
	int32_t t55 = -32712795;

	t55 = ((x273|(x274*x275))|x276);

	if (t55 != -10280193) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = -1LL;
	int64_t t56 = 231200357681LL;

	t56 = ((x277|(x278*x279))|x280);

	if (t56 != -32513LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = INT64_MIN;
	static uint32_t x282 = UINT32_MAX;
	int32_t x283 = 96091;
	uint8_t x284 = 118U;
	int64_t t57 = -48159140378LL;

	t57 = ((x281|(x282*x283))|x284);

	if (t57 != -9223372032559904521LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = 11827U;
	static uint32_t x286 = 7196U;
	volatile int16_t x288 = INT16_MIN;
	volatile uint32_t t58 = 817U;

	t58 = ((x285|(x286*x287))|x288);

	if (t58 != 4294963191U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x289 = INT8_MIN;
	uint32_t x290 = 8470U;
	volatile uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 98243LLU;

	t59 = ((x289|(x290*x291))|x292);

	if (t59 != 4294967275LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = 144LLU;
	uint64_t x299 = 56431726LLU;
	int64_t x300 = -1LL;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x297|(x298*x299))|x300);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	uint8_t x304 = 13U;
	volatile uint64_t t61 = 354LLU;

	t61 = ((x301|(x302*x303))|x304);

	if (t61 != 18446744073709550989LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = INT64_MIN;
	volatile int8_t x306 = 0;
	static uint32_t x307 = 1259145U;
	int8_t x308 = -1;
	static volatile int64_t t62 = 465113537LL;

	t62 = ((x305|(x306*x307))|x308);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x309 = INT64_MAX;
	int8_t x310 = 28;
	int8_t x311 = -3;
	volatile int64_t t63 = -1846947933272758474LL;

	t63 = ((x309|(x310*x311))|x312);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x314 = 5;
	uint16_t x315 = UINT16_MAX;
	volatile int16_t x316 = -80;
	int32_t t64 = -329626732;

	t64 = ((x313|(x314*x315))|x316);

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MAX;
	volatile int32_t x326 = 3632634;
	static int64_t x327 = -70800687LL;
	int64_t x328 = -1LL;
	volatile int64_t t65 = -3LL;

	t65 = ((x325|(x326*x327))|x328);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x330 = 62U;
	int8_t x331 = -1;
	static int16_t x332 = -1;
	volatile int32_t t66 = 695679286;

	t66 = ((x329|(x330*x331))|x332);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x333 = 0U;
	uint16_t x335 = 2606U;
	int8_t x336 = -61;
	int32_t t67 = -175671;

	t67 = ((x333|(x334*x335))|x336);

	if (t67 != -61) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x337 = -1;
	static uint64_t x338 = UINT64_MAX;
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = INT8_MIN;
	uint64_t t68 = UINT64_MAX;

	t68 = ((x337|(x338*x339))|x340);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x341 = 21054623LLU;
	uint64_t x342 = 38153174403114LLU;
	volatile int8_t x343 = INT8_MIN;
	int32_t x344 = 2;
	static volatile uint64_t t69 = 6217312842054LLU;

	t69 = ((x341|(x342*x343))|x344);

	if (t69 != 18441860467385954207LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x345 = -14;
	int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;

	t70 = ((x345|(x346*x347))|x348);

	if (t70 != -14LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x350 = 1073593868986127LLU;
	volatile int32_t x351 = 48;
	int16_t x352 = INT16_MAX;
	uint64_t t71 = 684590618LLU;

	t71 = ((x349|(x350*x351))|x352);

	if (t71 != 51532505711345663LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = INT64_MIN;
	volatile uint64_t x362 = 213LLU;
	uint8_t x363 = 80U;
	int8_t x364 = -15;
	static volatile uint64_t t72 = 0LLU;

	t72 = ((x361|(x362*x363))|x364);

	if (t72 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = INT8_MAX;
	static int8_t x366 = 0;
	static int32_t x367 = -627184;
	uint8_t x368 = UINT8_MAX;
	int32_t t73 = 2;

	t73 = ((x365|(x366*x367))|x368);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x373 = 11U;
	static int16_t x374 = INT16_MIN;
	int8_t x375 = -1;
	volatile int32_t x376 = INT32_MIN;

	t74 = ((x373|(x374*x375))|x376);

	if (t74 != -2147450869) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = -1LL;
	static uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;
	int64_t t75 = 2LL;

	t75 = ((x377|(x378*x379))|x380);

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = -1LL;
	int8_t x382 = INT8_MAX;
	int64_t x383 = 2046LL;
	int32_t x384 = INT32_MIN;
	volatile int64_t t76 = -4114542101095627845LL;

	t76 = ((x381|(x382*x383))|x384);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	static int32_t x388 = -13369614;
	static volatile int32_t t77 = 0;

	t77 = ((x385|(x386*x387))|x388);

	if (t77 != -14) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x389 = -1LL;
	int16_t x390 = 1;
	int64_t x391 = INT64_MIN;
	int32_t x392 = -7406738;
	int64_t t78 = 39886178LL;

	t78 = ((x389|(x390*x391))|x392);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x393 = 2U;
	int64_t x394 = -1LL;
	volatile int16_t x395 = INT16_MIN;
	static uint32_t x396 = 50991679U;
	int64_t t79 = -16939866072296351LL;

	t79 = ((x393|(x394*x395))|x396);

	if (t79 != 51024447LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x397 = INT16_MIN;
	static uint16_t x398 = 167U;
	uint64_t x399 = UINT64_MAX;
	volatile uint16_t x400 = UINT16_MAX;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x397|(x398*x399))|x400);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x405 = 2U;
	int16_t x406 = -1;
	static int8_t x407 = -1;
	int32_t x408 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = ((x405|(x406*x407))|x408);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x410 = 202U;
	volatile uint16_t x411 = 57U;
	volatile int16_t x412 = INT16_MAX;
	volatile uint32_t t82 = 261091U;

	t82 = ((x409|(x410*x411))|x412);

	if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x421 = 25U;
	int32_t x422 = 73698;
	int8_t x424 = 38;
	volatile int32_t t83 = 204;

	t83 = ((x421|(x422*x423))|x424);

	if (t83 != -73665) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x429 = 43;
	uint64_t x430 = UINT64_MAX;
	int64_t x431 = INT64_MIN;
	int32_t x432 = -1;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x429|(x430*x431))|x432);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = 293223042281LL;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	static int64_t x436 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x433|(x434*x435))|x436);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x437 = INT64_MAX;
	uint64_t x438 = 25398LLU;
	static int64_t x439 = 103959LL;
	int16_t x440 = -1;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x437|(x438*x439))|x440);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x445 = INT16_MIN;
	uint64_t x446 = UINT64_MAX;
	int16_t x447 = INT16_MAX;
	static int16_t x448 = INT16_MIN;

	t87 = ((x445|(x446*x447))|x448);

	if (t87 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x453 = -154852222LL;
	volatile uint64_t x454 = 16LLU;
	int8_t x455 = 2;
	static volatile uint32_t x456 = UINT32_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x453|(x454*x455))|x456);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x457 = INT32_MIN;
	uint32_t x458 = 0U;
	int32_t x459 = INT32_MAX;
	volatile int64_t x460 = INT64_MAX;
	int64_t t89 = INT64_MAX;

	t89 = ((x457|(x458*x459))|x460);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x461 = -86650;
	int64_t x462 = 7772LL;
	uint32_t x463 = 126U;
	static uint16_t x464 = 7570U;
	int64_t t90 = -9921LL;

	t90 = ((x461|(x462*x463))|x464);

	if (t90 != -66082LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x465 = 12458852U;
	volatile int64_t x466 = 4019181336371LL;
	static uint16_t x467 = 3931U;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x465|(x466*x467))|x468);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x475 = INT16_MAX;
	static int64_t t92 = 41LL;

	t92 = ((x473|(x474*x475))|x476);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x477 = 159904LL;
	uint64_t x478 = UINT64_MAX;
	int64_t x479 = -1LL;
	volatile int16_t x480 = -2887;
	uint64_t t93 = 12547189LLU;

	t93 = ((x477|(x478*x479))|x480);

	if (t93 != 18446744073709548729LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x481 = 55U;
	static int16_t x482 = INT16_MIN;
	volatile int8_t x483 = -1;
	volatile int8_t x484 = INT8_MIN;
	int32_t t94 = 232937;

	t94 = ((x481|(x482*x483))|x484);

	if (t94 != -73) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x485 = -50;
	uint64_t x486 = 12897569LLU;
	int64_t x487 = INT64_MAX;
	static uint32_t x488 = 56U;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x485|(x486*x487))|x488);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x489 = 21U;
	static int16_t x490 = INT16_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x489|(x490*x491))|x492);

	if (t96 != -107) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x498 = 15448U;
	int32_t x499 = -1;
	int8_t x500 = INT8_MAX;
	static volatile int32_t t97 = -3;

	t97 = ((x497|(x498*x499))|x500);

	if (t97 != -15361) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x501 = INT8_MIN;
	int32_t x504 = -1;

	t98 = ((x501|(x502*x503))|x504);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x505 = UINT64_MAX;
	static int32_t x507 = -1;
	int8_t x508 = INT8_MIN;
	uint64_t t99 = UINT64_MAX;

	t99 = ((x505|(x506*x507))|x508);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

