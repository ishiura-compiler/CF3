#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint32_t x5 = 38U;
uint64_t x18 = 1704LLU;
uint8_t x25 = UINT8_MAX;
int16_t x40 = 38;
volatile int32_t t7 = -41231;
static int16_t x42 = -1;
uint32_t x45 = 476427U;
uint8_t x50 = 29U;
volatile uint64_t x51 = UINT64_MAX;
uint64_t x52 = 2240571522872265312LLU;
static int8_t x56 = INT8_MIN;
int32_t t12 = -1;
volatile int32_t t13 = -9516982;
volatile int32_t t14 = 4357;
static uint16_t x73 = 84U;
uint16_t x89 = 191U;
int8_t x90 = -61;
static int32_t t17 = 3266;
static int32_t x94 = -1;
static int32_t x113 = -1;
int32_t t23 = 327;
volatile uint32_t x121 = UINT32_MAX;
uint32_t x122 = 128881U;
int16_t x123 = -1;
volatile int32_t t24 = 7844;
int16_t x132 = -132;
int32_t x135 = INT32_MAX;
static volatile uint16_t x138 = UINT16_MAX;
uint64_t x142 = 8965017LLU;
volatile int64_t x150 = INT64_MIN;
uint64_t x153 = 8446LLU;
volatile uint64_t x154 = 226971394430825LLU;
uint8_t x163 = UINT8_MAX;
volatile int8_t x166 = INT8_MIN;
volatile uint64_t x169 = 880101260192457LLU;
int32_t x170 = -53351774;
uint64_t x178 = UINT64_MAX;
uint64_t x182 = 1105205558LLU;
static volatile int32_t t43 = 209923369;
int16_t x229 = INT16_MIN;
int32_t x232 = INT32_MIN;
int32_t t45 = -2702989;
static int32_t t46 = -1;
static volatile int8_t x244 = INT8_MAX;
int16_t x248 = INT16_MIN;
volatile uint64_t x254 = UINT64_MAX;
static volatile int32_t t52 = 5359;
int64_t x268 = INT64_MIN;
int32_t x270 = INT32_MAX;
int32_t x274 = INT32_MIN;
volatile int32_t t55 = 979;
static int8_t x301 = INT8_MAX;
int8_t x302 = -14;
uint8_t x304 = UINT8_MAX;
int32_t x305 = INT32_MIN;
int16_t x306 = -396;
int8_t x314 = -1;
int16_t x318 = INT16_MAX;
int8_t x321 = -1;
int16_t x324 = -5;
volatile int32_t t63 = -13013833;
volatile uint16_t x340 = 8U;
int32_t x346 = -1;
volatile int32_t x359 = 401964;
volatile int32_t t70 = -1;
volatile uint16_t x362 = 6455U;
uint64_t x366 = 91974482383481290LLU;
uint16_t x370 = 11158U;
volatile int8_t x372 = INT8_MIN;
static volatile int8_t x380 = -1;
volatile int32_t t75 = 5;
int64_t x393 = 9LL;
int64_t x395 = INT64_MIN;
int32_t t79 = -4472;
volatile int8_t x397 = -63;
int16_t x401 = INT16_MIN;
static uint8_t x402 = 5U;
int8_t x403 = INT8_MAX;
int32_t t81 = 13;
int8_t x408 = INT8_MIN;
static int32_t x411 = 1092;
static uint32_t x423 = UINT32_MAX;
uint16_t x425 = 0U;
int16_t x427 = INT16_MAX;
volatile uint8_t x432 = 1U;
static volatile int32_t t88 = 0;
int8_t x452 = 0;
int32_t t91 = 1052964634;
int32_t t92 = -55214364;
uint64_t x462 = 7553941040LLU;
static volatile int32_t t93 = -592692608;
volatile uint64_t x467 = 1997681LLU;
static int16_t x472 = INT16_MAX;
int32_t x478 = INT32_MIN;
uint64_t x480 = 57LLU;
int32_t t98 = -510;
int64_t x487 = 463388452917652866LL;


