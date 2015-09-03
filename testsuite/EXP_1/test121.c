#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 1263915686980LLU;
volatile uint32_t x11 = 11087U;
uint64_t x16 = 928LLU;
int64_t x20 = INT64_MAX;
int64_t x21 = INT64_MIN;
volatile int64_t t5 = 3384154511LL;
static uint64_t x34 = 848839LLU;
static int16_t x46 = -1506;
int32_t t9 = -1;
int16_t x49 = -9;
volatile uint64_t x67 = 3046271LLU;
static volatile int16_t x68 = 572;
int32_t x70 = INT32_MIN;
int8_t x77 = INT8_MIN;
volatile int64_t x87 = -40LL;
int32_t x92 = INT32_MAX;
int32_t t16 = -29922;
volatile int64_t x95 = 14LL;
static volatile int32_t x96 = -10;
static int8_t x99 = INT8_MIN;
static int16_t x105 = INT16_MAX;
int32_t x107 = INT32_MAX;
uint32_t x112 = UINT32_MAX;
int16_t x116 = -1;
int8_t x125 = -53;
int16_t x131 = 3;
volatile int32_t t24 = -1;
static int8_t x142 = INT8_MIN;
uint64_t x143 = UINT64_MAX;
uint16_t x149 = 26489U;
int32_t t28 = 0;
uint64_t x169 = UINT64_MAX;
static int16_t x172 = -3945;
volatile int32_t t32 = 4830;
uint32_t x174 = UINT32_MAX;
volatile int32_t t33 = 473;
volatile uint64_t x177 = UINT64_MAX;
uint8_t x181 = 3U;
static volatile uint64_t x182 = UINT64_MAX;
volatile int32_t t35 = 27409;
int8_t x185 = INT8_MIN;
uint64_t x187 = UINT64_MAX;
uint64_t x189 = 13024373LLU;
uint32_t x192 = UINT32_MAX;
uint16_t x200 = 96U;
int32_t t39 = 1963;
int8_t x201 = INT8_MIN;
int16_t x204 = INT16_MIN;
int32_t t40 = -99135778;
int16_t x206 = -1;
int32_t x211 = INT32_MAX;
volatile int32_t t42 = 6;
int8_t x216 = INT8_MIN;
static int32_t x219 = INT32_MAX;
uint16_t x225 = 15817U;
volatile int32_t x228 = -26553491;
int8_t x230 = INT8_MIN;
int16_t x234 = 182;
int32_t x257 = 397678;
uint16_t x260 = 21U;
int32_t x274 = INT32_MIN;
int32_t x275 = INT32_MAX;
static uint16_t x281 = UINT16_MAX;
uint32_t x283 = 1836869U;
int8_t x285 = -1;
static int8_t x288 = INT8_MIN;
static volatile int32_t t56 = 5;
volatile int16_t x306 = -13;
int32_t x307 = INT32_MIN;
volatile uint32_t t62 = 497694U;
uint32_t x313 = 172537U;
volatile uint16_t x319 = UINT16_MAX;
int16_t x323 = INT16_MIN;
uint8_t x325 = 21U;
volatile int8_t x327 = INT8_MIN;
volatile int32_t t66 = 2;
volatile int32_t t67 = -2572;
int32_t t68 = -7089873;
static int32_t x339 = INT32_MAX;
static int32_t x343 = -1;
int16_t x344 = INT16_MAX;
int16_t x345 = 109;
int16_t x347 = INT16_MAX;
uint16_t x357 = UINT16_MAX;
int32_t x359 = 1489;
int64_t x362 = INT64_MAX;
uint32_t x371 = 4128U;
volatile int32_t t74 = -1;
int32_t x375 = 42;
uint16_t x380 = 12475U;
uint8_t x386 = 6U;
int64_t x387 = 1LL;
uint64_t x390 = UINT64_MAX;
uint8_t x394 = UINT8_MAX;
static uint32_t x400 = 1135U;
volatile int32_t x409 = INT32_MIN;
uint32_t x410 = UINT32_MAX;
int64_t x412 = INT64_MIN;
int16_t x417 = INT16_MIN;
volatile int8_t x418 = -1;
static int16_t x420 = -198;
int64_t x432 = -1LL;
volatile int16_t x440 = 893;
int64_t x441 = INT64_MIN;
uint64_t x443 = 1500984817857137165LLU;
int16_t x447 = -41;
volatile uint16_t x452 = 3U;
int16_t x456 = 40;
volatile uint16_t x459 = 1995U;
static int16_t x461 = -283;
int32_t x462 = INT32_MAX;
static uint8_t x486 = UINT8_MAX;
int8_t x487 = -1;
volatile int32_t t99 = -7;


