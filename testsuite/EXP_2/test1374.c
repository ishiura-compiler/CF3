#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 1090U;
int16_t x9 = INT16_MIN;
int32_t x13 = 55007243;
int32_t x17 = 21103930;
volatile int32_t t4 = 16384980;
static volatile int32_t t5 = -874;
volatile int32_t t6 = 293498957;
uint8_t x33 = 0U;
volatile int16_t x34 = -1;
int32_t t8 = -25305527;
static int32_t t9 = -77;
volatile uint32_t x41 = UINT32_MAX;
volatile int64_t x43 = INT64_MIN;
int32_t t11 = -16;
static int8_t x50 = INT8_MAX;
uint16_t x58 = UINT16_MAX;
int32_t t14 = -45378649;
int64_t x83 = -1LL;
uint64_t x86 = UINT64_MAX;
int8_t x97 = 0;
int32_t t22 = 426;
volatile int8_t x104 = 3;
static volatile int32_t t23 = -114578;
uint8_t x105 = 6U;
volatile uint16_t x121 = 128U;
static uint32_t x128 = 31855044U;
int32_t x133 = -132423468;
static uint8_t x138 = UINT8_MAX;
int8_t x139 = -2;
int64_t x142 = -62907LL;
int64_t x146 = INT64_MAX;
int8_t x148 = INT8_MIN;
volatile int32_t t32 = 44132236;
int64_t x152 = 10675561LL;
int32_t x157 = -1;
static int64_t x159 = 25918LL;
int32_t x164 = INT32_MIN;
static volatile int32_t t38 = 14;
volatile uint64_t x176 = UINT64_MAX;
volatile int32_t x179 = -102893031;
uint64_t x184 = 30LLU;
int32_t t42 = 21254;
uint64_t x190 = UINT64_MAX;
int32_t x196 = -12;
static int16_t x197 = INT16_MIN;
uint16_t x207 = 313U;
int16_t x208 = -384;
static uint8_t x209 = UINT8_MAX;
int32_t x211 = INT32_MAX;
int64_t x213 = 6928328927032LL;
uint64_t x217 = 1439500548LLU;
int32_t x230 = 39242571;
int64_t x241 = -97799322296LL;
int32_t x242 = -1;
int32_t x269 = 22725465;
volatile int64_t x275 = 1894797814437213LL;
int64_t x279 = INT64_MAX;
int8_t x280 = INT8_MIN;
volatile int64_t x282 = 1978447221LL;
int16_t x283 = -58;
uint16_t x285 = UINT16_MAX;
int32_t t64 = 16821780;
int32_t t65 = -159023945;
int16_t x298 = 3956;
uint64_t x299 = 5948904244LLU;
int64_t x305 = -12339577769LL;
static int16_t x307 = INT16_MAX;
volatile int32_t t69 = -102878539;
volatile int32_t t71 = -105774429;
static volatile int32_t t73 = -150076;
volatile int32_t t74 = 711;
uint64_t x330 = UINT64_MAX;
uint64_t x336 = UINT64_MAX;
static int32_t x343 = -1;
static int64_t x346 = INT64_MIN;
uint64_t x347 = 6176878061LLU;
int8_t x348 = INT8_MIN;
volatile int32_t t79 = 87;
int32_t t80 = 3;
int32_t x357 = -44457;
int64_t x371 = -358853172758LL;
int64_t x373 = INT64_MAX;
int32_t x383 = -1475;
int32_t x384 = INT32_MIN;
volatile uint32_t x390 = 29U;
static uint8_t x393 = UINT8_MAX;
int8_t x399 = INT8_MIN;
volatile int32_t t91 = 2317106;
int32_t x402 = -1;
static int16_t x407 = INT16_MIN;
int8_t x409 = -1;
int16_t x412 = -1;
uint32_t x414 = UINT32_MAX;
int32_t t96 = 49;
int16_t x424 = 66;
uint32_t x431 = 4397U;
int32_t t99 = 4;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint16_t x3 = 1U;
	uint64_t x4 = 233645725167127902LLU;
	volatile int32_t t0 = 1;

	t0 = ((x1-(x2<x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -17448422LL;
	int8_t x6 = INT8_MAX;
	static int8_t x7 = INT8_MIN;
	static int16_t x8 = -1;
	static int32_t t1 = -301;

	t1 = ((x5-(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	uint8_t x11 = UINT8_MAX;
	volatile int64_t x12 = -27453LL;
	int32_t t2 = -3847022;

	t2 = ((x9-(x10<x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = 43LL;
	int32_t x15 = INT32_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = -198;

	t3 = ((x13-(x14<x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = 58U;

	t4 = ((x17-(x18<x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 149;
	int16_t x22 = 0;
	int64_t x23 = 0LL;
	static int8_t x24 = INT8_MIN;

	t5 = ((x21-(x22<x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	int64_t x26 = INT64_MAX;
	int16_t x27 = 4256;
	volatile int64_t x28 = INT64_MIN;

	t6 = ((x25-(x26<x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 15487LL;
	volatile int64_t x30 = INT64_MAX;
	uint64_t x31 = 13126090792LLU;
	static int8_t x32 = 0;
	volatile int32_t t7 = 849722418;

	t7 = ((x29-(x30<x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = -1LL;
	int64_t x36 = INT64_MIN;

	t8 = ((x33-(x34<x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int32_t x38 = 1;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -2;

	t9 = ((x37-(x38<x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 13195311522705132LL;
	int64_t x44 = -1LL;
	int32_t t10 = -209;

	t10 = ((x41-(x42<x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	uint16_t x47 = UINT16_MAX;
	uint64_t x48 = 35213276575LLU;

	t11 = ((x45-(x46<x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = 1;

	t12 = ((x49-(x50<x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	int8_t x54 = -1;
	volatile uint16_t x55 = 18921U;
	static int8_t x56 = 31;
	int32_t t13 = 1062894;

	t13 = ((x53-(x54<x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -22;
	volatile uint16_t x59 = UINT16_MAX;
	int32_t x60 = INT32_MIN;

	t14 = ((x57-(x58<x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -16;
	volatile uint16_t x62 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	volatile int64_t x64 = -1LL;
	volatile int32_t t15 = 530376706;

	t15 = ((x61-(x62<x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -3;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = UINT64_MAX;
	int16_t x72 = -3759;
	int32_t t16 = -48;

	t16 = ((x69-(x70<x71))<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 1853LLU;
	int64_t x74 = INT64_MAX;
	static uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t17 = 1;

	t17 = ((x73-(x74<x75))<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	static int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = 1517U;
	int32_t t18 = -602446587;

	t18 = ((x77-(x78<x79))<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	static int16_t x82 = INT16_MAX;
	static uint64_t x84 = 534326866521522297LLU;
	int32_t t19 = 407998379;

	t19 = ((x81-(x82<x83))<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x85 = 67U;
	static int16_t x87 = -1244;
	volatile int64_t x88 = 855049833816319LL;
	volatile int32_t t20 = -736897103;

	t20 = ((x85-(x86<x87))<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1LL;
	uint32_t x90 = 870263476U;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = INT16_MIN;
	int32_t t21 = -1;

	t21 = ((x89-(x90<x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = INT16_MIN;
	static uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MAX;

	t22 = ((x97-(x98<x99))<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 53U;
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;

	t23 = ((x101-(x102<x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x106 = 62;
	static int8_t x107 = 3;
	int64_t x108 = -18862754715LL;
	volatile int32_t t24 = -40;

	t24 = ((x105-(x106<x107))<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 30U;
	uint8_t x114 = 6U;
	int8_t x115 = INT8_MIN;
	volatile uint64_t x116 = 6247976325239552605LLU;
	static volatile int32_t t25 = -370383;

	t25 = ((x113-(x114<x115))<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 26U;
	volatile uint32_t x118 = 658466U;
	static int8_t x119 = INT8_MIN;
	static volatile uint8_t x120 = 8U;
	int32_t t26 = -126359518;

	t26 = ((x117-(x118<x119))<x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x122 = 2U;
	int32_t x123 = -1;
	int64_t x124 = INT64_MIN;
	int32_t t27 = -7054585;

	t27 = ((x121-(x122<x123))<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = INT64_MAX;
	volatile uint8_t x126 = 6U;
	static int32_t x127 = INT32_MIN;
	int32_t t28 = 0;

	t28 = ((x125-(x126<x127))<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = 55;
	uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MAX;
	volatile int32_t t29 = 117;

	t29 = ((x133-(x134<x135))<x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = -28;
	volatile uint16_t x140 = 734U;
	static int32_t t30 = 29;

	t30 = ((x137-(x138<x139))<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x141 = 139037838850311LLU;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t31 = -8282826;

	t31 = ((x141-(x142<x143))<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = INT16_MAX;
	int16_t x147 = INT16_MAX;

	t32 = ((x145-(x146<x147))<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 31410LLU;
	int32_t x150 = 1019229899;
	int32_t x151 = -1;
	int32_t t33 = -988;

	t33 = ((x149-(x150<x151))<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x153 = 7;
	int16_t x154 = -2;
	uint16_t x155 = UINT16_MAX;
	static int16_t x156 = -1;
	static volatile int32_t t34 = -39828216;

	t34 = ((x153-(x154<x155))<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x158 = 129184085129LL;
	static volatile uint8_t x160 = 3U;
	int32_t t35 = -1162976;

	t35 = ((x157-(x158<x159))<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1540877849001791557LL;
	uint32_t x162 = 132139U;
	volatile int32_t x163 = INT32_MAX;
	int32_t t36 = 265089931;

	t36 = ((x161-(x162<x163))<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 120828U;
	volatile uint64_t x166 = 501998675041LLU;
	uint8_t x167 = 4U;
	static int64_t x168 = -1LL;
	volatile int32_t t37 = 0;

	t37 = ((x165-(x166<x167))<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = 3U;
	int8_t x170 = -1;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;

	t38 = ((x169-(x170<x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 13U;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	volatile int32_t t39 = -21;

	t39 = ((x173-(x174<x175))<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = 63;
	int8_t x178 = 0;
	static volatile int64_t x180 = INT64_MIN;
	int32_t t40 = -3162;

	t40 = ((x177-(x178<x179))<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	volatile uint16_t x183 = UINT16_MAX;
	volatile int32_t t41 = -3735570;

	t41 = ((x181-(x182<x183))<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MIN;
	int8_t x188 = -1;

	t42 = ((x185-(x186<x187))<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MAX;
	volatile int32_t x191 = INT32_MIN;
	volatile int16_t x192 = -209;
	int32_t t43 = -1;

	t43 = ((x189-(x190<x191))<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MAX;
	uint8_t x194 = 7U;
	static int64_t x195 = INT64_MIN;
	int32_t t44 = -3;

	t44 = ((x193-(x194<x195))<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x198 = -1LL;
	int16_t x199 = INT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t45 = 945678289;

	t45 = ((x197-(x198<x199))<x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 1756U;
	uint16_t x202 = 1U;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 33U;
	static int32_t t46 = -89;

	t46 = ((x201-(x202<x203))<x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MAX;
	volatile int32_t t47 = -47077;

	t47 = ((x205-(x206<x207))<x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;
	int32_t t48 = 137;

	t48 = ((x209-(x210<x211))<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x214 = 834U;
	int32_t x215 = -1;
	int8_t x216 = 1;
	volatile int32_t t49 = -394377747;

	t49 = ((x213-(x214<x215))<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x218 = -1;
	uint32_t x219 = 438688U;
	int32_t x220 = -1;
	static volatile int32_t t50 = 430509;

	t50 = ((x217-(x218<x219))<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = -2724655;
	int8_t x222 = 54;
	uint16_t x223 = 57U;
	static uint64_t x224 = 10566LLU;
	static volatile int32_t t51 = -505695379;

	t51 = ((x221-(x222<x223))<x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -1;
	uint64_t x226 = 9998906769131LLU;
	int8_t x227 = 8;
	int32_t x228 = INT32_MIN;
	static int32_t t52 = -22;

	t52 = ((x225-(x226<x227))<x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = -1168340551732LL;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = 0;
	int32_t t53 = 1;

	t53 = ((x229-(x230<x231))<x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -1;
	static int64_t x234 = -1LL;
	static int64_t x235 = INT64_MIN;
	int32_t x236 = -6101852;
	int32_t t54 = -7619414;

	t54 = ((x233-(x234<x235))<x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 3;
	static int8_t x238 = 34;
	int32_t x239 = INT32_MAX;
	volatile int64_t x240 = INT64_MIN;
	int32_t t55 = -88;

	t55 = ((x237-(x238<x239))<x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x243 = 42U;
	int64_t x244 = INT64_MAX;
	volatile int32_t t56 = 1;

	t56 = ((x241-(x242<x243))<x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	volatile int16_t x252 = 1281;
	int32_t t57 = -1;

	t57 = ((x249-(x250<x251))<x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -426;
	volatile int16_t x262 = -1;
	volatile int64_t x263 = INT64_MIN;
	int64_t x264 = -6268963288LL;
	static int32_t t58 = 2;

	t58 = ((x261-(x262<x263))<x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MIN;
	static int8_t x266 = INT8_MIN;
	static volatile int8_t x267 = INT8_MIN;
	volatile int16_t x268 = 9;
	int32_t t59 = 731934;

	t59 = ((x265-(x266<x267))<x268);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x270 = -1;
	volatile int64_t x271 = -1359454735929LL;
	int8_t x272 = 28;
	int32_t t60 = -1323512;

	t60 = ((x269-(x270<x271))<x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = INT16_MAX;
	static volatile int32_t x274 = 5754;
	int16_t x276 = -1;
	volatile int32_t t61 = -1;

	t61 = ((x273-(x274<x275))<x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = 4;
	int32_t x278 = INT32_MAX;
	int32_t t62 = -93818;

	t62 = ((x277-(x278<x279))<x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	static uint32_t x284 = UINT32_MAX;
	static int32_t t63 = 47783;

	t63 = ((x281-(x282<x283))<x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x286 = 12;
	volatile uint32_t x287 = UINT32_MAX;
	int64_t x288 = INT64_MAX;

	t64 = ((x285-(x286<x287))<x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -1;
	int16_t x290 = 7239;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = 2433504LLU;

	t65 = ((x289-(x290<x291))<x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x293 = 93U;
	uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	static volatile int8_t x296 = INT8_MAX;
	static int32_t t66 = 237334044;

	t66 = ((x293-(x294<x295))<x296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = 1885176352854833LL;
	int8_t x300 = INT8_MIN;
	int32_t t67 = -1;

	t67 = ((x297-(x298<x299))<x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int16_t x303 = 4715;
	static int32_t x304 = 385322420;
	volatile int32_t t68 = 1;

	t68 = ((x301-(x302<x303))<x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x306 = INT32_MIN;
	volatile uint32_t x308 = UINT32_MAX;

	t69 = ((x305-(x306<x307))<x308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = 7040U;
	uint32_t x310 = 441242660U;
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t70 = 221078;

	t70 = ((x309-(x310<x311))<x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x313 = -1;
	uint32_t x314 = 994231U;
	int16_t x315 = 0;
	int64_t x316 = 984150LL;

	t71 = ((x313-(x314<x315))<x316);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = 106760247999212LLU;
	int64_t x319 = 48LL;
	volatile int16_t x320 = INT16_MAX;
	int32_t t72 = -205091;

	t72 = ((x317-(x318<x319))<x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x321 = 147U;
	static int8_t x322 = -1;
	int32_t x323 = -3;
	int16_t x324 = INT16_MIN;

	t73 = ((x321-(x322<x323))<x324);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = 12U;
	static int16_t x326 = INT16_MIN;
	uint8_t x327 = 1U;
	volatile uint16_t x328 = 1415U;

	t74 = ((x325-(x326<x327))<x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x329 = 1151375029147LL;
	uint32_t x331 = 93477820U;
	volatile uint64_t x332 = 30871851LLU;
	static int32_t t75 = 729696521;

	t75 = ((x329-(x330<x331))<x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 7313LLU;
	volatile int16_t x334 = -22;
	int16_t x335 = INT16_MIN;
	volatile int32_t t76 = 293889153;

	t76 = ((x333-(x334<x335))<x336);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x337 = 7U;
	static int64_t x338 = 24LL;
	int8_t x339 = -1;
	static volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t77 = 73818173;

	t77 = ((x337-(x338<x339))<x340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = -7LL;
	static int16_t x342 = -2;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t78 = -32431;

	t78 = ((x341-(x342<x343))<x344);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = UINT8_MAX;

	t79 = ((x345-(x346<x347))<x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x353 = INT16_MAX;
	uint32_t x354 = UINT32_MAX;
	int16_t x355 = -1;
	volatile int8_t x356 = -1;

	t80 = ((x353-(x354<x355))<x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x358 = 9122378443380LLU;
	int8_t x359 = 1;
	volatile uint64_t x360 = UINT64_MAX;
	static int32_t t81 = 25526766;

	t81 = ((x357-(x358<x359))<x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = -23;
	int16_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	int16_t x364 = 22;
	static int32_t t82 = -88906660;

	t82 = ((x361-(x362<x363))<x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 76LLU;
	static uint64_t x366 = 7LLU;
	static uint8_t x367 = 1U;
	volatile int16_t x368 = INT16_MIN;
	int32_t t83 = -1750177;

	t83 = ((x365-(x366<x367))<x368);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = 1009U;
	static uint8_t x370 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t84 = -56606;

	t84 = ((x369-(x370<x371))<x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = 0;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t85 = -307677;

	t85 = ((x373-(x374<x375))<x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = 27519648;
	volatile int8_t x379 = -1;
	int32_t x380 = 164181;
	volatile int32_t t86 = -182177653;

	t86 = ((x377-(x378<x379))<x380);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = -7;
	int32_t t87 = -8360788;

	t87 = ((x381-(x382<x383))<x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MAX;
	volatile uint8_t x386 = 31U;
	volatile uint32_t x387 = 60225U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t88 = -181477;

	t88 = ((x385-(x386<x387))<x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x389 = 1U;
	static uint32_t x391 = UINT32_MAX;
	volatile uint8_t x392 = 0U;
	int32_t t89 = 63562;

	t89 = ((x389-(x390<x391))<x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x394 = INT32_MIN;
	static uint8_t x395 = 1U;
	volatile int16_t x396 = -1;
	volatile int32_t t90 = 2;

	t90 = ((x393-(x394<x395))<x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x397 = 38U;
	static int32_t x398 = -1;
	uint64_t x400 = 22LLU;

	t91 = ((x397-(x398<x399))<x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = 835139832LL;
	int16_t x403 = -1;
	int32_t x404 = INT32_MIN;
	volatile int32_t t92 = 943;

	t92 = ((x401-(x402<x403))<x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = -1;
	static uint8_t x406 = 22U;
	int32_t x408 = 10879;
	int32_t t93 = -210464186;

	t93 = ((x405-(x406<x407))<x408);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x410 = 15084868U;
	uint16_t x411 = UINT16_MAX;
	int32_t t94 = -5;

	t94 = ((x409-(x410<x411))<x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = -1;
	uint8_t x415 = UINT8_MAX;
	volatile uint64_t x416 = UINT64_MAX;
	int32_t t95 = -982;

	t95 = ((x413-(x414<x415))<x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = -1;
	int16_t x418 = 117;
	static volatile uint8_t x419 = UINT8_MAX;
	static int64_t x420 = -1LL;

	t96 = ((x417-(x418<x419))<x420);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -1LL;
	int64_t x422 = -1LL;
	int64_t x423 = -23715327943LL;
	volatile int32_t t97 = -922416;

	t97 = ((x421-(x422<x423))<x424);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = -43;
	uint16_t x426 = 2U;
	static volatile uint32_t x427 = UINT32_MAX;
	uint16_t x428 = 77U;
	volatile int32_t t98 = -60209203;

	t98 = ((x425-(x426<x427))<x428);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x429 = -1110;
	static int64_t x430 = INT64_MAX;
	uint8_t x432 = 20U;

	t99 = ((x429-(x430<x431))<x432);

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

