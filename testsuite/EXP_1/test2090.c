#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = INT8_MIN;
int32_t t1 = 36480324;
int64_t x12 = 325686346186608LL;
uint64_t x13 = 3LLU;
int64_t x15 = INT64_MIN;
static int64_t x16 = -1LL;
static int8_t x18 = 14;
int64_t x31 = INT64_MIN;
uint64_t x41 = 1546010503463LLU;
static int16_t x43 = INT16_MAX;
int32_t t11 = -26125055;
int16_t x53 = -801;
static volatile int32_t t13 = -10;
int64_t x63 = 35534913203873875LL;
volatile int32_t t15 = 832058;
int32_t x71 = -442043;
uint32_t x72 = 668125U;
static int32_t t20 = -322;
volatile int16_t x86 = 282;
int64_t x88 = INT64_MIN;
uint64_t x90 = 30LLU;
int8_t x91 = -1;
volatile int8_t x93 = 35;
uint8_t x96 = 2U;
uint32_t x100 = 45U;
static volatile int32_t t25 = 11;
static int32_t t26 = 0;
static uint32_t x111 = UINT32_MAX;
static int16_t x119 = INT16_MIN;
volatile int32_t t29 = 2412323;
volatile int32_t t30 = 379604;
int64_t x126 = INT64_MIN;
volatile int32_t x127 = -1;
uint64_t x130 = 2334LLU;
int64_t x136 = -66097150300440LL;
uint32_t x144 = 4289608U;
uint64_t x146 = 35592296LLU;
static int64_t x148 = INT64_MIN;
int8_t x150 = INT8_MAX;
static volatile int16_t x158 = 1386;
uint16_t x192 = UINT16_MAX;
uint16_t x196 = UINT16_MAX;
uint16_t x197 = 895U;
volatile uint64_t x200 = 179074LLU;
static int64_t x215 = -1LL;
int32_t x218 = 0;
static int32_t x222 = INT32_MIN;
int8_t x223 = -1;
int32_t t55 = 213332904;
int32_t t56 = -22012680;
static int16_t x244 = 14508;
static int32_t t61 = 192439764;
int8_t x256 = INT8_MIN;
uint32_t x260 = 3U;
static int32_t t65 = -1001161;
uint64_t x278 = UINT64_MAX;
volatile int32_t t69 = 106306;
uint64_t x282 = 15762065LLU;
int32_t t70 = -3015175;
uint32_t x285 = 109U;
uint64_t x305 = 2088985912187902466LLU;
uint16_t x308 = UINT16_MAX;
int8_t x312 = INT8_MIN;
uint16_t x321 = UINT16_MAX;
volatile int16_t x324 = 1;
volatile int64_t x329 = INT64_MIN;
int16_t x333 = INT16_MIN;
int8_t x334 = INT8_MIN;
volatile int32_t x336 = -2271646;
int32_t x339 = INT32_MIN;
volatile int32_t t84 = -4141;
volatile int8_t x346 = 30;
uint64_t x353 = UINT64_MAX;
static int32_t x355 = INT32_MAX;
int16_t x356 = 2;
int32_t t88 = 1;
int32_t t89 = 8453696;
int16_t x366 = INT16_MIN;
uint8_t x376 = 25U;
int32_t x379 = INT32_MIN;
int32_t t93 = -8297935;
volatile uint16_t x390 = 10U;
volatile int8_t x391 = -63;
int16_t x396 = INT16_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile int64_t x2 = 52188158483069LL;
	int8_t x3 = -1;
	volatile int32_t t0 = -99774;

	t0 = (((x1^x2)%x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int16_t x7 = -7425;
	int8_t x8 = -7;

	t1 = (((x5^x6)%x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	int32_t x10 = -553;
	static uint16_t x11 = 4070U;
	volatile int32_t t2 = -169;

	t2 = (((x9^x10)%x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = UINT16_MAX;
	static volatile int32_t t3 = -13825;

	t3 = (((x13^x14)%x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 37U;
	volatile int8_t x19 = INT8_MAX;
	volatile uint64_t x20 = 0LLU;
	static int32_t t4 = 1008681;

	t4 = (((x17^x18)%x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t x22 = INT32_MAX;
	int64_t x23 = 13872064865LL;
	int64_t x24 = INT64_MAX;
	int32_t t5 = -6524727;

	t5 = (((x21^x22)%x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	volatile int8_t x26 = INT8_MAX;
	volatile uint8_t x27 = 1U;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 25;

	t6 = (((x25^x26)%x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 40109000876837630LLU;
	int64_t x30 = -1385206231059048124LL;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -359586;

	t7 = (((x29^x30)%x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 905081U;
	static int32_t x34 = -1;
	int64_t x35 = 1007350675264914LL;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -220;

	t8 = (((x33^x34)%x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 424101973188326LLU;
	int64_t x38 = INT64_MAX;
	int16_t x39 = INT16_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -324395475;

	t9 = (((x37^x38)%x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = 45959636LLU;
	volatile int64_t x44 = -516096783708LL;
	volatile int32_t t10 = 28811323;

	t10 = (((x41^x42)%x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static uint8_t x46 = 6U;
	int8_t x47 = 20;
	volatile int8_t x48 = INT8_MAX;

	t11 = (((x45^x46)%x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static uint16_t x50 = UINT16_MAX;
	volatile int16_t x51 = 6931;
	static uint16_t x52 = 2354U;
	int32_t t12 = -3872550;

	t12 = (((x49^x50)%x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	static int32_t x55 = INT32_MIN;
	volatile int64_t x56 = INT64_MIN;

	t13 = (((x53^x54)%x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MIN;
	uint64_t x59 = 219831092971420LLU;
	static int16_t x60 = INT16_MAX;
	static int32_t t14 = 89302501;

	t14 = (((x57^x58)%x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	uint16_t x62 = 31297U;
	static volatile int64_t x64 = -12108398675LL;

	t15 = (((x61^x62)%x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 4U;
	volatile int8_t x66 = INT8_MIN;
	static int16_t x67 = 1;
	static uint16_t x68 = 13U;
	int32_t t16 = 1;

	t16 = (((x65^x66)%x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 18484833;
	int32_t x70 = -52659;
	int32_t t17 = 546752648;

	t17 = (((x69^x70)%x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 27483629674896LLU;
	static int16_t x74 = INT16_MIN;
	volatile int8_t x75 = INT8_MIN;
	int16_t x76 = -836;
	static int32_t t18 = -47181562;

	t18 = (((x73^x74)%x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MAX;
	static int16_t x79 = -1;
	int64_t x80 = INT64_MAX;
	int32_t t19 = 5645;

	t19 = (((x77^x78)%x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static uint8_t x82 = 28U;
	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;

	t20 = (((x81^x82)%x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int16_t x87 = INT16_MIN;
	int32_t t21 = -7503425;

	t21 = (((x85^x86)%x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 88LLU;
	static uint16_t x92 = 5014U;
	volatile int32_t t22 = -17;

	t22 = (((x89^x90)%x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = 373849547380753715LL;
	int32_t x95 = INT32_MAX;
	volatile int32_t t23 = 334625;

	t23 = (((x93^x94)%x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile int64_t x98 = INT64_MAX;
	int16_t x99 = -1;
	static volatile int32_t t24 = -2296;

	t24 = (((x97^x98)%x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -2107899633943LL;
	int64_t x102 = -1LL;
	int16_t x103 = -1;
	uint32_t x104 = 99637U;

	t25 = (((x101^x102)%x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 1U;
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = 1;
	uint32_t x108 = UINT32_MAX;

	t26 = (((x105^x106)%x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 87U;
	volatile int16_t x110 = INT16_MIN;
	static int8_t x112 = -15;
	int32_t t27 = -9;

	t27 = (((x109^x110)%x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -1;
	static int64_t x114 = 884451852371LL;
	int16_t x115 = 1;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 2083;

	t28 = (((x113^x114)%x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = -25;
	volatile int32_t x120 = INT32_MIN;

	t29 = (((x117^x118)%x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	uint16_t x122 = 6406U;
	int8_t x123 = -1;
	int8_t x124 = 15;

	t30 = (((x121^x122)%x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 202U;
	static int8_t x128 = 47;
	volatile int32_t t31 = 412876116;

	t31 = (((x125^x126)%x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	uint8_t x131 = 75U;
	int16_t x132 = -389;
	int32_t t32 = -5;

	t32 = (((x129^x130)%x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	uint8_t x134 = 8U;
	int64_t x135 = -1LL;
	int32_t t33 = -21387082;

	t33 = (((x133^x134)%x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = 243933;
	int16_t x138 = 0;
	int64_t x139 = INT64_MAX;
	static int64_t x140 = INT64_MIN;
	int32_t t34 = -15934781;

	t34 = (((x137^x138)%x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = 106LLU;
	volatile int32_t t35 = -433894;

	t35 = (((x141^x142)%x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	volatile int64_t x147 = -1LL;
	int32_t t36 = 89787;

	t36 = (((x145^x146)%x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 216524386U;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = 8585814986269LL;
	volatile int32_t t37 = -5365;

	t37 = (((x149^x150)%x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 6;
	int64_t x154 = INT64_MAX;
	int32_t x155 = -1;
	int16_t x156 = INT16_MAX;
	static int32_t t38 = 48;

	t38 = (((x153^x154)%x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -101696771;
	uint32_t x159 = 130U;
	uint32_t x160 = 1953011402U;
	int32_t t39 = 3;

	t39 = (((x157^x158)%x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1112U;
	int8_t x162 = -18;
	int64_t x163 = 5847862828LL;
	int8_t x164 = -1;
	volatile int32_t t40 = -75522;

	t40 = (((x161^x162)%x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = 7;
	uint64_t x166 = 1288LLU;
	static int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t41 = -89899495;

	t41 = (((x165^x166)%x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = INT16_MIN;
	volatile int16_t x171 = INT16_MAX;
	uint16_t x172 = 1U;
	static volatile int32_t t42 = -265543;

	t42 = (((x169^x170)%x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int16_t x174 = INT16_MIN;
	volatile int32_t x175 = -301048;
	static volatile int64_t x176 = -173947485085765745LL;
	volatile int32_t t43 = -6735;

	t43 = (((x173^x174)%x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -2772;
	static uint16_t x178 = UINT16_MAX;
	int32_t x179 = INT32_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -118340228;

	t44 = (((x177^x178)%x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x182 = -1;
	uint32_t x183 = 8053U;
	volatile int32_t x184 = -75886461;
	volatile int32_t t45 = 441196699;

	t45 = (((x181^x182)%x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 1U;
	int16_t x186 = 11;
	int32_t x187 = -127740574;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -14624274;

	t46 = (((x185^x186)%x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 0;
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = INT64_MAX;
	int32_t t47 = -4;

	t47 = (((x189^x190)%x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MIN;
	int32_t t48 = -1407;

	t48 = (((x193^x194)%x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MAX;
	int32_t t49 = 1;

	t49 = (((x197^x198)%x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 1;
	uint16_t x202 = 1U;
	static int32_t x203 = INT32_MIN;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = 115495711;

	t50 = (((x201^x202)%x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 1255U;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	static uint64_t x208 = 66118842LLU;
	volatile int32_t t51 = -110;

	t51 = (((x205^x206)%x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = -3335;
	int64_t x211 = 1396LL;
	uint16_t x212 = 196U;
	volatile int32_t t52 = 1;

	t52 = (((x209^x210)%x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int32_t x216 = 5;
	volatile int32_t t53 = 218;

	t53 = (((x213^x214)%x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static volatile int8_t x219 = INT8_MIN;
	volatile uint64_t x220 = 23780LLU;
	static volatile int32_t t54 = -100;

	t54 = (((x217^x218)%x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = INT32_MIN;
	int8_t x224 = INT8_MAX;

	t55 = (((x221^x222)%x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 797498212;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = 5U;
	static volatile int16_t x228 = INT16_MIN;

	t56 = (((x225^x226)%x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	volatile int32_t x230 = -6131837;
	static volatile int32_t x231 = -21;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 1155;

	t57 = (((x229^x230)%x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int64_t x234 = 32350067LL;
	static uint16_t x235 = 3165U;
	volatile uint8_t x236 = 14U;
	volatile int32_t t58 = -1248853;

	t58 = (((x233^x234)%x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 374LLU;
	uint64_t x238 = 503864805878001271LLU;
	uint32_t x239 = UINT32_MAX;
	static int8_t x240 = 6;
	volatile int32_t t59 = -13292;

	t59 = (((x237^x238)%x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -545;
	volatile int64_t x242 = -12875260LL;
	static int32_t x243 = INT32_MIN;
	static volatile int32_t t60 = -10052193;

	t60 = (((x241^x242)%x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint16_t x246 = 205U;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;

	t61 = (((x245^x246)%x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x249 = 29;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 1834U;
	static int64_t x252 = 51832820LL;
	int32_t t62 = -17;

	t62 = (((x249^x250)%x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 233314177964LLU;
	volatile uint64_t x254 = 2123400LLU;
	int64_t x255 = INT64_MAX;
	static int32_t t63 = -24369;

	t63 = (((x253^x254)%x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	uint16_t x258 = UINT16_MAX;
	uint8_t x259 = 4U;
	int32_t t64 = 424518460;

	t64 = (((x257^x258)%x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	static int64_t x262 = INT64_MAX;
	volatile uint16_t x263 = UINT16_MAX;
	int64_t x264 = 31LL;

	t65 = (((x261^x262)%x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 299430004;
	uint64_t x266 = 124094492578717LLU;
	int64_t x267 = INT64_MIN;
	volatile int32_t x268 = -1;
	int32_t t66 = 15474;

	t66 = (((x265^x266)%x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	static int32_t x270 = 189586;
	volatile int64_t x271 = INT64_MIN;
	volatile int32_t x272 = -266286191;
	int32_t t67 = -132621;

	t67 = (((x269^x270)%x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 0U;
	static volatile uint32_t x274 = UINT32_MAX;
	int8_t x275 = -5;
	int16_t x276 = -10936;
	int32_t t68 = 8;

	t68 = (((x273^x274)%x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	static int32_t x279 = INT32_MIN;
	volatile uint64_t x280 = 11809565958075LLU;

	t69 = (((x277^x278)%x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MAX;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 25U;

	t70 = (((x281^x282)%x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = 0;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 10705864580LLU;
	int32_t t71 = 3430860;

	t71 = (((x285^x286)%x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int16_t x290 = -1;
	static uint16_t x291 = UINT16_MAX;
	static int8_t x292 = -1;
	volatile int32_t t72 = 64365;

	t72 = (((x289^x290)%x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	volatile uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MAX;
	int8_t x296 = -11;
	int32_t t73 = -4705;

	t73 = (((x293^x294)%x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = 15U;
	int64_t x299 = -1LL;
	uint16_t x300 = 5U;
	int32_t t74 = 752;

	t74 = (((x297^x298)%x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -140259;
	uint16_t x302 = 3U;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -44801;

	t75 = (((x301^x302)%x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x306 = 45U;
	int8_t x307 = 1;
	int32_t t76 = -1182;

	t76 = (((x305^x306)%x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MAX;
	static int64_t x310 = -3524LL;
	int64_t x311 = -577LL;
	volatile int32_t t77 = -84;

	t77 = (((x309^x310)%x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = 8;
	uint8_t x319 = 1U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t78 = -12;

	t78 = (((x317^x318)%x319)<=x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x322 = -1;
	static uint8_t x323 = 2U;
	int32_t t79 = -769303990;

	t79 = (((x321^x322)%x323)<=x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 58U;
	volatile int8_t x326 = INT8_MIN;
	static int64_t x327 = -1LL;
	static int8_t x328 = -1;
	int32_t t80 = 815658034;

	t80 = (((x325^x326)%x327)<=x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x330 = INT16_MIN;
	int32_t x331 = -1;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t81 = 459664939;

	t81 = (((x329^x330)%x331)<=x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x335 = INT32_MAX;
	int32_t t82 = 198;

	t82 = (((x333^x334)%x335)<=x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x337 = INT32_MIN;
	volatile int64_t x338 = 855395LL;
	int16_t x340 = -1;
	static int32_t t83 = -226526;

	t83 = (((x337^x338)%x339)<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	volatile int16_t x342 = -8012;
	int64_t x343 = -3576330431534532LL;
	int64_t x344 = 12491584245782937LL;

	t84 = (((x341^x342)%x343)<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MIN;
	int64_t x347 = 2LL;
	volatile uint8_t x348 = 2U;
	volatile int32_t t85 = -140676338;

	t85 = (((x345^x346)%x347)<=x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -4966052LL;
	int16_t x350 = -1;
	static uint32_t x351 = 39661U;
	uint8_t x352 = UINT8_MAX;
	static int32_t t86 = 29818487;

	t86 = (((x349^x350)%x351)<=x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x354 = INT16_MIN;
	int32_t t87 = 590487;

	t87 = (((x353^x354)%x355)<=x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x357 = 870009U;
	volatile int16_t x358 = 1027;
	static volatile uint32_t x359 = 226U;
	uint32_t x360 = 22060U;

	t88 = (((x357^x358)%x359)<=x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 120LLU;
	int8_t x362 = INT8_MIN;
	uint64_t x363 = 310744LLU;
	int32_t x364 = INT32_MAX;

	t89 = (((x361^x362)%x363)<=x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = 1U;
	uint32_t x367 = 45234152U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t90 = 217;

	t90 = (((x365^x366)%x367)<=x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x370 = 346U;
	int32_t x371 = -1;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t91 = 465979793;

	t91 = (((x369^x370)%x371)<=x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x373 = 27;
	uint64_t x374 = UINT64_MAX;
	volatile int8_t x375 = INT8_MIN;
	volatile int32_t t92 = 633;

	t92 = (((x373^x374)%x375)<=x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 1105300LLU;
	int32_t x378 = -1;
	volatile int32_t x380 = -1;

	t93 = (((x377^x378)%x379)<=x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x381 = 6U;
	volatile int32_t x382 = -1;
	int64_t x383 = -1LL;
	int64_t x384 = 24828497929947LL;
	static int32_t t94 = 75859;

	t94 = (((x381^x382)%x383)<=x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MIN;
	int64_t x387 = -2975LL;
	int32_t x388 = INT32_MIN;
	volatile int32_t t95 = -2514317;

	t95 = (((x385^x386)%x387)<=x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t96 = -282366848;

	t96 = (((x389^x390)%x391)<=x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x393 = 282U;
	int16_t x394 = -10247;
	uint16_t x395 = 7U;
	static volatile int32_t t97 = 2439;

	t97 = (((x393^x394)%x395)<=x396);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	static int64_t x399 = INT64_MIN;
	int64_t x400 = -1LL;
	int32_t t98 = -56845;

	t98 = (((x397^x398)%x399)<=x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x401 = 76U;
	volatile int16_t x402 = 1314;
	volatile int8_t x403 = INT8_MIN;
	int8_t x404 = 0;
	static int32_t t99 = 27;

	t99 = (((x401^x402)%x403)<=x404);

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

