#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = 23160U;
int32_t x12 = -73905;
volatile int16_t x20 = 21;
int32_t x23 = 744;
static uint32_t x38 = 21U;
volatile int32_t t7 = 34530;
uint64_t x50 = UINT64_MAX;
volatile int64_t x57 = INT64_MIN;
uint16_t x59 = UINT16_MAX;
int64_t x62 = -1LL;
int64_t x64 = INT64_MIN;
int64_t x65 = INT64_MAX;
int8_t x72 = INT8_MIN;
uint16_t x75 = UINT16_MAX;
int8_t x76 = INT8_MIN;
volatile int32_t t15 = 92354286;
volatile int64_t x85 = -38059216164340LL;
int32_t t17 = 280;
int64_t x94 = INT64_MIN;
static int32_t x96 = INT32_MIN;
int32_t t18 = -9424212;
static int32_t x118 = INT32_MAX;
int32_t x119 = INT32_MIN;
static int16_t x124 = INT16_MIN;
volatile int32_t t25 = 0;
int64_t x135 = 58309189LL;
int32_t t27 = -22360987;
volatile int32_t t31 = 203648093;
static uint64_t x158 = UINT64_MAX;
static uint32_t x161 = UINT32_MAX;
static volatile int16_t x163 = INT16_MAX;
volatile uint8_t x168 = 3U;
volatile int32_t x171 = INT32_MAX;
volatile int16_t x173 = INT16_MAX;
int16_t x177 = -1;
static uint64_t x189 = 6865690498002848LLU;
int8_t x195 = 5;
int32_t t42 = 94;
int16_t x201 = INT16_MIN;
volatile int8_t x203 = -1;
int8_t x228 = INT8_MAX;
uint64_t x229 = 136742622471LLU;
int64_t x237 = INT64_MIN;
int8_t x238 = 2;
static volatile uint8_t x239 = 12U;
int32_t t49 = 7493;
int32_t t50 = 12321335;
uint32_t x253 = 2U;
int32_t x256 = INT32_MIN;
int16_t x257 = INT16_MAX;
int16_t x262 = -1;
int8_t x266 = 36;
int8_t x268 = -1;
int32_t t55 = 1;
volatile uint8_t x274 = 3U;
volatile int64_t x278 = -1LL;
volatile int8_t x279 = -1;
int16_t x281 = INT16_MIN;
int32_t x285 = -664374;
uint8_t x286 = UINT8_MAX;
uint8_t x287 = UINT8_MAX;
volatile int32_t t59 = 194770541;
volatile uint8_t x297 = 69U;
int32_t x298 = INT32_MIN;
static int32_t t61 = 12;
int32_t x305 = INT32_MIN;
uint8_t x307 = UINT8_MAX;
int64_t x319 = 337870LL;
uint32_t x321 = 20U;
int8_t x323 = INT8_MAX;
uint32_t x337 = 1319497U;
int64_t x340 = 8LL;
volatile int16_t x358 = -4;
static int32_t x370 = INT32_MAX;
uint32_t x375 = 616310773U;
int16_t x376 = INT16_MAX;
volatile int32_t x377 = -1;
uint64_t x378 = 6403939201LLU;
int32_t x380 = -1;
int16_t x385 = INT16_MIN;
uint64_t x387 = UINT64_MAX;
int64_t x393 = -62262LL;
volatile int16_t x394 = INT16_MIN;
static volatile uint64_t x396 = 23791668LLU;
int16_t x402 = -1;
uint8_t x403 = 21U;
static int32_t x413 = 13080;
static int32_t t87 = 25077;
int32_t t88 = -101500;
volatile int16_t x426 = 7;
int8_t x428 = INT8_MAX;
static uint32_t x445 = 70823U;
int64_t x446 = 206072LL;
volatile int8_t x447 = INT8_MIN;
volatile int8_t x448 = -29;
static volatile uint32_t x451 = UINT32_MAX;
volatile int32_t t95 = -5591503;
volatile int64_t x453 = -1LL;
volatile int16_t x456 = INT16_MAX;
static volatile int64_t x457 = INT64_MIN;
volatile uint64_t x460 = 10LLU;
volatile int16_t x464 = -1;
int16_t x467 = INT16_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int16_t x2 = 1600;
	int16_t x3 = 0;
	int64_t x4 = -1LL;
	int32_t t0 = 212609;

	t0 = (((x1+x2)&x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 25;
	int32_t x7 = INT32_MIN;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 10937590;

	t1 = (((x5+x6)&x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x10 = -102;
	uint8_t x11 = 0U;
	volatile int32_t t2 = 1897;

	t2 = (((x9+x10)&x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	int8_t x19 = 18;
	volatile int32_t t3 = -32;

	t3 = (((x17+x18)&x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static int16_t x22 = -1238;
	uint8_t x24 = 1U;
	int32_t t4 = -767835;

	t4 = (((x21+x22)&x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x29 = INT64_MIN;
	int64_t x30 = 13065274627278137LL;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t5 = -30699;

	t5 = (((x29+x30)&x31)<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 10145285893146LLU;
	int64_t x39 = -1LL;
	uint64_t x40 = 22LLU;
	volatile int32_t t6 = -5247;

	t6 = (((x37+x38)&x39)<=x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x41 = 15761U;
	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MAX;
	uint32_t x44 = 1U;

	t7 = (((x41+x42)&x43)<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = 41671124U;
	volatile int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	uint16_t x48 = 6848U;
	int32_t t8 = -25541;

	t8 = (((x45+x46)&x47)<=x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = -3354920;
	volatile uint64_t x51 = 163908187558501840LLU;
	uint32_t x52 = UINT32_MAX;
	int32_t t9 = -15688;

	t9 = (((x49+x50)&x51)<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = 1517680653LL;
	volatile uint32_t x54 = 5U;
	int8_t x55 = INT8_MIN;
	int64_t x56 = -1LL;
	static int32_t t10 = -17072;

	t10 = (((x53+x54)&x55)<=x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = 0;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t11 = 12919;

	t11 = (((x57+x58)&x59)<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = -1;
	uint64_t x63 = 941389272224793LLU;
	int32_t t12 = -1631437;

	t12 = (((x61+x62)&x63)<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MIN;
	int64_t x67 = -18029959289273231LL;
	volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t13 = 51300155;

	t13 = (((x65+x66)&x67)<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int16_t x70 = -1;
	uint8_t x71 = 0U;
	int32_t t14 = 8;

	t14 = (((x69+x70)&x71)<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int32_t x74 = -1;

	t15 = (((x73+x74)&x75)<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x86 = 84U;
	int8_t x87 = -5;
	int64_t x88 = INT64_MIN;
	volatile int32_t t16 = -342732;

	t16 = (((x85+x86)&x87)<=x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MAX;
	static int64_t x91 = INT64_MIN;
	int8_t x92 = 2;

	t17 = (((x89+x90)&x91)<=x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 28878LL;
	volatile int32_t x95 = INT32_MIN;

	t18 = (((x93+x94)&x95)<=x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x97 = 0U;
	volatile uint8_t x98 = 6U;
	volatile uint32_t x99 = 782U;
	int8_t x100 = INT8_MAX;
	int32_t t19 = -499;

	t19 = (((x97+x98)&x99)<=x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = -62;
	static int8_t x102 = INT8_MIN;
	int32_t x103 = 7;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t20 = 1;

	t20 = (((x101+x102)&x103)<=x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = 4125;
	uint64_t x106 = 381LLU;
	static int8_t x107 = 1;
	int8_t x108 = INT8_MAX;
	volatile int32_t t21 = -1;

	t21 = (((x105+x106)&x107)<=x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	volatile uint16_t x111 = 126U;
	uint16_t x112 = 61U;
	volatile int32_t t22 = 260554;

	t22 = (((x109+x110)&x111)<=x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int64_t x114 = 62152952637930LL;
	volatile int16_t x115 = 7;
	volatile int64_t x116 = 125247LL;
	volatile int32_t t23 = 2479;

	t23 = (((x113+x114)&x115)<=x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	static int64_t x120 = INT64_MIN;
	int32_t t24 = -9972617;

	t24 = (((x117+x118)&x119)<=x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x121 = 0U;
	volatile int32_t x122 = INT32_MAX;
	volatile uint8_t x123 = UINT8_MAX;

	t25 = (((x121+x122)&x123)<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MAX;
	int64_t x130 = -1LL;
	uint8_t x131 = 2U;
	static int64_t x132 = INT64_MAX;
	volatile int32_t t26 = -1;

	t26 = (((x129+x130)&x131)<=x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = UINT64_MAX;
	int64_t x134 = -3LL;
	volatile int16_t x136 = INT16_MIN;

	t27 = (((x133+x134)&x135)<=x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x137 = INT8_MAX;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = -125670257;
	uint8_t x140 = 1U;
	int32_t t28 = -20;

	t28 = (((x137+x138)&x139)<=x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -209228;
	int8_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MAX;
	volatile int32_t t29 = -293216422;

	t29 = (((x141+x142)&x143)<=x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	int16_t x147 = -1;
	int16_t x148 = INT16_MAX;
	int32_t t30 = 3243;

	t30 = (((x145+x146)&x147)<=x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x149 = 7345599;
	int8_t x150 = INT8_MAX;
	uint8_t x151 = UINT8_MAX;
	volatile int64_t x152 = -135LL;

	t31 = (((x149+x150)&x151)<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x157 = 2319282272LLU;
	volatile int8_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	int32_t t32 = -29;

	t32 = (((x157+x158)&x159)<=x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x162 = INT64_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t33 = -271;

	t33 = (((x161+x162)&x163)<=x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x165 = -4;
	static volatile int64_t x166 = -25LL;
	uint8_t x167 = 0U;
	volatile int32_t t34 = -1212257;

	t34 = (((x165+x166)&x167)<=x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x169 = 1900197U;
	int32_t x170 = INT32_MIN;
	int16_t x172 = 7;
	volatile int32_t t35 = -5;

	t35 = (((x169+x170)&x171)<=x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t36 = 6;

	t36 = (((x173+x174)&x175)<=x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t37 = -3;

	t37 = (((x177+x178)&x179)<=x180);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MAX;
	uint8_t x182 = 0U;
	int32_t x183 = 1;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t38 = 2;

	t38 = (((x181+x182)&x183)<=x184);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x185 = 18U;
	volatile int32_t x186 = 1;
	uint8_t x187 = UINT8_MAX;
	volatile uint8_t x188 = UINT8_MAX;
	int32_t t39 = -225426;

	t39 = (((x185+x186)&x187)<=x188);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x190 = -85032;
	volatile uint32_t x191 = 0U;
	volatile int64_t x192 = INT64_MIN;
	static int32_t t40 = 1299122;

	t40 = (((x189+x190)&x191)<=x192);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x193 = INT16_MAX;
	int8_t x194 = INT8_MAX;
	uint8_t x196 = UINT8_MAX;
	static int32_t t41 = 1383721;

	t41 = (((x193+x194)&x195)<=x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = -50;
	static volatile int8_t x198 = 58;
	int16_t x199 = 0;
	int32_t x200 = 36851679;

	t42 = (((x197+x198)&x199)<=x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x202 = -547887;
	int16_t x204 = INT16_MIN;
	static int32_t t43 = 938;

	t43 = (((x201+x202)&x203)<=x204);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MAX;
	uint16_t x219 = 7U;
	int16_t x220 = INT16_MIN;
	int32_t t44 = 1;

	t44 = (((x217+x218)&x219)<=x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x225 = UINT8_MAX;
	volatile int32_t x226 = INT32_MIN;
	volatile int8_t x227 = -16;
	int32_t t45 = 12844557;

	t45 = (((x225+x226)&x227)<=x228);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x230 = INT64_MAX;
	static int32_t x231 = INT32_MIN;
	uint64_t x232 = 126LLU;
	static volatile int32_t t46 = 56297;

	t46 = (((x229+x230)&x231)<=x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = 2;
	volatile uint16_t x234 = 28633U;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = 96U;
	int32_t t47 = 121041;

	t47 = (((x233+x234)&x235)<=x236);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x240 = 0;
	static int32_t t48 = 1986350;

	t48 = (((x237+x238)&x239)<=x240);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = 233U;
	volatile int8_t x242 = INT8_MAX;
	int8_t x243 = -1;
	volatile uint8_t x244 = 58U;

	t49 = (((x241+x242)&x243)<=x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x249 = UINT8_MAX;
	static int8_t x250 = INT8_MIN;
	int16_t x251 = 5;
	int64_t x252 = -1LL;

	t50 = (((x249+x250)&x251)<=x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x254 = INT16_MIN;
	static uint64_t x255 = UINT64_MAX;
	volatile int32_t t51 = 61852461;

	t51 = (((x253+x254)&x255)<=x256);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x258 = 2276U;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = UINT32_MAX;
	int32_t t52 = -56;

	t52 = (((x257+x258)&x259)<=x260);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = -1;
	uint8_t x263 = 34U;
	uint32_t x264 = UINT32_MAX;
	static int32_t t53 = -628807747;

	t53 = (((x261+x262)&x263)<=x264);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x265 = INT64_MIN;
	int8_t x267 = INT8_MAX;
	volatile int32_t t54 = -215825;

	t54 = (((x265+x266)&x267)<=x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = -5;
	uint64_t x270 = UINT64_MAX;
	uint16_t x271 = 1996U;
	uint16_t x272 = 21U;

	t55 = (((x269+x270)&x271)<=x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x273 = 364U;
	volatile int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t56 = -1;

	t56 = (((x273+x274)&x275)<=x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x277 = 1203913U;
	static uint8_t x280 = 40U;
	static volatile int32_t t57 = -168151;

	t57 = (((x277+x278)&x279)<=x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x282 = -1;
	uint16_t x283 = 2U;
	int32_t x284 = -1;
	static int32_t t58 = 7;

	t58 = (((x281+x282)&x283)<=x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x288 = 22U;

	t59 = (((x285+x286)&x287)<=x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = -49;
	volatile int8_t x290 = INT8_MIN;
	uint16_t x291 = 302U;
	volatile uint64_t x292 = UINT64_MAX;
	int32_t t60 = -15;

	t60 = (((x289+x290)&x291)<=x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x299 = -1;
	static volatile int8_t x300 = INT8_MAX;

	t61 = (((x297+x298)&x299)<=x300);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	static int64_t x303 = -10065612LL;
	int32_t x304 = -45864508;
	volatile int32_t t62 = -19616;

	t62 = (((x301+x302)&x303)<=x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x306 = 18141115390LLU;
	uint32_t x308 = 3012942U;
	int32_t t63 = 4;

	t63 = (((x305+x306)&x307)<=x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x309 = INT16_MIN;
	static int32_t x310 = -1;
	int64_t x311 = -1LL;
	int32_t x312 = -3;
	static int32_t t64 = 6;

	t64 = (((x309+x310)&x311)<=x312);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x313 = 18;
	int32_t x314 = -1;
	uint64_t x315 = 59283644095LLU;
	uint32_t x316 = 28119U;
	int32_t t65 = -1265;

	t65 = (((x313+x314)&x315)<=x316);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x318 = 18839342LLU;
	int32_t x320 = INT32_MIN;
	int32_t t66 = 422;

	t66 = (((x317+x318)&x319)<=x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x322 = UINT8_MAX;
	int32_t x324 = 6266132;
	int32_t t67 = 8776867;

	t67 = (((x321+x322)&x323)<=x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = -303LL;
	uint64_t x327 = 3081820LLU;
	int32_t x328 = -1;
	volatile int32_t t68 = 3078271;

	t68 = (((x325+x326)&x327)<=x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x329 = 198370913LLU;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 2;
	int16_t x332 = INT16_MIN;
	int32_t t69 = 283492427;

	t69 = (((x329+x330)&x331)<=x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x333 = -1LL;
	uint64_t x334 = 1095233018690153LLU;
	uint32_t x335 = 7U;
	uint64_t x336 = 11LLU;
	static int32_t t70 = 279;

	t70 = (((x333+x334)&x335)<=x336);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x338 = 17;
	uint16_t x339 = UINT16_MAX;
	int32_t t71 = 1760;

	t71 = (((x337+x338)&x339)<=x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = 43830821LLU;
	int8_t x342 = -17;
	volatile uint8_t x343 = UINT8_MAX;
	static volatile int8_t x344 = 31;
	volatile int32_t t72 = -387176839;

	t72 = (((x341+x342)&x343)<=x344);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x345 = 462453U;
	uint32_t x346 = 288U;
	uint8_t x347 = UINT8_MAX;
	static volatile int8_t x348 = 1;
	volatile int32_t t73 = -12;

	t73 = (((x345+x346)&x347)<=x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = UINT8_MAX;
	volatile int64_t x350 = 484242007458175686LL;
	volatile int16_t x351 = -3882;
	static uint16_t x352 = 12U;
	volatile int32_t t74 = 56555794;

	t74 = (((x349+x350)&x351)<=x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x354 = 30412U;
	int8_t x355 = -13;
	static int64_t x356 = INT64_MAX;
	int32_t t75 = -74277502;

	t75 = (((x353+x354)&x355)<=x356);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x357 = 14722U;
	static int16_t x359 = INT16_MIN;
	uint64_t x360 = UINT64_MAX;
	int32_t t76 = 115;

	t76 = (((x357+x358)&x359)<=x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = -1;
	static int16_t x364 = INT16_MAX;
	volatile int32_t t77 = 57358296;

	t77 = (((x361+x362)&x363)<=x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x369 = UINT32_MAX;
	static int16_t x371 = INT16_MIN;
	uint32_t x372 = 28673U;
	int32_t t78 = -12;

	t78 = (((x369+x370)&x371)<=x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x373 = 8966U;
	int16_t x374 = -2;
	static int32_t t79 = -4827;

	t79 = (((x373+x374)&x375)<=x376);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x379 = UINT16_MAX;
	static int32_t t80 = -2212541;

	t80 = (((x377+x378)&x379)<=x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x381 = UINT32_MAX;
	static uint32_t x382 = 2043062344U;
	int8_t x383 = -7;
	uint16_t x384 = 0U;
	static int32_t t81 = -1575033;

	t81 = (((x381+x382)&x383)<=x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x386 = -1;
	static uint8_t x388 = 56U;
	int32_t t82 = -2805434;

	t82 = (((x385+x386)&x387)<=x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x395 = INT16_MIN;
	int32_t t83 = 556470096;

	t83 = (((x393+x394)&x395)<=x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x404 = INT8_MIN;
	volatile int32_t t84 = 1947785;

	t84 = (((x401+x402)&x403)<=x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = 454LL;
	int64_t x411 = INT64_MIN;
	volatile uint8_t x412 = 0U;
	static volatile int32_t t85 = 7938645;

	t85 = (((x409+x410)&x411)<=x412);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x414 = 16318;
	uint32_t x415 = 440U;
	int64_t x416 = 2LL;
	int32_t t86 = -1;

	t86 = (((x413+x414)&x415)<=x416);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x417 = UINT16_MAX;
	static int64_t x418 = -1LL;
	int8_t x419 = INT8_MAX;
	static int8_t x420 = INT8_MIN;

	t87 = (((x417+x418)&x419)<=x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x421 = 77U;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 112U;

	t88 = (((x421+x422)&x423)<=x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = 49219882LL;
	int16_t x427 = INT16_MAX;
	int32_t t89 = 1090047;

	t89 = (((x425+x426)&x427)<=x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = 7315;
	int8_t x430 = -1;
	uint64_t x431 = UINT64_MAX;
	int16_t x432 = 3218;
	int32_t t90 = 39291356;

	t90 = (((x429+x430)&x431)<=x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = 14;
	uint32_t x434 = UINT32_MAX;
	uint16_t x435 = 16224U;
	uint8_t x436 = 61U;
	static int32_t t91 = 3186;

	t91 = (((x433+x434)&x435)<=x436);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MAX;
	int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t92 = -1;

	t92 = (((x437+x438)&x439)<=x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x441 = INT32_MAX;
	int64_t x442 = -696024675481LL;
	uint32_t x443 = 7U;
	static uint16_t x444 = UINT16_MAX;
	static volatile int32_t t93 = 2009;

	t93 = (((x441+x442)&x443)<=x444);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t t94 = -669;

	t94 = (((x445+x446)&x447)<=x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = INT8_MIN;
	static int16_t x450 = -1053;
	int16_t x452 = INT16_MIN;

	t95 = (((x449+x450)&x451)<=x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x454 = 66842517645982LL;
	int32_t x455 = INT32_MIN;
	int32_t t96 = -2009874;

	t96 = (((x453+x454)&x455)<=x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x458 = UINT64_MAX;
	int16_t x459 = INT16_MAX;
	static int32_t t97 = -10483;

	t97 = (((x457+x458)&x459)<=x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = -1;
	int64_t x462 = INT64_MAX;
	volatile int8_t x463 = INT8_MAX;
	volatile int32_t t98 = -112766346;

	t98 = (((x461+x462)&x463)<=x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = -1LL;
	int32_t x466 = 21024810;
	volatile int8_t x468 = -1;
	int32_t t99 = -201800201;

	t99 = (((x465+x466)&x467)<=x468);

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

