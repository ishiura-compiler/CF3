#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = UINT16_MAX;
uint32_t x10 = 1993U;
int32_t x18 = INT32_MAX;
int32_t x24 = INT32_MIN;
int16_t x27 = -430;
static int8_t x28 = -1;
uint16_t x31 = 9494U;
volatile int32_t t7 = -422;
volatile int16_t x40 = INT16_MAX;
int64_t t10 = 59LL;
uint16_t x51 = UINT16_MAX;
uint8_t x60 = 19U;
int16_t x62 = INT16_MIN;
volatile int64_t x79 = -17LL;
volatile int32_t t19 = 2;
uint64_t x82 = 519LLU;
int8_t x83 = INT8_MIN;
static volatile uint64_t x91 = 1236364LLU;
uint64_t x94 = 0LLU;
static uint32_t x126 = 1703U;
volatile uint8_t x127 = 1U;
uint16_t x132 = UINT16_MAX;
int32_t t32 = 196;
static uint16_t x133 = 902U;
static int16_t x134 = -687;
uint16_t x139 = 481U;
int8_t x142 = INT8_MIN;
uint8_t x144 = UINT8_MAX;
int16_t x148 = -1;
static int32_t x153 = INT32_MIN;
volatile int16_t x169 = 32;
int8_t x179 = -1;
volatile int32_t t44 = 4496310;
static int16_t x191 = INT16_MIN;
int32_t x193 = -259;
int64_t t50 = -2352097021597836715LL;
int32_t x208 = -1;
volatile uint64_t t51 = 501167481LLU;
uint16_t x212 = 229U;
uint32_t x216 = UINT32_MAX;
volatile int32_t x218 = INT32_MIN;
uint64_t t54 = 379791LLU;
int64_t x221 = -1LL;
int8_t x224 = -1;
static volatile int64_t t55 = -934193547LL;
static volatile uint32_t t56 = 0U;
uint16_t x229 = 1797U;
uint64_t x230 = UINT64_MAX;
int8_t x236 = INT8_MIN;
static int8_t x238 = INT8_MIN;
volatile uint64_t x241 = 3628828160246748263LLU;
uint32_t x247 = 118477U;
int32_t x248 = INT32_MAX;
int16_t x252 = 10;
int16_t x258 = -1;
int8_t x271 = -1;
int8_t x272 = INT8_MIN;
int32_t x278 = INT32_MIN;
static volatile int32_t x285 = INT32_MIN;
static uint32_t x286 = UINT32_MAX;
volatile int16_t x288 = INT16_MIN;
int64_t x302 = -1LL;
int64_t x304 = INT64_MIN;
int16_t x306 = 41;
volatile uint8_t x307 = 49U;
static int16_t x313 = INT16_MAX;
int8_t x315 = -1;
int8_t x317 = INT8_MIN;
volatile int8_t x331 = INT8_MAX;
static volatile int32_t t82 = 495;
int64_t t83 = 455887LL;
int16_t x341 = INT16_MIN;
int8_t x354 = -25;
volatile uint32_t x358 = 118U;
int8_t x367 = 1;
volatile int32_t t91 = 13;
static int16_t x369 = 1;
int64_t x377 = INT64_MAX;
volatile int64_t t94 = 0LL;
int16_t x383 = INT16_MAX;
uint16_t x384 = 32245U;
volatile int64_t t95 = -6856LL;
static int64_t x385 = -333625713918158LL;
int8_t x392 = INT8_MIN;
static uint32_t x393 = UINT32_MAX;
uint32_t t98 = 216302U;
int16_t x399 = INT16_MIN;


