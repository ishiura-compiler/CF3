#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
static uint16_t x4 = UINT16_MAX;
int64_t x5 = INT64_MIN;
int64_t x12 = INT64_MIN;
volatile int64_t x13 = INT64_MIN;
int32_t t3 = -11;
uint8_t x17 = UINT8_MAX;
int8_t x25 = INT8_MAX;
volatile uint16_t x28 = UINT16_MAX;
int8_t x36 = 1;
int8_t x42 = -1;
int16_t x44 = -1;
int32_t t10 = -254437579;
volatile int32_t t11 = -1;
volatile int16_t x49 = INT16_MIN;
volatile int16_t x52 = INT16_MAX;
static int32_t x53 = INT32_MIN;
uint32_t x54 = 58705745U;
static volatile int32_t t13 = 105;
static int16_t x63 = INT16_MIN;
uint16_t x69 = UINT16_MAX;
static int8_t x76 = INT8_MIN;
uint64_t x86 = 3LLU;
volatile uint64_t x88 = 224797781448606787LLU;
volatile uint32_t x90 = 285152834U;
uint32_t x95 = 52296028U;
volatile int32_t x98 = INT32_MAX;
static int32_t t24 = -515499927;
int16_t x102 = INT16_MIN;
int32_t x104 = INT32_MIN;
int32_t x116 = INT32_MAX;
static uint8_t x121 = 84U;
int32_t x126 = INT32_MIN;
int16_t x129 = 2;
volatile uint64_t x152 = UINT64_MAX;
int32_t x154 = -469;
int32_t t38 = 1247545;
uint8_t x181 = 3U;
int16_t x182 = -1;
int8_t x183 = 6;
static int32_t x185 = INT32_MIN;
static int32_t x194 = INT32_MIN;
int32_t x195 = -1;
static volatile int32_t x201 = INT32_MIN;
int8_t x212 = -5;
int64_t x213 = INT64_MAX;
int16_t x214 = -8;
int8_t x215 = -31;
int64_t x216 = INT64_MIN;
volatile int16_t x218 = 7091;
int64_t x220 = -1LL;
uint8_t x226 = 3U;
int64_t x242 = INT64_MIN;
int8_t x247 = INT8_MAX;
int16_t x259 = -1;
int32_t x268 = INT32_MAX;
uint8_t x277 = 67U;
uint8_t x289 = 20U;
static int32_t x293 = 16239408;
int16_t x298 = INT16_MIN;
static int32_t t74 = -3160140;
static volatile int64_t x305 = INT64_MAX;
int64_t x308 = -22409016231072LL;
uint32_t x310 = 2888U;
int8_t x318 = INT8_MIN;
static uint8_t x330 = UINT8_MAX;
volatile int8_t x334 = -1;
static int32_t x336 = INT32_MIN;
int16_t x338 = INT16_MIN;
int8_t x352 = -1;
int16_t x358 = -1;
volatile int32_t t89 = 86857123;
volatile uint64_t x366 = UINT64_MAX;
uint8_t x372 = UINT8_MAX;
int8_t x373 = 3;
uint16_t x382 = 0U;
int32_t x390 = INT32_MIN;
uint16_t x399 = UINT16_MAX;


