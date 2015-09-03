#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
static int16_t x8 = INT16_MIN;
volatile uint64_t x10 = UINT64_MAX;
int8_t x25 = 30;
int32_t t6 = 206;
int16_t x36 = INT16_MAX;
int8_t x42 = INT8_MIN;
int16_t x44 = 6;
static int8_t x46 = -3;
uint64_t x48 = UINT64_MAX;
uint16_t x50 = UINT16_MAX;
int8_t x51 = -1;
int32_t t11 = -952699718;
volatile int32_t x54 = INT32_MIN;
static uint32_t x61 = 1988986633U;
static int64_t x63 = INT64_MIN;
int32_t x66 = INT32_MAX;
static volatile int64_t x75 = 13693053LL;
int8_t x77 = -1;
int32_t t19 = 134;
static int16_t x93 = -1;
int32_t x95 = INT32_MIN;
int32_t t21 = -1;
volatile uint16_t x100 = UINT16_MAX;
int32_t t23 = 3;
int8_t x105 = 0;
int16_t x106 = -1;
uint16_t x109 = 3052U;
volatile int32_t t25 = -3807;
volatile uint32_t x114 = 78050U;
int8_t x117 = -27;
int16_t x119 = INT16_MIN;
volatile int32_t t29 = -1661;
static volatile int16_t x130 = INT16_MIN;
volatile int64_t x134 = INT64_MIN;
int8_t x135 = -1;
static uint16_t x142 = UINT16_MAX;
volatile int64_t x143 = INT64_MAX;
int8_t x146 = INT8_MAX;
int64_t x152 = -1LL;
int8_t x162 = INT8_MIN;
static volatile int16_t x180 = -6;
static uint64_t x184 = 239520LLU;
uint8_t x185 = 0U;
int32_t x187 = -403096482;
volatile int32_t x193 = -514813066;
uint32_t x200 = 26412082U;
uint16_t x202 = 1U;
volatile int32_t t46 = -30261;
volatile int16_t x205 = INT16_MIN;
volatile int32_t x207 = -1;
volatile int32_t t47 = -29;
int16_t x210 = 791;
static int64_t x214 = -1LL;
int16_t x215 = INT16_MAX;
uint32_t x216 = UINT32_MAX;
int8_t x223 = -10;
volatile uint16_t x224 = UINT16_MAX;
volatile int32_t t52 = 0;
static uint8_t x231 = UINT8_MAX;
uint8_t x244 = UINT8_MAX;
int32_t t56 = -178254;
int64_t x245 = INT64_MIN;
int8_t x246 = 20;
uint32_t x248 = UINT32_MAX;
int16_t x251 = -1727;
volatile int32_t t58 = 5490364;
static int8_t x253 = INT8_MAX;
int32_t t59 = -33;
int16_t x257 = -74;
static int8_t x259 = INT8_MIN;
volatile int16_t x263 = 15;
uint32_t x270 = 553927485U;
uint64_t x291 = 7LLU;
static int32_t t68 = -1234880;
volatile int8_t x293 = INT8_MIN;
static uint16_t x304 = UINT16_MAX;
volatile int32_t t71 = -30;
int32_t t72 = -13;
uint32_t x326 = 1288U;
int32_t x329 = INT32_MIN;
int16_t x339 = 2;
int32_t t80 = -526971199;
static int8_t x341 = -1;
static int16_t x343 = INT16_MIN;
int16_t x346 = -1;
uint64_t x347 = 166361LLU;
int64_t x348 = -1LL;
uint32_t x349 = UINT32_MAX;
volatile int64_t x359 = 15140894789268LL;
static int64_t x370 = -1LL;
static uint8_t x372 = 15U;
volatile int8_t x376 = INT8_MAX;
uint32_t x378 = 145462U;
volatile uint32_t x380 = 113692922U;
static volatile int32_t x388 = INT32_MAX;
volatile int32_t t92 = 11653;
static volatile int64_t x390 = -1LL;
int8_t x397 = INT8_MAX;
int32_t x400 = -175064;
volatile int16_t x405 = INT16_MIN;
int32_t x407 = INT32_MIN;
volatile int32_t t97 = -10841956;
static uint64_t x413 = 4LLU;


