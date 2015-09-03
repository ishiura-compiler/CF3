#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 6105399568205LL;
int8_t x14 = -1;
uint32_t x17 = 17397U;
int16_t x20 = INT16_MIN;
uint32_t x22 = 138995U;
static int64_t x23 = 1755841593607098LL;
uint16_t x24 = UINT16_MAX;
static volatile uint8_t x25 = 12U;
uint32_t x31 = 6U;
static uint32_t x40 = UINT32_MAX;
int64_t t9 = INT64_MAX;
int64_t x50 = INT64_MAX;
int32_t x53 = 10;
uint16_t x54 = 33U;
volatile int32_t t13 = 23977;
int16_t x59 = INT16_MAX;
volatile int32_t t14 = -92;
uint8_t x66 = UINT8_MAX;
uint64_t x86 = UINT64_MAX;
int16_t x99 = INT16_MIN;
uint16_t x107 = 11U;
int16_t x108 = 1430;
int16_t x109 = -1;
static int8_t x110 = -1;
int16_t x113 = 1;
volatile int64_t t28 = -11241807564LL;
int8_t x117 = INT8_MIN;
int32_t x120 = INT32_MIN;
uint8_t x132 = UINT8_MAX;
uint16_t x138 = UINT16_MAX;
volatile int16_t x143 = INT16_MAX;
int32_t t35 = 1410;
uint8_t x148 = 2U;
static volatile int64_t x149 = 33582LL;
int64_t x150 = -128297708LL;
int64_t x157 = INT64_MIN;
int16_t x160 = INT16_MIN;
volatile int64_t t40 = 4LL;
uint64_t t42 = 885LLU;
int8_t x175 = -1;
int32_t x179 = INT32_MIN;
volatile uint64_t t44 = 7530758844116672429LLU;
int64_t x181 = INT64_MAX;
volatile int8_t x185 = 0;
int8_t x192 = INT8_MIN;
int64_t t48 = INT64_MIN;
volatile int16_t x197 = INT16_MIN;
volatile int16_t x199 = INT16_MIN;
volatile int8_t x206 = 3;
static int32_t x211 = 34773;
static int64_t x212 = -10628897292912605LL;
volatile int64_t t53 = -1075989175199526885LL;
uint16_t x221 = 16U;
static int32_t x225 = INT32_MIN;
int64_t x228 = 501877826LL;
int32_t x233 = -1;
int8_t x240 = INT8_MIN;
volatile int32_t x255 = INT32_MIN;
uint16_t x258 = 3U;
int8_t x265 = INT8_MIN;
volatile int32_t t66 = INT32_MIN;
uint64_t x274 = UINT64_MAX;
int8_t x283 = -1;
int64_t t71 = INT64_MIN;
int16_t x290 = INT16_MIN;
static int32_t t72 = INT32_MIN;
int32_t t73 = -3184;
int64_t x298 = 403939009652954606LL;
volatile int64_t x306 = INT64_MIN;
int64_t x311 = INT64_MIN;
volatile int16_t x314 = -1;
int8_t x318 = INT8_MAX;
volatile uint64_t t79 = 35404811LLU;
static int8_t x322 = -1;
int8_t x325 = -1;
volatile int32_t t82 = 239;
static int32_t x333 = INT32_MIN;
static int32_t x335 = INT32_MIN;
static uint8_t x338 = 10U;
static int64_t t84 = 117521LL;
int64_t x341 = 6LL;
int32_t x348 = -1;
static int32_t x352 = 888776314;
int32_t x355 = INT32_MIN;
int64_t x357 = -1LL;
int8_t x358 = INT8_MIN;
int64_t t89 = 1LL;
uint8_t x364 = 30U;
uint32_t x368 = 34U;
int16_t x371 = -1;
volatile int64_t x373 = INT64_MIN;
static int64_t t94 = 0LL;
int64_t x381 = INT64_MIN;
volatile int64_t x382 = -811461291627516LL;
static uint16_t x395 = 1U;
uint64_t t98 = 47LLU;
static int64_t x400 = INT64_MIN;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	static int16_t x2 = INT16_MAX;
	static int16_t x3 = -1;
	int16_t x4 = -26;
	static volatile int32_t t0 = -102;

	t0 = ((x1&x2)+(x3==x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint32_t x7 = UINT32_MAX;
	uint16_t x8 = 9233U;
	volatile int64_t t1 = -685668018LL;

	t1 = ((x5&x6)+(x7==x8));

	if (t1 != 6105399568205LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 6;
	volatile int64_t x10 = -1179448077153266303LL;
	int8_t x11 = -3;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 1617228LL;

	t2 = ((x9&x10)+(x11==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x15 = 2518;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = INT64_MIN;

	t3 = ((x13&x14)+(x15==x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 53U;
	int8_t x19 = -40;
	volatile uint32_t t4 = 17664U;

	t4 = ((x17&x18)+(x19==x20));

	if (t4 != 53U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t t5 = 22561U;

	t5 = ((x21&x22)+(x23==x24));

	if (t5 != 138880U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MAX;
	static uint64_t x27 = 368798480451686LLU;
	int32_t x28 = -1;
	volatile int32_t t6 = 270105;

	t6 = ((x25&x26)+(x27==x28));

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	static uint8_t x30 = UINT8_MAX;
	uint32_t x32 = 12U;
	int32_t t7 = -54;

	t7 = ((x29&x30)+(x31==x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 1U;
	static int8_t x34 = -1;
	int8_t x35 = -1;
	volatile uint16_t x36 = 1883U;
	volatile int32_t t8 = -10412;

	t8 = ((x33&x34)+(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int64_t x38 = INT64_MAX;
	int32_t x39 = INT32_MIN;

	t9 = ((x37&x38)+(x39==x40));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	uint8_t x42 = 0U;
	static volatile int64_t x43 = -1LL;
	int64_t x44 = -4965651LL;
	volatile int32_t t10 = -203109;

	t10 = ((x41&x42)+(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 3U;
	static int64_t x46 = INT64_MAX;
	int8_t x47 = 55;
	int32_t x48 = -1;
	volatile int64_t t11 = 3LL;

	t11 = ((x45&x46)+(x47==x48));

	if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 28LLU;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 7173U;
	static uint64_t t12 = 702992030LLU;

	t12 = ((x49&x50)+(x51==x52));

	if (t12 != 28LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x55 = 2U;
	uint16_t x56 = UINT16_MAX;

	t13 = ((x53&x54)+(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile uint8_t x58 = 0U;
	int8_t x60 = 3;

	t14 = ((x57&x58)+(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 493U;
	uint32_t x62 = 222448U;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = 103U;
	volatile uint32_t t15 = 1U;

	t15 = ((x61&x62)+(x63==x64));

	if (t15 != 224U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 0U;
	int16_t x67 = -7024;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 876;

	t16 = ((x65&x66)+(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = -1;
	volatile uint32_t x71 = 3U;
	uint8_t x72 = 55U;
	volatile int32_t t17 = -5;

	t17 = ((x69&x70)+(x71==x72));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 376U;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	int32_t x76 = 5691913;
	uint32_t t18 = 48495342U;

	t18 = ((x73&x74)+(x75==x76));

	if (t18 != 256U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 11U;
	volatile int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;
	static uint32_t t19 = 2523955U;

	t19 = ((x77&x78)+(x79==x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = 1694U;
	int32_t t20 = -819;

	t20 = ((x81&x82)+(x83==x84));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x87 = INT16_MIN;
	volatile int32_t x88 = INT32_MAX;
	uint64_t t21 = 11028807665LLU;

	t21 = ((x85&x86)+(x87==x88));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile uint32_t x90 = 667882U;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	volatile uint32_t t22 = 1013U;

	t22 = ((x89&x90)+(x91==x92));

	if (t22 != 667776U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MIN;
	volatile uint64_t x95 = 27511226LLU;
	int16_t x96 = INT16_MAX;
	int64_t t23 = INT64_MIN;

	t23 = ((x93&x94)+(x95==x96));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 5;
	uint32_t x98 = 1U;
	uint64_t x100 = UINT64_MAX;
	static volatile uint32_t t24 = 34172U;

	t24 = ((x97&x98)+(x99==x100));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	static volatile int16_t x102 = INT16_MAX;
	static int64_t x103 = INT64_MAX;
	uint16_t x104 = 10U;
	volatile int32_t t25 = -245728552;

	t25 = ((x101&x102)+(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = ((x105&x106)+(x107==x108));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x111 = -1LL;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 284998785;

	t27 = ((x109&x110)+(x111==x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;

	t28 = ((x113&x114)+(x115==x116));

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x118 = INT16_MIN;
	static int16_t x119 = -287;
	static volatile int32_t t29 = -292637;

	t29 = ((x117&x118)+(x119==x120));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MAX;
	uint32_t x124 = 2793U;
	static uint32_t t30 = 1533810456U;

	t30 = ((x121&x122)+(x123==x124));

	if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 2010456925936683432LLU;
	static int64_t x127 = INT64_MIN;
	static uint64_t x128 = 2197LLU;
	volatile uint64_t t31 = 1329546543132627LLU;

	t31 = ((x125&x126)+(x127==x128));

	if (t31 != 447613352LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int64_t x130 = -1LL;
	int64_t x131 = INT64_MAX;
	volatile int64_t t32 = -679709743203747797LL;

	t32 = ((x129&x130)+(x131==x132));

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 191U;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = 65110LLU;
	int64_t x136 = INT64_MIN;
	uint32_t t33 = 647460126U;

	t33 = ((x133&x134)+(x135==x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	uint64_t x139 = UINT64_MAX;
	uint64_t x140 = 9LLU;
	volatile int32_t t34 = 0;

	t34 = ((x137&x138)+(x139==x140));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 15U;
	uint16_t x142 = 0U;
	int16_t x144 = -47;

	t35 = ((x141&x142)+(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 84U;
	volatile uint16_t x146 = 2U;
	int8_t x147 = INT8_MAX;
	int32_t t36 = 46940909;

	t36 = ((x145&x146)+(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = INT32_MAX;
	uint32_t x152 = 0U;
	static volatile int64_t t37 = 362435112034043LL;

	t37 = ((x149&x150)+(x151==x152));

	if (t37 != 260LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 42U;
	volatile uint16_t x154 = 2U;
	int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t38 = 162765U;

	t38 = ((x153&x154)+(x155==x156));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x158 = UINT16_MAX;
	uint8_t x159 = 0U;
	int64_t t39 = -570317678732484232LL;

	t39 = ((x157&x158)+(x159==x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	int64_t x163 = 40LL;
	int64_t x164 = INT64_MIN;

	t40 = ((x161&x162)+(x163==x164));

	if (t40 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = -30;
	static uint16_t x166 = 12U;
	volatile int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 27968;

	t41 = ((x165&x166)+(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -1;
	uint64_t x170 = 708LLU;
	int64_t x171 = INT64_MAX;
	volatile int16_t x172 = INT16_MAX;

	t42 = ((x169&x170)+(x171==x172));

	if (t42 != 708LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile uint32_t t43 = 345935U;

	t43 = ((x173&x174)+(x175==x176));

	if (t43 != 4294967168U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x178 = 6782841293LLU;
	static int8_t x180 = INT8_MAX;

	t44 = ((x177&x178)+(x179==x180));

	if (t44 != 6782841216LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = 18650858865463013LLU;
	volatile int64_t x183 = 2139771591581599912LL;
	static volatile int64_t x184 = 652825LL;
	uint64_t t45 = 5194LLU;

	t45 = ((x181&x182)+(x183==x184));

	if (t45 != 18650858865463013LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;
	static int64_t x187 = INT64_MAX;
	uint64_t x188 = 68699398521593442LLU;
	volatile int64_t t46 = 1LL;

	t46 = ((x185&x186)+(x187==x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	volatile uint16_t x190 = 7U;
	int8_t x191 = INT8_MAX;
	int32_t t47 = -1002630;

	t47 = ((x189&x190)+(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static int64_t x194 = -2372LL;
	int64_t x195 = -7900337344LL;
	uint8_t x196 = 3U;

	t48 = ((x193&x194)+(x195==x196));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x198 = INT64_MAX;
	uint64_t x200 = 4001118568434LLU;
	static int64_t t49 = 30854425024LL;

	t49 = ((x197&x198)+(x199==x200));

	if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static uint32_t x202 = 695U;
	int8_t x203 = INT8_MIN;
	static volatile int16_t x204 = INT16_MIN;
	static volatile uint32_t t50 = 5359U;

	t50 = ((x201&x202)+(x203==x204));

	if (t50 != 55U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	volatile int64_t x207 = 199694LL;
	uint16_t x208 = 4U;
	volatile int32_t t51 = 219737;

	t51 = ((x205&x206)+(x207==x208));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	static int32_t t52 = 24469342;

	t52 = ((x209&x210)+(x211==x212));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	static int8_t x214 = 29;
	volatile int16_t x215 = 744;
	int16_t x216 = -1;

	t53 = ((x213&x214)+(x215==x216));

	if (t53 != 29LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MAX;
	static int16_t x218 = -1;
	int16_t x219 = INT16_MAX;
	volatile int8_t x220 = -3;
	int32_t t54 = -8;

	t54 = ((x217&x218)+(x219==x220));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 521762641U;
	uint32_t x224 = 48U;
	volatile int32_t t55 = -1;

	t55 = ((x221&x222)+(x223==x224));

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x226 = INT64_MIN;
	uint16_t x227 = 12336U;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x225&x226)+(x227==x228));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile uint16_t x230 = 14846U;
	int16_t x231 = INT16_MIN;
	int8_t x232 = 10;
	volatile int32_t t57 = 158946875;

	t57 = ((x229&x230)+(x231==x232));

	if (t57 != 14720) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = 23458345LL;
	volatile int16_t x235 = -65;
	uint64_t x236 = 2065105706343667LLU;
	volatile int64_t t58 = -20864865LL;

	t58 = ((x233&x234)+(x235==x236));

	if (t58 != 23458345LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 8;
	uint8_t x238 = 1U;
	static uint64_t x239 = 0LLU;
	volatile int32_t t59 = 21510349;

	t59 = ((x237&x238)+(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 1;
	int8_t x242 = INT8_MAX;
	uint32_t x243 = 4327709U;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -697654;

	t60 = ((x241&x242)+(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	int64_t x246 = -1LL;
	int64_t x247 = -1LL;
	volatile int64_t x248 = INT64_MAX;
	int64_t t61 = 0LL;

	t61 = ((x245&x246)+(x247==x248));

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	static uint64_t x250 = 9507368475LLU;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = 690522U;
	static volatile uint64_t t62 = 22447LLU;

	t62 = ((x249&x250)+(x251==x252));

	if (t62 != 9507368475LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	volatile int16_t x254 = 3769;
	uint16_t x256 = 5507U;
	int64_t t63 = -10714744LL;

	t63 = ((x253&x254)+(x255==x256));

	if (t63 != 3769LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -1;
	static volatile int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = UINT32_MAX;
	int32_t t64 = -2254;

	t64 = ((x257&x258)+(x259==x260));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = 6000336893365513812LLU;
	int32_t x263 = -9074967;
	volatile int16_t x264 = 10;
	volatile uint64_t t65 = 941682177684LLU;

	t65 = ((x261&x262)+(x263==x264));

	if (t65 != 96005716LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MIN;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = INT64_MIN;

	t66 = ((x265&x266)+(x267==x268));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	static uint8_t x270 = 5U;
	static uint32_t x271 = 930044994U;
	int16_t x272 = -579;
	volatile int32_t t67 = -1;

	t67 = ((x269&x270)+(x271==x272));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x275 = INT32_MIN;
	int16_t x276 = 125;
	static uint64_t t68 = 2828247636516LLU;

	t68 = ((x273&x274)+(x275==x276));

	if (t68 != 65535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	static volatile int8_t x279 = 8;
	static int64_t x280 = -1LL;
	int64_t t69 = 40785154LL;

	t69 = ((x277&x278)+(x279==x280));

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = 2LL;
	volatile uint32_t x282 = UINT32_MAX;
	int16_t x284 = -1;
	volatile int64_t t70 = 3438174862949127558LL;

	t70 = ((x281&x282)+(x283==x284));

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = -3;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -1;

	t71 = ((x285&x286)+(x287==x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	volatile uint32_t x292 = 40U;

	t72 = ((x289&x290)+(x291==x292));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = -1003562;
	int64_t x295 = INT64_MAX;
	int16_t x296 = 1475;

	t73 = ((x293&x294)+(x295==x296));

	if (t73 != -1015808) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x297 = INT16_MIN;
	static int16_t x299 = INT16_MAX;
	volatile int32_t x300 = -3556950;
	volatile int64_t t74 = 358125LL;

	t74 = ((x297&x298)+(x299==x300));

	if (t74 != 403939009652948992LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 23;
	static int16_t x302 = INT16_MIN;
	volatile int64_t x303 = -1LL;
	volatile uint8_t x304 = 1U;
	volatile int32_t t75 = -275561;

	t75 = ((x301&x302)+(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x307 = INT16_MAX;
	uint32_t x308 = UINT32_MAX;
	int64_t t76 = INT64_MIN;

	t76 = ((x305&x306)+(x307==x308));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	int32_t x310 = INT32_MAX;
	uint64_t x312 = 1987717858877775797LLU;
	volatile int32_t t77 = INT32_MAX;

	t77 = ((x309&x310)+(x311==x312));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	uint32_t x315 = 489172U;
	static volatile int16_t x316 = -167;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x313&x314)+(x315==x316));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	static volatile uint32_t x319 = UINT32_MAX;
	uint32_t x320 = UINT32_MAX;

	t79 = ((x317&x318)+(x319==x320));

	if (t79 != 128LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	int8_t x323 = -1;
	uint8_t x324 = 96U;
	volatile int32_t t80 = 8330782;

	t80 = ((x321&x322)+(x323==x324));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x326 = UINT64_MAX;
	int32_t x327 = 10081908;
	int64_t x328 = 1661667457LL;
	static uint64_t t81 = UINT64_MAX;

	t81 = ((x325&x326)+(x327==x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -1;
	int32_t x330 = -1;
	uint64_t x331 = 216LLU;
	int64_t x332 = INT64_MIN;

	t82 = ((x329&x330)+(x331==x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 2362;

	t83 = ((x333&x334)+(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 395167894969548186LL;
	static int32_t x339 = -1;
	uint64_t x340 = 21975LLU;

	t84 = ((x337&x338)+(x339==x340));

	if (t84 != 10LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = -1;
	int16_t x343 = INT16_MAX;
	int64_t x344 = INT64_MAX;
	volatile int64_t t85 = 0LL;

	t85 = ((x341&x342)+(x343==x344));

	if (t85 != 6LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -27;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -1LL;
	int32_t t86 = 48518;

	t86 = ((x345&x346)+(x347==x348));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = INT16_MAX;
	int32_t t87 = -88002;

	t87 = ((x349&x350)+(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = 1;
	int32_t x354 = -3;
	int8_t x356 = INT8_MAX;
	int32_t t88 = 6;

	t88 = ((x353&x354)+(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x359 = INT64_MAX;
	uint32_t x360 = UINT32_MAX;

	t89 = ((x357&x358)+(x359==x360));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -80;
	volatile uint64_t x362 = 4700LLU;
	int8_t x363 = INT8_MAX;
	uint64_t t90 = 0LLU;

	t90 = ((x361&x362)+(x363==x364));

	if (t90 != 4624LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x366 = INT64_MAX;
	int16_t x367 = INT16_MIN;
	volatile int64_t t91 = -944335158716LL;

	t91 = ((x365&x366)+(x367==x368));

	if (t91 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 107U;
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	static int32_t t92 = 42232;

	t92 = ((x369&x370)+(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 35U;
	int8_t x375 = 11;
	int64_t x376 = INT64_MIN;
	volatile int64_t t93 = -2939074219729397LL;

	t93 = ((x373&x374)+(x375==x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 11018U;
	static int64_t x378 = INT64_MIN;
	volatile int8_t x379 = -16;
	int8_t x380 = -1;

	t94 = ((x377&x378)+(x379==x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x383 = -1;
	int32_t x384 = INT32_MIN;
	int64_t t95 = INT64_MIN;

	t95 = ((x381&x382)+(x383==x384));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	int64_t x387 = -2LL;
	int8_t x388 = INT8_MAX;
	int64_t t96 = -20027722293LL;

	t96 = ((x385&x386)+(x387==x388));

	if (t96 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	volatile int8_t x392 = INT8_MAX;
	volatile int32_t t97 = 42616487;

	t97 = ((x389&x390)+(x391==x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = UINT16_MAX;
	static uint64_t x394 = UINT64_MAX;
	static int64_t x396 = -1LL;

	t98 = ((x393&x394)+(x395==x396));

	if (t98 != 65535LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = -17174;
	uint32_t x399 = 5U;
	static int64_t t99 = INT64_MIN;

	t99 = ((x397&x398)+(x399==x400));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

