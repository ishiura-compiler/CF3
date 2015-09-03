#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = 19;
int8_t x12 = -1;
int64_t x15 = -78283495982105LL;
static uint8_t x16 = 0U;
int64_t x17 = -1LL;
int32_t x20 = INT32_MIN;
int16_t x43 = INT16_MIN;
static volatile uint8_t x52 = UINT8_MAX;
volatile int16_t x55 = -1;
int32_t x56 = -1;
int64_t t13 = -63553150269LL;
volatile int32_t t15 = 7;
int64_t x73 = 88551539156555LL;
volatile int64_t t16 = 6643LL;
uint64_t x81 = UINT64_MAX;
uint32_t t19 = 617560968U;
int32_t x93 = -19413346;
uint16_t x96 = 990U;
volatile int8_t x100 = -1;
int64_t x103 = INT64_MIN;
int8_t x104 = INT8_MAX;
int16_t x108 = INT16_MIN;
volatile int16_t x109 = -67;
int16_t x114 = INT16_MIN;
volatile int32_t x116 = 774;
volatile int64_t t26 = -80862LL;
uint32_t x117 = 226779853U;
volatile uint32_t t27 = 4U;
static int8_t x123 = -22;
static int64_t x124 = INT64_MIN;
volatile int64_t t28 = -213142LL;
static int64_t x127 = INT64_MIN;
uint64_t t29 = 0LLU;
int32_t x133 = 30740408;
static int64_t x137 = INT64_MIN;
static int8_t x145 = -8;
volatile uint64_t t34 = 32372LLU;
uint8_t x149 = 1U;
uint16_t x152 = UINT16_MAX;
uint8_t x154 = 61U;
volatile int32_t t36 = -13;
int8_t x160 = INT8_MIN;
uint32_t x161 = 11939U;
int32_t t39 = -2102;
volatile int32_t t41 = -28647;
int16_t x181 = -13108;
int64_t x190 = INT64_MIN;
int64_t x191 = 1LL;
int8_t x199 = INT8_MAX;
int8_t x200 = -24;
volatile int64_t x205 = -14054637666366LL;
int64_t t49 = -1719728907293LL;
int16_t x210 = INT16_MIN;
uint64_t x211 = 155765441372LLU;
static int64_t t51 = 3836381LL;
int64_t x223 = INT64_MIN;
int32_t x224 = INT32_MIN;
volatile int32_t t54 = 0;
int8_t x231 = INT8_MIN;
uint16_t x232 = UINT16_MAX;
volatile int32_t t55 = -26;
int16_t x236 = INT16_MIN;
volatile int64_t t57 = 2005472989LL;
static volatile int32_t x243 = INT32_MIN;
volatile int32_t t59 = INT32_MAX;
static uint32_t x249 = 7038U;
static int64_t x256 = INT64_MIN;
volatile uint64_t x260 = 8383737LLU;
int8_t x262 = INT8_MIN;
uint64_t t63 = UINT64_MAX;
uint8_t x265 = 24U;
static int16_t x266 = INT16_MAX;
uint16_t x268 = 242U;
static int8_t x270 = 1;
int64_t x271 = 5393263600724688LL;
static int8_t x272 = 7;
int64_t x273 = INT64_MAX;
static uint32_t x274 = 3914U;
int16_t x278 = -1;
static int8_t x284 = -1;
int32_t x291 = INT32_MIN;
int32_t t71 = -1;
uint16_t x299 = UINT16_MAX;
uint8_t x304 = 89U;
uint16_t x307 = UINT16_MAX;
static int32_t t76 = -3927152;
int8_t x318 = INT8_MIN;
static uint64_t x319 = UINT64_MAX;
volatile int16_t x331 = -1;
volatile int32_t t80 = -12626;
uint64_t t82 = UINT64_MAX;
int32_t x341 = -1;
uint64_t x343 = 3467167748478878223LLU;
int32_t x353 = -1;
static uint16_t x354 = 1U;
static volatile uint16_t x364 = 22U;
volatile int32_t x365 = INT32_MIN;
volatile int32_t t89 = INT32_MIN;
uint16_t x372 = 286U;
volatile uint64_t t90 = 711223062986486LLU;
uint64_t x378 = 523532LLU;
volatile uint64_t x381 = UINT64_MAX;
static int16_t x384 = -1;
static int16_t x385 = -1;
int32_t x395 = -72;
int32_t x396 = INT32_MIN;
int64_t x397 = 129847994LL;
int64_t x407 = INT64_MIN;


