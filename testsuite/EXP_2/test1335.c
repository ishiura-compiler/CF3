#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x6 = UINT16_MAX;
volatile uint16_t x8 = UINT16_MAX;
int64_t x10 = INT64_MIN;
int64_t x14 = INT64_MAX;
volatile int32_t t3 = -522409;
volatile int32_t x23 = INT32_MIN;
volatile int8_t x31 = 3;
int32_t x32 = INT32_MIN;
int8_t x33 = INT8_MAX;
static int8_t x37 = 19;
static int32_t x40 = INT32_MAX;
volatile int8_t x46 = INT8_MIN;
volatile int32_t t11 = -227700;
int64_t x49 = -1LL;
static int8_t x51 = INT8_MIN;
int8_t x56 = INT8_MIN;
int16_t x57 = -49;
int8_t x64 = INT8_MIN;
int32_t x67 = 1;
volatile int32_t t16 = -61;
static int32_t x81 = INT32_MIN;
int32_t x91 = -1;
volatile int32_t t24 = 6;
static volatile int64_t x102 = INT64_MAX;
volatile uint32_t x109 = UINT32_MAX;
uint16_t x111 = UINT16_MAX;
uint8_t x112 = 2U;
int64_t x113 = -1LL;
int8_t x114 = -6;
static volatile int16_t x116 = -1;
static int32_t x118 = -1;
volatile int32_t x121 = INT32_MIN;
uint16_t x134 = 5872U;
volatile int16_t x136 = INT16_MAX;
uint8_t x138 = 96U;
static int32_t t34 = 7;
int32_t t35 = -1779403;
uint64_t x169 = 64239576193LLU;
volatile int16_t x171 = INT16_MAX;
uint32_t x181 = 27825496U;
int16_t x188 = INT16_MIN;
int8_t x189 = 1;
static int16_t x191 = INT16_MIN;
int32_t x193 = INT32_MAX;
volatile int8_t x198 = INT8_MAX;
uint32_t x200 = 245U;
int32_t t49 = -10973523;
int16_t x201 = INT16_MAX;
uint64_t x205 = 700LLU;
static uint16_t x207 = UINT16_MAX;
int64_t x209 = INT64_MIN;
int32_t t54 = 3;
int8_t x233 = INT8_MIN;
uint16_t x238 = UINT16_MAX;
int32_t t59 = 14;
volatile int32_t t60 = 337;
static int32_t x246 = INT32_MAX;
int64_t x248 = INT64_MIN;
volatile int32_t t61 = -34209674;
int32_t x252 = -1;
uint8_t x258 = 12U;
static int32_t t64 = -116011180;
uint16_t x262 = UINT16_MAX;
volatile uint32_t x264 = 21U;
volatile int64_t x267 = -1LL;
uint32_t x281 = 0U;
int8_t x285 = -27;
static volatile int32_t t71 = -147;
static int8_t x296 = -1;
static int32_t x299 = INT32_MIN;
int64_t x303 = INT64_MIN;
uint32_t x304 = UINT32_MAX;
volatile int32_t x306 = -20210232;
uint32_t x307 = UINT32_MAX;
uint16_t x313 = 7U;
uint32_t x314 = 27U;
volatile int32_t t78 = -163;
uint64_t x317 = 197LLU;
uint8_t x318 = 2U;
volatile uint16_t x324 = 445U;
uint16_t x332 = UINT16_MAX;
uint16_t x334 = UINT16_MAX;
int8_t x338 = INT8_MAX;
volatile int32_t x342 = INT32_MIN;
static int16_t x343 = 1;
static int16_t x347 = INT16_MAX;
int64_t x353 = 379562LL;
int32_t x355 = INT32_MIN;
int8_t x360 = INT8_MIN;
int8_t x361 = INT8_MIN;
volatile int16_t x363 = -14;
volatile int32_t t91 = -64578207;
volatile int32_t t93 = 12496136;
int8_t x381 = 1;
int32_t x388 = INT32_MIN;
static int32_t t96 = 120942063;
int8_t x390 = -1;
static uint32_t x391 = 262169U;


