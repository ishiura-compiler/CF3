#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x8 = -1;
int16_t x14 = INT16_MAX;
int32_t x17 = -3772570;
uint8_t x19 = 24U;
static uint8_t x24 = 14U;
uint8_t x31 = 2U;
int16_t x33 = 0;
static int32_t x34 = INT32_MIN;
uint8_t x36 = UINT8_MAX;
uint32_t x43 = 116988U;
volatile int16_t x45 = 98;
uint64_t x47 = 1805547028796082LLU;
int16_t x53 = -7;
volatile int64_t x58 = 121LL;
volatile int16_t x59 = INT16_MIN;
uint32_t x62 = 842U;
int16_t x67 = INT16_MIN;
int64_t t13 = -9776LL;
int64_t x76 = INT64_MAX;
static int16_t x82 = -1;
static int8_t x86 = INT8_MIN;
volatile int8_t x89 = -45;
volatile int32_t x96 = -1;
int32_t t20 = 4861401;
int64_t x102 = 34LL;
uint64_t x103 = UINT64_MAX;
volatile int32_t x108 = INT32_MIN;
static uint8_t x116 = UINT8_MAX;
static volatile int16_t x127 = -1;
uint8_t x129 = UINT8_MAX;
int64_t x131 = -53LL;
volatile int8_t x134 = INT8_MAX;
static int64_t t32 = 1LL;
int64_t x147 = INT64_MAX;
volatile int32_t t33 = 25155147;
volatile int8_t x173 = INT8_MIN;
int64_t x180 = -25220682858991437LL;
int8_t x184 = INT8_MIN;
volatile uint64_t x185 = 3865LLU;
static uint64_t x190 = 955623942182167LLU;
int16_t x207 = -11;
volatile int16_t x215 = INT16_MIN;
static volatile int32_t t50 = -166235110;
static int64_t x218 = INT64_MAX;
int32_t x219 = INT32_MAX;
int32_t x221 = INT32_MIN;
int32_t t52 = -56;
static uint8_t x228 = 24U;
uint32_t x233 = 63U;
int64_t x245 = -1LL;
uint32_t x246 = UINT32_MAX;
volatile int8_t x248 = INT8_MIN;
static int32_t t58 = 39;
volatile int32_t t59 = -73346344;
int16_t x253 = -1;
static int64_t x258 = -213LL;
static int32_t x266 = INT32_MIN;
uint8_t x269 = 0U;
int64_t x270 = -37612729962120765LL;
int64_t x280 = INT64_MIN;
volatile int64_t t66 = -124004571LL;
uint32_t x285 = 13U;
int64_t x290 = INT64_MIN;
volatile int64_t t69 = -196660654571LL;
int16_t x293 = INT16_MIN;
int64_t x301 = INT64_MAX;
uint16_t x314 = 9U;
volatile uint32_t t75 = 8U;
static int16_t x317 = INT16_MIN;
volatile uint16_t x319 = 13379U;
int64_t x323 = 15526420794792LL;
volatile int64_t x326 = INT64_MIN;
int32_t x328 = -1097;
int32_t t78 = -320;
int8_t x340 = INT8_MAX;
int32_t t80 = 1650;
uint16_t x341 = 0U;
uint16_t x344 = UINT16_MAX;
uint16_t x350 = 169U;
uint32_t x351 = UINT32_MAX;
int64_t x359 = INT64_MAX;
uint16_t x371 = UINT16_MAX;
uint32_t x375 = 1U;
int32_t t91 = -1107;
int16_t x389 = -11;
int32_t t93 = 208632057;
static uint16_t x394 = 11U;
int32_t t94 = -118443915;
uint32_t x397 = UINT32_MAX;
int32_t t95 = -12214489;
int8_t x402 = -62;
volatile int32_t t96 = -47;
int16_t x409 = INT16_MAX;
int8_t x411 = INT8_MIN;
volatile int8_t x413 = INT8_MIN;


