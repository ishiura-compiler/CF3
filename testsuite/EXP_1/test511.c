#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -153;
int64_t t3 = 723863LL;
uint64_t t5 = 3774LLU;
static int8_t x26 = -3;
static uint8_t x32 = UINT8_MAX;
volatile uint64_t t8 = 13784807616956LLU;
static volatile uint64_t x40 = 538782091633067207LLU;
int32_t x50 = -1;
int32_t x53 = -1;
uint16_t x60 = 18U;
int8_t x62 = INT8_MIN;
int16_t x65 = INT16_MIN;
int8_t x70 = 1;
volatile int8_t x74 = INT8_MAX;
static volatile uint64_t x76 = 532024006LLU;
volatile int64_t t18 = -48218204LL;
int16_t x85 = INT16_MIN;
int8_t x87 = -3;
static uint64_t x88 = 1362253LLU;
volatile uint64_t t19 = 19346639945585LLU;
static uint64_t x89 = UINT64_MAX;
int16_t x90 = INT16_MAX;
int16_t x94 = INT16_MIN;
static volatile uint8_t x97 = 72U;
static int32_t x99 = INT32_MIN;
int16_t x112 = INT16_MIN;
volatile int64_t x113 = INT64_MIN;
int32_t x114 = -4157080;
volatile uint64_t t29 = 32301140LLU;
uint32_t x137 = 81U;
volatile uint32_t x138 = UINT32_MAX;
volatile int64_t t31 = -53553235LL;
int32_t x148 = -98096953;
uint64_t x156 = 100693875519625LLU;
int8_t x158 = -1;
static volatile uint32_t x159 = 8052090U;
uint64_t x163 = 1436632478240LLU;
static volatile int64_t x164 = INT64_MIN;
int16_t x173 = INT16_MIN;
uint8_t x184 = UINT8_MAX;
int16_t x194 = -1;
int64_t x197 = INT64_MIN;
int64_t t46 = 9886969LL;
volatile int8_t x204 = -1;
volatile int64_t t47 = -37LL;
static int8_t x211 = INT8_MAX;
int8_t x219 = INT8_MIN;
volatile int32_t x221 = -1;
static volatile int32_t t52 = 441188324;
int64_t x227 = INT64_MAX;
int16_t x240 = -1;
static volatile int32_t x245 = -1;
volatile int64_t t57 = -386102747LL;
static int64_t x258 = INT64_MIN;
int32_t x260 = -63253;
volatile int64_t t60 = -69LL;
int16_t x261 = 75;
static int32_t x268 = INT32_MIN;
static int16_t x269 = INT16_MIN;
static int32_t x278 = INT32_MAX;
uint16_t x279 = UINT16_MAX;
int32_t x280 = INT32_MAX;
uint16_t x287 = UINT16_MAX;
volatile int64_t t66 = -7401414157LL;
static volatile int16_t x293 = INT16_MAX;
volatile int32_t t68 = 29028232;
uint8_t x297 = 3U;
int64_t x298 = 4LL;
static volatile int64_t x301 = -1LL;
volatile int8_t x309 = INT8_MAX;
int64_t t72 = -1LL;
int32_t t76 = -1524821;
volatile uint8_t x331 = 7U;
volatile int32_t t77 = -3076;
static volatile int16_t x341 = INT16_MAX;
uint16_t x345 = 343U;
volatile int32_t t81 = -2;
uint32_t x352 = 625U;
volatile int64_t x357 = -1LL;
int8_t x362 = INT8_MIN;
static volatile uint64_t t85 = 141492LLU;
int16_t x366 = -1;
volatile int64_t t88 = -32114LL;
int32_t x378 = INT32_MIN;
volatile uint32_t t89 = 519403982U;
int16_t x383 = -1;
volatile int64_t t90 = 137607757014LL;
int64_t x390 = 93720227746640466LL;
static int8_t x395 = -6;
int32_t x404 = INT32_MIN;
uint32_t x413 = 2U;
int32_t x417 = INT32_MIN;
uint16_t x418 = UINT16_MAX;


