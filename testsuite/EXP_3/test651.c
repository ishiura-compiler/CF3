#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x11 = -1LL;
volatile int32_t x12 = INT32_MAX;
volatile int16_t x15 = 4;
int16_t x18 = INT16_MAX;
int16_t x25 = INT16_MIN;
int16_t x36 = INT16_MIN;
uint64_t x39 = UINT64_MAX;
int64_t t15 = 5LL;
int16_t x66 = INT16_MIN;
int16_t x67 = -1;
int64_t x72 = INT64_MIN;
static volatile int16_t x83 = INT16_MIN;
uint64_t t20 = 8LLU;
int16_t x85 = INT16_MAX;
static int16_t x86 = -1;
uint8_t x91 = UINT8_MAX;
static int32_t x92 = 4918;
volatile uint16_t x102 = 1074U;
int16_t x109 = -1;
uint64_t x110 = 329LLU;
uint16_t x113 = 25U;
volatile uint64_t t30 = 111957221LLU;
volatile uint16_t x137 = 17105U;
static int64_t x142 = 1LL;
uint64_t x143 = 27LLU;
uint16_t x145 = 2U;
static int64_t x147 = INT64_MIN;
uint32_t x156 = UINT32_MAX;
volatile uint64_t x162 = 1560516898876911LLU;
static int8_t x165 = 16;
static uint32_t x172 = 2486U;
volatile int8_t x173 = INT8_MAX;
volatile int64_t t43 = 1632825027852LL;
uint64_t x177 = UINT64_MAX;
int8_t x178 = -2;
int8_t x179 = INT8_MIN;
volatile int8_t x180 = INT8_MIN;
volatile int32_t x182 = 0;
static int64_t x183 = INT64_MAX;
uint32_t x187 = UINT32_MAX;
static int16_t x203 = 12;
uint32_t x204 = 2U;
int64_t x209 = -1860592959038LL;
static int64_t x210 = -393069384LL;
uint16_t x212 = 22U;
int32_t x215 = 242;
static volatile int32_t x218 = INT32_MIN;
static uint16_t x219 = 7756U;
uint16_t x221 = 4584U;
uint16_t x232 = 9U;
int16_t x235 = INT16_MIN;
int32_t t59 = 50;
volatile int16_t x244 = 2;
volatile int64_t t61 = -455873110674511359LL;
int64_t t63 = -88LL;
uint32_t x268 = 3373U;
static volatile uint32_t t69 = UINT32_MAX;
int32_t t70 = -4253;
volatile uint64_t t72 = 12382990793930LLU;
volatile int32_t x298 = -1;
int32_t x299 = INT32_MIN;
int16_t x300 = -175;
static int32_t t74 = -6;
int32_t x301 = INT32_MIN;
volatile uint32_t x303 = 18821U;
static uint64_t t75 = 53891397420LLU;
volatile uint16_t x306 = 5603U;
volatile uint16_t x308 = UINT16_MAX;
int32_t t77 = 927699858;
uint16_t x327 = 0U;
uint16_t x328 = UINT16_MAX;
int16_t x331 = -48;
int64_t t81 = -1930410971LL;
static int32_t x334 = 101;
uint64_t x336 = 27LLU;
volatile uint32_t x338 = 351U;
uint8_t x341 = UINT8_MAX;
int8_t x349 = -1;
static int16_t x351 = -1;
static volatile uint64_t t86 = 16298511LLU;
int8_t x354 = -62;
uint64_t x355 = 2970LLU;
int8_t x363 = INT8_MIN;
uint32_t x367 = 1418330U;
int32_t x370 = INT32_MIN;
static volatile uint64_t t91 = 134767990303572LLU;
static int64_t t92 = 83626321252302LL;
static int16_t x380 = -3373;
uint8_t x383 = 0U;
uint32_t x387 = 3U;
int8_t x397 = INT8_MIN;
int16_t x401 = -1;
static volatile uint32_t x403 = 342U;


