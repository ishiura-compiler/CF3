#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -5112;
int32_t t0 = 4073;
int32_t x8 = -1;
volatile int32_t t1 = -48069;
static int64_t x10 = -1LL;
static int64_t x12 = INT64_MIN;
volatile uint16_t x16 = UINT16_MAX;
volatile uint32_t x25 = 25U;
int32_t x26 = 321912;
int64_t x28 = 464691676207984LL;
uint8_t x31 = 61U;
volatile int32_t t8 = 99645;
int32_t x45 = INT32_MAX;
int32_t t10 = 4357554;
static int8_t x50 = -1;
static int32_t x52 = INT32_MIN;
static int16_t x54 = -1;
int32_t t13 = -13;
int8_t x62 = INT8_MIN;
static int32_t t17 = -3;
uint64_t x85 = 20058145609326938LLU;
int16_t x89 = INT16_MIN;
uint64_t x91 = 1917861493LLU;
int32_t t20 = -7286;
int16_t x93 = INT16_MAX;
int16_t x95 = -1;
int64_t x101 = INT64_MIN;
uint8_t x102 = 58U;
int16_t x110 = INT16_MIN;
int16_t x114 = 437;
int64_t x117 = -1LL;
uint16_t x120 = 4370U;
volatile uint8_t x125 = UINT8_MAX;
static uint32_t x127 = 118926U;
uint32_t x130 = UINT32_MAX;
uint32_t x132 = 918U;
volatile int32_t x143 = -396;
static int32_t x151 = INT32_MIN;
int32_t t33 = -16231;
int32_t t34 = 765288304;
static uint32_t x166 = 1359637U;
int64_t x186 = 11170272LL;
int16_t x198 = 3878;
volatile int64_t x202 = INT64_MAX;
static volatile int8_t x203 = INT8_MIN;
static volatile int32_t x208 = -1938513;
int8_t x212 = INT8_MAX;
static int16_t x224 = -335;
static volatile int32_t t51 = 1186;
volatile int32_t t52 = 58874;
static volatile int8_t x234 = INT8_MIN;
int16_t x236 = INT16_MIN;
int32_t t53 = -19003850;
int64_t x240 = INT64_MIN;
int32_t t54 = 9887;
static volatile uint64_t x241 = UINT64_MAX;
int32_t x243 = 0;
volatile uint64_t x246 = UINT64_MAX;
static int64_t x247 = INT64_MAX;
static volatile int64_t x253 = INT64_MAX;
int32_t x260 = INT32_MAX;
uint8_t x263 = UINT8_MAX;
uint8_t x267 = 28U;
static uint16_t x269 = 9U;
uint64_t x271 = 4991LLU;
static int8_t x277 = INT8_MIN;
int32_t t68 = 8281250;
int8_t x309 = 0;
static uint32_t x311 = UINT32_MAX;
int8_t x312 = INT8_MIN;
volatile int32_t t69 = 29;
int8_t x314 = 8;
static uint32_t x331 = 1U;
int8_t x334 = -1;
int16_t x340 = INT16_MIN;
volatile int64_t x342 = -32328731535917LL;
volatile int8_t x348 = INT8_MIN;
static int32_t t78 = 478994719;
int32_t x350 = 149375;
volatile int32_t t81 = -22;
static int32_t x361 = INT32_MIN;
static uint8_t x362 = 92U;
int32_t x363 = -56;
static uint32_t x372 = 13077030U;
int32_t t84 = 324867;
volatile uint16_t x373 = 2U;
static uint16_t x386 = 7288U;
static volatile int16_t x387 = 93;
volatile uint32_t x391 = 328708092U;
static int32_t x398 = INT32_MIN;
int32_t x404 = INT32_MAX;
volatile int8_t x415 = -1;
static int16_t x422 = INT16_MIN;
volatile int32_t t97 = 169723942;
int32_t x430 = INT32_MIN;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	static volatile int32_t x3 = -203003905;
	int16_t x4 = -1;

	t0 = (((x1%x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 18LL;
	uint64_t x6 = 759810052090533164LLU;
	static uint8_t x7 = 101U;

	t1 = (((x5%x6)*x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int16_t x11 = -1;
	volatile int32_t t2 = 57;

	t2 = (((x9%x10)*x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 716786U;
	int8_t x14 = INT8_MAX;
	static uint32_t x15 = 538476251U;
	int32_t t3 = -21746;

	t3 = (((x13%x14)*x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MIN;
	int16_t x22 = -9051;
	int8_t x23 = 33;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t4 = 30450194;

	t4 = (((x21%x22)*x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x27 = 3;
	volatile int32_t t5 = -31419;

	t5 = (((x25%x26)*x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	uint8_t x30 = 110U;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t6 = 189;

	t6 = (((x29%x30)*x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 1;
	volatile uint32_t x34 = UINT32_MAX;
	volatile int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MAX;
	volatile int32_t t7 = 7154;

	t7 = (((x33%x34)*x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	volatile uint8_t x38 = UINT8_MAX;
	uint64_t x39 = 3981882376657867514LLU;
	volatile int16_t x40 = INT16_MAX;

	t8 = (((x37%x38)*x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 3059327230902LL;
	int64_t x42 = INT64_MIN;
	uint16_t x43 = 2U;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t9 = 979309746;

	t9 = (((x41%x42)*x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x46 = INT16_MAX;
	int32_t x47 = 1;
	static int16_t x48 = INT16_MAX;

	t10 = (((x45%x46)*x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 2736739567000LL;
	uint64_t x51 = 57005002LLU;
	int32_t t11 = 59823087;

	t11 = (((x49%x50)*x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 8029927684LL;
	int8_t x55 = INT8_MIN;
	int64_t x56 = -1LL;
	volatile int32_t t12 = 52;

	t12 = (((x53%x54)*x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 30626497LLU;
	static int16_t x58 = INT16_MIN;
	int16_t x59 = 428;
	uint32_t x60 = 1719200895U;

	t13 = (((x57%x58)*x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	int16_t x63 = INT16_MIN;
	static uint64_t x64 = UINT64_MAX;
	int32_t t14 = 66504861;

	t14 = (((x61%x62)*x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = 181370U;
	int16_t x66 = 384;
	volatile int32_t x67 = 26;
	int64_t x68 = -28124683202LL;
	int32_t t15 = -130831510;

	t15 = (((x65%x66)*x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MAX;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t16 = -143;

	t16 = (((x69%x70)*x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -208;
	volatile int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	int32_t x80 = 23408;

	t17 = (((x77%x78)*x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = -17220374040500395LL;
	static uint64_t x83 = 14073799LLU;
	static volatile uint8_t x84 = 5U;
	static volatile int32_t t18 = -501773500;

	t18 = (((x81%x82)*x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = INT8_MIN;
	uint64_t x87 = UINT64_MAX;
	uint8_t x88 = 7U;
	volatile int32_t t19 = 756228;

	t19 = (((x85%x86)*x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x90 = 12U;
	int16_t x92 = INT16_MIN;

	t20 = (((x89%x90)*x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x94 = 8149U;
	uint8_t x96 = 7U;
	volatile int32_t t21 = 1;

	t21 = (((x93%x94)*x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x103 = -1;
	volatile int32_t x104 = INT32_MIN;
	int32_t t22 = 1066396653;

	t22 = (((x101%x102)*x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 3426;
	static volatile uint32_t x106 = 92U;
	int32_t x107 = INT32_MIN;
	int16_t x108 = -9146;
	volatile int32_t t23 = 1;

	t23 = (((x105%x106)*x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile uint16_t x111 = 17506U;
	int16_t x112 = -1;
	volatile int32_t t24 = 17934;

	t24 = (((x109%x110)*x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x113 = 6491457919300515LL;
	int16_t x115 = INT16_MIN;
	volatile int16_t x116 = -551;
	static int32_t t25 = 86391676;

	t25 = (((x113%x114)*x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -21;
	int16_t x119 = INT16_MAX;
	int32_t t26 = 193325;

	t26 = (((x117%x118)*x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -33391780;
	int32_t x122 = -112562082;
	volatile int32_t x123 = 3;
	uint8_t x124 = 0U;
	volatile int32_t t27 = -343;

	t27 = (((x121%x122)*x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x126 = -4366733557LL;
	int32_t x128 = -2;
	int32_t t28 = -526464533;

	t28 = (((x125%x126)*x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = INT16_MAX;
	volatile int16_t x131 = INT16_MAX;
	volatile int32_t t29 = -9726;

	t29 = (((x129%x130)*x131)==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x133 = INT16_MIN;
	int32_t x134 = 46693043;
	int16_t x135 = INT16_MAX;
	volatile uint8_t x136 = 0U;
	int32_t t30 = -113;

	t30 = (((x133%x134)*x135)==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MAX;
	int64_t x144 = -1LL;
	volatile int32_t t31 = -651129;

	t31 = (((x141%x142)*x143)==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x145 = 3289;
	static uint8_t x146 = 1U;
	int8_t x147 = INT8_MIN;
	int16_t x148 = -3;
	volatile int32_t t32 = 32536;

	t32 = (((x145%x146)*x147)==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MAX;
	volatile int32_t x152 = 0;

	t33 = (((x149%x150)*x151)==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	uint32_t x158 = UINT32_MAX;
	static int16_t x159 = INT16_MIN;
	static int16_t x160 = INT16_MIN;

	t34 = (((x157%x158)*x159)==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x161 = INT64_MAX;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t35 = -18467;

	t35 = (((x161%x162)*x163)==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	int16_t x167 = -1;
	uint16_t x168 = 14644U;
	volatile int32_t t36 = 1416;

	t36 = (((x165%x166)*x167)==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = 50U;
	static uint32_t x170 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 64U;
	volatile int32_t t37 = 1071502;

	t37 = (((x169%x170)*x171)==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = 2U;
	static int64_t x175 = INT64_MIN;
	static int32_t x176 = INT32_MAX;
	int32_t t38 = 6;

	t38 = (((x173%x174)*x175)==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MAX;
	static int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	int64_t x180 = INT64_MAX;
	int32_t t39 = -707029;

	t39 = (((x177%x178)*x179)==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x181 = 16U;
	uint16_t x182 = 139U;
	int8_t x183 = 1;
	static volatile uint32_t x184 = 115073018U;
	volatile int32_t t40 = -283;

	t40 = (((x181%x182)*x183)==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = 27;
	int16_t x187 = INT16_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t41 = 2;

	t41 = (((x185%x186)*x187)==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 432U;
	volatile uint8_t x191 = 7U;
	static int64_t x192 = -24331005141395382LL;
	int32_t t42 = 16;

	t42 = (((x189%x190)*x191)==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 2U;
	static volatile int64_t x195 = -1LL;
	volatile int16_t x196 = -1;
	volatile int32_t t43 = 0;

	t43 = (((x193%x194)*x195)==x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	volatile uint32_t x200 = 2U;
	volatile int32_t t44 = 228369561;

	t44 = (((x197%x198)*x199)==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	volatile uint8_t x204 = 3U;
	static int32_t t45 = -2;

	t45 = (((x201%x202)*x203)==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x205 = 5671;
	uint16_t x206 = 5U;
	volatile uint16_t x207 = 12793U;
	volatile int32_t t46 = 1732346;

	t46 = (((x205%x206)*x207)==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = -37;
	uint32_t x210 = 98685U;
	int16_t x211 = INT16_MIN;
	static volatile int32_t t47 = -235251908;

	t47 = (((x209%x210)*x211)==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x213 = 51398919934401503LL;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 106U;
	uint32_t x216 = UINT32_MAX;
	int32_t t48 = 3374667;

	t48 = (((x213%x214)*x215)==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile uint8_t x218 = 2U;
	static int16_t x219 = 71;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t49 = -105915916;

	t49 = (((x217%x218)*x219)==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static volatile int32_t t50 = -272;

	t50 = (((x221%x222)*x223)==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = UINT8_MAX;
	static int64_t x226 = -1LL;
	volatile int64_t x227 = -1LL;
	int64_t x228 = INT64_MIN;

	t51 = (((x225%x226)*x227)==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = INT16_MIN;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 16712U;

	t52 = (((x229%x230)*x231)==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x233 = -1;
	int16_t x235 = INT16_MAX;

	t53 = (((x233%x234)*x235)==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	static int8_t x239 = 1;

	t54 = (((x237%x238)*x239)==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x242 = INT8_MIN;
	int16_t x244 = -1;
	volatile int32_t t55 = 278951493;

	t55 = (((x241%x242)*x243)==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MIN;
	int16_t x248 = INT16_MAX;
	volatile int32_t t56 = 1394;

	t56 = (((x245%x246)*x247)==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = 53;
	int32_t x250 = INT32_MIN;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = 13;
	volatile int32_t t57 = -57426014;

	t57 = (((x249%x250)*x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x254 = INT8_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t58 = -10;

	t58 = (((x253%x254)*x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x257 = INT16_MIN;
	int8_t x258 = 31;
	uint32_t x259 = 1807U;
	int32_t t59 = 7704101;

	t59 = (((x257%x258)*x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x261 = 450LL;
	volatile uint64_t x262 = 1558981172072096709LLU;
	int32_t x264 = -1;
	int32_t t60 = -109030;

	t60 = (((x261%x262)*x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = 7228342684299028LL;
	volatile uint8_t x266 = UINT8_MAX;
	volatile uint16_t x268 = 55U;
	volatile int32_t t61 = 7;

	t61 = (((x265%x266)*x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x270 = -97794700456180LL;
	int64_t x272 = INT64_MAX;
	volatile int32_t t62 = 13;

	t62 = (((x269%x270)*x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = 1LL;
	int16_t x276 = -5163;
	volatile int32_t t63 = 1;

	t63 = (((x273%x274)*x275)==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 5678920LLU;
	static int64_t x280 = -1LL;
	volatile int32_t t64 = 466;

	t64 = (((x277%x278)*x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x289 = 47547LLU;
	int32_t x290 = INT32_MAX;
	int16_t x291 = INT16_MIN;
	static int8_t x292 = INT8_MIN;
	int32_t t65 = -3146337;

	t65 = (((x289%x290)*x291)==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 438394091LLU;
	int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MIN;
	static uint16_t x296 = UINT16_MAX;
	int32_t t66 = 1595;

	t66 = (((x293%x294)*x295)==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MIN;
	static uint16_t x299 = UINT16_MAX;
	uint16_t x300 = 23U;
	volatile int32_t t67 = -139;

	t67 = (((x297%x298)*x299)==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 1444904U;
	int32_t x302 = -1;
	static int8_t x303 = INT8_MIN;
	volatile int16_t x304 = INT16_MAX;

	t68 = (((x301%x302)*x303)==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x310 = 3257U;

	t69 = (((x309%x310)*x311)==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t70 = -75;

	t70 = (((x313%x314)*x315)==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = UINT64_MAX;
	static int8_t x318 = INT8_MIN;
	uint64_t x319 = 245LLU;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t71 = -2929;

	t71 = (((x317%x318)*x319)==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x321 = INT8_MAX;
	volatile int8_t x322 = -27;
	int8_t x323 = INT8_MIN;
	static int16_t x324 = INT16_MIN;
	static int32_t t72 = 118;

	t72 = (((x321%x322)*x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MAX;
	int8_t x326 = -1;
	int16_t x327 = -1;
	int32_t x328 = 11077;
	volatile int32_t t73 = 301;

	t73 = (((x325%x326)*x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = INT8_MIN;
	volatile int8_t x330 = 24;
	int64_t x332 = -1164600822840LL;
	int32_t t74 = -31867097;

	t74 = (((x329%x330)*x331)==x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x333 = 17U;
	uint32_t x335 = 227430U;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t75 = 2512;

	t75 = (((x333%x334)*x335)==x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = -1;
	volatile int8_t x338 = -1;
	static uint16_t x339 = 8367U;
	volatile int32_t t76 = 226464;

	t76 = (((x337%x338)*x339)==x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint64_t x343 = 9324364690571LLU;
	int8_t x344 = -1;
	volatile int32_t t77 = -12;

	t77 = (((x341%x342)*x343)==x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	static uint8_t x347 = 58U;

	t78 = (((x345%x346)*x347)==x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x349 = 3034U;
	static volatile uint16_t x351 = UINT16_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t79 = -14;

	t79 = (((x349%x350)*x351)==x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = -525;
	int16_t x355 = INT16_MIN;
	int32_t x356 = 2185815;
	int32_t t80 = -171097850;

	t80 = (((x353%x354)*x355)==x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = INT32_MAX;
	int32_t x359 = -1;
	volatile int16_t x360 = 2;

	t81 = (((x357%x358)*x359)==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x364 = INT32_MIN;
	volatile int32_t t82 = 22343;

	t82 = (((x361%x362)*x363)==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x365 = 5;
	static int16_t x366 = -1;
	int64_t x367 = 1345021257LL;
	static int32_t x368 = -22229;
	int32_t t83 = 177951;

	t83 = (((x365%x366)*x367)==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	uint16_t x370 = 6U;
	volatile uint8_t x371 = 1U;

	t84 = (((x369%x370)*x371)==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x374 = -1179LL;
	static uint16_t x375 = UINT16_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t85 = 170691;

	t85 = (((x373%x374)*x375)==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static uint16_t x380 = UINT16_MAX;
	int32_t t86 = -1;

	t86 = (((x377%x378)*x379)==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 13069478LLU;
	static int32_t t87 = 64521;

	t87 = (((x381%x382)*x383)==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = -1;
	int16_t x388 = -1;
	static int32_t t88 = -105321;

	t88 = (((x385%x386)*x387)==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MIN;
	static volatile uint8_t x390 = 2U;
	int16_t x392 = 4856;
	int32_t t89 = -1070008543;

	t89 = (((x389%x390)*x391)==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x393 = 24U;
	uint32_t x394 = UINT32_MAX;
	volatile int16_t x395 = -13;
	int8_t x396 = INT8_MIN;
	volatile int32_t t90 = 812040;

	t90 = (((x393%x394)*x395)==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 29735541LLU;
	int32_t x399 = INT32_MIN;
	static volatile int32_t x400 = -394181;
	int32_t t91 = -54;

	t91 = (((x397%x398)*x399)==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = UINT32_MAX;
	volatile uint64_t x402 = 14063792LLU;
	int32_t x403 = INT32_MAX;
	static int32_t t92 = -105;

	t92 = (((x401%x402)*x403)==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = -2887;
	uint16_t x408 = 23049U;
	static int32_t t93 = 3173;

	t93 = (((x405%x406)*x407)==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x409 = 3LLU;
	volatile int32_t x410 = -63667363;
	static int8_t x411 = -16;
	static uint32_t x412 = 13235005U;
	volatile int32_t t94 = 322;

	t94 = (((x409%x410)*x411)==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MAX;
	static int32_t x414 = -1;
	static int64_t x416 = -1LL;
	static int32_t t95 = 87124;

	t95 = (((x413%x414)*x415)==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;
	static volatile int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MAX;
	int32_t t96 = -238;

	t96 = (((x417%x418)*x419)==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int8_t x424 = -1;

	t97 = (((x421%x422)*x423)==x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MIN;
	int32_t x426 = -1;
	int32_t x427 = INT32_MAX;
	static uint32_t x428 = 27312U;
	static int32_t t98 = -1784;

	t98 = (((x425%x426)*x427)==x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x429 = INT8_MIN;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 4U;
	int32_t t99 = -255;

	t99 = (((x429%x430)*x431)==x432);

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

