#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = -1;
int8_t x4 = INT8_MIN;
uint32_t x6 = 211U;
int8_t x7 = INT8_MAX;
volatile int64_t x8 = INT64_MIN;
uint16_t x11 = 2U;
int32_t x13 = 0;
uint8_t x24 = UINT8_MAX;
int8_t x32 = INT8_MAX;
uint16_t x38 = UINT16_MAX;
int32_t t10 = 0;
uint64_t x50 = 36320930115302LLU;
int8_t x55 = INT8_MIN;
volatile int32_t t13 = -897;
volatile int32_t x67 = INT32_MIN;
static uint64_t x72 = UINT64_MAX;
int64_t x75 = -2254101531184118LL;
int32_t t18 = -1;
int32_t x80 = -1;
int32_t x86 = INT32_MAX;
int8_t x87 = 54;
static uint8_t x92 = UINT8_MAX;
uint64_t x96 = 68758472371899242LLU;
int32_t t23 = 17037319;
uint16_t x103 = UINT16_MAX;
volatile int32_t t27 = 9;
volatile int64_t x117 = INT64_MAX;
int32_t x127 = 0;
static int32_t t31 = -3;
volatile int32_t t32 = -156;
int8_t x141 = INT8_MAX;
static volatile int32_t x144 = -1;
int32_t t35 = 237;
int16_t x148 = -1;
volatile int64_t x149 = -1LL;
int16_t x150 = INT16_MIN;
int64_t x151 = INT64_MAX;
uint8_t x162 = 62U;
static int32_t t40 = 77596;
uint32_t x175 = 0U;
uint32_t x177 = UINT32_MAX;
int8_t x182 = 1;
volatile int16_t x183 = -15;
static int16_t x189 = INT16_MIN;
static int32_t t47 = -147;
uint16_t x193 = UINT16_MAX;
int64_t x204 = 285531LL;
volatile uint8_t x206 = UINT8_MAX;
uint8_t x211 = UINT8_MAX;
int32_t t53 = 2;
static int32_t x220 = INT32_MIN;
int32_t x227 = -1740561;
static volatile int32_t t56 = -21;
int32_t t58 = -9;
int8_t x240 = INT8_MIN;
int32_t t61 = -300055441;
int64_t x257 = INT64_MAX;
int8_t x263 = -19;
int16_t x265 = 1;
static uint32_t x276 = 676956U;
uint64_t x281 = UINT64_MAX;
uint8_t x284 = 51U;
int32_t t71 = 1004867;
volatile int64_t x291 = INT64_MIN;
volatile uint32_t x292 = 44862U;
int8_t x293 = -1;
volatile int32_t t75 = 1697929;
uint8_t x325 = 36U;
int64_t x327 = -32708921232565096LL;
uint8_t x330 = 47U;
static volatile int16_t x331 = 248;
int64_t x337 = INT64_MIN;
uint16_t x342 = 1U;
int32_t t86 = -5;
int8_t x349 = INT8_MIN;
static int32_t x360 = INT32_MIN;
int8_t x362 = INT8_MAX;
int8_t x366 = INT8_MIN;
static int32_t x368 = INT32_MAX;
uint64_t x374 = 61756546210LLU;
volatile int32_t t93 = 8256;
uint64_t x381 = UINT64_MAX;
volatile int32_t t96 = 0;
volatile int16_t x394 = -1;
int32_t t98 = -66974;


