#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -14;
uint64_t x11 = UINT64_MAX;
int64_t x15 = INT64_MAX;
volatile uint16_t x19 = 14U;
int64_t x21 = INT64_MIN;
int64_t x23 = INT64_MAX;
static int32_t x27 = -1;
int64_t x33 = INT64_MIN;
static int16_t x41 = -1;
uint16_t x46 = UINT16_MAX;
int32_t x51 = -1;
uint8_t x52 = 32U;
static volatile uint32_t t12 = 7U;
int16_t x54 = 15039;
static int64_t t13 = 886764675411579504LL;
uint16_t x60 = UINT16_MAX;
int64_t x64 = INT64_MIN;
static int64_t t15 = -847664LL;
volatile int32_t t16 = 13496;
static uint64_t x71 = 3120096LLU;
int64_t x86 = INT64_MAX;
uint64_t x90 = 21325325LLU;
int16_t x92 = 14;
int32_t t23 = 7;
int8_t x98 = INT8_MIN;
int64_t t24 = 231707091098307LL;
volatile int8_t x104 = INT8_MAX;
volatile uint32_t t25 = 4U;
uint32_t x106 = 45861U;
volatile uint32_t x109 = UINT32_MAX;
int32_t x110 = INT32_MIN;
static int64_t x118 = INT64_MIN;
static int16_t x124 = -1;
volatile int32_t t30 = -241;
static volatile int16_t x126 = INT16_MIN;
static uint16_t x128 = 369U;
static volatile int32_t x129 = INT32_MIN;
static int8_t x131 = INT8_MAX;
uint64_t t34 = 1LLU;
uint8_t x154 = UINT8_MAX;
uint32_t t40 = 3758U;
volatile int8_t x167 = INT8_MIN;
volatile int64_t t41 = 390LL;
volatile int64_t x171 = 3LL;
uint32_t x178 = 60U;
int32_t x185 = INT32_MIN;
volatile int64_t t46 = -48313840209510451LL;
static uint32_t x189 = 1U;
static int8_t x190 = -1;
volatile uint64_t x198 = UINT64_MAX;
volatile uint8_t x200 = 3U;
int32_t x202 = INT32_MIN;
int16_t x214 = INT16_MIN;
int32_t x219 = 34;
static volatile int64_t t54 = -46608759528LL;
uint16_t x242 = UINT16_MAX;
int32_t x247 = -903337301;
int8_t x249 = 0;
int8_t x250 = INT8_MAX;
uint16_t x253 = UINT16_MAX;
int32_t x262 = INT32_MAX;
int16_t x268 = INT16_MIN;
int64_t t67 = 15850LL;
uint8_t x274 = UINT8_MAX;
static int64_t x277 = INT64_MIN;
uint16_t x280 = 1U;
uint16_t x296 = UINT16_MAX;
volatile int32_t t73 = 10;
int8_t x302 = INT8_MIN;
int8_t x305 = INT8_MAX;
int8_t x307 = INT8_MIN;
int8_t x310 = 0;
static int64_t x313 = INT64_MIN;
volatile uint32_t t79 = 259222U;
uint8_t x328 = 29U;
static int8_t x330 = INT8_MAX;
volatile int32_t x336 = INT32_MIN;
int16_t x339 = -1;
uint16_t x341 = UINT16_MAX;
int64_t x350 = -1LL;
int16_t x353 = INT16_MAX;
volatile int64_t x359 = INT64_MAX;
volatile uint32_t x360 = 275U;
int64_t x364 = 22689843LL;
uint64_t t91 = 5136LLU;
uint64_t x375 = 8058LLU;
int64_t t94 = 304062275LL;
volatile int64_t t95 = -185069558217856LL;
int32_t x390 = INT32_MAX;
uint32_t t98 = 447819U;
static uint8_t x400 = UINT8_MAX;