void f0(void) {
	int32_t x1 = 1004238;
	uint64_t x2 = 49LLU;
	uint64_t x3 = 277LLU;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -7524;

	t0 = ((x1|(x2==x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1994676529U;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = -474;

	t1 = ((x5|(x6==x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = -52718062;

	t2 = ((x9|(x10==x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 6572394LLU;
	static int64_t x15 = 1464376803LL;
	uint64_t x16 = 65194LLU;

	t3 = ((x13|(x14==x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	int32_t x20 = -1;
	volatile int32_t t4 = -108267;

	t4 = ((x17|(x18==x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint16_t x22 = 4043U;
	int64_t x24 = INT64_MAX;
	static volatile int32_t t5 = -1;

	t5 = ((x21|(x22==x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MAX;
	int16_t x28 = -522;
	volatile int32_t t6 = -442519;

	t6 = ((x25|(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	static uint64_t x30 = UINT64_MAX;
	volatile int32_t t7 = -279691212;

	t7 = ((x29|(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 26U;
	int8_t x35 = INT8_MAX;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 1750616;

	t8 = ((x33|(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	volatile uint16_t x39 = 8308U;
	static int32_t t9 = 0;

	t9 = ((x37|(x38==x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 6722698525064LLU;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	int32_t t10 = 2;

	t10 = ((x41|(x42==x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = 157432914766612LL;
	volatile uint8_t x47 = UINT8_MAX;
	uint16_t x48 = UINT16_MAX;

	t11 = ((x45|(x46==x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MAX;
	int64_t x52 = 3396043192463766721LL;
	int32_t t12 = 215377167;

	t12 = ((x49|(x50==x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x54 = 507144791019LL;
	int64_t x55 = 14177252698785754LL;
	volatile int32_t t13 = -6;

	t13 = ((x53|(x54==x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -76244LL;
	int32_t x59 = -1;
	uint32_t x60 = 1U;
	volatile int32_t t14 = -10363;

	t14 = ((x57|(x58==x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	int64_t x62 = 7152410LL;
	int32_t x63 = -1;
	static volatile int32_t t15 = 23;

	t15 = ((x61|(x62==x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MIN;
	static int32_t x68 = INT32_MAX;

	t16 = ((x65|(x66==x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -2;
	int32_t x70 = INT32_MIN;
	uint64_t x71 = 2049LLU;
	volatile int32_t x72 = 14376;
	volatile int32_t t17 = 32022;

	t17 = ((x69|(x70==x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -2;
	int32_t x74 = -4677244;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = 10534;
	int32_t t18 = 155157;

	t18 = ((x73|(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = 254689718;
	int64_t x79 = INT64_MAX;
	static volatile uint64_t x80 = 602544LLU;
	volatile int32_t t19 = 577352;

	t19 = ((x77|(x78==x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = -1;
	volatile int64_t x83 = INT64_MIN;
	int16_t x84 = -1;
	volatile int32_t t20 = 4339;

	t20 = ((x81|(x82==x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -32;
	volatile uint8_t x86 = 67U;
	uint32_t x87 = 167U;
	int32_t x88 = 9327;
	int32_t t21 = 23023188;

	t21 = ((x85|(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x89 = 107892033U;
	int64_t x90 = 30430096LL;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = 27;

	t22 = ((x89|(x90==x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	static int8_t x95 = -6;
	int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 15;

	t23 = ((x93|(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 0U;
	int8_t x99 = INT8_MAX;
	int32_t x100 = -1;

	t24 = ((x97|(x98==x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	static int32_t x104 = -1;
	volatile int32_t t25 = 488711050;

	t25 = ((x101|(x102==x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	int8_t x107 = -3;
	uint8_t x108 = UINT8_MAX;
	int32_t t26 = 10264306;

	t26 = ((x105|(x106==x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 8U;
	volatile int32_t t27 = 542170534;

	t27 = ((x109|(x110==x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x115 = 47U;
	volatile int32_t t28 = 488965;

	t28 = ((x113|(x114==x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	int8_t x119 = -1;
	static uint64_t x120 = 149LLU;
	volatile int32_t t29 = 6255;

	t29 = ((x117|(x118==x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 3816U;
	static uint64_t x123 = 641229154780LLU;
	static int16_t x124 = -1;
	int32_t t30 = -29336;

	t30 = ((x121|(x122==x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x125 = INT16_MIN;
	volatile uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 779399U;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -7;

	t31 = ((x125|(x126==x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	volatile int8_t x130 = INT8_MAX;
	int32_t x131 = -1;
	int32_t x132 = -1;
	static int32_t t32 = 5;

	t32 = ((x129|(x130==x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static int64_t x135 = INT64_MIN;
	volatile int32_t t33 = -44817;

	t33 = ((x133|(x134==x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 1U;
	static int16_t x139 = -325;
	int64_t x140 = 530LL;

	t34 = ((x137|(x138==x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	int8_t x142 = INT8_MAX;
	uint32_t x143 = 2590U;
	int32_t x144 = INT32_MAX;

	t35 = ((x141|(x142==x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -5448;
	uint64_t x147 = 19432LLU;
	volatile int32_t x148 = INT32_MIN;
	int32_t t36 = 190;

	t36 = ((x145|(x146==x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = 6356;
	int8_t x151 = INT8_MIN;
	int8_t x152 = 41;
	volatile int32_t t37 = 3;

	t37 = ((x149|(x150==x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	int8_t x154 = -1;
	int64_t x155 = INT64_MIN;
	int64_t x156 = -446853674086LL;
	int32_t t38 = 51858;

	t38 = ((x153|(x154==x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint8_t x158 = UINT8_MAX;
	static int8_t x159 = 0;
	static uint64_t x160 = 8268683634262LLU;
	volatile int32_t t39 = 17526228;

	t39 = ((x157|(x158==x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 101LLU;
	volatile int8_t x162 = -1;
	int64_t x163 = 83LL;
	uint64_t x164 = 15321LLU;
	int32_t t40 = -219915963;

	t40 = ((x161|(x162==x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 1;
	int8_t x166 = -6;
	uint64_t x167 = 4320760653690LLU;
	static uint32_t x168 = 42U;
	volatile int32_t t41 = 0;

	t41 = ((x165|(x166==x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = 315745LL;
	static int64_t x172 = 1392LL;
	volatile int32_t t42 = 9;

	t42 = ((x169|(x170==x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	static volatile int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	int32_t t43 = -84031506;

	t43 = ((x173|(x174==x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1U;
	int16_t x178 = 210;
	int16_t x179 = -1;
	uint32_t x180 = 83557U;
	int32_t t44 = 1085;

	t44 = ((x177|(x178==x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x182 = -1;
	volatile int32_t x183 = -2331177;
	int32_t x184 = -1;
	volatile int32_t t45 = 0;

	t45 = ((x181|(x182==x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 3256;
	uint16_t x186 = 2613U;
	static int16_t x187 = 5473;
	int32_t t46 = 12216;

	t46 = ((x185|(x186==x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 1U;
	static volatile uint16_t x192 = 29716U;
	volatile int32_t t47 = 253485642;

	t47 = ((x189|(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = 0U;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -1518668;

	t48 = ((x193|(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	static int16_t x199 = INT16_MAX;

	t49 = ((x197|(x198==x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x202 = 1298069LLU;
	uint32_t x203 = 111U;
	volatile uint32_t x204 = 15011256U;
	volatile int32_t t50 = -466;

	t50 = ((x201|(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	uint32_t x208 = UINT32_MAX;
	static volatile int32_t t51 = -23;

	t51 = ((x205|(x206==x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = 7;
	static int16_t x211 = 150;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 0;

	t52 = ((x209|(x210==x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 37;
	int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	uint32_t x216 = UINT32_MAX;
	int32_t t53 = 181624804;

	t53 = ((x213|(x214==x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	volatile int16_t x218 = INT16_MIN;
	uint16_t x219 = 20654U;
	static int32_t x220 = INT32_MIN;

	t54 = ((x217|(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 65361;

	t55 = ((x221|(x222==x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	uint32_t x226 = UINT32_MAX;
	static int16_t x227 = 34;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -68420;

	t56 = ((x225|(x226==x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	uint16_t x230 = UINT16_MAX;
	uint32_t x231 = 1U;
	int64_t x232 = -1LL;
	volatile int32_t t57 = -625;

	t57 = ((x229|(x230==x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = -1;
	int64_t x235 = INT64_MAX;
	volatile int8_t x236 = -1;
	volatile int32_t t58 = -51905846;

	t58 = ((x233|(x234==x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -1LL;
	uint8_t x239 = UINT8_MAX;
	uint32_t x240 = 4243097U;

	t59 = ((x237|(x238==x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 22999U;
	static volatile int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MAX;
	int16_t x244 = -39;

	t60 = ((x241|(x242==x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	int32_t x247 = INT32_MAX;

	t61 = ((x245|(x246==x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 81U;
	static int32_t t62 = -4155785;

	t62 = ((x249|(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -1;
	volatile uint32_t x254 = 151U;
	int32_t x255 = 183973;
	int16_t x256 = INT16_MAX;
	int32_t t63 = 126853216;

	t63 = ((x253|(x254==x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int64_t x259 = INT64_MIN;
	volatile int8_t x260 = INT8_MIN;

	t64 = ((x257|(x258==x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 10053LLU;
	uint64_t x263 = 512315LLU;
	int32_t t65 = -868476;

	t65 = ((x261|(x262==x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -1;
	uint8_t x266 = 5U;
	int16_t x268 = 64;
	volatile int32_t t66 = -13440248;

	t66 = ((x265|(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = -1;
	static int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -6;

	t67 = ((x269|(x270==x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = INT32_MAX;
	int16_t x275 = 1160;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -1;

	t68 = ((x273|(x274==x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -1LL;
	int16_t x278 = 2045;
	int8_t x279 = -1;
	int16_t x280 = -2;
	volatile int32_t t69 = 243;

	t69 = ((x277|(x278==x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = 82;
	int16_t x283 = -1;
	static volatile int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 2174;

	t70 = ((x281|(x282==x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x286 = 0U;
	uint32_t x287 = 8956451U;
	uint64_t x288 = UINT64_MAX;

	t71 = ((x285|(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -2042;
	uint32_t x290 = UINT32_MAX;
	static uint64_t x291 = UINT64_MAX;
	uint64_t x292 = UINT64_MAX;
	int32_t t72 = -4;

	t72 = ((x289|(x290==x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int64_t x294 = 0LL;
	volatile int16_t x295 = -1;
	volatile int32_t t73 = 419195876;

	t73 = ((x293|(x294==x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 13U;
	int32_t x298 = -1;
	static uint64_t x300 = 14526065037724LLU;
	static volatile int32_t t74 = -564150;

	t74 = ((x297|(x298==x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 837064LL;
	static int32_t x302 = -1;
	volatile int32_t t75 = -487;

	t75 = ((x301|(x302==x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	int32_t x308 = -1;
	volatile int32_t t76 = 1;

	t76 = ((x305|(x306==x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	volatile int32_t x310 = INT32_MAX;
	int32_t x311 = -54;
	volatile int64_t x312 = 26412551LL;
	static int32_t t77 = -18792;

	t77 = ((x309|(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = INT16_MIN;

	t78 = ((x313|(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x319 = INT8_MAX;
	static int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -98452;

	t79 = ((x317|(x318==x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1LL;
	static volatile uint64_t x322 = UINT64_MAX;
	int16_t x323 = -12166;
	volatile int32_t t80 = 108104379;

	t80 = ((x321|(x322==x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint32_t x326 = 17U;
	uint16_t x327 = 420U;
	static int8_t x328 = INT8_MIN;
	int32_t t81 = 775336652;

	t81 = ((x325|(x326==x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MAX;
	volatile int64_t x331 = INT64_MAX;
	volatile int32_t t82 = -23;

	t82 = ((x329|(x330==x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 4075689LLU;
	int32_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	static int32_t t83 = 25056;

	t83 = ((x333|(x334==x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x337 = INT64_MIN;
	uint32_t x339 = 36527U;
	static int32_t x340 = 53;
	volatile int32_t t84 = 0;

	t84 = ((x337|(x338==x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -1;

	t85 = ((x341|(x342==x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	static uint32_t x346 = 1971881U;
	volatile int8_t x348 = -1;
	volatile int32_t t86 = -2193342;

	t86 = ((x345|(x346==x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 50U;
	int16_t x350 = INT16_MIN;
	static volatile int8_t x351 = -1;
	int64_t x352 = -1LL;
	volatile int32_t t87 = 4813280;

	t87 = ((x349|(x350==x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x354 = 7953U;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 381;

	t88 = ((x353|(x354==x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x357 = 689U;
	static int32_t x358 = INT32_MIN;
	volatile int64_t x359 = INT64_MAX;
	int32_t t89 = -2;

	t89 = ((x357|(x358==x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x362 = UINT32_MAX;
	uint16_t x364 = 97U;
	int32_t t90 = 104279341;

	t90 = ((x361|(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	volatile uint16_t x366 = 43U;
	int32_t x367 = INT32_MIN;
	static int32_t x368 = INT32_MAX;

	t91 = ((x365|(x366==x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 96422168LLU;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -37455173348861LL;
	static int32_t x372 = -24;
	volatile int32_t t92 = -31513597;

	t92 = ((x369|(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = UINT8_MAX;
	uint16_t x374 = 4011U;
	int64_t x375 = INT64_MAX;
	volatile uint16_t x376 = UINT16_MAX;

	t93 = ((x373|(x374==x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	static int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MIN;
	static int32_t t94 = 3;

	t94 = ((x377|(x378==x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -1;
	int16_t x383 = -1;
	static volatile int64_t x384 = INT64_MAX;
	static int32_t t95 = 3405310;

	t95 = ((x381|(x382==x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = UINT8_MAX;
	volatile uint32_t x386 = 4067410U;
	int16_t x387 = INT16_MIN;

	t96 = ((x385|(x386==x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = -17;

	t97 = ((x389|(x390==x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = INT8_MIN;
	uint16_t x394 = 5874U;
	static int8_t x395 = INT8_MIN;
	static int16_t x396 = -1;
	int32_t t98 = -27600;

	t98 = ((x393|(x394==x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -236;
	static int32_t x398 = INT32_MIN;
	uint8_t x399 = 25U;
	int32_t x400 = 165935045;
	volatile int32_t t99 = 0;

	t99 = ((x397|(x398==x399))<x400);

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

