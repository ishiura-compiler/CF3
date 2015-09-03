#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 187LLU;
int64_t x4 = -1LL;
int64_t x6 = -233970029588036LL;
uint16_t x11 = 16U;
int64_t x13 = INT64_MIN;
uint8_t x15 = 33U;
int32_t t3 = 34;
volatile int32_t x30 = INT32_MIN;
volatile int32_t t7 = -23311;
int8_t x34 = -1;
static volatile uint64_t x41 = 2278077LLU;
int64_t x44 = -1LL;
volatile int32_t t10 = -449;
int8_t x45 = INT8_MIN;
uint16_t x48 = 9U;
volatile uint32_t x51 = UINT32_MAX;
static int32_t x52 = INT32_MIN;
uint8_t x53 = UINT8_MAX;
volatile int32_t t13 = -32;
int16_t x59 = INT16_MAX;
int16_t x62 = -1;
volatile uint8_t x65 = 2U;
uint16_t x68 = 5398U;
static volatile int32_t t16 = 727;
uint32_t x73 = UINT32_MAX;
int64_t x75 = 759260722LL;
int64_t x76 = INT64_MAX;
int16_t x79 = -1;
int64_t x87 = -1LL;
volatile int8_t x113 = INT8_MIN;
volatile uint32_t x116 = 276666534U;
uint8_t x120 = UINT8_MAX;
static int32_t x121 = INT32_MIN;
int32_t t29 = 427823503;
uint16_t x134 = UINT16_MAX;
uint64_t x137 = 459702328LLU;
volatile int32_t t32 = -3296;
volatile int32_t x147 = INT32_MIN;
volatile int32_t t35 = -36707140;
int32_t t37 = -24;
int32_t x166 = -8355014;
int64_t x171 = -1LL;
int32_t t40 = 1;
volatile int16_t x184 = INT16_MIN;
static int8_t x187 = INT8_MIN;
uint64_t x192 = 2087828892444185822LLU;
uint64_t x196 = 12661LLU;
int16_t x200 = INT16_MIN;
volatile int32_t t46 = -21644191;
int32_t x204 = 0;
int8_t x207 = -3;
int32_t t48 = 191713590;
volatile int32_t t49 = -14242;
int8_t x231 = 1;
int64_t x257 = INT64_MIN;
int64_t x258 = -23318785829378105LL;
static int8_t x260 = 1;
int8_t x262 = INT8_MIN;
int8_t x263 = 2;
static uint64_t x267 = UINT64_MAX;
volatile int32_t t61 = -1;
volatile int32_t t62 = -625;
int16_t x285 = -1;
int16_t x287 = 392;
int64_t x288 = 13766835LL;
volatile int8_t x289 = -1;
static int8_t x295 = -1;
uint32_t x304 = UINT32_MAX;
int64_t x308 = -1LL;
uint64_t x319 = UINT64_MAX;
int16_t x320 = INT16_MIN;
static int32_t t72 = 32564;
int32_t t73 = 27241785;
int32_t t74 = -3240;
volatile int32_t t76 = -446;
int32_t t77 = 1;
uint8_t x360 = 29U;
int64_t x368 = -1LL;
volatile int32_t t82 = 10307;
static int8_t x377 = -1;
static int8_t x378 = 3;
volatile int32_t t84 = 3;
static uint32_t x383 = 534U;
static int8_t x389 = INT8_MIN;
volatile uint16_t x394 = UINT16_MAX;
int8_t x398 = 1;
static volatile int16_t x403 = -1;
uint8_t x412 = UINT8_MAX;
int32_t x414 = INT32_MIN;
int64_t x415 = -49446LL;
int64_t x418 = INT64_MIN;
int16_t x423 = INT16_MIN;
volatile uint64_t x425 = 516147006004162257LLU;
uint64_t x426 = 11424LLU;
int16_t x430 = INT16_MIN;
static int64_t x441 = -1LL;
uint16_t x443 = 3U;
volatile int32_t t98 = 201;
volatile int8_t x447 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x3 = 19U;
	int32_t t0 = 33;

	t0 = ((x1%(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static uint32_t x7 = 99479U;
	static uint64_t x8 = 6834515957LLU;
	volatile int32_t t1 = 0;

	t1 = ((x5%(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static int8_t x10 = -4;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = 176706;

	t2 = ((x9%(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 505U;
	volatile int32_t x16 = INT32_MAX;

	t3 = ((x13%(x14-x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -22;
	static uint16_t x18 = 74U;
	static uint16_t x19 = 71U;
	int64_t x20 = -1LL;
	int32_t t4 = -302259;

	t4 = ((x17%(x18-x19))==x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 4912976LLU;
	int32_t x22 = INT32_MIN;
	int64_t x23 = -1LL;
	static volatile int64_t x24 = INT64_MIN;
	static volatile int32_t t5 = 19162712;

	t5 = ((x21%(x22-x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	static uint16_t x26 = 93U;
	int16_t x27 = 1;
	static int64_t x28 = -1891LL;
	static int32_t t6 = -6;

	t6 = ((x25%(x26-x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int64_t x31 = INT64_MIN;
	uint16_t x32 = UINT16_MAX;

	t7 = ((x29%(x30-x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int16_t x35 = INT16_MAX;
	static int64_t x36 = -44063563177386724LL;
	int32_t t8 = 25239359;

	t8 = ((x33%(x34-x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 14U;
	static int8_t x38 = INT8_MAX;
	volatile int64_t x39 = -1LL;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -431986;

	t9 = ((x37%(x38-x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = -33;
	volatile int8_t x43 = -1;

	t10 = ((x41%(x42-x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 1453337;
	volatile uint64_t x47 = 42934926159LLU;
	volatile int32_t t11 = -804115;

	t11 = ((x45%(x46-x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int32_t x50 = INT32_MIN;
	volatile int32_t t12 = -6;

	t12 = ((x49%(x50-x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x54 = 42U;
	static int16_t x55 = -192;
	int64_t x56 = INT64_MIN;

	t13 = ((x53%(x54-x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 8573440;

	t14 = ((x57%(x58-x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	static uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 31U;
	static volatile int32_t t15 = 268831969;

	t15 = ((x61%(x62-x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	uint16_t x67 = UINT16_MAX;

	t16 = ((x65%(x66-x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 12U;
	int32_t t17 = 209372777;

	t17 = ((x73%(x74-x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = 2U;
	uint64_t x78 = 0LLU;
	int32_t x80 = INT32_MAX;
	volatile int32_t t18 = -22;

	t18 = ((x77%(x78-x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MIN;
	uint32_t x82 = 47401017U;
	static int32_t x83 = 61;
	volatile int64_t x84 = INT64_MIN;
	volatile int32_t t19 = 6;

	t19 = ((x81%(x82-x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 0U;
	uint16_t x86 = UINT16_MAX;
	volatile int8_t x88 = INT8_MIN;
	static int32_t t20 = 650815;

	t20 = ((x85%(x86-x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = INT32_MAX;
	int16_t x90 = INT16_MAX;
	uint8_t x91 = 19U;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t21 = -98634093;

	t21 = ((x89%(x90-x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	int16_t x94 = -1;
	uint8_t x95 = 58U;
	int32_t x96 = -1;
	volatile int32_t t22 = 731704307;

	t22 = ((x93%(x94-x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 1U;
	volatile int16_t x98 = -1;
	uint32_t x99 = 9176560U;
	int64_t x100 = 1LL;
	volatile int32_t t23 = 5684;

	t23 = ((x97%(x98-x99))==x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -1;
	uint16_t x107 = 914U;
	int32_t x108 = INT32_MIN;
	int32_t t24 = 0;

	t24 = ((x105%(x106-x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x109 = 262385189269611LLU;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = 16679094LLU;
	uint64_t x112 = 2569521LLU;
	int32_t t25 = -126;

	t25 = ((x109%(x110-x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x114 = INT16_MIN;
	int8_t x115 = 14;
	int32_t t26 = 1;

	t26 = ((x113%(x114-x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = INT16_MIN;
	static uint32_t x118 = 104025497U;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t27 = 2830;

	t27 = ((x117%(x118-x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x122 = UINT8_MAX;
	uint16_t x123 = 119U;
	static uint64_t x124 = UINT64_MAX;
	int32_t t28 = -131079;

	t28 = ((x121%(x122-x123))==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = 0;
	static int32_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;

	t29 = ((x125%(x126-x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 206122153408LLU;
	volatile int64_t x130 = -2311065LL;
	static uint8_t x131 = 3U;
	int32_t x132 = INT32_MAX;
	volatile int32_t t30 = -219;

	t30 = ((x129%(x130-x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int32_t x135 = 264540123;
	int32_t x136 = INT32_MIN;
	int32_t t31 = 30316;

	t31 = ((x133%(x134-x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = 14U;
	volatile int32_t x140 = INT32_MIN;

	t32 = ((x137%(x138-x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x141 = 7033U;
	static uint64_t x142 = 38882843LLU;
	int8_t x143 = -1;
	int64_t x144 = 97929812558LL;
	int32_t t33 = 1506;

	t33 = ((x141%(x142-x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 3LLU;
	int8_t x146 = -14;
	static uint32_t x148 = 2908U;
	int32_t t34 = -5;

	t34 = ((x145%(x146-x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = 363388235LL;
	static uint16_t x150 = 26370U;
	volatile uint64_t x151 = UINT64_MAX;
	static volatile int8_t x152 = INT8_MIN;

	t35 = ((x149%(x150-x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	static uint64_t x154 = 1005585540864637048LLU;
	static uint32_t x155 = 812554556U;
	uint16_t x156 = 3195U;
	int32_t t36 = -1576108;

	t36 = ((x153%(x154-x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 3539U;
	uint8_t x158 = 109U;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = -917;

	t37 = ((x157%(x158-x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = -1;
	volatile int64_t x162 = -637LL;
	volatile int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MIN;
	volatile int32_t t38 = -8517;

	t38 = ((x161%(x162-x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = INT8_MAX;
	int16_t x167 = -5311;
	static volatile uint16_t x168 = UINT16_MAX;
	int32_t t39 = 1;

	t39 = ((x165%(x166-x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 1023204518108LLU;
	uint16_t x170 = UINT16_MAX;
	int8_t x172 = INT8_MAX;

	t40 = ((x169%(x170-x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	uint64_t x174 = 899599407LLU;
	static volatile uint8_t x175 = 7U;
	int64_t x176 = 1LL;
	volatile int32_t t41 = -3591;

	t41 = ((x173%(x174-x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	volatile int32_t x182 = -12897621;
	volatile int64_t x183 = INT64_MIN;
	int32_t t42 = 1125;

	t42 = ((x181%(x182-x183))==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x185 = -241;
	int32_t x186 = INT32_MIN;
	int8_t x188 = 46;
	volatile int32_t t43 = 13378;

	t43 = ((x185%(x186-x187))==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MIN;
	uint8_t x190 = 11U;
	uint8_t x191 = UINT8_MAX;
	volatile int32_t t44 = 779145;

	t44 = ((x189%(x190-x191))==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MAX;
	volatile uint16_t x195 = 140U;
	volatile int32_t t45 = 1;

	t45 = ((x193%(x194-x195))==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = 4405495569052022405LL;
	int16_t x198 = 1;
	int8_t x199 = INT8_MAX;

	t46 = ((x197%(x198-x199))==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 93U;
	static volatile int16_t x202 = -1;
	uint8_t x203 = UINT8_MAX;
	static int32_t t47 = 734863304;

	t47 = ((x201%(x202-x203))==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	static uint64_t x206 = UINT64_MAX;
	uint8_t x208 = UINT8_MAX;

	t48 = ((x205%(x206-x207))==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 0LL;
	uint64_t x211 = 24828458083363LLU;
	uint32_t x212 = 196U;

	t49 = ((x209%(x210-x211))==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x213 = -1LL;
	int32_t x214 = INT32_MAX;
	static int64_t x215 = -699569968402LL;
	static uint16_t x216 = 7836U;
	int32_t t50 = 78838;

	t50 = ((x213%(x214-x215))==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 3956864087400LLU;
	uint16_t x218 = 1207U;
	static uint64_t x219 = UINT64_MAX;
	int16_t x220 = -1;
	volatile int32_t t51 = 251215758;

	t51 = ((x217%(x218-x219))==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = -238423376259LL;
	int16_t x222 = -1555;
	uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = 604LL;
	volatile int32_t t52 = -848916350;

	t52 = ((x221%(x222-x223))==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x229 = 10U;
	int32_t x230 = INT32_MAX;
	uint64_t x232 = 15852113244563LLU;
	volatile int32_t t53 = -105;

	t53 = ((x229%(x230-x231))==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	static uint16_t x234 = UINT16_MAX;
	uint16_t x235 = 0U;
	volatile uint32_t x236 = 193326U;
	int32_t t54 = 5;

	t54 = ((x233%(x234-x235))==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x237 = INT64_MAX;
	static volatile int16_t x238 = -31;
	uint32_t x239 = 241U;
	int64_t x240 = INT64_MAX;
	int32_t t55 = 1818;

	t55 = ((x237%(x238-x239))==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x242 = 281LLU;
	uint8_t x243 = 11U;
	volatile int8_t x244 = 17;
	static volatile int32_t t56 = -177076;

	t56 = ((x241%(x242-x243))==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 78U;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = -1;
	int32_t t57 = 3271;

	t57 = ((x245%(x246-x247))==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x259 = INT8_MIN;
	int32_t t58 = 19;

	t58 = ((x257%(x258-x259))==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = 175;
	static uint16_t x264 = 134U;
	volatile int32_t t59 = -1;

	t59 = ((x261%(x262-x263))==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = 0U;
	int64_t x268 = INT64_MIN;
	int32_t t60 = -27;

	t60 = ((x265%(x266-x267))==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = 272159;
	volatile int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;

	t61 = ((x269%(x270-x271))==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 12U;
	int16_t x274 = -89;
	static int64_t x275 = -1LL;
	uint64_t x276 = 28887895LLU;

	t62 = ((x273%(x274-x275))==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = INT16_MIN;
	uint64_t x278 = 14340LLU;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 661123U;
	static volatile int32_t t63 = 517111;

	t63 = ((x277%(x278-x279))==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x286 = INT8_MIN;
	int32_t t64 = 23;

	t64 = ((x285%(x286-x287))==x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	volatile int8_t x292 = 3;
	int32_t t65 = -5;

	t65 = ((x289%(x290-x291))==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 2U;
	int64_t x294 = 5314196968818LL;
	volatile int8_t x296 = 9;
	static volatile int32_t t66 = -15194391;

	t66 = ((x293%(x294-x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static uint64_t x299 = 139684251981399179LLU;
	uint16_t x300 = 10U;
	volatile int32_t t67 = -945;

	t67 = ((x297%(x298-x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x301 = -1;
	uint64_t x302 = 176277960613690LLU;
	int64_t x303 = 60970665642LL;
	static volatile int32_t t68 = 211;

	t68 = ((x301%(x302-x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = 744655520173133146LL;
	volatile int16_t x307 = INT16_MIN;
	volatile int32_t t69 = 4436;

	t69 = ((x305%(x306-x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x309 = INT8_MIN;
	static volatile uint16_t x310 = UINT16_MAX;
	int8_t x311 = 1;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t70 = -6195279;

	t70 = ((x309%(x310-x311))==x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x313 = INT64_MAX;
	int8_t x314 = -1;
	static uint32_t x315 = 36797848U;
	volatile uint32_t x316 = 9479633U;
	static int32_t t71 = -39651;

	t71 = ((x313%(x314-x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MAX;
	uint16_t x318 = 2261U;

	t72 = ((x317%(x318-x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = 2U;
	uint32_t x322 = 2U;
	volatile int32_t x323 = 55009;
	uint16_t x324 = 32640U;

	t73 = ((x321%(x322-x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int64_t x326 = -1LL;
	static volatile int8_t x327 = INT8_MIN;
	static int8_t x328 = INT8_MIN;

	t74 = ((x325%(x326-x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = 0;
	uint8_t x330 = UINT8_MAX;
	volatile int32_t x331 = -1;
	int16_t x332 = -238;
	int32_t t75 = 133201550;

	t75 = ((x329%(x330-x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = -1;
	uint64_t x336 = 23719542542863LLU;

	t76 = ((x333%(x334-x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x337 = 2360U;
	int64_t x338 = INT64_MIN;
	int8_t x339 = -1;
	uint8_t x340 = UINT8_MAX;

	t77 = ((x337%(x338-x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MIN;
	volatile int16_t x343 = INT16_MIN;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t78 = -769950;

	t78 = ((x341%(x342-x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = 2281844LL;
	uint16_t x347 = 197U;
	static int8_t x348 = INT8_MIN;
	int32_t t79 = -1;

	t79 = ((x345%(x346-x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 5472;
	uint8_t x350 = 16U;
	int8_t x351 = -1;
	int64_t x352 = INT64_MIN;
	volatile int32_t t80 = 369815201;

	t80 = ((x349%(x350-x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x357 = INT8_MIN;
	static volatile int8_t x358 = -12;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t81 = 68965;

	t81 = ((x357%(x358-x359))==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x365 = 21U;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;

	t82 = ((x365%(x366-x367))==x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MIN;
	static uint8_t x374 = UINT8_MAX;
	static uint64_t x375 = 1LLU;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t83 = 3427;

	t83 = ((x373%(x374-x375))==x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x379 = 4;
	static volatile uint8_t x380 = 1U;

	t84 = ((x377%(x378-x379))==x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MIN;
	volatile int8_t x382 = -2;
	static int8_t x384 = -1;
	int32_t t85 = -670;

	t85 = ((x381%(x382-x383))==x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x390 = 7;
	static volatile int16_t x391 = -2445;
	uint64_t x392 = 1614582491LLU;
	int32_t t86 = 1072958287;

	t86 = ((x389%(x390-x391))==x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x393 = 1U;
	uint64_t x395 = 8756892066504718LLU;
	volatile int16_t x396 = -1;
	int32_t t87 = -152;

	t87 = ((x393%(x394-x395))==x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 63096175340749LLU;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t88 = 0;

	t88 = ((x397%(x398-x399))==x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	int32_t x404 = 115;
	int32_t t89 = 5912151;

	t89 = ((x401%(x402-x403))==x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x409 = -1;
	int16_t x410 = -1;
	volatile uint32_t x411 = 224162U;
	static int32_t t90 = 0;

	t90 = ((x409%(x410-x411))==x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x413 = UINT8_MAX;
	static volatile int16_t x416 = INT16_MIN;
	static int32_t t91 = 19917827;

	t91 = ((x413%(x414-x415))==x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = -14;
	int64_t x419 = -1LL;
	int32_t x420 = -71039971;
	static volatile int32_t t92 = 4;

	t92 = ((x417%(x418-x419))==x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x421 = 0U;
	static int64_t x422 = -1LL;
	int8_t x424 = INT8_MAX;
	int32_t t93 = -1710;

	t93 = ((x421%(x422-x423))==x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x427 = 50U;
	int64_t x428 = INT64_MAX;
	int32_t t94 = 934158;

	t94 = ((x425%(x426-x427))==x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = -1LL;
	int32_t x431 = -1;
	volatile int16_t x432 = -3145;
	int32_t t95 = -195510;

	t95 = ((x429%(x430-x431))==x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = -237589;
	int8_t x434 = 2;
	uint16_t x435 = UINT16_MAX;
	uint8_t x436 = 5U;
	static volatile int32_t t96 = -15618;

	t96 = ((x433%(x434-x435))==x436);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x437 = 87U;
	static volatile int32_t x438 = -1;
	int8_t x439 = INT8_MIN;
	int64_t x440 = -16907212728164LL;
	volatile int32_t t97 = 1;

	t97 = ((x437%(x438-x439))==x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x442 = -5386;
	uint8_t x444 = 1U;

	t98 = ((x441%(x442-x443))==x444);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int32_t x448 = INT32_MIN;
	int32_t t99 = 0;

	t99 = ((x445%(x446-x447))==x448);

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

