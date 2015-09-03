#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = -1;
int32_t t0 = -5001;
volatile uint32_t x7 = 11500U;
static volatile int32_t x8 = INT32_MIN;
static uint64_t t2 = 341LLU;
int64_t x15 = -6914305155LL;
volatile int64_t x17 = INT64_MIN;
int64_t x21 = 17LL;
int16_t x24 = INT16_MAX;
uint8_t x34 = 35U;
uint8_t x41 = UINT8_MAX;
static volatile int16_t x43 = 1;
int8_t x55 = INT8_MIN;
int16_t x71 = INT16_MIN;
uint16_t x72 = 17064U;
volatile uint16_t x73 = UINT16_MAX;
volatile int64_t x77 = -1LL;
volatile int32_t x78 = -18572121;
uint16_t x80 = 15739U;
uint8_t x83 = 57U;
volatile int32_t x85 = 18;
static int64_t t21 = 1LL;
volatile int32_t x101 = INT32_MAX;
int32_t x113 = INT32_MIN;
int32_t x115 = -735078;
volatile int32_t x125 = INT32_MIN;
uint64_t x129 = 1161325496LLU;
int8_t x131 = -1;
static int64_t x132 = INT64_MAX;
static uint64_t x144 = 626LLU;
volatile int32_t x154 = INT32_MAX;
int16_t x156 = INT16_MIN;
int64_t t33 = 522977LL;
volatile int64_t x157 = 386940360927727LL;
volatile int16_t x163 = INT16_MIN;
uint32_t x171 = 43938U;
int32_t x174 = INT32_MAX;
static int32_t t37 = 27436;
volatile int64_t t39 = -143373712LL;
volatile int32_t t40 = -632359115;
static int8_t x197 = INT8_MIN;
int64_t x203 = INT64_MIN;
volatile int64_t t43 = 51638951257088LL;
volatile uint8_t x207 = UINT8_MAX;
uint16_t x208 = 10U;
volatile int32_t t44 = -424477825;
uint32_t t45 = 0U;
int8_t x213 = -1;
int16_t x214 = -301;
volatile uint16_t x228 = 8901U;
int8_t x232 = INT8_MIN;
volatile int32_t t50 = -4914;
static uint16_t x234 = UINT16_MAX;
volatile int32_t t51 = 0;
int16_t x244 = INT16_MAX;
volatile int32_t x251 = -1;
static int32_t t53 = -677242;
static int8_t x257 = -25;
volatile int16_t x262 = INT16_MIN;
static int16_t x270 = INT16_MIN;
uint64_t x277 = 10909962LLU;
int16_t x284 = INT16_MIN;
static volatile int64_t x287 = INT64_MAX;
volatile int32_t t62 = -18182339;
uint8_t x302 = UINT8_MAX;
int8_t x307 = INT8_MIN;
int16_t x317 = INT16_MIN;
static int8_t x319 = -1;
int32_t x320 = -1;
static int32_t t68 = 2266;
int64_t x334 = INT64_MIN;
int64_t x338 = INT64_MIN;
static uint64_t t73 = 18898723476LLU;
volatile int32_t t74 = -594086082;
int32_t x363 = -1;
uint64_t x364 = 27871LLU;
int32_t x365 = 21;
volatile uint16_t x370 = 31U;
int16_t x371 = INT16_MIN;
int32_t x374 = INT32_MIN;
static int8_t x380 = INT8_MIN;
static int64_t x385 = INT64_MIN;
int8_t x386 = -1;
volatile int64_t t81 = -453LL;
volatile uint8_t x389 = 7U;
volatile int64_t x391 = -1LL;
static int8_t x401 = INT8_MAX;
int32_t t85 = 6206499;
int32_t x411 = INT32_MIN;
int32_t t87 = 132185;
volatile int16_t x416 = 750;
static volatile int64_t t88 = -475180774653402LL;
int64_t x421 = -3097263471LL;
volatile int32_t t90 = -944025;
int64_t x427 = INT64_MIN;
uint64_t x433 = UINT64_MAX;
int64_t x434 = INT64_MIN;
int64_t x440 = -1LL;
int32_t t95 = -3634939;
int16_t x448 = INT16_MIN;
int32_t t97 = -2;
int64_t x454 = INT64_MAX;
volatile int8_t x458 = INT8_MAX;
uint8_t x460 = UINT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 483U;
	int16_t x2 = INT16_MIN;
	static volatile int8_t x3 = -1;

	t0 = (((x1==x2)*x3)-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int8_t x6 = INT8_MIN;
	static volatile uint32_t t1 = 107887U;

	t1 = (((x5==x6)*x7)-x8);

	if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	volatile int8_t x10 = INT8_MIN;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = -94721;

	t2 = (((x9==x10)*x11)-x12);

	if (t2 != 94721LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = 372;
	int32_t x16 = INT32_MAX;
	int64_t t3 = -6358215645142LL;

	t3 = (((x13==x14)*x15)-x16);

	if (t3 != -2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int32_t x19 = 15;
	static int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 1322;

	t4 = (((x17==x18)*x19)-x20);

	if (t4 != 143) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 127U;
	volatile int64_t x23 = INT64_MIN;
	int64_t t5 = -256702LL;

	t5 = (((x21==x22)*x23)-x24);

	if (t5 != -32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	static int16_t x27 = -11752;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 13531;

	t6 = (((x25==x26)*x27)-x28);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = -1LL;
	volatile uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MIN;
	volatile uint64_t t7 = 11187333519895LLU;

	t7 = (((x33==x34)*x35)-x36);

	if (t7 != 32768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 112;
	volatile int8_t x38 = INT8_MIN;
	volatile int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MAX;
	volatile int32_t t8 = -974527;

	t8 = (((x37==x38)*x39)-x40);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = 904374650LL;
	int8_t x44 = INT8_MAX;
	int32_t t9 = 1709468;

	t9 = (((x41==x42)*x43)-x44);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = -1;
	uint8_t x47 = 1U;
	uint32_t x48 = 30565720U;
	volatile uint32_t t10 = 359650U;

	t10 = (((x45==x46)*x47)-x48);

	if (t10 != 4264401576U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = UINT16_MAX;
	static volatile int64_t x51 = INT64_MIN;
	static int16_t x52 = INT16_MIN;
	static volatile int64_t t11 = 1164357453LL;

	t11 = (((x49==x50)*x51)-x52);

	if (t11 != 32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 141551393852045216LLU;
	volatile uint32_t x54 = UINT32_MAX;
	uint64_t x56 = 3986753067482LLU;
	uint64_t t12 = 8927364910955LLU;

	t12 = (((x53==x54)*x55)-x56);

	if (t12 != 18446740086956484134LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	uint32_t x62 = 2U;
	int8_t x63 = 1;
	int32_t x64 = -1;
	volatile int32_t t13 = 682583619;

	t13 = (((x61==x62)*x63)-x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = 3550U;
	uint8_t x67 = 29U;
	int64_t x68 = -1LL;
	volatile int64_t t14 = -2139LL;

	t14 = (((x65==x66)*x67)-x68);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -15;
	int8_t x70 = INT8_MAX;
	volatile int32_t t15 = -601689;

	t15 = (((x69==x70)*x71)-x72);

	if (t15 != -17064) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = -16;
	volatile int32_t t16 = -2781;

	t16 = (((x73==x74)*x75)-x76);

	if (t16 != 16) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x79 = INT8_MIN;
	static volatile int32_t t17 = 780;

	t17 = (((x77==x78)*x79)-x80);

	if (t17 != -15739) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	volatile uint8_t x82 = 119U;
	uint64_t x84 = 37589740LLU;
	uint64_t t18 = 3596941LLU;

	t18 = (((x81==x82)*x83)-x84);

	if (t18 != 18446744073671961876LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MAX;
	static uint32_t x87 = UINT32_MAX;
	int8_t x88 = -1;
	uint32_t t19 = 915U;

	t19 = (((x85==x86)*x87)-x88);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = -1;
	int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = 31608656996701338LLU;
	volatile int64_t x92 = INT64_MAX;
	volatile uint64_t t20 = 1526774374953776077LLU;

	t20 = (((x89==x90)*x91)-x92);

	if (t20 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -4085;
	int64_t x94 = INT64_MAX;
	int64_t x95 = -129589893LL;
	uint8_t x96 = 14U;

	t21 = (((x93==x94)*x95)-x96);

	if (t21 != -14LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = -1;
	int64_t x104 = INT64_MAX;
	volatile int64_t t22 = -10230458177357876LL;

	t22 = (((x101==x102)*x103)-x104);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	uint8_t x106 = 12U;
	volatile int8_t x107 = INT8_MAX;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t23 = -1;

	t23 = (((x105==x106)*x107)-x108);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x114 = 2U;
	uint8_t x116 = 105U;
	static int32_t t24 = 12;

	t24 = (((x113==x114)*x115)-x116);

	if (t24 != -105) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MAX;
	volatile int8_t x118 = 12;
	static uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	uint32_t t25 = 4253U;

	t25 = (((x117==x118)*x119)-x120);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x121 = 19U;
	int8_t x122 = INT8_MAX;
	static int32_t x123 = -21;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t26 = 1325LLU;

	t26 = (((x121==x122)*x123)-x124);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = -24663739;
	int16_t x127 = INT16_MAX;
	static int8_t x128 = -2;
	volatile int32_t t27 = 2968;

	t27 = (((x125==x126)*x127)-x128);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = INT16_MAX;
	volatile int64_t t28 = -68621013308314LL;

	t28 = (((x129==x130)*x131)-x132);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 0;
	int32_t x134 = -6082413;
	int32_t x135 = -461942;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t29 = 387096077LLU;

	t29 = (((x133==x134)*x135)-x136);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 12783604U;
	int32_t x138 = 4275;
	uint16_t x139 = 56U;
	static int16_t x140 = 4;
	int32_t t30 = 1045047;

	t30 = (((x137==x138)*x139)-x140);

	if (t30 != -4) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	volatile uint64_t t31 = 3099323261LLU;

	t31 = (((x141==x142)*x143)-x144);

	if (t31 != 18446744073709550990LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = INT32_MIN;
	volatile int64_t x147 = INT64_MAX;
	int16_t x148 = 0;
	volatile int64_t t32 = 752LL;

	t32 = (((x145==x146)*x147)-x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x153 = 170;
	int64_t x155 = INT64_MIN;

	t33 = (((x153==x154)*x155)-x156);

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	volatile int16_t x160 = 79;
	int32_t t34 = 479025;

	t34 = (((x157==x158)*x159)-x160);

	if (t34 != -79) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -1583615684962133LL;
	int8_t x162 = -27;
	int16_t x164 = 716;
	int32_t t35 = -40517635;

	t35 = (((x161==x162)*x163)-x164);

	if (t35 != -716) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = -55;
	uint8_t x170 = 30U;
	static volatile int8_t x172 = INT8_MAX;
	static volatile uint32_t t36 = 2054052725U;

	t36 = (((x169==x170)*x171)-x172);

	if (t36 != 4294967169U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 37LLU;
	int32_t x175 = INT32_MIN;
	volatile int32_t x176 = -503383565;

	t37 = (((x173==x174)*x175)-x176);

	if (t37 != 503383565) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -21;
	int32_t t38 = -6146;

	t38 = (((x181==x182)*x183)-x184);

	if (t38 != 21) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 2068296306906926445LLU;
	volatile uint8_t x187 = UINT8_MAX;
	static int64_t x188 = -1LL;

	t39 = (((x185==x186)*x187)-x188);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = 3U;
	static volatile int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;

	t40 = (((x189==x190)*x191)-x192);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -13;
	int16_t x194 = -1;
	static int8_t x195 = -1;
	int8_t x196 = -11;
	int32_t t41 = -1373;

	t41 = (((x193==x194)*x195)-x196);

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x198 = -11;
	volatile int32_t x199 = INT32_MIN;
	int32_t x200 = -841508;
	volatile int32_t t42 = 1260933;

	t42 = (((x197==x198)*x199)-x200);

	if (t42 != 841508) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 244U;
	int16_t x202 = INT16_MIN;
	uint8_t x204 = 0U;

	t43 = (((x201==x202)*x203)-x204);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = 2545332865945LLU;
	int64_t x206 = -119972752LL;

	t44 = (((x205==x206)*x207)-x208);

	if (t44 != -10) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x209 = INT32_MIN;
	uint16_t x210 = 58U;
	volatile int8_t x211 = INT8_MAX;
	volatile uint32_t x212 = UINT32_MAX;

	t45 = (((x209==x210)*x211)-x212);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x215 = 6864574362LL;
	int32_t x216 = 4019;
	volatile int64_t t46 = -513908065410747LL;

	t46 = (((x213==x214)*x215)-x216);

	if (t46 != -4019LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MAX;
	static volatile uint32_t x219 = 223U;
	int16_t x220 = INT16_MAX;
	volatile uint32_t t47 = 87339U;

	t47 = (((x217==x218)*x219)-x220);

	if (t47 != 4294934529U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = -39490638LL;
	volatile int16_t x222 = -4086;
	volatile int64_t x223 = 24566223905LL;
	static int16_t x224 = -1;
	volatile int64_t t48 = -947100497LL;

	t48 = (((x221==x222)*x223)-x224);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MAX;
	volatile int64_t x227 = -1LL;
	static int64_t t49 = 86858751LL;

	t49 = (((x225==x226)*x227)-x228);

	if (t49 != -8901LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 935869LLU;
	int64_t x230 = 1681829547010384LL;
	uint16_t x231 = 962U;

	t50 = (((x229==x230)*x231)-x232);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x233 = 379456LLU;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = UINT16_MAX;

	t51 = (((x233==x234)*x235)-x236);

	if (t51 != -65535) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = INT64_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t t52 = 209338877;

	t52 = (((x241==x242)*x243)-x244);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	static volatile uint16_t x252 = 3655U;

	t53 = (((x249==x250)*x251)-x252);

	if (t53 != -3656) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = -25;
	int16_t x254 = 1;
	volatile int16_t x255 = INT16_MIN;
	int16_t x256 = -1;
	volatile int32_t t54 = 232439;

	t54 = (((x253==x254)*x255)-x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 8638U;
	static uint32_t x260 = 108734927U;
	volatile uint32_t t55 = 12U;

	t55 = (((x257==x258)*x259)-x260);

	if (t55 != 4186232369U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x261 = -6984;
	int16_t x263 = 4;
	uint32_t x264 = 14114U;
	volatile uint32_t t56 = 49885619U;

	t56 = (((x261==x262)*x263)-x264);

	if (t56 != 4294953182U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -250646LL;
	volatile int64_t x266 = INT64_MIN;
	static int32_t x267 = -1;
	uint32_t x268 = 411842338U;
	volatile uint32_t t57 = 3U;

	t57 = (((x265==x266)*x267)-x268);

	if (t57 != 3883124958U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x269 = 118U;
	int64_t x271 = INT64_MAX;
	int64_t x272 = 87721920LL;
	volatile int64_t t58 = -2579050LL;

	t58 = (((x269==x270)*x271)-x272);

	if (t58 != -87721920LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x278 = 1363701386462266196LL;
	volatile int64_t x279 = INT64_MIN;
	int8_t x280 = 0;
	int64_t t59 = 224LL;

	t59 = (((x277==x278)*x279)-x280);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	int8_t x283 = 12;
	int32_t t60 = 702563;

	t60 = (((x281==x282)*x283)-x284);

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -1;
	int32_t x286 = 249;
	static uint32_t x288 = UINT32_MAX;
	static volatile int64_t t61 = -304467896359LL;

	t61 = (((x285==x286)*x287)-x288);

	if (t61 != -4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x289 = 374480896633916LLU;
	int64_t x290 = INT64_MIN;
	static int16_t x291 = INT16_MAX;
	int8_t x292 = -1;

	t62 = (((x289==x290)*x291)-x292);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t63 = 263;

	t63 = (((x297==x298)*x299)-x300);

	if (t63 != 383) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x301 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	static int8_t x304 = 36;
	volatile int32_t t64 = 1371;

	t64 = (((x301==x302)*x303)-x304);

	if (t64 != -36) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	static int16_t x308 = -1;
	volatile int32_t t65 = 2334723;

	t65 = (((x305==x306)*x307)-x308);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = -1;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 173U;
	uint32_t t66 = 28897U;

	t66 = (((x309==x310)*x311)-x312);

	if (t66 != 4294967123U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = -9322;
	volatile int64_t x314 = -6446443208760LL;
	uint8_t x315 = UINT8_MAX;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t67 = 108015032;

	t67 = (((x313==x314)*x315)-x316);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x318 = INT64_MIN;

	t68 = (((x317==x318)*x319)-x320);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x321 = -236008131;
	int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MIN;
	static int32_t x324 = 6486370;
	volatile int32_t t69 = -7;

	t69 = (((x321==x322)*x323)-x324);

	if (t69 != -6486370) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = -1;
	volatile uint64_t x330 = 133623LLU;
	static volatile int32_t x331 = -172449863;
	int64_t x332 = INT64_MAX;
	static int64_t t70 = 1175514960LL;

	t70 = (((x329==x330)*x331)-x332);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = UINT16_MAX;
	uint32_t x335 = UINT32_MAX;
	uint64_t x336 = 234625704782798LLU;
	uint64_t t71 = 316777331099276LLU;

	t71 = (((x333==x334)*x335)-x336);

	if (t71 != 18446509448004768818LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x337 = UINT32_MAX;
	volatile int64_t x339 = -814005LL;
	int16_t x340 = -1;
	int64_t t72 = 3461121412LL;

	t72 = (((x337==x338)*x339)-x340);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -5;
	int32_t x346 = -1;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;

	t73 = (((x345==x346)*x347)-x348);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MIN;
	static int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;

	t74 = (((x353==x354)*x355)-x356);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x357 = UINT64_MAX;
	uint16_t x358 = 323U;
	static int32_t x359 = INT32_MIN;
	static uint8_t x360 = 16U;
	volatile int32_t t75 = -25434;

	t75 = (((x357==x358)*x359)-x360);

	if (t75 != -16) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x361 = 1;
	int64_t x362 = -295LL;
	static volatile uint64_t t76 = 475297679LLU;

	t76 = (((x361==x362)*x363)-x364);

	if (t76 != 18446744073709523745LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x366 = 1U;
	volatile int64_t x367 = INT64_MAX;
	int32_t x368 = INT32_MIN;
	int64_t t77 = 21158508275663LL;

	t77 = (((x365==x366)*x367)-x368);

	if (t77 != 2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x369 = -540648589557LL;
	uint32_t x372 = 1444005U;
	uint32_t t78 = 916U;

	t78 = (((x369==x370)*x371)-x372);

	if (t78 != 4293523291U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x373 = 49U;
	volatile int32_t x375 = INT32_MIN;
	int8_t x376 = 28;
	volatile int32_t t79 = 0;

	t79 = (((x373==x374)*x375)-x376);

	if (t79 != -28) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x377 = INT32_MIN;
	static int8_t x378 = INT8_MAX;
	int8_t x379 = 3;
	int32_t t80 = -7;

	t80 = (((x377==x378)*x379)-x380);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x387 = -1LL;
	int16_t x388 = -1;

	t81 = (((x385==x386)*x387)-x388);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x390 = INT64_MAX;
	int32_t x392 = -9;
	volatile int64_t t82 = 6795555628275LL;

	t82 = (((x389==x390)*x391)-x392);

	if (t82 != 9LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MIN;
	volatile int16_t x394 = INT16_MIN;
	int64_t x395 = 3699760850968577LL;
	static int16_t x396 = INT16_MAX;
	int64_t t83 = -49061568LL;

	t83 = (((x393==x394)*x395)-x396);

	if (t83 != -32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x397 = INT8_MAX;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = -61;
	int8_t x400 = INT8_MAX;
	int32_t t84 = -25;

	t84 = (((x397==x398)*x399)-x400);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x402 = -1;
	int8_t x403 = -1;
	volatile uint16_t x404 = 53U;

	t85 = (((x401==x402)*x403)-x404);

	if (t85 != -53) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x405 = 1;
	volatile int32_t x406 = INT32_MIN;
	static volatile int16_t x407 = 2823;
	static int64_t x408 = -782039LL;
	int64_t t86 = -768282395LL;

	t86 = (((x405==x406)*x407)-x408);

	if (t86 != 782039LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x409 = 8;
	int32_t x410 = -1;
	int32_t x412 = -1;

	t87 = (((x409==x410)*x411)-x412);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = INT64_MIN;
	static int8_t x414 = 1;
	static int64_t x415 = -12196652LL;

	t88 = (((x413==x414)*x415)-x416);

	if (t88 != -750LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = -1;
	int64_t x418 = -56LL;
	static int32_t x419 = 346656384;
	uint16_t x420 = UINT16_MAX;
	int32_t t89 = -155802;

	t89 = (((x417==x418)*x419)-x420);

	if (t89 != -65535) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x422 = INT64_MIN;
	volatile uint16_t x423 = UINT16_MAX;
	volatile uint8_t x424 = 4U;

	t90 = (((x421==x422)*x423)-x424);

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x425 = INT64_MIN;
	volatile int64_t x426 = INT64_MIN;
	static int32_t x428 = INT32_MIN;
	int64_t t91 = 189490247783993LL;

	t91 = (((x425==x426)*x427)-x428);

	if (t91 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = -784;
	int16_t x431 = INT16_MIN;
	volatile int8_t x432 = INT8_MIN;
	volatile int32_t t92 = 34854;

	t92 = (((x429==x430)*x431)-x432);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x435 = 5LLU;
	static int32_t x436 = INT32_MIN;
	volatile uint64_t t93 = 2987771535020LLU;

	t93 = (((x433==x434)*x435)-x436);

	if (t93 != 2147483648LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = INT8_MAX;
	int64_t x438 = -37004533674450777LL;
	int32_t x439 = INT32_MIN;
	int64_t t94 = -372232027LL;

	t94 = (((x437==x438)*x439)-x440);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x441 = -18107017;
	int32_t x442 = -1;
	volatile uint8_t x443 = UINT8_MAX;
	int16_t x444 = -24;

	t95 = (((x441==x442)*x443)-x444);

	if (t95 != 24) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MIN;
	uint16_t x446 = 1U;
	volatile int16_t x447 = INT16_MIN;
	volatile int32_t t96 = -3928061;

	t96 = (((x445==x446)*x447)-x448);

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = -1LL;
	int8_t x450 = -1;
	int32_t x451 = 49098;
	int32_t x452 = INT32_MAX;

	t97 = (((x449==x450)*x451)-x452);

	if (t97 != -2147434549) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = 1;
	int8_t x455 = 0;
	volatile int16_t x456 = INT16_MIN;
	static int32_t t98 = -99698;

	t98 = (((x453==x454)*x455)-x456);

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = 1;
	static volatile uint8_t x459 = 5U;
	volatile int32_t t99 = -6591537;

	t99 = (((x457==x458)*x459)-x460);

	if (t99 != -255) { NG(); } else { ; }
	
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

