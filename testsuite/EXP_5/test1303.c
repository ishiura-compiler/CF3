#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1012;
volatile int32_t t1 = -99102;
volatile int16_t x9 = INT16_MIN;
int32_t t2 = 335;
uint16_t x16 = UINT16_MAX;
int16_t x22 = -2582;
volatile int64_t t5 = -37711409001735LL;
static volatile uint8_t x25 = 2U;
static volatile int32_t x27 = -1;
uint8_t x30 = 6U;
uint32_t x31 = 309U;
volatile int32_t t7 = 438276;
int64_t x38 = INT64_MIN;
uint64_t x44 = UINT64_MAX;
int32_t x46 = 1;
uint64_t t11 = UINT64_MAX;
volatile int64_t x58 = -6LL;
uint16_t x68 = UINT16_MAX;
uint32_t x71 = 4657088U;
int64_t x72 = -1LL;
static volatile int32_t t17 = 1;
static uint8_t x79 = 0U;
int32_t t19 = -172366179;
int32_t t20 = 1439297;
int8_t x86 = INT8_MIN;
static int32_t t23 = 700503796;
int32_t t24 = 1;
uint8_t x102 = 2U;
volatile uint32_t x103 = 112981U;
static int64_t x105 = INT64_MIN;
int16_t x110 = 1;
int32_t x113 = -1;
int8_t x121 = -30;
volatile int16_t x122 = 469;
uint32_t x125 = UINT32_MAX;
uint16_t x128 = 186U;
int32_t x131 = 2;
static int64_t t32 = INT64_MIN;
uint16_t x137 = 7520U;
volatile int32_t t34 = 313;
int8_t x141 = INT8_MAX;
volatile int32_t t36 = 143;
int16_t x155 = INT16_MAX;
int8_t x157 = INT8_MIN;
static int8_t x158 = 1;
int32_t t40 = -6;
int8_t x165 = 0;
uint64_t x172 = 6LLU;
static int32_t x180 = -1107;
volatile uint32_t t46 = 0U;
int64_t x189 = INT64_MAX;
volatile int64_t t47 = INT64_MAX;
volatile int32_t t48 = INT32_MIN;
int8_t x197 = 54;
volatile uint8_t x201 = 13U;
volatile int8_t x207 = INT8_MAX;
int32_t t51 = 28849;
static int64_t x213 = INT64_MAX;
int32_t t54 = -2215369;
int64_t x231 = 198LL;
int16_t x232 = -1;
static int8_t x238 = 1;
int32_t x243 = -1;
int32_t t60 = -4;
volatile uint8_t x248 = 4U;
static int8_t x249 = 5;
static int32_t t63 = INT32_MAX;
static int32_t x264 = INT32_MIN;
int32_t t66 = -1701;
int8_t x271 = 0;
uint64_t t67 = 2241062807118531268LLU;
volatile int16_t x275 = -1;
volatile int32_t t69 = -1;
int8_t x284 = INT8_MIN;
volatile int32_t x287 = -1;
int32_t x289 = INT32_MIN;
int32_t t72 = INT32_MIN;
static int64_t x297 = -559LL;
uint32_t x303 = 2704143U;
volatile int64_t t75 = INT64_MIN;
int32_t x309 = INT32_MIN;
volatile int8_t x311 = -10;
volatile int16_t x314 = -1;
static int64_t x318 = INT64_MIN;
volatile int32_t x321 = -55040484;
int32_t x326 = INT32_MAX;
static int16_t x330 = 1;
uint8_t x331 = 14U;
int32_t x336 = 359;
volatile int16_t x346 = -1;
int8_t x351 = -54;
volatile uint32_t x352 = UINT32_MAX;
int32_t x361 = INT32_MIN;
int32_t t90 = -14123;
int32_t t93 = 7565975;
int8_t x377 = INT8_MIN;
int32_t x387 = -1;
uint16_t x393 = 2365U;
int64_t x396 = -1LL;
int8_t x399 = INT8_MIN;
int32_t t99 = -85;


