#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = UINT32_MAX;
int32_t t2 = -16363857;
int64_t x14 = 161532LL;
uint8_t x15 = UINT8_MAX;
volatile uint8_t x20 = UINT8_MAX;
int64_t x27 = INT64_MAX;
int32_t t6 = 125317652;
int8_t x32 = -1;
int32_t t7 = -155;
uint64_t x36 = UINT64_MAX;
static uint8_t x37 = 1U;
int8_t x38 = -1;
static uint64_t t9 = 29555178LLU;
static int8_t x45 = INT8_MIN;
static int16_t x47 = INT16_MIN;
volatile int32_t t12 = 1;
int32_t x54 = INT32_MAX;
int32_t t13 = 44506;
uint16_t x57 = 12U;
volatile int64_t t14 = -683580354601573LL;
int16_t x61 = 0;
volatile int32_t t15 = -17599;
int16_t x74 = INT16_MIN;
int8_t x79 = -4;
volatile int16_t x86 = INT16_MIN;
int16_t x88 = INT16_MAX;
uint64_t x94 = 918178468008996LLU;
uint8_t x96 = UINT8_MAX;
static uint32_t x99 = UINT32_MAX;
uint32_t x100 = 118U;
volatile uint32_t t24 = 0U;
static volatile uint16_t x101 = 31U;
uint8_t x103 = UINT8_MAX;
int64_t x105 = INT64_MIN;
uint32_t x107 = 1902U;
volatile int16_t x110 = INT16_MIN;
int16_t x112 = 0;
uint32_t x117 = 1974445U;
uint16_t x122 = UINT16_MAX;
int32_t x124 = -1;
static int16_t x125 = INT16_MIN;
uint8_t x129 = 8U;
int16_t x131 = -199;
int16_t x143 = INT16_MIN;
uint64_t t35 = 70697863890546030LLU;
int64_t x146 = 469970063705LL;
int16_t x147 = INT16_MIN;
uint16_t x149 = 220U;
uint8_t x152 = 9U;
static uint32_t x156 = 62U;
int8_t x174 = -25;
volatile int64_t x175 = 28959371381487078LL;
int64_t x179 = INT64_MIN;
volatile int16_t x192 = 12275;
static int32_t t48 = INT32_MIN;
static uint32_t x201 = UINT32_MAX;
volatile int8_t x209 = -3;
uint16_t x212 = 128U;
static uint64_t x214 = UINT64_MAX;
int8_t x218 = INT8_MIN;
int32_t t54 = -5070640;
static uint64_t t55 = UINT64_MAX;
volatile uint16_t x228 = 7225U;
static int32_t x229 = -39;
int64_t t57 = -966908LL;
volatile int32_t t58 = -12;
volatile int32_t t60 = -4342;
int8_t x245 = INT8_MIN;
volatile int32_t t61 = 86299;
int32_t x249 = INT32_MIN;
static int64_t x253 = INT64_MAX;
static volatile int64_t x258 = -178312354LL;
uint8_t x268 = 7U;
int64_t t69 = -17208LL;
static int8_t x281 = 56;
int32_t t70 = 396922;
int16_t x294 = INT16_MAX;
volatile int16_t x295 = -5;
static uint8_t x296 = 20U;
static int64_t x300 = INT64_MIN;
int64_t t74 = -165935LL;
int32_t x302 = 89533403;
int32_t x307 = -1;
int32_t x313 = -1;
int16_t x314 = -1;
uint64_t x324 = 410LLU;
volatile uint8_t x327 = 105U;
int16_t x336 = INT16_MIN;
static volatile int32_t x349 = 4359;
uint8_t x350 = 0U;
int32_t t87 = 115469916;
int8_t x361 = INT8_MIN;
int16_t x364 = -1918;
uint32_t x371 = 1068538499U;
volatile int32_t x378 = 70290;
int16_t x379 = -1;
uint64_t t94 = 8700710931LLU;
static int16_t x390 = INT16_MIN;
static int16_t x396 = INT16_MIN;
int32_t x400 = INT32_MIN;
volatile int64_t x403 = INT64_MIN;
int8_t x404 = INT8_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int32_t x2 = INT32_MAX;
	volatile int8_t x3 = INT8_MAX;
	uint16_t x4 = 42U;
	volatile int32_t t0 = -7905;

	t0 = ((x1<(x2%x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	uint8_t x7 = 2U;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5<(x6%x7))*x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = -1LL;
	static int32_t x11 = INT32_MIN;
	volatile uint16_t x12 = 2446U;

	t2 = ((x9<(x10%x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -84LL;
	int8_t x16 = -1;
	volatile int32_t t3 = -957416;

	t3 = ((x13<(x14%x15))*x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	static volatile int32_t x18 = INT32_MAX;
	static uint64_t x19 = 10LLU;
	volatile int32_t t4 = -618584847;

	t4 = ((x17<(x18%x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1806514047LLU;
	int16_t x22 = -1;
	uint64_t x23 = 241584098LLU;
	uint8_t x24 = 22U;
	volatile int32_t t5 = -207;

	t5 = ((x21<(x22%x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 15U;
	int8_t x26 = -9;
	int8_t x28 = INT8_MIN;

	t6 = ((x25<(x26%x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 18473985LL;
	int16_t x30 = 0;
	static int32_t x31 = 1;

	t7 = ((x29<(x30%x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -57012LL;
	uint64_t x34 = UINT64_MAX;
	static uint16_t x35 = 13272U;
	static uint64_t t8 = 3LLU;

	t8 = ((x33<(x34%x35))*x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 2801LLU;

	t9 = ((x37<(x38%x39))*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int64_t x42 = 1LL;
	int32_t x43 = INT32_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -7;

	t10 = ((x41<(x42%x43))*x44);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = ((x45<(x46%x47))*x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	uint64_t x50 = 22914LLU;
	static uint16_t x51 = 242U;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49<(x50%x51))*x52);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 1020505220636532275LLU;
	volatile int16_t x55 = 2;
	static uint16_t x56 = UINT16_MAX;

	t13 = ((x53<(x54%x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	static volatile int32_t x59 = -8072;
	int64_t x60 = -1LL;

	t14 = ((x57<(x58%x59))*x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	int64_t x63 = 1LL;
	int16_t x64 = INT16_MIN;

	t15 = ((x61<(x62%x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int32_t x66 = -1;
	uint8_t x67 = 2U;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -55419;

	t16 = ((x65<(x66%x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 61U;
	volatile int8_t x71 = INT8_MAX;
	volatile uint32_t x72 = 416353U;
	static volatile uint32_t t17 = 7415U;

	t17 = ((x69<(x70%x71))*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	int8_t x75 = 14;
	volatile uint8_t x76 = 1U;
	int32_t t18 = -996;

	t18 = ((x73<(x74%x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -3016598920915481779LL;
	static uint8_t x78 = 4U;
	static volatile int32_t x80 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = ((x77<(x78%x79))*x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MAX;
	static int32_t x83 = -1260551;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -2410;

	t20 = ((x81<(x82%x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int16_t x87 = -38;
	volatile int32_t t21 = 139;

	t21 = ((x85<(x86%x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = -1LL;
	int64_t x90 = INT64_MIN;
	uint8_t x91 = UINT8_MAX;
	static int64_t x92 = -1LL;
	volatile int64_t t22 = 1LL;

	t22 = ((x89<(x90%x91))*x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	volatile int8_t x95 = 13;
	static volatile int32_t t23 = -143345;

	t23 = ((x93<(x94%x95))*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile uint32_t x98 = 212U;

	t24 = ((x97<(x98%x99))*x100);

	if (t24 != 118U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = INT8_MAX;
	int64_t x104 = -1LL;
	int64_t t25 = 18930278LL;

	t25 = ((x101<(x102%x103))*x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = INT16_MAX;
	int64_t x108 = INT64_MIN;
	int64_t t26 = INT64_MIN;

	t26 = ((x105<(x106%x107))*x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 34U;
	volatile int8_t x111 = INT8_MIN;
	int32_t t27 = 86816;

	t27 = ((x109<(x110%x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -16516398;
	static int8_t x114 = -1;
	int32_t x115 = INT32_MAX;
	int8_t x116 = 2;
	static volatile int32_t t28 = -1700;

	t28 = ((x113<(x114%x115))*x116);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = INT32_MIN;
	uint8_t x119 = 53U;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 2761231;

	t29 = ((x117<(x118%x119))*x120);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	volatile int64_t x123 = -173748428467LL;
	int32_t t30 = -71591;

	t30 = ((x121<(x122%x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MAX;
	static int64_t x127 = -1LL;
	static int8_t x128 = -1;
	int32_t t31 = -2688350;

	t31 = ((x125<(x126%x127))*x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

	t32 = ((x129<(x130%x131))*x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int16_t x134 = -568;
	int8_t x135 = -1;
	int32_t x136 = -1;
	static volatile int32_t t33 = -930;

	t33 = ((x133<(x134%x135))*x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = 1;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -5;
	int64_t x140 = INT64_MIN;
	int64_t t34 = 937LL;

	t34 = ((x137<(x138%x139))*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	uint16_t x142 = UINT16_MAX;
	uint64_t x144 = 4308648129LLU;

	t35 = ((x141<(x142%x143))*x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int8_t x148 = INT8_MAX;
	static int32_t t36 = -180176001;

	t36 = ((x145<(x146%x147))*x148);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = 53U;
	uint16_t x151 = UINT16_MAX;
	static int32_t t37 = 968;

	t37 = ((x149<(x150%x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	uint32_t x154 = 3244U;
	volatile int8_t x155 = INT8_MAX;
	volatile uint32_t t38 = 902240U;

	t38 = ((x153<(x154%x155))*x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 53U;
	int8_t x158 = 1;
	volatile int64_t x159 = -3864LL;
	volatile int16_t x160 = -1;
	volatile int32_t t39 = -3803;

	t39 = ((x157<(x158%x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = 6478;
	uint32_t x162 = 305564526U;
	uint64_t x163 = 21LLU;
	volatile int8_t x164 = 2;
	volatile int32_t t40 = 15;

	t40 = ((x161<(x162%x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	volatile uint64_t x167 = UINT64_MAX;
	int64_t x168 = -4470092196928336LL;
	int64_t t41 = 243435598736217563LL;

	t41 = ((x165<(x166%x167))*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MAX;
	int32_t x170 = -457241;
	int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 7;

	t42 = ((x169<(x170%x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	static uint8_t x176 = 1U;
	volatile int32_t t43 = 2049875;

	t43 = ((x173<(x174%x175))*x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	static int16_t x178 = INT16_MIN;
	static uint16_t x180 = 3U;
	int32_t t44 = 233;

	t44 = ((x177<(x178%x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	uint64_t x182 = 50267LLU;
	uint32_t x183 = 900545383U;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = -389446;

	t45 = ((x181<(x182%x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 490103131LLU;
	uint8_t x186 = 2U;
	int16_t x187 = -3183;
	static int64_t x188 = INT64_MIN;
	int64_t t46 = -545715864857LL;

	t46 = ((x185<(x186%x187))*x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = 56U;
	uint16_t x191 = UINT16_MAX;
	int32_t t47 = -113;

	t47 = ((x189<(x190%x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = INT64_MIN;
	volatile int32_t x196 = INT32_MIN;

	t48 = ((x193<(x194%x195))*x196);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -1LL;
	static int16_t x200 = -1;
	int32_t t49 = -8331528;

	t49 = ((x197<(x198%x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x202 = -3;
	int32_t x203 = INT32_MAX;
	volatile int64_t x204 = INT64_MAX;
	volatile int64_t t50 = 240907872100884954LL;

	t50 = ((x201<(x202%x203))*x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 560802653U;
	static int32_t x206 = -476580;
	int32_t x207 = -29;
	int32_t x208 = 18;
	static volatile int32_t t51 = 1534745;

	t51 = ((x205<(x206%x207))*x208);

	if (t51 != 18) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = 18951LL;
	volatile uint32_t x211 = 69588U;
	volatile int32_t t52 = 495620581;

	t52 = ((x209<(x210%x211))*x212);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int8_t x215 = INT8_MAX;
	int16_t x216 = -4084;
	int32_t t53 = -1;

	t53 = ((x213<(x214%x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	static volatile int32_t x219 = -1;
	volatile uint16_t x220 = 18U;

	t54 = ((x217<(x218%x219))*x220);

	if (t54 != 18) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -12250LL;
	int8_t x222 = -1;
	volatile int64_t x223 = 981903558LL;
	uint64_t x224 = UINT64_MAX;

	t55 = ((x221<(x222%x223))*x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = 503246;
	volatile int32_t t56 = -41320605;

	t56 = ((x225<(x226%x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = 32266924216787LL;
	volatile uint16_t x231 = 57U;
	int64_t x232 = -3490810LL;

	t57 = ((x229<(x230%x231))*x232);

	if (t57 != -3490810LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	volatile int64_t x235 = INT64_MAX;
	static int16_t x236 = INT16_MAX;

	t58 = ((x233<(x234%x235))*x236);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int16_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 79U;
	volatile int32_t t59 = 5460;

	t59 = ((x237<(x238%x239))*x240);

	if (t59 != 79) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	volatile uint32_t x242 = 201U;
	volatile uint64_t x243 = 1066046711937LLU;
	int16_t x244 = INT16_MIN;

	t60 = ((x241<(x242%x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	static int8_t x248 = INT8_MAX;

	t61 = ((x245<(x246%x247))*x248);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = UINT64_MAX;
	int8_t x251 = 1;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -1;

	t62 = ((x249<(x250%x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = -1;
	int32_t x255 = -20841907;
	int8_t x256 = 1;
	volatile int32_t t63 = 20;

	t63 = ((x253<(x254%x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 1453792658LL;
	static uint32_t x259 = UINT32_MAX;
	volatile int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = 442;

	t64 = ((x257<(x258%x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;
	static volatile int16_t x264 = 485;
	int32_t t65 = 0;

	t65 = ((x261<(x262%x263))*x264);

	if (t65 != 485) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 718616875U;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	static volatile int32_t t66 = -437553787;

	t66 = ((x265<(x266%x267))*x268);

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	volatile int64_t x270 = INT64_MIN;
	static volatile uint32_t x271 = 1861275U;
	int8_t x272 = INT8_MIN;
	int32_t t67 = -2704088;

	t67 = ((x269<(x270%x271))*x272);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static int32_t x274 = -19152847;
	int64_t x275 = INT64_MAX;
	int64_t x276 = INT64_MIN;
	static volatile int64_t t68 = -9201110802676699LL;

	t68 = ((x273<(x274%x275))*x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int16_t x278 = -1;
	int16_t x279 = 1;
	int64_t x280 = 156678LL;

	t69 = ((x277<(x278%x279))*x280);

	if (t69 != 156678LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x282 = 0;
	volatile uint16_t x283 = 877U;
	volatile int8_t x284 = INT8_MIN;

	t70 = ((x281<(x282%x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	static int64_t x287 = -2055626503041220955LL;
	int8_t x288 = -30;
	static volatile int32_t t71 = 4;

	t71 = ((x285<(x286%x287))*x288);

	if (t71 != -30) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1U;
	int32_t x290 = INT32_MAX;
	volatile int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 326516231;

	t72 = ((x289<(x290%x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	volatile int32_t t73 = 8444677;

	t73 = ((x293<(x294%x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = UINT16_MAX;

	t74 = ((x297<(x298%x299))*x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int64_t x303 = -16LL;
	uint32_t x304 = 14925U;
	volatile uint32_t t75 = 2U;

	t75 = ((x301<(x302%x303))*x304);

	if (t75 != 14925U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 977U;
	uint8_t x306 = UINT8_MAX;
	int64_t x308 = INT64_MIN;
	static int64_t t76 = 4077LL;

	t76 = ((x305<(x306%x307))*x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = 3U;
	volatile uint64_t x310 = 14390949336419LLU;
	int8_t x311 = INT8_MAX;
	int32_t x312 = 1546250;
	int32_t t77 = 1006;

	t77 = ((x309<(x310%x311))*x312);

	if (t77 != 1546250) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x315 = INT64_MIN;
	int8_t x316 = -52;
	volatile int32_t t78 = -2137841;

	t78 = ((x313<(x314%x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	uint8_t x318 = 1U;
	int32_t x319 = -4;
	uint64_t x320 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x317<(x318%x319))*x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 1U;
	volatile int8_t x322 = INT8_MIN;
	static volatile int8_t x323 = -1;
	volatile uint64_t t80 = 35LLU;

	t80 = ((x321<(x322%x323))*x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	volatile uint32_t x326 = UINT32_MAX;
	static volatile uint32_t x328 = UINT32_MAX;
	static volatile uint32_t t81 = 13877425U;

	t81 = ((x325<(x326%x327))*x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 1402980U;
	volatile int16_t x330 = INT16_MAX;
	int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -12587;

	t82 = ((x329<(x330%x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 374334613U;
	uint64_t x334 = 56LLU;
	int64_t x335 = -1LL;
	volatile int32_t t83 = 324883;

	t83 = ((x333<(x334%x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int64_t x338 = INT64_MIN;
	volatile int8_t x339 = 11;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t84 = -2077290;

	t84 = ((x337<(x338%x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t85 = -3729LL;

	t85 = ((x341<(x342%x343))*x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -11;
	int32_t x346 = INT32_MIN;
	static uint16_t x347 = 190U;
	int16_t x348 = 1432;
	static volatile int32_t t86 = 52009;

	t86 = ((x345<(x346%x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x351 = 65U;
	int8_t x352 = INT8_MIN;

	t87 = ((x349<(x350%x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1946585921LL;
	volatile uint64_t x354 = UINT64_MAX;
	uint16_t x355 = UINT16_MAX;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = -5221;

	t88 = ((x353<(x354%x355))*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x362 = INT8_MIN;
	volatile int32_t x363 = 2500;
	volatile int32_t t89 = 206850642;

	t89 = ((x361<(x362%x363))*x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = 1;
	uint32_t x366 = UINT32_MAX;
	volatile uint32_t x367 = 75950U;
	int32_t x368 = -1;
	volatile int32_t t90 = 2159163;

	t90 = ((x365<(x366%x367))*x368);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x369 = 11680;
	uint16_t x370 = 0U;
	volatile uint64_t x372 = 2LLU;
	static uint64_t t91 = 351LLU;

	t91 = ((x369<(x370%x371))*x372);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int32_t x374 = INT32_MIN;
	static int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	static int64_t t92 = -1LL;

	t92 = ((x373<(x374%x375))*x376);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = 0;
	volatile int32_t x380 = -1;
	int32_t t93 = 146;

	t93 = ((x377<(x378%x379))*x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	volatile uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 4965766006784830LLU;

	t94 = ((x381<(x382%x383))*x384);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x385 = 496;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 48U;
	int64_t x388 = INT64_MIN;
	static volatile int64_t t95 = 1544309LL;

	t95 = ((x385<(x386%x387))*x388);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x389 = 9U;
	static int64_t x391 = -45871214499247LL;
	int8_t x392 = INT8_MIN;
	static int32_t t96 = 1493;

	t96 = ((x389<(x390%x391))*x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = 0;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = -1;
	int32_t t97 = -833365;

	t97 = ((x393<(x394%x395))*x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = INT8_MIN;
	volatile int32_t t98 = 2759264;

	t98 = ((x397<(x398%x399))*x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x401 = 1455518699LLU;
	int16_t x402 = 7161;
	int32_t t99 = 34;

	t99 = ((x401<(x402%x403))*x404);

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

