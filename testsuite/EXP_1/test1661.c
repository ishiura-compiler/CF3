#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MIN;
volatile int8_t x14 = -1;
int8_t x21 = INT8_MIN;
int32_t x24 = -12066755;
int16_t x36 = INT16_MAX;
uint32_t x38 = 596821U;
int32_t t9 = -125;
volatile int8_t x49 = -1;
int8_t x56 = INT8_MAX;
int32_t t13 = 694234506;
volatile uint64_t x58 = UINT64_MAX;
int32_t t14 = -257205;
uint64_t x61 = 902LLU;
int8_t x62 = -23;
int8_t x63 = -3;
int8_t x69 = INT8_MIN;
int16_t x71 = INT16_MIN;
volatile int32_t t22 = -909589;
static int32_t x96 = INT32_MAX;
int32_t x97 = -1;
static volatile int32_t t24 = -5;
uint8_t x101 = 1U;
static uint64_t x102 = 63804504LLU;
volatile int32_t x103 = INT32_MIN;
volatile int32_t x106 = -192;
int64_t x107 = INT64_MIN;
int8_t x115 = -6;
int8_t x119 = -1;
static int64_t x122 = INT64_MAX;
volatile uint32_t x127 = UINT32_MAX;
int8_t x133 = INT8_MIN;
volatile int32_t x136 = -2614;
int32_t t33 = -4543;
static int16_t x139 = INT16_MIN;
int32_t x144 = 774507;
int8_t x152 = -1;
uint8_t x162 = 105U;
static int32_t t40 = 0;
int32_t x170 = -1;
int8_t x171 = INT8_MAX;
int8_t x172 = 3;
int8_t x177 = -1;
int8_t x181 = -19;
volatile uint16_t x185 = UINT16_MAX;
static int8_t x186 = INT8_MIN;
static volatile int32_t t46 = 52213;
int32_t t48 = 1896445;
int16_t x199 = INT16_MIN;
int8_t x204 = -34;
volatile int32_t t51 = 10566;
static volatile int32_t t52 = 4;
int32_t x225 = -1;
static int16_t x232 = INT16_MIN;
volatile int32_t t60 = 409;
int64_t x249 = 0LL;
static int64_t x250 = -1LL;
static volatile int32_t t63 = 227771;
volatile uint64_t x263 = UINT64_MAX;
int16_t x270 = INT16_MIN;
volatile uint32_t x271 = 3140U;
int32_t t68 = 6113726;
static volatile int32_t x277 = -1;
int8_t x279 = 47;
static int32_t x282 = -249869;
uint64_t x289 = 658850LLU;
static int8_t x290 = -1;
int32_t x293 = -1;
static volatile int32_t t73 = -8;
int64_t x299 = -55577LL;
volatile int32_t x311 = INT32_MIN;
uint16_t x313 = 379U;
volatile int64_t x316 = INT64_MAX;
int16_t x320 = INT16_MAX;
int16_t x331 = INT16_MIN;
int32_t t82 = 713;
static int64_t x340 = INT64_MIN;
static int8_t x347 = INT8_MIN;
static volatile int8_t x355 = -1;
uint64_t x370 = 5056482941704595216LLU;
static uint16_t x373 = UINT16_MAX;
uint8_t x379 = UINT8_MAX;
uint8_t x381 = 3U;
int32_t x386 = INT32_MIN;
int8_t x387 = INT8_MIN;
uint8_t x390 = 0U;
int16_t x396 = INT16_MIN;
uint8_t x399 = 2U;


