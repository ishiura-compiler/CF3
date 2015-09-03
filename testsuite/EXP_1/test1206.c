#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = 7;
int32_t t2 = -219728101;
int32_t x13 = -1;
uint32_t x19 = 13U;
uint16_t x25 = UINT16_MAX;
volatile uint64_t x28 = 3568178609650LLU;
int32_t t5 = -585;
volatile int32_t t6 = 6;
uint8_t x33 = 1U;
volatile int32_t t8 = -33574;
static int32_t x47 = -1;
uint8_t x49 = UINT8_MAX;
static volatile int32_t t11 = -4;
int16_t x53 = INT16_MAX;
static int16_t x54 = -20;
uint32_t x58 = 3U;
static uint8_t x59 = 5U;
volatile int32_t x66 = 24384;
int8_t x71 = INT8_MIN;
volatile int32_t t16 = -11459959;
uint64_t x82 = UINT64_MAX;
int32_t x86 = -207;
int64_t x92 = INT64_MIN;
int32_t x102 = INT32_MIN;
static int16_t x110 = 180;
int16_t x114 = INT16_MIN;
static volatile int32_t t29 = 12326;
volatile int32_t t30 = 24822553;
volatile uint8_t x129 = 2U;
int8_t x136 = INT8_MIN;
int64_t x140 = -919703739LL;
volatile int32_t t36 = -770214;
static volatile int8_t x153 = INT8_MIN;
static int32_t x154 = INT32_MIN;
int8_t x155 = INT8_MAX;
volatile int32_t t37 = 4705;
volatile int16_t x158 = -1;
uint64_t x160 = 6710718741153709LLU;
volatile int32_t t38 = -9948;
int8_t x165 = 2;
uint32_t x167 = 564U;
uint16_t x169 = 590U;
int64_t x184 = -4LL;
volatile uint64_t x188 = UINT64_MAX;
static int32_t x190 = INT32_MIN;
int32_t t45 = 12921;
uint64_t x195 = UINT64_MAX;
int16_t x197 = 2;
volatile uint16_t x198 = 3U;
uint64_t x199 = UINT64_MAX;
volatile int32_t t47 = 69;
int8_t x208 = INT8_MIN;
static volatile int32_t t48 = -17049073;
int32_t t49 = 77126894;
static int8_t x215 = INT8_MIN;
int32_t x219 = INT32_MAX;
int32_t x221 = 179130448;
int8_t x226 = INT8_MIN;
int8_t x232 = INT8_MIN;
volatile int32_t t54 = 24416;
int32_t t56 = -1;
int64_t x244 = -288LL;
int32_t x246 = INT32_MIN;
static volatile int32_t x251 = -198022896;
static uint16_t x260 = 30588U;
volatile int16_t x268 = INT16_MAX;
int32_t x272 = INT32_MAX;
int64_t x282 = -1LL;
int8_t x286 = -63;
uint64_t x287 = UINT64_MAX;
int32_t x298 = INT32_MIN;
static int32_t t67 = -232714026;
volatile int32_t t68 = 160543135;
static int64_t x308 = INT64_MIN;
int64_t x310 = INT64_MIN;
int32_t t71 = 25836;
int16_t x325 = -1;
uint8_t x330 = UINT8_MAX;
uint8_t x331 = 3U;
uint32_t x337 = UINT32_MAX;
int64_t x340 = INT64_MIN;
volatile int32_t t75 = -41896;
uint8_t x343 = UINT8_MAX;
uint8_t x347 = UINT8_MAX;
static int32_t x348 = INT32_MIN;
int16_t x350 = INT16_MAX;
static volatile int32_t t78 = 30353;
static int64_t x353 = INT64_MIN;
int32_t x354 = -2;
static int16_t x356 = 3176;
volatile int64_t x357 = INT64_MIN;
uint32_t x360 = UINT32_MAX;
static uint16_t x372 = 377U;
int32_t t83 = -981416941;
volatile uint16_t x379 = 25395U;
int64_t x389 = 117101993872LL;
int8_t x392 = INT8_MAX;
static volatile int32_t t87 = 665;
volatile uint8_t x398 = UINT8_MAX;
uint32_t x400 = 1485680954U;
uint32_t x410 = UINT32_MAX;
static int32_t t93 = 4639935;
static volatile uint16_t x422 = UINT16_MAX;
static volatile int32_t t94 = -143;
static int16_t x433 = INT16_MIN;
static volatile int32_t x435 = INT32_MAX;
static int8_t x443 = INT8_MIN;
int32_t t98 = -5083;
static uint8_t x445 = 19U;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = 6269;
	int64_t x3 = INT64_MAX;
	int64_t x4 = -5178629324LL;
	volatile int32_t t0 = -65510761;

	t0 = (((x1==x2)-x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 46;
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = 1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 709632140;

	t1 = (((x5==x6)-x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile int64_t x11 = -1LL;
	int64_t x12 = INT64_MIN;

	t2 = (((x9==x10)-x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = 803106150LL;
	uint8_t x15 = UINT8_MAX;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -221907687;

	t3 = (((x13==x14)-x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	static int8_t x20 = 2;
	volatile int32_t t4 = 165;

	t4 = (((x17==x18)-x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x26 = -1;
	volatile uint16_t x27 = 49U;

	t5 = (((x25==x26)-x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = -41285460515704232LL;
	uint8_t x30 = UINT8_MAX;
	uint64_t x31 = 84444473864LLU;
	int16_t x32 = INT16_MAX;

	t6 = (((x29==x30)-x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	int64_t x35 = -1LL;
	volatile int16_t x36 = -1;
	volatile int32_t t7 = 410;

	t7 = (((x33==x34)-x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -1;
	static int8_t x38 = -1;
	int8_t x39 = 2;
	int32_t x40 = INT32_MAX;

	t8 = (((x37==x38)-x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static volatile int32_t x42 = -1;
	int8_t x43 = 2;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = -2867039;

	t9 = (((x41==x42)-x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	int32_t x46 = 384369;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 11311;

	t10 = (((x45==x46)-x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x50 = 13U;
	volatile uint32_t x51 = 86U;
	volatile int16_t x52 = INT16_MAX;

	t11 = (((x49==x50)-x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x55 = 8U;
	int8_t x56 = -1;
	volatile int32_t t12 = 5;

	t12 = (((x53==x54)-x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	int64_t x60 = INT64_MAX;
	volatile int32_t t13 = 2;

	t13 = (((x57==x58)-x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 119608808LLU;
	uint64_t x62 = 4720253389466662LLU;
	static volatile int32_t x63 = INT32_MAX;
	uint64_t x64 = 108490618LLU;
	int32_t t14 = -14605;

	t14 = (((x61==x62)-x63)<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 7U;
	int32_t x67 = -5156;
	int32_t x68 = INT32_MAX;
	int32_t t15 = 6128;

	t15 = (((x65==x66)-x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = 3;
	static uint16_t x70 = 7884U;
	int16_t x72 = -5946;

	t16 = (((x69==x70)-x71)<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 1101U;
	int32_t x74 = INT32_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = -1;
	int32_t t17 = -41170;

	t17 = (((x73==x74)-x75)<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MAX;
	int8_t x78 = -1;
	int8_t x79 = INT8_MIN;
	static volatile int8_t x80 = INT8_MIN;
	int32_t t18 = -1726;

	t18 = (((x77==x78)-x79)<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int32_t x83 = -1;
	static int32_t x84 = -3823412;
	volatile int32_t t19 = -9;

	t19 = (((x81==x82)-x83)<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	static uint8_t x87 = UINT8_MAX;
	static volatile int16_t x88 = INT16_MIN;
	volatile int32_t t20 = -1;

	t20 = (((x85==x86)-x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	uint32_t x91 = 2239363U;
	int32_t t21 = 100747651;

	t21 = (((x89==x90)-x91)<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 26U;
	int32_t x94 = -1;
	int16_t x95 = 4415;
	int64_t x96 = INT64_MIN;
	int32_t t22 = -3853512;

	t22 = (((x93==x94)-x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MAX;
	static int32_t x98 = INT32_MAX;
	static uint16_t x99 = 1211U;
	uint8_t x100 = 13U;
	volatile int32_t t23 = 188613720;

	t23 = (((x97==x98)-x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	static int8_t x103 = INT8_MIN;
	static uint64_t x104 = 491484286013789LLU;
	int32_t t24 = 17369412;

	t24 = (((x101==x102)-x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	static uint32_t x108 = 672U;
	int32_t t25 = -2066353;

	t25 = (((x105==x106)-x107)<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 109U;
	int64_t x111 = -1LL;
	int32_t x112 = -279892607;
	int32_t t26 = -645767575;

	t26 = (((x109==x110)-x111)<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 16032;
	static int32_t x115 = -1;
	int64_t x116 = INT64_MIN;
	int32_t t27 = -1;

	t27 = (((x113==x114)-x115)<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	int16_t x119 = 2;
	volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t28 = 252;

	t28 = (((x117==x118)-x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 9122064LLU;
	int32_t x122 = INT32_MIN;
	static int64_t x123 = -224769531316176223LL;
	static int64_t x124 = INT64_MIN;

	t29 = (((x121==x122)-x123)<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x125 = 47U;
	static uint32_t x126 = 38678U;
	uint32_t x127 = 3327U;
	int64_t x128 = INT64_MIN;

	t30 = (((x125==x126)-x127)<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x130 = 23U;
	int8_t x131 = 0;
	static int8_t x132 = -1;
	volatile int32_t t31 = 0;

	t31 = (((x129==x130)-x131)<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = 9;
	int64_t x135 = INT64_MAX;
	int32_t t32 = -4233880;

	t32 = (((x133==x134)-x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -63;
	int64_t x138 = INT64_MAX;
	uint32_t x139 = 4370U;
	int32_t t33 = -1;

	t33 = (((x137==x138)-x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = 34;
	volatile int64_t x142 = INT64_MIN;
	uint64_t x143 = UINT64_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t34 = -30118;

	t34 = (((x141==x142)-x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 31796634977080045LL;
	static volatile int16_t x146 = -1;
	static int8_t x147 = -1;
	uint16_t x148 = 1480U;
	volatile int32_t t35 = -40493145;

	t35 = (((x145==x146)-x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -220561;
	uint16_t x152 = UINT16_MAX;

	t36 = (((x149==x150)-x151)<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x156 = -1LL;

	t37 = (((x153==x154)-x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x157 = UINT8_MAX;
	volatile uint32_t x159 = 1000919U;

	t38 = (((x157==x158)-x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = -1;
	static volatile uint8_t x163 = 1U;
	int64_t x164 = -65198578524322LL;
	int32_t t39 = -19284;

	t39 = (((x161==x162)-x163)<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x166 = 77U;
	int64_t x168 = INT64_MAX;
	static int32_t t40 = -492;

	t40 = (((x165==x166)-x167)<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x170 = 30U;
	int16_t x171 = INT16_MIN;
	static uint32_t x172 = 2039U;
	int32_t t41 = 2178169;

	t41 = (((x169==x170)-x171)<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -11;
	uint64_t x178 = 103LLU;
	uint64_t x179 = 69534963527475279LLU;
	uint32_t x180 = 80338U;
	volatile int32_t t42 = 930207521;

	t42 = (((x177==x178)-x179)<=x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 91LLU;
	static volatile int16_t x182 = 241;
	uint64_t x183 = 1154532292184LLU;
	int32_t t43 = 10;

	t43 = (((x181==x182)-x183)<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = -84802;
	static int8_t x187 = INT8_MIN;
	int32_t t44 = 1026660900;

	t44 = (((x185==x186)-x187)<=x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = INT8_MIN;
	static int16_t x191 = INT16_MIN;
	static uint16_t x192 = UINT16_MAX;

	t45 = (((x189==x190)-x191)<=x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = INT16_MIN;
	uint64_t x194 = 7486196777837LLU;
	volatile uint8_t x196 = 74U;
	volatile int32_t t46 = -23;

	t46 = (((x193==x194)-x195)<=x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x200 = INT16_MIN;

	t47 = (((x197==x198)-x199)<=x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x206 = INT32_MIN;
	volatile uint32_t x207 = UINT32_MAX;

	t48 = (((x205==x206)-x207)<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	volatile uint16_t x211 = 521U;
	int64_t x212 = 8199168LL;

	t49 = (((x209==x210)-x211)<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = UINT8_MAX;
	volatile int16_t x214 = 43;
	static int32_t x216 = -1;
	int32_t t50 = -756926;

	t50 = (((x213==x214)-x215)<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = -1LL;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t51 = -9238;

	t51 = (((x217==x218)-x219)<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 677U;
	int32_t t52 = 13;

	t52 = (((x221==x222)-x223)<=x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 58349U;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = 1U;
	int32_t t53 = -50;

	t53 = (((x225==x226)-x227)<=x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x229 = -14916036;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MAX;

	t54 = (((x229==x230)-x231)<=x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MAX;
	int64_t x234 = -1LL;
	static int64_t x235 = INT64_MAX;
	static int16_t x236 = INT16_MAX;
	int32_t t55 = 25024;

	t55 = (((x233==x234)-x235)<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = 921348369;
	static uint16_t x238 = 3U;
	static int16_t x239 = 0;
	int32_t x240 = INT32_MIN;

	t56 = (((x237==x238)-x239)<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MAX;
	uint16_t x242 = 32U;
	static uint32_t x243 = UINT32_MAX;
	static int32_t t57 = 0;

	t57 = (((x241==x242)-x243)<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	int8_t x247 = INT8_MIN;
	static volatile int32_t x248 = INT32_MIN;
	int32_t t58 = 21;

	t58 = (((x245==x246)-x247)<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x249 = UINT64_MAX;
	int32_t x250 = 6138;
	uint16_t x252 = UINT16_MAX;
	static volatile int32_t t59 = 8;

	t59 = (((x249==x250)-x251)<=x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MAX;
	volatile int32_t t60 = 3608;

	t60 = (((x257==x258)-x259)<=x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = INT64_MIN;
	static volatile int8_t x266 = -45;
	int8_t x267 = -24;
	volatile int32_t t61 = 644;

	t61 = (((x265==x266)-x267)<=x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x269 = 22169U;
	int8_t x270 = 1;
	static uint8_t x271 = UINT8_MAX;
	static int32_t t62 = -1001;

	t62 = (((x269==x270)-x271)<=x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t63 = 2;

	t63 = (((x277==x278)-x279)<=x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x281 = INT32_MIN;
	static int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MAX;
	static int32_t t64 = 3739543;

	t64 = (((x281==x282)-x283)<=x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	int64_t x288 = 6615555810LL;
	volatile int32_t t65 = 3;

	t65 = (((x285==x286)-x287)<=x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 5365894043951LLU;
	int16_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int32_t x296 = 442474;
	static int32_t t66 = 12;

	t66 = (((x293==x294)-x295)<=x296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x297 = 2014U;
	int64_t x299 = -1LL;
	static int16_t x300 = 56;

	t67 = (((x297==x298)-x299)<=x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x301 = 552355041;
	int8_t x302 = INT8_MAX;
	int8_t x303 = 2;
	int64_t x304 = INT64_MAX;

	t68 = (((x301==x302)-x303)<=x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = 247;
	static int16_t x306 = INT16_MIN;
	volatile int16_t x307 = INT16_MIN;
	static volatile int32_t t69 = -9023638;

	t69 = (((x305==x306)-x307)<=x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x311 = -172932187726688705LL;
	static int16_t x312 = INT16_MIN;
	int32_t t70 = -6558891;

	t70 = (((x309==x310)-x311)<=x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = INT64_MAX;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = -1;
	volatile uint16_t x320 = 92U;

	t71 = (((x317==x318)-x319)<=x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x326 = 342;
	int32_t x327 = INT32_MAX;
	int32_t x328 = -1;
	int32_t t72 = -29350961;

	t72 = (((x325==x326)-x327)<=x328);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x329 = 70U;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t73 = -33;

	t73 = (((x329==x330)-x331)<=x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -258;
	volatile int8_t x334 = INT8_MIN;
	volatile int64_t x335 = -57169594LL;
	int32_t x336 = -1307973;
	static volatile int32_t t74 = -28;

	t74 = (((x333==x334)-x335)<=x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x338 = -1;
	uint16_t x339 = 164U;

	t75 = (((x337==x338)-x339)<=x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = -1;
	int64_t x344 = -1LL;
	volatile int32_t t76 = -6;

	t76 = (((x341==x342)-x343)<=x344);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = -8051;
	int32_t x346 = INT32_MIN;
	int32_t t77 = 15;

	t77 = (((x345==x346)-x347)<=x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	int32_t x352 = -14965135;

	t78 = (((x349==x350)-x351)<=x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x355 = 130;
	volatile int32_t t79 = 932437;

	t79 = (((x353==x354)-x355)<=x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x358 = 38399454376620LL;
	volatile int32_t x359 = INT32_MAX;
	int32_t t80 = 30;

	t80 = (((x357==x358)-x359)<=x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint8_t x362 = 4U;
	static int8_t x363 = -1;
	int64_t x364 = -1LL;
	int32_t t81 = 88378;

	t81 = (((x361==x362)-x363)<=x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = 0U;
	int32_t x370 = INT32_MIN;
	uint32_t x371 = 1713288U;
	volatile int32_t t82 = 538371;

	t82 = (((x369==x370)-x371)<=x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = 1;
	int8_t x374 = INT8_MIN;
	static int8_t x375 = -1;
	int16_t x376 = INT16_MIN;

	t83 = (((x373==x374)-x375)<=x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x377 = -1;
	int16_t x378 = INT16_MIN;
	static volatile int64_t x380 = 4893209484228661LL;
	int32_t t84 = 420750464;

	t84 = (((x377==x378)-x379)<=x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 109434943011020LLU;
	volatile int32_t t85 = 0;

	t85 = (((x381==x382)-x383)<=x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = 46U;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 74448U;
	int32_t x388 = 0;
	int32_t t86 = 134860035;

	t86 = (((x385==x386)-x387)<=x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x390 = -1;
	int8_t x391 = 1;

	t87 = (((x389==x390)-x391)<=x392);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = INT32_MAX;
	static int32_t x394 = INT32_MAX;
	int16_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	int32_t t88 = 5121157;

	t88 = (((x393==x394)-x395)<=x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x397 = 0;
	int64_t x399 = 5465518LL;
	int32_t t89 = 14945693;

	t89 = (((x397==x398)-x399)<=x400);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x401 = 754617462U;
	int16_t x402 = INT16_MIN;
	int8_t x403 = 0;
	volatile uint32_t x404 = 222480363U;
	volatile int32_t t90 = 734686;

	t90 = (((x401==x402)-x403)<=x404);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x405 = 668684748U;
	volatile int32_t x406 = INT32_MAX;
	int16_t x407 = INT16_MAX;
	volatile int32_t x408 = INT32_MIN;
	int32_t t91 = -83860225;

	t91 = (((x405==x406)-x407)<=x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MAX;
	static volatile int32_t x411 = -1;
	volatile uint8_t x412 = 95U;
	static int32_t t92 = -1;

	t92 = (((x409==x410)-x411)<=x412);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = 10;
	volatile uint16_t x414 = UINT16_MAX;
	uint32_t x415 = 29U;
	int64_t x416 = 10111947875777LL;

	t93 = (((x413==x414)-x415)<=x416);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = INT32_MIN;
	static int64_t x423 = -1LL;
	uint16_t x424 = 2212U;

	t94 = (((x421==x422)-x423)<=x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = 2;
	static int64_t x426 = INT64_MAX;
	uint64_t x427 = 25LLU;
	int8_t x428 = -2;
	static volatile int32_t t95 = -40;

	t95 = (((x425==x426)-x427)<=x428);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = UINT32_MAX;
	static volatile uint64_t x430 = 130920927851194LLU;
	int16_t x431 = -1;
	int32_t x432 = 65311;
	int32_t t96 = -1806;

	t96 = (((x429==x430)-x431)<=x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x434 = -1;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t97 = 6;

	t97 = (((x433==x434)-x435)<=x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = INT32_MAX;
	volatile int64_t x442 = INT64_MIN;
	int8_t x444 = -4;

	t98 = (((x441==x442)-x443)<=x444);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x446 = INT8_MAX;
	static uint32_t x447 = 218U;
	uint16_t x448 = UINT16_MAX;
	int32_t t99 = 895473;

	t99 = (((x445==x446)-x447)<=x448);

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

