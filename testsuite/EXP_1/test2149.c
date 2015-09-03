#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x7 = 1354261339LL;
int32_t x8 = INT32_MIN;
int32_t x9 = -15;
volatile int32_t t2 = -5;
int16_t x21 = 94;
uint16_t x22 = 37U;
int32_t x25 = 1746453;
int64_t x26 = INT64_MIN;
uint16_t x29 = 11U;
static volatile uint64_t t8 = 32092148034630680LLU;
int64_t x40 = -1981LL;
uint64_t x42 = 168399LLU;
int16_t x44 = INT16_MIN;
static volatile int16_t x46 = -1;
static volatile int16_t x47 = -3;
volatile int8_t x48 = 1;
int32_t x51 = 8025576;
static volatile int32_t t12 = 753;
static int32_t t13 = -2009986;
static int8_t x57 = INT8_MIN;
static int64_t x60 = INT64_MAX;
int16_t x69 = INT16_MIN;
int32_t x73 = INT32_MAX;
int32_t x77 = INT32_MAX;
volatile int8_t x78 = INT8_MAX;
volatile int8_t x81 = INT8_MAX;
uint64_t x82 = 10887620279608LLU;
int8_t x83 = INT8_MIN;
int64_t x85 = -1064839LL;
int32_t x90 = -8;
int32_t t22 = 3897797;
int32_t t23 = 4;
volatile int16_t x105 = INT16_MIN;
int32_t t27 = 12253946;
uint32_t t28 = 64829564U;
int8_t x131 = -1;
int8_t x135 = INT8_MIN;
int32_t t31 = -42870;
int8_t x143 = 1;
volatile int64_t x148 = INT64_MAX;
static volatile uint8_t x149 = UINT8_MAX;
int8_t x175 = -1;
int32_t x180 = 2;
static volatile int64_t x183 = INT64_MIN;
int8_t x184 = INT8_MIN;
volatile int32_t t47 = -1;
volatile int32_t t48 = 805725280;
int16_t x210 = -1;
int8_t x211 = 3;
int32_t t50 = 503697464;
int8_t x219 = INT8_MIN;
int32_t t53 = 31;
static volatile uint64_t x230 = 998499088957558LLU;
static uint64_t x236 = 1029189086170405101LLU;
volatile int8_t x252 = INT8_MAX;
volatile int32_t x258 = INT32_MIN;
int16_t x261 = 2776;
int16_t x262 = INT16_MAX;
static int64_t t61 = 1411994LL;
int8_t x267 = 3;
int8_t x271 = INT8_MIN;
int32_t t63 = 2767;
volatile int8_t x273 = 1;
int64_t x275 = -25766407732545LL;
int16_t x276 = INT16_MAX;
volatile int32_t t65 = 2;
int16_t x284 = INT16_MIN;
int64_t x288 = -1LL;
int32_t x295 = -29457;
uint64_t x297 = 23095760LLU;
static int32_t x300 = -110059;
uint16_t x301 = 445U;
volatile int64_t x305 = 1730489LL;
volatile int32_t x308 = INT32_MIN;
static volatile int64_t x314 = INT64_MIN;
uint64_t x315 = 168048LLU;
static int16_t x316 = INT16_MAX;
static uint32_t x320 = UINT32_MAX;
int32_t x327 = -1;
int64_t t77 = 8835908725709169LL;
int16_t x331 = INT16_MIN;
int32_t t78 = -2;
uint8_t x333 = UINT8_MAX;
int16_t x336 = -1;
int16_t x339 = 3;
volatile int32_t t80 = 28006719;
static int32_t x360 = -1;
int32_t t87 = 0;
uint16_t x379 = UINT16_MAX;
int16_t x381 = -1;
uint8_t x388 = 58U;
uint16_t x391 = 3U;
static int16_t x403 = -1;
static int8_t x406 = -1;
uint64_t t98 = 208053832211786LLU;
int64_t x414 = INT64_MIN;
int16_t x415 = 3471;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -1;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 73674LL;

	t0 = (((x1^x2)<=x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	volatile int64_t x6 = INT64_MIN;
	volatile int32_t t1 = 234;

	t1 = (((x5^x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -17;
	volatile int16_t x11 = 5;
	int16_t x12 = -1;

	t2 = (((x9^x10)<=x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 0U;
	static uint32_t x14 = UINT32_MAX;
	static int8_t x15 = -1;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 19LL;

	t3 = (((x13^x14)<=x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 903U;
	volatile int16_t x18 = INT16_MIN;
	static uint32_t x19 = UINT32_MAX;
	int32_t x20 = 4;
	static volatile int32_t t4 = 292515;

	t4 = (((x17^x18)<=x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 965222493;

	t5 = (((x21^x22)<=x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x27 = 48U;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 4;

	t6 = (((x25^x26)<=x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 527178041;

	t7 = (((x29^x30)<=x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 33LLU;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = 637410748881489016LLU;

	t8 = (((x33^x34)<=x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int8_t x38 = INT8_MIN;
	volatile int16_t x39 = INT16_MAX;
	volatile int64_t t9 = -85139559569LL;

	t9 = (((x37^x38)<=x39)/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 56U;
	int32_t x43 = INT32_MIN;
	volatile int32_t t10 = 3616;

	t10 = (((x41^x42)<=x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 13051;
	int32_t t11 = -862754242;

	t11 = (((x45^x46)<=x47)/x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int16_t x50 = INT16_MAX;
	int8_t x52 = -1;

	t12 = (((x49^x50)<=x51)/x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 7LLU;
	static int8_t x54 = INT8_MAX;
	volatile uint64_t x55 = 197LLU;
	volatile int8_t x56 = -1;

	t13 = (((x53^x54)<=x55)/x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = UINT32_MAX;
	volatile uint64_t x59 = 229130742LLU;
	int64_t t14 = -431237LL;

	t14 = (((x57^x58)<=x59)/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = 900871681LL;
	uint64_t x66 = 2396784199LLU;
	int8_t x67 = 0;
	volatile uint8_t x68 = UINT8_MAX;
	static int32_t t15 = 1050776;

	t15 = (((x65^x66)<=x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x70 = 237747;
	int64_t x71 = INT64_MIN;
	int64_t x72 = 44766057759LL;
	static int64_t t16 = -196562LL;

	t16 = (((x69^x70)<=x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = 2;
	int32_t x75 = -1706;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -15524564;

	t17 = (((x73^x74)<=x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x79 = INT64_MIN;
	uint8_t x80 = UINT8_MAX;
	int32_t t18 = 44219976;

	t18 = (((x77^x78)<=x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x84 = 9;
	int32_t t19 = 256107;

	t19 = (((x81^x82)<=x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x86 = 57U;
	uint8_t x87 = 16U;
	static uint16_t x88 = 12717U;
	static volatile int32_t t20 = -491740453;

	t20 = (((x85^x86)<=x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MIN;
	static uint32_t x91 = 1177614156U;
	int32_t x92 = INT32_MAX;
	volatile int32_t t21 = 186486804;

	t21 = (((x89^x90)<=x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	static volatile int8_t x94 = INT8_MIN;
	static uint8_t x95 = UINT8_MAX;
	uint8_t x96 = UINT8_MAX;

	t22 = (((x93^x94)<=x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 19;
	volatile int64_t x98 = INT64_MIN;
	volatile uint8_t x99 = 94U;
	int16_t x100 = 91;

	t23 = (((x97^x98)<=x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x101 = -281042LL;
	uint32_t x102 = UINT32_MAX;
	volatile int8_t x103 = -1;
	volatile int64_t x104 = -1LL;
	int64_t t24 = -91244826991LL;

	t24 = (((x101^x102)<=x103)/x104);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = -1;
	int64_t x107 = -1LL;
	uint64_t x108 = 871773847873421LLU;
	static uint64_t t25 = 393LLU;

	t25 = (((x105^x106)<=x107)/x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x109 = -1;
	int16_t x110 = -12665;
	int64_t x111 = INT64_MIN;
	int64_t x112 = -1LL;
	static int64_t t26 = 99993734LL;

	t26 = (((x109^x110)<=x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = 1013;
	int32_t x115 = -1;
	int32_t x116 = INT32_MIN;

	t27 = (((x113^x114)<=x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	volatile int64_t x118 = INT64_MIN;
	volatile int64_t x119 = -65117998626735LL;
	uint32_t x120 = UINT32_MAX;

	t28 = (((x117^x118)<=x119)/x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	int64_t x132 = INT64_MIN;
	static volatile int64_t t29 = 808LL;

	t29 = (((x129^x130)<=x131)/x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -10;
	int16_t x134 = -1;
	static uint16_t x136 = UINT16_MAX;
	int32_t t30 = 14120;

	t30 = (((x133^x134)<=x135)/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	uint8_t x138 = 2U;
	int8_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;

	t31 = (((x137^x138)<=x139)/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	int64_t x142 = -1LL;
	volatile int32_t x144 = INT32_MAX;
	int32_t t32 = 220;

	t32 = (((x141^x142)<=x143)/x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = 258;
	int32_t x146 = 1847;
	static int32_t x147 = INT32_MIN;
	int64_t t33 = 450099LL;

	t33 = (((x145^x146)<=x147)/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x150 = -1;
	static int64_t x151 = INT64_MAX;
	static volatile int8_t x152 = INT8_MIN;
	int32_t t34 = -8280526;

	t34 = (((x149^x150)<=x151)/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 1712;
	static uint8_t x154 = 127U;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = -444;
	static volatile int32_t t35 = -6560;

	t35 = (((x153^x154)<=x155)/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x157 = -62;
	int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t36 = -3609;

	t36 = (((x157^x158)<=x159)/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = -1;
	static int64_t x163 = -667576LL;
	static volatile int16_t x164 = -1;
	static volatile int32_t t37 = -116683;

	t37 = (((x161^x162)<=x163)/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = UINT8_MAX;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	volatile int8_t x168 = -2;
	int32_t t38 = 15790523;

	t38 = (((x165^x166)<=x167)/x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x169 = 2U;
	int32_t x170 = INT32_MIN;
	static int16_t x171 = 125;
	int8_t x172 = INT8_MAX;
	volatile int32_t t39 = -3285;

	t39 = (((x169^x170)<=x171)/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x173 = INT32_MAX;
	uint8_t x174 = 3U;
	int32_t x176 = INT32_MAX;
	int32_t t40 = 473755;

	t40 = (((x173^x174)<=x175)/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -2;
	volatile int8_t x178 = -1;
	volatile uint32_t x179 = 13U;
	int32_t t41 = -1557;

	t41 = (((x177^x178)<=x179)/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	int16_t x182 = -1;
	int32_t t42 = -31263;

	t42 = (((x181^x182)<=x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile int16_t x186 = INT16_MIN;
	static volatile int64_t x187 = -1LL;
	int8_t x188 = -1;
	volatile int32_t t43 = 21;

	t43 = (((x185^x186)<=x187)/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x189 = UINT8_MAX;
	uint64_t x190 = 1166580006789292469LLU;
	int16_t x191 = 7;
	static int16_t x192 = -1;
	int32_t t44 = 4;

	t44 = (((x189^x190)<=x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile uint8_t x194 = UINT8_MAX;
	uint8_t x195 = UINT8_MAX;
	static int16_t x196 = 53;
	static volatile int32_t t45 = -4;

	t45 = (((x193^x194)<=x195)/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x197 = 1U;
	int16_t x198 = -10567;
	uint16_t x199 = 80U;
	int32_t x200 = -29;
	volatile int32_t t46 = 2621723;

	t46 = (((x197^x198)<=x199)/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x201 = -14;
	int16_t x202 = -1;
	volatile int8_t x203 = -1;
	static volatile int8_t x204 = 1;

	t47 = (((x201^x202)<=x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MIN;
	static int16_t x206 = -1;
	volatile int32_t x207 = -11685;
	int32_t x208 = -119247941;

	t48 = (((x205^x206)<=x207)/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = 32;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t49 = 8;

	t49 = (((x209^x210)<=x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = UINT64_MAX;
	uint8_t x214 = 17U;
	volatile uint64_t x215 = 51144LLU;
	static volatile int8_t x216 = -1;

	t50 = (((x213^x214)<=x215)/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = INT16_MAX;
	int16_t x218 = -1946;
	uint64_t x220 = UINT64_MAX;
	static uint64_t t51 = 3617867687955544023LLU;

	t51 = (((x217^x218)<=x219)/x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = -38;
	int64_t x223 = INT64_MAX;
	int64_t x224 = -1LL;
	static volatile int64_t t52 = -1841588433LL;

	t52 = (((x221^x222)<=x223)/x224);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -1;
	static volatile uint64_t x226 = UINT64_MAX;
	volatile int64_t x227 = -1LL;
	volatile uint8_t x228 = 1U;

	t53 = (((x225^x226)<=x227)/x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x229 = INT32_MIN;
	uint64_t x231 = 1000733988LLU;
	static uint16_t x232 = 32U;
	volatile int32_t t54 = -3490284;

	t54 = (((x229^x230)<=x231)/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MIN;
	int8_t x234 = -1;
	volatile uint64_t x235 = UINT64_MAX;
	uint64_t t55 = 50340602LLU;

	t55 = (((x233^x234)<=x235)/x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -15;
	uint16_t x238 = 0U;
	static int8_t x239 = -2;
	int16_t x240 = -1;
	volatile int32_t t56 = -332;

	t56 = (((x237^x238)<=x239)/x240);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 30576U;
	static volatile int32_t x246 = -1;
	int8_t x247 = -4;
	uint32_t x248 = 5U;
	uint32_t t57 = 354788617U;

	t57 = (((x245^x246)<=x247)/x248);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = -3995;
	static int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	int32_t t58 = -44088;

	t58 = (((x249^x250)<=x251)/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = 6682;
	int16_t x254 = -17;
	uint32_t x255 = 5U;
	static int32_t x256 = INT32_MAX;
	int32_t t59 = -1;

	t59 = (((x253^x254)<=x255)/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x259 = 3899833;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t60 = -9192090;

	t60 = (((x257^x258)<=x259)/x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = -1LL;

	t61 = (((x261^x262)<=x263)/x264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x265 = UINT64_MAX;
	static uint32_t x266 = UINT32_MAX;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t62 = 339;

	t62 = (((x265^x266)<=x267)/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = UINT64_MAX;
	static uint32_t x270 = UINT32_MAX;
	int16_t x272 = INT16_MAX;

	t63 = (((x269^x270)<=x271)/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x274 = -3LL;
	volatile int32_t t64 = 4631786;

	t64 = (((x273^x274)<=x275)/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x277 = 2U;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -1;
	uint8_t x280 = UINT8_MAX;

	t65 = (((x277^x278)<=x279)/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x281 = 2981U;
	int64_t x282 = 181LL;
	static volatile int32_t x283 = -125706;
	int32_t t66 = -137643;

	t66 = (((x281^x282)<=x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MAX;
	static int64_t x286 = INT64_MAX;
	static int32_t x287 = INT32_MIN;
	volatile int64_t t67 = -307099286LL;

	t67 = (((x285^x286)<=x287)/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x289 = -10;
	int16_t x290 = -5960;
	uint32_t x291 = 2U;
	volatile uint64_t x292 = UINT64_MAX;
	volatile uint64_t t68 = 338350238861981LLU;

	t68 = (((x289^x290)<=x291)/x292);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x293 = UINT8_MAX;
	int64_t x294 = -1LL;
	int8_t x296 = INT8_MIN;
	int32_t t69 = -14126399;

	t69 = (((x293^x294)<=x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x298 = 7651;
	int32_t x299 = INT32_MIN;
	volatile int32_t t70 = 1879513;

	t70 = (((x297^x298)<=x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x302 = INT32_MAX;
	static int16_t x303 = 0;
	int32_t x304 = -1;
	volatile int32_t t71 = -500;

	t71 = (((x301^x302)<=x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = 53;
	static volatile uint16_t x307 = 3U;
	int32_t t72 = 39522522;

	t72 = (((x305^x306)<=x307)/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = -3979672;
	int32_t x310 = INT32_MAX;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	volatile int32_t t73 = 3;

	t73 = (((x309^x310)<=x311)/x312);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x313 = UINT8_MAX;
	volatile int32_t t74 = -27;

	t74 = (((x313^x314)<=x315)/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MAX;
	volatile int16_t x318 = INT16_MAX;
	int64_t x319 = -1LL;
	volatile uint32_t t75 = 127368425U;

	t75 = (((x317^x318)<=x319)/x320);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = UINT64_MAX;
	uint8_t x323 = UINT8_MAX;
	static uint8_t x324 = UINT8_MAX;
	volatile int32_t t76 = -397;

	t76 = (((x321^x322)<=x323)/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -1;
	uint64_t x326 = 84660791LLU;
	static int64_t x328 = INT64_MIN;

	t77 = (((x325^x326)<=x327)/x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = -1;
	static volatile uint16_t x332 = UINT16_MAX;

	t78 = (((x329^x330)<=x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x334 = 1U;
	int32_t x335 = -37;
	int32_t t79 = 3;

	t79 = (((x333^x334)<=x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = -6420;
	static uint8_t x340 = 35U;

	t80 = (((x337^x338)<=x339)/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 1U;
	int8_t x342 = -2;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = UINT32_MAX;
	uint32_t t81 = 17185240U;

	t81 = (((x341^x342)<=x343)/x344);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MIN;
	int16_t x347 = -96;
	int64_t x348 = INT64_MIN;
	volatile int64_t t82 = 24209039LL;

	t82 = (((x345^x346)<=x347)/x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 15U;
	volatile int16_t x350 = INT16_MIN;
	int32_t x351 = -944147;
	uint32_t x352 = 23714U;
	uint32_t t83 = 2730U;

	t83 = (((x349^x350)<=x351)/x352);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = 290321;
	volatile uint16_t x354 = 6U;
	volatile uint16_t x355 = 235U;
	uint64_t x356 = 1197294787539356535LLU;
	static volatile uint64_t t84 = 178LLU;

	t84 = (((x353^x354)<=x355)/x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int8_t x358 = -1;
	uint64_t x359 = 99888LLU;
	static int32_t t85 = 69628494;

	t85 = (((x357^x358)<=x359)/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = 8U;
	int32_t x362 = -1;
	static volatile int32_t x363 = 0;
	int32_t x364 = INT32_MIN;
	volatile int32_t t86 = 36;

	t86 = (((x361^x362)<=x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 887;
	volatile int64_t x366 = INT64_MIN;
	volatile int32_t x367 = INT32_MAX;
	volatile int32_t x368 = -20101413;

	t87 = (((x365^x366)<=x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t88 = -442;

	t88 = (((x369^x370)<=x371)/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = 906358133405741LLU;
	static uint16_t x374 = 48U;
	int64_t x375 = INT64_MIN;
	uint8_t x376 = 61U;
	static int32_t t89 = -5941;

	t89 = (((x373^x374)<=x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x377 = INT64_MIN;
	static volatile uint64_t x378 = UINT64_MAX;
	int32_t x380 = -113791784;
	int32_t t90 = -28;

	t90 = (((x377^x378)<=x379)/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x382 = INT8_MIN;
	uint16_t x383 = 0U;
	static uint32_t x384 = UINT32_MAX;
	volatile uint32_t t91 = 17531U;

	t91 = (((x381^x382)<=x383)/x384);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x385 = 11U;
	static uint16_t x386 = 339U;
	int16_t x387 = INT16_MIN;
	int32_t t92 = -2235;

	t92 = (((x385^x386)<=x387)/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = -473752220;
	static int8_t x390 = INT8_MIN;
	uint32_t x392 = 1230U;
	uint32_t t93 = 20503U;

	t93 = (((x389^x390)<=x391)/x392);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = 40U;
	int16_t x394 = INT16_MAX;
	int8_t x395 = -1;
	int8_t x396 = INT8_MIN;
	volatile int32_t t94 = 4589;

	t94 = (((x393^x394)<=x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x397 = UINT16_MAX;
	volatile int8_t x398 = -1;
	uint32_t x399 = 101515251U;
	uint8_t x400 = UINT8_MAX;
	int32_t t95 = -54647;

	t95 = (((x397^x398)<=x399)/x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x401 = 82U;
	volatile uint32_t x402 = 22U;
	int32_t x404 = INT32_MAX;
	volatile int32_t t96 = -259435;

	t96 = (((x401^x402)<=x403)/x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 19U;
	int32_t x407 = INT32_MAX;
	int64_t x408 = -1LL;
	static int64_t t97 = -422150LL;

	t97 = (((x405^x406)<=x407)/x408);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = 0;
	int16_t x411 = INT16_MIN;
	static uint64_t x412 = UINT64_MAX;

	t98 = (((x409^x410)<=x411)/x412);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x413 = INT16_MIN;
	static uint16_t x416 = 743U;
	static volatile int32_t t99 = -3111501;

	t99 = (((x413^x414)<=x415)/x416);

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

