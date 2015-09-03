#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
static uint32_t x13 = 22U;
volatile int32_t t4 = 582736235;
static volatile int32_t t5 = -394319491;
int8_t x26 = INT8_MAX;
int8_t x27 = 1;
int32_t x35 = -1;
uint8_t x44 = UINT8_MAX;
int32_t t10 = -7957;
uint16_t x47 = 64U;
volatile uint64_t t11 = 2952398407LLU;
static volatile uint32_t t12 = 206U;
static volatile int64_t x57 = -738LL;
uint32_t x69 = UINT32_MAX;
uint64_t t18 = 11526155412LLU;
int32_t x78 = 474281;
volatile uint16_t x79 = 1380U;
uint8_t x85 = UINT8_MAX;
volatile int64_t x86 = INT64_MIN;
static int16_t x92 = -3;
static int64_t x93 = INT64_MIN;
int16_t x96 = INT16_MAX;
static uint8_t x97 = UINT8_MAX;
static volatile int32_t x99 = -1;
uint16_t x104 = UINT16_MAX;
int32_t t25 = -1;
int32_t x108 = INT32_MIN;
int32_t t27 = 1422;
int32_t x120 = -1;
volatile int32_t t30 = -350746;
uint8_t x132 = 104U;
int32_t x136 = -1;
uint16_t x140 = UINT16_MAX;
volatile int16_t x143 = INT16_MIN;
int16_t x145 = INT16_MAX;
int16_t x146 = INT16_MAX;
uint8_t x152 = 40U;
volatile int8_t x157 = -1;
int64_t x158 = INT64_MIN;
int32_t x162 = INT32_MAX;
int64_t x164 = INT64_MIN;
uint64_t x171 = UINT64_MAX;
volatile uint8_t x176 = 2U;
static uint32_t x179 = UINT32_MAX;
int16_t x180 = 17;
volatile uint64_t x182 = 1059729281602076LLU;
uint16_t x186 = 986U;
uint32_t x187 = 6U;
volatile uint8_t x191 = 0U;
static int16_t x194 = INT16_MIN;
int8_t x197 = INT8_MIN;
volatile int16_t x198 = 3920;
volatile uint8_t x202 = UINT8_MAX;
uint32_t x204 = UINT32_MAX;
int16_t x209 = INT16_MIN;
volatile int16_t x210 = INT16_MIN;
volatile int8_t x211 = INT8_MIN;
uint32_t t55 = UINT32_MAX;
static uint32_t x237 = UINT32_MAX;
int32_t x241 = INT32_MAX;
volatile int16_t x244 = INT16_MAX;
volatile int32_t t60 = INT32_MAX;
uint8_t x247 = 2U;
int64_t t61 = INT64_MIN;
volatile int32_t x253 = -1;
int32_t x256 = INT32_MAX;
int16_t x259 = INT16_MIN;
volatile int64_t t65 = -1904225360617217454LL;
uint32_t x266 = 1U;
static int16_t x267 = INT16_MIN;
int16_t x270 = -1;
int16_t x271 = INT16_MIN;
static int32_t t67 = -1097893;
uint64_t x275 = 2658LLU;
static uint16_t x283 = 56U;
static uint16_t x292 = UINT16_MAX;
int32_t t72 = -30232;
static int32_t x294 = -1;
static volatile int32_t t73 = INT32_MIN;
volatile uint8_t x299 = 35U;
static uint8_t x303 = UINT8_MAX;
static int8_t x306 = -7;
uint32_t x315 = 122167510U;
int32_t x317 = INT32_MAX;
uint8_t x319 = 84U;
uint32_t x330 = 47U;
int16_t x332 = -1;
static uint64_t x333 = 1981072801667411LLU;
uint8_t x341 = 78U;
int32_t x353 = -1;
int16_t x354 = INT16_MIN;
static volatile int32_t x355 = -1;
int64_t x358 = INT64_MIN;
uint32_t x359 = UINT32_MAX;
int32_t x361 = INT32_MIN;
int32_t x370 = 127;
uint64_t x374 = 45093656606591440LLU;
int64_t x376 = -7272539620LL;
static volatile int64_t t93 = INT64_MAX;
int16_t x377 = -2;
volatile int16_t x379 = 8121;
int32_t x382 = -1;
int64_t x383 = INT64_MIN;
volatile int8_t x386 = -1;
int8_t x391 = INT8_MIN;


