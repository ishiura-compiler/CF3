#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
static volatile uint8_t x13 = 18U;
int64_t x15 = -361089LL;
uint64_t x21 = 58029877927LLU;
static volatile int32_t t5 = 388661221;
int32_t t6 = 927314286;
int64_t x36 = 2842308662LL;
static uint16_t x41 = UINT16_MAX;
static int32_t x45 = INT32_MIN;
uint8_t x60 = 8U;
volatile int32_t x63 = 1442231;
volatile int32_t t15 = -1;
int16_t x65 = INT16_MAX;
int64_t x68 = -25LL;
int8_t x71 = INT8_MIN;
static uint16_t x72 = UINT16_MAX;
volatile int32_t t17 = 184;
int64_t x103 = INT64_MIN;
int16_t x107 = INT16_MAX;
int64_t x115 = -930LL;
uint16_t x116 = 322U;
int8_t x119 = -1;
static volatile int32_t t29 = 94676182;
volatile int32_t t31 = -15487349;
int64_t x133 = -180987LL;
static int32_t t34 = 1;
static uint16_t x141 = 8U;
static uint16_t x148 = 10879U;
uint8_t x150 = UINT8_MAX;
static int64_t x153 = -1832538653356LL;
volatile int32_t t39 = -1646421;
int64_t x163 = INT64_MIN;
uint8_t x167 = 0U;
int8_t x170 = INT8_MIN;
uint16_t x174 = UINT16_MAX;
static int16_t x176 = -20;
int32_t x179 = 29;
int32_t x187 = -4169672;
int32_t x198 = -10449592;
volatile int32_t x199 = INT32_MIN;
int8_t x201 = INT8_MAX;
int64_t x204 = INT64_MIN;
int8_t x208 = -1;
volatile int32_t t51 = -1760;
int16_t x212 = 0;
uint32_t x215 = 1895U;
int64_t x220 = -1LL;
uint32_t x222 = 2424U;
int8_t x226 = INT8_MIN;
static int64_t x235 = 61135998LL;
int8_t x237 = -1;
int16_t x238 = INT16_MAX;
uint16_t x245 = UINT16_MAX;
volatile int32_t t61 = 988;
int32_t x249 = INT32_MIN;
uint64_t x252 = UINT64_MAX;
static int64_t x253 = -1LL;
volatile int32_t x257 = INT32_MAX;
int8_t x259 = -6;
int64_t x260 = -371LL;
static int32_t t64 = -2698102;
int8_t x261 = INT8_MIN;
static int64_t x263 = -1LL;
int8_t x264 = -5;
uint16_t x265 = UINT16_MAX;
volatile int32_t t68 = -1019;
volatile int16_t x277 = -5;
uint8_t x278 = 51U;
int64_t x281 = -1LL;
uint8_t x282 = UINT8_MAX;
uint16_t x284 = 56U;
uint64_t x287 = UINT64_MAX;
static int16_t x288 = INT16_MIN;
int32_t t71 = 26;
int32_t t72 = 26635;
int16_t x297 = INT16_MIN;
int32_t t77 = 1016206;
volatile int8_t x315 = INT8_MIN;
uint64_t x318 = UINT64_MAX;
static int64_t x320 = INT64_MIN;
uint16_t x322 = 67U;
static volatile uint32_t x323 = UINT32_MAX;
int32_t t81 = 775180954;
static int64_t x329 = 1297908LL;
static int16_t x341 = -1;
volatile int64_t x342 = INT64_MIN;
static volatile int32_t x346 = INT32_MIN;
int32_t x351 = INT32_MAX;
uint16_t x352 = 3202U;
int16_t x359 = INT16_MIN;
int32_t t89 = -1802;
static volatile int32_t x367 = 1;
uint8_t x371 = UINT8_MAX;
static volatile int32_t x376 = INT32_MIN;
int8_t x377 = INT8_MIN;
int64_t x379 = -509LL;
static volatile int8_t x388 = INT8_MIN;
int64_t x393 = -22LL;
int16_t x395 = -1;


