#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = -145;
volatile int32_t t1 = -28;
int16_t x21 = -388;
static int64_t x24 = -549276LL;
int64_t x36 = INT64_MIN;
uint8_t x37 = 0U;
int8_t x41 = INT8_MIN;
volatile uint32_t x42 = UINT32_MAX;
volatile int64_t x50 = INT64_MIN;
int64_t x54 = INT64_MIN;
int32_t t13 = 498357317;
static int64_t x59 = INT64_MAX;
volatile int32_t x61 = -81715348;
int32_t t15 = -7119;
int64_t x70 = 1LL;
static int32_t t17 = 117040641;
int32_t t18 = -6191;
uint8_t x78 = UINT8_MAX;
int64_t x81 = -7228LL;
volatile uint32_t x82 = UINT32_MAX;
volatile int32_t t22 = 50;
volatile int32_t x93 = -2256573;
uint8_t x98 = 3U;
uint8_t x100 = UINT8_MAX;
volatile int32_t t24 = -118;
int64_t x103 = INT64_MIN;
static int32_t t26 = 44155968;
int8_t x111 = 0;
static uint32_t x112 = UINT32_MAX;
volatile int64_t x117 = INT64_MAX;
int16_t x127 = 67;
int32_t x135 = 0;
static int32_t t33 = 54538;
int16_t x138 = INT16_MAX;
volatile uint8_t x140 = 4U;
static uint8_t x153 = 5U;
int16_t x166 = INT16_MIN;
int32_t x169 = INT32_MAX;
int32_t x170 = INT32_MIN;
uint64_t x172 = 190423293819233059LLU;
int64_t x174 = INT64_MAX;
int16_t x176 = 218;
int32_t x179 = -1;
int32_t x180 = INT32_MIN;
int32_t x182 = -7;
uint8_t x183 = 2U;
volatile uint8_t x187 = 6U;
volatile int32_t t44 = 1067144;
uint16_t x199 = UINT16_MAX;
volatile uint8_t x200 = UINT8_MAX;
volatile int32_t t47 = 1585;
int16_t x203 = -9;
volatile int8_t x204 = 1;
static int32_t t49 = -3183451;
int16_t x209 = 995;
uint32_t x211 = UINT32_MAX;
static uint8_t x215 = 122U;
static int64_t x217 = INT64_MIN;
int8_t x223 = -1;
int16_t x224 = INT16_MIN;
int64_t x228 = -44976981280899900LL;
uint64_t x242 = UINT64_MAX;
uint8_t x247 = 100U;
int32_t t59 = -30;
volatile int16_t x252 = 77;
volatile int8_t x253 = 5;
int32_t t62 = -285;
int64_t x271 = -1LL;
static volatile int64_t x273 = -5845888LL;
static int8_t x284 = INT8_MIN;
int32_t x287 = INT32_MIN;
volatile int32_t t69 = -189890;
int8_t x294 = INT8_MIN;
int32_t x300 = INT32_MIN;
uint32_t x302 = 2836424U;
static int32_t x305 = INT32_MIN;
int16_t x306 = INT16_MIN;
volatile int8_t x307 = INT8_MIN;
int32_t x308 = -3814;
volatile int32_t t74 = 1881;
volatile uint16_t x311 = 177U;
static uint16_t x312 = 7U;
uint64_t x313 = 9935215LLU;
volatile uint64_t x316 = 186004LLU;
static volatile int32_t t76 = 78;
volatile uint16_t x320 = UINT16_MAX;
int16_t x321 = 196;
int16_t x325 = 6;
int32_t t79 = -10;
int32_t t82 = 18104;
int8_t x344 = -19;
uint64_t x346 = 268761813584101270LLU;
static int64_t x351 = INT64_MIN;
int64_t x352 = INT64_MIN;
int32_t x353 = -1;
uint16_t x363 = UINT16_MAX;
int32_t t89 = 5;
uint16_t x372 = 423U;
int64_t x373 = -1LL;
int64_t x374 = INT64_MIN;
int16_t x375 = INT16_MIN;
volatile uint8_t x381 = 57U;
int64_t x384 = -425629491792166LL;
int64_t x402 = INT64_MIN;
int16_t x407 = 1046;
volatile int32_t x409 = -320;
uint64_t x410 = 1LLU;


