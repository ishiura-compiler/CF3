#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 967LL;
int8_t x10 = INT8_MAX;
volatile int8_t x12 = INT8_MIN;
volatile int32_t t1 = -499673482;
int32_t x15 = INT32_MIN;
uint32_t x22 = 199U;
static int8_t x23 = INT8_MAX;
int16_t x24 = INT16_MIN;
static int64_t x27 = INT64_MIN;
uint16_t x29 = 14U;
static int64_t t6 = -7447404LL;
static uint32_t x34 = UINT32_MAX;
int8_t x36 = INT8_MAX;
volatile int64_t t8 = 17LL;
int8_t x44 = INT8_MIN;
int16_t x52 = INT16_MAX;
int32_t x53 = -865492843;
volatile uint8_t x56 = 58U;
int16_t x57 = INT16_MAX;
static int8_t x63 = INT8_MIN;
static uint64_t t15 = 29599524997823991LLU;
static volatile int16_t x86 = -1;
int32_t x87 = INT32_MIN;
static volatile uint64_t t18 = 14221012634LLU;
volatile uint32_t x94 = 1U;
int32_t t20 = 44056239;
volatile uint32_t x104 = UINT32_MAX;
uint64_t t21 = 6052729310900375675LLU;
static uint64_t x108 = 777196738236143LLU;
volatile uint32_t x123 = 3U;
uint32_t x127 = 188U;
volatile int64_t t27 = 13962778LL;
int32_t x134 = -1137;
volatile int64_t x138 = -232681846837262128LL;
volatile int64_t t30 = 25LL;
volatile int16_t x145 = -1;
uint64_t t33 = 7586694006286765756LLU;
volatile int16_t x158 = INT16_MAX;
static int16_t x164 = -2;
static int8_t x169 = INT8_MIN;
uint8_t x171 = UINT8_MAX;
int64_t x179 = -416384306271LL;
volatile uint8_t x200 = 57U;
int32_t t46 = -12017;
volatile int64_t x209 = 1217819156LL;
uint32_t x211 = 96U;
int16_t x213 = INT16_MAX;
static int16_t x221 = INT16_MIN;
uint16_t x223 = 22896U;
int64_t x231 = -2875778568LL;
uint32_t x234 = 2383354U;
static int32_t x239 = -115327;
static int64_t x243 = INT64_MIN;
int64_t x248 = 3400409155621LL;
int64_t t56 = 3049794150074006LL;
uint64_t x251 = 7825087152LLU;
int16_t x253 = -1;
int16_t x256 = INT16_MAX;
int16_t x257 = 32;
int8_t x259 = INT8_MIN;
uint64_t x268 = 29LLU;
static volatile uint64_t t61 = 3295528LLU;
int16_t x270 = INT16_MIN;
uint8_t x279 = 41U;
static volatile int8_t x281 = -7;
int8_t x285 = -20;
static int64_t x286 = -271LL;
int32_t x287 = -1;
static volatile int8_t x290 = 1;
static int16_t x293 = INT16_MIN;
uint32_t x295 = 6870955U;
int64_t x303 = INT64_MAX;
static volatile uint8_t x305 = 10U;
int8_t x307 = INT8_MIN;
int16_t x310 = -1;
int16_t x311 = INT16_MIN;
volatile int32_t x313 = INT32_MIN;
int16_t x314 = INT16_MIN;
volatile int16_t x319 = INT16_MIN;
int32_t x322 = INT32_MAX;
volatile int8_t x323 = -5;
uint16_t x331 = UINT16_MAX;
volatile int64_t t80 = -1LL;
int8_t x351 = INT8_MAX;
volatile uint32_t t82 = 31U;
volatile int64_t x354 = 31908681706609LL;
uint16_t x356 = 1U;
int64_t t83 = -1162823LL;
uint64_t x368 = 529513476LLU;
volatile int16_t x370 = -1;
uint64_t x371 = 1662304027LLU;
int16_t x373 = -4045;
int32_t x374 = INT32_MIN;
volatile int16_t x375 = 3;
uint8_t x387 = 1U;
int64_t x395 = 47555099LL;
uint64_t x396 = 51LLU;
uint64_t t94 = 241177202076673LLU;
uint8_t x405 = UINT8_MAX;
uint32_t x408 = UINT32_MAX;
int8_t x419 = INT8_MIN;


