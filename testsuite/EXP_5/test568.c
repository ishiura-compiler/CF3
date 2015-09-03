#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int8_t x6 = INT8_MIN;
volatile int32_t t0 = 7057;
int8_t x9 = INT8_MAX;
int32_t x14 = -1;
volatile int16_t x24 = -1;
static int16_t x27 = INT16_MIN;
volatile int32_t t5 = 1057395358;
uint32_t x33 = 5535U;
int16_t x35 = INT16_MIN;
volatile int32_t t9 = -182327390;
static int64_t x50 = 52537817641474LL;
volatile uint64_t x63 = 77LLU;
volatile int32_t t14 = 1646;
static volatile int8_t x66 = INT8_MIN;
volatile int32_t t15 = -2;
uint32_t x81 = 6464U;
int32_t x83 = INT32_MIN;
int64_t x84 = 883754438105739989LL;
uint16_t x97 = 118U;
int8_t x98 = -1;
static uint8_t x99 = 8U;
int64_t x102 = INT64_MAX;
static volatile int32_t x121 = -55;
int32_t t26 = -43871;
static int8_t x128 = INT8_MIN;
static volatile int32_t x133 = -108;
static int32_t t30 = -476836665;
int64_t x146 = 475653430LL;
uint16_t x148 = 3900U;
int32_t t32 = -489437493;
int32_t t34 = -248360;
int8_t x164 = INT8_MAX;
static uint64_t x169 = UINT64_MAX;
int16_t x176 = -1;
int32_t t41 = 14425;
uint16_t x189 = 18U;
int32_t x193 = INT32_MIN;
volatile uint32_t x199 = UINT32_MAX;
int32_t x200 = INT32_MIN;
volatile int16_t x208 = -1;
uint32_t x209 = UINT32_MAX;
int16_t x211 = INT16_MIN;
volatile uint8_t x212 = 11U;
uint16_t x229 = 505U;
int64_t x239 = -1LL;
uint16_t x240 = 10U;
int64_t x241 = INT64_MAX;
static int16_t x242 = 701;
int32_t t55 = 1672052;
static volatile int32_t t58 = -194;
int64_t x257 = INT64_MAX;
volatile int32_t t60 = 31947112;
static uint64_t x271 = 351130LLU;
int8_t x273 = INT8_MIN;
int64_t x274 = -1LL;
static int64_t x291 = 1408330573LL;
int32_t t65 = -255394;
int32_t t66 = -1903025;
static volatile uint32_t x299 = 455895U;
int64_t x303 = INT64_MAX;
volatile int32_t x305 = INT32_MAX;
volatile int8_t x311 = INT8_MIN;
int32_t t70 = 339;
int16_t x319 = -1;
int16_t x322 = INT16_MIN;
uint8_t x323 = 9U;
static int64_t x326 = 9113909724LL;
uint16_t x341 = UINT16_MAX;
uint32_t x343 = 4U;
static uint32_t x354 = 37524940U;
volatile int8_t x355 = INT8_MIN;
int16_t x362 = -1;
static volatile int32_t t82 = 5527876;
static int32_t t83 = 572;
int64_t x377 = -872678108LL;
uint64_t x379 = 5238333224874LLU;
int32_t x380 = INT32_MIN;
uint32_t x382 = 22U;
int16_t x386 = INT16_MIN;
static volatile int32_t t91 = 5463288;
int32_t x404 = INT32_MIN;
int64_t x406 = INT64_MIN;
int64_t x419 = -1LL;
int32_t x420 = 13;
static int32_t t96 = -1343548;
int32_t x422 = -1;
static volatile int8_t x427 = INT8_MIN;


