#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 1;
static int8_t x13 = INT8_MIN;
uint16_t x21 = 2U;
volatile int32_t t5 = 209669788;
static int8_t x27 = INT8_MIN;
int8_t x31 = -1;
int16_t x33 = INT16_MIN;
uint64_t x34 = UINT64_MAX;
volatile int8_t x41 = -1;
int16_t x46 = -1;
uint32_t x67 = 465U;
volatile int32_t x70 = -1;
volatile int32_t t18 = -218;
uint16_t x78 = 235U;
int8_t x81 = INT8_MIN;
int8_t x82 = INT8_MIN;
static int8_t x95 = INT8_MIN;
static volatile uint32_t x96 = UINT32_MAX;
int32_t t23 = 204130037;
uint16_t x100 = UINT16_MAX;
static uint64_t x104 = 30647653817851945LLU;
static volatile uint8_t x113 = UINT8_MAX;
int64_t x129 = 1899800LL;
volatile int64_t x131 = INT64_MIN;
int8_t x143 = INT8_MAX;
int16_t x144 = INT16_MIN;
int8_t x145 = INT8_MAX;
volatile int32_t t36 = -15468;
int32_t t37 = 79;
int64_t x155 = INT64_MIN;
int8_t x164 = INT8_MIN;
volatile int8_t x165 = 44;
volatile int8_t x167 = 0;
int8_t x179 = -31;
int8_t x181 = -1;
static uint64_t x183 = 2147782934874185LLU;
volatile int16_t x186 = 6852;
static volatile int32_t x187 = -1;
int32_t t46 = 38119308;
int64_t x191 = INT64_MIN;
volatile uint64_t x192 = UINT64_MAX;
volatile int32_t t48 = 1;
int64_t x205 = 133089448LL;
int32_t t51 = -128303231;
int16_t x211 = -1;
uint8_t x214 = 114U;
int32_t x216 = -1;
volatile int16_t x222 = -5;
uint16_t x226 = 2U;
static volatile int64_t x227 = INT64_MIN;
int32_t t59 = -548624;
static int32_t x241 = INT32_MIN;
static int16_t x247 = -1;
uint64_t x250 = UINT64_MAX;
int16_t x254 = INT16_MIN;
static volatile int8_t x259 = INT8_MIN;
int32_t t64 = -59;
int16_t x261 = 1;
int64_t x273 = -1LL;
uint64_t x275 = 9456636362LLU;
volatile int32_t t68 = 247;
volatile uint64_t x280 = UINT64_MAX;
int32_t t69 = -844651070;
int64_t x283 = INT64_MAX;
static volatile int16_t x288 = 0;
int32_t t71 = 60;
static int16_t x289 = -17;
static int32_t t73 = -1;
int32_t x298 = INT32_MAX;
int16_t x304 = 5436;
int8_t x305 = -1;
volatile int16_t x311 = -1;
int64_t x314 = -1LL;
static uint16_t x321 = 14U;
int8_t x328 = -1;
static volatile int32_t t85 = 1285;
int32_t x349 = INT32_MAX;
int32_t x366 = INT32_MAX;
int16_t x367 = INT16_MIN;
int64_t x379 = -1LL;
int64_t x381 = -1LL;
int8_t x383 = -1;
uint8_t x387 = UINT8_MAX;
uint16_t x388 = 346U;
volatile uint8_t x390 = 60U;
int64_t x400 = INT64_MIN;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = 798047LL;
	int16_t x3 = -1;
	volatile uint32_t x4 = 48U;
	static volatile int32_t t0 = -3;

	t0 = ((x1<=x2)>>(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	static int64_t x7 = -1LL;
	int64_t x8 = INT64_MIN;

	t1 = ((x5<=x6)>>(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile uint32_t x10 = UINT32_MAX;
	int16_t x11 = INT16_MAX;
	int64_t x12 = -90346LL;
	int32_t t2 = -189620;

	t2 = ((x9<=x10)>>(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 5;
	uint16_t x15 = 8017U;
	int32_t x16 = 514636;
	int32_t t3 = -1834;

	t3 = ((x13<=x14)>>(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -566;
	static uint8_t x18 = UINT8_MAX;
	int16_t x19 = 2370;
	int64_t x20 = INT64_MIN;
	static int32_t t4 = -35118612;

	t4 = ((x17<=x18)>>(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -339;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 17U;

	t5 = ((x21<=x22)>>(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int8_t x26 = -1;
	static uint8_t x28 = 40U;
	int32_t t6 = 802;

	t6 = ((x25<=x26)>>(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 212073312U;
	uint16_t x30 = 1U;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 1;

	t7 = ((x29<=x30)>>(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 493201759;

	t8 = ((x33<=x34)>>(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 5541U;
	volatile int16_t x38 = -1;
	int64_t x39 = -1LL;
	int8_t x40 = 7;
	int32_t t9 = 516;

	t9 = ((x37<=x38)>>(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = INT16_MAX;
	static uint32_t x43 = 242738707U;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -113886952;

	t10 = ((x41<=x42)>>(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint64_t x47 = 1LLU;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -17;

	t11 = ((x45<=x46)>>(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static int16_t x50 = INT16_MIN;
	int16_t x51 = -210;
	uint16_t x52 = 141U;
	static volatile int32_t t12 = 100135705;

	t12 = ((x49<=x50)>>(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	uint8_t x54 = 41U;
	int64_t x55 = INT64_MAX;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 14152;

	t13 = ((x53<=x54)>>(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 9U;
	int64_t x59 = 1308170197133380LL;
	int32_t x60 = -7238;
	volatile int32_t t14 = -184495;

	t14 = ((x57<=x58)>>(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MAX;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = -6461;

	t15 = ((x61<=x62)>>(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 8;
	static volatile int64_t x66 = INT64_MIN;
	int32_t x68 = 1;
	int32_t t16 = -3;

	t16 = ((x65<=x66)>>(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static uint16_t x71 = UINT16_MAX;
	uint8_t x72 = UINT8_MAX;
	static int32_t t17 = -7;

	t17 = ((x69<=x70)>>(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	volatile uint16_t x74 = 10U;
	uint8_t x75 = 31U;
	uint64_t x76 = UINT64_MAX;

	t18 = ((x73<=x74)>>(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	volatile uint32_t x79 = UINT32_MAX;
	uint8_t x80 = 0U;
	volatile int32_t t19 = -29919754;

	t19 = ((x77<=x78)>>(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = 1;
	int8_t x84 = -1;
	int32_t t20 = 126;

	t20 = ((x81<=x82)>>(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	int32_t x86 = 77;
	int16_t x87 = -4;
	int64_t x88 = INT64_MAX;
	int32_t t21 = -80423;

	t21 = ((x85<=x86)>>(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MIN;
	uint64_t x90 = 246658505618869346LLU;
	uint32_t x91 = 472710162U;
	int64_t x92 = INT64_MAX;
	int32_t t22 = -136;

	t22 = ((x89<=x90)>>(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	static int16_t x94 = INT16_MIN;

	t23 = ((x93<=x94)>>(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	volatile int16_t x99 = INT16_MIN;
	volatile int32_t t24 = 6324;

	t24 = ((x97<=x98)>>(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 168939363121412LL;
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MIN;
	int32_t t25 = -13071555;

	t25 = ((x101<=x102)>>(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	volatile int32_t x107 = -230845;
	int16_t x108 = INT16_MAX;
	int32_t t26 = -1;

	t26 = ((x105<=x106)>>(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	uint64_t x112 = 4620LLU;
	volatile int32_t t27 = -11;

	t27 = ((x109<=x110)>>(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = 0U;
	volatile int64_t x115 = -1LL;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 13824712;

	t28 = ((x113<=x114)>>(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -4358284750LL;
	int16_t x118 = -1;
	static int8_t x119 = INT8_MAX;
	volatile int32_t x120 = -579125404;
	volatile int32_t t29 = -50;

	t29 = ((x117<=x118)>>(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 21U;
	uint8_t x122 = 6U;
	uint16_t x123 = 0U;
	int64_t x124 = 388079LL;
	volatile int32_t t30 = -13394450;

	t30 = ((x121<=x122)>>(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MAX;
	volatile int64_t x127 = INT64_MIN;
	uint32_t x128 = 78750U;
	volatile int32_t t31 = 3;

	t31 = ((x125<=x126)>>(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	volatile uint16_t x132 = 90U;
	int32_t t32 = -3973;

	t32 = ((x129<=x130)>>(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = 36LL;
	int32_t x134 = INT32_MIN;
	uint32_t x135 = 221U;
	int64_t x136 = 231586LL;
	static int32_t t33 = -2417388;

	t33 = ((x133<=x134)>>(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -50;
	int16_t x139 = 11;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = 3;

	t34 = ((x137<=x138)>>(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	static volatile int8_t x142 = INT8_MIN;
	int32_t t35 = -2421299;

	t35 = ((x141<=x142)>>(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MAX;
	static uint16_t x147 = 15U;
	static int32_t x148 = -425052;

	t36 = ((x145<=x146)>>(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MIN;
	static int8_t x151 = 1;
	int8_t x152 = INT8_MIN;

	t37 = ((x149<=x150)>>(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1782313;
	int8_t x154 = -1;
	int8_t x156 = -1;
	static int32_t t38 = 300459;

	t38 = ((x153<=x154)>>(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -2113873LL;
	uint32_t x158 = 131442U;
	volatile uint8_t x159 = 88U;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -3747978;

	t39 = ((x157<=x158)>>(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 50U;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = 1LLU;
	volatile int32_t t40 = 7462;

	t40 = ((x161<=x162)>>(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = 7268;
	static volatile int8_t x168 = INT8_MIN;
	static int32_t t41 = -1016203873;

	t41 = ((x165<=x166)>>(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 197102934377787984LL;
	uint32_t x170 = 23902025U;
	volatile int64_t x171 = -2826146LL;
	int8_t x172 = -1;
	static int32_t t42 = -210;

	t42 = ((x169<=x170)>>(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 66;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	int16_t x176 = 14;
	volatile int32_t t43 = 0;

	t43 = ((x173<=x174)>>(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MAX;
	volatile int8_t x178 = INT8_MIN;
	int8_t x180 = -1;
	volatile int32_t t44 = -3;

	t44 = ((x177<=x178)>>(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x182 = UINT8_MAX;
	int8_t x184 = 14;
	static int32_t t45 = -2;

	t45 = ((x181<=x182)>>(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	int32_t x188 = -1;

	t46 = ((x185<=x186)>>(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -22;
	int8_t x190 = 0;
	int32_t t47 = -59160;

	t47 = ((x189<=x190)>>(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -34;
	int8_t x194 = -1;
	volatile int64_t x195 = 56796214542045000LL;
	int64_t x196 = -1LL;

	t48 = ((x193<=x194)>>(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MIN;
	static int16_t x198 = 1780;
	uint16_t x199 = UINT16_MAX;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 0;

	t49 = ((x197<=x198)>>(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int64_t x202 = -1LL;
	int8_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 3;

	t50 = ((x201<=x202)>>(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MAX;

	t51 = ((x205<=x206)>>(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = -18981014;

	t52 = ((x209<=x210)>>(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint8_t x215 = 38U;
	static int32_t t53 = -13922500;

	t53 = ((x213<=x214)>>(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = 121851;
	int32_t x219 = -41968;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 1;

	t54 = ((x217<=x218)>>(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MAX;
	uint16_t x223 = 34U;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 22;

	t55 = ((x221<=x222)>>(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 3008006270LLU;
	int16_t x228 = -6565;
	int32_t t56 = 25058911;

	t56 = ((x225<=x226)>>(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	uint64_t x230 = 6599436467262889LLU;
	int8_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -7566;

	t57 = ((x229<=x230)>>(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	volatile int32_t x234 = INT32_MAX;
	int8_t x235 = INT8_MAX;
	volatile int64_t x236 = -1LL;
	static int32_t t58 = -67040743;

	t58 = ((x233<=x234)>>(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -6LL;
	uint8_t x238 = UINT8_MAX;
	static volatile uint8_t x239 = UINT8_MAX;
	volatile int8_t x240 = INT8_MIN;

	t59 = ((x237<=x238)>>(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MAX;
	static int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	volatile int32_t t60 = 0;

	t60 = ((x241<=x242)>>(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	int8_t x246 = INT8_MAX;
	uint64_t x248 = 1760458259LLU;
	volatile int32_t t61 = 5605596;

	t61 = ((x245<=x246)>>(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	static int16_t x251 = INT16_MAX;
	static uint16_t x252 = 53U;
	int32_t t62 = -58439041;

	t62 = ((x249<=x250)>>(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 93249102LLU;
	volatile uint32_t x255 = 7U;
	uint8_t x256 = 1U;
	volatile int32_t t63 = -667008;

	t63 = ((x253<=x254)>>(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1745LL;
	int32_t x258 = INT32_MAX;
	volatile uint32_t x260 = 51002943U;

	t64 = ((x257<=x258)>>(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x262 = 87916257930174LLU;
	uint32_t x263 = 1325U;
	uint16_t x264 = 1902U;
	int32_t t65 = 7039;

	t65 = ((x261<=x262)>>(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	uint32_t x266 = 12623U;
	int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MAX;
	int32_t t66 = 4308;

	t66 = ((x265<=x266)>>(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 0;
	int16_t x270 = -1;
	volatile int8_t x271 = -1;
	volatile int64_t x272 = 1685333428LL;
	int32_t t67 = 0;

	t67 = ((x269<=x270)>>(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = 2U;
	uint16_t x276 = 1U;

	t68 = ((x273<=x274)>>(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 42U;
	static int8_t x278 = INT8_MAX;
	uint32_t x279 = 174U;

	t69 = ((x277<=x278)>>(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = -1;
	static uint32_t x284 = 809835U;
	volatile int32_t t70 = 10;

	t70 = ((x281<=x282)>>(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	uint64_t x286 = 285386LLU;
	int16_t x287 = 3556;

	t71 = ((x285<=x286)>>(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = 53;
	static volatile int16_t x291 = INT16_MIN;
	int64_t x292 = -162554067898754LL;
	static volatile int32_t t72 = -3885372;

	t72 = ((x289<=x290)>>(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -95882155;
	volatile uint64_t x294 = 1948115697654193896LLU;
	volatile int8_t x295 = INT8_MAX;
	volatile uint32_t x296 = 221987833U;

	t73 = ((x293<=x294)>>(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	uint64_t x299 = 1692577036956LLU;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -602614;

	t74 = ((x297<=x298)>>(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 11U;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 4U;
	int32_t t75 = 8153;

	t75 = ((x301<=x302)>>(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x306 = 509387053;
	int64_t x307 = -107LL;
	volatile uint16_t x308 = UINT16_MAX;
	int32_t t76 = -250;

	t76 = ((x305<=x306)>>(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = 33431104;

	t77 = ((x309<=x310)>>(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int16_t x315 = INT16_MAX;
	static int64_t x316 = INT64_MIN;
	int32_t t78 = -2;

	t78 = ((x313<=x314)>>(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = 1169;
	int32_t x319 = -1;
	int32_t x320 = -1;
	int32_t t79 = 11174069;

	t79 = ((x317<=x318)>>(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	volatile int64_t x324 = INT64_MIN;
	volatile int32_t t80 = -710;

	t80 = ((x321<=x322)>>(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 0U;
	static int8_t x326 = -31;
	uint32_t x327 = 124659765U;
	static int32_t t81 = 49;

	t81 = ((x325<=x326)>>(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	uint16_t x332 = 12U;
	volatile int32_t t82 = -1025483420;

	t82 = ((x329<=x330)>>(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 8909;
	uint8_t x334 = 11U;
	int8_t x335 = -1;
	int16_t x336 = 1;
	int32_t t83 = 9602563;

	t83 = ((x333<=x334)>>(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 6563655473390LLU;
	static int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 439;

	t84 = ((x337<=x338)>>(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = INT32_MAX;

	t85 = ((x341<=x342)>>(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = 1965U;
	int8_t x346 = 0;
	int32_t x347 = -1;
	static uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = -25;

	t86 = ((x345<=x346)>>(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int8_t x352 = -1;
	static int32_t t87 = -932132053;

	t87 = ((x349<=x350)>>(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 29U;
	static volatile int32_t x354 = -1;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = 1649866LLU;
	int32_t t88 = 226;

	t88 = ((x353<=x354)>>(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int64_t x358 = -474398123667LL;
	int32_t x359 = -14615611;
	volatile int8_t x360 = -15;
	volatile int32_t t89 = -2;

	t89 = ((x357<=x358)>>(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 2;
	int16_t x362 = 3;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = 21U;
	static volatile int32_t t90 = -134559;

	t90 = ((x361<=x362)>>(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 457022376656LL;
	static uint64_t x368 = 95748105777750473LLU;
	volatile int32_t t91 = 1;

	t91 = ((x365<=x366)>>(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MAX;
	int16_t x371 = -70;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = 15332;

	t92 = ((x369<=x370)>>(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 10330079U;
	int64_t x374 = INT64_MIN;
	static int16_t x375 = -1;
	uint16_t x376 = 1307U;
	int32_t t93 = 22147;

	t93 = ((x373<=x374)>>(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = UINT32_MAX;
	uint16_t x378 = 851U;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = 28100366;

	t94 = ((x377<=x378)>>(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = 5240438;
	uint16_t x384 = 1U;
	static int32_t t95 = 69303;

	t95 = ((x381<=x382)>>(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 341U;
	int32_t t96 = 193929;

	t96 = ((x385<=x386)>>(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -1LL;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 231811462;

	t97 = ((x389<=x390)>>(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	static uint8_t x394 = 1U;
	int64_t x395 = INT64_MIN;
	int64_t x396 = 3443LL;
	volatile int32_t t98 = 61977088;

	t98 = ((x393<=x394)>>(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 3068LLU;
	volatile int32_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int32_t t99 = -1328;

	t99 = ((x397<=x398)>>(x399==x400));

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

