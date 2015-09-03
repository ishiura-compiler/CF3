#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = INT16_MAX;
volatile int32_t t0 = 1;
static int32_t x6 = 51548218;
static int32_t x16 = -1;
uint64_t x30 = UINT64_MAX;
static volatile int16_t x31 = INT16_MIN;
static volatile int32_t t7 = 805;
uint64_t x35 = 11LLU;
int64_t x38 = INT64_MIN;
static volatile int32_t t9 = 38;
int16_t x44 = INT16_MAX;
int8_t x56 = -1;
int32_t t13 = -97773956;
int16_t x58 = INT16_MIN;
int16_t x59 = -15464;
int16_t x62 = -1;
static volatile int8_t x68 = INT8_MIN;
int32_t x73 = -2882;
uint8_t x74 = UINT8_MAX;
uint64_t x75 = 461086973LLU;
volatile uint64_t t18 = 289966736878LLU;
volatile uint32_t x78 = 12U;
int32_t x79 = INT32_MIN;
volatile uint32_t x85 = 145917U;
int8_t x92 = 0;
static int64_t x99 = -1LL;
int64_t x101 = INT64_MIN;
int16_t x103 = 0;
int16_t x108 = INT16_MIN;
int32_t t26 = -164555;
int32_t x111 = INT32_MIN;
static int32_t x115 = -1;
volatile int64_t x118 = -1LL;
uint64_t x120 = 157LLU;
static uint64_t t29 = 253403405054LLU;
int16_t x123 = INT16_MIN;
uint64_t t32 = 470613LLU;
uint64_t x133 = UINT64_MAX;
uint8_t x137 = 12U;
volatile int8_t x150 = INT8_MIN;
int64_t x156 = -1LL;
static uint8_t x167 = 2U;
int32_t t42 = 657;
uint64_t x174 = UINT64_MAX;
int64_t x176 = INT64_MIN;
static int8_t x180 = INT8_MIN;
int8_t x188 = 57;
int32_t x192 = INT32_MAX;
static int64_t x193 = -1LL;
static int16_t x196 = -1940;
uint64_t x197 = 2LLU;
int64_t x198 = -38764LL;
static int64_t x207 = -1LL;
int16_t x218 = INT16_MAX;
int32_t x219 = 16284;
volatile uint8_t x230 = UINT8_MAX;
static volatile int16_t x237 = 6083;
int16_t x239 = -78;
uint32_t t61 = 0U;
int8_t x249 = INT8_MIN;
static int16_t x252 = INT16_MAX;
int32_t t62 = -21531;
int64_t x260 = 0LL;
int64_t t66 = 7070566778211964LL;
int64_t x269 = INT64_MAX;
static uint16_t x271 = 4U;
volatile int32_t t68 = 38344738;
static uint64_t x280 = 11616LLU;
int8_t x281 = INT8_MIN;
static uint16_t x287 = 334U;
static volatile int32_t t71 = -3311;
volatile int64_t x294 = -231LL;
int8_t x296 = -4;
int32_t t73 = 8616;
uint64_t x297 = 1927731554783354LLU;
volatile int32_t x299 = INT32_MIN;
static int32_t t74 = -10;
int16_t x304 = INT16_MAX;
uint8_t x316 = UINT8_MAX;
uint64_t x326 = 1477508446059141767LLU;
int16_t x340 = -3;
volatile uint16_t x354 = 90U;
int64_t x357 = INT64_MAX;
uint64_t t89 = 221281587479LLU;
volatile uint32_t t90 = 30391248U;
static int8_t x367 = -1;
uint8_t x373 = 15U;
uint64_t t94 = 20833LLU;
int8_t x384 = INT8_MIN;
int16_t x388 = INT16_MIN;
static uint16_t x396 = 1936U;


