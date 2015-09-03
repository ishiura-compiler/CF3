#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 288788;
static int32_t x7 = INT32_MIN;
int16_t x12 = INT16_MIN;
static int32_t x13 = -1580237;
uint8_t x14 = 126U;
int32_t t3 = -44521984;
uint32_t x17 = 2431U;
static volatile uint32_t x20 = 36791U;
uint32_t x21 = UINT32_MAX;
static int32_t x23 = INT32_MAX;
uint32_t x24 = 24659U;
volatile uint32_t t5 = 24349667U;
uint16_t x30 = 21499U;
volatile int8_t x32 = 8;
int16_t x38 = INT16_MIN;
uint64_t x41 = 32095314LLU;
int64_t x44 = -223084418306LL;
static volatile int8_t x45 = -2;
static uint32_t x50 = 1522515U;
uint8_t x52 = 36U;
int32_t x57 = 18528060;
static int64_t x58 = INT64_MAX;
static uint8_t x60 = UINT8_MAX;
int16_t x62 = INT16_MIN;
int32_t x67 = 1290;
static volatile int64_t x68 = INT64_MAX;
static int64_t t17 = -17119129381434LL;
int32_t x78 = -1;
int32_t t20 = 14065984;
int16_t x86 = -46;
static int64_t x93 = INT64_MIN;
int64_t x96 = -91549943LL;
uint16_t x100 = 5U;
uint32_t x103 = 44U;
uint64_t x106 = 1373187668LLU;
static int16_t x110 = 117;
int32_t x113 = INT32_MIN;
static uint8_t x115 = 23U;
uint32_t x121 = 461U;
volatile uint32_t t30 = 209U;
int8_t x139 = INT8_MAX;
volatile int16_t x140 = INT16_MIN;
int32_t t34 = -198565;
static uint32_t x145 = 512567U;
int32_t x147 = -1;
int32_t x155 = -979737;
static volatile int32_t t36 = -2028295;
int8_t x158 = -1;
static int64_t t37 = 3507952LL;
int8_t x166 = -1;
int32_t t40 = -1211375;
volatile uint16_t x173 = 7481U;
static uint8_t x175 = 126U;
uint16_t x177 = 10563U;
uint32_t x183 = 2819430U;
static int32_t x184 = -9100097;
uint32_t x188 = UINT32_MAX;
volatile int64_t x196 = -1LL;
int16_t x199 = 12;
static uint32_t x204 = 7833U;
static volatile uint32_t x207 = 27924391U;
static uint64_t t51 = 1065348652939030671LLU;
int8_t x218 = -1;
uint32_t x219 = 124158U;
volatile int16_t x239 = INT16_MAX;
int32_t t57 = -250117;
uint32_t x244 = 1881U;
int8_t x247 = 0;
int8_t x248 = INT8_MIN;
int8_t x259 = INT8_MIN;
volatile int64_t x260 = -1LL;
uint64_t t62 = 135331LLU;
int64_t t63 = -630729823LL;
static int16_t x268 = -469;
static volatile int8_t x280 = -1;
int32_t x284 = -236;
int32_t x286 = -5;
static int8_t x287 = -1;
int32_t t69 = 104;
static int32_t t70 = -66689743;
int16_t x295 = -1;
int8_t x298 = INT8_MAX;
uint64_t x302 = UINT64_MAX;
volatile uint64_t x304 = 80991967478393838LLU;
int64_t t76 = 2029LL;
volatile int8_t x328 = INT8_MIN;
static volatile int32_t x332 = -1;
volatile int32_t t80 = -336999;
static int64_t x333 = INT64_MIN;
volatile uint32_t x334 = 36U;
int32_t x336 = INT32_MAX;
uint64_t t82 = 76077441791LLU;
int32_t x344 = INT32_MAX;
uint64_t x345 = UINT64_MAX;
volatile uint64_t t84 = 6998694LLU;
uint32_t t85 = 795793786U;
int8_t x363 = -1;
int32_t t87 = 6341;
static int64_t x371 = -1LL;
uint64_t x375 = 285285909LLU;
uint16_t x380 = 202U;
int32_t x383 = 2273930;
uint32_t t92 = 11410428U;
uint64_t x396 = 78668249824908428LLU;
uint16_t x398 = UINT16_MAX;
int8_t x399 = INT8_MAX;
static uint32_t x403 = UINT32_MAX;
static volatile uint64_t t98 = 150LLU;
int64_t x411 = INT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint8_t x3 = 4U;
	int16_t x4 = 187;
	int32_t t0 = -3752;

	t0 = (((x1%x2)|x3)+x4);

	if (t0 != -32577) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 997864LLU;
	volatile uint64_t x6 = UINT64_MAX;
	uint32_t x8 = 8225U;
	uint64_t t1 = 4630857582LLU;

	t1 = (((x5%x6)|x7)+x8);

	if (t1 != 18446744071563074057LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	volatile uint16_t x10 = UINT16_MAX;
	static int64_t x11 = INT64_MIN;
	int64_t t2 = 3586380997227LL;

	t2 = (((x9%x10)|x11)+x12);

	if (t2 != -65536LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;

	t3 = (((x13%x14)|x15)+x16);

	if (t3 != -32839) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	uint8_t x19 = 12U;
	volatile uint32_t t4 = 0U;

	t4 = (((x17%x18)|x19)+x20);

	if (t4 != 39222U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;

	t5 = (((x21%x22)|x23)+x24);

	if (t5 != 2147508306U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 161676739U;
	int8_t x26 = INT8_MIN;
	int8_t x27 = 22;
	int16_t x28 = 696;
	volatile uint32_t t6 = 259571741U;

	t6 = (((x25%x26)|x27)+x28);

	if (t6 != 161677455U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int32_t x31 = INT32_MIN;
	static uint64_t t7 = 12054663761448LLU;

	t7 = (((x29%x30)|x31)+x32);

	if (t7 != 18446744071562086487LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -52527219041661731LL;
	volatile int32_t x34 = 1411100;
	int32_t x35 = INT32_MAX;
	uint8_t x36 = 12U;
	volatile int64_t t8 = -11312608016866448LL;

	t8 = (((x33%x34)|x35)+x36);

	if (t8 != 11LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 26U;
	volatile int8_t x39 = -1;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -179620;

	t9 = (((x37%x38)|x39)+x40);

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = -1;
	volatile uint64_t t10 = 16566LLU;

	t10 = (((x41%x42)|x43)+x44);

	if (t10 != 18446743850625133309LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MIN;
	int64_t x48 = -6LL;
	volatile int64_t t11 = -37LL;

	t11 = (((x45%x46)|x47)+x48);

	if (t11 != -8LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 4409U;
	volatile int16_t x51 = INT16_MAX;
	uint32_t t12 = 7251U;

	t12 = (((x49%x50)|x51)+x52);

	if (t12 != 32803U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -2LL;
	volatile int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 254208159527LL;

	t13 = (((x53%x54)|x55)+x56);

	if (t13 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x59 = -45;
	volatile int64_t t14 = 66502712035LL;

	t14 = (((x57%x58)|x59)+x60);

	if (t14 != 254LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static volatile uint8_t x63 = UINT8_MAX;
	int32_t x64 = -158616093;
	int32_t t15 = -60017759;

	t15 = (((x61%x62)|x63)+x64);

	if (t15 != -158616094) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -432831182486790LL;
	int32_t x66 = 259;
	int64_t t16 = 235679243LL;

	t16 = (((x65%x66)|x67)+x68);

	if (t16 != 9223372036854775721LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 13U;
	int64_t x70 = 279116505LL;
	volatile int16_t x71 = -8878;
	int8_t x72 = INT8_MAX;

	t17 = (((x69%x70)|x71)+x72);

	if (t17 != -8738LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MIN;
	int8_t x76 = INT8_MIN;
	uint64_t t18 = 51204972LLU;

	t18 = (((x73%x74)|x75)+x76);

	if (t18 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	uint64_t x79 = 135694704303LLU;
	volatile int32_t x80 = -1;
	uint64_t t19 = 41LLU;

	t19 = (((x77%x78)|x79)+x80);

	if (t19 != 135694704302LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = -3;
	uint16_t x84 = 39U;

	t20 = (((x81%x82)|x83)+x84);

	if (t20 != 36) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int32_t x87 = INT32_MAX;
	uint8_t x88 = 80U;
	uint64_t t21 = 3LLU;

	t21 = (((x85%x86)|x87)+x88);

	if (t21 != 2147483727LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 3867;
	uint32_t x90 = UINT32_MAX;
	static int16_t x91 = INT16_MAX;
	int8_t x92 = -15;
	static uint32_t t22 = 100U;

	t22 = (((x89%x90)|x91)+x92);

	if (t22 != 32752U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x94 = INT16_MIN;
	uint16_t x95 = 5869U;
	static volatile int64_t t23 = -196LL;

	t23 = (((x93%x94)|x95)+x96);

	if (t23 != -91544074LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int16_t x98 = -1;
	volatile uint32_t x99 = 145352243U;
	int64_t t24 = 275839678269LL;

	t24 = (((x97%x98)|x99)+x100);

	if (t24 != 145352248LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 38;
	static uint32_t x102 = 424196U;
	int16_t x104 = -1011;
	uint32_t t25 = 12142303U;

	t25 = (((x101%x102)|x103)+x104);

	if (t25 != 4294966331U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 0U;
	uint8_t x107 = 0U;
	uint8_t x108 = 12U;
	uint64_t t26 = 17LLU;

	t26 = (((x105%x106)|x107)+x108);

	if (t26 != 12LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int8_t x111 = -2;
	uint8_t x112 = 12U;
	volatile int32_t t27 = -151083067;

	t27 = (((x109%x110)|x111)+x112);

	if (t27 != 11) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	volatile int16_t x116 = -1;
	volatile int64_t t28 = 162339072LL;

	t28 = (((x113%x114)|x115)+x116);

	if (t28 != -2147483626LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static volatile int16_t x118 = INT16_MAX;
	uint32_t x119 = 2859395U;
	volatile int32_t x120 = INT32_MIN;
	int64_t t29 = -1LL;

	t29 = (((x117%x118)|x119)+x120);

	if (t29 != -2147483649LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x122 = INT32_MIN;
	int8_t x123 = -1;
	uint8_t x124 = 107U;

	t30 = (((x121%x122)|x123)+x124);

	if (t30 != 106U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MAX;
	static uint16_t x126 = 6U;
	volatile uint8_t x127 = 6U;
	uint64_t x128 = 3LLU;
	uint64_t t31 = 590LLU;

	t31 = (((x125%x126)|x127)+x128);

	if (t31 != 10LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	volatile uint32_t x130 = 27681U;
	int16_t x131 = -91;
	volatile int8_t x132 = 10;
	uint32_t t32 = 1066U;

	t32 = (((x129%x130)|x131)+x132);

	if (t32 != 9U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	volatile int32_t t33 = 1496;

	t33 = (((x137%x138)|x139)+x140);

	if (t33 != -32641) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = 2;
	static uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = -14687;

	t34 = (((x141%x142)|x143)+x144);

	if (t34 != -14813) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = UINT64_MAX;
	volatile int32_t x148 = INT32_MAX;
	uint64_t t35 = 26007555970LLU;

	t35 = (((x145%x146)|x147)+x148);

	if (t35 != 2147483646LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MAX;
	uint8_t x156 = 114U;

	t36 = (((x153%x154)|x155)+x156);

	if (t36 != -979623) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = 38335231677900959LL;
	uint8_t x159 = 12U;
	int64_t x160 = 15129609LL;

	t37 = (((x157%x158)|x159)+x160);

	if (t37 != 15129621LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = 11U;
	volatile int8_t x162 = INT8_MIN;
	uint32_t x163 = 519252U;
	int64_t x164 = INT64_MIN;
	volatile int64_t t38 = 3554LL;

	t38 = (((x161%x162)|x163)+x164);

	if (t38 != -9223372036854256545LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 487U;
	int16_t x167 = -1;
	int32_t x168 = INT32_MAX;
	int32_t t39 = 726858967;

	t39 = (((x165%x166)|x167)+x168);

	if (t39 != 2147483646) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x169 = -5684;
	static uint8_t x170 = 1U;
	volatile int16_t x171 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;

	t40 = (((x169%x170)|x171)+x172);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = INT32_MIN;
	int16_t x176 = INT16_MAX;
	int32_t t41 = -1023360;

	t41 = (((x173%x174)|x175)+x176);

	if (t41 != 40318) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x178 = 84U;
	int16_t x179 = 6067;
	int32_t x180 = INT32_MIN;
	int32_t t42 = 375924;

	t42 = (((x177%x178)|x179)+x180);

	if (t42 != -2147477569) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x181 = INT32_MAX;
	uint8_t x182 = 20U;
	volatile uint32_t t43 = 110U;

	t43 = (((x181%x182)|x183)+x184);

	if (t43 != 4288686630U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	volatile int8_t x186 = INT8_MIN;
	volatile int8_t x187 = INT8_MIN;
	volatile uint32_t t44 = 2358U;

	t44 = (((x185%x186)|x187)+x188);

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 32558705U;
	int8_t x190 = 7;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 27LLU;
	uint64_t t45 = 972LLU;

	t45 = (((x189%x190)|x191)+x192);

	if (t45 != 9223372036854775834LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MAX;
	volatile int16_t x195 = INT16_MAX;
	volatile int64_t t46 = 81281785399177727LL;

	t46 = (((x193%x194)|x195)+x196);

	if (t46 != 32766LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MAX;
	static volatile int16_t x200 = INT16_MAX;
	volatile uint64_t t47 = 226071693189001039LLU;

	t47 = (((x197%x198)|x199)+x200);

	if (t47 != 32780LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	uint32_t t48 = 38048785U;

	t48 = (((x201%x202)|x203)+x204);

	if (t48 != 7832U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	volatile int32_t x206 = -1;
	uint64_t x208 = 8388666840350650LLU;
	static volatile uint64_t t49 = 2659931366786522LLU;

	t49 = (((x205%x206)|x207)+x208);

	if (t49 != 8388666868275041LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 1U;
	volatile int16_t x210 = INT16_MIN;
	static uint64_t x211 = UINT64_MAX;
	static int32_t x212 = INT32_MAX;
	uint64_t t50 = 6417LLU;

	t50 = (((x209%x210)|x211)+x212);

	if (t50 != 2147483646LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 11710LLU;
	int16_t x214 = INT16_MAX;
	volatile int8_t x215 = -1;
	int64_t x216 = INT64_MIN;

	t51 = (((x213%x214)|x215)+x216);

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -1;
	uint32_t x220 = 209U;
	uint32_t t52 = 286U;

	t52 = (((x217%x218)|x219)+x220);

	if (t52 != 124367U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = -34;
	uint64_t x224 = UINT64_MAX;
	uint64_t t53 = 718764439882580LLU;

	t53 = (((x221%x222)|x223)+x224);

	if (t53 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 0U;
	uint64_t x226 = 42LLU;
	static uint64_t x227 = 8729872575LLU;
	int16_t x228 = INT16_MAX;
	volatile uint64_t t54 = 8LLU;

	t54 = (((x225%x226)|x227)+x228);

	if (t54 != 8729905342LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 29U;
	static uint8_t x230 = 3U;
	static int8_t x231 = INT8_MIN;
	int16_t x232 = -8395;
	volatile int32_t t55 = 46312;

	t55 = (((x229%x230)|x231)+x232);

	if (t55 != -8521) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = -135;
	uint64_t x235 = 222LLU;
	int16_t x236 = -1;
	uint64_t t56 = 77491335833LLU;

	t56 = (((x233%x234)|x235)+x236);

	if (t56 != 254LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -1;
	int32_t x238 = INT32_MAX;
	int8_t x240 = 30;

	t57 = (((x237%x238)|x239)+x240);

	if (t57 != 29) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = 1;
	static int16_t x242 = INT16_MIN;
	static int64_t x243 = INT64_MIN;
	int64_t t58 = 272963LL;

	t58 = (((x241%x242)|x243)+x244);

	if (t58 != -9223372036854773926LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = -15;
	int16_t x246 = INT16_MAX;
	int32_t t59 = -54570579;

	t59 = (((x245%x246)|x247)+x248);

	if (t59 != -143) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 0U;
	int32_t x250 = INT32_MIN;
	static int32_t x251 = INT32_MIN;
	int64_t x252 = -127613LL;
	static volatile int64_t t60 = 9658977252234179LL;

	t60 = (((x249%x250)|x251)+x252);

	if (t60 != -2147611261LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x253 = 0U;
	static uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 0U;
	static int16_t x256 = -2;
	volatile uint32_t t61 = 47U;

	t61 = (((x253%x254)|x255)+x256);

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	volatile uint64_t x258 = UINT64_MAX;

	t62 = (((x257%x258)|x259)+x260);

	if (t62 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	int64_t x263 = 1367589LL;
	static int32_t x264 = -1;

	t63 = (((x261%x262)|x263)+x264);

	if (t63 != 1367588LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 8051231994LLU;
	int8_t x267 = INT8_MIN;
	uint64_t t64 = 5606153511950778LLU;

	t64 = (((x265%x266)|x267)+x268);

	if (t64 != 18446744073709551146LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x269 = -1LL;
	volatile int64_t x270 = -11272473892020LL;
	uint32_t x271 = 1840639868U;
	uint16_t x272 = 58U;
	volatile int64_t t65 = 156103148LL;

	t65 = (((x269%x270)|x271)+x272);

	if (t65 != 57LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x273 = 4044090;
	uint64_t x274 = 2111872556864184885LLU;
	int8_t x275 = INT8_MIN;
	static uint32_t x276 = 237505U;
	volatile uint64_t t66 = 14567052899397LLU;

	t66 = (((x273%x274)|x275)+x276);

	if (t66 != 237435LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = 11406808LL;
	static uint32_t x278 = 119544U;
	volatile uint16_t x279 = 18U;
	int64_t t67 = -21810732726632191LL;

	t67 = (((x277%x278)|x279)+x280);

	if (t67 != 50129LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = 18;
	static int64_t x282 = INT64_MIN;
	uint16_t x283 = 1U;
	int64_t t68 = -461378300209LL;

	t68 = (((x281%x282)|x283)+x284);

	if (t68 != -217LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	static volatile int16_t x288 = -1;

	t69 = (((x285%x286)|x287)+x288);

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 115U;
	int32_t x290 = INT32_MIN;
	static int32_t x291 = -1;
	uint16_t x292 = 9U;

	t70 = (((x289%x290)|x291)+x292);

	if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 16;
	static uint8_t x294 = UINT8_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	uint64_t t71 = 12921LLU;

	t71 = (((x293%x294)|x295)+x296);

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 0;
	volatile uint16_t x299 = 1236U;
	uint16_t x300 = 12169U;
	int32_t t72 = 2529;

	t72 = (((x297%x298)|x299)+x300);

	if (t72 != 13405) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = 706;
	static int16_t x303 = INT16_MIN;
	uint64_t t73 = 65396521185489927LLU;

	t73 = (((x301%x302)|x303)+x304);

	if (t73 != 80991967478361776LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = -1;
	int64_t x306 = -1964456986038793LL;
	volatile int32_t x307 = INT32_MIN;
	static int8_t x308 = INT8_MAX;
	volatile int64_t t74 = -126051968013809752LL;

	t74 = (((x305%x306)|x307)+x308);

	if (t74 != 126LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = -1LL;
	int64_t x310 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 3U;
	int64_t t75 = -113993LL;

	t75 = (((x309%x310)|x311)+x312);

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x313 = 113U;
	int16_t x314 = INT16_MIN;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MIN;

	t76 = (((x313%x314)|x315)+x316);

	if (t76 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	static int64_t x319 = -1512200758796627674LL;
	int8_t x320 = INT8_MIN;
	static volatile int64_t t77 = 1439LL;

	t77 = (((x317%x318)|x319)+x320);

	if (t77 != -1512200758796627713LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x321 = 11U;
	int32_t x322 = INT32_MIN;
	static volatile int64_t x323 = -1LL;
	volatile uint16_t x324 = 59U;
	static int64_t t78 = 20302LL;

	t78 = (((x321%x322)|x323)+x324);

	if (t78 != 58LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 0;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	int32_t t79 = 14;

	t79 = (((x325%x326)|x327)+x328);

	if (t79 != 32639) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	uint8_t x331 = 14U;

	t80 = (((x329%x330)|x331)+x332);

	if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x335 = -1;
	volatile int64_t t81 = -3141762192158642726LL;

	t81 = (((x333%x334)|x335)+x336);

	if (t81 != 2147483646LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int8_t x338 = -1;
	int32_t x339 = -2069;
	volatile int64_t x340 = -1LL;

	t82 = (((x337%x338)|x339)+x340);

	if (t82 != 18446744073709549546LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = 33032717191783LL;
	int64_t x342 = INT64_MIN;
	int32_t x343 = -1;
	volatile int64_t t83 = 1851319896993831049LL;

	t83 = (((x341%x342)|x343)+x344);

	if (t83 != 2147483646LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x346 = 1092216239LLU;
	volatile uint8_t x347 = UINT8_MAX;
	int64_t x348 = 0LL;

	t84 = (((x345%x346)|x347)+x348);

	if (t84 != 309507327LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x349 = 36U;
	uint32_t x350 = 11U;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;

	t85 = (((x349%x350)|x351)+x352);

	if (t85 != 2147483523U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = -6448688835112774LL;
	volatile uint16_t x355 = 186U;
	int8_t x356 = INT8_MIN;
	volatile int64_t t86 = -23LL;

	t86 = (((x353%x354)|x355)+x356);

	if (t86 != -32710LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x361 = -14;
	int8_t x362 = INT8_MAX;
	int32_t x364 = -1;

	t87 = (((x361%x362)|x363)+x364);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = 0U;
	int16_t x366 = INT16_MAX;
	uint16_t x367 = 7U;
	volatile int16_t x368 = INT16_MAX;
	volatile uint32_t t88 = 41U;

	t88 = (((x365%x366)|x367)+x368);

	if (t88 != 32774U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MIN;
	int16_t x372 = 1391;
	volatile int64_t t89 = 365467985831LL;

	t89 = (((x369%x370)|x371)+x372);

	if (t89 != 1390LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x373 = -7;
	volatile int8_t x374 = -47;
	int32_t x376 = INT32_MAX;
	volatile uint64_t t90 = 12203225544LLU;

	t90 = (((x373%x374)|x375)+x376);

	if (t90 != 2147483644LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MIN;
	static uint16_t x378 = 5609U;
	int8_t x379 = INT8_MIN;
	int32_t t91 = -6908509;

	t91 = (((x377%x378)|x379)+x380);

	if (t91 != 87) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	uint32_t x384 = 3485420U;

	t92 = (((x381%x382)|x383)+x384);

	if (t92 != 3485302U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int16_t x387 = -301;
	uint16_t x388 = 6U;
	volatile int32_t t93 = -307;

	t93 = (((x385%x386)|x387)+x388);

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = 75148776U;
	int16_t x391 = -1453;
	int16_t x392 = -5146;
	uint32_t t94 = 28U;

	t94 = (((x389%x390)|x391)+x392);

	if (t94 != 4294962149U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = 53125885;
	static uint16_t x394 = 341U;
	volatile uint32_t x395 = UINT32_MAX;
	uint64_t t95 = 174LLU;

	t95 = (((x393%x394)|x395)+x396);

	if (t95 != 78668254119875723LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x397 = INT32_MAX;
	int32_t x400 = -1;
	int32_t t96 = 225634269;

	t96 = (((x397%x398)|x399)+x400);

	if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = INT16_MIN;
	uint16_t x402 = UINT16_MAX;
	uint32_t x404 = 32039U;
	static uint32_t t97 = 37900U;

	t97 = (((x401%x402)|x403)+x404);

	if (t97 != 32038U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = INT64_MIN;
	int64_t x406 = 114467041192LL;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = UINT64_MAX;

	t98 = (((x405%x406)|x407)+x408);

	if (t98 != 18446744073709550791LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x409 = -226LL;
	int32_t x410 = -7591;
	uint16_t x412 = 6876U;
	static volatile int64_t t99 = 0LL;

	t99 = (((x409%x410)|x411)+x412);

	if (t99 != 6875LL) { NG(); } else { ; }
	
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

