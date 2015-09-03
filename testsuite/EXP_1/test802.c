#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 66U;
volatile int32_t t0 = -16;
volatile uint16_t x5 = 15U;
uint32_t x10 = 885U;
volatile int32_t t2 = -29314073;
uint8_t x17 = 78U;
int16_t x25 = -1;
int32_t x28 = INT32_MAX;
int8_t x30 = INT8_MIN;
int8_t x35 = INT8_MAX;
volatile int32_t t11 = 1;
int64_t x53 = -85LL;
int32_t t13 = -20509;
int32_t x63 = -1;
int32_t x64 = INT32_MAX;
uint8_t x70 = 40U;
int8_t x72 = INT8_MIN;
int32_t t17 = -52137053;
uint8_t x76 = 51U;
int32_t t18 = -8461547;
int8_t x81 = INT8_MAX;
static int16_t x82 = -1;
uint8_t x87 = 6U;
volatile int32_t t20 = -3826068;
int32_t x92 = INT32_MAX;
int64_t x94 = -1LL;
static int64_t x100 = -27LL;
static int32_t t24 = -7;
volatile uint32_t x110 = UINT32_MAX;
volatile uint16_t x112 = 7U;
uint64_t x123 = UINT64_MAX;
int32_t x127 = -1;
static int8_t x129 = -1;
volatile int64_t x139 = -1LL;
static uint64_t x140 = 516819897586010LLU;
volatile int32_t t33 = -57;
static uint64_t x142 = UINT64_MAX;
int32_t x147 = -3;
int32_t t35 = -116;
uint64_t x151 = 17697243LLU;
static volatile int16_t x152 = -2;
int8_t x161 = INT8_MIN;
int32_t t37 = -13894885;
int16_t x169 = INT16_MAX;
int64_t x170 = INT64_MIN;
static int32_t x172 = INT32_MIN;
int8_t x177 = INT8_MIN;
volatile int8_t x179 = INT8_MIN;
volatile uint64_t x188 = UINT64_MAX;
uint8_t x191 = UINT8_MAX;
uint16_t x195 = 3U;
int32_t x201 = 396924425;
int16_t x205 = INT16_MIN;
static int16_t x207 = INT16_MIN;
uint16_t x209 = 0U;
static int16_t x211 = INT16_MAX;
int32_t x216 = 1;
volatile int32_t t50 = -9;
int32_t t51 = -81;
int16_t x226 = INT16_MIN;
volatile int32_t t52 = 6;
int32_t t53 = -26293849;
int32_t t54 = 4;
int64_t x239 = -238713794806969LL;
static uint16_t x242 = UINT16_MAX;
static int16_t x247 = -1;
volatile int32_t t59 = -40164;
int64_t x257 = INT64_MIN;
volatile uint64_t x258 = 9942942465608LLU;
static int64_t x266 = 61311252LL;
int32_t t62 = 783210469;
uint16_t x270 = UINT16_MAX;
int32_t x272 = INT32_MIN;
volatile int32_t x277 = -39;
static int64_t x278 = INT64_MAX;
uint32_t x280 = UINT32_MAX;
static int64_t x281 = -1LL;
int16_t x283 = INT16_MIN;
static uint32_t x285 = 2U;
int32_t t67 = 33617;
volatile int32_t t68 = -13490;
int8_t x294 = -1;
int32_t t69 = 11329;
int32_t t70 = 7648338;
int16_t x302 = INT16_MAX;
static int32_t x307 = 880;
int32_t x316 = INT32_MIN;
uint8_t x317 = 81U;
static int16_t x318 = INT16_MIN;
int8_t x322 = 1;
static int16_t x323 = 23;
volatile uint16_t x333 = 5553U;
volatile uint16_t x334 = 1142U;
int16_t x336 = INT16_MIN;
int32_t x337 = -3;
int64_t x342 = 5358155LL;
volatile int32_t t80 = -2324;
int32_t t83 = 403;
int8_t x360 = 1;
static volatile int64_t x361 = -1LL;
volatile int64_t x363 = INT64_MIN;
int32_t t85 = -3505626;
volatile int32_t t86 = -161;
static int32_t t87 = 16;
int16_t x376 = INT16_MAX;
volatile int32_t t89 = 3;
int32_t x381 = 528571260;
static uint32_t x395 = 242640U;
int32_t t93 = 129832411;
uint64_t x397 = 112813LLU;
static uint32_t x404 = UINT32_MAX;
volatile int16_t x405 = INT16_MIN;
volatile int32_t t96 = 329;
static volatile int64_t x422 = 1282111769626LL;


