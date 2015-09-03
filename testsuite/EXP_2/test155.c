#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t3 = UINT64_MAX;
int32_t x25 = INT32_MIN;
uint8_t x28 = UINT8_MAX;
static int32_t x30 = -1;
int16_t x42 = INT16_MAX;
uint64_t x50 = 8LLU;
uint64_t x51 = UINT64_MAX;
uint8_t x56 = 1U;
uint16_t x61 = 16U;
static volatile int32_t x62 = -1;
volatile uint32_t t15 = 12U;
static uint64_t x87 = UINT64_MAX;
volatile uint64_t t17 = 6216848404450204LLU;
static volatile int16_t x89 = INT16_MAX;
volatile int8_t x90 = INT8_MIN;
int16_t x91 = -89;
uint32_t x93 = 10U;
static int64_t t19 = -3333LL;
uint64_t t21 = 7577011818913767082LLU;
volatile int16_t x106 = -1;
static uint8_t x107 = 28U;
uint8_t x112 = 75U;
int16_t x114 = 0;
volatile int64_t t24 = 20LL;
int8_t x133 = INT8_MIN;
volatile int64_t t29 = 315511348027006676LL;
uint8_t x138 = UINT8_MAX;
int64_t x145 = -7229898964660988LL;
static int16_t x148 = INT16_MIN;
uint8_t x154 = 10U;
static int8_t x155 = INT8_MIN;
volatile uint8_t x156 = 0U;
int64_t x157 = 370686309123593LL;
uint64_t t35 = 7144292955613LLU;
int16_t x163 = INT16_MIN;
int8_t x165 = -1;
uint64_t t37 = UINT64_MAX;
uint8_t x170 = UINT8_MAX;
int16_t x202 = 826;
static uint64_t x205 = UINT64_MAX;
static volatile uint64_t x206 = 37680007512669888LLU;
int32_t x207 = INT32_MIN;
volatile uint64_t t45 = UINT64_MAX;
int64_t x210 = -750974784949128LL;
int32_t x212 = -1;
uint32_t x214 = 243U;
uint64_t x216 = UINT64_MAX;
static volatile uint64_t x220 = 543LLU;
static uint32_t x228 = UINT32_MAX;
static int64_t x232 = INT64_MIN;
int64_t t55 = -32021569LL;
static uint32_t x254 = 487580U;
int64_t t58 = -3455704850226728159LL;
int32_t x265 = INT32_MIN;
uint64_t t59 = UINT64_MAX;
int16_t x274 = -1;
volatile uint32_t t60 = UINT32_MAX;
int16_t x280 = INT16_MIN;
int32_t x289 = 1035705890;
volatile int16_t x299 = -3;
uint16_t x300 = 8829U;
static int8_t x302 = -52;
int16_t x306 = INT16_MIN;
volatile uint16_t x310 = 71U;
uint64_t x316 = 1155830676136LLU;
int32_t x317 = 124;
static int16_t x318 = INT16_MIN;
volatile int16_t x322 = INT16_MIN;
int8_t x323 = INT8_MIN;
int8_t x324 = INT8_MIN;
volatile uint64_t t71 = UINT64_MAX;
int32_t t73 = -713552;
uint32_t x333 = 791222275U;
volatile uint16_t x334 = UINT16_MAX;
uint32_t t74 = 6818U;
static int16_t x340 = INT16_MIN;
int16_t x345 = 40;
int8_t x353 = INT8_MIN;
int32_t x355 = INT32_MAX;
static int32_t x358 = -1;
int16_t x367 = 12;
volatile uint64_t x390 = 1079687443566514LLU;
int16_t x391 = 0;
static volatile int8_t x392 = INT8_MIN;
uint64_t x393 = UINT64_MAX;
int16_t x396 = INT16_MAX;
static uint32_t x414 = 1U;
int64_t x425 = -1LL;
int32_t x428 = INT32_MAX;
volatile uint64_t t94 = UINT64_MAX;
static int16_t x448 = -1;
int64_t x451 = INT64_MAX;
volatile uint32_t x452 = 1188819U;
static volatile int64_t t98 = 1546LL;
int64_t x453 = -122305949LL;


