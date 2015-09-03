#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
static volatile int16_t x6 = INT16_MIN;
int16_t x9 = 11541;
static uint64_t x10 = 30204101LLU;
uint32_t x20 = 264584508U;
volatile uint32_t t3 = 8724U;
static volatile uint8_t x21 = 9U;
uint8_t x24 = 27U;
volatile int32_t t4 = 25;
uint64_t x38 = 30LLU;
static uint16_t x59 = UINT16_MAX;
uint8_t x62 = 44U;
uint64_t x64 = 314LLU;
volatile int32_t t13 = 7875;
volatile uint32_t x85 = 101U;
int16_t x87 = INT16_MIN;
uint16_t x90 = 0U;
int8_t x98 = INT8_MAX;
static int32_t x100 = -1;
volatile uint64_t t19 = 2109716864948LLU;
int8_t x106 = INT8_MIN;
int32_t x108 = INT32_MIN;
uint64_t x111 = 943LLU;
int64_t x118 = -1LL;
uint64_t x121 = 170715LLU;
int32_t x138 = INT32_MIN;
uint8_t x142 = 5U;
int8_t x147 = INT8_MIN;
volatile int64_t t29 = -96896503LL;
static volatile uint32_t x167 = 6U;
static int32_t x178 = INT32_MIN;
int64_t x192 = -139400358318187LL;
int8_t x202 = -1;
uint32_t x203 = 1293U;
static int32_t x210 = INT32_MIN;
int32_t x211 = INT32_MIN;
int8_t x214 = 3;
int16_t x215 = 20;
volatile int16_t x222 = INT16_MIN;
uint32_t x224 = 4099U;
int64_t t41 = 1361711656536LL;
uint64_t x225 = 2LLU;
static volatile uint64_t t42 = 5615277454294902LLU;
int64_t x231 = -1LL;
int8_t x253 = INT8_MAX;
int64_t x259 = -1LL;
int8_t x261 = 0;
static uint8_t x262 = UINT8_MAX;
static int64_t t47 = 8LL;
int8_t x270 = 1;
static int64_t t49 = -21102637543203492LL;
uint64_t x275 = UINT64_MAX;
uint64_t t50 = 440684LLU;
static int64_t x281 = -1LL;
int8_t x283 = INT8_MIN;
uint64_t x297 = 487LLU;
int32_t x298 = 0;
uint8_t x299 = UINT8_MAX;
int16_t x301 = -1;
uint64_t x302 = 10144751786351LLU;
volatile uint16_t x304 = 1U;
uint64_t t54 = 57218187LLU;
int8_t x319 = INT8_MAX;
int16_t x323 = 1071;
uint64_t t58 = 14243402430LLU;
int64_t x328 = -1LL;
uint16_t x329 = 0U;
int16_t x330 = INT16_MIN;
int64_t t61 = -31144LL;
int8_t x342 = INT8_MIN;
uint64_t x346 = UINT64_MAX;
static uint8_t x349 = 2U;
static uint16_t x350 = 3208U;
uint32_t x354 = 54U;
int8_t x366 = INT8_MAX;
static int8_t x368 = INT8_MIN;
uint8_t x369 = 120U;
uint32_t x373 = 1U;
int64_t t71 = -1707920710961801LL;
int16_t x377 = 522;
int16_t x384 = 1;
volatile uint64_t t73 = 412929LLU;
int64_t x385 = 1641422LL;
static uint16_t x386 = UINT16_MAX;
int8_t x387 = 0;
int64_t x390 = INT64_MIN;
static int32_t x392 = INT32_MIN;
static uint16_t x395 = 6042U;
uint32_t x405 = 0U;
int32_t x406 = INT32_MIN;
static int8_t x407 = INT8_MIN;
int8_t x411 = INT8_MIN;
int64_t x413 = -4854726258LL;
static uint64_t x417 = UINT64_MAX;
uint64_t x420 = UINT64_MAX;
uint64_t x439 = 12050210LLU;
static int32_t x440 = -62;
int64_t x443 = -1LL;
static volatile uint64_t x458 = 8845LLU;
volatile uint64_t t87 = 304870061870735LLU;
int8_t x467 = INT8_MIN;
uint32_t x479 = 1U;
volatile int16_t x489 = 1;
static int8_t x495 = 0;
int8_t x503 = INT8_MAX;
int16_t x519 = -1;
uint16_t x522 = 4839U;