void f0(void) {
	volatile int16_t x2 = -1;
	uint16_t x3 = 30619U;
	int64_t x4 = 1LL;
	static int32_t t0 = 887;

	t0 = (((x1-x2)+x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = 3U;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 271742046;

	t1 = (((x5-x6)+x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	volatile uint32_t x19 = 0U;
	int16_t x20 = INT16_MIN;
	int32_t t2 = -804044;

	t2 = (((x17-x18)+x19)<x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 3U;
	uint16_t x22 = 0U;
	static volatile int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	int32_t t3 = -53;

	t3 = (((x21-x22)+x23)<x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x26 = INT8_MIN;
	uint32_t x27 = 1687U;
	uint64_t x28 = 8305128438LLU;
	int32_t t4 = -1;

	t4 = (((x25-x26)+x27)<x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	static int32_t t5 = 34873028;

	t5 = (((x29-x30)+x31)<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	static uint16_t x36 = UINT16_MAX;
	int32_t t6 = -61;

	t6 = (((x33-x34)+x35)<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	uint64_t x38 = 6555082LLU;
	uint64_t x39 = 107713LLU;

	t7 = (((x37-x38)+x39)<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int32_t x43 = 1;
	int64_t x44 = INT64_MIN;
	volatile int32_t t8 = -1593723;

	t8 = (((x41-x42)+x43)<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = 11497;
	uint8_t x47 = 2U;
	static int32_t x48 = -918657453;
	volatile int32_t t9 = -6013695;

	t9 = (((x45-x46)+x47)<x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MAX;
	static int32_t t10 = 1;

	t10 = (((x49-x50)+x51)<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 31061111LLU;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 28U;
	int32_t t11 = 314708376;

	t11 = (((x53-x54)+x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MAX;
	uint16_t x58 = 27576U;
	volatile int32_t x59 = 7;
	volatile uint64_t x60 = 131860513LLU;

	t12 = (((x57-x58)+x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x65 = 35U;
	uint16_t x66 = 3787U;
	static volatile int16_t x67 = INT16_MAX;
	volatile int8_t x68 = -4;

	t13 = (((x65-x66)+x67)<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 224U;
	uint32_t x70 = 16U;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;

	t14 = (((x69-x70)+x71)<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 15736715690028630LLU;
	uint64_t x76 = 216164LLU;
	int32_t t15 = 119521;

	t15 = (((x73-x74)+x75)<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -1;
	int8_t x82 = 38;
	int16_t x83 = INT16_MAX;
	static uint8_t x84 = UINT8_MAX;
	int32_t t16 = -526;

	t16 = (((x81-x82)+x83)<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t17 = (((x89-x90)+x91)<x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	uint64_t x95 = UINT64_MAX;
	uint64_t x96 = 1390865658445697LLU;
	static volatile int32_t t18 = -16;

	t18 = (((x93-x94)+x95)<x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MAX;
	static volatile int16_t x99 = INT16_MIN;
	volatile int16_t x100 = INT16_MAX;
	int32_t t19 = 2992472;

	t19 = (((x97-x98)+x99)<x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -1;
	int32_t x102 = INT32_MAX;
	uint8_t x103 = 1U;
	volatile int64_t x104 = INT64_MIN;
	int32_t t20 = 1063042545;

	t20 = (((x101-x102)+x103)<x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	static int16_t x106 = INT16_MAX;
	int64_t x107 = INT64_MAX;
	int32_t x108 = INT32_MIN;
	int32_t t21 = 30730970;

	t21 = (((x105-x106)+x107)<x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 3;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 85876032U;
	static int32_t x112 = INT32_MIN;
	int32_t t22 = 238344291;

	t22 = (((x109-x110)+x111)<x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = -1;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -14;

	t23 = (((x113-x114)+x115)<x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x124 = 47395552518LLU;

	t24 = (((x121-x122)+x123)<x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 4;
	uint32_t x130 = 267U;
	uint8_t x131 = UINT8_MAX;
	volatile int32_t t25 = 375068601;

	t25 = (((x129-x130)+x131)<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x133 = 103U;
	static int64_t x134 = -1LL;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t26 = -21487;

	t26 = (((x133-x134)+x135)<x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MIN;
	int64_t x139 = 1202964577605879727LL;
	uint32_t x140 = UINT32_MAX;
	int32_t t27 = -134161567;

	t27 = (((x137-x138)+x139)<x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = 1475223750U;
	int32_t t28 = -7623;

	t28 = (((x141-x142)+x143)<x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = 1998;
	uint64_t x146 = UINT64_MAX;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t29 = 217;

	t29 = (((x145-x146)+x147)<x148);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x149 = 17937LLU;
	int64_t x151 = INT64_MIN;
	volatile int16_t x152 = -220;
	static volatile int32_t t30 = 347;

	t30 = (((x149-x150)+x151)<x152);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = INT64_MAX;
	volatile int32_t t31 = -474;

	t31 = (((x153-x154)+x155)<x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = -6833;
	uint32_t x162 = 380U;
	uint32_t x164 = 11888U;
	int32_t t32 = -28689699;

	t32 = (((x161-x162)+x163)<x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x165 = INT8_MIN;
	volatile int16_t x167 = -485;
	uint16_t x168 = 8006U;
	volatile int32_t t33 = 1252802;

	t33 = (((x165-x166)+x167)<x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x171 = UINT32_MAX;
	uint8_t x172 = 0U;
	int32_t t34 = 1840112;

	t34 = (((x169-x170)+x171)<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int8_t x179 = INT8_MAX;
	static volatile int32_t x180 = INT32_MIN;
	volatile int32_t t35 = 101981328;

	t35 = (((x177-x178)+x179)<x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MAX;
	static uint64_t x183 = 79215608272LLU;
	int32_t x184 = -1;
	int32_t t36 = -115;

	t36 = (((x181-x182)+x183)<x184);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MAX;
	static volatile uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 1896U;
	volatile int32_t t37 = 1;

	t37 = (((x185-x186)+x187)<x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x189 = -101;
	int64_t x190 = -63995137230843696LL;
	volatile int8_t x191 = INT8_MIN;
	static volatile int16_t x192 = 627;
	volatile int32_t t38 = 166357402;

	t38 = (((x189-x190)+x191)<x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = 1561;
	int64_t x194 = 27381733072823194LL;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = -146;
	int32_t t39 = 744494;

	t39 = (((x193-x194)+x195)<x196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = 13U;
	static int8_t x198 = INT8_MIN;
	volatile int32_t x199 = 1;
	int16_t x200 = -1;
	volatile int32_t t40 = 468479008;

	t40 = (((x197-x198)+x199)<x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x201 = -1LL;
	int32_t x202 = 745473;
	static int32_t x203 = INT32_MAX;
	volatile int16_t x204 = INT16_MAX;
	static volatile int32_t t41 = 27539217;

	t41 = (((x201-x202)+x203)<x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = 227;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MAX;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int32_t t42 = -5535327;

	t42 = (((x209-x210)+x211)<x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x213 = UINT32_MAX;
	volatile uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MIN;
	volatile int64_t x216 = INT64_MAX;

	t43 = (((x213-x214)+x215)<x216);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = -1;
	int8_t x218 = -45;
	static int16_t x219 = 10;
	uint32_t x220 = 265U;
	static int32_t t44 = 16905760;

	t44 = (((x217-x218)+x219)<x220);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x230 = -1838;
	int64_t x231 = -3LL;

	t45 = (((x229-x230)+x231)<x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x233 = 5498LLU;
	int32_t x234 = -1;
	volatile int32_t x235 = INT32_MIN;
	int32_t x236 = 687901;

	t46 = (((x233-x234)+x235)<x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MIN;
	volatile int32_t x238 = INT32_MIN;
	static volatile int8_t x239 = 1;
	int8_t x240 = INT8_MIN;
	int32_t t47 = -82800;

	t47 = (((x237-x238)+x239)<x240);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x241 = 1832634U;
	volatile uint8_t x242 = 0U;
	volatile int16_t x243 = INT16_MIN;
	int32_t t48 = -5713120;

	t48 = (((x241-x242)+x243)<x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = -948701;
	volatile int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MAX;
	int32_t t49 = -253420;

	t49 = (((x245-x246)+x247)<x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x253 = 487U;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = -1LL;
	volatile int32_t t50 = 8150319;

	t50 = (((x253-x254)+x255)<x256);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	int64_t x260 = INT64_MIN;
	int32_t t51 = 92785;

	t51 = (((x257-x258)+x259)<x260);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	int16_t x263 = -1;
	int16_t x264 = INT16_MIN;

	t52 = (((x261-x262)+x263)<x264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x265 = 506U;
	uint64_t x266 = 209LLU;
	int32_t x267 = INT32_MIN;
	int32_t t53 = -535019590;

	t53 = (((x265-x266)+x267)<x268);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = UINT32_MAX;
	int64_t x271 = -7884LL;
	static volatile uint64_t x272 = 510409081802LLU;
	int32_t t54 = -4;

	t54 = (((x269-x270)+x271)<x272);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x273 = INT8_MIN;
	static int8_t x275 = INT8_MIN;
	static int8_t x276 = -14;

	t55 = (((x273-x274)+x275)<x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = -1;
	volatile uint32_t x287 = 210728U;
	volatile uint16_t x288 = UINT16_MAX;
	int32_t t56 = -5166016;

	t56 = (((x285-x286)+x287)<x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x289 = 28LLU;
	int64_t x290 = 8397568009LL;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = INT64_MAX;
	int32_t t57 = -2866258;

	t57 = (((x289-x290)+x291)<x292);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x297 = 454312U;
	int32_t x298 = -1775301;
	int32_t x299 = INT32_MAX;
	int32_t x300 = -253658369;
	volatile int32_t t58 = 59466;

	t58 = (((x297-x298)+x299)<x300);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x303 = 70U;
	volatile int32_t t59 = 339;

	t59 = (((x301-x302)+x303)<x304);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x307 = 29822928404488LLU;
	int16_t x308 = INT16_MAX;
	volatile int32_t t60 = -686018532;

	t60 = (((x305-x306)+x307)<x308);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x313 = UINT32_MAX;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = -1;
	volatile int32_t t61 = -189;

	t61 = (((x313-x314)+x315)<x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x317 = -1LL;
	static int32_t x319 = INT32_MIN;
	static volatile int16_t x320 = INT16_MIN;
	int32_t t62 = -713;

	t62 = (((x317-x318)+x319)<x320);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x322 = INT8_MIN;
	int8_t x323 = -1;

	t63 = (((x321-x322)+x323)<x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x325 = INT64_MAX;
	volatile uint8_t x326 = 3U;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = UINT64_MAX;
	int32_t t64 = -4;

	t64 = (((x325-x326)+x327)<x328);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MAX;
	static uint8_t x331 = 36U;
	static uint64_t x332 = 353744622879LLU;
	int32_t t65 = -40;

	t65 = (((x329-x330)+x331)<x332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x333 = 76U;
	uint8_t x334 = 6U;
	volatile uint32_t x335 = 455U;
	static int64_t x336 = -28765585LL;
	volatile int32_t t66 = -42;

	t66 = (((x333-x334)+x335)<x336);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = -1LL;
	static int32_t x338 = INT32_MIN;
	uint64_t x339 = 64837259608LLU;
	volatile int32_t t67 = 324875;

	t67 = (((x337-x338)+x339)<x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = INT64_MIN;
	int8_t x347 = -1;
	volatile int32_t x348 = INT32_MIN;
	int32_t t68 = 95800;

	t68 = (((x345-x346)+x347)<x348);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = 48U;
	uint8_t x354 = 3U;
	uint64_t x355 = 3978372069037650LLU;
	volatile uint16_t x356 = UINT16_MAX;
	static volatile int32_t t69 = 5501;

	t69 = (((x353-x354)+x355)<x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = 21;
	uint64_t x358 = UINT64_MAX;
	int16_t x360 = -246;

	t70 = (((x357-x358)+x359)<x360);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x361 = UINT16_MAX;
	volatile int32_t x363 = -118258;
	static volatile int32_t x364 = INT32_MIN;
	int32_t t71 = 1;

	t71 = (((x361-x362)+x363)<x364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = -1;
	uint8_t x367 = 0U;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t72 = 661;

	t72 = (((x365-x366)+x367)<x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x369 = 309LLU;
	int64_t x371 = 512533453012LL;
	int32_t t73 = 0;

	t73 = (((x369-x370)+x371)<x372);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = -1;
	int32_t x374 = 5838452;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	int32_t t74 = -2863;

	t74 = (((x373-x374)+x375)<x376);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x378 = INT32_MIN;
	int8_t x379 = -1;

	t75 = (((x377-x378)+x379)<x380);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x381 = 108180LLU;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = -1;
	static uint64_t x384 = 257182LLU;
	volatile int32_t t76 = 5;

	t76 = (((x381-x382)+x383)<x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x387 = 0;
	uint8_t x388 = 0U;
	volatile int32_t t77 = 3;

	t77 = (((x385-x386)+x387)<x388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x389 = -1;
	int64_t x390 = INT64_MAX;
	static int16_t x391 = INT16_MAX;
	uint8_t x392 = 3U;
	int32_t t78 = 32337;

	t78 = (((x389-x390)+x391)<x392);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x394 = -1;
	uint8_t x396 = UINT8_MAX;

	t79 = (((x393-x394)+x395)<x396);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x398 = 7LL;
	static int16_t x399 = INT16_MIN;
	static volatile int16_t x400 = 3188;
	static int32_t t80 = 1;

	t80 = (((x397-x398)+x399)<x400);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x404 = 10859633U;

	t81 = (((x401-x402)+x403)<x404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x405 = -1;
	static int32_t x406 = INT32_MIN;
	static int8_t x407 = INT8_MIN;
	volatile int32_t t82 = -1;

	t82 = (((x405-x406)+x407)<x408);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x409 = UINT32_MAX;
	volatile int16_t x410 = INT16_MIN;
	int8_t x412 = -1;
	int32_t t83 = 17549041;

	t83 = (((x409-x410)+x411)<x412);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = UINT64_MAX;
	static int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t84 = 291;

	t84 = (((x413-x414)+x415)<x416);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x421 = INT16_MIN;
	static uint32_t x422 = UINT32_MAX;
	uint8_t x424 = 2U;
	volatile int32_t t85 = -292;

	t85 = (((x421-x422)+x423)<x424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x426 = -32999014045965LL;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t86 = -344050;

	t86 = (((x425-x426)+x427)<x428);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x429 = 24779;
	volatile int16_t x430 = -5;
	volatile int32_t x431 = INT32_MIN;
	int32_t t87 = -4597;

	t87 = (((x429-x430)+x431)<x432);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x433 = INT16_MIN;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = 1;

	t88 = (((x433-x434)+x435)<x436);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MAX;
	uint64_t x438 = UINT64_MAX;
	int16_t x439 = -28;
	static uint64_t x440 = 228LLU;
	int32_t t89 = 1;

	t89 = (((x437-x438)+x439)<x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x441 = 1U;
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = INT32_MAX;
	static uint32_t x444 = 5462714U;
	volatile int32_t t90 = -1;

	t90 = (((x441-x442)+x443)<x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x449 = 1U;
	static int16_t x450 = INT16_MAX;
	volatile int8_t x451 = -1;

	t91 = (((x449-x450)+x451)<x452);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x457 = INT8_MIN;
	int32_t x458 = -1;
	uint32_t x459 = 620U;
	volatile int32_t x460 = INT32_MIN;

	t92 = (((x457-x458)+x459)<x460);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x461 = 29292180LLU;
	int64_t x463 = 6275833624LL;
	int8_t x464 = -1;

	t93 = (((x461-x462)+x463)<x464);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x465 = 3U;
	static volatile uint64_t x466 = 2160707181253322LLU;
	int64_t x468 = -1LL;
	int32_t t94 = 3;

	t94 = (((x465-x466)+x467)<x468);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x469 = INT64_MAX;
	uint32_t x470 = 121772U;
	int64_t x471 = INT64_MIN;
	volatile int32_t t95 = 1;

	t95 = (((x469-x470)+x471)<x472);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x473 = UINT64_MAX;
	static int32_t x474 = 439602900;
	static int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t96 = 254807905;

	t96 = (((x473-x474)+x475)<x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x477 = UINT32_MAX;
	int64_t x479 = INT64_MIN;
	volatile int32_t t97 = -1;

	t97 = (((x477-x478)+x479)<x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x481 = -1LL;
	uint32_t x482 = 227098U;
	static int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MIN;

	t98 = (((x481-x482)+x483)<x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = 3U;
	uint16_t x486 = UINT16_MAX;
	int8_t x488 = INT8_MIN;
	volatile int32_t t99 = 9787;

	t99 = (((x485-x486)+x487)<x488);

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

