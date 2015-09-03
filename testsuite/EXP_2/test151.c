#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 0;
static uint8_t x6 = 67U;
volatile int32_t t2 = 26389748;
static int8_t x14 = -11;
volatile int32_t t3 = -3;
int32_t x18 = 241;
int64_t x23 = 188914925LL;
static volatile int16_t x24 = 0;
volatile int32_t t5 = -121;
uint32_t x42 = 1105381U;
int32_t t8 = 131;
uint16_t x47 = 13U;
int32_t t9 = 615514;
static volatile int32_t t10 = -6461;
static int32_t t12 = 518952;
volatile int32_t x68 = INT32_MIN;
int16_t x80 = INT16_MIN;
int16_t x81 = -1;
volatile int32_t t17 = 59;
uint64_t x85 = 33394583LLU;
uint32_t x86 = 1918764U;
int64_t x87 = INT64_MIN;
int32_t x89 = INT32_MIN;
int64_t x90 = INT64_MIN;
static uint8_t x97 = 3U;
int16_t x98 = 249;
volatile int8_t x100 = -26;
static int64_t x102 = -1LL;
int8_t x103 = -1;
int32_t t25 = -420;
uint64_t x118 = 5066355116256604031LLU;
volatile uint8_t x121 = 6U;
uint16_t x122 = UINT16_MAX;
volatile int32_t t27 = 11589;
static int32_t x139 = -1;
volatile int32_t t31 = -35;
int16_t x148 = INT16_MIN;
volatile int32_t t33 = 21203;
static volatile int64_t x157 = -1LL;
int64_t x171 = -330452930105984489LL;
volatile int16_t x172 = INT16_MIN;
int32_t t37 = 3852701;
volatile int32_t t38 = 66;
uint64_t x185 = 1383LLU;
uint32_t x189 = 1912U;
volatile uint8_t x196 = 23U;
int32_t t42 = 15;
volatile uint32_t x203 = 4U;
static int16_t x214 = -1;
volatile int32_t t47 = 1480838;
int64_t x221 = -8024523403404LL;
int64_t x222 = -328139LL;
uint64_t x224 = 101241681457665021LLU;
int64_t x231 = -49330160587752947LL;
int64_t x236 = 14053307176767478LL;
int64_t x241 = -1LL;
volatile int64_t x243 = -1LL;
volatile int64_t x245 = -1LL;
uint8_t x252 = 11U;
uint64_t x270 = UINT64_MAX;
int8_t x280 = INT8_MIN;
volatile uint8_t x286 = 0U;
int16_t x292 = -18;
int32_t t62 = -10993042;
static uint32_t x295 = 34U;
int64_t x296 = INT64_MIN;
static uint64_t x298 = UINT64_MAX;
int8_t x301 = INT8_MIN;
volatile int32_t t65 = 37568627;
static int16_t x310 = INT16_MAX;
int32_t x313 = -1023799;
static volatile uint8_t x318 = 112U;
volatile int32_t t69 = -745;
int64_t x331 = INT64_MIN;
int16_t x333 = -2235;
int32_t x335 = -306552;
int32_t x338 = INT32_MIN;
int8_t x340 = -6;
volatile int32_t t73 = 56851337;
static volatile int64_t x341 = 43890759577164LL;
volatile uint32_t x342 = 1001030461U;
int64_t x346 = INT64_MIN;
int32_t x354 = 11;
volatile int32_t x355 = INT32_MIN;
volatile int32_t t76 = 30044888;
int8_t x357 = INT8_MAX;
int32_t t77 = -79129;
uint16_t x363 = 8801U;
uint8_t x366 = UINT8_MAX;
volatile int64_t x368 = INT64_MIN;
static uint8_t x372 = 27U;
volatile int16_t x377 = -2490;
static volatile int32_t t83 = 1;
int32_t x394 = INT32_MIN;
static int32_t x411 = INT32_MIN;
int32_t t88 = -15;
int8_t x414 = -1;
static int8_t x421 = 0;
volatile int32_t t90 = 869014669;
volatile int32_t t91 = -6990;
int32_t x431 = INT32_MAX;
int32_t x432 = INT32_MAX;
volatile int64_t x440 = -1LL;
int32_t t96 = -41821;
static int16_t x454 = INT16_MIN;
int32_t x459 = 1;


