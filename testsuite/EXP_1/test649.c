#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x4 = INT32_MAX;
int16_t x9 = -1;
volatile int32_t x11 = -1;
int32_t x17 = -92355;
volatile uint64_t t4 = 186696607LLU;
static volatile int32_t t5 = 107559;
int64_t x30 = -67184472670LL;
uint64_t x48 = 218662580313938LLU;
volatile uint8_t x49 = 0U;
static uint16_t x53 = UINT16_MAX;
int64_t x61 = 242158623LL;
int64_t x62 = INT64_MAX;
int8_t x63 = 1;
int64_t t14 = 19395115780942379LL;
uint32_t x70 = 3854U;
int64_t x71 = INT64_MIN;
int16_t x72 = -1;
int8_t x94 = 2;
int8_t x97 = 2;
static int64_t x99 = -1LL;
int64_t t22 = 80001581415LL;
int8_t x103 = -22;
volatile uint32_t x104 = UINT32_MAX;
uint32_t t23 = UINT32_MAX;
uint64_t x116 = 9165792409355852760LLU;
int64_t x120 = INT64_MAX;
volatile int64_t x124 = 524204550LL;
uint16_t x126 = UINT16_MAX;
static int64_t x127 = INT64_MIN;
uint16_t x141 = 0U;
volatile uint64_t t33 = 1004LLU;
volatile int16_t x145 = 805;
static int32_t x151 = INT32_MIN;
uint16_t x152 = 7U;
int32_t t36 = 6;
int64_t x158 = INT64_MIN;
int64_t x159 = -1LL;
int16_t x163 = -12;
int16_t x167 = INT16_MAX;
int64_t t41 = -69LL;
static volatile uint64_t t42 = 11594036151776LLU;
uint32_t x184 = 7U;
int64_t x191 = INT64_MIN;
int8_t x195 = -8;
volatile int32_t x197 = -1;
int32_t x199 = 1965;
static int64_t x204 = -1LL;
uint16_t x210 = UINT16_MAX;
volatile uint64_t t50 = 102348204542LLU;
volatile int64_t x214 = INT64_MAX;
static int16_t x221 = 4015;
int32_t x239 = INT32_MAX;
uint16_t x240 = 21889U;
int8_t x241 = INT8_MAX;
int16_t x244 = INT16_MAX;
int16_t x245 = -1;
int64_t t59 = INT64_MIN;
uint32_t x253 = 18905245U;
int8_t x256 = INT8_MIN;
int64_t x263 = INT64_MIN;
uint64_t x264 = UINT64_MAX;
static int16_t x266 = INT16_MIN;
uint32_t x267 = UINT32_MAX;
int32_t x268 = 974;
static uint64_t t62 = 33496408871674LLU;
int16_t x271 = INT16_MIN;
volatile uint64_t t64 = 1490128261152886823LLU;
static int8_t x284 = INT8_MIN;
volatile int32_t x292 = INT32_MAX;
uint64_t x300 = 964837221062302LLU;
uint64_t t69 = 15LLU;
int16_t x302 = INT16_MIN;
int16_t x304 = 2035;
volatile int64_t t72 = 4LL;
uint64_t x313 = 37938LLU;
volatile int16_t x316 = INT16_MAX;
static int64_t x323 = INT64_MIN;
int64_t x327 = -6561LL;
volatile int32_t x329 = -105;
static uint64_t x330 = 47316543459578255LLU;
int16_t x347 = INT16_MIN;
static volatile int8_t x348 = -47;
int32_t x353 = INT32_MIN;
uint8_t x356 = UINT8_MAX;
volatile uint32_t t83 = 1510U;
static uint64_t x360 = 52LLU;
int64_t x361 = 222045090826445261LL;
volatile uint64_t t85 = 116116LLU;
uint8_t x365 = UINT8_MAX;
int64_t x367 = -18670273473920LL;
volatile uint64_t t86 = UINT64_MAX;
int32_t x378 = -1;
int8_t x381 = INT8_MIN;
int64_t x392 = INT64_MIN;
uint64_t t94 = 4869301229720654LLU;
int64_t x404 = 7112556880374873LL;
int32_t x405 = 107290;
uint32_t x407 = 1065452085U;
uint8_t x412 = 63U;


