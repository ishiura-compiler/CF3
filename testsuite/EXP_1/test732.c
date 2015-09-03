#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -6;
int16_t x6 = INT16_MIN;
volatile int32_t t2 = 174;
volatile int64_t x22 = INT64_MIN;
static uint32_t x24 = UINT32_MAX;
int8_t x32 = -1;
int8_t x47 = INT8_MIN;
int64_t t10 = -7607LL;
uint16_t x55 = 3040U;
int16_t x58 = INT16_MIN;
int64_t x60 = INT64_MIN;
int16_t x61 = INT16_MIN;
int16_t x76 = INT16_MAX;
static int32_t x88 = INT32_MIN;
uint64_t x89 = 0LLU;
int64_t x90 = INT64_MIN;
static volatile uint64_t x96 = 147306294079LLU;
uint16_t x98 = 5U;
int16_t x102 = INT16_MIN;
static uint64_t x109 = 14LLU;
int64_t x112 = INT64_MAX;
int8_t x118 = INT8_MIN;
volatile int64_t t26 = 2175284001968LL;
uint8_t x131 = 5U;
volatile int64_t t29 = -428080LL;
volatile int16_t x147 = INT16_MAX;
volatile uint64_t t31 = 429466025922LLU;
int8_t x150 = INT8_MIN;
uint8_t x153 = 60U;
uint64_t x155 = 11698012328036933LLU;
int16_t x158 = -1;
uint64_t x169 = 228512440LLU;
int8_t x175 = INT8_MAX;
int32_t x177 = 581;
static int16_t x189 = 4;
int64_t x195 = 4LL;
int64_t x198 = 7348LL;
uint32_t x201 = 240726U;
int32_t x202 = 85753266;
volatile uint64_t t45 = 853LLU;
int64_t x213 = INT64_MIN;
static volatile int64_t x216 = INT64_MIN;
static int64_t t47 = -131LL;
volatile uint32_t x223 = UINT32_MAX;
uint64_t x226 = 1064862908067202LLU;
uint32_t x227 = 933500U;
volatile uint8_t x231 = UINT8_MAX;
uint64_t x237 = 37513821LLU;
static uint16_t x238 = UINT16_MAX;
int32_t x245 = 130;
uint8_t x247 = 20U;
int32_t x256 = 85161;
int8_t x257 = -1;
int32_t x265 = INT32_MIN;
int16_t x271 = -1;
int64_t x274 = -1LL;
static volatile int64_t x275 = -1LL;
static volatile int32_t x276 = 374;
int32_t t63 = 384;
int32_t x294 = -122796873;
volatile int32_t t64 = 608;
static int32_t x301 = 13264456;
volatile uint8_t x304 = 50U;
volatile uint64_t t66 = 3954829403LLU;
static uint32_t x312 = 120007U;
int16_t x316 = INT16_MIN;
int64_t x322 = INT64_MIN;
int64_t x324 = INT64_MIN;
uint16_t x336 = UINT16_MAX;
int32_t t74 = -764;
int32_t x338 = 7087;
volatile int64_t t75 = -120540LL;
uint32_t x343 = 3U;
uint64_t x357 = 651877731362476516LLU;
uint64_t x358 = UINT64_MAX;
uint32_t x361 = 123235U;
int32_t x366 = INT32_MIN;
int16_t x375 = 244;
volatile int16_t x376 = INT16_MAX;
static volatile uint64_t t81 = 6053585LLU;
volatile int8_t x383 = INT8_MIN;
static int64_t x384 = -35LL;
volatile int64_t t83 = 1537760031LL;
uint16_t x385 = 26543U;
int8_t x395 = INT8_MIN;
volatile uint64_t t86 = 1815440534619LLU;
static int32_t x398 = -1;
int8_t x402 = INT8_MIN;
static uint16_t x404 = UINT16_MAX;
static int16_t x405 = INT16_MAX;
int32_t x409 = INT32_MIN;
int16_t x420 = INT16_MIN;
int8_t x424 = -13;
int64_t x428 = INT64_MIN;
uint64_t t94 = 24878108LLU;
volatile int8_t x434 = INT8_MIN;
static int64_t t95 = 112LL;
static int16_t x446 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 95U;
	static volatile int16_t x4 = INT16_MIN;

	t0 = (((x1%x2)%x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x7 = 5;
	uint16_t x8 = UINT16_MAX;
	static volatile int64_t t1 = 915439717LL;

	t1 = (((x5%x6)%x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	int8_t x10 = INT8_MAX;
	static int16_t x11 = -1286;
	uint8_t x12 = UINT8_MAX;

	t2 = (((x9%x10)%x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x23 = 1LLU;
	volatile uint64_t t3 = 2343344LLU;

	t3 = (((x21%x22)%x23)/x24);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	uint32_t x26 = 22118396U;
	int32_t x27 = INT32_MIN;
	static volatile int8_t x28 = INT8_MIN;
	volatile uint64_t t4 = 294221044LLU;

	t4 = (((x25%x26)%x27)/x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MAX;
	uint64_t x30 = 180921343660066676LLU;
	uint32_t x31 = 4909U;
	volatile uint64_t t5 = 644122791754298224LLU;

	t5 = (((x29%x30)%x31)/x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int64_t x34 = -1LL;
	static int32_t x35 = -1;
	volatile uint64_t x36 = 223545536319777602LLU;
	static uint64_t t6 = 330176LLU;

	t6 = (((x33%x34)%x35)/x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = 14369670;
	static uint8_t x40 = 2U;
	uint64_t t7 = 36489135576949937LLU;

	t7 = (((x37%x38)%x39)/x40);

	if (t7 != 5143639LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 1526LL;
	volatile int16_t x42 = -1;
	uint8_t x43 = 38U;
	static volatile uint64_t x44 = UINT64_MAX;
	static uint64_t t8 = 4152133451LLU;

	t8 = (((x41%x42)%x43)/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MIN;
	uint32_t x46 = UINT32_MAX;
	int32_t x48 = -66641;
	volatile uint32_t t9 = 12383865U;

	t9 = (((x45%x46)%x47)/x48);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 5;
	int64_t x50 = INT64_MIN;
	static uint32_t x51 = 5U;
	static int64_t x52 = INT64_MAX;

	t10 = (((x49%x50)%x51)/x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = -1;
	int64_t x54 = 3715885314LL;
	volatile int8_t x56 = INT8_MIN;
	volatile int64_t t11 = -130738LL;

	t11 = (((x53%x54)%x55)/x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 1;
	int16_t x59 = INT16_MIN;
	volatile int64_t t12 = 455245287LL;

	t12 = (((x57%x58)%x59)/x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x62 = 22963611033914LLU;
	int32_t x63 = -4;
	int32_t x64 = -1;
	static uint64_t t13 = 795235665350613LLU;

	t13 = (((x61%x62)%x63)/x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	int16_t x66 = INT16_MIN;
	static uint32_t x67 = 170U;
	uint16_t x68 = 58U;
	static int64_t t14 = 3055LL;

	t14 = (((x65%x66)%x67)/x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 3823U;
	volatile int16_t x74 = 1;
	static int16_t x75 = INT16_MIN;
	volatile int32_t t15 = 451350;

	t15 = (((x73%x74)%x75)/x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	static int16_t x78 = -1;
	static int8_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t16 = 15914659094246LLU;

	t16 = (((x77%x78)%x79)/x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	static int32_t x86 = 12323847;
	volatile int8_t x87 = INT8_MIN;
	volatile int32_t t17 = 419;

	t17 = (((x85%x86)%x87)/x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x91 = INT8_MAX;
	int64_t x92 = -8787164932542LL;
	static volatile uint64_t t18 = 966220035031381LLU;

	t18 = (((x89%x90)%x91)/x92);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x93 = 2U;
	static int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MAX;
	volatile uint64_t t19 = 78282741LLU;

	t19 = (((x93%x94)%x95)/x96);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x99 = UINT32_MAX;
	uint16_t x100 = UINT16_MAX;
	static uint32_t t20 = 505417333U;

	t20 = (((x97%x98)%x99)/x100);

	if (t20 != 65536U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	static int32_t x103 = INT32_MIN;
	static uint32_t x104 = 1720U;
	static int64_t t21 = 1785947307711LL;

	t21 = (((x101%x102)%x103)/x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -3250LL;
	int16_t x106 = -14154;
	int16_t x107 = -241;
	uint32_t x108 = UINT32_MAX;
	int64_t t22 = -11954270535LL;

	t22 = (((x105%x106)%x107)/x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x110 = 9351;
	uint8_t x111 = 10U;
	uint64_t t23 = 1090432420147544455LLU;

	t23 = (((x109%x110)%x111)/x112);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -1;
	volatile uint32_t x114 = 201313U;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	volatile int64_t t24 = 74LL;

	t24 = (((x113%x114)%x115)/x116);

	if (t24 != -1216LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -98450421226LL;
	int16_t x119 = 3;
	static int16_t x120 = INT16_MAX;
	volatile int64_t t25 = -85600LL;

	t25 = (((x117%x118)%x119)/x120);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 26U;
	int16_t x126 = -43;
	int64_t x127 = -5754771357503324LL;
	static int8_t x128 = INT8_MAX;

	t26 = (((x125%x126)%x127)/x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = 200;
	volatile uint32_t x132 = 1195537148U;
	volatile uint32_t t27 = 178U;

	t27 = (((x129%x130)%x131)/x132);

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 3U;
	volatile uint64_t x134 = UINT64_MAX;
	uint32_t x135 = 464239U;
	int8_t x136 = -1;
	uint64_t t28 = 42097380513096955LLU;

	t28 = (((x133%x134)%x135)/x136);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MAX;
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = INT64_MIN;

	t29 = (((x137%x138)%x139)/x140);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 130638419U;
	uint16_t x142 = 416U;
	int16_t x143 = INT16_MAX;
	int8_t x144 = -28;
	volatile uint32_t t30 = 83304U;

	t30 = (((x141%x142)%x143)/x144);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 75U;
	int64_t x146 = INT64_MIN;
	uint64_t x148 = 1640029674390564790LLU;

	t31 = (((x145%x146)%x147)/x148);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = -6;
	static int8_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	int32_t t32 = -198587;

	t32 = (((x149%x150)%x151)/x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x154 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	uint64_t t33 = 31840459943826LLU;

	t33 = (((x153%x154)%x155)/x156);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = -21;
	static int16_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static int32_t t34 = 42;

	t34 = (((x157%x158)%x159)/x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = 112U;
	int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MIN;
	volatile int64_t t35 = -307LL;

	t35 = (((x161%x162)%x163)/x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = INT8_MIN;
	volatile int16_t x167 = INT16_MIN;
	volatile int64_t x168 = 110LL;
	static int64_t t36 = 68696853715639LL;

	t36 = (((x165%x166)%x167)/x168);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x170 = 3U;
	volatile uint16_t x171 = 857U;
	int32_t x172 = INT32_MIN;
	volatile uint64_t t37 = 968794073LLU;

	t37 = (((x169%x170)%x171)/x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	int64_t x174 = INT64_MAX;
	uint8_t x176 = 6U;
	int64_t t38 = -439689813746799LL;

	t38 = (((x173%x174)%x175)/x176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = INT8_MIN;
	static uint64_t x179 = 62LLU;
	int8_t x180 = INT8_MIN;
	static uint64_t t39 = 59312371034LLU;

	t39 = (((x177%x178)%x179)/x180);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -57;
	volatile int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = 57;
	volatile int32_t t40 = 2;

	t40 = (((x181%x182)%x183)/x184);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = 14;
	int32_t x186 = -1;
	int32_t x187 = -1;
	volatile int16_t x188 = -178;
	int32_t t41 = -1;

	t41 = (((x185%x186)%x187)/x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x190 = -1;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 37227U;
	volatile uint32_t t42 = 49046U;

	t42 = (((x189%x190)%x191)/x192);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	int64_t x194 = 517254026236848LL;
	uint32_t x196 = 1303376683U;
	volatile int64_t t43 = 7348213165371LL;

	t43 = (((x193%x194)%x195)/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x197 = 0;
	uint8_t x199 = 17U;
	static int16_t x200 = -1;
	volatile int64_t t44 = 45LL;

	t44 = (((x197%x198)%x199)/x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x203 = 225;
	uint64_t x204 = 160LLU;

	t45 = (((x201%x202)%x203)/x204);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 330985781U;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t46 = 0U;

	t46 = (((x209%x210)%x211)/x212);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MAX;

	t47 = (((x213%x214)%x215)/x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = -7;
	int64_t x224 = -101355613681LL;
	int64_t t48 = -16LL;

	t48 = (((x221%x222)%x223)/x224);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int64_t x228 = INT64_MIN;
	uint64_t t49 = 47915924826LLU;

	t49 = (((x225%x226)%x227)/x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 31340U;
	int32_t x230 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	uint32_t t50 = 143458882U;

	t50 = (((x229%x230)%x231)/x232);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x239 = 688105504U;
	int8_t x240 = INT8_MIN;
	uint64_t t51 = 255163LLU;

	t51 = (((x237%x238)%x239)/x240);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x241 = -3;
	static int16_t x242 = -1;
	static uint32_t x243 = 364465U;
	static uint64_t x244 = UINT64_MAX;
	static uint64_t t52 = 1052052579997041LLU;

	t52 = (((x241%x242)%x243)/x244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x246 = -1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t53 = 180520;

	t53 = (((x245%x246)%x247)/x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MIN;
	static int8_t x250 = 17;
	int8_t x251 = -1;
	int64_t x252 = INT64_MIN;
	int64_t t54 = 828896157LL;

	t54 = (((x249%x250)%x251)/x252);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	volatile int8_t x255 = INT8_MIN;
	int32_t t55 = -200666;

	t55 = (((x253%x254)%x255)/x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x258 = -1;
	static int8_t x259 = INT8_MAX;
	volatile int16_t x260 = INT16_MIN;
	static volatile int32_t t56 = -5481;

	t56 = (((x257%x258)%x259)/x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = 1954;
	int16_t x262 = INT16_MAX;
	volatile uint64_t x263 = 8LLU;
	int32_t x264 = INT32_MIN;
	volatile uint64_t t57 = 3LLU;

	t57 = (((x261%x262)%x263)/x264);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x266 = 9951335;
	uint8_t x267 = 1U;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t58 = 64363486;

	t58 = (((x265%x266)%x267)/x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	uint16_t x272 = 163U;
	static volatile uint64_t t59 = 10LLU;

	t59 = (((x269%x270)%x271)/x272);

	if (t59 != 113170209027988147LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 101U;
	volatile int64_t t60 = 1318LL;

	t60 = (((x273%x274)%x275)/x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 3935U;
	uint64_t x282 = 48508983LLU;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 972U;
	static uint64_t t61 = 1960384048497720950LLU;

	t61 = (((x281%x282)%x283)/x284);

	if (t61 != 4LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -11007138LL;
	uint8_t x286 = 3U;
	volatile int32_t x287 = -1;
	int32_t x288 = INT32_MIN;
	static int64_t t62 = 150581724385LL;

	t62 = (((x285%x286)%x287)/x288);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = -1;
	static int16_t x290 = INT16_MIN;
	static int8_t x291 = INT8_MIN;
	volatile int16_t x292 = 5;

	t63 = (((x289%x290)%x291)/x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x293 = 2;
	int8_t x295 = INT8_MIN;
	static int32_t x296 = 210;

	t64 = (((x293%x294)%x295)/x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x297 = 21563123LLU;
	uint64_t x298 = UINT64_MAX;
	uint32_t x299 = UINT32_MAX;
	uint32_t x300 = 7650U;
	volatile uint64_t t65 = 352LLU;

	t65 = (((x297%x298)%x299)/x300);

	if (t65 != 2818LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x302 = 4553439333LLU;
	static uint16_t x303 = 13368U;

	t66 = (((x301%x302)%x303)/x304);

	if (t66 != 68LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	uint16_t x307 = 225U;
	static uint8_t x308 = UINT8_MAX;
	volatile int32_t t67 = -2159379;

	t67 = (((x305%x306)%x307)/x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x310 = -1;
	int16_t x311 = -280;
	uint32_t t68 = 882388U;

	t68 = (((x309%x310)%x311)/x312);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 3U;
	volatile int32_t t69 = 75544;

	t69 = (((x313%x314)%x315)/x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x317 = -117030584;
	uint32_t x318 = 151363U;
	volatile uint32_t x319 = 13U;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t70 = 84319390U;

	t70 = (((x317%x318)%x319)/x320);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -829;
	int8_t x323 = -1;
	int64_t t71 = 1LL;

	t71 = (((x321%x322)%x323)/x324);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x325 = 126;
	int8_t x326 = 3;
	volatile int16_t x327 = -1;
	uint64_t x328 = 125LLU;
	volatile uint64_t t72 = 453584403702LLU;

	t72 = (((x325%x326)%x327)/x328);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -113;
	volatile int16_t x330 = INT16_MAX;
	volatile int32_t x331 = INT32_MAX;
	int32_t x332 = -1117580;
	int32_t t73 = 254057;

	t73 = (((x329%x330)%x331)/x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = 739U;
	int8_t x334 = -1;
	static volatile int32_t x335 = INT32_MAX;

	t74 = (((x333%x334)%x335)/x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = 6113;
	static uint32_t x339 = UINT32_MAX;
	volatile int64_t x340 = 190791713376468858LL;

	t75 = (((x337%x338)%x339)/x340);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x341 = -2;
	int64_t x342 = -1LL;
	static int8_t x344 = INT8_MIN;
	int64_t t76 = -902LL;

	t76 = (((x341%x342)%x343)/x344);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x345 = UINT64_MAX;
	static volatile int8_t x346 = 5;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = -18689126;
	volatile uint64_t t77 = 435LLU;

	t77 = (((x345%x346)%x347)/x348);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x359 = -2;
	int32_t x360 = INT32_MAX;
	uint64_t t78 = 4236LLU;

	t78 = (((x357%x358)%x359)/x360);

	if (t78 != 303554223LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x362 = 32408U;
	uint8_t x363 = 17U;
	volatile int64_t x364 = INT64_MIN;
	int64_t t79 = 418LL;

	t79 = (((x361%x362)%x363)/x364);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = 94LLU;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = -1;
	volatile uint64_t t80 = 63301LLU;

	t80 = (((x365%x366)%x367)/x368);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 4U;
	uint64_t x374 = 356596596LLU;

	t81 = (((x373%x374)%x375)/x376);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = -1;
	int8_t x378 = -1;
	int32_t x379 = -3396427;
	volatile uint64_t x380 = 55474633431175920LLU;
	uint64_t t82 = 32334661LLU;

	t82 = (((x377%x378)%x379)/x380);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = 5U;
	int64_t x382 = INT64_MAX;

	t83 = (((x381%x382)%x383)/x384);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x386 = 3U;
	static int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	static int64_t t84 = -5475669750010LL;

	t84 = (((x385%x386)%x387)/x388);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = -1;
	uint8_t x390 = 42U;
	int64_t x391 = INT64_MIN;
	int32_t x392 = 170920109;
	volatile int64_t t85 = -522325LL;

	t85 = (((x389%x390)%x391)/x392);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = 16;
	static volatile uint64_t x396 = UINT64_MAX;

	t86 = (((x393%x394)%x395)/x396);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = 5361U;
	int32_t x399 = 4;
	int64_t x400 = -1LL;
	volatile int64_t t87 = 118043287048LL;

	t87 = (((x397%x398)%x399)/x400);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x401 = -1;
	int32_t x403 = -6216;
	static volatile int32_t t88 = -842;

	t88 = (((x401%x402)%x403)/x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x406 = INT16_MIN;
	static uint16_t x407 = UINT16_MAX;
	uint8_t x408 = 74U;
	int32_t t89 = -2490361;

	t89 = (((x405%x406)%x407)/x408);

	if (t89 != 442) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x410 = 48U;
	int8_t x411 = 11;
	static int64_t x412 = INT64_MAX;
	int64_t t90 = -728319LL;

	t90 = (((x409%x410)%x411)/x412);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = -20;
	static int8_t x418 = INT8_MIN;
	volatile int16_t x419 = INT16_MAX;
	int32_t t91 = 879558121;

	t91 = (((x417%x418)%x419)/x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MIN;
	uint8_t x423 = 2U;
	volatile int32_t t92 = -9469;

	t92 = (((x421%x422)%x423)/x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 479114072U;
	static int16_t x427 = INT16_MIN;
	static volatile uint64_t t93 = 201483190786LLU;

	t93 = (((x425%x426)%x427)/x428);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MAX;
	uint64_t x430 = 19153441LLU;
	int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MAX;

	t94 = (((x429%x430)%x431)/x432);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x433 = -3758970LL;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -1;

	t95 = (((x433%x434)%x435)/x436);

	if (t95 != 122LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x437 = 1104;
	int16_t x438 = 1211;
	int64_t x439 = -1LL;
	volatile int32_t x440 = 476511;
	int64_t t96 = 1013956738500596170LL;

	t96 = (((x437%x438)%x439)/x440);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x441 = UINT8_MAX;
	int64_t x442 = INT64_MAX;
	int64_t x443 = INT64_MIN;
	static int16_t x444 = INT16_MIN;
	int64_t t97 = 34269504385LL;

	t97 = (((x441%x442)%x443)/x444);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = INT64_MIN;
	uint8_t x447 = 6U;
	uint16_t x448 = 4450U;
	int64_t t98 = -143654LL;

	t98 = (((x445%x446)%x447)/x448);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = 44596LLU;
	int32_t x450 = INT32_MIN;
	static uint16_t x451 = 3U;
	uint8_t x452 = UINT8_MAX;
	static volatile uint64_t t99 = 1842169978LLU;

	t99 = (((x449%x450)%x451)/x452);

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