void f0(void) {
	uint8_t x1 = 50U;
	volatile int16_t x2 = -19;
	int32_t x3 = -3;
	volatile int8_t x4 = 43;
	static volatile int32_t t0 = -347625772;

	t0 = (((x1+x2)<=x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	static int64_t x12 = 735644LL;
	volatile int64_t t1 = 35795442303610116LL;

	t1 = (((x9+x10)<=x11)/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	int32_t x14 = 986038006;
	volatile uint16_t x15 = 1U;
	uint64_t t2 = 12742796191558256LLU;

	t2 = (((x13+x14)<=x15)/x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -3;
	volatile int16_t x18 = -15;
	static uint16_t x19 = 852U;
	volatile int64_t t3 = -12217703241452876LL;

	t3 = (((x17+x18)<=x19)/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = UINT64_MAX;
	uint32_t x23 = 31597U;
	int32_t x24 = INT32_MAX;
	int32_t t4 = -14981782;

	t4 = (((x21+x22)<=x23)/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	static volatile uint64_t x26 = 1742258521465LLU;
	volatile int16_t x27 = -6473;
	int64_t x28 = INT64_MIN;

	t5 = (((x25+x26)<=x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int16_t x30 = -1;
	static int8_t x31 = -1;
	int64_t x32 = -1LL;
	static volatile int64_t t6 = -10764811158LL;

	t6 = (((x29+x30)<=x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 4U;
	int32_t x35 = INT32_MIN;
	static int32_t x36 = INT32_MAX;
	int32_t t7 = -2;

	t7 = (((x33+x34)<=x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MAX;
	uint64_t x42 = 1360736832449065065LLU;
	uint32_t x43 = 6U;
	int8_t x44 = 15;
	volatile int32_t t8 = -106404188;

	t8 = (((x41+x42)<=x43)/x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x47 = 302U;
	int32_t x48 = INT32_MAX;

	t9 = (((x45+x46)<=x47)/x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = 83226947U;
	static int32_t x52 = -160621362;
	int32_t t10 = -280637;

	t10 = (((x49+x50)<=x51)/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	uint8_t x58 = 4U;
	int32_t x59 = 522;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 579307LLU;

	t11 = (((x57+x58)<=x59)/x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x65 = INT16_MIN;
	volatile uint8_t x66 = UINT8_MAX;
	int32_t t12 = -245;

	t12 = (((x65+x66)<=x67)/x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MAX;
	int16_t x71 = 2;
	int8_t x72 = INT8_MIN;
	static int32_t t13 = 1657;

	t13 = (((x69+x70)<=x71)/x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = -1;
	int16_t x79 = 0;
	uint16_t x80 = 61U;
	volatile int32_t t14 = -1952;

	t14 = (((x77+x78)<=x79)/x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x85 = 21830576;
	volatile uint8_t x86 = 2U;
	int32_t x88 = -93;
	volatile int32_t t15 = -234671624;

	t15 = (((x85+x86)<=x87)/x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x89 = INT16_MIN;
	static int16_t x90 = INT16_MIN;
	int8_t x91 = -24;

	t16 = (((x89+x90)<=x91)/x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	int32_t x94 = -1;
	int32_t t17 = -361855;

	t17 = (((x93+x94)<=x95)/x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x98 = UINT64_MAX;
	static int64_t x100 = 31616LL;
	static volatile int64_t t18 = 2109LL;

	t18 = (((x97+x98)<=x99)/x100);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x106 = -1;
	volatile int32_t x108 = INT32_MAX;
	int32_t t19 = -231;

	t19 = (((x105+x106)<=x107)/x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = -1;
	int8_t x111 = INT8_MAX;
	volatile uint32_t t20 = 12057882U;

	t20 = (((x109+x110)<=x111)/x112);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x113 = 1059U;
	uint64_t x114 = 660LLU;
	int64_t x115 = INT64_MAX;
	static volatile int32_t t21 = 2032;

	t21 = (((x113+x114)<=x115)/x116);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x117 = INT16_MAX;
	static int64_t x118 = INT64_MIN;
	uint32_t x119 = 6415U;
	uint8_t x120 = 4U;
	int32_t t22 = -1;

	t22 = (((x117+x118)<=x119)/x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x126 = 150U;
	static int16_t x127 = 12;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t23 = 8680274U;

	t23 = (((x125+x126)<=x127)/x128);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int64_t x130 = INT64_MIN;
	uint16_t x132 = UINT16_MAX;

	t24 = (((x129+x130)<=x131)/x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 247313138054961LLU;
	int32_t x134 = INT32_MIN;
	static volatile uint64_t x135 = 668764LLU;
	uint32_t x136 = 588915588U;
	uint32_t t25 = 18809922U;

	t25 = (((x133+x134)<=x135)/x136);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x141 = -1;
	int64_t x144 = INT64_MIN;
	volatile int64_t t26 = 2274549569238582LL;

	t26 = (((x141+x142)<=x143)/x144);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MAX;
	int32_t x147 = -181388866;
	int64_t x148 = -1LL;
	int64_t t27 = 391124545LL;

	t27 = (((x145+x146)<=x147)/x148);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x150 = INT8_MIN;
	static uint16_t x151 = 54U;
	static volatile int16_t x152 = -265;

	t28 = (((x149+x150)<=x151)/x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x153 = 41U;
	volatile int8_t x154 = -6;
	int16_t x155 = INT16_MIN;
	volatile uint8_t x156 = 5U;
	volatile int32_t t29 = -470;

	t29 = (((x153+x154)<=x155)/x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x157 = INT8_MIN;
	uint32_t x158 = 2U;
	static int16_t x159 = INT16_MAX;
	int32_t x160 = -22;
	volatile int32_t t30 = -64455;

	t30 = (((x157+x158)<=x159)/x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = 19929080LLU;
	int32_t x166 = -3528;
	uint8_t x167 = 12U;
	static volatile uint8_t x168 = 15U;
	static int32_t t31 = -4364;

	t31 = (((x165+x166)<=x167)/x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x170 = -1LL;
	uint64_t x171 = 206242727171886LLU;

	t32 = (((x169+x170)<=x171)/x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = -1;
	int16_t x175 = -5731;
	static uint8_t x176 = UINT8_MAX;

	t33 = (((x173+x174)<=x175)/x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x178 = 1082391804242504LLU;
	volatile uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t34 = -19148061;

	t34 = (((x177+x178)<=x179)/x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x183 = INT16_MAX;
	static volatile int8_t x184 = INT8_MAX;

	t35 = (((x181+x182)<=x183)/x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x186 = 314U;
	static int8_t x188 = -23;
	int32_t t36 = 1017;

	t36 = (((x185+x186)<=x187)/x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x190 = INT64_MAX;
	volatile int32_t x191 = -11560;
	uint32_t t37 = 1264551U;

	t37 = (((x189+x190)<=x191)/x192);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x193 = 11U;
	int16_t x194 = -1;
	volatile int32_t x195 = INT32_MIN;
	uint64_t x196 = 298987641810341LLU;
	static uint64_t t38 = 1328569624940LLU;

	t38 = (((x193+x194)<=x195)/x196);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = -57;
	uint16_t x198 = 5U;
	int16_t x199 = -1;

	t39 = (((x197+x198)<=x199)/x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x202 = 14613610;
	static int32_t x203 = 8385;

	t40 = (((x201+x202)<=x203)/x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = 7457006;
	uint32_t x207 = UINT32_MAX;
	static volatile int16_t x208 = INT16_MIN;
	int32_t t41 = 34808;

	t41 = (((x205+x206)<=x207)/x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x209 = 57;
	volatile int64_t x210 = INT64_MIN;
	int16_t x212 = 1;

	t42 = (((x209+x210)<=x211)/x212);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x213 = 6;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = 522U;
	int32_t t43 = 9906;

	t43 = (((x213+x214)<=x215)/x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MAX;
	int64_t x220 = 142594842LL;
	volatile int64_t t44 = -169942507923300683LL;

	t44 = (((x217+x218)<=x219)/x220);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x226 = -1;
	uint8_t x227 = 1U;
	int32_t t45 = 12421;

	t45 = (((x225+x226)<=x227)/x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = 33393U;
	int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	volatile int64_t t46 = -733301721592230965LL;

	t46 = (((x229+x230)<=x231)/x232);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x233 = -1LL;
	volatile int8_t x235 = INT8_MAX;
	static int64_t x236 = INT64_MIN;
	int64_t t47 = 65730240228LL;

	t47 = (((x233+x234)<=x235)/x236);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 61U;
	int8_t x247 = -36;
	uint16_t x248 = 7045U;
	volatile int32_t t48 = 1;

	t48 = (((x245+x246)<=x247)/x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t49 = 47289214;

	t49 = (((x253+x254)<=x255)/x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x258 = 3020U;
	int16_t x259 = INT16_MAX;
	int32_t t50 = 885;

	t50 = (((x257+x258)<=x259)/x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x261 = INT64_MIN;
	uint16_t x262 = 2U;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	volatile int64_t t51 = 986324562154LL;

	t51 = (((x261+x262)<=x263)/x264);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x265 = -845903418773LL;
	int8_t x266 = 11;
	int32_t x267 = 3164361;
	uint8_t x268 = 36U;
	int32_t t52 = 35742273;

	t52 = (((x265+x266)<=x267)/x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x273 = INT16_MAX;
	int8_t x276 = 1;
	int32_t t53 = 3654939;

	t53 = (((x273+x274)<=x275)/x276);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = INT8_MIN;
	static int16_t x278 = -538;
	int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t54 = 52;

	t54 = (((x277+x278)<=x279)/x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x282 = -93;
	volatile int8_t x284 = INT8_MIN;
	int32_t t55 = -5;

	t55 = (((x281+x282)<=x283)/x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x286 = 130800798634LL;
	static int32_t x287 = INT32_MIN;

	t56 = (((x285+x286)<=x287)/x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x289 = -58339612057739654LL;
	int8_t x290 = -5;
	static uint16_t x291 = 1U;
	static volatile int8_t x292 = -1;
	int32_t t57 = 53768;

	t57 = (((x289+x290)<=x291)/x292);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x293 = 14808U;
	volatile uint64_t x294 = 34219390761950LLU;
	int8_t x295 = -4;
	int16_t x296 = -1;
	volatile int32_t t58 = 465859277;

	t58 = (((x293+x294)<=x295)/x296);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int32_t x298 = -1626;
	int8_t x299 = -1;
	uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t59 = 14LLU;

	t59 = (((x297+x298)<=x299)/x300);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x301 = -2439;
	static int64_t x302 = INT64_MAX;
	int32_t x303 = -8;
	uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t60 = 1437695986LLU;

	t60 = (((x301+x302)<=x303)/x304);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x305 = -186;
	int64_t x308 = INT64_MAX;
	static volatile int64_t t61 = 105317383LL;

	t61 = (((x305+x306)<=x307)/x308);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x309 = 152899250634378LLU;
	static int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = 5619054U;

	t62 = (((x309+x310)<=x311)/x312);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x314 = 31645U;
	int64_t x315 = INT64_MIN;
	volatile int8_t x316 = -1;
	static int32_t t63 = 9634502;

	t63 = (((x313+x314)<=x315)/x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x317 = 0U;
	static int32_t x318 = -1;
	volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t64 = 0LLU;

	t64 = (((x317+x318)<=x319)/x320);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = -1;
	int64_t x322 = 16392285557LL;
	int32_t x324 = -73155;
	int32_t t65 = -4;

	t65 = (((x321+x322)<=x323)/x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x326 = INT64_MIN;
	volatile int16_t x328 = 116;

	t66 = (((x325+x326)<=x327)/x328);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x329 = 29;
	int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	int16_t x332 = -5;

	t67 = (((x329+x330)<=x331)/x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = 0U;
	int64_t x334 = INT64_MIN;
	volatile int32_t x335 = -1;
	uint8_t x336 = UINT8_MAX;

	t68 = (((x333+x334)<=x335)/x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = INT8_MAX;
	int8_t x338 = -1;
	volatile uint32_t x340 = 949838856U;
	uint32_t t69 = 3861U;

	t69 = (((x337+x338)<=x339)/x340);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x341 = INT32_MAX;
	static int16_t x342 = INT16_MIN;
	volatile int32_t t70 = 0;

	t70 = (((x341+x342)<=x343)/x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x346 = INT8_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t71 = 169229423LLU;

	t71 = (((x345+x346)<=x347)/x348);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x358 = INT32_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t72 = -67315509;

	t72 = (((x357+x358)<=x359)/x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -1;
	int64_t x363 = 1LL;
	int16_t x364 = INT16_MIN;
	volatile int32_t t73 = 9;

	t73 = (((x361+x362)<=x363)/x364);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = 354U;
	int8_t x372 = INT8_MAX;

	t74 = (((x369+x370)<=x371)/x372);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = -2;
	int16_t x374 = -714;
	uint64_t x376 = 15787LLU;
	uint64_t t75 = 5506LLU;

	t75 = (((x373+x374)<=x375)/x376);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x377 = UINT16_MAX;
	static volatile int8_t x378 = -17;
	static volatile uint16_t x379 = 3076U;
	static volatile int32_t t76 = -17147844;

	t76 = (((x377+x378)<=x379)/x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = 28U;
	int32_t x383 = INT32_MIN;
	static uint16_t x384 = 31U;
	int32_t t77 = 1596449;

	t77 = (((x381+x382)<=x383)/x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = -1;
	int64_t x388 = -18393752134640888LL;
	static volatile int64_t t78 = 2783144654287LL;

	t78 = (((x385+x386)<=x387)/x388);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x389 = 804018041635LLU;
	int32_t x391 = INT32_MAX;
	int16_t x392 = INT16_MIN;
	int32_t t79 = -578768;

	t79 = (((x389+x390)<=x391)/x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = INT32_MIN;
	static int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	static int32_t t80 = 61;

	t80 = (((x393+x394)<=x395)/x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = -3;
	int8_t x398 = 0;
	int8_t x399 = -1;
	volatile uint32_t t81 = 728937U;

	t81 = (((x397+x398)<=x399)/x400);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x401 = 1U;
	static int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MIN;
	static volatile int32_t t82 = 33935488;

	t82 = (((x401+x402)<=x403)/x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MAX;
	static uint32_t x407 = 1789419U;
	int64_t x408 = INT64_MAX;
	volatile int64_t t83 = -24LL;

	t83 = (((x405+x406)<=x407)/x408);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x411 = 1448678773911079LLU;
	static int64_t t84 = -13LL;

	t84 = (((x409+x410)<=x411)/x412);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x413 = INT64_MIN;
	int32_t x414 = INT32_MAX;
	uint64_t x415 = 35012460LLU;
	int32_t x416 = INT32_MAX;
	volatile int32_t t85 = -58809546;

	t85 = (((x413+x414)<=x415)/x416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x419 = UINT8_MAX;
	int32_t t86 = 663;

	t86 = (((x417+x418)<=x419)/x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x425 = -904154896891276725LL;
	uint16_t x426 = 1527U;
	static uint32_t x427 = UINT32_MAX;
	int16_t x428 = INT16_MIN;
	volatile int32_t t87 = -1;

	t87 = (((x425+x426)<=x427)/x428);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x429 = 1U;
	static int8_t x430 = -62;
	int32_t x431 = -1;
	int64_t t88 = -1891LL;

	t88 = (((x429+x430)<=x431)/x432);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x433 = -1;
	int64_t x434 = -294313LL;
	int64_t x435 = -1LL;
	static uint8_t x436 = UINT8_MAX;
	int32_t t89 = 745898764;

	t89 = (((x433+x434)<=x435)/x436);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x437 = 131155U;
	volatile int8_t x438 = 3;
	int16_t x439 = INT16_MAX;
	static volatile int32_t t90 = 91;

	t90 = (((x437+x438)<=x439)/x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x442 = 2U;
	int16_t x444 = -15;
	int32_t t91 = 860495394;

	t91 = (((x441+x442)<=x443)/x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	int16_t x448 = 1;
	int32_t t92 = 449;

	t92 = (((x445+x446)<=x447)/x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x449 = 19LLU;
	int64_t x450 = INT64_MAX;
	int8_t x451 = INT8_MAX;
	volatile int32_t t93 = -121023931;

	t93 = (((x449+x450)<=x451)/x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x453 = UINT64_MAX;
	int8_t x454 = -1;
	int64_t x455 = 5943789829547LL;
	volatile int32_t t94 = -842;

	t94 = (((x453+x454)<=x455)/x456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MAX;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t95 = 67;

	t95 = (((x457+x458)<=x459)/x460);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = INT32_MAX;
	int32_t t96 = -14;

	t96 = (((x461+x462)<=x463)/x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = -837985366714226159LL;
	volatile uint16_t x470 = UINT16_MAX;
	uint32_t x471 = 7U;
	volatile int64_t x472 = INT64_MIN;
	static volatile int64_t t97 = 559585296085349LL;

	t97 = (((x469+x470)<=x471)/x472);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = INT8_MIN;
	uint16_t x478 = UINT16_MAX;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t98 = -3;

	t98 = (((x477+x478)<=x479)/x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = -1;
	static uint8_t x488 = 24U;

	t99 = (((x485+x486)<=x487)/x488);

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

