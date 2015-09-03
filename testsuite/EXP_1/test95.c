#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
static int16_t x6 = -11362;
int8_t x10 = -1;
int16_t x16 = INT16_MIN;
volatile uint32_t x20 = UINT32_MAX;
int16_t x26 = INT16_MIN;
static int16_t x27 = INT16_MIN;
int64_t x28 = INT64_MAX;
int8_t x41 = -1;
int32_t t9 = -62;
volatile int16_t x54 = INT16_MIN;
int64_t x59 = INT64_MIN;
int8_t x64 = -1;
int32_t t13 = -46451;
int16_t x72 = INT16_MIN;
static int32_t t15 = 259811;
volatile int32_t t17 = -106375;
int64_t x95 = 2438946100217LL;
int64_t x96 = INT64_MIN;
uint32_t x98 = 0U;
volatile uint8_t x103 = UINT8_MAX;
uint32_t x108 = 31772762U;
int16_t x112 = 3044;
static uint16_t x113 = 340U;
uint64_t x122 = 524937674363414LLU;
volatile int32_t t30 = -1;
int64_t x142 = INT64_MIN;
volatile int64_t x143 = 552635051522657579LL;
uint8_t x149 = 2U;
int8_t x152 = INT8_MIN;
int32_t x162 = -1;
static volatile uint8_t x174 = 61U;
int32_t x194 = -1;
uint32_t x195 = 220821U;
uint16_t x196 = 821U;
volatile int16_t x202 = 218;
volatile int64_t x203 = INT64_MAX;
int32_t t45 = -265470991;
int32_t x215 = INT32_MIN;
int32_t x229 = -1121493;
int8_t x235 = INT8_MAX;
int32_t t50 = 7;
uint8_t x237 = 8U;
static uint64_t x239 = UINT64_MAX;
uint64_t x244 = 20LLU;
volatile uint64_t x245 = 6858630457557LLU;
static int8_t x250 = -1;
volatile int8_t x258 = INT8_MIN;
int64_t t55 = -1715613524628154979LL;
static int16_t x265 = 110;
uint64_t x269 = UINT64_MAX;
int64_t t60 = 7LL;
uint8_t x285 = 8U;
uint32_t x286 = 70181U;
int8_t x302 = INT8_MIN;
volatile int32_t t65 = 731;
static uint16_t x309 = 70U;
uint8_t x311 = UINT8_MAX;
volatile uint8_t x312 = 4U;
volatile uint8_t x314 = 109U;
volatile int8_t x320 = INT8_MAX;
int64_t x322 = -1152147662957LL;
int32_t x324 = INT32_MIN;
uint8_t x336 = 96U;
int32_t t73 = 10797964;
int16_t x354 = -1;
int32_t x362 = INT32_MIN;
static int32_t t77 = -20;
volatile int32_t x375 = -1;
int64_t t78 = -6311043450931LL;
volatile int32_t x379 = -1;
uint64_t t80 = 698756394LLU;
uint32_t x394 = UINT32_MAX;
static int32_t t85 = 0;
static uint64_t t86 = 747379083113LLU;
static int64_t x415 = INT64_MIN;
int64_t t88 = -3277890668LL;
static uint8_t x423 = UINT8_MAX;
int16_t x425 = INT16_MAX;
int32_t x428 = INT32_MIN;
int32_t t90 = 45;
volatile int32_t t92 = 152;
int8_t x437 = 26;
int16_t x438 = INT16_MIN;
volatile int64_t t93 = 61LL;
int16_t x442 = INT16_MAX;
static int64_t x443 = -1LL;
int64_t x457 = 79056LL;
volatile int32_t t97 = -5;


