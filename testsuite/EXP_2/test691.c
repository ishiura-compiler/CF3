#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 48;
static int64_t x5 = -1LL;
int16_t x8 = -14781;
volatile int64_t t1 = 50770753450LL;
uint64_t x22 = 66065632409442LLU;
volatile uint64_t t6 = 1225142451220172431LLU;
volatile uint32_t t7 = 3482U;
int64_t x33 = INT64_MIN;
uint64_t x37 = UINT64_MAX;
int8_t x38 = INT8_MAX;
int8_t x50 = -18;
int32_t x55 = -1;
volatile int32_t x56 = -29424069;
static volatile uint64_t x65 = 43185184761LLU;
int32_t x67 = 32758144;
static volatile int32_t t17 = -24;
uint16_t x73 = UINT16_MAX;
volatile int16_t x75 = INT16_MIN;
volatile int16_t x77 = INT16_MIN;
int64_t x100 = -7484058LL;
static int16_t x104 = 31;
uint8_t x106 = 56U;
uint64_t x137 = 387128LLU;
int8_t x139 = 1;
static int16_t x141 = -1;
int8_t x150 = INT8_MAX;
int64_t x155 = INT64_MIN;
volatile int64_t t35 = 112416843658154691LL;
volatile int64_t t36 = 12LL;
uint64_t t38 = 138405166LLU;
int64_t x186 = 4026LL;
uint32_t x190 = 1U;
int8_t x191 = 18;
int8_t x194 = INT8_MIN;
volatile int32_t x196 = INT32_MIN;
int64_t t45 = -4LL;
static uint32_t x207 = 13229U;
int32_t x212 = -348;
int64_t x214 = INT64_MIN;
uint32_t x220 = 4691069U;
volatile uint32_t x228 = 37352634U;
static volatile int64_t x229 = -1LL;
volatile int64_t t52 = -192471042LL;
uint64_t x248 = UINT64_MAX;
volatile uint32_t x255 = UINT32_MAX;
uint32_t x273 = 7661U;
static int32_t x274 = -81;
uint64_t x275 = 2733268213296LLU;
static uint64_t x276 = UINT64_MAX;
int32_t t62 = -3595174;
static uint64_t x288 = UINT64_MAX;
int16_t x306 = -30;
int32_t x307 = 1750;
uint8_t x313 = 0U;
volatile int32_t t71 = -2177;
int32_t x322 = INT32_MIN;
int8_t x324 = -1;
uint8_t x325 = 0U;
uint32_t x326 = UINT32_MAX;
uint32_t x337 = 1620793U;
static int64_t x340 = -1LL;
uint64_t x349 = 13365230051LLU;
int16_t x355 = -1;
int64_t x363 = INT64_MAX;
int64_t t83 = -13LL;
uint16_t x366 = 2U;
volatile int64_t x372 = -4135674178681LL;
volatile int16_t x375 = INT16_MAX;
volatile int64_t x379 = 427116LL;
static int8_t x382 = INT8_MAX;
uint32_t x390 = UINT32_MAX;
static uint64_t x393 = UINT64_MAX;
volatile int16_t x401 = 12283;
int16_t x403 = INT16_MAX;
int8_t x408 = -1;
static int64_t t93 = 61092LL;
int8_t x417 = -54;
static int32_t x418 = INT32_MIN;
uint32_t x419 = 350520372U;
int32_t x422 = INT32_MIN;
int64_t x425 = -1LL;
int8_t x426 = INT8_MIN;
volatile uint16_t x429 = 56U;
uint32_t t98 = 15400U;
int8_t x433 = -1;
int8_t x436 = -1;


