#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
int32_t x12 = 25;
static volatile int32_t t1 = 0;
volatile int16_t x14 = 3532;
uint64_t x17 = 165802242695526537LLU;
volatile int32_t t4 = 12476;
int64_t x32 = INT64_MAX;
volatile uint16_t x33 = UINT16_MAX;
static int8_t x34 = 52;
static volatile int32_t x54 = INT32_MIN;
volatile int8_t x56 = INT8_MIN;
uint16_t x62 = 7867U;
volatile int32_t t12 = 1186447;
static int16_t x67 = INT16_MAX;
int32_t x80 = 374152286;
int16_t x81 = 437;
volatile uint32_t x87 = UINT32_MAX;
volatile int32_t t19 = 14;
int32_t t20 = 3867;
uint8_t x98 = UINT8_MAX;
volatile int32_t x108 = INT32_MAX;
uint8_t x109 = 3U;
volatile int32_t t23 = -1337871;
volatile int32_t t24 = -31840373;
int64_t x118 = INT64_MIN;
int16_t x122 = -9;
int64_t x124 = INT64_MIN;
int8_t x129 = -38;
uint64_t x130 = UINT64_MAX;
int16_t x134 = -81;
static uint64_t x135 = 3796012775LLU;
volatile int16_t x136 = -1;
int32_t x138 = 24138;
uint16_t x139 = 0U;
uint8_t x152 = 63U;
volatile int32_t t35 = -117183;
uint8_t x162 = 1U;
volatile uint16_t x166 = UINT16_MAX;
static volatile int64_t x167 = -1LL;
int8_t x175 = INT8_MAX;
volatile int32_t t40 = -2247825;
int32_t x197 = -34344;
uint32_t x202 = 314967U;
volatile int32_t x203 = 1463717;
uint32_t x204 = 3424U;
int32_t t44 = -7245;
volatile int64_t x211 = INT64_MAX;
volatile int32_t t46 = 6204642;
static uint64_t x219 = 1165LLU;
uint16_t x221 = 1U;
uint64_t x233 = UINT64_MAX;
static int32_t x239 = 239231448;
volatile int32_t t53 = 14;
volatile int64_t x241 = -1LL;
static volatile int32_t t54 = 0;
int8_t x245 = INT8_MIN;
volatile int32_t x253 = -891941;
uint8_t x265 = 51U;
int8_t x266 = 1;
int16_t x272 = INT16_MIN;
int32_t x295 = INT32_MIN;
int32_t x296 = -1;
volatile int32_t t64 = 0;
int16_t x297 = 202;
int8_t x300 = INT8_MIN;
static int32_t t65 = 512898659;
int16_t x303 = -1;
uint64_t x304 = UINT64_MAX;
int8_t x313 = INT8_MIN;
int32_t x315 = -1;
uint16_t x316 = 626U;
int64_t x319 = INT64_MIN;
uint16_t x323 = 17U;
static int32_t x324 = INT32_MIN;
static int64_t x330 = -58250342563378LL;
volatile int64_t x333 = INT64_MIN;
int64_t x334 = -230425769LL;
int32_t x335 = -1;
int32_t t74 = -155;
uint8_t x345 = UINT8_MAX;
int8_t x346 = INT8_MAX;
int16_t x347 = 660;
volatile int32_t t77 = -25;
int32_t x361 = -1;
static volatile uint8_t x366 = 0U;
volatile int64_t x367 = -54464888549237LL;
uint32_t x374 = UINT32_MAX;
int16_t x375 = INT16_MIN;
int32_t x376 = INT32_MAX;
volatile int32_t t81 = -834896;
uint64_t x382 = 16436LLU;
volatile int32_t t83 = 504;
volatile uint32_t x390 = 4201U;
int64_t x395 = -1LL;
static uint8_t x410 = 94U;
uint64_t x411 = 100273772LLU;
int32_t x422 = INT32_MIN;
int64_t x428 = -1LL;
volatile int32_t t92 = 2790;
int16_t x440 = INT16_MIN;
uint64_t x443 = 305169367681078400LLU;
static int32_t x444 = INT32_MAX;
volatile int64_t x458 = -130800082358677LL;


