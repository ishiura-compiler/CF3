#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static uint16_t x2 = UINT16_MAX;
int16_t x5 = INT16_MIN;
static int32_t t1 = 1004;
int64_t x9 = -1LL;
int64_t t2 = 414LL;
uint16_t x13 = 1U;
volatile int32_t x16 = -1;
int32_t x19 = INT32_MAX;
uint32_t x26 = UINT32_MAX;
uint32_t x28 = UINT32_MAX;
static volatile uint64_t x30 = 1432542LLU;
int64_t x39 = 699427145071022LL;
static uint64_t x40 = 2776LLU;
volatile int8_t x46 = -1;
uint64_t t9 = 462465289454324LLU;
static int32_t x55 = -1;
static int64_t t11 = 59LL;
static int16_t x63 = -3352;
int64_t x66 = INT64_MAX;
volatile int64_t t15 = 26760825LL;
uint32_t x82 = UINT32_MAX;
volatile int64_t x84 = 416059741LL;
volatile int64_t t16 = -55682LL;
uint8_t x86 = 1U;
int64_t x87 = INT64_MIN;
volatile int8_t x93 = -5;
volatile uint64_t t19 = 3736322589993LLU;
uint64_t x104 = 7899LLU;
int8_t x107 = -23;
static volatile int32_t t21 = 225;
volatile int64_t x112 = -1LL;
volatile int32_t t26 = -12;
uint32_t x149 = 2215074U;
int16_t x153 = 1630;
static volatile int8_t x155 = -1;
uint8_t x164 = 1U;
static int64_t x169 = -3240356835601424069LL;
int8_t x170 = -19;
static int16_t x173 = 0;
volatile int16_t x174 = INT16_MIN;
static volatile int32_t t34 = 2895;
int8_t x183 = INT8_MIN;
int32_t t37 = -1;
int32_t x191 = 68034;
int8_t x210 = -1;
uint16_t x211 = 1109U;
volatile uint64_t t43 = 963349135LLU;
uint16_t x213 = 249U;
static int32_t t44 = 1437;
int16_t x223 = INT16_MIN;
static volatile int32_t t46 = -65;
static int8_t x241 = INT8_MIN;
static int32_t x246 = INT32_MIN;
uint32_t t52 = 159U;
uint16_t x249 = UINT16_MAX;
volatile int8_t x253 = -4;
int8_t x258 = INT8_MAX;
int8_t x260 = -1;
int8_t x273 = -1;
volatile uint32_t x275 = 816567U;
int16_t x291 = INT16_MIN;
volatile int32_t x296 = -1;
int64_t x299 = 158LL;
uint32_t x300 = 24U;
uint64_t x306 = UINT64_MAX;
volatile uint32_t x308 = 465U;
int32_t t65 = 212678;
int32_t x318 = -79541350;
int64_t x325 = -111544865394824212LL;
static int8_t x328 = 0;
int64_t x340 = INT64_MIN;
static uint8_t x355 = UINT8_MAX;
volatile int32_t x357 = -1;
uint8_t x362 = 1U;
volatile int16_t x369 = INT16_MAX;
volatile int8_t x383 = INT8_MIN;
int16_t x398 = -1756;
static uint32_t x410 = 60U;
static volatile int32_t x412 = INT32_MAX;
int8_t x414 = INT8_MAX;
int8_t x416 = -1;
volatile int64_t x419 = INT64_MIN;
int16_t x422 = -3095;
volatile int32_t t87 = -1;
int16_t x430 = -1;
int64_t x454 = INT64_MAX;
int16_t x463 = INT16_MIN;
int8_t x464 = -1;
static int64_t t95 = -146975608982751LL;
int16_t x481 = -26;
volatile uint16_t x484 = 265U;


