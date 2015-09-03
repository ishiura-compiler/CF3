#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -10707;
int8_t x8 = -2;
static volatile int32_t t1 = -24420;
uint8_t x9 = 100U;
int8_t x11 = -1;
int16_t x13 = -1;
int64_t x26 = -354LL;
static int16_t x29 = INT16_MIN;
uint64_t x30 = UINT64_MAX;
volatile uint32_t x45 = 1066138659U;
volatile uint16_t x46 = UINT16_MAX;
volatile int64_t x50 = INT64_MAX;
volatile int32_t t11 = -6194;
int64_t t12 = -22797640287710LL;
static int16_t x59 = INT16_MAX;
int64_t t14 = 939LL;
static int16_t x66 = -1;
static int64_t x70 = 382927201024864394LL;
int64_t t16 = 26935409445LL;
int32_t x75 = INT32_MAX;
int64_t x79 = INT64_MAX;
int16_t x89 = INT16_MIN;
int8_t x90 = INT8_MAX;
int8_t x92 = 12;
int16_t x93 = INT16_MIN;
uint64_t x94 = 1784344104915473254LLU;
volatile int16_t x95 = INT16_MIN;
uint64_t x96 = 29191340LLU;
uint16_t x99 = UINT16_MAX;
volatile int32_t x100 = -1;
static int32_t x106 = -117346010;
int16_t x126 = -1;
volatile int32_t x131 = INT32_MAX;
int16_t x133 = INT16_MIN;
uint32_t x134 = UINT32_MAX;
uint32_t x137 = UINT32_MAX;
volatile uint8_t x139 = 0U;
int32_t x140 = INT32_MIN;
int64_t x154 = 80505341973779175LL;
static int32_t x156 = -1;
int8_t x158 = -1;
int32_t x162 = INT32_MIN;
int32_t x164 = 1031976454;
int32_t t37 = -5609764;
static int32_t x165 = -1;
int32_t x166 = -1;
volatile int32_t t38 = 40681;
int32_t x171 = INT32_MIN;
volatile uint32_t t39 = 10701615U;
volatile int8_t x179 = 0;
int8_t x192 = INT8_MIN;
int16_t x204 = INT16_MIN;
int32_t x205 = INT32_MAX;
volatile uint16_t x207 = UINT16_MAX;
uint32_t x209 = 64339U;
int8_t x219 = INT8_MAX;
int16_t x221 = -112;
int64_t x222 = INT64_MIN;
volatile int64_t x223 = -20866386679936LL;
static int8_t x224 = INT8_MAX;
int32_t t52 = -32570240;
uint16_t x233 = 587U;
int16_t x238 = INT16_MAX;
volatile int32_t x242 = 46;
volatile int32_t t58 = 1086658;
int32_t x259 = INT32_MIN;
uint8_t x260 = 78U;
uint32_t x263 = UINT32_MAX;
int16_t x268 = -4;
static uint64_t x273 = UINT64_MAX;
uint32_t t63 = 1169U;
static int32_t t64 = -10040;
static volatile uint64_t x283 = UINT64_MAX;
int32_t x284 = INT32_MIN;
int32_t t66 = 5;
int64_t x298 = INT64_MIN;
int64_t x306 = -543176LL;
uint16_t x310 = 451U;
int8_t x312 = INT8_MIN;
int32_t x317 = -1;
static int16_t x319 = INT16_MIN;
uint32_t x321 = UINT32_MAX;
volatile uint64_t t74 = 3725562927LLU;
int8_t x336 = INT8_MIN;
uint32_t x339 = 0U;
int16_t x341 = 301;
int64_t x344 = INT64_MIN;
volatile int16_t x351 = -155;
int32_t x353 = INT32_MIN;
volatile int16_t x354 = INT16_MIN;
int64_t t82 = -260888177LL;
static volatile uint32_t t84 = 9032104U;
int8_t x369 = INT8_MIN;
int64_t x371 = INT64_MIN;
static int64_t x373 = INT64_MIN;
static int16_t x374 = INT16_MIN;
volatile int8_t x376 = INT8_MIN;
uint8_t x377 = 86U;
volatile int32_t t87 = 11594;
int8_t x386 = -1;
int8_t x390 = INT8_MIN;
int16_t x399 = 1645;
int32_t x404 = -1;
int64_t x408 = -73031389237LL;
int64_t t94 = 4347151461358961986LL;
int32_t x410 = INT32_MIN;
int16_t x411 = INT16_MIN;
int32_t x412 = 4391;
int32_t t96 = 132627537;
int64_t x420 = INT64_MIN;
volatile int64_t t97 = -448976096123842LL;
int8_t x423 = INT8_MIN;
int32_t x428 = INT32_MIN;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	static int16_t x2 = INT16_MAX;
	uint8_t x3 = 48U;
	int8_t x4 = -1;
	static volatile int32_t t0 = 8357585;

	t0 = (((x1/x2)<=x3)/x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 15902020188391229LLU;
	volatile int64_t x7 = INT64_MIN;

	t1 = (((x5/x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 208LLU;
	uint32_t x12 = 2203176U;
	volatile uint32_t t2 = 146289586U;

	t2 = (((x9/x10)<=x11)/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	static uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 2282010LLU;
	static volatile uint64_t t3 = 7796585LLU;

	t3 = (((x13/x14)<=x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	int16_t x18 = INT16_MIN;
	static uint16_t x19 = UINT16_MAX;
	static int64_t x20 = -91115000835LL;
	volatile int64_t t4 = -730LL;

	t4 = (((x17/x18)<=x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 147U;
	int8_t x22 = INT8_MIN;
	int64_t x23 = -1LL;
	volatile uint8_t x24 = 1U;
	int32_t t5 = -16310250;

	t5 = (((x21/x22)<=x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 125324;
	int8_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -3275230;

	t6 = (((x25/x26)<=x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = 96159LL;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 804369494LLU;

	t7 = (((x29/x30)<=x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x34 = 23353018U;
	uint8_t x35 = 0U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -7286;

	t8 = (((x33/x34)<=x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -3095;
	int64_t x38 = -1LL;
	static int64_t x39 = 567684177122831LL;
	uint32_t x40 = 2465U;
	uint32_t t9 = 1051U;

	t9 = (((x37/x38)<=x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	int32_t t10 = -963240;

	t10 = (((x45/x46)<=x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x51 = 80533780LL;
	int16_t x52 = 5;

	t11 = (((x49/x50)<=x51)/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	volatile int32_t x55 = INT32_MAX;
	int64_t x56 = INT64_MIN;

	t12 = (((x53/x54)<=x55)/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	uint64_t x58 = 6181907374296513LLU;
	static uint32_t x60 = UINT32_MAX;
	volatile uint32_t t13 = 1944U;

	t13 = (((x57/x58)<=x59)/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 0U;
	int16_t x62 = INT16_MAX;
	static int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MIN;

	t14 = (((x61/x62)<=x63)/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = -30;
	int16_t x67 = 0;
	static uint8_t x68 = 114U;
	volatile int32_t t15 = -2;

	t15 = (((x65/x66)<=x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x71 = INT8_MAX;
	int64_t x72 = 446273876436460849LL;

	t16 = (((x69/x70)<=x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 730933219633LLU;
	int32_t x74 = INT32_MAX;
	int16_t x76 = INT16_MAX;
	volatile int32_t t17 = -516861511;

	t17 = (((x73/x74)<=x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MAX;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t18 = 5867900619065885244LLU;

	t18 = (((x77/x78)<=x79)/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	int64_t t19 = 2337208033901573158LL;

	t19 = (((x81/x82)<=x83)/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = INT32_MAX;
	int32_t x87 = 21;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t20 = -112909598;

	t20 = (((x85/x86)<=x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x91 = INT32_MIN;
	static volatile int32_t t21 = 9;

	t21 = (((x89/x90)<=x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t t22 = 1043303LLU;

	t22 = (((x93/x94)<=x95)/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -12869LL;
	int8_t x98 = INT8_MIN;
	int32_t t23 = 26281;

	t23 = (((x97/x98)<=x99)/x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	volatile int8_t x102 = INT8_MIN;
	static volatile int16_t x103 = -1;
	volatile uint64_t x104 = 47963828049973LLU;
	uint64_t t24 = 9202226893093LLU;

	t24 = (((x101/x102)<=x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = 1858U;
	int32_t x107 = INT32_MIN;
	volatile int64_t x108 = INT64_MIN;
	volatile int64_t t25 = 2673112995LL;

	t25 = (((x105/x106)<=x107)/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile int16_t x110 = -1;
	int8_t x111 = -1;
	uint8_t x112 = 4U;
	volatile int32_t t26 = -44368;

	t26 = (((x109/x110)<=x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	uint16_t x114 = UINT16_MAX;
	int32_t x115 = -1;
	int64_t x116 = INT64_MIN;
	volatile int64_t t27 = 2961114620544283370LL;

	t27 = (((x113/x114)<=x115)/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = UINT8_MAX;
	uint8_t x118 = UINT8_MAX;
	volatile uint16_t x119 = 2U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t28 = 501700563;

	t28 = (((x117/x118)<=x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	uint8_t x122 = 1U;
	int64_t x123 = -1LL;
	static int8_t x124 = -1;
	volatile int32_t t29 = -216732722;

	t29 = (((x121/x122)<=x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 129527904LLU;
	int8_t x127 = -1;
	static int16_t x128 = -1;
	int32_t t30 = -261017218;

	t30 = (((x125/x126)<=x127)/x128);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	static int16_t x130 = -14;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t31 = 1U;

	t31 = (((x129/x130)<=x131)/x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x135 = 14174018813LLU;
	int32_t x136 = 2;
	int32_t t32 = 0;

	t32 = (((x133/x134)<=x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x138 = 8185517639837392LLU;
	volatile int32_t t33 = 712;

	t33 = (((x137/x138)<=x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = 4566821332LL;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	volatile uint8_t x152 = 45U;
	int32_t t34 = -26764588;

	t34 = (((x149/x150)<=x151)/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 0;
	volatile int64_t x155 = -2582871873860064LL;
	int32_t t35 = 7;

	t35 = (((x153/x154)<=x155)/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	static volatile int32_t t36 = 4731;

	t36 = (((x157/x158)<=x159)/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x161 = UINT64_MAX;
	uint8_t x163 = UINT8_MAX;

	t37 = (((x161/x162)<=x163)/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x167 = 1;
	static int32_t x168 = 21734;

	t38 = (((x165/x166)<=x167)/x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x169 = 6920071537004LLU;
	int16_t x170 = 4;
	uint32_t x172 = UINT32_MAX;

	t39 = (((x169/x170)<=x171)/x172);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = -1LL;
	int64_t x174 = INT64_MAX;
	uint32_t x175 = 601U;
	int32_t x176 = -1;
	int32_t t40 = -47447;

	t40 = (((x173/x174)<=x175)/x176);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -10485LL;
	int32_t x178 = INT32_MAX;
	static int64_t x180 = INT64_MIN;
	volatile int64_t t41 = 548076812227LL;

	t41 = (((x177/x178)<=x179)/x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x181 = -14172579LL;
	int32_t x182 = INT32_MIN;
	int64_t x183 = 8651601LL;
	static int16_t x184 = INT16_MIN;
	int32_t t42 = 610;

	t42 = (((x181/x182)<=x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 277U;
	uint64_t x186 = UINT64_MAX;
	static volatile int64_t x187 = INT64_MAX;
	uint64_t x188 = 7584110918654LLU;
	volatile uint64_t t43 = 111LLU;

	t43 = (((x185/x186)<=x187)/x188);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x189 = 1U;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = UINT16_MAX;
	static int32_t t44 = -4522811;

	t44 = (((x189/x190)<=x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -1;
	static volatile int8_t x194 = INT8_MIN;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = -1;
	int32_t t45 = 119550;

	t45 = (((x193/x194)<=x195)/x196);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	uint64_t x198 = 3155208004940537824LLU;
	static volatile int8_t x199 = INT8_MIN;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t46 = 13987018;

	t46 = (((x197/x198)<=x199)/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x201 = 2;
	int16_t x202 = -1;
	static int8_t x203 = INT8_MIN;
	int32_t t47 = -8400;

	t47 = (((x201/x202)<=x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = -1;
	int64_t x208 = -1LL;
	int64_t t48 = -16252860022856LL;

	t48 = (((x205/x206)<=x207)/x208);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x210 = INT16_MIN;
	int32_t x211 = 1479;
	uint16_t x212 = 2U;
	int32_t t49 = -7866;

	t49 = (((x209/x210)<=x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = -11;
	volatile int64_t x215 = 1123939580531461996LL;
	uint64_t x216 = 94440749151LLU;
	static uint64_t t50 = 118512466LLU;

	t50 = (((x213/x214)<=x215)/x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x217 = 6;
	volatile int16_t x218 = -1;
	int32_t x220 = -1;
	static volatile int32_t t51 = 974282495;

	t51 = (((x217/x218)<=x219)/x220);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {


	t52 = (((x221/x222)<=x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 3590U;
	static int32_t x230 = INT32_MAX;
	int64_t x231 = 181LL;
	static volatile uint8_t x232 = 5U;
	int32_t t53 = 64426;

	t53 = (((x229/x230)<=x231)/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x234 = 363U;
	int8_t x235 = INT8_MIN;
	int32_t x236 = -1;
	volatile int32_t t54 = 874262012;

	t54 = (((x233/x234)<=x235)/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MIN;
	static volatile int8_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;
	int32_t t55 = -8013749;

	t55 = (((x237/x238)<=x239)/x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x243 = INT64_MAX;
	static uint64_t x244 = 4LLU;
	uint64_t t56 = 3104979449LLU;

	t56 = (((x241/x242)<=x243)/x244);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x245 = INT32_MAX;
	static volatile int64_t x246 = -1061317082LL;
	int64_t x247 = INT64_MIN;
	int64_t x248 = 13533518803LL;
	volatile int64_t t57 = 1229125785690191802LL;

	t57 = (((x245/x246)<=x247)/x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	static volatile int8_t x250 = INT8_MAX;
	int64_t x251 = -1LL;
	static volatile int8_t x252 = 22;

	t58 = (((x249/x250)<=x251)/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = INT16_MAX;
	int8_t x254 = INT8_MAX;
	volatile int32_t x255 = -1;
	int8_t x256 = 8;
	static volatile int32_t t59 = 1387;

	t59 = (((x253/x254)<=x255)/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	volatile int32_t t60 = 93716;

	t60 = (((x257/x258)<=x259)/x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint16_t x264 = 1765U;
	int32_t t61 = -35744;

	t61 = (((x261/x262)<=x263)/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = INT8_MAX;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = INT64_MIN;
	static volatile int32_t t62 = 3799;

	t62 = (((x265/x266)<=x267)/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = INT64_MIN;
	uint8_t x275 = 27U;
	uint32_t x276 = UINT32_MAX;

	t63 = (((x273/x274)<=x275)/x276);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x277 = 13614256U;
	int16_t x278 = -1;
	volatile int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;

	t64 = (((x277/x278)<=x279)/x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x281 = UINT32_MAX;
	volatile int32_t x282 = INT32_MIN;
	int32_t t65 = 487249315;

	t65 = (((x281/x282)<=x283)/x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x285 = -1909835238LL;
	uint16_t x286 = 10294U;
	static uint32_t x287 = 27U;
	static volatile int32_t x288 = INT32_MIN;

	t66 = (((x285/x286)<=x287)/x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MAX;
	int16_t x290 = INT16_MIN;
	int64_t x291 = -199664722597207LL;
	int64_t x292 = -1LL;
	volatile int64_t t67 = -4057702708557LL;

	t67 = (((x289/x290)<=x291)/x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = 61U;
	int16_t x295 = -2663;
	int16_t x296 = -19;
	volatile int32_t t68 = 82091024;

	t68 = (((x293/x294)<=x295)/x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static uint32_t x300 = 14588857U;
	uint32_t t69 = 1070932065U;

	t69 = (((x297/x298)<=x299)/x300);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = INT32_MIN;
	uint32_t x307 = 5526681U;
	int16_t x308 = INT16_MAX;
	volatile int32_t t70 = -1035094;

	t70 = (((x305/x306)<=x307)/x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x309 = INT8_MIN;
	uint64_t x311 = UINT64_MAX;
	int32_t t71 = -887627793;

	t71 = (((x309/x310)<=x311)/x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x313 = 127U;
	static int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MIN;
	volatile int16_t x316 = -594;
	static int32_t t72 = 1015796;

	t72 = (((x313/x314)<=x315)/x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x318 = UINT64_MAX;
	volatile int16_t x320 = -1;
	static volatile int32_t t73 = 1232;

	t73 = (((x317/x318)<=x319)/x320);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x322 = -1;
	int16_t x323 = INT16_MAX;
	uint64_t x324 = UINT64_MAX;

	t74 = (((x321/x322)<=x323)/x324);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = -1LL;
	static uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 27958182U;
	int16_t x328 = INT16_MIN;
	int32_t t75 = -6;

	t75 = (((x325/x326)<=x327)/x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x329 = INT16_MIN;
	uint32_t x330 = 493102540U;
	uint16_t x331 = 5351U;
	uint32_t x332 = 510U;
	uint32_t t76 = 418U;

	t76 = (((x329/x330)<=x331)/x332);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x333 = 55956242U;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	volatile int32_t t77 = -439941696;

	t77 = (((x333/x334)<=x335)/x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = 150;
	uint8_t x338 = UINT8_MAX;
	volatile int64_t x340 = -1LL;
	int64_t t78 = 174628299911789376LL;

	t78 = (((x337/x338)<=x339)/x340);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x342 = UINT32_MAX;
	static int64_t x343 = -1LL;
	int64_t t79 = -1072834219821566LL;

	t79 = (((x341/x342)<=x343)/x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	volatile int16_t x347 = 7;
	int64_t x348 = -1LL;
	volatile int64_t t80 = 66112260912163661LL;

	t80 = (((x345/x346)<=x347)/x348);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x349 = INT64_MIN;
	volatile int32_t x350 = INT32_MIN;
	static int32_t x352 = -6019534;
	volatile int32_t t81 = 13169200;

	t81 = (((x349/x350)<=x351)/x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x355 = -1;
	volatile int64_t x356 = INT64_MIN;

	t82 = (((x353/x354)<=x355)/x356);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MAX;
	static uint32_t x358 = 11U;
	int16_t x359 = 13;
	int32_t x360 = 894665;
	volatile int32_t t83 = -10;

	t83 = (((x357/x358)<=x359)/x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x361 = -7648;
	static int8_t x362 = -1;
	int32_t x363 = INT32_MIN;
	uint32_t x364 = 801693U;

	t84 = (((x361/x362)<=x363)/x364);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x370 = INT16_MIN;
	int16_t x372 = 380;
	volatile int32_t t85 = 30;

	t85 = (((x369/x370)<=x371)/x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x375 = 6U;
	int32_t t86 = 22;

	t86 = (((x373/x374)<=x375)/x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x378 = 6553U;
	int8_t x379 = 58;
	int8_t x380 = INT8_MAX;

	t87 = (((x377/x378)<=x379)/x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x381 = 49758081137LLU;
	uint8_t x382 = UINT8_MAX;
	volatile int8_t x383 = INT8_MAX;
	static int32_t x384 = 4;
	volatile int32_t t88 = -110543554;

	t88 = (((x381/x382)<=x383)/x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x385 = INT32_MAX;
	static uint8_t x387 = 19U;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t89 = 4;

	t89 = (((x385/x386)<=x387)/x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = -502871LL;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MAX;
	int32_t t90 = 1;

	t90 = (((x389/x390)<=x391)/x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = -1483;
	int8_t x394 = -11;
	int8_t x395 = INT8_MIN;
	static int64_t x396 = 1124868820878LL;
	int64_t t91 = -596633252LL;

	t91 = (((x393/x394)<=x395)/x396);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MIN;
	uint8_t x400 = 29U;
	int32_t t92 = -154085462;

	t92 = (((x397/x398)<=x399)/x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int64_t x402 = 56066935690064402LL;
	uint16_t x403 = UINT16_MAX;
	volatile int32_t t93 = -58321;

	t93 = (((x401/x402)<=x403)/x404);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = 1426264LL;
	uint32_t x406 = 1377670168U;
	int8_t x407 = -5;

	t94 = (((x405/x406)<=x407)/x408);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x409 = INT16_MIN;
	static int32_t t95 = -28;

	t95 = (((x409/x410)<=x411)/x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = 3642336U;
	uint8_t x414 = UINT8_MAX;
	volatile uint8_t x415 = UINT8_MAX;
	int16_t x416 = INT16_MIN;

	t96 = (((x413/x414)<=x415)/x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MAX;
	static volatile int8_t x419 = INT8_MAX;

	t97 = (((x417/x418)<=x419)/x420);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x421 = INT16_MIN;
	static uint16_t x422 = 2U;
	int16_t x424 = -1;
	volatile int32_t t98 = 24063;

	t98 = (((x421/x422)<=x423)/x424);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 330U;
	volatile int8_t x426 = INT8_MIN;
	uint16_t x427 = UINT16_MAX;
	int32_t t99 = 38304;

	t99 = (((x425/x426)<=x427)/x428);

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