void f0(void) {
	int64_t x1 = -1LL;
	static int16_t x2 = INT16_MAX;
	int16_t x3 = 1;
	volatile uint64_t x4 = 508029869305LLU;

	t0 = ((x1|(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = 98409446LL;
	volatile int32_t x7 = -405812364;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 170352;

	t1 = ((x5|(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int8_t x10 = 1;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = -1;

	t2 = ((x9|(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 69U;
	int8_t x15 = 10;
	uint8_t x16 = UINT8_MAX;

	t3 = ((x13|(x14+x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x19 = INT64_MIN;
	int8_t x20 = -21;
	volatile int32_t t4 = 1514;

	t4 = ((x17|(x18+x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	int16_t x22 = -3;

	t5 = ((x21|(x22+x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = 10626140U;
	int32_t x30 = -1;
	volatile uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MIN;
	int32_t t6 = -7507;

	t6 = ((x29|(x30+x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static volatile int32_t x34 = INT32_MAX;
	int8_t x35 = 0;
	int16_t x36 = -1;
	int32_t t7 = -16193;

	t7 = ((x33|(x34+x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = 1036523871U;
	static volatile int16_t x43 = 4859;
	static uint32_t x44 = 712725U;

	t8 = ((x41|(x42+x43))==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = 77;
	int32_t x46 = -10716;
	static volatile int8_t x48 = 10;

	t9 = ((x45|(x46+x47))==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 786142222;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 915U;
	static int16_t x52 = -1;

	t10 = ((x49|(x50+x51))==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint64_t x54 = 0LLU;
	int32_t x55 = INT32_MAX;
	int8_t x56 = 0;
	volatile int32_t t11 = -163818882;

	t11 = ((x53|(x54+x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = 490;
	uint16_t x58 = 0U;
	volatile int8_t x59 = INT8_MAX;
	int8_t x60 = 26;

	t12 = ((x57|(x58+x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int8_t x62 = INT8_MIN;
	uint16_t x63 = 2U;
	uint8_t x64 = UINT8_MAX;
	int32_t t13 = 456577;

	t13 = ((x61|(x62+x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = -1LL;
	volatile int16_t x66 = INT16_MAX;
	static int64_t x67 = INT64_MIN;
	int32_t t14 = 578862;

	t14 = ((x65|(x66+x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = 1;
	uint16_t x74 = UINT16_MAX;
	uint16_t x75 = 2563U;
	static volatile uint32_t x76 = 19U;
	volatile int32_t t15 = 17;

	t15 = ((x73|(x74+x75))==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = 4773037383990LLU;
	int64_t x79 = INT64_MIN;
	volatile int32_t t16 = 29;

	t16 = ((x77|(x78+x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x82 = INT32_MIN;
	uint64_t x83 = 72748LLU;
	int16_t x84 = -2922;

	t17 = ((x81|(x82+x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x88 = 2U;
	static volatile int32_t t18 = 13893;

	t18 = ((x85|(x86+x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x91 = 4940811U;
	int8_t x92 = -1;
	int32_t t19 = -146001;

	t19 = ((x89|(x90+x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x94 = 1791764482487589775LLU;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t20 = 9032;

	t20 = ((x93|(x94+x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x99 = INT16_MIN;
	volatile int32_t t21 = -196476;

	t21 = ((x97|(x98+x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 278452LLU;
	uint64_t x104 = UINT64_MAX;
	int32_t t22 = 65166;

	t22 = ((x101|(x102+x103))==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = -1;
	int16_t x106 = -1450;
	volatile uint32_t x107 = 508542U;
	int8_t x108 = INT8_MAX;
	static volatile int32_t t23 = 474705;

	t23 = ((x105|(x106+x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 102U;
	uint32_t x110 = 7812U;
	volatile int16_t x111 = -1;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t24 = 230940551;

	t24 = ((x109|(x110+x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x113 = 2529095160242269324LL;
	int64_t x114 = -1LL;
	volatile int32_t x115 = -1;
	int16_t x116 = -94;

	t25 = ((x113|(x114+x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = 2026921777044413LL;
	static int8_t x119 = INT8_MIN;
	uint16_t x120 = 25567U;
	int32_t t26 = -48608471;

	t26 = ((x117|(x118+x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x123 = INT16_MIN;
	static int32_t x124 = INT32_MIN;

	t27 = ((x121|(x122+x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = -1LL;
	volatile int64_t x126 = INT64_MIN;
	uint64_t x127 = 2692946325LLU;
	int64_t x128 = -1LL;
	static volatile int32_t t28 = 46996;

	t28 = ((x125|(x126+x127))==x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = -11;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	int32_t t29 = 459668133;

	t29 = ((x129|(x130+x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = 0;
	static int64_t x134 = INT64_MIN;
	static uint8_t x135 = 8U;
	int8_t x136 = 20;
	volatile int32_t t30 = 3603;

	t30 = ((x133|(x134+x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	volatile int16_t x138 = -1;
	uint32_t x140 = 89U;

	t31 = ((x137|(x138+x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 2U;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = 15406U;
	static int32_t t32 = -244;

	t32 = ((x141|(x142+x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = INT32_MIN;
	int8_t x146 = -1;
	int16_t x147 = INT16_MAX;

	t33 = ((x145|(x146+x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 58U;
	int16_t x154 = 634;
	static volatile int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MAX;
	int32_t t34 = 88724;

	t34 = ((x153|(x154+x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x158 = 1U;
	int64_t x159 = INT64_MIN;
	int8_t x160 = 17;
	volatile int32_t t35 = 40230306;

	t35 = ((x157|(x158+x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 399708129LL;
	int8_t x162 = INT8_MIN;
	volatile int8_t x163 = -29;
	int32_t x164 = -264478052;
	volatile int32_t t36 = 0;

	t36 = ((x161|(x162+x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -3895615510609417250LL;
	int32_t x170 = -1;

	t37 = ((x169|(x170+x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = 1;
	uint8_t x175 = 63U;
	int64_t x176 = INT64_MIN;

	t38 = ((x173|(x174+x175))==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MAX;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t39 = 236002;

	t39 = ((x181|(x182+x183))==x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x186 = -1LL;
	uint32_t x187 = 1557713U;
	volatile int8_t x188 = INT8_MAX;
	volatile int32_t t40 = -6484;

	t40 = ((x185|(x186+x187))==x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = 1420919U;
	static uint16_t x191 = UINT16_MAX;
	volatile int8_t x192 = -1;
	int32_t t41 = -51828041;

	t41 = ((x189|(x190+x191))==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -1;
	int32_t x194 = -39939;
	int32_t x195 = 1;

	t42 = ((x193|(x194+x195))==x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = 52U;
	int8_t x199 = -1;
	static uint8_t x200 = 5U;
	int32_t t43 = 1;

	t43 = ((x197|(x198+x199))==x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = -1;
	static uint16_t x202 = 28785U;
	volatile int32_t x204 = -127035;
	static volatile int32_t t44 = -4;

	t44 = ((x201|(x202+x203))==x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = -97458;
	int16_t x207 = INT16_MAX;
	uint64_t x208 = 3907573LLU;
	volatile int32_t t45 = 5808602;

	t45 = ((x205|(x206+x207))==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 5U;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t46 = -2422;

	t46 = ((x209|(x210+x211))==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x213 = -1;
	static int32_t x215 = 13;
	int32_t x216 = INT32_MIN;

	t47 = ((x213|(x214+x215))==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = 678;
	int32_t x218 = INT32_MAX;
	static int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t48 = -2212428;

	t48 = ((x217|(x218+x219))==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x223 = 3744494691LL;
	static volatile int32_t t49 = 3522315;

	t49 = ((x221|(x222+x223))==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x225 = UINT16_MAX;
	int32_t x226 = -146;
	int32_t x227 = INT32_MAX;
	int16_t x228 = 1020;
	volatile int32_t t50 = -1022;

	t50 = ((x225|(x226+x227))==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x229 = INT8_MIN;
	uint8_t x230 = 1U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t51 = 6134457;

	t51 = ((x229|(x230+x231))==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = 28;
	uint8_t x234 = 13U;
	int32_t x235 = -504;
	volatile int32_t t52 = 7;

	t52 = ((x233|(x234+x235))==x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x242 = -30171522;
	volatile int8_t x244 = 1;
	static volatile int32_t t53 = 1138;

	t53 = ((x241|(x242+x243))==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x246 = 3331653698LLU;
	static int16_t x247 = 117;
	int64_t x248 = INT64_MAX;
	static volatile int32_t t54 = -97997330;

	t54 = ((x245|(x246+x247))==x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x249 = INT64_MAX;
	static int32_t x250 = -13138557;
	uint64_t x251 = 1553638093366281032LLU;
	static volatile int32_t t55 = 708984;

	t55 = ((x249|(x250+x251))==x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int8_t x254 = INT8_MAX;
	volatile uint8_t x255 = 83U;
	int64_t x256 = 7173202LL;
	int32_t t56 = -68529;

	t56 = ((x253|(x254+x255))==x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x265 = 252;
	volatile uint8_t x266 = 6U;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -1;
	static volatile int32_t t57 = -1;

	t57 = ((x265|(x266+x267))==x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x269 = 0U;
	static volatile uint64_t x271 = 12LLU;
	int64_t x272 = INT64_MIN;
	volatile int32_t t58 = 23873802;

	t58 = ((x269|(x270+x271))==x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x277 = -17726546;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = 69U;
	static volatile int32_t t59 = 362;

	t59 = ((x277|(x278+x279))==x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x281 = 711U;
	volatile int8_t x282 = -1;
	static int8_t x283 = INT8_MAX;
	volatile uint16_t x284 = 1U;
	int32_t t60 = 36906563;

	t60 = ((x281|(x282+x283))==x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -1;
	static volatile int64_t x287 = INT64_MIN;
	static volatile int16_t x288 = 1069;
	volatile int32_t t61 = -535571691;

	t61 = ((x285|(x286+x287))==x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x289 = UINT64_MAX;
	volatile int64_t x290 = INT64_MAX;
	int32_t x291 = -141628;

	t62 = ((x289|(x290+x291))==x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = -1;
	int64_t x294 = INT64_MIN;
	volatile int32_t t63 = 4;

	t63 = ((x293|(x294+x295))==x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = INT64_MIN;
	static int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;
	volatile int32_t t64 = -2208424;

	t64 = ((x297|(x298+x299))==x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MAX;
	static int8_t x304 = INT8_MIN;

	t65 = ((x301|(x302+x303))==x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = 736U;
	static uint32_t x306 = UINT32_MAX;
	int16_t x307 = 1;
	int32_t x308 = INT32_MAX;
	volatile int32_t t66 = 931762788;

	t66 = ((x305|(x306+x307))==x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x309 = UINT8_MAX;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = -12;
	static volatile int32_t t67 = 41679;

	t67 = ((x309|(x310+x311))==x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x314 = INT8_MAX;
	static int16_t x315 = INT16_MIN;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t68 = 4146286;

	t68 = ((x313|(x314+x315))==x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x317 = -1;
	volatile uint8_t x319 = 17U;
	uint32_t x320 = 74503601U;

	t69 = ((x317|(x318+x319))==x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 0U;
	int16_t x322 = INT16_MAX;
	int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = 29164975U;
	volatile int32_t t70 = 528417750;

	t70 = ((x321|(x322+x323))==x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = -1;
	int64_t x330 = INT64_MAX;
	volatile int64_t x332 = INT64_MIN;
	int32_t t71 = 590;

	t71 = ((x329|(x330+x331))==x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x334 = 1U;
	int64_t x336 = 3237LL;
	int32_t t72 = -6223;

	t72 = ((x333|(x334+x335))==x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = 4392LL;
	static int64_t x339 = -1LL;

	t73 = ((x337|(x338+x339))==x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x343 = 0LL;
	static volatile int64_t x344 = -1LL;
	int32_t t74 = -32183;

	t74 = ((x341|(x342+x343))==x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x345 = UINT16_MAX;
	uint32_t x347 = UINT32_MAX;
	static uint8_t x348 = 3U;
	int32_t t75 = -191;

	t75 = ((x345|(x346+x347))==x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = 43;
	int64_t x356 = -354065LL;

	t76 = ((x353|(x354+x355))==x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x358 = -26;
	int8_t x359 = -1;
	uint16_t x360 = UINT16_MAX;

	t77 = ((x357|(x358+x359))==x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x361 = INT32_MAX;
	int16_t x362 = INT16_MIN;
	uint8_t x364 = UINT8_MAX;
	static int32_t t78 = 5;

	t78 = ((x361|(x362+x363))==x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	static volatile int32_t t79 = -17;

	t79 = ((x365|(x366+x367))==x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x369 = INT16_MIN;
	static int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;
	volatile int32_t t80 = 4101642;

	t80 = ((x369|(x370+x371))==x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 238U;
	int64_t x374 = -1LL;
	volatile uint64_t x375 = 975LLU;
	static int32_t x376 = -1;
	int32_t t81 = -3;

	t81 = ((x373|(x374+x375))==x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x378 = INT8_MIN;
	uint8_t x379 = 8U;
	volatile uint64_t x380 = 2LLU;
	static volatile int32_t t82 = -3;

	t82 = ((x377|(x378+x379))==x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = -13;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = -1;

	t83 = ((x381|(x382+x383))==x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x385 = -10275133313330LL;
	uint32_t x386 = UINT32_MAX;
	uint16_t x387 = 11U;
	int64_t x388 = INT64_MIN;
	int32_t t84 = 22;

	t84 = ((x385|(x386+x387))==x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = -1;
	int8_t x395 = 0;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t85 = 918935111;

	t85 = ((x393|(x394+x395))==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = -1;
	int64_t x402 = INT64_MAX;
	int16_t x403 = -1;
	int8_t x404 = 1;
	volatile int32_t t86 = -1;

	t86 = ((x401|(x402+x403))==x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = INT32_MIN;
	uint64_t x406 = 1913197LLU;
	int8_t x407 = -40;
	uint16_t x408 = 10215U;
	int32_t t87 = -15;

	t87 = ((x405|(x406+x407))==x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x409 = -1;
	uint16_t x410 = 55U;
	int16_t x412 = 0;

	t88 = ((x409|(x410+x411))==x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = INT32_MIN;
	int16_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t89 = -1015765225;

	t89 = ((x413|(x414+x415))==x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x422 = UINT32_MAX;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MAX;

	t90 = ((x421|(x422+x423))==x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x425 = 3214090683807LLU;
	int8_t x426 = INT8_MAX;
	static uint8_t x427 = UINT8_MAX;
	static int16_t x428 = 1;

	t91 = ((x425|(x426+x427))==x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MAX;
	static volatile int8_t x430 = -1;
	int32_t t92 = 116119;

	t92 = ((x429|(x430+x431))==x432);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x433 = INT64_MAX;
	uint8_t x434 = 88U;
	int8_t x435 = INT8_MIN;
	volatile int32_t x436 = -1;
	static volatile int32_t t93 = 807530;

	t93 = ((x433|(x434+x435))==x436);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = 79;
	int16_t x438 = 243;
	static uint8_t x439 = UINT8_MAX;
	int32_t t94 = -2;

	t94 = ((x437|(x438+x439))==x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x441 = 123U;
	uint8_t x442 = 3U;
	volatile int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MIN;
	volatile int32_t t95 = -148398;

	t95 = ((x441|(x442+x443))==x444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MIN;
	int32_t x446 = INT32_MIN;
	volatile int16_t x447 = 3;
	static volatile int8_t x448 = 4;

	t96 = ((x445|(x446+x447))==x448);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = -208;
	static int16_t x450 = 2105;
	int32_t x451 = -1;
	volatile uint64_t x452 = 105834LLU;
	static volatile int32_t t97 = 22175280;

	t97 = ((x449|(x450+x451))==x452);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x455 = 1U;
	volatile int8_t x456 = -40;
	volatile int32_t t98 = -124193235;

	t98 = ((x453|(x454+x455))==x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = 723769541214529LL;
	int8_t x458 = -19;
	int16_t x460 = INT16_MIN;
	volatile int32_t t99 = 6;

	t99 = ((x457|(x458+x459))==x460);

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

