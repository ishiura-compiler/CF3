#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int64_t x11 = 165249LL;
int32_t t7 = 7343;
int32_t t8 = 10899406;
int8_t x38 = -1;
uint16_t x51 = 7U;
volatile int32_t t16 = -12316201;
int64_t x72 = INT64_MIN;
volatile int32_t t18 = -3;
uint64_t x89 = UINT64_MAX;
int16_t x94 = -10;
int32_t t26 = -9;
volatile int16_t x111 = INT16_MIN;
volatile int32_t t27 = 65068;
static int64_t x116 = -80844763139899998LL;
int8_t x122 = INT8_MIN;
volatile int32_t x128 = INT32_MIN;
int16_t x131 = 2957;
volatile int32_t x137 = INT32_MIN;
int64_t x141 = INT64_MIN;
static uint64_t x143 = 93723813226LLU;
uint32_t x145 = 4708058U;
uint32_t x148 = UINT32_MAX;
int8_t x152 = 1;
int64_t x155 = INT64_MAX;
static volatile int8_t x156 = 38;
volatile int16_t x161 = -1;
int8_t x163 = INT8_MAX;
static int8_t x164 = INT8_MIN;
int32_t x165 = 0;
uint8_t x168 = UINT8_MAX;
static uint8_t x173 = UINT8_MAX;
volatile int32_t t43 = -56869198;
static uint64_t x177 = UINT64_MAX;
int16_t x179 = -1;
static int32_t t45 = 1055467;
int16_t x185 = -2;
uint16_t x187 = 22U;
int8_t x189 = INT8_MIN;
int64_t x192 = INT64_MAX;
uint8_t x199 = 0U;
static int32_t t49 = -249256148;
static volatile int32_t t50 = -22;
uint8_t x211 = 6U;
volatile int32_t t52 = -256245;
volatile int32_t x213 = 539;
volatile uint64_t x216 = 33421LLU;
int8_t x223 = -1;
int8_t x226 = 32;
volatile int32_t t57 = 2057369;
uint16_t x242 = 2524U;
volatile int32_t t60 = -31140;
int32_t t65 = 1;
int32_t x266 = INT32_MIN;
static int16_t x275 = -1;
static volatile int16_t x281 = INT16_MIN;
uint32_t x286 = 0U;
int8_t x291 = INT8_MAX;
int16_t x295 = INT16_MIN;
uint8_t x302 = 53U;
uint8_t x303 = 1U;
int8_t x305 = INT8_MIN;
volatile uint16_t x306 = UINT16_MAX;
int32_t t76 = 274;
static int16_t x309 = INT16_MIN;
uint64_t x317 = 14712302022LLU;
uint16_t x322 = 1026U;
static int64_t x323 = INT64_MIN;
volatile int32_t t81 = 104217;
int64_t x330 = -13939144069LL;
volatile int32_t t82 = 563;
uint32_t x333 = UINT32_MAX;
uint32_t x334 = 15U;
uint8_t x335 = 2U;
int32_t x341 = 102;
volatile int32_t t86 = -79;
int16_t x349 = INT16_MAX;
int32_t x358 = INT32_MIN;
int32_t t89 = -19639364;
static volatile int32_t x367 = INT32_MIN;
static volatile uint16_t x374 = 110U;
int64_t x379 = 83LL;
volatile int32_t t95 = 24498;
volatile int64_t x388 = -27885515597922824LL;
int64_t x390 = INT64_MAX;
int32_t x395 = -1;
int32_t t98 = 8240166;