void f0(void) {
	static int16_t x5 = 36;
	uint8_t x6 = 1U;
	volatile int64_t x7 = -1LL;
	volatile int64_t x8 = INT64_MIN;

	t0 = (((x5/x6)%x7)*x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	static uint16_t x11 = 6U;

	t1 = (((x9/x10)%x11)*x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 1;
	int32_t x14 = INT32_MIN;
	int64_t x16 = 841364946328LL;
	int64_t t2 = -204762058271228676LL;

	t2 = (((x13/x14)%x15)*x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	static int32_t x20 = INT32_MIN;
	static volatile int64_t t3 = 46470308786LL;

	t3 = (((x17/x18)%x19)*x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	volatile uint32_t t4 = 13103U;

	t4 = (((x21/x22)%x23)*x24);

	if (t4 != 4293066752U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 3U;
	int16_t x26 = -2062;
	uint16_t x28 = UINT16_MAX;
	int64_t t5 = 8LL;

	t5 = (((x25/x26)%x27)*x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 58957436022156LL;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;

	t6 = (((x29/x30)%x31)*x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -1;
	uint8_t x35 = UINT8_MAX;
	uint32_t t7 = 7458U;

	t7 = (((x33/x34)%x35)*x36);

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 1;
	int16_t x38 = -55;
	int8_t x39 = INT8_MAX;
	int64_t x40 = INT64_MAX;

	t8 = (((x37/x38)%x39)*x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 29991U;
	volatile int16_t x42 = -1;
	uint8_t x43 = 107U;
	static int32_t t9 = -3065897;

	t9 = (((x41/x42)%x43)*x44);

	if (t9 != 3968) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	static uint32_t x50 = 832690824U;
	int64_t x51 = -102139971378LL;
	static volatile int64_t t10 = 102279262291LL;

	t10 = (((x49/x50)%x51)*x52);

	if (t10 != 163835LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x54 = -1;
	uint32_t x55 = 4321U;
	static volatile uint32_t t11 = 123U;

	t11 = (((x53/x54)%x55)*x56);

	if (t11 != 50112U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = INT32_MIN;
	volatile int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t12 = 2958;

	t12 = (((x57/x58)%x59)*x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MAX;
	volatile int64_t x62 = -18370950176097371LL;
	int16_t x64 = INT16_MIN;
	static volatile int64_t t13 = -118346678901031LL;

	t13 = (((x61/x62)%x63)*x64);

	if (t13 != 3866624LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = 811185498U;
	int64_t x71 = -1LL;
	static int16_t x72 = 1169;
	int64_t t14 = -548344483829993778LL;

	t14 = (((x69/x70)%x71)*x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -31;
	int64_t x74 = INT64_MIN;
	uint8_t x75 = 1U;
	uint64_t x76 = 36634267928755589LLU;

	t15 = (((x73/x74)%x75)*x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = INT64_MAX;
	uint32_t x79 = 5U;
	volatile int16_t x80 = -1;
	int64_t t16 = 7085094525LL;

	t16 = (((x77/x78)%x79)*x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	uint64_t x82 = 18LLU;
	uint8_t x83 = 3U;
	int32_t x84 = 127139;
	volatile uint64_t t17 = 2167179948130953988LLU;

	t17 = (((x81/x82)%x83)*x84);

	if (t17 != 254278LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 47325739896891LLU;
	static uint64_t x88 = 758473108168184343LLU;

	t18 = (((x85/x86)%x87)*x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int64_t t19 = -179350387294LL;

	t19 = (((x93/x94)%x95)*x96);

	if (t19 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = -4;
	int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;

	t20 = (((x97/x98)%x99)*x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = 6054599;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 400229882LLU;

	t21 = (((x101/x102)%x103)*x104);

	if (t21 != 238438708564518210LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = -1;
	uint64_t x107 = 11695402305213LLU;
	volatile uint64_t t22 = 61374LLU;

	t22 = (((x105/x106)%x107)*x108);

	if (t22 != 5643185509850355295LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MAX;
	int8_t x110 = -1;
	volatile int16_t x111 = -1;
	int8_t x112 = -1;
	int32_t t23 = 2073844;

	t23 = (((x109/x110)%x111)*x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = -1;
	int32_t x114 = 38;
	int16_t x115 = INT16_MAX;
	uint8_t x116 = 27U;
	volatile int32_t t24 = -5;

	t24 = (((x113/x114)%x115)*x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	static int16_t x119 = -1;
	static uint8_t x120 = 126U;
	volatile int32_t t25 = -428187636;

	t25 = (((x117/x118)%x119)*x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = 151228648257LLU;
	volatile int8_t x122 = -1;
	int8_t x124 = 5;
	static uint64_t t26 = 150492052240LLU;

	t26 = (((x121/x122)%x123)*x124);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x125 = 3U;
	int32_t x126 = INT32_MAX;
	int64_t x128 = INT64_MAX;

	t27 = (((x125/x126)%x127)*x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	static int64_t x130 = INT64_MAX;
	int64_t x131 = -1LL;
	uint32_t x132 = UINT32_MAX;
	int64_t t28 = -2LL;

	t28 = (((x129/x130)%x131)*x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 1U;
	int32_t x135 = 80;
	int16_t x136 = -1;
	int32_t t29 = 7740;

	t29 = (((x133/x134)%x135)*x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 49U;
	static int32_t x139 = -25453;
	static uint32_t x140 = 4622103U;

	t30 = (((x137/x138)%x139)*x140);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -21268812072383910LL;
	int8_t x142 = INT8_MAX;
	volatile int32_t x143 = INT32_MIN;
	static uint32_t x144 = UINT32_MAX;
	volatile int64_t t31 = 1571959665552LL;

	t31 = (((x141/x142)%x143)*x144);

	if (t31 != -6856461055021348095LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x146 = INT16_MAX;
	volatile int8_t x147 = 11;
	uint32_t x148 = 1313947706U;
	volatile uint32_t t32 = 15281677U;

	t32 = (((x145/x146)%x147)*x148);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x149 = 12137U;
	uint16_t x150 = 133U;
	volatile uint8_t x151 = 18U;
	static volatile uint64_t x152 = 18243116570596LLU;

	t33 = (((x149/x150)%x151)*x152);

	if (t33 != 18243116570596LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	static int32_t x154 = INT32_MIN;
	uint64_t x155 = 106797437LLU;
	uint16_t x156 = UINT16_MAX;
	volatile uint64_t t34 = 11953221LLU;

	t34 = (((x153/x154)%x155)*x156);

	if (t34 != 65535LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = 61043LL;
	int16_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	uint64_t t35 = 1894733137691826LLU;

	t35 = (((x157/x158)%x159)*x160);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 509U;
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	int32_t t36 = 938010146;

	t36 = (((x161/x162)%x163)*x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = 0;
	static int16_t x166 = INT16_MIN;
	uint16_t x167 = 3442U;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t37 = 12435049711LLU;

	t37 = (((x165/x166)%x167)*x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x170 = 5U;
	volatile uint32_t x172 = 16U;
	uint32_t t38 = 700245411U;

	t38 = (((x169/x170)%x171)*x172);

	if (t38 != 4294966896U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = 13U;
	uint32_t x174 = 740407395U;
	static volatile int32_t x175 = INT32_MIN;
	static int16_t x176 = 6;
	static volatile uint32_t t39 = 676692U;

	t39 = (((x173/x174)%x175)*x176);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -37;
	uint16_t x178 = UINT16_MAX;
	int64_t x180 = -1LL;
	volatile int64_t t40 = -13283135035283258LL;

	t40 = (((x177/x178)%x179)*x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x181 = 13U;
	static uint32_t x182 = UINT32_MAX;
	int32_t x183 = 1;
	uint16_t x184 = 1800U;
	uint32_t t41 = 13257U;

	t41 = (((x181/x182)%x183)*x184);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = 244287;
	int16_t x190 = INT16_MIN;
	static int64_t x191 = -1LL;
	int16_t x192 = INT16_MIN;
	int64_t t42 = -683601935684957LL;

	t42 = (((x189/x190)%x191)*x192);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x193 = INT32_MIN;
	static uint16_t x194 = 6642U;
	int64_t x195 = 95LL;
	uint16_t x196 = UINT16_MAX;
	int64_t t43 = 0LL;

	t43 = (((x193/x194)%x195)*x196);

	if (t43 != -2162655LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = UINT16_MAX;
	static int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MIN;
	volatile int32_t t44 = 3195262;

	t44 = (((x197/x198)%x199)*x200);

	if (t44 != -57) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MAX;
	static int32_t x202 = -1;
	uint64_t x203 = 630LLU;
	int32_t x204 = INT32_MIN;
	static volatile uint64_t t45 = 499291219130216LLU;

	t45 = (((x201/x202)%x203)*x204);

	if (t45 != 18446742959165538304LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 1U;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	volatile int32_t x208 = INT32_MIN;

	t46 = (((x205/x206)%x207)*x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x210 = -2759112;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t47 = 470LLU;

	t47 = (((x209/x210)%x211)*x212);

	if (t47 != 57LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x214 = -74;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;
	int64_t t48 = 356389002592LL;

	t48 = (((x213/x214)%x215)*x216);

	if (t48 != 56576LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x217 = 225U;
	volatile uint32_t x218 = 120U;
	uint8_t x219 = UINT8_MAX;
	static int16_t x220 = INT16_MAX;
	volatile uint32_t t49 = 52885423U;

	t49 = (((x217/x218)%x219)*x220);

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x222 = -1;
	volatile int16_t x224 = INT16_MIN;
	int32_t t50 = -110;

	t50 = (((x221/x222)%x223)*x224);

	if (t50 != -323485696) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	volatile int32_t x226 = INT32_MIN;
	int64_t x227 = 7883796171005LL;
	int8_t x228 = INT8_MAX;
	volatile int64_t t51 = 147222264305661851LL;

	t51 = (((x225/x226)%x227)*x228);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MIN;
	uint64_t x232 = UINT64_MAX;
	static uint64_t t52 = 14814707LLU;

	t52 = (((x229/x230)%x231)*x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = 0;
	int8_t x235 = 1;
	int8_t x236 = INT8_MAX;
	volatile uint32_t t53 = 1U;

	t53 = (((x233/x234)%x235)*x236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x237 = -15058;
	int16_t x238 = INT16_MIN;
	volatile uint8_t x240 = 0U;
	int32_t t54 = 29261;

	t54 = (((x237/x238)%x239)*x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = 132062949LLU;
	volatile int64_t x244 = -1LL;
	uint64_t t55 = 73LLU;

	t55 = (((x241/x242)%x243)*x244);

	if (t55 != 18446743934028102647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MIN;
	volatile int16_t x247 = INT16_MAX;

	t56 = (((x245/x246)%x247)*x248);

	if (t56 != -1737609078522331LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = 2256373;
	static uint64_t x250 = 10389975840LLU;
	uint16_t x252 = 2U;
	uint64_t t57 = 3459975814529743373LLU;

	t57 = (((x249/x250)%x251)*x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -1;
	static volatile uint32_t t58 = 11747U;

	t58 = (((x253/x254)%x255)*x256);

	if (t58 != 32767U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x258 = 5LL;
	uint32_t x260 = 14013815U;
	volatile int64_t t59 = 14849629LL;

	t59 = (((x257/x258)%x259)*x260);

	if (t59 != 84082890LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x261 = 3U;
	int32_t x262 = -1;
	uint32_t x263 = 42U;
	int8_t x264 = INT8_MAX;
	static uint32_t t60 = 5081857U;

	t60 = (((x261/x262)%x263)*x264);

	if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	volatile int32_t x266 = 2093;
	int64_t x267 = INT64_MIN;

	t61 = (((x265/x266)%x267)*x268);

	if (t61 != 18446744073679796717LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x269 = UINT16_MAX;
	static volatile int8_t x271 = -28;
	static int8_t x272 = -1;
	volatile int32_t t62 = -3218;

	t62 = (((x269/x270)%x271)*x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x273 = INT8_MIN;
	uint32_t x274 = 29U;
	uint64_t x275 = UINT64_MAX;
	int8_t x276 = -1;
	static volatile uint64_t t63 = 403136654291410654LLU;

	t63 = (((x273/x274)%x275)*x276);

	if (t63 != 18446744073561449300LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x277 = 907139U;
	uint64_t x278 = UINT64_MAX;
	int16_t x280 = INT16_MAX;
	volatile uint64_t t64 = 7LLU;

	t64 = (((x277/x278)%x279)*x280);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x282 = 4U;
	int32_t x283 = INT32_MIN;
	volatile int64_t x284 = 1LL;
	volatile int64_t t65 = -2LL;

	t65 = (((x281/x282)%x283)*x284);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x288 = -3;
	static int64_t t66 = -5645174073271LL;

	t66 = (((x285/x286)%x287)*x288);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = 192U;
	int32_t x291 = INT32_MIN;
	volatile uint64_t x292 = 302160015155439612LLU;
	uint64_t t67 = 11167827515855LLU;

	t67 = (((x289/x290)%x291)*x292);

	if (t67 != 2674490688715750656LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x294 = 1U;
	volatile int32_t x296 = -1;
	volatile uint32_t t68 = 538U;

	t68 = (((x293/x294)%x295)*x296);

	if (t68 != 4294379643U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	volatile int64_t x298 = INT64_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	volatile int64_t t69 = -3136LL;

	t69 = (((x297/x298)%x299)*x300);

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = -1LL;
	int16_t x304 = INT16_MAX;
	volatile uint64_t t70 = 7017120284657440698LLU;

	t70 = (((x301/x302)%x303)*x304);

	if (t70 != 32767LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x306 = INT8_MAX;
	static int16_t x308 = -1;
	int32_t t71 = 355;

	t71 = (((x305/x306)%x307)*x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	volatile int64_t x312 = -71565835875373815LL;
	int64_t t72 = 587392LL;

	t72 = (((x309/x310)%x311)*x312);

	if (t72 != -71565835875373815LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;
	volatile int64_t t73 = -420622409434600LL;

	t73 = (((x313/x314)%x315)*x316);

	if (t73 != -8388608LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MAX;
	int64_t x318 = INT64_MAX;
	int32_t x320 = -904;
	int64_t t74 = 59405507621LL;

	t74 = (((x317/x318)%x319)*x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = -1682419LL;
	int64_t x324 = -118LL;
	volatile int64_t t75 = -28LL;

	t75 = (((x321/x322)%x323)*x324);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = -1;
	uint16_t x326 = 62U;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;
	int64_t t76 = -43774282LL;

	t76 = (((x325/x326)%x327)*x328);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	volatile uint8_t x330 = UINT8_MAX;
	volatile int32_t x332 = -909456;
	volatile int32_t t77 = 211850;

	t77 = (((x329/x330)%x331)*x332);

	if (t77 != 116410368) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -25829;
	uint16_t x334 = 8047U;
	uint8_t x335 = 17U;
	int16_t x336 = INT16_MIN;
	int32_t t78 = -7;

	t78 = (((x333/x334)%x335)*x336);

	if (t78 != 98304) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x337 = 21687446LL;
	uint32_t x338 = UINT32_MAX;
	static volatile int64_t x339 = 7LL;
	int64_t x340 = INT64_MIN;
	static int64_t t79 = 83081115043160918LL;

	t79 = (((x337/x338)%x339)*x340);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = 3U;
	int64_t x343 = -387727938LL;
	int16_t x344 = INT16_MIN;

	t80 = (((x341/x342)%x343)*x344);

	if (t80 != 1376256LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x345 = 124478518U;
	volatile uint16_t x346 = UINT16_MAX;
	volatile uint64_t x347 = 10840766019LLU;
	uint32_t x348 = 197943U;
	volatile uint64_t t81 = 6554975LLU;

	t81 = (((x345/x346)%x347)*x348);

	if (t81 != 375893757LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = INT8_MIN;
	volatile uint32_t x350 = 30343826U;
	uint32_t x352 = UINT32_MAX;

	t82 = (((x349/x350)%x351)*x352);

	if (t82 != 4294967282U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	int16_t x355 = INT16_MIN;

	t83 = (((x353/x354)%x355)*x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = 6U;
	int16_t x362 = 12;
	uint32_t x363 = UINT32_MAX;
	static volatile uint32_t x364 = 32657513U;
	volatile uint32_t t84 = 154220473U;

	t84 = (((x361/x362)%x363)*x364);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x365 = 3U;
	uint8_t x366 = 43U;
	volatile int8_t x367 = INT8_MIN;
	volatile uint64_t t85 = 3519492494657155LLU;

	t85 = (((x365/x366)%x367)*x368);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = INT64_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t86 = 797143751035649072LLU;

	t86 = (((x369/x370)%x371)*x372);

	if (t86 != 18446696311905288192LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x376 = INT8_MAX;
	int32_t t87 = -9780911;

	t87 = (((x373/x374)%x375)*x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = 2465476U;
	int8_t x378 = -1;
	int32_t x379 = -1;
	int32_t x380 = INT32_MAX;
	uint32_t t88 = 20558420U;

	t88 = (((x377/x378)%x379)*x380);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	uint64_t x382 = 508LLU;
	int16_t x383 = -1;
	static uint16_t x384 = UINT16_MAX;
	uint64_t t89 = 127324864984LLU;

	t89 = (((x381/x382)%x383)*x384);

	if (t89 != 554076143100LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x385 = 756014815161716LL;
	uint8_t x386 = 1U;
	volatile int32_t x388 = -1434433;
	int64_t t90 = -7LL;

	t90 = (((x385/x386)%x387)*x388);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 300873282130002LLU;
	uint8_t x390 = 35U;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = INT16_MIN;
	uint64_t t91 = 2607520068198LLU;

	t91 = (((x389/x390)%x391)*x392);

	if (t91 != 18165057910599974912LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = UINT64_MAX;
	uint64_t x394 = UINT64_MAX;
	volatile uint64_t t92 = 2231213487995LLU;

	t92 = (((x393/x394)%x395)*x396);

	if (t92 != 51LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MAX;
	int16_t x398 = INT16_MIN;
	int16_t x399 = -10960;
	volatile int64_t x400 = 533LL;
	volatile int64_t t93 = 3563LL;

	t93 = (((x397/x398)%x399)*x400);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = -1LL;
	volatile uint64_t x402 = 58152717279864LLU;
	int16_t x403 = 2;
	int16_t x404 = -203;

	t94 = (((x401/x402)%x403)*x404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x406 = INT16_MAX;
	int16_t x407 = 2;
	uint32_t t95 = 7568558U;

	t95 = (((x405/x406)%x407)*x408);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = -20538873820278313LL;
	uint32_t x411 = 225490U;
	uint32_t x412 = 5770U;
	volatile int64_t t96 = 34LL;

	t96 = (((x409/x410)%x411)*x412);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x413 = INT32_MIN;
	int32_t x414 = -1491682;
	int32_t x415 = INT32_MIN;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t97 = 1221948;

	t97 = (((x413/x414)%x415)*x416);

	if (t97 != -184192) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MAX;
	int16_t x418 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	int64_t t98 = 10LL;

	t98 = (((x417/x418)%x419)*x420);

	if (t98 != 16256LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = UINT8_MAX;
	int32_t x423 = INT32_MAX;
	uint32_t x424 = 636U;
	static volatile uint64_t t99 = 6431022033LLU;

	t99 = (((x421/x422)%x423)*x424);

	if (t99 != 32136461172LLU) { NG(); } else { ; }
	
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