void f0(void) {
	int16_t x1 = -2;
	int64_t x2 = -735795735658387LL;
	volatile int8_t x3 = -1;
	uint32_t x4 = 0U;
	volatile uint32_t t0 = 1824U;

	t0 = (x1^((x2==x3)&x4));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 11;
	uint64_t x6 = 5LLU;
	uint16_t x8 = 0U;
	int32_t t1 = 58379;

	t1 = (x5^((x6==x7)&x8));

	if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	int32_t x12 = -365;
	volatile int64_t t2 = -5574675157482520LL;

	t2 = (x9^((x10==x11)&x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int8_t x15 = 2;
	static int64_t x16 = INT64_MAX;
	int64_t t3 = -15837774581LL;

	t3 = (x13^((x14==x15)&x16));

	if (t3 != 22LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int32_t x18 = -710454674;
	uint64_t x19 = UINT64_MAX;
	int32_t x20 = -1;

	t4 = (x17^((x18==x19)&x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 1;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 22U;
	volatile int8_t x24 = INT8_MIN;

	t5 = (x21^((x22==x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x25^((x26==x27)&x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MIN;
	uint64_t x31 = 2644101330LLU;
	static int8_t x32 = 5;
	static volatile int32_t t7 = INT32_MIN;

	t7 = (x29^((x30==x31)&x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	static int16_t x34 = INT16_MIN;
	int8_t x36 = 4;
	static volatile int32_t t8 = 29874994;

	t8 = (x33^((x34==x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 169U;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -395545;

	t9 = (x37^((x38==x39)&x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 3U;
	static volatile int8_t x42 = -6;
	static volatile int16_t x43 = INT16_MIN;

	t10 = (x41^((x42==x43)&x44));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 390;
	int8_t x46 = INT8_MIN;
	uint64_t x48 = 1724698340LLU;

	t11 = (x45^((x46==x47)&x48));

	if (t11 != 390LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 4536U;
	uint32_t x50 = 140566936U;
	volatile int32_t x51 = 233539465;
	static int32_t x52 = INT32_MIN;

	t12 = (x49^((x50==x51)&x52));

	if (t12 != 4536U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -58;
	uint16_t x54 = 217U;
	uint8_t x55 = 8U;
	static int16_t x56 = 3;
	int32_t t13 = 98310035;

	t13 = (x53^((x54==x55)&x56));

	if (t13 != -58) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 0U;
	static volatile int64_t x59 = INT64_MIN;
	int64_t x60 = -1LL;
	int64_t t14 = -830834381660LL;

	t14 = (x57^((x58==x59)&x60));

	if (t14 != -738LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 1265;
	int16_t x64 = -1;
	int32_t t15 = 0;

	t15 = (x61^((x62==x63)&x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 861404639U;
	int32_t x67 = 1;
	volatile int8_t x68 = INT8_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x65^((x66==x67)&x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t17 = 541331266LL;

	t17 = (x69^((x70==x71)&x72));

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 3134;
	static int64_t x74 = -1LL;
	int8_t x75 = INT8_MAX;
	static uint64_t x76 = 2LLU;

	t18 = (x73^((x74==x75)&x76));

	if (t18 != 3134LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -624264LL;
	int32_t x80 = INT32_MAX;
	volatile int64_t t19 = 3LL;

	t19 = (x77^((x78==x79)&x80));

	if (t19 != -624264LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 22149U;
	uint64_t x82 = 34996804559366154LLU;
	uint32_t x83 = 16699U;
	int16_t x84 = 44;
	volatile int32_t t20 = 52;

	t20 = (x81^((x82==x83)&x84));

	if (t20 != 22149) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x87 = INT16_MIN;
	static uint8_t x88 = 1U;
	volatile int32_t t21 = 98;

	t21 = (x85^((x86==x87)&x88));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int64_t x90 = -1LL;
	volatile int32_t x91 = -1;
	volatile int32_t t22 = -987162674;

	t22 = (x89^((x90==x91)&x92));

	if (t22 != 2147483646) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = (x93^((x94==x95)&x96));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = 16569122070LL;
	static uint16_t x100 = 3060U;
	static volatile int32_t t24 = -11225952;

	t24 = (x97^((x98==x99)&x100));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -1;
	static uint32_t x103 = 1485U;

	t25 = (x101^((x102==x103)&x104));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 62U;
	int64_t x106 = 0LL;
	int8_t x107 = INT8_MIN;
	int32_t t26 = 8428726;

	t26 = (x105^((x106==x107)&x108));

	if (t26 != 62) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 29U;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MIN;

	t27 = (x109^((x110==x111)&x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MAX;
	int64_t x115 = 193113634288LL;
	int16_t x116 = INT16_MAX;
	volatile int64_t t28 = 6047540506LL;

	t28 = (x113^((x114==x115)&x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 1154U;
	uint16_t x118 = 7682U;
	int8_t x119 = -1;
	volatile uint32_t t29 = 3U;

	t29 = (x117^((x118==x119)&x120));

	if (t29 != 1154U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 5450U;
	uint32_t x122 = 14267U;
	static int8_t x123 = -1;
	int32_t x124 = -100981;

	t30 = (x121^((x122==x123)&x124));

	if (t30 != 5450) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 32170179;
	volatile int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	static volatile int32_t x128 = 12;
	int32_t t31 = -292854;

	t31 = (x125^((x126==x127)&x128));

	if (t31 != 32170179) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	static volatile int32_t x131 = INT32_MAX;
	static volatile int32_t t32 = INT32_MIN;

	t32 = (x129^((x130==x131)&x132));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	volatile uint64_t x134 = 712865126329540LLU;
	int8_t x135 = INT8_MIN;
	static volatile int32_t t33 = 104;

	t33 = (x133^((x134==x135)&x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -1709;
	volatile uint16_t x138 = UINT16_MAX;
	static int32_t x139 = INT32_MAX;
	volatile int32_t t34 = 1;

	t34 = (x137^((x138==x139)&x140));

	if (t34 != -1709) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	static uint64_t x142 = 56978LLU;
	volatile int64_t x144 = 10180118160399000LL;
	int64_t t35 = 42549108842LL;

	t35 = (x141^((x142==x143)&x144));

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x147 = UINT32_MAX;
	int16_t x148 = -2219;
	volatile int32_t t36 = -951670;

	t36 = (x145^((x146==x147)&x148));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int8_t x150 = 3;
	uint8_t x151 = UINT8_MAX;
	volatile int32_t t37 = -3;

	t37 = (x149^((x150==x151)&x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 62U;
	int16_t x154 = -1;
	int32_t x155 = -7175;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 90917387;

	t38 = (x153^((x154==x155)&x156));

	if (t38 != 62) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = INT32_MIN;
	static uint32_t x160 = 30462757U;
	uint32_t t39 = UINT32_MAX;

	t39 = (x157^((x158==x159)&x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 9U;
	int16_t x163 = INT16_MIN;
	int64_t t40 = -2302048563251601296LL;

	t40 = (x161^((x162==x163)&x164));

	if (t40 != 9LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static int32_t x166 = -1;
	uint16_t x167 = 58U;
	uint8_t x168 = UINT8_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165^((x166==x167)&x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -36;
	volatile uint16_t x170 = UINT16_MAX;
	static uint16_t x172 = 23U;
	int32_t t42 = -21423;

	t42 = (x169^((x170==x171)&x172));

	if (t42 != -36) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static volatile int16_t x174 = 0;
	uint64_t x175 = 10148LLU;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (x173^((x174==x175)&x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	int32_t t44 = 227093591;

	t44 = (x177^((x178==x179)&x180));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MIN;
	static uint32_t t45 = UINT32_MAX;

	t45 = (x181^((x182==x183)&x184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x188 = 4347909U;
	volatile uint32_t t46 = 301U;

	t46 = (x185^((x186==x187)&x188));

	if (t46 != 4294934528U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	uint16_t x190 = 23806U;
	int8_t x192 = -1;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x189^((x190==x191)&x192));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x193^((x194==x195)&x196));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x199 = INT8_MIN;
	uint8_t x200 = 5U;
	int32_t t49 = -63207;

	t49 = (x197^((x198==x199)&x200));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 3009U;
	volatile int64_t x203 = INT64_MIN;
	static uint32_t t50 = 172005U;

	t50 = (x201^((x202==x203)&x204));

	if (t50 != 3009U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 311;
	int32_t x206 = -113993;
	int8_t x207 = -52;
	uint64_t x208 = 14546310LLU;
	uint64_t t51 = 2233379396585LLU;

	t51 = (x205^((x206==x207)&x208));

	if (t51 != 311LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x212 = INT16_MIN;
	static int32_t t52 = -5070558;

	t52 = (x209^((x210==x211)&x212));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile uint64_t x214 = 1311897540892456894LLU;
	volatile int8_t x215 = 0;
	int32_t x216 = 126425967;
	volatile int32_t t53 = 113372155;

	t53 = (x213^((x214==x215)&x216));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MAX;
	uint16_t x218 = 1U;
	volatile int8_t x219 = -55;
	int32_t x220 = -1;
	int32_t t54 = -6;

	t54 = (x217^((x218==x219)&x220));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = UINT32_MAX;
	int16_t x222 = -4837;
	volatile uint8_t x223 = 3U;
	int32_t x224 = 44;

	t55 = (x221^((x222==x223)&x224));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	static int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	uint16_t x228 = 9U;
	volatile int32_t t56 = -947542;

	t56 = (x225^((x226==x227)&x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x229 = 24U;
	static int64_t x230 = INT64_MIN;
	static uint16_t x231 = UINT16_MAX;
	static uint32_t x232 = 13U;
	uint32_t t57 = 116U;

	t57 = (x229^((x230==x231)&x232));

	if (t57 != 24U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	volatile uint8_t x234 = 7U;
	int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MAX;
	static int32_t t58 = -3;

	t58 = (x233^((x234==x235)&x236));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MAX;
	volatile uint32_t t59 = 50U;

	t59 = (x237^((x238==x239)&x240));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x242 = 189183;
	int32_t x243 = INT32_MAX;

	t60 = (x241^((x242==x243)&x244));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	static int32_t x246 = -1;
	static int8_t x248 = INT8_MIN;

	t61 = (x245^((x246==x247)&x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = INT64_MAX;
	int64_t x251 = INT64_MIN;
	static uint8_t x252 = 1U;
	volatile int32_t t62 = 654238527;

	t62 = (x249^((x250==x251)&x252));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x254 = 2;
	static int32_t x255 = INT32_MIN;
	int32_t t63 = 1093569;

	t63 = (x253^((x254==x255)&x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 0;
	volatile uint32_t x258 = 463233U;
	volatile int64_t x260 = 250LL;
	volatile int64_t t64 = -185193381951181135LL;

	t64 = (x257^((x258==x259)&x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 117135U;
	uint8_t x262 = UINT8_MAX;
	volatile int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;

	t65 = (x261^((x262==x263)&x264));

	if (t65 != 117135LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265^((x266==x267)&x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 0;
	int8_t x272 = 1;

	t67 = (x269^((x270==x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 53U;
	int8_t x274 = -1;
	volatile uint32_t x276 = 67050179U;
	uint32_t t68 = 2960U;

	t68 = (x273^((x274==x275)&x276));

	if (t68 != 53U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static volatile int64_t x278 = 3269406422255LL;
	int32_t x279 = INT32_MAX;
	static int64_t x280 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x277^((x278==x279)&x280));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	static int16_t x282 = -29;
	uint8_t x284 = UINT8_MAX;
	volatile int64_t t70 = INT64_MAX;

	t70 = (x281^((x282==x283)&x284));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = UINT32_MAX;
	int16_t x286 = -1;
	int8_t x287 = INT8_MAX;
	int32_t x288 = -1;
	static uint32_t t71 = UINT32_MAX;

	t71 = (x285^((x286==x287)&x288));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x290 = 1U;
	int64_t x291 = 6918104821LL;

	t72 = (x289^((x290==x291)&x292));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x295 = 11LLU;
	int8_t x296 = INT8_MAX;

	t73 = (x293^((x294==x295)&x296));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	int8_t x298 = 1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 1;

	t74 = (x297^((x298==x299)&x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	int64_t x302 = 31781619522546836LL;
	int8_t x304 = -1;
	static volatile int32_t t75 = INT32_MIN;

	t75 = (x301^((x302==x303)&x304));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	static int32_t x307 = -20889;
	int32_t x308 = -1;
	static volatile int32_t t76 = -57;

	t76 = (x305^((x306==x307)&x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile uint32_t x310 = UINT32_MAX;
	int64_t x311 = -1016220038571913664LL;
	volatile uint16_t x312 = 13028U;
	int64_t t77 = INT64_MIN;

	t77 = (x309^((x310==x311)&x312));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 3151U;
	uint16_t x314 = UINT16_MAX;
	volatile int32_t x316 = -1;
	static int32_t t78 = -31023;

	t78 = (x313^((x314==x315)&x316));

	if (t78 != 3151) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x318 = INT64_MIN;
	volatile int16_t x320 = INT16_MIN;
	int32_t t79 = INT32_MAX;

	t79 = (x317^((x318==x319)&x320));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	uint32_t x322 = 3203U;
	static uint64_t x323 = 11374LLU;
	static uint64_t x324 = 1743877854044LLU;
	uint64_t t80 = 54460435954LLU;

	t80 = (x321^((x322==x323)&x324));

	if (t80 != 4294967295LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MAX;
	volatile int64_t x327 = -1LL;
	static volatile int16_t x328 = -1;
	int32_t t81 = 249021;

	t81 = (x325^((x326==x327)&x328));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	uint16_t x331 = UINT16_MAX;
	volatile int64_t t82 = -1097881LL;

	t82 = (x329^((x330==x331)&x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	volatile int64_t x335 = -8902LL;
	static uint8_t x336 = UINT8_MAX;
	uint64_t t83 = 2893441LLU;

	t83 = (x333^((x334==x335)&x336));

	if (t83 != 1981072801667411LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int32_t x338 = INT32_MIN;
	int64_t x339 = 112691749627LL;
	uint32_t x340 = 29841U;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = (x337^((x338==x339)&x340));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x342 = 14U;
	int8_t x343 = -19;
	uint64_t x344 = UINT64_MAX;
	uint64_t t85 = 91473LLU;

	t85 = (x341^((x342==x343)&x344));

	if (t85 != 78LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -934;
	int32_t x346 = INT32_MIN;
	int16_t x347 = 325;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -109865;

	t86 = (x345^((x346==x347)&x348));

	if (t86 != -934) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 28U;
	uint16_t x350 = 46U;
	int64_t x351 = -35048LL;
	uint16_t x352 = 1U;
	volatile int32_t t87 = 84892209;

	t87 = (x349^((x350==x351)&x352));

	if (t87 != 28) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x356 = 44U;
	volatile int32_t t88 = -466734;

	t88 = (x353^((x354==x355)&x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t89 = -504430410;

	t89 = (x357^((x358==x359)&x360));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = -519LL;
	uint16_t x363 = 13U;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x361^((x362==x363)&x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 9862U;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = -1LL;
	static int32_t x368 = 309322;
	int32_t t91 = -463554;

	t91 = (x365^((x366==x367)&x368));

	if (t91 != 9862) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	static volatile int16_t x371 = -1;
	int32_t x372 = INT32_MAX;
	static volatile int64_t t92 = INT64_MIN;

	t92 = (x369^((x370==x371)&x372));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	volatile int32_t x375 = -1;

	t93 = (x373^((x374==x375)&x376));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x378 = INT32_MIN;
	uint64_t x380 = 3LLU;
	static uint64_t t94 = 451719227009148LLU;

	t94 = (x377^((x378==x379)&x380));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 221LLU;
	static volatile int64_t x384 = -1LL;
	uint64_t t95 = 1LLU;

	t95 = (x381^((x382==x383)&x384));

	if (t95 != 221LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = 1;
	int64_t x387 = 26051285797090514LL;
	int32_t x388 = -198524154;
	int32_t t96 = 1666636;

	t96 = (x385^((x386==x387)&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 185;
	int16_t x390 = -1;
	int16_t x392 = -3;
	int32_t t97 = 104;

	t97 = (x389^((x390==x391)&x392));

	if (t97 != 185) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int64_t x394 = 24616824LL;
	volatile int8_t x395 = -1;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x393^((x394==x395)&x396));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -49264922091797LL;
	static volatile int16_t x398 = 3553;
	static uint64_t x399 = 9481914LLU;
	int32_t x400 = -1;
	volatile int64_t t99 = 84545732LL;

	t99 = (x397^((x398==x399)&x400));

	if (t99 != -49264922091797LL) { NG(); } else { ; }
	
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

