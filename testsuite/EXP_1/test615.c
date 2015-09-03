#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 64923480U;
static int8_t x5 = INT8_MAX;
uint8_t x14 = UINT8_MAX;
uint16_t x16 = 1U;
int16_t x20 = -360;
int8_t x26 = 44;
int16_t x29 = INT16_MIN;
static volatile int16_t x32 = INT16_MAX;
volatile int32_t t8 = 82366565;
int64_t x37 = -1LL;
int8_t x44 = INT8_MIN;
int8_t x45 = INT8_MIN;
int8_t x46 = -1;
int64_t x50 = -3195952325780LL;
volatile int32_t x54 = 6218;
volatile int32_t t13 = -1897140;
volatile int64_t t14 = 39637902379852LL;
int16_t x62 = INT16_MIN;
uint64_t x65 = 140189786418951956LLU;
volatile int16_t x68 = INT16_MIN;
int32_t x74 = INT32_MAX;
int64_t x77 = 289970488174757LL;
volatile int32_t t19 = 0;
int32_t x88 = 3888;
int8_t x93 = INT8_MIN;
int8_t x96 = INT8_MIN;
int64_t x106 = INT64_MIN;
int64_t t25 = 3224LL;
int16_t x114 = INT16_MIN;
uint64_t x115 = UINT64_MAX;
uint64_t x127 = UINT64_MAX;
int32_t x132 = -1;
int32_t x141 = -9436712;
int64_t x142 = -23626119956045LL;
int64_t x145 = INT64_MIN;
int64_t t33 = -9804596LL;
int32_t x156 = -1;
volatile int32_t t35 = 2739576;
int64_t t41 = 254737573LL;
static int16_t x181 = INT16_MIN;
uint8_t x187 = 6U;
uint32_t x188 = 167U;
volatile uint64_t t45 = 43562557978218LLU;
int16_t x198 = INT16_MIN;
int8_t x217 = -1;
int32_t x218 = -1145890;
uint32_t x220 = 7182076U;
static uint8_t x223 = 1U;
static uint16_t x226 = 92U;
int32_t t53 = 25859634;
static int64_t x235 = INT64_MIN;
uint8_t x238 = 1U;
static uint32_t x242 = 1947259206U;
static volatile int32_t t57 = 798754;
static uint8_t x250 = 44U;
volatile uint64_t t60 = 311460087547309LLU;
static uint16_t x259 = UINT16_MAX;
volatile int8_t x269 = 5;
int16_t x270 = INT16_MIN;
volatile int32_t x277 = 7;
static int16_t x282 = INT16_MIN;
int64_t x286 = -574752652500708602LL;
int64_t t67 = -148948472867LL;
int16_t x289 = 19;
int16_t x291 = INT16_MAX;
volatile int32_t x292 = INT32_MAX;
uint8_t x298 = 1U;
uint16_t x315 = UINT16_MAX;
volatile uint32_t x318 = 11515U;
int32_t t74 = 242;
volatile uint32_t t77 = 1U;
int8_t x337 = INT8_MIN;
uint16_t x338 = UINT16_MAX;
int64_t x340 = 8110096316135LL;
int16_t x341 = -1;
int16_t x342 = INT16_MIN;
int32_t x345 = 806;
static volatile int32_t x349 = 17419730;
int16_t x351 = INT16_MIN;
int32_t x353 = -1;
int64_t x358 = INT64_MAX;
volatile int32_t t84 = -26444;
int64_t t85 = 59LL;
volatile uint8_t x370 = 1U;
int64_t x373 = -1LL;
uint32_t x375 = 123320820U;
static int64_t x376 = 126907740078LL;
static int64_t t88 = -1468754700620586LL;
static int32_t t89 = 9;
uint8_t x381 = 4U;
uint64_t x387 = UINT64_MAX;
static int16_t x388 = INT16_MIN;
int64_t x391 = INT64_MAX;
int32_t t92 = 123520;
int64_t t93 = -420227541LL;
int64_t x397 = INT64_MIN;
int8_t x400 = 6;
uint8_t x406 = 3U;
int64_t x411 = 441523622391223512LL;
static int32_t t96 = 166381;
volatile int16_t x414 = -36;
volatile int64_t x416 = -1LL;
uint8_t x418 = UINT8_MAX;
static int32_t t99 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 19;

	t0 = (((x1/x2)<x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	uint32_t x7 = 129470276U;
	uint64_t x8 = 2497174552LLU;
	volatile uint64_t t1 = 1359607492235941LLU;

	t1 = (((x5/x6)<x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 31595851U;
	static int32_t x10 = INT32_MIN;
	volatile int8_t x11 = INT8_MAX;
	static uint8_t x12 = 1U;
	int32_t t2 = 4197668;

	t2 = (((x9/x10)<x11)/x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 11743LL;
	int8_t x15 = -2;
	volatile int32_t t3 = 67;

	t3 = (((x13/x14)<x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	uint32_t x18 = 1460U;
	int8_t x19 = 1;
	static volatile int32_t t4 = 8062;

	t4 = (((x17/x18)<x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -17884381;
	int16_t x22 = -136;
	uint64_t x23 = 2694LLU;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -71693654LL;

	t5 = (((x21/x22)<x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 186998180U;
	volatile int32_t x27 = INT32_MAX;
	static uint64_t x28 = 286828LLU;
	static uint64_t t6 = 165391877359LLU;

	t6 = (((x25/x26)<x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x30 = INT64_MIN;
	int32_t x31 = -1;
	static volatile int32_t t7 = 48843617;

	t7 = (((x29/x30)<x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 21U;
	int64_t x35 = -1LL;
	static int16_t x36 = INT16_MAX;

	t8 = (((x33/x34)<x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = 19;
	static volatile uint16_t x39 = UINT16_MAX;
	uint32_t x40 = 1289729U;
	static volatile uint32_t t9 = 779296U;

	t9 = (((x37/x38)<x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint8_t x42 = 113U;
	uint16_t x43 = 10747U;
	static volatile int32_t t10 = -423;

	t10 = (((x41/x42)<x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x47 = UINT16_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 19;

	t11 = (((x45/x46)<x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7407U;
	uint64_t x51 = UINT64_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 93204523;

	t12 = (((x49/x50)<x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile uint32_t x55 = UINT32_MAX;
	static uint16_t x56 = 7897U;

	t13 = (((x53/x54)<x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 21U;
	uint16_t x58 = UINT16_MAX;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = 7467520051LL;

	t14 = (((x57/x58)<x59)/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	uint8_t x63 = UINT8_MAX;
	static uint8_t x64 = 5U;
	static int32_t t15 = -1;

	t15 = (((x61/x62)<x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	static int32_t x67 = -1;
	int32_t t16 = 1120;

	t16 = (((x65/x66)<x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -16609LL;
	int32_t x70 = INT32_MIN;
	uint64_t x71 = 32402311LLU;
	int32_t x72 = 328263;
	int32_t t17 = 109;

	t17 = (((x69/x70)<x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static int8_t x75 = INT8_MAX;
	uint8_t x76 = 2U;
	static volatile int32_t t18 = 10146922;

	t18 = (((x73/x74)<x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = INT32_MIN;
	int8_t x79 = -1;
	int16_t x80 = -52;

	t19 = (((x77/x78)<x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 23200U;
	int32_t x82 = INT32_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	static int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 787701097498338LL;

	t20 = (((x81/x82)<x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 25;
	int32_t x86 = INT32_MIN;
	static int16_t x87 = INT16_MIN;
	int32_t t21 = 154153483;

	t21 = (((x85/x86)<x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = 98U;
	uint8_t x91 = 119U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 3225;

	t22 = (((x89/x90)<x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MIN;
	uint16_t x95 = 3379U;
	int32_t t23 = 0;

	t23 = (((x93/x94)<x95)/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 70U;
	volatile int32_t x102 = INT32_MIN;
	uint8_t x103 = UINT8_MAX;
	volatile int16_t x104 = -1;
	int32_t t24 = 468699;

	t24 = (((x101/x102)<x103)/x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int16_t x107 = INT16_MIN;
	int64_t x108 = -1LL;

	t25 = (((x105/x106)<x107)/x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MIN;
	static uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 335568157U;
	uint32_t x112 = 1521U;
	static volatile uint32_t t26 = 11754952U;

	t26 = (((x109/x110)<x111)/x112);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = -4;
	static int32_t x116 = INT32_MIN;
	static int32_t t27 = -62102;

	t27 = (((x113/x114)<x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 954U;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -24;
	static int32_t t28 = -27;

	t28 = (((x117/x118)<x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MAX;
	volatile uint8_t x122 = UINT8_MAX;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = 7U;
	volatile int32_t t29 = -82;

	t29 = (((x121/x122)<x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	volatile uint8_t x126 = 28U;
	int8_t x128 = -14;
	volatile int32_t t30 = -489;

	t30 = (((x125/x126)<x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 58U;
	uint8_t x130 = 2U;
	static int8_t x131 = INT8_MIN;
	volatile int32_t t31 = -233;

	t31 = (((x129/x130)<x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x143 = INT8_MIN;
	static int16_t x144 = INT16_MAX;
	static volatile int32_t t32 = -931;

	t32 = (((x141/x142)<x143)/x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;

	t33 = (((x145/x146)<x147)/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x149 = INT64_MIN;
	static uint8_t x150 = UINT8_MAX;
	uint32_t x151 = 82U;
	uint32_t x152 = UINT32_MAX;
	uint32_t t34 = 2554788U;

	t34 = (((x149/x150)<x151)/x152);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = UINT32_MAX;
	int64_t x154 = -182902855063367600LL;
	volatile uint8_t x155 = 7U;

	t35 = (((x153/x154)<x155)/x156);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	volatile uint32_t x158 = 793189U;
	static int32_t x159 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t36 = 2;

	t36 = (((x157/x158)<x159)/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = 19U;
	volatile uint8_t x162 = 13U;
	volatile int16_t x163 = -1;
	static int32_t x164 = INT32_MIN;
	int32_t t37 = -2081;

	t37 = (((x161/x162)<x163)/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = 0;
	static uint8_t x166 = 3U;
	uint16_t x167 = 360U;
	int8_t x168 = -6;
	int32_t t38 = -97;

	t38 = (((x165/x166)<x167)/x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MIN;
	volatile int16_t x171 = 10;
	int64_t x172 = -133323085959307LL;
	int64_t t39 = 9563433480LL;

	t39 = (((x169/x170)<x171)/x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 511U;
	volatile int64_t x174 = INT64_MIN;
	int64_t x175 = -1715640720403987953LL;
	int16_t x176 = -376;
	int32_t t40 = 6;

	t40 = (((x173/x174)<x175)/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 38U;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = INT8_MIN;
	volatile int64_t x180 = INT64_MIN;

	t41 = (((x177/x178)<x179)/x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x182 = 222910278LLU;
	int32_t x183 = -19776;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t42 = -2000;

	t42 = (((x181/x182)<x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 290275U;
	volatile int8_t x186 = INT8_MIN;
	uint32_t t43 = 3573U;

	t43 = (((x185/x186)<x187)/x188);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = 469;
	int8_t x191 = -7;
	int8_t x192 = -7;
	volatile int32_t t44 = 1348878;

	t44 = (((x189/x190)<x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = INT32_MIN;
	static uint64_t x194 = 237935367647061996LLU;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 11LLU;

	t45 = (((x193/x194)<x195)/x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	volatile int16_t x199 = -1;
	int64_t x200 = -4524980521LL;
	int64_t t46 = -4LL;

	t46 = (((x197/x198)<x199)/x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = 156;
	int64_t x203 = INT64_MIN;
	static uint16_t x204 = 3573U;
	int32_t t47 = 1034435832;

	t47 = (((x201/x202)<x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 32;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = -1;
	static int8_t x208 = -1;
	int32_t t48 = -486;

	t48 = (((x205/x206)<x207)/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 64;
	volatile int64_t x210 = 10884087959LL;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 37U;
	volatile int32_t t49 = 50152257;

	t49 = (((x209/x210)<x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = 177U;
	int64_t x214 = -1LL;
	int16_t x215 = INT16_MAX;
	volatile int32_t x216 = -1;
	volatile int32_t t50 = 344792823;

	t50 = (((x213/x214)<x215)/x216);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x219 = -1;
	volatile uint32_t t51 = 119U;

	t51 = (((x217/x218)<x219)/x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	int64_t x222 = -1LL;
	int8_t x224 = INT8_MIN;
	volatile int32_t t52 = -1;

	t52 = (((x221/x222)<x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x227 = 93957LLU;
	int32_t x228 = -1;

	t53 = (((x225/x226)<x227)/x228);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x230 = -209;
	int32_t x231 = -1;
	int32_t x232 = -1;
	int32_t t54 = -170;

	t54 = (((x229/x230)<x231)/x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = 160U;
	int32_t x234 = -87996;
	volatile int8_t x236 = INT8_MAX;
	int32_t t55 = -7187171;

	t55 = (((x233/x234)<x235)/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x239 = 747U;
	static uint16_t x240 = 3300U;
	int32_t t56 = -7;

	t56 = (((x237/x238)<x239)/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	static int32_t x243 = INT32_MAX;
	int32_t x244 = -1;

	t57 = (((x241/x242)<x243)/x244);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x245 = 4328U;
	int32_t x246 = -1;
	int64_t x247 = INT64_MIN;
	int64_t x248 = -1LL;
	static volatile int64_t t58 = -3758212761307LL;

	t58 = (((x245/x246)<x247)/x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int32_t x251 = INT32_MAX;
	int8_t x252 = 5;
	int32_t t59 = -13854;

	t59 = (((x249/x250)<x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x253 = 22115991U;
	static uint8_t x254 = UINT8_MAX;
	static int64_t x255 = 86669668510187917LL;
	static uint64_t x256 = 21258598969LLU;

	t60 = (((x253/x254)<x255)/x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 8U;
	uint16_t x258 = 29U;
	uint16_t x260 = 95U;
	volatile int32_t t61 = 1699998;

	t61 = (((x257/x258)<x259)/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -5;
	uint32_t x266 = 25U;
	static volatile uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MIN;
	int32_t t62 = -20;

	t62 = (((x265/x266)<x267)/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x271 = 3906717U;
	int32_t x272 = INT32_MIN;
	int32_t t63 = 0;

	t63 = (((x269/x270)<x271)/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -83589LL;
	int16_t x274 = INT16_MAX;
	int64_t x275 = 2512073425LL;
	uint64_t x276 = 12LLU;
	volatile uint64_t t64 = 76559700LLU;

	t64 = (((x273/x274)<x275)/x276);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x278 = INT8_MAX;
	uint32_t x279 = 88168U;
	volatile uint64_t x280 = UINT64_MAX;
	uint64_t t65 = 1867013998880LLU;

	t65 = (((x277/x278)<x279)/x280);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = 35384622798LL;
	int32_t x283 = INT32_MIN;
	int8_t x284 = -1;
	volatile int32_t t66 = -3;

	t66 = (((x281/x282)<x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x285 = INT16_MIN;
	static uint8_t x287 = 40U;
	int64_t x288 = INT64_MAX;

	t67 = (((x285/x286)<x287)/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x290 = -1;
	volatile int32_t t68 = -2764520;

	t68 = (((x289/x290)<x291)/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 274U;
	uint64_t x294 = 1487194123659LLU;
	volatile int64_t x295 = 799244152036499653LL;
	static uint8_t x296 = 3U;
	int32_t t69 = 24;

	t69 = (((x293/x294)<x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x297 = 14U;
	volatile uint8_t x299 = 0U;
	int32_t x300 = -1;
	volatile int32_t t70 = 1;

	t70 = (((x297/x298)<x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -84290;
	volatile int16_t x302 = -1;
	static uint8_t x303 = 2U;
	int16_t x304 = INT16_MIN;
	int32_t t71 = -22252;

	t71 = (((x301/x302)<x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = UINT64_MAX;
	int32_t x306 = -181725;
	int64_t x307 = -14LL;
	int64_t x308 = 1493276336LL;
	int64_t t72 = 27912032966929543LL;

	t72 = (((x305/x306)<x307)/x308);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MIN;
	static int64_t x314 = INT64_MIN;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t73 = 7835681LLU;

	t73 = (((x313/x314)<x315)/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = UINT8_MAX;
	static int32_t x319 = -26;
	volatile uint16_t x320 = 1U;

	t74 = (((x317/x318)<x319)/x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -9;
	static uint64_t x322 = 11LLU;
	uint8_t x323 = 40U;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t75 = -26;

	t75 = (((x321/x322)<x323)/x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = INT64_MAX;
	int64_t x327 = 31LL;
	int8_t x328 = -1;
	volatile int32_t t76 = -13;

	t76 = (((x325/x326)<x327)/x328);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	static int64_t x331 = INT64_MAX;
	uint32_t x332 = 24U;

	t77 = (((x329/x330)<x331)/x332);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x333 = UINT16_MAX;
	static int32_t x334 = INT32_MAX;
	volatile uint64_t x335 = 4240847399LLU;
	int32_t x336 = INT32_MAX;
	int32_t t78 = 410;

	t78 = (((x333/x334)<x335)/x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x339 = INT64_MAX;
	int64_t t79 = 99603LL;

	t79 = (((x337/x338)<x339)/x340);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x343 = 22LLU;
	int64_t x344 = INT64_MIN;
	static int64_t t80 = 0LL;

	t80 = (((x341/x342)<x343)/x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x346 = -1LL;
	int8_t x347 = -49;
	int8_t x348 = INT8_MIN;
	int32_t t81 = 20741;

	t81 = (((x345/x346)<x347)/x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x350 = -1LL;
	uint32_t x352 = UINT32_MAX;
	static uint32_t t82 = 313825883U;

	t82 = (((x349/x350)<x351)/x352);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x354 = UINT32_MAX;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 2910LLU;
	volatile uint64_t t83 = 200223072024LLU;

	t83 = (((x353/x354)<x355)/x356);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = -1LL;
	volatile int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MAX;

	t84 = (((x357/x358)<x359)/x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x361 = -745LL;
	int8_t x362 = INT8_MIN;
	int8_t x363 = -3;
	int64_t x364 = INT64_MIN;

	t85 = (((x361/x362)<x363)/x364);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x365 = 44U;
	int16_t x366 = INT16_MIN;
	static int16_t x367 = -1;
	int64_t x368 = -1LL;
	int64_t t86 = 216544LL;

	t86 = (((x365/x366)<x367)/x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int16_t x371 = 15183;
	int32_t x372 = INT32_MIN;
	volatile int32_t t87 = -1451642;

	t87 = (((x369/x370)<x371)/x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x374 = -4LL;

	t88 = (((x373/x374)<x375)/x376);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x377 = -2036910;
	uint64_t x378 = 4LLU;
	volatile int64_t x379 = INT64_MIN;
	static volatile uint16_t x380 = UINT16_MAX;

	t89 = (((x377/x378)<x379)/x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x382 = 647U;
	int32_t x383 = -1;
	uint64_t x384 = 121655LLU;
	uint64_t t90 = 2034317010736368269LLU;

	t90 = (((x381/x382)<x383)/x384);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = INT16_MAX;
	uint16_t x386 = UINT16_MAX;
	static int32_t t91 = 50;

	t91 = (((x385/x386)<x387)/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	static uint64_t x390 = UINT64_MAX;
	int32_t x392 = INT32_MAX;

	t92 = (((x389/x390)<x391)/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = 8699690;
	volatile int64_t x394 = INT64_MIN;
	static uint16_t x395 = UINT16_MAX;
	int64_t x396 = -556255178394417898LL;

	t93 = (((x393/x394)<x395)/x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x398 = -84855;
	uint64_t x399 = 23986413809236871LLU;
	int32_t t94 = 6807;

	t94 = (((x397/x398)<x399)/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = 2696044121295086LLU;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 15;
	volatile int32_t t95 = 420497;

	t95 = (((x405/x406)<x407)/x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x409 = -4848;
	static int16_t x410 = INT16_MAX;
	volatile int16_t x412 = 93;

	t96 = (((x409/x410)<x411)/x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = 1620633088320LL;
	uint16_t x415 = 11638U;
	int64_t t97 = -1825609224750502LL;

	t97 = (((x413/x414)<x415)/x416);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = UINT64_MAX;
	uint32_t x419 = UINT32_MAX;
	uint32_t x420 = 1341160U;
	uint32_t t98 = 960204U;

	t98 = (((x417/x418)<x419)/x420);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MIN;
	int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MAX;

	t99 = (((x421/x422)<x423)/x424);

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