void f0(void) {
	uint16_t x1 = 3U;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;

	t0 = (((x1<x2)&x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 39563LLU;
	int16_t x7 = 1803;
	int16_t x8 = INT16_MAX;
	static int32_t t1 = -25;

	t1 = (((x5<x6)&x7)*x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int32_t x10 = 59218408;
	uint32_t x11 = 33U;
	static volatile uint32_t x12 = 44147501U;
	static volatile uint32_t t2 = 60506U;

	t2 = (((x9<x10)&x11)*x12);

	if (t2 != 44147501U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint8_t x14 = 3U;
	volatile int16_t x15 = -1;
	int32_t t3 = 451994020;

	t3 = (((x13<x14)&x15)*x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint16_t x18 = 6U;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = 41U;
	volatile int32_t t4 = 1821360;

	t4 = (((x17<x18)&x19)*x20);

	if (t4 != 41) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint8_t x22 = 10U;
	uint64_t x23 = UINT64_MAX;
	uint16_t x24 = 180U;
	uint64_t t5 = 625765528393LLU;

	t5 = (((x21<x22)&x23)*x24);

	if (t5 != 180LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -26;
	int8_t x26 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	int32_t x28 = INT32_MIN;
	uint32_t t6 = 0U;

	t6 = (((x25<x26)&x27)*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int8_t x32 = 3;

	t7 = (((x29<x30)&x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2225U;
	int64_t x34 = INT64_MIN;
	int64_t x36 = 251533261LL;
	volatile uint64_t t8 = 42291039576501633LLU;

	t8 = (((x33<x34)&x35)*x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = 271049276996LL;
	int8_t x39 = -54;
	volatile int16_t x40 = INT16_MIN;

	t9 = (((x37<x38)&x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	static int32_t x42 = 93;
	int8_t x43 = INT8_MIN;
	int32_t t10 = 247661829;

	t10 = (((x41<x42)&x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 3;
	int16_t x46 = INT16_MAX;
	static int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (((x45<x46)&x47)*x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 17176631468861974LL;
	uint64_t x50 = UINT64_MAX;
	volatile int8_t x51 = INT8_MAX;
	volatile int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 11672871;

	t12 = (((x49<x50)&x51)*x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static int64_t x54 = INT64_MIN;
	uint16_t x55 = 20619U;

	t13 = (((x53<x54)&x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -13903LL;
	uint16_t x60 = 161U;
	int32_t t14 = 22620213;

	t14 = (((x57<x58)&x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 4052;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = 0;
	uint32_t t15 = 0U;

	t15 = (((x61<x62)&x63)*x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -148870;
	int16_t x66 = 9;
	int8_t x67 = -1;
	int32_t t16 = 0;

	t16 = (((x65<x66)&x67)*x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static uint16_t x70 = 105U;
	static int8_t x71 = -58;
	int64_t x72 = 4493854599LL;
	int64_t t17 = 1251979287284731960LL;

	t17 = (((x69<x70)&x71)*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x76 = UINT32_MAX;

	t18 = (((x73<x74)&x75)*x76);

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 10165263;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -477110;

	t19 = (((x77<x78)&x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1331910702870LL;
	int64_t x82 = -1LL;
	volatile uint8_t x83 = UINT8_MAX;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 0;

	t20 = (((x81<x82)&x83)*x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1LL;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = 5U;
	volatile int64_t t21 = -456000487LL;

	t21 = (((x85<x86)&x87)*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	int32_t t22 = 2743238;

	t22 = (((x89<x90)&x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 73U;
	uint16_t x94 = 145U;
	static uint16_t x95 = 1U;
	int16_t x96 = -1;
	int32_t t23 = 2693472;

	t23 = (((x93<x94)&x95)*x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 17U;
	int8_t x98 = 3;
	int32_t x100 = INT32_MIN;
	static int64_t t24 = 349124744782LL;

	t24 = (((x97<x98)&x99)*x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = -45;
	volatile uint32_t x104 = UINT32_MAX;
	uint32_t t25 = 869832U;

	t25 = (((x101<x102)&x103)*x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	volatile int64_t x106 = -912658941774LL;
	uint8_t x107 = 1U;

	t26 = (((x105<x106)&x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -1;
	static volatile int32_t x110 = 403096;
	static int32_t x112 = -18669850;
	volatile int32_t t27 = 26;

	t27 = (((x109<x110)&x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 51U;
	uint32_t x114 = 378586U;
	int64_t x116 = INT64_MIN;
	int64_t t28 = INT64_MIN;

	t28 = (((x113<x114)&x115)*x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -98;
	int16_t x119 = -1;

	t29 = (((x117<x118)&x119)*x120);

	if (t29 != 157LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 549987502132359999LLU;
	int64_t x122 = INT64_MIN;
	volatile int32_t x124 = INT32_MIN;
	int32_t t30 = -19869433;

	t30 = (((x121<x122)&x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	static uint64_t x126 = 30LLU;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MAX;
	int64_t t31 = 18693677997LL;

	t31 = (((x125<x126)&x127)*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 224U;
	static uint16_t x130 = 1U;
	volatile int64_t x131 = -1751609201984189LL;
	uint64_t x132 = 394125933248LLU;

	t32 = (((x129<x130)&x131)*x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MAX;
	uint32_t x136 = 8293U;
	volatile int64_t t33 = -53297323171LL;

	t33 = (((x133<x134)&x135)*x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = 541U;
	uint32_t t34 = 0U;

	t34 = (((x137<x138)&x139)*x140);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 14564175U;
	int64_t x142 = INT64_MIN;
	static uint32_t x143 = 1370429384U;
	int64_t x144 = INT64_MIN;
	int64_t t35 = -102595833LL;

	t35 = (((x141<x142)&x143)*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	volatile int64_t x146 = -1LL;
	static uint8_t x147 = 8U;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -13;

	t36 = (((x145<x146)&x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = 1;
	volatile int16_t x151 = 1474;
	int32_t x152 = INT32_MAX;
	static int32_t t37 = 6;

	t37 = (((x149<x150)&x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x154 = -1;
	uint32_t x155 = UINT32_MAX;
	volatile int64_t t38 = -34525LL;

	t38 = (((x153<x154)&x155)*x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	static uint32_t x160 = 63U;
	volatile uint32_t t39 = 4U;

	t39 = (((x157<x158)&x159)*x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -52;
	static int64_t x162 = INT64_MIN;
	static int64_t x163 = -15601858LL;
	volatile int16_t x164 = -1;
	int64_t t40 = -4151118639LL;

	t40 = (((x161<x162)&x163)*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	int8_t x166 = -1;
	static int16_t x168 = INT16_MIN;
	static volatile int32_t t41 = 341;

	t41 = (((x165<x166)&x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	volatile int64_t x170 = -222129524525122712LL;
	int8_t x171 = INT8_MIN;
	int8_t x172 = -3;

	t42 = (((x169<x170)&x171)*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 2LLU;
	int32_t x175 = -1;
	static int64_t t43 = INT64_MIN;

	t43 = (((x173<x174)&x175)*x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x177 = 4U;
	static int8_t x178 = -14;
	int32_t x179 = INT32_MIN;
	int32_t t44 = -1;

	t44 = (((x177<x178)&x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = 1097;
	int64_t x182 = 19833339237LL;
	static int64_t x183 = -1LL;
	static int64_t x184 = -1658427251358LL;
	int64_t t45 = -8416315204342529LL;

	t45 = (((x181<x182)&x183)*x184);

	if (t45 != -1658427251358LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile uint16_t x186 = 2U;
	uint32_t x187 = UINT32_MAX;
	volatile uint32_t t46 = 0U;

	t46 = (((x185<x186)&x187)*x188);

	if (t46 != 57U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 100280592;
	int32_t x190 = 13;
	static uint64_t x191 = 281780997412LLU;
	uint64_t t47 = 1962LLU;

	t47 = (((x189<x190)&x191)*x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = 284;
	int8_t x195 = INT8_MAX;
	static volatile int32_t t48 = 111;

	t48 = (((x193<x194)&x195)*x196);

	if (t48 != -1940) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x199 = 1495U;
	volatile int8_t x200 = -2;
	volatile uint32_t t49 = 95U;

	t49 = (((x197<x198)&x199)*x200);

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = 1725;
	static int32_t x203 = -1;
	int64_t x204 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = (((x201<x202)&x203)*x204);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static int8_t x206 = -1;
	volatile uint32_t x208 = 114U;
	volatile int64_t t51 = 3788752604LL;

	t51 = (((x205<x206)&x207)*x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MIN;
	int16_t x210 = -1;
	int64_t x211 = INT64_MAX;
	uint8_t x212 = 23U;
	static int64_t t52 = -7107030675541872LL;

	t52 = (((x209<x210)&x211)*x212);

	if (t52 != 23LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = 37638U;
	static int8_t x215 = -13;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 190;

	t53 = (((x213<x214)&x215)*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	uint32_t x220 = 8003U;
	volatile uint32_t t54 = 359309761U;

	t54 = (((x217<x218)&x219)*x220);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	uint16_t x222 = UINT16_MAX;
	static int8_t x223 = INT8_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 4070LLU;

	t55 = (((x221<x222)&x223)*x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = 29U;
	static int32_t t56 = -7488368;

	t56 = (((x225<x226)&x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -1;
	int32_t x231 = INT32_MAX;
	int32_t x232 = -390582;
	volatile int32_t t57 = 197392;

	t57 = (((x229<x230)&x231)*x232);

	if (t57 != -390582) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	volatile uint16_t x234 = UINT16_MAX;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 228759387642LLU;
	uint64_t t58 = 580LLU;

	t58 = (((x233<x234)&x235)*x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 27533127;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = -8803141;

	t59 = (((x237<x238)&x239)*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -14;

	t60 = (((x241<x242)&x243)*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	int16_t x246 = -7;
	uint32_t x247 = 34590986U;
	static volatile uint8_t x248 = UINT8_MAX;

	t61 = (((x245<x246)&x247)*x248);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -1LL;
	static int16_t x251 = INT16_MIN;

	t62 = (((x249<x250)&x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 2315U;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	int64_t x256 = INT64_MIN;
	static int64_t t63 = -1013070LL;

	t63 = (((x253<x254)&x255)*x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 26U;
	int16_t x258 = -1;
	int16_t x259 = -1;
	volatile int64_t t64 = 6253397594254LL;

	t64 = (((x257<x258)&x259)*x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	static uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MAX;
	uint16_t x264 = 27U;
	volatile int32_t t65 = -151;

	t65 = (((x261<x262)&x263)*x264);

	if (t65 != 27) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 33U;
	uint64_t x266 = UINT64_MAX;
	volatile int64_t x267 = -1LL;
	int8_t x268 = INT8_MAX;

	t66 = (((x265<x266)&x267)*x268);

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MAX;
	volatile int64_t x272 = -4LL;
	int64_t t67 = -829LL;

	t67 = (((x269<x270)&x271)*x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -5;
	volatile int32_t x274 = -1;
	uint16_t x275 = 6U;
	int8_t x276 = INT8_MIN;

	t68 = (((x273<x274)&x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MAX;
	int64_t x278 = INT64_MIN;
	int64_t x279 = -37773671733532711LL;
	volatile uint64_t t69 = 11LLU;

	t69 = (((x277<x278)&x279)*x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;
	static int64_t x284 = -1LL;
	int64_t t70 = -547724015727726LL;

	t70 = (((x281<x282)&x283)*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 1U;
	uint16_t x288 = 3U;

	t71 = (((x285<x286)&x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MAX;
	int16_t x291 = -353;
	int16_t x292 = -1;
	static int32_t t72 = -17559;

	t72 = (((x289<x290)&x291)*x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	int16_t x295 = INT16_MIN;

	t73 = (((x293<x294)&x295)*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	int8_t x300 = -2;

	t74 = (((x297<x298)&x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 8U;
	uint64_t x302 = 826137LLU;
	int8_t x303 = INT8_MAX;
	int32_t t75 = -9;

	t75 = (((x301<x302)&x303)*x304);

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 1;
	uint64_t x306 = 4713107185109250LLU;
	int16_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x305<x306)&x307)*x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MAX;
	int32_t x311 = 1645105;
	volatile int16_t x312 = INT16_MAX;
	volatile int32_t t77 = 3;

	t77 = (((x309<x310)&x311)*x312);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1;
	static uint8_t x315 = 2U;
	volatile int32_t t78 = 0;

	t78 = (((x313<x314)&x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -988817LL;
	int8_t x318 = -1;
	uint32_t x319 = 13U;
	int32_t x320 = -1;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (((x317<x318)&x319)*x320);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 7U;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 8;

	t80 = (((x321<x322)&x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	uint8_t x327 = UINT8_MAX;
	int64_t x328 = -1LL;
	static int64_t t81 = -3162888649689850809LL;

	t81 = (((x325<x326)&x327)*x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 983108737LLU;
	uint8_t x330 = 100U;
	int8_t x331 = -27;
	volatile uint64_t x332 = UINT64_MAX;
	volatile uint64_t t82 = 772623573LLU;

	t82 = (((x329<x330)&x331)*x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MAX;
	volatile int32_t x335 = -1;
	static int16_t x336 = -1;
	int32_t t83 = 1844;

	t83 = (((x333<x334)&x335)*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	static int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	int32_t t84 = -332;

	t84 = (((x337<x338)&x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -2324963167012LL;
	int8_t x342 = INT8_MIN;
	volatile int64_t x343 = INT64_MAX;
	volatile int64_t x344 = -1LL;
	int64_t t85 = 68308734715296883LL;

	t85 = (((x341<x342)&x343)*x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MAX;
	int64_t x346 = -1LL;
	int16_t x347 = -22;
	static int8_t x348 = INT8_MIN;
	int32_t t86 = -498884;

	t86 = (((x345<x346)&x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MAX;
	uint32_t x351 = 613907U;
	volatile int16_t x352 = INT16_MIN;
	uint32_t t87 = 74U;

	t87 = (((x349<x350)&x351)*x352);

	if (t87 != 4294934528U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	static volatile int16_t x355 = 120;
	static uint16_t x356 = UINT16_MAX;
	volatile int32_t t88 = -190162855;

	t88 = (((x353<x354)&x355)*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x358 = INT32_MAX;
	uint64_t x359 = 292187301461400084LLU;
	static uint64_t x360 = 4025LLU;

	t89 = (((x357<x358)&x359)*x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	static int8_t x362 = 7;
	uint32_t x363 = 1422286U;
	int32_t x364 = -985421455;

	t90 = (((x361<x362)&x363)*x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	static volatile uint8_t x366 = 0U;
	static int8_t x368 = INT8_MAX;
	int32_t t91 = 3156378;

	t91 = (((x365<x366)&x367)*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MAX;
	int32_t x371 = -236710;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = 887209784;

	t92 = (((x369<x370)&x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MAX;
	volatile int8_t x375 = 1;
	static uint16_t x376 = 45U;
	volatile int32_t t93 = 620;

	t93 = (((x373<x374)&x375)*x376);

	if (t93 != 45) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	int8_t x378 = 1;
	static uint64_t x379 = 55664931366LLU;
	uint8_t x380 = UINT8_MAX;

	t94 = (((x377<x378)&x379)*x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 6753;
	int8_t x382 = 26;
	int64_t x383 = INT64_MAX;
	static volatile int64_t t95 = -2877415376663546793LL;

	t95 = (((x381<x382)&x383)*x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	uint16_t x386 = 0U;
	int32_t x387 = INT32_MIN;
	static int32_t t96 = 33638;

	t96 = (((x385<x386)&x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x390 = 0U;
	int64_t x391 = INT64_MIN;
	static int8_t x392 = 1;
	int64_t t97 = -124671452286LL;

	t97 = (((x389<x390)&x391)*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int32_t x394 = -13;
	static int16_t x395 = -1;
	volatile int32_t t98 = 336394034;

	t98 = (((x393<x394)&x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = 130;
	uint64_t x399 = 4287707945132765LLU;
	static int8_t x400 = -1;
	uint64_t t99 = 6336738878259LLU;

	t99 = (((x397<x398)&x399)*x400);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

