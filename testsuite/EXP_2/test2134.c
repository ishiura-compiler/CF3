#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = INT32_MIN;
uint64_t x8 = 62723686LLU;
static uint16_t x15 = UINT16_MAX;
volatile int32_t t3 = -13;
int8_t x29 = INT8_MIN;
uint32_t x30 = 21254U;
int16_t x41 = -425;
static volatile int64_t t8 = 3LL;
uint64_t x53 = 383873146056LLU;
uint32_t x63 = UINT32_MAX;
uint32_t x71 = UINT32_MAX;
int16_t x75 = INT16_MAX;
static uint32_t x80 = 457097239U;
int8_t x83 = INT8_MIN;
uint32_t x85 = UINT32_MAX;
int16_t x92 = -331;
int8_t x97 = -1;
int16_t x98 = -1;
static volatile uint64_t x100 = UINT64_MAX;
uint64_t x101 = 6642338081361873713LLU;
uint16_t x103 = UINT16_MAX;
int32_t x107 = 317903691;
uint8_t x114 = UINT8_MAX;
int8_t x118 = -1;
uint8_t x128 = 48U;
int64_t x129 = INT64_MIN;
static uint32_t x131 = 0U;
int32_t t28 = -3;
static volatile uint8_t x138 = 7U;
int16_t x141 = 11297;
int8_t x142 = -1;
int8_t x154 = 2;
int16_t x156 = -80;
int16_t x159 = INT16_MIN;
uint64_t x166 = UINT64_MAX;
int8_t x170 = INT8_MAX;
int64_t t36 = -508166LL;
volatile int32_t t37 = -361256236;
int32_t x177 = INT32_MIN;
int32_t x180 = INT32_MAX;
int16_t x201 = -3;
int16_t x204 = -1;
uint64_t x225 = UINT64_MAX;
static volatile uint8_t x239 = 1U;
int32_t x240 = INT32_MAX;
volatile uint8_t x242 = 85U;
uint32_t x250 = 7385U;
static volatile int64_t t56 = -366358715381LL;
int16_t x255 = INT16_MAX;
volatile int32_t t57 = 194890;
uint32_t x257 = 12U;
volatile int64_t t58 = -23766LL;
uint64_t x262 = UINT64_MAX;
static int32_t x269 = 142086628;
uint16_t x286 = UINT16_MAX;
int64_t x294 = INT64_MIN;
int8_t x295 = INT8_MIN;
volatile int32_t x296 = 49534;
int16_t x298 = -737;
volatile int64_t x299 = -923LL;
static int16_t x300 = INT16_MIN;
static volatile int32_t t66 = -135297067;
int32_t x312 = INT32_MAX;
static volatile int32_t t70 = -4177236;
uint8_t x318 = UINT8_MAX;
int8_t x321 = -1;
int16_t x322 = -100;
static uint64_t x326 = 223527LLU;
static int64_t x328 = -1LL;
static int32_t t76 = -1;
static int32_t x353 = -142;
int16_t x365 = -1;
static int32_t x368 = -234395;
static uint64_t x370 = UINT64_MAX;
volatile int8_t x372 = 1;
static volatile uint32_t x379 = 29U;
static uint64_t t84 = 3274482540442035LLU;
int16_t x381 = INT16_MIN;
int32_t x390 = INT32_MAX;
int16_t x394 = INT16_MAX;
int16_t x406 = -16177;
volatile int64_t x407 = INT64_MIN;
int16_t x412 = -1;
volatile uint8_t x415 = 6U;
int64_t x418 = 2244833LL;
volatile uint64_t t94 = 205746497LLU;
static int32_t x422 = 747093;
uint32_t x423 = 5U;
static int8_t x425 = -58;
int8_t x428 = 0;
int8_t x431 = INT8_MIN;
int64_t x432 = 270033170103113363LL;
volatile uint64_t x433 = 0LLU;
static volatile int32_t t99 = 30;


