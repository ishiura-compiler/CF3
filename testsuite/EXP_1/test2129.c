#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
uint32_t x4 = 11907U;
volatile int16_t x6 = INT16_MIN;
uint8_t x9 = 32U;
int32_t x18 = INT32_MIN;
uint32_t x28 = UINT32_MAX;
volatile int32_t x36 = INT32_MAX;
uint8_t x39 = 17U;
int32_t x53 = -1;
volatile uint8_t x55 = 27U;
int32_t t13 = 969280;
int64_t x59 = INT64_MAX;
int32_t t14 = -426812;
int32_t x61 = INT32_MAX;
volatile uint64_t x64 = 72541732074LLU;
static int32_t t15 = 2763;
static int32_t t16 = -261;
int64_t x71 = INT64_MIN;
static int32_t t18 = -1015332904;
int16_t x78 = 102;
uint16_t x87 = UINT16_MAX;
volatile int32_t t21 = -1520;
int8_t x91 = -44;
uint8_t x92 = UINT8_MAX;
int16_t x95 = -1;
int32_t x98 = -2;
int64_t x100 = INT64_MIN;
int8_t x104 = INT8_MIN;
int8_t x107 = INT8_MIN;
uint64_t x111 = UINT64_MAX;
int32_t t28 = -826373;
volatile int8_t x118 = INT8_MIN;
static int32_t t29 = -27880553;
volatile int32_t t30 = 123;
static int32_t x128 = -1;
uint32_t x133 = 5U;
int64_t x135 = INT64_MIN;
uint8_t x150 = 2U;
int8_t x156 = INT8_MIN;
static volatile int32_t t40 = 5;
int32_t t41 = -34451;
int8_t x171 = -1;
int16_t x172 = INT16_MIN;
int32_t t42 = -85734953;
volatile int32_t t43 = -11820014;
int16_t x177 = 1;
static int8_t x179 = -1;
volatile uint16_t x180 = UINT16_MAX;
volatile int32_t t44 = 14143;
int32_t t45 = -133855554;
int32_t t47 = 7874;
int8_t x193 = 23;
int64_t x194 = INT64_MIN;
volatile int32_t t48 = 849646155;
volatile int32_t x200 = 51;
volatile int64_t x202 = INT64_MIN;
uint64_t x215 = UINT64_MAX;
int16_t x219 = INT16_MAX;
volatile uint8_t x226 = 11U;
int32_t t56 = -44;
uint32_t x231 = 215U;
int32_t t57 = -1;
int32_t x234 = -1;
uint64_t x235 = 2533682142719577192LLU;
volatile int64_t x236 = INT64_MIN;
int8_t x238 = INT8_MIN;
volatile int32_t x243 = -652865241;
uint64_t x244 = 38945LLU;
volatile int32_t t60 = 1;
int16_t x247 = INT16_MIN;
int8_t x248 = -1;
volatile int16_t x249 = 47;
int8_t x251 = INT8_MIN;
int8_t x252 = 2;
static volatile int32_t x253 = -1;
uint16_t x254 = 6U;
uint16_t x258 = 3043U;
static volatile int16_t x264 = 34;
int32_t t66 = -448867129;
uint16_t x270 = UINT16_MAX;
static int64_t x274 = -1447141942162680LL;
static volatile int32_t t69 = 377563408;
static int8_t x281 = -1;
int64_t x287 = INT64_MIN;
int32_t t71 = 14652;
volatile int64_t x290 = INT64_MAX;
static int32_t x291 = INT32_MIN;
uint8_t x296 = 24U;
volatile int32_t t73 = 156;
volatile int32_t t74 = 7811;
volatile uint8_t x304 = 13U;
static uint32_t x310 = 26U;
volatile int32_t t77 = 32;
static int64_t x322 = INT64_MIN;
int64_t x342 = INT64_MIN;
volatile int32_t t85 = -749;
static int32_t x345 = -1571;
volatile int64_t x347 = 9634151485LL;
int32_t t87 = 3629;
static int32_t x363 = 138423352;
uint16_t x373 = UINT16_MAX;
uint8_t x374 = 2U;
uint32_t x376 = UINT32_MAX;
int32_t t94 = 1454;
static int16_t x388 = 20;
int64_t x392 = 4372LL;
static int64_t x393 = INT64_MAX;
static int16_t x394 = 207;
int32_t t99 = 13186;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int32_t t0 = -201;

	t0 = (((x1^x2)==x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -649731076;

	t1 = (((x5^x6)==x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 65175877390562024LLU;
	uint16_t x12 = 0U;
	volatile int32_t t2 = -19;

	t2 = (((x9^x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	uint16_t x14 = 3635U;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 16LLU;
	static volatile int32_t t3 = 756489;

	t3 = (((x13^x14)==x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static uint16_t x19 = UINT16_MAX;
	uint16_t x20 = 3562U;
	volatile int32_t t4 = 22783028;

	t4 = (((x17^x18)==x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 28U;
	static uint64_t x22 = 28715LLU;
	int64_t x23 = 9608929854LL;
	int32_t x24 = 3609;
	volatile int32_t t5 = -507;

	t5 = (((x21^x22)==x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static uint8_t x26 = 58U;
	static int8_t x27 = -12;
	int32_t t6 = -25;

	t6 = (((x25^x26)==x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 64LL;
	volatile uint8_t x30 = 23U;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 11698036;

	t7 = (((x29^x30)==x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	static uint16_t x34 = 3103U;
	int8_t x35 = INT8_MIN;
	int32_t t8 = 806244013;

	t8 = (((x33^x34)==x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	static int8_t x40 = -1;
	volatile int32_t t9 = 14631;

	t9 = (((x37^x38)==x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 3U;
	static volatile int32_t x42 = -75611124;
	volatile int16_t x43 = -4192;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = 455;

	t10 = (((x41^x42)==x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 31532U;
	int32_t x46 = INT32_MAX;
	int64_t x47 = -2774337486049086LL;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -1;

	t11 = (((x45^x46)==x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 220370U;
	uint32_t x50 = 3472U;
	static int32_t x51 = INT32_MAX;
	static volatile uint32_t x52 = 395579U;
	int32_t t12 = -28;

	t12 = (((x49^x50)==x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	int32_t x56 = 354;

	t13 = (((x53^x54)==x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 950552822U;
	volatile uint8_t x58 = UINT8_MAX;
	int64_t x60 = INT64_MAX;

	t14 = (((x57^x58)==x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = 25;

	t15 = (((x61^x62)==x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = 40116459538LL;
	uint16_t x67 = 6025U;
	int64_t x68 = INT64_MAX;

	t16 = (((x65^x66)==x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MIN;
	int16_t x72 = -1;
	volatile int32_t t17 = -23457;

	t17 = (((x69^x70)==x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -5;
	int8_t x74 = 3;
	volatile int8_t x75 = 0;
	static int64_t x76 = 5553646LL;

	t18 = (((x73^x74)==x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	int8_t x79 = 2;
	uint32_t x80 = 2728U;
	int32_t t19 = 152;

	t19 = (((x77^x78)==x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = -1;
	int8_t x84 = INT8_MAX;
	int32_t t20 = -1;

	t20 = (((x81^x82)==x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int8_t x86 = -1;
	volatile int32_t x88 = INT32_MIN;

	t21 = (((x85^x86)==x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	static int16_t x90 = -55;
	volatile int32_t t22 = -58;

	t22 = (((x89^x90)==x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	volatile int64_t x94 = INT64_MIN;
	int64_t x96 = -245274954535995LL;
	static int32_t t23 = -47312;

	t23 = (((x93^x94)==x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = 0U;
	uint32_t x99 = 1180554U;
	int32_t t24 = 79430;

	t24 = (((x97^x98)==x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -4;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int32_t t25 = 82;

	t25 = (((x101^x102)==x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = INT16_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -1;

	t26 = (((x105^x106)==x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 97U;
	int8_t x110 = INT8_MIN;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = 2715;

	t27 = (((x109^x110)==x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 574;
	int32_t x114 = -1;
	int8_t x115 = 2;
	int8_t x116 = -1;

	t28 = (((x113^x114)==x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile int64_t x119 = -1LL;
	static int16_t x120 = 1;

	t29 = (((x117^x118)==x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 837U;
	volatile uint16_t x122 = 141U;
	static volatile int8_t x123 = -2;
	uint8_t x124 = 59U;

	t30 = (((x121^x122)==x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	static int64_t x126 = 10848LL;
	static int64_t x127 = INT64_MIN;
	volatile int32_t t31 = -203;

	t31 = (((x125^x126)==x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 30821;
	static int8_t x130 = 22;
	int8_t x131 = 0;
	int16_t x132 = 13;
	int32_t t32 = -413;

	t32 = (((x129^x130)==x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x134 = 18U;
	static uint16_t x136 = UINT16_MAX;
	int32_t t33 = 3222;

	t33 = (((x133^x134)==x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 41325735LLU;
	int16_t x138 = INT16_MIN;
	int8_t x139 = 0;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -1181652;

	t34 = (((x137^x138)==x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MAX;
	volatile uint16_t x142 = 1086U;
	int32_t x143 = -658151;
	static int16_t x144 = -9116;
	volatile int32_t t35 = -27;

	t35 = (((x141^x142)==x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 3U;
	uint64_t x146 = UINT64_MAX;
	volatile uint32_t x147 = 1088418416U;
	int32_t x148 = -692702653;
	static volatile int32_t t36 = -28542;

	t36 = (((x145^x146)==x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -14;
	uint64_t x151 = UINT64_MAX;
	volatile int8_t x152 = 3;
	volatile int32_t t37 = -986405;

	t37 = (((x149^x150)==x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	volatile int32_t t38 = -261812;

	t38 = (((x153^x154)==x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int64_t x158 = -7151LL;
	uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = INT32_MAX;
	static int32_t t39 = -3776;

	t39 = (((x157^x158)==x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 69926509616LLU;
	static int8_t x162 = 2;
	uint32_t x163 = UINT32_MAX;
	uint64_t x164 = UINT64_MAX;

	t40 = (((x161^x162)==x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 4U;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = 822785U;
	static int8_t x168 = -14;

	t41 = (((x165^x166)==x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = -8828;

	t42 = (((x169^x170)==x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static int32_t x174 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	int64_t x176 = -6765LL;

	t43 = (((x173^x174)==x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x178 = 1U;

	t44 = (((x177^x178)==x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = 374;
	static uint8_t x182 = UINT8_MAX;
	static int32_t x183 = INT32_MIN;
	uint8_t x184 = 0U;

	t45 = (((x181^x182)==x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x185 = -1LL;
	static volatile uint64_t x186 = UINT64_MAX;
	static int8_t x187 = INT8_MAX;
	volatile uint64_t x188 = 55605001696540626LLU;
	int32_t t46 = -68551539;

	t46 = (((x185^x186)==x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint16_t x190 = 1U;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 83U;

	t47 = (((x189^x190)==x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x195 = INT16_MIN;
	uint64_t x196 = 33878780265054245LLU;

	t48 = (((x193^x194)==x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	volatile int8_t x199 = INT8_MAX;
	static volatile int32_t t49 = -1;

	t49 = (((x197^x198)==x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int8_t x203 = 42;
	int16_t x204 = -1;
	volatile int32_t t50 = -1050660645;

	t50 = (((x201^x202)==x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	static uint8_t x206 = 0U;
	int32_t x207 = -1;
	static uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = 9;

	t51 = (((x205^x206)==x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MAX;
	uint16_t x212 = UINT16_MAX;
	int32_t t52 = -4359;

	t52 = (((x209^x210)==x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	volatile int32_t x216 = INT32_MAX;
	int32_t t53 = -29487775;

	t53 = (((x213^x214)==x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 5U;
	volatile uint8_t x218 = 8U;
	int8_t x220 = -1;
	volatile int32_t t54 = 58;

	t54 = (((x217^x218)==x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int32_t x222 = -444;
	int32_t x223 = 333843702;
	uint64_t x224 = 3918451417400262701LLU;
	int32_t t55 = 384;

	t55 = (((x221^x222)==x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 2U;
	int64_t x227 = INT64_MIN;
	static uint8_t x228 = 21U;

	t56 = (((x225^x226)==x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MIN;
	static int8_t x230 = -1;
	uint8_t x232 = 2U;

	t57 = (((x229^x230)==x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	int32_t t58 = 5087607;

	t58 = (((x233^x234)==x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -13;
	uint8_t x239 = 3U;
	int32_t x240 = -1;
	int32_t t59 = 11377723;

	t59 = (((x237^x238)==x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = INT32_MIN;

	t60 = (((x241^x242)==x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MAX;
	int64_t x246 = -4538109746LL;
	static int32_t t61 = 2469950;

	t61 = (((x245^x246)==x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x250 = -1;
	volatile int32_t t62 = -100276859;

	t62 = (((x249^x250)==x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x255 = INT16_MAX;
	volatile int8_t x256 = INT8_MIN;
	int32_t t63 = -958443369;

	t63 = (((x253^x254)==x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 11LLU;
	uint16_t x259 = 58U;
	static int64_t x260 = -1LL;
	static int32_t t64 = 4532;

	t64 = (((x257^x258)==x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 346863U;
	uint16_t x262 = 32U;
	static int64_t x263 = INT64_MIN;
	static int32_t t65 = 0;

	t65 = (((x261^x262)==x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -222LL;
	uint32_t x266 = 886421698U;
	int8_t x267 = INT8_MIN;
	static int64_t x268 = -1LL;

	t66 = (((x265^x266)==x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;
	volatile int32_t t67 = 684128789;

	t67 = (((x269^x270)==x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 47U;
	static int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 118607;

	t68 = (((x273^x274)==x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MAX;
	volatile int32_t x279 = INT32_MAX;
	volatile uint64_t x280 = UINT64_MAX;

	t69 = (((x277^x278)==x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	int8_t x284 = -1;
	int32_t t70 = 43;

	t70 = (((x281^x282)==x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static int64_t x286 = -14636915453058LL;
	uint16_t x288 = UINT16_MAX;

	t71 = (((x285^x286)==x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	static uint8_t x292 = 1U;
	volatile int32_t t72 = -269002;

	t72 = (((x289^x290)==x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = 3962983;
	uint8_t x295 = UINT8_MAX;

	t73 = (((x293^x294)==x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 43LLU;
	uint8_t x298 = UINT8_MAX;
	uint32_t x299 = UINT32_MAX;
	volatile uint8_t x300 = UINT8_MAX;

	t74 = (((x297^x298)==x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 21982U;
	volatile int16_t x302 = INT16_MAX;
	volatile int16_t x303 = INT16_MIN;
	volatile int32_t t75 = 683;

	t75 = (((x301^x302)==x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = 2602U;
	uint64_t x306 = 401685LLU;
	static volatile uint32_t x307 = 10U;
	uint16_t x308 = 1240U;
	int32_t t76 = -35;

	t76 = (((x305^x306)==x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 300970676500173818LLU;
	int8_t x311 = -1;
	int16_t x312 = -13;

	t77 = (((x309^x310)==x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = 6251;
	static uint64_t x315 = 3018871133917LLU;
	int16_t x316 = -1;
	volatile int32_t t78 = 1;

	t78 = (((x313^x314)==x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	int8_t x318 = -1;
	static uint8_t x319 = UINT8_MAX;
	volatile int32_t x320 = 49752;
	volatile int32_t t79 = 0;

	t79 = (((x317^x318)==x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 10;
	volatile int64_t x323 = 10095LL;
	uint64_t x324 = 3930338377719341607LLU;
	int32_t t80 = 2893155;

	t80 = (((x321^x322)==x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -223865348;
	uint16_t x326 = UINT16_MAX;
	volatile int16_t x327 = INT16_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = 72468;

	t81 = (((x325^x326)==x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -5169;
	volatile int8_t x330 = 2;
	uint8_t x331 = 21U;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -1;

	t82 = (((x329^x330)==x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1047182416161048LL;
	volatile int64_t x334 = INT64_MIN;
	static uint64_t x335 = UINT64_MAX;
	volatile uint64_t x336 = UINT64_MAX;
	int32_t t83 = -1;

	t83 = (((x333^x334)==x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 824U;
	static int64_t x338 = INT64_MIN;
	volatile uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 62979;

	t84 = (((x337^x338)==x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x341 = -11678106LL;
	volatile int32_t x343 = 66748;
	uint8_t x344 = 22U;

	t85 = (((x341^x342)==x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = -16207;

	t86 = (((x345^x346)==x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -3;
	int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	static volatile int64_t x352 = INT64_MIN;

	t87 = (((x349^x350)==x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 515173192U;
	volatile uint64_t x354 = 1481796026708745869LLU;
	volatile int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 0;

	t88 = (((x353^x354)==x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 6290U;
	static uint16_t x358 = 15888U;
	uint64_t x359 = 3274506234493326LLU;
	static uint32_t x360 = 1063930462U;
	static int32_t t89 = 8976082;

	t89 = (((x357^x358)==x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int64_t x362 = 79808151LL;
	int16_t x364 = 4;
	volatile int32_t t90 = 9160;

	t90 = (((x361^x362)==x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MAX;
	int16_t x367 = -1;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 706575137;

	t91 = (((x365^x366)==x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = -1;
	uint64_t x371 = UINT64_MAX;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = -306;

	t92 = (((x369^x370)==x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x375 = -6438330869305LL;
	static volatile int32_t t93 = -2323;

	t93 = (((x373^x374)==x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = 2620;
	int8_t x378 = INT8_MIN;
	int64_t x379 = 4207LL;
	uint32_t x380 = UINT32_MAX;

	t94 = (((x377^x378)==x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int8_t x382 = -1;
	int16_t x383 = -189;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 412436372;

	t95 = (((x381^x382)==x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int64_t x386 = -68LL;
	volatile int16_t x387 = INT16_MAX;
	volatile int32_t t96 = 2688639;

	t96 = (((x385^x386)==x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 0U;
	int8_t x390 = 0;
	int16_t x391 = INT16_MIN;
	int32_t t97 = 105391;

	t97 = (((x389^x390)==x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x395 = 7151523LLU;
	static volatile uint64_t x396 = UINT64_MAX;
	static int32_t t98 = 1;

	t98 = (((x393^x394)==x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -10;
	int32_t x398 = -36688;
	volatile uint32_t x399 = UINT32_MAX;
	int16_t x400 = -1;

	t99 = (((x397^x398)==x399)<=x400);

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