void f0(void) {
	int32_t x2 = INT32_MIN;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 1;

	t0 = (((x1%x2)%x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -23LL;
	int16_t x6 = INT16_MAX;
	int64_t x7 = 71LL;
	int32_t t1 = 17;

	t1 = (((x5%x6)%x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -14829;

	t2 = (((x9%x10)%x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	uint32_t x15 = 1U;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -3;

	t3 = (((x13%x14)%x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 0;
	uint8_t x22 = UINT8_MAX;
	volatile int8_t x23 = INT8_MIN;
	static uint64_t x24 = 16LLU;
	volatile int32_t t4 = -111334;

	t4 = (((x21%x22)%x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 6;
	uint32_t x27 = 28U;
	volatile uint8_t x28 = 31U;
	volatile int32_t t5 = -47;

	t5 = (((x25%x26)%x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	static uint64_t x31 = 213797171LLU;
	static int64_t x32 = INT64_MIN;

	t6 = (((x29%x30)%x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	volatile int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MAX;
	volatile int32_t t7 = -58212795;

	t7 = (((x33%x34)%x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = 403;
	uint64_t x39 = 21228404554LLU;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t8 = 6;

	t8 = (((x37%x38)%x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	uint32_t x43 = 30U;
	static int32_t t9 = -14186365;

	t9 = (((x41%x42)%x43)<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t t10 = 414;

	t10 = (((x45%x46)%x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	static uint32_t x52 = UINT32_MAX;

	t11 = (((x49%x50)%x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = -5;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t12 = 18635;

	t12 = (((x53%x54)%x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MAX;
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	volatile uint32_t x60 = UINT32_MAX;
	volatile int32_t t13 = 353704215;

	t13 = (((x57%x58)%x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 548472657U;
	int8_t x64 = INT8_MAX;
	static int32_t t14 = 628060081;

	t14 = (((x61%x62)%x63)<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 1;
	static int64_t x67 = -1LL;
	int32_t x68 = -464703301;
	int32_t t15 = 14;

	t15 = (((x65%x66)%x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	uint8_t x74 = 6U;
	int64_t x76 = -1LL;
	volatile int32_t t16 = -397618969;

	t16 = (((x73%x74)%x75)<x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = -1;
	int64_t x79 = -139177LL;
	static int8_t x80 = 0;
	volatile int32_t t17 = 1355063;

	t17 = (((x77%x78)%x79)<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 1U;
	uint8_t x82 = 7U;
	int32_t x83 = -69053;
	int64_t x84 = 53809617098114LL;
	int32_t t18 = -1308715;

	t18 = (((x81%x82)%x83)<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x85 = 144U;
	static int32_t x86 = -1;
	int32_t x87 = INT32_MIN;
	int16_t x88 = -1;

	t19 = (((x85%x86)%x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = -1;
	int8_t x90 = INT8_MAX;
	static uint8_t x91 = UINT8_MAX;
	volatile int8_t x92 = INT8_MAX;
	int32_t t20 = -196795;

	t20 = (((x89%x90)%x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x94 = INT16_MIN;
	uint32_t x96 = 1515430U;

	t21 = (((x93%x94)%x95)<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	int32_t x98 = -1;
	int32_t x99 = -1;
	static int32_t t22 = 5327;

	t22 = (((x97%x98)%x99)<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = INT8_MIN;
	static volatile uint8_t x103 = 50U;
	int32_t x104 = INT32_MIN;

	t23 = (((x101%x102)%x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t24 = -3397;

	t24 = (((x105%x106)%x107)<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x110 = 1230U;
	int64_t x111 = -373774252042064LL;
	int32_t x112 = -1;

	t25 = (((x109%x110)%x111)<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = INT8_MIN;
	int64_t x115 = -4073705069978527459LL;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t26 = 1334;

	t26 = (((x113%x114)%x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = 1;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t27 = -1583;

	t27 = (((x117%x118)%x119)<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = 7;
	uint64_t x122 = 6989LLU;
	int8_t x123 = INT8_MIN;
	int8_t x124 = -1;
	static int32_t t28 = 27754;

	t28 = (((x121%x122)%x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 53LLU;
	static int64_t x127 = INT64_MIN;
	int32_t x128 = -424;

	t29 = (((x125%x126)%x127)<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MAX;
	static volatile uint64_t x131 = 144852019822866LLU;
	static int32_t x132 = INT32_MIN;
	int32_t t30 = 14376853;

	t30 = (((x129%x130)%x131)<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	int8_t x136 = -1;
	int32_t t31 = 2234953;

	t31 = (((x133%x134)%x135)<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 3U;
	int64_t x138 = -1933994LL;
	static volatile uint16_t x139 = UINT16_MAX;
	volatile int8_t x140 = INT8_MIN;
	static volatile int32_t t32 = 1739;

	t32 = (((x137%x138)%x139)<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 11U;
	uint16_t x144 = 195U;
	int32_t t33 = 91;

	t33 = (((x141%x142)%x143)<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = 503239395;
	static int16_t x147 = INT16_MIN;
	static int8_t x148 = 1;
	volatile int32_t t34 = 9;

	t34 = (((x145%x146)%x147)<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MIN;
	uint16_t x150 = 1U;
	int16_t x151 = -5;
	static int32_t t35 = -32;

	t35 = (((x149%x150)%x151)<x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MIN;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = -1LL;
	int32_t t36 = 64988;

	t36 = (((x157%x158)%x159)<x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = UINT16_MAX;
	volatile uint16_t x163 = UINT16_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t37 = 51830981;

	t37 = (((x161%x162)%x163)<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	static int16_t x166 = INT16_MIN;
	volatile int8_t x167 = INT8_MIN;
	uint64_t x168 = 8040622113LLU;
	int32_t t38 = 36;

	t38 = (((x165%x166)%x167)<x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x173 = 1491551573607970513LLU;
	uint64_t x174 = 1LLU;
	int32_t x175 = INT32_MAX;
	int64_t x176 = INT64_MIN;
	volatile int32_t t39 = -3;

	t39 = (((x173%x174)%x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int64_t x178 = INT64_MIN;
	volatile int16_t x179 = INT16_MIN;
	static int32_t t40 = -11142;

	t40 = (((x177%x178)%x179)<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -1;
	uint8_t x182 = 2U;
	static int32_t x183 = INT32_MIN;
	volatile int32_t t41 = -989;

	t41 = (((x181%x182)%x183)<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x186 = 40886U;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t42 = 337;

	t42 = (((x185%x186)%x187)<x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -1;
	int32_t t43 = -2509;

	t43 = (((x189%x190)%x191)<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x194 = 64550489365LLU;
	static int64_t x195 = INT64_MIN;
	int8_t x196 = 42;
	static volatile int32_t t44 = 1;

	t44 = (((x193%x194)%x195)<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = -3;
	volatile int8_t x198 = INT8_MIN;
	static volatile int32_t x199 = -1;
	int32_t t45 = -4083931;

	t45 = (((x197%x198)%x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x201 = 103726281LLU;
	uint16_t x203 = 34U;
	volatile int16_t x204 = -1;

	t46 = (((x201%x202)%x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x206 = 13044692LLU;
	volatile uint16_t x208 = UINT16_MAX;

	t47 = (((x205%x206)%x207)<x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = 185935217U;
	int32_t x211 = 51020;
	static int8_t x212 = INT8_MAX;
	static volatile int32_t t48 = -34729075;

	t48 = (((x209%x210)%x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x213 = UINT8_MAX;
	int32_t t49 = 3;

	t49 = (((x213%x214)%x215)<x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = -163LL;
	uint8_t x218 = 2U;
	volatile uint16_t x219 = 2U;
	static uint16_t x220 = 4734U;
	volatile int32_t t50 = 199379602;

	t50 = (((x217%x218)%x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MAX;
	uint32_t x222 = 187446990U;
	static volatile int32_t t51 = 557514;

	t51 = (((x221%x222)%x223)<x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = 1;
	int8_t x226 = INT8_MIN;
	static int64_t x227 = INT64_MIN;
	static int16_t x228 = INT16_MIN;

	t52 = (((x225%x226)%x227)<x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x229 = 708984160U;
	uint32_t x230 = 760736U;
	volatile int16_t x232 = -1;
	static volatile int32_t t53 = -1;

	t53 = (((x229%x230)%x231)<x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = 9595;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = -41LL;
	int32_t t54 = -1825;

	t54 = (((x233%x234)%x235)<x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MAX;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t55 = -127373;

	t55 = (((x237%x238)%x239)<x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1300590834261837161LL;
	int64_t x242 = INT64_MAX;
	static uint8_t x243 = UINT8_MAX;

	t56 = (((x241%x242)%x243)<x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x247 = 3878550652LLU;
	int32_t t57 = 14893401;

	t57 = (((x245%x246)%x247)<x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 4043312832LLU;
	static int32_t x250 = INT32_MAX;
	int16_t x252 = INT16_MIN;

	t58 = (((x249%x250)%x251)<x252);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x254 = INT32_MIN;
	volatile int64_t x255 = INT64_MAX;
	static uint16_t x256 = 1U;

	t59 = (((x253%x254)%x255)<x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x258 = -463882965364980LL;
	int32_t x260 = INT32_MAX;
	int32_t t60 = 44;

	t60 = (((x257%x258)%x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -1113;
	uint8_t x262 = 31U;
	int16_t x264 = INT16_MAX;
	int32_t t61 = 11;

	t61 = (((x261%x262)%x263)<x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 10U;
	static int64_t x266 = 547290092701LL;
	int32_t x267 = INT32_MAX;
	static int8_t x268 = INT8_MIN;
	int32_t t62 = -1727755;

	t62 = (((x265%x266)%x267)<x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x269 = 61;
	int64_t x271 = -88189215580615626LL;
	int64_t x272 = 125672782260293094LL;
	volatile int32_t t63 = -200397694;

	t63 = (((x269%x270)%x271)<x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = 1U;
	volatile int32_t x274 = INT32_MIN;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = -1;
	volatile int32_t t64 = 267;

	t64 = (((x273%x274)%x275)<x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = INT8_MIN;
	static int64_t x278 = -408348925229LL;
	uint16_t x279 = 6U;
	int16_t x280 = -1;
	int32_t t65 = 9346;

	t65 = (((x277%x278)%x279)<x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 0U;
	int32_t x282 = -2;
	int64_t x283 = -1LL;
	int32_t x284 = -3185;
	int32_t t66 = -217075;

	t66 = (((x281%x282)%x283)<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = 58827;
	volatile uint8_t x287 = 7U;
	static int8_t x288 = INT8_MAX;
	volatile int32_t t67 = 1;

	t67 = (((x285%x286)%x287)<x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 7U;
	volatile int8_t x290 = INT8_MAX;
	volatile uint8_t x292 = 47U;

	t68 = (((x289%x290)%x291)<x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;
	volatile int32_t t69 = -28320;

	t69 = (((x293%x294)%x295)<x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MAX;
	volatile uint16_t x300 = 2982U;
	volatile int32_t t70 = -9613;

	t70 = (((x297%x298)%x299)<x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x301 = -1LL;
	int32_t x302 = -319745;
	int8_t x303 = -1;

	t71 = (((x301%x302)%x303)<x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = 1;
	volatile int8_t x306 = 1;
	uint16_t x307 = 8258U;
	int8_t x308 = -1;

	t72 = (((x305%x306)%x307)<x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	static int32_t x312 = INT32_MIN;
	int32_t t73 = 1;

	t73 = (((x309%x310)%x311)<x312);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	int64_t x314 = -37841514434841233LL;
	int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t74 = 5369081;

	t74 = (((x313%x314)%x315)<x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MAX;
	volatile int8_t x318 = INT8_MIN;
	uint64_t x319 = 103553016LLU;
	int16_t x320 = INT16_MIN;
	int32_t t75 = -4603728;

	t75 = (((x317%x318)%x319)<x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -6806121LL;
	static uint64_t x322 = UINT64_MAX;
	uint8_t x323 = 4U;
	int32_t x324 = INT32_MAX;
	static int32_t t76 = 8666;

	t76 = (((x321%x322)%x323)<x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 27516U;
	uint16_t x327 = UINT16_MAX;
	static uint8_t x328 = UINT8_MAX;
	int32_t t77 = 86;

	t77 = (((x325%x326)%x327)<x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x330 = UINT8_MAX;
	static volatile int8_t x331 = -24;
	int8_t x332 = -1;
	volatile int32_t t78 = -84;

	t78 = (((x329%x330)%x331)<x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MAX;
	int64_t x334 = -4885467199LL;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = UINT64_MAX;
	int32_t t79 = -1877;

	t79 = (((x333%x334)%x335)<x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x337 = -1;
	int32_t x338 = -1;
	volatile int16_t x340 = INT16_MIN;

	t80 = (((x337%x338)%x339)<x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x342 = 218442LLU;
	static volatile int32_t x344 = -1;
	static int32_t t81 = 0;

	t81 = (((x341%x342)%x343)<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = 4984996608682LL;
	static int32_t t82 = 1828;

	t82 = (((x345%x346)%x347)<x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x350 = -1990647670407985LL;
	static int64_t x351 = -1LL;
	int8_t x352 = INT8_MAX;
	int32_t t83 = 95;

	t83 = (((x349%x350)%x351)<x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MAX;
	uint64_t x354 = 25075468082846LLU;
	uint8_t x355 = UINT8_MAX;
	static int32_t x356 = -1;
	int32_t t84 = 14353;

	t84 = (((x353%x354)%x355)<x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -66107249160908117LL;
	int32_t x358 = -102;
	static uint8_t x360 = 24U;
	volatile int32_t t85 = 1424;

	t85 = (((x357%x358)%x359)<x360);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 99LLU;
	int32_t t86 = 104169;

	t86 = (((x361%x362)%x363)<x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x365 = 5044U;
	uint32_t x366 = 53U;
	int8_t x367 = -47;
	int8_t x368 = -10;
	static volatile int32_t t87 = -21791;

	t87 = (((x365%x366)%x367)<x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -1;
	uint32_t x371 = 463U;
	static volatile int32_t t88 = -1;

	t88 = (((x369%x370)%x371)<x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 10U;
	uint8_t x375 = 1U;
	volatile int32_t t89 = 376124;

	t89 = (((x373%x374)%x375)<x376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x377 = INT32_MIN;
	int8_t x379 = -1;
	static volatile int32_t t90 = 205355;

	t90 = (((x377%x378)%x379)<x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	int16_t x383 = 1;
	static uint8_t x384 = 59U;
	int32_t t91 = 522758332;

	t91 = (((x381%x382)%x383)<x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x385 = 3U;
	volatile uint16_t x386 = 15303U;
	int8_t x387 = INT8_MIN;

	t92 = (((x385%x386)%x387)<x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x389 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t93 = 1026981555;

	t93 = (((x389%x390)%x391)<x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile uint16_t x395 = 1405U;
	int64_t x396 = INT64_MAX;
	int32_t t94 = -934;

	t94 = (((x393%x394)%x395)<x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x398 = 1U;
	volatile uint32_t x399 = 1U;
	volatile int32_t t95 = -194866;

	t95 = (((x397%x398)%x399)<x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x401 = 62LLU;
	int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MIN;
	int8_t x404 = -52;
	volatile int32_t t96 = 144;

	t96 = (((x401%x402)%x403)<x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x406 = INT32_MIN;
	volatile int32_t x408 = INT32_MAX;

	t97 = (((x405%x406)%x407)<x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = INT8_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	uint16_t x412 = 2876U;
	int32_t t98 = 111075114;

	t98 = (((x409%x410)%x411)<x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MAX;
	int64_t x416 = -1LL;
	volatile int32_t t99 = -29447819;

	t99 = (((x413%x414)%x415)<x416);

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