void f0(void) {
	static uint16_t x1 = 1423U;
	volatile int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MAX;
	static int64_t x4 = INT64_MIN;
	int64_t t0 = -444LL;

	t0 = (((x1+x2)==x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = 1;
	int8_t x8 = -8;
	volatile int32_t t1 = 207;

	t1 = (((x5+x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 835369U;
	int64_t x11 = INT64_MIN;
	volatile uint32_t x12 = 1483U;
	static volatile uint32_t t2 = 1U;

	t2 = (((x9+x10)==x11)/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 13U;
	int32_t x14 = 475;
	int8_t x15 = INT8_MAX;
	volatile int32_t t3 = -230858093;

	t3 = (((x13+x14)==x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 709863U;
	int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	uint32_t t4 = 48988U;

	t4 = (((x17+x18)==x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 3219;
	int64_t t5 = -28LL;

	t5 = (((x25+x26)==x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	volatile int64_t x30 = -1LL;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = -1;
	static volatile int32_t t6 = -3249;

	t6 = (((x29+x30)==x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 4895381663502830LL;
	volatile int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MAX;
	static int16_t x36 = -1;
	volatile int32_t t7 = -11257261;

	t7 = (((x33+x34)==x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 27925007;
	static uint8_t x38 = 35U;
	int32_t x39 = INT32_MAX;
	uint32_t x40 = 519277930U;
	volatile uint32_t t8 = 25U;

	t8 = (((x37+x38)==x39)/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x42 = UINT8_MAX;
	int64_t x43 = -1LL;
	uint16_t x44 = UINT16_MAX;

	t9 = (((x41+x42)==x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	int16_t x46 = 1;
	volatile int64_t x47 = -1LL;
	int32_t x48 = -1;
	int32_t t10 = -3;

	t10 = (((x45+x46)==x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 0;
	volatile uint32_t x55 = 619U;
	int32_t x56 = -24;
	static volatile int32_t t11 = -919;

	t11 = (((x53+x54)==x55)/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 50026;
	uint8_t x58 = 56U;
	uint32_t x60 = 1010155U;
	static uint32_t t12 = 14U;

	t12 = (((x57+x58)==x59)/x60);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = UINT32_MAX;
	volatile int64_t x63 = -144186650LL;

	t13 = (((x61+x62)==x63)/x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = -1342;
	static uint64_t x66 = 55LLU;
	int64_t x67 = -1LL;
	uint32_t x68 = 132649174U;
	uint32_t t14 = 796970470U;

	t14 = (((x65+x66)==x67)/x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	volatile int16_t x70 = INT16_MIN;
	static int16_t x71 = INT16_MAX;

	t15 = (((x69+x70)==x71)/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 208525LLU;
	volatile int8_t x76 = INT8_MIN;
	static volatile int32_t t16 = 997582834;

	t16 = (((x73+x74)==x75)/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = 586LL;
	uint16_t x80 = 12U;

	t17 = (((x77+x78)==x79)/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 18;
	volatile int32_t x82 = INT32_MIN;
	uint32_t x83 = 5430034U;
	int8_t x84 = -1;
	static int32_t t18 = -348239972;

	t18 = (((x81+x82)==x83)/x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 289U;
	volatile int16_t x86 = INT16_MIN;
	static int32_t x87 = -7;
	static volatile int64_t x88 = -1LL;
	volatile int64_t t19 = 4579991753LL;

	t19 = (((x85+x86)==x87)/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = INT64_MIN;
	uint16_t x94 = 28U;
	static volatile int64_t t20 = -116678LL;

	t20 = (((x93+x94)==x95)/x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = -1;
	volatile int64_t x99 = INT64_MIN;
	uint8_t x100 = 57U;
	int32_t t21 = -5561590;

	t21 = (((x97+x98)==x99)/x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = 2293463442LL;
	static int8_t x102 = -32;
	static volatile uint16_t x104 = 197U;
	volatile int32_t t22 = -90191726;

	t22 = (((x101+x102)==x103)/x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x105 = 13711075023LLU;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	uint32_t t23 = 29162840U;

	t23 = (((x105+x106)==x107)/x108);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 1U;
	uint16_t x111 = 0U;
	int32_t t24 = -54782;

	t24 = (((x109+x110)==x111)/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x114 = 7U;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t25 = 181627;

	t25 = (((x113+x114)==x115)/x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = -7;
	static int8_t x118 = 0;
	int64_t x119 = -14314867824761119LL;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t26 = 214705U;

	t26 = (((x117+x118)==x119)/x120);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = INT8_MAX;
	int16_t x123 = INT16_MIN;
	int8_t x124 = -1;
	static volatile int32_t t27 = 7214506;

	t27 = (((x121+x122)==x123)/x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = 521;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MAX;
	static int8_t x128 = INT8_MIN;
	int32_t t28 = 107540;

	t28 = (((x125+x126)==x127)/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = 0;
	int8_t x131 = -39;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t29 = 244246851246LLU;

	t29 = (((x129+x130)==x131)/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = INT8_MIN;
	int32_t x134 = -56;
	uint8_t x135 = 16U;
	uint16_t x136 = UINT16_MAX;

	t30 = (((x133+x134)==x135)/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = UINT64_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t31 = -762;

	t31 = (((x141+x142)==x143)/x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -664LL;
	int16_t x146 = 107;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t x148 = 722231708505751LLU;
	static uint64_t t32 = 1LLU;

	t32 = (((x145+x146)==x147)/x148);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x150 = 7241U;
	volatile uint32_t x151 = 309374970U;
	volatile int32_t t33 = -1233641;

	t33 = (((x149+x150)==x151)/x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x153 = UINT32_MAX;
	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = UINT32_MAX;
	uint32_t t34 = 7U;

	t34 = (((x153+x154)==x155)/x156);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x157 = -21;
	int8_t x158 = INT8_MAX;
	int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	int32_t t35 = 189714711;

	t35 = (((x157+x158)==x159)/x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 13U;
	uint32_t t36 = 14326019U;

	t36 = (((x161+x162)==x163)/x164);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 586281344541251LL;
	uint8_t x166 = 9U;
	int8_t x167 = 26;
	int32_t x168 = INT32_MIN;
	volatile int32_t t37 = -2995;

	t37 = (((x165+x166)==x167)/x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	static uint16_t x170 = 3U;
	uint16_t x171 = UINT16_MAX;
	static int16_t x172 = INT16_MIN;
	static int32_t t38 = -7602;

	t38 = (((x169+x170)==x171)/x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	uint8_t x176 = 44U;
	int32_t t39 = 598;

	t39 = (((x173+x174)==x175)/x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -1;
	uint16_t x186 = 10141U;
	uint32_t x187 = 1560766604U;
	int8_t x188 = INT8_MAX;
	int32_t t40 = -620722;

	t40 = (((x185+x186)==x187)/x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x189 = INT16_MIN;
	volatile int16_t x190 = -2;
	volatile uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 60U;
	volatile int32_t t41 = -31;

	t41 = (((x189+x190)==x191)/x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = -48;
	int32_t t42 = 2;

	t42 = (((x193+x194)==x195)/x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x197 = -1;
	volatile uint32_t x198 = 9U;
	uint8_t x199 = 11U;
	uint8_t x200 = 1U;
	volatile int32_t t43 = 6954775;

	t43 = (((x197+x198)==x199)/x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = -1LL;
	static int32_t x204 = INT32_MIN;
	int32_t t44 = 9830;

	t44 = (((x201+x202)==x203)/x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = 2463U;
	int8_t x206 = INT8_MAX;
	static int32_t x207 = INT32_MIN;
	int8_t x208 = -1;

	t45 = (((x205+x206)==x207)/x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = -1;
	static int16_t x210 = 881;
	uint32_t x211 = 1548898925U;
	int32_t x212 = -885756285;
	volatile int32_t t46 = 135;

	t46 = (((x209+x210)==x211)/x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = -10685726262LL;
	uint8_t x214 = 18U;
	int16_t x216 = -1;
	int32_t t47 = 338498;

	t47 = (((x213+x214)==x215)/x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = INT32_MAX;
	int16_t x226 = INT16_MIN;
	int32_t x227 = 250;
	static uint32_t x228 = UINT32_MAX;
	uint32_t t48 = 6U;

	t48 = (((x225+x226)==x227)/x228);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = INT16_MAX;
	int64_t x231 = 436263248LL;
	volatile int8_t x232 = -48;
	static volatile int32_t t49 = -10995;

	t49 = (((x229+x230)==x231)/x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -6;
	int16_t x234 = INT16_MAX;
	int16_t x236 = 9;

	t50 = (((x233+x234)==x235)/x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x238 = 25891805043171027LLU;
	int8_t x240 = -11;
	volatile int32_t t51 = -8391975;

	t51 = (((x237+x238)==x239)/x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x241 = UINT64_MAX;
	volatile int32_t x242 = INT32_MAX;
	uint32_t x243 = UINT32_MAX;
	static uint64_t t52 = 1LLU;

	t52 = (((x241+x242)==x243)/x244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x246 = INT64_MIN;
	volatile int8_t x247 = INT8_MAX;
	int64_t x248 = INT64_MIN;
	int64_t t53 = 496LL;

	t53 = (((x245+x246)==x247)/x248);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x249 = -94;
	int32_t x251 = 5359069;
	int8_t x252 = INT8_MIN;
	int32_t t54 = -13;

	t54 = (((x249+x250)==x251)/x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MAX;
	uint64_t x259 = UINT64_MAX;
	int64_t x260 = INT64_MIN;

	t55 = (((x257+x258)==x259)/x260);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x266 = 2656U;
	int32_t x267 = INT32_MIN;
	int32_t x268 = 76;
	int32_t t56 = 3884;

	t56 = (((x265+x266)==x267)/x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x270 = INT16_MIN;
	static int64_t x271 = INT64_MIN;
	int16_t x272 = 42;
	volatile int32_t t57 = 0;

	t57 = (((x269+x270)==x271)/x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x273 = 3U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MAX;
	volatile int64_t x276 = INT64_MAX;
	volatile int64_t t58 = 1341588101LL;

	t58 = (((x273+x274)==x275)/x276);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x277 = -857LL;
	int8_t x278 = INT8_MAX;
	volatile int8_t x279 = 1;
	uint8_t x280 = 62U;
	int32_t t59 = -5;

	t59 = (((x277+x278)==x279)/x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x281 = 13U;
	static int64_t x282 = 22624411284997805LL;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = INT64_MIN;

	t60 = (((x281+x282)==x283)/x284);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x287 = -39;
	volatile int32_t x288 = INT32_MIN;
	volatile int32_t t61 = 0;

	t61 = (((x285+x286)==x287)/x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = INT32_MAX;
	uint32_t x290 = 2U;
	int64_t x291 = INT64_MIN;
	int64_t x292 = 16016890LL;
	int64_t t62 = -1767126662983212098LL;

	t62 = (((x289+x290)==x291)/x292);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = 64004554816199LLU;
	int64_t x294 = INT64_MIN;
	int16_t x295 = -1;
	int64_t x296 = -1503986LL;
	int64_t t63 = 1LL;

	t63 = (((x293+x294)==x295)/x296);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x301 = 27LLU;
	uint64_t x303 = 57381126285585917LLU;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t64 = 0;

	t64 = (((x301+x302)==x303)/x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	uint64_t x307 = 2985340457165217847LLU;
	int8_t x308 = INT8_MIN;

	t65 = (((x305+x306)==x307)/x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x310 = UINT64_MAX;
	int32_t t66 = 363239120;

	t66 = (((x309+x310)==x311)/x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x313 = -1;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -1;
	int32_t t67 = 245;

	t67 = (((x313+x314)==x315)/x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = 0;
	int16_t x319 = INT16_MIN;
	volatile int32_t t68 = -50450317;

	t68 = (((x317+x318)==x319)/x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = -3126440810482686LL;
	int16_t x323 = 0;
	volatile int32_t t69 = -3;

	t69 = (((x321+x322)==x323)/x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x325 = INT16_MIN;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 112501603U;
	int64_t x328 = -120LL;
	int64_t t70 = -386504363987500LL;

	t70 = (((x325+x326)==x327)/x328);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x333 = 2139887712750LLU;
	volatile int32_t x334 = INT32_MIN;
	volatile int32_t x335 = 21079307;
	static volatile int32_t t71 = -27327;

	t71 = (((x333+x334)==x335)/x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x341 = -1LL;
	uint32_t x342 = 2568188U;
	volatile uint64_t x343 = 0LLU;
	volatile int64_t x344 = INT64_MAX;
	int64_t t72 = 52101942306041155LL;

	t72 = (((x341+x342)==x343)/x344);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x349 = 0U;
	static uint8_t x350 = 30U;
	uint32_t x351 = UINT32_MAX;
	static int32_t x352 = -1;

	t73 = (((x349+x350)==x351)/x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x353 = 1U;
	volatile uint8_t x355 = 18U;
	static int64_t x356 = INT64_MIN;
	int64_t t74 = 27LL;

	t74 = (((x353+x354)==x355)/x356);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 1U;
	static int16_t x358 = INT16_MAX;
	volatile int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	int32_t t75 = -108674094;

	t75 = (((x357+x358)==x359)/x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = -7218260675LL;
	int8_t x363 = INT8_MAX;
	int64_t x364 = -214902807957401LL;
	int64_t t76 = -32LL;

	t76 = (((x361+x362)==x363)/x364);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x369 = 1202615713U;
	int8_t x370 = INT8_MAX;
	static int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MIN;

	t77 = (((x369+x370)==x371)/x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	int64_t x376 = INT64_MAX;

	t78 = (((x373+x374)==x375)/x376);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int32_t x380 = 8;
	volatile int32_t t79 = 115845924;

	t79 = (((x377+x378)==x379)/x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = 23360U;
	uint32_t x383 = 972406239U;
	uint64_t x384 = UINT64_MAX;

	t80 = (((x381+x382)==x383)/x384);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x389 = 27526454379LLU;
	int16_t x390 = -2530;
	volatile int32_t x391 = INT32_MAX;
	uint8_t x392 = 66U;
	int32_t t81 = -1;

	t81 = (((x389+x390)==x391)/x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x393 = 1U;
	uint16_t x395 = UINT16_MAX;
	volatile uint32_t x396 = UINT32_MAX;
	static uint32_t t82 = 122471002U;

	t82 = (((x393+x394)==x395)/x396);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = INT64_MAX;
	int8_t x398 = -1;
	int32_t x399 = -28425;
	static int8_t x400 = INT8_MAX;
	static volatile int32_t t83 = 245;

	t83 = (((x397+x398)==x399)/x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = INT64_MIN;
	uint16_t x402 = UINT16_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	static uint8_t x404 = UINT8_MAX;
	volatile int32_t t84 = -45261093;

	t84 = (((x401+x402)==x403)/x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = -1785LL;
	volatile int16_t x406 = INT16_MAX;
	int8_t x407 = -1;
	int32_t x408 = INT32_MIN;

	t85 = (((x405+x406)==x407)/x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x409 = INT32_MIN;
	volatile int64_t x410 = -159LL;
	int64_t x411 = INT64_MIN;
	uint64_t x412 = 14524744644LLU;

	t86 = (((x409+x410)==x411)/x412);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = -5954;
	int64_t x414 = -1LL;
	uint64_t x416 = 703586424319LLU;
	uint64_t t87 = 15821448LLU;

	t87 = (((x413+x414)==x415)/x416);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x417 = 197017429;
	uint8_t x418 = 49U;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = 24537869LL;

	t88 = (((x417+x418)==x419)/x420);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = INT32_MIN;
	uint64_t x422 = 54LLU;
	int32_t x424 = -168795676;
	static int32_t t89 = -45046;

	t89 = (((x421+x422)==x423)/x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x426 = INT16_MIN;
	uint64_t x427 = UINT64_MAX;

	t90 = (((x425+x426)==x427)/x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x429 = UINT8_MAX;
	int16_t x430 = INT16_MIN;
	uint8_t x431 = 3U;
	int16_t x432 = 54;
	volatile int32_t t91 = 1;

	t91 = (((x429+x430)==x431)/x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	int32_t x435 = 6434755;
	int32_t x436 = INT32_MIN;

	t92 = (((x433+x434)==x435)/x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x439 = 11221U;
	volatile int64_t x440 = INT64_MIN;

	t93 = (((x437+x438)==x439)/x440);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -1;
	uint64_t x444 = 284844146925LLU;
	volatile uint64_t t94 = 221312392699191091LLU;

	t94 = (((x441+x442)==x443)/x444);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x449 = UINT32_MAX;
	volatile int64_t x450 = 1573LL;
	volatile uint16_t x451 = 1U;
	uint8_t x452 = 5U;
	volatile int32_t t95 = -1;

	t95 = (((x449+x450)==x451)/x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = UINT32_MAX;
	uint16_t x459 = 314U;
	static int16_t x460 = 396;
	int32_t t96 = -102;

	t96 = (((x457+x458)==x459)/x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = -1;
	uint64_t x462 = 593253578739396LLU;
	volatile int64_t x463 = -1LL;
	int8_t x464 = INT8_MAX;

	t97 = (((x461+x462)==x463)/x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x469 = -65659960;
	uint8_t x470 = 6U;
	uint8_t x471 = 11U;
	int32_t x472 = -172;
	volatile int32_t t98 = 126228;

	t98 = (((x469+x470)==x471)/x472);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x473 = 817U;
	int16_t x474 = 745;
	uint8_t x475 = 2U;
	int16_t x476 = INT16_MAX;
	volatile int32_t t99 = 77516;

	t99 = (((x473+x474)==x475)/x476);

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

