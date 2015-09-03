#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
uint8_t x12 = 116U;
volatile int16_t x26 = INT16_MAX;
static volatile uint16_t x30 = UINT16_MAX;
int32_t x34 = INT32_MAX;
volatile uint64_t t8 = 333119LLU;
uint32_t x47 = 106U;
volatile int8_t x48 = -1;
volatile int32_t x49 = 987323589;
int32_t x56 = -1;
int64_t x76 = -966754877388120281LL;
static int32_t x77 = INT32_MIN;
volatile uint32_t x80 = 153U;
volatile int32_t t19 = 569282;
int64_t t20 = 2931968003830273LL;
static int16_t x93 = INT16_MIN;
volatile uint16_t x95 = 675U;
volatile int16_t x97 = -7882;
uint16_t x100 = 32002U;
static uint16_t x102 = 1494U;
int64_t x105 = INT64_MIN;
static volatile int64_t t24 = 256709439LL;
static int32_t x110 = INT32_MIN;
volatile int32_t x111 = -1;
int16_t x114 = -5;
int32_t x117 = 64;
int64_t x119 = -19435LL;
int64_t t27 = 1LL;
static volatile int32_t x121 = INT32_MIN;
static uint16_t x124 = 0U;
volatile int64_t x132 = 23281350285LL;
int32_t x134 = -355;
volatile int32_t x136 = INT32_MIN;
int64_t t31 = -229155741041900LL;
uint32_t x137 = UINT32_MAX;
int16_t x138 = INT16_MIN;
int16_t x140 = -1;
uint16_t x141 = UINT16_MAX;
volatile int32_t t33 = -36;
volatile int64_t x145 = INT64_MIN;
volatile int64_t x148 = INT64_MAX;
int16_t x154 = -1;
uint64_t x155 = UINT64_MAX;
int32_t x156 = INT32_MIN;
volatile uint64_t t36 = 2273152982286LLU;
volatile uint16_t x159 = UINT16_MAX;
int32_t x162 = -1;
volatile int32_t x163 = INT32_MIN;
volatile uint64_t x167 = 1925501376LLU;
static int32_t x171 = 27;
int32_t x172 = 11392177;
volatile uint64_t x176 = 1347182810LLU;
uint64_t t41 = 2LLU;
int32_t x177 = 422553;
static uint64_t x179 = 156142919918LLU;
int64_t x180 = -1LL;
uint64_t x190 = 9850404653908LLU;
int32_t t45 = -525597905;
int64_t x199 = INT64_MIN;
static volatile int32_t x207 = INT32_MAX;
uint8_t x212 = 1U;
int16_t x213 = 16;
volatile int64_t t50 = 473540933LL;
uint32_t x221 = 242295531U;
volatile int8_t x224 = 1;
uint32_t t52 = 108U;
static int64_t x236 = INT64_MAX;
int8_t x238 = INT8_MAX;
int16_t x244 = -1;
uint32_t t57 = 6215276U;
static int8_t x255 = INT8_MIN;
static volatile uint32_t x261 = UINT32_MAX;
int8_t x267 = INT8_MIN;
static int32_t x268 = INT32_MIN;
volatile int32_t x269 = INT32_MIN;
static volatile uint8_t x271 = UINT8_MAX;
volatile uint64_t t64 = 209455500613315915LLU;
int16_t x293 = INT16_MIN;
int64_t t68 = 27623883249790LL;
static uint32_t x309 = 2028585U;
uint64_t t70 = 210929LLU;
uint32_t x322 = UINT32_MAX;
volatile int8_t x328 = INT8_MIN;
volatile uint32_t x333 = 25U;
int64_t x341 = 360127LL;
volatile int64_t t77 = -188LL;
int8_t x347 = INT8_MAX;
volatile int64_t t78 = -1051631456LL;
int8_t x352 = -16;
int64_t x355 = -1LL;
int64_t x357 = -1LL;
int32_t x368 = INT32_MIN;
static volatile int16_t x372 = INT16_MIN;
uint64_t x375 = 26299984LLU;
volatile int8_t x380 = INT8_MAX;
int64_t x381 = 2882LL;
static volatile int64_t x382 = 5497LL;
volatile int64_t t86 = 2LL;
int8_t x385 = INT8_MIN;
int16_t x392 = INT16_MAX;
uint8_t x395 = 6U;
int16_t x396 = -1;
int64_t t89 = -18402688LL;
uint32_t x399 = UINT32_MAX;
int32_t x404 = INT32_MIN;
int32_t x407 = 19;
int32_t x408 = INT32_MIN;
volatile int32_t t92 = 7971;
static volatile int8_t x426 = INT8_MAX;
uint32_t x427 = 31385U;
uint16_t x441 = 7U;
uint64_t x444 = 3926424036LLU;