void f0(void) {
	static int16_t x1 = -473;
	int64_t x2 = INT64_MIN;
	int8_t x3 = 1;
	uint16_t x4 = 3U;
	int64_t t0 = -61LL;

	t0 = ((x1|(x2+x3))|x4);

	if (t0 != -473LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = UINT8_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	static uint32_t t1 = UINT32_MAX;

	t1 = ((x5|(x6+x7))|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 1879934067625664LL;
	uint16_t x10 = 10U;
	uint16_t x11 = 1U;
	uint64_t x12 = 200755740824255LLU;
	static volatile uint64_t t2 = 394931LLU;

	t2 = ((x9|(x10+x11))|x12);

	if (t2 != 1899811521388287LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int16_t x14 = 7379;
	static int16_t x15 = INT16_MAX;
	volatile uint64_t x16 = UINT64_MAX;

	t3 = ((x13|(x14+x15))|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int32_t x18 = 71372;
	static int8_t x19 = INT8_MIN;
	static volatile uint64_t x20 = 23540882262279LLU;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = ((x17|(x18+x19))|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 15U;
	uint8_t x22 = UINT8_MAX;
	static int8_t x23 = INT8_MAX;
	uint16_t x24 = 9U;
	int32_t t5 = 148423;

	t5 = ((x21|(x22+x23))|x24);

	if (t5 != 383) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int8_t x27 = INT8_MIN;
	volatile int32_t t6 = 14832276;

	t6 = ((x25|(x26+x27))|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int16_t x31 = -1;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 7688;

	t7 = ((x29|(x30+x31))|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int8_t x34 = 3;
	int32_t x35 = -1;
	static uint8_t x36 = 18U;
	int32_t t8 = 75727;

	t8 = ((x33|(x34+x35))|x36);

	if (t8 != -2147483630) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int64_t x43 = -7056551632008LL;
	int64_t x44 = INT64_MAX;
	static int64_t t9 = 22118LL;

	t9 = ((x41|(x42+x43))|x44);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	uint16_t x52 = 42U;
	uint64_t t10 = UINT64_MAX;

	t10 = ((x49|(x50+x51))|x52);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	volatile uint64_t x54 = 131867515024473889LLU;
	uint32_t x55 = 394541435U;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x53|(x54+x55))|x56);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x63 = 73U;
	uint8_t x64 = 31U;
	volatile uint32_t t12 = 125234047U;

	t12 = ((x61|(x62+x63))|x64);

	if (t12 != 95U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = INT16_MAX;
	int8_t x66 = -1;
	uint8_t x67 = UINT8_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t13 = 38;

	t13 = ((x65|(x66+x67))|x68);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 28U;
	static int16_t x74 = -49;
	int16_t x75 = 2237;
	static int16_t x76 = 6;
	volatile uint32_t t14 = 688459U;

	t14 = ((x73|(x74+x75))|x76);

	if (t14 != 2206U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x77 = 8U;
	int16_t x78 = -1;
	int8_t x79 = INT8_MAX;
	volatile int32_t x80 = INT32_MIN;

	t15 = ((x77|(x78+x79))|x80);

	if (t15 != 2147483774U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x81 = INT64_MAX;
	volatile int8_t x82 = INT8_MIN;
	volatile int32_t x83 = -10399665;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x81|(x82+x83))|x84);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MIN;
	static int8_t x86 = INT8_MIN;
	int32_t x88 = INT32_MIN;

	t17 = ((x85|(x86+x87))|x88);

	if (t17 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x92 = -1;
	static int32_t t18 = -12253413;

	t18 = ((x89|(x90+x91))|x92);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x94 = -324835LL;
	int64_t x95 = INT64_MAX;
	int32_t x96 = -1;

	t19 = ((x93|(x94+x95))|x96);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x97 = INT32_MIN;
	static uint16_t x98 = UINT16_MAX;
	static uint64_t x99 = 4855519061LLU;
	static int8_t x100 = INT8_MAX;
	volatile uint64_t t20 = 174908522399LLU;

	t20 = ((x97|(x98+x99))|x100);

	if (t20 != 18446744072122685311LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 55U;
	uint64_t x102 = 387746974LLU;
	int32_t x103 = INT32_MIN;
	int32_t x104 = 580557929;

	t21 = ((x101|(x102+x103))|x104);

	if (t21 != 18446744072495209727LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = UINT8_MAX;
	static int16_t x108 = INT16_MIN;
	int32_t t22 = 0;

	t22 = ((x105|(x106+x107))|x108);

	if (t22 != -32513) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = 483U;
	volatile int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;
	static volatile int64_t t23 = 4811667126564916LL;

	t23 = ((x109|(x110+x111))|x112);

	if (t23 != -32769LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -95;
	static int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;

	t24 = ((x113|(x114+x115))|x116);

	if (t24 != -95LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MAX;
	volatile int16_t x118 = -104;
	static volatile uint8_t x119 = 5U;
	uint32_t x120 = 1468275U;
	uint32_t t25 = UINT32_MAX;

	t25 = ((x117|(x118+x119))|x120);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = 343067165615125290LL;
	int32_t x122 = -855496;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	volatile int64_t t26 = -75829193437414LL;

	t26 = ((x121|(x122+x123))|x124);

	if (t26 != -3142LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 92U;
	int16_t x126 = -1;
	int32_t x127 = INT32_MAX;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t27 = -586;

	t27 = ((x125|(x126+x127))|x128);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 73121432737605LLU;
	volatile uint64_t x130 = 1931249273587LLU;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t28 = 16085135651LLU;

	t28 = ((x129|(x130+x131))|x132);

	if (t28 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = INT8_MIN;
	int64_t x135 = -4419336240570989LL;
	volatile int16_t x136 = -1;

	t29 = ((x133|(x134+x135))|x136);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MAX;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	static int64_t t30 = INT64_MAX;

	t30 = ((x137|(x138+x139))|x140);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile int8_t x142 = INT8_MAX;
	static volatile int8_t x143 = 32;
	volatile uint16_t x144 = 6U;
	int32_t t31 = -112021;

	t31 = ((x141|(x142+x143))|x144);

	if (t31 != -97) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MAX;
	int64_t t32 = 661529LL;

	t32 = ((x145|(x146+x147))|x148);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	int64_t x151 = 372629451347LL;
	volatile int32_t x152 = -5523;
	volatile int64_t t33 = 324693873LL;

	t33 = ((x149|(x150+x151))|x152);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = 2802;
	volatile int32_t t34 = -1072229194;

	t34 = ((x153|(x154+x155))|x156);

	if (t34 != -6) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = INT64_MIN;
	uint64_t x160 = 3233671249LLU;

	t35 = ((x157|(x158+x159))|x160);

	if (t35 != 9223742726388842495LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x161 = 1101126LLU;
	uint16_t x162 = UINT16_MAX;
	int16_t x164 = -10163;
	static uint64_t t36 = UINT64_MAX;

	t36 = ((x161|(x162+x163))|x164);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = 8;
	static int32_t x168 = 32135;

	t37 = ((x165|(x166+x167))|x168);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	static int64_t x171 = INT64_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int64_t t38 = 1LL;

	t38 = ((x169|(x170+x171))|x172);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = -1;
	uint8_t x174 = 5U;
	uint8_t x175 = 2U;
	uint64_t x176 = 192898052958836LLU;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x173|(x174+x175))|x176);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = INT32_MIN;
	int16_t x178 = -1;
	static volatile int16_t x179 = 63;
	int32_t x180 = -41;
	int32_t t40 = 3080;

	t40 = ((x177|(x178+x179))|x180);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 250470U;
	volatile uint64_t x184 = 18LLU;
	static volatile uint64_t t41 = 16303615625LLU;

	t41 = ((x181|(x182+x183))|x184);

	if (t41 != 2147745791LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x185 = INT64_MIN;
	int8_t x186 = -21;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = -1LL;
	volatile int64_t t42 = -547697610772LL;

	t42 = ((x185|(x186+x187))|x188);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 994996668353054886LLU;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t43 = 145308LLU;

	t43 = ((x193|(x194+x195))|x196);

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x203 = -1;
	int16_t x204 = -31;
	volatile int32_t t44 = 1;

	t44 = ((x201|(x202+x203))|x204);

	if (t44 != -7) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x208 = UINT8_MAX;

	t45 = ((x205|(x206+x207))|x208);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 108U;
	uint32_t x211 = 2U;
	volatile int64_t t46 = -231496873767659525LL;

	t46 = ((x209|(x210+x211))|x212);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = -215;
	static volatile int64_t x215 = INT64_MIN;
	uint64_t t47 = UINT64_MAX;

	t47 = ((x213|(x214+x215))|x216);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = 371U;
	int16_t x218 = -203;
	int32_t x219 = INT32_MAX;
	uint64_t t48 = 261047665731221637LLU;

	t48 = ((x217|(x218+x219))|x220);

	if (t48 != 2147483519LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MAX;
	static uint64_t x222 = 3436790263854291LLU;
	uint32_t x223 = UINT32_MAX;
	volatile int8_t x224 = -1;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x221|(x222+x223))|x224);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = 0;
	int8_t x226 = 13;
	uint16_t x227 = UINT16_MAX;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = ((x225|(x226+x227))|x228);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x229 = INT8_MIN;
	volatile int16_t x230 = 731;
	int16_t x231 = INT16_MIN;
	static int64_t t51 = 76617LL;

	t51 = ((x229|(x230+x231))|x232);

	if (t51 != -37LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = 385123U;
	int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = INT16_MIN;
	volatile uint32_t t52 = 462147U;

	t52 = ((x233|(x234+x235))|x236);

	if (t52 != 4294967167U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 1;
	volatile int64_t x238 = INT64_MIN;
	uint8_t x239 = 30U;
	int64_t x240 = -1LL;
	int64_t t53 = -582191184878643LL;

	t53 = ((x237|(x238+x239))|x240);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MAX;
	int16_t x243 = 121;
	static uint32_t x244 = 178U;
	uint32_t t54 = 1860414U;

	t54 = ((x241|(x242+x243))|x244);

	if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x245 = INT16_MAX;
	volatile int64_t x246 = INT64_MIN;
	int16_t x247 = 413;
	volatile int16_t x248 = INT16_MAX;

	t55 = ((x245|(x246+x247))|x248);

	if (t55 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x250 = 14480813601506LLU;
	static int8_t x251 = -7;
	int8_t x252 = INT8_MIN;
	static uint64_t t56 = 29272900LLU;

	t56 = ((x249|(x250+x251))|x252);

	if (t56 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x253 = 289345734;
	int64_t x255 = 69977795504079LL;
	uint32_t x256 = 14U;
	int64_t t57 = 3428000160LL;

	t57 = ((x253|(x254+x255))|x256);

	if (t57 != 69977797236975LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 145581U;
	uint16_t x262 = 18U;
	int16_t x263 = INT16_MAX;
	int64_t x264 = 503425412LL;

	t58 = ((x261|(x262+x263))|x264);

	if (t58 != 503560637LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x266 = INT64_MAX;
	uint64_t x267 = 1LLU;
	static int16_t x268 = -1;

	t59 = ((x265|(x266+x267))|x268);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = UINT32_MAX;
	static volatile uint16_t x275 = UINT16_MAX;
	static uint16_t x276 = 1U;

	t60 = ((x273|(x274+x275))|x276);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = -11;
	volatile int32_t x278 = 232430937;
	static uint32_t x279 = 14788U;
	static volatile uint32_t t61 = 770735U;

	t61 = ((x277|(x278+x279))|x280);

	if (t61 != 4294967293U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = -2032650;
	static volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x285|(x286+x287))|x288);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x290 = -439;
	uint64_t x291 = 838862449593650LLU;
	int16_t x292 = -28;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x289|(x290+x291))|x292);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 2529041308LLU;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = -1;
	static volatile uint32_t x296 = 46006U;
	uint64_t t64 = 132LLU;

	t64 = ((x293|(x294+x295))|x296);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MIN;
	static int32_t t65 = -102492050;

	t65 = ((x297|(x298+x299))|x300);

	if (t65 != -131) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x303 = 116735928353915730LL;
	static uint64_t x304 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x301|(x302+x303))|x304);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 1LLU;
	static int16_t x307 = INT16_MIN;
	static int32_t x308 = INT32_MIN;
	volatile uint64_t t67 = 173603935516193276LLU;

	t67 = ((x305|(x306+x307))|x308);

	if (t67 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x309 = INT64_MIN;
	int8_t x311 = 1;
	uint32_t x312 = 525355006U;
	volatile int64_t t68 = -7335LL;

	t68 = ((x309|(x310+x311))|x312);

	if (t68 != -9223372036329420802LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	int16_t x315 = 360;
	volatile uint64_t t69 = 653312LLU;

	t69 = ((x313|(x314+x315))|x316);

	if (t69 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x319 = 0LL;
	int64_t x320 = 50481870840LL;
	volatile int64_t t70 = -258348486163LL;

	t70 = ((x317|(x318+x319))|x320);

	if (t70 != -18436LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = UINT64_MAX;

	t71 = ((x321|(x322+x323))|x324);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x325 = UINT32_MAX;
	volatile int16_t x326 = INT16_MIN;
	volatile uint8_t x327 = 3U;
	uint16_t x328 = UINT16_MAX;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = ((x325|(x326+x327))|x328);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = 2291U;
	int8_t x332 = INT8_MIN;

	t73 = ((x329|(x330+x331))|x332);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x335 = 390063U;
	uint16_t x336 = 231U;

	t74 = ((x333|(x334+x335))|x336);

	if (t74 != 791673839U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x337 = -8;
	int8_t x338 = -14;
	int64_t x339 = -146964767501143LL;
	int64_t t75 = 28444112982LL;

	t75 = ((x337|(x338+x339))|x340);

	if (t75 != -5LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x346 = 61;
	volatile uint8_t x347 = 16U;
	static int8_t x348 = -1;
	volatile int32_t t76 = 0;

	t76 = ((x345|(x346+x347))|x348);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x354 = INT32_MIN;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t77 = -3;

	t77 = ((x353|(x354+x355))|x356);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x357 = 8414U;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t78 = 13;

	t78 = ((x357|(x358+x359))|x360);

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = INT32_MIN;
	static int16_t x362 = INT16_MAX;
	int32_t x363 = -3;
	int8_t x364 = INT8_MIN;
	int32_t t79 = 240;

	t79 = ((x361|(x362+x363))|x364);

	if (t79 != -4) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x365 = UINT64_MAX;
	static int32_t x366 = INT32_MIN;
	volatile int64_t x368 = -56935LL;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x365|(x366+x367))|x368);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MIN;
	uint64_t x374 = 626LLU;
	volatile int64_t x375 = INT64_MIN;
	volatile int8_t x376 = 3;
	volatile uint64_t t81 = 293599703LLU;

	t81 = ((x373|(x374+x375))|x376);

	if (t81 != 18446744073709519475LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = 27;
	int16_t x382 = 4;
	uint64_t x383 = 2051925488886LLU;
	uint8_t x384 = UINT8_MAX;
	uint64_t t82 = 862146LLU;

	t82 = ((x381|(x382+x383))|x384);

	if (t82 != 2051925488895LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = 7;
	volatile uint8_t x386 = 4U;
	static int32_t x387 = -1;
	int64_t x388 = INT64_MIN;
	volatile int64_t t83 = -774LL;

	t83 = ((x385|(x386+x387))|x388);

	if (t83 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x389 = 635590479074LLU;
	volatile uint64_t t84 = 6753490958LLU;

	t84 = ((x389|(x390+x391))|x392);

	if (t84 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x394 = INT16_MAX;
	uint32_t x395 = 47U;
	static uint64_t t85 = UINT64_MAX;

	t85 = ((x393|(x394+x395))|x396);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = 4;
	int8_t x398 = 1;
	int64_t x399 = INT64_MIN;
	volatile uint16_t x400 = 45U;
	volatile int64_t t86 = -178239604LL;

	t86 = ((x397|(x398+x399))|x400);

	if (t86 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = INT8_MAX;
	static int8_t x406 = INT8_MIN;
	int8_t x407 = 3;
	int8_t x408 = INT8_MAX;
	volatile int32_t t87 = -57879862;

	t87 = ((x405|(x406+x407))|x408);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x409 = 1718U;
	static volatile uint8_t x410 = 1U;
	static int8_t x411 = INT8_MAX;
	int32_t x412 = 3700358;
	int32_t t88 = -12;

	t88 = ((x409|(x410+x411))|x412);

	if (t88 != 3700406) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x415 = 91552;
	int64_t x416 = INT64_MIN;
	int64_t t89 = 955681942001LL;

	t89 = ((x413|(x414+x415))|x416);

	if (t89 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x417 = INT8_MAX;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = 15;
	int64_t x420 = INT64_MIN;
	volatile int64_t t90 = 786394933284321606LL;

	t90 = ((x417|(x418+x419))|x420);

	if (t90 != -9223372036854775425LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = INT64_MIN;
	volatile uint8_t x422 = UINT8_MAX;
	volatile int16_t x423 = -1;
	int32_t x424 = -20;
	int64_t t91 = -416916241847162LL;

	t91 = ((x421|(x422+x423))|x424);

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x426 = -1977558769011093786LL;
	int32_t x427 = INT32_MAX;
	static volatile int64_t t92 = -392075295530202LL;

	t92 = ((x425|(x426+x427))|x428);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 2274U;
	static volatile uint16_t x430 = 3301U;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = UINT16_MAX;
	volatile uint32_t t93 = 228U;

	t93 = ((x429|(x430+x431))|x432);

	if (t93 != 65535U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 72U;
	static int64_t x434 = INT64_MIN;
	static uint64_t x435 = UINT64_MAX;
	volatile int32_t x436 = INT32_MIN;

	t94 = ((x433|(x434+x435))|x436);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = -1022399381;
	int16_t x438 = INT16_MAX;
	uint16_t x439 = UINT16_MAX;
	volatile uint64_t x440 = UINT64_MAX;
	uint64_t t95 = UINT64_MAX;

	t95 = ((x437|(x438+x439))|x440);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = INT32_MIN;
	volatile int8_t x442 = 8;
	volatile int64_t x443 = INT64_MIN;
	static int8_t x444 = -5;
	int64_t t96 = -2541270259878LL;

	t96 = ((x441|(x442+x443))|x444);

	if (t96 != -5LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -1;
	int64_t x446 = -1LL;
	int16_t x447 = 11;
	static volatile int64_t t97 = -126625845354179LL;

	t97 = ((x445|(x446+x447))|x448);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = -1LL;
	int32_t x450 = INT32_MIN;

	t98 = ((x449|(x450+x451))|x452);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x454 = -1;
	int32_t x455 = -1;
	static int16_t x456 = INT16_MAX;
	volatile int64_t t99 = -58525323784835LL;

	t99 = ((x453|(x454+x455))|x456);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