void f0(void) {
	volatile uint32_t x1 = 64805U;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -14;
	int64_t t0 = 15161LL;

	t0 = ((x1-(x2%x3))-x4);

	if (t0 != 64771LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	volatile int8_t x7 = -1;

	t1 = ((x5-(x6%x7))-x8);

	if (t1 != 14780LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int16_t x10 = 0;
	int64_t x11 = -15LL;
	uint8_t x12 = 1U;
	volatile int64_t t2 = -7LL;

	t2 = ((x9-(x10%x11))-x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 139;
	int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	static volatile int64_t x16 = -1LL;
	volatile int64_t t3 = -21LL;

	t3 = ((x13-(x14%x15))-x16);

	if (t3 != 140LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 14U;
	uint64_t x18 = UINT64_MAX;
	uint32_t x19 = 10259046U;
	int32_t x20 = INT32_MIN;
	uint64_t t4 = 556945944LLU;

	t4 = ((x17-(x18%x19))-x20);

	if (t4 != 2137615705LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 1U;
	uint8_t x23 = UINT8_MAX;
	static int64_t x24 = INT64_MAX;
	volatile uint64_t t5 = 34733LLU;

	t5 = ((x21-(x22%x23))-x24);

	if (t5 != 9223372036854775663LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -5447197LL;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 62LLU;

	t6 = ((x25-(x26%x27))-x28);

	if (t6 != 18446744073704104365LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -28258986;
	int16_t x30 = -6589;
	volatile uint32_t x31 = 6U;
	volatile int16_t x32 = -1940;

	t7 = ((x29-(x30%x31))-x32);

	if (t7 != 4266710247U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = 100;
	static int8_t x36 = -2;
	int64_t t8 = -8805712LL;

	t8 = ((x33-(x34%x35))-x36);

	if (t8 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = -1LL;
	int16_t x40 = 509;
	volatile uint64_t t9 = 495998LLU;

	t9 = ((x37-(x38%x39))-x40);

	if (t9 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	volatile uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = -41;
	int8_t x44 = INT8_MAX;
	volatile uint64_t t10 = 75119531021323LLU;

	t10 = ((x41-(x42%x43))-x44);

	if (t10 != 18446744073709551448LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 9;
	int16_t x46 = INT16_MAX;
	int16_t x47 = 1;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t11 = 2684;

	t11 = ((x45-(x46%x47))-x48);

	if (t11 != -118) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 225022668U;
	static int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	uint32_t t12 = 28186U;

	t12 = ((x49-(x50%x51))-x52);

	if (t12 != 225022559U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 8788552368074769LL;
	uint8_t x54 = UINT8_MAX;
	volatile int64_t t13 = 0LL;

	t13 = ((x53-(x54%x55))-x56);

	if (t13 != 8788552397498838LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MIN;
	static int16_t x60 = -1;
	volatile int64_t t14 = 2030703320123093LL;

	t14 = ((x57-(x58%x59))-x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 6042U;
	static int8_t x62 = -55;
	int8_t x63 = INT8_MAX;
	static int8_t x64 = INT8_MIN;
	volatile uint32_t t15 = 5394944U;

	t15 = ((x61-(x62%x63))-x64);

	if (t15 != 6225U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = INT32_MIN;
	static int64_t x68 = INT64_MAX;
	volatile uint64_t t16 = 12328183LLU;

	t16 = ((x65-(x66%x67))-x68);

	if (t16 != 9223372080058164858LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = INT8_MIN;
	static int8_t x71 = -26;
	volatile int16_t x72 = INT16_MIN;

	t17 = ((x69-(x70%x71))-x72);

	if (t17 != 98327) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 65U;
	int32_t x76 = INT32_MIN;
	volatile uint32_t t18 = 81335U;

	t18 = ((x73-(x74%x75))-x76);

	if (t18 != 2147549118U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 31403LLU;
	volatile uint32_t x79 = UINT32_MAX;
	uint32_t x80 = 26610210U;
	static uint64_t t19 = 1280LLU;

	t19 = ((x77-(x78%x79))-x80);

	if (t19 != 18446744073682877235LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 65831488050291LL;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	static int16_t x84 = 5;
	volatile int64_t t20 = -38099757LL;

	t20 = ((x81-(x82%x83))-x84);

	if (t20 != 65831488083054LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = 145U;
	uint16_t x91 = 2557U;
	static volatile int8_t x92 = -1;
	volatile int32_t t21 = 217;

	t21 = ((x89-(x90%x91))-x92);

	if (t21 != -17) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	static uint64_t x96 = 421791852416053LLU;
	static volatile uint64_t t22 = 233815673142573LLU;

	t22 = ((x93-(x94%x95))-x96);

	if (t22 != 9222950245002359755LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 22U;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	volatile int64_t t23 = -1151658LL;

	t23 = ((x97-(x98%x99))-x100);

	if (t23 != 7484208LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile int8_t x102 = -1;
	volatile int32_t x103 = INT32_MIN;
	int32_t t24 = -29476;

	t24 = ((x101-(x102%x103))-x104);

	if (t24 != -32798) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	volatile uint32_t x107 = 430U;
	volatile int64_t x108 = -1LL;
	static int64_t t25 = -1066792096085LL;

	t25 = ((x105-(x106%x107))-x108);

	if (t25 != 4294967113LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 12U;
	int64_t x110 = INT64_MIN;
	uint64_t x111 = UINT64_MAX;
	static int32_t x112 = INT32_MIN;
	volatile uint64_t t26 = 119845265LLU;

	t26 = ((x109-(x110%x111))-x112);

	if (t26 != 9223372039002259468LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 952U;
	static uint16_t x118 = 1U;
	uint16_t x119 = 8442U;
	static int8_t x120 = INT8_MAX;
	int32_t t27 = -6;

	t27 = ((x117-(x118%x119))-x120);

	if (t27 != 824) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 10266658317194480LLU;
	int16_t x122 = INT16_MIN;
	static int32_t x123 = INT32_MIN;
	uint8_t x124 = 8U;
	uint64_t t28 = 93571571LLU;

	t28 = ((x121-(x122%x123))-x124);

	if (t28 != 10266658317227240LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MIN;
	int16_t x128 = -1;
	static volatile int64_t t29 = 147071057781737LL;

	t29 = ((x125-(x126%x127))-x128);

	if (t29 != 2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	static uint64_t x130 = UINT64_MAX;
	static volatile int8_t x131 = -62;
	int8_t x132 = INT8_MAX;
	static volatile uint64_t t30 = 3723781023967685210LLU;

	t30 = ((x129-(x130%x131))-x132);

	if (t30 != 65347LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x138 = INT8_MIN;
	uint64_t x140 = 1002405238099192LLU;
	volatile uint64_t t31 = 404294461587LLU;

	t31 = ((x137-(x138%x139))-x140);

	if (t31 != 18445741668471839552LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x142 = -163;
	uint8_t x143 = 70U;
	static volatile int8_t x144 = -27;
	int32_t t32 = 207;

	t32 = ((x141-(x142%x143))-x144);

	if (t32 != 49) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 14U;
	uint32_t x148 = UINT32_MAX;
	volatile int64_t t33 = 206530LL;

	t33 = ((x145-(x146%x147))-x148);

	if (t33 != -4294967288LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = -1;
	uint64_t x151 = 1941003LLU;
	volatile int64_t x152 = -797822663729177600LL;
	volatile uint64_t t34 = 303724242716699206LLU;

	t34 = ((x149-(x150%x151))-x152);

	if (t34 != 797822663729177472LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -36774;
	volatile int32_t x154 = INT32_MIN;
	int16_t x156 = -1;

	t35 = ((x153-(x154%x155))-x156);

	if (t35 != 2147446875LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -1;
	int64_t x158 = -264768035LL;
	volatile int8_t x159 = -1;
	volatile uint8_t x160 = 103U;

	t36 = ((x157-(x158%x159))-x160);

	if (t36 != -104LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -21LL;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	volatile uint64_t t37 = 40761LLU;

	t37 = ((x161-(x162%x163))-x164);

	if (t37 != 18446744071562067949LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = INT64_MAX;
	int64_t x170 = -1LL;
	static volatile int8_t x171 = -1;
	volatile uint64_t x172 = 359876516199153829LLU;

	t38 = ((x169-(x170%x171))-x172);

	if (t38 != 8863495520655621978LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	volatile uint64_t x174 = 161LLU;
	uint32_t x175 = 25074U;
	uint32_t x176 = UINT32_MAX;
	uint64_t t39 = 805650LLU;

	t39 = ((x173-(x174%x175))-x176);

	if (t39 != 18446744067267100512LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1569;
	uint64_t x178 = 153659339271448LLU;
	static int64_t x179 = -59704302324285LL;
	uint32_t x180 = 892118U;
	uint64_t t40 = 14185704LLU;

	t40 = ((x177-(x178%x179))-x180);

	if (t40 != 18446590414369386481LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x187 = 5LLU;
	uint8_t x188 = 1U;
	static uint64_t t41 = 6671LLU;

	t41 = ((x185-(x186%x187))-x188);

	if (t41 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = UINT8_MAX;
	int64_t x192 = INT64_MAX;
	volatile int64_t t42 = 1840388848016LL;

	t42 = ((x189-(x190%x191))-x192);

	if (t42 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = -1;
	volatile uint8_t x195 = 2U;
	volatile int32_t t43 = INT32_MAX;

	t43 = ((x193-(x194%x195))-x196);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 855U;
	int16_t x198 = INT16_MIN;
	int16_t x199 = 9;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t44 = 27;

	t44 = ((x197-(x198%x199))-x200);

	if (t44 != -2147482784) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MAX;
	int8_t x202 = -1;
	volatile int64_t x203 = INT64_MAX;
	uint8_t x204 = UINT8_MAX;

	t45 = ((x201-(x202%x203))-x204);

	if (t45 != 32513LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1;
	int64_t x206 = INT64_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t46 = -54892932633015801LL;

	t46 = ((x205-(x206%x207))-x208);

	if (t46 != -54773LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = -1;
	static int64_t x210 = 35LL;
	int32_t x211 = 2177;
	volatile int64_t t47 = -155964293LL;

	t47 = ((x209-(x210%x211))-x212);

	if (t47 != 312LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x215 = 15902539LLU;
	volatile int16_t x216 = 191;
	volatile uint64_t t48 = 26056LLU;

	t48 = ((x213-(x214%x215))-x216);

	if (t48 != 18446744073709066503LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	int32_t x219 = 76;
	uint32_t t49 = 178U;

	t49 = ((x217-(x218%x219))-x220);

	if (t49 != 4290243519U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = -14;
	int64_t x223 = INT64_MIN;
	int16_t x224 = INT16_MAX;
	int64_t t50 = -2230LL;

	t50 = ((x221-(x222%x223))-x224);

	if (t50 != -32881LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -58;
	static int64_t x226 = INT64_MIN;
	static int8_t x227 = INT8_MIN;
	volatile int64_t t51 = -345118453686LL;

	t51 = ((x225-(x226%x227))-x228);

	if (t51 != -37352692LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x230 = INT8_MAX;
	volatile uint16_t x231 = UINT16_MAX;
	static int8_t x232 = INT8_MIN;

	t52 = ((x229-(x230%x231))-x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = -5044;
	int16_t x238 = -5;
	int64_t x239 = 425472LL;
	uint8_t x240 = 36U;
	volatile int64_t t53 = 1644366000036989LL;

	t53 = ((x237-(x238%x239))-x240);

	if (t53 != -5075LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	uint64_t t54 = 384LLU;

	t54 = ((x245-(x246%x247))-x248);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 247608984965706LLU;
	int64_t x250 = -19011LL;
	volatile int32_t x251 = INT32_MIN;
	static int8_t x252 = INT8_MAX;
	volatile uint64_t t55 = 8569LLU;

	t55 = ((x249-(x250%x251))-x252);

	if (t55 != 247608984984590LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x253 = 2;
	static uint8_t x254 = UINT8_MAX;
	volatile uint32_t x256 = UINT32_MAX;
	uint32_t t56 = 1926U;

	t56 = ((x253-(x254%x255))-x256);

	if (t56 != 4294967044U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = UINT16_MAX;
	static uint8_t x258 = 1U;
	uint32_t x259 = UINT32_MAX;
	volatile int8_t x260 = INT8_MAX;
	volatile uint32_t t57 = 82572239U;

	t57 = ((x257-(x258%x259))-x260);

	if (t57 != 65407U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x261 = -966025906553526133LL;
	int16_t x262 = 6632;
	volatile int64_t x263 = -1LL;
	volatile int32_t x264 = -12774;
	static volatile int64_t t58 = -5588604757372LL;

	t58 = ((x261-(x262%x263))-x264);

	if (t58 != -966025906553513359LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = UINT32_MAX;
	volatile uint32_t x266 = UINT32_MAX;
	int8_t x267 = -2;
	int32_t x268 = 2565357;
	static volatile uint32_t t59 = 14580U;

	t59 = ((x265-(x266%x267))-x268);

	if (t59 != 4292401937U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = UINT64_MAX;
	static volatile uint64_t x272 = 23016431319921LLU;
	uint64_t t60 = 880663578061LLU;

	t60 = ((x269-(x270%x271))-x272);

	if (t60 != 18446721057278231695LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t t61 = 828292405695639LLU;

	t61 = ((x273-(x274%x275))-x276);

	if (t61 != 18446742440220099567LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x277 = 74U;
	volatile uint8_t x278 = 13U;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = 3;

	t62 = ((x277-(x278%x279))-x280);

	if (t62 != 58) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = -1;
	uint32_t x282 = 10765930U;
	static int16_t x283 = INT16_MAX;
	static volatile uint16_t x284 = 9010U;
	uint32_t t63 = 1454078U;

	t63 = ((x281-(x282%x283))-x284);

	if (t63 != 4294939931U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 28U;
	int32_t x286 = INT32_MAX;
	uint8_t x287 = 28U;
	static volatile uint64_t t64 = 775LLU;

	t64 = ((x285-(x286%x287))-x288);

	if (t64 != 14LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int64_t t65 = -1260833LL;

	t65 = ((x289-(x290%x291))-x292);

	if (t65 != -32640LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x293 = -1;
	int16_t x294 = 115;
	int64_t x295 = 23LL;
	int16_t x296 = INT16_MAX;
	volatile int64_t t66 = -145116673723238LL;

	t66 = ((x293-(x294%x295))-x296);

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x297 = -67850241;
	volatile int64_t x298 = INT64_MIN;
	static volatile int16_t x299 = INT16_MAX;
	volatile int64_t x300 = 4223277346041581918LL;
	static volatile int64_t t67 = 4089768801LL;

	t67 = ((x297-(x298%x299))-x300);

	if (t67 != -4223277346109432151LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	volatile int8_t x303 = -1;
	int8_t x304 = INT8_MAX;
	int32_t t68 = 26;

	t68 = ((x301-(x302%x303))-x304);

	if (t68 != 65408) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x305 = -1;
	int16_t x308 = INT16_MAX;
	int32_t t69 = -234071398;

	t69 = ((x305-(x306%x307))-x308);

	if (t69 != -32738) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = 58U;
	int16_t x310 = INT16_MAX;
	static uint32_t x311 = 3081U;
	int64_t x312 = INT64_MAX;
	static int64_t t70 = 202622907LL;

	t70 = ((x309-(x310%x311))-x312);

	if (t70 != -9223372032559810410LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x314 = 819599;
	static uint16_t x315 = 2030U;
	volatile uint8_t x316 = 19U;

	t71 = ((x313-(x314%x315))-x316);

	if (t71 != -1528) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x317 = 17U;
	uint16_t x318 = UINT16_MAX;
	uint16_t x319 = 711U;
	volatile int64_t x320 = INT64_MIN;
	static int64_t t72 = 412LL;

	t72 = ((x317-(x318%x319))-x320);

	if (t72 != 9223372036854775702LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x321 = INT16_MIN;
	int64_t x323 = 1035LL;
	volatile int64_t t73 = 545LL;

	t73 = ((x321-(x322%x323))-x324);

	if (t73 != -32324LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x327 = 155U;
	int16_t x328 = -1;
	volatile uint32_t t74 = 3U;

	t74 = ((x325-(x326%x327))-x328);

	if (t74 != 4294967232U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -17;
	int16_t x330 = 4;
	uint16_t x331 = 14010U;
	int8_t x332 = INT8_MAX;
	int32_t t75 = -16319837;

	t75 = ((x329-(x330%x331))-x332);

	if (t75 != -148) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MIN;
	uint64_t x335 = 44154564339913LLU;
	volatile int16_t x336 = INT16_MAX;
	uint64_t t76 = 281111034336899LLU;

	t76 = ((x333-(x334%x335))-x336);

	if (t76 != 18446717271671559024LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MIN;
	static volatile int64_t t77 = -167884LL;

	t77 = ((x337-(x338%x339))-x340);

	if (t77 != 1620794LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x342 = 22465232LL;
	static int32_t x343 = INT32_MAX;
	int64_t x344 = -1LL;
	int64_t t78 = -589429252963LL;

	t78 = ((x341-(x342%x343))-x344);

	if (t78 != -22399696LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = 5986085;
	static volatile uint32_t x346 = UINT32_MAX;
	static uint64_t x347 = 111797273LLU;
	int8_t x348 = 10;
	volatile uint64_t t79 = 23412408566222374LLU;

	t79 = ((x345-(x346%x347))-x348);

	if (t79 != 18446744073668866770LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;
	uint64_t t80 = 3478580499518LLU;

	t80 = ((x349-(x350%x351))-x352);

	if (t80 != 6922779109LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x353 = -93;
	int64_t x354 = -13961066635676634LL;
	static uint64_t x356 = 301496373789LLU;
	static uint64_t t81 = 3780157868647670LLU;

	t81 = ((x353-(x354%x355))-x356);

	if (t81 != 18446743772213177734LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MAX;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = UINT64_MAX;
	static volatile uint64_t t82 = 266053177LLU;

	t82 = ((x357-(x358%x359))-x360);

	if (t82 != 255LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x361 = 29U;
	int32_t x362 = 787;
	static uint32_t x364 = UINT32_MAX;

	t83 = ((x361-(x362%x363))-x364);

	if (t83 != -4294968053LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = -8744528309059669LL;
	volatile uint32_t x367 = 44098U;
	int32_t x368 = INT32_MAX;
	volatile int64_t t84 = -454813022LL;

	t84 = ((x365-(x366%x367))-x368);

	if (t84 != -8744530456543318LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x369 = 20U;
	int32_t x370 = INT32_MIN;
	int32_t x371 = -38;
	int64_t t85 = -16701454347807LL;

	t85 = ((x369-(x370%x371))-x372);

	if (t85 != 4135674178723LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x373 = 16130U;
	volatile uint8_t x374 = 40U;
	uint16_t x376 = 28599U;
	static volatile int32_t t86 = 117617;

	t86 = ((x373-(x374%x375))-x376);

	if (t86 != -12509) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = -1;
	static uint8_t x378 = UINT8_MAX;
	int64_t x380 = -1LL;
	int64_t t87 = 7651752066563LL;

	t87 = ((x377-(x378%x379))-x380);

	if (t87 != -255LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x381 = INT16_MIN;
	static volatile int8_t x383 = 45;
	static uint32_t x384 = UINT32_MAX;
	volatile uint32_t t88 = 7026063U;

	t88 = ((x381-(x382%x383))-x384);

	if (t88 != 4294934492U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x389 = INT16_MIN;
	static volatile uint64_t x391 = 9091LLU;
	int32_t x392 = -74063;
	static uint64_t t89 = 12911070783LLU;

	t89 = ((x389-(x390%x391))-x392);

	if (t89 != 35131LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x394 = INT32_MAX;
	volatile uint8_t x395 = 2U;
	static int64_t x396 = 387LL;
	static uint64_t t90 = 538LLU;

	t90 = ((x393-(x394%x395))-x396);

	if (t90 != 18446744073709551227LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = 0U;
	volatile int16_t x398 = 6;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	volatile int64_t t91 = 7779195938948LL;

	t91 = ((x397-(x398%x399))-x400);

	if (t91 != 32762LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x402 = UINT64_MAX;
	static int32_t x404 = INT32_MIN;
	volatile uint64_t t92 = 1071930673503255547LLU;

	t92 = ((x401-(x402%x403))-x404);

	if (t92 != 2147495916LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = -1564;
	int64_t x406 = INT64_MIN;
	volatile int64_t x407 = -1LL;

	t93 = ((x405-(x406%x407))-x408);

	if (t93 != -1563LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = -1;
	static uint64_t t94 = 996982LLU;

	t94 = ((x413-(x414%x415))-x416);

	if (t94 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x420 = UINT32_MAX;
	volatile uint32_t t95 = 9565858U;

	t95 = ((x417-(x418%x419))-x420);

	if (t95 != 4250605827U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -1;
	uint32_t x423 = UINT32_MAX;
	volatile int16_t x424 = -1;
	volatile uint32_t t96 = 4493454U;

	t96 = ((x421-(x422%x423))-x424);

	if (t96 != 2147483648U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x427 = -28;
	int8_t x428 = INT8_MAX;
	volatile int64_t t97 = -16108349970LL;

	t97 = ((x425-(x426%x427))-x428);

	if (t97 != -112LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x430 = 27787U;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;

	t98 = ((x429-(x430%x431))-x432);

	if (t98 != 32577U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x434 = 966285091;
	static uint8_t x435 = 5U;
	volatile int32_t t99 = -7229;

	t99 = ((x433-(x434%x435))-x436);

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