void f0(void) {
	volatile int64_t x2 = -1LL;
	int8_t x3 = INT8_MAX;
	int16_t x4 = -1;
	static volatile int64_t t0 = 44059874LL;

	t0 = (((x1+x2)%x3)^x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 17658266160LL;
	int16_t x6 = -1;
	int8_t x7 = -1;
	int32_t x8 = -1;
	static int64_t t1 = -40569689046570524LL;

	t1 = (((x5+x6)%x7)^x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x10 = 1734653LL;
	int16_t x11 = -1;
	int64_t t2 = 1260692535LL;

	t2 = (((x9+x10)%x11)^x12);

	if (t2 != 116LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 1;
	uint64_t x14 = 96467106380LLU;
	volatile uint64_t x15 = 37117LLU;
	int16_t x16 = INT16_MIN;
	uint64_t t3 = 733422945209314LLU;

	t3 = (((x13+x14)%x15)^x16);

	if (t3 != 18446744073709542229LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 12U;
	int16_t x18 = INT16_MIN;
	int8_t x19 = -1;
	int32_t x20 = -686;
	volatile uint32_t t4 = 1243570689U;

	t4 = (((x17+x18)%x19)^x20);

	if (t4 != 32094U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile int8_t x22 = 0;
	volatile int8_t x23 = -10;
	static uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 9057822122LLU;

	t5 = (((x21+x22)%x23)^x24);

	if (t5 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	uint8_t x28 = UINT8_MAX;
	int64_t t6 = -985404626681747175LL;

	t6 = (((x25+x26)%x27)^x28);

	if (t6 != -256LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -12365700LL;
	uint8_t x31 = 6U;
	uint32_t x32 = 3671998U;
	volatile int64_t t7 = -156760019LL;

	t7 = (((x29+x30)%x31)^x32);

	if (t7 != -3671997LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint64_t x35 = 7342LLU;
	static int64_t x36 = -3757210915749150186LL;

	t8 = (((x33+x34)%x35)^x36);

	if (t8 != 14689533157960401470LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 7;
	int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	uint8_t x40 = UINT8_MAX;
	int64_t t9 = -1071043895286LL;

	t9 = (((x37+x38)%x39)^x40);

	if (t9 != -136LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -36936279;
	volatile int16_t x46 = -161;
	uint32_t t10 = 7U;

	t10 = (((x45+x46)%x47)^x48);

	if (t10 != 4294967251U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x50 = INT8_MAX;
	static int8_t x51 = -18;
	uint16_t x52 = 1U;
	static volatile int32_t t11 = -12;

	t11 = (((x49+x50)%x51)^x52);

	if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	volatile int32_t t12 = 8230;

	t12 = (((x53+x54)%x55)^x56);

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x57 = UINT16_MAX;
	int32_t x58 = 30;
	uint16_t x59 = 157U;
	int64_t x60 = INT64_MIN;
	int64_t t13 = -1998LL;

	t13 = (((x57+x58)%x59)^x60);

	if (t13 != -9223372036854775712LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = 977296;
	int32_t x66 = INT32_MIN;
	volatile uint32_t x67 = 1187U;
	uint32_t x68 = 565479317U;
	volatile uint32_t t14 = 22U;

	t14 = (((x65+x66)%x67)^x68);

	if (t14 != 565478957U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MIN;
	static int16_t x71 = -1;
	int16_t x72 = INT16_MAX;
	int32_t t15 = -11506;

	t15 = (((x69+x70)%x71)^x72);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	int64_t x74 = -1LL;
	static int16_t x75 = INT16_MIN;
	int64_t t16 = 153745120727944LL;

	t16 = (((x73+x74)%x75)^x76);

	if (t16 != -966754877388103463LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x78 = 1;
	uint8_t x79 = UINT8_MAX;
	uint32_t t17 = 157010U;

	t17 = (((x77+x78)%x79)^x80);

	if (t17 != 4294967064U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	static volatile int32_t x83 = -1;
	int64_t x84 = -1LL;
	volatile int64_t t18 = 1182172095195021LL;

	t18 = (((x81+x82)%x83)^x84);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	uint16_t x86 = 8404U;
	static volatile int16_t x87 = 225;
	int32_t x88 = INT32_MAX;

	t19 = (((x85+x86)%x87)^x88);

	if (t19 != 2147483569) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = -149585408548097386LL;
	static int32_t x90 = -1;
	uint8_t x91 = 5U;
	int8_t x92 = INT8_MIN;

	t20 = (((x89+x90)%x91)^x92);

	if (t20 != 126LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x94 = INT16_MIN;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 2930;

	t21 = (((x93+x94)%x95)^x96);

	if (t21 != 67) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = -474;
	int16_t x99 = -1;
	int32_t t22 = -5;

	t22 = (((x97+x98)%x99)^x100);

	if (t22 != 32002) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 6394;
	int64_t x103 = INT64_MIN;
	int8_t x104 = -1;
	volatile int64_t t23 = -123877418419LL;

	t23 = (((x101+x102)%x103)^x104);

	if (t23 != -7889LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x106 = 0U;
	static int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;

	t24 = (((x105+x106)%x107)^x108);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 0;
	int8_t x112 = -1;
	int32_t t25 = 144594857;

	t25 = (((x109+x110)%x111)^x112);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 249;
	static uint64_t x115 = 759689LLU;
	static int64_t x116 = INT64_MIN;
	static volatile uint64_t t26 = 5175661LLU;

	t26 = (((x113+x114)%x115)^x116);

	if (t26 != 9223372036854776052LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = INT8_MIN;
	int16_t x120 = INT16_MAX;

	t27 = (((x117+x118)%x119)^x120);

	if (t27 != -32705LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = 70361LL;
	int16_t x123 = INT16_MIN;
	volatile int64_t t28 = 1LL;

	t28 = (((x121+x122)%x123)^x124);

	if (t28 != -27943LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 1174;
	static uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 310U;
	int8_t x128 = INT8_MIN;
	static volatile uint32_t t29 = 0U;

	t29 = (((x125+x126)%x127)^x128);

	if (t29 != 4294967155U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = 8217989;
	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = UINT32_MAX;
	int64_t t30 = 4102040377060090LL;

	t30 = (((x129+x130)%x131)^x132);

	if (t30 != 23283650569LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = -1LL;
	int8_t x135 = INT8_MIN;

	t31 = (((x133+x134)%x135)^x136);

	if (t31 != 2147483548LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x139 = INT32_MAX;
	uint32_t t32 = 1U;

	t32 = (((x137+x138)%x139)^x140);

	if (t32 != 2147516415U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = 84;
	int8_t x144 = -13;

	t33 = (((x141+x142)%x143)^x144);

	if (t33 != -31) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 9U;
	int64_t t34 = -638930128LL;

	t34 = (((x145+x146)%x147)^x148);

	if (t34 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 13;
	int64_t x150 = -1LL;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MAX;
	uint64_t t35 = 289142778818348LLU;

	t35 = (((x149+x150)%x151)^x152);

	if (t35 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = -2952411LL;

	t36 = (((x153+x154)%x155)^x156);

	if (t36 != 2144531236LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -3LL;
	static int16_t x160 = -1;
	int64_t t37 = -32677462LL;

	t37 = (((x157+x158)%x159)^x160);

	if (t37 != 32770LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 12LLU;
	static volatile uint16_t x164 = UINT16_MAX;
	uint64_t t38 = 106670134391825LLU;

	t38 = (((x161+x162)%x163)^x164);

	if (t38 != 65524LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x165 = 12046765LL;
	uint64_t x166 = 3985LLU;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t39 = 271599555461LLU;

	t39 = (((x165+x166)%x167)^x168);

	if (t39 != 18446744073697517886LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	volatile int32_t t40 = -9;

	t40 = (((x169+x170)%x171)^x172);

	if (t40 != -11392184) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	volatile int8_t x174 = INT8_MAX;
	uint64_t x175 = 452464166942133LLU;

	t41 = (((x173+x174)%x175)^x176);

	if (t41 != 1347182756LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x178 = UINT8_MAX;
	uint64_t t42 = 454662760046LLU;

	t42 = (((x177+x178)%x179)^x180);

	if (t42 != 18446744073709128807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = 5;
	int32_t x183 = -41988539;
	uint16_t x184 = UINT16_MAX;
	int32_t t43 = 365513;

	t43 = (((x181+x182)%x183)^x184);

	if (t43 != -32774) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MAX;
	int32_t x191 = -3172137;
	volatile uint32_t x192 = 641758U;
	static uint64_t t44 = 18775903429135LLU;

	t44 = (((x189+x190)%x191)^x192);

	if (t44 != 9223381887258919309LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = 216;
	volatile int16_t x194 = 8;
	static volatile int16_t x195 = INT16_MAX;
	int16_t x196 = -1;

	t45 = (((x193+x194)%x195)^x196);

	if (t45 != -225) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = INT16_MIN;
	uint16_t x198 = 145U;
	uint64_t x200 = 93760LLU;
	uint64_t t46 = 42093551740719LLU;

	t46 = (((x197+x198)%x199)^x200);

	if (t46 != 18446744073709481681LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = 157038721214269457LL;
	volatile int32_t x202 = INT32_MAX;
	static int8_t x203 = -1;
	static volatile int64_t x204 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = (((x201+x202)%x203)^x204);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int16_t x206 = -401;
	static int32_t x208 = INT32_MIN;
	int32_t t48 = 5;

	t48 = (((x205+x206)%x207)^x208);

	if (t48 != 2147483246) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -1LL;
	volatile int8_t x210 = 4;
	uint8_t x211 = 1U;
	volatile int64_t t49 = 0LL;

	t49 = (((x209+x210)%x211)^x212);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x214 = INT64_MIN;
	volatile int16_t x215 = 13244;
	static uint32_t x216 = 15961005U;

	t50 = (((x213+x214)%x215)^x216);

	if (t50 != -15959711LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x222 = INT16_MIN;
	uint8_t x223 = UINT8_MAX;
	uint32_t t51 = 13382521U;

	t51 = (((x221+x222)%x223)^x224);

	if (t51 != 12U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x229 = UINT32_MAX;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MAX;
	uint32_t x232 = 1632U;

	t52 = (((x229+x230)%x231)^x232);

	if (t52 != 1632U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	volatile uint32_t x234 = 381129U;
	uint64_t x235 = 3151299871898LLU;
	uint64_t t53 = 328258875160844LLU;

	t53 = (((x233+x234)%x235)^x236);

	if (t53 != 9223372036854394679LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x237 = -15666395;
	int64_t x239 = INT64_MAX;
	int8_t x240 = 1;
	int64_t t54 = 44540727678214LL;

	t54 = (((x237+x238)%x239)^x240);

	if (t54 != -15666267LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -1;
	static volatile uint16_t x242 = UINT16_MAX;
	volatile int16_t x243 = -1;
	static volatile int32_t t55 = -462;

	t55 = (((x241+x242)%x243)^x244);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x245 = 61U;
	uint64_t x246 = 171833041704827LLU;
	volatile int64_t x247 = INT64_MIN;
	static uint16_t x248 = UINT16_MAX;
	static volatile uint64_t t56 = 1144LLU;

	t56 = (((x245+x246)%x247)^x248);

	if (t56 != 171833041725511LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MAX;
	volatile int32_t x252 = -1785598;

	t57 = (((x249+x250)%x251)^x252);

	if (t57 != 4293181698U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	uint64_t x254 = 139016262LLU;
	int16_t x256 = INT16_MAX;
	uint64_t t58 = 7174125218644963LLU;

	t58 = (((x253+x254)%x255)^x256);

	if (t58 != 139020218LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = INT64_MIN;
	static uint16_t x258 = 23163U;
	uint32_t x259 = 11U;
	static uint16_t x260 = UINT16_MAX;
	volatile int64_t t59 = 1844994883618LL;

	t59 = (((x257+x258)%x259)^x260);

	if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x262 = 1U;
	volatile int16_t x263 = INT16_MIN;
	static volatile int16_t x264 = INT16_MAX;
	uint32_t t60 = 70U;

	t60 = (((x261+x262)%x263)^x264);

	if (t60 != 32767U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = UINT64_MAX;
	static int64_t x266 = INT64_MAX;
	volatile uint64_t t61 = 7043506784450191LLU;

	t61 = (((x265+x266)%x267)^x268);

	if (t61 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x270 = INT8_MAX;
	static uint64_t x272 = 2888891LLU;
	static volatile uint64_t t62 = 1452923LLU;

	t62 = (((x269+x270)%x271)^x272);

	if (t62 != 18446744073706662724LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x277 = 126382U;
	int8_t x278 = 3;
	volatile int8_t x279 = INT8_MIN;
	int64_t x280 = -125672519780LL;
	volatile int64_t t63 = 116LL;

	t63 = (((x277+x278)%x279)^x280);

	if (t63 != -125672592851LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 119856042178LLU;
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;

	t64 = (((x281+x282)%x283)^x284);

	if (t64 != 18446743949558517953LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x285 = INT8_MAX;
	static uint64_t x286 = 376LLU;
	int32_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t65 = 733460LLU;

	t65 = (((x285+x286)%x287)^x288);

	if (t65 != 18446744073709551112LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	int16_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (((x289+x290)%x291)^x292);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x294 = 1U;
	int64_t x295 = INT64_MIN;
	static uint8_t x296 = 68U;
	int64_t t67 = 350541669337274051LL;

	t67 = (((x293+x294)%x295)^x296);

	if (t67 != -32699LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x297 = -1;
	static int64_t x298 = -1LL;
	static int32_t x299 = -1;
	uint8_t x300 = 7U;

	t68 = (((x297+x298)%x299)^x300);

	if (t68 != 7LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = -1;
	int8_t x306 = 37;
	uint32_t x307 = 72494U;
	int8_t x308 = -1;
	volatile uint32_t t69 = 27622U;

	t69 = (((x305+x306)%x307)^x308);

	if (t69 != 4294967259U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x310 = 4U;
	static int16_t x311 = INT16_MIN;
	uint64_t x312 = 4018773791259547LLU;

	t70 = (((x309+x310)%x311)^x312);

	if (t70 != 4018773792935862LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 414U;
	static volatile int16_t x314 = 6523;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -1;
	int32_t t71 = -681603937;

	t71 = (((x313+x314)%x315)^x316);

	if (t71 != -6938) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = UINT64_MAX;
	uint32_t x323 = 687U;
	int32_t x324 = INT32_MAX;
	volatile uint64_t t72 = 1LLU;

	t72 = (((x321+x322)%x323)^x324);

	if (t72 != 2147483030LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int16_t x326 = -1;
	int16_t x327 = INT16_MAX;
	uint64_t t73 = 17144197878LLU;

	t73 = (((x325+x326)%x327)^x328);

	if (t73 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = 2U;
	static uint64_t x330 = 10873569936070LLU;
	uint64_t x331 = 31LLU;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t74 = 73LLU;

	t74 = (((x329+x330)%x331)^x332);

	if (t74 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = 964928458;
	int16_t x336 = INT16_MIN;
	volatile uint32_t t75 = 3641U;

	t75 = (((x333+x334)%x335)^x336);

	if (t75 != 4294869016U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	uint16_t x338 = 507U;
	static volatile int64_t x339 = -1LL;
	static volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x337+x338)%x339)^x340);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x342 = 34U;
	int64_t x343 = -264902419LL;
	static volatile int8_t x344 = INT8_MIN;

	t77 = (((x341+x342)%x343)^x344);

	if (t77 != -360095LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x346 = 2601LL;
	static int64_t x348 = -175171218006LL;

	t78 = (((x345+x346)%x347)^x348);

	if (t78 != -175171218028LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = 1920772352LLU;
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	volatile uint64_t t79 = 595862LLU;

	t79 = (((x349+x350)%x351)^x352);

	if (t79 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x353 = -1;
	volatile uint8_t x354 = 0U;
	uint32_t x356 = UINT32_MAX;
	static volatile int64_t t80 = 101598569245636526LL;

	t80 = (((x353+x354)%x355)^x356);

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	volatile uint16_t x360 = 0U;
	int64_t t81 = -13986173679726LL;

	t81 = (((x357+x358)%x359)^x360);

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = 619101638U;
	int8_t x367 = 41;
	volatile uint32_t t82 = 28469453U;

	t82 = (((x365+x366)%x367)^x368);

	if (t82 != 2147483684U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	volatile uint64_t t83 = 4317626LLU;

	t83 = (((x369+x370)%x371)^x372);

	if (t83 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	volatile int16_t x376 = INT16_MIN;
	uint64_t t84 = 3452LLU;

	t84 = (((x373+x374)%x375)^x376);

	if (t84 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = 1;
	int16_t x379 = 3768;
	int32_t t85 = 784648;

	t85 = (((x377+x378)%x379)^x380);

	if (t85 != -2626) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x383 = INT8_MAX;
	static int8_t x384 = 0;

	t86 = (((x381+x382)%x383)^x384);

	if (t86 != 124LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x386 = UINT8_MAX;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = -14908728387LL;
	int64_t t87 = 44671415275LL;

	t87 = (((x385+x386)%x387)^x388);

	if (t87 != -14908728382LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x389 = UINT32_MAX;
	volatile uint16_t x390 = UINT16_MAX;
	uint16_t x391 = 2U;
	static uint32_t t88 = 974456437U;

	t88 = (((x389+x390)%x391)^x392);

	if (t88 != 32767U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x393 = 1LL;
	int64_t x394 = INT64_MIN;

	t89 = (((x393+x394)%x395)^x396);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MAX;
	int32_t x400 = INT32_MAX;
	volatile uint32_t t90 = 727U;

	t90 = (((x397+x398)%x399)^x400);

	if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x401 = 1LLU;
	int32_t x402 = -1;
	volatile int8_t x403 = -1;
	static volatile uint64_t t91 = 1094264906798LLU;

	t91 = (((x401+x402)%x403)^x404);

	if (t91 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x405 = 37U;
	int16_t x406 = -1;

	t92 = (((x405+x406)%x407)^x408);

	if (t92 != -2147483631) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x409 = INT32_MAX;
	uint32_t x410 = 471563368U;
	uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = 1;
	volatile uint32_t t93 = 5100U;

	t93 = (((x409+x410)%x411)^x412);

	if (t93 != 6274U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = 1;
	uint64_t x414 = 62LLU;
	uint32_t x415 = 3490624U;
	static volatile int64_t x416 = -124871802LL;
	uint64_t t94 = 44172738343LLU;

	t94 = (((x413+x414)%x415)^x416);

	if (t94 != 18446744073584679865LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = INT8_MIN;
	uint8_t x418 = 0U;
	int8_t x419 = -1;
	int16_t x420 = -1;
	static volatile int32_t t95 = -4195;

	t95 = (((x417+x418)%x419)^x420);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	uint8_t x422 = 1U;
	volatile int64_t x423 = -52521693104982977LL;
	int32_t x424 = -1;
	int64_t t96 = 412671015200LL;

	t96 = (((x421+x422)%x423)^x424);

	if (t96 != 32766LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x425 = 0;
	static int32_t x428 = INT32_MIN;
	static volatile uint32_t t97 = 1U;

	t97 = (((x425+x426)%x427)^x428);

	if (t97 != 2147483775U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x437 = INT16_MAX;
	volatile int16_t x438 = -3;
	int64_t x439 = INT64_MIN;
	int32_t x440 = -1565346;
	volatile int64_t t98 = 609588LL;

	t98 = (((x437+x438)%x439)^x440);

	if (t98 != -1547614LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x442 = 14801071104831LLU;
	int32_t x443 = INT32_MAX;
	uint64_t t99 = 8810163442330LLU;

	t99 = (((x441+x442)%x443)^x444);

	if (t99 != 3466430422LLU) { NG(); } else { ; }
	
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

