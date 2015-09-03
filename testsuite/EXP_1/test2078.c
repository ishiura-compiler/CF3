#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
volatile int64_t x4 = -104493716425864210LL;
static volatile int64_t x13 = INT64_MIN;
int8_t x15 = INT8_MAX;
int16_t x18 = -46;
int8_t x33 = INT8_MIN;
uint16_t x37 = UINT16_MAX;
volatile int16_t x60 = -6;
int32_t t14 = 3928771;
volatile int16_t x61 = -9;
volatile int32_t x67 = 50431;
static int16_t x71 = INT16_MAX;
int16_t x73 = INT16_MAX;
int8_t x74 = INT8_MIN;
static volatile int64_t x75 = -3819LL;
int64_t t18 = 1054229534114353LL;
int64_t t20 = 7342317787LL;
int8_t x87 = 3;
volatile int32_t t23 = -5;
volatile uint16_t x98 = 5U;
int16_t x101 = 1954;
volatile uint64_t t25 = 14912070LLU;
int8_t x109 = INT8_MAX;
int64_t x114 = INT64_MAX;
volatile int16_t x130 = -3;
int8_t x146 = 4;
int64_t x148 = INT64_MIN;
static volatile int64_t t35 = INT64_MIN;
static volatile uint8_t x151 = 1U;
int8_t x152 = INT8_MAX;
int16_t x155 = 3;
uint32_t x170 = UINT32_MAX;
volatile int64_t x171 = -1LL;
uint16_t x173 = 174U;
uint32_t x181 = 76735U;
static volatile int16_t x185 = INT16_MIN;
uint32_t x187 = 121517U;
int64_t x190 = -116004067669033315LL;
uint8_t x201 = UINT8_MAX;
volatile int32_t x208 = -6857;
static int64_t t51 = 109572292889145LL;
uint8_t x217 = UINT8_MAX;
int64_t x220 = INT64_MAX;
static volatile uint64_t t53 = 77554LLU;
static volatile uint64_t x221 = 1LLU;
static volatile int16_t x222 = -1;
volatile uint64_t t54 = 9919028388LLU;
volatile int64_t x229 = 15154553LL;
volatile int64_t t56 = 1018021027LL;
uint32_t t57 = 23669399U;
static uint16_t x247 = UINT16_MAX;
int64_t t60 = -11LL;
int8_t x268 = INT8_MAX;
int64_t x269 = INT64_MIN;
volatile uint64_t t67 = 2310126LLU;
int32_t x278 = INT32_MIN;
uint8_t x280 = UINT8_MAX;
int64_t x287 = INT64_MIN;
int32_t x288 = INT32_MIN;
int16_t x290 = -67;
static volatile int16_t x291 = INT16_MAX;
int16_t x292 = -1;
volatile uint32_t t73 = 6U;
uint8_t x310 = UINT8_MAX;
int16_t x312 = INT16_MIN;
int8_t x315 = -1;
uint8_t x319 = 20U;
static volatile int64_t x320 = -1LL;
int64_t x321 = -76805483244848943LL;
int64_t t79 = -172689157LL;
int64_t t81 = 30LL;
uint32_t x338 = 68U;
int32_t x342 = INT32_MAX;
volatile uint64_t x343 = UINT64_MAX;
volatile uint64_t t86 = 11776973466LLU;
uint64_t t87 = 112688698219LLU;
static int32_t x363 = INT32_MAX;
volatile int64_t t89 = -21296917521LL;
volatile uint64_t t90 = 408LLU;
int16_t x374 = -1;
int16_t x378 = 4;
int64_t x381 = -6439975LL;
static int16_t x384 = INT16_MIN;
volatile int64_t t93 = 424152LL;
uint8_t x385 = 3U;
int32_t x388 = -3;
int64_t t94 = -902416173LL;
uint32_t x396 = UINT32_MAX;
volatile int16_t x399 = -3;
static volatile int16_t x400 = -1;
int16_t x402 = INT16_MIN;
volatile int32_t x403 = 15048571;
static int64_t t98 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = 1U;
	volatile int64_t t0 = -147820236318592697LL;

	t0 = (((x1^x2)/x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 97U;
	static int16_t x6 = INT16_MIN;
	static int16_t x7 = 7690;
	volatile int8_t x8 = INT8_MAX;
	int32_t t1 = -1094;

	t1 = (((x5^x6)/x7)&x8);

	if (t1 != 124) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x10 = INT8_MIN;
	int8_t x11 = 1;
	uint64_t x12 = 728249545LLU;
	uint64_t t2 = 657LLU;

	t2 = (((x9^x10)/x11)&x12);

	if (t2 != 73LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int8_t x16 = -1;
	int64_t t3 = 30755264LL;

	t3 = (((x13^x14)/x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x19 = 1;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 12635LL;

	t4 = (((x17^x18)/x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 2639042U;
	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MIN;
	int32_t x24 = 559;
	int64_t t5 = -7591LL;

	t5 = (((x21^x22)/x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -11;
	static uint8_t x26 = 41U;
	int16_t x27 = 1;
	static uint16_t x28 = 21U;
	int32_t t6 = 9262;

	t6 = (((x25^x26)/x27)&x28);

	if (t6 != 20) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = 141;
	int32_t x31 = -461;
	static volatile int64_t x32 = 2LL;
	static int64_t t7 = 21590337732578185LL;

	t7 = (((x29^x30)/x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 30LLU;
	int16_t x35 = INT16_MAX;
	int16_t x36 = 0;
	static uint64_t t8 = 238896279479788022LLU;

	t8 = (((x33^x34)/x35)&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	static uint32_t x39 = UINT32_MAX;
	int64_t x40 = 25LL;
	volatile int64_t t9 = -2LL;

	t9 = (((x37^x38)/x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -733;
	int16_t x42 = INT16_MIN;
	uint16_t x43 = 455U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -10LL;

	t10 = (((x41^x42)/x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = -9;
	int8_t x47 = 1;
	int32_t x48 = -3;
	int32_t t11 = -5537;

	t11 = (((x45^x46)/x47)&x48);

	if (t11 != -2147483640) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 3955820LLU;
	static int32_t x50 = -26642549;
	int64_t x51 = -62603153961989172LL;
	int32_t x52 = INT32_MIN;
	uint64_t t12 = 57634007390349LLU;

	t12 = (((x49^x50)/x51)&x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	static int8_t x54 = -1;
	int64_t x55 = -1LL;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = (((x53^x54)/x55)&x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 29;
	int16_t x58 = -1;
	volatile uint16_t x59 = UINT16_MAX;

	t14 = (((x57^x58)/x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x62 = 29836U;
	volatile int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 3LL;

	t15 = (((x61^x62)/x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int32_t x66 = INT32_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 18050;

	t16 = (((x65^x66)/x67)&x68);

	if (t16 != 22954) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int16_t x70 = -29;
	volatile int32_t x72 = INT32_MIN;
	static int32_t t17 = 25357;

	t17 = (((x69^x70)/x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x76 = INT64_MIN;

	t18 = (((x73^x74)/x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int64_t x78 = INT64_MAX;
	int16_t x79 = 19;
	static int16_t x80 = -12754;
	volatile int64_t t19 = 215523355219237LL;

	t19 = (((x77^x78)/x79)&x80);

	if (t19 != 485440633518670350LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x81 = 1U;
	int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MAX;
	volatile int32_t x84 = 1;

	t20 = (((x81^x82)/x83)&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	static int32_t x88 = 41114;
	int32_t t21 = 49556382;

	t21 = (((x85^x86)/x87)&x88);

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 3U;
	volatile int64_t x90 = 1496432032707348743LL;
	int8_t x91 = INT8_MAX;
	int32_t x92 = 453829427;
	int64_t t22 = -4067345686554LL;

	t22 = (((x89^x90)/x91)&x92);

	if (t22 != 134783506LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = UINT16_MAX;
	int16_t x95 = 1;
	int8_t x96 = -2;

	t23 = (((x93^x94)/x95)&x96);

	if (t23 != -32770) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 20U;
	volatile int32_t x99 = -1;
	static int32_t x100 = INT32_MIN;
	uint32_t t24 = 609U;

	t24 = (((x97^x98)/x99)&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = INT32_MAX;
	int64_t x103 = INT64_MAX;
	volatile uint64_t x104 = 14713467623LLU;

	t25 = (((x101^x102)/x103)&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = 43301410015LLU;
	int32_t x111 = INT32_MIN;
	int16_t x112 = -1;
	uint64_t t26 = 9200919LLU;

	t26 = (((x109^x110)/x111)&x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 309U;
	volatile int16_t x115 = -1;
	uint8_t x116 = 69U;
	volatile int64_t t27 = 1513LL;

	t27 = (((x113^x114)/x115)&x116);

	if (t27 != 4LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	uint32_t x119 = 26075U;
	uint16_t x120 = 17U;
	volatile uint32_t t28 = 1U;

	t28 = (((x117^x118)/x119)&x120);

	if (t28 != 17U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x121 = INT64_MAX;
	uint16_t x122 = 0U;
	uint32_t x123 = 2070264U;
	volatile int32_t x124 = INT32_MAX;
	volatile int64_t t29 = 233LL;

	t29 = (((x121^x122)/x123)&x124);

	if (t29 != 1286002329LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 9926U;
	static int32_t x126 = INT32_MIN;
	volatile int32_t x127 = INT32_MIN;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t30 = -4LL;

	t30 = (((x125^x126)/x127)&x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x129 = 210931U;
	static int64_t x131 = -3126106LL;
	int16_t x132 = INT16_MIN;
	int64_t t31 = 2961892698386509988LL;

	t31 = (((x129^x130)/x131)&x132);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = -1LL;
	uint32_t x135 = 131561707U;
	int8_t x136 = INT8_MIN;
	volatile int64_t t32 = 506LL;

	t32 = (((x133^x134)/x135)&x136);

	if (t32 != 70106813312LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 74067U;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t33 = -1LL;

	t33 = (((x137^x138)/x139)&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = UINT64_MAX;
	int16_t x142 = 785;
	volatile uint8_t x143 = 37U;
	int32_t x144 = -2993;
	volatile uint64_t t34 = 912374337201LLU;

	t34 = (((x141^x142)/x143)&x144);

	if (t34 != 498560650640797775LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	int8_t x147 = INT8_MAX;

	t35 = (((x145^x146)/x147)&x148);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 146034654184836354LL;
	int32_t x150 = 0;
	int64_t t36 = 778349942LL;

	t36 = (((x149^x150)/x151)&x152);

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 60U;
	int8_t x154 = INT8_MIN;
	uint32_t x156 = 32550U;
	uint32_t t37 = 0U;

	t37 = (((x153^x154)/x155)&x156);

	if (t37 != 32546U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	volatile uint64_t x158 = 363339597171LLU;
	int64_t x159 = INT64_MIN;
	volatile int64_t x160 = -1LL;
	volatile uint64_t t38 = 266117359278LLU;

	t38 = (((x157^x158)/x159)&x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 141687LL;
	volatile int32_t x162 = 40339014;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -1;
	volatile int64_t t39 = -4LL;

	t39 = (((x161^x162)/x163)&x164);

	if (t39 != -1227LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	uint8_t x166 = 46U;
	int8_t x167 = 1;
	int64_t x168 = INT64_MIN;
	int64_t t40 = INT64_MIN;

	t40 = (((x165^x166)/x167)&x168);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x169 = 88U;
	int8_t x172 = INT8_MIN;
	int64_t t41 = 1099698032464626LL;

	t41 = (((x169^x170)/x171)&x172);

	if (t41 != -4294967296LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x174 = INT16_MIN;
	int32_t x175 = 127;
	uint64_t x176 = 48942292923031140LLU;
	uint64_t t42 = 0LLU;

	t42 = (((x173^x174)/x175)&x176);

	if (t42 != 48942292923031040LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 58LLU;
	int64_t x178 = 116LL;
	uint64_t x179 = UINT64_MAX;
	static int32_t x180 = -1;
	uint64_t t43 = 158335053377LLU;

	t43 = (((x177^x178)/x179)&x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x182 = 637U;
	static int64_t x183 = -1LL;
	static int64_t x184 = INT64_MIN;
	static int64_t t44 = INT64_MIN;

	t44 = (((x181^x182)/x183)&x184);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x186 = 1934840083954564723LLU;
	int8_t x188 = INT8_MIN;
	static volatile uint64_t t45 = 349128315LLU;

	t45 = (((x185^x186)/x187)&x188);

	if (t45 != 135881432143232LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x189 = 56548717248425LLU;
	volatile int32_t x191 = -1;
	int8_t x192 = -19;
	uint64_t t46 = 2104357642LLU;

	t46 = (((x189^x190)/x191)&x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	static int32_t x194 = INT32_MIN;
	uint8_t x195 = UINT8_MAX;
	static int8_t x196 = INT8_MIN;
	int32_t t47 = 1;

	t47 = (((x193^x194)/x195)&x196);

	if (t47 != -8421504) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 2U;
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = 1LL;
	int64_t x200 = INT64_MIN;
	static volatile int64_t t48 = -1973489284504845881LL;

	t48 = (((x197^x198)/x199)&x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = -1LL;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 0U;
	volatile int64_t t49 = -965LL;

	t49 = (((x201^x202)/x203)&x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x205 = INT8_MIN;
	static volatile int64_t x206 = 481546925838LL;
	int32_t x207 = 172484745;
	volatile int64_t t50 = -2944748945280679LL;

	t50 = (((x205^x206)/x207)&x208);

	if (t50 != -6895LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MAX;
	int64_t x210 = INT64_MIN;
	volatile uint32_t x211 = 68092681U;
	int8_t x212 = -1;

	t51 = (((x209^x210)/x211)&x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 4U;
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	int8_t x216 = -1;
	volatile int64_t t52 = 26420165405LL;

	t52 = (((x213^x214)/x215)&x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x218 = UINT64_MAX;
	static volatile int32_t x219 = INT32_MIN;

	t53 = (((x217^x218)/x219)&x220);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x223 = 241582U;
	int16_t x224 = -1;

	t54 = (((x221^x222)/x223)&x224);

	if (t54 != 76358106455404LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 713;
	int16_t x226 = -1;
	uint32_t x227 = 832267734U;
	int8_t x228 = -1;
	uint32_t t55 = 2U;

	t55 = (((x225^x226)/x227)&x228);

	if (t55 != 5U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	int8_t x232 = -1;

	t56 = (((x229^x230)/x231)&x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 11U;
	uint8_t x234 = 48U;
	volatile int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;

	t57 = (((x233^x234)/x235)&x236);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	static int16_t x238 = 8;
	uint32_t x239 = 87590U;
	uint8_t x240 = 1U;
	int64_t t58 = -499749752015495LL;

	t58 = (((x237^x238)/x239)&x240);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = 3859U;
	int32_t x242 = -468;
	int16_t x243 = INT16_MIN;
	int8_t x244 = 53;
	uint32_t t59 = 475U;

	t59 = (((x241^x242)/x243)&x244);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 484712421U;
	int64_t x246 = INT64_MAX;
	int32_t x248 = -5593636;

	t60 = (((x245^x246)/x247)&x248);

	if (t60 != 140739635847452LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -5425LL;
	uint8_t x250 = 0U;
	int8_t x251 = 3;
	volatile int8_t x252 = -1;
	volatile int64_t t61 = 1712LL;

	t61 = (((x249^x250)/x251)&x252);

	if (t61 != -1808LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x253 = INT16_MAX;
	static int64_t x254 = -388392749910LL;
	static int32_t x255 = INT32_MAX;
	volatile int64_t x256 = 9442695335369939LL;
	volatile int64_t t62 = -6319258596321619LL;

	t62 = (((x253^x254)/x255)&x256);

	if (t62 != 9442695335369792LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = INT32_MIN;
	static uint32_t x258 = UINT32_MAX;
	static uint8_t x259 = UINT8_MAX;
	int32_t x260 = -1;
	uint32_t t63 = 2U;

	t63 = (((x257^x258)/x259)&x260);

	if (t63 != 8421504U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x261 = 5LLU;
	int8_t x262 = INT8_MIN;
	int16_t x263 = 5678;
	int8_t x264 = INT8_MIN;
	static uint64_t t64 = 145241031LLU;

	t64 = (((x261^x262)/x263)&x264);

	if (t64 != 3248810157398528LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 206759393U;
	int64_t x266 = INT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	volatile int64_t t65 = 3878721LL;

	t65 = (((x265^x266)/x267)&x268);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x270 = INT64_MAX;
	uint64_t x271 = UINT64_MAX;
	static int8_t x272 = INT8_MIN;
	volatile uint64_t t66 = 15293LLU;

	t66 = (((x269^x270)/x271)&x272);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = UINT64_MAX;
	static uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = 4096;

	t67 = (((x273^x274)/x275)&x276);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int16_t x279 = -6851;
	volatile uint32_t t68 = 3U;

	t68 = (((x277^x278)/x279)&x280);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MIN;
	static int64_t x282 = -480493LL;
	static volatile int32_t x283 = -99192784;
	volatile int8_t x284 = 10;
	int64_t t69 = -2LL;

	t69 = (((x281^x282)/x283)&x284);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = 2040U;
	int8_t x286 = -1;
	static volatile int64_t t70 = 3743552652212LL;

	t70 = (((x285^x286)/x287)&x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 12347U;
	int32_t t71 = -2196802;

	t71 = (((x289^x290)/x291)&x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -38;
	volatile int16_t x294 = INT16_MIN;
	static volatile int64_t x295 = -439595893529629937LL;
	int32_t x296 = -1;
	static int64_t t72 = -2151980751659947771LL;

	t72 = (((x293^x294)/x295)&x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = 42;
	int8_t x298 = -1;
	volatile int32_t x299 = INT32_MAX;
	uint32_t x300 = UINT32_MAX;

	t73 = (((x297^x298)/x299)&x300);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -1LL;
	uint8_t x302 = 0U;
	static int64_t x303 = INT64_MIN;
	volatile uint32_t x304 = 81U;
	int64_t t74 = -80348915767197LL;

	t74 = (((x301^x302)/x303)&x304);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x305 = INT8_MAX;
	int16_t x306 = 29;
	volatile int8_t x307 = INT8_MAX;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t75 = 708698055LLU;

	t75 = (((x305^x306)/x307)&x308);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -182;
	int8_t x311 = 1;
	volatile int32_t t76 = 13630;

	t76 = (((x309^x310)/x311)&x312);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x313 = UINT16_MAX;
	volatile int8_t x314 = INT8_MIN;
	uint64_t x316 = 1817LLU;
	uint64_t t77 = 3424LLU;

	t77 = (((x313^x314)/x315)&x316);

	if (t77 != 1793LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x317 = 2237;
	int8_t x318 = INT8_MIN;
	int64_t t78 = 104103051535LL;

	t78 = (((x317^x318)/x319)&x320);

	if (t78 != -112LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x322 = -1;
	int8_t x323 = INT8_MIN;
	static int64_t x324 = 267382566586LL;

	t79 = (((x321^x322)/x323)&x324);

	if (t79 != 8607499954LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = 210574406;
	int64_t x326 = 1LL;
	static int16_t x327 = INT16_MAX;
	int8_t x328 = -9;
	volatile int64_t t80 = -926LL;

	t80 = (((x325^x326)/x327)&x328);

	if (t80 != 6418LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x333 = -1;
	int8_t x334 = INT8_MAX;
	static int64_t x335 = INT64_MIN;
	uint8_t x336 = 4U;

	t81 = (((x333^x334)/x335)&x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -2219054737656772LL;
	uint16_t x339 = 8080U;
	int32_t x340 = INT32_MAX;
	static volatile int64_t t82 = -58LL;

	t82 = (((x337^x338)/x339)&x340);

	if (t82 != 242419611LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = -1LL;
	uint64_t x344 = 167LLU;
	volatile uint64_t t83 = 2441891145590LLU;

	t83 = (((x341^x342)/x343)&x344);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x345 = 6U;
	volatile int16_t x346 = -84;
	int64_t x347 = 690087234LL;
	uint64_t x348 = UINT64_MAX;
	uint64_t t84 = 3051064LLU;

	t84 = (((x345^x346)/x347)&x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 7961965U;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = -1LL;
	static uint16_t x352 = UINT16_MAX;
	int64_t t85 = 0LL;

	t85 = (((x349^x350)/x351)&x352);

	if (t85 != 32110LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = -6;
	int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;

	t86 = (((x353^x354)/x355)&x356);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 0LLU;
	int8_t x358 = 1;
	int32_t x359 = -1;
	int32_t x360 = INT32_MIN;

	t87 = (((x357^x358)/x359)&x360);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	static volatile int64_t x364 = INT64_MIN;
	volatile int64_t t88 = -70980013679803922LL;

	t88 = (((x361^x362)/x363)&x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x365 = UINT8_MAX;
	int64_t x366 = -1LL;
	uint8_t x367 = 14U;
	int32_t x368 = INT32_MIN;

	t89 = (((x365^x366)/x367)&x368);

	if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = 0;
	uint64_t x370 = UINT64_MAX;
	int64_t x371 = -1LL;
	uint16_t x372 = 1U;

	t90 = (((x369^x370)/x371)&x372);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x373 = 5U;
	static int8_t x375 = 1;
	static int8_t x376 = 10;
	int32_t t91 = 5250927;

	t91 = (((x373^x374)/x375)&x376);

	if (t91 != 10) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = 191LL;
	uint64_t t92 = 8162218415883LLU;

	t92 = (((x377^x378)/x379)&x380);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x382 = 310335724LL;
	uint16_t x383 = UINT16_MAX;

	t93 = (((x381^x382)/x383)&x384);

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = -21;
	volatile int64_t x387 = 9608LL;

	t94 = (((x385^x386)/x387)&x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = 104U;
	static int16_t x390 = INT16_MIN;
	int8_t x391 = 59;
	static int64_t x392 = -2089946241817191569LL;
	int64_t t95 = -12LL;

	t95 = (((x389^x390)/x391)&x392);

	if (t95 != -2089946241817192121LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	volatile int16_t x395 = -1;
	uint32_t t96 = 176872U;

	t96 = (((x393^x394)/x395)&x396);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x397 = 0;
	volatile uint16_t x398 = UINT16_MAX;
	static int32_t t97 = 2287;

	t97 = (((x397^x398)/x399)&x400);

	if (t97 != -21845) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = 874304898LL;
	int64_t x404 = INT64_MIN;

	t98 = (((x401^x402)/x403)&x404);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 125U;
	uint64_t x406 = 4LLU;
	volatile int8_t x407 = -1;
	uint64_t x408 = 13554602354453LLU;
	volatile uint64_t t99 = 7187470041537096LLU;

	t99 = (((x405^x406)/x407)&x408);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