void f0(void) {
	uint32_t x1 = 1155673U;
	static uint8_t x2 = UINT8_MAX;
	int64_t x3 = -1LL;
	uint32_t t0 = 13U;

	t0 = (x1*((x2==x3)<=x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = -1;
	static int64_t x7 = INT64_MAX;
	int32_t x8 = 232828;

	t1 = (x5*((x6==x7)<=x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -1;
	volatile uint16_t x11 = 131U;
	int16_t x12 = INT16_MIN;

	t2 = (x9*((x10==x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = 403341;
	uint64_t x14 = UINT64_MAX;
	volatile int32_t x15 = INT32_MAX;
	static int32_t t3 = 3138;

	t3 = (x13*((x14==x15)<=x16));

	if (t3 != 403341) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 848879367454216379LLU;
	uint64_t x19 = 9412LLU;
	static int64_t x20 = INT64_MIN;
	uint64_t t4 = 12772LLU;

	t4 = (x17*((x18==x19)<=x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -4179677LL;
	int64_t x23 = 4420LL;
	int16_t x24 = INT16_MAX;

	t5 = (x21*((x22==x23)<=x24));

	if (t5 != -4179677LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 2U;
	volatile uint64_t x28 = 933280LLU;
	volatile int32_t t6 = 20723664;

	t6 = (x25*((x26==x27)<=x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 247;
	int16_t x32 = INT16_MIN;

	t7 = (x29*((x30==x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	static int64_t x34 = -1LL;
	int16_t x35 = 8595;
	int8_t x36 = -1;
	int64_t t8 = -12986LL;

	t8 = (x33*((x34==x35)<=x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int64_t x39 = -125997LL;
	static int16_t x40 = 7;
	static int32_t t9 = 209;

	t9 = (x37*((x38==x39)<=x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 5492U;
	int32_t x42 = -1;
	uint32_t x43 = UINT32_MAX;
	volatile int32_t t10 = 79;

	t10 = (x41*((x42==x43)<=x44));

	if (t10 != 5492) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint32_t x47 = 86916912U;
	uint32_t x48 = 3U;

	t11 = (x45*((x46==x47)<=x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -3;
	int32_t x50 = -1;
	static int32_t x51 = INT32_MIN;
	volatile uint8_t x52 = 75U;
	volatile int32_t t12 = -9325145;

	t12 = (x49*((x50==x51)<=x52));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 1;
	int8_t x54 = INT8_MAX;
	static uint8_t x55 = 12U;
	int64_t x56 = INT64_MAX;
	static int32_t t13 = 181342;

	t13 = (x53*((x54==x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 24U;
	uint8_t x59 = 19U;
	static int32_t x60 = INT32_MIN;
	int32_t t14 = -15785183;

	t14 = (x57*((x58==x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	int8_t x62 = 31;
	int16_t x63 = 2;
	volatile int32_t x64 = INT32_MAX;
	int32_t t15 = 21803;

	t15 = (x61*((x62==x63)<=x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int16_t x66 = INT16_MIN;
	static int64_t x67 = INT64_MAX;
	volatile int64_t t16 = 2LL;

	t16 = (x65*((x66==x67)<=x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -12211;
	static int16_t x70 = INT16_MAX;

	t17 = (x69*((x70==x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 6U;
	uint64_t x74 = 517604300775196LLU;
	uint16_t x75 = 15920U;
	int32_t x76 = -18;
	int32_t t18 = 10;

	t18 = (x73*((x74==x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 57U;
	int16_t x78 = -15;
	uint16_t x80 = UINT16_MAX;

	t19 = (x77*((x78==x79)<=x80));

	if (t19 != 57) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 3792;
	int16_t x82 = -1;
	uint8_t x83 = 2U;
	static uint64_t x84 = 29LLU;

	t20 = (x81*((x82==x83)<=x84));

	if (t20 != 3792) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = INT64_MAX;
	volatile int8_t x87 = INT8_MIN;
	static int32_t x88 = INT32_MIN;
	volatile int64_t t21 = -196263283457LL;

	t21 = (x85*((x86==x87)<=x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 151511;

	t22 = (x89*((x90==x91)<=x92));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	static volatile int16_t x94 = 15;
	int64_t x95 = 13782LL;
	int16_t x96 = INT16_MIN;

	t23 = (x93*((x94==x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static volatile uint32_t x98 = UINT32_MAX;
	int64_t x99 = 749667712460LL;
	volatile int32_t x100 = INT32_MAX;

	t24 = (x97*((x98==x99)<=x100));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static volatile int32_t x104 = -2;
	static int32_t t25 = -462440;

	t25 = (x101*((x102==x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = UINT64_MAX;
	static uint16_t x107 = 32094U;
	volatile int64_t x108 = -25911552912881024LL;
	int64_t t26 = 14605579LL;

	t26 = (x105*((x106==x107)<=x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -4;
	uint64_t x111 = 7015341560415LLU;
	volatile uint8_t x112 = 3U;
	int32_t t27 = 885;

	t27 = (x109*((x110==x111)<=x112));

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 16U;
	volatile int16_t x115 = INT16_MAX;
	uint8_t x116 = UINT8_MAX;
	int32_t t28 = 50117796;

	t28 = (x113*((x114==x115)<=x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MIN;
	static uint32_t x119 = 49U;
	int8_t x120 = -1;
	volatile int32_t t29 = -9915;

	t29 = (x117*((x118==x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x123 = 106392160262130601LL;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 141490612;

	t30 = (x121*((x122==x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = -2;
	int64_t x127 = INT64_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x125*((x126==x127)<=x128));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = -1;
	uint32_t x132 = UINT32_MAX;

	t32 = (x129*((x130==x131)<=x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 13642280527615LLU;
	volatile int16_t x134 = INT16_MIN;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	volatile uint64_t t33 = 5930956LLU;

	t33 = (x133*((x134==x135)<=x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 998100588103510417LLU;
	int8_t x139 = -1;
	int8_t x140 = -1;

	t34 = (x137*((x138==x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -5710;
	int8_t x143 = -1;
	static int32_t x144 = -475995057;
	volatile int32_t t35 = 3;

	t35 = (x141*((x142==x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	uint16_t x148 = 3791U;

	t36 = (x145*((x146==x147)<=x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 0LLU;
	volatile uint32_t x150 = 324U;
	int64_t x151 = -1LL;
	uint64_t x152 = UINT64_MAX;
	static uint64_t t37 = 136661924434LLU;

	t37 = (x149*((x150==x151)<=x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -1;
	static int8_t x154 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	static int32_t t38 = -1237119;

	t38 = (x153*((x154==x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 228;

	t39 = (x157*((x158==x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 102U;
	int16_t x162 = -3;
	int64_t x163 = INT64_MAX;
	static uint32_t x164 = 223U;

	t40 = (x161*((x162==x163)<=x164));

	if (t40 != 102) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x166 = INT64_MAX;
	int32_t x167 = -244850;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = 29606;

	t41 = (x165*((x166==x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 15;
	uint8_t x170 = 1U;
	volatile int8_t x171 = 0;
	volatile int32_t t42 = -391;

	t42 = (x169*((x170==x171)<=x172));

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	static uint16_t x175 = 0U;
	int32_t x176 = 2817;
	volatile int32_t t43 = INT32_MIN;

	t43 = (x173*((x174==x175)<=x176));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 3993366491717219LLU;
	int64_t x178 = -591819968237LL;
	static volatile uint16_t x179 = 1U;
	volatile uint64_t t44 = 799324662LLU;

	t44 = (x177*((x178==x179)<=x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	uint16_t x182 = 421U;
	uint8_t x183 = 107U;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -27;

	t45 = (x181*((x182==x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 529107201U;
	int16_t x186 = INT16_MAX;
	volatile int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MAX;

	t46 = (x185*((x186==x187)<=x188));

	if (t46 != 529107201U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	static volatile int8_t x191 = -2;
	uint64_t x192 = UINT64_MAX;

	t47 = (x189*((x190==x191)<=x192));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x193 = INT32_MIN;
	volatile uint64_t x194 = 14289056300545838LLU;
	static int8_t x195 = -28;
	static uint64_t x196 = 5266596348631LLU;

	t48 = (x193*((x194==x195)<=x196));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x198 = INT64_MIN;
	int16_t x199 = -82;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 34;

	t49 = (x197*((x198==x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 36U;
	int32_t x203 = INT32_MIN;
	int32_t x204 = -2615;
	int32_t t50 = 14;

	t50 = (x201*((x202==x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	uint16_t x206 = UINT16_MAX;
	int64_t x208 = INT64_MIN;

	t51 = (x205*((x206==x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int16_t x210 = -1;
	static int8_t x211 = -1;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = 3931567326LL;

	t52 = (x209*((x210==x211)<=x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 87U;
	static volatile uint64_t x215 = 3879447608943824LLU;
	uint64_t x216 = UINT64_MAX;
	int64_t t53 = INT64_MAX;

	t53 = (x213*((x214==x215)<=x216));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int16_t x218 = 0;
	int16_t x219 = INT16_MAX;
	uint8_t x220 = 63U;

	t54 = (x217*((x218==x219)<=x220));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 5U;
	static int32_t x222 = -9;
	int64_t x223 = INT64_MIN;
	static int32_t x224 = INT32_MIN;
	int32_t t55 = 13694723;

	t55 = (x221*((x222==x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = 18U;
	static volatile uint32_t x228 = 100U;
	int32_t t56 = -1;

	t56 = (x225*((x226==x227)<=x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	uint64_t x230 = UINT64_MAX;
	static volatile int32_t t57 = 765;

	t57 = (x229*((x230==x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -3151;
	int32_t x234 = 785;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 6798589;

	t58 = (x233*((x234==x235)<=x236));

	if (t58 != -3151) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = 42U;
	int32_t t59 = 1;

	t59 = (x237*((x238==x239)<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 25U;
	volatile uint64_t x242 = UINT64_MAX;
	int64_t x244 = 10476848373409491LL;

	t60 = (x241*((x242==x243)<=x244));

	if (t60 != 25) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = 21U;
	uint32_t x247 = 113268538U;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x245*((x246==x247)<=x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	int64_t x251 = 4322860767742604373LL;
	int8_t x252 = -46;
	int32_t t62 = 319237054;

	t62 = (x249*((x250==x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	int32_t x254 = -1;
	volatile int32_t x255 = INT32_MAX;
	uint8_t x256 = 25U;

	t63 = (x253*((x254==x255)<=x256));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 3;
	int16_t x258 = -8013;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 227163U;
	static int32_t t64 = -260772534;

	t64 = (x257*((x258==x259)<=x260));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	uint64_t x262 = 49738761159394LLU;
	volatile int64_t x263 = -1LL;
	volatile int32_t t65 = -75;

	t65 = (x261*((x262==x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int32_t x266 = INT32_MAX;
	int32_t x267 = 455857;
	static int32_t x268 = 930172773;

	t66 = (x265*((x266==x267)<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int64_t x270 = INT64_MIN;
	int16_t x272 = INT16_MIN;

	t67 = (x269*((x270==x271)<=x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x273 = 5U;
	int32_t x274 = INT32_MIN;
	static uint64_t x276 = 29107LLU;
	static volatile int32_t t68 = -244597;

	t68 = (x273*((x274==x275)<=x276));

	if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = -454;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MIN;

	t69 = (x277*((x278==x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 26U;
	int64_t x282 = INT64_MAX;
	static volatile uint64_t x283 = 6122915LLU;
	volatile int32_t t70 = -31299;

	t70 = (x281*((x282==x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static uint64_t x286 = UINT64_MAX;
	static int64_t x288 = INT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x285*((x286==x287)<=x288));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -5580;
	static volatile uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MAX;

	t72 = (x289*((x290==x291)<=x292));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 14024498U;
	uint32_t x294 = UINT32_MAX;
	static uint32_t x295 = 1U;
	int8_t x296 = 1;
	uint32_t t73 = 120120U;

	t73 = (x293*((x294==x295)<=x296));

	if (t73 != 14024498U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = 63;
	uint16_t x299 = 4U;
	static uint16_t x300 = 1431U;
	static volatile int64_t t74 = 7637225940LL;

	t74 = (x297*((x298==x299)<=x300));

	if (t74 != -559LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MIN;
	volatile int32_t x304 = 47975443;

	t75 = (x301*((x302==x303)<=x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = 3;
	static int32_t x307 = INT32_MIN;
	static int64_t x308 = -386375042399763725LL;
	int32_t t76 = 388;

	t76 = (x305*((x306==x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -1;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 0;

	t77 = (x309*((x310==x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1430942920152LL;
	static uint8_t x315 = 26U;
	uint8_t x316 = 0U;
	volatile int64_t t78 = -26667467LL;

	t78 = (x313*((x314==x315)<=x316));

	if (t78 != -1430942920152LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int16_t x319 = -1;
	int8_t x320 = 14;
	volatile int64_t t79 = -20881784LL;

	t79 = (x317*((x318==x319)<=x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -3;
	int8_t x323 = INT8_MIN;
	int32_t x324 = 3;
	static volatile int32_t t80 = 0;

	t80 = (x321*((x322==x323)<=x324));

	if (t80 != -55040484) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -60;
	int32_t x327 = -1;
	int32_t x328 = INT32_MAX;
	int32_t t81 = 6;

	t81 = (x325*((x326==x327)<=x328));

	if (t81 != -60) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile uint64_t x332 = 15LLU;
	volatile int32_t t82 = 18473794;

	t82 = (x329*((x330==x331)<=x332));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	static int16_t x335 = INT16_MIN;
	static volatile int64_t t83 = INT64_MAX;

	t83 = (x333*((x334==x335)<=x336));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	static int32_t x339 = INT32_MAX;
	volatile uint32_t x340 = 2502U;
	volatile int32_t t84 = 906472205;

	t84 = (x337*((x338==x339)<=x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MAX;
	uint32_t x343 = 2630284U;
	volatile uint8_t x344 = 10U;
	int32_t t85 = 35238;

	t85 = (x341*((x342==x343)<=x344));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	static int8_t x347 = 1;
	uint8_t x348 = 2U;
	int32_t t86 = 1153924;

	t86 = (x345*((x346==x347)<=x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = -258865683;
	volatile int64_t x350 = 2138LL;
	int32_t t87 = 348064920;

	t87 = (x349*((x350==x351)<=x352));

	if (t87 != -258865683) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -6251265;
	static uint32_t x354 = 329U;
	volatile int32_t x355 = INT32_MAX;
	static int64_t x356 = -1LL;
	int32_t t88 = -5233;

	t88 = (x353*((x354==x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile int16_t x358 = INT16_MIN;
	static uint16_t x359 = 15675U;
	static uint8_t x360 = 2U;
	int64_t t89 = INT64_MIN;

	t89 = (x357*((x358==x359)<=x360));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = -1;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;

	t90 = (x361*((x362==x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -42;
	uint8_t x366 = 0U;
	int32_t x367 = -12;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 134;

	t91 = (x365*((x366==x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x369 = -243;
	static uint16_t x370 = 635U;
	volatile int64_t x371 = -5176059884285332LL;
	volatile int16_t x372 = 13808;
	volatile int32_t t92 = 242808;

	t92 = (x369*((x370==x371)<=x372));

	if (t92 != -243) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 3;
	int8_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile int8_t x376 = 0;

	t93 = (x373*((x374==x375)<=x376));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x378 = INT64_MIN;
	uint8_t x379 = 7U;
	int16_t x380 = -5829;
	volatile int32_t t94 = -47;

	t94 = (x377*((x378==x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = 1;
	static int8_t x383 = -18;
	uint32_t x384 = 17852106U;
	static int32_t t95 = INT32_MAX;

	t95 = (x381*((x382==x383)<=x384));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	volatile int16_t x386 = -1;
	static int8_t x388 = -1;
	volatile int64_t t96 = 12LL;

	t96 = (x385*((x386==x387)<=x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	volatile int8_t x390 = -1;
	static volatile uint64_t x391 = 222114LLU;
	uint32_t x392 = 74739U;
	volatile int32_t t97 = -7;

	t97 = (x389*((x390==x391)<=x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MAX;
	int64_t x395 = INT64_MIN;
	volatile int32_t t98 = 283725895;

	t98 = (x393*((x394==x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	uint16_t x398 = UINT16_MAX;
	uint16_t x400 = 1U;

	t99 = (x397*((x398==x399)<=x400));

	if (t99 != 65535) { NG(); } else { ; }
	
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

