#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -11576935;
uint64_t x10 = 1LLU;
static volatile int32_t t2 = -210261;
int32_t x13 = INT32_MIN;
int16_t x16 = INT16_MAX;
volatile int32_t t4 = -30999989;
int32_t t9 = -89894476;
uint16_t x43 = 2979U;
volatile int32_t x62 = INT32_MIN;
static int16_t x75 = -24;
int32_t t18 = 2056951;
volatile int32_t t19 = 218585;
int64_t x85 = INT64_MIN;
int32_t t22 = -7171;
static volatile uint8_t x94 = 64U;
int32_t t24 = 125;
uint8_t x104 = 7U;
int64_t x107 = -1LL;
int16_t x108 = INT16_MAX;
volatile int8_t x111 = -4;
static volatile int64_t x113 = 1686088426356579497LL;
uint16_t x115 = 22241U;
int32_t t29 = 86;
int64_t x121 = INT64_MIN;
static int16_t x130 = INT16_MIN;
static volatile int32_t t32 = 16581793;
uint16_t x137 = 1U;
uint8_t x140 = UINT8_MAX;
uint32_t x141 = UINT32_MAX;
int16_t x142 = 153;
int32_t t35 = -5145466;
uint16_t x145 = 3450U;
uint64_t x150 = UINT64_MAX;
int64_t x154 = 641607471LL;
int8_t x159 = -1;
static uint16_t x160 = 3U;
int64_t x168 = INT64_MIN;
uint8_t x169 = 59U;
uint32_t x170 = 19119U;
uint16_t x171 = UINT16_MAX;
volatile uint16_t x172 = 4U;
static volatile int32_t t42 = -47203035;
uint32_t x186 = 373U;
uint8_t x187 = 9U;
int64_t x198 = 304519LL;
int8_t x206 = -7;
int64_t x208 = 3LL;
int64_t x209 = 124261467381791LL;
uint16_t x210 = UINT16_MAX;
volatile int8_t x212 = -1;
volatile int32_t t53 = -3557;
uint32_t x223 = 87364U;
static volatile int32_t t56 = -3920;
static int8_t x231 = INT8_MIN;
volatile int32_t t58 = -1381283;
static volatile uint16_t x244 = 1U;
int8_t x245 = -1;
volatile uint64_t x251 = 2566307146959179576LLU;
static int32_t t62 = 1843;
static int32_t x257 = INT32_MIN;
uint64_t x258 = 1148LLU;
int64_t x263 = -3910187487275LL;
volatile int8_t x272 = -1;
int16_t x273 = -3962;
uint16_t x278 = 30U;
static int64_t x279 = 9LL;
volatile int32_t t70 = -3263;
volatile int16_t x290 = 1;
uint32_t x298 = UINT32_MAX;
volatile int64_t x299 = INT64_MAX;
int64_t x301 = -1LL;
static int8_t x303 = INT8_MIN;
int16_t x307 = INT16_MAX;
volatile uint32_t x309 = 35796U;
volatile int32_t t77 = -1933196;
int8_t x314 = INT8_MIN;
int8_t x315 = INT8_MAX;
volatile uint8_t x316 = 13U;
int32_t x319 = -1;
int8_t x321 = INT8_MIN;
volatile int32_t t80 = 2965;
static int64_t x325 = 9707LL;
volatile int32_t t82 = -341;
int16_t x333 = INT16_MIN;
int8_t x336 = -1;
int16_t x337 = INT16_MIN;
uint32_t x340 = 1U;
int32_t t84 = -7327;
int32_t x349 = 2370;
uint32_t x350 = 1387595U;
int32_t x351 = INT32_MIN;
uint16_t x354 = 47U;
volatile int64_t x357 = INT64_MIN;
int8_t x363 = -1;
uint8_t x366 = UINT8_MAX;
int8_t x369 = INT8_MAX;
uint64_t x371 = UINT64_MAX;
static int16_t x376 = -13;
volatile uint8_t x383 = UINT8_MAX;
static volatile int16_t x384 = 841;
volatile int64_t x385 = -1LL;
int16_t x386 = -41;
int16_t x388 = INT16_MAX;
static uint8_t x399 = 1U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int32_t x2 = -1;
	static int32_t x3 = INT32_MIN;
	uint8_t x4 = 2U;
	int32_t t0 = -6438631;

	t0 = ((x1==(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MAX;
	int8_t x6 = -1;
	int64_t x7 = 13308580811970863LL;
	int64_t x8 = INT64_MIN;

	t1 = ((x5==(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static uint32_t x11 = 1022201646U;
	uint64_t x12 = 2354799288398830LLU;

	t2 = ((x9==(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = -7;
	int32_t x15 = -1661011;
	static volatile int32_t t3 = -8;

	t3 = ((x13==(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -7605;
	static uint32_t x18 = 20U;
	int8_t x19 = 10;
	static int64_t x20 = INT64_MIN;

	t4 = ((x17==(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x22 = -1;
	uint16_t x23 = 204U;
	static int32_t x24 = 876;
	int32_t t5 = 78;

	t5 = ((x21==(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 9;
	volatile uint8_t x26 = 1U;
	volatile int32_t x27 = INT32_MIN;
	uint16_t x28 = 2697U;
	volatile int32_t t6 = 0;

	t6 = ((x25==(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 1528;
	int16_t x30 = -3424;
	volatile int32_t x31 = INT32_MIN;
	static volatile int64_t x32 = -78105724815660957LL;
	volatile int32_t t7 = -1;

	t7 = ((x29==(x30&x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	static uint8_t x34 = 6U;
	int64_t x35 = -2300099374997176LL;
	volatile int64_t x36 = INT64_MIN;
	int32_t t8 = 1667434;

	t8 = ((x33==(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MAX;

	t9 = ((x37==(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int16_t x42 = -9511;
	volatile int16_t x44 = -3;
	volatile int32_t t10 = -248;

	t10 = ((x41==(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 3294667847LLU;
	int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	int32_t t11 = 2;

	t11 = ((x45==(x46&x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -81436717073262756LL;
	int8_t x50 = INT8_MAX;
	static int8_t x51 = INT8_MIN;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = -11755;

	t12 = ((x49==(x50&x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 4U;
	uint16_t x54 = 50U;
	uint64_t x55 = 1396576009665218210LLU;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 11869;

	t13 = ((x53==(x54&x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 1142407906967811082LL;
	int32_t x58 = -129306;
	volatile uint8_t x59 = UINT8_MAX;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = -410324;

	t14 = ((x57==(x58&x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x63 = 7539;
	static uint32_t x64 = 9U;
	int32_t t15 = 28633;

	t15 = ((x61==(x62&x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 21041U;
	uint16_t x66 = 1678U;
	uint64_t x67 = 470111330805283LLU;
	int16_t x68 = -1;
	int32_t t16 = -29;

	t16 = ((x65==(x66&x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MAX;
	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = -1;
	int32_t t17 = -105;

	t17 = ((x69==(x70&x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 37417167LLU;
	static int32_t x74 = -1;
	int16_t x76 = -1;

	t18 = ((x73==(x74&x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -25;
	uint8_t x78 = 14U;
	volatile int8_t x79 = INT8_MIN;
	volatile uint32_t x80 = UINT32_MAX;

	t19 = ((x77==(x78&x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 674LLU;
	volatile int64_t x83 = 5505619541LL;
	int16_t x84 = 362;
	static volatile int32_t t20 = 10707;

	t20 = ((x81==(x82&x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 21U;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -24;

	t21 = ((x85==(x86&x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = 284243487LL;
	int32_t x90 = -1;
	int64_t x91 = 261658816269325LL;
	uint16_t x92 = 1U;

	t22 = ((x89==(x90&x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 65U;
	volatile uint64_t x95 = 523156410LLU;
	static int8_t x96 = INT8_MIN;
	static int32_t t23 = -98966;

	t23 = ((x93==(x94&x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = -1;
	volatile int64_t x99 = INT64_MIN;
	volatile int32_t x100 = -1;

	t24 = ((x97==(x98&x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 551873729LLU;
	static uint16_t x102 = 28U;
	int32_t x103 = INT32_MIN;
	int32_t t25 = 1170;

	t25 = ((x101==(x102&x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 257U;
	volatile uint32_t x106 = 640U;
	int32_t t26 = 753760;

	t26 = ((x105==(x106&x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 10U;
	int16_t x110 = INT16_MIN;
	static int16_t x112 = INT16_MAX;
	static volatile int32_t t27 = -39;

	t27 = ((x109==(x110&x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 200LLU;
	volatile int16_t x116 = 6;
	volatile int32_t t28 = 3;

	t28 = ((x113==(x114&x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int64_t x118 = -1LL;
	static uint64_t x119 = 1493925791LLU;
	static int8_t x120 = INT8_MIN;

	t29 = ((x117==(x118&x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -246;
	volatile uint32_t x123 = 227U;
	int64_t x124 = -1LL;
	int32_t t30 = 53967;

	t30 = ((x121==(x122&x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 1827558657U;
	volatile uint32_t x128 = 142U;
	int32_t t31 = 1;

	t31 = ((x125==(x126&x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -21LL;
	static int16_t x131 = 2877;
	static uint32_t x132 = 3170274U;

	t32 = ((x129==(x130&x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 1062293U;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 1;

	t33 = ((x133==(x134&x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x138 = 85U;
	int8_t x139 = INT8_MAX;
	int32_t t34 = -1;

	t34 = ((x137==(x138&x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x143 = -1059094784409895586LL;
	uint32_t x144 = 45U;

	t35 = ((x141==(x142&x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	int16_t x147 = -1;
	int8_t x148 = INT8_MAX;
	int32_t t36 = 837;

	t36 = ((x145==(x146&x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	uint16_t x151 = 231U;
	uint32_t x152 = 782093531U;
	static int32_t t37 = -1649219;

	t37 = ((x149==(x150&x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -84;
	volatile int32_t x155 = INT32_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t38 = -845;

	t38 = ((x153==(x154&x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 951;
	int8_t x158 = INT8_MIN;
	int32_t t39 = -64081541;

	t39 = ((x157==(x158&x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	uint64_t x162 = UINT64_MAX;
	volatile uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	static int32_t t40 = -7968;

	t40 = ((x161==(x162&x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 27235297864LLU;
	int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MIN;
	static int32_t t41 = 63370275;

	t41 = ((x165==(x166&x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {


	t42 = ((x169==(x170&x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = 3U;
	static uint64_t x175 = 193026178LLU;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 232594;

	t43 = ((x173==(x174&x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 11U;
	uint64_t x178 = 2696719782LLU;
	int32_t x179 = 906026;
	uint32_t x180 = 989787596U;
	static volatile int32_t t44 = 846373409;

	t44 = ((x177==(x178&x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	uint32_t x183 = 500780043U;
	int32_t x184 = 410;
	volatile int32_t t45 = 10710452;

	t45 = ((x181==(x182&x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static int8_t x188 = -3;
	int32_t t46 = 13307249;

	t46 = ((x185==(x186&x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	volatile uint64_t x190 = UINT64_MAX;
	int32_t x191 = -629;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 34738150;

	t47 = ((x189==(x190&x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int32_t x194 = 11957;
	uint64_t x195 = 16313445347649244LLU;
	int64_t x196 = INT64_MAX;
	int32_t t48 = 86586;

	t48 = ((x193==(x194&x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -245LL;
	int64_t x199 = -2269891308072344934LL;
	int32_t x200 = -11;
	volatile int32_t t49 = -354727;

	t49 = ((x197==(x198&x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static int64_t x202 = 26851273890646984LL;
	int32_t x203 = -1;
	static uint32_t x204 = 1838U;
	int32_t t50 = 996929531;

	t50 = ((x201==(x202&x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -137856551887999815LL;
	uint16_t x207 = 6940U;
	int32_t t51 = 51;

	t51 = ((x205==(x206&x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x211 = INT8_MIN;
	volatile int32_t t52 = 422186;

	t52 = ((x209==(x210&x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	static volatile int8_t x214 = -1;
	volatile int64_t x215 = -43170877967900274LL;
	int64_t x216 = INT64_MIN;

	t53 = ((x213==(x214&x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int8_t x218 = 0;
	uint64_t x219 = 512873035330475LLU;
	int64_t x220 = INT64_MAX;
	int32_t t54 = 1;

	t54 = ((x217==(x218&x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int32_t x222 = -1;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = -339175;

	t55 = ((x221==(x222&x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -1;

	t56 = ((x225==(x226&x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	uint32_t x230 = 1602484652U;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t57 = 439;

	t57 = ((x229==(x230&x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = -1;
	int64_t x236 = -1LL;

	t58 = ((x233==(x234&x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint32_t x238 = 58U;
	int8_t x239 = -33;
	static uint32_t x240 = 75617100U;
	volatile int32_t t59 = -5299;

	t59 = ((x237==(x238&x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 2844LLU;
	int8_t x242 = 0;
	int64_t x243 = INT64_MIN;
	static volatile int32_t t60 = -85623;

	t60 = ((x241==(x242&x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	static uint32_t x247 = 20106U;
	static int16_t x248 = 0;
	int32_t t61 = 87931157;

	t61 = ((x245==(x246&x247))==x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MIN;
	int8_t x252 = INT8_MIN;

	t62 = ((x249==(x250&x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -423;
	volatile uint16_t x254 = 698U;
	int16_t x255 = -1;
	uint64_t x256 = 0LLU;
	volatile int32_t t63 = -44507934;

	t63 = ((x253==(x254&x255))==x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x259 = 125U;
	int64_t x260 = -1LL;
	int32_t t64 = 7916;

	t64 = ((x257==(x258&x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	int16_t x262 = INT16_MAX;
	static int32_t x264 = INT32_MIN;
	int32_t t65 = -1;

	t65 = ((x261==(x262&x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 60620221LL;
	int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 9U;
	volatile int32_t t66 = 103097573;

	t66 = ((x265==(x266&x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = 44;
	uint16_t x271 = UINT16_MAX;
	int32_t t67 = 37588177;

	t67 = ((x269==(x270&x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = 93U;
	static int32_t t68 = -95214;

	t68 = ((x273==(x274&x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x280 = 297U;
	int32_t t69 = -14143;

	t69 = ((x277==(x278&x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = 15;
	static int16_t x282 = -1;
	volatile int8_t x283 = -1;
	int8_t x284 = -1;

	t70 = ((x281==(x282&x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 3U;
	static uint64_t x286 = UINT64_MAX;
	static int64_t x287 = 305130533037891498LL;
	static uint32_t x288 = UINT32_MAX;
	int32_t t71 = -10120598;

	t71 = ((x285==(x286&x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	volatile uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -1;

	t72 = ((x289==(x290&x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = 3379;
	uint16_t x294 = 5985U;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 3U;
	static volatile int32_t t73 = -12250;

	t73 = ((x293==(x294&x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 1;
	static uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 4;

	t74 = ((x297==(x298&x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x302 = 3LLU;
	static int16_t x304 = INT16_MAX;
	static int32_t t75 = -19053910;

	t75 = ((x301==(x302&x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = 148423722401LL;
	int8_t x306 = 0;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 624991;

	t76 = ((x305==(x306&x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = 1108U;
	volatile int32_t x311 = INT32_MAX;
	static int16_t x312 = INT16_MIN;

	t77 = ((x309==(x310&x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t t78 = 8355;

	t78 = ((x313==(x314&x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 4703886U;
	static uint64_t x318 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	static volatile int32_t t79 = 181;

	t79 = ((x317==(x318&x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = INT32_MAX;
	static int8_t x324 = INT8_MAX;

	t80 = ((x321==(x322&x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	uint32_t x327 = 2U;
	static volatile int8_t x328 = -1;
	volatile int32_t t81 = -1;

	t81 = ((x325==(x326&x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 11713U;
	volatile int16_t x330 = INT16_MAX;
	volatile int16_t x331 = 75;
	int16_t x332 = INT16_MAX;

	t82 = ((x329==(x330&x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x334 = UINT32_MAX;
	volatile uint16_t x335 = 1047U;
	int32_t t83 = -64452551;

	t83 = ((x333==(x334&x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = -4094250;

	t84 = ((x337==(x338&x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 671509U;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 1;
	int16_t x344 = 987;
	int32_t t85 = -836018;

	t85 = ((x341==(x342&x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MIN;
	volatile int8_t x348 = INT8_MIN;
	int32_t t86 = -4;

	t86 = ((x345==(x346&x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x352 = -18;
	int32_t t87 = -8612;

	t87 = ((x349==(x350&x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = -1;
	volatile int32_t t88 = -1605437;

	t88 = ((x353==(x354&x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = INT64_MAX;
	uint64_t x359 = 3560LLU;
	int8_t x360 = INT8_MAX;
	int32_t t89 = 327337558;

	t89 = ((x357==(x358&x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = -1;
	volatile int8_t x364 = INT8_MIN;
	int32_t t90 = 1644079;

	t90 = ((x361==(x362&x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	uint32_t x367 = 294085U;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -478;

	t91 = ((x365==(x366&x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x370 = INT8_MIN;
	int16_t x372 = 22;
	volatile int32_t t92 = -1;

	t92 = ((x369==(x370&x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = -1;
	int16_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	int32_t t93 = 48132;

	t93 = ((x373==(x374&x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -1LL;
	volatile int8_t x378 = 0;
	static uint64_t x379 = UINT64_MAX;
	uint32_t x380 = UINT32_MAX;
	static int32_t t94 = -5745;

	t94 = ((x377==(x378&x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	volatile int32_t t95 = 17678;

	t95 = ((x381==(x382&x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x387 = INT16_MIN;
	volatile int32_t t96 = 8449;

	t96 = ((x385==(x386&x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -11523721;
	volatile uint16_t x390 = UINT16_MAX;
	volatile int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 541;

	t97 = ((x389==(x390&x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = 102;
	volatile int8_t x395 = -1;
	int8_t x396 = 7;
	static volatile int32_t t98 = 967748352;

	t98 = ((x393==(x394&x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static uint32_t x398 = 0U;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 0;

	t99 = ((x397==(x398&x399))==x400);

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