void f0(void) {
	volatile uint64_t x1 = 102169252LLU;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 1U;
	uint64_t x4 = 1023610949LLU;
	int32_t t0 = -370;

	t0 = ((x1^(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	static volatile int8_t x7 = INT8_MIN;
	volatile uint32_t x8 = 806813U;
	volatile int32_t t1 = -12;

	t1 = ((x5^(x6&x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 97338390937485LLU;
	volatile uint64_t x10 = 17098196762LLU;
	int16_t x12 = 6;
	int32_t t2 = -59374550;

	t2 = ((x9^(x10&x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 91U;
	static uint32_t x14 = UINT32_MAX;
	int8_t x15 = -1;
	int8_t x16 = -1;
	volatile int32_t t3 = -1;

	t3 = ((x13^(x14&x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	uint32_t x18 = UINT32_MAX;
	int32_t x19 = 13;
	static volatile int64_t x20 = INT64_MIN;
	int32_t t4 = 168883662;

	t4 = ((x17^(x18&x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = 1U;
	int16_t x23 = INT16_MAX;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 12823898;

	t5 = ((x21^(x22&x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = 6408484LL;
	int16_t x28 = -1;
	volatile int32_t t6 = -2808;

	t6 = ((x25^(x26&x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 0LLU;
	static int8_t x30 = -1;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -44LL;

	t7 = ((x29^(x30&x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	static int64_t x34 = 5LL;
	volatile int16_t x35 = 1;
	int64_t x36 = INT64_MIN;

	t8 = ((x33^(x34&x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = -41873529;

	t9 = ((x37^(x38&x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 709U;
	static int32_t t10 = -1692;

	t10 = ((x41^(x42&x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -123620;

	t11 = ((x45^(x46&x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 225919267416568LL;
	int16_t x50 = -1;
	static volatile uint32_t x52 = 6281204U;
	volatile int32_t t12 = 19835684;

	t12 = ((x49^(x50&x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	uint32_t x54 = 598781434U;
	int8_t x55 = -1;
	uint64_t x56 = 33638367247630LLU;
	volatile int32_t t13 = 27927;

	t13 = ((x53^(x54&x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MAX;
	static int32_t x59 = -755;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 10147;

	t14 = ((x57^(x58&x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 919284694411069596LLU;
	int32_t x62 = INT32_MIN;
	static volatile int32_t x63 = 713279;
	uint64_t x64 = UINT64_MAX;
	static volatile int32_t t15 = 785787086;

	t15 = ((x61^(x62&x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 14U;
	static uint32_t x66 = 651U;
	int8_t x67 = 1;
	uint64_t x68 = 22325824411LLU;

	t16 = ((x65^(x66&x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MAX;
	volatile int32_t t17 = -374985;

	t17 = ((x69^(x70&x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 0;
	static uint8_t x74 = 3U;
	volatile int16_t x75 = -1249;
	static int32_t x76 = -1991;

	t18 = ((x73^(x74&x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	int64_t x78 = -1LL;
	int8_t x79 = -26;
	volatile uint64_t x80 = 1434LLU;
	int32_t t19 = 761795281;

	t19 = ((x77^(x78&x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 28562U;
	int8_t x82 = 0;
	uint32_t x83 = UINT32_MAX;
	volatile uint64_t x84 = 7LLU;
	static volatile int32_t t20 = 1203;

	t20 = ((x81^(x82&x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	uint16_t x86 = 0U;
	volatile int8_t x87 = INT8_MIN;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 501608;

	t21 = ((x85^(x86&x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x90 = UINT64_MAX;
	volatile uint64_t x91 = 28148041LLU;
	uint8_t x92 = 8U;
	volatile int32_t t22 = -386034;

	t22 = ((x89^(x90&x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 0U;
	int32_t x95 = INT32_MAX;
	static int32_t x96 = INT32_MIN;
	int32_t t23 = 22307703;

	t23 = ((x93^(x94&x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MAX;
	int8_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	uint64_t x100 = 6445LLU;
	int32_t t24 = 0;

	t24 = ((x97^(x98&x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	uint8_t x102 = 2U;
	int64_t x103 = 1LL;
	static volatile int32_t x104 = INT32_MIN;
	int32_t t25 = 82;

	t25 = ((x101^(x102&x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 34U;
	int8_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = 102484;

	t26 = ((x105^(x106&x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 42;
	int16_t x110 = INT16_MIN;
	static int32_t x112 = INT32_MIN;

	t27 = ((x109^(x110&x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 62U;
	int64_t x114 = -1026923689504LL;
	int64_t x115 = INT64_MIN;
	int32_t t28 = 248;

	t28 = ((x113^(x114&x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	int16_t x118 = 1;
	uint8_t x119 = 0U;
	int64_t x120 = -29177143879315LL;
	volatile int32_t t29 = -6670676;

	t29 = ((x117^(x118&x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x123 = -228554;
	static int8_t x124 = -1;
	int32_t t30 = -2006149;

	t30 = ((x121^(x122&x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = -1;
	int64_t x127 = INT64_MAX;
	static volatile int32_t t31 = 1326820;

	t31 = ((x125^(x126&x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MAX;
	int64_t x132 = 8690LL;
	volatile int32_t t32 = -51;

	t32 = ((x129^(x130&x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -2;
	uint32_t x134 = 984U;
	volatile uint8_t x135 = 54U;
	static int8_t x136 = INT8_MIN;
	int32_t t33 = 32561;

	t33 = ((x133^(x134&x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x138 = -8;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MAX;
	static int32_t t34 = 1;

	t34 = ((x137^(x138&x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	uint8_t x144 = 31U;
	volatile int32_t t35 = -3;

	t35 = ((x141^(x142&x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = -1;
	static uint16_t x147 = 1766U;
	static volatile int32_t t36 = 0;

	t36 = ((x145^(x146&x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	static uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = 0;
	volatile int32_t t37 = 499;

	t37 = ((x149^(x150&x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 22LLU;
	volatile int32_t x154 = INT32_MAX;
	volatile int32_t t38 = -3972;

	t38 = ((x153^(x154&x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 5U;
	volatile int32_t x158 = -1;
	static int32_t x159 = 0;
	int8_t x160 = INT8_MIN;
	int32_t t39 = -11;

	t39 = ((x157^(x158&x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 2137918169985LLU;
	volatile int32_t t40 = -2752;

	t40 = ((x161^(x162&x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MAX;
	volatile int32_t t41 = -1110;

	t41 = ((x165^(x166&x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = 304675LL;
	int16_t x170 = INT16_MIN;
	volatile int16_t x171 = -1286;
	uint64_t x172 = 1426758394LLU;
	int32_t t42 = -63426343;

	t42 = ((x169^(x170&x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = INT32_MAX;
	int16_t x175 = 341;
	int8_t x176 = 7;

	t43 = ((x173^(x174&x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x178 = 1550077775LL;
	volatile uint16_t x180 = 13U;
	int32_t t44 = -613;

	t44 = ((x177^(x178&x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -1LL;
	uint16_t x182 = UINT16_MAX;
	uint16_t x183 = UINT16_MAX;
	static int8_t x184 = 0;

	t45 = ((x181^(x182&x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	uint64_t x188 = 12377798041927115LLU;
	static volatile int32_t t46 = -1558;

	t46 = ((x185^(x186&x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 6U;
	uint32_t x191 = 648724U;
	volatile int32_t t47 = 17975100;

	t47 = ((x189^(x190&x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -15280621;
	uint32_t x194 = 19117589U;
	int8_t x195 = INT8_MAX;
	int16_t x196 = 0;
	volatile int32_t t48 = -2;

	t48 = ((x193^(x194&x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 16U;
	int64_t x198 = INT64_MIN;
	static int32_t x200 = INT32_MIN;

	t49 = ((x197^(x198&x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	int64_t x202 = -1LL;
	uint16_t x203 = 9U;
	int32_t x204 = -1;

	t50 = ((x201^(x202&x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	static volatile int64_t x206 = -1LL;
	static uint16_t x207 = 653U;
	int8_t x208 = 4;
	volatile int32_t t51 = 18;

	t51 = ((x205^(x206&x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 6;
	int8_t x210 = INT8_MAX;
	int8_t x212 = INT8_MIN;

	t52 = ((x209^(x210&x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x214 = 36U;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t53 = 0;

	t53 = ((x213^(x214&x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -3;
	uint32_t x218 = 1U;
	uint16_t x219 = 1388U;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = 1;

	t54 = ((x217^(x218&x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	static volatile int16_t x222 = -1;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t55 = 187339347;

	t55 = ((x221^(x222&x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -2;
	volatile int64_t x227 = 7LL;
	static int16_t x228 = INT16_MIN;
	int32_t t56 = 1022426;

	t56 = ((x225^(x226&x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = UINT8_MAX;
	int32_t x230 = -16910;
	volatile int64_t x231 = INT64_MIN;
	volatile uint32_t x232 = 50099899U;

	t57 = ((x229^(x230&x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = -1LL;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = 94U;
	static int32_t t58 = 2070;

	t58 = ((x233^(x234&x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 27436077;

	t59 = ((x237^(x238&x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int32_t x243 = -1;
	static volatile int8_t x244 = -1;

	t60 = ((x241^(x242&x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	static volatile uint16_t x247 = 0U;
	static volatile uint32_t x248 = 172U;
	volatile int32_t t61 = -23177;

	t61 = ((x245^(x246&x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	static int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	int16_t x252 = 1666;
	volatile int32_t t62 = -26944548;

	t62 = ((x249^(x250&x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = INT16_MIN;
	int32_t x256 = 15225759;
	volatile int32_t t63 = 5474;

	t63 = ((x253^(x254&x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = 104836LL;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = -17;
	int8_t x260 = -1;
	static int32_t t64 = -4097259;

	t64 = ((x257^(x258&x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 13U;
	int32_t x263 = -1;
	int16_t x264 = -2;

	t65 = ((x261^(x262&x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 1LL;
	int8_t x267 = -1;
	int64_t x268 = -1LL;
	int32_t t66 = 0;

	t66 = ((x265^(x266&x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile int8_t x270 = -1;
	int16_t x271 = -10;
	int64_t x272 = INT64_MIN;
	int32_t t67 = -962386855;

	t67 = ((x269^(x270&x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	volatile int8_t x274 = -6;
	int32_t x276 = -1;
	static volatile int32_t t68 = 54825;

	t68 = ((x273^(x274&x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 413789135015LLU;
	static int32_t x278 = INT32_MIN;
	uint8_t x279 = 11U;
	uint16_t x280 = 11684U;
	static volatile int32_t t69 = 1775312;

	t69 = ((x277^(x278&x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x282 = 69398470149140LLU;
	int32_t x283 = -1;
	volatile int8_t x284 = 1;
	volatile int32_t t70 = 7;

	t70 = ((x281^(x282&x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = UINT16_MAX;
	volatile uint16_t x287 = 1340U;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -208;

	t71 = ((x285^(x286&x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	volatile uint16_t x290 = UINT16_MAX;
	static int32_t x292 = INT32_MIN;
	static int32_t t72 = 5258065;

	t72 = ((x289^(x290&x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 10094267;
	int64_t x294 = -1164073900408LL;
	volatile int8_t x296 = 26;
	int32_t t73 = 7340909;

	t73 = ((x293^(x294&x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 3946U;
	static volatile int64_t x298 = -5LL;
	int16_t x299 = -1;
	uint16_t x300 = 2U;
	volatile int32_t t74 = 1;

	t74 = ((x297^(x298&x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -3753;
	int8_t x304 = -10;
	volatile int32_t t75 = 1;

	t75 = ((x301^(x302&x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x307 = UINT16_MAX;
	static int16_t x308 = INT16_MIN;

	t76 = ((x305^(x306&x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -1;
	int8_t x311 = INT8_MIN;
	volatile int32_t x312 = 7;
	static int32_t t77 = -707415989;

	t77 = ((x309^(x310&x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MIN;
	static uint32_t x316 = UINT32_MAX;
	volatile int32_t t78 = 530301242;

	t78 = ((x313^(x314&x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = 12U;
	int64_t x319 = INT64_MAX;
	static int16_t x320 = INT16_MIN;
	int32_t t79 = -113077;

	t79 = ((x317^(x318&x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MAX;
	volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = -1088;

	t80 = ((x321^(x322&x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static int64_t x326 = 75LL;
	uint8_t x327 = UINT8_MAX;
	volatile uint16_t x328 = 6011U;

	t81 = ((x325^(x326&x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 5;
	volatile uint32_t x331 = 231933777U;
	volatile int64_t x332 = -259229382731885LL;

	t82 = ((x329^(x330&x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x336 = -1;
	volatile int32_t t83 = 1693;

	t83 = ((x333^(x334&x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int16_t x338 = INT16_MIN;
	volatile uint16_t x339 = 6755U;
	volatile uint32_t x340 = 14851U;
	int32_t t84 = 455248127;

	t84 = ((x337^(x338&x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 0U;
	uint16_t x344 = 115U;
	int32_t t85 = -27150646;

	t85 = ((x341^(x342&x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int16_t x346 = INT16_MIN;
	static int32_t x347 = INT32_MIN;
	static int64_t x348 = INT64_MIN;

	t86 = ((x345^(x346&x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 0U;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	int32_t t87 = -4301130;

	t87 = ((x349^(x350&x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = UINT32_MAX;
	uint64_t x356 = 20940283231LLU;
	volatile int32_t t88 = 82;

	t88 = ((x353^(x354&x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = UINT64_MAX;
	volatile int32_t x359 = -1;
	int64_t x360 = INT64_MAX;

	t89 = ((x357^(x358&x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 4U;
	volatile int16_t x362 = INT16_MIN;
	static int8_t x363 = INT8_MIN;
	static uint8_t x364 = 46U;
	static volatile int32_t t90 = 8103;

	t90 = ((x361^(x362&x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	uint32_t x366 = 760843455U;
	int64_t x368 = INT64_MIN;
	int32_t t91 = 0;

	t91 = ((x365^(x366&x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 34U;
	int8_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	static int64_t x372 = INT64_MIN;
	int32_t t92 = 11;

	t92 = ((x369^(x370&x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	static int64_t x376 = INT64_MAX;
	int32_t t93 = -1126363;

	t93 = ((x373^(x374&x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MAX;
	static int8_t x378 = INT8_MIN;
	int8_t x380 = INT8_MAX;
	int32_t t94 = 441948010;

	t94 = ((x377^(x378&x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile int32_t x382 = INT32_MAX;
	volatile uint32_t x383 = 124288723U;
	uint64_t x384 = UINT64_MAX;

	t95 = ((x381^(x382&x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	uint64_t x386 = UINT64_MAX;
	uint8_t x387 = 18U;
	static int32_t t96 = -7434563;

	t96 = ((x385^(x386&x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 1572U;
	int16_t x391 = 843;
	int16_t x392 = -25;
	volatile int32_t t97 = -7489;

	t97 = ((x389^(x390&x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 3618LL;
	int64_t x394 = -1LL;
	static uint64_t x396 = 168897592650362LLU;

	t98 = ((x393^(x394&x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 244U;
	int64_t x398 = INT64_MIN;
	static int8_t x399 = -1;
	int64_t x400 = -83359733404316LL;
	int32_t t99 = -61790;

	t99 = ((x397^(x398&x399))<=x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