void f0(void) {
	static int8_t x1 = -1;
	volatile uint64_t x2 = 348075LLU;
	uint32_t x3 = 4230888U;
	uint64_t t0 = 5522506020LLU;

	t0 = (((x1/x2)&x3)|x4);

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 8;
	static uint64_t x6 = UINT64_MAX;
	int32_t x7 = INT32_MIN;
	volatile int8_t x8 = -6;
	volatile uint64_t t1 = 226052814500044536LLU;

	t1 = (((x5/x6)&x7)|x8);

	if (t1 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x10 = INT32_MAX;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = -26958;

	t2 = (((x9/x10)&x11)|x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int16_t x14 = -1;
	static volatile int8_t x15 = -1;
	int8_t x16 = INT8_MAX;
	volatile uint32_t t3 = 7U;

	t3 = (((x13/x14)&x15)|x16);

	if (t3 != 127U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 31515310LLU;
	int16_t x19 = INT16_MIN;
	static int16_t x20 = 1;

	t4 = (((x17/x18)&x19)|x20);

	if (t4 != 585326428161LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	volatile uint8_t x26 = 6U;
	int16_t x27 = INT16_MIN;
	int16_t x28 = -3;

	t5 = (((x25/x26)&x27)|x28);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = 2206;
	static uint8_t x31 = UINT8_MAX;
	int32_t x32 = -3125;
	volatile int64_t t6 = 5174442520119334LL;

	t6 = (((x29/x30)&x31)|x32);

	if (t6 != -3125LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 18750U;
	int32_t x34 = INT32_MAX;
	volatile int64_t x35 = INT64_MIN;
	static volatile uint32_t x36 = 4U;
	static volatile int64_t t7 = 3184231LL;

	t7 = (((x33/x34)&x35)|x36);

	if (t7 != 4LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 4044U;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = 28LLU;
	volatile uint64_t t8 = 600892740717565216LLU;

	t8 = (((x37/x38)&x39)|x40);

	if (t8 != 28LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 90U;
	volatile int8_t x42 = INT8_MAX;
	volatile uint16_t x43 = 11U;
	int64_t x44 = -1583307659805551056LL;
	int64_t t9 = -188865LL;

	t9 = (((x41/x42)&x43)|x44);

	if (t9 != -1583307659805551056LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MIN;
	volatile int32_t x47 = INT32_MIN;
	static uint64_t t10 = 559355040558565078LLU;

	t10 = (((x45/x46)&x47)|x48);

	if (t10 != 218662580313938LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = -1;
	int16_t x51 = 111;
	int32_t x52 = -25;
	int32_t t11 = -2;

	t11 = (((x49/x50)&x51)|x52);

	if (t11 != -25) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 8U;
	int32_t x56 = INT32_MAX;
	volatile int32_t t12 = INT32_MAX;

	t12 = (((x53/x54)&x55)|x56);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 2U;
	uint8_t x59 = 1U;
	static volatile int16_t x60 = -5616;
	static volatile int32_t t13 = 14253;

	t13 = (((x57/x58)&x59)|x60);

	if (t13 != -5616) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x64 = 19U;

	t14 = (((x61/x62)&x63)|x64);

	if (t14 != 19LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 135;
	int16_t x66 = -3;
	volatile uint8_t x67 = UINT8_MAX;
	static int32_t x68 = -460670;
	volatile int32_t t15 = 3733798;

	t15 = (((x65/x66)&x67)|x68);

	if (t15 != -460589) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 788;
	volatile int64_t t16 = -2735856LL;

	t16 = (((x69/x70)&x71)|x72);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	volatile int32_t x74 = -1;
	volatile uint64_t x75 = 224LLU;
	int16_t x76 = -594;
	volatile uint64_t t17 = 29075124645LLU;

	t17 = (((x73/x74)&x75)|x76);

	if (t17 != 18446744073709551022LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int16_t x78 = -5;
	uint16_t x79 = 13017U;
	int8_t x80 = 0;
	int64_t t18 = 3LL;

	t18 = (((x77/x78)&x79)|x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = -1;
	static int64_t x82 = 15745422958LL;
	volatile int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t19 = INT64_MIN;

	t19 = (((x81/x82)&x83)|x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MAX;
	int8_t x91 = -1;
	uint64_t x92 = 58048697LLU;
	uint64_t t20 = 8716733226991558919LLU;

	t20 = (((x89/x90)&x91)|x92);

	if (t20 != 18446462590142906361LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	int64_t x95 = -1LL;
	static int32_t x96 = INT32_MIN;
	int64_t t21 = -44LL;

	t21 = (((x93/x94)&x95)|x96);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x98 = UINT16_MAX;
	uint16_t x100 = 608U;

	t22 = (((x97/x98)&x99)|x100);

	if (t22 != 608LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x101 = 4U;
	static uint32_t x102 = 3322146U;

	t23 = (((x101/x102)&x103)|x104);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = 12;
	int32_t x107 = 11286868;
	volatile int64_t x108 = 176374418559179998LL;
	volatile int64_t t24 = 5569LL;

	t24 = (((x105/x106)&x107)|x108);

	if (t24 != 176374418559180254LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = 860LLU;
	uint16_t x111 = UINT16_MAX;
	static int16_t x112 = -1;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x109/x110)&x111)|x112);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = -8;
	int32_t x115 = -6201337;
	volatile uint64_t t26 = 69133LLU;

	t26 = (((x113/x114)&x115)|x116);

	if (t26 != 9165792409355852760LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x118 = 22U;
	volatile uint16_t x119 = UINT16_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = (((x117/x118)&x119)|x120);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = -152;
	int16_t x123 = 47;
	volatile int64_t t28 = -309624317102LL;

	t28 = (((x121/x122)&x123)|x124);

	if (t28 != 524204551LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MAX;
	uint64_t x128 = 237350009435652LLU;
	uint64_t t29 = 2482323147235LLU;

	t29 = (((x125/x126)&x127)|x128);

	if (t29 != 237350009435652LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = -178821;
	int8_t x130 = -1;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = 1;
	volatile int32_t t30 = 3776249;

	t30 = (((x129/x130)&x131)|x132);

	if (t30 != 133) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x133 = 7537U;
	uint64_t x134 = UINT64_MAX;
	volatile uint64_t x135 = 1987954192089435056LLU;
	uint32_t x136 = 3U;
	volatile uint64_t t31 = 389512211541LLU;

	t31 = (((x133/x134)&x135)|x136);

	if (t31 != 3LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MAX;
	volatile int16_t x139 = INT16_MAX;
	uint64_t x140 = 154466954LLU;
	volatile uint64_t t32 = 995682771898168LLU;

	t32 = (((x137/x138)&x139)|x140);

	if (t32 != 154468351LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MIN;
	static int8_t x144 = -8;

	t33 = (((x141/x142)&x143)|x144);

	if (t33 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MAX;
	volatile int64_t t34 = 13015872750449634LL;

	t34 = (((x145/x146)&x147)|x148);

	if (t34 != -2147450881LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile uint8_t x150 = 5U;
	int32_t t35 = 14150402;

	t35 = (((x149/x150)&x151)|x152);

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 3792;
	int16_t x154 = INT16_MIN;
	volatile int32_t x155 = INT32_MAX;
	volatile uint8_t x156 = 20U;

	t36 = (((x153/x154)&x155)|x156);

	if (t36 != 20) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	int32_t x160 = -1;
	volatile int64_t t37 = -66865996631LL;

	t37 = (((x157/x158)&x159)|x160);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	static int64_t x162 = INT64_MAX;
	uint16_t x164 = 1790U;
	int64_t t38 = 258887518909253LL;

	t38 = (((x161/x162)&x163)|x164);

	if (t38 != 1790LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	static int64_t x166 = -56008LL;
	static volatile int32_t x168 = INT32_MIN;
	int64_t t39 = 11004830808LL;

	t39 = (((x165/x166)&x167)|x168);

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = 6363;
	static volatile uint64_t x171 = 658064413878756158LLU;
	int16_t x172 = 39;
	volatile uint64_t t40 = 323361512LLU;

	t40 = (((x169/x170)&x171)|x172);

	if (t40 != 39LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = 175361467826184398LL;
	int16_t x174 = -1;
	volatile int16_t x175 = INT16_MAX;
	int32_t x176 = INT32_MIN;

	t41 = (((x173/x174)&x175)|x176);

	if (t41 != -2147459278LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 88LLU;
	uint64_t x178 = 9LLU;
	int16_t x179 = -1;
	int64_t x180 = INT64_MIN;

	t42 = (((x177/x178)&x179)|x180);

	if (t42 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 303650U;
	int16_t x182 = -46;
	int16_t x183 = 1;
	volatile uint32_t t43 = 40U;

	t43 = (((x181/x182)&x183)|x184);

	if (t43 != 7U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MAX;
	static int32_t t44 = -264663;

	t44 = (((x185/x186)&x187)|x188);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -1LL;
	int64_t x190 = INT64_MAX;
	volatile int32_t x192 = INT32_MIN;
	volatile int64_t t45 = 7677623LL;

	t45 = (((x189/x190)&x191)|x192);

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 0LL;
	int16_t x194 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x193/x194)&x195)|x196);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x198 = -1;
	int64_t x200 = INT64_MAX;
	volatile int64_t t47 = INT64_MAX;

	t47 = (((x197/x198)&x199)|x200);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -11;
	int8_t x202 = INT8_MIN;
	int16_t x203 = 2064;
	volatile int64_t t48 = 27933LL;

	t48 = (((x201/x202)&x203)|x204);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 1627120917U;
	uint16_t x206 = 1952U;
	static int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MIN;
	static int64_t t49 = 15714LL;

	t49 = (((x205/x206)&x207)|x208);

	if (t49 != -2146650082LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x209 = 249764932241030927LLU;
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = -59;

	t50 = (((x209/x210)&x211)|x212);

	if (t50 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	static int32_t x215 = INT32_MIN;
	int16_t x216 = 1;
	volatile int64_t t51 = -182612587642LL;

	t51 = (((x213/x214)&x215)|x216);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	int16_t x218 = -620;
	int32_t x219 = INT32_MAX;
	int32_t x220 = -1;
	int64_t t52 = -16297278700373852LL;

	t52 = (((x217/x218)&x219)|x220);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x222 = 1331LLU;
	uint16_t x223 = 11246U;
	static int8_t x224 = 7;
	static uint64_t t53 = 6846350LLU;

	t53 = (((x221/x222)&x223)|x224);

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = -439690437547254LL;
	uint8_t x230 = 8U;
	int8_t x231 = -1;
	static int64_t x232 = INT64_MIN;
	int64_t t54 = 192LL;

	t54 = (((x229/x230)&x231)|x232);

	if (t54 != -54961304693406LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x233 = INT64_MAX;
	int16_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = 5;
	static volatile int64_t t55 = 1278821997571511LL;

	t55 = (((x233/x234)&x235)|x236);

	if (t55 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = 739;
	volatile uint64_t t56 = 138254047081531198LLU;

	t56 = (((x237/x238)&x239)|x240);

	if (t56 != 985128439LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x242 = INT16_MAX;
	uint8_t x243 = 0U;
	volatile int32_t t57 = -174;

	t57 = (((x241/x242)&x243)|x244);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	uint32_t x248 = 449062361U;
	int64_t t58 = 756LL;

	t58 = (((x245/x246)&x247)|x248);

	if (t58 != 449062361LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 7U;
	int16_t x250 = -1;
	volatile int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MIN;

	t59 = (((x249/x250)&x251)|x252);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x254 = -394;
	int64_t x255 = -1596710721LL;
	volatile int64_t t60 = -275634424LL;

	t60 = (((x253/x254)&x255)|x256);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x261 = -3719267;
	static uint32_t x262 = 48260726U;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (((x261/x262)&x263)|x264);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = 1917853057472LLU;

	t62 = (((x265/x266)&x267)|x268);

	if (t62 != 974LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MIN;
	volatile int64_t x272 = INT64_MIN;
	int64_t t63 = 1543281288003991LL;

	t63 = (((x269/x270)&x271)|x272);

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = 58163544;
	uint64_t x274 = 480927396313575170LLU;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MAX;

	t64 = (((x273/x274)&x275)|x276);

	if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = INT16_MAX;
	int8_t x278 = 1;
	int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MIN;
	static volatile int64_t t65 = -12296601157387472LL;

	t65 = (((x277/x278)&x279)|x280);

	if (t65 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = 10;
	static int16_t x282 = INT16_MIN;
	static int64_t x283 = INT64_MAX;
	int64_t t66 = -130128938406599LL;

	t66 = (((x281/x282)&x283)|x284);

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	static int8_t x286 = -1;
	volatile uint16_t x287 = UINT16_MAX;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t67 = -25275768;

	t67 = (((x285/x286)&x287)|x288);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MAX;
	volatile int64_t t68 = 3608LL;

	t68 = (((x289/x290)&x291)|x292);

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x297 = 90U;
	static int8_t x298 = -1;
	static int16_t x299 = INT16_MAX;

	t69 = (((x297/x298)&x299)|x300);

	if (t69 != 964837221062302LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MAX;
	int64_t x303 = INT64_MIN;
	volatile int64_t t70 = 741138774366092LL;

	t70 = (((x301/x302)&x303)|x304);

	if (t70 != 2035LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x305 = INT16_MIN;
	uint8_t x306 = 37U;
	int16_t x307 = 1;
	int32_t x308 = INT32_MAX;
	int32_t t71 = INT32_MAX;

	t71 = (((x305/x306)&x307)|x308);

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = -1LL;
	static int32_t x311 = INT32_MIN;
	int8_t x312 = -1;

	t72 = (((x309/x310)&x311)|x312);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x314 = UINT32_MAX;
	int8_t x315 = -21;
	volatile uint64_t t73 = 116251159151LLU;

	t73 = (((x313/x314)&x315)|x316);

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -1;
	uint32_t x318 = 135736746U;
	uint8_t x319 = UINT8_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	volatile uint32_t t74 = 603218692U;

	t74 = (((x317/x318)&x319)|x320);

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x321 = 13U;
	static uint8_t x322 = 12U;
	static int64_t x324 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (((x321/x322)&x323)|x324);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -1;
	uint16_t x326 = 2020U;
	int32_t x328 = -418;
	volatile int64_t t76 = -1100789752LL;

	t76 = (((x325/x326)&x327)|x328);

	if (t76 != -418LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x331 = UINT32_MAX;
	static volatile uint32_t x332 = 3748612U;
	static uint64_t t77 = 3345761947LLU;

	t77 = (((x329/x330)&x331)|x332);

	if (t77 != 3748741LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 50U;
	volatile int64_t x334 = -1LL;
	volatile int64_t x335 = INT64_MIN;
	uint16_t x336 = 3U;
	int64_t t78 = -17675815770056935LL;

	t78 = (((x333/x334)&x335)|x336);

	if (t78 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x337 = -1;
	int64_t x338 = -1LL;
	static int8_t x339 = 13;
	int64_t x340 = INT64_MAX;
	int64_t t79 = INT64_MAX;

	t79 = (((x337/x338)&x339)|x340);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x341 = INT16_MAX;
	int64_t x342 = -1LL;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = -1;
	uint64_t t80 = UINT64_MAX;

	t80 = (((x341/x342)&x343)|x344);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -96283951LL;
	int16_t x346 = INT16_MIN;
	int64_t t81 = 40LL;

	t81 = (((x345/x346)&x347)|x348);

	if (t81 != -47LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x349 = 14671LLU;
	int32_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = INT64_MAX;
	static volatile uint64_t t82 = 212033165539LLU;

	t82 = (((x349/x350)&x351)|x352);

	if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x354 = UINT32_MAX;
	volatile uint16_t x355 = 9269U;

	t83 = (((x353/x354)&x355)|x356);

	if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x357 = 21;
	uint32_t x358 = 2963U;
	int8_t x359 = -1;
	volatile uint64_t t84 = 3767957LLU;

	t84 = (((x357/x358)&x359)|x360);

	if (t84 != 52LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x362 = INT32_MAX;
	volatile uint64_t x363 = 966165832738820LLU;
	int64_t x364 = -7LL;

	t85 = (((x361/x362)&x363)|x364);

	if (t85 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x366 = 801571911U;
	static uint64_t x368 = UINT64_MAX;

	t86 = (((x365/x366)&x367)|x368);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x369 = 42;
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t87 = 2;

	t87 = (((x369/x370)&x371)|x372);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x373 = UINT16_MAX;
	int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = 1954653U;
	volatile int64_t t88 = 231323943950773LL;

	t88 = (((x373/x374)&x375)|x376);

	if (t88 != -11427LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x377 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t89 = -22500;

	t89 = (((x377/x378)&x379)|x380);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x382 = -1;
	static uint32_t x383 = UINT32_MAX;
	int8_t x384 = -11;
	static volatile uint32_t t90 = 2732403U;

	t90 = (((x381/x382)&x383)|x384);

	if (t90 != 4294967285U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 1U;
	int32_t x386 = INT32_MAX;
	static volatile int64_t x387 = -714003243710761401LL;
	int16_t x388 = INT16_MIN;
	static int64_t t91 = -22260999434355LL;

	t91 = (((x385/x386)&x387)|x388);

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x389 = 4U;
	uint8_t x390 = UINT8_MAX;
	static uint64_t x391 = 28385220688LLU;
	uint64_t t92 = 7876270LLU;

	t92 = (((x389/x390)&x391)|x392);

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = -1;
	static int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = INT16_MIN;
	static uint64_t t93 = 105608931LLU;

	t93 = (((x393/x394)&x395)|x396);

	if (t93 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = UINT64_MAX;
	static uint64_t x398 = UINT64_MAX;
	uint16_t x399 = 45U;
	uint8_t x400 = 39U;

	t94 = (((x397/x398)&x399)|x400);

	if (t94 != 39LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x401 = UINT32_MAX;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MAX;
	volatile int64_t t95 = 10813LL;

	t95 = (((x401/x402)&x403)|x404);

	if (t95 != 7112556880374873LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x406 = INT16_MIN;
	volatile int64_t x408 = -1LL;
	static volatile int64_t t96 = 451130LL;

	t96 = (((x405/x406)&x407)|x408);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x409 = UINT64_MAX;
	volatile int16_t x410 = -1;
	int16_t x411 = 206;
	uint64_t t97 = 1062087LLU;

	t97 = (((x409/x410)&x411)|x412);

	if (t97 != 63LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = -8290850408LL;
	uint16_t x414 = 223U;
	int8_t x415 = INT8_MIN;
	uint8_t x416 = UINT8_MAX;
	volatile int64_t t98 = -189060936564992075LL;

	t98 = (((x413/x414)&x415)|x416);

	if (t98 != -37178625LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = 69LL;
	int32_t x418 = 403;
	int8_t x419 = INT8_MIN;
	volatile uint32_t x420 = UINT32_MAX;
	int64_t t99 = 0LL;

	t99 = (((x417/x418)&x419)|x420);

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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