void f0(void) {
	uint32_t x1 = 6585585U;
	uint8_t x2 = 1U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -1;

	t0 = ((x1&(x2<=x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -953;
	int16_t x6 = INT16_MIN;
	volatile uint32_t x7 = 2328043U;
	int16_t x8 = 10855;
	volatile int32_t t1 = -8619402;

	t1 = ((x5&(x6<=x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static int8_t x10 = 2;
	static uint16_t x11 = 452U;
	int32_t x12 = INT32_MAX;
	static volatile int32_t t2 = -241368;

	t2 = ((x9&(x10<=x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	static int8_t x16 = INT8_MAX;
	static volatile int32_t t3 = 388011140;

	t3 = ((x13&(x14<=x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static uint64_t x18 = 271183723012763546LLU;
	int32_t x19 = INT32_MAX;
	volatile uint32_t x20 = 187590U;
	static int32_t t4 = -7285;

	t4 = ((x17&(x18<=x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	static uint64_t x23 = 27626LLU;
	volatile int16_t x24 = INT16_MAX;

	t5 = ((x21&(x22<=x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	static int64_t x26 = INT64_MIN;
	static int64_t x27 = -41715536593395LL;
	uint16_t x28 = 817U;

	t6 = ((x25&(x26<=x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int32_t x30 = -1062103169;
	static int64_t x31 = 3817066198920173425LL;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 111709906;

	t7 = ((x29&(x30<=x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -3;
	static int16_t x34 = INT16_MAX;
	volatile int8_t x35 = INT8_MAX;
	int32_t t8 = 0;

	t8 = ((x33&(x34<=x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -534981349792652791LL;
	uint16_t x38 = UINT16_MAX;
	static uint8_t x39 = 1U;
	uint16_t x40 = 60U;
	int32_t t9 = -911373448;

	t9 = ((x37&(x38<=x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	static uint8_t x43 = 5U;
	volatile int64_t x44 = INT64_MAX;
	volatile int32_t t10 = 158;

	t10 = ((x41&(x42<=x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MAX;
	int32_t x47 = -220;
	uint32_t x48 = 185U;
	volatile int32_t t11 = -823299;

	t11 = ((x45&(x46<=x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -31;
	volatile int8_t x50 = INT8_MAX;
	int8_t x51 = -5;
	uint32_t x52 = 346197919U;
	int32_t t12 = 84;

	t12 = ((x49&(x50<=x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 11U;
	uint8_t x54 = 12U;
	volatile int8_t x55 = INT8_MIN;
	static volatile int32_t x56 = INT32_MIN;
	static int32_t t13 = 4;

	t13 = ((x53&(x54<=x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 7384043361LLU;
	int16_t x58 = INT16_MIN;
	int16_t x59 = 8741;
	static int32_t t14 = 419523539;

	t14 = ((x57&(x58<=x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 793U;
	volatile int16_t x62 = INT16_MIN;
	int8_t x64 = 0;

	t15 = ((x61&(x62<=x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	volatile int32_t t16 = -2871979;

	t16 = ((x65&(x66<=x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 13;
	int16_t x70 = INT16_MIN;

	t17 = ((x69&(x70<=x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MAX;
	volatile int8_t x76 = 3;
	volatile int32_t t18 = -418168128;

	t18 = ((x73&(x74<=x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 12U;
	int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	int8_t x80 = 1;
	int32_t t19 = -8040567;

	t19 = ((x77&(x78<=x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = -2122;
	uint64_t x83 = 11564686LLU;
	static volatile uint32_t x84 = UINT32_MAX;
	volatile int32_t t20 = 1846;

	t20 = ((x81&(x82<=x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = -1;
	static int8_t x88 = INT8_MAX;
	static int32_t t21 = 805300;

	t21 = ((x85&(x86<=x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile int16_t x90 = INT16_MIN;
	int16_t x91 = -44;
	volatile int64_t x92 = 208562367LL;
	int32_t t22 = -30322;

	t22 = ((x89&(x90<=x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = -1;
	int32_t t23 = 4;

	t23 = ((x93&(x94<=x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MAX;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = -1372482;

	t24 = ((x97&(x98<=x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	volatile int32_t x102 = -1;
	int64_t x104 = INT64_MIN;
	int32_t t25 = 23;

	t25 = ((x101&(x102<=x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int64_t x106 = INT64_MIN;
	uint32_t x108 = 39441466U;
	static int32_t t26 = -34;

	t26 = ((x105&(x106<=x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 26U;
	static int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = 61U;
	volatile int32_t t27 = -1;

	t27 = ((x109&(x110<=x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	volatile uint8_t x114 = 11U;
	volatile int32_t t28 = 35871226;

	t28 = ((x113&(x114<=x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 38;
	static uint8_t x118 = 0U;
	static uint8_t x120 = 1U;

	t29 = ((x117&(x118<=x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 51;
	uint16_t x122 = 2U;
	int16_t x123 = INT16_MAX;
	uint8_t x124 = 8U;
	static int32_t t30 = -6426;

	t30 = ((x121&(x122<=x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = 25U;
	int64_t x128 = INT64_MIN;

	t31 = ((x125&(x126<=x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 10228U;
	int32_t x130 = -1;
	int16_t x131 = 2;
	volatile int32_t x132 = -840241677;
	volatile int32_t t32 = -64687639;

	t32 = ((x129&(x130<=x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = UINT8_MAX;
	static uint8_t x135 = 9U;
	uint16_t x136 = 6331U;
	volatile int32_t t33 = -1871;

	t33 = ((x133&(x134<=x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -1;
	int32_t x138 = INT32_MAX;
	int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MIN;

	t34 = ((x137&(x138<=x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = INT8_MAX;
	uint16_t x143 = 36U;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = 20399508;

	t35 = ((x141&(x142<=x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -2;
	static int16_t x146 = -1;
	volatile int64_t x147 = -253030964390LL;
	volatile int32_t t36 = -733;

	t36 = ((x145&(x146<=x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int64_t x151 = -3109LL;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -1;

	t37 = ((x149&(x150<=x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 14;
	uint32_t x155 = 215389U;
	int64_t x156 = INT64_MAX;
	int32_t t38 = 3;

	t38 = ((x153&(x154<=x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int32_t x158 = 664903;
	uint16_t x159 = 7300U;
	volatile uint8_t x160 = UINT8_MAX;

	t39 = ((x157&(x158<=x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MIN;
	int16_t x162 = -1;
	int64_t x164 = 1043229420467713LL;
	int32_t t40 = -3113907;

	t40 = ((x161&(x162<=x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -12431451;
	volatile uint16_t x166 = 2047U;
	static int16_t x168 = 1;
	volatile int32_t t41 = 5;

	t41 = ((x165&(x166<=x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int32_t x171 = -1;
	static int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = -5378;

	t42 = ((x169&(x170<=x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 24121624433427LLU;
	static uint32_t x175 = 3U;
	int32_t t43 = -104;

	t43 = ((x173&(x174<=x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 14207;
	int32_t x178 = INT32_MIN;
	int32_t x180 = -1;
	int32_t t44 = -1681;

	t44 = ((x177&(x178<=x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = INT64_MAX;
	uint32_t x183 = 27U;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 252;

	t45 = ((x181&(x182<=x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MAX;
	static int16_t x188 = 4761;
	int32_t t46 = 11832120;

	t46 = ((x185&(x186<=x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile uint64_t x190 = 756447800241LLU;
	uint16_t x191 = UINT16_MAX;
	static int16_t x192 = 1356;
	int32_t t47 = -55401;

	t47 = ((x189&(x190<=x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 7U;
	int32_t x194 = 513260229;
	int16_t x195 = 1;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 416;

	t48 = ((x193&(x194<=x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -2758;
	int8_t x200 = -1;
	volatile int32_t t49 = -11;

	t49 = ((x197&(x198<=x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x202 = UINT16_MAX;
	uint16_t x203 = 91U;
	static int32_t t50 = 999;

	t50 = ((x201&(x202<=x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -35420611884165LL;
	uint16_t x206 = 2557U;
	volatile int32_t x207 = -1;

	t51 = ((x205&(x206<=x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 787454746254364LL;
	static int32_t x210 = INT32_MIN;
	int16_t x211 = 3;
	volatile int32_t t52 = 5751;

	t52 = ((x209&(x210<=x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 36438860LLU;
	volatile uint32_t x214 = 3828329U;
	int64_t x216 = INT64_MAX;
	volatile int32_t t53 = 445762;

	t53 = ((x213&(x214<=x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 74U;
	uint16_t x218 = 24U;
	volatile int8_t x219 = INT8_MIN;
	static volatile int32_t t54 = 50830;

	t54 = ((x217&(x218<=x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint32_t x223 = 2002U;
	uint32_t x224 = 66654048U;
	static volatile int32_t t55 = 49;

	t55 = ((x221&(x222<=x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 208041536;

	t56 = ((x225&(x226<=x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MAX;
	volatile int64_t x230 = INT64_MIN;
	int16_t x231 = 8220;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -1547923;

	t57 = ((x229&(x230<=x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x233 = INT32_MIN;
	static int8_t x234 = -17;
	int64_t x236 = -2163198405506442271LL;
	static volatile int32_t t58 = 15906;

	t58 = ((x233&(x234<=x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x239 = INT32_MIN;
	int8_t x240 = 0;
	volatile int32_t t59 = 0;

	t59 = ((x237&(x238<=x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -142;
	int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	static volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = -16;

	t60 = ((x241&(x242<=x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x246 = UINT64_MAX;
	static int8_t x247 = -8;
	int16_t x248 = -5;

	t61 = ((x245&(x246<=x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = INT64_MIN;
	static uint32_t x251 = UINT32_MAX;
	int32_t t62 = 223;

	t62 = ((x249&(x250<=x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -21956;
	volatile int8_t x255 = -3;
	static int64_t x256 = -906LL;
	volatile int32_t t63 = 89;

	t63 = ((x253&(x254<=x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MIN;

	t64 = ((x257&(x258<=x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = UINT16_MAX;
	int32_t t65 = 34842;

	t65 = ((x261&(x262<=x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = 1527623U;
	volatile int8_t x267 = INT8_MAX;
	static volatile uint64_t x268 = 7360LLU;
	volatile int32_t t66 = 43472355;

	t66 = ((x265&(x266<=x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int16_t x270 = -1;
	uint8_t x271 = 0U;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 4313905;

	t67 = ((x269&(x270<=x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	volatile int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MAX;

	t68 = ((x273&(x274<=x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x279 = 0LL;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -1;

	t69 = ((x277&(x278<=x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x283 = 25685;
	volatile int32_t t70 = -1442;

	t70 = ((x281&(x282<=x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -872;
	int32_t x286 = -1;

	t71 = ((x285&(x286<=x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -12132;
	static int8_t x290 = INT8_MAX;
	int64_t x291 = 8738760001LL;
	static int8_t x292 = -2;

	t72 = ((x289&(x290<=x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	volatile int16_t x295 = INT16_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -360288;

	t73 = ((x293&(x294<=x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -4;
	static int16_t x299 = -1;
	static int64_t x300 = -4LL;
	int32_t t74 = 117;

	t74 = ((x297&(x298<=x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = 22;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int16_t x304 = -1757;
	int32_t t75 = 1991354;

	t75 = ((x301&(x302<=x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	uint64_t x306 = 52671536649LLU;
	uint8_t x307 = 7U;
	volatile uint16_t x308 = UINT16_MAX;
	static int32_t t76 = 6829;

	t76 = ((x305&(x306<=x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -3161939;
	static volatile int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MAX;
	volatile uint16_t x312 = 624U;

	t77 = ((x309&(x310<=x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 139U;
	uint8_t x314 = UINT8_MAX;
	volatile uint16_t x316 = 1U;
	volatile int32_t t78 = 1;

	t78 = ((x313&(x314<=x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x319 = 508840890;
	int32_t t79 = -396638840;

	t79 = ((x317&(x318<=x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int64_t x324 = -1LL;
	int32_t t80 = -6;

	t80 = ((x321&(x322<=x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -1;
	int32_t x326 = -68486;
	int32_t x327 = 58;
	uint64_t x328 = 0LLU;

	t81 = ((x325&(x326<=x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = 2671U;
	int16_t x331 = INT16_MIN;
	static int8_t x332 = 12;
	volatile int32_t t82 = 3679574;

	t82 = ((x329&(x330<=x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MIN;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = -1;
	volatile uint32_t x336 = 15U;
	static volatile int32_t t83 = -419529729;

	t83 = ((x333&(x334<=x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 14624U;
	volatile int32_t t84 = -618189;

	t84 = ((x337&(x338<=x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x343 = INT32_MAX;
	int32_t x344 = 11;
	int32_t t85 = 4890;

	t85 = ((x341&(x342<=x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -7;
	uint32_t x347 = UINT32_MAX;
	static volatile uint64_t x348 = 637076315316958LLU;
	volatile int32_t t86 = -15539232;

	t86 = ((x345&(x346<=x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -1;
	static int32_t x350 = -1;
	volatile int32_t t87 = -3760531;

	t87 = ((x349&(x350<=x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = INT8_MIN;
	static uint64_t x354 = 1626104978580176LLU;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = INT8_MAX;
	int32_t t88 = -5;

	t88 = ((x353&(x354<=x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	volatile int64_t x358 = INT64_MAX;
	int64_t x360 = -130539830531648LL;

	t89 = ((x357&(x358<=x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 7940U;
	static uint8_t x362 = UINT8_MAX;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 71736;

	t90 = ((x361&(x362<=x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 185251487528460LLU;
	int16_t x366 = -128;
	int32_t x368 = -9;
	int32_t t91 = 28918;

	t91 = ((x365&(x366<=x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x369 = 4LLU;
	volatile int32_t x370 = INT32_MAX;
	uint64_t x372 = 11279463906223550LLU;
	volatile int32_t t92 = 124;

	t92 = ((x369&(x370<=x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int64_t x374 = INT64_MAX;
	int16_t x375 = INT16_MAX;
	volatile int32_t t93 = 2295;

	t93 = ((x373&(x374<=x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x378 = INT16_MIN;
	volatile uint16_t x380 = 26616U;
	volatile int32_t t94 = -1740;

	t94 = ((x377&(x378<=x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	int8_t x382 = -1;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = 0U;
	volatile int32_t t95 = -429649239;

	t95 = ((x381&(x382<=x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 144315;
	int16_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	static int32_t t96 = -2632;

	t96 = ((x385&(x386<=x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 20U;
	static uint32_t x390 = UINT32_MAX;
	volatile uint32_t x391 = 2086U;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 6;

	t97 = ((x389&(x390<=x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x394 = 3U;
	int32_t x396 = 2;
	int32_t t98 = -1831;

	t98 = ((x393&(x394<=x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 18047U;
	uint8_t x398 = 26U;
	int64_t x399 = 3LL;
	uint64_t x400 = 44186LLU;
	static int32_t t99 = -37683487;

	t99 = ((x397&(x398<=x399))<=x400);

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

