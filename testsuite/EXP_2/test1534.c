#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 12658052U;
static int16_t x3 = INT16_MAX;
volatile int16_t x5 = -1;
static int32_t x10 = INT32_MIN;
int32_t x15 = INT32_MIN;
static volatile int64_t x20 = INT64_MIN;
int32_t t5 = 7716707;
uint8_t x25 = 6U;
static uint32_t x28 = 7091418U;
uint8_t x33 = 1U;
int8_t x37 = INT8_MAX;
uint8_t x38 = UINT8_MAX;
static int32_t x58 = 875;
int64_t t15 = -16671525262LL;
static uint64_t x65 = 8LLU;
volatile uint64_t t16 = 24LLU;
uint8_t x69 = 97U;
int16_t x70 = INT16_MAX;
volatile int8_t x71 = 1;
int32_t x73 = -51870;
int8_t x74 = INT8_MIN;
volatile uint64_t t19 = 49LLU;
volatile int16_t x81 = 119;
static uint32_t x83 = 2076206511U;
int16_t x88 = 0;
volatile uint16_t x94 = 2U;
int16_t x95 = INT16_MIN;
uint8_t x98 = 23U;
int8_t x100 = INT8_MIN;
int32_t t24 = 3586;
uint8_t x103 = 71U;
int16_t x105 = INT16_MIN;
int32_t x111 = INT32_MIN;
static int8_t x117 = 32;
static uint64_t x120 = UINT64_MAX;
volatile uint64_t t29 = 92149544679LLU;
int16_t x124 = INT16_MIN;
static int32_t x140 = INT32_MAX;
int64_t x142 = INT64_MIN;
static volatile int32_t t36 = -6797576;
static int16_t x152 = -3;
volatile int8_t x155 = INT8_MIN;
uint32_t x163 = 3338285U;
int64_t x168 = 21543LL;
int32_t x177 = -1;
uint8_t x183 = UINT8_MAX;
int16_t x188 = -1;
volatile uint64_t x191 = 17611LLU;
volatile int64_t t47 = 590080339365521476LL;
uint64_t x193 = 3000LLU;
int16_t x196 = INT16_MAX;
volatile int8_t x198 = INT8_MIN;
uint16_t x200 = 393U;
static int32_t t50 = -24728;
volatile int8_t x208 = 1;
static uint8_t x209 = 41U;
uint64_t x223 = 22788115707958676LLU;
volatile int64_t t55 = 392647164680LL;
int64_t x229 = -237515522LL;
static volatile int16_t x230 = INT16_MAX;
volatile int32_t x233 = 299299;
int16_t x234 = INT16_MIN;
volatile int64_t t58 = 3215LL;
static volatile int8_t x245 = 11;
static int8_t x252 = 21;
int32_t x254 = -22227;
int8_t x256 = -19;
int32_t x257 = INT32_MAX;
uint16_t x262 = 1U;
uint64_t x265 = 1985394LLU;
static int32_t x267 = -1;
int32_t x274 = INT32_MAX;
int8_t x275 = -1;
int64_t x282 = -1LL;
int16_t x283 = -471;
uint64_t x295 = 17LLU;
static volatile int64_t t72 = 512407019752LL;
int32_t x317 = -1;
int8_t x318 = INT8_MAX;
static volatile int32_t t78 = 1;
int8_t x321 = -1;
static volatile uint8_t x335 = 31U;
int32_t t82 = -1;
uint32_t x338 = UINT32_MAX;
int64_t t85 = INT64_MAX;
static int8_t x353 = INT8_MIN;
int32_t t87 = -11524;
uint8_t x362 = 23U;
int64_t t91 = INT64_MIN;
uint32_t x373 = UINT32_MAX;
int8_t x375 = 1;
volatile int32_t x378 = INT32_MIN;
int16_t x379 = INT16_MIN;
static volatile int16_t x383 = INT16_MAX;
int16_t x385 = INT16_MIN;
int8_t x393 = -1;
int16_t x396 = INT16_MIN;
int8_t x397 = 1;


