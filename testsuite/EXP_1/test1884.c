#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 122021147;
static volatile int32_t x2 = -754;
uint8_t x17 = UINT8_MAX;
static int16_t x23 = INT16_MIN;
volatile int64_t t6 = -457180LL;
int16_t x32 = INT16_MIN;
volatile uint64_t t8 = 70289784349476175LLU;
uint8_t x41 = UINT8_MAX;
static uint64_t x42 = 3385509589310559851LLU;
static volatile uint64_t t9 = 1882297008937668864LLU;
int64_t t12 = 2170368020900482LL;
volatile uint32_t x57 = 8U;
static int16_t x59 = INT16_MAX;
volatile uint64_t x67 = 1489308382LLU;
static int32_t x68 = INT32_MIN;
volatile int64_t t16 = -1484064LL;
int8_t x83 = INT8_MIN;
int16_t x84 = -7;
int64_t x101 = 233774563617058357LL;
int32_t x102 = -8;
int8_t x106 = INT8_MAX;
uint32_t x107 = UINT32_MAX;
volatile uint32_t t22 = UINT32_MAX;
uint16_t x109 = UINT16_MAX;
int64_t x120 = -3771168580005413031LL;
static int32_t x122 = INT32_MIN;
volatile int32_t t26 = 435992;
uint32_t x128 = 174U;
int16_t x130 = INT16_MIN;
static int32_t x131 = 169342141;
int16_t x133 = -3460;
volatile int64_t t29 = -1LL;
int32_t x142 = 261521;
int8_t x144 = INT8_MIN;
int64_t t32 = -5389LL;
int16_t x149 = INT16_MAX;
static int8_t x151 = 24;
int64_t x159 = -7658194976605022LL;
volatile int16_t x162 = -1;
int32_t x168 = -30;
static int16_t x169 = INT16_MAX;
int8_t x171 = -1;
static volatile int32_t t38 = 9;
int32_t x173 = 2063076;
static uint32_t x184 = UINT32_MAX;
int32_t x191 = 67406;
static int64_t x211 = INT64_MAX;
static volatile int64_t t49 = -75032069LL;
static int32_t x222 = -1;
static uint16_t x223 = UINT16_MAX;
uint8_t x226 = UINT8_MAX;
int8_t x231 = INT8_MIN;
uint16_t x244 = 4732U;
volatile int8_t x247 = 60;
int64_t x252 = -1LL;
volatile int64_t t59 = -34936721729040005LL;
volatile int64_t x261 = -1LL;
uint8_t x263 = UINT8_MAX;
uint32_t x264 = 45U;
volatile int64_t t60 = -7948554871131LL;
int16_t x266 = -1;
volatile int16_t x268 = -1;
volatile int64_t t61 = 1LL;
int8_t x269 = INT8_MIN;
uint16_t x275 = 83U;
int8_t x276 = INT8_MIN;
uint16_t x294 = UINT16_MAX;
int8_t x304 = 44;
int64_t t68 = 223553824194366214LL;
volatile int64_t t69 = -28LL;
int32_t x314 = INT32_MIN;
int64_t x321 = INT64_MIN;
volatile int64_t t73 = 8993645949695LL;
int32_t t74 = 414460;
int32_t x341 = -1275;
uint8_t x343 = 14U;
uint16_t x352 = UINT16_MAX;
uint64_t x353 = 5LLU;
int8_t x354 = INT8_MIN;
int8_t x360 = INT8_MIN;
static int32_t x366 = -1;
static volatile uint64_t t84 = 40LLU;
int32_t x374 = INT32_MIN;
int64_t x377 = 26483039897508547LL;
volatile int8_t x378 = INT8_MAX;
int16_t x386 = -8415;
uint64_t t88 = 6868879LLU;
static int32_t x395 = -1;
int16_t x400 = -1;
int32_t x407 = INT32_MIN;
static int32_t x409 = INT32_MIN;
int8_t x412 = INT8_MIN;
volatile int8_t x414 = INT8_MAX;
uint32_t x417 = 50U;
uint16_t x419 = 105U;
static int32_t x420 = -1;
int64_t x421 = INT64_MIN;
uint8_t x431 = 39U;


