#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
int64_t x12 = -1LL;
volatile int32_t t2 = 2559;
volatile int32_t t3 = -7;
volatile int32_t x17 = 209599;
uint8_t x32 = UINT8_MAX;
int8_t x34 = -10;
static volatile int32_t x37 = -1;
int8_t x39 = -18;
static int64_t x44 = 11706739LL;
static uint16_t x45 = 2184U;
uint64_t x46 = 5452244501795LLU;
volatile int32_t t11 = 108181;
uint16_t x52 = 311U;
int32_t t12 = -3915;
static int32_t t13 = 0;
static int64_t x66 = INT64_MIN;
volatile uint16_t x78 = 7364U;
int16_t x79 = -3;
uint16_t x82 = UINT16_MAX;
int32_t t20 = -3874;
volatile int16_t x85 = -2752;
int32_t t21 = -59360156;
int32_t t22 = -328659546;
int16_t x98 = INT16_MIN;
volatile int16_t x100 = -217;
int16_t x108 = INT16_MIN;
volatile int32_t t26 = -1;
volatile int32_t x112 = INT32_MIN;
volatile int8_t x113 = INT8_MIN;
volatile int32_t t29 = -137300;
static volatile int32_t t30 = -8;
static int32_t t32 = -2904;
uint16_t x141 = UINT16_MAX;
volatile int32_t x148 = INT32_MIN;
static int32_t t36 = -6;
uint8_t x150 = UINT8_MAX;
int32_t x153 = -333;
uint32_t x157 = 68U;
uint32_t x162 = UINT32_MAX;
static uint64_t x172 = UINT64_MAX;
static volatile int16_t x173 = -1;
uint64_t x176 = 303842513140609053LLU;
uint64_t x182 = 9068LLU;
int64_t x185 = INT64_MIN;
int32_t t46 = -26600;
int32_t x193 = 3303721;
static int32_t x199 = 4;
int32_t t50 = -2850;
static int32_t x206 = -1;
int32_t x218 = 5923;
static int32_t x221 = INT32_MAX;
volatile int32_t t55 = 117351;
int64_t x225 = INT64_MAX;
int32_t x232 = INT32_MAX;
volatile uint32_t x243 = 981U;
static volatile int32_t x247 = -7263;
int32_t t61 = 0;
static volatile int32_t t62 = 1;
static int8_t x261 = 37;
int8_t x264 = INT8_MIN;
int32_t x270 = 115;
int8_t x272 = -1;
static uint8_t x286 = 10U;
volatile int8_t x287 = INT8_MIN;
static int32_t x288 = -718405;
uint32_t x299 = UINT32_MAX;
int8_t x304 = INT8_MIN;
static uint8_t x306 = UINT8_MAX;
int64_t x308 = INT64_MAX;
uint16_t x311 = 10U;
volatile int8_t x318 = INT8_MAX;
volatile int32_t t81 = 958;
static int16_t x334 = INT16_MAX;
int16_t x339 = -1;
int16_t x340 = INT16_MAX;
volatile int32_t t85 = 296144;
volatile int64_t x349 = INT64_MIN;
volatile int32_t t87 = -209236035;
static int64_t x359 = -1LL;
uint64_t x360 = 3815390LLU;
int32_t t89 = 13496;
int8_t x363 = INT8_MIN;
volatile uint16_t x364 = UINT16_MAX;
int32_t t90 = 25875885;
int16_t x365 = -3189;
int32_t x367 = 96839953;
static int64_t x370 = INT64_MIN;
static volatile uint16_t x376 = 5117U;
volatile int32_t t93 = -2666748;
volatile uint32_t x377 = 1U;
static int64_t x379 = INT64_MAX;
volatile int32_t t94 = 1723292;
uint8_t x383 = 26U;
volatile int32_t x386 = INT32_MAX;
static uint8_t x389 = 2U;
int16_t x396 = INT16_MIN;
uint16_t x398 = UINT16_MAX;


