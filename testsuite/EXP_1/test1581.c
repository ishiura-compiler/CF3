#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 121U;
uint8_t x4 = UINT8_MAX;
int32_t t0 = -877;
int32_t x15 = -5552;
static volatile int32_t t3 = 23;
static int8_t x17 = 13;
int32_t t5 = 671774;
volatile int16_t x29 = -259;
volatile int8_t x36 = 0;
static int64_t x37 = -8LL;
int32_t x41 = -1;
uint16_t x44 = 27020U;
static volatile int32_t t10 = 8557593;
uint32_t x46 = 61520U;
int16_t x48 = -1;
volatile uint8_t x53 = 0U;
int8_t x55 = -49;
volatile int32_t t13 = 1;
uint64_t x59 = 255LLU;
uint8_t x65 = 1U;
static int32_t t16 = 6;
int64_t x71 = INT64_MAX;
int8_t x73 = -1;
volatile int32_t t21 = -256739;
int8_t x89 = -51;
static volatile uint16_t x95 = 96U;
int32_t x100 = -1;
int8_t x102 = INT8_MAX;
static int64_t x106 = -1LL;
int16_t x110 = -1;
volatile int16_t x114 = -1;
int32_t x118 = INT32_MIN;
volatile uint64_t x135 = 6LLU;
int32_t t33 = -3186;
uint32_t x141 = 8324U;
int32_t x143 = INT32_MIN;
volatile int16_t x149 = -42;
int32_t x153 = INT32_MAX;
volatile int32_t t38 = -97016;
volatile int16_t x163 = -1;
int32_t t40 = 127595855;
volatile int32_t t41 = 15;
volatile int8_t x175 = INT8_MIN;
int32_t x179 = INT32_MIN;
volatile int64_t x182 = INT64_MIN;
volatile uint32_t x186 = 1U;
volatile int64_t x191 = INT64_MIN;
int32_t x192 = INT32_MIN;
uint64_t x194 = 4229033820512LLU;
int32_t t49 = -11491;
int8_t x203 = INT8_MAX;
int64_t x204 = -154LL;
int8_t x207 = -21;
uint8_t x208 = 27U;
uint32_t x210 = UINT32_MAX;
uint16_t x213 = 545U;
static int8_t x215 = -3;
static int8_t x222 = INT8_MIN;
uint8_t x225 = 3U;
static int8_t x227 = INT8_MIN;
volatile int32_t x231 = -118034266;
uint16_t x237 = UINT16_MAX;
int8_t x244 = -1;
volatile int8_t x248 = -1;
volatile int32_t t63 = 615;
volatile uint64_t x265 = 27780041715147001LLU;
static int16_t x271 = 1;
volatile uint32_t x272 = 32184131U;
uint8_t x274 = 28U;
static int64_t x283 = -132372611LL;
static int64_t x292 = -1LL;
static int32_t x296 = INT32_MIN;
static int32_t t73 = 249149;
int16_t x303 = 196;
int8_t x306 = 0;
int8_t x315 = -1;
uint16_t x319 = 4U;
volatile uint16_t x322 = UINT16_MAX;
uint16_t x325 = UINT16_MAX;
volatile int32_t t83 = 2643845;
int64_t x338 = INT64_MIN;
int64_t x339 = -18778048564LL;
volatile int32_t t85 = -321;
uint64_t x347 = 4192530503LLU;
int16_t x351 = INT16_MAX;
volatile int32_t t87 = -4467344;
static int16_t x353 = INT16_MIN;
int16_t x355 = INT16_MAX;
volatile int8_t x364 = INT8_MIN;
static int32_t t90 = -29078;
static int16_t x373 = INT16_MIN;
static volatile uint8_t x378 = 32U;
int32_t x380 = INT32_MAX;
static int32_t x381 = INT32_MIN;
int32_t x384 = -7813853;
int64_t x386 = INT64_MAX;
volatile int32_t t96 = -7;
int16_t x390 = INT16_MAX;
int32_t t97 = 472104;
static volatile int16_t x393 = -1;
int64_t x395 = 10LL;
volatile int32_t t98 = -13843;
static uint16_t x397 = UINT16_MAX;
int8_t x400 = INT8_MIN;


