#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x7 = INT8_MAX;
volatile int8_t x10 = INT8_MAX;
int16_t x12 = INT16_MIN;
static volatile int16_t x14 = 232;
uint32_t x16 = UINT32_MAX;
int32_t t3 = -1013290669;
uint8_t x19 = 0U;
int32_t x23 = INT32_MIN;
uint32_t x27 = 48U;
int8_t x33 = -1;
int64_t x37 = 92251401LL;
static int32_t x39 = -1;
int8_t x40 = INT8_MAX;
int32_t t11 = -404423877;
volatile uint16_t x50 = 5936U;
static volatile int32_t x54 = -1;
int16_t x55 = 1;
volatile uint8_t x75 = 8U;
int64_t x78 = INT64_MIN;
volatile int32_t t18 = -84370;
uint32_t x86 = 337U;
static int64_t x97 = 58841557827655038LL;
static int64_t x101 = -1LL;
volatile int8_t x103 = -30;
static uint16_t x113 = UINT16_MAX;
int32_t t25 = 3543;
int64_t x118 = -987172LL;
static volatile int32_t x121 = INT32_MIN;
volatile int32_t t27 = 422665;
int32_t x126 = 136771;
int8_t x127 = 4;
int64_t x128 = 105LL;
int16_t x130 = INT16_MAX;
volatile int32_t t29 = 575;
int16_t x135 = 1;
uint64_t x138 = UINT64_MAX;
static volatile int32_t x144 = -1;
int32_t t33 = -916050;
int32_t x149 = 391;
volatile int32_t x153 = INT32_MAX;
int64_t x166 = INT64_MIN;
int16_t x168 = 7513;
int64_t x169 = -57567LL;
static uint8_t x189 = 50U;
int8_t x196 = -1;
static int8_t x199 = INT8_MIN;
static uint16_t x206 = 16U;
uint8_t x209 = 3U;
int64_t x214 = INT64_MIN;
int32_t x227 = INT32_MIN;
volatile int8_t x232 = INT8_MAX;
volatile int16_t x235 = INT16_MIN;
int64_t x245 = -238327605289858588LL;
int32_t t58 = 203088845;
uint64_t x255 = 27238128LLU;
int8_t x261 = -1;
int32_t x262 = INT32_MIN;
volatile int64_t x263 = -1LL;
volatile int32_t t61 = 17;
static uint32_t x280 = 64861U;
int8_t x284 = -1;
int32_t t67 = -147958;
volatile int32_t t68 = -223436;
int32_t x299 = -133;
volatile int32_t t69 = -123;
int32_t x309 = -1;
uint16_t x310 = 3467U;
int64_t x313 = -1LL;
volatile int32_t t73 = -2;
int8_t x321 = INT8_MAX;
int32_t t75 = 212460457;
volatile int8_t x329 = -6;
int32_t x331 = INT32_MIN;
volatile int64_t x339 = INT64_MIN;
uint32_t x343 = 1027876U;
volatile int16_t x352 = INT16_MAX;
int64_t x354 = -280690716930LL;
static int32_t t84 = -169458643;
int32_t x367 = INT32_MIN;
int8_t x369 = INT8_MIN;
int8_t x374 = -1;
volatile uint64_t x376 = 5087966292705393433LLU;
volatile int32_t x382 = INT32_MIN;
int8_t x384 = 1;
int32_t x385 = INT32_MIN;
static volatile int8_t x388 = INT8_MIN;
volatile int32_t t91 = -112746987;
volatile int32_t t92 = -2;
uint8_t x418 = 4U;
int64_t x421 = INT64_MIN;
uint64_t x424 = 993LLU;
static int32_t t99 = -926;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = -19;
	int64_t x3 = -1LL;
	volatile uint32_t x4 = 31458263U;
	int32_t t0 = -3775;

	t0 = (((x1/x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 346108244640LLU;
	static int32_t x6 = -1;
	volatile int32_t x8 = INT32_MIN;
	static int32_t t1 = -1574;

	t1 = (((x5/x6)<x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -2;
	int8_t x11 = INT8_MIN;
	int32_t t2 = 15725;

	t2 = (((x9/x10)<x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MIN;
	int64_t x15 = INT64_MIN;

	t3 = (((x13/x14)<x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 118U;
	int8_t x18 = -1;
	volatile int8_t x20 = INT8_MIN;
	static int32_t t4 = 3852;

	t4 = (((x17/x18)<x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -61087407508LL;
	volatile int64_t x22 = INT64_MIN;
	int8_t x24 = 36;
	int32_t t5 = -215387848;

	t5 = (((x21/x22)<x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint64_t x26 = 2079LLU;
	uint16_t x28 = 830U;
	volatile int32_t t6 = 322;

	t6 = (((x25/x26)<x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = INT64_MIN;
	int8_t x30 = -3;
	uint64_t x31 = 362LLU;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 18663241;

	t7 = (((x29/x30)<x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 0;

	t8 = (((x33/x34)<x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	int32_t t9 = -933324138;

	t9 = (((x37/x38)<x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 11U;
	int8_t x42 = 7;
	static int64_t x43 = INT64_MIN;
	uint16_t x44 = 810U;
	volatile int32_t t10 = -6;

	t10 = (((x41/x42)<x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	volatile int16_t x47 = INT16_MIN;
	int64_t x48 = 57009LL;

	t11 = (((x45/x46)<x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 34582693U;
	volatile int16_t x51 = INT16_MIN;
	static int16_t x52 = -11906;
	volatile int32_t t12 = -21626;

	t12 = (((x49/x50)<x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	int8_t x56 = 19;
	int32_t t13 = -30865420;

	t13 = (((x53/x54)<x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 4458874U;
	uint8_t x62 = 25U;
	int32_t x63 = -1;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = -464210;

	t14 = (((x61/x62)<x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = 3724445U;
	int64_t x66 = INT64_MIN;
	volatile int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MAX;
	volatile int32_t t15 = 162415;

	t15 = (((x65/x66)<x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	volatile int64_t x70 = -24120LL;
	volatile int32_t x71 = INT32_MIN;
	int16_t x72 = 1;
	int32_t t16 = -50;

	t16 = (((x69/x70)<x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 2405U;
	static uint8_t x74 = 39U;
	static int8_t x76 = -1;
	volatile int32_t t17 = 0;

	t17 = (((x73/x74)<x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MIN;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;

	t18 = (((x77/x78)<x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 1833U;
	int32_t x82 = -1;
	int64_t x83 = -134464343338694414LL;
	static uint32_t x84 = 32U;
	int32_t t19 = 6;

	t19 = (((x81/x82)<x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = UINT16_MAX;
	uint16_t x87 = 4639U;
	static volatile uint8_t x88 = UINT8_MAX;
	static int32_t t20 = -745763;

	t20 = (((x85/x86)<x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	static uint8_t x94 = 49U;
	volatile int32_t x95 = -804;
	volatile uint64_t x96 = 3140LLU;
	int32_t t21 = -4409054;

	t21 = (((x93/x94)<x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = -15957365885482681LL;
	int32_t x99 = INT32_MAX;
	volatile uint32_t x100 = 55U;
	static int32_t t22 = 4213;

	t22 = (((x97/x98)<x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x102 = UINT64_MAX;
	int32_t x104 = 535334721;
	int32_t t23 = 5;

	t23 = (((x101/x102)<x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	volatile uint8_t x110 = 56U;
	static volatile int32_t x111 = -1;
	volatile uint8_t x112 = 2U;
	int32_t t24 = -27;

	t24 = (((x109/x110)<x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x114 = INT8_MIN;
	static volatile int8_t x115 = INT8_MIN;
	volatile int32_t x116 = INT32_MIN;

	t25 = (((x113/x114)<x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 3U;
	int8_t x119 = -20;
	uint32_t x120 = UINT32_MAX;
	int32_t t26 = 5004841;

	t26 = (((x117/x118)<x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = INT64_MIN;
	static int64_t x123 = 7402458692494203LL;
	int16_t x124 = INT16_MAX;

	t27 = (((x121/x122)<x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MAX;
	int32_t t28 = -16373969;

	t28 = (((x125/x126)<x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MAX;
	uint8_t x131 = 19U;
	uint16_t x132 = 3575U;

	t29 = (((x129/x130)<x131)==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MAX;
	uint32_t x134 = UINT32_MAX;
	static volatile int64_t x136 = INT64_MIN;
	volatile int32_t t30 = 1;

	t30 = (((x133/x134)<x135)==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 351;
	volatile int8_t x139 = INT8_MIN;
	uint16_t x140 = 21U;
	volatile int32_t t31 = 168;

	t31 = (((x137/x138)<x139)==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 1;
	volatile uint32_t x142 = 185731012U;
	int16_t x143 = INT16_MIN;
	int32_t t32 = 2662;

	t32 = (((x141/x142)<x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x145 = 23370U;
	int32_t x146 = INT32_MAX;
	volatile int16_t x147 = -81;
	uint16_t x148 = 28U;

	t33 = (((x145/x146)<x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MAX;
	uint32_t x152 = 17U;
	volatile int32_t t34 = -311772102;

	t34 = (((x149/x150)<x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x154 = INT64_MAX;
	static uint8_t x155 = 1U;
	volatile uint64_t x156 = UINT64_MAX;
	int32_t t35 = -6930;

	t35 = (((x153/x154)<x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = 27;
	int16_t x158 = -934;
	uint32_t x159 = 1U;
	int32_t x160 = INT32_MIN;
	int32_t t36 = -1222297;

	t36 = (((x157/x158)<x159)==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = 5;
	volatile int32_t x162 = -1;
	uint8_t x163 = 1U;
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t37 = 1062;

	t37 = (((x161/x162)<x163)==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 24U;
	uint16_t x167 = UINT16_MAX;
	int32_t t38 = -289563;

	t38 = (((x165/x166)<x167)==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MAX;
	int32_t x172 = -27666;
	volatile int32_t t39 = 89;

	t39 = (((x169/x170)<x171)==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MAX;
	int32_t x174 = INT32_MIN;
	volatile uint32_t x175 = 1209U;
	volatile int64_t x176 = INT64_MIN;
	static int32_t t40 = 49498035;

	t40 = (((x173/x174)<x175)==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MAX;
	volatile uint64_t x178 = 28LLU;
	int8_t x179 = -7;
	static int32_t x180 = INT32_MIN;
	static int32_t t41 = 167279;

	t41 = (((x177/x178)<x179)==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	uint64_t x183 = 6942697LLU;
	uint32_t x184 = 3366U;
	volatile int32_t t42 = 31075562;

	t42 = (((x181/x182)<x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = -367687517;
	int16_t x186 = -1;
	static int32_t x187 = INT32_MIN;
	uint32_t x188 = 1U;
	volatile int32_t t43 = -31;

	t43 = (((x185/x186)<x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x190 = 326U;
	volatile int32_t x191 = INT32_MAX;
	int32_t x192 = INT32_MAX;
	static int32_t t44 = -1102;

	t44 = (((x189/x190)<x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x193 = 267546392496LLU;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	volatile int32_t t45 = 2;

	t45 = (((x193/x194)<x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MAX;
	static int16_t x198 = INT16_MAX;
	int8_t x200 = INT8_MAX;
	int32_t t46 = 70288211;

	t46 = (((x197/x198)<x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = UINT8_MAX;
	volatile uint8_t x202 = 3U;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MAX;
	volatile int32_t t47 = -8;

	t47 = (((x201/x202)<x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x205 = -1;
	int16_t x207 = -3;
	int8_t x208 = INT8_MIN;
	volatile int32_t t48 = 13;

	t48 = (((x205/x206)<x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x210 = 3;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MIN;
	volatile int32_t t49 = 4;

	t49 = (((x209/x210)<x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	static int8_t x215 = 49;
	static volatile uint64_t x216 = 2804276137825LLU;
	int32_t t50 = -594;

	t50 = (((x213/x214)<x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x221 = 2U;
	int16_t x222 = -1;
	volatile int8_t x223 = 0;
	volatile uint16_t x224 = 1929U;
	volatile int32_t t51 = 107;

	t51 = (((x221/x222)<x223)==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = -1;
	uint8_t x226 = 9U;
	int64_t x228 = INT64_MAX;
	volatile int32_t t52 = 10841062;

	t52 = (((x225/x226)<x227)==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = UINT16_MAX;
	uint64_t x230 = 55988LLU;
	static int64_t x231 = -49231275LL;
	int32_t t53 = 97;

	t53 = (((x229/x230)<x231)==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = INT64_MIN;
	uint32_t x234 = 3839U;
	volatile uint8_t x236 = 26U;
	static int32_t t54 = 136076147;

	t54 = (((x233/x234)<x235)==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MAX;
	static volatile int64_t x238 = -1LL;
	int8_t x239 = -5;
	volatile int64_t x240 = INT64_MAX;
	volatile int32_t t55 = 16382113;

	t55 = (((x237/x238)<x239)==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = INT32_MAX;
	int32_t x242 = -1;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MAX;
	volatile int32_t t56 = 3;

	t56 = (((x241/x242)<x243)==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x246 = 384322975911384LLU;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = 4U;
	int32_t t57 = 215;

	t57 = (((x245/x246)<x247)==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x249 = 13U;
	int32_t x250 = INT32_MIN;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = INT32_MAX;

	t58 = (((x249/x250)<x251)==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 9057U;
	uint64_t x254 = 59LLU;
	int8_t x256 = INT8_MIN;
	int32_t t59 = 795261997;

	t59 = (((x253/x254)<x255)==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = 1;
	static uint16_t x258 = 69U;
	static uint32_t x259 = UINT32_MAX;
	int8_t x260 = -1;
	int32_t t60 = -478;

	t60 = (((x257/x258)<x259)==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x264 = 1U;

	t61 = (((x261/x262)<x263)==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x269 = 21848733U;
	uint64_t x270 = 9482395688979409LLU;
	uint64_t x271 = 733735149546LLU;
	int64_t x272 = INT64_MIN;
	volatile int32_t t62 = 31464;

	t62 = (((x269/x270)<x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x273 = 3985750LLU;
	uint64_t x274 = 6LLU;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MAX;
	static int32_t t63 = 62;

	t63 = (((x273/x274)<x275)==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -95;
	int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int32_t t64 = -30;

	t64 = (((x277/x278)<x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -12329;
	int64_t x282 = 646140947359787968LL;
	volatile uint16_t x283 = UINT16_MAX;
	volatile int32_t t65 = 0;

	t65 = (((x281/x282)<x283)==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = 130284LL;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 23U;
	int32_t t66 = -72;

	t66 = (((x285/x286)<x287)==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = 14;
	static int16_t x290 = 24;
	uint8_t x291 = 10U;
	int8_t x292 = -16;

	t67 = (((x289/x290)<x291)==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 48820988U;
	static uint8_t x294 = 3U;
	int16_t x295 = INT16_MAX;
	int8_t x296 = -38;

	t68 = (((x293/x294)<x295)==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	uint32_t x300 = 3U;

	t69 = (((x297/x298)<x299)==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = -12;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t70 = -644025072;

	t70 = (((x305/x306)<x307)==x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x311 = -1;
	volatile uint64_t x312 = UINT64_MAX;
	static volatile int32_t t71 = 4586;

	t71 = (((x309/x310)<x311)==x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MAX;
	int8_t x316 = 1;
	int32_t t72 = 32;

	t72 = (((x313/x314)<x315)==x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = INT64_MAX;
	volatile int64_t x318 = INT64_MAX;
	int32_t x319 = 76;
	volatile int16_t x320 = INT16_MIN;

	t73 = (((x317/x318)<x319)==x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1;
	static int64_t x324 = INT64_MAX;
	static volatile int32_t t74 = 2962092;

	t74 = (((x321/x322)<x323)==x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x326 = 27U;
	uint8_t x327 = 1U;
	int32_t x328 = INT32_MIN;

	t75 = (((x325/x326)<x327)==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x330 = INT32_MIN;
	volatile int64_t x332 = -1LL;
	volatile int32_t t76 = -19;

	t76 = (((x329/x330)<x331)==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	int64_t x334 = -1LL;
	uint64_t x335 = 1559LLU;
	int64_t x336 = 1110200165397867065LL;
	volatile int32_t t77 = -692;

	t77 = (((x333/x334)<x335)==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = UINT16_MAX;
	uint16_t x338 = 7910U;
	int8_t x340 = -1;
	static int32_t t78 = 257414962;

	t78 = (((x337/x338)<x339)==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x341 = 14U;
	int32_t x342 = -1;
	int16_t x344 = INT16_MAX;
	volatile int32_t t79 = 491112;

	t79 = (((x341/x342)<x343)==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = 1;
	uint16_t x346 = UINT16_MAX;
	static uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MIN;
	int32_t t80 = 1;

	t80 = (((x345/x346)<x347)==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int8_t x351 = -36;
	volatile int32_t t81 = 312635;

	t81 = (((x349/x350)<x351)==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = -1;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t82 = 556987;

	t82 = (((x353/x354)<x355)==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MIN;
	int16_t x359 = -1;
	uint32_t x360 = 59038U;
	int32_t t83 = 512559;

	t83 = (((x357/x358)<x359)==x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x361 = UINT16_MAX;
	int64_t x362 = INT64_MIN;
	volatile int16_t x363 = 3;
	uint32_t x364 = 135579U;

	t84 = (((x361/x362)<x363)==x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MIN;
	uint16_t x368 = 16311U;
	int32_t t85 = -452;

	t85 = (((x365/x366)<x367)==x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x370 = 22;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = -1776;
	static int32_t t86 = -967157963;

	t86 = (((x369/x370)<x371)==x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x373 = INT16_MIN;
	int8_t x375 = -1;
	int32_t t87 = 64222;

	t87 = (((x373/x374)<x375)==x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x377 = -1LL;
	static uint64_t x378 = 1140426061367604703LLU;
	int8_t x379 = 14;
	int16_t x380 = INT16_MIN;
	int32_t t88 = -7251330;

	t88 = (((x377/x378)<x379)==x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 12138U;
	volatile int16_t x383 = INT16_MIN;
	int32_t t89 = -326076;

	t89 = (((x381/x382)<x383)==x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x386 = INT8_MIN;
	int64_t x387 = 1LL;
	int32_t t90 = 1262319;

	t90 = (((x385/x386)<x387)==x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = INT64_MAX;
	volatile uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MAX;

	t91 = (((x389/x390)<x391)==x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x393 = 123U;
	int8_t x394 = -30;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = INT8_MAX;

	t92 = (((x393/x394)<x395)==x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x397 = INT8_MIN;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t93 = 1;

	t93 = (((x397/x398)<x399)==x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = 1U;
	int64_t x402 = 514108585LL;
	int32_t x403 = 1;
	int64_t x404 = INT64_MIN;
	volatile int32_t t94 = -2705577;

	t94 = (((x401/x402)<x403)==x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x405 = 0;
	int64_t x406 = INT64_MAX;
	static uint32_t x407 = UINT32_MAX;
	int32_t x408 = 2691034;
	static volatile int32_t t95 = 10874940;

	t95 = (((x405/x406)<x407)==x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x409 = 6123U;
	volatile uint64_t x410 = 10LLU;
	int64_t x411 = -1LL;
	int16_t x412 = -214;
	int32_t t96 = -1026782;

	t96 = (((x409/x410)<x411)==x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = 36;
	volatile int64_t x416 = 8781194831823665LL;
	volatile int32_t t97 = -42336;

	t97 = (((x413/x414)<x415)==x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = INT32_MAX;
	int16_t x419 = INT16_MIN;
	int32_t x420 = -1;
	int32_t t98 = 209807;

	t98 = (((x417/x418)<x419)==x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x422 = 455U;
	static int16_t x423 = -1;

	t99 = (((x421/x422)<x423)==x424);

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