void f0(void) {
	static int64_t x1 = 7518121015753014LL;
	volatile int32_t x2 = INT32_MIN;
	volatile int16_t x3 = 5279;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 3123072203618LL;

	t0 = (x1-((x2==x3)*x4));

	if (t0 != 7518121015753014LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 10U;
	uint32_t x11 = UINT32_MAX;
	int32_t t1 = 7765;

	t1 = (x9-((x10==x11)*x12));

	if (t1 != 10) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x13-((x14==x15)*x16));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x18 = -1;
	uint64_t x19 = 880LLU;
	int64_t t3 = -443328195946212077LL;

	t3 = (x17-((x18==x19)*x20));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	volatile int64_t x22 = INT64_MIN;
	volatile int64_t x23 = 3485385183145LL;
	int8_t x24 = -13;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x21-((x22==x23)*x24));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	static int16_t x26 = 10067;
	static int16_t x27 = 34;
	volatile int32_t x28 = 231876360;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x25-((x26==x27)*x28));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 6924903664106LLU;
	uint32_t x30 = 173648071U;
	int64_t x31 = -1LL;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t6 = 321209205557263LLU;

	t6 = (x29-((x30==x31)*x32));

	if (t6 != 6924903664106LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	int64_t x38 = INT64_MIN;
	static int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	int32_t t7 = -76593954;

	t7 = (x37-((x38==x39)*x40));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 2;
	volatile uint8_t x42 = 1U;
	int64_t x44 = INT64_MIN;
	int64_t t8 = 103LL;

	t8 = (x41-((x42==x43)*x44));

	if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 0U;
	static uint64_t x46 = 10784473129651145LLU;
	uint32_t x47 = 16507640U;
	int8_t x48 = 63;
	int32_t t9 = -399;

	t9 = (x45-((x46==x47)*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	int32_t t10 = 0;

	t10 = (x49-((x50==x51)*x52));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = 376;
	uint32_t x54 = UINT32_MAX;
	volatile int32_t t11 = -43830;

	t11 = (x53-((x54==x55)*x56));

	if (t11 != 377) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 572401U;
	int8_t x58 = 2;
	uint8_t x59 = 6U;
	static volatile int8_t x60 = 11;
	volatile uint32_t t12 = 46U;

	t12 = (x57-((x58==x59)*x60));

	if (t12 != 572401U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = -51167520406316181LL;
	int64_t x62 = -13265966649395LL;
	static uint16_t x63 = 5U;
	volatile int8_t x64 = INT8_MIN;

	t13 = (x61-((x62==x63)*x64));

	if (t13 != -51167520406316181LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	static int64_t x66 = -250179157093LL;
	static int8_t x67 = INT8_MAX;
	uint16_t x68 = UINT16_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = (x65-((x66==x67)*x68));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	int8_t x71 = 56;
	int32_t x72 = -22;

	t15 = (x69-((x70==x71)*x72));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MAX;
	static int64_t x75 = 418691582003LL;
	int8_t x76 = INT8_MAX;

	t16 = (x73-((x74==x75)*x76));

	if (t16 != 88551539156555LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	int8_t x78 = INT8_MIN;
	static int64_t x79 = -665158355937LL;
	int16_t x80 = INT16_MAX;
	static volatile int32_t t17 = 47978;

	t17 = (x77-((x78==x79)*x80));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x82 = 44803LL;
	int32_t x83 = -1;
	volatile uint8_t x84 = 15U;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x81-((x82==x83)*x84));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 489U;
	uint16_t x86 = 0U;
	int32_t x87 = 941;
	volatile uint32_t x88 = 100567U;

	t19 = (x85-((x86==x87)*x88));

	if (t19 != 489U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = -1;
	volatile uint8_t x90 = 6U;
	int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t20 = 43558;

	t20 = (x89-((x90==x91)*x92));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x94 = 52U;
	uint64_t x95 = 7967280454368LLU;
	volatile int32_t t21 = -10;

	t21 = (x93-((x94==x95)*x96));

	if (t21 != -19413346) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = 9417;
	static volatile int64_t x99 = INT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x97-((x98==x99)*x100));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = 6343282600184566LL;
	uint16_t x102 = UINT16_MAX;
	static volatile int64_t t23 = 7869893083LL;

	t23 = (x101-((x102==x103)*x104));

	if (t23 != 6343282600184566LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	static volatile int8_t x106 = INT8_MAX;
	static volatile uint32_t x107 = 15515666U;
	volatile int32_t t24 = INT32_MIN;

	t24 = (x105-((x106==x107)*x108));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x110 = 11811;
	uint64_t x111 = 3763077LLU;
	int32_t x112 = -1;
	volatile int32_t t25 = 4;

	t25 = (x109-((x110==x111)*x112));

	if (t25 != -67) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = -1LL;
	volatile int32_t x115 = -25748324;

	t26 = (x113-((x114==x115)*x116));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x118 = 12U;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;

	t27 = (x117-((x118==x119)*x120));

	if (t27 != 226779853U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	int16_t x122 = -1;

	t28 = (x121-((x122==x123)*x124));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = 44;
	volatile int8_t x126 = INT8_MAX;
	static uint64_t x128 = 210LLU;

	t29 = (x125-((x126==x127)*x128));

	if (t29 != 44LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 48029328LLU;
	int64_t x130 = INT64_MAX;
	int64_t x131 = INT64_MAX;
	uint32_t x132 = 6253574U;
	volatile uint64_t t30 = 1625388255883892741LLU;

	t30 = (x129-((x130==x131)*x132));

	if (t30 != 41775754LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x134 = INT32_MIN;
	volatile uint8_t x135 = 0U;
	uint8_t x136 = UINT8_MAX;
	int32_t t31 = -547;

	t31 = (x133-((x134==x135)*x136));

	if (t31 != 30740408) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x138 = 1072;
	volatile int64_t x139 = INT64_MIN;
	volatile int32_t x140 = 1;
	static volatile int64_t t32 = INT64_MIN;

	t32 = (x137-((x138==x139)*x140));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x141 = 13U;
	int16_t x142 = 22;
	uint8_t x143 = 13U;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t33 = -4222;

	t33 = (x141-((x142==x143)*x144));

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x146 = 9280U;
	int64_t x147 = -947214LL;
	volatile uint64_t x148 = 863142875701436487LLU;

	t34 = (x145-((x146==x147)*x148));

	if (t34 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -24;
	int16_t x151 = -7;
	static int32_t t35 = 0;

	t35 = (x149-((x150==x151)*x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 129;
	volatile uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;

	t36 = (x153-((x154==x155)*x156));

	if (t36 != 129) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	int32_t x159 = -1;
	volatile int32_t t37 = INT32_MIN;

	t37 = (x157-((x158==x159)*x160));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x162 = -1;
	static volatile int32_t x163 = INT32_MAX;
	int32_t x164 = -99905269;
	volatile uint32_t t38 = 33U;

	t38 = (x161-((x162==x163)*x164));

	if (t38 != 11939U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -181;
	int32_t x166 = INT32_MIN;
	int32_t x167 = -137;
	int16_t x168 = INT16_MIN;

	t39 = (x165-((x166==x167)*x168));

	if (t39 != -181) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = UINT64_MAX;
	uint64_t t40 = 112717949590LLU;

	t40 = (x169-((x170==x171)*x172));

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x173 = 2;
	static volatile int8_t x174 = -1;
	int8_t x175 = -1;
	int16_t x176 = 4;

	t41 = (x173-((x174==x175)*x176));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	int32_t x179 = -1;
	int8_t x180 = INT8_MIN;
	int64_t t42 = -10913191026LL;

	t42 = (x177-((x178==x179)*x180));

	if (t42 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x182 = -1;
	static int16_t x183 = -1;
	int8_t x184 = -59;
	int32_t t43 = 2;

	t43 = (x181-((x182==x183)*x184));

	if (t43 != -13049) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x185 = -1;
	volatile int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t44 = 0LL;

	t44 = (x185-((x186==x187)*x188));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 25849U;
	uint64_t x192 = 10LLU;
	uint64_t t45 = 7578LLU;

	t45 = (x189-((x190==x191)*x192));

	if (t45 != 25849LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	uint8_t x195 = 4U;
	volatile uint8_t x196 = 70U;
	static int32_t t46 = 94;

	t46 = (x193-((x194==x195)*x196));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = UINT64_MAX;
	static int64_t x198 = 1LL;
	uint64_t t47 = UINT64_MAX;

	t47 = (x197-((x198==x199)*x200));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x201 = INT64_MIN;
	int8_t x202 = -1;
	volatile uint8_t x203 = UINT8_MAX;
	volatile int32_t x204 = 100;
	int64_t t48 = INT64_MIN;

	t48 = (x201-((x202==x203)*x204));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = INT16_MIN;
	uint32_t x207 = 2183464U;
	uint32_t x208 = 441860721U;

	t49 = (x205-((x206==x207)*x208));

	if (t49 != -14054637666366LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 40U;
	static int16_t x212 = INT16_MIN;
	uint32_t t50 = 2556U;

	t50 = (x209-((x210==x211)*x212));

	if (t50 != 40U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int32_t x215 = 45;
	int64_t x216 = -14591934705839LL;

	t51 = (x213-((x214==x215)*x216));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -16350030009933LL;
	static uint32_t x218 = UINT32_MAX;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = INT64_MIN;
	static int64_t t52 = 33224803399463552LL;

	t52 = (x217-((x218==x219)*x220));

	if (t52 != -16350030009933LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 7925U;
	int8_t x222 = INT8_MAX;
	volatile int32_t t53 = -21199;

	t53 = (x221-((x222==x223)*x224));

	if (t53 != 7925) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -42103;
	static int32_t x226 = INT32_MIN;
	static int8_t x227 = -1;
	static uint16_t x228 = UINT16_MAX;

	t54 = (x225-((x226==x227)*x228));

	if (t54 != -42103) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = 1;
	int16_t x230 = 2;

	t55 = (x229-((x230==x231)*x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 5163U;
	int16_t x234 = 4095;
	volatile int32_t x235 = INT32_MAX;
	static volatile uint32_t t56 = 33408U;

	t56 = (x233-((x234==x235)*x236));

	if (t56 != 5163U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = -335399801;
	volatile int32_t x239 = -12;
	int64_t x240 = INT64_MIN;

	t57 = (x237-((x238==x239)*x240));

	if (t57 != 32767LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 76U;
	uint64_t x242 = 4059013LLU;
	int8_t x244 = INT8_MIN;
	int32_t t58 = 30;

	t58 = (x241-((x242==x243)*x244));

	if (t58 != 76) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	volatile int32_t x246 = 38156;
	int16_t x247 = -1;
	uint8_t x248 = UINT8_MAX;

	t59 = (x245-((x246==x247)*x248));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x250 = INT32_MAX;
	int32_t x251 = -220022;
	volatile uint64_t x252 = 2876LLU;
	volatile uint64_t t60 = 10727309608LLU;

	t60 = (x249-((x250==x251)*x252));

	if (t60 != 7038LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 2U;
	volatile uint16_t x254 = 1U;
	int32_t x255 = 209043;
	volatile int64_t t61 = 269452732579646LL;

	t61 = (x253-((x254==x255)*x256));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MAX;
	static uint64_t x258 = 2887LLU;
	static volatile uint32_t x259 = 130862950U;
	volatile uint64_t t62 = 7957103LLU;

	t62 = (x257-((x258==x259)*x260));

	if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x263 = INT16_MAX;
	volatile int32_t x264 = 5738957;

	t63 = (x261-((x262==x263)*x264));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x267 = -2;
	static int32_t t64 = -6215;

	t64 = (x265-((x266==x267)*x268));

	if (t64 != 24) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x269-((x270==x271)*x272));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x275 = 73LL;
	volatile uint16_t x276 = 0U;
	static volatile int64_t t66 = INT64_MAX;

	t66 = (x273-((x274==x275)*x276));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = 111699;
	uint64_t x279 = UINT64_MAX;
	static volatile uint8_t x280 = 31U;
	volatile int32_t t67 = -145665;

	t67 = (x277-((x278==x279)*x280));

	if (t67 != 111668) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x281 = -763LL;
	int8_t x282 = INT8_MAX;
	static int32_t x283 = 14036;
	volatile int64_t t68 = -18385436914690119LL;

	t68 = (x281-((x282==x283)*x284));

	if (t68 != -763LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = INT16_MAX;
	int64_t x286 = -41132LL;
	uint8_t x287 = UINT8_MAX;
	int8_t x288 = 0;
	volatile int32_t t69 = 553;

	t69 = (x285-((x286==x287)*x288));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 2023654757622133162LLU;
	volatile int8_t x290 = INT8_MIN;
	int32_t x292 = 505;
	static uint64_t t70 = 36355363985257977LLU;

	t70 = (x289-((x290==x291)*x292));

	if (t70 != 2023654757622133162LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	static int32_t x294 = INT32_MAX;
	uint8_t x295 = 8U;
	static int16_t x296 = -1;

	t71 = (x293-((x294==x295)*x296));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = 390674060719515LLU;
	int16_t x300 = -33;
	int32_t t72 = 0;

	t72 = (x297-((x298==x299)*x300));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MAX;
	static int16_t x303 = INT16_MIN;
	int32_t t73 = -3885;

	t73 = (x301-((x302==x303)*x304));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x305 = 11U;
	int16_t x306 = 579;
	int32_t x308 = INT32_MIN;
	int32_t t74 = 90791;

	t74 = (x305-((x306==x307)*x308));

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = -9;
	uint32_t x310 = 416818263U;
	static int8_t x311 = INT8_MIN;
	int8_t x312 = 49;
	int32_t t75 = 5491194;

	t75 = (x309-((x310==x311)*x312));

	if (t75 != -9) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = -29;
	uint8_t x314 = 3U;
	volatile int16_t x315 = 3451;
	int8_t x316 = -1;

	t76 = (x313-((x314==x315)*x316));

	if (t76 != -29) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x317 = INT16_MIN;
	uint8_t x320 = 5U;
	volatile int32_t t77 = -461494195;

	t77 = (x317-((x318==x319)*x320));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = -11;
	static int8_t x322 = INT8_MIN;
	uint8_t x323 = UINT8_MAX;
	uint32_t x324 = 11837912U;
	volatile uint32_t t78 = 824212024U;

	t78 = (x321-((x322==x323)*x324));

	if (t78 != 4294967285U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = 20267443467LLU;
	int64_t x327 = -41520657LL;
	uint8_t x328 = 6U;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x325-((x326==x327)*x328));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x329 = -3;
	static uint32_t x330 = UINT32_MAX;
	uint8_t x332 = UINT8_MAX;

	t80 = (x329-((x330==x331)*x332));

	if (t80 != -258) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = INT16_MAX;
	static volatile int64_t x334 = INT64_MAX;
	int8_t x335 = -1;
	uint32_t x336 = 59966331U;
	uint32_t t81 = 3158U;

	t81 = (x333-((x334==x335)*x336));

	if (t81 != 32767U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MIN;
	volatile int8_t x339 = -1;
	int32_t x340 = INT32_MIN;

	t82 = (x337-((x338==x339)*x340));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x342 = -1;
	volatile int32_t x344 = -1;
	volatile int32_t t83 = 3419327;

	t83 = (x341-((x342==x343)*x344));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	int8_t x346 = -1;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = 5;
	int32_t t84 = INT32_MAX;

	t84 = (x345-((x346==x347)*x348));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 7415420740LLU;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = 24U;
	volatile uint8_t x352 = 1U;
	static volatile uint64_t t85 = 0LLU;

	t85 = (x349-((x350==x351)*x352));

	if (t85 != 7415420740LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x355 = -1018;
	int64_t x356 = INT64_MAX;
	int64_t t86 = -21148692375LL;

	t86 = (x353-((x354==x355)*x356));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = INT8_MIN;
	volatile uint8_t x358 = 1U;
	static int8_t x359 = 49;
	int64_t x360 = INT64_MIN;
	int64_t t87 = -565088188117845LL;

	t87 = (x357-((x358==x359)*x360));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	static int64_t x363 = 3LL;
	static int32_t t88 = 11;

	t88 = (x361-((x362==x363)*x364));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x366 = INT32_MAX;
	static volatile int8_t x367 = INT8_MAX;
	static int32_t x368 = -1;

	t89 = (x365-((x366==x367)*x368));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x369 = 447740020LLU;
	int64_t x370 = INT64_MIN;
	static volatile int8_t x371 = 1;

	t90 = (x369-((x370==x371)*x372));

	if (t90 != 447740020LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 27U;
	int16_t x374 = 983;
	volatile uint8_t x375 = UINT8_MAX;
	int32_t x376 = 84;
	static int32_t t91 = 4072;

	t91 = (x373-((x374==x375)*x376));

	if (t91 != 27) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x379 = 2092762857983LL;
	uint8_t x380 = 11U;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x377-((x378==x379)*x380));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x382 = 27;
	volatile uint32_t x383 = 533653229U;
	static volatile uint64_t t93 = UINT64_MAX;

	t93 = (x381-((x382==x383)*x384));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x386 = UINT16_MAX;
	int64_t x387 = -798941136068LL;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t94 = 10606;

	t94 = (x385-((x386==x387)*x388));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = INT64_MIN;
	static uint8_t x390 = 33U;
	static volatile int64_t x391 = 5461244074LL;
	int8_t x392 = 1;
	int64_t t95 = INT64_MIN;

	t95 = (x389-((x390==x391)*x392));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = -1LL;
	static int16_t x394 = INT16_MIN;
	int64_t t96 = 3626922073994LL;

	t96 = (x393-((x394==x395)*x396));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x398 = 23U;
	volatile uint8_t x399 = 0U;
	int16_t x400 = INT16_MAX;
	int64_t t97 = -41552821224LL;

	t97 = (x397-((x398==x399)*x400));

	if (t97 != 129847994LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x401 = -684741;
	int16_t x402 = 2648;
	volatile uint8_t x403 = 86U;
	volatile int8_t x404 = INT8_MAX;
	volatile int32_t t98 = 3;

	t98 = (x401-((x402==x403)*x404));

	if (t98 != -684741) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x405 = -1;
	int16_t x406 = INT16_MAX;
	int32_t x408 = 120292371;
	int32_t t99 = 173;

	t99 = (x405-((x406==x407)*x408));

	if (t99 != -1) { NG(); } else { ; }
	
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

