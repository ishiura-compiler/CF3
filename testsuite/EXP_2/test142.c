#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 0;
int32_t t0 = -6198681;
static int64_t x9 = INT64_MIN;
int8_t x10 = INT8_MIN;
int16_t x11 = 73;
uint8_t x18 = UINT8_MAX;
int64_t x20 = INT64_MIN;
int32_t x21 = -1;
int64_t t4 = 2070020LL;
volatile uint64_t t5 = 2112LLU;
int32_t x30 = INT32_MIN;
static volatile int64_t x31 = 436605LL;
int16_t x35 = -7;
static int16_t x36 = -1;
int32_t t7 = -25;
uint32_t x41 = 0U;
static int8_t x47 = 5;
uint16_t x61 = 6246U;
static uint64_t t13 = 1151553471304856254LLU;
volatile int32_t x73 = INT32_MIN;
static int32_t x83 = -62;
uint32_t x84 = 178775543U;
uint64_t t19 = 98LLU;
static int16_t x105 = -1;
uint16_t x107 = 461U;
volatile uint64_t t21 = UINT64_MAX;
static int8_t x110 = -1;
volatile uint8_t x112 = 33U;
static int8_t x114 = INT8_MIN;
volatile uint32_t x116 = 104987630U;
int8_t x118 = INT8_MIN;
uint64_t x119 = 5605LLU;
uint16_t x120 = 5030U;
uint32_t x121 = 26743289U;
int32_t x125 = INT32_MIN;
int16_t x137 = INT16_MIN;
int8_t x138 = INT8_MIN;
volatile int32_t t29 = 5;
static volatile int8_t x143 = 14;
uint64_t x144 = 165446065618LLU;
volatile uint32_t x145 = 1466U;
int16_t x152 = 5;
uint32_t x160 = UINT32_MAX;
static int32_t x165 = 3906604;
int8_t x168 = INT8_MIN;
static int64_t x177 = INT64_MAX;
uint8_t x185 = UINT8_MAX;
int16_t x189 = -3;
int32_t x195 = INT32_MIN;
uint32_t x206 = 2581742U;
uint16_t x210 = UINT16_MAX;
volatile uint64_t t46 = 3146156975911872LLU;
volatile int16_t x213 = INT16_MIN;
volatile int8_t x215 = 44;
uint32_t x222 = UINT32_MAX;
volatile int64_t t48 = -2583268543032944820LL;
static uint8_t x228 = UINT8_MAX;
volatile int32_t t49 = INT32_MAX;
int8_t x232 = INT8_MIN;
uint64_t t50 = 297417552422509692LLU;
static int64_t x233 = INT64_MIN;
static int16_t x234 = -3;
static volatile uint64_t t52 = 1LLU;
uint8_t x257 = 0U;
volatile uint64_t t55 = 15377LLU;
static uint32_t x265 = UINT32_MAX;
int16_t x266 = -5;
volatile uint32_t t57 = 241676U;
int64_t t59 = 1LL;
static volatile int64_t x282 = -2768779LL;
int16_t x283 = 1;
int8_t x287 = 7;
int32_t x288 = 30397568;
int32_t t62 = -24;
volatile int32_t x291 = -1;
static int16_t x295 = INT16_MIN;
int64_t x301 = -65LL;
uint64_t x304 = UINT64_MAX;
static int32_t x305 = INT32_MIN;
static uint64_t x308 = 1LLU;
uint64_t x313 = 1914673257137LLU;
int8_t x319 = INT8_MIN;
uint32_t x340 = UINT32_MAX;
int32_t x343 = -1;
volatile uint64_t x344 = 3196673336162673769LLU;
volatile uint8_t x355 = UINT8_MAX;
int8_t x356 = 17;
int32_t x363 = 63658;
int64_t x366 = 89313837883405668LL;
static uint64_t x369 = 3696LLU;
volatile int8_t x372 = INT8_MIN;
uint8_t x379 = 108U;
int64_t x381 = INT64_MIN;
static int64_t x382 = 8439069464927100LL;
static int8_t x391 = 4;
uint32_t x392 = 169897U;
uint64_t x394 = 455450298467094595LLU;
int8_t x397 = 0;
static int8_t x399 = 7;
uint32_t x408 = 5409595U;
volatile int64_t x412 = 391600251690LL;
int64_t t88 = 0LL;
int64_t x430 = -1LL;
uint64_t x433 = 7679LLU;
volatile int32_t x434 = INT32_MIN;
uint8_t x439 = 5U;
static volatile int32_t t92 = 0;
int64_t x445 = -6323258LL;
uint8_t x452 = UINT8_MAX;
static int16_t x457 = INT16_MAX;
volatile int8_t x459 = INT8_MIN;
static int64_t x462 = -1LL;
int32_t x464 = INT32_MAX;
int16_t x467 = INT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint8_t x3 = 34U;
	int32_t x4 = -1;

	t0 = ((x1&(x2+x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x12 = INT64_MIN;
	static volatile int64_t t1 = INT64_MIN;

	t1 = ((x9&(x10+x11))|x12);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 60372896U;
	int16_t x14 = -11895;
	static int8_t x15 = -33;
	volatile uint16_t x16 = 0U;
	volatile uint32_t t2 = 243212U;

	t2 = ((x13&(x14+x15))|x16);

	if (t2 != 60363040U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int16_t x19 = INT16_MAX;
	int64_t t3 = -10278586237339LL;

	t3 = ((x17&(x18+x19))|x20);

	if (t3 != -9223372036854742912LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MIN;
	int32_t x24 = 57;

	t4 = ((x21&(x22+x23))|x24);

	if (t4 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	int8_t x26 = -6;
	uint64_t x27 = UINT64_MAX;
	static uint16_t x28 = 968U;

	t5 = ((x25&(x26+x27))|x28);

	if (t5 != 18446744073709519816LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int64_t x32 = -1544058610598LL;
	int64_t t6 = -4800134LL;

	t6 = ((x29&(x30+x31))|x32);

	if (t6 != -17826470LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MIN;
	static int16_t x34 = -1;

	t7 = ((x33&(x34+x35))|x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	volatile int16_t x38 = 0;
	static int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = 152;

	t8 = ((x37&(x38+x39))|x40);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MAX;
	static int16_t x44 = 890;
	volatile uint32_t t9 = 14977441U;

	t9 = ((x41&(x42+x43))|x44);

	if (t9 != 890U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 617402LL;
	int16_t x46 = INT16_MAX;
	int8_t x48 = -3;
	volatile int64_t t10 = -51LL;

	t10 = ((x45&(x46+x47))|x48);

	if (t10 != -3LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x49 = 23LL;
	int8_t x50 = INT8_MAX;
	volatile int16_t x51 = INT16_MIN;
	int64_t x52 = 136165997957LL;
	int64_t t11 = -6200966339LL;

	t11 = ((x49&(x50+x51))|x52);

	if (t11 != 136165997975LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MAX;
	uint64_t x54 = 9LLU;
	int8_t x55 = -1;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t12 = 2311273LLU;

	t12 = ((x53&(x54+x55))|x56);

	if (t12 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = 3303U;
	uint32_t x63 = 268013U;
	volatile uint64_t x64 = 27LLU;

	t13 = ((x61&(x62+x63))|x64);

	if (t13 != 95LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MAX;
	volatile int8_t x70 = INT8_MAX;
	static volatile int16_t x71 = -1;
	static uint32_t x72 = 4U;
	uint32_t t14 = 159944503U;

	t14 = ((x69&(x70+x71))|x72);

	if (t14 != 126U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x74 = 15186277520990034LLU;
	static int8_t x75 = -1;
	int16_t x76 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = ((x73&(x74+x75))|x76);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 109689328U;
	uint32_t x78 = UINT32_MAX;
	volatile int8_t x79 = INT8_MAX;
	int32_t x80 = -1;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x77&(x78+x79))|x80);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MAX;
	volatile uint32_t t17 = 10962U;

	t17 = ((x81&(x82+x83))|x84);

	if (t17 != 178775543U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 125U;
	int64_t x88 = -1LL;
	int64_t t18 = -49LL;

	t18 = ((x85&(x86+x87))|x88);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 87307748655LLU;
	static int16_t x94 = INT16_MIN;
	int32_t x95 = -238;
	uint16_t x96 = 243U;

	t19 = ((x93&(x94+x95))|x96);

	if (t19 != 87307716083LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	static uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	int8_t x100 = -1;
	static uint32_t t20 = UINT32_MAX;

	t20 = ((x97&(x98+x99))|x100);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = -397282716;
	uint64_t x108 = UINT64_MAX;

	t21 = ((x105&(x106+x107))|x108);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = INT64_MAX;
	volatile int32_t x111 = -1;
	int64_t t22 = INT64_MAX;

	t22 = ((x109&(x110+x111))|x112);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x115 = -1;
	uint32_t t23 = 1884U;

	t23 = ((x113&(x114+x115))|x116);

	if (t23 != 104987647U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 22408159325074653LLU;
	uint64_t t24 = 7LLU;

	t24 = ((x117&(x118+x119))|x120);

	if (t24 != 6119LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x122 = 11U;
	uint8_t x123 = 0U;
	static int16_t x124 = INT16_MAX;
	uint32_t t25 = 81812854U;

	t25 = ((x121&(x122+x123))|x124);

	if (t25 != 32767U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x126 = INT32_MIN;
	volatile int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MAX;
	int64_t t26 = 3469588242215692LL;

	t26 = ((x125&(x126+x127))|x128);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 243229133426292431LLU;
	volatile uint32_t x132 = 2098319U;
	volatile uint64_t t27 = 14438079720215059LLU;

	t27 = ((x129&(x130+x131))|x132);

	if (t27 != 2098319LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = 3545640280410087408LL;
	int16_t x134 = 1749;
	uint8_t x135 = 1U;
	uint64_t x136 = 523426LLU;
	uint64_t t28 = 377709LLU;

	t28 = ((x133&(x134+x135))|x136);

	if (t28 != 524018LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x139 = INT8_MIN;
	static int32_t x140 = INT32_MAX;

	t29 = ((x137&(x138+x139))|x140);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 113U;
	static uint8_t x142 = UINT8_MAX;
	uint64_t t30 = 8246701533213321LLU;

	t30 = ((x141&(x142+x143))|x144);

	if (t30 != 165446065619LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x146 = 1U;
	int16_t x147 = INT16_MIN;
	static uint16_t x148 = UINT16_MAX;
	static volatile uint32_t t31 = 103693U;

	t31 = ((x145&(x146+x147))|x148);

	if (t31 != 65535U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -5;
	int32_t x150 = 341236559;
	int64_t x151 = -1LL;
	volatile int64_t t32 = -387261767199758LL;

	t32 = ((x149&(x150+x151))|x152);

	if (t32 != 341236559LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = INT32_MAX;
	volatile int32_t x154 = 81243;
	int16_t x155 = -1;
	static uint32_t x156 = UINT32_MAX;
	uint32_t t33 = UINT32_MAX;

	t33 = ((x153&(x154+x155))|x156);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1980820215057195LL;
	volatile uint16_t x158 = 8077U;
	static int64_t x159 = 81813721672LL;
	volatile int64_t t34 = 9784485574LL;

	t34 = ((x157&(x158+x159))|x160);

	if (t34 != 73014444031LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MAX;
	volatile int16_t x162 = -1;
	static uint64_t x163 = 57844273LLU;
	int32_t x164 = INT32_MIN;
	uint64_t t35 = 137212751LLU;

	t35 = ((x161&(x162+x163))|x164);

	if (t35 != 18446744071619912240LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MIN;
	static uint8_t x167 = UINT8_MAX;
	static int32_t t36 = -1;

	t36 = ((x165&(x166+x167))|x168);

	if (t36 != -84) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = -1;
	int16_t x174 = -9;
	int32_t x175 = 8117819;
	int16_t x176 = -207;
	int32_t t37 = -15;

	t37 = ((x173&(x174+x175))|x176);

	if (t37 != -205) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x178 = 8485146U;
	int32_t x179 = 1;
	int64_t x180 = -110279787984LL;
	int64_t t38 = -30540341736068002LL;

	t38 = ((x177&(x178+x179))|x180);

	if (t38 != -110279787717LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -1;
	int8_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	static volatile int64_t x184 = 659521002965LL;
	uint64_t t39 = UINT64_MAX;

	t39 = ((x181&(x182+x183))|x184);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x186 = 1009944740480537998LL;
	volatile int8_t x187 = INT8_MIN;
	uint8_t x188 = 14U;
	volatile int64_t t40 = 78112LL;

	t40 = ((x185&(x186+x187))|x188);

	if (t40 != 14LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x190 = -1;
	volatile int16_t x191 = INT16_MAX;
	int64_t x192 = -100444250747142775LL;
	static volatile int64_t t41 = -1359331113981LL;

	t41 = ((x189&(x190+x191))|x192);

	if (t41 != -100444250747142147LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -1LL;
	volatile uint32_t x194 = UINT32_MAX;
	static int16_t x196 = -1;
	volatile int64_t t42 = -4370LL;

	t42 = ((x193&(x194+x195))|x196);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = -1;
	uint8_t x198 = 55U;
	int8_t x199 = 15;
	uint32_t x200 = 56U;
	volatile uint32_t t43 = 1759159U;

	t43 = ((x197&(x198+x199))|x200);

	if (t43 != 126U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = 120U;
	volatile uint32_t x203 = 1407U;
	int32_t x204 = INT32_MIN;
	volatile int64_t t44 = 1LL;

	t44 = ((x201&(x202+x203))|x204);

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 3002600LLU;
	int64_t x207 = -1LL;
	volatile int64_t x208 = 248128145LL;
	static volatile uint64_t t45 = 859708505LLU;

	t45 = ((x205&(x206+x207))|x208);

	if (t45 != 250569465LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -1;
	uint64_t x211 = 711746549774199LLU;
	int8_t x212 = 0;

	t46 = ((x209&(x210+x211))|x212);

	if (t46 != 711746549839734LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x214 = -62;
	volatile uint64_t x216 = UINT64_MAX;
	static uint64_t t47 = UINT64_MAX;

	t47 = ((x213&(x214+x215))|x216);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	static volatile int64_t x224 = 245212LL;

	t48 = ((x221&(x222+x223))|x224);

	if (t48 != 245212LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MIN;

	t49 = ((x225&(x226+x227))|x228);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = 5;
	static int64_t x230 = INT64_MIN;
	uint64_t x231 = 290771060533962235LLU;

	t50 = ((x229&(x230+x231))|x232);

	if (t50 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x235 = -1;
	static int32_t x236 = INT32_MIN;
	volatile int64_t t51 = 261743466681LL;

	t51 = ((x233&(x234+x235))|x236);

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	volatile int32_t x238 = 9;
	static uint64_t x239 = UINT64_MAX;
	int64_t x240 = -6269069LL;

	t52 = ((x237&(x238+x239))|x240);

	if (t52 != 18446744073703282547LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x241 = -1137965;
	int16_t x242 = 0;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MAX;
	volatile int64_t t53 = -12997098681LL;

	t53 = ((x241&(x242+x243))|x244);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = UINT8_MAX;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = 48;
	volatile int32_t t54 = 65067683;

	t54 = ((x245&(x246+x247))|x248);

	if (t54 != 48) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x258 = 921202103LLU;
	int32_t x259 = 2;
	int8_t x260 = -24;

	t55 = ((x257&(x258+x259))|x260);

	if (t55 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = -1;
	static uint16_t x262 = UINT16_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	volatile uint8_t x264 = 2U;
	uint64_t t56 = 4730LLU;

	t56 = ((x261&(x262+x263))|x264);

	if (t56 != 65534LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x267 = UINT16_MAX;
	uint8_t x268 = 11U;

	t57 = ((x265&(x266+x267))|x268);

	if (t57 != 65531U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = -2;
	uint32_t x270 = 57921U;
	int64_t x271 = INT64_MIN;
	static uint8_t x272 = 3U;
	volatile int64_t t58 = 7854684692LL;

	t58 = ((x269&(x270+x271))|x272);

	if (t58 != -9223372036854717885LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = -1;
	int16_t x274 = -739;
	int64_t x275 = INT64_MAX;
	volatile uint8_t x276 = 0U;

	t59 = ((x273&(x274+x275))|x276);

	if (t59 != 9223372036854775068LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	volatile int32_t x279 = INT32_MAX;
	static int16_t x280 = INT16_MAX;
	static volatile int32_t t60 = INT32_MAX;

	t60 = ((x277&(x278+x279))|x280);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MIN;
	int64_t x284 = INT64_MAX;
	int64_t t61 = -3184388541419981LL;

	t61 = ((x281&(x282+x283))|x284);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;

	t62 = ((x285&(x286+x287))|x288);

	if (t62 != 30397575) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 23U;
	int32_t x292 = -1;
	int32_t t63 = -1;

	t63 = ((x289&(x290+x291))|x292);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = -11;
	uint32_t x294 = UINT32_MAX;
	static int64_t x296 = INT64_MIN;
	int64_t t64 = -3539535607415099LL;

	t64 = ((x293&(x294+x295))|x296);

	if (t64 != -9223372032559841291LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x301&(x302+x303))|x304);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x306 = 204U;
	volatile int16_t x307 = 26;
	uint64_t t66 = 3415418621968LLU;

	t66 = ((x305&(x306+x307))|x308);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x309 = 2;
	static uint16_t x310 = 6687U;
	uint8_t x311 = 1U;
	int32_t x312 = 3456311;
	int32_t t67 = 1994394;

	t67 = ((x309&(x310+x311))|x312);

	if (t67 != 3456311) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x314 = INT8_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	int8_t x316 = -1;
	uint64_t t68 = UINT64_MAX;

	t68 = ((x313&(x314+x315))|x316);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -15531671031765LL;
	static int64_t x320 = INT64_MAX;
	int64_t t69 = 33570406581932LL;

	t69 = ((x317&(x318+x319))|x320);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MAX;
	uint32_t x323 = UINT32_MAX;
	uint64_t x324 = 457434LLU;
	uint64_t t70 = 772712LLU;

	t70 = ((x321&(x322+x323))|x324);

	if (t70 != 457434LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	static int64_t x330 = INT64_MAX;
	int8_t x331 = INT8_MIN;
	volatile uint64_t x332 = 9LLU;
	uint64_t t71 = 11692666442841620LLU;

	t71 = ((x329&(x330+x331))|x332);

	if (t71 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = -11;
	uint16_t x334 = 184U;
	static volatile int32_t x335 = INT32_MIN;
	int8_t x336 = -20;
	volatile int32_t t72 = 1604;

	t72 = ((x333&(x334+x335))|x336);

	if (t72 != -4) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = -33748LL;
	static int8_t x338 = INT8_MIN;
	uint64_t x339 = 57LLU;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x337&(x338+x339))|x340);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = 13;
	int16_t x342 = -1;
	volatile uint64_t t74 = 632012742110LLU;

	t74 = ((x341&(x342+x343))|x344);

	if (t74 != 3196673336162673773LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = -1LL;
	int16_t x354 = 2315;
	volatile int64_t t75 = -25100400472LL;

	t75 = ((x353&(x354+x355))|x356);

	if (t75 != 2587LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = 11930440LLU;
	int16_t x359 = 211;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x357&(x358+x359))|x360);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x361 = 19U;
	volatile int64_t x362 = INT64_MIN;
	int64_t x364 = -3345613280967LL;
	int64_t t77 = -10483420LL;

	t77 = ((x361&(x362+x363))|x364);

	if (t77 != -3345613280965LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MIN;
	int16_t x367 = -143;
	int32_t x368 = 4858;
	int64_t t78 = -103429179LL;

	t78 = ((x365&(x366+x367))|x368);

	if (t78 != 89313837883396858LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x370 = -1;
	int8_t x371 = -1;
	volatile uint64_t t79 = 1564946LLU;

	t79 = ((x369&(x370+x371))|x372);

	if (t79 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MAX;
	int32_t x375 = -1;
	static int32_t x376 = -981302;
	int32_t t80 = 9;

	t80 = ((x373&(x374+x375))|x376);

	if (t80 != -981302) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	volatile int32_t t81 = INT32_MAX;

	t81 = ((x377&(x378+x379))|x380);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x383 = 1U;
	uint8_t x384 = UINT8_MAX;
	int64_t t82 = -1LL;

	t82 = ((x381&(x382+x383))|x384);

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MIN;
	volatile int16_t x387 = 1;
	uint16_t x388 = 9477U;
	volatile int32_t t83 = -72234856;

	t83 = ((x385&(x386+x387))|x388);

	if (t83 != 2147483525) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x389 = UINT16_MAX;
	volatile uint8_t x390 = UINT8_MAX;
	volatile uint32_t t84 = 2296637U;

	t84 = ((x389&(x390+x391))|x392);

	if (t84 != 169899U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x393 = 18U;
	static int32_t x395 = -2058131;
	uint16_t x396 = UINT16_MAX;
	uint64_t t85 = 426446582LLU;

	t85 = ((x393&(x394+x395))|x396);

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x398 = 207671302193750283LL;
	int64_t x400 = -1LL;
	static volatile int64_t t86 = -261786583LL;

	t86 = ((x397&(x398+x399))|x400);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MAX;
	int16_t x407 = -3;
	int64_t t87 = -1158LL;

	t87 = ((x405&(x406+x407))|x408);

	if (t87 != 5409595LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = 1324867U;
	static int64_t x410 = 14040LL;
	static uint8_t x411 = 7U;

	t88 = ((x409&(x410+x411))|x412);

	if (t88 != 391600256875LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x425 = 4U;
	int16_t x426 = 46;
	int8_t x427 = INT8_MAX;
	static int16_t x428 = -126;
	static volatile uint32_t t89 = 11U;

	t89 = ((x425&(x426+x427))|x428);

	if (t89 != 4294967174U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x429 = 3849984584LLU;
	static int32_t x431 = 337;
	int16_t x432 = INT16_MIN;
	volatile uint64_t t90 = 4350LLU;

	t90 = ((x429&(x430+x431))|x432);

	if (t90 != 18446744073709518912LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MIN;
	volatile uint64_t t91 = 4LLU;

	t91 = ((x433&(x434+x435))|x436);

	if (t91 != 9223372036854783487LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x437 = 137;
	uint16_t x438 = 5233U;
	volatile int8_t x440 = INT8_MIN;

	t92 = ((x437&(x438+x439))|x440);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = -1;
	int8_t x442 = INT8_MIN;
	static int16_t x443 = 0;
	int16_t x444 = -7138;
	volatile int32_t t93 = 0;

	t93 = ((x441&(x442+x443))|x444);

	if (t93 != -98) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x446 = INT8_MIN;
	uint16_t x447 = 19U;
	int16_t x448 = INT16_MIN;
	int64_t t94 = 54390682LL;

	t94 = ((x445&(x446+x447))|x448);

	if (t94 != -31870LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = 78263891482003LL;
	volatile int64_t x450 = 864570611LL;
	uint8_t x451 = 42U;
	volatile int64_t t95 = 14567041990567285LL;

	t95 = ((x449&(x450+x451))|x452);

	if (t95 != 855655935LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -1;
	int8_t x454 = INT8_MAX;
	static volatile int32_t x455 = 2508375;
	uint32_t x456 = 7791949U;
	volatile uint32_t t96 = 25736475U;

	t96 = ((x453&(x454+x455))|x456);

	if (t96 != 7792607U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x458 = 49;
	int64_t x460 = -1LL;
	int64_t t97 = -114516LL;

	t97 = ((x457&(x458+x459))|x460);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = 2U;
	int16_t x463 = -1;
	volatile int64_t t98 = 13120746LL;

	t98 = ((x461&(x462+x463))|x464);

	if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x465 = 214U;
	static int8_t x466 = 6;
	uint64_t x468 = UINT64_MAX;
	uint64_t t99 = UINT64_MAX;

	t99 = ((x465&(x466+x467))|x468);

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

