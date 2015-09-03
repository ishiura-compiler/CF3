#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -6642788511LL;
int64_t x9 = 2736808946LL;
int64_t x24 = INT64_MIN;
uint8_t x25 = 2U;
volatile int32_t x27 = INT32_MAX;
volatile uint64_t x28 = 9495178824815LLU;
int16_t x29 = -7047;
uint16_t x35 = 438U;
volatile int32_t t7 = -112142070;
uint8_t x42 = UINT8_MAX;
int16_t x44 = -8859;
static volatile int64_t t9 = -169LL;
int32_t t10 = -74860439;
int8_t x54 = 3;
uint8_t x59 = 11U;
volatile int16_t x60 = -86;
static int32_t t12 = 801739;
volatile int64_t x61 = -1LL;
uint8_t x74 = 127U;
int16_t x75 = -1;
int32_t t16 = 390284;
int32_t x81 = INT32_MIN;
int32_t t19 = -32486637;
int16_t x103 = -99;
volatile uint64_t x108 = 809905178928581LLU;
static uint8_t x113 = 95U;
uint16_t x123 = 17U;
uint8_t x128 = UINT8_MAX;
int8_t x130 = INT8_MAX;
uint16_t x131 = 4U;
static uint64_t x132 = 261135473256400738LLU;
static int8_t x135 = -2;
volatile int16_t x140 = INT16_MIN;
int64_t x141 = INT64_MIN;
int64_t x144 = 636016245414LL;
uint16_t x145 = UINT16_MAX;
volatile uint32_t x150 = 1679484068U;
uint16_t x163 = 5U;
static int8_t x166 = 6;
int8_t x177 = INT8_MIN;
uint64_t x178 = 2277296LLU;
static uint32_t x179 = 1315097915U;
int64_t x182 = INT64_MIN;
static int64_t x183 = 21754481242013LL;
volatile int32_t t43 = -6609;
static volatile int16_t x187 = -1;
int64_t x190 = INT64_MAX;
static uint16_t x191 = 114U;
volatile int64_t t47 = -66246870559733LL;
int8_t x208 = -11;
uint64_t x223 = UINT64_MAX;
int32_t x228 = INT32_MIN;
static int8_t x232 = -1;
int32_t x239 = INT32_MAX;
int64_t x241 = INT64_MIN;
int8_t x247 = -1;
volatile int32_t t60 = -152176272;
static int64_t x254 = -319798721662063131LL;
static volatile int64_t t61 = -2541845187816164LL;
int64_t x258 = INT64_MIN;
int64_t x260 = INT64_MIN;
static volatile uint8_t x261 = 12U;
uint64_t x279 = 67LLU;
static uint8_t x281 = UINT8_MAX;
int32_t x287 = 4722;
int32_t x292 = INT32_MIN;
int32_t x295 = INT32_MAX;
int32_t x300 = INT32_MIN;
int64_t x302 = INT64_MIN;
uint32_t x307 = 6217307U;
int32_t t74 = 78106;
static int16_t x313 = -1;
int16_t x328 = -14609;
int32_t t79 = -9204;
volatile int32_t t80 = -30223;
volatile int32_t x334 = INT32_MAX;
volatile int32_t t81 = -367146;
static volatile int32_t t82 = -29;
int16_t x341 = 1;
int32_t t84 = 428894529;
uint32_t x353 = UINT32_MAX;
volatile int64_t t87 = 884819210361105215LL;
static uint64_t x365 = 338046076410LLU;
int64_t x367 = INT64_MAX;
int16_t x373 = INT16_MIN;
int32_t t91 = 116916;
static volatile int32_t t92 = 5708;
int64_t x384 = INT64_MAX;
int8_t x386 = -1;
int64_t x388 = -169936677893287622LL;
static volatile int64_t t94 = -48436953140035509LL;
uint16_t x392 = UINT16_MAX;
int32_t x396 = 25;
volatile int32_t x399 = -1;
int64_t x400 = INT64_MIN;
int64_t t97 = -31949293677452LL;
int32_t x402 = -1;
int64_t x407 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int16_t x2 = 16;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -324313;

	t0 = ((x1==(x2/x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 408U;
	uint16_t x6 = 5U;
	volatile int32_t x7 = 25609;
	static volatile uint32_t x8 = 3U;
	uint32_t t1 = 11U;

	t1 = ((x5==(x6/x7))&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -14969630;

	t2 = ((x9==(x10/x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = INT32_MIN;
	static volatile uint16_t x22 = 97U;
	int16_t x23 = INT16_MIN;
	int64_t t3 = -493869483520LL;

	t3 = ((x21==(x22/x23))&x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x26 = 7;
	uint64_t t4 = 6683210LLU;

	t4 = ((x25==(x26/x27))&x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x30 = -1;
	static int32_t x31 = INT32_MAX;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t5 = 1515;

	t5 = ((x29==(x30/x31))&x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MIN;
	static int64_t x34 = INT64_MIN;
	static int8_t x36 = INT8_MIN;
	int32_t t6 = 94;

	t6 = ((x33==(x34/x35))&x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 20;
	int16_t x38 = INT16_MAX;
	uint8_t x39 = 8U;
	uint8_t x40 = UINT8_MAX;

	t7 = ((x37==(x38/x39))&x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = UINT8_MAX;
	static int64_t x43 = INT64_MIN;
	int32_t t8 = -259908244;

	t8 = ((x41==(x42/x43))&x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	volatile uint16_t x46 = 490U;
	volatile int64_t x47 = INT64_MIN;
	int64_t x48 = 2380LL;

	t9 = ((x45==(x46/x47))&x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;

	t10 = ((x49==(x50/x51))&x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MIN;
	static int8_t x55 = 1;
	uint64_t x56 = 1LLU;
	uint64_t t11 = 986LLU;

	t11 = ((x53==(x54/x55))&x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;

	t12 = ((x57==(x58/x59))&x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = -1LL;
	int16_t x63 = INT16_MIN;
	static int16_t x64 = 189;
	volatile int32_t t13 = -1;

	t13 = ((x61==(x62/x63))&x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -226;
	uint8_t x66 = 1U;
	int8_t x67 = -1;
	uint32_t x68 = 12788554U;
	uint32_t t14 = 344200U;

	t14 = ((x65==(x66/x67))&x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = INT64_MIN;
	volatile int8_t x70 = 43;
	int32_t x71 = INT32_MAX;
	uint8_t x72 = 117U;
	int32_t t15 = 4282;

	t15 = ((x69==(x70/x71))&x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	static uint8_t x76 = UINT8_MAX;

	t16 = ((x73==(x74/x75))&x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -6;
	volatile int64_t x78 = 137244110502782LL;
	uint32_t x79 = 4871U;
	uint16_t x80 = UINT16_MAX;
	int32_t t17 = -10;

	t17 = ((x77==(x78/x79))&x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x82 = INT8_MAX;
	volatile int8_t x83 = INT8_MIN;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t18 = -260101;

	t18 = ((x81==(x82/x83))&x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	static int8_t x86 = 7;
	volatile int64_t x87 = INT64_MIN;
	int8_t x88 = -21;

	t19 = ((x85==(x86/x87))&x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = INT32_MIN;
	volatile int8_t x90 = 5;
	static int32_t x91 = INT32_MIN;
	uint64_t x92 = 2300780872685LLU;
	volatile uint64_t t20 = 4517711869289194LLU;

	t20 = ((x89==(x90/x91))&x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = 526312864377235LLU;
	volatile uint32_t x95 = UINT32_MAX;
	volatile uint64_t x96 = 57979587LLU;
	uint64_t t21 = 103662088867LLU;

	t21 = ((x93==(x94/x95))&x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x97 = 2077445142LLU;
	int32_t x98 = 1950;
	volatile uint32_t x99 = UINT32_MAX;
	volatile int64_t x100 = 95398626LL;
	volatile int64_t t22 = 374837355408LL;

	t22 = ((x97==(x98/x99))&x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	static int32_t x104 = 912695329;
	int32_t t23 = -124;

	t23 = ((x101==(x102/x103))&x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = INT16_MIN;
	volatile int32_t x106 = INT32_MAX;
	static int64_t x107 = -1LL;
	volatile uint64_t t24 = 1LLU;

	t24 = ((x105==(x106/x107))&x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x109 = 55013508U;
	static int16_t x110 = 654;
	static int32_t x111 = INT32_MIN;
	int32_t x112 = -1;
	static int32_t t25 = 185;

	t25 = ((x109==(x110/x111))&x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = -478;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;
	int32_t t26 = 58;

	t26 = ((x113==(x114/x115))&x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	volatile uint32_t x119 = UINT32_MAX;
	int16_t x120 = -1;
	volatile int32_t t27 = 49;

	t27 = ((x117==(x118/x119))&x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	volatile int16_t x124 = INT16_MIN;
	static volatile int32_t t28 = -64933;

	t28 = ((x121==(x122/x123))&x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	uint32_t x126 = 303302293U;
	uint32_t x127 = 151767U;
	volatile int32_t t29 = -64957;

	t29 = ((x125==(x126/x127))&x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -3;
	uint64_t t30 = 510745167LLU;

	t30 = ((x129==(x130/x131))&x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -1LL;
	int64_t x134 = -1LL;
	static int32_t x136 = INT32_MIN;
	static volatile int32_t t31 = 3;

	t31 = ((x133==(x134/x135))&x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	uint32_t x139 = UINT32_MAX;
	volatile int32_t t32 = 6;

	t32 = ((x137==(x138/x139))&x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x142 = 11755397LLU;
	uint16_t x143 = 12U;
	static int64_t t33 = -11483LL;

	t33 = ((x141==(x142/x143))&x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = 40106768742822LL;
	static int32_t x147 = -1;
	int16_t x148 = INT16_MIN;
	volatile int32_t t34 = -401808940;

	t34 = ((x145==(x146/x147))&x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	int32_t x151 = -2;
	int16_t x152 = 113;
	static volatile int32_t t35 = 2;

	t35 = ((x149==(x150/x151))&x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MIN;
	int32_t x154 = -794657534;
	volatile int32_t x155 = -64016;
	int16_t x156 = INT16_MAX;
	int32_t t36 = 1;

	t36 = ((x153==(x154/x155))&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -135;
	volatile int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	int64_t x160 = -38LL;
	volatile int64_t t37 = 267410483896714111LL;

	t37 = ((x157==(x158/x159))&x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	int16_t x164 = -859;
	static volatile int32_t t38 = -104260;

	t38 = ((x161==(x162/x163))&x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 1U;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 11872572LLU;
	volatile uint64_t t39 = 141219052140569LLU;

	t39 = ((x165==(x166/x167))&x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 45;
	uint8_t x170 = UINT8_MAX;
	static uint64_t x171 = 65210270903142LLU;
	volatile int64_t x172 = -246349774449LL;
	int64_t t40 = 1294440312LL;

	t40 = ((x169==(x170/x171))&x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x173 = -1;
	int64_t x174 = -1LL;
	static volatile int32_t x175 = -1103447;
	uint16_t x176 = 690U;
	volatile int32_t t41 = -21;

	t41 = ((x173==(x174/x175))&x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t42 = 39862142U;

	t42 = ((x177==(x178/x179))&x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	int32_t x184 = -159;

	t43 = ((x181==(x182/x183))&x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -168;
	int64_t x186 = INT64_MAX;
	int64_t x188 = 5159824554069471LL;
	volatile int64_t t44 = -110379365453199LL;

	t44 = ((x185==(x186/x187))&x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	volatile uint8_t x192 = 3U;
	volatile int32_t t45 = 581;

	t45 = ((x189==(x190/x191))&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -6;
	int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	volatile int8_t x196 = -1;
	int32_t t46 = -11142929;

	t46 = ((x193==(x194/x195))&x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 178122609LLU;
	static uint8_t x198 = UINT8_MAX;
	static int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MAX;

	t47 = ((x197==(x198/x199))&x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	volatile int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t48 = -3244;

	t48 = ((x201==(x202/x203))&x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -18;
	uint64_t x206 = UINT64_MAX;
	uint64_t x207 = 62LLU;
	int32_t t49 = 178;

	t49 = ((x205==(x206/x207))&x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MAX;
	int32_t x210 = -1;
	volatile uint32_t x211 = UINT32_MAX;
	uint8_t x212 = 12U;
	int32_t t50 = -100;

	t50 = ((x209==(x210/x211))&x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 32215256718LLU;
	static volatile int16_t x214 = -13;
	uint16_t x215 = UINT16_MAX;
	static int8_t x216 = INT8_MAX;
	volatile int32_t t51 = 92530;

	t51 = ((x213==(x214/x215))&x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x217 = -1;
	int32_t x218 = 5;
	static int8_t x219 = INT8_MIN;
	int16_t x220 = -6050;
	static volatile int32_t t52 = -2376988;

	t52 = ((x217==(x218/x219))&x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 756259192U;
	int32_t x222 = INT32_MIN;
	int16_t x224 = -14;
	volatile int32_t t53 = -14;

	t53 = ((x221==(x222/x223))&x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = -1LL;
	static uint16_t x227 = UINT16_MAX;
	volatile int32_t t54 = 800447;

	t54 = ((x225==(x226/x227))&x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = -1;
	int32_t t55 = -3;

	t55 = ((x229==(x230/x231))&x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MAX;
	int32_t t56 = -323;

	t56 = ((x233==(x234/x235))&x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	int16_t x240 = INT16_MAX;
	int32_t t57 = -452;

	t57 = ((x237==(x238/x239))&x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x242 = UINT16_MAX;
	static uint64_t x243 = UINT64_MAX;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t58 = -11044;

	t58 = ((x241==(x242/x243))&x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = 1LL;
	volatile int32_t x246 = -1;
	static int16_t x248 = -1;
	static volatile int32_t t59 = -1200447;

	t59 = ((x245==(x246/x247))&x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -705408121053197LL;
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	static int8_t x252 = INT8_MIN;

	t60 = ((x249==(x250/x251))&x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 18U;
	int16_t x255 = -1;
	int64_t x256 = 59297LL;

	t61 = ((x253==(x254/x255))&x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	volatile int64_t t62 = 0LL;

	t62 = ((x257==(x258/x259))&x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x262 = 3U;
	volatile int8_t x263 = INT8_MIN;
	int64_t x264 = 18017051661973LL;
	int64_t t63 = 47LL;

	t63 = ((x261==(x262/x263))&x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x265 = 2538601;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -1;
	static volatile int32_t x268 = 845088092;
	volatile int32_t t64 = -2619;

	t64 = ((x265==(x266/x267))&x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x269 = 249U;
	static int16_t x270 = INT16_MAX;
	volatile uint64_t x271 = 205065789335608LLU;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t65 = 501868951;

	t65 = ((x269==(x270/x271))&x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x273 = 5984LLU;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 62U;
	int32_t t66 = -3;

	t66 = ((x273==(x274/x275))&x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 0U;
	int32_t x278 = INT32_MIN;
	uint16_t x280 = 7548U;
	int32_t t67 = -58600860;

	t67 = ((x277==(x278/x279))&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t68 = 136LL;

	t68 = ((x281==(x282/x283))&x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x285 = 8U;
	uint16_t x286 = 20U;
	int8_t x288 = INT8_MIN;
	int32_t t69 = 2314496;

	t69 = ((x285==(x286/x287))&x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 25U;
	int8_t x290 = 1;
	uint64_t x291 = UINT64_MAX;
	int32_t t70 = 7298465;

	t70 = ((x289==(x290/x291))&x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 29;
	static int16_t x294 = -1;
	static int8_t x296 = -1;
	int32_t t71 = 4;

	t71 = ((x293==(x294/x295))&x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1503589004LL;
	volatile uint32_t x298 = 14465U;
	volatile uint32_t x299 = 6U;
	volatile int32_t t72 = -29453;

	t72 = ((x297==(x298/x299))&x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x303 = -2551782737123198LL;
	uint32_t x304 = UINT32_MAX;
	uint32_t t73 = 183245U;

	t73 = ((x301==(x302/x303))&x304);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	uint16_t x308 = UINT16_MAX;

	t74 = ((x305==(x306/x307))&x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	int32_t x310 = -495;
	int32_t x311 = -1;
	int64_t x312 = INT64_MIN;
	int64_t t75 = 24613LL;

	t75 = ((x309==(x310/x311))&x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x314 = 61U;
	int8_t x315 = -1;
	int8_t x316 = 30;
	int32_t t76 = 6040128;

	t76 = ((x313==(x314/x315))&x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 25U;
	static uint8_t x318 = 0U;
	int8_t x319 = -1;
	uint64_t x320 = 230474LLU;
	volatile uint64_t t77 = 980588820363LLU;

	t77 = ((x317==(x318/x319))&x320);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x321 = INT64_MIN;
	int32_t x322 = 6149;
	volatile uint32_t x323 = 1030565U;
	uint64_t x324 = 848903989297LLU;
	static uint64_t t78 = 1403019268486651362LLU;

	t78 = ((x321==(x322/x323))&x324);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = INT32_MIN;
	static int32_t x326 = INT32_MIN;
	static volatile int16_t x327 = -2806;

	t79 = ((x325==(x326/x327))&x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = 0LL;
	int32_t x330 = INT32_MIN;
	static int32_t x331 = -2774368;
	int16_t x332 = -1;

	t80 = ((x329==(x330/x331))&x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x333 = 7768117U;
	uint16_t x335 = 1U;
	int8_t x336 = -1;

	t81 = ((x333==(x334/x335))&x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = 140LL;
	int8_t x338 = INT8_MIN;
	int64_t x339 = 257125LL;
	int32_t x340 = -1;

	t82 = ((x337==(x338/x339))&x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 7017U;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t83 = -360549;

	t83 = ((x341==(x342/x343))&x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = -1;
	int32_t x346 = -539165641;
	int16_t x347 = INT16_MAX;
	static uint8_t x348 = UINT8_MAX;

	t84 = ((x345==(x346/x347))&x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1LL;
	static uint64_t x350 = UINT64_MAX;
	uint64_t x351 = UINT64_MAX;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t85 = 0;

	t85 = ((x349==(x350/x351))&x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x354 = -1;
	uint32_t x355 = 838509241U;
	uint8_t x356 = UINT8_MAX;
	static volatile int32_t t86 = -53954474;

	t86 = ((x353==(x354/x355))&x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x357 = 10511;
	uint16_t x358 = UINT16_MAX;
	uint16_t x359 = 1463U;
	volatile int64_t x360 = INT64_MIN;

	t87 = ((x357==(x358/x359))&x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -3570102274LL;
	int32_t x362 = INT32_MIN;
	volatile int64_t x363 = -1LL;
	uint16_t x364 = 1414U;
	int32_t t88 = -737096;

	t88 = ((x361==(x362/x363))&x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x366 = 28706569U;
	volatile uint64_t x368 = UINT64_MAX;
	uint64_t t89 = 42008991406868224LLU;

	t89 = ((x365==(x366/x367))&x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x369 = UINT32_MAX;
	volatile int16_t x370 = INT16_MIN;
	volatile int8_t x371 = -47;
	volatile int8_t x372 = INT8_MAX;
	volatile int32_t t90 = -67112;

	t90 = ((x369==(x370/x371))&x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = 0;
	uint8_t x375 = 1U;
	int32_t x376 = -3067;

	t91 = ((x373==(x374/x375))&x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 22LLU;
	int64_t x379 = -437LL;
	uint8_t x380 = UINT8_MAX;

	t92 = ((x377==(x378/x379))&x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x381 = INT64_MAX;
	int8_t x382 = INT8_MIN;
	static int64_t x383 = INT64_MIN;
	static volatile int64_t t93 = -859LL;

	t93 = ((x381==(x382/x383))&x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MAX;
	int32_t x387 = -1;

	t94 = ((x385==(x386/x387))&x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x389 = 14107U;
	uint64_t x390 = 4216626480LLU;
	uint32_t x391 = UINT32_MAX;
	int32_t t95 = -9;

	t95 = ((x389==(x390/x391))&x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = -1LL;
	volatile uint16_t x395 = 3434U;
	volatile int32_t t96 = -1;

	t96 = ((x393==(x394/x395))&x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 3356U;
	uint64_t x398 = UINT64_MAX;

	t97 = ((x397==(x398/x399))&x400);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MAX;
	int64_t x403 = 1351213LL;
	uint32_t x404 = 59757U;
	static uint32_t t98 = 765544924U;

	t98 = ((x401==(x402/x403))&x404);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x405 = UINT8_MAX;
	uint8_t x406 = UINT8_MAX;
	static int8_t x408 = INT8_MAX;
	int32_t t99 = -72592014;

	t99 = ((x405==(x406/x407))&x408);

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

