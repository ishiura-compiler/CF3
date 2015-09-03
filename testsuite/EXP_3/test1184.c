#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
int8_t x15 = -1;
uint8_t x16 = UINT8_MAX;
int8_t x18 = INT8_MIN;
volatile int64_t x21 = -134461330010834230LL;
int64_t x24 = -392500140LL;
uint64_t x25 = 95561930LLU;
volatile uint64_t x29 = UINT64_MAX;
int16_t x34 = INT16_MIN;
int8_t x36 = -1;
int32_t x41 = 195351;
static volatile int8_t x51 = INT8_MAX;
int64_t x55 = -454068LL;
volatile uint64_t t11 = UINT64_MAX;
int16_t x59 = INT16_MIN;
static int16_t x66 = 11;
uint8_t x73 = 2U;
volatile uint32_t t15 = 2183342U;
uint64_t t16 = 2362129144258427489LLU;
static volatile uint32_t x82 = 207U;
volatile int8_t x83 = -1;
int64_t x84 = INT64_MAX;
int8_t x93 = 10;
int8_t x101 = INT8_MIN;
uint16_t x103 = UINT16_MAX;
static volatile int8_t x104 = 1;
uint32_t x106 = 4526509U;
uint32_t x107 = 28659893U;
static volatile uint32_t t22 = 35U;
int16_t x111 = -1;
int64_t t24 = -97LL;
int32_t x119 = -1;
volatile int64_t x120 = INT64_MIN;
volatile int32_t t25 = 44708;
volatile int32_t x125 = -1;
int8_t x131 = -1;
volatile uint16_t x134 = UINT16_MAX;
static int64_t t31 = 13946149080LL;
uint16_t x162 = 1565U;
int64_t x165 = -1LL;
volatile uint32_t x167 = UINT32_MAX;
int16_t x183 = -1;
uint8_t x190 = 1U;
uint32_t x192 = UINT32_MAX;
static int32_t x205 = 1145422;
static int64_t x207 = -297972840LL;
volatile uint32_t t44 = 87381U;
uint8_t x213 = 116U;
int16_t x221 = INT16_MAX;
volatile uint8_t x224 = UINT8_MAX;
volatile uint32_t t46 = 2550135U;
int32_t t47 = -2;
uint64_t x230 = 302LLU;
uint64_t x245 = 4856932569909LLU;
int16_t x247 = -52;
static volatile uint64_t x248 = 22LLU;
static uint16_t x251 = 8772U;
volatile uint16_t x260 = 199U;
static int64_t x262 = INT64_MIN;
volatile int8_t x264 = INT8_MIN;
uint8_t x271 = 30U;
static int32_t x282 = INT32_MIN;
volatile int32_t t59 = 1;
uint64_t t63 = 1LLU;
uint64_t t64 = 5797508LLU;
volatile int32_t x309 = -63653747;
volatile uint32_t t66 = 556651U;
volatile int32_t x317 = -1;
int8_t x323 = INT8_MIN;
static int32_t t68 = -694427;
int16_t x325 = 150;
int16_t x326 = INT16_MIN;
volatile int8_t x329 = -3;
static int32_t x330 = 510469;
int32_t x331 = INT32_MIN;
volatile int32_t t71 = -167670609;
int64_t x340 = INT64_MIN;
uint32_t x352 = 553239660U;
int64_t x353 = INT64_MAX;
static uint16_t x355 = 1581U;
static volatile uint64_t x360 = 96664436086934650LLU;
int32_t t77 = 3747;
uint32_t x369 = 22306224U;
static int64_t x370 = 712LL;
int64_t x372 = -1560LL;
int8_t x373 = -1;
uint64_t x374 = 3890240743LLU;
int8_t x390 = -1;
int8_t x397 = 2;
int8_t x402 = INT8_MIN;
int8_t x404 = -1;
volatile int32_t t88 = -2102753;
int16_t x408 = -31;
volatile uint64_t x410 = 30137LLU;
int8_t x417 = 7;
volatile int64_t t91 = -1094801746LL;
static int64_t x424 = -1LL;
volatile int32_t t92 = -253978091;
uint16_t x426 = UINT16_MAX;
static int16_t x448 = -90;
uint32_t x452 = 163U;
uint64_t x453 = 374420LLU;
int16_t x454 = -1;
int64_t x459 = 15003319373270LL;
volatile int8_t x460 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	int16_t x3 = -331;
	uint8_t x4 = 30U;
	static volatile int32_t t0 = 12410252;

	t0 = ((x1+x2)+(x3==x4));

	if (t0 != 98302) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 67741615813LLU;
	int8_t x7 = 0;
	volatile uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = 2890456LLU;

	t1 = ((x5+x6)+(x7==x8));

	if (t1 != 67741681348LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	uint64_t t2 = 8765566667622902038LLU;

	t2 = ((x13+x14)+(x15==x16));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 5169749110880LLU;
	uint64_t x19 = 8206LLU;
	static uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 8119197241265281541LLU;

	t3 = ((x17+x18)+(x19==x20));

	if (t3 != 5169749110752LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MAX;
	int64_t t4 = 1833969199913958LL;

	t4 = ((x21+x22)+(x23==x24));

	if (t4 != 9088910706843941577LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = -12208;
	uint8_t x27 = UINT8_MAX;
	static int64_t x28 = INT64_MIN;
	uint64_t t5 = 1082672322961323LLU;

	t5 = ((x25+x26)+(x27==x28));

	if (t5 != 95549722LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 0U;
	static volatile int8_t x32 = 5;
	uint64_t t6 = 51068LLU;

	t6 = ((x29+x30)+(x31==x32));

	if (t6 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 0U;
	uint8_t x35 = 0U;
	static volatile int32_t t7 = -274067;

	t7 = ((x33+x34)+(x35==x36));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = 20U;
	uint32_t x43 = 143U;
	static int8_t x44 = -1;
	int32_t t8 = 1;

	t8 = ((x41+x42)+(x43==x44));

	if (t8 != 195371) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	int64_t x46 = -2167434995LL;
	int64_t x47 = INT64_MIN;
	uint64_t x48 = 121012184710017803LLU;
	static volatile int64_t t9 = -1LL;

	t9 = ((x45+x46)+(x47==x48));

	if (t9 != -2167434996LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	static int16_t x50 = -1;
	int8_t x52 = -1;
	int32_t t10 = -351340599;

	t10 = ((x49+x50)+(x51==x52));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int16_t x54 = 0;
	uint32_t x56 = 273778527U;

	t11 = ((x53+x54)+(x55==x56));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 103;
	uint64_t x58 = UINT64_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t12 = 443LLU;

	t12 = ((x57+x58)+(x59==x60));

	if (t12 != 102LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = -1;
	static int64_t x62 = -7536LL;
	int64_t x63 = INT64_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int64_t t13 = -20734LL;

	t13 = ((x61+x62)+(x63==x64));

	if (t13 != -7537LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 64004160;
	int64_t x67 = -16310LL;
	int8_t x68 = -1;
	volatile int32_t t14 = 120;

	t14 = ((x65+x66)+(x67==x68));

	if (t14 != 64004171) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x74 = 22903U;
	uint64_t x75 = 47LLU;
	volatile int8_t x76 = INT8_MIN;

	t15 = ((x73+x74)+(x75==x76));

	if (t15 != 22905U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x77 = -1LL;
	static uint64_t x78 = 54670831769LLU;
	int32_t x79 = -1;
	volatile int8_t x80 = INT8_MAX;

	t16 = ((x77+x78)+(x79==x80));

	if (t16 != 54670831768LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 0LLU;
	uint64_t t17 = 2038626387933LLU;

	t17 = ((x81+x82)+(x83==x84));

	if (t17 != 207LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	static volatile int16_t x86 = 5;
	volatile uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MAX;
	int64_t t18 = 30289824LL;

	t18 = ((x85+x86)+(x87==x88));

	if (t18 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = INT8_MIN;
	static volatile int32_t x90 = INT32_MAX;
	static uint8_t x91 = UINT8_MAX;
	static volatile int8_t x92 = -1;
	int32_t t19 = 0;

	t19 = ((x89+x90)+(x91==x92));

	if (t19 != 2147483519) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x94 = 4U;
	int16_t x95 = INT16_MIN;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t20 = 9;

	t20 = ((x93+x94)+(x95==x96));

	if (t20 != 14) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x102 = 2787245390797LLU;
	volatile uint64_t t21 = 490700795LLU;

	t21 = ((x101+x102)+(x103==x104));

	if (t21 != 2787245390669LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -1;
	uint32_t x108 = 54824630U;

	t22 = ((x105+x106)+(x107==x108));

	if (t22 != 4526508U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x109 = 15278U;
	static uint16_t x110 = 6816U;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t23 = -416475;

	t23 = ((x109+x110)+(x111==x112));

	if (t23 != 22094) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MAX;
	int64_t x114 = 270268535914LL;
	int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;

	t24 = ((x113+x114)+(x115==x116));

	if (t24 != 272416019561LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	volatile uint16_t x118 = 206U;

	t25 = ((x117+x118)+(x119==x120));

	if (t25 != 205) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = 6;
	int16_t x123 = INT16_MIN;
	uint32_t x124 = UINT32_MAX;
	int32_t t26 = -26;

	t26 = ((x121+x122)+(x123==x124));

	if (t26 != -32762) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = INT16_MIN;
	static volatile uint8_t x127 = 2U;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t27 = 47730;

	t27 = ((x125+x126)+(x127==x128));

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	volatile uint64_t x130 = 469437308818246743LLU;
	volatile int16_t x132 = -3;
	volatile uint64_t t28 = 1671958350713316LLU;

	t28 = ((x129+x130)+(x131==x132));

	if (t28 != 9692809345673022551LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 26;
	static volatile uint32_t x135 = UINT32_MAX;
	static int8_t x136 = INT8_MIN;
	int32_t t29 = 5282366;

	t29 = ((x133+x134)+(x135==x136));

	if (t29 != 65561) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x137 = 101U;
	static uint32_t x138 = UINT32_MAX;
	int16_t x139 = -1;
	static int8_t x140 = INT8_MAX;
	uint32_t t30 = 532405415U;

	t30 = ((x137+x138)+(x139==x140));

	if (t30 != 100U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = -1LL;
	uint16_t x142 = 1951U;
	uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 0U;

	t31 = ((x141+x142)+(x143==x144));

	if (t31 != 1950LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = 77076397106LL;
	int64_t x151 = INT64_MIN;
	int32_t x152 = -18960466;
	int64_t t32 = -13LL;

	t32 = ((x149+x150)+(x151==x152));

	if (t32 != 77076397233LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 66U;
	static volatile uint16_t x154 = 1U;
	volatile uint32_t x155 = UINT32_MAX;
	volatile uint64_t x156 = UINT64_MAX;
	volatile int32_t t33 = 6615;

	t33 = ((x153+x154)+(x155==x156));

	if (t33 != 67) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = INT64_MIN;
	uint16_t x158 = 5U;
	volatile int8_t x159 = 0;
	static int64_t x160 = -1023LL;
	static int64_t t34 = 350338325107LL;

	t34 = ((x157+x158)+(x159==x160));

	if (t34 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x161 = -1;
	static volatile uint64_t x163 = 81460477664LLU;
	int64_t x164 = INT64_MIN;
	int32_t t35 = 7887;

	t35 = ((x161+x162)+(x163==x164));

	if (t35 != 1564) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x166 = 7U;
	static int8_t x168 = -1;
	volatile int64_t t36 = -3533209276LL;

	t36 = ((x165+x166)+(x167==x168));

	if (t36 != 7LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = 2636957009LL;
	int32_t x170 = INT32_MAX;
	int16_t x171 = -1;
	int32_t x172 = INT32_MAX;
	static volatile int64_t t37 = -3258LL;

	t37 = ((x169+x170)+(x171==x172));

	if (t37 != 4784440656LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = 176U;
	int64_t x182 = -112618856420691LL;
	int32_t x184 = -5457010;
	volatile int64_t t38 = -1996LL;

	t38 = ((x181+x182)+(x183==x184));

	if (t38 != -112618856420515LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x185 = UINT8_MAX;
	static uint32_t x186 = UINT32_MAX;
	int8_t x187 = -28;
	uint64_t x188 = 400517609486556009LLU;
	volatile uint32_t t39 = 9624120U;

	t39 = ((x185+x186)+(x187==x188));

	if (t39 != 254U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = -1;
	static int32_t x191 = INT32_MAX;
	int32_t t40 = -41997;

	t40 = ((x189+x190)+(x191==x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x197 = INT8_MAX;
	static int64_t x198 = INT64_MIN;
	static uint8_t x199 = 4U;
	static int32_t x200 = INT32_MIN;
	volatile int64_t t41 = -8175033129220732LL;

	t41 = ((x197+x198)+(x199==x200));

	if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = INT8_MIN;
	volatile uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MIN;
	int16_t x204 = 15;
	int32_t t42 = -2105462;

	t42 = ((x201+x202)+(x203==x204));

	if (t42 != 65407) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x206 = INT16_MIN;
	static volatile int64_t x208 = 2031543141797381499LL;
	int32_t t43 = 0;

	t43 = ((x205+x206)+(x207==x208));

	if (t43 != 1112654) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x209 = 5030U;
	static int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;

	t44 = ((x209+x210)+(x211==x212));

	if (t44 != 4294939558U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	int32_t x216 = -10;
	static uint32_t t45 = 167201867U;

	t45 = ((x213+x214)+(x215==x216));

	if (t45 != 115U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;

	t46 = ((x221+x222)+(x223==x224));

	if (t46 != 32766U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x225 = INT8_MAX;
	uint16_t x226 = 3375U;
	volatile uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MIN;

	t47 = ((x225+x226)+(x227==x228));

	if (t47 != 3502) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x229 = 37;
	static uint32_t x231 = 16U;
	uint16_t x232 = 3U;
	uint64_t t48 = 4058501LLU;

	t48 = ((x229+x230)+(x231==x232));

	if (t48 != 339LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x237 = INT16_MIN;
	static int64_t x238 = INT64_MAX;
	int32_t x239 = INT32_MIN;
	static uint64_t x240 = 101LLU;
	static volatile int64_t t49 = 1LL;

	t49 = ((x237+x238)+(x239==x240));

	if (t49 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x241 = 6U;
	int32_t x242 = -1342260;
	int16_t x243 = -1;
	volatile uint32_t x244 = 2787U;
	static int32_t t50 = 2461;

	t50 = ((x241+x242)+(x243==x244));

	if (t50 != -1342254) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x246 = INT32_MIN;
	uint64_t t51 = 35242619915920LLU;

	t51 = ((x245+x246)+(x247==x248));

	if (t51 != 4854785086261LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -59LL;
	volatile int8_t x250 = -1;
	uint8_t x252 = 22U;
	volatile int64_t t52 = -4591778110233010LL;

	t52 = ((x249+x250)+(x251==x252));

	if (t52 != -60LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = -1769LL;
	uint32_t x259 = 1034764U;
	volatile int64_t t53 = 60LL;

	t53 = ((x257+x258)+(x259==x260));

	if (t53 != -2147485417LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = 1437217064U;
	int8_t x263 = INT8_MIN;
	volatile int64_t t54 = -97422LL;

	t54 = ((x261+x262)+(x263==x264));

	if (t54 != -9223372035417558743LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = 93389194LL;
	int64_t x267 = INT64_MIN;
	static uint32_t x268 = 24U;
	static volatile int64_t t55 = 27737321811755573LL;

	t55 = ((x265+x266)+(x267==x268));

	if (t55 != 93389066LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = INT8_MAX;
	uint16_t x270 = UINT16_MAX;
	int16_t x272 = -1;
	volatile int32_t t56 = -28029923;

	t56 = ((x269+x270)+(x271==x272));

	if (t56 != 65662) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = -1;
	static volatile uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	int8_t x276 = 17;
	volatile int32_t t57 = 62;

	t57 = ((x273+x274)+(x275==x276));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	static uint64_t x278 = 5455774498141845LLU;
	uint64_t x279 = 963720111110LLU;
	int64_t x280 = INT64_MAX;
	uint64_t t58 = 123735581977292LLU;

	t58 = ((x277+x278)+(x279==x280));

	if (t58 != 5455774498141717LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x281 = 23849U;
	int8_t x283 = INT8_MAX;
	int64_t x284 = INT64_MIN;

	t59 = ((x281+x282)+(x283==x284));

	if (t59 != -2147459799) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = 126696583LL;
	static int16_t x286 = -2;
	static int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	int64_t t60 = -2664253256856LL;

	t60 = ((x285+x286)+(x287==x288));

	if (t60 != 126696581LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x289 = INT64_MIN;
	static volatile uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = INT16_MAX;
	int64_t t61 = 1464LL;

	t61 = ((x289+x290)+(x291==x292));

	if (t61 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	uint32_t x295 = 366U;
	uint64_t x296 = UINT64_MAX;
	static int32_t t62 = -1775262;

	t62 = ((x293+x294)+(x295==x296));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;

	t63 = ((x297+x298)+(x299==x300));

	if (t63 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = INT64_MAX;
	uint64_t x302 = 752LLU;
	volatile int8_t x303 = 42;
	static int64_t x304 = INT64_MIN;

	t64 = ((x301+x302)+(x303==x304));

	if (t64 != 9223372036854776559LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x310 = INT64_MAX;
	uint32_t x311 = 121U;
	volatile int8_t x312 = INT8_MIN;
	int64_t t65 = 857LL;

	t65 = ((x309+x310)+(x311==x312));

	if (t65 != 9223372036791122060LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x313 = 341U;
	volatile int8_t x314 = INT8_MIN;
	int64_t x315 = INT64_MAX;
	int16_t x316 = -1;

	t66 = ((x313+x314)+(x315==x316));

	if (t66 != 213U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x318 = 1377U;
	static int64_t x319 = -2LL;
	static int32_t x320 = 12604604;
	volatile int32_t t67 = -103853220;

	t67 = ((x317+x318)+(x319==x320));

	if (t67 != 1376) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int8_t x322 = -1;
	int8_t x324 = INT8_MAX;

	t68 = ((x321+x322)+(x323==x324));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x327 = INT16_MAX;
	int64_t x328 = -1LL;
	static volatile int32_t t69 = -857;

	t69 = ((x325+x326)+(x327==x328));

	if (t69 != -32618) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x332 = INT64_MIN;
	int32_t t70 = -85;

	t70 = ((x329+x330)+(x331==x332));

	if (t70 != 510466) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -1;
	volatile int16_t x334 = 69;
	uint64_t x335 = 6LLU;
	static int8_t x336 = INT8_MIN;

	t71 = ((x333+x334)+(x335==x336));

	if (t71 != 68) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x337 = UINT8_MAX;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int32_t t72 = -61816;

	t72 = ((x337+x338)+(x339==x340));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = 13U;
	volatile int64_t x342 = -1LL;
	uint64_t x343 = 11495588946997639LLU;
	volatile int8_t x344 = 2;
	int64_t t73 = -36130LL;

	t73 = ((x341+x342)+(x343==x344));

	if (t73 != 12LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = 16645064;
	uint32_t x346 = 2466U;
	volatile int8_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	uint32_t t74 = 233474226U;

	t74 = ((x345+x346)+(x347==x348));

	if (t74 != 16647531U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = 1;
	int64_t x351 = INT64_MIN;
	static int64_t t75 = 287327227028388372LL;

	t75 = ((x349+x350)+(x351==x352));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x354 = -12373351LL;
	volatile int64_t x356 = INT64_MIN;
	int64_t t76 = -299526LL;

	t76 = ((x353+x354)+(x355==x356));

	if (t76 != 9223372036842402456LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = -2991404;
	int8_t x359 = INT8_MAX;

	t77 = ((x357+x358)+(x359==x360));

	if (t77 != -2991532) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 91U;
	int16_t x362 = INT16_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = -1;
	volatile int32_t t78 = 1342026;

	t78 = ((x361+x362)+(x363==x364));

	if (t78 != -32676) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = 7653;
	uint64_t x366 = 983765085407654585LLU;
	int8_t x367 = INT8_MAX;
	int8_t x368 = 1;
	uint64_t t79 = 61607861LLU;

	t79 = ((x365+x366)+(x367==x368));

	if (t79 != 983765085407662238LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x371 = -16330899717655LL;
	int64_t t80 = -1551723638300724529LL;

	t80 = ((x369+x370)+(x371==x372));

	if (t80 != 22306936LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x375 = INT64_MIN;
	static int32_t x376 = INT32_MIN;
	uint64_t t81 = 93843LLU;

	t81 = ((x373+x374)+(x375==x376));

	if (t81 != 3890240742LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 447U;
	volatile int16_t x378 = INT16_MIN;
	int64_t x379 = 4177LL;
	uint16_t x380 = 218U;
	uint32_t t82 = 202341U;

	t82 = ((x377+x378)+(x379==x380));

	if (t82 != 4294934975U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = -5;
	static int32_t x383 = -1;
	volatile int32_t x384 = INT32_MIN;
	volatile int64_t t83 = -899327496047518158LL;

	t83 = ((x381+x382)+(x383==x384));

	if (t83 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = 5671836LL;
	int32_t x386 = -5228897;
	int64_t x387 = -1LL;
	uint8_t x388 = UINT8_MAX;
	int64_t t84 = -198LL;

	t84 = ((x385+x386)+(x387==x388));

	if (t84 != 442939LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x389 = -1;
	int16_t x391 = -1;
	int16_t x392 = -10;
	volatile int32_t t85 = 5;

	t85 = ((x389+x390)+(x391==x392));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x393 = UINT16_MAX;
	int16_t x394 = -4620;
	volatile int8_t x395 = INT8_MAX;
	volatile int8_t x396 = -12;
	int32_t t86 = -382;

	t86 = ((x393+x394)+(x395==x396));

	if (t86 != 60915) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x398 = INT64_MIN;
	uint32_t x399 = 250955U;
	static volatile int8_t x400 = 17;
	int64_t t87 = 1590073810874391379LL;

	t87 = ((x397+x398)+(x399==x400));

	if (t87 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MIN;
	int64_t x403 = INT64_MIN;

	t88 = ((x401+x402)+(x403==x404));

	if (t88 != -256) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = 31;
	static volatile int16_t x407 = -166;
	static volatile int32_t t89 = -1715422;

	t89 = ((x405+x406)+(x407==x408));

	if (t89 != 158) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x409 = 1U;
	int8_t x411 = -1;
	int64_t x412 = INT64_MIN;
	uint64_t t90 = 5LLU;

	t90 = ((x409+x410)+(x411==x412));

	if (t90 != 30138LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x418 = 7719973833521719LL;
	int8_t x419 = -1;
	static int64_t x420 = -1615420492209556649LL;

	t91 = ((x417+x418)+(x419==x420));

	if (t91 != 7719973833521726LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = 1U;
	int16_t x422 = -1;
	static int8_t x423 = INT8_MIN;

	t92 = ((x421+x422)+(x423==x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x425 = UINT8_MAX;
	uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 52U;
	volatile int32_t t93 = 9;

	t93 = ((x425+x426)+(x427==x428));

	if (t93 != 65790) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x433 = 1U;
	uint32_t x434 = 6183565U;
	uint8_t x435 = 3U;
	static uint64_t x436 = 16010374366LLU;
	uint32_t t94 = 2623360U;

	t94 = ((x433+x434)+(x435==x436));

	if (t94 != 6183566U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x441 = -1;
	int8_t x442 = -1;
	volatile int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MIN;
	static int32_t t95 = 1;

	t95 = ((x441+x442)+(x443==x444));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = INT8_MIN;
	static int64_t x446 = -1LL;
	volatile int16_t x447 = INT16_MAX;
	volatile int64_t t96 = 6241LL;

	t96 = ((x445+x446)+(x447==x448));

	if (t96 != -129LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x449 = 7U;
	uint16_t x450 = 15214U;
	int32_t x451 = -1058813;
	int32_t t97 = 0;

	t97 = ((x449+x450)+(x451==x452));

	if (t97 != 15221) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x455 = INT16_MIN;
	uint64_t x456 = 27LLU;
	static volatile uint64_t t98 = 41246808LLU;

	t98 = ((x453+x454)+(x455==x456));

	if (t98 != 374419LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x457 = UINT64_MAX;
	volatile int32_t x458 = INT32_MIN;
	static volatile uint64_t t99 = 521745LLU;

	t99 = ((x457+x458)+(x459==x460));

	if (t99 != 18446744071562067967LLU) { NG(); } else { ; }
	
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