void f0(void) {
	uint16_t x1 = 2U;
	uint64_t x2 = 579591317LLU;
	static int8_t x4 = INT8_MAX;

	t0 = (((x1%x2)<=x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 719027799962LLU;
	static uint64_t x7 = UINT64_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 1;

	t1 = (((x5%x6)<=x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 3U;
	int16_t x11 = -1;
	uint16_t x12 = 112U;

	t2 = (((x9%x10)<=x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MIN;
	static volatile int8_t x15 = 0;
	int32_t x16 = -1;
	int32_t t3 = 211703816;

	t3 = (((x13%x14)<=x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	volatile uint64_t x20 = UINT64_MAX;
	int32_t t4 = -139;

	t4 = (((x17%x18)<=x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 848864179660810547LL;
	int32_t x22 = INT32_MAX;
	int16_t x23 = -78;
	int16_t x24 = 28;
	volatile int32_t t5 = 127944678;

	t5 = (((x21%x22)<=x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	static int64_t x27 = -1LL;
	static int32_t t6 = -3237;

	t6 = (((x25%x26)<=x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 97U;
	volatile uint64_t x31 = UINT64_MAX;
	int64_t x32 = -4431338753538031LL;
	int32_t t7 = -3;

	t7 = (((x29%x30)<=x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	int8_t x36 = -29;
	static volatile int32_t t8 = 2308331;

	t8 = (((x33%x34)<=x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 101LLU;
	int32_t x38 = 1165;
	int32_t x39 = 4136;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 1;

	t9 = (((x37%x38)<=x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = 10;

	t10 = (((x41%x42)<=x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1LL;
	static uint16_t x47 = 1550U;
	int64_t x48 = INT64_MAX;

	t11 = (((x45%x46)<=x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	int32_t x50 = -82632;
	int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MIN;
	int32_t t12 = -458694988;

	t12 = (((x49%x50)<=x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 23U;
	volatile int64_t x55 = INT64_MAX;
	uint16_t x56 = UINT16_MAX;

	t13 = (((x53%x54)<=x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 1395833;

	t14 = (((x57%x58)<=x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static int16_t x62 = -284;
	int32_t t15 = -1144070;

	t15 = (((x61%x62)<=x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MAX;
	int64_t x67 = INT64_MIN;
	uint8_t x68 = 1U;
	int32_t t16 = -64838472;

	t16 = (((x65%x66)<=x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static volatile uint64_t x71 = 450LLU;

	t17 = (((x69%x70)<=x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -5299095353776LL;
	int32_t x74 = 26565;
	volatile int16_t x75 = -1;

	t18 = (((x73%x74)<=x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x83 = -1;
	int16_t x84 = 3754;
	static int32_t t19 = -1949;

	t19 = (((x81%x82)<=x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 1U;
	static volatile uint16_t x86 = 917U;
	volatile int32_t x88 = INT32_MAX;

	t20 = (((x85%x86)<=x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int16_t x90 = 1707;
	static int8_t x91 = 9;
	int32_t t21 = 7019;

	t21 = (((x89%x90)<=x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	volatile int32_t t22 = 689035473;

	t22 = (((x93%x94)<=x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = -1;
	static int32_t x98 = INT32_MIN;
	uint64_t x99 = 134450212076LLU;
	int32_t t23 = -37474853;

	t23 = (((x97%x98)<=x99)<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 529U;
	int64_t x102 = 23317LL;
	static int32_t x103 = INT32_MIN;
	int64_t x104 = -55172729157LL;

	t24 = (((x101%x102)<=x103)<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 575505290889818LLU;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = -1;
	volatile int16_t x108 = INT16_MAX;
	static volatile int32_t t25 = -250538;

	t25 = (((x105%x106)<=x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	volatile int8_t x111 = -12;
	volatile int32_t t26 = -1;

	t26 = (((x109%x110)<=x111)<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	int64_t x116 = INT64_MIN;
	volatile int32_t t27 = 0;

	t27 = (((x113%x114)<=x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x117 = 7895563248260047026LLU;
	volatile uint8_t x118 = 1U;
	int64_t x119 = 10848118004474641LL;
	volatile int64_t x120 = -1LL;
	volatile int32_t t28 = -3044577;

	t28 = (((x117%x118)<=x119)<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 5433924LLU;
	static int32_t x122 = INT32_MAX;
	static volatile int8_t x124 = 3;
	volatile int32_t t29 = 400;

	t29 = (((x121%x122)<=x123)<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	uint8_t x128 = 26U;
	int32_t t30 = -1;

	t30 = (((x125%x126)<=x127)<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x130 = 13U;
	uint64_t x131 = 121403704185393802LLU;
	volatile int16_t x132 = 6965;
	int32_t t31 = -431;

	t31 = (((x129%x130)<=x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 5U;
	volatile uint8_t x135 = UINT8_MAX;
	int8_t x136 = -5;
	volatile int32_t t32 = -14540881;

	t32 = (((x133%x134)<=x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MAX;

	t33 = (((x137%x138)<=x139)<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x143 = -1LL;
	volatile int64_t x144 = -1LL;
	int32_t t34 = 0;

	t34 = (((x141%x142)<=x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	volatile int8_t x148 = INT8_MAX;

	t35 = (((x145%x146)<=x147)<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -17LL;
	volatile int8_t x150 = INT8_MAX;
	volatile int32_t t36 = 416;

	t36 = (((x149%x150)<=x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x162 = 2897439U;
	int32_t x163 = INT32_MIN;
	int8_t x164 = -1;

	t37 = (((x161%x162)<=x163)<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x171 = INT32_MAX;
	volatile int32_t t38 = 6;

	t38 = (((x169%x170)<=x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	int64_t x175 = 1355137567243016LL;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t39 = 3363;

	t39 = (((x173%x174)<=x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = INT32_MAX;
	int32_t x180 = 3;
	static volatile int32_t t40 = 156;

	t40 = (((x177%x178)<=x179)<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x181 = 324402LL;
	int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	uint8_t x184 = 2U;
	int32_t t41 = -1;

	t41 = (((x181%x182)<=x183)<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	uint32_t x186 = 42U;
	volatile int64_t x187 = INT64_MIN;
	volatile int32_t t42 = 7027;

	t42 = (((x185%x186)<=x187)<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MAX;
	static volatile uint8_t x190 = UINT8_MAX;
	uint32_t x192 = UINT32_MAX;
	static volatile int32_t t43 = 3;

	t43 = (((x189%x190)<=x191)<x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile uint64_t x194 = 40434725LLU;
	uint64_t x196 = 447810446495424437LLU;
	int32_t t44 = -2587948;

	t44 = (((x193%x194)<=x195)<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = 23;
	uint64_t x199 = 4393206750344226LLU;
	uint64_t x200 = 9270560539953925LLU;
	int32_t t45 = -196;

	t45 = (((x197%x198)<=x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x202 = -29;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MAX;
	static int32_t t46 = -2;

	t46 = (((x201%x202)<=x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x206 = 3814U;
	int64_t x208 = 142637219825631752LL;
	volatile int32_t t47 = 0;

	t47 = (((x205%x206)<=x207)<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x210 = UINT8_MAX;
	volatile int16_t x212 = INT16_MIN;
	static volatile int32_t t48 = -396638570;

	t48 = (((x209%x210)<=x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = 652;
	int64_t x214 = -1667164009919601392LL;
	static uint16_t x215 = UINT16_MAX;
	int32_t t49 = 536;

	t49 = (((x213%x214)<=x215)<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x217 = 25839663828933149LLU;
	int8_t x218 = INT8_MIN;
	uint16_t x219 = 42U;
	static uint8_t x220 = 2U;

	t50 = (((x217%x218)<=x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 5U;
	static uint8_t x222 = 3U;
	static int32_t x223 = 8;
	uint64_t x224 = UINT64_MAX;

	t51 = (((x221%x222)<=x223)<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 1444U;
	static volatile uint8_t x227 = 25U;
	uint16_t x228 = UINT16_MAX;

	t52 = (((x225%x226)<=x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 1U;
	volatile uint8_t x230 = 3U;
	static int16_t x231 = INT16_MIN;
	uint64_t x232 = 6073LLU;

	t53 = (((x229%x230)<=x231)<x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MAX;
	int16_t x235 = -1;
	int8_t x236 = -3;

	t54 = (((x233%x234)<=x235)<x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x237 = 85745611;
	volatile int64_t x238 = INT64_MAX;
	volatile uint8_t x240 = 0U;
	static volatile int32_t t55 = -9;

	t55 = (((x237%x238)<=x239)<x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	int32_t x243 = INT32_MIN;
	static volatile int32_t x244 = INT32_MAX;
	static int32_t t56 = 925228505;

	t56 = (((x241%x242)<=x243)<x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = 18;
	uint64_t x246 = 1LLU;
	int16_t x248 = INT16_MIN;
	volatile int32_t t57 = -415;

	t57 = (((x245%x246)<=x247)<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 7U;
	static int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	volatile int64_t x252 = INT64_MAX;
	int32_t t58 = 1410;

	t58 = (((x249%x250)<=x251)<x252);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = 50224LL;
	uint16_t x256 = 15U;

	t59 = (((x253%x254)<=x255)<x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MAX;
	static volatile int32_t t60 = 8543;

	t60 = (((x257%x258)<=x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 5U;
	static uint8_t x262 = UINT8_MAX;
	volatile int64_t x263 = 2564223213LL;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t61 = -615072112;

	t61 = (((x261%x262)<=x263)<x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	static uint8_t x268 = 4U;

	t62 = (((x265%x266)<=x267)<x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x269 = 37;
	int16_t x271 = -1;
	int32_t t63 = -45613;

	t63 = (((x269%x270)<=x271)<x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MAX;
	volatile uint32_t x274 = UINT32_MAX;
	static volatile int8_t x275 = INT8_MAX;
	uint8_t x276 = 2U;
	int32_t t64 = -238312582;

	t64 = (((x273%x274)<=x275)<x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x279 = INT8_MAX;
	volatile int32_t t65 = -17613;

	t65 = (((x277%x278)<=x279)<x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x282 = INT16_MIN;
	int64_t x284 = -2LL;
	int32_t t66 = -31657277;

	t66 = (((x281%x282)<=x283)<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x286 = INT64_MIN;
	int32_t x287 = 19039502;
	int64_t x288 = -1LL;

	t67 = (((x285%x286)<=x287)<x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	volatile uint16_t x290 = 2786U;
	uint32_t x291 = UINT32_MAX;
	uint16_t x292 = 14U;

	t68 = (((x289%x290)<=x291)<x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	int32_t x295 = INT32_MAX;
	int16_t x296 = -1;

	t69 = (((x293%x294)<=x295)<x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x297 = -1;
	int16_t x298 = 952;
	int64_t x299 = -1LL;
	volatile uint8_t x300 = UINT8_MAX;

	t70 = (((x297%x298)<=x299)<x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x301 = UINT16_MAX;
	int8_t x303 = -1;
	volatile uint32_t x304 = 251U;
	volatile int32_t t71 = -367609;

	t71 = (((x301%x302)<=x303)<x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x305 = 104807457268369LL;
	volatile uint8_t x306 = UINT8_MAX;
	int64_t x308 = -928727LL;
	int32_t t72 = 11;

	t72 = (((x305%x306)<=x307)<x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = 493;
	int16_t x310 = -1;
	volatile int32_t x311 = INT32_MIN;
	uint16_t x312 = 0U;
	static volatile int32_t t73 = -31;

	t73 = (((x309%x310)<=x311)<x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x313 = 437903090341807864LLU;
	volatile int64_t x314 = -214417017337578LL;
	int16_t x315 = -12;
	static int32_t t74 = 67406;

	t74 = (((x313%x314)<=x315)<x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x319 = 1553923389U;
	static int16_t x320 = INT16_MIN;
	int32_t t75 = -19779;

	t75 = (((x317%x318)<=x319)<x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = UINT32_MAX;
	uint16_t x324 = 10U;
	int32_t t76 = -836;

	t76 = (((x321%x322)<=x323)<x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x325 = -1;
	int64_t x326 = -20505048932003934LL;
	int8_t x327 = -1;
	int8_t x328 = 0;
	static int32_t t77 = -6542128;

	t77 = (((x325%x326)<=x327)<x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x335 = INT8_MAX;
	volatile int32_t t78 = -998728769;

	t78 = (((x333%x334)<=x335)<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = -33;
	uint16_t x339 = 24042U;
	static uint32_t x340 = UINT32_MAX;
	static int32_t t79 = -2595781;

	t79 = (((x337%x338)<=x339)<x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = -1LL;
	int16_t x343 = INT16_MIN;
	int64_t x344 = -1LL;

	t80 = (((x341%x342)<=x343)<x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = INT8_MIN;
	volatile uint16_t x346 = 22887U;
	int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t81 = -129463746;

	t81 = (((x345%x346)<=x347)<x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	volatile int32_t x351 = INT32_MAX;
	int64_t x352 = -1LL;
	volatile int32_t t82 = -63;

	t82 = (((x349%x350)<=x351)<x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = 10;
	static uint64_t x354 = 1219LLU;
	int8_t x355 = 27;
	static int16_t x356 = INT16_MIN;

	t83 = (((x353%x354)<=x355)<x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int16_t x358 = INT16_MAX;
	static uint64_t x359 = 259228328023691LLU;
	static volatile int32_t t84 = 61905244;

	t84 = (((x357%x358)<=x359)<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x362 = -843027619124795747LL;
	int8_t x364 = INT8_MIN;

	t85 = (((x361%x362)<=x363)<x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MAX;
	uint32_t x367 = 26538U;
	volatile int8_t x368 = INT8_MAX;

	t86 = (((x365%x366)<=x367)<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = 489;
	uint32_t x370 = 3U;
	int32_t x371 = INT32_MAX;
	static int8_t x372 = INT8_MIN;

	t87 = (((x369%x370)<=x371)<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = -1;
	volatile int32_t t88 = 739;

	t88 = (((x373%x374)<=x375)<x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MIN;
	volatile int8_t x378 = INT8_MAX;
	static uint32_t x379 = 71U;
	int64_t x380 = -626656832790LL;

	t89 = (((x377%x378)<=x379)<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x382 = -1LL;
	volatile uint16_t x383 = 2U;
	uint32_t x384 = 7602595U;
	volatile int32_t t90 = 482071;

	t90 = (((x381%x382)<=x383)<x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x385 = INT8_MIN;
	static volatile uint64_t x386 = 113407610LLU;
	uint8_t x387 = 44U;
	int32_t x388 = 1;
	int32_t t91 = 2448;

	t91 = (((x385%x386)<=x387)<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 1U;
	int8_t x390 = -1;
	static volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = -26;
	volatile int32_t t92 = -3878;

	t92 = (((x389%x390)<=x391)<x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	static volatile uint32_t x394 = 2855546U;
	int32_t x396 = INT32_MIN;

	t93 = (((x393%x394)<=x395)<x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x398 = 4091938510388694326LL;
	static uint16_t x399 = 71U;
	static int8_t x400 = -10;
	static int32_t t94 = 2;

	t94 = (((x397%x398)<=x399)<x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = INT32_MAX;
	uint64_t x402 = 58163818727082LLU;
	int64_t x403 = -1LL;
	static int32_t t95 = 0;

	t95 = (((x401%x402)<=x403)<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x406 = UINT32_MAX;
	uint8_t x407 = 33U;
	int8_t x408 = -1;

	t96 = (((x405%x406)<=x407)<x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = UINT8_MAX;
	uint8_t x414 = 4U;
	uint16_t x415 = 5916U;
	int64_t x416 = -28389LL;
	volatile int32_t t97 = -1;

	t97 = (((x413%x414)<=x415)<x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MAX;
	uint32_t x418 = 4640675U;
	uint64_t x419 = 1LLU;
	int16_t x420 = INT16_MIN;
	int32_t t98 = 1803;

	t98 = (((x417%x418)<=x419)<x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x421 = INT32_MIN;
	static volatile uint16_t x423 = 0U;
	uint32_t x424 = 304215U;
	volatile int32_t t99 = -660052;

	t99 = (((x421%x422)<=x423)<x424);

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