void f0(void) {
	int32_t x3 = -58;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (((x1|x2)-x3)|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int32_t x6 = INT32_MAX;
	volatile uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 109LLU;
	static volatile uint64_t t1 = 65377501146LLU;

	t1 = (((x5|x6)-x7)|x8);

	if (t1 != 18446744073709551469LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -12;
	int32_t x10 = -949381;
	uint64_t x11 = 63508186482384119LLU;
	uint8_t x12 = 19U;
	uint64_t t2 = 1052155503453909492LLU;

	t2 = (((x9|x10)-x11)|x12);

	if (t2 != 18383235887227167515LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 186952224LLU;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t3 = 1793004018177067LLU;

	t3 = (((x13|x14)-x15)|x16);

	if (t3 != 18446744071749107711LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int64_t x19 = INT64_MAX;
	volatile int64_t x20 = 3338LL;
	volatile int64_t t4 = -113098803466482636LL;

	t4 = (((x17|x18)-x19)|x20);

	if (t4 != -9223372036854772470LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = -1;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -163650LL;

	t5 = (((x21|x22)-x23)|x24);

	if (t5 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;

	t6 = (((x25|x26)-x27)|x28);

	if (t6 != -2147417985LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = -295;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = -209;

	t7 = (((x29|x30)-x31)|x32);

	if (t7 != -512) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = -153;
	static volatile int32_t x39 = 19;
	uint64_t x40 = 908342000398LLU;

	t8 = (((x37|x38)-x39)|x40);

	if (t8 != 18446744073709551454LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x43 = -288345029;
	int64_t x44 = 87943815237996LL;

	t9 = (((x41|x42)-x43)|x44);

	if (t9 != 3385581006319694828LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 67U;
	uint32_t x46 = 2U;
	int8_t x47 = -1;
	int8_t x48 = INT8_MAX;
	static uint32_t t10 = 30U;

	t10 = (((x45|x46)-x47)|x48);

	if (t10 != 127U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x49 = INT64_MIN;
	int64_t x50 = -1LL;
	volatile int64_t x51 = 1LL;
	static int64_t x52 = 8056LL;
	static int64_t t11 = 29759LL;

	t11 = (((x49|x50)-x51)|x52);

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = 1;
	volatile uint8_t x54 = UINT8_MAX;
	volatile int32_t x55 = INT32_MAX;
	int64_t x56 = -1033773092LL;

	t12 = (((x53|x54)-x55)|x56);

	if (t12 != -1033773092LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x58 = 14574U;
	volatile int64_t x60 = -692262341181716LL;
	volatile int64_t t13 = 805876550563733858LL;

	t13 = (((x57|x58)-x59)|x60);

	if (t13 != -692258533802257LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = 8272731U;
	uint64_t x63 = 413837054418584294LLU;
	int16_t x64 = -4;
	volatile uint64_t t14 = 33LLU;

	t14 = (((x61|x62)-x63)|x64);

	if (t14 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 0;
	volatile int32_t x66 = -1;
	uint64_t t15 = 1035LLU;

	t15 = (((x65|x66)-x67)|x68);

	if (t15 != 18446744072220243233LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 426U;
	volatile int64_t x74 = INT64_MIN;
	uint8_t x75 = 0U;
	volatile int32_t x76 = INT32_MIN;

	t16 = (((x73|x74)-x75)|x76);

	if (t16 != -2147483222LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = 1U;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (((x77|x78)-x79)|x80);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int8_t x82 = INT8_MIN;
	static int32_t t18 = -16335360;

	t18 = (((x81|x82)-x83)|x84);

	if (t18 != -7) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	volatile uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 0U;
	volatile int64_t x88 = 204713581645962LL;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x85|x86)-x87)|x88);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = -990;
	uint64_t x99 = 125LLU;
	int64_t x100 = 183LL;
	volatile uint64_t t20 = 2045125401367500LLU;

	t20 = (((x97|x98)-x99)|x100);

	if (t20 != 18446744073709550519LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x103 = -206;
	volatile uint8_t x104 = 60U;
	int64_t t21 = -1LL;

	t21 = (((x101|x102)-x103)|x104);

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x105 = 12U;
	volatile int8_t x108 = -1;

	t22 = (((x105|x106)-x107)|x108);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = -1;
	volatile uint8_t x111 = UINT8_MAX;
	static int8_t x112 = INT8_MIN;
	int32_t t23 = 2490;

	t23 = (((x109|x110)-x111)|x112);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 643;
	static int8_t x114 = INT8_MIN;
	int16_t x115 = -5;
	static uint16_t x116 = UINT16_MAX;
	volatile int32_t t24 = 734724913;

	t24 = (((x113|x114)-x115)|x116);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = -10;
	int32_t x119 = INT32_MIN;
	static volatile int64_t t25 = -14914291LL;

	t25 = (((x117|x118)-x119)|x120);

	if (t25 != -3771168578674360321LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int16_t x123 = INT16_MAX;
	uint8_t x124 = UINT8_MAX;

	t26 = (((x121|x122)-x123)|x124);

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = -1;
	uint16_t x127 = 426U;
	volatile uint32_t t27 = 1630972U;

	t27 = (((x125|x126)-x127)|x128);

	if (t27 != 4294967039U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x132 = -1;
	volatile int32_t t28 = 1;

	t28 = (((x129|x130)-x131)|x132);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = UINT16_MAX;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;

	t29 = (((x133|x134)-x135)|x136);

	if (t29 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	int8_t x139 = -1;
	int32_t x140 = 480327;
	int64_t t30 = 3124074582LL;

	t30 = (((x137|x138)-x139)|x140);

	if (t30 != -9223372036854295481LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = 7289168447555LL;
	int8_t x143 = INT8_MIN;
	int64_t t31 = -34260156747452LL;

	t31 = (((x141|x142)-x143)|x144);

	if (t31 != -45LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static volatile int32_t x146 = -60912;
	int64_t x147 = 13LL;
	static int16_t x148 = INT16_MIN;

	t32 = (((x145|x146)-x147)|x148);

	if (t32 != -27918LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x150 = INT64_MAX;
	static uint16_t x152 = 7327U;
	volatile int64_t t33 = INT64_MAX;

	t33 = (((x149|x150)-x151)|x152);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	uint16_t x154 = 7U;
	uint8_t x155 = 0U;
	uint64_t x156 = UINT64_MAX;
	static volatile uint64_t t34 = UINT64_MAX;

	t34 = (((x153|x154)-x155)|x156);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -1;
	uint16_t x158 = 975U;
	int64_t x160 = INT64_MIN;
	int64_t t35 = -1LL;

	t35 = (((x157|x158)-x159)|x160);

	if (t35 != -9215713841878170787LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	static int64_t x163 = 23LL;
	static uint32_t x164 = 45972182U;
	volatile int64_t t36 = -7791LL;

	t36 = (((x161|x162)-x163)|x164);

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 6U;
	int16_t x166 = INT16_MAX;
	static volatile uint8_t x167 = UINT8_MAX;
	int32_t t37 = -841264426;

	t37 = (((x165|x166)-x167)|x168);

	if (t37 != -30) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = INT16_MIN;
	uint16_t x172 = 71U;

	t38 = (((x169|x170)-x171)|x172);

	if (t38 != 71) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = 2917530432886LL;
	static int16_t x175 = INT16_MIN;
	int64_t x176 = -42LL;
	volatile int64_t t39 = -13675806LL;

	t39 = (((x173|x174)-x175)|x176);

	if (t39 != -10LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -1LL;
	int32_t x178 = -33570346;
	int16_t x179 = -7;
	volatile int32_t x180 = INT32_MIN;
	static volatile int64_t t40 = 39657569LL;

	t40 = (((x177|x178)-x179)|x180);

	if (t40 != -2147483642LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x181 = 256366888U;
	int8_t x182 = INT8_MIN;
	static int32_t x183 = 93937678;
	uint32_t t41 = UINT32_MAX;

	t41 = (((x181|x182)-x183)|x184);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x185 = UINT32_MAX;
	static int64_t x186 = -1LL;
	uint64_t x187 = 493914797136577985LLU;
	static volatile uint32_t x188 = 323504U;
	uint64_t t42 = 4287439267568LLU;

	t42 = (((x185|x186)-x187)|x188);

	if (t42 != 17952829276573007806LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MAX;
	volatile uint32_t x190 = UINT32_MAX;
	int16_t x192 = -112;
	uint32_t t43 = 6519U;

	t43 = (((x189|x190)-x191)|x192);

	if (t43 != 4294967217U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -4;
	static int8_t x194 = -22;
	int16_t x195 = 0;
	volatile int64_t x196 = INT64_MIN;
	int64_t t44 = -515LL;

	t44 = (((x193|x194)-x195)|x196);

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 12546729120LLU;
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;
	static int8_t x200 = INT8_MIN;
	static uint64_t t45 = 196LLU;

	t45 = (((x197|x198)-x199)|x200);

	if (t45 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x201 = -1;
	static int16_t x202 = -1;
	uint16_t x203 = 2U;
	static int32_t x204 = -11;
	int32_t t46 = -14;

	t46 = (((x201|x202)-x203)|x204);

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x205 = 7U;
	int64_t x206 = -3859747140LL;
	static volatile int16_t x207 = -314;
	int64_t x208 = -1LL;
	static volatile int64_t t47 = -7819LL;

	t47 = (((x205|x206)-x207)|x208);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 361U;
	uint8_t x210 = 118U;
	int32_t x212 = -885;
	volatile int64_t t48 = -66010694LL;

	t48 = (((x209|x210)-x211)|x212);

	if (t48 != -629LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x217 = INT16_MIN;
	int8_t x218 = 55;
	int16_t x219 = -1;
	volatile int64_t x220 = -61LL;

	t49 = (((x217|x218)-x219)|x220);

	if (t49 != -5LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -1LL;
	int32_t x224 = INT32_MIN;
	static volatile int64_t t50 = -1LL;

	t50 = (((x221|x222)-x223)|x224);

	if (t50 != -65536LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -3360355972LL;
	uint64_t x227 = 494084710753192108LLU;
	volatile uint8_t x228 = 3U;
	static uint64_t t51 = 1804301826LLU;

	t51 = (((x225|x226)-x227)|x228);

	if (t51 != 17952659359596003667LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x229 = INT64_MIN;
	static int64_t x230 = 95284018LL;
	static int16_t x232 = 8;
	static volatile int64_t t52 = 14LL;

	t52 = (((x229|x230)-x231)|x232);

	if (t52 != -9223372036759491654LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 4U;
	volatile int16_t x234 = -59;
	int8_t x235 = INT8_MIN;
	static int16_t x236 = 4135;
	volatile int32_t t53 = 25297485;

	t53 = (((x233|x234)-x235)|x236);

	if (t53 != 4199) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = 3505438343403LL;
	static int16_t x238 = -1;
	static volatile int16_t x239 = -1;
	int8_t x240 = -1;
	volatile int64_t t54 = -773698LL;

	t54 = (((x237|x238)-x239)|x240);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -1LL;
	int64_t t55 = -219536LL;

	t55 = (((x241|x242)-x243)|x244);

	if (t55 != 4732LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 4177;
	static int16_t x246 = -829;
	static volatile int8_t x248 = INT8_MIN;
	int32_t t56 = -2195895;

	t56 = (((x245|x246)-x247)|x248);

	if (t56 != -105) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = 0;
	volatile int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	int64_t t57 = 4265745LL;

	t57 = (((x249|x250)-x251)|x252);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x253 = 1U;
	int8_t x254 = INT8_MAX;
	uint32_t x255 = 1798703111U;
	int8_t x256 = -1;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (((x253|x254)-x255)|x256);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 54U;
	int32_t x258 = -5;
	static int64_t x259 = -42575932674290LL;
	int32_t x260 = -1;

	t59 = (((x257|x258)-x259)|x260);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x262 = INT64_MAX;

	t60 = (((x261|x262)-x263)|x264);

	if (t60 != -211LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = INT64_MIN;
	static int64_t x267 = INT64_MAX;

	t61 = (((x265|x266)-x267)|x268);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x270 = INT64_MIN;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;
	volatile int64_t t62 = 106409173LL;

	t62 = (((x269|x270)-x271)|x272);

	if (t62 != -65663LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x273 = -1;
	int32_t x274 = INT32_MIN;
	volatile int32_t t63 = 14133;

	t63 = (((x273|x274)-x275)|x276);

	if (t63 != -84) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x285 = -1964;
	int8_t x286 = 30;
	uint16_t x287 = UINT16_MAX;
	static uint64_t x288 = 2245819285251972956LLU;
	volatile uint64_t t64 = 58642861LLU;

	t64 = (((x285|x286)-x287)|x288);

	if (t64 != 18446744073709485919LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x289 = -1771;
	int8_t x290 = INT8_MAX;
	volatile uint64_t x291 = 70767LLU;
	int16_t x292 = INT16_MIN;
	static volatile uint64_t t65 = 18792461LLU;

	t65 = (((x289|x290)-x291)|x292);

	if (t65 != 18446744073709544720LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = 1;
	int16_t x295 = 1201;
	volatile int16_t x296 = 1;
	int32_t t66 = -10360038;

	t66 = (((x293|x294)-x295)|x296);

	if (t66 != 64335) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MAX;
	int16_t x299 = -3476;
	int8_t x300 = -12;
	uint32_t t67 = 72U;

	t67 = (((x297|x298)-x299)|x300);

	if (t67 != 4294967287U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = -1LL;
	static int64_t x302 = 552LL;
	int32_t x303 = INT32_MAX;

	t68 = (((x301|x302)-x303)|x304);

	if (t68 != -2147483604LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x305 = 12598;
	static int64_t x306 = -947573830522432958LL;
	uint16_t x307 = UINT16_MAX;
	int32_t x308 = INT32_MIN;

	t69 = (((x305|x306)-x307)|x308);

	if (t69 != -1589628041LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x309 = -1LL;
	static volatile int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MIN;
	static uint16_t x312 = 91U;
	volatile int64_t t70 = INT64_MAX;

	t70 = (((x309|x310)-x311)|x312);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	static uint32_t x316 = 84U;
	volatile uint32_t t71 = 9273996U;

	t71 = (((x313|x314)-x315)|x316);

	if (t71 != 4294934740U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x317 = INT16_MAX;
	uint64_t x318 = 532LLU;
	volatile uint64_t x319 = 450LLU;
	uint16_t x320 = 2U;
	uint64_t t72 = 764297509882LLU;

	t72 = (((x317|x318)-x319)|x320);

	if (t72 != 32319LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x322 = INT16_MIN;
	static volatile int8_t x323 = -1;
	int16_t x324 = INT16_MIN;

	t73 = (((x321|x322)-x323)|x324);

	if (t73 != -32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x325 = INT16_MIN;
	uint8_t x326 = 0U;
	static int8_t x327 = -1;
	static int8_t x328 = 34;

	t74 = (((x325|x326)-x327)|x328);

	if (t74 != -32733) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = 1;
	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = 15;
	volatile int64_t t75 = -113368323947LL;

	t75 = (((x329|x330)-x331)|x332);

	if (t75 != -9223372036854775665LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	static int32_t x340 = 3421270;
	static volatile int32_t t76 = -22959;

	t76 = (((x337|x338)-x339)|x340);

	if (t76 != 3421311) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x342 = -42;
	uint64_t x344 = UINT64_MAX;
	static uint64_t t77 = UINT64_MAX;

	t77 = (((x341|x342)-x343)|x344);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x345 = 2U;
	static int16_t x346 = 1704;
	static uint8_t x347 = 18U;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t78 = 2674723;

	t78 = (((x345|x346)-x347)|x348);

	if (t78 != -104) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = -1852LL;
	uint64_t x350 = 84939337803365361LLU;
	int16_t x351 = INT16_MIN;
	uint64_t t79 = 78822LLU;

	t79 = (((x349|x350)-x351)|x352);

	if (t79 != 65535LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	static uint64_t t80 = 327075738237081LLU;

	t80 = (((x353|x354)-x355)|x356);

	if (t80 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = 3U;
	int8_t x358 = INT8_MAX;
	int32_t x359 = -2565;
	volatile int32_t t81 = -575227;

	t81 = (((x357|x358)-x359)|x360);

	if (t81 != -124) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 29U;
	uint64_t x364 = 1025810372869385LLU;
	volatile uint64_t t82 = 1018LLU;

	t82 = (((x361|x362)-x363)|x364);

	if (t82 != 1025814283943915LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x365 = INT8_MAX;
	int8_t x367 = 0;
	int64_t x368 = INT64_MAX;
	int64_t t83 = 65LL;

	t83 = (((x365|x366)-x367)|x368);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = -1;
	int8_t x370 = -1;
	uint64_t x371 = 124653273170LLU;
	static int32_t x372 = 0;

	t84 = (((x369|x370)-x371)|x372);

	if (t84 != 18446743949056278445LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x375 = 890018;
	static int32_t x376 = INT32_MIN;
	uint32_t t85 = 222939U;

	t85 = (((x373|x374)-x375)|x376);

	if (t85 != 4294077277U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x379 = 6650593U;
	int32_t x380 = -1;
	static volatile int64_t t86 = -2787LL;

	t86 = (((x377|x378)-x379)|x380);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x381 = 585U;
	int32_t x382 = -541;
	uint16_t x383 = 0U;
	static int8_t x384 = -1;
	volatile int32_t t87 = -1032549859;

	t87 = (((x381|x382)-x383)|x384);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x385 = UINT64_MAX;
	uint16_t x387 = 1336U;
	uint64_t x388 = 132108215567653LLU;

	t88 = (((x385|x386)-x387)|x388);

	if (t88 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x389 = 46U;
	volatile int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	static volatile int32_t x392 = INT32_MAX;
	int32_t t89 = INT32_MAX;

	t89 = (((x389|x390)-x391)|x392);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = -1;
	uint8_t x394 = UINT8_MAX;
	volatile int8_t x396 = -1;
	volatile int32_t t90 = 9;

	t90 = (((x393|x394)-x395)|x396);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = 1U;
	static uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MAX;
	static int32_t t91 = -185339;

	t91 = (((x397|x398)-x399)|x400);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x401 = 546LLU;
	static uint8_t x402 = 11U;
	int8_t x403 = INT8_MIN;
	uint64_t x404 = 6111931485865663LLU;
	volatile uint64_t t92 = 32695LLU;

	t92 = (((x401|x402)-x403)|x404);

	if (t92 != 6111931485865663LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	uint16_t x406 = 374U;
	static volatile int32_t x408 = INT32_MIN;
	static volatile int32_t t93 = 1575010;

	t93 = (((x405|x406)-x407)|x408);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x410 = -1;
	int16_t x411 = -1;
	static int32_t t94 = -315068;

	t94 = (((x409|x410)-x411)|x412);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x413 = UINT32_MAX;
	static int32_t x415 = INT32_MAX;
	int8_t x416 = -6;
	uint32_t t95 = 30U;

	t95 = (((x413|x414)-x415)|x416);

	if (t95 != 4294967290U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x418 = -1;
	uint32_t t96 = UINT32_MAX;

	t96 = (((x417|x418)-x419)|x420);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x422 = -1;
	uint64_t x423 = 19852155LLU;
	int32_t x424 = -63378;
	volatile uint64_t t97 = 17299010LLU;

	t97 = (((x421|x422)-x423)|x424);

	if (t97 != 18446744073709493486LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = UINT16_MAX;
	int16_t x430 = INT16_MIN;
	volatile int16_t x432 = 3835;
	volatile int32_t t98 = 21932700;

	t98 = (((x429|x430)-x431)|x432);

	if (t98 != -5) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x433 = INT32_MIN;
	static volatile int64_t x434 = INT64_MAX;
	uint32_t x435 = 3393U;
	int64_t x436 = -1LL;
	int64_t t99 = 105936869800486370LL;

	t99 = (((x433|x434)-x435)|x436);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

