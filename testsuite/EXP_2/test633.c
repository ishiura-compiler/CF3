#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = 1;
int8_t x12 = 0;
int8_t x13 = -1;
volatile int32_t t2 = -10148;
int32_t x20 = INT32_MIN;
int32_t x21 = INT32_MAX;
volatile int64_t x22 = -3089632351LL;
uint64_t x25 = 213106101LLU;
int64_t x38 = INT64_MAX;
int32_t t8 = 0;
static int32_t x49 = 531950;
int16_t x50 = 0;
int32_t x59 = INT32_MAX;
volatile int32_t t13 = -415876;
int64_t x69 = INT64_MIN;
int64_t x70 = -1LL;
uint8_t x79 = 25U;
volatile int32_t t17 = 7598985;
int64_t x81 = INT64_MIN;
volatile int8_t x83 = -9;
volatile int64_t x89 = INT64_MAX;
static int64_t x91 = INT64_MIN;
int32_t x92 = 1;
uint64_t x96 = 19720780843305LLU;
static int16_t x110 = INT16_MIN;
int16_t x112 = INT16_MIN;
int8_t x115 = 29;
int16_t x117 = INT16_MAX;
int64_t x118 = -447488192669458LL;
int8_t x130 = -1;
volatile int32_t t29 = -38;
int32_t x133 = -252;
volatile int64_t x134 = 29641696LL;
uint32_t x135 = 39U;
int8_t x149 = INT8_MIN;
int16_t x153 = INT16_MAX;
int64_t x155 = -1LL;
int32_t x163 = 2342740;
int8_t x172 = INT8_MAX;
volatile int32_t t38 = 30;
int32_t t39 = -5521;
int32_t x178 = -1;
static int16_t x179 = INT16_MIN;
int32_t t41 = -12023;
static int32_t x194 = INT32_MIN;
int32_t t42 = 27075;
int16_t x198 = INT16_MIN;
uint32_t x204 = 13U;
int16_t x205 = -1;
int32_t x211 = INT32_MIN;
int32_t t46 = 525;
int8_t x229 = INT8_MAX;
volatile uint32_t x234 = 23021909U;
uint32_t x238 = 1130U;
int8_t x239 = INT8_MIN;
volatile int32_t t52 = -2184;
int16_t x246 = 31;
int64_t x255 = INT64_MIN;
volatile int8_t x256 = -46;
volatile int64_t x257 = 916890226347196LL;
volatile int32_t x263 = INT32_MAX;
static uint64_t x274 = 66484678502255LLU;
static volatile uint8_t x275 = 5U;
int32_t x280 = INT32_MAX;
int32_t t61 = -1;
static uint64_t x284 = UINT64_MAX;
volatile int32_t t62 = 0;
int64_t x291 = -1LL;
static volatile int64_t x297 = INT64_MIN;
volatile int16_t x299 = 1;
volatile int32_t t66 = 43599197;
volatile uint32_t x303 = UINT32_MAX;
static uint16_t x304 = UINT16_MAX;
int32_t x311 = INT32_MAX;
int8_t x312 = 31;
int32_t x313 = INT32_MIN;
uint32_t x322 = 161U;
static uint16_t x323 = 73U;
int16_t x328 = INT16_MIN;
int64_t x329 = INT64_MIN;
uint16_t x333 = 2253U;
int32_t x338 = -1;
int8_t x347 = 7;
int64_t x349 = -1LL;
uint32_t x350 = UINT32_MAX;
static volatile int32_t t80 = 9765;
int32_t t81 = 456;
volatile uint64_t x365 = UINT64_MAX;
uint16_t x379 = 32370U;
uint16_t x386 = 14U;
int64_t x404 = -1LL;
volatile int8_t x409 = -1;
int16_t x411 = INT16_MIN;
uint64_t x413 = 44425217065354LLU;
int8_t x415 = INT8_MAX;
int16_t x416 = INT16_MIN;
static int8_t x422 = INT8_MIN;
int32_t x427 = INT32_MIN;
volatile uint64_t x432 = 1527083489042LLU;
int32_t t99 = 1;


