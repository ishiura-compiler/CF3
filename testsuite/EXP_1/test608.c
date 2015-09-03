#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 10U;
int32_t x6 = INT32_MIN;
static volatile int32_t t1 = -1;
int16_t x14 = -1;
int8_t x16 = INT8_MIN;
volatile int32_t t3 = -24;
static volatile int8_t x20 = -14;
uint32_t x23 = 25859U;
volatile int16_t x26 = -23;
int64_t x29 = -1LL;
int32_t t9 = 15013362;
int8_t x41 = INT8_MIN;
int32_t x47 = INT32_MIN;
int32_t t11 = -305394;
uint64_t x49 = 2159387307306LLU;
int32_t t12 = -7179;
volatile int32_t t15 = 210142056;
volatile int32_t t16 = 68492;
static volatile int32_t t17 = 269045;
int8_t x77 = INT8_MIN;
int64_t x80 = INT64_MAX;
static int8_t x82 = -1;
int32_t x94 = INT32_MAX;
int16_t x100 = -1;
uint16_t x111 = UINT16_MAX;
static uint64_t x112 = 10577857297609LLU;
int64_t x118 = INT64_MAX;
uint16_t x123 = UINT16_MAX;
static volatile int32_t t30 = -3189;
static uint16_t x128 = 2U;
int16_t x132 = -2140;
int64_t x137 = -252549LL;
int32_t x138 = INT32_MAX;
int8_t x139 = INT8_MIN;
static volatile int32_t x141 = -1;
volatile int32_t t36 = -74;
int64_t x152 = INT64_MIN;
volatile int8_t x157 = 31;
static volatile uint8_t x164 = 1U;
int32_t x169 = -141;
volatile int16_t x171 = INT16_MIN;
static int8_t x173 = INT8_MAX;
static uint8_t x174 = 14U;
int32_t x177 = -1;
int16_t x184 = -1;
int32_t t45 = 546569;
uint64_t x186 = UINT64_MAX;
int8_t x196 = -46;
int32_t x205 = INT32_MIN;
int8_t x207 = INT8_MIN;
volatile int64_t x218 = INT64_MIN;
int64_t x224 = 6795427LL;
uint16_t x234 = UINT16_MAX;
volatile int32_t t57 = 10497920;
static uint8_t x245 = 85U;
int8_t x258 = INT8_MIN;
static volatile int8_t x270 = -61;
int16_t x272 = INT16_MAX;
volatile int32_t t65 = -989;
volatile int32_t t67 = -1;
static volatile int32_t x281 = 423366;
volatile int32_t t68 = 2;
int8_t x289 = -1;
volatile int64_t x292 = -1LL;
int32_t x293 = INT32_MIN;
int64_t x298 = INT64_MAX;
volatile int32_t t75 = 0;
uint32_t x321 = UINT32_MAX;
static int8_t x328 = INT8_MIN;
int32_t x329 = INT32_MAX;
static volatile int32_t t80 = 6;
static int64_t x335 = INT64_MIN;
int64_t x348 = -1LL;
int32_t t83 = 1;
int32_t t84 = 898016;
int8_t x355 = INT8_MIN;
volatile uint8_t x356 = UINT8_MAX;
uint64_t x364 = 112845007772LLU;
volatile int32_t x368 = 12;
static int16_t x371 = INT16_MIN;
int32_t x372 = INT32_MAX;
uint32_t x384 = 92U;
int32_t t93 = 8594;
int64_t x391 = -10459920603227312LL;
uint32_t x400 = 255497U;
int64_t x409 = INT64_MAX;
volatile int32_t t99 = -174790;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int64_t x2 = -207857989900LL;
	uint16_t x3 = 7U;
	uint16_t x4 = 6U;
	static int32_t t0 = -349089;

	t0 = (((x1/x2)==x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 47224U;
	int16_t x8 = INT16_MIN;

	t1 = (((x5/x6)==x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 49923U;
	static volatile int32_t x10 = INT32_MIN;
	int16_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = -15239;

	t2 = (((x9/x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 209053352;
	uint32_t x15 = UINT32_MAX;

	t3 = (((x13/x14)==x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int64_t x18 = INT64_MIN;
	int16_t x19 = 390;
	static int32_t t4 = -1712;

	t4 = (((x17/x18)==x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 0;
	int16_t x22 = -1;
	int8_t x24 = 0;
	volatile int32_t t5 = 694;

	t5 = (((x21/x22)==x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 8;
	uint32_t x27 = 3U;
	volatile uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -56836897;

	t6 = (((x25/x26)==x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = UINT64_MAX;
	uint8_t x31 = 3U;
	static uint16_t x32 = 14U;
	static volatile int32_t t7 = -502871;

	t7 = (((x29/x30)==x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 29U;
	static uint64_t x34 = UINT64_MAX;
	int8_t x35 = -25;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = 1676;

	t8 = (((x33/x34)==x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = -2024;
	int8_t x39 = INT8_MIN;
	static volatile int64_t x40 = INT64_MIN;

	t9 = (((x37/x38)==x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = -1;
	uint16_t x43 = 1U;
	uint16_t x44 = 12U;
	int32_t t10 = -246074;

	t10 = (((x41/x42)==x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2048U;
	int64_t x46 = INT64_MIN;
	uint8_t x48 = 5U;

	t11 = (((x45/x46)==x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x50 = 235U;
	volatile uint64_t x51 = UINT64_MAX;
	uint32_t x52 = 662802565U;

	t12 = (((x49/x50)==x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -63;
	int64_t x54 = INT64_MIN;
	static int16_t x55 = INT16_MIN;
	uint16_t x56 = 154U;
	int32_t t13 = -2087017;

	t13 = (((x53/x54)==x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = 3297;

	t14 = (((x57/x58)==x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 5272;
	volatile int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	static uint64_t x64 = 37LLU;

	t15 = (((x61/x62)==x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	int64_t x68 = -13716217LL;

	t16 = (((x65/x66)==x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 4U;
	int32_t x70 = -254;
	volatile uint16_t x71 = UINT16_MAX;
	int8_t x72 = 43;

	t17 = (((x69/x70)==x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MAX;
	int8_t x75 = -1;
	int32_t x76 = 21275716;
	volatile int32_t t18 = 6521280;

	t18 = (((x73/x74)==x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	static volatile int32_t t19 = 965378;

	t19 = (((x77/x78)==x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	int8_t x83 = INT8_MIN;
	int64_t x84 = 0LL;
	volatile int32_t t20 = 102151;

	t20 = (((x81/x82)==x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MAX;
	static int32_t x86 = -56;
	static uint32_t x87 = 2U;
	int64_t x88 = INT64_MAX;
	int32_t t21 = 653902;

	t21 = (((x85/x86)==x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	volatile int16_t x90 = INT16_MIN;
	volatile int16_t x91 = 0;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = -42;

	t22 = (((x89/x90)==x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 13U;
	uint32_t x95 = UINT32_MAX;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = -1;

	t23 = (((x93/x94)==x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = 1560096LLU;
	int64_t x98 = -1LL;
	static int16_t x99 = -29;
	static volatile int32_t t24 = 50497229;

	t24 = (((x97/x98)==x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 61666497U;
	uint16_t x102 = 27851U;
	static volatile uint32_t x103 = UINT32_MAX;
	int32_t x104 = -11210;
	volatile int32_t t25 = -7;

	t25 = (((x101/x102)==x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	int64_t x106 = -256496319607LL;
	uint8_t x107 = UINT8_MAX;
	static uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = -1644;

	t26 = (((x105/x106)==x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	int16_t x110 = 15819;
	static volatile int32_t t27 = 30819673;

	t27 = (((x109/x110)==x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 172U;
	uint16_t x114 = 623U;
	uint16_t x115 = 963U;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -6;

	t28 = (((x113/x114)==x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = -393;

	t29 = (((x117/x118)==x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -5;
	volatile int64_t x122 = INT64_MAX;
	int32_t x124 = -96485;

	t30 = (((x121/x122)==x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	int8_t x126 = -18;
	int64_t x127 = INT64_MIN;
	static volatile int32_t t31 = 4030189;

	t31 = (((x125/x126)==x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 927U;
	int8_t x130 = -1;
	int64_t x131 = -1093LL;
	int32_t t32 = -155885401;

	t32 = (((x129/x130)==x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static int32_t x134 = -786685;
	uint16_t x135 = 1U;
	int8_t x136 = -1;
	volatile int32_t t33 = 1;

	t33 = (((x133/x134)==x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x140 = -1;
	volatile int32_t t34 = 117;

	t34 = (((x137/x138)==x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x142 = 9795U;
	int32_t x143 = INT32_MIN;
	static volatile int32_t x144 = 674838448;
	static volatile int32_t t35 = -4;

	t35 = (((x141/x142)==x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 180244514;
	uint16_t x146 = 3U;
	uint16_t x147 = 1U;
	int16_t x148 = INT16_MIN;

	t36 = (((x145/x146)==x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	static int32_t x150 = -1;
	int16_t x151 = 0;
	int32_t t37 = -3;

	t37 = (((x149/x150)==x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 1;
	int8_t x154 = INT8_MIN;
	volatile int32_t x155 = INT32_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t38 = -268246;

	t38 = (((x153/x154)==x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x158 = 5744255U;
	uint64_t x159 = UINT64_MAX;
	static int32_t x160 = 1922875;
	volatile int32_t t39 = 466305;

	t39 = (((x157/x158)==x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = -1LL;
	static int64_t x162 = INT64_MAX;
	volatile int32_t x163 = INT32_MIN;
	int32_t t40 = 897;

	t40 = (((x161/x162)==x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = 14324726LLU;
	int64_t x167 = -85250574860655LL;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 2789;

	t41 = (((x165/x166)==x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = UINT8_MAX;
	uint8_t x172 = 15U;
	volatile int32_t t42 = -717055;

	t42 = (((x169/x170)==x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = -1;
	static int64_t x176 = -1138753914LL;
	int32_t t43 = 53741;

	t43 = (((x173/x174)==x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x178 = UINT64_MAX;
	volatile int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MAX;
	static volatile int32_t t44 = -59896593;

	t44 = (((x177/x178)==x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 4861U;
	int8_t x182 = -1;
	int8_t x183 = -1;

	t45 = (((x181/x182)==x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	static int64_t x188 = 130960013803LL;
	volatile int32_t t46 = 56;

	t46 = (((x185/x186)==x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 8;
	static uint32_t x190 = 46529017U;
	static int64_t x191 = -1LL;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 4321;

	t47 = (((x189/x190)==x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 0U;
	static uint32_t x194 = 10U;
	uint8_t x195 = UINT8_MAX;
	int32_t t48 = -126;

	t48 = (((x193/x194)==x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -9;
	volatile int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	int32_t x204 = INT32_MAX;
	int32_t t49 = 889975;

	t49 = (((x201/x202)==x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x206 = 5U;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t50 = -99118;

	t50 = (((x205/x206)==x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = -120;
	uint64_t x211 = 3038359019922272971LLU;
	int16_t x212 = INT16_MIN;
	static int32_t t51 = -2369;

	t51 = (((x209/x210)==x211)<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x213 = 39442367771139LLU;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = 8;
	volatile int64_t x216 = 639461479645760346LL;
	volatile int32_t t52 = 534080464;

	t52 = (((x213/x214)==x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 10993LLU;
	int16_t x219 = 0;
	int16_t x220 = -1;
	static int32_t t53 = -593615;

	t53 = (((x217/x218)==x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x221 = -1;
	uint8_t x222 = UINT8_MAX;
	static int16_t x223 = INT16_MIN;
	int32_t t54 = 30;

	t54 = (((x221/x222)==x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x225 = 2;
	volatile int32_t x226 = -112621;
	volatile int16_t x227 = INT16_MAX;
	volatile uint16_t x228 = 1626U;
	volatile int32_t t55 = -120;

	t55 = (((x225/x226)==x227)<=x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -3;
	static uint8_t x230 = 2U;
	int16_t x231 = INT16_MIN;
	volatile int32_t x232 = -1;
	volatile int32_t t56 = 0;

	t56 = (((x229/x230)==x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x233 = UINT64_MAX;
	static volatile int16_t x235 = -2882;
	uint32_t x236 = 548464U;

	t57 = (((x233/x234)==x235)<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	int16_t x238 = -1;
	int16_t x239 = 13354;
	int8_t x240 = -1;
	int32_t t58 = 510981161;

	t58 = (((x237/x238)==x239)<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = -1LL;
	int8_t x242 = -13;
	volatile int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	int32_t t59 = -552140161;

	t59 = (((x241/x242)==x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x246 = INT16_MAX;
	static int32_t x247 = INT32_MIN;
	int32_t x248 = -1;
	volatile int32_t t60 = -839;

	t60 = (((x245/x246)==x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MAX;
	int8_t x250 = -1;
	static int64_t x251 = -1LL;
	int64_t x252 = -119450216866924LL;
	static int32_t t61 = -1;

	t61 = (((x249/x250)==x251)<=x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MAX;
	int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = 112U;
	static int32_t t62 = -463951926;

	t62 = (((x253/x254)==x255)<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = -133478882049LL;
	int32_t x259 = -383;
	uint32_t x260 = 1081127U;
	volatile int32_t t63 = -147729112;

	t63 = (((x257/x258)==x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 111U;
	int8_t x262 = -1;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -10522;
	static volatile int32_t t64 = 589982043;

	t64 = (((x261/x262)==x263)<=x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 14U;
	static uint16_t x271 = 1U;

	t65 = (((x269/x270)==x271)<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MAX;
	static volatile int16_t x274 = INT16_MIN;
	int16_t x275 = 2211;
	volatile uint64_t x276 = 5573LLU;
	int32_t t66 = -3727235;

	t66 = (((x273/x274)==x275)<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x277 = 20364130LLU;
	int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	static int8_t x280 = 1;

	t67 = (((x277/x278)==x279)<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	volatile int16_t x284 = -1;

	t68 = (((x281/x282)==x283)<=x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 33106813872LLU;
	int32_t x286 = -1;
	int8_t x287 = 24;
	int64_t x288 = INT64_MIN;
	int32_t t69 = -59448911;

	t69 = (((x285/x286)==x287)<=x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = 12239LL;
	uint32_t x291 = UINT32_MAX;
	int32_t t70 = -1132363;

	t70 = (((x289/x290)==x291)<=x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x294 = INT64_MIN;
	volatile int32_t x295 = INT32_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t71 = 1;

	t71 = (((x293/x294)==x295)<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 210;
	int16_t x299 = -332;
	int64_t x300 = INT64_MIN;
	static volatile int32_t t72 = 30;

	t72 = (((x297/x298)==x299)<=x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = 546974864217846378LL;
	static volatile int64_t x302 = 8576172968LL;
	uint64_t x303 = 547859583938275291LLU;
	int16_t x304 = 87;
	static volatile int32_t t73 = 101779;

	t73 = (((x301/x302)==x303)<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = 0;
	uint16_t x306 = UINT16_MAX;
	int64_t x307 = INT64_MIN;
	int32_t x308 = -8114;
	volatile int32_t t74 = 56306414;

	t74 = (((x305/x306)==x307)<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = -349355671;
	static volatile int32_t x310 = -1;
	int64_t x311 = 1LL;
	uint16_t x312 = 44U;

	t75 = (((x309/x310)==x311)<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = INT8_MIN;
	static int16_t x314 = -1;
	uint16_t x315 = 6897U;
	volatile int16_t x316 = -3297;
	volatile int32_t t76 = -1050514598;

	t76 = (((x313/x314)==x315)<=x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -1LL;
	int32_t x318 = -1;
	int8_t x319 = 1;
	int16_t x320 = 0;
	volatile int32_t t77 = -4031160;

	t77 = (((x317/x318)==x319)<=x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x322 = 15U;
	int8_t x323 = INT8_MAX;
	static uint32_t x324 = 1714534U;
	int32_t t78 = -1925;

	t78 = (((x321/x322)==x323)<=x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	int32_t x327 = -1;
	volatile int32_t t79 = 7480452;

	t79 = (((x325/x326)==x327)<=x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x330 = -1LL;
	int8_t x331 = -3;
	volatile uint64_t x332 = 45459456LLU;

	t80 = (((x329/x330)==x331)<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = 5;
	int8_t x336 = INT8_MAX;
	volatile int32_t t81 = 214;

	t81 = (((x333/x334)==x335)<=x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static int64_t x342 = -1LL;
	int8_t x343 = -4;
	int64_t x344 = INT64_MIN;
	static int32_t t82 = 0;

	t82 = (((x341/x342)==x343)<=x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	uint64_t x347 = UINT64_MAX;

	t83 = (((x345/x346)==x347)<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = UINT32_MAX;
	int8_t x350 = -1;
	uint64_t x351 = 44886231071519LLU;
	volatile int16_t x352 = INT16_MIN;

	t84 = (((x349/x350)==x351)<=x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x353 = INT8_MIN;
	static int32_t x354 = INT32_MAX;
	int32_t t85 = -442;

	t85 = (((x353/x354)==x355)<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x357 = 14LLU;
	int16_t x358 = -1;
	int16_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int32_t t86 = -2088416;

	t86 = (((x357/x358)==x359)<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 376867LL;
	int16_t x362 = INT16_MIN;
	int8_t x363 = -15;
	volatile int32_t t87 = -29814;

	t87 = (((x361/x362)==x363)<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x365 = 24;
	uint64_t x366 = 12LLU;
	int8_t x367 = -1;
	int32_t t88 = 7;

	t88 = (((x365/x366)==x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 69053398LL;
	int8_t x370 = 1;
	static int32_t t89 = 25;

	t89 = (((x369/x370)==x371)<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	static int16_t x375 = INT16_MIN;
	static volatile int32_t x376 = -1;
	volatile int32_t t90 = 222061;

	t90 = (((x373/x374)==x375)<=x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = 129777752LL;
	volatile int8_t x378 = -1;
	int16_t x379 = 90;
	int16_t x380 = INT16_MIN;
	int32_t t91 = -53;

	t91 = (((x377/x378)==x379)<=x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x381 = -1;
	int32_t x382 = -1;
	int32_t x383 = INT32_MIN;
	static volatile int32_t t92 = -166190;

	t92 = (((x381/x382)==x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = -1LL;
	int16_t x386 = INT16_MAX;
	volatile int64_t x387 = -570214234180LL;
	uint64_t x388 = UINT64_MAX;

	t93 = (((x385/x386)==x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = 15547252984LLU;
	uint16_t x390 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	int32_t t94 = 11;

	t94 = (((x389/x390)==x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = -5974;
	int8_t x394 = INT8_MIN;
	volatile int64_t x395 = INT64_MAX;
	uint16_t x396 = 13111U;
	volatile int32_t t95 = -2026906;

	t95 = (((x393/x394)==x395)<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x397 = INT8_MIN;
	int16_t x398 = 22;
	static int64_t x399 = -149LL;
	static volatile int32_t t96 = 9964357;

	t96 = (((x397/x398)==x399)<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MAX;
	static int16_t x402 = INT16_MIN;
	uint8_t x403 = UINT8_MAX;
	static int64_t x404 = 0LL;
	static int32_t t97 = 22653;

	t97 = (((x401/x402)==x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 10280367U;
	static int32_t x407 = INT32_MIN;
	volatile uint16_t x408 = 0U;
	volatile int32_t t98 = 4064;

	t98 = (((x405/x406)==x407)<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x410 = -1;
	uint64_t x411 = 46784655765551LLU;
	int64_t x412 = INT64_MAX;

	t99 = (((x409/x410)==x411)<=x412);

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

