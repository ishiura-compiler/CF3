#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
static uint32_t x11 = 4U;
static int8_t x13 = INT8_MIN;
uint64_t x15 = 256307827LLU;
uint64_t x29 = 13820102835LLU;
static int8_t x33 = 1;
int32_t x34 = INT32_MIN;
int16_t x49 = INT16_MIN;
static int8_t x57 = -1;
int8_t x64 = -1;
int32_t x69 = 6;
uint64_t t19 = 1147976803274085LLU;
static int8_t x89 = INT8_MIN;
int32_t x90 = -828868;
int64_t x94 = -1LL;
int64_t t22 = -816950929208374558LL;
int16_t x104 = 19;
int32_t x127 = INT32_MIN;
int16_t x131 = -1;
volatile int16_t x132 = -1;
volatile int32_t x145 = INT32_MIN;
uint8_t x147 = 3U;
static int64_t x155 = -1LL;
int16_t x173 = 3;
volatile int32_t t41 = -417873717;
uint8_t x188 = 3U;
int8_t x192 = -32;
static volatile uint8_t x195 = 16U;
int32_t x200 = INT32_MAX;
static volatile int32_t t47 = -2857;
volatile int32_t x208 = 6732067;
int8_t x209 = -1;
uint16_t x210 = 1U;
volatile uint64_t x211 = 3554692444024239033LLU;
uint64_t t49 = 3238205130017697807LLU;
static int16_t x214 = INT16_MAX;
volatile uint64_t t50 = 97LLU;
uint16_t x217 = UINT16_MAX;
int8_t x225 = INT8_MIN;
static uint8_t x227 = 11U;
int16_t x237 = INT16_MAX;
uint32_t x240 = 22U;
uint32_t x244 = 3U;
uint64_t x272 = 439LLU;
int32_t x277 = INT32_MAX;
int32_t x282 = INT32_MIN;
static int8_t x283 = INT8_MIN;
volatile int32_t t65 = 20790606;
int16_t x285 = -1;
uint16_t x288 = 668U;
int64_t t66 = -1975560LL;
uint16_t x289 = UINT16_MAX;
int64_t x290 = -10LL;
int32_t x292 = -1;
uint16_t x297 = UINT16_MAX;
int64_t x298 = -3795476030213485800LL;
int32_t x303 = INT32_MIN;
uint64_t t69 = 6756LLU;
volatile uint64_t t71 = 55006736072LLU;
int8_t x317 = INT8_MIN;
static volatile uint32_t x318 = 269U;
uint64_t x319 = 912480LLU;
int64_t x328 = 225LL;
int64_t x329 = INT64_MIN;
uint16_t x332 = 12U;
volatile int64_t t76 = 71LL;
volatile int64_t t77 = -303154477429059471LL;
int8_t x347 = 25;
uint16_t x360 = 780U;
uint32_t t82 = 309895U;
static uint16_t x362 = 17U;
uint64_t x365 = 15242025252464LLU;
static int8_t x368 = INT8_MIN;
volatile int64_t t85 = -1782291074LL;
int64_t x373 = -247LL;
int64_t x384 = -1LL;
int64_t t88 = 120516574847938LL;
static volatile int16_t x386 = INT16_MIN;
static int16_t x392 = INT16_MAX;
int16_t x407 = 0;
static int64_t x410 = 34196990867657LL;
uint64_t t95 = 23814837LLU;
uint32_t x419 = UINT32_MAX;
int16_t x420 = INT16_MIN;
static volatile uint16_t x424 = UINT16_MAX;
int8_t x429 = INT8_MIN;
uint64_t x432 = 3855868034236620LLU;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	volatile uint16_t x2 = 41U;
	static int16_t x3 = -1;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 3746;

	t0 = (((x1%x2)*x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x7 = 1;
	int8_t x8 = -1;
	int32_t t1 = -3;

	t1 = (((x5%x6)*x7)/x8);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 32U;
	int64_t x10 = INT64_MIN;
	volatile int32_t x12 = INT32_MIN;
	int64_t t2 = -25841422230LL;

	t2 = (((x9%x10)*x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = 64LL;
	int32_t x16 = INT32_MIN;
	uint64_t t3 = 108602552524LLU;

	t3 = (((x13%x14)*x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 480U;
	static int64_t x18 = -1LL;
	int64_t x19 = 23LL;
	uint64_t x20 = 372647572660LLU;
	uint64_t t4 = 3230508647826LLU;

	t4 = (((x17%x18)*x19)/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = 1;
	int8_t x22 = INT8_MIN;
	static volatile uint8_t x23 = UINT8_MAX;
	int32_t x24 = -64971;
	int32_t t5 = -160653;

	t5 = (((x21%x22)*x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = INT32_MIN;
	int32_t x27 = -1;
	volatile int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = -61173;

	t6 = (((x25%x26)*x27)/x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = INT64_MIN;
	volatile int32_t x31 = -1342276;
	int8_t x32 = -41;
	static volatile uint64_t t7 = 52803867406525740LLU;

	t7 = (((x29%x30)*x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x35 = 32U;
	int8_t x36 = -61;
	static volatile uint32_t t8 = 5184U;

	t8 = (((x33%x34)*x35)/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 10623199957249444LL;
	int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MAX;
	int64_t x40 = -16LL;
	volatile int64_t t9 = 760097LL;

	t9 = (((x37%x38)*x39)/x40);

	if (t9 != -278839915897338149LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = -994;
	volatile uint64_t x47 = 91LLU;
	int32_t x48 = INT32_MAX;
	uint64_t t10 = 14309106549LLU;

	t10 = (((x45%x46)*x47)/x48);

	if (t10 != 8589934595LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = -4;
	int64_t x51 = 2339078086383LL;
	static uint16_t x52 = UINT16_MAX;
	int64_t t11 = -55834789LL;

	t11 = (((x49%x50)*x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = UINT32_MAX;
	int64_t t12 = -50864019362239932LL;

	t12 = (((x53%x54)*x55)/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x58 = 61U;
	static volatile int64_t x59 = -1LL;
	int8_t x60 = -3;
	volatile int64_t t13 = -266894193790LL;

	t13 = (((x57%x58)*x59)/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = 242;
	int16_t x62 = -3;
	int32_t x63 = 2308;
	static volatile int32_t t14 = 306;

	t14 = (((x61%x62)*x63)/x64);

	if (t14 != -4616) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 364865LLU;
	volatile int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MAX;
	static int8_t x68 = INT8_MIN;
	uint64_t t15 = 7322738663LLU;

	t15 = (((x65%x66)*x67)/x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	volatile int8_t x71 = -2;
	volatile int64_t x72 = INT64_MIN;
	static int64_t t16 = -29148LL;

	t16 = (((x69%x70)*x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 33U;
	int16_t x74 = -4648;
	volatile int16_t x75 = 26;
	int8_t x76 = -1;
	int32_t t17 = 181193;

	t17 = (((x73%x74)*x75)/x76);

	if (t17 != -858) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 34U;
	int32_t x78 = 26;
	int32_t x79 = INT32_MAX;
	volatile int64_t x80 = INT64_MAX;
	int64_t t18 = 0LL;

	t18 = (((x77%x78)*x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = 1;
	static uint32_t x83 = UINT32_MAX;
	static int64_t x84 = -1LL;

	t19 = (((x81%x82)*x83)/x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 1240350U;
	uint32_t x86 = 88126U;
	uint8_t x87 = 46U;
	int64_t x88 = INT64_MAX;
	volatile int64_t t20 = -486277147147LL;

	t20 = (((x85%x86)*x87)/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x91 = INT16_MAX;
	uint64_t x92 = 14842502LLU;
	uint64_t t21 = 1651LLU;

	t21 = (((x89%x90)*x91)/x92);

	if (t21 != 1242832513932LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 3792U;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;

	t22 = (((x93%x94)*x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -7805;
	int64_t x98 = -533891LL;
	volatile uint8_t x99 = 99U;
	int8_t x100 = 2;
	volatile int64_t t23 = -215422096884301LL;

	t23 = (((x97%x98)*x99)/x100);

	if (t23 != -386347LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = 1289U;
	static int16_t x102 = 17;
	static uint32_t x103 = 3U;
	uint32_t t24 = 6127U;

	t24 = (((x101%x102)*x103)/x104);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MAX;
	int16_t x107 = -1;
	uint16_t x108 = 7680U;
	static int64_t t25 = -245710988LL;

	t25 = (((x105%x106)*x107)/x108);

	if (t25 != 279620LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 15109615U;
	static int64_t x110 = INT64_MAX;
	volatile uint64_t x111 = 22781586985371LLU;
	static int16_t x112 = INT16_MIN;
	uint64_t t26 = 79812756903399553LLU;

	t26 = (((x109%x110)*x111)/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 167U;
	uint32_t x118 = 3416656U;
	volatile uint16_t x119 = 1559U;
	static int64_t x120 = -1LL;
	static volatile int64_t t27 = 844291LL;

	t27 = (((x117%x118)*x119)/x120);

	if (t27 != -260353LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 1U;
	int8_t x122 = -3;
	int16_t x123 = INT16_MIN;
	volatile int16_t x124 = INT16_MIN;
	static volatile int32_t t28 = -202099969;

	t28 = (((x121%x122)*x123)/x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = 6LL;
	int8_t x128 = INT8_MAX;
	volatile int64_t t29 = 934LL;

	t29 = (((x125%x126)*x127)/x128);

	if (t29 != 33818640LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = -1;
	static volatile int32_t t30 = 29471115;

	t30 = (((x129%x130)*x131)/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = UINT64_MAX;
	static int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MAX;
	int16_t x136 = -6446;
	volatile uint64_t t31 = 3795639919LLU;

	t31 = (((x133%x134)*x135)/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = -1;
	static int8_t x142 = -30;
	int64_t x143 = -126415845546380LL;
	uint64_t x144 = 3283205LLU;
	uint64_t t32 = 20680383789488766LLU;

	t32 = (((x141%x142)*x143)/x144);

	if (t32 != 38503792LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x146 = INT16_MIN;
	int8_t x148 = -1;
	static int32_t t33 = 1925928;

	t33 = (((x145%x146)*x147)/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 76U;
	uint8_t x150 = 1U;
	int16_t x151 = -2;
	uint16_t x152 = UINT16_MAX;
	static int32_t t34 = 4679119;

	t34 = (((x149%x150)*x151)/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 0;
	uint64_t x154 = UINT64_MAX;
	int64_t x156 = -1701371610760545LL;
	static uint64_t t35 = 3993571926862830793LLU;

	t35 = (((x153%x154)*x155)/x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = -1LL;
	static volatile int16_t x159 = INT16_MAX;
	int8_t x160 = INT8_MAX;
	int64_t t36 = 43182824838LL;

	t36 = (((x157%x158)*x159)/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x161 = UINT32_MAX;
	volatile int32_t x162 = INT32_MAX;
	static uint8_t x163 = 48U;
	uint16_t x164 = 316U;
	volatile uint32_t t37 = 129803U;

	t37 = (((x161%x162)*x163)/x164);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -54260758;
	int32_t x166 = -1;
	volatile uint32_t x167 = 458613095U;
	int16_t x168 = -1;
	uint32_t t38 = 484U;

	t38 = (((x165%x166)*x167)/x168);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -31LL;
	static int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	int64_t x172 = -5951LL;
	volatile int64_t t39 = 258963180LL;

	t39 = (((x169%x170)*x171)/x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x174 = 285LLU;
	int32_t x175 = INT32_MAX;
	static int64_t x176 = INT64_MIN;
	volatile uint64_t t40 = 14931930787LLU;

	t40 = (((x173%x174)*x175)/x176);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	static volatile int32_t x178 = INT32_MIN;
	uint16_t x179 = 21U;
	int32_t x180 = -45;

	t41 = (((x177%x178)*x179)/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1060364;
	volatile int16_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	volatile int32_t t42 = 54;

	t42 = (((x181%x182)*x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile int16_t x186 = 521;
	int32_t x187 = -93080;
	volatile uint32_t t43 = 908U;

	t43 = (((x185%x186)*x187)/x188);

	if (t43 != 1428056672U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x189 = 3U;
	int32_t x190 = INT32_MIN;
	int8_t x191 = 1;
	uint32_t t44 = 3217343U;

	t44 = (((x189%x190)*x191)/x192);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 1831738989LLU;
	static int8_t x194 = INT8_MIN;
	int64_t x196 = -958739104912LL;
	volatile uint64_t t45 = 17LLU;

	t45 = (((x193%x194)*x195)/x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	static volatile int32_t x198 = INT32_MAX;
	int32_t x199 = 1071415923;
	int64_t t46 = -32023LL;

	t46 = (((x197%x198)*x199)/x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x201 = INT8_MAX;
	volatile int8_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MIN;

	t47 = (((x201%x202)*x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = 15U;
	int8_t x206 = INT8_MIN;
	int64_t x207 = -1LL;
	volatile int64_t t48 = 41787297003955LL;

	t48 = (((x205%x206)*x207)/x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x212 = 1;

	t49 = (((x209%x210)*x211)/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 1926LLU;
	int16_t x215 = INT16_MAX;
	uint16_t x216 = 4541U;

	t50 = (((x213%x214)*x215)/x216);

	if (t50 != 13897LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = 118566727LL;
	volatile int32_t x219 = -1;
	static int8_t x220 = -1;
	int64_t t51 = -6318007414LL;

	t51 = (((x217%x218)*x219)/x220);

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = -201344LL;
	static int16_t x222 = INT16_MIN;
	uint16_t x223 = 2U;
	uint64_t x224 = 54423LLU;
	uint64_t t52 = 0LLU;

	t52 = (((x221%x222)*x223)/x224);

	if (t52 != 338951253582300LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x226 = INT8_MIN;
	static int8_t x228 = -12;
	volatile int32_t t53 = -972905;

	t53 = (((x225%x226)*x227)/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MAX;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MAX;
	static int64_t t54 = -65171134558LL;

	t54 = (((x229%x230)*x231)/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	int64_t t55 = -3050341695LL;

	t55 = (((x237%x238)*x239)/x240);

	if (t55 != -48804957LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1LL;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	int64_t t56 = -69361LL;

	t56 = (((x241%x242)*x243)/x244);

	if (t56 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MIN;
	static volatile uint8_t x246 = 1U;
	int8_t x247 = 0;
	volatile int16_t x248 = INT16_MIN;
	static int32_t t57 = 557156799;

	t57 = (((x245%x246)*x247)/x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MAX;
	static int16_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = INT64_MIN;
	volatile int64_t t58 = 25487LL;

	t58 = (((x249%x250)*x251)/x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x253 = 11U;
	volatile int64_t x254 = -1LL;
	volatile int16_t x255 = -1;
	int8_t x256 = -1;
	volatile int64_t t59 = 22603147LL;

	t59 = (((x253%x254)*x255)/x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 99LLU;
	int16_t x258 = INT16_MIN;
	int8_t x259 = 3;
	volatile int64_t x260 = -2LL;
	volatile uint64_t t60 = 898812482487280169LLU;

	t60 = (((x257%x258)*x259)/x260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	uint64_t x263 = 496203539796LLU;
	static int16_t x264 = -1;
	volatile uint64_t t61 = 105852167866LLU;

	t61 = (((x261%x262)*x263)/x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	static uint8_t x270 = 31U;
	int16_t x271 = INT16_MAX;
	volatile uint64_t t62 = 17868504928397737LLU;

	t62 = (((x269%x270)*x271)/x272);

	if (t62 != 42019918163347199LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = 39870;
	int64_t x274 = 295904208LL;
	int16_t x275 = INT16_MIN;
	uint8_t x276 = 19U;
	volatile int64_t t63 = 0LL;

	t63 = (((x273%x274)*x275)/x276);

	if (t63 != -68761061LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x278 = 1U;
	static volatile int64_t x279 = INT64_MIN;
	volatile int32_t x280 = 8991;
	volatile int64_t t64 = -12LL;

	t64 = (((x277%x278)*x279)/x280);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = -185;
	int32_t x284 = INT32_MIN;

	t65 = (((x281%x282)*x283)/x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = -1LL;

	t66 = (((x285%x286)*x287)/x288);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x291 = 256;
	volatile int64_t t67 = 324028600266LL;

	t67 = (((x289%x290)*x291)/x292);

	if (t67 != -1280LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x299 = -1LL;
	uint32_t x300 = 44U;
	static volatile int64_t t68 = -1311936133806LL;

	t68 = (((x297%x298)*x299)/x300);

	if (t68 != -1489LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = -1377809LL;
	uint64_t x302 = UINT64_MAX;
	static uint8_t x304 = 7U;

	t69 = (((x301%x302)*x303)/x304);

	if (t69 != 422688899652461LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 1U;
	int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MAX;
	volatile uint64_t t70 = 201117308LLU;

	t70 = (((x305%x306)*x307)/x308);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x309 = 2;
	uint16_t x310 = 1870U;
	uint64_t x311 = 7052705726341LLU;
	int16_t x312 = 4611;

	t71 = (((x309%x310)*x311)/x312);

	if (t71 != 3059078606LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = INT16_MIN;
	volatile uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	volatile uint64_t x316 = 237189728576LLU;
	uint64_t t72 = 52372335816420593LLU;

	t72 = (((x313%x314)*x315)/x316);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x320 = -1LL;
	static uint64_t t73 = 44610412LLU;

	t73 = (((x317%x318)*x319)/x320);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = INT8_MAX;
	static int16_t x322 = -1;
	int64_t x323 = -1735356653305LL;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t74 = 3305LL;

	t74 = (((x321%x322)*x323)/x324);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	volatile uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 546766287195626425LLU;
	static volatile uint64_t t75 = 86068LLU;

	t75 = (((x325%x326)*x327)/x328);

	if (t75 != 64116043576884196LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x330 = -1;
	int32_t x331 = -1;

	t76 = (((x329%x330)*x331)/x332);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = -963214800051LL;
	uint16_t x334 = 298U;
	uint32_t x335 = UINT32_MAX;
	volatile int16_t x336 = -3;

	t77 = (((x333%x334)*x335)/x336);

	if (t77 != 299216054885LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MIN;
	static volatile uint16_t x338 = UINT16_MAX;
	int32_t x339 = -1;
	int64_t x340 = INT64_MIN;
	volatile int64_t t78 = -4215471874055378LL;

	t78 = (((x337%x338)*x339)/x340);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = 7U;
	int32_t x346 = -1;
	static int8_t x348 = INT8_MIN;
	int32_t t79 = -58;

	t79 = (((x345%x346)*x347)/x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = -57LL;
	uint64_t x351 = 826105648387499LLU;
	int32_t x352 = 950;
	volatile uint64_t t80 = 18LLU;

	t80 = (((x349%x350)*x351)/x352);

	if (t80 != 19374146096094922LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x353 = UINT16_MAX;
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 118U;
	static int64_t x356 = -1LL;
	volatile int64_t t81 = 1627111372480319433LL;

	t81 = (((x353%x354)*x355)/x356);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = 1;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MAX;

	t82 = (((x357%x358)*x359)/x360);

	if (t82 != 2753184U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MIN;
	volatile uint8_t x363 = 22U;
	int8_t x364 = -1;
	int32_t t83 = 3;

	t83 = (((x361%x362)*x363)/x364);

	if (t83 != 198) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x366 = INT8_MAX;
	uint16_t x367 = 1850U;
	volatile uint64_t t84 = 1793706908369LLU;

	t84 = (((x365%x366)*x367)/x368);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x369 = -2273;
	int16_t x370 = -1;
	static int64_t x371 = -4531370220050719LL;
	uint16_t x372 = 1312U;

	t85 = (((x369%x370)*x371)/x372);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x374 = 15313297900LLU;
	static int64_t x375 = 0LL;
	int32_t x376 = 10455;
	uint64_t t86 = 0LLU;

	t86 = (((x373%x374)*x375)/x376);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x377 = 14LLU;
	int8_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -27;
	uint64_t t87 = 2560084200110114424LLU;

	t87 = (((x377%x378)*x379)/x380);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = 37;
	int64_t x382 = 305578575LL;
	static int16_t x383 = -1;

	t88 = (((x381%x382)*x383)/x384);

	if (t88 != 37LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = 10529LL;
	static volatile int64_t x387 = -1LL;
	int32_t x388 = -1398;
	int64_t t89 = -7576965002626310LL;

	t89 = (((x385%x386)*x387)/x388);

	if (t89 != 7LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x389 = 0U;
	int64_t x390 = INT64_MIN;
	int64_t x391 = -1LL;
	volatile int64_t t90 = -1LL;

	t90 = (((x389%x390)*x391)/x392);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = -1;
	int8_t x394 = 34;
	int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t91 = 1365;

	t91 = (((x393%x394)*x395)/x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x401 = 1439;
	int32_t x402 = INT32_MAX;
	int16_t x403 = -1;
	static volatile uint16_t x404 = 28U;
	int32_t t92 = -5689729;

	t92 = (((x401%x402)*x403)/x404);

	if (t92 != -51) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x405 = 495U;
	int64_t x406 = INT64_MIN;
	volatile uint32_t x408 = 1U;
	int64_t t93 = 2609497771908124LL;

	t93 = (((x405%x406)*x407)/x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x409 = -1;
	int8_t x411 = -25;
	volatile int16_t x412 = INT16_MAX;
	volatile int64_t t94 = -40985268095LL;

	t94 = (((x409%x410)*x411)/x412);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = INT8_MIN;
	uint64_t x414 = UINT64_MAX;
	int64_t x415 = -1LL;
	static uint32_t x416 = UINT32_MAX;

	t95 = (((x413%x414)*x415)/x416);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x417 = -1;
	volatile int8_t x418 = INT8_MIN;
	volatile uint32_t t96 = 3906U;

	t96 = (((x417%x418)*x419)/x420);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x421 = -1;
	static int64_t x422 = INT64_MIN;
	uint16_t x423 = 9U;
	static volatile int64_t t97 = 182LL;

	t97 = (((x421%x422)*x423)/x424);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x425 = UINT8_MAX;
	int64_t x426 = INT64_MIN;
	static uint32_t x427 = 3U;
	int8_t x428 = 6;
	int64_t t98 = -1776357LL;

	t98 = (((x425%x426)*x427)/x428);

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x430 = INT32_MAX;
	static int64_t x431 = 1138288853599LL;
	volatile uint64_t t99 = 8735414768905LLU;

	t99 = (((x429%x430)*x431)/x432);

	if (t99 != 4784LLU) { NG(); } else { ; }
	
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

