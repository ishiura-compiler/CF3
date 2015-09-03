#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MAX;
int32_t x10 = 63116941;
int16_t x20 = INT16_MIN;
int32_t t4 = 534880;
volatile int32_t t5 = -52778888;
static int32_t x27 = INT32_MIN;
int32_t x32 = INT32_MIN;
uint32_t x34 = 61315799U;
static int32_t t8 = 62796;
volatile uint32_t x37 = 139859U;
static volatile int16_t x39 = 233;
int32_t x43 = -38;
static int16_t x50 = INT16_MIN;
static int32_t x54 = INT32_MAX;
int32_t t14 = 587125454;
int8_t x63 = -1;
int32_t t15 = 0;
static uint16_t x69 = UINT16_MAX;
static int8_t x73 = INT8_MIN;
uint8_t x74 = 1U;
static int16_t x77 = -1;
volatile int64_t x86 = INT64_MIN;
volatile uint8_t x92 = UINT8_MAX;
int32_t x94 = INT32_MIN;
static int32_t t23 = -243;
int32_t x105 = INT32_MIN;
static int64_t x113 = INT64_MIN;
int64_t x115 = -108790751LL;
uint32_t x117 = 12212473U;
static int8_t x132 = 1;
int16_t x138 = INT16_MAX;
volatile int32_t t34 = 1;
static volatile int32_t t35 = 19;
int64_t x149 = INT64_MIN;
int32_t t37 = -1;
uint32_t x154 = 5789697U;
int64_t x160 = 139898319LL;
int32_t x161 = INT32_MAX;
int8_t x162 = INT8_MIN;
static volatile uint32_t x169 = 54192651U;
int16_t x174 = -1;
volatile int32_t x178 = INT32_MAX;
int16_t x180 = -1;
volatile int32_t t45 = 0;
uint32_t x185 = 525102071U;
uint16_t x191 = 2U;
static volatile int32_t t47 = 472680;
static int8_t x199 = INT8_MIN;
int32_t x200 = -416175819;
static int16_t x201 = INT16_MIN;
uint32_t x203 = UINT32_MAX;
int8_t x205 = -1;
uint8_t x206 = 3U;
uint8_t x210 = 5U;
int64_t x223 = INT64_MIN;
static int32_t x224 = -7452;
static uint32_t x225 = 1U;
int32_t x228 = 4468122;
int8_t x231 = INT8_MIN;
int8_t x235 = INT8_MAX;
int64_t x249 = -1LL;
uint16_t x253 = 63U;
int32_t x256 = INT32_MIN;
int8_t x265 = INT8_MIN;
int64_t x268 = INT64_MIN;
int32_t t68 = -36247;
static uint32_t x280 = 961487U;
static int64_t x281 = -1LL;
volatile int32_t t70 = -565766075;
int64_t x285 = -1LL;
int32_t x290 = 0;
int8_t x293 = INT8_MAX;
int32_t t74 = 7;
int32_t x304 = INT32_MIN;
static uint64_t x305 = 6022529LLU;
uint16_t x313 = UINT16_MAX;
int64_t x316 = INT64_MIN;
static uint8_t x317 = 1U;
int16_t x326 = 5;
static int64_t x331 = INT64_MAX;
int16_t x334 = INT16_MAX;
static int32_t x337 = -1185;
uint8_t x345 = 15U;
int32_t x346 = -12153;
int32_t t86 = 0;
int16_t x360 = 3267;
int32_t x364 = INT32_MIN;
static uint8_t x366 = 9U;
int32_t x368 = -1;
int32_t x371 = INT32_MAX;
int32_t t92 = 16;
uint16_t x373 = 127U;
int64_t x375 = 1646891383555LL;
uint16_t x377 = UINT16_MAX;
volatile int8_t x379 = 0;
int64_t x382 = -1LL;
uint32_t x388 = 1U;
int32_t t96 = 95998402;
int32_t x391 = 1;
static volatile uint8_t x396 = 52U;
volatile int32_t t99 = 51870377;