void f0(void) {
	int16_t x7 = 3236;
	int64_t x8 = INT64_MIN;

	t0 = (x5<((x6/x7)%x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = 2;
	volatile int32_t t1 = -3317450;

	t1 = (x9<((x10/x11)%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int64_t x15 = -1LL;
	int16_t x16 = -1;
	static volatile int32_t t2 = -1662;

	t2 = (x13<((x14/x15)%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -12;
	int32_t x18 = -1006899623;
	int8_t x19 = INT8_MIN;
	static uint32_t x20 = UINT32_MAX;
	volatile int32_t t3 = -157;

	t3 = (x17<((x18/x19)%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 25U;
	int32_t x22 = -1;
	int8_t x23 = -1;
	volatile int32_t t4 = -9546;

	t4 = (x21<((x22/x23)%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	int16_t x28 = -13;

	t5 = (x25<((x26/x27)%x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 648608862U;
	int8_t x30 = 5;
	int32_t x31 = 2013;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 0;

	t6 = (x29<((x30/x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = UINT16_MAX;
	uint64_t x36 = 16260236701LLU;
	int32_t t7 = 50210297;

	t7 = (x33<((x34/x35)%x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int32_t x38 = INT32_MAX;
	static int32_t x39 = 3;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = 974149;

	t8 = (x37<((x38/x39)%x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -30879003027655LL;
	int8_t x42 = INT8_MIN;
	int64_t x43 = 10435282785029LL;
	volatile int64_t x44 = 16096192085LL;

	t9 = (x41<((x42/x43)%x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = 2U;
	volatile uint32_t x47 = UINT32_MAX;
	volatile int8_t x48 = 11;
	int32_t t10 = 1283;

	t10 = (x45<((x46/x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -6;
	int64_t x51 = INT64_MAX;
	int8_t x52 = -1;
	int32_t t11 = -731406;

	t11 = (x49<((x50/x51)%x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 1;
	int16_t x54 = 203;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -798443505;

	t12 = (x53<((x54/x55)%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MAX;
	int64_t x58 = -678610LL;
	int64_t x59 = INT64_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = 33097411;

	t13 = (x57<((x58/x59)%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 6298U;
	int16_t x62 = INT16_MIN;
	uint16_t x64 = 6458U;

	t14 = (x61<((x62/x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 8573491;
	static int64_t x67 = -1LL;
	static int32_t x68 = -3590;

	t15 = (x65<((x66/x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 301U;
	volatile uint16_t x70 = 139U;
	int32_t x71 = 1;
	static volatile int16_t x72 = INT16_MIN;
	int32_t t16 = -509475;

	t16 = (x69<((x70/x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = -3;
	static int32_t x76 = 3112356;
	int32_t t17 = -249;

	t17 = (x73<((x74/x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x82 = INT8_MIN;
	int32_t t18 = 11;

	t18 = (x81<((x82/x83)%x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile int64_t x86 = INT64_MIN;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;
	static int32_t t19 = -56091;

	t19 = (x85<((x86/x87)%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 57U;
	int32_t x94 = INT32_MAX;
	int64_t x95 = -1250298164609LL;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t20 = 1426;

	t20 = (x93<((x94/x95)%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x100 = 11U;
	static volatile int32_t t21 = 1;

	t21 = (x97<((x98/x99)%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = INT64_MIN;
	int16_t x103 = 11;
	int16_t x104 = INT16_MAX;
	int32_t t22 = -54906206;

	t22 = (x101<((x102/x103)%x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x105 = UINT8_MAX;
	int8_t x106 = INT8_MIN;
	int64_t x107 = 1763146740LL;
	static volatile uint64_t x108 = UINT64_MAX;
	volatile int32_t t23 = 24301401;

	t23 = (x105<((x106/x107)%x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = UINT8_MAX;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 100860999U;
	volatile int32_t t24 = 518355992;

	t24 = (x113<((x114/x115)%x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x117 = INT32_MAX;
	volatile int16_t x118 = -1;
	uint64_t x119 = 9LLU;
	int32_t x120 = INT32_MAX;
	volatile int32_t t25 = -268847;

	t25 = (x117<((x118/x119)%x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x122 = -291389137;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 7278U;

	t26 = (x121<((x122/x123)%x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	int32_t x126 = INT32_MIN;
	volatile int8_t x127 = -61;
	volatile int32_t t27 = 2;

	t27 = (x125<((x126/x127)%x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MAX;
	uint16_t x131 = 1195U;
	int32_t x132 = INT32_MIN;
	int32_t t28 = 2591630;

	t28 = (x129<((x130/x131)%x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x134 = UINT64_MAX;
	static volatile int64_t x135 = 4388470347497634LL;
	int32_t x136 = INT32_MIN;
	int32_t t29 = -2512;

	t29 = (x133<((x134/x135)%x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = 3;
	volatile int64_t x142 = INT64_MAX;
	int64_t x143 = -31759586LL;
	int64_t x144 = INT64_MIN;

	t30 = (x141<((x142/x143)%x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = 0;
	volatile int8_t x147 = INT8_MIN;
	int32_t t31 = 3065985;

	t31 = (x145<((x146/x147)%x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 7542U;
	int16_t x150 = 87;
	int32_t x151 = INT32_MIN;
	int64_t x152 = INT64_MIN;

	t32 = (x149<((x150/x151)%x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = -414615983792328309LL;
	int16_t x155 = INT16_MAX;
	static int16_t x156 = INT16_MAX;
	volatile int32_t t33 = 68;

	t33 = (x153<((x154/x155)%x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = -7;
	volatile uint8_t x158 = UINT8_MAX;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = -1;

	t34 = (x157<((x158/x159)%x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = -1;
	volatile int32_t t35 = 49;

	t35 = (x161<((x162/x163)%x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	static int8_t x166 = -3;
	int32_t x167 = -1;
	int16_t x168 = 25;
	volatile int32_t t36 = 14999601;

	t36 = (x165<((x166/x167)%x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x170 = -1;
	volatile int16_t x171 = -1;
	static uint8_t x172 = 21U;
	volatile int32_t t37 = -6505;

	t37 = (x169<((x170/x171)%x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = 80;
	volatile int16_t x175 = 9089;
	volatile int32_t t38 = 809723163;

	t38 = (x173<((x174/x175)%x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	static volatile uint8_t x180 = 1U;
	int32_t t39 = 252109011;

	t39 = (x177<((x178/x179)%x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x181 = 735357960316218LL;
	uint16_t x182 = 14019U;
	static volatile uint16_t x183 = 255U;
	int8_t x184 = -1;
	volatile int32_t t40 = -13181823;

	t40 = (x181<((x182/x183)%x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x185 = 41242U;
	int8_t x186 = 2;
	int32_t x187 = -1;
	static uint8_t x188 = 118U;

	t41 = (x185<((x186/x187)%x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x190 = -1;
	int8_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t42 = 9400721;

	t42 = (x189<((x190/x191)%x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x194 = 16LLU;
	static int8_t x195 = INT8_MIN;
	int16_t x196 = -6;
	static int32_t t43 = -452;

	t43 = (x193<((x194/x195)%x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 1002418U;
	int32_t t44 = -263982200;

	t44 = (x197<((x198/x199)%x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x202 = 102U;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = 5U;
	static volatile int32_t t45 = 2;

	t45 = (x201<((x202/x203)%x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = INT32_MAX;
	static uint32_t x206 = 42094U;
	static int16_t x207 = INT16_MIN;
	int32_t t46 = 746070;

	t46 = (x205<((x206/x207)%x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x210 = 1U;
	volatile int32_t t47 = 4547078;

	t47 = (x209<((x210/x211)%x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -911736302085923LL;
	volatile int64_t x214 = INT64_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	int64_t x216 = -1LL;
	static volatile int32_t t48 = 20;

	t48 = (x213<((x214/x215)%x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MIN;
	volatile uint8_t x218 = 1U;
	volatile uint8_t x219 = UINT8_MAX;
	static int32_t x220 = 7;
	static volatile int32_t t49 = -21;

	t49 = (x217<((x218/x219)%x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = -1;
	static uint8_t x222 = UINT8_MAX;
	static uint16_t x223 = 901U;
	static uint64_t x224 = UINT64_MAX;
	int32_t t50 = 90745036;

	t50 = (x221<((x222/x223)%x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -910032585433LL;
	static int16_t x226 = -10737;
	int32_t x227 = INT32_MAX;
	static uint8_t x228 = 1U;
	int32_t t51 = 1046580115;

	t51 = (x225<((x226/x227)%x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x230 = 61U;
	volatile uint16_t x231 = 1U;
	static volatile int64_t x232 = 988549LL;
	volatile int32_t t52 = -5820739;

	t52 = (x229<((x230/x231)%x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = 27956;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = -1;
	int32_t t53 = 1;

	t53 = (x233<((x234/x235)%x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 1742095477971410LLU;
	int16_t x238 = -5;
	static int32_t t54 = 755;

	t54 = (x237<((x238/x239)%x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x243 = -1;
	uint64_t x244 = 965788968526763421LLU;

	t55 = (x241<((x242/x243)%x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x245 = INT8_MIN;
	volatile int8_t x246 = INT8_MIN;
	uint64_t x247 = 5LLU;
	volatile int8_t x248 = -1;
	volatile int32_t t56 = 84793510;

	t56 = (x245<((x246/x247)%x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -2987406887LL;
	int16_t x250 = INT16_MAX;
	int16_t x251 = 59;
	int8_t x252 = INT8_MAX;
	static volatile int32_t t57 = 26;

	t57 = (x249<((x250/x251)%x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = -1;
	int64_t x254 = -86013742265LL;
	int32_t x255 = 211880181;
	uint32_t x256 = UINT32_MAX;

	t58 = (x253<((x254/x255)%x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x258 = 64LL;
	int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t59 = 5670;

	t59 = (x257<((x258/x259)%x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	static int16_t x262 = INT16_MAX;
	uint32_t x263 = 294U;
	int32_t x264 = 3781984;

	t60 = (x261<((x262/x263)%x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MAX;
	volatile int16_t x272 = INT16_MIN;
	volatile int32_t t61 = 749386445;

	t61 = (x269<((x270/x271)%x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x275 = -560;
	static int16_t x276 = -1;
	static volatile int32_t t62 = 46;

	t62 = (x273<((x274/x275)%x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MAX;
	volatile int32_t x278 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t63 = -190125;

	t63 = (x277<((x278/x279)%x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x281 = -484027;
	static int16_t x282 = INT16_MAX;
	uint8_t x283 = 1U;
	static volatile int16_t x284 = INT16_MIN;
	static volatile int32_t t64 = 594306;

	t64 = (x281<((x282/x283)%x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x289 = 19;
	uint16_t x290 = 1044U;
	int16_t x292 = INT16_MIN;

	t65 = (x289<((x290/x291)%x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MIN;
	static uint8_t x294 = 0U;
	volatile int16_t x295 = -1;
	int8_t x296 = -56;

	t66 = (x293<((x294/x295)%x296));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = -49263;
	static volatile uint32_t x298 = 143139U;
	int8_t x300 = -11;
	int32_t t67 = 1;

	t67 = (x297<((x298/x299)%x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x301 = 21185U;
	int32_t x302 = -717620825;
	int8_t x304 = -1;
	int32_t t68 = 4034;

	t68 = (x301<((x302/x303)%x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = -5;
	uint64_t x308 = 118LLU;
	int32_t t69 = 3010;

	t69 = (x305<((x306/x307)%x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x309 = 2327U;
	int64_t x310 = -253552794085926400LL;
	static volatile int16_t x312 = INT16_MIN;

	t70 = (x309<((x310/x311)%x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x313 = INT64_MAX;
	volatile uint16_t x314 = 12U;
	int16_t x315 = -1;
	int64_t x316 = 26539081LL;
	int32_t t71 = 84;

	t71 = (x313<((x314/x315)%x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x317 = INT8_MIN;
	volatile uint8_t x318 = 1U;
	static int64_t x320 = INT64_MIN;
	volatile int32_t t72 = 359;

	t72 = (x317<((x318/x319)%x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MAX;
	uint32_t x324 = 15U;
	static int32_t t73 = -132566432;

	t73 = (x321<((x322/x323)%x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = 2;
	static volatile int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	int32_t t74 = 4109;

	t74 = (x325<((x326/x327)%x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	volatile uint8_t x332 = UINT8_MAX;
	volatile int32_t t75 = -1269;

	t75 = (x329<((x330/x331)%x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x333 = INT32_MIN;
	volatile int32_t x334 = -7568;
	uint32_t x335 = 29221815U;
	volatile int64_t x336 = INT64_MIN;
	int32_t t76 = -168993;

	t76 = (x333<((x334/x335)%x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x338 = 1U;
	static int64_t x339 = 415097437608922LL;
	volatile int16_t x340 = INT16_MIN;
	static int32_t t77 = 0;

	t77 = (x337<((x338/x339)%x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x342 = INT64_MIN;
	uint32_t x344 = UINT32_MAX;
	int32_t t78 = 469711;

	t78 = (x341<((x342/x343)%x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x345 = UINT64_MAX;
	static int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t79 = 514;

	t79 = (x345<((x346/x347)%x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = 54004930302LLU;
	int64_t x356 = -509770342392609437LL;
	int32_t t80 = -265050258;

	t80 = (x353<((x354/x355)%x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x357 = INT64_MAX;
	static uint16_t x358 = UINT16_MAX;
	int32_t x359 = -1;
	static int16_t x360 = -10802;
	static volatile int32_t t81 = 13305;

	t81 = (x357<((x358/x359)%x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	static int16_t x364 = INT16_MIN;

	t82 = (x361<((x362/x363)%x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x365 = 2U;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MAX;

	t83 = (x365<((x366/x367)%x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x369 = 6338;
	volatile int32_t x370 = INT32_MIN;
	volatile int16_t x371 = -19;
	uint32_t x372 = 2898186U;
	int32_t t84 = 226;

	t84 = (x369<((x370/x371)%x372));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MAX;
	uint16_t x375 = 421U;
	int16_t x376 = INT16_MIN;
	int32_t t85 = 8080213;

	t85 = (x373<((x374/x375)%x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x378 = 6654607420547LLU;
	volatile int32_t t86 = -8;

	t86 = (x377<((x378/x379)%x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = 11594;
	uint32_t x383 = 6816U;
	int64_t x384 = -94101405LL;
	volatile int32_t t87 = -57;

	t87 = (x381<((x382/x383)%x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 1U;
	uint64_t x387 = UINT64_MAX;
	static volatile int16_t x388 = -1;
	int32_t t88 = 3146;

	t88 = (x385<((x386/x387)%x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = -1;
	int16_t x391 = INT16_MAX;
	static int32_t x392 = -1;
	volatile int32_t t89 = 7;

	t89 = (x389<((x390/x391)%x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = -38;
	uint64_t x396 = 1575985629LLU;
	int32_t t90 = -68832350;

	t90 = (x393<((x394/x395)%x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x397 = 613056139U;
	static volatile int32_t x398 = 2010848;
	volatile int8_t x399 = INT8_MAX;
	static int8_t x400 = -7;

	t91 = (x397<((x398/x399)%x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -1;
	int16_t x402 = 50;
	volatile int8_t x403 = -54;
	volatile int32_t t92 = 232;

	t92 = (x401<((x402/x403)%x404));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x405 = 10U;
	static uint64_t x407 = UINT64_MAX;
	volatile uint8_t x408 = 1U;
	int32_t t93 = 2048;

	t93 = (x405<((x406/x407)%x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x409 = 167818U;
	int8_t x410 = INT8_MAX;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = 5;
	int32_t t94 = 12227;

	t94 = (x409<((x410/x411)%x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x413 = -1;
	int32_t x414 = INT32_MIN;
	int64_t x415 = 6079LL;
	uint64_t x416 = 1208166718387LLU;
	volatile int32_t t95 = -3143;

	t95 = (x413<((x414/x415)%x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x417 = INT8_MAX;
	volatile int32_t x418 = 2063274;

	t96 = (x417<((x418/x419)%x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = INT64_MAX;
	uint8_t x423 = UINT8_MAX;
	uint64_t x424 = 40263231629629LLU;
	volatile int32_t t97 = 125080433;

	t97 = (x421<((x422/x423)%x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = -1;
	int32_t x426 = INT32_MIN;
	uint64_t x428 = 11232190478LLU;
	static volatile int32_t t98 = 0;

	t98 = (x425<((x426/x427)%x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = -1LL;
	volatile uint64_t x430 = 2038353184152LLU;
	uint8_t x431 = UINT8_MAX;
	volatile int64_t x432 = INT64_MIN;
	volatile int32_t t99 = -78954389;

	t99 = (x429<((x430/x431)%x432));

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

