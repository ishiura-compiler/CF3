#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x14 = -1;
int8_t x17 = -1;
int8_t x33 = 20;
int32_t x35 = INT32_MAX;
static uint64_t x41 = UINT64_MAX;
static int64_t x42 = INT64_MIN;
static int8_t x47 = INT8_MIN;
static volatile int32_t t12 = -46;
int16_t x67 = INT16_MAX;
int32_t t14 = -583;
uint64_t x70 = 16376LLU;
volatile int32_t t15 = -116356124;
int32_t t16 = -30664;
uint16_t x80 = 8173U;
int8_t x85 = -1;
uint32_t x87 = 4208022U;
int64_t x89 = 3283609001LL;
int32_t x95 = INT32_MAX;
int32_t x96 = INT32_MAX;
static uint64_t x99 = 15LLU;
volatile int32_t t24 = 179796261;
uint8_t x110 = 56U;
uint8_t x112 = UINT8_MAX;
int8_t x114 = -1;
volatile int32_t x115 = INT32_MAX;
uint8_t x116 = 1U;
int8_t x118 = 1;
int32_t x120 = -1;
static int16_t x121 = INT16_MAX;
static int32_t t28 = -4257805;
int8_t x136 = -1;
int8_t x140 = INT8_MAX;
int64_t x151 = INT64_MAX;
uint32_t x153 = 24U;
volatile int32_t t35 = 7;
int64_t x167 = 41443471LL;
int64_t x168 = -8407330241LL;
static volatile int32_t t38 = 0;
volatile int64_t x169 = INT64_MAX;
int32_t x174 = INT32_MIN;
volatile uint32_t x176 = UINT32_MAX;
int16_t x177 = -1;
uint16_t x181 = 20U;
int16_t x186 = -3279;
int8_t x187 = INT8_MAX;
static int8_t x198 = INT8_MIN;
int32_t t46 = 0;
int64_t x204 = -1LL;
static int16_t x210 = INT16_MIN;
volatile int16_t x215 = INT16_MAX;
uint64_t x216 = 1772LLU;
int32_t t50 = -83906173;
int32_t t51 = 111788433;
int32_t x225 = -2253892;
int64_t x227 = INT64_MIN;
static volatile int32_t x239 = -134777;
int8_t x248 = -1;
uint64_t x251 = 70871880224670364LLU;
int32_t t55 = -3324;
uint8_t x256 = 2U;
static uint64_t x259 = 6298261LLU;
static int32_t x261 = INT32_MAX;
static volatile int64_t x264 = INT64_MAX;
int32_t t58 = 314;
int16_t x267 = INT16_MIN;
uint8_t x268 = UINT8_MAX;
uint8_t x270 = UINT8_MAX;
uint8_t x271 = 12U;
uint64_t x272 = UINT64_MAX;
volatile uint64_t x275 = 25547066073514LLU;
int8_t x276 = INT8_MIN;
volatile int32_t x278 = -52;
uint64_t x289 = UINT64_MAX;
int32_t x290 = -1686;
volatile int32_t t65 = 17649;
volatile int32_t t66 = 0;
uint32_t x299 = 1698U;
int32_t t67 = 457448695;
int8_t x309 = -37;
uint8_t x311 = 4U;
static int64_t x318 = -1LL;
int32_t t72 = -1;
volatile uint8_t x329 = 29U;
int16_t x331 = INT16_MAX;
uint16_t x337 = 0U;
volatile int32_t t77 = 5626920;
volatile int16_t x346 = 9777;
volatile int32_t t78 = 1;
int64_t x355 = INT64_MIN;
volatile int16_t x356 = INT16_MIN;
volatile int32_t t79 = 2;
int32_t t80 = 76139961;
volatile int32_t t82 = 246636;
uint8_t x381 = 1U;
volatile int32_t t85 = -1;
int64_t x390 = 15LL;
int8_t x391 = INT8_MIN;
int64_t x393 = INT64_MIN;
int32_t t88 = -17675962;
int8_t x413 = 0;
volatile uint8_t x416 = 6U;
volatile int32_t x419 = INT32_MAX;
int64_t x430 = INT64_MIN;
static uint8_t x445 = 2U;
volatile uint16_t x454 = 7288U;
static int32_t t97 = 64383003;
static int32_t x467 = -70447774;


