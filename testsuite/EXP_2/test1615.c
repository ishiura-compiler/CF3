#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
uint32_t x9 = 7U;
static int8_t x18 = -1;
uint32_t x20 = 554U;
static uint16_t x21 = UINT16_MAX;
int8_t x26 = INT8_MIN;
int32_t t6 = -154;
int8_t x34 = -1;
uint64_t x42 = UINT64_MAX;
int16_t x44 = -1579;
uint8_t x45 = 14U;
int64_t x46 = INT64_MAX;
int8_t x47 = -1;
uint8_t x49 = 98U;
int16_t x56 = INT16_MIN;
volatile uint32_t t14 = 0U;
int32_t x79 = -1;
int8_t x82 = -1;
int64_t x84 = INT64_MIN;
volatile int32_t x86 = 91;
int16_t x88 = INT16_MAX;
int8_t x91 = INT8_MIN;
int64_t x92 = INT64_MAX;
int64_t x109 = -1LL;
static int64_t x117 = INT64_MIN;
static uint32_t x123 = 5375978U;
static int32_t x126 = 88857;
int32_t x127 = INT32_MAX;
int8_t x128 = INT8_MAX;
volatile uint64_t x132 = UINT64_MAX;
static uint64_t x143 = 11140182LLU;
int32_t x146 = -232195084;
static int16_t x156 = 6;
uint8_t x158 = 6U;
volatile uint64_t x159 = 8828333767112330LLU;
int16_t x161 = INT16_MAX;
static int8_t x168 = INT8_MIN;
static int32_t t41 = -40403;
static int64_t x170 = INT64_MIN;
uint8_t x172 = 19U;
uint64_t x178 = UINT64_MAX;
volatile int16_t x179 = INT16_MIN;
uint64_t x181 = 138LLU;
int32_t x182 = INT32_MIN;
volatile int16_t x199 = INT16_MIN;
int32_t t50 = -123;
static volatile uint64_t x207 = 8858578743790154068LLU;
int32_t x213 = -1;
int32_t x216 = 971267;
int32_t t54 = -15059792;
uint8_t x221 = 3U;
static volatile int8_t x230 = -1;
int8_t x233 = 7;
static int8_t x234 = -1;
uint64_t x235 = UINT64_MAX;
uint32_t t58 = 30U;
uint64_t x237 = 2LLU;
int32_t t59 = 101;
volatile int8_t x243 = 24;
volatile int32_t t60 = -1452237;
static volatile uint32_t t65 = 76U;
int8_t x268 = INT8_MIN;
uint64_t x273 = 459349048361602LLU;
int64_t x275 = -1LL;
int16_t x276 = -934;
uint8_t x281 = UINT8_MAX;
volatile int16_t x284 = -1;
volatile uint32_t x286 = 1669399253U;
static int16_t x289 = -1359;
int16_t x291 = -9780;
volatile uint64_t x296 = 500351694365967547LLU;
volatile uint64_t t73 = 0LLU;
static volatile int64_t x299 = INT64_MAX;
uint16_t x302 = UINT16_MAX;
int32_t t75 = -556;
int64_t x312 = -13LL;
uint16_t x317 = 10U;
uint64_t x323 = 32879900338LLU;
int16_t x324 = 7;
volatile int64_t t81 = 1410048554LL;
volatile int16_t x335 = 655;
uint8_t x336 = UINT8_MAX;
int64_t x347 = INT64_MAX;
static uint64_t x351 = 25279LLU;
uint32_t x357 = 18205021U;
static uint64_t x363 = 75456576LLU;
int16_t x370 = -12;
int32_t x391 = INT32_MIN;
int8_t x395 = INT8_MAX;
static volatile uint32_t t98 = 234U;
volatile uint8_t x398 = 0U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile uint64_t x3 = 12222540235690LLU;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 1154;

	t0 = ((x1==(x2<=x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static volatile uint32_t x6 = UINT32_MAX;
	volatile uint32_t x7 = 133U;
	int16_t x8 = 981;
	int32_t t1 = -122;

	t1 = ((x5==(x6<=x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	static uint16_t x12 = 1733U;
	int32_t t2 = 7533;

	t2 = ((x9==(x10<=x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 3003;
	int8_t x14 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	int32_t t3 = 263;

	t3 = ((x13==(x14<=x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint8_t x19 = 7U;
	uint32_t t4 = 20230458U;

	t4 = ((x17==(x18<=x19))*x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 121U;
	int64_t x23 = 0LL;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 49;

	t5 = ((x21==(x22<=x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static volatile int32_t x27 = INT32_MAX;
	int32_t x28 = INT32_MAX;

	t6 = ((x25==(x26<=x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 1325LL;
	volatile int64_t x30 = -543536LL;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 280;

	t7 = ((x29==(x30<=x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -59748740282998LL;
	static int16_t x35 = INT16_MIN;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = 286313819;

	t8 = ((x33==(x34<=x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int32_t x38 = INT32_MIN;
	static int8_t x39 = INT8_MAX;
	uint16_t x40 = 1016U;
	int32_t t9 = -1;

	t9 = ((x37==(x38<=x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int64_t x43 = 1LL;
	static volatile int32_t t10 = 1552735;

	t10 = ((x41==(x42<=x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -223935005;

	t11 = ((x45==(x46<=x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = 1;
	int16_t x51 = 145;
	uint8_t x52 = UINT8_MAX;
	static int32_t t12 = -2177376;

	t12 = ((x49==(x50<=x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 11;
	static int8_t x54 = INT8_MIN;
	int16_t x55 = 71;
	volatile int32_t t13 = -126131;

	t13 = ((x53==(x54<=x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 122U;

	t14 = ((x57==(x58<=x59))*x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 151506427;

	t15 = ((x61==(x62<=x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	volatile int64_t x66 = 282LL;
	static volatile int16_t x67 = 5;
	uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 3816LLU;

	t16 = ((x65==(x66<=x67))*x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	int8_t x72 = -11;
	int32_t t17 = -1662;

	t17 = ((x69==(x70<=x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint16_t x74 = 22U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = 14;
	int32_t t18 = 2;

	t18 = ((x73==(x74<=x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 654159364464816015LL;
	int64_t x78 = INT64_MAX;
	int8_t x80 = -52;
	volatile int32_t t19 = -193;

	t19 = ((x77==(x78<=x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 841064U;
	volatile int32_t x83 = INT32_MAX;
	volatile int64_t t20 = -16660744LL;

	t20 = ((x81==(x82<=x83))*x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 31U;
	uint16_t x87 = 10U;
	volatile int32_t t21 = -116014286;

	t21 = ((x85==(x86<=x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	static uint64_t x90 = 90955290LLU;
	static volatile int64_t t22 = -814342092523595118LL;

	t22 = ((x89==(x90<=x91))*x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	static int16_t x94 = INT16_MIN;
	static int8_t x95 = -1;
	uint8_t x96 = 126U;
	volatile int32_t t23 = -3729747;

	t23 = ((x93==(x94<=x95))*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 2;
	int32_t x98 = -6885449;
	volatile uint16_t x99 = 3974U;
	volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = -99;

	t24 = ((x97==(x98<=x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	int32_t x102 = 992974;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 16;

	t25 = ((x101==(x102<=x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 27269752U;
	int64_t x106 = -1LL;
	int64_t x107 = INT64_MAX;
	int16_t x108 = -1;
	int32_t t26 = 14354;

	t26 = ((x105==(x106<=x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = INT8_MIN;
	int8_t x111 = 7;
	static uint32_t x112 = 1U;
	static uint32_t t27 = 10969U;

	t27 = ((x109==(x110<=x111))*x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	uint16_t x114 = 28U;
	int64_t x115 = -1LL;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = -209;

	t28 = ((x113==(x114<=x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	int8_t x119 = INT8_MAX;
	uint32_t x120 = 2U;
	volatile uint32_t t29 = 20774057U;

	t29 = ((x117==(x118<=x119))*x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	static volatile uint64_t x122 = UINT64_MAX;
	volatile uint16_t x124 = UINT16_MAX;
	static volatile int32_t t30 = -28596;

	t30 = ((x121==(x122<=x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int32_t t31 = 375;

	t31 = ((x125==(x126<=x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int8_t x130 = -1;
	uint16_t x131 = 3U;
	uint64_t t32 = 900LLU;

	t32 = ((x129==(x130<=x131))*x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int32_t x134 = -1;
	volatile int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 9;

	t33 = ((x133==(x134<=x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = 1;
	static int64_t x140 = INT64_MAX;
	volatile int64_t t34 = -173LL;

	t34 = ((x137==(x138<=x139))*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 1U;
	uint8_t x142 = UINT8_MAX;
	int32_t x144 = -1;
	static int32_t t35 = -109;

	t35 = ((x141==(x142<=x143))*x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -12;
	static int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -6741;

	t36 = ((x145==(x146<=x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	static int32_t t37 = -40535;

	t37 = ((x149==(x150<=x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	uint64_t x154 = 64751LLU;
	int64_t x155 = 35LL;
	volatile int32_t t38 = 380;

	t38 = ((x153==(x154<=x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x160 = -1;
	volatile int32_t t39 = -1424737;

	t39 = ((x157==(x158<=x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MAX;
	static int32_t x163 = 466509;
	int16_t x164 = INT16_MAX;
	static int32_t t40 = 1212;

	t40 = ((x161==(x162<=x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = -1;
	int16_t x166 = 183;
	static int32_t x167 = INT32_MAX;

	t41 = ((x165==(x166<=x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x171 = 1339897;
	static int32_t t42 = -2707033;

	t42 = ((x169==(x170<=x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -188;
	int32_t x174 = 18404;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = 5U;
	int32_t t43 = 51333;

	t43 = ((x173==(x174<=x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -251332604;

	t44 = ((x177==(x178<=x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x183 = -285;
	int64_t x184 = INT64_MIN;
	volatile int64_t t45 = -259566695597794396LL;

	t45 = ((x181==(x182<=x183))*x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 4U;
	volatile int64_t x186 = -6LL;
	static uint16_t x187 = 27007U;
	int32_t x188 = -1;
	volatile int32_t t46 = -10639;

	t46 = ((x185==(x186<=x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MAX;
	volatile int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MAX;
	volatile int8_t x192 = 36;
	int32_t t47 = -906982;

	t47 = ((x189==(x190<=x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 564488329LLU;
	int32_t x194 = 21;
	int8_t x195 = 4;
	volatile int32_t x196 = -43339635;
	int32_t t48 = -31;

	t48 = ((x193==(x194<=x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 1U;
	int32_t x198 = -388500;
	uint8_t x200 = 20U;
	static int32_t t49 = -609573950;

	t49 = ((x197==(x198<=x199))*x200);

	if (t49 != 20) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = 0;
	static int32_t x203 = INT32_MIN;
	int16_t x204 = -54;

	t50 = ((x201==(x202<=x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int64_t x206 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = 14982;

	t51 = ((x205==(x206<=x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 23U;
	static int16_t x210 = -137;
	int32_t x211 = -1;
	int32_t x212 = -1;
	int32_t t52 = 1;

	t52 = ((x209==(x210<=x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -1004LL;
	static int8_t x215 = -1;
	int32_t t53 = 830301819;

	t53 = ((x213==(x214<=x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 15U;
	int16_t x218 = -1;
	uint64_t x219 = 97199947726428LLU;
	int32_t x220 = -4487;

	t54 = ((x217==(x218<=x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 951;
	volatile int8_t x223 = INT8_MAX;
	volatile int32_t x224 = -1;
	int32_t t55 = 1015043;

	t55 = ((x221==(x222<=x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	static uint8_t x226 = 57U;
	static int8_t x227 = 1;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t56 = -249097;

	t56 = ((x225==(x226<=x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 55LLU;
	volatile int8_t x231 = 7;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -7974;

	t57 = ((x229==(x230<=x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x236 = UINT32_MAX;

	t58 = ((x233==(x234<=x235))*x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -16;

	t59 = ((x237==(x238<=x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = 1;
	uint8_t x244 = UINT8_MAX;

	t60 = ((x241==(x242<=x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	int32_t x248 = -13982;
	int32_t t61 = -1955176;

	t61 = ((x245==(x246<=x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int32_t x250 = -1;
	uint16_t x251 = 3U;
	static uint64_t x252 = 105LLU;
	volatile uint64_t t62 = 54095672131804LLU;

	t62 = ((x249==(x250<=x251))*x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	static uint32_t x254 = UINT32_MAX;
	int8_t x255 = 0;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -403055;

	t63 = ((x253==(x254<=x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -2814LL;
	int16_t x258 = INT16_MIN;
	static int16_t x259 = 1;
	int32_t x260 = INT32_MIN;
	int32_t t64 = -111852818;

	t64 = ((x257==(x258<=x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = 1;
	int32_t x262 = -1;
	volatile int16_t x263 = -82;
	volatile uint32_t x264 = 58899120U;

	t65 = ((x261==(x262<=x263))*x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 20671037639207LLU;
	static int8_t x266 = -1;
	uint16_t x267 = 1614U;
	int32_t t66 = -6;

	t66 = ((x265==(x266<=x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	uint64_t x270 = 39LLU;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t67 = 486249U;

	t67 = ((x269==(x270<=x271))*x272);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = UINT16_MAX;
	int32_t t68 = -392965557;

	t68 = ((x273==(x274<=x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 696U;
	volatile int64_t x278 = INT64_MIN;
	static uint8_t x279 = UINT8_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t69 = 8532306247229844487LLU;

	t69 = ((x277==(x278<=x279))*x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -573018024;
	int16_t x283 = 119;
	volatile int32_t t70 = 1004;

	t70 = ((x281==(x282<=x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1295U;
	int8_t x287 = -1;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -1;

	t71 = ((x285==(x286<=x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = INT64_MAX;
	int64_t t72 = -1LL;

	t72 = ((x289==(x290<=x291))*x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MAX;
	uint16_t x295 = 0U;

	t73 = ((x293==(x294<=x295))*x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -2;
	int64_t x298 = -1388818LL;
	int64_t x300 = -4LL;
	int64_t t74 = 9440786950075235LL;

	t74 = ((x297==(x298<=x299))*x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 1893U;
	volatile int8_t x303 = 4;
	static volatile uint8_t x304 = UINT8_MAX;

	t75 = ((x301==(x302<=x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MAX;
	static uint32_t x307 = UINT32_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	uint32_t t76 = 647597468U;

	t76 = ((x305==(x306<=x307))*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MAX;
	static volatile int16_t x310 = INT16_MIN;
	uint8_t x311 = 0U;
	int64_t t77 = -3LL;

	t77 = ((x309==(x310<=x311))*x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = -1;
	int16_t x315 = -473;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 12349265;

	t78 = ((x313==(x314<=x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -63672829748798LL;
	static uint16_t x319 = 1U;
	volatile int64_t x320 = INT64_MIN;
	int64_t t79 = 123513611275484271LL;

	t79 = ((x317==(x318<=x319))*x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 34U;
	volatile int32_t x322 = INT32_MIN;
	volatile int32_t t80 = 2;

	t80 = ((x321==(x322<=x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = -1110399LL;
	volatile int8_t x327 = INT8_MAX;
	volatile int64_t x328 = INT64_MIN;

	t81 = ((x325==(x326<=x327))*x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 5388LLU;
	static int64_t x330 = INT64_MAX;
	static int32_t x331 = 224890;
	static uint32_t x332 = UINT32_MAX;
	volatile uint32_t t82 = 3U;

	t82 = ((x329==(x330<=x331))*x332);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 1909127;
	int64_t x334 = INT64_MAX;
	static int32_t t83 = 0;

	t83 = ((x333==(x334<=x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -3264LL;
	int16_t x338 = INT16_MIN;
	volatile int32_t x339 = INT32_MAX;
	int8_t x340 = 0;
	volatile int32_t t84 = -83886;

	t84 = ((x337==(x338<=x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 0U;
	static int8_t x342 = 40;
	static volatile int64_t x343 = INT64_MIN;
	volatile uint16_t x344 = 468U;
	static volatile int32_t t85 = 0;

	t85 = ((x341==(x342<=x343))*x344);

	if (t85 != 468) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -19;
	int8_t x346 = 1;
	volatile int32_t x348 = -1;
	int32_t t86 = 111209388;

	t86 = ((x345==(x346<=x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MAX;
	int16_t x350 = 4822;
	uint64_t x352 = 725695LLU;
	uint64_t t87 = 3LLU;

	t87 = ((x349==(x350<=x351))*x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1LL;
	volatile uint64_t x356 = 410160310663668LLU;
	uint64_t t88 = 128096747LLU;

	t88 = ((x353==(x354<=x355))*x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = -555;
	static uint32_t x359 = UINT32_MAX;
	int32_t x360 = -7055;
	int32_t t89 = -1004;

	t89 = ((x357==(x358<=x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x362 = UINT64_MAX;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 227;

	t90 = ((x361==(x362<=x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 120346269387954LLU;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 39;

	t91 = ((x365==(x366<=x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 1U;
	int8_t x371 = INT8_MIN;
	int32_t x372 = 9;
	volatile int32_t t92 = -1123;

	t92 = ((x369==(x370<=x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	int64_t x374 = -1LL;
	static volatile uint32_t x375 = 123647U;
	static volatile int64_t x376 = INT64_MAX;
	volatile int64_t t93 = 57346273LL;

	t93 = ((x373==(x374<=x375))*x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	uint8_t x378 = 4U;
	int8_t x379 = -16;
	uint64_t x380 = 309LLU;
	volatile uint64_t t94 = 44LLU;

	t94 = ((x377==(x378<=x379))*x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 20977482;
	int16_t x382 = INT16_MAX;
	volatile uint16_t x383 = 1U;
	uint64_t x384 = UINT64_MAX;
	uint64_t t95 = 7180471LLU;

	t95 = ((x381==(x382<=x383))*x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = 27062344U;
	volatile int16_t x386 = INT16_MIN;
	volatile int16_t x387 = INT16_MAX;
	static uint8_t x388 = 0U;
	volatile int32_t t96 = -78098262;

	t96 = ((x385==(x386<=x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -6418792LL;
	volatile int64_t x390 = -1LL;
	int64_t x392 = INT64_MIN;
	int64_t t97 = -1860142355LL;

	t97 = ((x389==(x390<=x391))*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 85U;
	volatile uint32_t x394 = 5U;
	uint32_t x396 = UINT32_MAX;

	t98 = ((x393==(x394<=x395))*x396);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -8;
	static uint64_t x399 = 8156010143729179758LLU;
	int32_t x400 = 3109735;
	volatile int32_t t99 = 1182;

	t99 = ((x397==(x398<=x399))*x400);

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