void f0(void) {
	uint8_t x1 = 23U;
	uint16_t x2 = 1U;
	static int32_t t0 = -8045714;

	t0 = (((x1<=x2)&x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static volatile int32_t t1 = 7205033;

	t1 = (((x5<=x6)&x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = INT16_MAX;
	uint8_t x12 = 15U;
	volatile int32_t t2 = -38466305;

	t2 = (((x9<=x10)&x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x14 = 341983U;
	int64_t x15 = 655025244749289LL;
	uint32_t x16 = 0U;
	int32_t t3 = 218416;

	t3 = (((x13<=x14)&x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint32_t x18 = 142685U;
	int8_t x19 = INT8_MAX;
	int32_t x20 = -68;
	int32_t t4 = -18157947;

	t4 = (((x17<=x18)&x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 81587U;
	uint64_t x22 = 482465559271LLU;
	static int32_t x23 = -17822852;
	static volatile int32_t t5 = 1;

	t5 = (((x21<=x22)&x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	int64_t x26 = INT64_MIN;
	uint8_t x27 = 78U;
	static uint16_t x28 = 7747U;
	volatile int32_t t6 = 255879;

	t6 = (((x25<=x26)&x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1054U;
	int16_t x30 = INT16_MIN;
	int64_t x31 = 2079263891242802LL;
	volatile int32_t t7 = -25584739;

	t7 = (((x29<=x30)&x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	static int32_t x36 = INT32_MAX;
	int32_t t8 = -149014191;

	t8 = (((x33<=x34)&x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static uint16_t x39 = 10U;
	int16_t x40 = -1;
	int32_t t9 = 26300314;

	t9 = (((x37<=x38)&x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 68677167U;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MAX;
	volatile int64_t x44 = INT64_MIN;

	t10 = (((x41<=x42)&x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	int8_t x46 = -31;
	static volatile int64_t x47 = -1628LL;
	int64_t x48 = INT64_MAX;
	int32_t t11 = 293828;

	t11 = (((x45<=x46)&x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t12 = -22;

	t12 = (((x49<=x50)&x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int32_t x54 = -1;
	int16_t x56 = INT16_MAX;

	t13 = (((x53<=x54)&x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	static int32_t x58 = INT32_MIN;
	volatile uint16_t x59 = 315U;
	int16_t x60 = 2;
	static volatile int32_t t14 = 52364;

	t14 = (((x57<=x58)&x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = 182735U;
	static volatile uint16_t x63 = 22U;
	static uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 33244846;

	t15 = (((x61<=x62)&x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x66 = 7357237027LLU;
	uint8_t x68 = 83U;
	static int32_t t16 = 1;

	t16 = (((x65<=x66)&x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MIN;
	int32_t t17 = 3;

	t17 = (((x69<=x70)&x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	uint8_t x74 = 2U;
	volatile int8_t x76 = 0;

	t18 = (((x73<=x74)&x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 3;
	uint32_t x78 = 1U;
	int16_t x79 = 73;
	int32_t t19 = -6822;

	t19 = (((x77<=x78)&x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 31LLU;
	int32_t x82 = INT32_MIN;
	uint64_t x83 = UINT64_MAX;
	static int8_t x84 = 0;
	volatile int32_t t20 = 3471055;

	t20 = (((x81<=x82)&x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 610723177U;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 269;

	t21 = (((x85<=x86)&x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = UINT64_MAX;
	static uint16_t x90 = UINT16_MAX;
	int32_t x91 = 58;
	static volatile int32_t t22 = -12;

	t22 = (((x89<=x90)&x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int16_t x95 = -1;

	t23 = (((x93<=x94)&x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -49231LL;
	volatile int64_t x98 = 717LL;
	int8_t x99 = -1;
	int32_t x100 = INT32_MAX;
	int32_t t24 = -15;

	t24 = (((x97<=x98)&x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 53U;
	volatile int16_t x102 = -37;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -811;

	t25 = (((x101<=x102)&x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = 99U;
	volatile int16_t x108 = -1;
	int32_t t26 = 591;

	t26 = (((x105<=x106)&x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	int8_t x111 = -1;
	int16_t x112 = INT16_MIN;

	t27 = (((x109<=x110)&x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = 121U;
	uint8_t x115 = 83U;
	uint32_t x116 = 805163605U;
	volatile int32_t t28 = 202066122;

	t28 = (((x113<=x114)&x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	uint64_t x119 = 1LLU;
	int8_t x120 = INT8_MAX;
	int32_t t29 = 967;

	t29 = (((x117<=x118)&x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 15U;
	volatile uint64_t x122 = UINT64_MAX;
	static uint16_t x123 = UINT16_MAX;
	uint16_t x124 = UINT16_MAX;
	static volatile int32_t t30 = 29;

	t30 = (((x121<=x122)&x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int8_t x128 = 16;

	t31 = (((x125<=x126)&x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = -2149;
	static uint64_t x132 = UINT64_MAX;

	t32 = (((x129<=x130)&x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -27734946222706LL;
	int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 13900932U;
	int32_t t33 = 86;

	t33 = (((x133<=x134)&x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 5341020LL;
	int32_t x138 = INT32_MIN;
	int64_t x139 = 5280249LL;
	int8_t x140 = -10;
	volatile int32_t t34 = 26031836;

	t34 = (((x137<=x138)&x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = 328519U;
	int32_t x143 = INT32_MIN;

	t35 = (((x141<=x142)&x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int64_t x146 = -13197393729LL;
	uint32_t x147 = 0U;
	volatile int32_t t36 = -38038;

	t36 = (((x145<=x146)&x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x152 = -513;
	static int32_t t37 = 6495;

	t37 = (((x149<=x150)&x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 22459762U;
	uint16_t x154 = UINT16_MAX;
	volatile int64_t x155 = INT64_MIN;
	static int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 29166;

	t38 = (((x153<=x154)&x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	volatile int16_t x158 = -1;
	volatile int32_t x159 = -10716205;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = 1;

	t39 = (((x157<=x158)&x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = -26;
	int64_t x163 = INT64_MIN;
	static volatile int8_t x164 = 27;

	t40 = (((x161<=x162)&x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 1LLU;
	uint8_t x166 = UINT8_MAX;
	static uint32_t x167 = UINT32_MAX;
	static int64_t x168 = -1907561LL;
	volatile int32_t t41 = -28166159;

	t41 = (((x165<=x166)&x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = 140752946890281050LLU;
	static uint8_t x171 = 7U;
	static int32_t x172 = 2453676;
	int32_t t42 = -11;

	t42 = (((x169<=x170)&x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int16_t x174 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t43 = 3154660;

	t43 = (((x173<=x174)&x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 1474LLU;
	uint16_t x179 = 461U;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = 33307;

	t44 = (((x177<=x178)&x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -27358922172LL;
	volatile int8_t x184 = 31;
	volatile int32_t t45 = 9;

	t45 = (((x181<=x182)&x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 1U;
	int32_t t46 = -7358720;

	t46 = (((x185<=x186)&x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = 10081194U;
	int64_t x191 = 10517LL;
	int64_t x192 = -1076LL;

	t47 = (((x189<=x190)&x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MAX;
	int64_t x195 = -1LL;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -6093123;

	t48 = (((x193<=x194)&x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	static volatile uint16_t x198 = UINT16_MAX;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MAX;
	int32_t t49 = 220;

	t49 = (((x197<=x198)&x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	int16_t x202 = -1;
	int64_t x203 = INT64_MIN;
	int32_t t50 = -25232;

	t50 = (((x201<=x202)&x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 0U;
	static int16_t x207 = -5;
	uint16_t x208 = 11406U;
	static volatile int32_t t51 = -580;

	t51 = (((x205<=x206)&x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	int8_t x210 = -1;
	int8_t x212 = -1;
	int32_t t52 = 231339;

	t52 = (((x209<=x210)&x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 0U;
	uint64_t x214 = 2213123382013756663LLU;
	static int8_t x215 = -4;
	static int32_t x216 = 1;

	t53 = (((x213<=x214)&x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	uint8_t x219 = UINT8_MAX;
	volatile int32_t t54 = 1;

	t54 = (((x217<=x218)&x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MAX;
	static uint32_t x222 = 73430050U;
	static uint8_t x223 = 75U;
	volatile int8_t x224 = -7;
	static int32_t t55 = 8528756;

	t55 = (((x221<=x222)&x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int8_t x226 = INT8_MIN;
	static int16_t x228 = -25;

	t56 = (((x225<=x226)&x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MAX;
	uint16_t x230 = 2777U;
	static uint64_t x231 = UINT64_MAX;
	uint32_t x232 = 1156U;
	volatile int32_t t57 = -9;

	t57 = (((x229<=x230)&x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 4;
	static volatile int64_t x234 = -1171465LL;
	int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;

	t58 = (((x233<=x234)&x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 106461802U;
	static int16_t x238 = INT16_MIN;
	static int32_t x239 = INT32_MAX;
	int32_t t59 = -9630330;

	t59 = (((x237<=x238)&x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	volatile int8_t x242 = 0;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	volatile int32_t t60 = -23457;

	t60 = (((x241<=x242)&x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 9;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 3U;

	t61 = (((x245<=x246)&x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	int16_t x250 = 13;
	int64_t x251 = 1172343LL;
	volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 502831845;

	t62 = (((x249<=x250)&x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	uint32_t x254 = 170890U;
	volatile int8_t x255 = 4;
	static int32_t x256 = INT32_MIN;
	int32_t t63 = -35757;

	t63 = (((x253<=x254)&x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MAX;
	volatile int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = 20974244;

	t64 = (((x257<=x258)&x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 1;
	uint64_t x262 = 28322593778522LLU;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = 91048;

	t65 = (((x261<=x262)&x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 10U;
	int8_t x267 = INT8_MIN;
	static uint64_t x268 = 3LLU;
	volatile int32_t t66 = -1;

	t66 = (((x265<=x266)&x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	static int8_t x271 = 1;
	int16_t x272 = -178;
	volatile int32_t t67 = -592264201;

	t67 = (((x269<=x270)&x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MAX;
	volatile uint32_t x274 = 1U;
	static uint8_t x275 = 4U;
	static volatile int32_t t68 = -1;

	t68 = (((x273<=x274)&x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 1U;
	int8_t x278 = -1;
	uint8_t x279 = 0U;
	uint16_t x280 = 36U;
	static int32_t t69 = -4;

	t69 = (((x277<=x278)&x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = INT16_MIN;
	uint64_t x283 = 3081700709115804371LLU;
	volatile int32_t t70 = 21726860;

	t70 = (((x281<=x282)&x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = 108371178LL;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = 1244840058U;
	uint64_t x288 = 1083998LLU;

	t71 = (((x285<=x286)&x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 2917278U;
	static uint8_t x290 = 11U;
	int32_t t72 = 1;

	t72 = (((x289<=x290)&x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = 6426496344116569LL;
	int32_t x295 = -1;
	uint16_t x296 = 0U;
	int32_t t73 = 25525;

	t73 = (((x293<=x294)&x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = 459920081288379LL;
	volatile int64_t x299 = INT64_MIN;
	int8_t x300 = 30;
	int32_t t74 = 12879524;

	t74 = (((x297<=x298)&x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 0;
	volatile int32_t x302 = INT32_MIN;
	int16_t x303 = -1;
	static volatile int32_t x304 = -1;

	t75 = (((x301<=x302)&x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int16_t x306 = -1;
	static volatile int64_t x307 = 421LL;
	volatile int8_t x308 = -2;
	static volatile int32_t t76 = -1413148;

	t76 = (((x305<=x306)&x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile int64_t x310 = -6475936937LL;
	static volatile uint16_t x311 = 13U;
	int64_t x312 = -1LL;
	volatile int32_t t77 = 3501383;

	t77 = (((x309<=x310)&x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -162158072835909390LL;
	int64_t x314 = -18LL;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	volatile int32_t t78 = 1344;

	t78 = (((x313<=x314)&x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 15LLU;
	uint32_t x318 = 501U;
	int8_t x319 = -3;
	int32_t x320 = -124355;
	volatile int32_t t79 = 1315565;

	t79 = (((x317<=x318)&x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 10U;
	volatile int64_t x322 = INT64_MIN;
	int8_t x323 = -1;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = 599242084;

	t80 = (((x321<=x322)&x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -7405;
	int16_t x328 = -34;
	static int32_t t81 = 114665;

	t81 = (((x325<=x326)&x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 35U;
	int8_t x332 = INT8_MAX;
	static int32_t t82 = -5020658;

	t82 = (((x329<=x330)&x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile int16_t x334 = 393;
	int16_t x335 = INT16_MAX;
	static int16_t x336 = INT16_MIN;
	int32_t t83 = -26;

	t83 = (((x333<=x334)&x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x338 = UINT32_MAX;
	static uint64_t x339 = 212797016792307602LLU;
	volatile uint8_t x340 = 6U;
	volatile int32_t t84 = -9729154;

	t84 = (((x337<=x338)&x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static volatile int16_t x343 = 1741;
	static uint16_t x344 = 10U;
	volatile int32_t t85 = 110942647;

	t85 = (((x341<=x342)&x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 52198367U;
	uint64_t x346 = 491830035LLU;
	volatile int32_t x347 = -1;
	int64_t x348 = -1LL;

	t86 = (((x345<=x346)&x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = -1;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 357;

	t87 = (((x349<=x350)&x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MAX;
	int32_t t88 = -73002912;

	t88 = (((x353<=x354)&x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = -1;
	int32_t x358 = -1;
	static int64_t x359 = 322447LL;
	int32_t t89 = -1;

	t89 = (((x357<=x358)&x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -15112;
	static volatile int64_t x363 = INT64_MIN;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = -486626722;

	t90 = (((x361<=x362)&x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 9U;
	static uint16_t x367 = 4U;
	volatile int32_t t91 = 4;

	t91 = (((x365<=x366)&x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -1;
	static uint64_t x370 = 3808114053LLU;
	uint8_t x371 = UINT8_MAX;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -552443;

	t92 = (((x369<=x370)&x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -42202772207LL;
	int32_t x375 = -1;
	int64_t x376 = INT64_MIN;

	t93 = (((x373<=x374)&x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -6815;
	volatile uint32_t x378 = 2326514U;
	static uint8_t x379 = UINT8_MAX;
	static int32_t x380 = INT32_MAX;
	int32_t t94 = -416002279;

	t94 = (((x377<=x378)&x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = 7843;
	static int8_t x383 = 0;
	uint8_t x384 = 0U;
	volatile int32_t t95 = -7257;

	t95 = (((x381<=x382)&x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 75;
	int64_t x386 = INT64_MIN;
	static volatile int32_t x387 = -24092;
	int16_t x388 = INT16_MAX;

	t96 = (((x385<=x386)&x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 122;
	int16_t x390 = INT16_MIN;
	volatile uint32_t x391 = 106503306U;
	uint32_t x392 = 54504U;
	volatile int32_t t97 = -105;

	t97 = (((x389<=x390)&x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 59496190937624LLU;
	int16_t x395 = INT16_MAX;
	volatile int32_t x396 = INT32_MIN;

	t98 = (((x393<=x394)&x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = 6448LL;
	static int16_t x398 = -1;
	int64_t x399 = -1LL;
	uint32_t x400 = 132508239U;
	int32_t t99 = 59;

	t99 = (((x397<=x398)&x399)<x400);

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

