#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MAX;
static int64_t x10 = INT64_MIN;
volatile int32_t t3 = 1;
int8_t x18 = INT8_MIN;
int16_t x20 = -2;
int64_t x22 = -213147555634881717LL;
static int32_t x32 = -1;
uint32_t x34 = 0U;
volatile int32_t t10 = -1;
int16_t x49 = INT16_MAX;
volatile int16_t x53 = INT16_MIN;
uint16_t x57 = UINT16_MAX;
int16_t x60 = 21;
int16_t x64 = INT16_MIN;
static uint16_t x70 = UINT16_MAX;
uint32_t x71 = UINT32_MAX;
int16_t x74 = INT16_MIN;
static int8_t x79 = INT8_MIN;
int64_t x86 = INT64_MIN;
uint32_t x99 = 1018U;
static volatile uint32_t x104 = 825045916U;
volatile int32_t t25 = -2;
static int64_t x106 = -1LL;
volatile uint16_t x110 = 5U;
static int16_t x113 = 0;
static int16_t x114 = INT16_MIN;
int32_t t28 = 24;
int32_t x120 = INT32_MAX;
volatile int32_t t30 = 4;
int64_t x125 = INT64_MIN;
volatile int32_t x133 = -1;
volatile int64_t x134 = -1LL;
uint32_t x135 = 7637918U;
static volatile int32_t t33 = -199;
int32_t x137 = -1;
static int8_t x141 = -1;
volatile int64_t x147 = -1LL;
uint32_t x153 = 205U;
int8_t x160 = -1;
int32_t x163 = INT32_MIN;
volatile uint8_t x175 = 3U;
uint32_t x182 = 1264586U;
int8_t x189 = INT8_MIN;
int16_t x191 = INT16_MAX;
int64_t x192 = INT64_MIN;
volatile int32_t t48 = 49030;
uint64_t x197 = UINT64_MAX;
volatile int64_t x208 = 1788339295904154601LL;
int32_t x209 = 209762080;
uint8_t x210 = 121U;
int64_t x213 = INT64_MIN;
volatile uint16_t x221 = 10906U;
int64_t x223 = INT64_MAX;
volatile int32_t t55 = 60539893;
int64_t x230 = -3646LL;
int64_t x234 = INT64_MIN;
volatile int32_t t59 = 167647423;
static int8_t x245 = INT8_MIN;
static int32_t x249 = 61571668;
int16_t x254 = 6;
static volatile uint64_t x257 = 401LLU;
int32_t t65 = -5447;
int32_t x265 = INT32_MIN;
volatile int32_t t68 = 16251273;
static uint32_t x279 = UINT32_MAX;
volatile int32_t t69 = 111070905;
int64_t x281 = INT64_MIN;
static int8_t x285 = -1;
int8_t x286 = 2;
int8_t x288 = -1;
volatile int64_t x296 = INT64_MAX;
volatile int32_t t73 = 10599478;
static uint16_t x299 = 2U;
volatile int32_t t74 = 541;
int16_t x303 = -3;
static int32_t x310 = 1391130;
static volatile int16_t x318 = INT16_MIN;
int32_t t81 = -5;
int16_t x329 = INT16_MIN;
static volatile int16_t x331 = INT16_MAX;
int64_t x333 = INT64_MIN;
uint8_t x339 = 3U;
int16_t x344 = INT16_MIN;
volatile int32_t t85 = 1986;
int32_t x347 = INT32_MAX;
volatile int32_t t86 = 25588;
int64_t x349 = -1LL;
static int64_t x355 = -1LL;
volatile int8_t x362 = INT8_MIN;
uint16_t x369 = UINT16_MAX;
int32_t t92 = 966432415;
int64_t x377 = -1LL;
static uint8_t x393 = 2U;
int32_t x394 = INT32_MIN;
int64_t x395 = -71170938361581483LL;
static int64_t x396 = INT64_MIN;
int32_t x400 = INT32_MIN;