void f0(void) {
	uint8_t x1 = 61U;
	volatile int16_t x2 = -1;
	int16_t x3 = -1;
	volatile int32_t t0 = 1;

	t0 = ((x1<(x2-x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = 1;
	uint32_t x10 = 292152U;
	int32_t x11 = INT32_MIN;

	t1 = ((x9<(x10-x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x15 = -1;
	int64_t x16 = 267846929816045337LL;
	int32_t t2 = -2329;

	t2 = ((x13<(x14-x15))<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	int8_t x19 = 0;
	int32_t x20 = INT32_MIN;
	int32_t t3 = -40388565;

	t3 = ((x17<(x18-x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = UINT8_MAX;
	static uint8_t x22 = 32U;
	int8_t x23 = INT8_MAX;
	static uint64_t x24 = 1LLU;

	t4 = ((x21<(x22-x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MIN;
	static int64_t x31 = INT64_MIN;
	static volatile int32_t t5 = 532840;

	t5 = ((x29<(x30-x31))<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x35 = INT16_MIN;
	static volatile int32_t x36 = -1;
	volatile int32_t t6 = -130;

	t6 = ((x33<(x34-x35))<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MIN;
	int64_t x38 = 74726520LL;
	int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MIN;
	static int32_t t7 = 44631200;

	t7 = ((x37<(x38-x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	static int8_t x46 = INT8_MIN;
	int64_t x47 = 3LL;
	uint64_t x48 = 1LLU;
	int32_t t8 = 91503951;

	t8 = ((x45<(x46-x47))<x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = -1;
	int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x49<(x50-x51))<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x55 = -1LL;
	static int32_t t10 = -103282458;

	t10 = ((x53<(x54-x55))<x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = INT64_MIN;
	volatile int32_t t11 = 7117;

	t11 = ((x57<(x58-x59))<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 23356376U;
	uint32_t x63 = 28675U;
	int32_t x64 = INT32_MIN;

	t12 = ((x61<(x62-x63))<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = -1;
	static int16_t x66 = -1;
	int32_t x68 = 106882247;
	static int32_t t13 = 201;

	t13 = ((x65<(x66-x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 115;
	volatile int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	int16_t x72 = -302;
	volatile int32_t t14 = -379;

	t14 = ((x69<(x70-x71))<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = -40LL;
	static int64_t x75 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = 1;

	t15 = ((x73<(x74-x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 7U;
	int32_t t16 = 0;

	t16 = ((x77<(x78-x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x82 = 2U;
	static int8_t x83 = -1;
	static uint64_t x84 = 3468496880LLU;
	volatile int32_t t17 = 10;

	t17 = ((x81<(x82-x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	static volatile int8_t x88 = -1;
	volatile int32_t t18 = -3;

	t18 = ((x85<(x86-x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 1LLU;
	static volatile int64_t x92 = INT64_MIN;

	t19 = ((x89<(x90-x91))<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 190210782330068LLU;
	volatile int8_t x94 = -21;
	volatile uint64_t x95 = 3944585813184504LLU;
	static int8_t x96 = -1;

	t20 = ((x93<(x94-x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -14157;
	volatile uint16_t x99 = 248U;
	volatile int64_t x100 = INT64_MIN;
	volatile int32_t t21 = 37518;

	t21 = ((x97<(x98-x99))<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = -25;
	static int16_t x106 = -1;
	int16_t x107 = INT16_MAX;
	volatile int32_t t22 = 3878541;

	t22 = ((x105<(x106-x107))<x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x110 = 8089U;
	volatile int16_t x111 = INT16_MIN;
	int16_t x112 = -1;

	t23 = ((x109<(x110-x111))<x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 439049432834434050LL;
	volatile int8_t x114 = 25;
	uint8_t x115 = 88U;
	volatile int16_t x116 = INT16_MAX;

	t24 = ((x113<(x114-x115))<x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	int16_t x119 = -1;
	int32_t x120 = INT32_MAX;
	volatile int32_t t25 = -37;

	t25 = ((x117<(x118-x119))<x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = 225U;
	int64_t x123 = INT64_MIN;
	volatile int32_t t26 = -20;

	t26 = ((x121<(x122-x123))<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 78U;
	int32_t x126 = INT32_MIN;
	static volatile int16_t x127 = -83;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t27 = -1;

	t27 = ((x125<(x126-x127))<x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x131 = 0U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t28 = 190;

	t28 = ((x129<(x130-x131))<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	volatile int32_t t29 = -3904657;

	t29 = ((x133<(x134-x135))<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t x140 = INT32_MAX;
	int32_t t30 = 3;

	t30 = ((x137<(x138-x139))<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x141 = -86;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MIN;
	int16_t x144 = 311;
	int32_t t31 = 1;

	t31 = ((x141<(x142-x143))<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x145 = -1;
	static uint8_t x146 = 0U;
	uint8_t x147 = UINT8_MAX;
	volatile uint16_t x148 = 60U;
	volatile int32_t t32 = 1647883;

	t32 = ((x145<(x146-x147))<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 4825;
	int8_t x150 = -1;
	static volatile int16_t x151 = 143;
	int32_t t33 = 85288;

	t33 = ((x149<(x150-x151))<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = INT16_MAX;
	static int16_t x154 = INT16_MIN;
	volatile int8_t x155 = -1;
	uint16_t x156 = 0U;
	int32_t t34 = 12;

	t34 = ((x153<(x154-x155))<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = 233;
	volatile int16_t x159 = 3178;
	int8_t x160 = -1;

	t35 = ((x157<(x158-x159))<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1LL;
	uint16_t x163 = 54U;
	volatile uint64_t x164 = 6008398518499004LLU;
	static volatile int32_t t36 = 117521607;

	t36 = ((x161<(x162-x163))<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -31485833746971LL;
	int32_t x168 = -1;
	volatile int32_t t37 = 6371979;

	t37 = ((x165<(x166-x167))<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 27574U;
	static int16_t x170 = 4106;
	int16_t x171 = 14;
	static volatile int16_t x172 = 3610;
	volatile int32_t t38 = 2;

	t38 = ((x169<(x170-x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = INT32_MIN;
	uint16_t x174 = 10099U;
	static int16_t x176 = -1;
	int32_t t39 = -6252;

	t39 = ((x173<(x174-x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	volatile int16_t x178 = 2;
	volatile int32_t x179 = INT32_MAX;
	uint8_t x180 = 29U;

	t40 = ((x177<(x178-x179))<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MIN;
	static uint64_t x182 = UINT64_MAX;
	int8_t x183 = -31;
	int64_t x184 = -575784086083LL;
	int32_t t41 = 388;

	t41 = ((x181<(x182-x183))<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 116406LLU;
	uint64_t x194 = 27337477170940LLU;
	int64_t x195 = INT64_MIN;
	static int64_t x196 = INT64_MAX;
	int32_t t42 = 991;

	t42 = ((x193<(x194-x195))<x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x198 = 19U;
	volatile int64_t x199 = -1LL;
	uint8_t x200 = 3U;
	int32_t t43 = 246936;

	t43 = ((x197<(x198-x199))<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x201 = INT32_MIN;

	t44 = ((x201<(x202-x203))<x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = 10;
	uint8_t x206 = 45U;
	static int8_t x207 = INT8_MIN;
	volatile uint16_t x208 = 11U;
	volatile int32_t t45 = -1;

	t45 = ((x205<(x206-x207))<x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 32504U;
	int64_t x210 = 1538748774947974021LL;
	int64_t x212 = -1LL;

	t46 = ((x209<(x210-x211))<x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = UINT16_MAX;
	int32_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	static int64_t x216 = -1LL;
	volatile int32_t t47 = -1276934;

	t47 = ((x213<(x214-x215))<x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 141U;
	int16_t x218 = -1;
	static int16_t x220 = -3236;
	static volatile int32_t t48 = 22;

	t48 = ((x217<(x218-x219))<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x222 = -1LL;
	int8_t x223 = 0;
	int32_t x224 = -633937603;
	static int32_t t49 = 4;

	t49 = ((x221<(x222-x223))<x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x225 = -63;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = INT16_MAX;
	uint64_t x228 = 473895LLU;
	volatile int32_t t50 = -961237;

	t50 = ((x225<(x226-x227))<x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x229 = INT16_MIN;
	int64_t x230 = 118770835LL;
	uint8_t x231 = UINT8_MAX;
	uint32_t x232 = UINT32_MAX;
	int32_t t51 = 133;

	t51 = ((x229<(x230-x231))<x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x234 = -1;
	static volatile int32_t x235 = INT32_MAX;
	volatile int16_t x236 = -1;
	volatile int32_t t52 = -12578;

	t52 = ((x233<(x234-x235))<x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	uint32_t x238 = 164U;
	static volatile int8_t x240 = INT8_MIN;

	t53 = ((x237<(x238-x239))<x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MAX;
	uint64_t x244 = 141153898920LLU;

	t54 = ((x241<(x242-x243))<x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x246 = -1;
	int64_t x247 = -26111545LL;
	static int8_t x248 = INT8_MIN;
	static int32_t t55 = -15364709;

	t55 = ((x245<(x246-x247))<x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x250 = 10LLU;
	uint64_t x251 = 23142LLU;
	int8_t x252 = -1;
	static int32_t t56 = 7321;

	t56 = ((x249<(x250-x251))<x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x254 = INT8_MIN;
	int32_t x255 = -432;
	int32_t x256 = -1;
	volatile int32_t t57 = -7;

	t57 = ((x253<(x254-x255))<x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = INT16_MIN;
	int64_t x258 = -872672LL;
	static int8_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile int32_t t58 = -253283354;

	t58 = ((x257<(x258-x259))<x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x267 = INT16_MAX;
	int8_t x268 = -2;
	volatile int32_t t59 = 8353095;

	t59 = ((x265<(x266-x267))<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile int32_t t60 = -31321490;

	t60 = ((x269<(x270-x271))<x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = -7156234027267LL;
	static uint16_t x275 = UINT16_MAX;
	uint32_t x276 = 94U;
	volatile int32_t t61 = 1;

	t61 = ((x273<(x274-x275))<x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x285 = 906U;
	volatile int16_t x286 = -783;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t62 = -501714;

	t62 = ((x285<(x286-x287))<x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x289 = 49U;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t63 = -445;

	t63 = ((x289<(x290-x291))<x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x293 = INT8_MAX;
	static uint32_t x294 = 3007518U;

	t64 = ((x293<(x294-x295))<x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x298 = 1000170978;
	static int16_t x299 = INT16_MAX;

	t65 = ((x297<(x298-x299))<x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = 124730094LLU;
	volatile int16_t x302 = INT16_MAX;
	volatile int32_t t66 = 1985;

	t66 = ((x301<(x302-x303))<x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MAX;
	static uint32_t x306 = UINT32_MAX;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t67 = 601977;

	t67 = ((x305<(x306-x307))<x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	static uint8_t x310 = 28U;
	int8_t x311 = -2;
	volatile uint8_t x312 = 9U;
	int32_t t68 = -263876439;

	t68 = ((x309<(x310-x311))<x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x314 = 33831810;
	volatile int32_t t69 = -28548;

	t69 = ((x313<(x314-x315))<x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = INT8_MIN;
	static int8_t x320 = -38;
	int32_t t70 = -50771250;

	t70 = ((x317<(x318-x319))<x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = 0;
	uint16_t x322 = 194U;
	static int32_t t71 = 149402;

	t71 = ((x321<(x322-x323))<x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = INT64_MIN;
	static uint32_t x331 = 441196596U;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t72 = 41;

	t72 = ((x329<(x330-x331))<x332);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x336 = -13077622463LL;
	volatile int32_t t73 = 45371;

	t73 = ((x333<(x334-x335))<x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x341 = 4U;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = 8799328;

	t74 = ((x341<(x342-x343))<x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x348 = -1LL;
	int32_t t75 = -17;

	t75 = ((x345<(x346-x347))<x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = 78U;
	int16_t x350 = -1773;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MAX;
	int32_t t76 = 132586;

	t76 = ((x349<(x350-x351))<x352);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x357 = 22U;
	int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	int8_t x360 = -37;

	t77 = ((x357<(x358-x359))<x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x362 = UINT16_MAX;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = -1LL;
	int32_t t78 = 912517828;

	t78 = ((x361<(x362-x363))<x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = 0;
	int16_t x368 = -1;
	static int32_t t79 = -646819638;

	t79 = ((x365<(x366-x367))<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 3U;
	int8_t x371 = 38;
	int8_t x372 = INT8_MIN;
	volatile int32_t t80 = 5175108;

	t80 = ((x369<(x370-x371))<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x373 = INT16_MAX;

	t81 = ((x373<(x374-x375))<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = -1LL;
	int32_t x383 = INT32_MIN;
	int32_t x384 = -156615;
	int32_t t82 = -32928826;

	t82 = ((x381<(x382-x383))<x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x385 = INT8_MAX;
	int64_t x386 = 419063732LL;
	volatile int32_t x387 = INT32_MAX;
	int16_t x388 = -7;

	t83 = ((x385<(x386-x387))<x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = INT32_MIN;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = -1;
	volatile int32_t t84 = -2412;

	t84 = ((x389<(x390-x391))<x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x393 = 16U;
	static uint16_t x394 = UINT16_MAX;
	int16_t x396 = 70;
	int32_t t85 = 29;

	t85 = ((x393<(x394-x395))<x396);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x397 = UINT8_MAX;
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = 85456LLU;
	int16_t x400 = INT16_MIN;
	volatile int32_t t86 = 3;

	t86 = ((x397<(x398-x399))<x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	static int8_t x407 = -61;
	uint16_t x408 = 31U;
	int32_t t87 = 1;

	t87 = ((x405<(x406-x407))<x408);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = 405;
	volatile int64_t x412 = -1LL;
	int32_t t88 = 1199;

	t88 = ((x409<(x410-x411))<x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x413 = 32147583159676756LLU;
	int16_t x414 = -1;
	static uint32_t x415 = 13790U;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t89 = 3774;

	t89 = ((x413<(x414-x415))<x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = INT8_MAX;
	volatile uint64_t x418 = 30870571400844121LLU;
	int8_t x419 = -2;
	static volatile int32_t x420 = 107;
	int32_t t90 = 17856229;

	t90 = ((x417<(x418-x419))<x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = -13;
	int64_t x423 = -49028LL;
	uint8_t x424 = 61U;
	volatile int32_t t91 = -16946498;

	t91 = ((x421<(x422-x423))<x424);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x425 = 23277867;
	volatile int32_t x426 = INT32_MAX;
	static int64_t x427 = INT64_MAX;

	t92 = ((x425<(x426-x427))<x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = -239;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = UINT32_MAX;
	uint32_t x432 = 3175U;
	int32_t t93 = 425;

	t93 = ((x429<(x430-x431))<x432);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x433 = UINT16_MAX;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t94 = -215;

	t94 = ((x433<(x434-x435))<x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x437 = 56U;
	static int16_t x438 = 454;
	int16_t x439 = INT16_MIN;
	int32_t t95 = -790;

	t95 = ((x437<(x438-x439))<x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = 398229LL;
	uint64_t x442 = UINT64_MAX;
	int32_t t96 = 859265984;

	t96 = ((x441<(x442-x443))<x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = -10647378;
	int16_t x450 = -1;
	volatile int32_t x451 = 16167;
	volatile int64_t x452 = 1276472072597446908LL;
	volatile int32_t t97 = 416;

	t97 = ((x449<(x450-x451))<x452);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = -1;
	int16_t x454 = 1092;
	int16_t x455 = INT16_MIN;
	uint64_t x456 = 1340064294468LLU;
	int32_t t98 = 12813;

	t98 = ((x453<(x454-x455))<x456);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x457 = UINT64_MAX;
	int32_t x459 = INT32_MIN;
	int16_t x460 = 91;
	int32_t t99 = -27;

	t99 = ((x457<(x458-x459))<x460);

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