void f0(void) {
	volatile int64_t x1 = 1LL;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	int64_t t0 = -134359LL;

	t0 = (((x1^x2)&x3)^x4);

	if (t0 != 129LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -8;
	int32_t x6 = INT32_MAX;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = 379500669;

	t1 = (((x5^x6)&x7)^x8);

	if (t1 != 2147450882) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	static uint32_t x10 = 44U;
	uint64_t x12 = 6670034458445811463LLU;
	volatile uint64_t t2 = 664044675025LLU;

	t2 = (((x9^x10)&x11)^x12);

	if (t2 != 11776709615263740116LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 3840U;
	uint8_t x14 = 4U;
	int32_t x16 = -1;
	int64_t t3 = -369439700762LL;

	t3 = (((x13^x14)&x15)^x16);

	if (t3 != -3845LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	int16_t x18 = -702;
	int32_t x20 = 52717318;
	int32_t t4 = 5;

	t4 = (((x17^x18)&x19)^x20);

	if (t4 != 52717318) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = 419;
	int16_t x24 = INT16_MIN;
	int64_t t5 = 26834967607LL;

	t5 = (((x21^x22)&x23)^x24);

	if (t5 != -32349LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	static volatile int8_t x28 = INT8_MIN;
	int32_t t6 = INT32_MIN;

	t6 = (((x25^x26)&x27)^x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 44U;
	int32_t x30 = -32826;
	volatile int16_t x31 = 2;
	int16_t x32 = 3992;
	volatile int32_t t7 = -1;

	t7 = (((x29^x30)&x31)^x32);

	if (t7 != 3994) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	int64_t x35 = -1LL;
	int16_t x36 = INT16_MIN;
	volatile int64_t t8 = 3236214408454492LL;

	t8 = (((x33^x34)&x35)^x36);

	if (t8 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -115513279020LL;
	uint16_t x38 = 2U;
	int8_t x39 = 0;
	int16_t x40 = INT16_MAX;
	volatile int64_t t9 = -1051735433775742LL;

	t9 = (((x37^x38)&x39)^x40);

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 105444571LLU;
	static int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MIN;
	uint64_t t10 = 8236777957003702LLU;

	t10 = (((x41^x42)&x43)^x44);

	if (t10 != 2147483520LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int16_t x47 = 7;
	int32_t x48 = INT32_MIN;
	static int32_t t11 = INT32_MIN;

	t11 = (((x45^x46)&x47)^x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 4U;

	t12 = (((x49^x50)&x51)^x52);

	if (t12 != 4294967204U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int64_t x55 = INT64_MAX;
	int16_t x56 = -8;

	t13 = (((x53^x54)&x55)^x56);

	if (t13 != -9223372036854758073LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile uint8_t x58 = 5U;
	int16_t x59 = INT16_MAX;
	int32_t t14 = -34370922;

	t14 = (((x57^x58)&x59)^x60);

	if (t14 != 65413) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	int16_t x62 = -1;
	uint32_t x63 = 13453462U;

	t15 = (((x61^x62)&x63)^x64);

	if (t15 != -9223372036841322346LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 2U;
	int32_t x66 = -517038787;
	int8_t x67 = -7;
	uint8_t x68 = 0U;

	t16 = (((x65^x66)&x67)^x68);

	if (t16 != -517038791) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = -1;
	volatile int64_t x72 = -1LL;
	uint64_t t17 = 2124114810673LLU;

	t17 = (((x69^x70)&x71)^x72);

	if (t17 != 18446744073709544479LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 5LLU;
	int16_t x74 = 6;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = -1LL;
	uint64_t t18 = 429918597769630546LLU;

	t18 = (((x73^x74)&x75)^x76);

	if (t18 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	volatile uint32_t x78 = 380700683U;
	int16_t x79 = INT16_MIN;
	volatile int8_t x80 = -35;
	uint32_t t19 = 803549966U;

	t19 = (((x77^x78)&x79)^x80);

	if (t19 != 380731357U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = INT64_MIN;
	volatile int16_t x83 = INT16_MIN;
	static int64_t x84 = 102367666LL;
	int64_t t20 = 8597057600982LL;

	t20 = (((x81^x82)&x83)^x84);

	if (t20 != 9223372036752376242LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 110702009793LLU;
	int8_t x87 = 1;
	uint32_t x88 = 5U;
	static uint64_t t21 = 2910776142480202LLU;

	t21 = (((x85^x86)&x87)^x88);

	if (t21 != 5LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 58035531208767LLU;
	int64_t x91 = INT64_MIN;
	uint64_t t22 = 3845840501927LLU;

	t22 = (((x89^x90)&x91)^x92);

	if (t22 != 14LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	int8_t x96 = 7;

	t23 = (((x93^x94)&x95)^x96);

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	volatile int16_t x99 = INT16_MAX;
	int32_t x100 = -154830;

	t24 = (((x97^x98)&x99)^x100);

	if (t24 != -154803LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MIN;
	static int32_t x103 = -109;

	t25 = (((x101^x102)&x103)^x104);

	if (t25 != 2147483628U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int16_t x107 = INT16_MAX;
	static uint16_t x108 = UINT16_MAX;
	int64_t t26 = -456459420816458267LL;

	t26 = (((x105^x106)&x107)^x108);

	if (t26 != 52442LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x111 = -1;
	static uint8_t x112 = UINT8_MAX;
	uint32_t t27 = 755565456U;

	t27 = (((x109^x110)&x111)^x112);

	if (t27 != 2147483392U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = -1LL;
	int64_t t28 = -213181414507LL;

	t28 = (((x113^x114)&x115)^x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	volatile int32_t x119 = 957;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

	t29 = (((x117^x118)&x119)^x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	static int16_t x122 = 6931;
	uint8_t x123 = 60U;

	t30 = (((x121^x122)&x123)^x124);

	if (t30 != -45) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 2U;
	volatile uint32_t x127 = 103862U;
	volatile uint32_t t31 = 106883U;

	t31 = (((x125^x126)&x127)^x128);

	if (t31 != 98675U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = 0;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = -2724358;

	t32 = (((x129^x130)&x131)^x132);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	static int8_t x134 = -1;
	static uint32_t x135 = 1619318547U;
	int16_t x136 = -1;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (((x133^x134)&x135)^x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = UINT64_MAX;
	uint32_t x140 = 15U;

	t34 = (((x137^x138)&x139)^x140);

	if (t34 != 2147483632LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	uint8_t x142 = 67U;
	int32_t x143 = -3;
	uint32_t x144 = 21U;
	volatile uint32_t t35 = 16U;

	t35 = (((x141^x142)&x143)^x144);

	if (t35 != 4294967209U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 63;
	uint8_t x146 = 63U;
	int16_t x147 = 5001;
	uint32_t x148 = 15110U;
	static volatile uint32_t t36 = 54710356U;

	t36 = (((x145^x146)&x147)^x148);

	if (t36 != 15110U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	volatile int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	int64_t t37 = 1LL;

	t37 = (((x149^x150)&x151)^x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x153 = -1LL;
	uint16_t x155 = 1507U;
	int8_t x156 = 7;
	int64_t t38 = 48208666025100993LL;

	t38 = (((x153^x154)&x155)^x156);

	if (t38 != 1287LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 124103403455986LLU;
	int32_t x158 = INT32_MAX;
	volatile int64_t x159 = INT64_MAX;
	int16_t x160 = INT16_MAX;
	static uint64_t t39 = 58896LLU;

	t39 = (((x157^x158)&x159)^x160);

	if (t39 != 124104904066546LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 48U;
	volatile uint32_t x162 = 1635367U;
	int8_t x163 = INT8_MIN;
	int8_t x164 = 3;

	t40 = (((x161^x162)&x163)^x164);

	if (t40 != 1635331U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	static int64_t x166 = 1211LL;
	static int8_t x168 = 60;

	t41 = (((x165^x166)&x167)^x168);

	if (t41 != 31548LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 1393U;
	volatile int64_t x170 = 276158043076266788LL;
	volatile int8_t x172 = -1;
	int64_t t42 = -393LL;

	t42 = (((x169^x170)&x171)^x172);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = -4;
	static volatile int32_t t43 = -242;

	t43 = (((x173^x174)&x175)^x176);

	if (t43 != -2147450884) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int64_t x179 = -1147LL;
	int64_t x180 = INT64_MAX;
	int64_t t44 = 476781LL;

	t44 = (((x177^x178)&x179)^x180);

	if (t44 != 9223372032559809659LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = INT64_MAX;
	static int64_t x183 = INT64_MIN;
	static volatile int32_t x184 = 367803567;
	static int64_t t45 = 110302LL;

	t45 = (((x181^x182)&x183)^x184);

	if (t45 != 367803567LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MAX;
	static volatile int32_t x187 = -1;
	volatile int64_t x188 = INT64_MIN;

	t46 = (((x185^x186)&x187)^x188);

	if (t46 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x191 = 11545113544794294LL;
	uint64_t x192 = 33889LLU;
	volatile uint64_t t47 = 51917464LLU;

	t47 = (((x189^x190)&x191)^x192);

	if (t47 != 934946007LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x194 = -10;
	static int64_t x195 = -1065651680111637LL;
	volatile int32_t x196 = INT32_MAX;
	volatile int64_t t48 = 2681243LL;

	t48 = (((x193^x194)&x195)^x196);

	if (t48 != 2147478557LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint8_t x199 = 13U;
	static volatile uint64_t t49 = 10605549LLU;

	t49 = (((x197^x198)&x199)^x200);

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -7365602;
	int16_t x203 = -1;
	int8_t x204 = 0;
	int32_t t50 = 107396;

	t50 = (((x201^x202)&x203)^x204);

	if (t50 != 2140118046) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 2U;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = -1;
	int32_t t51 = 0;

	t51 = (((x205^x206)&x207)^x208);

	if (t51 != -65409) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MAX;
	int32_t x211 = 558;
	int16_t x212 = 218;
	int64_t t52 = 4201794481LL;

	t52 = (((x209^x210)&x211)^x212);

	if (t52 != 756LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = INT64_MAX;
	uint64_t x215 = 3618125LLU;
	int8_t x216 = 3;
	uint64_t t53 = 0LLU;

	t53 = (((x213^x214)&x215)^x216);

	if (t53 != 13646LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 4861U;
	volatile int32_t x218 = -1;
	int64_t x220 = INT64_MIN;

	t54 = (((x217^x218)&x219)^x220);

	if (t54 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -67;
	uint16_t x222 = 45U;
	int64_t x223 = -1LL;
	static uint32_t x224 = 236943U;
	int64_t t55 = 3719579846900695LL;

	t55 = (((x221^x222)&x223)^x224);

	if (t55 != -237025LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint64_t x226 = UINT64_MAX;
	static int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t56 = 3LLU;

	t56 = (((x225^x226)&x227)^x228);

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x230 = -326;
	uint64_t x231 = 60029034365255LLU;
	int64_t x232 = 1360LL;
	uint64_t t57 = 8LLU;

	t57 = (((x229^x230)&x231)^x232);

	if (t57 != 1045LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x233 = 1U;
	int16_t x234 = 5;
	static uint8_t x235 = 8U;
	volatile int32_t x236 = -1;
	uint32_t t58 = UINT32_MAX;

	t58 = (((x233^x234)&x235)^x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 112U;
	int8_t x238 = INT8_MAX;
	uint64_t x239 = 27550273331450LLU;
	static int16_t x240 = INT16_MIN;
	volatile uint64_t t59 = 199LLU;

	t59 = (((x237^x238)&x239)^x240);

	if (t59 != 18446744073709518858LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 30U;
	uint16_t x243 = 7876U;
	int64_t x244 = INT64_MIN;
	int64_t t60 = -4299943146751220LL;

	t60 = (((x241^x242)&x243)^x244);

	if (t60 != -9223372036854767936LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	static volatile int64_t t61 = 8LL;

	t61 = (((x245^x246)&x247)^x248);

	if (t61 != -9223372034707292332LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x251 = 100291630122LLU;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t62 = 27LLU;

	t62 = (((x249^x250)&x251)^x252);

	if (t62 != 18446744073709518890LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 382;
	int16_t x255 = INT16_MIN;
	int64_t x256 = 79280LL;
	static int64_t t63 = -17974973928530835LL;

	t63 = (((x253^x254)&x255)^x256);

	if (t63 != 112048LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MAX;
	int64_t x258 = INT64_MAX;
	static int32_t x259 = -31;
	int8_t x260 = -1;
	volatile int64_t t64 = -2458LL;

	t64 = (((x257^x258)&x259)^x260);

	if (t64 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 1137005529703127670LL;
	volatile int16_t x263 = INT16_MAX;
	int16_t x264 = INT16_MAX;
	volatile int64_t t65 = -5056779LL;

	t65 = (((x261^x262)&x263)^x264);

	if (t65 != 6774LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	uint16_t x267 = 22U;
	volatile int32_t t66 = -54;

	t66 = (((x265^x266)&x267)^x268);

	if (t66 != -32746) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int32_t x270 = 83489;
	static int32_t x271 = -1;
	int64_t x272 = -676564815900317LL;

	t67 = (((x269^x270)&x271)^x272);

	if (t67 != 676564815947965LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	static uint8_t x275 = 22U;
	static uint8_t x276 = 26U;
	volatile int32_t t68 = 6180;

	t68 = (((x273^x274)&x275)^x276);

	if (t68 != 26) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MIN;
	int64_t t69 = 493915858920342LL;

	t69 = (((x277^x278)&x279)^x280);

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = -1;
	int16_t x283 = INT16_MAX;
	static uint16_t x284 = 60U;
	int32_t t70 = 443046814;

	t70 = (((x281^x282)&x283)^x284);

	if (t70 != 60) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -7;
	volatile uint64_t x286 = 2LLU;
	uint16_t x287 = 253U;
	static volatile uint8_t x288 = UINT8_MAX;
	uint64_t t71 = 289237515LLU;

	t71 = (((x285^x286)&x287)^x288);

	if (t71 != 6LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -26967584;
	uint64_t x290 = 8187366334522571627LLU;
	static int8_t x291 = -1;
	volatile uint8_t x292 = 119U;
	volatile uint64_t t72 = 65973934378LLU;

	t72 = (((x289^x290)&x291)^x292);

	if (t72 != 10259377739195824892LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 89U;
	uint8_t x294 = 1U;
	volatile int16_t x295 = -348;

	t73 = (((x293^x294)&x295)^x296);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int64_t x298 = -1LL;
	volatile int64_t x299 = 388270538LL;
	int16_t x300 = INT16_MIN;
	int64_t t74 = 91LL;

	t74 = (((x297^x298)&x299)^x300);

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	static int64_t x303 = INT64_MIN;
	int32_t x304 = 976;
	static volatile int64_t t75 = 494247175096LL;

	t75 = (((x301^x302)&x303)^x304);

	if (t75 != 976LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	static uint16_t x308 = UINT16_MAX;
	volatile int64_t t76 = 0LL;

	t76 = (((x305^x306)&x307)^x308);

	if (t76 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int32_t x311 = INT32_MAX;
	uint8_t x312 = 122U;
	volatile int32_t t77 = -441890;

	t77 = (((x309^x310)&x311)^x312);

	if (t77 != 65413) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = 41525333387LL;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MIN;
	uint64_t t78 = 404201LLU;

	t78 = (((x313^x314)&x315)^x316);

	if (t78 != 41525333387LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 10032U;
	int32_t x318 = 613010;
	uint32_t x319 = 12590517U;
	volatile int32_t x320 = -1;

	t79 = (((x317^x318)&x319)^x320);

	if (t79 != 4294959711U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MIN;
	volatile int64_t x323 = INT64_MAX;
	int8_t x324 = 0;
	int64_t t80 = -120505116LL;

	t80 = (((x321^x322)&x323)^x324);

	if (t80 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int64_t x326 = -1LL;
	uint64_t x327 = UINT64_MAX;
	volatile uint64_t t81 = 512540836LLU;

	t81 = (((x325^x326)&x327)^x328);

	if (t81 != 32738LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	static int8_t x331 = 0;
	volatile int16_t x332 = INT16_MAX;
	int32_t t82 = -89172;

	t82 = (((x329^x330)&x331)^x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = -64398464;
	volatile int8_t x334 = -1;
	uint64_t x335 = 75022LLU;
	uint64_t t83 = 5989982LLU;

	t83 = (((x333^x334)&x335)^x336);

	if (t83 != 18446744071562077198LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = 97340LL;
	int32_t x338 = 142236068;
	int16_t x340 = 7222;
	int64_t t84 = 38895310921590832LL;

	t84 = (((x337^x338)&x339)^x340);

	if (t84 != 142293422LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	int32_t x344 = -7;
	int32_t t85 = -127887;

	t85 = (((x341^x342)&x343)^x344);

	if (t85 != 2147450873) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 1235;
	volatile int8_t x346 = INT8_MAX;
	static int16_t x347 = INT16_MIN;
	int32_t x348 = -1;
	int32_t t86 = -554016;

	t86 = (((x345^x346)&x347)^x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int8_t x351 = INT8_MIN;
	volatile uint16_t x352 = 340U;
	static int64_t t87 = 228052483LL;

	t87 = (((x349^x350)&x351)^x352);

	if (t87 != -300LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MIN;
	int8_t x355 = 0;
	int32_t x356 = -178759;
	volatile int32_t t88 = -170615682;

	t88 = (((x353^x354)&x355)^x356);

	if (t88 != -178759) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = -1LL;
	volatile int64_t t89 = 28067230881LL;

	t89 = (((x357^x358)&x359)^x360);

	if (t89 != 32492LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = -1LL;
	volatile uint32_t x362 = 16131U;
	int64_t x363 = INT64_MAX;
	int64_t t90 = -1165LL;

	t90 = (((x361^x362)&x363)^x364);

	if (t90 != 9223372036832098511LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -968173626;
	uint64_t x366 = 5970116LLU;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;

	t91 = (((x365^x366)&x367)^x368);

	if (t91 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -13801;
	uint64_t x370 = 1123LLU;
	volatile uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 672LLU;
	static uint64_t t92 = 81610LLU;

	t92 = (((x369^x370)&x371)^x372);

	if (t92 != 18446744073709538516LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int32_t x374 = -3;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t93 = 357237841777LLU;

	t93 = (((x373^x374)&x375)^x376);

	if (t93 != 18446744073709543672LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 80U;
	static volatile int64_t x378 = INT64_MIN;
	static uint16_t x379 = 2232U;
	static volatile int64_t x380 = INT64_MAX;

	t94 = (((x377^x378)&x379)^x380);

	if (t94 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = 0;
	static int8_t x382 = INT8_MIN;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = -42LL;

	t95 = (((x381^x382)&x383)^x384);

	if (t95 != 32726LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 113265LLU;
	int8_t x386 = INT8_MIN;
	int16_t x387 = -7;
	uint8_t x388 = 0U;
	uint64_t t96 = 3698614133826613795LLU;

	t96 = (((x385^x386)&x387)^x388);

	if (t96 != 18446744073709438449LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 8441U;
	volatile int64_t x391 = INT64_MAX;
	int16_t x392 = -1;
	static volatile int64_t t97 = 1LL;

	t97 = (((x389^x390)&x391)^x392);

	if (t97 != -2147475207LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	uint16_t x395 = UINT16_MAX;
	int32_t x396 = INT32_MAX;

	t98 = (((x393^x394)&x395)^x396);

	if (t98 != 2147483647U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = UINT64_MAX;
	volatile int8_t x398 = -32;
	int64_t x399 = -82LL;
	uint64_t t99 = 1388751518762LLU;

	t99 = (((x397^x398)&x399)^x400);

	if (t99 != 241LLU) { NG(); } else { ; }
	
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

