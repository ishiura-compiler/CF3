#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -61;
static uint8_t x4 = 0U;
volatile uint8_t x8 = 0U;
static int32_t x19 = INT32_MIN;
int64_t t4 = 3292471072322LL;
int32_t x25 = INT32_MAX;
volatile int8_t x26 = -1;
int32_t x29 = -1;
uint64_t t8 = 0LLU;
volatile int32_t x39 = INT32_MIN;
int16_t x44 = 236;
static int32_t x94 = -1;
int8_t x103 = INT8_MAX;
static int16_t x107 = INT16_MIN;
uint32_t x117 = 131U;
static int8_t x118 = -3;
volatile int64_t t25 = 7425298141861LL;
volatile int64_t t26 = -4219581174065LL;
int16_t x133 = INT16_MAX;
volatile int32_t t30 = -20;
static int16_t x150 = INT16_MAX;
int8_t x157 = -1;
volatile uint8_t x162 = UINT8_MAX;
uint8_t x163 = 12U;
int32_t x165 = INT32_MIN;
static int32_t x166 = 12;
volatile uint32_t t36 = 389U;
uint32_t x171 = 7165279U;
int32_t x172 = INT32_MIN;
int16_t x181 = -6;
volatile int32_t x184 = -715689342;
volatile uint64_t x189 = UINT64_MAX;
uint16_t x195 = UINT16_MAX;
static uint8_t x200 = 120U;
int8_t x204 = INT8_MAX;
int64_t t44 = 9LL;
static int8_t x209 = -1;
static int8_t x214 = INT8_MAX;
static uint32_t x215 = UINT32_MAX;
volatile uint32_t t46 = 14478U;
static int64_t x223 = INT64_MIN;
volatile uint64_t t49 = 978723020162LLU;
volatile int32_t x237 = -4;
int64_t x240 = 272417901545244LL;
volatile int64_t t52 = -27632947434286LL;
static uint8_t x245 = 28U;
int64_t x246 = INT64_MAX;
int64_t x249 = -3LL;
int64_t t55 = -428668047LL;
uint64_t x253 = 594700226LLU;
uint64_t t56 = 5296LLU;
volatile uint64_t t57 = 1470436952461LLU;
static uint64_t x266 = 83151176761LLU;
int64_t x269 = -1LL;
uint16_t x272 = 28597U;
uint32_t x276 = 2U;
static uint32_t x280 = 0U;
uint64_t t63 = 3680012513700LLU;
int32_t x285 = -299466;
uint8_t x288 = UINT8_MAX;
static int16_t x290 = INT16_MIN;
static volatile int64_t x294 = INT64_MIN;
volatile uint64_t t67 = 38296638391LLU;
volatile int32_t x301 = -1;
int64_t x302 = 168855901LL;
static volatile uint64_t x303 = 133003266LLU;
int32_t x304 = INT32_MAX;
int16_t x310 = -14;
int64_t t69 = 619251LL;
uint16_t x313 = UINT16_MAX;
static uint32_t x314 = 5524155U;
volatile int32_t x316 = INT32_MIN;
volatile int8_t x318 = INT8_MAX;
int32_t x330 = -1;
static volatile int64_t t73 = -130723775LL;
static volatile int16_t x338 = INT16_MIN;
int8_t x339 = -1;
int64_t t74 = -395083408996LL;
volatile int16_t x342 = -1;
int32_t x358 = INT32_MAX;
uint32_t x361 = UINT32_MAX;
volatile uint64_t x362 = 265LLU;
uint64_t t81 = 3453263791551543LLU;
int16_t x370 = INT16_MIN;
uint64_t x372 = 111053677605359921LLU;
uint64_t t82 = 1623138425989353LLU;
volatile int16_t x377 = -1;
volatile uint32_t x378 = UINT32_MAX;
uint32_t x380 = 162114U;
volatile uint32_t t84 = 596092U;
volatile int64_t t85 = 674556751LL;
volatile int64_t t86 = -18823LL;
int16_t x389 = INT16_MIN;
static int16_t x390 = INT16_MAX;
volatile int32_t t88 = 8;
uint32_t x402 = 75U;
static int32_t x406 = -1;
static volatile int32_t x409 = INT32_MIN;
int64_t x411 = -1LL;
volatile int32_t x414 = INT32_MAX;
int64_t x424 = 44166790132256LL;
static int64_t t95 = 14463352LL;
int32_t x427 = INT32_MIN;
volatile uint32_t t96 = 30U;
static int16_t x431 = INT16_MIN;
uint32_t t97 = 238663U;
int8_t x434 = -1;
static uint16_t x437 = 214U;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = INT32_MIN;
	volatile uint32_t t0 = 0U;

	t0 = (((x1/x2)&x3)-x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	int32_t t1 = 25;

	t1 = (((x5/x6)&x7)-x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x10 = 199924612U;
	int16_t x11 = INT16_MAX;
	int64_t x12 = -1LL;
	int64_t t2 = -126794LL;

	t2 = (((x9/x10)&x11)-x12);

	if (t2 != 22LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 1U;
	int64_t x14 = INT64_MIN;
	uint32_t x15 = 1004U;
	int32_t x16 = -1;
	int64_t t3 = 865566LL;

	t3 = (((x13/x14)&x15)-x16);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = INT16_MIN;
	int16_t x20 = INT16_MIN;

	t4 = (((x17/x18)&x19)-x20);

	if (t4 != 32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile uint32_t x22 = UINT32_MAX;
	int16_t x23 = INT16_MIN;
	int8_t x24 = -13;
	int64_t t5 = -23LL;

	t5 = (((x21/x22)&x23)-x24);

	if (t5 != 2147483661LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x27 = -31762614;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 477844;

	t6 = (((x25/x26)&x27)-x28);

	if (t6 != -2147483520) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -122;
	int8_t x31 = -1;
	uint8_t x32 = 3U;
	volatile int32_t t7 = 468151881;

	t7 = (((x29/x30)&x31)-x32);

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x34 = 2588181139LLU;
	uint32_t x35 = 130U;
	volatile int32_t x36 = -247;

	t8 = (((x33/x34)&x35)-x36);

	if (t8 != 377LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int8_t x38 = INT8_MIN;
	int8_t x40 = INT8_MAX;
	int64_t t9 = -1LL;

	t9 = (((x37/x38)&x39)-x40);

	if (t9 != 72057594037927809LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	uint16_t x43 = 782U;
	volatile int32_t t10 = -106;

	t10 = (((x41/x42)&x43)-x44);

	if (t10 != -236) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -1;
	int64_t x50 = 2294476LL;
	volatile uint8_t x51 = 3U;
	int8_t x52 = 3;
	volatile int64_t t11 = -13803346736LL;

	t11 = (((x49/x50)&x51)-x52);

	if (t11 != -3LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = 292057992075379843LL;
	int64_t x62 = INT64_MIN;
	static int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MAX;
	int64_t t12 = 955428677543408LL;

	t12 = (((x61/x62)&x63)-x64);

	if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 0LLU;
	int32_t x66 = 6;
	static int8_t x67 = 56;
	static int8_t x68 = 0;
	uint64_t t13 = 101LLU;

	t13 = (((x65/x66)&x67)-x68);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 3U;
	int8_t x70 = -1;
	volatile int32_t x71 = -1;
	volatile int64_t x72 = -188968031LL;
	static volatile int64_t t14 = 7223936863LL;

	t14 = (((x69/x70)&x71)-x72);

	if (t14 != 188968031LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = INT64_MAX;
	int16_t x74 = 1212;
	uint16_t x75 = UINT16_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t15 = 20317220LLU;

	t15 = (((x73/x74)&x75)-x76);

	if (t15 != 8868LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 2U;
	int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MIN;
	static int64_t x80 = -665779LL;
	static volatile int64_t t16 = 104926LL;

	t16 = (((x77/x78)&x79)-x80);

	if (t16 != 665779LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = 3U;
	volatile int64_t x82 = INT64_MIN;
	volatile int8_t x83 = -1;
	static uint32_t x84 = UINT32_MAX;
	int64_t t17 = -171991110371LL;

	t17 = (((x81/x82)&x83)-x84);

	if (t17 != -4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -232;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	static uint8_t x88 = 21U;
	int64_t t18 = -156548913LL;

	t18 = (((x85/x86)&x87)-x88);

	if (t18 != -21LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -126659324LL;
	int16_t x90 = 2975;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 42U;
	volatile int64_t t19 = 92188944321273341LL;

	t19 = (((x89/x90)&x91)-x92);

	if (t19 != 4294924680LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	int16_t x95 = -1;
	static int16_t x96 = -6910;
	static int32_t t20 = -2061566;

	t20 = (((x93/x94)&x95)-x96);

	if (t20 != 6911) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = 8;
	uint32_t x104 = 261053565U;
	static uint64_t t21 = 96LLU;

	t21 = (((x101/x102)&x103)-x104);

	if (t21 != 18446744073448498178LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = -1;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t22 = 82903LLU;

	t22 = (((x105/x106)&x107)-x108);

	if (t22 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = -4636;
	uint64_t x110 = UINT64_MAX;
	volatile uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = INT8_MIN;
	uint64_t t23 = 43510989062LLU;

	t23 = (((x109/x110)&x111)-x112);

	if (t23 != 128LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MAX;
	volatile int8_t x114 = INT8_MIN;
	int64_t x115 = -181517397099340LL;
	int16_t x116 = 1;
	int64_t t24 = 545184598LL;

	t24 = (((x113/x114)&x115)-x116);

	if (t24 != -181517397524481LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x119 = -1;
	volatile int64_t x120 = -1LL;

	t25 = (((x117/x118)&x119)-x120);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = -943;
	int16_t x122 = -4;
	int8_t x123 = 0;
	int64_t x124 = 4205LL;

	t26 = (((x121/x122)&x123)-x124);

	if (t26 != -4205LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = UINT8_MAX;
	uint64_t x128 = 3LLU;
	uint64_t t27 = 33963887158954LLU;

	t27 = (((x125/x126)&x127)-x128);

	if (t27 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x129 = 1222LLU;
	uint8_t x130 = UINT8_MAX;
	volatile int16_t x131 = INT16_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile uint64_t t28 = 4072744240710243LLU;

	t28 = (((x129/x130)&x131)-x132);

	if (t28 != 18446744073709486085LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x134 = INT64_MIN;
	uint64_t x135 = 881380548626316LLU;
	int64_t x136 = -1695503909117LL;
	uint64_t t29 = 1718889508220983440LLU;

	t29 = (((x133/x134)&x135)-x136);

	if (t29 != 1695503909117LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x137 = 14U;
	volatile int16_t x138 = -1;
	int8_t x139 = -1;
	volatile uint16_t x140 = UINT16_MAX;

	t30 = (((x137/x138)&x139)-x140);

	if (t30 != -65549) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = 148684;
	int16_t x143 = -69;
	uint32_t x144 = 11120928U;
	static uint32_t t31 = 2U;

	t31 = (((x141/x142)&x143)-x144);

	if (t31 != 4283846368U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MAX;
	static uint32_t x147 = 1011U;
	int32_t x148 = -31528;
	volatile uint32_t t32 = 42211U;

	t32 = (((x145/x146)&x147)-x148);

	if (t32 != 32538U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x149 = 1699904632379724LLU;
	uint8_t x151 = 5U;
	uint8_t x152 = UINT8_MAX;
	uint64_t t33 = 182702LLU;

	t33 = (((x149/x150)&x151)-x152);

	if (t33 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = -1LL;
	uint16_t x159 = UINT16_MAX;
	volatile int16_t x160 = INT16_MIN;
	int64_t t34 = 6LL;

	t34 = (((x157/x158)&x159)-x160);

	if (t34 != 32769LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x164 = INT32_MIN;
	volatile uint32_t t35 = 1574U;

	t35 = (((x161/x162)&x163)-x164);

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MAX;

	t36 = (((x165/x166)&x167)-x168);

	if (t36 != 4116010199U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x169 = 183338645LLU;
	uint16_t x170 = 2U;
	uint64_t t37 = 60169238708LLU;

	t37 = (((x169/x170)&x171)-x172);

	if (t37 != 2154053962LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MAX;
	uint16_t x174 = 1U;
	int16_t x175 = INT16_MAX;
	volatile uint8_t x176 = 22U;
	volatile int64_t t38 = 442LL;

	t38 = (((x173/x174)&x175)-x176);

	if (t38 != 32745LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x182 = INT32_MIN;
	volatile int16_t x183 = INT16_MIN;
	volatile int32_t t39 = -31795;

	t39 = (((x181/x182)&x183)-x184);

	if (t39 != 715689342) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x190 = -6309792656718570LL;
	int64_t x191 = -1LL;
	int64_t x192 = INT64_MAX;
	volatile uint64_t t40 = 548094470361LLU;

	t40 = (((x189/x190)&x191)-x192);

	if (t40 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -7411959;
	volatile uint8_t x194 = UINT8_MAX;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t41 = 10222LLU;

	t41 = (((x193/x194)&x195)-x196);

	if (t41 != 36471LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = INT64_MAX;
	static volatile int64_t t42 = 9323LL;

	t42 = (((x197/x198)&x199)-x200);

	if (t42 != 281474976710536LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = 504536;
	volatile uint32_t x203 = UINT32_MAX;
	uint64_t t43 = 1919322767LLU;

	t43 = (((x201/x202)&x203)-x204);

	if (t43 != 3037878654LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MAX;
	static int8_t x207 = -6;
	uint8_t x208 = UINT8_MAX;

	t44 = (((x205/x206)&x207)-x208);

	if (t44 != -4294967557LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x210 = -1;
	int8_t x211 = 1;
	uint8_t x212 = 0U;
	int32_t t45 = 3;

	t45 = (((x209/x210)&x211)-x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = 14834;
	volatile uint8_t x216 = 2U;

	t46 = (((x213/x214)&x215)-x216);

	if (t46 != 114U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MAX;
	static int64_t x218 = INT64_MIN;
	int16_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	static volatile int64_t t47 = -7635067161LL;

	t47 = (((x217/x218)&x219)-x220);

	if (t47 != -4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x221 = INT16_MIN;
	int32_t x222 = INT32_MIN;
	volatile int16_t x224 = 3060;
	int64_t t48 = -73LL;

	t48 = (((x221/x222)&x223)-x224);

	if (t48 != -3060LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x225 = 15228953544729355LL;
	volatile uint64_t x226 = 198322406313LLU;
	int16_t x227 = -111;
	static int64_t x228 = 5782020824623LL;

	t49 = (((x225/x226)&x227)-x228);

	if (t49 != 18446738291688803681LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MAX;
	int64_t x230 = -113572642369LL;
	static volatile uint64_t x231 = 362LLU;
	int16_t x232 = -7;
	volatile uint64_t t50 = 470648044998LLU;

	t50 = (((x229/x230)&x231)-x232);

	if (t50 != 7LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MAX;
	uint8_t x235 = 12U;
	int16_t x236 = INT16_MIN;
	volatile int64_t t51 = -451100LL;

	t51 = (((x233/x234)&x235)-x236);

	if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;

	t52 = (((x237/x238)&x239)-x240);

	if (t52 != -272417901545244LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = -1;
	int32_t x242 = -1;
	uint64_t x243 = 378242166997LLU;
	uint8_t x244 = UINT8_MAX;
	volatile uint64_t t53 = 76952511LLU;

	t53 = (((x241/x242)&x243)-x244);

	if (t53 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x247 = -1;
	int16_t x248 = 7;
	int64_t t54 = -704110058LL;

	t54 = (((x245/x246)&x247)-x248);

	if (t54 != -7LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x250 = -1;
	static int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;

	t55 = (((x249/x250)&x251)-x252);

	if (t55 != 32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 695717LLU;

	t56 = (((x253/x254)&x255)-x256);

	if (t56 != 18446744073708855899LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x257 = INT32_MAX;
	uint64_t x258 = 1630490732539058LLU;
	volatile uint8_t x259 = 12U;
	int64_t x260 = -3114493550317768LL;

	t57 = (((x257/x258)&x259)-x260);

	if (t57 != 3114493550317768LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x261 = 52660519554LLU;
	static int8_t x262 = INT8_MIN;
	static uint32_t x263 = 120985U;
	int32_t x264 = INT32_MIN;
	volatile uint64_t t58 = 21511630880879531LLU;

	t58 = (((x261/x262)&x263)-x264);

	if (t58 != 2147483648LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MIN;
	int16_t x267 = -1;
	int16_t x268 = -1;
	uint64_t t59 = 11286558920LLU;

	t59 = (((x265/x266)&x267)-x268);

	if (t59 != 221845858LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	volatile int64_t t60 = -58234650122435343LL;

	t60 = (((x269/x270)&x271)-x272);

	if (t60 != -28597LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = UINT16_MAX;
	volatile uint8_t x274 = 1U;
	int64_t x275 = -7497490353633569LL;
	int64_t t61 = -2052581402844193LL;

	t61 = (((x273/x274)&x275)-x276);

	if (t61 != 50909LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = 8182;
	volatile uint64_t x278 = 6641679888772LLU;
	static int8_t x279 = INT8_MIN;
	uint64_t t62 = 50804972LLU;

	t62 = (((x277/x278)&x279)-x280);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	static uint64_t x282 = 26849LLU;
	static uint64_t x283 = 45LLU;
	static uint16_t x284 = 235U;

	t63 = (((x281/x282)&x283)-x284);

	if (t63 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x286 = INT16_MIN;
	volatile uint64_t x287 = 1541989372093807322LLU;
	volatile uint64_t t64 = 105327390562638LLU;

	t64 = (((x285/x286)&x287)-x288);

	if (t64 != 18446744073709551369LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x289 = UINT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t65 = -134493361362LL;

	t65 = (((x289/x290)&x291)-x292);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	static volatile int16_t x296 = -1;
	int64_t t66 = 15111892603LL;

	t66 = (((x293/x294)&x295)-x296);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x297 = INT64_MIN;
	uint64_t x298 = 33847523947443LLU;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = UINT16_MAX;

	t67 = (((x297/x298)&x299)-x300);

	if (t67 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t t68 = 5769376545LLU;

	t68 = (((x301/x302)&x303)-x304);

	if (t68 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x309 = INT64_MIN;
	int8_t x311 = -1;
	int32_t x312 = -1;

	t69 = (((x309/x310)&x311)-x312);

	if (t69 != 658812288346769701LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x315 = -5;
	uint32_t t70 = 212078U;

	t70 = (((x313/x314)&x315)-x316);

	if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x317 = 22;
	static int16_t x319 = INT16_MIN;
	int64_t x320 = -9226LL;
	int64_t t71 = 2418619591LL;

	t71 = (((x317/x318)&x319)-x320);

	if (t71 != 9226LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x329 = -12;
	int16_t x331 = INT16_MAX;
	static int64_t x332 = 303619865LL;
	static int64_t t72 = 798482LL;

	t72 = (((x329/x330)&x331)-x332);

	if (t72 != -303619853LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	static int16_t x334 = INT16_MAX;
	int32_t x335 = -1;
	int64_t x336 = 2249447116601175966LL;

	t73 = (((x333/x334)&x335)-x336);

	if (t73 != -2249728600168083366LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x337 = 295;
	int64_t x340 = -1LL;

	t74 = (((x337/x338)&x339)-x340);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x341 = 0U;
	int16_t x343 = 77;
	static volatile int64_t x344 = INT64_MAX;
	int64_t t75 = 1924750867370204387LL;

	t75 = (((x341/x342)&x343)-x344);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x345 = -3999;
	volatile uint8_t x346 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t76 = -4;

	t76 = (((x345/x346)&x347)-x348);

	if (t76 != -2147483520) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	static volatile int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t77 = -79;

	t77 = (((x349/x350)&x351)-x352);

	if (t77 != -255) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MAX;
	uint8_t x355 = 12U;
	int16_t x356 = -1;
	static volatile uint64_t t78 = 101840LLU;

	t78 = (((x353/x354)&x355)-x356);

	if (t78 != 5LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = 7;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -711385225;
	static volatile int32_t t79 = 0;

	t79 = (((x357/x358)&x359)-x360);

	if (t79 != 711385225) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x363 = 1;
	int32_t x364 = INT32_MAX;
	uint64_t t80 = 186724469274708026LLU;

	t80 = (((x361/x362)&x363)-x364);

	if (t80 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x365 = 187748930432654LLU;
	volatile int64_t x366 = 1425LL;
	volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = 30183153382669775LLU;

	t81 = (((x365/x366)&x367)-x368);

	if (t81 != 18416561052080489009LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x369 = INT8_MIN;
	volatile uint16_t x371 = 0U;

	t82 = (((x369/x370)&x371)-x372);

	if (t82 != 18335690396104191695LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = 299;
	int64_t x374 = 851555934282538881LL;
	uint16_t x375 = 7U;
	int8_t x376 = -11;
	volatile int64_t t83 = 3LL;

	t83 = (((x373/x374)&x375)-x376);

	if (t83 != 11LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x379 = 70U;

	t84 = (((x377/x378)&x379)-x380);

	if (t84 != 4294805182U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = -1;
	volatile int64_t x382 = -64380LL;
	uint16_t x383 = 27524U;
	int32_t x384 = INT32_MAX;

	t85 = (((x381/x382)&x383)-x384);

	if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = 14;
	uint8_t x386 = UINT8_MAX;
	static int64_t x387 = INT64_MAX;
	volatile int8_t x388 = 2;

	t86 = (((x385/x386)&x387)-x388);

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x391 = INT64_MAX;
	static uint16_t x392 = 7U;
	static volatile int64_t t87 = -2527809728492LL;

	t87 = (((x389/x390)&x391)-x392);

	if (t87 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x393 = INT8_MAX;
	uint8_t x394 = 55U;
	int8_t x395 = -1;
	int8_t x396 = INT8_MIN;

	t88 = (((x393/x394)&x395)-x396);

	if (t88 != 130) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = INT16_MIN;
	static int16_t x398 = -12;
	int64_t x399 = INT64_MAX;
	int32_t x400 = -1;
	int64_t t89 = -63763831484962489LL;

	t89 = (((x397/x398)&x399)-x400);

	if (t89 != 2731LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x401 = -1;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = INT8_MAX;
	volatile uint32_t t90 = 237U;

	t90 = (((x401/x402)&x403)-x404);

	if (t90 != 53175U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x405 = -26849;
	uint16_t x407 = 1U;
	int64_t x408 = INT64_MAX;
	int64_t t91 = 2333443852LL;

	t91 = (((x405/x406)&x407)-x408);

	if (t91 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x410 = 1;
	volatile int8_t x412 = INT8_MIN;
	volatile int64_t t92 = 441496995657085467LL;

	t92 = (((x409/x410)&x411)-x412);

	if (t92 != -2147483520LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x413 = 2LL;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = INT32_MAX;
	volatile int64_t t93 = 250443850091LL;

	t93 = (((x413/x414)&x415)-x416);

	if (t93 != -2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MIN;
	static int64_t x418 = 121580718583110LL;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = 412;
	volatile int64_t t94 = -31856749444725LL;

	t94 = (((x417/x418)&x419)-x420);

	if (t94 != -412LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x421 = 4281495U;
	int8_t x422 = 7;
	uint8_t x423 = 0U;

	t95 = (((x421/x422)&x423)-x424);

	if (t95 != -44166790132256LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = 57U;
	static uint32_t x426 = UINT32_MAX;
	static int8_t x428 = INT8_MIN;

	t96 = (((x425/x426)&x427)-x428);

	if (t96 != 128U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 2035U;
	static int32_t x430 = INT32_MIN;
	volatile int16_t x432 = -38;

	t97 = (((x429/x430)&x431)-x432);

	if (t97 != 38U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x433 = INT8_MIN;
	uint8_t x435 = 3U;
	static int8_t x436 = -1;
	volatile int32_t t98 = -10950;

	t98 = (((x433/x434)&x435)-x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x438 = INT8_MIN;
	volatile uint64_t x439 = UINT64_MAX;
	volatile uint32_t x440 = UINT32_MAX;
	static uint64_t t99 = 857675201813754LLU;

	t99 = (((x437/x438)&x439)-x440);

	if (t99 != 18446744069414584320LLU) { NG(); } else { ; }
	
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

