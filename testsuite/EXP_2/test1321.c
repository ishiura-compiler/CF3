#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int32_t x8 = INT32_MAX;
static uint32_t x12 = 81U;
static int16_t x15 = 238;
static int32_t x24 = 39356682;
int32_t t5 = -109052648;
uint16_t x25 = UINT16_MAX;
int64_t x36 = -1LL;
int8_t x38 = -10;
int32_t t9 = 6393585;
uint8_t x41 = 34U;
int8_t x47 = 2;
volatile int32_t t11 = 512624370;
static volatile int8_t x50 = INT8_MIN;
int32_t t12 = 58606456;
volatile uint8_t x55 = 22U;
int32_t t14 = -578458;
int64_t x61 = INT64_MIN;
int16_t x62 = INT16_MAX;
int64_t x65 = 8036728984773LL;
int16_t x70 = 0;
volatile uint8_t x74 = 35U;
volatile int32_t t18 = -7900826;
int32_t t19 = 1;
volatile int64_t x82 = -1LL;
static int16_t x83 = INT16_MAX;
int32_t t22 = 1;
volatile int32_t t25 = 218052;
int64_t x107 = -1LL;
int64_t x110 = INT64_MAX;
volatile int32_t t27 = -474414802;
uint16_t x123 = UINT16_MAX;
int32_t t30 = -212691;
uint64_t x125 = UINT64_MAX;
uint64_t x126 = UINT64_MAX;
static int32_t x127 = -84889;
int64_t x131 = INT64_MIN;
volatile int32_t t33 = 14497932;
uint32_t x141 = 195768U;
volatile int8_t x142 = INT8_MIN;
int32_t t36 = -7;
uint8_t x156 = 111U;
volatile int32_t t38 = 46189891;
volatile int32_t t41 = -1;
int32_t x181 = -1;
int16_t x182 = INT16_MIN;
static volatile int32_t t45 = -404;
volatile int64_t x185 = -2057842348345LL;
volatile int32_t x189 = -98242065;
static volatile uint8_t x196 = 6U;
volatile int32_t t48 = -231;
volatile int32_t t51 = -2;
volatile int32_t x212 = 26255;
int64_t x224 = -1LL;
uint16_t x235 = UINT16_MAX;
volatile int16_t x237 = -1;
volatile int32_t x247 = INT32_MIN;
int16_t x248 = INT16_MIN;
int32_t t63 = 291;
uint16_t x259 = 1U;
static int8_t x260 = INT8_MIN;
volatile int32_t t64 = -198170;
int32_t x263 = INT32_MAX;
int64_t x264 = INT64_MIN;
static volatile int32_t x273 = INT32_MIN;
static uint8_t x274 = UINT8_MAX;
static int32_t x277 = INT32_MIN;
static int32_t x280 = 856689047;
int32_t t70 = 8825411;
int8_t x287 = -1;
static volatile uint16_t x291 = 3U;
uint8_t x294 = UINT8_MAX;
int16_t x300 = -34;
volatile int32_t t74 = -221541;
int8_t x301 = -1;
int32_t x302 = INT32_MAX;
uint32_t x303 = UINT32_MAX;
int8_t x308 = 1;
int8_t x309 = INT8_MAX;
int8_t x311 = INT8_MIN;
int32_t t77 = -340;
int16_t x314 = -1;
uint64_t x322 = 7560492250932669LLU;
uint32_t x326 = 0U;
int16_t x328 = INT16_MIN;
static uint16_t x330 = 1U;
int16_t x337 = INT16_MIN;
int8_t x347 = -1;
int32_t x350 = 7311648;
volatile int32_t t89 = -342756705;
int32_t x361 = 3730;
uint32_t x363 = 29U;
int64_t x364 = -1LL;
int32_t t90 = -198;
int8_t x369 = INT8_MAX;
static int16_t x374 = INT16_MIN;
uint16_t x378 = 15U;
int32_t x382 = INT32_MAX;
uint32_t x383 = UINT32_MAX;
uint32_t x393 = 14496921U;
int32_t x397 = INT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	int8_t x4 = 1;
	volatile int32_t t0 = -40853875;

	t0 = ((x1&(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	static int32_t x6 = -1;
	int16_t x7 = INT16_MAX;
	volatile int32_t t1 = -44601779;

	t1 = ((x5&(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 23571U;
	int16_t x10 = INT16_MAX;
	uint16_t x11 = UINT16_MAX;
	int32_t t2 = -136543;

	t2 = ((x9&(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 61LLU;
	int64_t x14 = -704LL;
	uint64_t x16 = 2271286672479554237LLU;
	volatile int32_t t3 = 17449363;

	t3 = ((x13&(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	uint64_t x18 = 2213LLU;
	int32_t x19 = INT32_MAX;
	static volatile uint8_t x20 = 3U;
	static int32_t t4 = 23725;

	t4 = ((x17&(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int16_t x22 = INT16_MAX;
	int64_t x23 = INT64_MIN;

	t5 = ((x21&(x22==x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 1U;
	int8_t x27 = INT8_MIN;
	int8_t x28 = -1;
	volatile int32_t t6 = 43520;

	t6 = ((x25&(x26==x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int8_t x30 = INT8_MIN;
	static volatile uint64_t x31 = 513847350LLU;
	int32_t x32 = -1;
	volatile int32_t t7 = 865;

	t7 = ((x29&(x30==x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 27U;
	static uint16_t x34 = 403U;
	int16_t x35 = INT16_MAX;
	int32_t t8 = -406;

	t8 = ((x33&(x34==x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int64_t x39 = INT64_MAX;
	volatile int16_t x40 = INT16_MIN;

	t9 = ((x37&(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -13;
	int32_t x43 = INT32_MIN;
	int16_t x44 = -99;
	static int32_t t10 = -3748;

	t10 = ((x41&(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 15039905U;
	uint32_t x46 = 2072561535U;
	int32_t x48 = -23438;

	t11 = ((x45&(x46==x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 630U;
	static int8_t x51 = -1;
	int8_t x52 = INT8_MAX;

	t12 = ((x49&(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 47;
	static uint64_t x54 = 885012666LLU;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 66883;

	t13 = ((x53&(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 1LLU;
	int32_t x58 = 477058390;
	int64_t x59 = INT64_MIN;
	int64_t x60 = 840220160105LL;

	t14 = ((x57&(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x63 = INT32_MIN;
	int32_t x64 = -69;
	volatile int32_t t15 = -408;

	t15 = ((x61&(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = -208LL;
	int8_t x67 = -1;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 104328905;

	t16 = ((x65&(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static uint64_t x71 = 31217804798641592LLU;
	int16_t x72 = -1;
	static int32_t t17 = 961836;

	t17 = ((x69&(x70==x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MIN;

	t18 = ((x73&(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	uint32_t x78 = 590472U;
	int8_t x79 = 4;
	uint64_t x80 = UINT64_MAX;

	t19 = ((x77&(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 5204U;
	int64_t x84 = INT64_MIN;
	int32_t t20 = -6364;

	t20 = ((x81&(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x86 = 1;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = 2241LL;
	int32_t t21 = 0;

	t21 = ((x85&(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 1U;
	int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = 3436U;

	t22 = ((x89&(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = UINT64_MAX;
	volatile int32_t x95 = -1;
	volatile int16_t x96 = 349;
	volatile int32_t t23 = -169445479;

	t23 = ((x93&(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = 0LL;
	volatile int8_t x98 = INT8_MAX;
	uint64_t x99 = 2222076410288016LLU;
	static int8_t x100 = INT8_MIN;
	static volatile int32_t t24 = -11983538;

	t24 = ((x97&(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = INT32_MAX;
	static volatile uint64_t x103 = 12460947LLU;
	int64_t x104 = -254LL;

	t25 = ((x101&(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MIN;
	int8_t x108 = -1;
	int32_t t26 = 1;

	t26 = ((x105&(x106==x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	static int64_t x111 = INT64_MIN;
	volatile uint8_t x112 = 37U;

	t27 = ((x109&(x110==x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	uint64_t x114 = 45166LLU;
	int64_t x115 = 58496LL;
	uint64_t x116 = UINT64_MAX;
	int32_t t28 = -33;

	t28 = ((x113&(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static uint8_t x118 = 4U;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = -1;
	int32_t t29 = 218;

	t29 = ((x117&(x118==x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 860U;
	uint16_t x122 = UINT16_MAX;
	static uint8_t x124 = 112U;

	t30 = ((x121&(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = 14930721;

	t31 = ((x125&(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -19371185;
	int32_t x130 = INT32_MIN;
	volatile int64_t x132 = -5LL;
	int32_t t32 = -13;

	t32 = ((x129&(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	uint32_t x134 = 16423158U;
	int32_t x135 = -129303647;
	int16_t x136 = INT16_MAX;

	t33 = ((x133&(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 48U;
	int64_t x138 = INT64_MAX;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = INT32_MAX;
	static int32_t t34 = -1;

	t34 = ((x137&(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x143 = 13238U;
	volatile int32_t x144 = INT32_MAX;
	static volatile int32_t t35 = -7;

	t35 = ((x141&(x142==x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 1420U;
	volatile uint8_t x146 = 0U;
	int8_t x147 = 28;
	volatile int8_t x148 = -16;

	t36 = ((x145&(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 0U;
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = -1;
	int64_t x152 = 1222LL;
	int32_t t37 = 573;

	t37 = ((x149&(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	static uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MAX;

	t38 = ((x153&(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	static int8_t x160 = INT8_MAX;
	int32_t t39 = -4858;

	t39 = ((x157&(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	volatile int8_t x162 = 0;
	int16_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	static int32_t t40 = -237469;

	t40 = ((x161&(x162==x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 0U;
	uint16_t x166 = UINT16_MAX;
	volatile int16_t x167 = -1;
	static int32_t x168 = -1;

	t41 = ((x165&(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 7418243LL;
	static int16_t x170 = INT16_MAX;
	static volatile uint16_t x171 = 25U;
	int8_t x172 = -1;
	volatile int32_t t42 = -2;

	t42 = ((x169&(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -12556351LL;
	int32_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	static int8_t x176 = -1;
	volatile int32_t t43 = 6;

	t43 = ((x173&(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	static volatile uint32_t x178 = 1U;
	static volatile uint32_t x179 = 143424761U;
	static int16_t x180 = -1;
	int32_t t44 = 0;

	t44 = ((x177&(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x183 = INT16_MIN;
	int32_t x184 = 69091119;

	t45 = ((x181&(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -42057381;
	volatile uint16_t x187 = 22739U;
	static int8_t x188 = -3;
	volatile int32_t t46 = 632140;

	t46 = ((x185&(x186==x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 1U;
	int16_t x191 = 461;
	volatile int16_t x192 = INT16_MIN;
	static int32_t t47 = 7348;

	t47 = ((x189&(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = 6;
	int16_t x195 = -1149;

	t48 = ((x193&(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 1930U;
	uint16_t x198 = 0U;
	int8_t x199 = INT8_MAX;
	int32_t x200 = -19;
	volatile int32_t t49 = 117;

	t49 = ((x197&(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x201 = INT16_MIN;
	volatile uint64_t x202 = 253973172261LLU;
	int64_t x203 = INT64_MIN;
	int8_t x204 = -2;
	volatile int32_t t50 = -834;

	t50 = ((x201&(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int8_t x206 = INT8_MIN;
	static int8_t x207 = INT8_MAX;
	int32_t x208 = 3502099;

	t51 = ((x205&(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	int32_t x210 = -1;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int32_t t52 = -395;

	t52 = ((x209&(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int64_t x214 = -1908810LL;
	int32_t x215 = -1;
	uint32_t x216 = 0U;
	static volatile int32_t t53 = 254629;

	t53 = ((x213&(x214==x215))==x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	int16_t x219 = -1;
	static volatile int32_t x220 = 17;
	int32_t t54 = -473;

	t54 = ((x217&(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 2437;
	static uint16_t x222 = 52U;
	static int8_t x223 = -3;
	volatile int32_t t55 = 2819939;

	t55 = ((x221&(x222==x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MIN;
	int16_t x227 = 3837;
	volatile int64_t x228 = -1276390797164529476LL;
	int32_t t56 = -192276508;

	t56 = ((x225&(x226==x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 12;
	uint32_t x230 = UINT32_MAX;
	static uint32_t x231 = UINT32_MAX;
	uint16_t x232 = 11U;
	volatile int32_t t57 = -1;

	t57 = ((x229&(x230==x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x233 = 49469;
	uint64_t x234 = UINT64_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = 2799865;

	t58 = ((x233&(x234==x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x238 = 0U;
	volatile int64_t x239 = -1LL;
	int8_t x240 = -1;
	volatile int32_t t59 = 3845;

	t59 = ((x237&(x238==x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 575U;
	uint32_t x242 = 768388U;
	static int32_t x243 = INT32_MAX;
	int8_t x244 = -1;
	volatile int32_t t60 = -706590470;

	t60 = ((x241&(x242==x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int16_t x246 = 550;
	volatile int32_t t61 = -46;

	t61 = ((x245&(x246==x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 43U;
	static volatile uint16_t x250 = 6868U;
	int32_t x251 = INT32_MIN;
	int16_t x252 = -1;
	volatile int32_t t62 = -849997;

	t62 = ((x249&(x250==x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = -1;
	static int8_t x256 = -1;

	t63 = ((x253&(x254==x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x257 = 698U;
	uint16_t x258 = UINT16_MAX;

	t64 = ((x257&(x258==x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x262 = 4U;
	int32_t t65 = -3;

	t65 = ((x261&(x262==x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = UINT8_MAX;
	static uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 6U;
	int32_t t66 = -1;

	t66 = ((x265&(x266==x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	static int16_t x271 = INT16_MAX;
	int64_t x272 = -1LL;
	static volatile int32_t t67 = -15864701;

	t67 = ((x269&(x270==x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x275 = INT8_MIN;
	int64_t x276 = -1LL;
	int32_t t68 = -957580573;

	t68 = ((x273&(x274==x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 2;
	int32_t x279 = INT32_MIN;
	volatile int32_t t69 = 866261;

	t69 = ((x277&(x278==x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	static int8_t x284 = 1;

	t70 = ((x281&(x282==x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int16_t x286 = -1403;
	int16_t x288 = -1;
	static int32_t t71 = 2029628;

	t71 = ((x285&(x286==x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 272U;
	int64_t x290 = INT64_MIN;
	volatile uint64_t x292 = 1395085LLU;
	static int32_t t72 = -29;

	t72 = ((x289&(x290==x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;
	volatile int32_t t73 = 36191702;

	t73 = ((x293&(x294==x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	static uint16_t x298 = UINT16_MAX;
	int8_t x299 = 4;

	t74 = ((x297&(x298==x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = 58654472;

	t75 = ((x301&(x302==x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x305 = 133U;
	int8_t x306 = -6;
	int8_t x307 = 0;
	int32_t t76 = -367410937;

	t76 = ((x305&(x306==x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MAX;
	uint32_t x312 = 10900U;

	t77 = ((x309&(x310==x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -699LL;
	int8_t x315 = -1;
	static int16_t x316 = INT16_MAX;
	int32_t t78 = 7599;

	t78 = ((x313&(x314==x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	int64_t x318 = -1LL;
	int32_t x319 = -1;
	volatile uint16_t x320 = 4U;
	static volatile int32_t t79 = 10692;

	t79 = ((x317&(x318==x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	uint32_t x323 = 75121U;
	int64_t x324 = INT64_MAX;
	static volatile int32_t t80 = 3560;

	t80 = ((x321&(x322==x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -4117261;
	volatile int64_t x327 = INT64_MIN;
	int32_t t81 = -3313;

	t81 = ((x325&(x326==x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 5U;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -1;
	volatile int32_t t82 = -193456202;

	t82 = ((x329&(x330==x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = 20;
	volatile uint8_t x336 = 27U;
	volatile int32_t t83 = -220912188;

	t83 = ((x333&(x334==x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x338 = -1;
	int32_t x339 = -1;
	static int32_t x340 = -416292803;
	volatile int32_t t84 = 2;

	t84 = ((x337&(x338==x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	uint32_t x342 = 7040561U;
	int8_t x343 = INT8_MAX;
	uint32_t x344 = 231565407U;
	static volatile int32_t t85 = 4;

	t85 = ((x341&(x342==x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	uint64_t x346 = 32676675LLU;
	uint32_t x348 = UINT32_MAX;
	int32_t t86 = -2424254;

	t86 = ((x345&(x346==x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	int32_t x351 = INT32_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t87 = 8979267;

	t87 = ((x349&(x350==x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -95080466530111LL;
	uint16_t x354 = 5195U;
	uint64_t x355 = UINT64_MAX;
	volatile int64_t x356 = -265353865481LL;
	volatile int32_t t88 = -1;

	t88 = ((x353&(x354==x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	static volatile uint64_t x359 = 1LLU;
	uint32_t x360 = 36288U;

	t89 = ((x357&(x358==x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = -261520276593LL;

	t90 = ((x361&(x362==x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1015721;
	static int64_t x366 = -4258042LL;
	int16_t x367 = 1973;
	volatile uint32_t x368 = 29416U;
	static volatile int32_t t91 = 12380500;

	t91 = ((x365&(x366==x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	volatile int16_t x372 = -1;
	int32_t t92 = -350;

	t92 = ((x369&(x370==x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = 2;
	volatile int32_t t93 = 19559;

	t93 = ((x373&(x374==x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	volatile uint32_t x379 = 316U;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 0;

	t94 = ((x377&(x378==x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = 2;
	static volatile uint8_t x384 = UINT8_MAX;
	int32_t t95 = -321;

	t95 = ((x381&(x382==x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 357955800U;
	static uint8_t x386 = 17U;
	volatile int32_t x387 = -1;
	uint8_t x388 = 119U;
	int32_t t96 = 12053;

	t96 = ((x385&(x386==x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -1;
	int64_t x390 = 201853260921LL;
	int16_t x391 = 219;
	static volatile int8_t x392 = INT8_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x389&(x390==x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x394 = INT16_MIN;
	volatile int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t98 = -2418;

	t98 = ((x393&(x394==x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x398 = 274515962571LL;
	int32_t x399 = 1;
	volatile int8_t x400 = -1;
	int32_t t99 = 11707;

	t99 = ((x397&(x398==x399))==x400);

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

