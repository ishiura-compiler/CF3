#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 2;
int32_t x3 = INT32_MIN;
int16_t x5 = INT16_MAX;
int32_t x8 = -216288;
volatile int32_t t1 = -1;
static volatile int32_t t4 = -568742;
int64_t x23 = 41625845LL;
int8_t x24 = INT8_MIN;
int8_t x26 = -1;
static int32_t t6 = 5974;
static int8_t x36 = INT8_MIN;
uint32_t x58 = 1440U;
static volatile int32_t t14 = 164007065;
volatile uint64_t x67 = UINT64_MAX;
int16_t x80 = INT16_MIN;
static volatile int32_t x82 = INT32_MAX;
uint64_t x85 = UINT64_MAX;
static int32_t x90 = INT32_MIN;
static uint32_t x91 = UINT32_MAX;
int16_t x96 = 11994;
int64_t x97 = 128131662151863LL;
uint16_t x105 = UINT16_MAX;
int16_t x113 = INT16_MAX;
int8_t x114 = 4;
uint16_t x121 = 1U;
volatile int64_t x122 = -34409827669014LL;
int32_t x134 = INT32_MAX;
uint16_t x136 = 2U;
static int8_t x137 = -7;
static volatile int8_t x140 = -2;
uint32_t x149 = 30847U;
int16_t x150 = 0;
int64_t x154 = INT64_MAX;
int32_t t38 = -20;
int32_t x158 = -1;
static uint32_t x164 = UINT32_MAX;
int32_t x166 = INT32_MIN;
volatile int32_t t41 = 1200532;
static int8_t x169 = INT8_MAX;
static int32_t x171 = INT32_MIN;
int32_t x180 = INT32_MIN;
int8_t x181 = -5;
volatile int32_t t45 = -227722;
int16_t x194 = INT16_MIN;
uint16_t x199 = UINT16_MAX;
int8_t x206 = INT8_MIN;
int8_t x216 = INT8_MAX;
volatile int8_t x217 = INT8_MIN;
int16_t x220 = -1;
int32_t t55 = 3;
static volatile int32_t t56 = 152315104;
int32_t x236 = -1;
static int64_t x237 = INT64_MIN;
volatile int32_t t59 = 1019419;
int32_t t61 = -418;
int8_t x249 = INT8_MIN;
int32_t t62 = 81346;
int8_t x253 = -1;
int16_t x260 = 1;
int8_t x268 = -1;
volatile int32_t t67 = 131159203;
volatile int32_t x276 = -1;
int64_t x278 = 482520LL;
volatile uint32_t x280 = 935071168U;
static uint64_t x282 = 0LLU;
static int32_t x288 = -1;
int16_t x289 = 4483;
int16_t x292 = INT16_MIN;
uint32_t x294 = UINT32_MAX;
int32_t t73 = 704125541;
static uint32_t x297 = 23U;
static int64_t x298 = -265916597276LL;
static int32_t x300 = 6;
static int8_t x301 = -1;
volatile uint32_t x308 = 242855383U;
static int64_t x311 = 740330005305014LL;
volatile int16_t x312 = INT16_MIN;
uint8_t x316 = 0U;
int32_t t78 = 20;
int16_t x318 = -1;
static volatile int64_t x319 = INT64_MAX;
uint32_t x320 = UINT32_MAX;
static int32_t x340 = INT32_MIN;
volatile int32_t t84 = -18018612;
int32_t x341 = INT32_MAX;
int16_t x343 = INT16_MIN;
volatile int32_t t85 = 95;
static volatile int32_t t89 = 762;
volatile uint64_t x366 = 12009077557386152LLU;
int32_t t91 = 2291432;
int32_t x372 = INT32_MAX;
static volatile int8_t x374 = INT8_MAX;
uint32_t x378 = UINT32_MAX;
int8_t x381 = INT8_MIN;
static volatile int8_t x388 = INT8_MIN;
uint8_t x394 = UINT8_MAX;
volatile uint64_t x395 = 18319LLU;
int64_t x400 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 18U;
	static uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 8328;

	t0 = (((x1==x2)*x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = -1;
	int16_t x7 = -191;

	t1 = (((x5==x6)*x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	static uint64_t x12 = 137609363119858LLU;
	int32_t t2 = 40319761;

	t2 = (((x9==x10)*x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = 191;
	int16_t x15 = INT16_MAX;
	int8_t x16 = 25;
	volatile int32_t t3 = -3238;

	t3 = (((x13==x14)*x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int16_t x18 = 1;
	volatile int64_t x19 = INT64_MAX;
	int32_t x20 = INT32_MIN;

	t4 = (((x17==x18)*x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = UINT64_MAX;
	int32_t t5 = 5423596;

	t5 = (((x21==x22)*x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 2226668;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;

	t6 = (((x25==x26)*x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 2858007U;
	volatile int32_t x30 = INT32_MAX;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -1;

	t7 = (((x29==x30)*x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	volatile uint32_t x34 = 207633U;
	int32_t x35 = -6513;
	int32_t t8 = -5692309;

	t8 = (((x33==x34)*x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MAX;
	int32_t x39 = INT32_MAX;
	static int32_t x40 = -1;
	volatile int32_t t9 = 34676;

	t9 = (((x37==x38)*x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 17;
	volatile int8_t x42 = INT8_MIN;
	static uint16_t x43 = 24U;
	int32_t x44 = -2005;
	static int32_t t10 = 768474526;

	t10 = (((x41==x42)*x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int8_t x46 = -1;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 5178U;
	static int32_t t11 = 168;

	t11 = (((x45==x46)*x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 11U;
	volatile int16_t x52 = -6017;
	static int32_t t12 = 939;

	t12 = (((x49==x50)*x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = 1;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = 1;

	t13 = (((x53==x54)*x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	volatile uint16_t x59 = 4U;
	uint8_t x60 = UINT8_MAX;

	t14 = (((x57==x58)*x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MAX;
	volatile int32_t x63 = 135;
	int64_t x64 = INT64_MAX;
	volatile int32_t t15 = -28347;

	t15 = (((x61==x62)*x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 7452;
	int32_t x66 = -146139;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 27;

	t16 = (((x65==x66)*x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile uint16_t x70 = 12389U;
	static int8_t x71 = -50;
	int8_t x72 = -14;
	static int32_t t17 = 38;

	t17 = (((x69==x70)*x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = INT16_MAX;
	static uint32_t x76 = UINT32_MAX;
	int32_t t18 = -3638036;

	t18 = (((x73==x74)*x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t t19 = 495206;

	t19 = (((x77==x78)*x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = 1U;
	int32_t t20 = -48;

	t20 = (((x81==x82)*x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 0LL;
	uint8_t x87 = UINT8_MAX;
	uint32_t x88 = 3317472U;
	int32_t t21 = -12;

	t21 = (((x85==x86)*x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	uint8_t x92 = 0U;
	int32_t t22 = 706946;

	t22 = (((x89==x90)*x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int16_t x95 = -1;
	volatile int32_t t23 = 158;

	t23 = (((x93==x94)*x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 1U;
	static uint64_t x100 = 156189913LLU;
	volatile int32_t t24 = 318311162;

	t24 = (((x97==x98)*x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 126U;
	int16_t x103 = -1;
	int32_t x104 = INT32_MAX;
	int32_t t25 = -1680;

	t25 = (((x101==x102)*x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 0U;
	static int8_t x107 = 2;
	int64_t x108 = 7LL;
	int32_t t26 = -490;

	t26 = (((x105==x106)*x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -4051001326566378LL;
	uint32_t x110 = 14075U;
	static int64_t x111 = INT64_MAX;
	int64_t x112 = 3914400608153276LL;
	int32_t t27 = 1;

	t27 = (((x109==x110)*x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x115 = 15U;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 6;

	t28 = (((x113==x114)*x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MIN;
	volatile uint32_t x119 = 1380U;
	int16_t x120 = 1;
	int32_t t29 = -13855615;

	t29 = (((x117==x118)*x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = -1;
	volatile int32_t x124 = -3245;
	int32_t t30 = -150338;

	t30 = (((x121==x122)*x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 71U;
	int8_t x126 = -1;
	volatile int64_t x127 = INT64_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	int32_t t31 = 1;

	t31 = (((x125==x126)*x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 435U;
	uint8_t x130 = 2U;
	int64_t x131 = -607LL;
	static int8_t x132 = INT8_MIN;
	int32_t t32 = -126356307;

	t32 = (((x129==x130)*x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static int64_t x135 = 208763LL;
	int32_t t33 = 22;

	t33 = (((x133==x134)*x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x138 = 2400U;
	uint8_t x139 = UINT8_MAX;
	int32_t t34 = -1550;

	t34 = (((x137==x138)*x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -2031;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = UINT64_MAX;
	volatile int32_t x144 = -1;
	static volatile int32_t t35 = 3905;

	t35 = (((x141==x142)*x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 12503U;
	static volatile int32_t x146 = INT32_MAX;
	uint64_t x147 = 236291557128779500LLU;
	volatile int32_t x148 = INT32_MIN;
	static int32_t t36 = -13077;

	t36 = (((x145==x146)*x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x151 = INT8_MAX;
	int32_t x152 = -4;
	volatile int32_t t37 = 91;

	t37 = (((x149==x150)*x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x155 = -1;
	int16_t x156 = -1;

	t38 = (((x153==x154)*x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 20U;
	int16_t x159 = 2;
	volatile int64_t x160 = -1399692487972044901LL;
	volatile int32_t t39 = -10410;

	t39 = (((x157==x158)*x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -2;
	int64_t x162 = INT64_MIN;
	int8_t x163 = -1;
	int32_t t40 = -165007660;

	t40 = (((x161==x162)*x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int64_t x167 = 3719087LL;
	volatile int32_t x168 = -128615;

	t41 = (((x165==x166)*x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = 20188U;
	uint16_t x172 = 7U;
	volatile int32_t t42 = 56948;

	t42 = (((x169==x170)*x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = 16;
	int16_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = -4844791740856LL;
	volatile int32_t t43 = 9;

	t43 = (((x173==x174)*x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	static int16_t x179 = INT16_MAX;
	int32_t t44 = -3630026;

	t44 = (((x177==x178)*x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MAX;
	static int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;

	t45 = (((x181==x182)*x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 20U;
	uint16_t x186 = 84U;
	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -132;

	t46 = (((x185==x186)*x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	static volatile int32_t x192 = INT32_MIN;
	static int32_t t47 = 996825;

	t47 = (((x189==x190)*x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 646849287181138716LLU;
	static int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;
	int32_t t48 = 1343960;

	t48 = (((x193==x194)*x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	volatile uint8_t x198 = 1U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -79;

	t49 = (((x197==x198)*x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = -46145607LL;
	int16_t x203 = 13458;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = 995517423;

	t50 = (((x201==x202)*x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int16_t x207 = INT16_MAX;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 67923;

	t51 = (((x205==x206)*x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 453197953;
	int8_t x210 = -1;
	volatile int8_t x211 = -3;
	static int16_t x212 = -61;
	volatile int32_t t52 = 3305;

	t52 = (((x209==x210)*x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = -1LL;
	uint32_t x215 = 30U;
	int32_t t53 = -7648;

	t53 = (((x213==x214)*x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 10U;
	int32_t t54 = -29826;

	t54 = (((x217==x218)*x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 237U;
	int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MAX;
	static int32_t x224 = INT32_MAX;

	t55 = (((x221==x222)*x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 1369103171169474LLU;
	int16_t x228 = 5777;

	t56 = (((x225==x226)*x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MAX;
	int8_t x230 = INT8_MIN;
	uint8_t x231 = 1U;
	int16_t x232 = INT16_MIN;
	static int32_t t57 = 1074530;

	t57 = (((x229==x230)*x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 0;
	int16_t x234 = -4;
	uint64_t x235 = UINT64_MAX;
	int32_t t58 = 3441450;

	t58 = (((x233==x234)*x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 4U;
	int16_t x239 = -22;
	uint64_t x240 = 14275998LLU;

	t59 = (((x237==x238)*x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = 6451476990946LL;
	static int64_t x243 = -1LL;
	int32_t x244 = -1;
	int32_t t60 = -257;

	t60 = (((x241==x242)*x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MIN;
	uint8_t x246 = 4U;
	uint16_t x247 = 1677U;
	int32_t x248 = 33893;

	t61 = (((x245==x246)*x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	static uint8_t x251 = 3U;
	int32_t x252 = -1;

	t62 = (((x249==x250)*x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = -1;
	uint32_t x256 = 107U;
	static int32_t t63 = -3659;

	t63 = (((x253==x254)*x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	static uint16_t x258 = 671U;
	int8_t x259 = INT8_MIN;
	volatile int32_t t64 = -1;

	t64 = (((x257==x258)*x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -1LL;
	int16_t x262 = INT16_MIN;
	volatile int16_t x263 = -1;
	int64_t x264 = -10057197720677075LL;
	int32_t t65 = -1060941641;

	t65 = (((x261==x262)*x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 31U;
	static volatile int8_t x266 = INT8_MIN;
	static uint8_t x267 = 109U;
	int32_t t66 = -2021;

	t66 = (((x265==x266)*x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 19846LL;
	volatile int64_t x270 = 2692855330237LL;
	int8_t x271 = -1;
	static volatile uint64_t x272 = 47121612523LLU;

	t67 = (((x269==x270)*x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 4289U;
	uint32_t x274 = 13U;
	int16_t x275 = INT16_MIN;
	static volatile int32_t t68 = -554;

	t68 = (((x273==x274)*x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	int64_t x279 = -1995472260223921LL;
	volatile int32_t t69 = 57936;

	t69 = (((x277==x278)*x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int64_t x283 = 2000592LL;
	volatile int64_t x284 = -1LL;
	volatile int32_t t70 = 31;

	t70 = (((x281==x282)*x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = 1LL;
	volatile uint16_t x286 = 3949U;
	volatile int16_t x287 = -1;
	int32_t t71 = -333219;

	t71 = (((x285==x286)*x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = -1;
	volatile uint8_t x291 = UINT8_MAX;
	volatile int32_t t72 = -32568;

	t72 = (((x289==x290)*x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 6288U;
	int16_t x295 = -1;
	volatile int8_t x296 = -1;

	t73 = (((x293==x294)*x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x299 = 0U;
	static int32_t t74 = -388;

	t74 = (((x297==x298)*x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t75 = 1116089;

	t75 = (((x301==x302)*x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	volatile uint32_t x307 = 12U;
	volatile int32_t t76 = 157488;

	t76 = (((x305==x306)*x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = UINT64_MAX;
	volatile uint32_t x310 = 392833U;
	int32_t t77 = -139835;

	t77 = (((x309==x310)*x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = -1;
	int64_t x315 = 8963932LL;

	t78 = (((x313==x314)*x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int32_t t79 = 1000721727;

	t79 = (((x317==x318)*x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = 26;
	int8_t x322 = -26;
	volatile uint16_t x323 = UINT16_MAX;
	volatile uint8_t x324 = 1U;
	int32_t t80 = -2;

	t80 = (((x321==x322)*x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 19722U;
	int8_t x326 = -1;
	uint32_t x327 = 4213865U;
	uint32_t x328 = 1108U;
	volatile int32_t t81 = 14;

	t81 = (((x325==x326)*x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = -939490245LL;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -24002;

	t82 = (((x329==x330)*x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 102U;
	int8_t x334 = INT8_MIN;
	static volatile int16_t x335 = -1;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -149;

	t83 = (((x333==x334)*x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint16_t x338 = 8554U;
	static uint8_t x339 = UINT8_MAX;

	t84 = (((x337==x338)*x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	int8_t x344 = -1;

	t85 = (((x341==x342)*x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x346 = INT32_MAX;
	volatile uint16_t x347 = 2U;
	uint8_t x348 = 4U;
	volatile int32_t t86 = -1;

	t86 = (((x345==x346)*x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = INT32_MAX;
	static int16_t x350 = -1;
	uint32_t x351 = 49469677U;
	volatile int64_t x352 = 2113716LL;
	volatile int32_t t87 = -285380111;

	t87 = (((x349==x350)*x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 14U;
	uint8_t x354 = 1U;
	int16_t x355 = INT16_MAX;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = -12824;

	t88 = (((x353==x354)*x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 10;
	uint16_t x358 = 179U;
	int16_t x359 = -1867;
	static int16_t x360 = INT16_MIN;

	t89 = (((x357==x358)*x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	int8_t x364 = INT8_MAX;
	volatile int32_t t90 = 3836413;

	t90 = (((x361==x362)*x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile int8_t x367 = INT8_MAX;
	volatile int32_t x368 = INT32_MIN;

	t91 = (((x365==x366)*x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -1LL;
	int32_t x370 = 0;
	static volatile int8_t x371 = -1;
	int32_t t92 = -1895;

	t92 = (((x369==x370)*x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MAX;
	volatile uint16_t x375 = UINT16_MAX;
	volatile int64_t x376 = INT64_MIN;
	static volatile int32_t t93 = 300559;

	t93 = (((x373==x374)*x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 117U;
	static int32_t x379 = INT32_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = -171603;

	t94 = (((x377==x378)*x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x382 = INT32_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 0;

	t95 = (((x381==x382)*x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 32032591;
	int32_t x386 = -61638;
	volatile int8_t x387 = -18;
	int32_t t96 = 1;

	t96 = (((x385==x386)*x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 258211890543153LLU;
	uint16_t x390 = 41U;
	int64_t x391 = -78LL;
	static uint32_t x392 = 5845U;
	int32_t t97 = 57576043;

	t97 = (((x389==x390)*x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x393 = INT64_MAX;
	int32_t x396 = -26760604;
	volatile int32_t t98 = -33483;

	t98 = (((x393==x394)*x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = -1;
	volatile int32_t x399 = INT32_MAX;
	static int32_t t99 = 0;

	t99 = (((x397==x398)*x399)<=x400);

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