void f0(void) {
	volatile uint16_t x1 = 3080U;
	uint64_t x2 = 66118993953511698LLU;
	static int64_t x3 = -1LL;
	uint8_t x4 = 120U;
	static int32_t t0 = 278954;

	t0 = (x1<=((x2==x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -7159453882320LL;
	int8_t x6 = INT8_MIN;
	static volatile int64_t x7 = -1LL;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 260928;

	t1 = (x5<=((x6==x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = UINT64_MAX;
	uint8_t x11 = UINT8_MAX;

	t2 = (x9<=((x10==x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 61U;
	static uint8_t x14 = 21U;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -1;

	t3 = (x13<=((x14==x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	static volatile int64_t x19 = INT64_MIN;
	int32_t x20 = -199;
	int32_t t4 = -4843;

	t4 = (x17<=((x18==x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile uint16_t x22 = UINT16_MAX;
	static uint64_t x23 = 941406393034372LLU;
	int32_t x24 = 0;
	volatile int32_t t5 = 274403;

	t5 = (x21<=((x22==x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 3U;
	static volatile uint32_t x26 = 1679U;
	int64_t x27 = 803870009LL;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -72160729;

	t6 = (x25<=((x26==x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	int32_t t7 = -33468840;

	t7 = (x29<=((x30==x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 122U;
	int8_t x35 = -1;
	uint64_t x36 = 137LLU;
	int32_t t8 = -179509562;

	t8 = (x33<=((x34==x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x38 = 23701109LLU;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = 0;

	t9 = (x37<=((x38==x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MAX;
	int16_t x42 = INT16_MAX;
	uint32_t x43 = 9U;
	int32_t t10 = 467812;

	t10 = (x41<=((x42==x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x47 = 12U;
	volatile int32_t x48 = -11023878;

	t11 = (x45<=((x46==x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 0LL;
	int8_t x50 = INT8_MAX;
	volatile int64_t x51 = INT64_MIN;

	t12 = (x49<=((x50==x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 1994536U;
	uint64_t x54 = 6LLU;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;

	t13 = (x53<=((x54==x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	int8_t x59 = 0;
	int16_t x60 = -253;
	volatile int32_t t14 = 7064;

	t14 = (x57<=((x58==x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 10U;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = 10395;
	volatile int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -464;

	t15 = (x61<=((x62==x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 479809901U;
	volatile int32_t t16 = -15472725;

	t16 = (x65<=((x66==x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	int32_t x71 = 8013760;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 0;

	t17 = (x69<=((x70==x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -6777792LL;
	volatile int8_t x74 = -63;
	volatile uint16_t x75 = UINT16_MAX;
	int64_t x76 = -240642997281449LL;
	int32_t t18 = 470932;

	t18 = (x73<=((x74==x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	static int8_t x80 = -1;
	volatile int32_t t19 = -485757;

	t19 = (x77<=((x78==x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 2U;
	static uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;

	t20 = (x81<=((x82==x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = INT8_MIN;
	int32_t x87 = 116;
	int16_t x88 = -25;

	t21 = (x85<=((x86==x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x89 = 4U;
	uint32_t x90 = 95936238U;
	int32_t x91 = 195;
	volatile int64_t x92 = -229192672242676639LL;

	t22 = (x89<=((x90==x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MAX;
	volatile int32_t x95 = INT32_MAX;
	static uint64_t x96 = 7272721539LLU;
	volatile int32_t t23 = -239;

	t23 = (x93<=((x94==x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	uint16_t x99 = UINT16_MAX;
	volatile int32_t t24 = -11910758;

	t24 = (x97<=((x98==x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x102 = 1;
	int8_t x103 = 6;
	uint16_t x104 = 202U;
	static int32_t t25 = -747520;

	t25 = (x101<=((x102==x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MAX;
	volatile uint64_t x107 = 71624532LLU;

	t26 = (x105<=((x106==x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 82418;
	int64_t x110 = INT64_MIN;
	uint16_t x111 = 9948U;
	int32_t t27 = -1148403;

	t27 = (x109<=((x110==x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = INT8_MAX;
	uint8_t x115 = UINT8_MAX;
	static volatile int32_t x116 = INT32_MAX;
	int32_t t28 = -283479489;

	t28 = (x113<=((x114==x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = INT16_MAX;
	uint32_t x120 = 25004U;

	t29 = (x117<=((x118==x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 24U;
	volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = -21;

	t30 = (x121<=((x122==x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 699750;

	t31 = (x125<=((x126==x127)|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	static int32_t x130 = 434109;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;

	t32 = (x129<=((x130==x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	volatile uint32_t x134 = UINT32_MAX;
	volatile uint8_t x135 = 124U;
	static int64_t x136 = INT64_MIN;
	int32_t t33 = 50;

	t33 = (x133<=((x134==x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int8_t x138 = INT8_MAX;
	static int32_t x139 = 1;
	uint16_t x140 = 103U;
	int32_t t34 = 88441;

	t34 = (x137<=((x138==x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 22U;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = -1;
	int32_t t35 = -556920;

	t35 = (x141<=((x142==x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int32_t x146 = 176338013;
	volatile uint64_t x147 = 146492767867118LLU;

	t36 = (x145<=((x146==x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -2;
	int16_t x151 = -1;
	static volatile int64_t x152 = INT64_MAX;
	int32_t t37 = 1993929;

	t37 = (x149<=((x150==x151)|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = -1;
	static volatile int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 45158;

	t38 = (x153<=((x154==x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = INT8_MIN;
	uint64_t x159 = 166674156278616554LLU;
	uint64_t x160 = UINT64_MAX;
	static int32_t t39 = -13069;

	t39 = (x157<=((x158==x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 7491LLU;
	static int16_t x163 = INT16_MIN;
	uint8_t x164 = 59U;
	volatile int32_t t40 = -486448;

	t40 = (x161<=((x162==x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -746;

	t41 = (x165<=((x166==x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MAX;
	volatile int64_t x170 = INT64_MIN;
	volatile int32_t x171 = INT32_MIN;
	volatile int32_t t42 = -193524573;

	t42 = (x169<=((x170==x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = -1;
	int16_t x175 = 1;
	int32_t t43 = 4;

	t43 = (x173<=((x174==x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	static uint64_t x178 = UINT64_MAX;
	int8_t x179 = -1;
	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 214341;

	t44 = (x177<=((x178==x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 0;
	static int16_t x183 = INT16_MIN;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 236;

	t45 = (x181<=((x182==x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = 0;
	uint64_t x187 = 18653191LLU;
	volatile int32_t x188 = INT32_MIN;

	t46 = (x185<=((x186==x187)|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = -1;
	static uint32_t x191 = 3216U;
	int16_t x192 = INT16_MAX;
	int32_t t47 = 106;

	t47 = (x189<=((x190==x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = 2;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	int32_t t48 = 1;

	t48 = (x193<=((x194==x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = 80469000;
	static volatile uint64_t x198 = 224785051985LLU;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -132370270;

	t49 = (x197<=((x198==x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int16_t x202 = 145;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = -865;

	t50 = (x201<=((x202==x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint16_t x207 = 5U;
	int32_t x208 = 0;
	volatile int32_t t51 = -1960543;

	t51 = (x205<=((x206==x207)|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -603031LL;
	int32_t x210 = INT32_MAX;
	int8_t x211 = -1;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -13960904;

	t52 = (x209<=((x210==x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 56811;
	int8_t x214 = -1;
	uint64_t x215 = 9634365LLU;
	volatile uint8_t x216 = 1U;
	static int32_t t53 = -771149432;

	t53 = (x213<=((x214==x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = INT16_MIN;
	int8_t x219 = -1;
	uint8_t x220 = 50U;
	int32_t t54 = -388;

	t54 = (x217<=((x218==x219)|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x222 = -1;
	static int16_t x223 = INT16_MIN;
	uint8_t x224 = 42U;

	t55 = (x221<=((x222==x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 15U;
	uint32_t x227 = UINT32_MAX;
	uint32_t x228 = 3963U;
	static volatile int32_t t56 = 4541998;

	t56 = (x225<=((x226==x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 1679068462426660631LL;
	int32_t x230 = INT32_MIN;
	static int8_t x231 = INT8_MIN;
	int32_t t57 = 585433;

	t57 = (x229<=((x230==x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = UINT64_MAX;
	uint32_t x234 = UINT32_MAX;
	volatile int32_t x235 = INT32_MIN;
	volatile int64_t x236 = INT64_MIN;
	int32_t t58 = -366943272;

	t58 = (x233<=((x234==x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x237 = 24U;
	int32_t x238 = INT32_MAX;
	int8_t x239 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 34;

	t59 = (x237<=((x238==x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -19;
	int32_t x242 = INT32_MAX;
	uint64_t x244 = 3300LLU;
	volatile int32_t t60 = -2304;

	t60 = (x241<=((x242==x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int64_t x246 = -1LL;
	int64_t x248 = -1LL;

	t61 = (x245<=((x246==x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	uint8_t x250 = UINT8_MAX;
	static int8_t x251 = 0;
	int32_t x252 = 55197;

	t62 = (x249<=((x250==x251)|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 24;
	static int8_t x254 = 7;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = -11747117827LL;
	volatile int32_t t63 = 62602;

	t63 = (x253<=((x254==x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	uint8_t x258 = 33U;
	int16_t x259 = 18;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = 4681;

	t64 = (x257<=((x258==x259)|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = -1;
	static int64_t x263 = INT64_MIN;
	volatile int32_t t65 = -875649;

	t65 = (x261<=((x262==x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 265U;
	volatile int8_t x266 = -1;
	static uint64_t x267 = UINT64_MAX;
	static int16_t x268 = -1;
	int32_t t66 = 2681;

	t66 = (x265<=((x266==x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	uint16_t x271 = UINT16_MAX;
	static volatile int32_t t67 = 9;

	t67 = (x269<=((x270==x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1928;
	uint64_t x274 = UINT64_MAX;
	static uint8_t x275 = 20U;
	volatile int8_t x276 = INT8_MIN;
	int32_t t68 = 1600;

	t68 = (x273<=((x274==x275)|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = 7U;
	uint64_t x279 = UINT64_MAX;
	uint16_t x280 = 19390U;
	volatile int32_t t69 = -91;

	t69 = (x277<=((x278==x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x283 = 1LL;
	volatile int16_t x284 = -1;
	volatile int32_t t70 = 251;

	t70 = (x281<=((x282==x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = -1LL;
	static int32_t t71 = 1680776;

	t71 = (x285<=((x286==x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static int32_t x290 = -1017;
	static uint16_t x291 = 3785U;
	static uint16_t x292 = 246U;
	int32_t t72 = -4890;

	t72 = (x289<=((x290==x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MAX;
	volatile int16_t x295 = INT16_MAX;
	static volatile int32_t x296 = 10;
	volatile int32_t t73 = 90;

	t73 = (x293<=((x294==x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = -33;
	static uint16_t x298 = 54U;
	static uint64_t x300 = 778LLU;
	static volatile int32_t t74 = -749;

	t74 = (x297<=((x298==x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static int32_t x302 = 1426542;
	uint64_t x303 = 4150917603452273LLU;
	int32_t t75 = -38;

	t75 = (x301<=((x302==x303)|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x307 = 207896LLU;
	static int32_t t76 = -97457;

	t76 = (x305<=((x306==x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile int8_t x310 = INT8_MIN;
	static int64_t x312 = 46541804473859LL;
	int32_t t77 = -130054;

	t77 = (x309<=((x310==x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 6U;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 14884;

	t78 = (x313<=((x314==x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 915080186481LL;
	uint8_t x319 = 2U;
	int64_t x320 = 31268LL;
	int32_t t79 = -223426;

	t79 = (x317<=((x318==x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	volatile uint8_t x323 = 123U;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = 2762871;

	t80 = (x321<=((x322==x323)|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 66228861LLU;
	int64_t x326 = INT64_MIN;
	static uint16_t x327 = 586U;
	int32_t x328 = 29;

	t81 = (x325<=((x326==x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MIN;
	int32_t x332 = -1;
	static volatile int32_t t82 = -3160255;

	t82 = (x329<=((x330==x331)|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 3129791571384LLU;
	volatile int32_t t83 = -303143719;

	t83 = (x333<=((x334==x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int8_t x338 = 1;
	int32_t t84 = 14;

	t84 = (x337<=((x338==x339)|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = INT16_MAX;
	uint16_t x342 = UINT16_MAX;
	static uint32_t x343 = 2757U;
	volatile uint8_t x344 = 50U;

	t85 = (x341<=((x342==x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 4075363;
	int64_t x346 = -726LL;
	volatile uint16_t x347 = 3U;
	volatile uint32_t x348 = 29U;
	int32_t t86 = 533474408;

	t86 = (x345<=((x346==x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x350 = 5U;
	uint16_t x351 = 111U;
	int8_t x352 = INT8_MIN;

	t87 = (x349<=((x350==x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 10190327LLU;
	uint32_t x354 = 13U;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t88 = 3;

	t88 = (x353<=((x354==x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = INT8_MIN;

	t89 = (x357<=((x358==x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MAX;
	int32_t x362 = INT32_MAX;

	t90 = (x361<=((x362==x363)|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t91 = -14041971;

	t91 = (x365<=((x366==x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x371 = 1095507671908290LLU;
	int16_t x372 = -1;
	int32_t t92 = -130794;

	t92 = (x369<=((x370==x371)|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 14502010U;
	uint8_t x375 = 2U;

	t93 = (x373<=((x374==x375)|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 2918977120348531LLU;
	int16_t x380 = INT16_MAX;

	t94 = (x377<=((x378==x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	int64_t x382 = -83344LL;
	static uint8_t x384 = 0U;
	volatile int32_t t95 = -1941;

	t95 = (x381<=((x382==x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	static uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 34U;
	int32_t t96 = 0;

	t96 = (x385<=((x386==x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -1;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	static volatile int32_t t97 = -6588;

	t97 = (x389<=((x390==x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	static int32_t t98 = -1119;

	t98 = (x393<=((x394==x395)|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = -1;
	int16_t x399 = 113;
	int32_t x400 = 125;
	int32_t t99 = -162408;

	t99 = (x397<=((x398==x399)|x400));

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