void f0(void) {
	volatile uint16_t x1 = 6160U;
	int32_t x2 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 8;

	t0 = (((x1==x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -8;
	uint8_t x6 = 38U;
	int32_t x7 = INT32_MIN;
	uint64_t x8 = 26979LLU;
	int32_t t1 = 12596346;

	t1 = (((x5==x6)+x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -8;
	uint32_t x11 = 54U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 1;

	t2 = (((x9==x10)+x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 3U;
	uint16_t x14 = 2685U;
	uint64_t x15 = 34LLU;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -7841;

	t3 = (((x13==x14)+x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -9;
	int16_t x18 = -1;
	int32_t x19 = INT32_MIN;

	t4 = (((x17==x18)+x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	static uint8_t x23 = 21U;
	uint16_t x24 = UINT16_MAX;

	t5 = (((x21==x22)+x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 2U;
	volatile int32_t x26 = -1;
	int8_t x28 = -2;
	volatile int32_t t6 = 187;

	t6 = (((x25==x26)+x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MAX;
	int32_t x31 = INT32_MAX;
	static volatile int32_t t7 = 3303780;

	t7 = (((x29==x30)+x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 174393431827284538LLU;
	int32_t x35 = INT32_MAX;
	volatile uint16_t x36 = 1U;

	t8 = (((x33==x34)+x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x38 = UINT8_MAX;
	int16_t x40 = 113;
	volatile int32_t t9 = 1;

	t9 = (((x37==x38)+x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = 0;
	volatile int64_t x44 = INT64_MIN;
	int32_t t10 = -77;

	t10 = (((x41==x42)+x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MAX;
	int16_t x48 = -1;
	int32_t t11 = 394890;

	t11 = (((x45==x46)+x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 0U;
	volatile int32_t t12 = -1945;

	t12 = (((x49==x50)+x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -262;
	static int32_t x55 = -45157;
	int8_t x56 = INT8_MAX;
	int32_t t13 = -1648;

	t13 = (((x53==x54)+x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 191U;
	static int64_t x59 = INT64_MIN;
	volatile int16_t x60 = -1453;

	t14 = (((x57==x58)+x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = -1LL;
	int32_t x64 = INT32_MAX;

	t15 = (((x61==x62)+x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	volatile uint16_t x66 = 6981U;
	uint32_t x67 = 12U;
	volatile int32_t x68 = -1;
	int32_t t16 = 14321;

	t16 = (((x65==x66)+x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	int16_t x71 = INT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 1657;

	t17 = (((x69==x70)+x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x75 = 2466969572095945LL;
	int8_t x76 = -22;
	int32_t t18 = 1971671;

	t18 = (((x73==x74)+x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 509579609LLU;
	volatile int64_t x79 = INT64_MIN;
	uint8_t x80 = 9U;
	volatile int32_t t19 = 397;

	t19 = (((x77==x78)+x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 27307LLU;
	static volatile uint32_t x82 = 2081578822U;
	uint64_t x83 = 710185LLU;
	volatile int64_t x84 = -1LL;
	int32_t t20 = 7338;

	t20 = (((x81==x82)+x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -3;
	static int16_t x87 = INT16_MIN;
	volatile int64_t x88 = INT64_MIN;
	int32_t t21 = -51790402;

	t21 = (((x85==x86)+x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -25107589LL;
	int8_t x90 = INT8_MIN;
	static volatile int32_t x91 = -1;
	int32_t t22 = 914415;

	t22 = (((x89==x90)+x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 13U;
	static int32_t x95 = INT32_MAX;
	uint64_t x96 = 308LLU;

	t23 = (((x93==x94)+x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1168U;
	int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MAX;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 3;

	t24 = (((x97==x98)+x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	volatile int8_t x102 = INT8_MAX;
	static int16_t x103 = 1;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -47827301;

	t25 = (((x101==x102)+x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	uint32_t x108 = 0U;
	int32_t t26 = 2603951;

	t26 = (((x105==x106)+x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 13U;
	int8_t x110 = -60;
	static int8_t x111 = INT8_MIN;
	static volatile int16_t x112 = 0;
	int32_t t27 = 14;

	t27 = (((x109==x110)+x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	static int16_t x116 = 3;
	volatile int32_t t28 = -79598;

	t28 = (((x113==x114)+x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x118 = 173634;
	int16_t x119 = -1;
	volatile int16_t x120 = INT16_MAX;
	static volatile int32_t t29 = 4;

	t29 = (((x117==x118)+x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MAX;
	static volatile int16_t x122 = INT16_MAX;
	int8_t x123 = -39;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = -472033;

	t30 = (((x121==x122)+x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -13;
	static volatile int64_t x126 = -1LL;
	int8_t x127 = -9;
	int32_t x128 = -14;
	int32_t t31 = 323745441;

	t31 = (((x125==x126)+x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -15;
	int8_t x130 = -1;
	int32_t x131 = INT32_MAX;
	volatile int32_t t32 = 0;

	t32 = (((x129==x130)+x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	volatile int8_t x135 = -1;
	static int8_t x136 = -1;
	volatile int32_t t33 = -366;

	t33 = (((x133==x134)+x135)==x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -3853170681LL;

	t34 = (((x137==x138)+x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 30889411LLU;
	static int32_t x142 = -218521;
	int16_t x143 = -1;
	int64_t x144 = INT64_MAX;

	t35 = (((x141==x142)+x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -1;
	uint32_t x146 = 2U;
	uint16_t x147 = 430U;
	int64_t x148 = 79098LL;
	static int32_t t36 = -36183;

	t36 = (((x145==x146)+x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x150 = -1;
	int8_t x151 = 2;
	static int32_t x152 = -61642547;

	t37 = (((x149==x150)+x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = UINT8_MAX;
	int64_t x155 = -12837462272357849LL;
	int64_t x156 = INT64_MIN;
	int32_t t38 = -31;

	t38 = (((x153==x154)+x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int16_t x158 = -2588;
	volatile uint64_t x159 = 1563263LLU;
	static int32_t t39 = -745;

	t39 = (((x157==x158)+x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;
	int32_t t40 = -26500;

	t40 = (((x161==x162)+x163)==x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 0;
	static int16_t x166 = INT16_MIN;
	int8_t x167 = 1;
	static int32_t x168 = -58;
	int32_t t41 = -272261;

	t41 = (((x165==x166)+x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = 85U;
	static volatile int8_t x171 = -1;
	static int16_t x172 = 958;
	volatile int32_t t42 = 1137417;

	t42 = (((x169==x170)+x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 58635766;
	static int16_t x175 = INT16_MIN;
	static int32_t x176 = -1;
	static int32_t t43 = -64657;

	t43 = (((x173==x174)+x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint16_t x179 = 1833U;
	static int32_t t44 = -1;

	t44 = (((x177==x178)+x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = UINT32_MAX;
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = UINT64_MAX;
	int64_t x184 = INT64_MAX;

	t45 = (((x181==x182)+x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 882589085U;
	static int64_t x187 = INT64_MAX;
	uint8_t x188 = 9U;
	int32_t t46 = -3766078;

	t46 = (((x185==x186)+x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -607;
	static int8_t x190 = -1;
	int8_t x192 = INT8_MIN;

	t47 = (((x189==x190)+x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MAX;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = -2;
	static volatile int32_t t48 = -1405;

	t48 = (((x193==x194)+x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 3U;
	int64_t x198 = -169LL;
	volatile int32_t t49 = -2336973;

	t49 = (((x197==x198)+x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 7U;
	int16_t x204 = -1;
	volatile int32_t t50 = -6;

	t50 = (((x201==x202)+x203)==x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = -19;
	static uint16_t x208 = 5609U;
	int32_t t51 = -137554642;

	t51 = (((x205==x206)+x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x211 = -1;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 5;

	t52 = (((x209==x210)+x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = -6;
	uint16_t x215 = 800U;
	int64_t x216 = 189351LL;
	volatile int32_t t53 = -58891;

	t53 = (((x213==x214)+x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = 0;
	volatile uint16_t x219 = 2319U;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -81275;

	t54 = (((x217==x218)+x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -10;
	volatile uint64_t x222 = 51712831222672150LLU;
	volatile int32_t t55 = 50;

	t55 = (((x221==x222)+x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	int16_t x227 = -1;
	volatile int32_t t56 = -42;

	t56 = (((x225==x226)+x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = -9206;
	int64_t x232 = -746792LL;
	volatile int32_t t57 = 27623;

	t57 = (((x229==x230)+x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = 67315944161LLU;
	uint16_t x236 = 25U;
	int32_t t58 = 50;

	t58 = (((x233==x234)+x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int64_t x238 = INT64_MIN;
	uint8_t x239 = UINT8_MAX;
	uint16_t x240 = 5926U;
	static int32_t t59 = -28;

	t59 = (((x237==x238)+x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -6596613277124LL;
	volatile int16_t x242 = -1;
	static volatile int64_t x243 = INT64_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = -152231;

	t60 = (((x241==x242)+x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	int8_t x246 = -1;
	int16_t x247 = 932;
	volatile uint64_t x248 = 64521134513LLU;
	volatile int32_t t61 = 1;

	t61 = (((x245==x246)+x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = 1989634;
	int8_t x251 = -1;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 164539521;

	t62 = (((x249==x250)+x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 3249133;
	uint16_t x255 = 1706U;
	int32_t t63 = 57;

	t63 = (((x253==x254)+x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -178683LL;
	int8_t x258 = INT8_MAX;
	uint32_t x259 = 979908402U;
	uint64_t x260 = UINT64_MAX;
	int32_t t64 = 57504439;

	t64 = (((x257==x258)+x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint64_t x262 = 760LLU;
	static int64_t x263 = -1LL;
	int64_t x264 = INT64_MAX;
	static volatile int32_t t65 = -6039420;

	t65 = (((x261==x262)+x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x266 = -1LL;
	volatile int16_t x267 = INT16_MAX;
	volatile int32_t t66 = 10705;

	t66 = (((x265==x266)+x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = -1LL;
	uint32_t x271 = 24165050U;
	volatile int64_t x272 = -1LL;
	static volatile int32_t t67 = 881;

	t67 = (((x269==x270)+x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	static int16_t x274 = INT16_MIN;
	static volatile uint8_t x275 = UINT8_MAX;
	volatile uint64_t x276 = UINT64_MAX;

	t68 = (((x273==x274)+x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	static int64_t x278 = INT64_MIN;
	volatile uint16_t x279 = UINT16_MAX;
	static int32_t t69 = -83209866;

	t69 = (((x277==x278)+x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -1LL;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = 16LL;

	t70 = (((x281==x282)+x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -1933828790LL;
	static uint32_t x287 = 198698491U;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -496;

	t71 = (((x285==x286)+x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 30159881LL;
	int64_t x291 = -1LL;
	volatile int32_t x292 = -1;
	volatile int32_t t72 = -273173;

	t72 = (((x289==x290)+x291)==x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x294 = UINT8_MAX;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = -9075484496LL;
	volatile int32_t t73 = -11;

	t73 = (((x293==x294)+x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MIN;
	int16_t x299 = -2008;
	int16_t x300 = INT16_MAX;

	t74 = (((x297==x298)+x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = INT64_MIN;
	int16_t x303 = -1545;
	static volatile int32_t t75 = -1009831;

	t75 = (((x301==x302)+x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x306 = 1;
	uint32_t x307 = 2695U;
	int64_t x308 = INT64_MIN;
	static int32_t t76 = -67;

	t76 = (((x305==x306)+x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = UINT16_MAX;
	uint8_t x310 = 6U;
	int64_t x311 = INT64_MIN;
	uint32_t x312 = 1316396435U;
	volatile int32_t t77 = 121;

	t77 = (((x309==x310)+x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 13U;
	int8_t x315 = INT8_MIN;
	int32_t t78 = -512653;

	t78 = (((x313==x314)+x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = 20342U;
	int64_t x319 = -22338523LL;
	int8_t x320 = 0;
	static int32_t t79 = 215;

	t79 = (((x317==x318)+x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = -1;
	static uint32_t x322 = 1U;
	uint64_t x323 = 506161220537LLU;
	static uint8_t x324 = 5U;
	int32_t t80 = -3525;

	t80 = (((x321==x322)+x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static int16_t x327 = 6766;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = -341;

	t81 = (((x325==x326)+x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	static int8_t x330 = INT8_MIN;
	static uint32_t x332 = 63U;
	static int32_t t82 = 42387948;

	t82 = (((x329==x330)+x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	uint32_t x335 = 168716U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 15584225;

	t83 = (((x333==x334)+x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x338 = -1;
	int64_t x339 = 52LL;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 2540;

	t84 = (((x337==x338)+x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = -421LL;
	int16_t x343 = -1;
	volatile uint32_t x344 = 143763321U;
	volatile int32_t t85 = 5280;

	t85 = (((x341==x342)+x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x347 = 20503104608LLU;
	volatile uint16_t x348 = 2693U;

	t86 = (((x345==x346)+x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -11615;
	uint32_t x350 = 841980966U;
	volatile int16_t x351 = -1;
	int64_t x352 = INT64_MIN;
	static volatile int32_t t87 = 50;

	t87 = (((x349==x350)+x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	uint8_t x355 = 1U;
	int32_t x356 = INT32_MIN;
	static int32_t t88 = -1;

	t88 = (((x353==x354)+x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 100;
	uint8_t x358 = 3U;
	int16_t x359 = -106;
	static volatile int32_t t89 = -1517;

	t89 = (((x357==x358)+x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -25193767LL;
	static int32_t x362 = INT32_MIN;
	static int32_t x363 = INT32_MIN;
	static int32_t t90 = 637;

	t90 = (((x361==x362)+x363)==x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	static uint8_t x367 = UINT8_MAX;
	static int32_t t91 = 28018823;

	t91 = (((x365==x366)+x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	volatile int16_t x370 = INT16_MAX;
	static uint16_t x372 = UINT16_MAX;

	t92 = (((x369==x370)+x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x374 = -1818465682LL;
	static int64_t x376 = 47654LL;
	volatile int32_t t93 = 1;

	t93 = (((x373==x374)+x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x378 = UINT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	int32_t t94 = -18384;

	t94 = (((x377==x378)+x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = 1749386017797LL;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 157272U;
	volatile int32_t t95 = 13;

	t95 = (((x381==x382)+x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MAX;
	int32_t x387 = 2347706;

	t96 = (((x385==x386)+x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	static int64_t x390 = -225823516910819LL;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 729;

	t97 = (((x389==x390)+x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = -621655194LL;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t98 = 407;

	t98 = (((x393==x394)+x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x398 = 4U;
	static volatile int32_t x399 = -415;
	static volatile int16_t x400 = -145;

	t99 = (((x397==x398)+x399)==x400);

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