void f0(void) {
	uint64_t x2 = 5551089382250LLU;
	uint16_t x3 = 1U;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -12;

	t0 = ((x1+(x2<=x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	volatile int32_t x7 = -41152827;
	int64_t x8 = INT64_MIN;

	t1 = ((x5+(x6<=x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 0LLU;
	static uint16_t x10 = 456U;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 2185646;

	t2 = ((x9+(x10<=x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	static volatile int16_t x14 = 11198;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = 38601061163392562LL;
	static int32_t t3 = -6583711;

	t3 = ((x13+(x14<=x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -7;
	static volatile int64_t x18 = INT64_MIN;
	volatile int32_t x19 = INT32_MIN;
	uint32_t x20 = 14932496U;
	int32_t t4 = -3387133;

	t4 = ((x17+(x18<=x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	static uint8_t x23 = 3U;
	int32_t t5 = -39255;

	t5 = ((x21+(x22<=x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 5U;
	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -209293;

	t6 = ((x25+(x26<=x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile uint16_t x30 = 2503U;
	uint16_t x31 = 4526U;
	uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = -16158749;

	t7 = ((x29+(x30<=x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -24;
	static int32_t t8 = -30;

	t8 = ((x33+(x34<=x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 450058120;

	t9 = ((x37+(x38<=x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = 13521;
	int8_t x44 = 0;
	static volatile int32_t t10 = 6722;

	t10 = ((x41+(x42<=x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = -251;
	volatile uint32_t x47 = 0U;
	uint16_t x48 = 7U;
	volatile int32_t t11 = 511;

	t11 = ((x45+(x46<=x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	uint32_t x51 = 6759U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 57;

	t12 = ((x49+(x50<=x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 22LLU;
	int64_t x55 = INT64_MAX;
	uint64_t x56 = UINT64_MAX;

	t13 = ((x53+(x54<=x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	static volatile uint8_t x58 = 7U;
	uint32_t x60 = 5731964U;
	volatile int32_t t14 = -2082;

	t14 = ((x57+(x58<=x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = 6029779LL;

	t15 = ((x61+(x62<=x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -5462415959194317LL;
	int16_t x68 = -1;
	int32_t t16 = -45762444;

	t16 = ((x65+(x66<=x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	volatile uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MIN;

	t17 = ((x69+(x70<=x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 48;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = 22991970593LLU;
	static volatile uint32_t x76 = 334U;

	t18 = ((x73+(x74<=x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 2819U;
	volatile int8_t x79 = INT8_MIN;
	volatile int32_t x80 = -1;
	static volatile int32_t t19 = 29522;

	t19 = ((x77+(x78<=x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = -15;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 23676;

	t20 = ((x81+(x82<=x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -688;
	uint8_t x86 = 7U;
	int64_t x87 = INT64_MAX;
	int8_t x88 = -1;
	int32_t t21 = -172;

	t21 = ((x85+(x86<=x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static int8_t x90 = -1;
	int32_t x91 = -1;
	int64_t x92 = 22478057368LL;

	t22 = ((x89+(x90<=x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = UINT16_MAX;
	static int32_t x95 = -24;
	int8_t x96 = -9;
	static int32_t t23 = 27487773;

	t23 = ((x93+(x94<=x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint16_t x99 = 898U;

	t24 = ((x97+(x98<=x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	int8_t x104 = 0;
	volatile int32_t t25 = 19;

	t25 = ((x101+(x102<=x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static int32_t x106 = INT32_MAX;
	volatile int64_t x107 = 0LL;
	uint64_t x108 = 12299818LLU;

	t26 = ((x105+(x106<=x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 55;
	static int16_t x110 = INT16_MIN;
	volatile int32_t t27 = -729343;

	t27 = ((x109+(x110<=x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -13193738998492852LL;
	volatile int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int8_t x116 = -1;
	int32_t t28 = -1823501;

	t28 = ((x113+(x114<=x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	static int8_t x119 = INT8_MIN;
	volatile int32_t x120 = -1;
	volatile int32_t t29 = -205897;

	t29 = ((x117+(x118<=x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 0U;
	static volatile uint8_t x122 = 52U;
	uint16_t x123 = 6U;
	uint64_t x124 = 158612304325494369LLU;
	int32_t t30 = 45701;

	t30 = ((x121+(x122<=x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint32_t x126 = UINT32_MAX;
	volatile uint16_t x128 = UINT16_MAX;
	int32_t t31 = 168386991;

	t31 = ((x125+(x126<=x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = UINT8_MAX;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t32 = -98;

	t32 = ((x129+(x130<=x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = 0U;
	int16_t x136 = INT16_MIN;

	t33 = ((x133+(x134<=x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int16_t x139 = 1;
	int32_t t34 = -6;

	t34 = ((x137+(x138<=x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	volatile int32_t x146 = INT32_MAX;
	static uint16_t x147 = UINT16_MAX;
	volatile int32_t x148 = 1990;
	volatile int32_t t35 = 1;

	t35 = ((x145+(x146<=x147))<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 0;
	static volatile uint16_t x150 = UINT16_MAX;
	uint8_t x151 = 1U;
	volatile int8_t x152 = -6;
	volatile int32_t t36 = 0;

	t36 = ((x149+(x150<=x151))<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x154 = UINT32_MAX;
	static volatile uint16_t x155 = 41U;
	int64_t x156 = 2084653189958139LL;
	int32_t t37 = -63;

	t37 = ((x153+(x154<=x155))<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 2U;
	int8_t x158 = -1;
	static volatile uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t38 = 21215;

	t38 = ((x157+(x158<=x159))<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	static volatile int64_t x167 = -1LL;
	static uint16_t x168 = 12961U;
	int32_t t39 = -970833378;

	t39 = ((x165+(x166<=x167))<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x171 = 450581U;
	int32_t t40 = -33152;

	t40 = ((x169+(x170<=x171))<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x173 = INT16_MAX;
	int32_t x175 = INT32_MIN;
	volatile int32_t t41 = -182;

	t41 = ((x173+(x174<=x175))<x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	volatile int32_t x178 = INT32_MIN;
	int32_t t42 = -1558926;

	t42 = ((x177+(x178<=x179))<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 11;
	uint64_t x184 = 1292340386620LLU;
	static int32_t t43 = -1190532;

	t43 = ((x181+(x182<=x183))<x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 1;
	int8_t x186 = 30;
	int8_t x188 = -36;

	t44 = ((x185+(x186<=x187))<x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x189 = UINT16_MAX;
	int64_t x190 = 760107672758291733LL;
	int32_t x191 = -744726908;
	int32_t x192 = INT32_MIN;
	int32_t t45 = 31;

	t45 = ((x189+(x190<=x191))<x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	static int32_t t46 = -21;

	t46 = ((x193+(x194<=x195))<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = 31;
	volatile uint64_t x198 = UINT64_MAX;

	t47 = ((x197+(x198<=x199))<x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = 785U;
	int32_t x202 = 994;
	int32_t t48 = -188;

	t48 = ((x201+(x202<=x203))<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 6917;
	int16_t x206 = 848;
	uint8_t x207 = 0U;
	int64_t x208 = 363324914111599LL;

	t49 = ((x205+(x206<=x207))<x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = 42664LLU;
	int8_t x212 = -1;
	int32_t t50 = -27656;

	t50 = ((x209+(x210<=x211))<x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -11;
	volatile int32_t x214 = -1;
	static int16_t x216 = 1;
	static int32_t t51 = -1;

	t51 = ((x213+(x214<=x215))<x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x218 = 0U;
	uint32_t x219 = 1882212U;
	int32_t x220 = INT32_MAX;
	int32_t t52 = -6;

	t52 = ((x217+(x218<=x219))<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = 33;
	static int32_t t53 = 1029794627;

	t53 = ((x221+(x222<=x223))<x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x225 = INT16_MIN;
	volatile int64_t x226 = -4109913266LL;
	volatile int32_t x227 = 1467;
	int32_t t54 = -73504500;

	t54 = ((x225+(x226<=x227))<x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = 493U;
	static int16_t x231 = INT16_MIN;
	volatile int32_t x232 = INT32_MIN;
	int32_t t55 = -411;

	t55 = ((x229+(x230<=x231))<x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = UINT8_MAX;
	volatile uint32_t x234 = 672U;
	uint64_t x235 = UINT64_MAX;
	volatile int64_t x236 = -1LL;
	volatile int32_t t56 = 366;

	t56 = ((x233+(x234<=x235))<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	volatile int32_t x238 = -1495;
	int32_t x239 = -1;
	static int64_t x240 = -1LL;
	int32_t t57 = 16880;

	t57 = ((x237+(x238<=x239))<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MIN;
	static uint16_t x243 = 29215U;
	uint64_t x244 = 70LLU;
	volatile int32_t t58 = -94476;

	t58 = ((x241+(x242<=x243))<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MIN;
	static int8_t x246 = INT8_MAX;
	int32_t x248 = INT32_MIN;

	t59 = ((x245+(x246<=x247))<x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 16;
	uint8_t x250 = 126U;
	int32_t x251 = INT32_MIN;
	volatile int32_t t60 = 9;

	t60 = ((x249+(x250<=x251))<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x254 = -1LL;
	int8_t x255 = 4;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t61 = 1;

	t61 = ((x253+(x254<=x255))<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x257 = 723LLU;
	int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MIN;
	static uint16_t x260 = 12707U;

	t62 = ((x257+(x258<=x259))<x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	int32_t x264 = -1;
	int32_t t63 = 2;

	t63 = ((x261+(x262<=x263))<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = 184462971LLU;
	uint16_t x266 = 1883U;
	int16_t x267 = -1;
	uint32_t x268 = 3U;
	int32_t t64 = -27;

	t64 = ((x265+(x266<=x267))<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = 15;
	static int64_t x270 = -124142264LL;
	volatile int16_t x272 = -1;
	volatile int32_t t65 = -19;

	t65 = ((x269+(x270<=x271))<x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x274 = UINT32_MAX;
	volatile int8_t x275 = -1;
	uint32_t x276 = 291470139U;
	volatile int32_t t66 = -1;

	t66 = ((x273+(x274<=x275))<x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = 112115815LL;
	uint64_t x278 = 227492722LLU;
	uint64_t x279 = 20547794924391LLU;
	volatile uint16_t x280 = 3631U;
	volatile int32_t t67 = -496;

	t67 = ((x277+(x278<=x279))<x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = 2;
	volatile int16_t x282 = INT16_MIN;
	uint8_t x283 = 2U;
	volatile int32_t t68 = -784275;

	t68 = ((x281+(x282<=x283))<x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MAX;
	static int32_t x286 = 2931370;
	uint32_t x288 = 300881U;

	t69 = ((x285+(x286<=x287))<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = -4;
	uint32_t x290 = 1289144063U;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = -2058884371570923569LL;
	int32_t t70 = -7858256;

	t70 = ((x289+(x290<=x291))<x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = -116910818LL;
	int16_t x295 = INT16_MIN;
	volatile int16_t x296 = -1;
	int32_t t71 = -18275;

	t71 = ((x293+(x294<=x295))<x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -95;
	uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 80U;
	volatile int32_t t72 = -596835;

	t72 = ((x297+(x298<=x299))<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = 0;
	int64_t x303 = -1LL;
	static volatile int8_t x304 = 23;
	static int32_t t73 = -7;

	t73 = ((x301+(x302<=x303))<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {


	t74 = ((x305+(x306<=x307))<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x309 = INT16_MAX;
	int32_t x310 = INT32_MAX;
	static int32_t t75 = -9;

	t75 = ((x309+(x310<=x311))<x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = 248607334LL;
	int16_t x315 = INT16_MAX;

	t76 = ((x313+(x314<=x315))<x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -13;
	int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MIN;
	volatile int32_t t77 = 577802;

	t77 = ((x317+(x318<=x319))<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x322 = INT16_MIN;
	int64_t x323 = INT64_MAX;
	static uint64_t x324 = 23902213614LLU;
	volatile int32_t t78 = -1862;

	t78 = ((x321+(x322<=x323))<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x326 = 1522671798453302527LLU;
	int64_t x327 = INT64_MIN;
	int16_t x328 = 1;

	t79 = ((x325+(x326<=x327))<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int8_t x330 = INT8_MIN;
	static int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t80 = 276;

	t80 = ((x329+(x330<=x331))<x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MAX;
	volatile int16_t x334 = INT16_MIN;
	static uint64_t x335 = 67192750691475LLU;
	int64_t x336 = 3235933100881144LL;
	static int32_t t81 = 6007;

	t81 = ((x333+(x334<=x335))<x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = 4;
	int32_t x338 = -279;
	volatile uint16_t x339 = 17745U;
	int16_t x340 = INT16_MIN;

	t82 = ((x337+(x338<=x339))<x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x341 = 0U;
	int64_t x342 = -1LL;
	static int16_t x343 = 4977;
	volatile int32_t t83 = 57923990;

	t83 = ((x341+(x342<=x343))<x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x345 = 674U;
	int64_t x347 = -1788744261765LL;
	int32_t x348 = INT32_MIN;
	volatile int32_t t84 = 363277597;

	t84 = ((x345+(x346<=x347))<x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = 1LL;
	volatile int32_t t85 = 48396;

	t85 = ((x349+(x350<=x351))<x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x354 = UINT16_MAX;
	static uint8_t x355 = 119U;
	static int16_t x356 = -1;
	volatile int32_t t86 = -2169120;

	t86 = ((x353+(x354<=x355))<x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 2U;
	uint32_t x358 = 1857635167U;
	volatile uint32_t x359 = UINT32_MAX;
	uint64_t x360 = 195754LLU;
	volatile int32_t t87 = 2215;

	t87 = ((x357+(x358<=x359))<x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x361 = 494U;
	uint16_t x362 = 853U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t88 = -3570197;

	t88 = ((x361+(x362<=x363))<x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = 1;
	int32_t x367 = INT32_MIN;
	int32_t x368 = -1061271047;

	t89 = ((x365+(x366<=x367))<x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = 25U;
	uint8_t x370 = UINT8_MAX;
	static int32_t x371 = INT32_MAX;
	volatile int32_t t90 = -113221556;

	t90 = ((x369+(x370<=x371))<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x376 = INT8_MIN;
	volatile int32_t t91 = -101329;

	t91 = ((x373+(x374<=x375))<x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x382 = 8;
	uint32_t x383 = 24U;
	volatile int32_t t92 = 670;

	t92 = ((x381+(x382<=x383))<x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = INT16_MIN;
	uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 118U;
	int32_t x388 = 4;
	static volatile int32_t t93 = 0;

	t93 = ((x385+(x386<=x387))<x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x389 = -1;
	volatile int8_t x390 = -1;
	static int64_t x391 = 99761069318600LL;
	uint16_t x392 = 5U;
	int32_t t94 = 56;

	t94 = ((x389+(x390<=x391))<x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -1131128;
	int32_t x394 = 28;
	volatile int32_t x395 = -43463374;
	uint64_t x396 = 16718793790044LLU;
	static int32_t t95 = -21966056;

	t95 = ((x393+(x394<=x395))<x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = -5904154683700LL;
	uint32_t x398 = 106434850U;
	volatile uint64_t x399 = 2492842LLU;
	uint32_t x400 = 15753084U;
	static volatile int32_t t96 = -14734919;

	t96 = ((x397+(x398<=x399))<x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x401 = UINT8_MAX;
	int32_t x403 = INT32_MAX;
	static volatile uint8_t x404 = 1U;
	static int32_t t97 = -10;

	t97 = ((x401+(x402<=x403))<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = 9;
	static volatile int32_t x406 = -195225017;
	volatile int64_t x408 = -1LL;
	static volatile int32_t t98 = -1749;

	t98 = ((x405+(x406<=x407))<x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x411 = 9964U;
	int16_t x412 = INT16_MAX;
	static int32_t t99 = 17113699;

	t99 = ((x409+(x410<=x411))<x412);

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