void f0(void) {
	volatile uint64_t x7 = 441532865305LLU;
	int8_t x8 = INT8_MAX;
	volatile uint64_t t0 = 5458LLU;

	t0 = ((x5*(x6-x7))&x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x11 = UINT32_MAX;
	static int32_t x12 = -1;
	uint64_t t1 = 1320988189569087243LLU;

	t1 = ((x9*(x10-x11))&x12);

	if (t1 != 18446694854077529662LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 7U;
	static volatile int64_t x14 = -1LL;
	uint16_t x15 = 1U;
	uint16_t x16 = 1716U;
	static volatile int64_t t2 = 58701LL;

	t2 = ((x13*(x14-x15))&x16);

	if (t2 != 1712LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -331;
	static volatile uint32_t x19 = 1437628990U;

	t3 = ((x17*(x18-x19))&x20);

	if (t3 != 230948864U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MAX;
	int8_t x23 = 12;

	t4 = ((x21*(x22-x23))&x24);

	if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = UINT16_MAX;
	uint64_t x30 = 2866967874126LLU;
	static int16_t x31 = INT16_MAX;
	uint32_t x32 = 67451U;
	static volatile uint64_t t5 = 2167981787479LLU;

	t5 = ((x29*(x30-x31))&x32);

	if (t5 != 66865LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 7544LL;
	int64_t x39 = INT64_MIN;
	static int16_t x40 = INT16_MIN;
	uint64_t t6 = 13469920LLU;

	t6 = ((x37*(x38-x39))&x40);

	if (t6 != 196608LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x45 = INT16_MIN;
	uint8_t x46 = 4U;
	uint8_t x47 = 23U;
	int32_t x48 = -1;
	int32_t t7 = -371197157;

	t7 = ((x45*(x46-x47))&x48);

	if (t7 != 622592) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 2031U;
	int8_t x50 = INT8_MAX;
	uint16_t x51 = 670U;
	uint64_t x52 = 246260840374061LLU;
	uint64_t t8 = 94330042LLU;

	t8 = ((x49*(x50-x51))&x52);

	if (t8 != 246260840336397LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = -37;
	int64_t x58 = -100473706LL;
	int32_t x60 = INT32_MIN;
	static int64_t t9 = -8LL;

	t9 = ((x57*(x58-x59))&x60);

	if (t9 != 2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 8LLU;
	uint8_t x63 = UINT8_MAX;
	volatile uint64_t t10 = 23LLU;

	t10 = ((x61*(x62-x63))&x64);

	if (t10 != 296LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = 164;
	int8_t x71 = -1;
	volatile uint8_t x72 = 13U;
	volatile int32_t t11 = -8141;

	t11 = ((x69*(x70-x71))&x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x73 = 13U;
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 1162244U;
	uint32_t x76 = 5U;
	volatile uint32_t t12 = 3U;

	t12 = ((x73*(x74-x75))&x76);

	if (t12 != 4U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x77 = UINT8_MAX;
	static int8_t x78 = -1;
	int16_t x79 = INT16_MAX;
	int32_t x80 = 9647;

	t13 = ((x77*(x78-x79))&x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = 258;
	uint8_t x83 = 2U;
	uint16_t x84 = 4U;
	static int32_t t14 = 2936;

	t14 = ((x81*(x82-x83))&x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x86 = 0;
	int8_t x88 = INT8_MIN;
	volatile uint32_t t15 = 6U;

	t15 = ((x85*(x86-x87))&x88);

	if (t15 != 3309568U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 9212296398107LLU;
	int8_t x91 = -1;
	int8_t x92 = -1;
	volatile uint64_t t16 = 1294LLU;

	t16 = ((x89*(x90-x91))&x92);

	if (t16 != 9212296398107LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MAX;
	uint8_t x94 = UINT8_MAX;
	volatile uint64_t x95 = 8056479076050571LLU;
	static int64_t x96 = INT64_MAX;
	volatile uint64_t t17 = 637325037554LLU;

	t17 = ((x93*(x94-x95))&x96);

	if (t17 != 3491139183847794060LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x97 = 1325936LLU;
	static uint8_t x99 = 1U;
	uint64_t t18 = 15585LLU;

	t18 = ((x97*(x98-x99))&x100);

	if (t18 != 167067936LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = INT8_MIN;
	uint16_t x102 = 168U;
	int32_t x103 = -1;
	static volatile uint64_t x104 = 72641090601LLU;

	t19 = ((x101*(x102-x103))&x104);

	if (t19 != 72641085440LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 60747207480591761LLU;
	static volatile int8_t x107 = -1;
	volatile uint64_t t20 = 486134600836628LLU;

	t20 = ((x105*(x106-x107))&x108);

	if (t20 != 10731848721831559168LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	static volatile int32_t x112 = -178997337;
	uint64_t t21 = 7572125934576LLU;

	t21 = ((x109*(x110-x111))&x112);

	if (t21 != 2147484583LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	uint64_t x116 = 11LLU;
	volatile uint64_t t22 = 2158094804646235LLU;

	t22 = ((x113*(x114-x115))&x116);

	if (t22 != 11LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	volatile uint16_t x120 = 499U;
	int64_t t23 = -21LL;

	t23 = ((x117*(x118-x119))&x120);

	if (t23 != 256LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x122 = 7U;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = -15;
	static uint64_t t24 = 490549025LLU;

	t24 = ((x121*(x122-x123))&x124);

	if (t24 != 18446744073667214288LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = INT64_MIN;
	static uint64_t x126 = 21823LLU;
	uint64_t x127 = 5604716229LLU;
	static volatile uint64_t x128 = 291246381LLU;
	uint64_t t25 = 429973570110LLU;

	t25 = ((x125*(x126-x127))&x128);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = -1;
	static uint64_t x135 = 3277544047392LLU;
	uint64_t x136 = 27663163LLU;
	volatile uint64_t t26 = 98217652LLU;

	t26 = ((x133*(x134-x135))&x136);

	if (t26 != 25559585LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = 134U;
	int32_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t27 = 484596246058LLU;

	t27 = ((x137*(x138-x139))&x140);

	if (t27 != 134LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = -1;
	volatile int64_t x143 = -1LL;
	uint32_t x144 = UINT32_MAX;
	volatile int64_t t28 = 1163691LL;

	t28 = ((x141*(x142-x143))&x144);

	if (t28 != 4294967290LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = -10777003356535LL;
	int32_t x146 = -1;
	volatile int32_t x148 = -1;

	t29 = ((x145*(x146-x147))&x148);

	if (t29 != -1368679426279945LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	volatile uint32_t t30 = 21U;

	t30 = ((x161*(x162-x163))&x164);

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = 86;
	uint16_t x166 = UINT16_MAX;
	int32_t x168 = 3740203;
	uint32_t t31 = 39282259U;

	t31 = ((x165*(x166-x167))&x168);

	if (t31 != 1118242U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -1;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MAX;
	uint32_t t32 = 33644177U;

	t32 = ((x169*(x170-x171))&x172);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x177 = 12016840266LLU;
	uint64_t x179 = 2LLU;
	int8_t x180 = INT8_MAX;
	static uint64_t t33 = 805686592341LLU;

	t33 = ((x177*(x178-x179))&x180);

	if (t33 != 108LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x189 = INT16_MIN;
	int64_t x190 = -1LL;
	uint32_t x191 = UINT32_MAX;
	int64_t t34 = -2155424865315449820LL;

	t34 = ((x189*(x190-x191))&x192);

	if (t34 != 140737488355328LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x193 = 2LLU;
	static int8_t x194 = 2;
	static uint64_t x195 = 6795785144LLU;
	volatile int32_t x196 = -30245349;
	uint64_t t35 = 4LLU;

	t35 = ((x193*(x194-x195))&x196);

	if (t35 != 18446744060088555536LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = INT32_MIN;
	static int32_t x198 = -1;
	int16_t x199 = -1;
	static uint32_t x200 = 1U;
	static volatile uint32_t t36 = 4U;

	t36 = ((x197*(x198-x199))&x200);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = 19;
	int64_t x204 = -483140237473501LL;
	volatile int64_t t37 = 25933516148259421LL;

	t37 = ((x201*(x202-x203))&x204);

	if (t37 != 633637154LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x209 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t38 = 85475709U;

	t38 = ((x209*(x210-x211))&x212);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = -4542835LL;
	int32_t x216 = INT32_MIN;
	int64_t t39 = 1477636018LL;

	t39 = ((x213*(x214-x215))&x216);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = 0U;
	int8_t x219 = -1;
	static volatile int32_t x220 = INT32_MAX;
	int32_t t40 = 54;

	t40 = ((x217*(x218-x219))&x220);

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = -1LL;
	static int64_t x223 = -1LL;

	t41 = ((x221*(x222-x223))&x224);

	if (t41 != 4099LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x226 = 19U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;

	t42 = ((x225*(x226-x227))&x228);

	if (t42 != 256LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x229 = UINT16_MAX;
	uint64_t x230 = 53557983103940904LLU;
	int8_t x232 = INT8_MIN;
	uint64_t t43 = 31LLU;

	t43 = ((x229*(x230-x231))&x232);

	if (t43 != 5041048711952402048LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x241 = 0;
	static int8_t x242 = INT8_MIN;
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = 227804408;
	volatile uint32_t t44 = 4764U;

	t44 = ((x241*(x242-x243))&x244);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x254 = INT16_MIN;
	volatile int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MAX;
	volatile int64_t t45 = -509924421927539700LL;

	t45 = ((x253*(x254-x255))&x256);

	if (t45 != 9223372036850630528LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x257 = 147U;
	int16_t x258 = INT16_MIN;
	volatile uint32_t x260 = 1718745U;
	int64_t t46 = -7212698LL;

	t46 = ((x257*(x258-x259))&x260);

	if (t46 != 1179793LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x263 = 1U;
	int64_t x264 = -3538254LL;

	t47 = ((x261*(x262-x263))&x264);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x265 = UINT8_MAX;
	static int16_t x266 = 10622;
	int8_t x267 = -1;
	volatile int64_t x268 = -330183LL;
	int64_t t48 = 2354454741178611641LL;

	t48 = ((x265*(x266-x267))&x268);

	if (t48 != 2642945LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x269 = 714996648U;
	uint32_t x271 = 1U;
	int64_t x272 = 53287119717234222LL;

	t49 = ((x269*(x270-x271))&x272);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x273 = 392U;
	static volatile uint8_t x274 = 11U;
	static int64_t x276 = INT64_MIN;

	t50 = ((x273*(x274-x275))&x276);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x282 = -923;
	volatile uint8_t x284 = UINT8_MAX;
	int64_t t51 = -287209909705LL;

	t51 = ((x281*(x282-x283))&x284);

	if (t51 != 27LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x293 = 283U;
	uint64_t x294 = 2553LLU;
	uint8_t x295 = 76U;
	int8_t x296 = -1;
	uint64_t t52 = 201482LLU;

	t52 = ((x293*(x294-x295))&x296);

	if (t52 != 700991LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x300 = INT16_MAX;
	static volatile uint64_t t53 = 30467479858478LLU;

	t53 = ((x297*(x298-x299))&x300);

	if (t53 != 6887LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x303 = INT8_MAX;

	t54 = ((x301*(x302-x303))&x304);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x305 = INT32_MIN;
	static uint32_t x306 = UINT32_MAX;
	volatile int32_t x307 = INT32_MIN;
	static uint32_t x308 = UINT32_MAX;
	uint32_t t55 = 83704421U;

	t55 = ((x305*(x306-x307))&x308);

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 1576428LLU;
	static int16_t x312 = INT16_MIN;
	volatile uint64_t t56 = 4550257326143953609LLU;

	t56 = ((x309*(x310-x311))&x312);

	if (t56 != 2149056512LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x317 = 3874;
	uint8_t x318 = UINT8_MAX;
	static int64_t x320 = -259902226497LL;
	static volatile int64_t t57 = -759407314817665927LL;

	t57 = ((x317*(x318-x319))&x320);

	if (t57 != 430336LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x321 = INT64_MIN;
	static uint64_t x322 = UINT64_MAX;
	int8_t x324 = -27;

	t58 = ((x321*(x322-x323))&x324);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x325 = 8749U;
	int32_t x326 = -156151824;
	uint64_t x327 = UINT64_MAX;
	volatile uint64_t t59 = 15493878880591LLU;

	t59 = ((x325*(x326-x327))&x328);

	if (t59 != 18446742707537252189LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x331 = 79388166;
	static int16_t x332 = INT16_MAX;
	int32_t t60 = 372808;

	t60 = ((x329*(x330-x331))&x332);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = 3482;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = -133;
	int64_t x336 = 78LL;

	t61 = ((x333*(x334-x335))&x336);

	if (t61 != 72LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x337 = -2;
	uint64_t x338 = 2887608421094LLU;
	static int16_t x339 = 7;
	volatile int8_t x340 = -2;
	uint64_t t62 = 11328LLU;

	t62 = ((x337*(x338-x339))&x340);

	if (t62 != 18446738298492709442LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x341 = 62LLU;
	static int8_t x343 = INT8_MIN;
	int64_t x344 = 48524LL;
	volatile uint64_t t63 = 156357LLU;

	t63 = ((x341*(x342-x343))&x344);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x345 = 7492U;
	uint64_t x347 = 457268187145LLU;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t64 = 7LLU;

	t64 = ((x345*(x346-x347))&x348);

	if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x351 = -1;
	static volatile int32_t x352 = INT32_MAX;
	int32_t t65 = 41710508;

	t65 = ((x349*(x350-x351))&x352);

	if (t65 != 6418) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x355 = 37;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t66 = 86LLU;

	t66 = ((x353*(x354-x355))&x356);

	if (t66 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x357 = 47;
	uint16_t x358 = 23782U;
	static uint8_t x359 = 0U;
	volatile int64_t x360 = -1LL;
	volatile int64_t t67 = 113169321471LL;

	t67 = ((x357*(x358-x359))&x360);

	if (t67 != 1117754LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = -1;
	uint16_t x362 = 13283U;
	int8_t x363 = -54;
	static int8_t x364 = INT8_MIN;
	int32_t t68 = 394;

	t68 = ((x361*(x362-x363))&x364);

	if (t68 != -13440) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x365 = UINT64_MAX;
	uint32_t x367 = 14391402U;
	static volatile uint64_t t69 = 1LLU;

	t69 = ((x365*(x366-x367))&x368);

	if (t69 != 18446744069428975488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	static int32_t x372 = INT32_MAX;
	uint64_t t70 = 20879422035LLU;

	t70 = ((x369*(x370-x371))&x372);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x374 = INT64_MAX;
	int32_t x375 = 13652546;
	int8_t x376 = INT8_MIN;

	t71 = ((x373*(x374-x375))&x376);

	if (t71 != 9223372036841123200LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x378 = 740743LLU;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 16473915U;
	volatile uint64_t t72 = 463894412144LLU;

	t72 = ((x377*(x378-x379))&x380);

	if (t72 != 529666LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MIN;

	t73 = ((x381*(x382-x383))&x384);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x388 = INT16_MIN;
	int64_t t74 = 425051615LL;

	t74 = ((x385*(x386-x387))&x388);

	if (t74 != 107570561024LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = -1;
	int32_t x391 = -1;
	static int64_t t75 = -41713441494045LL;

	t75 = ((x389*(x390-x391))&x392);

	if (t75 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x393 = 0;
	static int32_t x394 = -1;
	static volatile int32_t x396 = -37899;
	int32_t t76 = -3;

	t76 = ((x393*(x394-x395))&x396);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x401 = 2777290552600LLU;
	uint8_t x402 = UINT8_MAX;
	static int64_t x403 = -521188093151LL;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t77 = 86314716LLU;

	t77 = ((x401*(x402-x403))&x404);

	if (t77 != 11653968249059934208LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x408 = INT32_MIN;
	volatile uint32_t t78 = 52158U;

	t78 = ((x405*(x406-x407))&x408);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x409 = INT16_MIN;
	volatile int16_t x410 = INT16_MIN;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t79 = 302987958514149LLU;

	t79 = ((x409*(x410-x411))&x412);

	if (t79 != 1069547520LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x414 = 0;
	static int16_t x415 = INT16_MIN;
	volatile int64_t x416 = INT64_MIN;
	int64_t t80 = INT64_MIN;

	t80 = ((x413*(x414-x415))&x416);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x418 = -15;
	uint64_t x419 = 1811821LLU;
	volatile uint64_t t81 = 108201071791LLU;

	t81 = ((x417*(x418-x419))&x420);

	if (t81 != 1811836LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x437 = INT16_MAX;
	uint32_t x438 = 463550U;
	uint64_t t82 = 3466LLU;

	t82 = ((x437*(x438-x439))&x440);

	if (t82 != 18446743694049463360LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x441 = INT8_MIN;
	uint32_t x442 = 6567U;
	uint32_t x444 = 242U;
	volatile int64_t t83 = 1LL;

	t83 = ((x441*(x442-x443))&x444);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x445 = INT16_MAX;
	uint16_t x446 = 10784U;
	static uint8_t x447 = 38U;
	static int16_t x448 = INT16_MIN;
	int32_t t84 = 1;

	t84 = ((x445*(x446-x447))&x448);

	if (t84 != 352092160) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x453 = 885;
	static uint32_t x454 = 19725417U;
	int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MIN;
	volatile uint32_t t85 = 5U;

	t85 = ((x453*(x454-x455))&x456);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x457 = INT16_MIN;
	static volatile uint8_t x459 = 0U;
	static int16_t x460 = INT16_MAX;
	static volatile uint64_t t86 = 128170119123LLU;

	t86 = ((x457*(x458-x459))&x460);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x461 = 1LL;
	int8_t x462 = -1;
	int64_t x463 = -1LL;
	uint64_t x464 = 18265584LLU;

	t87 = ((x461*(x462-x463))&x464);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x465 = -177;
	volatile int8_t x466 = INT8_MAX;
	uint32_t x468 = 460U;
	volatile uint32_t t88 = 1U;

	t88 = ((x465*(x466-x467))&x468);

	if (t88 != 384U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x469 = 3217788U;
	static volatile uint32_t x470 = 5U;
	int64_t x471 = -1LL;
	uint32_t x472 = 1763493058U;
	int64_t t89 = 543LL;

	t89 = ((x469*(x470-x471))&x472);

	if (t89 != 17072320LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x473 = 5U;
	int16_t x474 = 2;
	uint32_t x475 = 7601516U;
	volatile int64_t x476 = -1LL;
	volatile int64_t t90 = -136226754050083LL;

	t90 = ((x473*(x474-x475))&x476);

	if (t90 != 4256959726LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = -21;
	static int16_t x478 = INT16_MAX;
	uint64_t x480 = 193841787792382968LLU;
	volatile uint64_t t91 = 6996LLU;

	t91 = ((x477*(x478-x479))&x480);

	if (t91 != 938836008LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x485 = 84U;
	int32_t x486 = -1107782;
	int8_t x487 = 0;
	int64_t x488 = INT64_MIN;
	volatile int64_t t92 = INT64_MIN;

	t92 = ((x485*(x486-x487))&x488);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x490 = INT16_MIN;
	int16_t x491 = -1;
	int64_t x492 = -1410373189335184LL;
	int64_t t93 = -5262898LL;

	t93 = ((x489*(x490-x491))&x492);

	if (t93 != -1410373189337088LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x493 = 4549911;
	volatile uint64_t x494 = UINT64_MAX;
	uint8_t x496 = 35U;
	uint64_t t94 = 1176855425626LLU;

	t94 = ((x493*(x494-x495))&x496);

	if (t94 != 33LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x501 = 18;
	int64_t x502 = -9LL;
	int64_t x504 = INT64_MIN;
	int64_t t95 = INT64_MIN;

	t95 = ((x501*(x502-x503))&x504);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x505 = -6;
	uint64_t x506 = 30945987155044475LLU;
	uint32_t x507 = UINT32_MAX;
	static uint8_t x508 = 1U;
	volatile uint64_t t96 = 3991257990857LLU;

	t96 = ((x505*(x506-x507))&x508);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x509 = INT8_MAX;
	static uint8_t x510 = 11U;
	int32_t x511 = 1;
	volatile int16_t x512 = -1;
	volatile int32_t t97 = 1;

	t97 = ((x509*(x510-x511))&x512);

	if (t97 != 1270) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x517 = 2;
	static int8_t x518 = 10;
	uint16_t x520 = 346U;
	volatile int32_t t98 = 2115;

	t98 = ((x517*(x518-x519))&x520);

	if (t98 != 18) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = -1;
	int8_t x523 = 50;
	uint64_t x524 = 213050544662216858LLU;
	uint64_t t99 = 16771806LLU;

	t99 = ((x521*(x522-x523))&x524);

	if (t99 != 213050544662216714LLU) { NG(); } else { ; }
	
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