void f0(void) {
	int8_t x1 = -3;
	int16_t x2 = -1;
	uint64_t x3 = 1LLU;
	int16_t x4 = -1;
	static volatile int32_t t0 = 2022;

	t0 = ((x1*(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int32_t x6 = 2801787;
	int32_t x7 = INT32_MAX;
	uint16_t x8 = 6U;
	int32_t t1 = 993379;

	t1 = ((x5*(x6/x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = 19;
	uint16_t x12 = 0U;
	static volatile int32_t t2 = 69;

	t2 = ((x9*(x10/x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 4;
	int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -1030396;

	t3 = ((x13*(x14/x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x18 = UINT64_MAX;
	uint8_t x19 = 60U;
	uint16_t x20 = 439U;
	static int32_t t4 = 1144994;

	t4 = ((x17*(x18/x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int8_t x22 = -1;
	int16_t x23 = 73;
	static volatile int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 62725;

	t5 = ((x21*(x22/x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int8_t x30 = -39;
	int8_t x31 = -57;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 248094155;

	t6 = ((x29*(x30/x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MIN;
	static uint8_t x36 = 2U;
	volatile int32_t t7 = 220452426;

	t7 = ((x33*(x34/x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	int8_t x39 = -33;
	uint16_t x40 = 0U;
	volatile int32_t t8 = -10399;

	t8 = ((x37*(x38/x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x43 = INT8_MIN;
	static volatile int32_t x44 = 250238616;
	static int32_t t9 = 8;

	t9 = ((x41*(x42/x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MAX;
	static volatile int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 609375;

	t10 = ((x45*(x46/x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 17U;
	int32_t x50 = -1;
	static int8_t x51 = INT8_MAX;
	int8_t x52 = 13;
	static volatile int32_t t11 = 1042737200;

	t11 = ((x49*(x50/x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = INT32_MIN;
	int8_t x56 = -4;

	t12 = ((x53*(x54/x55))<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 25U;
	int8_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	static uint64_t x60 = UINT64_MAX;
	volatile int32_t t13 = -570;

	t13 = ((x57*(x58/x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = -65688;
	volatile uint16_t x68 = 79U;

	t14 = ((x65*(x66/x67))<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 0U;
	uint8_t x71 = UINT8_MAX;
	volatile uint8_t x72 = UINT8_MAX;

	t15 = ((x69*(x70/x71))<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = 2773423934LLU;
	static uint16_t x75 = 6169U;
	int8_t x76 = 62;

	t16 = ((x73*(x74/x75))<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	volatile uint32_t x78 = 39U;
	int8_t x79 = INT8_MIN;
	volatile int32_t t17 = 326293;

	t17 = ((x77*(x78/x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = -1;
	int8_t x83 = -1;
	int16_t x84 = 34;
	volatile int32_t t18 = -20;

	t18 = ((x81*(x82/x83))<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x86 = 50U;
	int8_t x88 = -1;
	int32_t t19 = 5;

	t19 = ((x85*(x86/x87))<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = UINT16_MAX;
	volatile int64_t x91 = INT64_MAX;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t20 = -3;

	t20 = ((x89*(x90/x91))<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 1U;
	static volatile uint8_t x94 = UINT8_MAX;
	volatile int32_t t21 = 262125507;

	t21 = ((x93*(x94/x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x97 = UINT16_MAX;
	static uint16_t x98 = 4U;
	static int64_t x100 = 6317479703415382LL;
	volatile int32_t t22 = 22050;

	t22 = ((x97*(x98/x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x102 = UINT32_MAX;
	uint8_t x103 = 47U;
	static int8_t x104 = INT8_MAX;
	static volatile int32_t t23 = -103411516;

	t23 = ((x101*(x102/x103))<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 436U;
	int16_t x106 = 7492;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = 12U;

	t24 = ((x105*(x106/x107))<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = INT8_MAX;
	int32_t x111 = INT32_MIN;
	volatile int32_t t25 = -101348789;

	t25 = ((x109*(x110/x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = INT8_MIN;
	int32_t t26 = -1664819;

	t26 = ((x113*(x114/x115))<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = -4;
	int8_t x119 = INT8_MIN;
	volatile int32_t t27 = 2153;

	t27 = ((x117*(x118/x119))<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = 3134;
	volatile uint64_t x123 = 1101830096LLU;
	uint8_t x124 = 6U;

	t28 = ((x121*(x122/x123))<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = INT32_MIN;
	int8_t x130 = -29;
	static uint32_t x131 = UINT32_MAX;
	int16_t x132 = -17;
	volatile int32_t t29 = 2993;

	t29 = ((x129*(x130/x131))<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	volatile int32_t t30 = 106810;

	t30 = ((x133*(x134/x135))<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 0;
	int64_t x138 = -1LL;
	int8_t x139 = -1;
	volatile int32_t t31 = 57121;

	t31 = ((x137*(x138/x139))<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x141 = 23U;
	static int64_t x142 = -2407LL;
	volatile int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MAX;
	static volatile int32_t t32 = 144;

	t32 = ((x141*(x142/x143))<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = -1LL;
	uint16_t x146 = 3U;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t33 = -6438445;

	t33 = ((x145*(x146/x147))<=x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	static int64_t x150 = -1LL;
	uint8_t x152 = 0U;
	volatile int32_t t34 = -485;

	t34 = ((x149*(x150/x151))<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = -13361;
	volatile uint8_t x155 = UINT8_MAX;
	int64_t x156 = INT64_MIN;

	t35 = ((x153*(x154/x155))<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	int64_t x158 = -1LL;
	static int8_t x159 = INT8_MIN;
	int64_t x160 = -68797660930955LL;
	int32_t t36 = 1481;

	t36 = ((x157*(x158/x159))<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MIN;
	volatile int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MAX;
	int64_t x164 = 4454031651795023255LL;
	int32_t t37 = -68;

	t37 = ((x161*(x162/x163))<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = 3;
	int8_t x166 = INT8_MIN;

	t38 = ((x165*(x166/x167))<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x170 = -1;
	int16_t x171 = INT16_MIN;
	static int64_t x172 = -6LL;
	int32_t t39 = 20016;

	t39 = ((x169*(x170/x171))<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = 75416036LL;
	uint32_t x175 = UINT32_MAX;
	static volatile int32_t t40 = -6962;

	t40 = ((x173*(x174/x175))<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 3U;
	volatile int8_t x180 = -1;
	static volatile int32_t t41 = -98623836;

	t41 = ((x177*(x178/x179))<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x182 = INT64_MIN;
	int32_t x183 = -87;
	volatile uint8_t x184 = UINT8_MAX;
	int32_t t42 = -44743;

	t42 = ((x181*(x182/x183))<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -1;
	int64_t x188 = 1LL;
	volatile int32_t t43 = -1247;

	t43 = ((x185*(x186/x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 3078LLU;
	int8_t x190 = 0;
	int8_t x191 = 1;
	static uint16_t x192 = UINT16_MAX;
	int32_t t44 = -93;

	t44 = ((x189*(x190/x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -1;
	static uint64_t x194 = UINT64_MAX;
	static int8_t x195 = -1;
	static int64_t x196 = INT64_MAX;
	int32_t t45 = 677701147;

	t45 = ((x193*(x194/x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 14287U;
	int64_t x199 = INT64_MAX;
	int64_t x200 = INT64_MIN;

	t46 = ((x197*(x198/x199))<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -1LL;
	int32_t x202 = -1;
	uint64_t x203 = 8086502920845157181LLU;
	int32_t t47 = 260479024;

	t47 = ((x201*(x202/x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = 23763834;
	volatile uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = INT16_MAX;
	int64_t x208 = 0LL;
	static int32_t t48 = -302451;

	t48 = ((x205*(x206/x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x209 = UINT32_MAX;
	uint16_t x211 = UINT16_MAX;
	static int16_t x212 = INT16_MAX;
	static volatile int32_t t49 = 86;

	t49 = ((x209*(x210/x211))<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = -284090;
	int64_t x214 = 75740654108380LL;

	t50 = ((x213*(x214/x215))<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	static int64_t x224 = -13339LL;

	t51 = ((x221*(x222/x223))<=x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x226 = INT64_MAX;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t52 = -121495;

	t52 = ((x225*(x226/x227))<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	volatile uint32_t x238 = 142U;
	uint8_t x240 = 70U;
	static volatile int32_t t53 = -1466;

	t53 = ((x237*(x238/x239))<=x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x245 = INT16_MIN;
	uint16_t x246 = 102U;
	int16_t x247 = INT16_MAX;
	volatile int32_t t54 = 132650;

	t54 = ((x245*(x246/x247))<=x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x249 = UINT64_MAX;
	int8_t x250 = -4;
	uint64_t x252 = 14500212876288LLU;

	t55 = ((x249*(x250/x251))<=x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x253 = 1500201;
	int16_t x254 = -1;
	int64_t x255 = INT64_MIN;
	volatile int32_t t56 = 860910;

	t56 = ((x253*(x254/x255))<=x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x257 = 442839681790261288LLU;
	uint8_t x258 = UINT8_MAX;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t57 = -256923747;

	t57 = ((x257*(x258/x259))<=x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x262 = 26U;
	volatile int64_t x263 = -59392102672LL;

	t58 = ((x261*(x262/x263))<=x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x265 = 1U;
	int32_t x266 = -1;
	volatile int32_t t59 = 123;

	t59 = ((x265*(x266/x267))<=x268);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = -1;
	static int32_t t60 = -55998284;

	t60 = ((x269*(x270/x271))<=x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	static volatile int32_t t61 = 0;

	t61 = ((x273*(x274/x275))<=x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	int16_t x279 = 1674;
	int16_t x280 = INT16_MIN;
	int32_t t62 = 943262;

	t62 = ((x277*(x278/x279))<=x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x281 = -512990577876LL;
	int32_t x282 = INT32_MAX;
	static int64_t x283 = 5303888588076609LL;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t63 = -120621456;

	t63 = ((x281*(x282/x283))<=x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = -23083;
	volatile uint32_t x286 = UINT32_MAX;
	static volatile int8_t x287 = INT8_MIN;
	uint8_t x288 = 1U;
	volatile int32_t t64 = 1323;

	t64 = ((x285*(x286/x287))<=x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x291 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;

	t65 = ((x289*(x290/x291))<=x292);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 53U;
	int32_t x294 = -1;
	uint32_t x295 = UINT32_MAX;
	volatile int32_t x296 = -224034;

	t66 = ((x293*(x294/x295))<=x296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x297 = -359145584;
	volatile uint64_t x298 = UINT64_MAX;
	int32_t x300 = INT32_MAX;

	t67 = ((x297*(x298/x299))<=x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MAX;
	static int8_t x302 = 1;
	int8_t x303 = INT8_MAX;
	int64_t x304 = -1LL;
	static int32_t t68 = -9957;

	t68 = ((x301*(x302/x303))<=x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MAX;
	volatile int8_t x306 = INT8_MIN;
	uint32_t x307 = 1U;
	int8_t x308 = 3;
	int32_t t69 = -8224;

	t69 = ((x305*(x306/x307))<=x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x310 = -1;
	static uint8_t x312 = 1U;
	volatile int32_t t70 = -6367048;

	t70 = ((x309*(x310/x311))<=x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x317 = UINT16_MAX;
	static int16_t x319 = 10678;
	int16_t x320 = INT16_MIN;
	volatile int32_t t71 = 10;

	t71 = ((x317*(x318/x319))<=x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x321 = 27;
	int16_t x322 = 7140;
	int64_t x323 = -1LL;
	int64_t x324 = -18LL;

	t72 = ((x321*(x322/x323))<=x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x325 = -99;
	uint64_t x326 = 5073583284628303774LLU;
	uint32_t x327 = 7179870U;
	static volatile uint32_t x328 = 186167U;
	int32_t t73 = -7;

	t73 = ((x325*(x326/x327))<=x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x330 = 9;
	volatile int32_t x332 = INT32_MIN;
	static int32_t t74 = 10654;

	t74 = ((x329*(x330/x331))<=x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = -1;
	uint8_t x334 = 14U;
	int32_t x335 = 2493597;
	static int32_t x336 = INT32_MIN;
	int32_t t75 = 402119;

	t75 = ((x333*(x334/x335))<=x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x338 = UINT64_MAX;
	uint32_t x339 = 12U;
	uint32_t x340 = UINT32_MAX;
	static int32_t t76 = -3454999;

	t76 = ((x337*(x338/x339))<=x340);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = 11U;
	volatile int8_t x342 = INT8_MIN;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = UINT8_MAX;

	t77 = ((x341*(x342/x343))<=x344);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int16_t x347 = -257;
	int16_t x348 = -842;

	t78 = ((x345*(x346/x347))<=x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x353 = UINT32_MAX;
	uint32_t x354 = 7833U;

	t79 = ((x353*(x354/x355))<=x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MIN;
	volatile int64_t x359 = 110LL;
	int8_t x360 = INT8_MIN;

	t80 = ((x357*(x358/x359))<=x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = 3;
	int64_t x366 = 34LL;
	int64_t x367 = INT64_MIN;
	volatile uint16_t x368 = 6U;
	int32_t t81 = -41;

	t81 = ((x365*(x366/x367))<=x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = 1329LL;
	int64_t x371 = 3610069125793092LL;
	uint16_t x372 = 5U;

	t82 = ((x369*(x370/x371))<=x372);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = 11LL;
	static int32_t x374 = -7780;
	int32_t x375 = 675197135;
	volatile int64_t x376 = -7726126861LL;
	int32_t t83 = 207582117;

	t83 = ((x373*(x374/x375))<=x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x382 = 28051LLU;
	uint32_t x383 = 14238U;
	volatile int16_t x384 = INT16_MAX;
	static volatile int32_t t84 = -4;

	t84 = ((x381*(x382/x383))<=x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = 10934804U;
	volatile int32_t x388 = -1;

	t85 = ((x385*(x386/x387))<=x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = INT64_MAX;
	int8_t x392 = INT8_MAX;
	static int32_t t86 = -1160584;

	t86 = ((x389*(x390/x391))<=x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x394 = 54386767171974903LLU;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t87 = 158;

	t87 = ((x393*(x394/x395))<=x396);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -1;
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MAX;
	int32_t x404 = INT32_MIN;

	t88 = ((x401*(x402/x403))<=x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MAX;
	volatile int32_t t89 = 848015293;

	t89 = ((x413*(x414/x415))<=x416);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = -1LL;
	int64_t x418 = INT64_MAX;
	int8_t x420 = INT8_MIN;
	int32_t t90 = -125;

	t90 = ((x417*(x418/x419))<=x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = INT8_MIN;
	static int16_t x426 = -1;
	int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;
	int32_t t91 = 13017;

	t91 = ((x425*(x426/x427))<=x428);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x429 = 15016936590LLU;
	volatile int8_t x431 = -52;
	int16_t x432 = INT16_MAX;
	volatile int32_t t92 = 162;

	t92 = ((x429*(x430/x431))<=x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x437 = UINT32_MAX;
	int32_t x438 = -1;
	static int64_t x439 = INT64_MIN;
	volatile int32_t x440 = -1352849;
	static volatile int32_t t93 = -520;

	t93 = ((x437*(x438/x439))<=x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 12673123LLU;
	int32_t x442 = -1;
	uint32_t x443 = 383587936U;
	int64_t x444 = 11670894567284615LL;
	volatile int32_t t94 = 207252;

	t94 = ((x441*(x442/x443))<=x444);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x446 = -1;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t95 = 1;

	t95 = ((x445*(x446/x447))<=x448);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x449 = -50258420LL;
	int16_t x450 = -14;
	uint64_t x451 = 26657005992LLU;
	int32_t x452 = -1;
	int32_t t96 = 0;

	t96 = ((x449*(x450/x451))<=x452);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x453 = 360914668U;
	uint16_t x455 = 25U;
	int64_t x456 = 2574237923LL;

	t97 = ((x453*(x454/x455))<=x456);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = 60;
	int32_t x462 = INT32_MAX;
	uint64_t x463 = 468368618LLU;
	int16_t x464 = INT16_MIN;
	volatile int32_t t98 = 29;

	t98 = ((x461*(x462/x463))<=x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x465 = 1;
	int16_t x466 = INT16_MIN;
	int16_t x468 = INT16_MAX;
	int32_t t99 = -2761508;

	t99 = ((x465*(x466/x467))<=x468);

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