void f0(void) {
	static uint32_t x1 = 673497265U;
	int32_t x2 = INT32_MIN;
	static int8_t x3 = INT8_MIN;
	int16_t x4 = -1103;
	int32_t t0 = -5;

	t0 = (((x1<=x2)&x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 37U;
	static uint32_t x6 = 7039574U;
	int16_t x7 = -15;
	static int32_t x8 = -1724230;
	volatile int32_t t1 = -334119;

	t1 = (((x5<=x6)&x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int8_t x11 = 43;
	uint32_t x12 = 3181941U;
	static volatile int32_t t2 = 6;

	t2 = (((x9<=x10)&x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint16_t x15 = 12U;
	volatile int8_t x16 = INT8_MAX;
	int32_t t3 = -2;

	t3 = (((x13<=x14)&x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint8_t x18 = 3U;
	static uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 411;

	t4 = (((x17<=x18)&x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = 0;
	static volatile int16_t x23 = INT16_MIN;
	int32_t t5 = -229018;

	t5 = (((x21<=x22)&x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 6U;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	int8_t x28 = -1;
	int32_t t6 = -4889954;

	t6 = (((x25<=x26)&x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -154653496;

	t7 = (((x29<=x30)&x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 14411881LLU;
	uint16_t x34 = 55U;
	int16_t x35 = INT16_MIN;
	volatile int32_t t8 = 30207742;

	t8 = (((x33<=x34)&x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = 9014LLU;
	volatile int32_t x39 = -2788201;
	int8_t x40 = 57;

	t9 = (((x37<=x38)&x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	static volatile int64_t x42 = -1LL;
	int8_t x43 = 33;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 6914593;

	t10 = (((x41<=x42)&x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x45 = 0U;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -217;
	static int64_t x48 = -31431846LL;
	static int32_t t11 = 29644;

	t11 = (((x45<=x46)&x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	uint64_t x51 = 75428673LLU;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -7771;

	t12 = (((x49<=x50)&x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = 10146;
	int32_t x55 = -1;

	t13 = (((x53<=x54)&x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 591438390270533LL;
	uint64_t x59 = 1065569601637598LLU;
	volatile int32_t x60 = -1;

	t14 = (((x57<=x58)&x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x64 = 3U;
	int32_t t15 = 217;

	t15 = (((x61<=x62)&x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 206U;
	static int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -53537952;

	t16 = (((x65<=x66)&x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x70 = 342125U;
	volatile int32_t x72 = INT32_MIN;
	int32_t t17 = -10695;

	t17 = (((x69<=x70)&x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -2128076LL;
	static int16_t x74 = INT16_MAX;
	int64_t x75 = 69752LL;
	volatile int8_t x76 = 20;
	int32_t t18 = 3447;

	t18 = (((x73<=x74)&x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 9474509U;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = 1763LLU;
	static volatile int8_t x80 = -45;
	int32_t t19 = -98961;

	t19 = (((x77<=x78)&x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -14732;
	int8_t x82 = INT8_MAX;
	volatile uint32_t x83 = 829228485U;
	uint64_t x84 = 11672LLU;
	static volatile int32_t t20 = -1;

	t20 = (((x81<=x82)&x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int64_t x86 = INT64_MAX;
	int64_t x87 = 1374392576247456LL;
	uint32_t x88 = UINT32_MAX;
	static int32_t t21 = 296095147;

	t21 = (((x85<=x86)&x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 15409395;
	static uint8_t x90 = 107U;
	static int16_t x91 = 102;
	int64_t x92 = 2686571LL;

	t22 = (((x89<=x90)&x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 104;
	static int32_t x94 = INT32_MIN;
	static int16_t x95 = 492;
	volatile int32_t t23 = -4292;

	t23 = (((x93<=x94)&x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MAX;
	static int16_t x100 = INT16_MAX;

	t24 = (((x97<=x98)&x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 4;

	t25 = (((x101<=x102)&x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 2236040;

	t26 = (((x105<=x106)&x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 1074;
	int64_t x110 = INT64_MIN;
	int32_t x111 = -362515114;
	int16_t x112 = -782;
	volatile int32_t t27 = -5;

	t27 = (((x109<=x110)&x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 425;
	volatile uint8_t x114 = 26U;
	static uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = -3867757;

	t28 = (((x113<=x114)&x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int32_t x118 = -1;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -1;

	t29 = (((x117<=x118)&x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	int16_t x123 = INT16_MAX;
	int64_t x124 = INT64_MAX;
	volatile int32_t t30 = 169302636;

	t30 = (((x121<=x122)&x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	volatile int8_t x126 = -4;
	volatile int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = -6;

	t31 = (((x125<=x126)&x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 3595;
	int8_t x130 = INT8_MAX;
	int32_t x131 = INT32_MIN;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -108109;

	t32 = (((x129<=x130)&x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static int16_t x135 = 14;

	t33 = (((x133<=x134)&x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int16_t x138 = -407;
	uint16_t x140 = 9665U;
	volatile int32_t t34 = -7613578;

	t34 = (((x137<=x138)&x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = 13130204;
	uint64_t x142 = 1821732164583LLU;
	uint64_t x143 = 1933LLU;
	int32_t t35 = 31966;

	t35 = (((x141<=x142)&x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	volatile uint8_t x146 = 108U;
	static int64_t x147 = -173099LL;
	volatile uint8_t x148 = 30U;
	int32_t t36 = -698694;

	t36 = (((x145<=x146)&x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 221U;
	static uint32_t x150 = UINT32_MAX;
	int8_t x151 = 0;
	volatile int32_t t37 = 7356;

	t37 = (((x149<=x150)&x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint16_t x154 = 431U;
	uint16_t x155 = 11U;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = 273840;

	t38 = (((x153<=x154)&x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static volatile uint16_t x158 = UINT16_MAX;
	static int64_t x159 = INT64_MIN;
	static volatile int64_t x160 = INT64_MIN;
	int32_t t39 = 194665;

	t39 = (((x157<=x158)&x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x163 = -1;
	int8_t x164 = INT8_MAX;

	t40 = (((x161<=x162)&x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	uint32_t x166 = 179292U;
	static int64_t x167 = INT64_MIN;
	volatile uint64_t x168 = UINT64_MAX;
	volatile int32_t t41 = -222484;

	t41 = (((x165<=x166)&x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	volatile int32_t t42 = 6806107;

	t42 = (((x169<=x170)&x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -3584236;
	static uint16_t x174 = 0U;
	static int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -1;

	t43 = (((x173<=x174)&x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = 15244;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = -53464187;

	t44 = (((x177<=x178)&x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = INT16_MIN;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 3;

	t45 = (((x181<=x182)&x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x187 = INT32_MAX;
	static int8_t x188 = -1;

	t46 = (((x185<=x186)&x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	int8_t x191 = -1;
	static volatile uint8_t x192 = UINT8_MAX;
	int32_t t47 = 342;

	t47 = (((x189<=x190)&x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = 26601433172LL;
	int64_t x194 = 36LL;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;

	t48 = (((x193<=x194)&x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 56;
	int16_t x198 = -1;
	int32_t x200 = 413422018;
	int32_t t49 = 110369;

	t49 = (((x197<=x198)&x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 48U;
	uint8_t x202 = 34U;
	uint8_t x203 = 38U;
	int32_t t50 = -14;

	t50 = (((x201<=x202)&x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	volatile int8_t x207 = 3;
	static uint8_t x208 = UINT8_MAX;

	t51 = (((x205<=x206)&x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 28172720741310LL;
	int64_t x210 = 206LL;
	int8_t x211 = -1;
	static int16_t x212 = INT16_MIN;

	t52 = (((x209<=x210)&x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 32247LL;
	static volatile int32_t x214 = INT32_MIN;
	uint8_t x215 = 4U;
	static uint8_t x216 = UINT8_MAX;
	static volatile int32_t t53 = 444;

	t53 = (((x213<=x214)&x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;
	static uint16_t x220 = 31366U;
	int32_t t54 = -106869;

	t54 = (((x217<=x218)&x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 0U;
	static int64_t x222 = INT64_MIN;
	volatile int64_t x223 = INT64_MIN;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = 13;

	t55 = (((x221<=x222)&x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = UINT64_MAX;
	uint32_t x227 = 10U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -21;

	t56 = (((x225<=x226)&x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 3206;
	uint16_t x230 = UINT16_MAX;
	volatile uint64_t x231 = 34646203969594550LLU;
	volatile int32_t t57 = -812474;

	t57 = (((x229<=x230)&x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = -1LL;
	int8_t x236 = 0;
	volatile int32_t t58 = 63;

	t58 = (((x233<=x234)&x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = -4050;

	t59 = (((x237<=x238)&x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = INT16_MAX;
	static int64_t x243 = -1664533030LL;
	volatile int8_t x244 = INT8_MIN;

	t60 = (((x241<=x242)&x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 17U;
	int8_t x246 = INT8_MAX;
	int32_t x247 = -874316722;
	static int64_t x248 = INT64_MIN;
	int32_t t61 = 26636913;

	t61 = (((x245<=x246)&x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x251 = -17;
	static volatile int32_t x252 = -1;
	volatile int32_t t62 = 10;

	t62 = (((x249<=x250)&x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 18133556315739140LL;
	int8_t x254 = -1;
	int8_t x255 = -1;
	static uint16_t x256 = UINT16_MAX;

	t63 = (((x253<=x254)&x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = -1;
	static volatile int8_t x258 = -15;
	volatile uint16_t x259 = UINT16_MAX;
	int64_t x260 = 2348833655LL;
	volatile int32_t t64 = 6;

	t64 = (((x257<=x258)&x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x262 = 0;
	int16_t x264 = -1;
	volatile int32_t t65 = 496752656;

	t65 = (((x261<=x262)&x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int8_t x266 = INT8_MAX;
	int8_t x267 = -5;
	static volatile int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = 372634760;

	t66 = (((x265<=x266)&x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 243258420;

	t67 = (((x269<=x270)&x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static volatile uint32_t x274 = UINT32_MAX;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;

	t68 = (((x273<=x274)&x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -58046858578992LL;
	volatile uint8_t x280 = 72U;
	volatile int32_t t69 = 0;

	t69 = (((x277<=x278)&x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -457880283;
	int16_t x283 = -1;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 958047050;

	t70 = (((x281<=x282)&x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MIN;
	uint16_t x286 = 99U;
	int8_t x287 = 1;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = 10;

	t71 = (((x285<=x286)&x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x291 = INT32_MIN;
	int32_t x292 = -1;
	static volatile int32_t t72 = -4953;

	t72 = (((x289<=x290)&x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	int64_t x296 = INT64_MAX;

	t73 = (((x293<=x294)&x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -63;

	t74 = (((x297<=x298)&x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint64_t x302 = 3741748LLU;
	volatile int32_t x303 = -639327180;
	int16_t x304 = -1;
	volatile int32_t t75 = 759;

	t75 = (((x301<=x302)&x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int32_t x306 = -1;
	int32_t x307 = INT32_MAX;
	int32_t x308 = 419705532;
	int32_t t76 = -1;

	t76 = (((x305<=x306)&x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t77 = -188527;

	t77 = (((x309<=x310)&x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x314 = -1;
	int32_t x315 = INT32_MAX;
	int32_t t78 = 0;

	t78 = (((x313<=x314)&x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -3744571004308419039LL;
	int64_t x318 = INT64_MAX;
	int16_t x319 = INT16_MAX;
	int32_t t79 = -93733;

	t79 = (((x317<=x318)&x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	volatile uint64_t x322 = 4LLU;
	volatile uint16_t x323 = 27109U;
	static uint64_t x324 = UINT64_MAX;
	static int32_t t80 = 110;

	t80 = (((x321<=x322)&x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 527;
	int8_t x327 = INT8_MAX;
	static int8_t x328 = 7;
	int32_t t81 = -2660328;

	t81 = (((x325<=x326)&x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	uint64_t x330 = 1249LLU;
	static uint8_t x332 = UINT8_MAX;

	t82 = (((x329<=x330)&x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MIN;
	uint16_t x335 = 23U;
	static volatile int8_t x336 = -1;
	volatile int32_t t83 = -119016825;

	t83 = (((x333<=x334)&x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x337 = -1;
	volatile int32_t x338 = INT32_MAX;
	int16_t x339 = -60;
	volatile int32_t t84 = 507155;

	t84 = (((x337<=x338)&x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = 6552LL;
	volatile int16_t x342 = INT16_MIN;
	uint64_t x343 = 34995000LLU;
	int16_t x344 = -1;
	int32_t t85 = 3;

	t85 = (((x341<=x342)&x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 20U;
	volatile uint16_t x346 = 3947U;
	volatile int64_t x348 = 2838LL;
	volatile int32_t t86 = -61477246;

	t86 = (((x345<=x346)&x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 36729144101546972LLU;
	static volatile int64_t x352 = 242655478088LL;
	int32_t t87 = 265056351;

	t87 = (((x349<=x350)&x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 15U;
	volatile int32_t x354 = INT32_MIN;
	uint32_t x356 = 19869725U;
	int32_t t88 = 693;

	t88 = (((x353<=x354)&x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 13;
	static int32_t x358 = 2;
	uint64_t x359 = 1LLU;
	int64_t x360 = INT64_MAX;
	static int32_t t89 = -85;

	t89 = (((x357<=x358)&x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint8_t x362 = 0U;
	volatile int16_t x363 = INT16_MIN;
	int16_t x364 = -1;
	volatile int32_t t90 = -63370987;

	t90 = (((x361<=x362)&x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -6;
	volatile int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	static volatile uint16_t x368 = UINT16_MAX;
	static volatile int32_t t91 = -1062518437;

	t91 = (((x365<=x366)&x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = 12527842;

	t92 = (((x369<=x370)&x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x374 = 2;
	int32_t x375 = INT32_MAX;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = 98547;

	t93 = (((x373<=x374)&x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = -11448;
	int32_t x380 = INT32_MIN;
	static int32_t t94 = -1;

	t94 = (((x377<=x378)&x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x382 = 4;
	static int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 7769;

	t95 = (((x381<=x382)&x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 1;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -20276;

	t96 = (((x385<=x386)&x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 38589149;

	t97 = (((x389<=x390)&x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 1;
	volatile uint8_t x394 = 54U;
	static int64_t x395 = INT64_MIN;
	volatile int32_t t98 = -102;

	t98 = (((x393<=x394)&x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = 340U;
	volatile int64_t x398 = INT64_MIN;
	int16_t x400 = -1;
	int32_t t99 = 66451;

	t99 = (((x397<=x398)&x399)<=x400);

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

