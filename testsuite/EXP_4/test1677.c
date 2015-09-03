#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
static int64_t x7 = INT64_MIN;
static int8_t x8 = INT8_MIN;
uint8_t x10 = 3U;
volatile uint32_t t2 = 50786385U;
int16_t x13 = INT16_MIN;
static int16_t x18 = INT16_MIN;
int8_t x19 = 2;
int16_t x23 = -2703;
uint32_t x31 = UINT32_MAX;
volatile int32_t t8 = -163982;
int32_t t11 = 3;
int32_t t12 = -230274;
static int16_t x57 = 10;
static int32_t t14 = -14;
int64_t x61 = INT64_MIN;
int8_t x70 = -32;
static int32_t x76 = 2770894;
uint64_t x80 = UINT64_MAX;
volatile int64_t t19 = INT64_MAX;
volatile int32_t t21 = 722635187;
int32_t x104 = -53825203;
uint16_t x106 = UINT16_MAX;
uint32_t x108 = 104712590U;
uint16_t x109 = 184U;
volatile int64_t x113 = INT64_MIN;
volatile uint8_t x114 = 2U;
uint64_t x118 = 59LLU;
uint64_t t29 = 85359812078LLU;
int16_t x121 = INT16_MAX;
uint16_t x122 = 14U;
static uint8_t x124 = 19U;
int64_t x125 = INT64_MIN;
int16_t x130 = INT16_MIN;
uint32_t x132 = 124574686U;
int64_t t32 = 98LL;
int64_t t33 = -22877LL;
int16_t x145 = -1;
uint64_t x147 = 7806074548187884LLU;
int8_t x151 = -1;
volatile uint64_t t37 = 3348851LLU;
int32_t t38 = -16350;
int8_t x158 = 15;
uint64_t t40 = 187912LLU;
int8_t x173 = INT8_MIN;
int64_t x177 = -34199202896552LL;
static int32_t x180 = INT32_MAX;
int16_t x181 = 1;
static uint16_t x182 = UINT16_MAX;
int64_t x183 = -610960671704216674LL;
volatile int64_t t46 = 90336107085488LL;
int64_t x192 = INT64_MAX;
int32_t x196 = -368118;
static volatile int32_t x197 = -308035;
uint16_t x198 = 9U;
volatile int8_t x199 = -1;
int64_t x208 = INT64_MIN;
volatile int64_t t52 = -74670LL;
static int64_t x214 = -1LL;
int32_t x217 = -4;
static int32_t x220 = -1;
volatile uint64_t t55 = 111538LLU;
static int64_t x232 = -1LL;
volatile int32_t t57 = -2677081;
static volatile int16_t x234 = INT16_MIN;
volatile uint32_t t58 = 0U;
uint8_t x238 = 27U;
static volatile int32_t t63 = -2;
static volatile int64_t x264 = -45034822520LL;
int64_t x265 = -1917742999558LL;
int32_t x267 = -1;
int8_t x268 = -1;
int16_t x269 = INT16_MIN;
int16_t x271 = INT16_MIN;
int64_t x276 = INT64_MAX;
uint16_t x284 = 1U;
volatile uint64_t t70 = 2795848295938680LLU;
int16_t x287 = INT16_MIN;
volatile uint32_t x288 = 100132U;
uint8_t x294 = UINT8_MAX;
int8_t x295 = -17;
static int64_t x300 = INT64_MAX;
volatile int64_t x311 = INT64_MIN;
int32_t t77 = 0;
static int64_t x313 = INT64_MIN;
int16_t x318 = INT16_MIN;
volatile uint16_t x320 = 13U;
volatile int16_t x336 = -274;
int32_t t84 = 6227249;
int16_t x342 = INT16_MAX;
static uint32_t x343 = 2U;
int32_t x350 = INT32_MIN;
int32_t x354 = INT32_MIN;
int64_t x359 = INT64_MIN;
int8_t x360 = INT8_MIN;
volatile int32_t t89 = -184;
int8_t x369 = -2;
int16_t x374 = -1;
static int16_t x376 = -114;
int32_t x377 = INT32_MAX;
int64_t x380 = INT64_MIN;
static int16_t x388 = INT16_MIN;
int64_t x392 = INT64_MAX;
static uint32_t x393 = 1U;
int64_t x400 = -1LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint8_t x2 = 1U;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = -246;
	static volatile int32_t t0 = -2985814;

	t0 = (x1^(x2|(x3<=x4)));

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int32_t t1 = -4496;

	t1 = (x5^(x6|(x7<=x8)));

	if (t1 != -65409) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x11 = -1;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9^(x10|(x11<=x12)));

	if (t2 != 4294967292U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = -6198;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = -920462;

	t3 = (x13^(x14|(x15<=x16)));

	if (t3 != 2147450881) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static volatile uint16_t x20 = 12U;
	volatile int32_t t4 = 28;

	t4 = (x17^(x18|(x19<=x20)));

	if (t4 != -32514) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 1;
	static volatile int64_t x22 = 30840450731LL;
	int8_t x24 = 2;
	volatile int64_t t5 = 252966711LL;

	t5 = (x21^(x22|(x23<=x24)));

	if (t5 != 30840450730LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int8_t x26 = -2;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 83;

	t6 = (x25^(x26|(x27<=x28)));

	if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint64_t x30 = UINT64_MAX;
	int32_t x32 = -3822;
	uint64_t t7 = 77820560LLU;

	t7 = (x29^(x30|(x31<=x32)));

	if (t7 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 4;
	uint16_t x34 = UINT16_MAX;
	uint32_t x35 = 40081982U;
	static int8_t x36 = INT8_MIN;

	t8 = (x33^(x34|(x35<=x36)));

	if (t8 != 65531) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	volatile int64_t x38 = -1LL;
	int32_t x39 = INT32_MIN;
	uint16_t x40 = 15U;
	volatile uint64_t t9 = 55768729152LLU;

	t9 = (x37^(x38|(x39<=x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	static int64_t x42 = -5517LL;
	uint64_t x43 = 181747777748LLU;
	int16_t x44 = 352;
	volatile int64_t t10 = 0LL;

	t10 = (x41^(x42|(x43<=x44)));

	if (t10 != -5620LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile int32_t x46 = 12898997;
	int16_t x47 = -1;
	int8_t x48 = -1;

	t11 = (x45^(x46|(x47<=x48)));

	if (t11 != -12898998) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -424LL;

	t12 = (x49^(x50|(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 281U;
	int8_t x54 = INT8_MAX;
	uint8_t x55 = UINT8_MAX;
	static int8_t x56 = 1;
	static int32_t t13 = -212937004;

	t13 = (x53^(x54|(x55<=x56)));

	if (t13 != 358) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	static int32_t x59 = INT32_MAX;
	uint32_t x60 = UINT32_MAX;

	t14 = (x57^(x58|(x59<=x60)));

	if (t14 != -32757) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = 3U;
	int64_t t15 = 3963509467LL;

	t15 = (x61^(x62|(x63<=x64)));

	if (t15 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	static int32_t x68 = -1;
	static volatile uint64_t t16 = 5099272606444776643LLU;

	t16 = (x65^(x66|(x67<=x68)));

	if (t16 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 1364459162U;
	int8_t x71 = INT8_MIN;
	int16_t x72 = -1;
	uint32_t t17 = 297311U;

	t17 = (x69^(x70|(x71<=x72)));

	if (t17 != 2930508155U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	static int32_t x74 = INT32_MIN;
	volatile uint16_t x75 = 1U;
	static volatile int32_t t18 = 1520;

	t18 = (x73^(x74|(x75<=x76)));

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	static int64_t x78 = -1LL;
	volatile uint64_t x79 = 1591622577869584234LLU;

	t19 = (x77^(x78|(x79<=x80)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = 9106344;
	int64_t x82 = INT64_MAX;
	int64_t x83 = -891LL;
	int8_t x84 = INT8_MAX;
	static volatile int64_t t20 = 64064925114842LL;

	t20 = (x81^(x82|(x83<=x84)));

	if (t20 != 9223372036845669463LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -1;
	volatile int16_t x86 = -1;
	int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MIN;

	t21 = (x85^(x86|(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 89U;
	int32_t x90 = INT32_MAX;
	static uint16_t x91 = 1652U;
	int32_t x92 = -40;
	uint32_t t22 = 323561U;

	t22 = (x89^(x90|(x91<=x92)));

	if (t22 != 2147483558U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -251;
	volatile uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	int32_t x96 = 39;
	uint64_t t23 = 5489LLU;

	t23 = (x93^(x94|(x95<=x96)));

	if (t23 != 250LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1U;
	uint16_t x98 = 10116U;
	volatile int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -372154;

	t24 = (x97^(x98|(x99<=x100)));

	if (t24 != 10117) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = 11LL;
	static int16_t x103 = -1;
	int64_t t25 = 254789LL;

	t25 = (x101^(x102|(x103<=x104)));

	if (t25 != -117LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	uint64_t x107 = 429516378324LLU;
	volatile int32_t t26 = -25395;

	t26 = (x105^(x106|(x107<=x108)));

	if (t26 != 65408) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	int32_t x111 = INT32_MAX;
	static int64_t x112 = 206542439025LL;
	static int64_t t27 = -919729030020LL;

	t27 = (x109^(x110|(x111<=x112)));

	if (t27 != -185LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MAX;
	static int64_t x116 = -1LL;
	int64_t t28 = -1106400749565922673LL;

	t28 = (x113^(x114|(x115<=x116)));

	if (t28 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	uint8_t x119 = 117U;
	volatile int16_t x120 = INT16_MIN;

	t29 = (x117^(x118|(x119<=x120)));

	if (t29 != 18446744071562068027LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x123 = -1;
	static volatile int32_t t30 = -19812080;

	t30 = (x121^(x122|(x123<=x124)));

	if (t30 != 32752) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = -10485;
	static volatile int64_t x127 = -3494073894793765LL;
	volatile int64_t x128 = -1LL;
	int64_t t31 = 1072772LL;

	t31 = (x125^(x126|(x127<=x128)));

	if (t31 != 9223372036854765323LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int8_t x131 = -13;

	t32 = (x129^(x130|(x131<=x132)));

	if (t32 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	static volatile uint8_t x134 = 2U;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 528U;

	t33 = (x133^(x134|(x135<=x136)));

	if (t33 != -4LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 2875U;
	static uint64_t x138 = 430LLU;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -205114;
	volatile uint64_t t34 = 21378255548916LLU;

	t34 = (x137^(x138|(x139<=x140)));

	if (t34 != 2708LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static int16_t x142 = INT16_MAX;
	uint64_t x143 = 43LLU;
	uint32_t x144 = UINT32_MAX;
	int32_t t35 = 328510407;

	t35 = (x141^(x142|(x143<=x144)));

	if (t35 != -2147450881) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	int32_t x148 = -18504;
	int32_t t36 = 431543;

	t36 = (x145^(x146|(x147<=x148)));

	if (t36 != 32766) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	int64_t x152 = -135LL;

	t37 = (x149^(x150|(x151<=x152)));

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	static int32_t x154 = INT32_MIN;
	uint8_t x155 = 0U;
	volatile int16_t x156 = INT16_MAX;

	t38 = (x153^(x154|(x155<=x156)));

	if (t38 != 2147483521) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = -1LL;
	volatile uint64_t t39 = 37979660558LLU;

	t39 = (x157^(x158|(x159<=x160)));

	if (t39 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 163U;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = 0;
	static volatile int16_t x164 = 46;

	t40 = (x161^(x162|(x163<=x164)));

	if (t40 != 18446744073709551452LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -32;
	static int8_t x166 = -28;
	static uint64_t x167 = UINT64_MAX;
	static int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 6;

	t41 = (x165^(x166|(x167<=x168)));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 3377082584042826LLU;
	static int8_t x170 = -1;
	int32_t x171 = -15710639;
	static int64_t x172 = -5569400137LL;
	volatile uint64_t t42 = 218237632434LLU;

	t42 = (x169^(x170|(x171<=x172)));

	if (t42 != 18443366991125508789LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 5157U;
	static int64_t x176 = -1LL;
	volatile uint32_t t43 = 100U;

	t43 = (x173^(x174|(x175<=x176)));

	if (t43 != 127U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = UINT16_MAX;
	static int64_t x179 = INT64_MAX;
	int64_t t44 = 7049482091882LL;

	t44 = (x177^(x178|(x179<=x180)));

	if (t44 != -34199202948441LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x184 = UINT32_MAX;
	static volatile int32_t t45 = 141258;

	t45 = (x181^(x182|(x183<=x184)));

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 14;
	static int64_t x186 = -1LL;
	uint32_t x187 = 76892322U;
	static int8_t x188 = -43;

	t46 = (x185^(x186|(x187<=x188)));

	if (t46 != -15LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int32_t x190 = -1;
	volatile int16_t x191 = 2;
	int32_t t47 = -6;

	t47 = (x189^(x190|(x191<=x192)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -2031332290016617787LL;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = 15780494340008LL;
	int64_t t48 = 4964923276674545LL;

	t48 = (x193^(x194|(x195<=x196)));

	if (t48 != -2031332290016617926LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x200 = -1LL;
	volatile int32_t t49 = -104;

	t49 = (x197^(x198|(x199<=x200)));

	if (t49 != -308044) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 26234LLU;
	static int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	static volatile uint16_t x204 = UINT16_MAX;
	uint64_t t50 = 97LLU;

	t50 = (x201^(x202|(x203<=x204)));

	if (t50 != 9223372036854802043LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	static volatile int32_t x207 = -1;
	volatile int32_t t51 = -507;

	t51 = (x205^(x206|(x207<=x208)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	int64_t x210 = -1LL;
	volatile int64_t x211 = -349484712LL;
	int16_t x212 = INT16_MAX;

	t52 = (x209^(x210|(x211<=x212)));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x215 = 14479957760000460LL;
	int16_t x216 = 1111;
	volatile uint64_t t53 = 3489LLU;

	t53 = (x213^(x214|(x215<=x216)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = UINT16_MAX;
	static int64_t x219 = 5210874532LL;
	int32_t t54 = 2199160;

	t54 = (x217^(x218|(x219<=x220)));

	if (t54 != -65533) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 0LLU;
	int32_t x222 = 10071;
	volatile uint64_t x223 = UINT64_MAX;
	static volatile int32_t x224 = 992843;

	t55 = (x221^(x222|(x223<=x224)));

	if (t55 != 10071LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = 1;
	uint16_t x226 = 8940U;
	int64_t x227 = INT64_MAX;
	int32_t x228 = -1;
	static int32_t t56 = 0;

	t56 = (x225^(x226|(x227<=x228)));

	if (t56 != 8941) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -15;
	uint16_t x230 = UINT16_MAX;
	static int64_t x231 = 87LL;

	t57 = (x229^(x230|(x231<=x232)));

	if (t57 != -65522) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = UINT32_MAX;
	volatile int32_t x235 = INT32_MAX;
	int8_t x236 = -1;

	t58 = (x233^(x234|(x235<=x236)));

	if (t58 != 32767U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int64_t x239 = 2507434085620760980LL;
	int64_t x240 = -59766596LL;
	volatile int32_t t59 = -53090;

	t59 = (x237^(x238|(x239<=x240)));

	if (t59 != -2147483621) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	static volatile uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = INT8_MIN;
	static int32_t t60 = 262419101;

	t60 = (x241^(x242|(x243<=x244)));

	if (t60 != -65536) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	volatile uint32_t x246 = UINT32_MAX;
	static int16_t x247 = INT16_MIN;
	static int32_t x248 = -1;
	uint32_t t61 = 1077680U;

	t61 = (x245^(x246|(x247<=x248)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	volatile uint16_t x250 = 15U;
	uint8_t x251 = 6U;
	volatile uint64_t x252 = 1264399569465087LLU;
	volatile int32_t t62 = 1;

	t62 = (x249^(x250|(x251<=x252)));

	if (t62 != -2147483633) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -1;
	static uint8_t x254 = 99U;
	static int8_t x255 = INT8_MIN;
	uint32_t x256 = 111851503U;

	t63 = (x253^(x254|(x255<=x256)));

	if (t63 != -100) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	volatile int16_t x258 = INT16_MAX;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 2097948;

	t64 = (x257^(x258|(x259<=x260)));

	if (t64 != 2147450880) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 454U;
	int16_t x262 = INT16_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t65 = -116;

	t65 = (x261^(x262|(x263<=x264)));

	if (t65 != 32313) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x266 = 2529073564778058LL;
	int64_t t66 = -29793LL;

	t66 = (x265^(x266|(x267<=x268)));

	if (t66 != -2530608975943247LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x270 = UINT16_MAX;
	uint8_t x272 = 1U;
	int32_t t67 = -53284;

	t67 = (x269^(x270|(x271<=x272)));

	if (t67 != -32769) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = -1;
	volatile int32_t x275 = -44066336;
	volatile int32_t t68 = 269;

	t68 = (x273^(x274|(x275<=x276)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = 1;
	int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -500;

	t69 = (x277^(x278|(x279<=x280)));

	if (t69 != 126) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 276804777491LLU;
	int32_t x282 = INT32_MIN;
	int8_t x283 = 2;

	t70 = (x281^(x282|(x283<=x284)));

	if (t70 != 18446743798611031571LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -34;
	static volatile uint8_t x286 = 15U;
	volatile int32_t t71 = -76841;

	t71 = (x285^(x286|(x287<=x288)));

	if (t71 != -47) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	volatile int64_t x290 = -91LL;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = 39U;
	static volatile int64_t t72 = -179830235410279041LL;

	t72 = (x289^(x290|(x291<=x292)));

	if (t72 != 90LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -212735;
	uint8_t x296 = 6U;
	volatile int32_t t73 = -494;

	t73 = (x293^(x294|(x295<=x296)));

	if (t73 != -212482) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int32_t x298 = 120;
	int64_t x299 = -388027496083482931LL;
	volatile int32_t t74 = -102611;

	t74 = (x297^(x298|(x299<=x300)));

	if (t74 != -122) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 13U;
	int32_t x302 = -1;
	uint32_t x303 = 170U;
	int8_t x304 = -6;
	int32_t t75 = -106906947;

	t75 = (x301^(x302|(x303<=x304)));

	if (t75 != -14) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -8700;
	uint16_t x306 = 22437U;
	volatile int32_t x307 = -219565;
	int16_t x308 = INT16_MAX;
	volatile int32_t t76 = 2227;

	t76 = (x305^(x306|(x307<=x308)));

	if (t76 != -30303) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	static volatile int8_t x310 = INT8_MAX;
	int16_t x312 = -215;

	t77 = (x309^(x310|(x311<=x312)));

	if (t77 != -2147483521) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = 159935275U;
	int8_t x315 = INT8_MIN;
	volatile int32_t x316 = -23627;
	volatile int64_t t78 = -1564211685663472032LL;

	t78 = (x313^(x314|(x315<=x316)));

	if (t78 != -9223372036694840533LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 1U;
	int8_t x319 = INT8_MIN;
	int32_t t79 = -1111089;

	t79 = (x317^(x318|(x319<=x320)));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 1256665LLU;
	volatile uint32_t x322 = 544U;
	uint32_t x323 = 50704855U;
	int8_t x324 = -1;
	static volatile uint64_t t80 = 394LLU;

	t80 = (x321^(x322|(x323<=x324)));

	if (t80 != 1257208LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 3U;
	int32_t x326 = 256901;
	int64_t x327 = -628066895747LL;
	int64_t x328 = -87515LL;
	int32_t t81 = 19888925;

	t81 = (x325^(x326|(x327<=x328)));

	if (t81 != 256902) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	static uint64_t x331 = 4439398407601337725LLU;
	static uint32_t x332 = 62373676U;
	static volatile int32_t t82 = -205245;

	t82 = (x329^(x330|(x331<=x332)));

	if (t82 != -2147483521) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = 542576133;
	int16_t x335 = INT16_MAX;
	volatile int32_t t83 = -42702599;

	t83 = (x333^(x334|(x335<=x336)));

	if (t83 != 1604907514) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 14U;
	static uint16_t x338 = 1U;
	uint32_t x339 = 10333U;
	volatile int64_t x340 = INT64_MIN;

	t84 = (x337^(x338|(x339<=x340)));

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	uint16_t x344 = 4U;
	volatile int32_t t85 = 26597039;

	t85 = (x341^(x342|(x343<=x344)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 22;
	uint32_t x346 = 55U;
	int16_t x347 = INT16_MIN;
	static int8_t x348 = INT8_MIN;
	uint32_t t86 = 451U;

	t86 = (x345^(x346|(x347<=x348)));

	if (t86 != 33U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static volatile uint8_t x351 = 6U;
	static int64_t x352 = -1LL;
	int32_t t87 = 500926;

	t87 = (x349^(x350|(x351<=x352)));

	if (t87 != 2147450880) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile uint32_t x355 = 6811478U;
	int32_t x356 = -1;
	static int32_t t88 = 1;

	t88 = (x353^(x354|(x355<=x356)));

	if (t88 != 2147483521) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int8_t x358 = INT8_MAX;

	t89 = (x357^(x358|(x359<=x360)));

	if (t89 != 65408) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -11389378;
	int16_t x362 = INT16_MAX;
	int64_t x363 = INT64_MIN;
	uint16_t x364 = 9536U;
	int32_t t90 = 23452;

	t90 = (x361^(x362|(x363<=x364)));

	if (t90 != -11384383) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = 23U;
	uint32_t x367 = 79U;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -1073027490;

	t91 = (x365^(x366|(x367<=x368)));

	if (t91 != -32745) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -13;
	int64_t x371 = -1LL;
	volatile int64_t x372 = -1LL;
	int32_t t92 = -2;

	t92 = (x369^(x370|(x371<=x372)));

	if (t92 != 13) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static uint64_t x375 = 280212354655570199LLU;
	int32_t t93 = 47759837;

	t93 = (x373^(x374|(x375<=x376)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 12930LLU;
	int16_t x379 = INT16_MAX;
	uint64_t t94 = 15703565LLU;

	t94 = (x377^(x378|(x379<=x380)));

	if (t94 != 2147470717LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MIN;
	static int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	int32_t t95 = 278356789;

	t95 = (x381^(x382|(x383<=x384)));

	if (t95 != -32514) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MIN;
	int32_t t96 = -762267262;

	t96 = (x385^(x386|(x387<=x388)));

	if (t96 != -129) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MIN;
	volatile int16_t x391 = -1;
	volatile uint32_t t97 = 47961U;

	t97 = (x389^(x390|(x391<=x392)));

	if (t97 != 126U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = 49157794;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = -243861LL;
	volatile uint32_t t98 = 19U;

	t98 = (x393^(x394|(x395<=x396)));

	if (t98 != 49157795U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 1;
	static volatile int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	static int32_t t99 = 17908032;

	t99 = (x397^(x398|(x399<=x400)));

	if (t99 != -32767) { NG(); } else { ; }
	
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