void f0(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = 250981;
	uint16_t x7 = UINT16_MAX;
	static int32_t x8 = INT32_MIN;
	int32_t t0 = 126;

	t0 = ((x5<=(x6/x7))<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 7U;
	volatile int16_t x10 = 61;
	volatile int32_t t1 = 354067362;

	t1 = ((x9<=(x10/x11))<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = 883856720938496LLU;
	int16_t x15 = INT16_MAX;
	int32_t x16 = INT32_MIN;

	t2 = ((x13<=(x14/x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 699U;
	uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 83859195U;
	volatile int32_t t3 = 0;

	t3 = ((x17<=(x18/x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x23 = 532109816500005869LLU;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 10;

	t4 = ((x21<=(x22/x23))<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = -1;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t5 = 81;

	t5 = ((x25<=(x26/x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = -1;
	int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 4587031547859651LLU;
	int32_t t6 = -5701466;

	t6 = ((x29<=(x30/x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	static int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	static volatile int32_t t7 = 44;

	t7 = ((x33<=(x34/x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -36;

	t8 = ((x37<=(x38/x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -2;
	int64_t x42 = 175LL;
	static volatile int64_t x43 = INT64_MAX;
	volatile int32_t x44 = -1;
	volatile int32_t t9 = 125;

	t9 = ((x41<=(x42/x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MAX;
	volatile int8_t x46 = 2;
	int8_t x47 = -1;
	int64_t x48 = INT64_MIN;
	volatile int32_t t10 = -4;

	t10 = ((x45<=(x46/x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x51 = -1;
	int32_t x52 = INT32_MAX;
	volatile int32_t t11 = 2676;

	t11 = ((x49<=(x50/x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	static int32_t x54 = -1;
	static volatile int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t12 = -58615;

	t12 = ((x53<=(x54/x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 9;
	uint16_t x58 = 25865U;
	static int32_t x60 = 173379718;

	t13 = ((x57<=(x58/x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = 418239010;
	static int32_t x62 = INT32_MIN;
	int16_t x63 = INT16_MIN;
	static int32_t x64 = INT32_MIN;
	int32_t t14 = 242;

	t14 = ((x61<=(x62/x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = INT8_MIN;
	uint32_t x67 = 287U;
	int32_t x68 = -1;
	int32_t t15 = 5366;

	t15 = ((x65<=(x66/x67))<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x71 = -66621013;
	static int8_t x72 = INT8_MAX;
	volatile int32_t t16 = -19367899;

	t16 = ((x69<=(x70/x71))<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 3650941;
	uint8_t x78 = 1U;
	int16_t x80 = -3618;

	t17 = ((x77<=(x78/x79))<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = 9150LLU;
	int8_t x84 = 8;
	static volatile int32_t t18 = -1953630;

	t18 = ((x81<=(x82/x83))<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MIN;
	volatile uint16_t x87 = 1U;
	int16_t x88 = INT16_MAX;
	volatile int32_t t19 = 1224;

	t19 = ((x85<=(x86/x87))<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x90 = 45U;
	volatile int32_t t20 = -905;

	t20 = ((x89<=(x90/x91))<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 783U;
	uint16_t x94 = UINT16_MAX;
	volatile int64_t x95 = -9208LL;
	volatile int32_t t21 = 8402604;

	t21 = ((x93<=(x94/x95))<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -8388;
	volatile int8_t x98 = INT8_MAX;
	uint8_t x99 = 100U;
	int16_t x100 = INT16_MAX;
	int32_t t22 = -4;

	t22 = ((x97<=(x98/x99))<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -888782442393LL;
	int8_t x102 = 30;
	int16_t x103 = -1;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t23 = -4174808;

	t23 = ((x101<=(x102/x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 21U;
	static int8_t x106 = -19;
	int32_t x107 = 1419;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 18908358;

	t24 = ((x105<=(x106/x107))<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	volatile int32_t t25 = 197;

	t25 = ((x109<=(x110/x111))<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	int16_t x114 = INT16_MIN;
	int8_t x116 = INT8_MAX;
	int32_t t26 = 798088931;

	t26 = ((x113<=(x114/x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x119 = INT8_MIN;
	uint8_t x120 = 3U;
	int32_t t27 = -152477876;

	t27 = ((x117<=(x118/x119))<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x121 = 582U;
	int16_t x122 = -1349;
	static volatile int16_t x123 = -1;
	int64_t x124 = INT64_MAX;
	int32_t t28 = 198524021;

	t28 = ((x121<=(x122/x123))<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 3424LL;
	static int64_t x131 = -1LL;
	volatile uint32_t x132 = 104141474U;

	t29 = ((x129<=(x130/x131))<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x136 = 714U;
	volatile int32_t t30 = 172;

	t30 = ((x133<=(x134/x135))<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = 1;
	int32_t x138 = INT32_MAX;
	static int32_t x139 = INT32_MIN;
	static uint16_t x140 = 25830U;
	static volatile int32_t t31 = -123653136;

	t31 = ((x137<=(x138/x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MIN;
	static uint32_t x143 = 594724180U;
	uint64_t x144 = 1245211165LLU;
	static volatile int32_t t32 = -8546973;

	t32 = ((x141<=(x142/x143))<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x150 = -1;
	volatile int16_t x151 = -1;
	volatile uint64_t x152 = 22922LLU;
	static int32_t t33 = 58247;

	t33 = ((x149<=(x150/x151))<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = 2;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t34 = -37691;

	t34 = ((x153<=(x154/x155))<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = INT16_MAX;
	uint64_t x158 = 30888737511LLU;
	static int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	static int32_t t35 = -14;

	t35 = ((x157<=(x158/x159))<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = INT64_MIN;
	uint16_t x162 = 5930U;
	static int64_t x164 = 1767677890LL;
	int32_t t36 = -1;

	t36 = ((x161<=(x162/x163))<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x165 = 44U;
	int64_t x166 = -5819244LL;
	static int64_t x167 = -1LL;
	volatile uint64_t x168 = 3487440LLU;
	volatile int32_t t37 = 5;

	t37 = ((x165<=(x166/x167))<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	static volatile uint8_t x170 = 15U;
	static volatile int64_t x171 = -206667921952350282LL;

	t38 = ((x169<=(x170/x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MIN;

	t39 = ((x173<=(x174/x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = 4381;
	int8_t x180 = 4;
	int32_t t40 = -10;

	t40 = ((x177<=(x178/x179))<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 5268U;
	static int32_t x186 = -52;
	volatile int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MIN;

	t41 = ((x185<=(x186/x187))<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	volatile uint64_t x195 = 19900516387LLU;
	volatile uint16_t x196 = 1U;

	t42 = ((x193<=(x194/x195))<x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 1447549813420350LLU;
	int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MAX;
	volatile int32_t t43 = 10656;

	t43 = ((x197<=(x198/x199))<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = 426251311189344LLU;
	volatile int8_t x202 = 23;
	uint32_t x203 = 12U;
	int32_t t44 = 457581061;

	t44 = ((x201<=(x202/x203))<x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x206 = INT32_MIN;
	uint8_t x207 = 3U;
	uint16_t x208 = 5U;
	static int32_t t45 = 8;

	t45 = ((x205<=(x206/x207))<x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	static volatile uint32_t x212 = UINT32_MAX;

	t46 = ((x209<=(x210/x211))<x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = INT32_MIN;
	uint16_t x214 = 198U;
	int32_t x215 = -1;
	static volatile int8_t x216 = 4;
	int32_t t47 = -6524738;

	t47 = ((x213<=(x214/x215))<x216);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 50U;
	static int32_t x218 = -1;
	volatile int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	int32_t t48 = -2249;

	t48 = ((x217<=(x218/x219))<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = 4U;
	uint32_t x222 = 38U;
	int8_t x223 = -1;
	volatile int64_t x224 = -82128532LL;
	int32_t t49 = 308236431;

	t49 = ((x221<=(x222/x223))<x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MAX;
	int8_t x232 = INT8_MAX;
	volatile int32_t t50 = -96;

	t50 = ((x229<=(x230/x231))<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = 466047946816LLU;
	uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t51 = 6995;

	t51 = ((x233<=(x234/x235))<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x237 = 231U;
	uint64_t x240 = UINT64_MAX;

	t52 = ((x237<=(x238/x239))<x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	static uint8_t x243 = 3U;
	int64_t x244 = INT64_MIN;
	volatile int32_t t53 = -297458772;

	t53 = ((x241<=(x242/x243))<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 8U;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t54 = 264;

	t54 = ((x245<=(x246/x247))<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -1;
	int32_t t55 = 112;

	t55 = ((x249<=(x250/x251))<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	uint64_t x254 = 104752793134LLU;
	int32_t t56 = -10;

	t56 = ((x253<=(x254/x255))<x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x258 = -3996;
	int64_t x259 = -1LL;
	static int64_t x260 = INT64_MIN;
	volatile int32_t t57 = -14672;

	t57 = ((x257<=(x258/x259))<x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 263907U;
	uint8_t x262 = 15U;
	volatile int16_t x264 = -1;
	static volatile int32_t t58 = -1;

	t58 = ((x261<=(x262/x263))<x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = UINT8_MAX;
	static volatile int32_t x270 = -1;
	uint64_t x271 = 88492285601602LLU;
	static uint32_t x272 = 58U;
	int32_t t59 = -6205;

	t59 = ((x269<=(x270/x271))<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x276 = 151043U;
	volatile int32_t t60 = 33186;

	t60 = ((x273<=(x274/x275))<x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MAX;
	int64_t x279 = INT64_MIN;

	t61 = ((x277<=(x278/x279))<x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = 1;
	static int64_t x282 = -57928LL;
	static volatile uint8_t x283 = 2U;

	t62 = ((x281<=(x282/x283))<x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 140;
	int16_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	volatile uint32_t x288 = 143U;
	volatile int32_t t63 = -31843;

	t63 = ((x285<=(x286/x287))<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	volatile uint8_t x290 = 93U;
	uint8_t x292 = 1U;
	static volatile int32_t t64 = -303290021;

	t64 = ((x289<=(x290/x291))<x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = -17;
	static int32_t x294 = -5951;
	int8_t x295 = -32;
	static uint16_t x296 = UINT16_MAX;
	volatile int32_t t65 = -29287125;

	t65 = ((x293<=(x294/x295))<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x298 = INT32_MIN;
	int8_t x300 = -2;

	t66 = ((x297<=(x298/x299))<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x301 = 1U;
	int32_t x302 = INT32_MIN;
	volatile int32_t t67 = 249;

	t67 = ((x301<=(x302/x303))<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 1768541301715822LLU;
	uint64_t x308 = 99467751334575LLU;
	int32_t t68 = 1399;

	t68 = ((x305<=(x306/x307))<x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = 183711;
	static uint32_t x310 = 91898261U;
	int32_t t69 = -53847;

	t69 = ((x309<=(x310/x311))<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MIN;
	static int32_t t70 = 933089607;

	t70 = ((x313<=(x314/x315))<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = -421LL;
	int16_t x318 = INT16_MIN;
	int8_t x319 = 53;
	int16_t x320 = INT16_MAX;
	int32_t t71 = -1069315;

	t71 = ((x317<=(x318/x319))<x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = -1LL;
	int32_t x324 = INT32_MAX;
	int32_t t72 = 2576;

	t72 = ((x321<=(x322/x323))<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	volatile int32_t x327 = INT32_MIN;
	static int32_t t73 = 1412714;

	t73 = ((x325<=(x326/x327))<x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x330 = INT8_MIN;
	int32_t x331 = -21835820;
	int64_t x332 = INT64_MAX;
	static volatile int32_t t74 = 180217;

	t74 = ((x329<=(x330/x331))<x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x334 = INT64_MAX;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = -3;
	volatile int32_t t75 = 3;

	t75 = ((x333<=(x334/x335))<x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = -1391476;
	static int16_t x339 = INT16_MIN;
	int64_t x340 = -2326300154129LL;
	volatile int32_t t76 = -15923;

	t76 = ((x337<=(x338/x339))<x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x341 = INT32_MAX;
	static uint8_t x342 = 2U;
	int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t77 = 46821;

	t77 = ((x341<=(x342/x343))<x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x346 = 343U;
	int16_t x348 = INT16_MAX;
	volatile int32_t t78 = -1078;

	t78 = ((x345<=(x346/x347))<x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x351 = 2407U;
	static uint8_t x352 = UINT8_MAX;
	volatile int32_t t79 = 20170339;

	t79 = ((x349<=(x350/x351))<x352);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = 32415746U;
	volatile int8_t x356 = INT8_MIN;

	t80 = ((x353<=(x354/x355))<x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = 4793;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;

	t81 = ((x361<=(x362/x363))<x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MIN;
	volatile int8_t x368 = INT8_MIN;
	static int32_t t82 = 33;

	t82 = ((x365<=(x366/x367))<x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = -30;
	uint8_t x371 = 15U;
	static uint64_t x372 = 1200LLU;
	static volatile int32_t t83 = 91;

	t83 = ((x369<=(x370/x371))<x372);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = -1LL;
	int32_t x374 = -7792504;
	static int16_t x375 = INT16_MIN;
	uint32_t x376 = 966U;
	int32_t t84 = -15220768;

	t84 = ((x373<=(x374/x375))<x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x377 = INT16_MAX;
	volatile int8_t x378 = INT8_MIN;
	int64_t x380 = -1LL;
	int32_t t85 = 472401;

	t85 = ((x377<=(x378/x379))<x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = 47485LLU;
	uint64_t x382 = UINT64_MAX;
	volatile int8_t x383 = -55;
	static int16_t x384 = INT16_MAX;
	static volatile int32_t t86 = -89440;

	t86 = ((x381<=(x382/x383))<x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x385 = -69991;
	int8_t x387 = 40;
	int8_t x388 = INT8_MAX;
	int32_t t87 = -29;

	t87 = ((x385<=(x386/x387))<x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	volatile uint8_t x391 = UINT8_MAX;
	static uint8_t x392 = 4U;
	static volatile int32_t t88 = 215;

	t88 = ((x389<=(x390/x391))<x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = -1;
	static int64_t x394 = INT64_MAX;
	int8_t x395 = 56;
	uint64_t x396 = UINT64_MAX;
	int32_t t89 = 3;

	t89 = ((x393<=(x394/x395))<x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x397 = 161U;
	volatile int8_t x398 = INT8_MIN;
	volatile int8_t x399 = -1;
	static int16_t x400 = INT16_MIN;
	static int32_t t90 = -137;

	t90 = ((x397<=(x398/x399))<x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = 15;
	int32_t x402 = -1;
	uint8_t x403 = 103U;
	volatile int32_t t91 = -109912;

	t91 = ((x401<=(x402/x403))<x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = 169;
	static uint8_t x407 = 7U;
	uint32_t x408 = 143394U;
	int32_t t92 = 1;

	t92 = ((x405<=(x406/x407))<x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x410 = UINT64_MAX;
	static volatile int8_t x412 = INT8_MAX;
	int32_t t93 = -105042;

	t93 = ((x409<=(x410/x411))<x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x414 = -308;
	int32_t t94 = -9637;

	t94 = ((x413<=(x414/x415))<x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = -1;
	uint8_t x418 = 4U;
	volatile int64_t x419 = INT64_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t95 = 632232363;

	t95 = ((x417<=(x418/x419))<x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = 1931727070654246768LL;
	int16_t x423 = INT16_MAX;
	uint16_t x424 = 1U;
	volatile int32_t t96 = 29;

	t96 = ((x421<=(x422/x423))<x424);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = -751200;
	int32_t x426 = INT32_MIN;
	int64_t x428 = -1LL;
	volatile int32_t t97 = 20850;

	t97 = ((x425<=(x426/x427))<x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MIN;
	int64_t x430 = INT64_MIN;
	static uint32_t x431 = 1714478548U;
	static volatile int32_t t98 = 1046310701;

	t98 = ((x429<=(x430/x431))<x432);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = INT16_MIN;
	static uint8_t x434 = 2U;
	uint16_t x435 = 12831U;
	volatile int64_t x436 = INT64_MAX;

	t99 = ((x433<=(x434/x435))<x436);

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