void f0(void) {
	int16_t x2 = 3;
	uint16_t x3 = 311U;
	volatile int8_t x4 = -10;
	volatile int32_t t0 = -707;

	t0 = ((x1^x2)&(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x6 = 1;
	int8_t x7 = -1;
	volatile int8_t x8 = INT8_MAX;
	volatile int64_t t1 = -31063787485883498LL;

	t1 = ((x5^x6)&(x7==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile int64_t x11 = -1LL;
	volatile uint64_t x12 = 28064LLU;
	static volatile uint32_t t2 = 10129976U;

	t2 = ((x9^x10)&(x11==x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1223082496U;
	int8_t x14 = -1;
	int64_t x15 = 537246760766LL;
	int32_t x16 = INT32_MAX;
	uint32_t t3 = 13U;

	t3 = ((x13^x14)&(x15==x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 6155U;
	static volatile int8_t x19 = INT8_MAX;
	static volatile uint64_t x20 = 1928LLU;
	volatile int32_t t4 = 5528723;

	t4 = ((x17^x18)&(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -27254674853302330LL;
	static int16_t x22 = INT16_MIN;
	volatile int32_t x23 = INT32_MAX;
	static int64_t t5 = 61653922494138LL;

	t5 = ((x21^x22)&(x23==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int64_t x26 = INT64_MIN;
	volatile uint64_t t6 = 67120101774069LLU;

	t6 = ((x25^x26)&(x27==x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	uint16_t x32 = 0U;

	t7 = ((x29^x30)&(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	int64_t x34 = INT64_MAX;
	int32_t x35 = INT32_MIN;
	int32_t x36 = INT32_MAX;
	int64_t t8 = 13348532132LL;

	t8 = ((x33^x34)&(x35==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -14959197;
	static int16_t x38 = 94;
	int8_t x39 = -1;
	int32_t t9 = -408018;

	t9 = ((x37^x38)&(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = 7953;
	static int32_t x43 = 1;
	volatile int8_t x44 = -51;

	t10 = ((x41^x42)&(x43==x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int16_t x46 = 0;
	static uint32_t x47 = UINT32_MAX;
	int32_t x48 = -13925;
	volatile int32_t t11 = -3660887;

	t11 = ((x45^x46)&(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static int8_t x50 = -3;
	int16_t x52 = INT16_MIN;
	static int64_t t12 = -14140027556LL;

	t12 = ((x49^x50)&(x51==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 17;
	volatile uint32_t x54 = 31032U;
	volatile int64_t x55 = 7331684054LL;
	static int16_t x56 = INT16_MIN;
	uint32_t t13 = 1U;

	t13 = ((x53^x54)&(x55==x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -6397;
	uint16_t x58 = UINT16_MAX;
	volatile int8_t x59 = INT8_MAX;
	volatile int32_t t14 = -991017567;

	t14 = ((x57^x58)&(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	volatile int16_t x63 = 52;
	uint64_t x64 = 54206LLU;
	static volatile uint64_t t15 = 29080931046LLU;

	t15 = ((x61^x62)&(x63==x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int32_t x66 = -241;
	volatile int64_t x67 = 1037705549513LL;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 2742513;

	t16 = ((x65^x66)&(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -261201;
	static uint64_t x70 = UINT64_MAX;
	int8_t x71 = -1;
	int16_t x72 = -1;
	static volatile uint64_t t17 = 8499845LLU;

	t17 = ((x69^x70)&(x71==x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -6;
	static int8_t x74 = INT8_MIN;
	static int8_t x75 = -1;
	uint16_t x76 = 14U;
	static volatile int32_t t18 = -4;

	t18 = ((x73^x74)&(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 9U;
	uint16_t x78 = UINT16_MAX;
	int8_t x80 = -1;

	t19 = ((x77^x78)&(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x84 = 65U;
	volatile uint64_t t20 = 64008371990LLU;

	t20 = ((x81^x82)&(x83==x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	uint64_t x86 = 243037388310008189LLU;
	static uint32_t x87 = 780U;
	int16_t x88 = INT16_MAX;
	uint64_t t21 = 49295339348LLU;

	t21 = ((x85^x86)&(x87==x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int16_t x90 = 3;
	static uint8_t x92 = 13U;
	volatile int32_t t22 = -205810300;

	t22 = ((x89^x90)&(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	int64_t x95 = -1LL;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t23 = 87648574094247436LLU;

	t23 = ((x93^x94)&(x95==x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = 131784;
	static volatile int16_t x99 = 224;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = -103520077;

	t24 = ((x97^x98)&(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = -901924257LL;
	int32_t x103 = -104227;
	int32_t x104 = -395689651;
	volatile int64_t t25 = 19LL;

	t25 = ((x101^x102)&(x103==x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = 1;
	uint64_t x106 = 1725850024977798LLU;
	int64_t x107 = INT64_MAX;
	uint16_t x108 = UINT16_MAX;
	uint64_t t26 = 108LLU;

	t26 = ((x105^x106)&(x107==x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MAX;
	uint64_t x112 = 2034LLU;
	int32_t t27 = 332211932;

	t27 = ((x109^x110)&(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	static uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = -3;

	t28 = ((x113^x114)&(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 46U;
	int64_t x118 = INT64_MIN;
	static uint32_t x119 = UINT32_MAX;
	int64_t x120 = -1LL;
	int64_t t29 = 697423666150922035LL;

	t29 = ((x117^x118)&(x119==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -2456;
	int64_t x122 = INT64_MAX;
	int8_t x123 = 25;
	int16_t x124 = INT16_MIN;
	volatile int64_t t30 = 230650643LL;

	t30 = ((x121^x122)&(x123==x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t31 = 66U;

	t31 = ((x125^x126)&(x127==x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 52U;
	static int8_t x130 = INT8_MAX;
	static int32_t x131 = INT32_MIN;

	t32 = ((x129^x130)&(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x135 = UINT16_MAX;
	volatile int8_t x136 = 30;
	volatile int32_t t33 = -7903936;

	t33 = ((x133^x134)&(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = 108946;
	static uint64_t x138 = 213399LLU;
	volatile int8_t x140 = INT8_MIN;
	volatile uint64_t t34 = 3836153871LLU;

	t34 = ((x137^x138)&(x139==x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 15U;
	uint32_t x143 = 20U;
	int32_t t35 = 244388;

	t35 = ((x141^x142)&(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -116262876157284LL;
	int64_t x146 = INT64_MIN;
	int32_t x147 = -1;
	int64_t t36 = 598LL;

	t36 = ((x145^x146)&(x147==x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	static uint64_t x150 = UINT64_MAX;
	volatile int32_t x151 = 8;
	uint32_t x152 = 821543670U;
	volatile uint64_t t37 = 159587700554LLU;

	t37 = ((x149^x150)&(x151==x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = 13436LLU;
	int32_t x155 = -10;
	int16_t x156 = -1;
	static volatile uint64_t t38 = 15LLU;

	t38 = ((x153^x154)&(x155==x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	volatile int32_t x158 = -6947862;
	uint32_t x159 = 12336554U;
	static int16_t x160 = -1;
	static int32_t t39 = -109413957;

	t39 = ((x157^x158)&(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 1;
	volatile int16_t x162 = INT16_MAX;
	int8_t x163 = 0;
	uint32_t x164 = 374747U;
	static int32_t t40 = -2;

	t40 = ((x161^x162)&(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MAX;
	static volatile int64_t x166 = INT64_MAX;
	int16_t x167 = 404;
	uint64_t x168 = 88492078262967LLU;
	int64_t t41 = 47275401548341968LL;

	t41 = ((x165^x166)&(x167==x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	int32_t x171 = 8702142;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 1102;

	t42 = ((x169^x170)&(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	volatile int32_t x176 = INT32_MIN;
	static uint64_t t43 = 5627557LLU;

	t43 = ((x173^x174)&(x175==x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -1;
	volatile int32_t x178 = -1;
	int16_t x180 = -1;

	t44 = ((x177^x178)&(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 93162866;
	static volatile int64_t x182 = -171031LL;
	int32_t x183 = INT32_MAX;
	static volatile int32_t x184 = -7587;
	volatile int64_t t45 = 222159585LL;

	t45 = ((x181^x182)&(x183==x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 0;
	int32_t x186 = 26832;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 0;

	t46 = ((x185^x186)&(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 0;
	uint16_t x190 = 15240U;
	int8_t x192 = 1;
	static int32_t t47 = -113;

	t47 = ((x189^x190)&(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	static int16_t x195 = -1;
	int16_t x196 = 1;
	volatile uint64_t t48 = 262038925055LLU;

	t48 = ((x193^x194)&(x195==x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int64_t x198 = 39282001023951232LL;
	static uint64_t x199 = 60839986LLU;
	static uint32_t x200 = 24U;
	volatile int64_t t49 = 23LL;

	t49 = ((x197^x198)&(x199==x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MAX;
	int64_t x202 = 2488065LL;
	uint32_t x203 = 337750118U;
	uint8_t x204 = 13U;

	t50 = ((x201^x202)&(x203==x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 198941572994337850LLU;
	volatile uint16_t x206 = UINT16_MAX;
	static int8_t x207 = INT8_MIN;

	t51 = ((x205^x206)&(x207==x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -16797501998774337LL;
	int8_t x210 = 63;
	uint64_t x211 = 5631076LLU;
	volatile int64_t t52 = -92792LL;

	t52 = ((x209^x210)&(x211==x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 52;
	volatile uint64_t x214 = 51035096LLU;
	int16_t x215 = -1;
	uint64_t t53 = 1967964645944131LLU;

	t53 = ((x213^x214)&(x215==x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 30674171223923LLU;
	int16_t x219 = INT16_MIN;
	volatile int16_t x220 = -1;

	t54 = ((x217^x218)&(x219==x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x222 = INT16_MIN;
	uint8_t x223 = 10U;

	t55 = ((x221^x222)&(x223==x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	volatile uint32_t x226 = 113U;
	static uint32_t x227 = UINT32_MAX;
	uint64_t x228 = 18LLU;

	t56 = ((x225^x226)&(x227==x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x231 = 118U;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t57 = 131LLU;

	t57 = ((x229^x230)&(x231==x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MAX;
	int64_t x235 = INT64_MIN;
	static int32_t t58 = -381;

	t58 = ((x233^x234)&(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static uint32_t x239 = UINT32_MAX;
	int16_t x240 = INT16_MAX;
	int32_t t59 = 503;

	t59 = ((x237^x238)&(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x242 = 85U;
	volatile int16_t x243 = 55;
	uint8_t x244 = UINT8_MAX;
	static uint64_t t60 = 235274087300LLU;

	t60 = ((x241^x242)&(x243==x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	uint8_t x246 = 23U;
	volatile int32_t t61 = 0;

	t61 = ((x245^x246)&(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int8_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	int32_t t62 = -75;

	t62 = ((x249^x250)&(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = 18U;
	uint8_t x255 = 2U;
	int8_t x256 = -11;
	static volatile uint32_t t63 = 640U;

	t63 = ((x253^x254)&(x255==x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = -1;
	uint16_t x259 = 0U;
	int8_t x260 = -1;
	volatile int32_t t64 = -16731197;

	t64 = ((x257^x258)&(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 22U;
	int16_t x262 = -13736;
	volatile int64_t x263 = INT64_MIN;
	static volatile int8_t x264 = -1;
	int32_t t65 = 0;

	t65 = ((x261^x262)&(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -765;
	uint8_t x266 = 1U;
	static int32_t x267 = INT32_MAX;
	static uint32_t x268 = UINT32_MAX;
	int32_t t66 = 76756819;

	t66 = ((x265^x266)&(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = -1;
	int32_t t67 = 7;

	t67 = ((x269^x270)&(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 45134501781166LLU;
	uint32_t x274 = 426001U;
	uint64_t x275 = UINT64_MAX;
	uint32_t x276 = 256935650U;
	volatile uint64_t t68 = 16368867455041988LLU;

	t68 = ((x273^x274)&(x275==x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 14117784319LLU;
	static int8_t x279 = 1;
	volatile uint32_t x280 = 20838U;
	static volatile uint64_t t69 = 6687659462233LLU;

	t69 = ((x277^x278)&(x279==x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = UINT8_MAX;
	int64_t t70 = -1127LL;

	t70 = ((x281^x282)&(x283==x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x287 = INT32_MAX;
	volatile uint32_t t71 = 3779U;

	t71 = ((x285^x286)&(x287==x288));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = UINT64_MAX;
	static int16_t x290 = INT16_MIN;
	uint64_t x291 = 32LLU;
	int8_t x292 = INT8_MIN;
	uint64_t t72 = 7689321956LLU;

	t72 = ((x289^x290)&(x291==x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 3U;
	volatile int32_t x294 = INT32_MIN;
	int32_t x295 = -1;
	static uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = 1;

	t73 = ((x293^x294)&(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = -1LL;
	uint8_t x299 = UINT8_MAX;
	uint16_t x300 = 7U;
	volatile uint64_t t74 = 910139004LLU;

	t74 = ((x297^x298)&(x299==x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int32_t x303 = -1;
	volatile int64_t t75 = 8795LL;

	t75 = ((x301^x302)&(x303==x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 24401U;
	static int16_t x308 = -1;
	volatile uint32_t t76 = 30876853U;

	t76 = ((x305^x306)&(x307==x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 5098422;
	uint16_t x310 = 6U;
	volatile int64_t x311 = -1098336718332015608LL;
	int8_t x312 = 35;
	static int32_t t77 = 0;

	t77 = ((x309^x310)&(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = 476U;
	volatile int32_t x316 = 1759;
	uint32_t t78 = 154U;

	t78 = ((x313^x314)&(x315==x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = 14808840721LL;
	int32_t x319 = -85913;
	int64_t x320 = 37204706287319LL;
	static int64_t t79 = -21179834466LL;

	t79 = ((x317^x318)&(x319==x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int32_t x322 = 253135090;
	static uint8_t x323 = 48U;
	uint64_t x324 = 65353940930978208LLU;
	volatile int32_t t80 = 163591792;

	t80 = ((x321^x322)&(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	volatile int32_t x326 = INT32_MIN;
	uint32_t x327 = 5066U;
	int32_t x328 = 1013217687;
	int32_t t81 = -992;

	t81 = ((x325^x326)&(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	static int8_t x330 = 0;
	uint16_t x332 = 11U;

	t82 = ((x329^x330)&(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -1LL;
	int64_t x334 = INT64_MIN;
	uint16_t x335 = 15629U;
	int8_t x336 = INT8_MAX;

	t83 = ((x333^x334)&(x335==x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 888LL;
	volatile int16_t x338 = 0;
	uint16_t x339 = 731U;
	int32_t x340 = INT32_MIN;
	int64_t t84 = 1LL;

	t84 = ((x337^x338)&(x339==x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = 3585255LLU;
	uint64_t x343 = 669117795LLU;
	int32_t x344 = INT32_MIN;
	uint64_t t85 = 4531778819990225087LLU;

	t85 = ((x341^x342)&(x343==x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -2;
	int64_t x346 = 7474730732LL;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 123897LLU;
	volatile int64_t t86 = -2LL;

	t86 = ((x345^x346)&(x347==x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = 1952346U;
	uint64_t t87 = 63863375388832LLU;

	t87 = ((x349^x350)&(x351==x352));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	static volatile uint16_t x355 = 52U;
	int16_t x356 = 40;
	int32_t t88 = -276022640;

	t88 = ((x353^x354)&(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -1LL;
	int8_t x359 = 7;
	volatile int64_t x360 = INT64_MIN;
	int64_t t89 = -1122089606862323236LL;

	t89 = ((x357^x358)&(x359==x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 476U;
	uint32_t x362 = 12320U;
	static int8_t x363 = -1;
	volatile uint16_t x364 = UINT16_MAX;
	volatile uint32_t t90 = 8U;

	t90 = ((x361^x362)&(x363==x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x368 = INT64_MIN;

	t91 = ((x365^x366)&(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = UINT32_MAX;
	static int32_t x371 = INT32_MIN;
	int8_t x372 = 0;
	static uint32_t t92 = 11U;

	t92 = ((x369^x370)&(x371==x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	static int32_t x374 = INT32_MAX;
	static int16_t x375 = 0;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -59542446;

	t93 = ((x373^x374)&(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MAX;
	static volatile int32_t x379 = INT32_MAX;
	int16_t x380 = 22;

	t94 = ((x377^x378)&(x379==x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	static int64_t x382 = INT64_MAX;

	t95 = ((x381^x382)&(x383==x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x386 = 7LLU;
	static volatile int64_t x387 = INT64_MIN;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t96 = 980737806716LLU;

	t96 = ((x385^x386)&(x387==x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = 2;
	int64_t x390 = 0LL;
	uint16_t x391 = UINT16_MAX;
	int64_t t97 = -4009771238361LL;

	t97 = ((x389^x390)&(x391==x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x394 = INT16_MIN;
	uint16_t x395 = UINT16_MAX;
	uint16_t x396 = UINT16_MAX;

	t98 = ((x393^x394)&(x395==x396));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 5763U;
	static uint8_t x400 = UINT8_MAX;
	volatile uint32_t t99 = 1U;

	t99 = ((x397^x398)&(x399==x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