void f0(void) {
	int32_t x2 = 11310382;
	int64_t x3 = INT64_MIN;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = -13106;

	t0 = ((x1<(x2^x3))-x4);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	volatile int32_t x6 = -985751;
	int16_t x7 = INT16_MIN;
	uint64_t t1 = 41LLU;

	t1 = ((x5<(x6^x7))-x8);

	if (t1 != 18446744073646827930LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = 1;
	static uint8_t x11 = UINT8_MAX;
	static int32_t x12 = -14;
	volatile int32_t t2 = 19389;

	t2 = ((x9<(x10^x11))-x12);

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint16_t x14 = 89U;
	int16_t x16 = -4033;

	t3 = ((x13<(x14^x15))-x16);

	if (t3 != 4033) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -771979410;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 7048LLU;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -18046673;

	t4 = ((x17<(x18^x19))-x20);

	if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MAX;
	uint64_t x24 = 50928615167LLU;
	uint64_t t5 = 606560684295841073LLU;

	t5 = ((x21<(x22^x23))-x24);

	if (t5 != 18446744022780936449LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x31 = -258LL;
	volatile uint16_t x32 = 2040U;
	int32_t t6 = -393;

	t6 = ((x29<(x30^x31))-x32);

	if (t6 != -2040) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	static int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	volatile int32_t x40 = -1;
	volatile int32_t t7 = 991;

	t7 = ((x37<(x38^x39))-x40);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = 1601LLU;
	static int64_t x44 = 2101302119585632353LL;

	t8 = ((x41<(x42^x43))-x44);

	if (t8 != -2101302119585632353LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 1U;
	uint8_t x46 = 46U;
	static int32_t x47 = 0;
	int32_t x48 = -606491458;
	volatile int32_t t9 = 60211342;

	t9 = ((x45<(x46^x47))-x48);

	if (t9 != 606491459) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x49 = 244995145977169877LL;
	uint8_t x50 = 22U;
	volatile int32_t x51 = -1951;
	int8_t x52 = 53;
	int32_t t10 = -2880317;

	t10 = ((x49<(x50^x51))-x52);

	if (t10 != -53) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = 291268498LL;
	int16_t x55 = -1;
	volatile uint32_t x56 = 57019U;
	uint32_t t11 = 2091U;

	t11 = ((x53<(x54^x55))-x56);

	if (t11 != 4294910278U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	volatile int64_t x62 = 10LL;
	int16_t x64 = 8190;
	volatile int32_t t12 = -1689670;

	t12 = ((x61<(x62^x63))-x64);

	if (t12 != -8189) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = INT32_MIN;
	int8_t x66 = 1;
	int64_t x67 = INT64_MIN;
	int64_t x68 = -1LL;
	volatile int64_t t13 = -202591LL;

	t13 = ((x65<(x66^x67))-x68);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = 0;
	static uint16_t x70 = 5U;
	int32_t x72 = INT32_MAX;
	volatile int32_t t14 = 70038098;

	t14 = ((x69<(x70^x71))-x72);

	if (t14 != -2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 145740050U;
	int8_t x76 = INT8_MAX;
	int32_t t15 = -8189;

	t15 = ((x73<(x74^x75))-x76);

	if (t15 != -126) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 1;
	int32_t x78 = 14;
	int32_t x79 = -2393157;
	volatile uint32_t t16 = 65342U;

	t16 = ((x77<(x78^x79))-x80);

	if (t16 != 3837870057U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	static int8_t x82 = -1;
	int8_t x84 = -5;
	static volatile int32_t t17 = 13946;

	t17 = ((x81<(x82^x83))-x84);

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x86 = 0U;
	uint32_t x87 = 29U;
	int16_t x88 = INT16_MAX;
	volatile int32_t t18 = 9;

	t18 = ((x85<(x86^x87))-x88);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	static int32_t x90 = INT32_MAX;
	volatile uint16_t x91 = 1U;
	int32_t t19 = 3;

	t19 = ((x89<(x90^x91))-x92);

	if (t19 != 331) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	static int32_t x94 = -1;
	int8_t x95 = -1;
	int16_t x96 = INT16_MAX;
	volatile int32_t t20 = 2;

	t20 = ((x93<(x94^x95))-x96);

	if (t20 != -32766) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x99 = INT32_MIN;
	uint64_t t21 = 95964289899920LLU;

	t21 = ((x97<(x98^x99))-x100);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x102 = 0U;
	uint16_t x104 = 5752U;
	static volatile int32_t t22 = -16589803;

	t22 = ((x101<(x102^x103))-x104);

	if (t22 != -5752) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = -354228LL;
	uint16_t x106 = 19U;
	int8_t x108 = 0;
	int32_t t23 = 1246;

	t23 = ((x105<(x106^x107))-x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t24 = 1398;

	t24 = ((x113<(x114^x115))-x116);

	if (t24 != -2147483646) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = -1LL;
	int8_t x119 = INT8_MAX;
	int64_t x120 = -1LL;
	volatile int64_t t25 = 10470650332848LL;

	t25 = ((x117<(x118^x119))-x120);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	volatile int64_t x123 = -7933LL;
	int16_t x124 = INT16_MAX;
	volatile int32_t t26 = -7280049;

	t26 = ((x121<(x122^x123))-x124);

	if (t26 != -32766) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 3502846U;
	uint16_t x126 = 410U;
	static uint8_t x127 = 28U;
	volatile int32_t t27 = -5;

	t27 = ((x125<(x126^x127))-x128);

	if (t27 != -48) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x130 = UINT16_MAX;
	static int16_t x132 = INT16_MIN;

	t28 = ((x129<(x130^x131))-x132);

	if (t28 != 32769) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MIN;
	static volatile int8_t x139 = INT8_MIN;
	static int32_t x140 = 20984;
	static volatile int32_t t29 = 52269265;

	t29 = ((x137<(x138^x139))-x140);

	if (t29 != -20983) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x143 = -1;
	static int16_t x144 = INT16_MIN;
	int32_t t30 = 2;

	t30 = ((x141<(x142^x143))-x144);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -450;
	uint16_t x146 = 165U;
	int8_t x147 = INT8_MIN;
	static volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t31 = -122;

	t31 = ((x145<(x146^x147))-x148);

	if (t31 != -65534) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = 4151504;
	int8_t x155 = -57;
	static volatile int32_t t32 = 0;

	t32 = ((x153<(x154^x155))-x156);

	if (t32 != 80) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x157 = 1807165984U;
	static int64_t x158 = INT64_MAX;
	int64_t x160 = INT64_MAX;
	volatile int64_t t33 = 991191864080LL;

	t33 = ((x157<(x158^x159))-x160);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = 935;
	static int8_t x162 = INT8_MIN;
	static int16_t x163 = 1511;
	int32_t x164 = 2493;
	int32_t t34 = 44907;

	t34 = ((x161<(x162^x163))-x164);

	if (t34 != -2493) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t35 = 29925;

	t35 = ((x165<(x166^x167))-x168);

	if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x171 = 3U;
	int64_t x172 = INT64_MAX;

	t36 = ((x169<(x170^x171))-x172);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -89;
	int32_t x174 = INT32_MAX;
	int64_t x175 = -396331353LL;
	volatile int16_t x176 = INT16_MAX;

	t37 = ((x173<(x174^x175))-x176);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x178 = 0LLU;
	int8_t x179 = INT8_MAX;
	int32_t t38 = -485279;

	t38 = ((x177<(x178^x179))-x180);

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 14015U;
	volatile int16_t x182 = INT16_MIN;
	static uint32_t x183 = 214659731U;
	int16_t x184 = INT16_MAX;
	static int32_t t39 = 3;

	t39 = ((x181<(x182^x183))-x184);

	if (t39 != -32766) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	volatile uint64_t x187 = 2LLU;
	uint16_t x188 = 351U;
	int32_t t40 = 10851;

	t40 = ((x185<(x186^x187))-x188);

	if (t40 != -350) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	static int8_t x192 = 1;
	volatile int32_t t41 = 10;

	t41 = ((x189<(x190^x191))-x192);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = 5;
	int32_t x194 = 6;
	volatile int64_t x195 = INT64_MIN;
	int64_t x196 = -1LL;
	static int64_t t42 = 11959063152563606LL;

	t42 = ((x193<(x194^x195))-x196);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MAX;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 220013799652062LLU;
	static int8_t x200 = 0;
	int32_t t43 = 23;

	t43 = ((x197<(x198^x199))-x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = -1;
	volatile uint64_t x203 = 4402679LLU;
	volatile int32_t t44 = 25;

	t44 = ((x201<(x202^x203))-x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MIN;
	static uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MAX;
	volatile uint8_t x208 = 9U;
	int32_t t45 = -1625;

	t45 = ((x205<(x206^x207))-x208);

	if (t45 != -8) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int16_t x210 = 126;
	int64_t x211 = -1LL;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t46 = 1414318;

	t46 = ((x209<(x210^x211))-x212);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = INT16_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	static int16_t x215 = -2767;
	volatile uint16_t x216 = 2U;
	int32_t t47 = -170;

	t47 = ((x213<(x214^x215))-x216);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = 1224LL;
	volatile int8_t x218 = INT8_MAX;
	static volatile uint8_t x219 = 19U;
	static int32_t x220 = INT32_MAX;
	volatile int32_t t48 = 1;

	t48 = ((x217<(x218^x219))-x220);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x221 = 180995U;
	int16_t x222 = INT16_MIN;
	static uint8_t x223 = 13U;
	int16_t x224 = 1;
	int32_t t49 = -7;

	t49 = ((x221<(x222^x223))-x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x226 = INT64_MAX;
	static uint32_t x227 = 51189119U;
	uint16_t x228 = 19U;
	int32_t t50 = 877811029;

	t50 = ((x225<(x226^x227))-x228);

	if (t50 != -19) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MIN;
	uint8_t x230 = UINT8_MAX;
	static uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t51 = 4;

	t51 = ((x229<(x230^x231))-x232);

	if (t51 != -32766) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x233 = 3U;
	volatile uint8_t x234 = 11U;
	static volatile uint64_t x235 = 1102205291859241LLU;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t52 = 247966256U;

	t52 = ((x233<(x234^x235))-x236);

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = INT32_MAX;
	volatile int16_t x238 = INT16_MIN;
	int32_t t53 = 588420810;

	t53 = ((x237<(x238^x239))-x240);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -42;
	int32_t x243 = INT32_MIN;
	int8_t x244 = -1;
	int32_t t54 = -16763921;

	t54 = ((x241<(x242^x243))-x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -1;
	static uint8_t x246 = 6U;
	volatile int16_t x247 = -11;
	int16_t x248 = -1;
	volatile int32_t t55 = -14633550;

	t55 = ((x245<(x246^x247))-x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MAX;
	int32_t x251 = -1;
	int64_t x252 = -1LL;

	t56 = ((x249<(x250^x251))-x252);

	if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = INT8_MAX;
	uint8_t x254 = UINT8_MAX;
	uint8_t x256 = 2U;

	t57 = ((x253<(x254^x255))-x256);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x258 = INT32_MIN;
	uint8_t x259 = 1U;
	int64_t x260 = 296379051782LL;

	t58 = ((x257<(x258^x259))-x260);

	if (t58 != -296379051781LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x261 = UINT64_MAX;
	uint32_t x263 = 182773U;
	int16_t x264 = 6066;
	volatile int32_t t59 = -10282;

	t59 = ((x261<(x262^x263))-x264);

	if (t59 != -6066) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = 1U;
	int32_t x267 = 273;
	static int16_t x268 = -2692;
	volatile int32_t t60 = -50249;

	t60 = ((x265<(x266^x267))-x268);

	if (t60 != 2693) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = INT64_MIN;
	int32_t x272 = -1;
	int32_t t61 = -19714826;

	t61 = ((x269<(x270^x271))-x272);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = 6534062U;
	int64_t x279 = 369421LL;
	static int16_t x280 = 7;
	static volatile int32_t t62 = -13337;

	t62 = ((x277<(x278^x279))-x280);

	if (t62 != -6) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = 0;
	volatile uint64_t x282 = 2164149LLU;
	uint64_t x283 = 216031LLU;
	int32_t x284 = INT32_MAX;
	volatile int32_t t63 = 1658;

	t63 = ((x281<(x282^x283))-x284);

	if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x285 = INT16_MAX;
	int8_t x287 = -12;
	volatile int16_t x288 = -1;
	volatile int32_t t64 = -292;

	t64 = ((x285<(x286^x287))-x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -2;
	int32_t t65 = 239171;

	t65 = ((x293<(x294^x295))-x296);

	if (t65 != -49533) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x297 = 68U;

	t66 = ((x297<(x298^x299))-x300);

	if (t66 != 32769) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 18841509858LL;
	int64_t x302 = -1LL;
	static int32_t x303 = 801;
	static uint64_t x304 = 160448869097LLU;
	static volatile uint64_t t67 = 3139294518153369822LLU;

	t67 = ((x301<(x302^x303))-x304);

	if (t67 != 18446743913260682519LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x305 = 0;
	volatile int16_t x306 = INT16_MIN;
	int8_t x307 = -5;
	static int16_t x308 = INT16_MIN;
	static int32_t t68 = -984;

	t68 = ((x305<(x306^x307))-x308);

	if (t68 != 32769) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	static int32_t t69 = -4595922;

	t69 = ((x309<(x310^x311))-x312);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x313 = 127U;
	uint32_t x314 = 2U;
	int64_t x315 = INT64_MIN;
	volatile int8_t x316 = -1;

	t70 = ((x313<(x314^x315))-x316);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x317 = 338U;
	int16_t x319 = INT16_MIN;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t71 = -136;

	t71 = ((x317<(x318^x319))-x320);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x323 = INT16_MAX;
	uint64_t x324 = 710LLU;
	volatile uint64_t t72 = 67496539074245755LLU;

	t72 = ((x321<(x322^x323))-x324);

	if (t72 != 18446744073709550906LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x325 = UINT16_MAX;
	int64_t x327 = INT64_MIN;
	volatile int64_t t73 = 6497LL;

	t73 = ((x325<(x326^x327))-x328);

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x329 = INT32_MAX;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -276205877136LL;
	static uint8_t x332 = 45U;
	int32_t t74 = -23;

	t74 = ((x329<(x330^x331))-x332);

	if (t74 != -44) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = -1037658676;
	int8_t x334 = -4;
	static uint8_t x335 = 82U;
	int32_t x336 = 101581825;
	static int32_t t75 = 41666;

	t75 = ((x333<(x334^x335))-x336);

	if (t75 != -101581824) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = 122794917U;
	int8_t x338 = -24;
	static uint8_t x339 = 3U;
	int16_t x340 = INT16_MAX;

	t76 = ((x337<(x338^x339))-x340);

	if (t76 != -32766) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = 4071U;
	uint8_t x347 = 3U;
	static uint32_t x348 = 564396603U;
	uint32_t t77 = 33U;

	t77 = ((x345<(x346^x347))-x348);

	if (t77 != 3730570693U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x354 = UINT32_MAX;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t78 = 4907;

	t78 = ((x353<(x354^x355))-x356);

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x357 = INT64_MIN;
	static uint32_t x358 = 48U;
	volatile uint32_t x359 = 28918827U;
	uint32_t x360 = 23276U;
	static uint32_t t79 = 158132549U;

	t79 = ((x357<(x358^x359))-x360);

	if (t79 != 4294944021U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 115U;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 865957495962025LLU;
	static volatile uint64_t t80 = 6458345711LLU;

	t80 = ((x361<(x362^x363))-x364);

	if (t80 != 18445878116213589591LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x366 = UINT16_MAX;
	uint64_t x367 = UINT64_MAX;
	int32_t t81 = -337912885;

	t81 = ((x365<(x366^x367))-x368);

	if (t81 != 234395) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	volatile int32_t t82 = 343914;

	t82 = ((x369<(x370^x371))-x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x373 = INT16_MAX;
	int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	uint16_t x376 = 5U;
	int32_t t83 = -64884720;

	t83 = ((x373<(x374^x375))-x376);

	if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = 10LLU;
	static uint16_t x378 = 141U;
	uint64_t x380 = UINT64_MAX;

	t84 = ((x377<(x378^x379))-x380);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x382 = -1;
	int64_t x383 = 453LL;
	int8_t x384 = -1;
	volatile int32_t t85 = -21;

	t85 = ((x381<(x382^x383))-x384);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = -1;
	uint8_t x386 = 0U;
	static int32_t x387 = INT32_MIN;
	int16_t x388 = 1981;
	static int32_t t86 = -355648846;

	t86 = ((x385<(x386^x387))-x388);

	if (t86 != -1981) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x389 = 1;
	volatile uint16_t x391 = UINT16_MAX;
	int16_t x392 = 11613;
	static volatile int32_t t87 = 32;

	t87 = ((x389<(x390^x391))-x392);

	if (t87 != -11612) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x393 = 222757U;
	int8_t x395 = 12;
	static int64_t x396 = -638855LL;
	static volatile int64_t t88 = 30149LL;

	t88 = ((x393<(x394^x395))-x396);

	if (t88 != 638855LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = -1212;
	int16_t x398 = INT16_MAX;
	uint32_t x399 = 39389439U;
	static uint16_t x400 = 0U;
	static volatile int32_t t89 = -11226;

	t89 = ((x397<(x398^x399))-x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x401 = 8;
	int16_t x402 = -550;
	uint8_t x403 = 2U;
	int8_t x404 = 1;
	volatile int32_t t90 = -47;

	t90 = ((x401<(x402^x403))-x404);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x405 = -1;
	uint8_t x408 = UINT8_MAX;
	static int32_t t91 = -254;

	t91 = ((x405<(x406^x407))-x408);

	if (t91 != -254) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	volatile uint32_t x411 = 12690U;
	static int32_t t92 = 0;

	t92 = ((x409<(x410^x411))-x412);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x413 = INT64_MIN;
	uint64_t x414 = 401052848926254833LLU;
	static int64_t x416 = -110922673143058096LL;
	int64_t t93 = -1586422088822288LL;

	t93 = ((x413<(x414^x415))-x416);

	if (t93 != 110922673143058096LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = 34;
	volatile int8_t x419 = -57;
	uint64_t x420 = 0LLU;

	t94 = ((x417<(x418^x419))-x420);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = UINT32_MAX;
	uint16_t x424 = UINT16_MAX;
	static volatile int32_t t95 = -9651;

	t95 = ((x421<(x422^x423))-x424);

	if (t95 != -65535) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x426 = INT64_MAX;
	uint16_t x427 = 11U;
	volatile int32_t t96 = -831839997;

	t96 = ((x425<(x426^x427))-x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = 442U;
	static uint64_t x430 = UINT64_MAX;
	int64_t t97 = -11262LL;

	t97 = ((x429<(x430^x431))-x432);

	if (t97 != -270033170103113363LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x434 = -1;
	static volatile int32_t x435 = 2;
	uint8_t x436 = 51U;
	volatile int32_t t98 = -34;

	t98 = ((x433<(x434^x435))-x436);

	if (t98 != -50) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x437 = INT64_MIN;
	volatile uint8_t x438 = 3U;
	static int16_t x439 = INT16_MIN;
	static int8_t x440 = -1;

	t99 = ((x437<(x438^x439))-x440);

	if (t99 != 2) { NG(); } else { ; }
	
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

