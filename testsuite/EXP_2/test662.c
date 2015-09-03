#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = -1369;
volatile uint64_t x11 = UINT64_MAX;
int8_t x14 = -1;
int8_t x15 = 2;
static int32_t x20 = INT32_MIN;
int64_t t3 = -936LL;
int32_t x25 = INT32_MIN;
static int64_t x28 = -2929140LL;
int32_t x38 = INT32_MIN;
uint64_t x40 = 50LLU;
volatile uint64_t t9 = UINT64_MAX;
uint32_t x51 = 596962242U;
volatile uint32_t x52 = UINT32_MAX;
volatile uint32_t t10 = UINT32_MAX;
static int16_t x54 = INT16_MIN;
static int32_t x56 = INT32_MIN;
volatile uint8_t x69 = 26U;
int32_t x78 = INT32_MAX;
int64_t x85 = -1LL;
int8_t x86 = INT8_MIN;
volatile int64_t t19 = -73797142172LL;
uint32_t x91 = UINT32_MAX;
uint16_t x106 = 1774U;
uint64_t x113 = UINT64_MAX;
int32_t x114 = INT32_MIN;
uint64_t t26 = UINT64_MAX;
int16_t x121 = INT16_MIN;
int8_t x122 = INT8_MIN;
int8_t x124 = INT8_MIN;
uint64_t x125 = 1362248144LLU;
static uint16_t x129 = 1680U;
uint8_t x130 = UINT8_MAX;
uint16_t x134 = 839U;
int32_t x137 = INT32_MIN;
static int8_t x138 = 0;
static int16_t x139 = INT16_MAX;
int64_t t33 = 2117327084787319LL;
int64_t x147 = -29955LL;
static volatile int64_t t36 = -1098LL;
int64_t x163 = INT64_MIN;
int8_t x174 = -1;
int32_t x176 = 11866661;
uint16_t x177 = 8U;
uint32_t x195 = 2640653U;
volatile uint16_t x198 = 12352U;
static uint32_t t45 = 7707037U;
int16_t x204 = INT16_MIN;
static int8_t x212 = -27;
uint16_t x214 = UINT16_MAX;
static uint32_t x222 = UINT32_MAX;
uint32_t x227 = 82810456U;
int16_t x228 = INT16_MIN;
static int16_t x229 = INT16_MAX;
int64_t x230 = INT64_MIN;
int16_t x231 = 2;
static uint8_t x233 = 21U;
static int8_t x242 = -1;
int16_t x245 = INT16_MAX;
uint64_t t56 = 30254275837027966LLU;
int16_t x250 = INT16_MIN;
int32_t t59 = -449701;
int16_t x262 = -1;
uint32_t x269 = 7439U;
uint16_t x271 = UINT16_MAX;
static volatile uint32_t t62 = 551036U;
int64_t x288 = INT64_MAX;
static volatile int64_t t66 = INT64_MAX;
uint64_t t70 = UINT64_MAX;
int64_t x305 = -1734648996LL;
volatile uint16_t x310 = UINT16_MAX;
int64_t t72 = 263349774178LL;
int32_t x316 = INT32_MIN;
int16_t x317 = -1;
static uint64_t x324 = 6860LLU;
int32_t x331 = 119776;
uint64_t x341 = UINT64_MAX;
static int16_t x352 = INT16_MIN;
int16_t x355 = -1;
static volatile uint64_t t82 = 31528074610LLU;
static int32_t x358 = INT32_MIN;
volatile int8_t x359 = INT8_MIN;
int32_t x361 = -1;
int8_t x363 = 1;
int8_t x364 = 1;
int64_t x368 = -1LL;
uint32_t x372 = UINT32_MAX;
static uint32_t t86 = UINT32_MAX;
int32_t x374 = 1;
static volatile int32_t t87 = -106141463;
static int64_t x381 = INT64_MIN;
int64_t x392 = INT64_MAX;
int32_t x400 = INT32_MIN;
static volatile uint16_t x406 = 7180U;
volatile int32_t x414 = INT32_MIN;
uint32_t x416 = UINT32_MAX;
static volatile uint32_t x417 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int16_t x2 = 145;
	uint16_t x3 = UINT16_MAX;
	int64_t t0 = 447976989219LL;

	t0 = ((x1|(x2/x3))|x4);

	if (t0 != -1369LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static volatile uint32_t x10 = UINT32_MAX;
	int16_t x12 = INT16_MIN;
	uint64_t t1 = 48382007240806LLU;

	t1 = ((x9|(x10/x11))|x12);

	if (t1 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 199U;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t2 = -2137;

	t2 = ((x13|(x14/x15))|x16);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	volatile int64_t x18 = -2564636859195343LL;
	uint8_t x19 = 104U;

	t3 = ((x17|(x18/x19))|x20);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	volatile int64_t t4 = -364093028677716LL;

	t4 = ((x25|(x26/x27))|x28);

	if (t4 != -45555LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 421888U;
	static volatile int16_t x30 = -1;
	static int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MAX;
	int64_t t5 = INT64_MAX;

	t5 = ((x29|(x30/x31))|x32);

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x34 = 2120U;
	static volatile int32_t x35 = 1183242;
	int16_t x36 = -1;
	volatile int64_t t6 = -1650028926382840352LL;

	t6 = ((x33|(x34/x35))|x36);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MAX;
	uint32_t x39 = UINT32_MAX;
	uint64_t t7 = 239959LLU;

	t7 = ((x37|(x38/x39))|x40);

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	static volatile int8_t x42 = INT8_MAX;
	int16_t x43 = -15;
	int32_t x44 = 14822241;
	volatile int64_t t8 = -76LL;

	t8 = ((x41|(x42/x43))|x44);

	if (t8 != -7LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	uint64_t x46 = UINT64_MAX;
	uint32_t x47 = 371267U;
	volatile int64_t x48 = 1LL;

	t9 = ((x45|(x46/x47))|x48);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MAX;
	static uint8_t x50 = UINT8_MAX;

	t10 = ((x49|(x50/x51))|x52);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	int16_t x55 = -108;
	static volatile int32_t t11 = -209698;

	t11 = ((x53|(x54/x55))|x56);

	if (t11 != -2147483137) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = UINT32_MAX;
	static volatile int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	static int64_t x60 = -796617389LL;
	static volatile int64_t t12 = -89026LL;

	t12 = ((x57|(x58/x59))|x60);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	static volatile int16_t x62 = -1;
	volatile int64_t x63 = INT64_MIN;
	volatile int16_t x64 = 215;
	static int64_t t13 = -1302035665173854988LL;

	t13 = ((x61|(x62/x63))|x64);

	if (t13 != -2147483433LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 98449872U;
	uint32_t x66 = 10856495U;
	int64_t x67 = 182428903LL;
	int32_t x68 = INT32_MAX;
	static int64_t t14 = 64754013088494LL;

	t14 = ((x65|(x66/x67))|x68);

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = UINT16_MAX;
	volatile int16_t x71 = -1;
	static uint64_t x72 = 6514387086418401063LLU;
	static uint64_t t15 = 1020344667554LLU;

	t15 = ((x69|(x70/x71))|x72);

	if (t15 != 18446744073709508415LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = 2;
	uint16_t x74 = 3U;
	static uint8_t x75 = 3U;
	uint32_t x76 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x73|(x74/x75))|x76);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = 797766278717445684LL;
	volatile uint16_t x79 = UINT16_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t17 = 191262695911LL;

	t17 = ((x77|(x78/x79))|x80);

	if (t17 != -8425605758137297356LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 2;
	static volatile int16_t x82 = -26;
	volatile int32_t x83 = -6;
	int64_t x84 = -1LL;
	volatile int64_t t18 = -12706304324LL;

	t18 = ((x81|(x82/x83))|x84);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;

	t19 = ((x85|(x86/x87))|x88);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 1U;
	uint8_t x90 = 1U;
	uint16_t x92 = UINT16_MAX;
	uint32_t t20 = 1403283U;

	t20 = ((x89|(x90/x91))|x92);

	if (t20 != 65535U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 100U;
	int16_t x94 = -30;
	static uint8_t x95 = 32U;
	static uint32_t x96 = 155389217U;
	uint32_t t21 = 19937659U;

	t21 = ((x93|(x94/x95))|x96);

	if (t21 != 155389285U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	volatile uint8_t x98 = 27U;
	int64_t x99 = INT64_MAX;
	volatile int32_t x100 = INT32_MIN;
	int64_t t22 = 46619556LL;

	t22 = ((x97|(x98/x99))|x100);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -2;
	int32_t x102 = -107613;
	uint8_t x103 = 31U;
	uint16_t x104 = UINT16_MAX;
	int32_t t23 = -18;

	t23 = ((x101|(x102/x103))|x104);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = INT32_MIN;
	int64_t x107 = -6289738LL;
	static volatile uint32_t x108 = 314528760U;
	volatile int64_t t24 = -176624647599LL;

	t24 = ((x105|(x106/x107))|x108);

	if (t24 != -1832954888LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = UINT32_MAX;
	static volatile uint16_t x110 = 1U;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MAX;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = ((x109|(x110/x111))|x112);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x115 = UINT8_MAX;
	volatile int16_t x116 = INT16_MIN;

	t26 = ((x113|(x114/x115))|x116);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 8U;
	int32_t x118 = 866871099;
	uint64_t x119 = 209LLU;
	static int64_t x120 = INT64_MIN;
	uint64_t t27 = 237339LLU;

	t27 = ((x117|(x118/x119))|x120);

	if (t27 != 9223372036858923516LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t28 = 301510351419594377LLU;

	t28 = ((x121|(x122/x123))|x124);

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x126 = 1419950U;
	volatile uint64_t x127 = 177567290660028248LLU;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t29 = 89338LLU;

	t29 = ((x125|(x126/x127))|x128);

	if (t29 != 9223372038217023952LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x131 = INT8_MIN;
	static uint16_t x132 = UINT16_MAX;
	int32_t t30 = -55835;

	t30 = ((x129|(x130/x131))|x132);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 35;
	int16_t x135 = -1;
	int32_t x136 = 15711;
	int32_t t31 = 403722;

	t31 = ((x133|(x134/x135))|x136);

	if (t31 != -513) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x140 = INT8_MIN;
	int32_t t32 = -255514893;

	t32 = ((x137|(x138/x139))|x140);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 7U;
	static int32_t x142 = INT32_MAX;
	uint16_t x143 = UINT16_MAX;
	int64_t x144 = 659245894LL;

	t33 = ((x141|(x142/x143))|x144);

	if (t33 != 659278663LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 8;
	uint32_t x146 = 1452963741U;
	volatile int8_t x148 = -1;
	static int64_t t34 = -63845LL;

	t34 = ((x145|(x146/x147))|x148);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	uint64_t x150 = 30041127LLU;
	static uint8_t x151 = 53U;
	uint16_t x152 = 15U;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x149|(x150/x151))|x152);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MAX;
	int64_t x155 = 94254467605LL;
	uint32_t x156 = 5561U;

	t36 = ((x153|(x154/x155))|x156);

	if (t36 != -9223372036854770247LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 116U;
	int64_t x158 = 4288161092875065164LL;
	uint32_t x159 = 13U;
	int16_t x160 = 2;
	volatile int64_t t37 = -85578507270167951LL;

	t37 = ((x157|(x158/x159))|x160);

	if (t37 != 329858545605774327LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = 308045866512438LL;
	uint8_t x162 = 6U;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x161|(x162/x163))|x164);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = INT32_MIN;
	uint32_t x166 = 30372715U;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	static int64_t t39 = -18354366460LL;

	t39 = ((x165|(x166/x167))|x168);

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = -14;
	static volatile int64_t t40 = 132158372629785LL;

	t40 = ((x169|(x170/x171))|x172);

	if (t40 != -14LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	static volatile uint32_t x175 = 192U;
	uint32_t t41 = 19521U;

	t41 = ((x173|(x174/x175))|x176);

	if (t41 != 4294956917U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MAX;
	static volatile int8_t x179 = INT8_MIN;
	static uint64_t x180 = 2400170LLU;
	volatile uint64_t t42 = 14LLU;

	t42 = ((x177|(x178/x179))|x180);

	if (t42 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x185 = UINT64_MAX;
	uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x185|(x186/x187))|x188);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MAX;
	int32_t x196 = INT32_MIN;
	volatile int64_t t44 = -2510LL;

	t44 = ((x193|(x194/x195))|x196);

	if (t44 != -7964LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 96U;
	uint32_t x199 = 13U;
	static int8_t x200 = -20;

	t45 = ((x197|(x198/x199))|x200);

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 1028461U;
	int8_t x202 = INT8_MIN;
	static int16_t x203 = INT16_MIN;
	uint32_t t46 = 37715U;

	t46 = ((x201|(x202/x203))|x204);

	if (t46 != 4294947181U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x205 = -1260;
	volatile int32_t x206 = INT32_MAX;
	volatile uint16_t x207 = 71U;
	static uint32_t x208 = 12U;
	static uint32_t t47 = 40029123U;

	t47 = ((x205|(x206/x207))|x208);

	if (t47 != 4294967164U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 48U;
	uint8_t x210 = UINT8_MAX;
	static uint32_t x211 = 217602U;
	static uint32_t t48 = 0U;

	t48 = ((x209|(x210/x211))|x212);

	if (t48 != 4294967285U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x213 = 32U;
	volatile uint32_t x215 = 854935859U;
	volatile int16_t x216 = INT16_MAX;
	uint32_t t49 = 22U;

	t49 = ((x213|(x214/x215))|x216);

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 92U;
	uint16_t x219 = UINT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t50 = INT32_MIN;

	t50 = ((x217|(x218/x219))|x220);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	int32_t x224 = -1;
	int64_t t51 = 1006024848LL;

	t51 = ((x221|(x222/x223))|x224);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x225 = 937408451U;
	static int64_t x226 = INT64_MIN;
	static int64_t t52 = 1032281901618288LL;

	t52 = ((x225|(x226/x227))|x228);

	if (t52 != -29LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x232 = 33U;
	volatile int64_t t53 = -414LL;

	t53 = ((x229|(x230/x231))|x232);

	if (t53 != -4611686018427355137LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = INT8_MIN;
	int32_t x235 = -63411797;
	static int16_t x236 = 3500;
	int32_t t54 = 29;

	t54 = ((x233|(x234/x235))|x236);

	if (t54 != 3517) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x241 = INT32_MIN;
	uint8_t x243 = 1U;
	int8_t x244 = 0;
	int32_t t55 = 1;

	t55 = ((x241|(x242/x243))|x244);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x246 = UINT8_MAX;
	volatile uint64_t x247 = 7LLU;
	int64_t x248 = -22650629573LL;

	t56 = ((x245|(x246/x247))|x248);

	if (t56 != 18446744051058933759LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 193713LLU;
	volatile int8_t x251 = INT8_MIN;
	int32_t x252 = 11687;
	volatile uint64_t t57 = 366651544755LLU;

	t57 = ((x249|(x250/x251))|x252);

	if (t57 != 196023LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x253 = UINT32_MAX;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 688180026415223329LLU;
	static int8_t x256 = INT8_MIN;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x253|(x254/x255))|x256);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x259 = 6;
	int16_t x260 = INT16_MAX;

	t59 = ((x257|(x258/x259))|x260);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x261 = 24U;
	int64_t x263 = INT64_MIN;
	int64_t x264 = -1LL;
	volatile int64_t t60 = 917151941LL;

	t60 = ((x261|(x262/x263))|x264);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	volatile uint16_t x267 = 1981U;
	uint8_t x268 = UINT8_MAX;
	static int32_t t61 = -1621968;

	t61 = ((x265|(x266/x267))|x268);

	if (t61 != -2146399489) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x270 = UINT32_MAX;
	static int16_t x272 = INT16_MIN;

	t62 = ((x269|(x270/x271))|x272);

	if (t62 != 4294941967U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -361;
	int8_t x274 = -1;
	volatile int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t63 = -1894244267368LL;

	t63 = ((x273|(x274/x275))|x276);

	if (t63 != -361LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x277 = 36153U;
	int16_t x278 = 0;
	int16_t x279 = -1;
	int64_t x280 = INT64_MIN;
	int64_t t64 = 798150LL;

	t64 = ((x277|(x278/x279))|x280);

	if (t64 != -9223372036854739655LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x281 = INT16_MIN;
	int64_t x282 = 241376340LL;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = -1;
	volatile int64_t t65 = 7209408748LL;

	t65 = ((x281|(x282/x283))|x284);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x285 = 20U;
	volatile int32_t x286 = 724;
	volatile int64_t x287 = INT64_MAX;

	t66 = ((x285|(x286/x287))|x288);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x289 = -196109253;
	uint32_t x290 = 74U;
	static int64_t x291 = 38444LL;
	uint8_t x292 = UINT8_MAX;
	static volatile int64_t t67 = 3081599LL;

	t67 = ((x289|(x290/x291))|x292);

	if (t67 != -196109057LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	uint32_t x296 = 7122983U;
	int64_t t68 = 193290333092LL;

	t68 = ((x293|(x294/x295))|x296);

	if (t68 != -20313LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x297 = 45U;
	int8_t x298 = -1;
	uint64_t x299 = 33450517LLU;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t69 = 4858443LLU;

	t69 = ((x297|(x298/x299))|x300);

	if (t69 != 9223372588318422061LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = UINT32_MAX;
	int16_t x302 = INT16_MAX;
	static uint64_t x303 = 5656631028LLU;
	int8_t x304 = -1;

	t70 = ((x301|(x302/x303))|x304);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x306 = -1806908246068LL;
	int64_t x307 = INT64_MAX;
	static volatile int16_t x308 = 0;
	volatile int64_t t71 = 28810040296095605LL;

	t71 = ((x305|(x306/x307))|x308);

	if (t71 != -1734648996LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = -52;
	static int16_t x311 = -7484;
	volatile int64_t x312 = INT64_MIN;

	t72 = ((x309|(x310/x311))|x312);

	if (t72 != -4LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x313 = 47U;
	static int32_t x314 = 26166958;
	int64_t x315 = 675564952102289605LL;
	static volatile int64_t t73 = -1750001020831884LL;

	t73 = ((x313|(x314/x315))|x316);

	if (t73 != -2147483601LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = 5380;
	static int16_t x319 = -1;
	uint64_t x320 = 747718LLU;
	static uint64_t t74 = UINT64_MAX;

	t74 = ((x317|(x318/x319))|x320);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x321 = 4886U;
	int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MAX;
	uint64_t t75 = 261870690862LLU;

	t75 = ((x321|(x322/x323))|x324);

	if (t75 != 4294967295LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = 3LL;
	static int8_t x326 = INT8_MAX;
	uint32_t x327 = 97695859U;
	volatile uint16_t x328 = 7528U;
	volatile int64_t t76 = -15014LL;

	t76 = ((x325|(x326/x327))|x328);

	if (t76 != 7531LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = 110;
	uint32_t x330 = UINT32_MAX;
	volatile uint64_t x332 = 7400LLU;
	volatile uint64_t t77 = 7632694LLU;

	t77 = ((x329|(x330/x331))|x332);

	if (t77 != 40190LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 25U;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int32_t x336 = -464;
	int64_t t78 = -7116876LL;

	t78 = ((x333|(x334/x335))|x336);

	if (t78 != -455LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x342 = -1;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x341|(x342/x343))|x344);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = 4513LLU;
	static uint32_t x346 = 41800U;
	static uint16_t x347 = UINT16_MAX;
	volatile int64_t x348 = -1LL;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x345|(x346/x347))|x348);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x349 = 0;
	volatile uint16_t x350 = 14U;
	uint32_t x351 = 6945082U;
	volatile uint32_t t81 = 31517U;

	t81 = ((x349|(x350/x351))|x352);

	if (t81 != 4294934528U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 3262U;
	volatile uint16_t x354 = 199U;
	uint64_t x356 = 250932742570497LLU;

	t82 = ((x353|(x354/x355))|x356);

	if (t82 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = 737157232;
	static uint32_t x360 = UINT32_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x357|(x358/x359))|x360);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x362 = INT8_MAX;
	int32_t t84 = -611;

	t84 = ((x361|(x362/x363))|x364);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x365 = INT32_MIN;
	static volatile int16_t x366 = INT16_MIN;
	int64_t x367 = 5769963140LL;
	int64_t t85 = 35LL;

	t85 = ((x365|(x366/x367))|x368);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = -271;
	int8_t x370 = 0;
	uint32_t x371 = 46833187U;

	t86 = ((x369|(x370/x371))|x372);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = INT8_MIN;
	volatile int32_t x375 = -1;
	uint16_t x376 = 759U;

	t87 = ((x373|(x374/x375))|x376);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	volatile uint32_t x380 = UINT32_MAX;
	int64_t t88 = INT64_MAX;

	t88 = ((x377|(x378/x379))|x380);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = -402;
	int8_t x384 = INT8_MAX;
	static int64_t t89 = 22677671360057LL;

	t89 = ((x381|(x382/x383))|x384);

	if (t89 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MIN;
	static uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x389|(x390/x391))|x392);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = 1;
	int16_t x394 = INT16_MAX;
	volatile uint8_t x395 = 3U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x393|(x394/x395))|x396);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x397 = 57LL;
	volatile uint8_t x398 = 113U;
	int16_t x399 = INT16_MIN;
	volatile int64_t t92 = -2604LL;

	t92 = ((x397|(x398/x399))|x400);

	if (t92 != -2147483591LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MIN;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = 2;
	static uint32_t x404 = 1120389U;
	static volatile uint32_t t93 = 13119812U;

	t93 = ((x401|(x402/x403))|x404);

	if (t93 != 2148630527U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -1;
	int32_t x407 = INT32_MAX;
	uint16_t x408 = 222U;
	volatile int32_t t94 = -727677;

	t94 = ((x405|(x406/x407))|x408);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x409 = UINT64_MAX;
	volatile uint8_t x410 = UINT8_MAX;
	uint64_t x411 = 23LLU;
	volatile int16_t x412 = INT16_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x409|(x410/x411))|x412);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 1U;
	int32_t x415 = 7469360;
	static volatile uint32_t t96 = UINT32_MAX;

	t96 = ((x413|(x414/x415))|x416);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x418 = UINT16_MAX;
	static volatile int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = ((x417|(x418/x419))|x420);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MIN;
	int64_t x422 = -83872976LL;
	volatile uint32_t x423 = 48762U;
	int64_t x424 = -1LL;
	int64_t t98 = 4544832624LL;

	t98 = ((x421|(x422/x423))|x424);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = 16;
	uint16_t x426 = 4023U;
	int32_t x427 = 725130;
	int32_t x428 = INT32_MAX;
	volatile int32_t t99 = INT32_MAX;

	t99 = ((x425|(x426/x427))|x428);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