void f0(void) {
	int64_t x1 = -85297247437409234LL;
	uint8_t x2 = 50U;
	volatile uint64_t x3 = 7715669220305100LLU;
	uint16_t x4 = 625U;
	uint64_t t0 = 1872LLU;

	t0 = ((x1|x2)+(x3/x4));

	if (t0 != 18361459171342894886LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int32_t x6 = 7603;
	uint64_t x7 = 62388LLU;
	uint32_t x8 = 442464U;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5|x6)+(x7/x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = -38;
	int64_t t2 = -131790LL;

	t2 = ((x9|x10)+(x11/x12));

	if (t2 != -38LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = 8;
	static uint8_t x16 = 53U;
	static volatile int32_t t3 = 402246926;

	t3 = ((x13|x14)+(x15/x16));

	if (t3 != -32760) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = -3;
	volatile int32_t t4 = 57917;

	t4 = ((x17|x18)+(x19/x20));

	if (t4 != 32682) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 2;
	static int16_t x22 = INT16_MIN;
	volatile int8_t x23 = INT8_MAX;
	static uint64_t x24 = UINT64_MAX;
	static uint64_t t5 = 15LLU;

	t5 = ((x21|x22)+(x23/x24));

	if (t5 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 755068121561LLU;
	uint16_t x27 = 29228U;
	static uint32_t x28 = 64095896U;
	uint64_t t6 = 45233627LLU;

	t6 = ((x25|x26)+(x27/x28));

	if (t6 != 18446744073709531609LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	volatile int64_t x31 = INT64_MIN;
	static uint16_t x32 = UINT16_MAX;
	static volatile uint64_t t7 = 311714507531581990LLU;

	t7 = ((x29|x30)+(x31/x32));

	if (t7 != 18446603334073679871LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile int64_t x34 = INT64_MIN;
	static int32_t x35 = INT32_MAX;
	static int64_t t8 = 277825898066144LL;

	t8 = ((x33|x34)+(x35/x36));

	if (t8 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 124U;
	volatile int64_t x38 = INT64_MAX;
	uint8_t x40 = 1U;
	volatile uint64_t t9 = 10475803046942LLU;

	t9 = ((x37|x38)+(x39/x40));

	if (t9 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 6U;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = 517;
	static int16_t x44 = 7511;
	int32_t t10 = 519604;

	t10 = ((x41|x42)+(x43/x44));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int8_t x46 = -2;
	int64_t x47 = 2044509938023999LL;
	int8_t x48 = -23;
	static int64_t t11 = -110LL;

	t11 = ((x45|x46)+(x47/x48));

	if (t11 != -88891736435827LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 7;
	volatile int32_t t12 = -706328955;

	t12 = ((x49|x50)+(x51/x52));

	if (t12 != -306783379) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -2;
	int16_t x54 = -23;
	volatile uint16_t x55 = 23U;
	int8_t x56 = 13;
	int32_t t13 = 164733778;

	t13 = ((x53|x54)+(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 9U;
	volatile uint16_t x58 = 1286U;
	int8_t x59 = INT8_MIN;
	int32_t x60 = 2;
	int32_t t14 = -16302;

	t14 = ((x57|x58)+(x59/x60));

	if (t14 != 1231) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 9838383650071660LL;
	volatile int8_t x62 = 1;
	int32_t x63 = -25526;
	int16_t x64 = -1;

	t15 = ((x61|x62)+(x63/x64));

	if (t15 != 9838383650097187LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -111806;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -716LL;

	t16 = ((x65|x66)+(x67/x68));

	if (t16 != -13502LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = INT16_MAX;
	static int16_t x71 = INT16_MAX;
	volatile int64_t t17 = 64492379167089LL;

	t17 = ((x69|x70)+(x71/x72));

	if (t17 != 32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 19U;
	int16_t x74 = INT16_MIN;
	uint32_t x75 = 152U;
	uint8_t x76 = 7U;
	volatile uint32_t t18 = 63861U;

	t18 = ((x73|x74)+(x75/x76));

	if (t18 != 4294934568U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 17U;
	int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MAX;
	int16_t x80 = -1;
	static volatile int32_t t19 = 28;

	t19 = ((x77|x78)+(x79/x80));

	if (t19 != 2147450880) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 191146317U;
	uint64_t x82 = UINT64_MAX;
	int8_t x84 = -1;

	t20 = ((x81|x82)+(x83/x84));

	if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x87 = 1U;
	int32_t x88 = 9269849;
	volatile int32_t t21 = 7974613;

	t21 = ((x85|x86)+(x87/x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	int64_t x90 = INT64_MIN;
	static int64_t t22 = -464905LL;

	t22 = ((x89|x90)+(x91/x92));

	if (t22 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	volatile int8_t x94 = INT8_MAX;
	uint16_t x95 = 5U;
	uint64_t x96 = UINT64_MAX;
	uint64_t t23 = 6460687LLU;

	t23 = ((x93|x94)+(x95/x96));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	static int32_t x98 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = -156;
	volatile uint64_t t24 = 378236720435466683LLU;

	t24 = ((x97|x98)+(x99/x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 1LL;
	volatile uint16_t x103 = 1511U;
	uint64_t x104 = 124174661LLU;
	uint64_t t25 = 31275274470LLU;

	t25 = ((x101|x102)+(x103/x104));

	if (t25 != 1075LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MIN;
	static int64_t x107 = INT64_MAX;
	uint16_t x108 = 128U;
	volatile int64_t t26 = -541526804597LL;

	t26 = ((x105|x106)+(x107/x108));

	if (t26 != 72057591890444542LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x111 = 1;
	int8_t x112 = INT8_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = ((x109|x110)+(x111/x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x114 = INT8_MIN;
	int8_t x115 = 1;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 130300;

	t28 = ((x113|x114)+(x115/x116));

	if (t28 != -103) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	volatile int16_t x118 = INT16_MIN;
	uint8_t x119 = 6U;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -11;

	t29 = ((x117|x118)+(x119/x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int16_t x122 = -1;
	volatile uint64_t x123 = 27406LLU;
	static uint8_t x124 = 28U;

	t30 = ((x121|x122)+(x123/x124));

	if (t30 != 977LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	uint8_t x127 = 32U;
	uint16_t x128 = 350U;
	int32_t t31 = -301849680;

	t31 = ((x125|x126)+(x127/x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x129 = 218;
	volatile int32_t x130 = -1;
	int64_t x131 = 4255279LL;
	volatile int32_t x132 = 679059575;
	static int64_t t32 = 92235267980LL;

	t32 = ((x129|x130)+(x131/x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MAX;
	static int16_t x134 = INT16_MIN;
	uint64_t x135 = 445378729106LLU;
	int64_t x136 = INT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x133|x134)+(x135/x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = -3878;
	volatile int8_t x139 = INT8_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t34 = 147630LLU;

	t34 = ((x137|x138)+(x139/x140));

	if (t34 != 18446744073709548251LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static int8_t x144 = INT8_MIN;
	volatile uint64_t t35 = 149784806920LLU;

	t35 = ((x141|x142)+(x143/x144));

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = 13;
	static uint16_t x148 = UINT16_MAX;
	static int64_t t36 = 44122100451446456LL;

	t36 = ((x145|x146)+(x147/x148));

	if (t36 != -140739635871729LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -879;
	static int32_t x150 = 4050;
	static int64_t x151 = INT64_MAX;
	volatile uint64_t x152 = 2171180606125901271LLU;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x149|x150)+(x151/x152));

	if (t37 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 4178115;
	uint16_t x154 = 606U;
	volatile int8_t x155 = INT8_MIN;
	uint32_t t38 = 766509U;

	t38 = ((x153|x154)+(x155/x156));

	if (t38 != 4178655U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -30;
	uint64_t x158 = 1159123533616LLU;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = 4;
	static volatile uint64_t t39 = 3791566027271422LLU;

	t39 = ((x157|x158)+(x159/x160));

	if (t39 != 1073741809LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 0;
	int64_t x163 = 144LL;
	int64_t x164 = INT64_MIN;
	volatile uint64_t t40 = 2017070LLU;

	t40 = ((x161|x162)+(x163/x164));

	if (t40 != 1560516898876911LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = -1;
	int16_t x167 = INT16_MIN;
	uint64_t x168 = 3177757897980260LLU;
	static volatile uint64_t t41 = 479682LLU;

	t41 = ((x165|x166)+(x167/x168));

	if (t41 != 5803LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 2035656U;
	static int16_t x170 = INT16_MAX;
	uint16_t x171 = 0U;
	volatile uint32_t t42 = 1881571U;

	t42 = ((x169|x170)+(x171/x172));

	if (t42 != 2064383U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x174 = INT64_MIN;
	uint32_t x175 = 1654762U;
	int64_t x176 = INT64_MAX;

	t43 = ((x173|x174)+(x175/x176));

	if (t43 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t t44 = 902309037LLU;

	t44 = ((x177|x178)+(x179/x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -499475688;
	uint64_t x184 = 176055615LLU;
	uint64_t t45 = 204855541LLU;

	t45 = ((x181|x182)+(x183/x184));

	if (t45 != 51889492632LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 765605399LL;
	static int64_t x186 = INT64_MIN;
	volatile int32_t x188 = INT32_MIN;
	static int64_t t46 = 201073656980004LL;

	t46 = ((x185|x186)+(x187/x188));

	if (t46 != -9223372036089170408LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int64_t x190 = INT64_MAX;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = 1014;
	uint64_t t47 = 862396LLU;

	t47 = ((x189|x190)+(x191/x192));

	if (t47 != 18192055299516322LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 59710909U;
	volatile uint32_t x194 = 12U;
	static uint32_t x195 = 74760729U;
	uint8_t x196 = UINT8_MAX;
	volatile uint32_t t48 = 776197U;

	t48 = ((x193|x194)+(x195/x196));

	if (t48 != 60004088U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 1597381U;
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MAX;
	uint64_t t49 = 31397235612345LLU;

	t49 = ((x197|x198)+(x199/x200));

	if (t49 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	uint32_t x202 = 11569919U;
	int64_t t50 = 634638060771540114LL;

	t50 = ((x201|x202)+(x203/x204));

	if (t50 != -9223372036843205883LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	uint8_t x206 = 9U;
	int32_t x207 = INT32_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t51 = 12373552584LLU;

	t51 = ((x205|x206)+(x207/x208));

	if (t51 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x211 = INT64_MIN;
	int64_t t52 = 225711475196LL;

	t52 = ((x209|x210)+(x211/x212));

	if (t52 != -419244183819064186LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static int64_t x214 = -7990493880475LL;
	int16_t x216 = 4562;
	static volatile int64_t t53 = -110929922123585LL;

	t53 = ((x213|x214)+(x215/x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	int64_t t54 = 3LL;

	t54 = ((x217|x218)+(x219/x220));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = -3;
	volatile uint16_t x223 = 42U;
	uint32_t x224 = 6448U;
	uint32_t t55 = 4263878U;

	t55 = ((x221|x222)+(x223/x224));

	if (t55 != 4294967293U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 1;
	uint16_t x226 = 5U;
	int16_t x227 = 2246;
	int64_t x228 = INT64_MIN;
	static volatile int64_t t56 = -1709953282LL;

	t56 = ((x225|x226)+(x227/x228));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MIN;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = -1;
	static int32_t t57 = -31;

	t57 = ((x229|x230)+(x231/x232));

	if (t57 != -2147483393) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 0U;
	int8_t x234 = -1;
	uint16_t x236 = 3U;
	int32_t t58 = -13;

	t58 = ((x233|x234)+(x235/x236));

	if (t58 != -10923) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = UINT16_MAX;
	int16_t x238 = -460;
	volatile int8_t x239 = -1;
	static int16_t x240 = INT16_MIN;

	t59 = ((x237|x238)+(x239/x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = -1;
	int16_t x243 = INT16_MAX;
	volatile int32_t t60 = -957;

	t60 = ((x241|x242)+(x243/x244));

	if (t60 != 16382) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -23LL;
	volatile int8_t x246 = INT8_MAX;
	int32_t x247 = INT32_MIN;
	volatile int64_t x248 = 10980266678189125LL;

	t61 = ((x245|x246)+(x247/x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	static uint16_t x250 = 1040U;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = 1;

	t62 = ((x249|x250)+(x251/x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = 87U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -185;
	int64_t x256 = INT64_MAX;

	t63 = ((x253|x254)+(x255/x256));

	if (t63 != -32681LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = 28385;
	static uint16_t x259 = 85U;
	int32_t x260 = INT32_MAX;
	int32_t t64 = -3;

	t64 = ((x257|x258)+(x259/x260));

	if (t64 != -2147455263) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t65 = -22LL;

	t65 = ((x261|x262)+(x263/x264));

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x265 = 34663969U;
	int32_t x266 = 390;
	int32_t x267 = -1;
	uint32_t t66 = 76U;

	t66 = ((x265|x266)+(x267/x268));

	if (t66 != 35937696U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static int32_t x270 = INT32_MAX;
	static int8_t x271 = -3;
	uint8_t x272 = 18U;
	static int64_t t67 = INT64_MAX;

	t67 = ((x269|x270)+(x271/x272));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 1523U;
	int8_t x274 = -1;
	int32_t x275 = -1;
	int8_t x276 = INT8_MAX;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x273|x274)+(x275/x276));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = 5U;
	int16_t x278 = -1;
	uint32_t x279 = 52U;
	static int8_t x280 = -32;

	t69 = ((x277|x278)+(x279/x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	static int32_t x282 = INT32_MIN;
	static int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;

	t70 = ((x281|x282)+(x283/x284));

	if (t70 != -2147483393) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -145915137;
	int32_t t71 = -17;

	t71 = ((x285|x286)+(x287/x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 12;
	uint16_t x290 = 0U;
	uint64_t x291 = 613096LLU;
	static int32_t x292 = 1;

	t72 = ((x289|x290)+(x291/x292));

	if (t72 != 613108LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1663LL;
	int16_t x294 = INT16_MAX;
	volatile int32_t x295 = -1;
	int16_t x296 = INT16_MAX;
	int64_t t73 = -29625383245LL;

	t73 = ((x293|x294)+(x295/x296));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;

	t74 = ((x297|x298)+(x299/x300));

	if (t74 != 12271334) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	uint64_t x304 = 120117682LLU;

	t75 = ((x301|x302)+(x303/x304));

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 1127475;
	volatile uint16_t x307 = 1511U;
	int32_t t76 = -1405;

	t76 = ((x305|x306)+(x307/x308));

	if (t76 != 1127923) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = -1;
	int32_t x311 = INT32_MAX;
	uint8_t x312 = UINT8_MAX;

	t77 = ((x309|x310)+(x311/x312));

	if (t77 != 8421503) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 2U;
	static int8_t x314 = -53;
	uint32_t x315 = UINT32_MAX;
	static int8_t x316 = -1;
	volatile uint32_t t78 = 118470U;

	t78 = ((x313|x314)+(x315/x316));

	if (t78 != 4294967244U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x317 = 19U;
	int16_t x318 = -97;
	static volatile int64_t x319 = -1LL;
	uint32_t x320 = 963232U;
	volatile int64_t t79 = -2250370460LL;

	t79 = ((x317|x318)+(x319/x320));

	if (t79 != -97LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x325 = INT32_MAX;
	uint8_t x326 = 0U;
	int32_t t80 = INT32_MAX;

	t80 = ((x325|x326)+(x327/x328));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 29U;
	uint16_t x330 = 395U;
	volatile int64_t x332 = INT64_MAX;

	t81 = ((x329|x330)+(x331/x332));

	if (t81 != 415LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = -2124;
	int64_t x335 = INT64_MIN;
	volatile uint64_t t82 = 10642LLU;

	t82 = ((x333|x334)+(x335/x336));

	if (t82 != 341606371735360007LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MIN;
	volatile uint8_t x339 = 11U;
	volatile int32_t x340 = -1;
	uint32_t t83 = 11979U;

	t83 = ((x337|x338)+(x339/x340));

	if (t83 != 4294967252U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x342 = 1266032U;
	int64_t x343 = -506359002LL;
	volatile int32_t x344 = INT32_MIN;
	static int64_t t84 = -2213LL;

	t84 = ((x341|x342)+(x343/x344));

	if (t84 != 1266175LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MIN;
	int8_t x347 = -1;
	static int8_t x348 = 1;
	volatile int32_t t85 = 1798605;

	t85 = ((x345|x346)+(x347/x348));

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x350 = UINT64_MAX;
	uint32_t x352 = 29U;

	t86 = ((x349|x350)+(x351/x352));

	if (t86 != 148102319LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x353 = 3647744U;
	uint8_t x356 = UINT8_MAX;
	static uint64_t t87 = 6731686332838181474LLU;

	t87 = ((x353|x354)+(x355/x356));

	if (t87 != 4294967245LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = UINT8_MAX;
	uint8_t x359 = UINT8_MAX;
	uint64_t x360 = 294LLU;
	static volatile uint64_t t88 = 3263LLU;

	t88 = ((x357|x358)+(x359/x360));

	if (t88 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile int16_t x362 = 1677;
	int8_t x364 = INT8_MIN;
	volatile int32_t t89 = -176;

	t89 = ((x361|x362)+(x363/x364));

	if (t89 != -2147481970) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x365 = 1U;
	int8_t x366 = INT8_MAX;
	volatile uint64_t x368 = 6243LLU;
	volatile uint64_t t90 = 132913115LLU;

	t90 = ((x365|x366)+(x367/x368));

	if (t90 != 354LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -185;
	int16_t x371 = INT16_MAX;
	static volatile uint64_t x372 = UINT64_MAX;

	t91 = ((x369|x370)+(x371/x372));

	if (t91 != 18446744073709551431LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = 5630663;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MAX;

	t92 = ((x373|x374)+(x375/x376));

	if (t92 != -72624978810000826LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	static volatile int32_t t93 = 1848;

	t93 = ((x377|x378)+(x379/x380));

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile uint16_t x382 = UINT16_MAX;
	static volatile int8_t x384 = 1;
	volatile int32_t t94 = 256853292;

	t94 = ((x381|x382)+(x383/x384));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = 2;
	int16_t x386 = -16;
	int64_t x388 = -2814170569LL;
	volatile int64_t t95 = 32521476939861749LL;

	t95 = ((x385|x386)+(x387/x388));

	if (t95 != -14LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = -1LL;
	static volatile uint8_t x390 = UINT8_MAX;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = -1LL;
	int64_t t96 = -10LL;

	t96 = ((x389|x390)+(x391/x392));

	if (t96 != -65536LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = UINT64_MAX;
	uint32_t x395 = 7355U;
	uint16_t x396 = UINT16_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = ((x393|x394)+(x395/x396));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x398 = 1;
	static int8_t x399 = -1;
	int8_t x400 = 6;
	volatile int32_t t98 = 25;

	t98 = ((x397|x398)+(x399/x400));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x402 = 19687U;
	volatile uint64_t x404 = 1LLU;
	uint64_t t99 = 444LLU;

	t99 = ((x401|x402)+(x403/x404));

	if (t99 != 4294967637LLU) { NG(); } else { ; }
	
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