void f0(void) {
	int8_t x2 = 7;
	volatile int16_t x3 = INT16_MIN;
	static int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -286LL;

	t0 = (((x1/x2)+x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int64_t x6 = 266379455400936409LL;
	static int8_t x7 = 3;
	int8_t x8 = -1;
	volatile int64_t t1 = 0LL;

	t1 = (((x5/x6)+x7)/x8);

	if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 7U;
	int16_t x10 = 1022;
	uint32_t x11 = 1411078109U;
	uint8_t x12 = 1U;
	uint32_t t2 = 15146440U;

	t2 = (((x9/x10)+x11)/x12);

	if (t2 != 1411078109U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MAX;
	int32_t x15 = 588576;
	int8_t x16 = INT8_MIN;

	t3 = (((x13/x14)+x15)/x16);

	if (t3 != -4598LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -139537376554271LL;
	int8_t x19 = -43;
	uint8_t x20 = 1U;
	int64_t t4 = 1731721563099470LL;

	t4 = (((x17/x18)+x19)/x20);

	if (t4 != -43LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 726644967LLU;
	static int32_t x22 = INT32_MAX;
	int16_t x23 = 6;
	int32_t x24 = -2628295;

	t5 = (((x21/x22)+x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	int32_t x28 = -1;
	volatile int64_t t6 = 18LL;

	t6 = (((x25/x26)+x27)/x28);

	if (t6 != -3074457345618258474LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile int64_t x30 = INT64_MIN;
	volatile int32_t x31 = INT32_MAX;
	volatile int64_t t7 = 5416LL;

	t7 = (((x29/x30)+x31)/x32);

	if (t7 != 8421504LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 189LLU;
	static int16_t x34 = 324;
	volatile int32_t x35 = -1;
	int32_t x36 = INT32_MIN;

	t8 = (((x33/x34)+x35)/x36);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	volatile int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MAX;
	volatile uint64_t t9 = 1990LLU;

	t9 = (((x37/x38)+x39)/x40);

	if (t9 != 17LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MAX;
	uint64_t x51 = 0LLU;
	int64_t x52 = INT64_MAX;
	uint64_t t10 = 436435123711LLU;

	t10 = (((x49/x50)+x51)/x52);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x54 = 328750446012LLU;
	static uint16_t x55 = UINT16_MAX;
	static uint16_t x56 = 125U;
	static uint64_t t11 = 44LLU;

	t11 = (((x53/x54)+x55)/x56);

	if (t11 != 449417LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x57 = INT32_MAX;
	int64_t x58 = 462349LL;
	volatile int8_t x59 = INT8_MIN;
	int64_t t12 = 0LL;

	t12 = (((x57/x58)+x59)/x60);

	if (t12 != 250LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x61 = INT64_MAX;
	static volatile int8_t x63 = 0;
	int32_t x64 = INT32_MAX;
	static int64_t t13 = -30261398750LL;

	t13 = (((x61/x62)+x63)/x64);

	if (t13 != -33554432LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MAX;
	volatile int64_t x67 = INT64_MAX;
	int64_t x68 = 413LL;
	static volatile int64_t t14 = -45296247355LL;

	t14 = (((x65/x66)+x67)/x68);

	if (t14 != 22332619943958294LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = UINT64_MAX;
	uint8_t x71 = 6U;
	int32_t x72 = INT32_MAX;
	static volatile uint64_t t15 = 37500231653LLU;

	t15 = (((x69/x70)+x71)/x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MIN;
	int64_t x75 = -137510222497391LL;
	volatile uint64_t t16 = 0LLU;

	t16 = (((x73/x74)+x75)/x76);

	if (t16 != 34672507923LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 99U;
	uint32_t x78 = 30121663U;
	volatile uint8_t x79 = UINT8_MAX;
	static int8_t x80 = INT8_MAX;
	static volatile uint32_t t17 = 215520U;

	t17 = (((x77/x78)+x79)/x80);

	if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	uint16_t x82 = 223U;
	int64_t x83 = -26111LL;
	volatile int64_t x84 = INT64_MAX;

	t18 = (((x81/x82)+x83)/x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x86 = UINT64_MAX;

	t19 = (((x85/x86)+x87)/x88);

	if (t19 != 13541349568479LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t20 = 9394LLU;

	t20 = (((x89/x90)+x91)/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	volatile int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;
	uint64_t t21 = 3859242296435896LLU;

	t21 = (((x93/x94)+x95)/x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	static int64_t x100 = INT64_MIN;
	int64_t t22 = -90619826431LL;

	t22 = (((x97/x98)+x99)/x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 3;
	static int16_t x102 = INT16_MIN;
	int8_t x103 = -2;
	static int32_t x104 = 427;
	static volatile int32_t t23 = -7089;

	t23 = (((x101/x102)+x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x105 = 304U;
	int16_t x106 = -10544;
	static int32_t x107 = INT32_MAX;
	volatile int16_t x108 = -1;
	volatile int32_t t24 = 741;

	t24 = (((x105/x106)+x107)/x108);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 416588244U;
	volatile int32_t x110 = INT32_MAX;
	static int32_t x111 = INT32_MIN;
	uint32_t t25 = 503U;

	t25 = (((x109/x110)+x111)/x112);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x115 = -1;
	int8_t x116 = INT8_MIN;
	int64_t t26 = 87895030885753577LL;

	t26 = (((x113/x114)+x115)/x116);

	if (t26 != -17333703955LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 442U;
	int8_t x118 = -1;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MIN;
	volatile int64_t t27 = 1366LL;

	t27 = (((x117/x118)+x119)/x120);

	if (t27 != -72057594037927932LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 229562LLU;
	int64_t x122 = -1874869987065LL;
	int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	uint64_t t28 = 7735608918361831LLU;

	t28 = (((x121/x122)+x123)/x124);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = -1;
	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = UINT64_MAX;

	t29 = (((x125/x126)+x127)/x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = -2695349188404137253LL;
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = UINT16_MAX;
	volatile int64_t t30 = -30798LL;

	t30 = (((x129/x130)+x131)/x132);

	if (t30 != 41128392285101LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x139 = INT64_MIN;
	int32_t x140 = -187019412;

	t31 = (((x137/x138)+x139)/x140);

	if (t31 != 49317725567LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint8_t x142 = 44U;
	static int32_t x143 = 2386687;
	volatile int16_t x144 = INT16_MIN;
	static volatile uint32_t t32 = 0U;

	t32 = (((x141/x142)+x143)/x144);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	volatile int64_t t33 = 457667914544097LL;

	t33 = (((x145/x146)+x147)/x148);

	if (t33 != 94023022680LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = UINT32_MAX;
	static volatile int8_t x152 = -1;
	volatile uint32_t t34 = 17U;

	t34 = (((x149/x150)+x151)/x152);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = 361930511;
	int8_t x155 = INT8_MIN;
	volatile uint64_t t35 = 8LLU;

	t35 = (((x153/x154)+x155)/x156);

	if (t35 != 183196LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = 6;
	static int64_t x160 = -676186LL;
	int64_t t36 = -8425LL;

	t36 = (((x157/x158)+x159)/x160);

	if (t36 != -11LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = 5028;
	static uint16_t x162 = UINT16_MAX;
	volatile uint64_t t37 = 828LLU;

	t37 = (((x161/x162)+x163)/x164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = -1;
	int16_t x166 = -209;
	volatile int8_t x167 = INT8_MIN;
	static uint8_t x168 = 11U;
	int32_t t38 = 1;

	t38 = (((x165/x166)+x167)/x168);

	if (t38 != -11) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = 6123;
	volatile uint8_t x170 = 46U;
	static uint64_t x171 = 25968949LLU;
	static int8_t x172 = 1;
	volatile uint64_t t39 = 15LLU;

	t39 = (((x169/x170)+x171)/x172);

	if (t39 != 25969082LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t40 = -128;

	t40 = (((x173/x174)+x175)/x176);

	if (t40 != -8421504) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x177 = 12312U;
	uint64_t x178 = 2928550LLU;
	volatile int64_t x179 = 89040LL;
	int64_t x180 = INT64_MAX;
	uint64_t t41 = 19936200LLU;

	t41 = (((x177/x178)+x179)/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	static int8_t x182 = INT8_MIN;
	volatile uint8_t x183 = 0U;
	static int32_t t42 = -225638007;

	t42 = (((x181/x182)+x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MAX;
	static uint32_t x186 = 43817U;
	static int32_t x187 = -1;
	int64_t x188 = INT64_MAX;
	volatile int64_t t43 = 955197078LL;

	t43 = (((x185/x186)+x187)/x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 38U;
	static uint8_t x190 = 55U;
	uint16_t x191 = 6133U;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t44 = 6U;

	t44 = (((x189/x190)+x191)/x192);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 13;
	volatile int8_t x195 = INT8_MIN;
	volatile int16_t x196 = INT16_MAX;
	volatile int32_t t45 = 1624;

	t45 = (((x193/x194)+x195)/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x198 = 107U;
	int32_t x199 = -6127362;
	volatile int16_t x200 = -1;

	t46 = (((x197/x198)+x199)/x200);

	if (t46 != 86199738668321528LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -1LL;
	uint16_t x202 = 9U;
	uint32_t x203 = 7703U;

	t47 = (((x201/x202)+x203)/x204);

	if (t47 != -7703LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 530U;
	uint8_t x206 = 1U;
	int8_t x207 = INT8_MAX;
	uint8_t x208 = UINT8_MAX;
	int32_t t48 = 50527323;

	t48 = (((x205/x206)+x207)/x208);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = 62;
	int64_t x210 = INT64_MIN;
	int16_t x212 = INT16_MIN;
	int64_t t49 = -235LL;

	t49 = (((x209/x210)+x211)/x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	volatile uint8_t x214 = 1U;
	static uint16_t x215 = 0U;
	static int32_t x216 = INT32_MAX;
	int32_t t50 = -100;

	t50 = (((x213/x214)+x215)/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 124;
	uint8_t x218 = UINT8_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t51 = 1022278048;

	t51 = (((x217/x218)+x219)/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x222 = INT32_MAX;
	uint16_t x223 = UINT16_MAX;
	static int16_t x224 = -274;

	t52 = (((x221/x222)+x223)/x224);

	if (t52 != -239) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x225 = 6;
	int32_t x226 = INT32_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t53 = 886716002798483LLU;

	t53 = (((x225/x226)+x227)/x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 2473154U;
	int16_t x230 = INT16_MIN;
	static int32_t x231 = -1;
	int8_t x232 = INT8_MIN;
	static volatile uint32_t t54 = 52822397U;

	t54 = (((x229/x230)+x231)/x232);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -34;
	static int64_t x234 = 163734LL;
	volatile int64_t x235 = INT64_MAX;
	static uint32_t x236 = 11U;
	static int64_t t55 = 22276973063896172LL;

	t55 = (((x233/x234)+x235)/x236);

	if (t55 != 838488366986797800LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x237 = 6036695U;
	static int32_t x238 = INT32_MAX;
	int8_t x239 = -1;
	volatile uint32_t t56 = 7U;

	t56 = (((x237/x238)+x239)/x240);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x246 = INT64_MAX;
	uint8_t x247 = 13U;
	int64_t x248 = 530186091153102LL;

	t57 = (((x245/x246)+x247)/x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MIN;
	static volatile int64_t x250 = INT64_MAX;
	uint16_t x251 = UINT16_MAX;
	static uint32_t x252 = 11383U;
	volatile int64_t t58 = -960LL;

	t58 = (((x249/x250)+x251)/x252);

	if (t58 != 5LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x253 = -135641959108LL;
	uint32_t x254 = 7779U;
	volatile int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;
	int64_t t59 = -352090504456LL;

	t59 = (((x253/x254)+x255)/x256);

	if (t59 != 533LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = 0;
	static int64_t x259 = INT64_MIN;

	t60 = (((x257/x258)+x259)/x260);

	if (t60 != 145817147595446LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x262 = 4958796;
	int16_t x263 = INT16_MIN;
	static volatile int32_t x264 = -497;
	int32_t t61 = 1;

	t61 = (((x261/x262)+x263)/x264);

	if (t61 != 65) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = -5325045845841914LL;
	volatile int8_t x267 = -1;
	volatile int64_t t62 = -1049LL;

	t62 = (((x265/x266)+x267)/x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x270 = 5U;
	volatile int16_t x271 = 1;
	int8_t x272 = INT8_MAX;
	volatile int32_t t63 = -77700;

	t63 = (((x269/x270)+x271)/x272);

	if (t63 != -51) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x277 = INT64_MIN;
	int64_t t64 = 9LL;

	t64 = (((x277/x278)+x279)/x280);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = -19LL;
	uint16_t x284 = 1057U;
	volatile int64_t t65 = 11030979486405LL;

	t65 = (((x281/x282)+x283)/x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x285 = INT32_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x288 = INT64_MIN;

	t66 = (((x285/x286)+x287)/x288);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = INT64_MIN;
	uint32_t x290 = UINT32_MAX;
	static int32_t x291 = -1744;
	volatile int32_t x292 = INT32_MAX;
	volatile int64_t t67 = 32941750421LL;

	t67 = (((x289/x290)+x291)/x292);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x294 = UINT8_MAX;
	static uint8_t x295 = 0U;
	volatile int8_t x296 = -2;

	t68 = (((x293/x294)+x295)/x296);

	if (t68 != -64) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x299 = 24U;
	uint16_t x300 = 1U;
	volatile int64_t t69 = -26LL;

	t69 = (((x297/x298)+x299)/x300);

	if (t69 != 24LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x302 = INT8_MAX;
	int16_t x303 = 1;
	static int8_t x304 = INT8_MIN;
	static volatile int64_t t70 = -24782LL;

	t70 = (((x301/x302)+x303)/x304);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = 140U;
	int64_t x306 = -1LL;
	volatile int8_t x307 = -1;
	static int16_t x308 = -1;
	volatile int64_t t71 = -91787236LL;

	t71 = (((x305/x306)+x307)/x308);

	if (t71 != 141LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x310 = UINT16_MAX;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = -1LL;

	t72 = (((x309/x310)+x311)/x312);

	if (t72 != -65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x313 = -1;
	int8_t x314 = -1;
	uint64_t x315 = UINT64_MAX;
	volatile uint64_t x316 = 46780658576621LLU;
	volatile uint64_t t73 = 613LLU;

	t73 = (((x313/x314)+x315)/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x318 = -54;
	uint64_t x319 = 2739314190498699LLU;
	volatile int32_t x320 = INT32_MIN;
	volatile uint64_t t74 = 702554LLU;

	t74 = (((x317/x318)+x319)/x320);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = 1981;
	int8_t x322 = -14;
	volatile int8_t x323 = -1;
	int8_t x324 = INT8_MIN;
	int32_t t75 = -43;

	t75 = (((x321/x322)+x323)/x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x325 = UINT8_MAX;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	int8_t x328 = -1;

	t76 = (((x325/x326)+x327)/x328);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -298731;
	int16_t x330 = -1;
	int8_t x332 = INT8_MAX;

	t77 = (((x329/x330)+x331)/x332);

	if (t77 != 2352) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = 48424LL;
	int16_t x334 = -3;
	static int64_t x335 = 6487486940941LL;
	uint32_t x336 = 6U;
	int64_t t78 = -2LL;

	t78 = (((x333/x334)+x335)/x336);

	if (t78 != 1081247820800LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MIN;
	static int8_t x339 = 1;
	int16_t x340 = -10;
	volatile int64_t t79 = -74LL;

	t79 = (((x337/x338)+x339)/x340);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x342 = 1U;
	static int8_t x343 = 60;
	static int32_t x344 = INT32_MIN;
	int32_t t80 = 1047734528;

	t80 = (((x341/x342)+x343)/x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x346 = -1;
	static volatile int32_t x347 = -94044038;
	static volatile int8_t x348 = INT8_MIN;

	t81 = (((x345/x346)+x347)/x348);

	if (t81 != 734721) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x349 = -1;
	volatile uint8_t x350 = UINT8_MAX;
	int8_t x351 = -1;
	uint32_t t82 = 168U;

	t82 = (((x349/x350)+x351)/x352);

	if (t82 != 6871947U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 3U;
	volatile int32_t t83 = 1;

	t83 = (((x353/x354)+x355)/x356);

	if (t83 != 715827882) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x358 = 4LLU;
	static uint32_t x359 = 5137U;
	uint64_t x360 = UINT64_MAX;
	uint64_t t84 = 25387379425149459LLU;

	t84 = (((x357/x358)+x359)/x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x361 = 2034581269553LLU;
	volatile uint64_t x363 = 21079687260448LLU;
	uint64_t x364 = UINT64_MAX;

	t85 = (((x361/x362)+x363)/x364);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = -3549128159LL;
	static int16_t x367 = INT16_MAX;
	static int32_t x368 = INT32_MIN;
	int64_t t86 = 2024469LL;

	t86 = (((x365/x366)+x367)/x368);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = 552618633114637825LL;
	int8_t x370 = 43;
	int16_t x371 = INT16_MIN;
	static volatile int8_t x372 = INT8_MIN;
	volatile int64_t t87 = -1887LL;

	t87 = (((x369/x370)+x371)/x372);

	if (t87 != -100403094679002LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = INT64_MIN;
	static int8_t x374 = INT8_MIN;
	static uint8_t x375 = 0U;
	volatile int16_t x376 = INT16_MIN;

	t88 = (((x373/x374)+x375)/x376);

	if (t88 != -2199023255552LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -1;
	int8_t x379 = INT8_MIN;
	volatile uint32_t x380 = 32158594U;

	t89 = (((x377/x378)+x379)/x380);

	if (t89 != 133U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile uint32_t x382 = 359U;
	static volatile int64_t x384 = -203506207548195793LL;

	t90 = (((x381/x382)+x383)/x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t91 = 31756;

	t91 = (((x385/x386)+x387)/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MIN;
	int32_t x391 = -1;
	int16_t x392 = INT16_MAX;
	static volatile int64_t t92 = -197035107735596237LL;

	t92 = (((x389/x390)+x391)/x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x393 = 40780151U;
	int32_t x394 = INT32_MAX;
	int8_t x396 = INT8_MIN;
	static uint32_t t93 = 427U;

	t93 = (((x393/x394)+x395)/x396);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	int32_t x399 = 136696865;
	int64_t x400 = INT64_MAX;
	static int64_t t94 = 15880091366LL;

	t94 = (((x397/x398)+x399)/x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x401 = -1;
	int64_t x402 = INT64_MAX;
	uint16_t x403 = 6564U;
	int64_t t95 = -1696471132697LL;

	t95 = (((x401/x402)+x403)/x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MIN;
	static int64_t x406 = INT64_MIN;
	int16_t x407 = 93;
	int16_t x408 = INT16_MIN;
	int64_t t96 = 0LL;

	t96 = (((x405/x406)+x407)/x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MAX;
	int64_t t97 = -50494715586118LL;

	t97 = (((x409/x410)+x411)/x412);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x414 = 110483568LL;
	volatile uint16_t x415 = 56U;
	static volatile int16_t x416 = -22;
	int64_t t98 = -322259LL;

	t98 = (((x413/x414)+x415)/x416);

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x419 = -1;
	uint16_t x420 = 1900U;
	static volatile int32_t t99 = -344;

	t99 = (((x417/x418)+x419)/x420);

	if (t99 != -17) { NG(); } else { ; }
	
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