void f0(void) {
	int8_t x2 = -4;
	int8_t x4 = -1;
	uint32_t t0 = 3720U;

	t0 = ((x1+(x2<=x3))^x4);

	if (t0 != 4282309242U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 137842817842530165LL;
	uint8_t x7 = 4U;
	volatile int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -249138550;

	t1 = ((x5+(x6<=x7))^x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	volatile uint16_t x11 = 87U;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 37277300979421LLU;

	t2 = ((x9+(x10<=x11))^x12);

	if (t2 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	volatile int16_t x14 = INT16_MAX;
	volatile int16_t x16 = INT16_MAX;
	static int32_t t3 = -254568202;

	t3 = ((x13+(x14<=x15))^x16);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int64_t x18 = 5258LL;
	volatile int8_t x19 = INT8_MIN;
	volatile uint64_t t4 = 31069855LLU;

	t4 = ((x17+(x18<=x19))^x20);

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int32_t x22 = INT32_MIN;
	uint8_t x23 = 1U;
	int8_t x24 = INT8_MIN;

	t5 = ((x21+(x22<=x23))^x24);

	if (t5 != -65664) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x26 = UINT16_MAX;
	static volatile int32_t x27 = -7;
	uint32_t t6 = 15U;

	t6 = ((x25+(x26<=x27))^x28);

	if (t6 != 7091420U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 188182472004676829LL;
	uint8_t x30 = 21U;
	int8_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	int64_t t7 = 160590997LL;

	t7 = ((x29+(x30<=x31))^x32);

	if (t7 != 188182472004676642LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 15613372LLU;
	int32_t x35 = 738806;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 21678005;

	t8 = ((x33+(x34<=x35))^x36);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = 7195027;

	t9 = ((x37+(x38<=x39))^x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 100U;
	uint32_t x42 = 16U;
	int8_t x43 = INT8_MAX;
	volatile int32_t x44 = INT32_MIN;
	static int32_t t10 = 22;

	t10 = ((x41+(x42<=x43))^x44);

	if (t10 != -2147483547) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = -110744907551005LL;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -167041;

	t11 = ((x45+(x46<=x47))^x48);

	if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 224567U;
	uint64_t x50 = 467LLU;
	uint8_t x51 = 2U;
	uint16_t x52 = 1U;
	volatile uint32_t t12 = 707873834U;

	t12 = ((x49+(x50<=x51))^x52);

	if (t12 != 224566U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 188389237LLU;
	int8_t x54 = -1;
	uint32_t x55 = 4251707U;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 7LLU;

	t13 = ((x53+(x54<=x55))^x56);

	if (t13 != 18446744073521162378LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1775;
	int8_t x59 = 1;
	int8_t x60 = -1;
	int32_t t14 = -401623156;

	t14 = ((x57+(x58<=x59))^x60);

	if (t14 != 1774) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	uint64_t x62 = 65113268LLU;
	int16_t x63 = INT16_MAX;
	int64_t x64 = 0LL;

	t15 = ((x61+(x62<=x63))^x64);

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	uint64_t x67 = 23275694LLU;
	uint16_t x68 = UINT16_MAX;

	t16 = ((x65+(x66<=x67))^x68);

	if (t16 != 65526LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x72 = -1LL;
	int64_t t17 = 11899397407327015LL;

	t17 = ((x69+(x70<=x71))^x72);

	if (t17 != -98LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x75 = -1;
	uint64_t x76 = 58383000513608LLU;
	volatile uint64_t t18 = 38069171372LLU;

	t18 = ((x73+(x74<=x75))^x76);

	if (t18 != 18446685690709055787LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = -6;
	int32_t x79 = -1;
	int64_t x80 = 86091866202991LL;

	t19 = ((x77+(x78<=x79))^x80);

	if (t19 != 86091866202991LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	int64_t x84 = -4251973LL;
	int64_t t20 = -12249500194674LL;

	t20 = ((x81+(x82<=x83))^x84);

	if (t20 != -4251956LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static volatile uint32_t x86 = UINT32_MAX;
	static uint64_t x87 = 180017LLU;
	int64_t t21 = INT64_MAX;

	t21 = ((x85+(x86<=x87))^x88);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = 15;
	int32_t x91 = INT32_MIN;
	uint8_t x92 = UINT8_MAX;
	static volatile int64_t t22 = -373084208191374861LL;

	t22 = ((x89+(x90<=x91))^x92);

	if (t22 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int32_t x96 = -1;
	volatile int32_t t23 = INT32_MAX;

	t23 = ((x93+(x94<=x95))^x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 3368U;
	int8_t x99 = -9;

	t24 = ((x97+(x98<=x99))^x100);

	if (t24 != -3416) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	int16_t x102 = -1;
	volatile uint32_t x104 = UINT32_MAX;
	uint32_t t25 = 253U;

	t25 = ((x101+(x102<=x103))^x104);

	if (t25 != 4294934527U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -532830920;
	uint32_t x107 = 18758U;
	uint16_t x108 = 413U;
	int32_t t26 = -57101635;

	t26 = ((x105+(x106<=x107))^x108);

	if (t26 != -32355) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x112 = 33032179422524526LL;
	volatile uint64_t t27 = 21353519257213952LLU;

	t27 = ((x109+(x110<=x111))^x112);

	if (t27 != 33032179422524526LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 972154U;
	int64_t x114 = -52968417LL;
	int32_t x115 = INT32_MIN;
	volatile int8_t x116 = -1;
	volatile uint32_t t28 = 22058U;

	t28 = ((x113+(x114<=x115))^x116);

	if (t28 != 4293995141U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = 6;
	volatile uint8_t x119 = UINT8_MAX;

	t29 = ((x117+(x118<=x119))^x120);

	if (t29 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = -1LL;
	int32_t x123 = -25523210;
	volatile int32_t t30 = 511484;

	t30 = ((x121+(x122<=x123))^x124);

	if (t30 != 32640) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 8972U;
	int32_t x126 = INT32_MIN;
	static uint8_t x127 = UINT8_MAX;
	int32_t x128 = INT32_MAX;
	static volatile int32_t t31 = 106;

	t31 = ((x125+(x126<=x127))^x128);

	if (t31 != 2147474674) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -2981975774370538575LL;
	uint64_t x130 = 280329280693LLU;
	int16_t x131 = INT16_MAX;
	static volatile int64_t x132 = INT64_MIN;
	int64_t t32 = -1LL;

	t32 = ((x129+(x130<=x131))^x132);

	if (t32 != 6241396262484237233LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -3;
	int16_t x134 = 13;
	static int32_t x135 = -972616;
	volatile uint64_t x136 = 37010196458466815LLU;
	static volatile uint64_t t33 = 7961LLU;

	t33 = ((x133+(x134<=x135))^x136);

	if (t33 != 18409733877251084802LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 1;
	uint16_t x138 = UINT16_MAX;
	static uint64_t x139 = 1022LLU;
	volatile int32_t t34 = -377;

	t34 = ((x137+(x138<=x139))^x140);

	if (t34 != 2147483646) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 1732754U;
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = 6909690LL;
	volatile int64_t t35 = -1LL;

	t35 = ((x141+(x142<=x143))^x144);

	if (t35 != 7544425LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = 28U;
	uint32_t x147 = 218787580U;
	int8_t x148 = -1;

	t36 = ((x145+(x146<=x147))^x148);

	if (t36 != -257) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x150 = -1;
	volatile int16_t x151 = INT16_MIN;
	int32_t t37 = -37248;

	t37 = ((x149+(x150<=x151))^x152);

	if (t37 != -254) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 1322U;
	int64_t x154 = -1162846812586LL;
	uint8_t x156 = UINT8_MAX;
	volatile uint32_t t38 = 128U;

	t38 = ((x153+(x154<=x155))^x156);

	if (t38 != 1492U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint16_t x158 = 9700U;
	int32_t x159 = INT32_MAX;
	int16_t x160 = INT16_MIN;
	volatile uint32_t t39 = 58U;

	t39 = ((x157+(x158<=x159))^x160);

	if (t39 != 4294934528U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int8_t x162 = -1;
	int32_t x164 = 5526;
	int32_t t40 = -4393;

	t40 = ((x161+(x162<=x163))^x164);

	if (t40 != -5527) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1096825397673219559LL;
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MAX;
	static volatile int64_t t41 = 109351247190832LL;

	t41 = ((x165+(x166<=x167))^x168);

	if (t41 != -1096825397673198019LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 57486602569896LL;
	static int64_t x170 = -402LL;
	static int8_t x171 = 1;
	static int32_t x172 = 116163471;
	volatile int64_t t42 = -86LL;

	t42 = ((x169+(x170<=x171))^x172);

	if (t42 != 57486567148326LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = 0;
	static int8_t x174 = 7;
	static uint64_t x175 = UINT64_MAX;
	int32_t x176 = -1;
	int32_t t43 = 0;

	t43 = ((x173+(x174<=x175))^x176);

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	static int64_t x179 = INT64_MAX;
	uint16_t x180 = 11U;
	static volatile int32_t t44 = -682;

	t44 = ((x177+(x178<=x179))^x180);

	if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 230U;
	int64_t x182 = INT64_MIN;
	static int8_t x184 = 20;
	static uint32_t t45 = 1234U;

	t45 = ((x181+(x182<=x183))^x184);

	if (t45 != 243U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 9137764737171LL;
	static uint64_t x186 = 1638LLU;
	static int64_t x187 = INT64_MIN;
	int64_t t46 = -35426887827054761LL;

	t46 = ((x185+(x186<=x187))^x188);

	if (t46 != -9137764737173LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = -1;
	int16_t x192 = 6;

	t47 = ((x189+(x190<=x191))^x192);

	if (t47 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = 95;
	uint64_t t48 = 868817179890LLU;

	t48 = ((x193+(x194<=x195))^x196);

	if (t48 != 29767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -2554;
	uint64_t x199 = UINT64_MAX;
	int32_t t49 = 212047;

	t49 = ((x197+(x198<=x199))^x200);

	if (t49 != -2162) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MIN;
	volatile int64_t x203 = -1LL;
	uint16_t x204 = 22148U;

	t50 = ((x201+(x202<=x203))^x204);

	if (t50 != -2147461499) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	uint16_t x206 = 43U;
	static volatile uint16_t x207 = 9U;
	volatile int32_t t51 = 4;

	t51 = ((x205+(x206<=x207))^x208);

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x210 = 86702938536883339LLU;
	int32_t x211 = -16;
	volatile int32_t x212 = -435379442;
	volatile int32_t t52 = 1220;

	t52 = ((x209+(x210<=x211))^x212);

	if (t52 != -435379420) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -46895062737LL;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = -23LL;
	static int64_t x216 = -1LL;
	static int64_t t53 = -15587681225LL;

	t53 = ((x213+(x214<=x215))^x216);

	if (t53 != 46895062735LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MAX;
	static int32_t x219 = 1001944044;
	static uint16_t x220 = 5U;
	static int64_t t54 = -1777227LL;

	t54 = ((x217+(x218<=x219))^x220);

	if (t54 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = 2;
	static int64_t x224 = INT64_MIN;

	t55 = ((x221+(x222<=x223))^x224);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	static int8_t x227 = INT8_MAX;
	int16_t x228 = INT16_MAX;
	int64_t t56 = -664790530375LL;

	t56 = ((x225+(x226<=x227))^x228);

	if (t56 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x231 = 246201U;
	int64_t x232 = INT64_MIN;
	static volatile int64_t t57 = 1LL;

	t57 = ((x229+(x230<=x231))^x232);

	if (t57 != 9223372036617260287LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x235 = -127641;
	int64_t x236 = INT64_MIN;

	t58 = ((x233+(x234<=x235))^x236);

	if (t58 != -9223372036854476509LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = 530;
	int8_t x238 = INT8_MIN;
	volatile int16_t x239 = INT16_MAX;
	volatile uint64_t x240 = 21462445361728484LLU;
	uint64_t t59 = 21593150310741LLU;

	t59 = ((x237+(x238<=x239))^x240);

	if (t59 != 21462445361727991LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = -18;
	int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 1511706;

	t60 = ((x241+(x242<=x243))^x244);

	if (t60 != 2147450881) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x246 = 27U;
	int64_t x247 = 7085429326756740LL;
	int16_t x248 = -1;
	volatile int32_t t61 = -172485459;

	t61 = ((x245+(x246<=x247))^x248);

	if (t61 != -13) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -7;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = INT64_MAX;
	int32_t t62 = -4910077;

	t62 = ((x249+(x250<=x251))^x252);

	if (t62 != -17) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x253 = -1LL;
	int32_t x255 = INT32_MAX;
	int64_t t63 = -917LL;

	t63 = ((x253+(x254<=x255))^x256);

	if (t63 != -19LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = 0;
	int64_t x259 = -1478811971LL;
	int32_t x260 = INT32_MIN;
	int32_t t64 = 64524;

	t64 = ((x257+(x258<=x259))^x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = 5;
	int32_t t65 = 1721578;

	t65 = ((x261+(x262<=x263))^x264);

	if (t65 != -32764) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = 15021804875121LL;
	static volatile uint8_t x268 = 1U;
	uint64_t t66 = 609638274808203746LLU;

	t66 = ((x265+(x266<=x267))^x268);

	if (t66 != 1985395LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	uint8_t x270 = 14U;
	static int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t67 = 17783U;

	t67 = ((x269+(x270<=x271))^x272);

	if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int32_t x276 = INT32_MIN;
	int32_t t68 = -466;

	t68 = ((x273+(x274<=x275))^x276);

	if (t68 != 2147450880) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = -19;
	static int64_t x284 = -1LL;
	volatile int64_t t69 = 14686967459904LL;

	t69 = ((x281+(x282<=x283))^x284);

	if (t69 != 18LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x285 = 50;
	static int16_t x286 = INT16_MAX;
	uint16_t x287 = 1958U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t70 = -194;

	t70 = ((x285+(x286<=x287))^x288);

	if (t70 != 65485) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = 752LLU;
	int8_t x291 = INT8_MAX;
	uint64_t x292 = 327LLU;
	uint64_t t71 = 94654420191385LLU;

	t71 = ((x289+(x290<=x291))^x292);

	if (t71 != 9223372036854776135LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -1;
	int32_t x294 = -1;
	static int64_t x296 = 96492477286092LL;

	t72 = ((x293+(x294<=x295))^x296);

	if (t72 != -96492477286093LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = -1;
	static uint8_t x298 = 67U;
	static volatile int64_t x299 = INT64_MAX;
	volatile int16_t x300 = 1908;
	int32_t t73 = -374;

	t73 = ((x297+(x298<=x299))^x300);

	if (t73 != 1908) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x301 = 26U;
	uint32_t x302 = 209378076U;
	volatile uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 20532U;
	int32_t t74 = 274962898;

	t74 = ((x301+(x302<=x303))^x304);

	if (t74 != 20526) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -8;
	int32_t x306 = -1;
	static volatile int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t75 = 0;

	t75 = ((x305+(x306<=x307))^x308);

	if (t75 != 32761) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x309 = 415;
	volatile int8_t x310 = -1;
	int16_t x311 = 5966;
	uint16_t x312 = 268U;
	int32_t t76 = 119345120;

	t76 = ((x309+(x310<=x311))^x312);

	if (t76 != 172) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = 15U;
	volatile int64_t x314 = -532374LL;
	static uint64_t x315 = 14147LLU;
	uint64_t x316 = 4570868604823611313LLU;
	volatile uint64_t t77 = 2482LLU;

	t77 = ((x313+(x314<=x315))^x316);

	if (t77 != 4570868604823611326LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x319 = UINT8_MAX;
	int8_t x320 = -1;

	t78 = ((x317+(x318<=x319))^x320);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x322 = 22U;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MAX;
	volatile int32_t t79 = 74989254;

	t79 = ((x321+(x322<=x323))^x324);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	static uint8_t x327 = 20U;
	static int32_t x328 = -7213;
	int32_t t80 = 34296;

	t80 = ((x325+(x326<=x327))^x328);

	if (t80 != 25554) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x329 = INT64_MIN;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = -1;
	int32_t x332 = -1;
	int64_t t81 = INT64_MAX;

	t81 = ((x329+(x330<=x331))^x332);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x333 = INT8_MIN;
	static uint64_t x334 = 150288726LLU;
	volatile int32_t x336 = INT32_MIN;

	t82 = ((x333+(x334<=x335))^x336);

	if (t82 != 2147483520) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	int64_t x340 = 68395626168634LL;
	volatile int64_t t83 = 26LL;

	t83 = ((x337+(x338<=x339))^x340);

	if (t83 != -68395626168646LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x341 = 15U;
	int32_t x342 = -195487759;
	uint32_t x343 = UINT32_MAX;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t84 = 519082380189162LLU;

	t84 = ((x341+(x342<=x343))^x344);

	if (t84 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = INT8_MAX;
	volatile int64_t x348 = INT64_MIN;

	t85 = ((x345+(x346<=x347))^x348);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	int8_t x351 = -2;
	int32_t x352 = -17;
	volatile int32_t t86 = -6;

	t86 = ((x349+(x350<=x351))^x352);

	if (t86 != 110) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x354 = INT64_MIN;
	static int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;

	t87 = ((x353+(x354<=x355))^x356);

	if (t87 != -130) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x357 = -1;
	static volatile uint8_t x358 = UINT8_MAX;
	int16_t x359 = 5;
	int16_t x360 = 1769;
	volatile int32_t t88 = 341316;

	t88 = ((x357+(x358<=x359))^x360);

	if (t88 != -1770) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x361 = -1;
	uint32_t x363 = 811069U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t89 = -7173;

	t89 = ((x361+(x362<=x363))^x364);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t90 = 9607596411251LL;

	t90 = ((x365+(x366<=x367))^x368);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -1;
	int8_t x370 = 0;
	uint64_t x371 = UINT64_MAX;
	static int64_t x372 = INT64_MIN;

	t91 = ((x369+(x370<=x371))^x372);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x374 = -904289;
	int16_t x376 = INT16_MAX;
	volatile uint32_t t92 = 21903U;

	t92 = ((x373+(x374<=x375))^x376);

	if (t92 != 32767U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x377 = 1811;
	uint16_t x380 = 3546U;
	volatile int32_t t93 = 11957123;

	t93 = ((x377+(x378<=x379))^x380);

	if (t93 != 2766) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x381 = -1;
	static uint64_t x382 = UINT64_MAX;
	int64_t x384 = 18LL;
	volatile int64_t t94 = -76193324675114LL;

	t94 = ((x381+(x382<=x383))^x384);

	if (t94 != -19LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x386 = -1;
	int8_t x387 = 1;
	int16_t x388 = 9;
	static volatile int32_t t95 = -256981682;

	t95 = ((x385+(x386<=x387))^x388);

	if (t95 != -32760) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = 1474U;
	int16_t x391 = -1;
	int8_t x392 = -1;
	static int64_t t96 = -2107887150895104LL;

	t96 = ((x389+(x390<=x391))^x392);

	if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x394 = INT16_MAX;
	uint32_t x395 = 5541596U;
	static int32_t t97 = 4816967;

	t97 = ((x393+(x394<=x395))^x396);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x398 = INT16_MIN;
	uint64_t x399 = 7471LLU;
	volatile int8_t x400 = INT8_MIN;
	int32_t t98 = -1;

	t98 = ((x397+(x398<=x399))^x400);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -2470470LL;
	int16_t x402 = -3;
	int64_t x403 = -1LL;
	static volatile int32_t x404 = INT32_MIN;
	int64_t t99 = 320930133776957324LL;

	t99 = ((x401+(x402<=x403))^x404);

	if (t99 != 2145013179LL) { NG(); } else { ; }
	
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

