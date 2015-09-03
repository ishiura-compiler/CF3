#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
static volatile int32_t t2 = -893323208;
uint32_t x32 = 95178U;
int64_t x38 = -503731950LL;
int64_t x44 = INT64_MAX;
volatile uint16_t x46 = 433U;
int32_t t11 = 108915457;
volatile int64_t x51 = INT64_MIN;
int8_t x52 = INT8_MAX;
int16_t x56 = 0;
int64_t x63 = INT64_MAX;
uint32_t x64 = UINT32_MAX;
volatile int32_t t15 = 14696;
uint8_t x65 = 64U;
uint8_t x68 = 1U;
int16_t x71 = 25;
int64_t x76 = INT64_MIN;
static volatile int64_t x78 = -26156769974821LL;
static volatile int64_t x83 = INT64_MAX;
int8_t x86 = INT8_MIN;
int16_t x89 = -1;
uint32_t x96 = 508U;
int8_t x98 = INT8_MIN;
int8_t x99 = -1;
int8_t x110 = 7;
static volatile uint64_t x114 = 17LLU;
volatile int32_t t31 = 6;
static int16_t x130 = INT16_MIN;
uint64_t x140 = 815830453528LLU;
volatile int32_t t34 = 2;
int32_t x142 = INT32_MAX;
static int8_t x144 = INT8_MIN;
volatile int32_t t35 = 232348991;
int32_t x154 = -1;
int8_t x158 = INT8_MIN;
int64_t x160 = -19600100246884LL;
uint8_t x173 = 12U;
int64_t x175 = 87312908LL;
uint16_t x177 = 2420U;
volatile uint64_t x182 = UINT64_MAX;
int8_t x183 = 7;
uint16_t x184 = UINT16_MAX;
uint16_t x185 = UINT16_MAX;
uint32_t x191 = UINT32_MAX;
static uint8_t x197 = 3U;
int32_t t50 = 31105287;
static uint16_t x210 = UINT16_MAX;
volatile int32_t t53 = 0;
static volatile int32_t x223 = INT32_MIN;
int8_t x234 = 1;
uint32_t x239 = 242033U;
uint16_t x241 = UINT16_MAX;
int16_t x246 = INT16_MIN;
volatile int64_t x247 = -1LL;
static volatile int32_t t61 = -8870;
volatile int32_t t63 = 67535;
int16_t x257 = -1;
int16_t x258 = -1;
int64_t x259 = INT64_MIN;
uint32_t x263 = 666141U;
int32_t x269 = 20;
uint32_t x270 = UINT32_MAX;
int64_t x276 = INT64_MIN;
volatile int32_t t68 = -1;
volatile int8_t x279 = INT8_MIN;
volatile int16_t x283 = INT16_MIN;
static int32_t t70 = -32330516;
int64_t x285 = 1596LL;
volatile int16_t x303 = INT16_MAX;
static volatile int32_t t75 = 0;
uint32_t x307 = 31U;
int16_t x314 = 39;
static int8_t x317 = -1;
volatile int32_t x322 = INT32_MIN;
static int32_t t80 = 228386280;
volatile int32_t t81 = 92;
static int32_t x330 = INT32_MIN;
int32_t t82 = -93;
uint64_t x334 = 1283890444202728491LLU;
uint32_t x335 = UINT32_MAX;
uint32_t x347 = 53547U;
int16_t x352 = INT16_MIN;
volatile int32_t t89 = -5392665;
uint16_t x362 = 6U;
int64_t x369 = -25LL;
int64_t x370 = INT64_MIN;
uint32_t x374 = UINT32_MAX;
int64_t x375 = 469118266371942LL;
uint8_t x388 = UINT8_MAX;
static uint32_t x396 = UINT32_MAX;