void f0(void) {
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -14734004;

	t0 = ((x1-x2)+(x3==x4));

	if (t0 != -98303) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -12;
	static uint8_t x7 = 0U;
	int32_t x8 = INT32_MIN;

	t1 = ((x5-x6)+(x7==x8));

	if (t1 != -32756) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 12U;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;

	t2 = ((x9-x10)+(x11==x12));

	if (t2 != -13LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int32_t x15 = 406815;
	int32_t t3 = 139073;

	t3 = ((x13-x14)+(x15==x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 4;
	static uint64_t x18 = UINT64_MAX;
	int8_t x20 = 0;
	uint64_t t4 = 12625873144835141LLU;

	t4 = ((x17-x18)+(x19==x20));

	if (t4 != 5LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 24935668U;
	volatile int8_t x27 = INT8_MIN;
	uint32_t t5 = 7835669U;

	t5 = ((x25-x26)+(x27==x28));

	if (t5 != 24935669U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 5U;
	uint64_t x31 = 1689699LLU;
	volatile int64_t x32 = INT64_MIN;
	volatile uint64_t t6 = 592561044512LLU;

	t6 = ((x29-x30)+(x31==x32));

	if (t6 != 18446744073708119079LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	volatile uint32_t x38 = 338U;
	volatile uint32_t t7 = 832236U;

	t7 = ((x37-x38)+(x39==x40));

	if (t7 != 4294966957U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	int64_t x47 = -1LL;
	static int8_t x48 = INT8_MAX;
	volatile int32_t t8 = -490;

	t8 = ((x45-x46)+(x47==x48));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = 28;
	uint64_t x50 = UINT64_MAX;
	static int8_t x51 = 1;
	int32_t x52 = -1;

	t9 = ((x49-x50)+(x51==x52));

	if (t9 != 29LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	volatile int32_t x54 = INT32_MIN;
	volatile uint32_t x56 = 37719U;
	int64_t t10 = -817193251743165152LL;

	t10 = ((x53-x54)+(x55==x56));

	if (t10 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MAX;
	uint32_t x58 = UINT32_MAX;
	static int64_t x59 = INT64_MIN;
	int8_t x60 = -1;

	t11 = ((x57-x58)+(x59==x60));

	if (t11 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = 440000398;
	static uint64_t x64 = UINT64_MAX;
	volatile int32_t t12 = 27;

	t12 = ((x61-x62)+(x63==x64));

	if (t12 != -440000526) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x65 = UINT8_MAX;
	uint32_t x67 = 4U;
	int16_t x68 = -1;
	static int64_t t13 = -24066498LL;

	t13 = ((x65-x66)+(x67==x68));

	if (t13 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	volatile int64_t x70 = INT64_MAX;
	int64_t x71 = 436LL;
	int8_t x72 = 2;
	int64_t t14 = 11283763LL;

	t14 = ((x69-x70)+(x71==x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x77 = 3681;
	static volatile int64_t x78 = -147LL;
	static int8_t x79 = -2;
	int64_t x80 = 149338LL;

	t15 = ((x77-x78)+(x79==x80));

	if (t15 != 3828LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = 512472044LL;
	static int64_t x83 = -1LL;

	t16 = ((x81-x82)+(x83==x84));

	if (t16 != -3782495251LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x85-x86)+(x87==x88));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x94 = -1;
	static volatile int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t18 = -57005108;

	t18 = ((x93-x94)+(x95==x96));

	if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 39007887LLU;
	uint16_t x98 = 27U;
	uint8_t x99 = 3U;
	int8_t x100 = -1;

	t19 = ((x97-x98)+(x99==x100));

	if (t19 != 39007860LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = INT16_MIN;
	uint16_t x102 = 49U;
	uint8_t x103 = 0U;
	static volatile int32_t t20 = 112;

	t20 = ((x101-x102)+(x103==x104));

	if (t20 != -32817) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	int32_t x108 = INT32_MAX;

	t21 = ((x105-x106)+(x107==x108));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x109 = 2U;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MAX;
	int32_t t22 = 0;

	t22 = ((x109-x110)+(x111==x112));

	if (t22 != 130) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x113 = 13063U;
	int8_t x114 = INT8_MIN;
	static volatile int8_t x115 = INT8_MAX;
	uint16_t x116 = 5958U;
	static uint32_t t23 = 27U;

	t23 = ((x113-x114)+(x115==x116));

	if (t23 != 13191U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 127032U;
	int16_t x119 = -1;
	int16_t x120 = INT16_MAX;
	uint32_t t24 = 27271U;

	t24 = ((x117-x118)+(x119==x120));

	if (t24 != 4294840136U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 2583LLU;
	static int32_t x122 = 1;
	volatile int8_t x123 = INT8_MIN;
	volatile int64_t x124 = 285005729998LL;
	uint64_t t25 = 603724722627770611LLU;

	t25 = ((x121-x122)+(x123==x124));

	if (t25 != 2582LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = 3147;
	int8_t x130 = 6;
	int16_t x131 = -1;
	static uint8_t x132 = UINT8_MAX;

	t26 = ((x129-x130)+(x131==x132));

	if (t26 != 3141) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x133 = -39;
	uint16_t x134 = 30U;
	uint32_t x135 = 1294714U;
	volatile int32_t x136 = -120439;
	static volatile int32_t t27 = 3005693;

	t27 = ((x133-x134)+(x135==x136));

	if (t27 != -69) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = 1;
	static volatile int32_t x140 = 7437;
	uint64_t t28 = 855439664554669LLU;

	t28 = ((x137-x138)+(x139==x140));

	if (t28 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x150 = 0;
	int32_t x151 = -1;
	int8_t x152 = -5;
	volatile uint32_t t29 = 2U;

	t29 = ((x149-x150)+(x151==x152));

	if (t29 != 2215074U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x154 = -899395592;
	uint32_t x156 = 148455446U;
	static volatile int32_t t30 = -42747;

	t30 = ((x153-x154)+(x155==x156));

	if (t30 != 899397222) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t31 = -1;

	t31 = ((x157-x158)+(x159==x160));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x161 = -11579080633LL;
	int64_t x162 = INT64_MIN;
	int16_t x163 = 227;
	int64_t t32 = 52256680227LL;

	t32 = ((x161-x162)+(x163==x164));

	if (t32 != 9223372025275695175LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	volatile int64_t t33 = -4147361323LL;

	t33 = ((x169-x170)+(x171==x172));

	if (t33 != -3240356835601424050LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x175 = INT64_MIN;
	static int8_t x176 = INT8_MIN;

	t34 = ((x173-x174)+(x175==x176));

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x177 = -12518777114361LL;
	static int16_t x178 = INT16_MIN;
	int64_t x179 = -1808830643LL;
	volatile int64_t x180 = -14LL;
	int64_t t35 = 30496105697LL;

	t35 = ((x177-x178)+(x179==x180));

	if (t35 != -12518777081593LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x181 = UINT8_MAX;
	static int16_t x182 = INT16_MIN;
	int32_t x184 = INT32_MAX;
	int32_t t36 = 7;

	t36 = ((x181-x182)+(x183==x184));

	if (t36 != 33023) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = 0;
	int32_t x187 = INT32_MIN;
	int16_t x188 = -1;

	t37 = ((x185-x186)+(x187==x188));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = -1;
	static int32_t x190 = -16751370;
	int32_t x192 = INT32_MIN;
	int32_t t38 = 46844;

	t38 = ((x189-x190)+(x191==x192));

	if (t38 != 16751369) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = -121220390058568096LL;
	static int8_t x195 = -1;
	int8_t x196 = -1;
	int64_t t39 = -292924057455554587LL;

	t39 = ((x193-x194)+(x195==x196));

	if (t39 != 121220390058568352LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = -1;
	int64_t x199 = -1LL;
	int8_t x200 = INT8_MIN;
	static uint64_t t40 = 826607454046891980LLU;

	t40 = ((x197-x198)+(x199==x200));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = 49U;
	static volatile int8_t x202 = INT8_MIN;
	int32_t x203 = 0;
	volatile int8_t x204 = -1;
	int32_t t41 = 2182;

	t41 = ((x201-x202)+(x203==x204));

	if (t41 != 177) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = INT64_MAX;
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = INT64_MIN;
	static int8_t x208 = INT8_MIN;
	volatile int64_t t42 = 163235331372LL;

	t42 = ((x205-x206)+(x207==x208));

	if (t42 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x212 = UINT8_MAX;

	t43 = ((x209-x210)+(x211==x212));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x214 = -1;
	int8_t x215 = -8;
	static volatile int64_t x216 = INT64_MAX;

	t44 = ((x213-x214)+(x215==x216));

	if (t44 != 250) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	static volatile uint16_t x219 = 4U;
	volatile int64_t x220 = INT64_MIN;
	int32_t t45 = 66853279;

	t45 = ((x217-x218)+(x219==x220));

	if (t45 != 2147483520) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = -694;
	int8_t x222 = -13;
	int16_t x224 = -1;

	t46 = ((x221-x222)+(x223==x224));

	if (t46 != -681) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = -1;
	volatile uint64_t x226 = 604104LLU;
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MAX;
	uint64_t t47 = 28702562588869739LLU;

	t47 = ((x225-x226)+(x227==x228));

	if (t47 != 18446744073708947511LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x229 = UINT64_MAX;
	int32_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	uint64_t t48 = 1899782425LLU;

	t48 = ((x229-x230)+(x231==x232));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = -1;
	int16_t x235 = -20;
	uint32_t x236 = UINT32_MAX;
	static int32_t t49 = 823;

	t49 = ((x233-x234)+(x235==x236));

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = -36;
	int16_t x238 = 2348;
	uint8_t x239 = 5U;
	volatile int8_t x240 = INT8_MIN;
	int32_t t50 = -178313127;

	t50 = ((x237-x238)+(x239==x240));

	if (t50 != -2384) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x242 = -3;
	volatile int8_t x243 = 1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t51 = 15018;

	t51 = ((x241-x242)+(x243==x244));

	if (t51 != -125) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = 2U;
	int16_t x247 = -1;
	uint64_t x248 = 13452406103513721LLU;

	t52 = ((x245-x246)+(x247==x248));

	if (t52 != 2147483650U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x250 = 14U;
	static volatile int16_t x251 = 10826;
	static int16_t x252 = -1;
	volatile uint32_t t53 = 1743954U;

	t53 = ((x249-x250)+(x251==x252));

	if (t53 != 65521U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x254 = UINT64_MAX;
	static int32_t x255 = INT32_MAX;
	int64_t x256 = -1LL;
	uint64_t t54 = 1LLU;

	t54 = ((x253-x254)+(x255==x256));

	if (t54 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x257 = INT8_MAX;
	int8_t x259 = INT8_MIN;
	int32_t t55 = -1656242;

	t55 = ((x257-x258)+(x259==x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x274 = UINT64_MAX;
	static int32_t x276 = INT32_MAX;
	volatile uint64_t t56 = 396935407279027LLU;

	t56 = ((x273-x274)+(x275==x276));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = -43123LL;
	uint8_t x279 = UINT8_MAX;
	static int16_t x280 = -1;
	int64_t t57 = -486008102565190320LL;

	t57 = ((x277-x278)+(x279==x280));

	if (t57 != 43378LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = 9757LL;
	int8_t x282 = 2;
	int8_t x283 = -1;
	int16_t x284 = INT16_MAX;
	int64_t t58 = 9885LL;

	t58 = ((x281-x282)+(x283==x284));

	if (t58 != 9755LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x285 = 1LLU;
	int16_t x286 = -21;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 13U;
	volatile uint64_t t59 = 362688208451412LLU;

	t59 = ((x285-x286)+(x287==x288));

	if (t59 != 22LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	int16_t x292 = -2;
	volatile int32_t t60 = 6006;

	t60 = ((x289-x290)+(x291==x292));

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x293 = INT64_MIN;
	static volatile uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 3U;
	volatile uint64_t t61 = 119576487912374482LLU;

	t61 = ((x293-x294)+(x295==x296));

	if (t61 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 22U;
	static uint64_t x298 = 957LLU;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x297-x298)+(x299==x300));

	if (t62 != 18446744073709550681LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x301 = INT16_MIN;
	static volatile uint8_t x302 = 1U;
	volatile uint16_t x303 = 1016U;
	uint16_t x304 = 124U;
	int32_t t63 = -5;

	t63 = ((x301-x302)+(x303==x304));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x305 = 0U;
	static int32_t x307 = -1;
	volatile uint64_t t64 = 681044503246643LLU;

	t64 = ((x305-x306)+(x307==x308));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = 0;
	uint16_t x314 = 1344U;
	volatile int8_t x315 = 1;
	static int16_t x316 = 811;

	t65 = ((x313-x314)+(x315==x316));

	if (t65 != -1344) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = INT16_MIN;
	static uint32_t x319 = 674762U;
	volatile int32_t x320 = -1;
	int32_t t66 = 1385249;

	t66 = ((x317-x318)+(x319==x320));

	if (t66 != 79508582) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x326 = INT16_MIN;
	static volatile int64_t x327 = INT64_MAX;
	int64_t t67 = -130LL;

	t67 = ((x325-x326)+(x327==x328));

	if (t67 != -111544865394791444LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x329 = INT16_MIN;
	int32_t x330 = 15616041;
	volatile int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	volatile int32_t t68 = 0;

	t68 = ((x329-x330)+(x331==x332));

	if (t68 != -15648809) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x333 = -1;
	uint32_t x334 = 907917808U;
	int64_t x335 = INT64_MIN;
	static int64_t x336 = INT64_MIN;
	uint32_t t69 = 460422324U;

	t69 = ((x333-x334)+(x335==x336));

	if (t69 != 3387049488U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = 1625364983795LLU;
	volatile int8_t x339 = 1;
	volatile uint64_t t70 = 2769343951111473LLU;

	t70 = ((x337-x338)+(x339==x340));

	if (t70 != 18446742448344535053LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x349 = -17020862;
	uint16_t x350 = 4749U;
	static uint16_t x351 = 28U;
	volatile int8_t x352 = -1;
	int32_t t71 = -7;

	t71 = ((x349-x350)+(x351==x352));

	if (t71 != -17025611) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x353 = INT16_MIN;
	static int16_t x354 = -1;
	volatile uint64_t x356 = UINT64_MAX;
	int32_t t72 = 2696257;

	t72 = ((x353-x354)+(x355==x356));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t73 = 8321343;

	t73 = ((x357-x358)+(x359==x360));

	if (t73 != -65536) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x361 = -5037;
	int16_t x363 = 60;
	int8_t x364 = 53;
	volatile int32_t t74 = -1050714357;

	t74 = ((x361-x362)+(x363==x364));

	if (t74 != -5038) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 9U;
	volatile int32_t x367 = -1;
	static uint8_t x368 = 92U;
	static volatile uint64_t t75 = 25LLU;

	t75 = ((x365-x366)+(x367==x368));

	if (t75 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x370 = -8550066;
	volatile int8_t x371 = -1;
	uint32_t x372 = 112343627U;
	volatile int32_t t76 = 3693;

	t76 = ((x369-x370)+(x371==x372));

	if (t76 != 8582833) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = INT64_MAX;
	static int16_t x374 = INT16_MAX;
	int16_t x375 = -2463;
	volatile uint32_t x376 = 10922U;
	int64_t t77 = -184977859470891263LL;

	t77 = ((x373-x374)+(x375==x376));

	if (t77 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x381 = 9927;
	static int32_t x382 = -1;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t78 = 1;

	t78 = ((x381-x382)+(x383==x384));

	if (t78 != 9929) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x385 = -1;
	int64_t x386 = 11007337697305LL;
	int64_t x387 = 493096964LL;
	int16_t x388 = INT16_MIN;
	volatile int64_t t79 = -104953879644LL;

	t79 = ((x385-x386)+(x387==x388));

	if (t79 != -11007337697306LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x393 = INT8_MAX;
	volatile int16_t x394 = -1;
	volatile uint16_t x395 = 299U;
	int8_t x396 = 4;
	int32_t t80 = 36042;

	t80 = ((x393-x394)+(x395==x396));

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x397 = UINT64_MAX;
	uint8_t x399 = 7U;
	volatile int8_t x400 = INT8_MIN;
	uint64_t t81 = 2098LLU;

	t81 = ((x397-x398)+(x399==x400));

	if (t81 != 1755LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = -24;
	static uint8_t x406 = 97U;
	volatile uint64_t x407 = 12266391428047849LLU;
	int32_t x408 = INT32_MAX;
	volatile int32_t t82 = 1714;

	t82 = ((x405-x406)+(x407==x408));

	if (t82 != -121) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x409 = 176U;
	int8_t x411 = 1;
	uint32_t t83 = 11971177U;

	t83 = ((x409-x410)+(x411==x412));

	if (t83 != 116U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x413 = 12U;
	int16_t x415 = -1;
	int32_t t84 = 24947;

	t84 = ((x413-x414)+(x415==x416));

	if (t84 != -114) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int8_t x418 = -1;
	int16_t x420 = -436;
	uint64_t t85 = 472LLU;

	t85 = ((x417-x418)+(x419==x420));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x421 = UINT32_MAX;
	int16_t x423 = -7795;
	uint16_t x424 = 10U;
	static volatile uint32_t t86 = 3901U;

	t86 = ((x421-x422)+(x423==x424));

	if (t86 != 3094U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	volatile int16_t x428 = -231;

	t87 = ((x425-x426)+(x427==x428));

	if (t87 != 2147450880) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = -1;
	int32_t t88 = -24;

	t88 = ((x429-x430)+(x431==x432));

	if (t88 != -2147483646) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x433 = UINT16_MAX;
	static volatile int16_t x434 = INT16_MIN;
	static uint32_t x435 = UINT32_MAX;
	uint32_t x436 = UINT32_MAX;
	static int32_t t89 = 48744211;

	t89 = ((x433-x434)+(x435==x436));

	if (t89 != 98304) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x437 = 29483U;
	int8_t x438 = INT8_MAX;
	int64_t x439 = -4464045986268357771LL;
	volatile int32_t x440 = 6;
	int32_t t90 = 11;

	t90 = ((x437-x438)+(x439==x440));

	if (t90 != 29356) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x445 = INT32_MAX;
	uint32_t x446 = 59212U;
	volatile int8_t x447 = -1;
	static volatile int16_t x448 = INT16_MIN;
	uint32_t t91 = 3577U;

	t91 = ((x445-x446)+(x447==x448));

	if (t91 != 2147424435U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x449 = -1;
	uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = -1;
	int8_t x452 = -1;
	volatile uint32_t t92 = 9115025U;

	t92 = ((x449-x450)+(x451==x452));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x453 = INT64_MAX;
	volatile int64_t x455 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	int64_t t93 = 56803502311396678LL;

	t93 = ((x453-x454)+(x455==x456));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = 1693586562542604LL;
	static volatile int16_t x462 = INT16_MIN;
	volatile int64_t t94 = 78827078182989LL;

	t94 = ((x461-x462)+(x463==x464));

	if (t94 != 1693586562575372LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x465 = INT32_MAX;
	static int64_t x466 = 422933325LL;
	int16_t x467 = -46;
	static int32_t x468 = -1;

	t95 = ((x465-x466)+(x467==x468));

	if (t95 != 1724550322LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = 580668660793LLU;
	uint16_t x470 = 53U;
	int16_t x471 = INT16_MIN;
	int16_t x472 = -53;
	static uint64_t t96 = 16012944718418547LLU;

	t96 = ((x469-x470)+(x471==x472));

	if (t96 != 580668660740LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x473 = 1U;
	uint16_t x474 = UINT16_MAX;
	volatile int16_t x475 = INT16_MAX;
	int64_t x476 = INT64_MIN;
	int32_t t97 = -30402681;

	t97 = ((x473-x474)+(x475==x476));

	if (t97 != -65534) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x477 = 412960LLU;
	int64_t x478 = 7147LL;
	volatile uint64_t x479 = 6611150634584LLU;
	volatile int16_t x480 = INT16_MIN;
	volatile uint64_t t98 = 69LLU;

	t98 = ((x477-x478)+(x479==x480));

	if (t98 != 405813LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x482 = INT16_MIN;
	uint64_t x483 = 7002232665LLU;
	int32_t t99 = -228;

	t99 = ((x481-x482)+(x483==x484));

	if (t99 != 32742) { NG(); } else { ; }
	
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