void f0(void) {
	int16_t x1 = -1;
	int64_t x3 = -13LL;
	volatile int32_t t0 = 15943780;

	t0 = ((x1|(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -6;
	static uint8_t x7 = 13U;
	static int8_t x8 = -35;
	int32_t t1 = -38321944;

	t1 = ((x5|(x6&x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int8_t x10 = 4;
	static volatile uint64_t x11 = 1141734709035822009LLU;
	volatile int32_t t2 = 58751429;

	t2 = ((x9|(x10&x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int8_t x15 = -1;
	uint32_t x16 = 9U;

	t3 = ((x13|(x14&x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	static uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 866162;

	t4 = ((x17|(x18&x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -13833641737081LL;
	static volatile int64_t x22 = 848544345931832LL;
	static int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = 508637432U;
	int32_t t5 = -408279880;

	t5 = ((x21|(x22&x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 30U;
	uint8_t x27 = 44U;
	volatile int32_t t6 = -4235076;

	t6 = ((x25|(x26&x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static volatile uint32_t x30 = UINT32_MAX;
	int32_t x31 = -1;
	volatile uint32_t x32 = 50U;
	int32_t t7 = -440;

	t7 = ((x29|(x30&x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 433924U;
	int8_t x35 = -5;
	static volatile int32_t t8 = 460654351;

	t8 = ((x33|(x34&x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 6211U;
	int8_t x38 = 3;
	static uint8_t x39 = 12U;
	int8_t x40 = 14;
	int32_t t9 = -13625;

	t9 = ((x37|(x38&x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int32_t x43 = INT32_MIN;

	t10 = ((x41|(x42&x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static volatile uint16_t x46 = 366U;
	static uint32_t x47 = UINT32_MAX;
	volatile uint64_t x48 = 105450297LLU;

	t11 = ((x45|(x46&x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	volatile int32_t x51 = INT32_MIN;
	volatile int32_t t12 = -86;

	t12 = ((x49|(x50&x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x55 = 2109U;
	int64_t x56 = 226720685324911989LL;

	t13 = ((x53|(x54&x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 25013868U;
	int16_t x58 = INT16_MIN;
	int64_t x59 = 251297858270LL;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 892852597;

	t14 = ((x57|(x58&x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	volatile int32_t x62 = INT32_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 260822;

	t15 = ((x61|(x62&x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 211258LL;
	int64_t x66 = 4286LL;
	int8_t x67 = INT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -5516182;

	t16 = ((x65|(x66&x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -2596241;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = -1LL;
	volatile int32_t t17 = -97;

	t17 = ((x69|(x70&x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	volatile int16_t x74 = INT16_MIN;
	int16_t x75 = 3260;
	static volatile int32_t t18 = -755312787;

	t18 = ((x73|(x74&x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = -85526299759LL;
	volatile uint8_t x79 = 1U;
	volatile int8_t x80 = -1;
	static int32_t t19 = -1308;

	t19 = ((x77|(x78&x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 98612738U;
	int32_t x82 = INT32_MIN;
	uint32_t x83 = 1669U;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -1101345;

	t20 = ((x81|(x82&x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 8U;
	int64_t x87 = 433LL;
	static volatile int32_t t21 = -3036462;

	t21 = ((x85|(x86&x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -9;

	t22 = ((x89|(x90&x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 15394U;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -852474317;

	t23 = ((x93|(x94&x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static int16_t x99 = -28;
	static int8_t x100 = 1;

	t24 = ((x97|(x98&x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -193;
	int8_t x103 = INT8_MAX;
	static volatile int32_t t25 = 81951257;

	t25 = ((x101|(x102&x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	static int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 1287730;

	t26 = ((x105|(x106&x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = -23;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = -1;
	static int32_t t27 = 11850;

	t27 = ((x109|(x110&x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 0LLU;
	int16_t x114 = INT16_MIN;
	volatile uint16_t x115 = 13055U;
	volatile int32_t t28 = 57987683;

	t28 = ((x113|(x114&x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = UINT64_MAX;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = -234;
	static int8_t x120 = -1;
	static volatile int32_t t29 = -2484;

	t29 = ((x117|(x118&x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = 20;
	volatile int16_t x123 = 14898;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -10;

	t30 = ((x121|(x122&x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 79;
	volatile int16_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -3;

	t31 = ((x125|(x126&x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = INT32_MIN;
	volatile int64_t x132 = -302165305LL;
	int32_t t32 = 304461;

	t32 = ((x129|(x130&x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 22U;
	int64_t x134 = -1LL;
	int64_t x135 = INT64_MIN;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 204103149;

	t33 = ((x133|(x134&x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int8_t x138 = 3;
	static volatile int8_t x139 = 4;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -1;

	t34 = ((x137|(x138&x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -204;
	int8_t x143 = 22;
	uint32_t x144 = 74U;
	int32_t t35 = 837717;

	t35 = ((x141|(x142&x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -23;
	int16_t x146 = INT16_MAX;
	uint32_t x147 = 39873U;
	static uint16_t x148 = UINT16_MAX;
	static volatile int32_t t36 = 135;

	t36 = ((x145|(x146&x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = -3;
	static uint8_t x151 = 2U;
	int32_t t37 = 676940;

	t37 = ((x149|(x150&x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x155 = 430U;
	int64_t x156 = INT64_MIN;

	t38 = ((x153|(x154&x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int32_t x158 = 185;
	static uint16_t x159 = UINT16_MAX;
	uint64_t x160 = 87044LLU;
	int32_t t39 = 46123;

	t39 = ((x157|(x158&x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 246292765U;
	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 32882;

	t40 = ((x161|(x162&x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -20;
	volatile int64_t x166 = 322597312459300LL;
	static volatile int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -44154681;

	t41 = ((x165|(x166&x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 461666640199LLU;
	int32_t x170 = INT32_MIN;
	int32_t x171 = -1;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = 172788942;

	t42 = ((x169|(x170&x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int16_t x174 = -1;
	int64_t x175 = -1204LL;
	int32_t x176 = -1;
	volatile int32_t t43 = 103;

	t43 = ((x173|(x174&x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 2308854;
	static int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	uint32_t x180 = 761170U;
	int32_t t44 = -9445907;

	t44 = ((x177|(x178&x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x184 = -12119379;
	int32_t t45 = -243066040;

	t45 = ((x181|(x182&x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MIN;
	int8_t x188 = -1;
	volatile int32_t t46 = -173128;

	t46 = ((x185|(x186&x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 0LLU;
	int8_t x190 = -1;
	static int16_t x191 = -1;
	int32_t x192 = INT32_MAX;
	int32_t t47 = -219409570;

	t47 = ((x189|(x190&x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 124LLU;
	int8_t x196 = 1;
	static volatile int32_t t48 = 3930419;

	t48 = ((x193|(x194&x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 60U;
	static int64_t x198 = INT64_MAX;
	int32_t x199 = -116655765;
	int32_t x200 = INT32_MAX;
	volatile int32_t t49 = 404347425;

	t49 = ((x197|(x198&x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	int16_t x204 = 0;
	volatile int32_t t50 = -34279;

	t50 = ((x201|(x202&x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	volatile int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 893015;

	t51 = ((x205|(x206&x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 311U;
	static int64_t x210 = -1LL;
	static int64_t x211 = 2294850LL;
	volatile int32_t t52 = 371099;

	t52 = ((x209|(x210&x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t t53 = -518759283;

	t53 = ((x213|(x214&x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int32_t x219 = INT32_MIN;
	volatile int32_t t54 = 0;

	t54 = ((x217|(x218&x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 0U;
	static int32_t x222 = INT32_MIN;
	static int8_t x223 = -22;
	int8_t x224 = 15;
	volatile int32_t t55 = -1;

	t55 = ((x221|(x222&x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	static int8_t x227 = 0;
	int16_t x228 = -1;
	volatile int32_t t56 = -44;

	t56 = ((x225|(x226&x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 5824644354LLU;
	uint8_t x230 = 2U;
	volatile int16_t x231 = -1;
	volatile int64_t x232 = INT64_MAX;
	int32_t t57 = -525;

	t57 = ((x229|(x230&x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint8_t x234 = UINT8_MAX;
	uint8_t x235 = 1U;
	uint16_t x236 = 2298U;
	static volatile int32_t t58 = 14;

	t58 = ((x233|(x234&x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -53;
	static int8_t x238 = INT8_MIN;
	static int8_t x239 = 2;
	int32_t x240 = -1;
	static volatile int32_t t59 = -1000051;

	t59 = ((x237|(x238&x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int16_t x243 = INT16_MIN;
	volatile int8_t x244 = INT8_MIN;
	int32_t t60 = -5;

	t60 = ((x241|(x242&x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	uint32_t x246 = 13763U;
	int64_t x248 = INT64_MIN;
	int32_t t61 = -14098;

	t61 = ((x245|(x246&x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static uint16_t x250 = 2823U;
	static volatile uint64_t x251 = 73528089694LLU;
	int16_t x252 = INT16_MAX;
	int32_t t62 = 24789;

	t62 = ((x249|(x250&x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	uint64_t x254 = 49LLU;
	volatile uint32_t x255 = 2445U;
	static int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = -58696339;

	t63 = ((x253|(x254&x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 7U;
	static volatile int8_t x258 = INT8_MAX;
	volatile uint16_t x260 = 1U;
	static int32_t t64 = -156765;

	t64 = ((x257|(x258&x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	volatile int64_t x262 = INT64_MIN;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = -1LL;
	volatile int32_t t65 = -407;

	t65 = ((x261|(x262&x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 126490546U;
	volatile int64_t x267 = INT64_MAX;
	int32_t t66 = 91309;

	t66 = ((x265|(x266&x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	volatile int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	static int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 85601804;

	t67 = ((x269|(x270&x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 6288143168154403LLU;
	static uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 3206605U;
	static int32_t x276 = -37153739;
	int32_t t68 = -161;

	t68 = ((x273|(x274&x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x278 = INT64_MIN;
	uint8_t x279 = 23U;
	static int32_t x280 = INT32_MIN;
	static int32_t t69 = -38;

	t69 = ((x277|(x278&x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	static int32_t x282 = 440696410;
	uint16_t x283 = 1016U;
	static int64_t x284 = INT64_MIN;
	int32_t t70 = -1684;

	t70 = ((x281|(x282&x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = INT32_MIN;
	volatile int32_t x287 = INT32_MAX;
	volatile int8_t x288 = INT8_MAX;
	static int32_t t71 = -1218741;

	t71 = ((x285|(x286&x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x290 = UINT16_MAX;
	volatile uint8_t x291 = 7U;
	int8_t x292 = INT8_MIN;
	int32_t t72 = 47981903;

	t72 = ((x289|(x290&x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MAX;
	static int8_t x295 = 37;
	uint32_t x296 = 346857697U;
	volatile int32_t t73 = 4416;

	t73 = ((x293|(x294&x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	int16_t x299 = -1;
	int32_t x300 = INT32_MIN;

	t74 = ((x297|(x298&x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	volatile uint16_t x303 = 529U;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t75 = 94;

	t75 = ((x301|(x302&x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = 23U;
	static volatile int32_t t76 = -386722282;

	t76 = ((x305|(x306&x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	static volatile uint8_t x311 = 60U;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -239;

	t77 = ((x309|(x310&x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 7;
	volatile uint64_t x314 = 273185901LLU;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = -8817234LL;
	volatile int32_t t78 = -268;

	t78 = ((x313|(x314&x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile int64_t x319 = -1LL;
	int64_t x320 = 25399605973LL;
	static int32_t t79 = 2;

	t79 = ((x317|(x318&x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = 20;
	int8_t x323 = 14;
	int64_t x324 = -1LL;
	volatile int32_t t80 = -248851;

	t80 = ((x321|(x322&x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 1746099338705693LL;
	int32_t x326 = -42031959;
	uint64_t x327 = 456891650LLU;
	int64_t x328 = 427483LL;
	static volatile int32_t t81 = 4310;

	t81 = ((x325|(x326&x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -1LL;
	int32_t x331 = 913;
	static uint32_t x332 = 93U;
	static int32_t t82 = -58432712;

	t82 = ((x329|(x330&x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static int64_t x335 = INT64_MAX;
	static int32_t t83 = -1;

	t83 = ((x333|(x334&x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MAX;
	volatile int64_t x339 = INT64_MIN;
	int8_t x340 = 9;
	int32_t t84 = -1544;

	t84 = ((x337|(x338&x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -60;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = 9U;
	static uint64_t x344 = 1650985626164431262LLU;
	int32_t t85 = -4270;

	t85 = ((x341|(x342&x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int64_t x346 = -1870LL;
	int16_t x347 = 6;
	uint16_t x348 = 8956U;
	int32_t t86 = -1;

	t86 = ((x345|(x346&x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 62LLU;
	int32_t x350 = -22;
	uint16_t x351 = 5U;
	int32_t t87 = 13862;

	t87 = ((x349|(x350&x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	uint64_t x355 = 58609300246441369LLU;
	uint16_t x356 = 23959U;
	volatile int32_t t88 = -16774045;

	t88 = ((x353|(x354&x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 31547U;
	uint64_t x359 = UINT64_MAX;
	static uint64_t x360 = 776LLU;

	t89 = ((x357|(x358&x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 170U;
	volatile uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 3239U;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 4735;

	t90 = ((x361|(x362&x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 1217064442LLU;
	int32_t x367 = 15;
	int16_t x368 = INT16_MAX;
	int32_t t91 = -1523;

	t91 = ((x365|(x366&x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 6U;
	uint32_t x370 = 268153199U;
	uint64_t x371 = 29813219718013LLU;
	static int32_t t92 = 863819104;

	t92 = ((x369|(x370&x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -1;
	static uint16_t x375 = 3U;
	static volatile uint32_t x376 = 7358U;
	int32_t t93 = 116341;

	t93 = ((x373|(x374&x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int16_t x378 = INT16_MIN;
	volatile int64_t x379 = INT64_MAX;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 4852;

	t94 = ((x377|(x378&x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -43;
	uint8_t x383 = 122U;
	int64_t x384 = INT64_MIN;
	int32_t t95 = 0;

	t95 = ((x381|(x382&x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 423423;
	int32_t x386 = 1;
	int16_t x387 = 7;
	static int64_t x388 = 1051767054484572LL;
	static volatile int32_t t96 = 184;

	t96 = ((x385|(x386&x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = UINT64_MAX;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -33;

	t97 = ((x389|(x390&x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = 0;
	static volatile int8_t x395 = INT8_MIN;
	static uint64_t x396 = 63255475061537LLU;
	volatile int32_t t98 = 11166;

	t98 = ((x393|(x394&x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	volatile int16_t x398 = INT16_MIN;
	volatile int8_t x400 = 63;
	int32_t t99 = -6634;

	t99 = ((x397|(x398&x399))<=x400);

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