void f0(void) {
	int16_t x1 = 0;
	volatile int8_t x2 = 2;
	static volatile int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = 1811262;

	t0 = ((x1|(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MAX;
	int16_t x6 = 10096;
	static int64_t x7 = INT64_MIN;
	int32_t x8 = -1;
	volatile int32_t t1 = -1158;

	t1 = ((x5|(x6^x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x11 = -27;
	uint32_t x12 = 3800554U;
	int32_t t2 = -1973549;

	t2 = ((x9|(x10^x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = -13;
	int64_t x15 = 6030528180359726LL;
	static int8_t x16 = INT8_MIN;

	t3 = ((x13|(x14^x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint8_t x19 = 63U;
	volatile int32_t t4 = 45502913;

	t4 = ((x17|(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 74U;
	int8_t x23 = INT8_MAX;
	volatile uint64_t x24 = 990039680644LLU;
	int32_t t5 = -248416985;

	t5 = ((x21|(x22^x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = -5;
	int64_t x27 = INT64_MIN;
	volatile uint32_t x28 = 138588156U;
	static volatile int32_t t6 = 14313;

	t6 = ((x25|(x26^x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	static int8_t x30 = -3;
	uint64_t x31 = UINT64_MAX;
	volatile int32_t t7 = 54;

	t7 = ((x29|(x30^x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static int32_t x35 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 123014;

	t8 = ((x33|(x34^x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -25;
	volatile uint16_t x38 = 3890U;
	volatile int8_t x39 = 0;
	static int8_t x40 = -1;
	int32_t t9 = 90;

	t9 = ((x37|(x38^x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint64_t x42 = 1464397818038LLU;
	int16_t x43 = INT16_MAX;
	static int8_t x44 = INT8_MIN;

	t10 = ((x41|(x42^x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int32_t x46 = -1;
	static uint16_t x47 = UINT16_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = 109;

	t11 = ((x45|(x46^x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1017;
	int16_t x51 = INT16_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 358001288;

	t12 = ((x49|(x50^x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x54 = 3U;
	uint8_t x55 = 2U;
	static volatile uint8_t x56 = UINT8_MAX;
	int32_t t13 = 801250;

	t13 = ((x53|(x54^x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	volatile int64_t x59 = INT64_MIN;
	static volatile int32_t t14 = -2;

	t14 = ((x57|(x58^x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 0;
	int16_t x62 = 3;
	int64_t x63 = INT64_MIN;
	static volatile int32_t t15 = 373880535;

	t15 = ((x61|(x62^x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	static uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 71U;
	int64_t x68 = 33574439896LL;
	volatile int32_t t16 = 565411786;

	t16 = ((x65|(x66^x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 744920;

	t17 = ((x69|(x70^x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -479769LL;
	volatile int32_t x75 = INT32_MAX;
	uint64_t x76 = UINT64_MAX;
	int32_t t18 = -40082;

	t18 = ((x73|(x74^x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 5U;
	uint8_t x78 = 28U;
	uint8_t x80 = 2U;
	volatile int32_t t19 = 48;

	t19 = ((x77|(x78^x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = -1LL;
	uint64_t x83 = 8322937440215LLU;
	int8_t x84 = -50;
	volatile int32_t t20 = -31297;

	t20 = ((x81|(x82^x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 7894;
	int16_t x87 = 3504;
	int8_t x88 = 1;
	int32_t t21 = 7307438;

	t21 = ((x85|(x86^x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int32_t x90 = INT32_MAX;
	int16_t x91 = -3;
	uint16_t x92 = 3U;
	static volatile int32_t t22 = -6870689;

	t22 = ((x89|(x90^x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	uint8_t x94 = 1U;
	uint64_t x95 = 7494848955LLU;
	volatile int16_t x96 = 0;
	int32_t t23 = -517;

	t23 = ((x93|(x94^x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -13;
	uint16_t x98 = 73U;
	static volatile int16_t x100 = INT16_MIN;
	int32_t t24 = -5;

	t24 = ((x97|(x98^x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1180649LL;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -1;

	t25 = ((x101|(x102^x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -1;
	static uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MAX;
	int32_t t26 = 2767341;

	t26 = ((x105|(x106^x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	int16_t x112 = -204;
	int32_t t27 = 30583;

	t27 = ((x109|(x110^x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x115 = UINT64_MAX;
	volatile uint32_t x116 = 0U;

	t28 = ((x113|(x114^x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1719;
	uint64_t x118 = UINT64_MAX;
	volatile int8_t x119 = INT8_MAX;
	static volatile int32_t t29 = 187991670;

	t29 = ((x117|(x118^x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = -7798;
	int32_t x123 = -2;
	int8_t x124 = INT8_MIN;

	t30 = ((x121|(x122^x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 14U;
	int32_t t31 = -1416;

	t31 = ((x125|(x126^x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = 44U;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = 2817114;

	t32 = ((x129|(x130^x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x136 = UINT16_MAX;

	t33 = ((x133|(x134^x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x138 = INT64_MIN;
	uint32_t x139 = 2733643U;
	int16_t x140 = -1;
	int32_t t34 = 44;

	t34 = ((x137|(x138^x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = -1;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = 40728816;

	t35 = ((x141|(x142^x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 687968;

	t36 = ((x145|(x146^x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	volatile uint32_t x150 = 2U;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -1;
	volatile int32_t t37 = -236;

	t37 = ((x149|(x150^x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 2298LLU;
	static volatile uint16_t x155 = 847U;
	uint64_t x156 = UINT64_MAX;
	static int32_t t38 = -6;

	t38 = ((x153|(x154^x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	int32_t t39 = 1829528;

	t39 = ((x157|(x158^x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	static volatile uint32_t x162 = 249800U;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = 1;

	t40 = ((x161|(x162^x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	uint8_t x166 = 7U;
	int64_t x167 = -1LL;
	int64_t x168 = -1LL;
	int32_t t41 = -224;

	t41 = ((x165|(x166^x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static uint16_t x170 = UINT16_MAX;
	uint16_t x171 = UINT16_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = -20258603;

	t42 = ((x169|(x170^x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int32_t x174 = 603277;
	volatile uint64_t x176 = 2878159139765799328LLU;
	volatile int32_t t43 = -419640;

	t43 = ((x173|(x174^x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 68U;
	int16_t x178 = -1;
	static volatile uint8_t x179 = UINT8_MAX;
	volatile uint16_t x180 = 2330U;
	int32_t t44 = -1;

	t44 = ((x177|(x178^x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = -485456;
	static volatile int32_t t45 = 5907581;

	t45 = ((x181|(x182^x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static volatile uint64_t x186 = 41LLU;
	int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t46 = -457;

	t46 = ((x185|(x186^x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x190 = 492797932375LLU;
	int32_t t47 = -66;

	t47 = ((x189|(x190^x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 892654220572761275LLU;
	static uint32_t x194 = 243U;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = 45U;

	t48 = ((x193|(x194^x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = 27U;
	volatile int8_t x199 = 8;
	int16_t x200 = -2612;
	static int32_t t49 = 133;

	t49 = ((x197|(x198^x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = -1;
	int64_t x203 = -359LL;
	uint8_t x204 = 0U;
	volatile int32_t t50 = 41290351;

	t50 = ((x201|(x202^x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	volatile int32_t t51 = 65;

	t51 = ((x205|(x206^x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x211 = -30629633;
	static int32_t x212 = -87;
	int32_t t52 = 1146;

	t52 = ((x209|(x210^x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = -1LL;
	static uint32_t x216 = 98U;
	int32_t t53 = -444;

	t53 = ((x213|(x214^x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 31446622U;
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = -3;
	static volatile int32_t t54 = -15729;

	t54 = ((x217|(x218^x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 230642849138LLU;
	uint16_t x224 = 464U;

	t55 = ((x221|(x222^x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	volatile uint8_t x226 = UINT8_MAX;
	uint32_t x227 = 121030U;
	static int32_t x228 = INT32_MAX;
	int32_t t56 = 10807791;

	t56 = ((x225|(x226^x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 7883;
	int8_t x231 = 1;
	volatile int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = 8566;

	t57 = ((x229|(x230^x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = 2019U;
	int32_t t58 = -970734;

	t58 = ((x233|(x234^x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -5743;
	int8_t x238 = INT8_MIN;
	int32_t x239 = -33361464;
	uint64_t x240 = UINT64_MAX;

	t59 = ((x237|(x238^x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	int8_t x242 = -1;
	volatile int64_t x243 = -3476408227142747222LL;
	uint16_t x244 = 4U;
	static volatile int32_t t60 = 206219;

	t60 = ((x241|(x242^x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = 60;
	int16_t x248 = INT16_MAX;
	int32_t t61 = 1037374030;

	t61 = ((x245|(x246^x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x250 = -1LL;
	volatile int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MAX;
	volatile int32_t t62 = 5;

	t62 = ((x249|(x250^x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -2980;
	uint16_t x255 = UINT16_MAX;
	static int32_t x256 = -4514022;
	static int32_t t63 = 50207;

	t63 = ((x253|(x254^x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x258 = 107133739249LLU;
	volatile uint16_t x259 = UINT16_MAX;
	int64_t x260 = 3LL;
	int32_t t64 = -7;

	t64 = ((x257|(x258^x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 2485084LLU;
	static uint32_t x262 = 31338462U;
	int64_t x263 = INT64_MIN;
	static int64_t x264 = INT64_MIN;

	t65 = ((x261|(x262^x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 25030584038166553LLU;
	uint64_t x267 = 221821415279212686LLU;
	volatile int64_t x268 = -1LL;
	static int32_t t66 = -2;

	t66 = ((x265|(x266^x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	uint8_t x270 = 0U;
	int32_t x271 = INT32_MAX;
	static uint32_t x272 = 452299U;
	int32_t t67 = -1;

	t67 = ((x269|(x270^x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile uint32_t x274 = 28U;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;

	t68 = ((x273|(x274^x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 14U;
	int16_t x278 = 11;
	static int16_t x280 = INT16_MIN;

	t69 = ((x277|(x278^x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -167399;
	static volatile uint8_t x283 = UINT8_MAX;
	volatile int16_t x284 = INT16_MIN;
	int32_t t70 = 53482;

	t70 = ((x281|(x282^x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x287 = -1;
	static int32_t t71 = 1;

	t71 = ((x285|(x286^x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -1;
	int8_t x290 = 1;
	volatile int64_t x291 = INT64_MAX;
	int16_t x292 = 0;
	volatile int32_t t72 = -201857;

	t72 = ((x289|(x290^x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int32_t x294 = -3;
	int8_t x295 = -1;

	t73 = ((x293|(x294^x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 1U;
	static volatile uint16_t x298 = 677U;
	int16_t x300 = -1;

	t74 = ((x297|(x298^x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = UINT8_MAX;
	static uint32_t x302 = 807802U;
	uint64_t x304 = 1503643688768742LLU;
	int32_t t75 = -2887331;

	t75 = ((x301|(x302^x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 508;

	t76 = ((x305|(x306^x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 21U;
	static uint64_t x311 = UINT64_MAX;
	uint32_t x312 = UINT32_MAX;
	static volatile int32_t t77 = -3318633;

	t77 = ((x309|(x310^x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 48;
	static int64_t x314 = -265612602LL;
	static int64_t x315 = INT64_MIN;
	uint8_t x316 = UINT8_MAX;
	int32_t t78 = 1;

	t78 = ((x313|(x314^x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	static volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = 294230LL;
	int32_t t79 = -1;

	t79 = ((x317|(x318^x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -642703740;
	static uint32_t x322 = UINT32_MAX;
	volatile uint8_t x323 = 2U;
	int32_t x324 = -63876519;
	volatile int32_t t80 = 0;

	t80 = ((x321|(x322^x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -9;
	static int16_t x326 = 119;
	volatile uint16_t x327 = UINT16_MAX;
	int8_t x328 = -1;

	t81 = ((x325|(x326^x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x330 = UINT16_MAX;
	int16_t x332 = -1;
	int32_t t82 = -4518;

	t82 = ((x329|(x330^x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = 7564954200529LL;
	volatile int32_t x335 = 12;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -7987;

	t83 = ((x333|(x334^x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 110U;
	static int32_t x338 = -1;
	static volatile int16_t x340 = 13;
	int32_t t84 = 330458107;

	t84 = ((x337|(x338^x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -5868787044573LL;
	volatile int16_t x342 = INT16_MAX;
	int16_t x343 = 1959;

	t85 = ((x341|(x342^x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = 107373611U;
	int16_t x348 = -1;

	t86 = ((x345|(x346^x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 3324U;
	uint32_t x351 = 871U;
	uint32_t x352 = 24806U;
	volatile int32_t t87 = 3710582;

	t87 = ((x349|(x350^x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int64_t x354 = -1LL;
	volatile uint8_t x356 = UINT8_MAX;
	int32_t t88 = -17;

	t88 = ((x353|(x354^x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = UINT8_MAX;
	static uint64_t x358 = 12586091905227LLU;
	uint16_t x359 = UINT16_MAX;
	uint16_t x360 = 4269U;
	volatile int32_t t89 = 104519831;

	t89 = ((x357|(x358^x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 1U;
	uint32_t x363 = 448414U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t90 = 22962;

	t90 = ((x361|(x362^x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	uint16_t x366 = 2857U;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 2U;
	int32_t t91 = 21519;

	t91 = ((x365|(x366^x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	int16_t x371 = -26;
	volatile int64_t x372 = INT64_MAX;

	t92 = ((x369|(x370^x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	int16_t x374 = 7;
	uint32_t x375 = 149U;
	uint32_t x376 = UINT32_MAX;
	static int32_t t93 = 190863;

	t93 = ((x373|(x374^x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 9474692524LLU;
	int64_t x379 = INT64_MAX;
	int64_t x380 = -427370262LL;
	volatile int32_t t94 = 29073;

	t94 = ((x377|(x378^x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 5U;
	static int8_t x382 = INT8_MIN;
	volatile int8_t x383 = INT8_MAX;
	uint8_t x384 = 1U;
	volatile int32_t t95 = -55389008;

	t95 = ((x381|(x382^x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MAX;
	int16_t x388 = 1663;
	volatile int32_t t96 = 941114;

	t96 = ((x385|(x386^x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = 22940953U;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	static volatile int32_t t97 = 69471885;

	t97 = ((x389|(x390^x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t t98 = -105;

	t98 = ((x393|(x394^x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 44U;
	int8_t x398 = INT8_MIN;
	static volatile uint64_t x399 = 450311956LLU;
	static int32_t t99 = 994;

	t99 = ((x397|(x398^x399))<x400);

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