void f0(void) {
	static int16_t x2 = -1;
	int64_t x3 = 130533010954LL;

	t0 = (((x1<=x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 0;
	int64_t x6 = -1LL;
	static uint32_t x7 = 6990U;
	int8_t x8 = 41;
	volatile int32_t t1 = 118124653;

	t1 = (((x5<=x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int8_t x10 = 14;
	volatile int32_t x11 = -1;
	static volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -225371;

	t2 = (((x9<=x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -3945;
	uint16_t x14 = UINT16_MAX;
	uint16_t x16 = 92U;

	t3 = (((x13<=x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int64_t x19 = -1LL;
	uint64_t x20 = 6200630LLU;
	volatile int32_t t4 = 520716;

	t4 = (((x17<=x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = 0U;

	t5 = (((x21<=x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -15294445;
	uint16_t x26 = 0U;
	static int32_t x27 = -139;
	volatile int64_t x28 = -1LL;
	static volatile int32_t t6 = 3053;

	t6 = (((x25<=x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	uint32_t x31 = 89815375U;
	static uint8_t x32 = UINT8_MAX;
	int32_t t7 = -1;

	t7 = (((x29<=x30)%x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -26;
	volatile uint32_t x34 = UINT32_MAX;
	static int64_t x35 = 1038886169526LL;
	static int32_t t8 = -9;

	t8 = (((x33<=x34)%x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	static uint64_t x40 = UINT64_MAX;
	static int32_t t9 = 76769038;

	t9 = (((x37<=x38)%x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	volatile int64_t x43 = INT64_MIN;

	t10 = (((x41<=x42)%x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	static int16_t x47 = INT16_MIN;
	volatile int32_t t11 = 0;

	t11 = (((x45<=x46)%x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -235073732;
	int16_t x50 = INT16_MAX;
	uint64_t x51 = 4LLU;
	int32_t x52 = -1;
	volatile int32_t t12 = -2;

	t12 = (((x49<=x50)%x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 3846995;
	uint32_t x56 = UINT32_MAX;

	t13 = (((x53<=x54)%x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int8_t x58 = -20;
	uint8_t x60 = 6U;
	int32_t t14 = 5;

	t14 = (((x57<=x58)%x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	static int8_t x64 = INT8_MIN;
	int32_t t15 = -286608848;

	t15 = (((x61<=x62)%x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x66 = 9810U;
	static int64_t x67 = INT64_MAX;
	volatile int32_t x68 = INT32_MIN;

	t16 = (((x65<=x66)%x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 201843U;
	volatile int16_t x70 = -506;
	volatile int64_t x72 = -1776325578LL;
	volatile int32_t t17 = 4;

	t17 = (((x69<=x70)%x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -1;
	uint8_t x75 = 9U;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = 21620149;

	t18 = (((x73<=x74)%x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	volatile int16_t x78 = -1;
	int64_t x79 = -1LL;
	static int8_t x80 = -62;
	int32_t t19 = 709998006;

	t19 = (((x77<=x78)%x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = -1;
	volatile int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -1;

	t20 = (((x81<=x82)%x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -303;
	int8_t x86 = -1;
	int16_t x87 = -1;
	int8_t x88 = INT8_MAX;

	t21 = (((x85<=x86)%x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	int16_t x91 = 13128;
	uint64_t x92 = 1777LLU;
	volatile int32_t t22 = 918745843;

	t22 = (((x89<=x90)%x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = -574887057;

	t23 = (((x93<=x94)%x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -11;
	uint32_t x98 = 160834037U;
	int32_t x99 = INT32_MIN;
	volatile int32_t t24 = -68822324;

	t24 = (((x97<=x98)%x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x101 = 5U;
	uint64_t x103 = UINT64_MAX;
	volatile int16_t x104 = INT16_MIN;
	int32_t t25 = 25322;

	t25 = (((x101<=x102)%x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 25U;
	int8_t x107 = INT8_MAX;
	int16_t x108 = -2;
	static volatile int32_t t26 = 1312;

	t26 = (((x105<=x106)%x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3206896847947483249LLU;
	uint8_t x111 = 2U;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -248;

	t27 = (((x109<=x110)%x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = 15;
	static uint16_t x115 = 3U;
	uint8_t x116 = 110U;
	static volatile int32_t t28 = 2;

	t28 = (((x113<=x114)%x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	static volatile int32_t x120 = -140597694;
	static int32_t t29 = 5270;

	t29 = (((x117<=x118)%x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MAX;
	uint16_t x122 = 999U;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 16936U;
	volatile int32_t t30 = 217419756;

	t30 = (((x121<=x122)%x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MAX;
	int64_t x127 = -1LL;
	int16_t x128 = 16361;
	volatile int32_t t31 = -459712414;

	t31 = (((x125<=x126)%x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int8_t x130 = 2;
	uint32_t x131 = 93915464U;
	uint8_t x132 = 22U;
	int32_t t32 = 0;

	t32 = (((x129<=x130)%x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = 0;
	volatile int16_t x136 = INT16_MAX;

	t33 = (((x133<=x134)%x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	int16_t x139 = 164;
	static int8_t x140 = INT8_MAX;
	int32_t t34 = -26;

	t34 = (((x137<=x138)%x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 10101U;
	uint32_t x144 = 335U;
	int32_t t35 = -69;

	t35 = (((x141<=x142)%x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	uint8_t x147 = 109U;
	int8_t x148 = -1;
	int32_t t36 = 3;

	t36 = (((x145<=x146)%x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = 7;
	static int64_t x151 = -1LL;
	int8_t x152 = -1;
	volatile int32_t t37 = -940436;

	t37 = (((x149<=x150)%x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 255133204LLU;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = 61U;

	t38 = (((x153<=x154)%x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static volatile int32_t x158 = -1;
	static volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -3241;

	t39 = (((x157<=x158)%x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -14790;
	int8_t x162 = -1;
	volatile uint32_t x164 = 13965664U;

	t40 = (((x161<=x162)%x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MAX;
	int64_t x168 = -3659283052321LL;

	t41 = (((x165<=x166)%x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	static int16_t x170 = INT16_MIN;
	int64_t x171 = 20507559227244498LL;
	int16_t x172 = 0;
	int32_t t42 = 4204454;

	t42 = (((x169<=x170)%x171)==x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -8;
	int16_t x174 = INT16_MIN;
	static int16_t x176 = INT16_MAX;
	static volatile int32_t t43 = -197171;

	t43 = (((x173<=x174)%x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	static int8_t x178 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -21863;

	t44 = (((x177<=x178)%x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	static int8_t x183 = -1;
	static int64_t x184 = INT64_MIN;
	static int32_t t45 = -51;

	t45 = (((x181<=x182)%x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = 849361;
	static volatile int32_t x187 = INT32_MIN;
	uint16_t x188 = 26U;
	int32_t t46 = 4;

	t46 = (((x185<=x186)%x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	static int32_t t47 = 4190;

	t47 = (((x189<=x190)%x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 30;
	int8_t x195 = 1;
	static volatile uint32_t x196 = UINT32_MAX;
	int32_t t48 = -413560174;

	t48 = (((x193<=x194)%x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	volatile int8_t x198 = INT8_MIN;
	int64_t x199 = -3LL;
	static uint8_t x200 = 12U;

	t49 = (((x197<=x198)%x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 8U;
	int16_t x202 = INT16_MIN;
	int32_t t50 = 783932953;

	t50 = (((x201<=x202)%x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -3389148LL;
	int64_t x206 = -2043657LL;
	int32_t t51 = 32426;

	t51 = (((x205<=x206)%x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 0U;
	int8_t x211 = INT8_MAX;
	int32_t x212 = -1;
	volatile int32_t t52 = -119798;

	t52 = (((x209<=x210)%x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -1LL;
	int8_t x216 = INT8_MAX;
	static volatile int32_t t53 = 17169995;

	t53 = (((x213<=x214)%x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -22424585966421LL;
	int8_t x218 = -1;
	static volatile int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;
	static int32_t t54 = -11296;

	t54 = (((x217<=x218)%x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static uint64_t x223 = 18313402062936555LLU;
	volatile int64_t x224 = INT64_MAX;
	static int32_t t55 = 676;

	t55 = (((x221<=x222)%x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MAX;
	int64_t x228 = 3279602245513046LL;
	int32_t t56 = 22967255;

	t56 = (((x225<=x226)%x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 31;
	int16_t x230 = -1;
	int8_t x232 = 0;
	static int32_t t57 = 0;

	t57 = (((x229<=x230)%x231)==x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 1;
	uint64_t x234 = UINT64_MAX;
	uint64_t x235 = 1694354784LLU;
	int16_t x236 = -121;
	int32_t t58 = -13;

	t58 = (((x233<=x234)%x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = 29U;
	int32_t x239 = 19677945;
	int64_t x240 = -13766LL;
	int32_t t59 = -127;

	t59 = (((x237<=x238)%x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = 5895006382LL;
	int32_t x242 = -42028431;
	uint32_t x243 = UINT32_MAX;
	static int32_t t60 = 595;

	t60 = (((x241<=x242)%x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MAX;
	volatile uint32_t x247 = 28881133U;
	static int32_t t61 = -6844;

	t61 = (((x245<=x246)%x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 60;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -2648;
	uint64_t x252 = 1LLU;
	static volatile int32_t t62 = -1726;

	t62 = (((x249<=x250)%x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MAX;
	volatile int8_t x254 = INT8_MIN;
	static uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 1U;

	t63 = (((x253<=x254)%x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	static int8_t x258 = -1;
	int32_t x259 = -1;
	int8_t x260 = -46;
	static volatile int32_t t64 = -333374;

	t64 = (((x257<=x258)%x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -25285841LL;
	int32_t x262 = -2241;
	int8_t x263 = INT8_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 4062;

	t65 = (((x261<=x262)%x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 35U;
	static int64_t x267 = INT64_MIN;
	static volatile uint16_t x268 = 63U;
	volatile int32_t t66 = -210891406;

	t66 = (((x265<=x266)%x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 33405025127714732LLU;
	volatile int16_t x270 = 5900;
	volatile int32_t t67 = 1715460;

	t67 = (((x269<=x270)%x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 63555659713LLU;
	volatile int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	int32_t t68 = -20110;

	t68 = (((x273<=x274)%x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 12U;
	int8_t x280 = 1;
	volatile int32_t t69 = 3635272;

	t69 = (((x277<=x278)%x279)==x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -267114598496804662LL;
	static int32_t x282 = INT32_MIN;
	volatile int8_t x284 = -6;
	int32_t t70 = 215540;

	t70 = (((x281<=x282)%x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	volatile int16_t x286 = INT16_MAX;
	uint64_t x287 = 1768903413532158LLU;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -25179;

	t71 = (((x285<=x286)%x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = 3;
	static int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MIN;
	volatile int32_t t72 = 203663629;

	t72 = (((x289<=x290)%x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = 3;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = 32U;

	t73 = (((x293<=x294)%x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 6;
	int64_t x298 = INT64_MIN;
	uint64_t x299 = UINT64_MAX;
	static uint8_t x300 = 4U;
	volatile int32_t t74 = -7;

	t74 = (((x297<=x298)%x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 103U;
	static int32_t x302 = -1;
	int8_t x304 = -1;
	int32_t t75 = -7;

	t75 = (((x301<=x302)%x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x307 = -1;
	volatile int16_t x308 = 8;
	int32_t t76 = -3095359;

	t76 = (((x305<=x306)%x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 7U;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -86;
	static uint16_t x312 = 30372U;
	static int32_t t77 = 14280;

	t77 = (((x309<=x310)%x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 1122LLU;
	int8_t x314 = 34;
	int32_t x316 = INT32_MAX;
	static int32_t t78 = -693180;

	t78 = (((x313<=x314)%x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 15346U;
	volatile int16_t x318 = 7806;
	int64_t x320 = 255LL;
	volatile int32_t t79 = -197944;

	t79 = (((x317<=x318)%x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -443;
	static uint16_t x323 = UINT16_MAX;
	int64_t x324 = 4989402146133LL;
	int32_t t80 = -459;

	t80 = (((x321<=x322)%x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x326 = INT8_MAX;
	uint16_t x327 = 431U;
	static int32_t x328 = INT32_MIN;
	int32_t t81 = 13456;

	t81 = (((x325<=x326)%x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 817455391LLU;
	int16_t x331 = INT16_MAX;
	volatile int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 26720;

	t82 = (((x329<=x330)%x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 417568;
	uint64_t x334 = 528882397148846771LLU;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = -1LL;

	t83 = (((x333<=x334)%x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 19LL;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 0;

	t84 = (((x337<=x338)%x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -4;
	static volatile int16_t x342 = INT16_MIN;
	int32_t x343 = -1;
	int64_t x344 = INT64_MIN;

	t85 = (((x341<=x342)%x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -23980117970LL;
	volatile int16_t x346 = INT16_MAX;
	uint32_t x348 = 3005064U;
	static volatile int32_t t86 = 49437;

	t86 = (((x345<=x346)%x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	uint8_t x350 = 41U;
	int64_t x352 = 5832948LL;

	t87 = (((x349<=x350)%x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x354 = -10;
	uint32_t x356 = 11U;
	static int32_t t88 = 56;

	t88 = (((x353<=x354)%x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 63934U;
	static int64_t x358 = INT64_MIN;
	uint64_t x359 = 27530LLU;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -1;

	t89 = (((x357<=x358)%x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 15;
	int64_t x362 = -3264891LL;
	static int8_t x363 = INT8_MIN;

	t90 = (((x361<=x362)%x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = 1003572239;
	int64_t x366 = INT64_MAX;
	volatile int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = -1;

	t91 = (((x365<=x366)%x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static int8_t x370 = -1;
	volatile int8_t x371 = -1;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = 0;

	t92 = (((x369<=x370)%x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x374 = 3U;
	static uint16_t x375 = 5681U;
	int32_t x376 = -3451;
	volatile int32_t t93 = -64875881;

	t93 = (((x373<=x374)%x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 11U;
	volatile int8_t x379 = INT8_MIN;
	volatile int32_t t94 = 1;

	t94 = (((x377<=x378)%x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 12LLU;
	volatile int32_t t95 = 1183139;

	t95 = (((x381<=x382)%x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 27LL;
	static uint16_t x387 = 23792U;
	uint16_t x388 = 13U;

	t96 = (((x385<=x386)%x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 416757899926258LL;
	volatile int64_t x391 = INT64_MIN;
	int16_t x392 = 1766;

	t97 = (((x389<=x390)%x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MIN;
	static int32_t x396 = 0;

	t98 = (((x393<=x394)%x395)==x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = UINT8_MAX;
	uint8_t x399 = UINT8_MAX;
	int32_t t99 = 103;

	t99 = (((x397<=x398)%x399)==x400);

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