void f0(void) {
	uint32_t x5 = 16U;
	int32_t x6 = INT32_MAX;
	volatile uint16_t x7 = 72U;
	volatile int32_t t0 = 10637675;

	t0 = ((x5==(x6^x7))/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = INT32_MIN;
	uint8_t x15 = 26U;
	uint16_t x16 = 16245U;
	volatile int32_t t1 = -24586;

	t1 = ((x13==(x14^x15))/x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x18 = INT64_MIN;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t2 = 2;

	t2 = ((x17==(x18^x19))/x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 135614624515974LLU;
	int32_t x22 = INT32_MIN;
	volatile int8_t x23 = -1;
	volatile int32_t t3 = 8356250;

	t3 = ((x21==(x22^x23))/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -214165;
	static int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	static uint32_t x28 = 51270445U;
	uint32_t t4 = 55U;

	t4 = ((x25==(x26^x27))/x28);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = 11U;
	static int8_t x32 = -1;
	static volatile int32_t t5 = -10654990;

	t5 = ((x29==(x30^x31))/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x35 = -14;
	int32_t t6 = 53890844;

	t6 = ((x33==(x34^x35))/x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 155355982U;
	uint8_t x38 = UINT8_MAX;
	static volatile int32_t x39 = INT32_MIN;
	int16_t x40 = -1;
	int32_t t7 = -16287659;

	t7 = ((x37==(x38^x39))/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = INT16_MIN;
	uint32_t x42 = 27425418U;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t8 = -18918615;

	t8 = ((x41==(x42^x43))/x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = INT64_MIN;
	uint64_t x48 = 570796647008LLU;
	volatile uint64_t t9 = 3LLU;

	t9 = ((x45==(x46^x47))/x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x54 = INT8_MIN;
	volatile uint16_t x55 = UINT16_MAX;
	uint16_t x56 = 2913U;
	volatile int32_t t10 = -462118;

	t10 = ((x53==(x54^x55))/x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 2U;
	int8_t x60 = 1;
	static int32_t t11 = -231;

	t11 = ((x57==(x58^x59))/x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 0U;
	volatile uint64_t x63 = 108227864945087120LLU;
	volatile int8_t x64 = INT8_MIN;
	volatile int32_t t12 = -10154596;

	t12 = ((x61==(x62^x63))/x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 206718035U;
	uint16_t x66 = 436U;
	int64_t x68 = INT64_MIN;

	t13 = ((x65==(x66^x67))/x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 0U;
	int32_t x71 = 39;
	uint16_t x72 = UINT16_MAX;
	int32_t t14 = -158504939;

	t14 = ((x69==(x70^x71))/x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x73 = UINT16_MAX;
	int32_t x74 = 338;
	uint8_t x75 = 38U;
	volatile int64_t t15 = -6403463050344471LL;

	t15 = ((x73==(x74^x75))/x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -166;
	int32_t x78 = -1;
	volatile uint8_t x79 = 7U;
	static int16_t x80 = -1;
	int32_t t16 = 2167;

	t16 = ((x77==(x78^x79))/x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile int8_t x83 = -1;
	uint32_t x84 = 2757U;
	uint32_t t17 = 2073744234U;

	t17 = ((x81==(x82^x83))/x84);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile int8_t x87 = 13;
	int8_t x88 = -1;
	int32_t t18 = -311;

	t18 = ((x85==(x86^x87))/x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = 29243;
	volatile int32_t x91 = INT32_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t19 = 714;

	t19 = ((x89==(x90^x91))/x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = INT64_MAX;
	int32_t x95 = INT32_MAX;

	t20 = ((x93==(x94^x95))/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	volatile uint64_t x98 = 8585780438675780LLU;
	static volatile uint8_t x99 = UINT8_MAX;
	int32_t x100 = 1;
	volatile int32_t t21 = 26;

	t21 = ((x97==(x98^x99))/x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t22 = -193695886267994LL;

	t22 = ((x101==(x102^x103))/x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = INT64_MAX;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = -1;
	int32_t t23 = -1;

	t23 = ((x105==(x106^x107))/x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MAX;
	int8_t x110 = INT8_MIN;
	volatile int32_t x111 = 0;
	int32_t x112 = -1;
	volatile int32_t t24 = -13700;

	t24 = ((x109==(x110^x111))/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = 9568;
	int64_t x114 = INT64_MAX;
	int64_t x115 = -1LL;
	static volatile int32_t t25 = 46;

	t25 = ((x113==(x114^x115))/x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = 35;
	int16_t x118 = INT16_MIN;
	static volatile int64_t x119 = INT64_MIN;
	uint64_t x120 = 10LLU;
	uint64_t t26 = 6537985738428976244LLU;

	t26 = ((x117==(x118^x119))/x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 208248340;
	volatile uint64_t x122 = UINT64_MAX;
	volatile uint16_t x123 = 9092U;
	static uint32_t x124 = UINT32_MAX;
	volatile uint32_t t27 = 64743U;

	t27 = ((x121==(x122^x123))/x124);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = INT8_MIN;
	static int16_t x126 = -1;
	volatile int8_t x128 = INT8_MAX;
	static int32_t t28 = -176;

	t28 = ((x125==(x126^x127))/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x130 = INT32_MAX;
	int64_t x132 = -1LL;
	int64_t t29 = -5729811508268170LL;

	t29 = ((x129==(x130^x131))/x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x133 = 252U;
	static uint8_t x135 = 2U;
	static volatile int64_t x136 = INT64_MIN;
	volatile int64_t t30 = -27644913LL;

	t30 = ((x133==(x134^x135))/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = 5;
	int64_t x139 = -21929292276LL;
	int8_t x140 = -1;
	int32_t t31 = 0;

	t31 = ((x137==(x138^x139))/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	static uint8_t x142 = 0U;
	uint64_t x143 = 3LLU;
	int64_t x144 = INT64_MIN;

	t32 = ((x141==(x142^x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	uint64_t x146 = 280776810186LLU;
	int32_t x148 = -1;

	t33 = ((x145==(x146^x147))/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x149 = 95U;
	volatile int64_t x150 = INT64_MIN;
	int16_t x151 = -10132;
	int32_t x152 = INT32_MAX;
	int32_t t34 = -809531957;

	t34 = ((x149==(x150^x151))/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = -1;
	static uint16_t x154 = 221U;
	volatile int8_t x155 = -1;
	int8_t x156 = INT8_MIN;
	static int32_t t35 = -29081;

	t35 = ((x153==(x154^x155))/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = INT8_MAX;
	int32_t t36 = 2176410;

	t36 = ((x157==(x158^x159))/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x161 = -1LL;
	uint8_t x162 = UINT8_MAX;
	static uint32_t x163 = 32031687U;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t37 = 0;

	t37 = ((x161==(x162^x163))/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x165 = 6U;
	uint8_t x166 = 1U;
	int8_t x167 = 37;
	int64_t x168 = 1182LL;
	volatile int64_t t38 = -55873LL;

	t38 = ((x165==(x166^x167))/x168);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = -15;
	int64_t x171 = -28019726620592709LL;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t39 = -1;

	t39 = ((x169==(x170^x171))/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = INT16_MIN;
	static int64_t x175 = 2508130111508552117LL;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t40 = 597;

	t40 = ((x173==(x174^x175))/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	static uint32_t x178 = 71612004U;
	uint8_t x179 = 0U;
	static int64_t t41 = 1257938184444824LL;

	t41 = ((x177==(x178^x179))/x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	static uint16_t x182 = 200U;
	static int16_t x183 = INT16_MIN;
	int32_t t42 = 32795063;

	t42 = ((x181==(x182^x183))/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x186 = UINT64_MAX;
	static uint8_t x187 = UINT8_MAX;
	volatile int64_t x188 = 6709441927280LL;
	volatile int64_t t43 = -1682628851802LL;

	t43 = ((x185==(x186^x187))/x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MIN;
	static int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	int64_t t44 = 649389611LL;

	t44 = ((x189==(x190^x191))/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -1;
	static int8_t x194 = INT8_MIN;
	int16_t x195 = -1;
	static int64_t x196 = -1LL;
	volatile int64_t t45 = -381317LL;

	t45 = ((x193==(x194^x195))/x196);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = -1;
	int16_t x198 = -16;
	uint16_t x199 = 1964U;
	int32_t x200 = -7395;
	static int32_t t46 = -14982;

	t46 = ((x197==(x198^x199))/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = -1;
	uint64_t x203 = 1LLU;
	static uint16_t x204 = UINT16_MAX;
	volatile int32_t t47 = 3200;

	t47 = ((x201==(x202^x203))/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 0;
	uint32_t x206 = UINT32_MAX;
	int8_t x208 = -1;
	int32_t t48 = 906380;

	t48 = ((x205==(x206^x207))/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int64_t x211 = 2335LL;
	int64_t x212 = 1073665340LL;
	int64_t t49 = 188859816556454097LL;

	t49 = ((x209==(x210^x211))/x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	int32_t x214 = 710699705;
	int16_t x216 = 98;

	t50 = ((x213==(x214^x215))/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = -1;
	static uint16_t x220 = UINT16_MAX;
	volatile int32_t t51 = 99;

	t51 = ((x217==(x218^x219))/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x222 = -1;
	static uint32_t x223 = 56U;
	int16_t x224 = INT16_MAX;

	t52 = ((x221==(x222^x223))/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x225 = 0U;
	int32_t x226 = INT32_MIN;
	volatile uint16_t x227 = 1549U;
	int32_t t53 = -236;

	t53 = ((x225==(x226^x227))/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	static int8_t x232 = -1;
	volatile int32_t t54 = -4;

	t54 = ((x229==(x230^x231))/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	int32_t t55 = -30401;

	t55 = ((x233==(x234^x235))/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x237 = UINT8_MAX;
	volatile uint64_t x238 = 46323248108614LLU;
	int8_t x239 = -1;
	int8_t x240 = -1;
	int32_t t56 = 659306569;

	t56 = ((x237==(x238^x239))/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MAX;
	int16_t x243 = 34;
	int32_t x244 = INT32_MAX;
	int32_t t57 = -64;

	t57 = ((x241==(x242^x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x247 = 17070990931LLU;

	t58 = ((x245==(x246^x247))/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MAX;
	static int64_t x250 = 290874205LL;
	int32_t x251 = -1;
	uint8_t x252 = 22U;

	t59 = ((x249==(x250^x251))/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x254 = INT32_MIN;
	static uint64_t x255 = 29674760859256LLU;
	int64_t x256 = INT64_MIN;
	int64_t t60 = 55457977066470LL;

	t60 = ((x253==(x254^x255))/x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = -1LL;
	int32_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	uint64_t t61 = 31LLU;

	t61 = ((x257==(x258^x259))/x260);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -1LL;
	uint64_t x262 = 473LLU;
	int64_t x263 = -1783305188762LL;
	static uint16_t x264 = 20U;
	int32_t t62 = 587638;

	t62 = ((x261==(x262^x263))/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = UINT32_MAX;
	uint8_t x267 = 57U;
	uint32_t x268 = 185130U;
	volatile uint32_t t63 = 1060697U;

	t63 = ((x265==(x266^x267))/x268);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x271 = 235LLU;
	volatile int16_t x272 = INT16_MIN;
	static volatile int32_t t64 = 188294;

	t64 = ((x269==(x270^x271))/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = 1341349LLU;
	static volatile uint32_t x275 = 1500492029U;
	uint32_t x276 = 5532U;
	uint32_t t65 = 3223505U;

	t65 = ((x273==(x274^x275))/x276);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x278 = -1;
	uint8_t x279 = 15U;

	t66 = ((x277==(x278^x279))/x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x281 = 60162LLU;
	static uint16_t x282 = 336U;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 16106124U;
	static uint32_t t67 = 1476U;

	t67 = ((x281==(x282^x283))/x284);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x286 = UINT16_MAX;
	volatile int8_t x287 = -1;
	int8_t x288 = 5;
	volatile int32_t t68 = -55;

	t68 = ((x285==(x286^x287))/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x289 = 4570757U;
	int32_t x291 = 56;
	static int64_t x292 = INT64_MIN;

	t69 = ((x289==(x290^x291))/x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x294 = -30140556LL;
	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = -1549LL;
	volatile int64_t t70 = -17259485823787LL;

	t70 = ((x293==(x294^x295))/x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = -1LL;
	static int64_t x299 = INT64_MIN;
	uint8_t x300 = 6U;
	volatile int32_t t71 = 1767;

	t71 = ((x297==(x298^x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x302 = UINT16_MAX;
	static int64_t x303 = INT64_MAX;
	volatile int8_t x304 = INT8_MAX;
	static int32_t t72 = 680;

	t72 = ((x301==(x302^x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = -1;
	int32_t x307 = -1;
	static uint32_t x308 = 1790U;
	volatile uint32_t t73 = 3669U;

	t73 = ((x305==(x306^x307))/x308);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = INT8_MIN;
	uint32_t x310 = 1807U;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = 3314411;
	int32_t t74 = 6736;

	t74 = ((x309==(x310^x311))/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x315 = -1;
	static uint32_t x316 = 905706U;

	t75 = ((x313==(x314^x315))/x316);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x318 = 6;
	int16_t x320 = -6;
	int32_t t76 = -4566164;

	t76 = ((x317==(x318^x319))/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x321 = 1113277LL;
	int8_t x322 = INT8_MIN;
	volatile uint64_t x324 = 27004768990LLU;
	volatile uint64_t t77 = 37213247764938664LLU;

	t77 = ((x321==(x322^x323))/x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -35674801LL;
	uint16_t x327 = 0U;

	t78 = ((x325==(x326^x327))/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x333 = 125935971U;
	static int16_t x334 = 100;
	volatile uint16_t x335 = 1493U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t79 = 976;

	t79 = ((x333==(x334^x335))/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 67U;
	int32_t x338 = 3;
	int64_t x339 = INT64_MAX;

	t80 = ((x337==(x338^x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x342 = -1LL;
	int64_t x343 = -60LL;
	int32_t t81 = 318;

	t81 = ((x341==(x342^x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x345 = INT64_MAX;
	volatile int32_t x346 = -247700;
	int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	volatile int32_t t82 = -90361;

	t82 = ((x345==(x346^x347))/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	uint8_t x352 = 32U;
	volatile int32_t t83 = -211548;

	t83 = ((x349==(x350^x351))/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x353 = 598U;
	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t84 = 7;

	t84 = ((x353==(x354^x355))/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -1LL;
	static volatile int64_t x358 = INT64_MIN;
	volatile int16_t x360 = INT16_MIN;
	int32_t t85 = 530;

	t85 = ((x357==(x358^x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x361 = INT32_MIN;
	static uint32_t x362 = 25823U;
	uint16_t x363 = UINT16_MAX;
	int64_t x364 = 46667544413LL;
	volatile int64_t t86 = 15496505LL;

	t86 = ((x361==(x362^x363))/x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x365 = -539291LL;
	static int64_t x366 = -602223918775LL;
	volatile int64_t x367 = -1LL;
	uint16_t x368 = UINT16_MAX;
	int32_t t87 = 567257;

	t87 = ((x365==(x366^x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = 11;
	volatile int64_t x372 = INT64_MIN;
	int64_t t88 = -404081318257351LL;

	t88 = ((x369==(x370^x371))/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -448467004LL;
	uint16_t x374 = UINT16_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t89 = -21978;

	t89 = ((x373==(x374^x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 3571751U;
	volatile uint16_t x378 = 1U;
	int64_t x379 = INT64_MIN;
	int16_t x380 = -1;
	volatile int32_t t90 = 486066268;

	t90 = ((x377==(x378^x379))/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = 218135368U;
	volatile int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;

	t91 = ((x381==(x382^x383))/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 70087096657LLU;
	int32_t x386 = -1;
	uint32_t x387 = 54U;
	uint8_t x388 = 1U;
	int32_t t92 = 5272856;

	t92 = ((x385==(x386^x387))/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x390 = -1;
	static int32_t x391 = -959;
	int32_t x392 = INT32_MIN;

	t93 = ((x389==(x390^x391))/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x395 = UINT32_MAX;
	static int16_t x396 = INT16_MAX;

	t94 = ((x393==(x394^x395))/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = -1;
	static uint8_t x399 = 1U;
	int8_t x400 = -1;

	t95 = ((x397==(x398^x399))/x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -1;
	static volatile uint32_t x403 = 119247U;
	int8_t x404 = INT8_MAX;

	t96 = ((x401==(x402^x403))/x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = 16672592LL;
	static int32_t x406 = INT32_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	int8_t x408 = 23;
	volatile int32_t t97 = -96421920;

	t97 = ((x405==(x406^x407))/x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x410 = -1;
	int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -60409684;

	t98 = ((x409==(x410^x411))/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x414 = INT8_MIN;
	volatile int16_t x415 = INT16_MAX;
	int16_t x416 = -351;
	int32_t t99 = 36;

	t99 = ((x413==(x414^x415))/x416);

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