void f0(void) {
	volatile uint64_t x1 = 0LLU;
	int32_t x2 = -1;
	static uint16_t x3 = 1125U;
	int16_t x4 = -1;
	int32_t t0 = 76063738;

	t0 = ((x1<=x2)<<(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -10691;
	static int8_t x6 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 12;

	t1 = ((x5<=x6)<<(x7<x8));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MAX;
	volatile int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MAX;

	t2 = ((x9<=x10)<<(x11<x12));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	volatile int16_t x14 = -1;
	int16_t x15 = INT16_MIN;
	static volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -41;

	t3 = ((x13<=x14)<<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -108;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	static volatile int16_t x20 = -11;
	int32_t t4 = 50181;

	t4 = ((x17<=x18)<<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -4082LL;
	int8_t x23 = 7;
	int8_t x24 = 1;
	static volatile int32_t t5 = 3647;

	t5 = ((x21<=x22)<<(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = -94;

	t6 = ((x25<=x26)<<(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = 0U;
	int32_t x31 = INT32_MIN;
	int32_t t7 = 1;

	t7 = ((x29<=x30)<<(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int64_t x34 = INT64_MAX;
	int32_t x35 = INT32_MAX;
	volatile int8_t x36 = 60;
	volatile int32_t t8 = -6;

	t8 = ((x33<=x34)<<(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x39 = 3211;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -27229673;

	t9 = ((x37<=x38)<<(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	volatile int32_t x43 = INT32_MIN;
	int32_t t10 = 223;

	t10 = ((x41<=x42)<<(x43<x44));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int32_t x47 = 299937;
	int32_t x48 = INT32_MAX;

	t11 = ((x45<=x46)<<(x47<x48));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 96U;
	static int64_t x50 = INT64_MAX;
	volatile int32_t t12 = 131210379;

	t12 = ((x49<=x50)<<(x51<x52));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	static uint16_t x55 = 159U;
	int32_t t13 = -36;

	t13 = ((x53<=x54)<<(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	static volatile uint8_t x58 = 82U;
	static volatile int16_t x59 = -4880;
	int16_t x60 = -1;
	volatile int32_t t14 = -12896;

	t14 = ((x57<=x58)<<(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 79538888481203LL;
	uint32_t x62 = 135065256U;

	t15 = ((x61<=x62)<<(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x66 = UINT64_MAX;
	uint8_t x67 = UINT8_MAX;
	int32_t t16 = -274;

	t16 = ((x65<=x66)<<(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int32_t x70 = 0;
	uint16_t x72 = 13U;
	static int32_t t17 = 2;

	t17 = ((x69<=x70)<<(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	static int32_t t18 = -1;

	t18 = ((x73<=x74)<<(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 193758971;

	t19 = ((x77<=x78)<<(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 7293U;
	uint16_t x82 = UINT16_MAX;
	int16_t x84 = -1;
	volatile int32_t t20 = 3779;

	t20 = ((x81<=x82)<<(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = 33;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MAX;
	int32_t t21 = 13136;

	t21 = ((x85<=x86)<<(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	static uint64_t x92 = UINT64_MAX;
	int32_t t22 = 330015673;

	t22 = ((x89<=x90)<<(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 2U;
	uint32_t x94 = 923928U;
	int32_t x95 = 424299;
	static int32_t t23 = 506;

	t23 = ((x93<=x94)<<(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 13U;
	int64_t x100 = -1LL;
	volatile int32_t t24 = -711;

	t24 = ((x97<=x98)<<(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int8_t x102 = INT8_MIN;
	volatile int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 353101;

	t25 = ((x101<=x102)<<(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -1;
	int16_t x107 = -506;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = 26473629;

	t26 = ((x105<=x106)<<(x107<x108));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint8_t x111 = 15U;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 8792;

	t27 = ((x109<=x110)<<(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -283695188290359187LL;
	volatile uint32_t x115 = 18176U;
	int16_t x116 = 23;
	volatile int32_t t28 = 11609203;

	t28 = ((x113<=x114)<<(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -1LL;
	static int64_t x118 = INT64_MIN;
	int8_t x119 = -2;
	uint32_t x120 = 1239U;
	int32_t t29 = -485;

	t29 = ((x117<=x118)<<(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	int64_t x123 = INT64_MIN;
	volatile int16_t x124 = -8;
	int32_t t30 = 10576125;

	t30 = ((x121<=x122)<<(x123<x124));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = -43;
	int64_t x127 = INT64_MIN;
	volatile int16_t x128 = -2315;

	t31 = ((x125<=x126)<<(x127<x128));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static int32_t x131 = -968406;
	uint8_t x132 = 7U;
	volatile int32_t t32 = -67;

	t32 = ((x129<=x130)<<(x131<x132));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int64_t x135 = 167131LL;
	int64_t x136 = 154435058LL;
	int32_t t33 = -1;

	t33 = ((x133<=x134)<<(x135<x136));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;

	t34 = ((x137<=x138)<<(x139<x140));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -33;
	uint32_t x143 = 3660613U;

	t35 = ((x141<=x142)<<(x143<x144));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 566277LLU;
	int32_t x146 = -4538;
	int16_t x147 = INT16_MAX;
	int64_t x148 = 12627837806LL;
	volatile int32_t t36 = -1;

	t36 = ((x145<=x146)<<(x147<x148));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -8;
	uint32_t x150 = 559U;
	int64_t x151 = -14128LL;
	static volatile uint16_t x152 = 29771U;
	volatile int32_t t37 = 6379984;

	t37 = ((x149<=x150)<<(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 47U;
	int16_t x155 = INT16_MIN;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -463;

	t38 = ((x153<=x154)<<(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = INT8_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	int32_t t39 = 3072;

	t39 = ((x157<=x158)<<(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 6;
	static int32_t x162 = INT32_MIN;
	int16_t x163 = 6;
	static int64_t x164 = -1LL;
	int32_t t40 = 3;

	t40 = ((x161<=x162)<<(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 1323247370080221094LL;
	volatile uint32_t x166 = 14053424U;
	uint16_t x167 = 176U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 21197919;

	t41 = ((x165<=x166)<<(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 7;
	int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	int8_t x172 = -1;
	static int32_t t42 = -1;

	t42 = ((x169<=x170)<<(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = INT32_MIN;
	int32_t x176 = -1;
	int32_t t43 = 127772668;

	t43 = ((x173<=x174)<<(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = 3592;
	int32_t t44 = 249812;

	t44 = ((x177<=x178)<<(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MAX;
	volatile int32_t t45 = 13;

	t45 = ((x181<=x182)<<(x183<x184));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -1;
	volatile int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MAX;
	int32_t t46 = 52;

	t46 = ((x185<=x186)<<(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MAX;
	static int64_t x192 = -1LL;
	volatile int32_t t47 = -22270136;

	t47 = ((x189<=x190)<<(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 51U;
	static int32_t x194 = 2;
	int16_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	int32_t t48 = 78;

	t48 = ((x193<=x194)<<(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = -12;
	volatile int32_t t49 = 1662068;

	t49 = ((x197<=x198)<<(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	static int32_t x202 = INT32_MIN;
	static int64_t x203 = INT64_MIN;
	volatile int64_t x204 = INT64_MIN;

	t50 = ((x201<=x202)<<(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = -56062;
	volatile uint16_t x206 = 4U;
	int64_t x207 = -1121954600101407026LL;
	static uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = 3;

	t51 = ((x205<=x206)<<(x207<x208));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 5047439395812801LLU;
	int32_t x211 = INT32_MIN;
	static volatile int8_t x212 = INT8_MIN;
	static int32_t t52 = -2592;

	t52 = ((x209<=x210)<<(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	volatile int16_t x214 = INT16_MIN;
	volatile int8_t x215 = 1;
	int16_t x216 = -1;

	t53 = ((x213<=x214)<<(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	static int8_t x220 = 10;
	int32_t t54 = 0;

	t54 = ((x217<=x218)<<(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	volatile int8_t x222 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 52219;

	t55 = ((x221<=x222)<<(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 71734015752521146LLU;
	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = 712336567093826LLU;
	volatile int32_t t56 = 165309;

	t56 = ((x225<=x226)<<(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -1LL;
	int64_t x230 = 1LL;
	int16_t x231 = 2;
	int16_t x232 = -1;
	int32_t t57 = 182;

	t57 = ((x229<=x230)<<(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x235 = -1;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 1;

	t58 = ((x233<=x234)<<(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -1;
	int16_t x238 = 30;
	uint64_t x240 = 20142488360434LLU;
	volatile int32_t t59 = -6261971;

	t59 = ((x237<=x238)<<(x239<x240));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MAX;
	volatile int32_t x243 = INT32_MIN;
	static volatile int64_t x244 = INT64_MIN;
	int32_t t60 = -314;

	t60 = ((x241<=x242)<<(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -152846634;
	int64_t x248 = INT64_MIN;

	t61 = ((x245<=x246)<<(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 566604LL;
	static int64_t x250 = -1LL;
	int32_t x251 = -12;
	static int32_t x252 = 64763569;
	static volatile int32_t t62 = -12559032;

	t62 = ((x249<=x250)<<(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	uint16_t x254 = 3U;
	int32_t x255 = INT32_MIN;
	static uint16_t x256 = UINT16_MAX;

	t63 = ((x253<=x254)<<(x255<x256));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x260 = 78792LLU;
	int32_t t64 = 15197998;

	t64 = ((x257<=x258)<<(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 21606U;
	int16_t x262 = INT16_MIN;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = 6557;

	t65 = ((x261<=x262)<<(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 1269684273973LLU;
	int64_t x266 = -1LL;
	int16_t x267 = INT16_MIN;
	volatile int16_t x268 = INT16_MIN;
	int32_t t66 = 6;

	t66 = ((x265<=x266)<<(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = 0;
	int64_t x272 = -920058165506979LL;
	static int32_t t67 = -2442838;

	t67 = ((x269<=x270)<<(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = -1;
	uint8_t x275 = 1U;

	t68 = ((x273<=x274)<<(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MAX;
	volatile int16_t x280 = 0;
	static int32_t t69 = -621752979;

	t69 = ((x277<=x278)<<(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 831;
	int64_t x282 = INT64_MIN;
	uint32_t x284 = UINT32_MAX;

	t70 = ((x281<=x282)<<(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = 666521255U;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t71 = -3055721;

	t71 = ((x285<=x286)<<(x287<x288));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MIN;
	volatile int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t72 = 14791070;

	t72 = ((x289<=x290)<<(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = -1;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 1;

	t73 = ((x293<=x294)<<(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MIN;
	volatile int16_t x299 = -271;
	volatile int8_t x300 = INT8_MAX;
	int32_t t74 = -24549240;

	t74 = ((x297<=x298)<<(x299<x300));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	static int8_t x302 = -26;
	uint32_t x304 = 1887651689U;

	t75 = ((x301<=x302)<<(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 0U;
	uint64_t x306 = 279133816302080LLU;
	int32_t x308 = INT32_MAX;
	static int32_t t76 = -6389;

	t76 = ((x305<=x306)<<(x307<x308));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	uint64_t x310 = 2737378304355254527LLU;
	int64_t x311 = -2499LL;
	int32_t x312 = -50;
	volatile int32_t t77 = 4;

	t77 = ((x309<=x310)<<(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static int32_t x315 = INT32_MAX;
	int64_t x316 = 14726998LL;
	int32_t t78 = 3;

	t78 = ((x313<=x314)<<(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = -1;
	uint32_t x319 = 252452479U;
	int32_t x320 = INT32_MIN;
	volatile int32_t t79 = 60242045;

	t79 = ((x317<=x318)<<(x319<x320));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int8_t x323 = -1;
	int32_t x324 = -31300172;

	t80 = ((x321<=x322)<<(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	int64_t x327 = -1048LL;
	volatile int64_t x328 = -1LL;

	t81 = ((x325<=x326)<<(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -397032;
	int8_t x331 = INT8_MIN;
	volatile int16_t x332 = INT16_MIN;

	t82 = ((x329<=x330)<<(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 25049170003525649LLU;
	static volatile int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -193150309;

	t83 = ((x333<=x334)<<(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = -1;
	volatile uint64_t x339 = 205LLU;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 438;

	t84 = ((x337<=x338)<<(x339<x340));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	uint32_t x342 = 2759013U;
	uint32_t x343 = 17U;
	uint8_t x344 = 83U;
	volatile int32_t t85 = -5447;

	t85 = ((x341<=x342)<<(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int16_t x346 = 0;
	int64_t x348 = -1LL;
	int32_t t86 = -261677;

	t86 = ((x345<=x346)<<(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	uint16_t x350 = 148U;
	uint64_t x351 = 3008447420691653776LLU;
	int32_t t87 = -557432451;

	t87 = ((x349<=x350)<<(x351<x352));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	static int32_t x354 = -1;
	static int32_t x355 = INT32_MIN;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -14536854;

	t88 = ((x353<=x354)<<(x355<x356));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -7190174396282LL;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	static int64_t x360 = -8302403231LL;

	t89 = ((x357<=x358)<<(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 4409U;
	int8_t x363 = INT8_MIN;
	int16_t x364 = 14508;
	static int32_t t90 = -3175268;

	t90 = ((x361<=x362)<<(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	static int64_t x367 = INT64_MIN;
	volatile int16_t x368 = INT16_MIN;
	int32_t t91 = -45725747;

	t91 = ((x365<=x366)<<(x367<x368));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x371 = INT8_MIN;
	int8_t x372 = -1;
	volatile int32_t t92 = 1010567337;

	t92 = ((x369<=x370)<<(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -5;

	t93 = ((x373<=x374)<<(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = -1LL;
	int32_t x378 = INT32_MIN;
	int8_t x379 = -1;
	uint32_t x380 = 43423U;
	volatile int32_t t94 = -342646225;

	t94 = ((x377<=x378)<<(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -128856484078599LL;
	volatile int64_t x382 = -1290LL;
	volatile int64_t x383 = -41231439666221LL;
	int8_t x384 = INT8_MIN;
	int32_t t95 = -4532;

	t95 = ((x381<=x382)<<(x383<x384));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MIN;
	static uint8_t x387 = UINT8_MAX;
	int32_t t96 = -1184;

	t96 = ((x385<=x386)<<(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -12;
	volatile int32_t x390 = -1;
	static volatile uint32_t x391 = 2447U;
	int16_t x392 = 1;
	int32_t t97 = 807097392;

	t97 = ((x389<=x390)<<(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 24631U;
	int8_t x394 = -1;
	static int8_t x395 = 36;
	volatile int32_t t98 = 64992728;

	t98 = ((x393<=x394)<<(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 938521U;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 5110369;

	t99 = ((x397<=x398)<<(x399<x400));

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

