#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MIN;
int32_t t1 = 202;
volatile int8_t x13 = INT8_MAX;
volatile uint64_t t2 = 217190388LLU;
int32_t x17 = -2728134;
static int16_t x19 = INT16_MIN;
uint16_t x22 = UINT16_MAX;
static int8_t x24 = INT8_MIN;
uint64_t x26 = UINT64_MAX;
uint8_t x27 = 11U;
uint32_t x28 = 3835157U;
uint8_t x41 = 2U;
volatile int64_t x51 = -1LL;
int32_t x52 = 251851271;
int32_t x55 = INT32_MAX;
int64_t x58 = 45113844216LL;
static int64_t x59 = -187LL;
uint16_t x67 = 4041U;
int32_t x79 = -1;
static int16_t x86 = 1;
static uint64_t x88 = 7686259325248486013LLU;
static int8_t x90 = -1;
int64_t x95 = 101291LL;
static int8_t x97 = -1;
int16_t x112 = INT16_MIN;
uint64_t x120 = UINT64_MAX;
int64_t x132 = -1LL;
volatile uint16_t x142 = 13749U;
volatile int64_t x150 = -1LL;
int32_t x153 = -1;
volatile int64_t x163 = INT64_MIN;
int64_t t38 = 162816254LL;
int32_t x173 = INT32_MIN;
int64_t x185 = -1LL;
int32_t x189 = -18903527;
volatile int8_t x192 = INT8_MIN;
static int8_t x194 = INT8_MIN;
uint16_t x205 = 4537U;
static int16_t x207 = INT16_MAX;
volatile uint16_t x216 = UINT16_MAX;
volatile int64_t x217 = 442LL;
static int16_t x218 = INT16_MIN;
volatile int16_t x226 = -1;
int64_t x227 = INT64_MIN;
uint64_t t53 = 815935632185622265LLU;
int64_t x237 = -1LL;
uint16_t x245 = 5403U;
static volatile int8_t x247 = INT8_MIN;
uint16_t x256 = UINT16_MAX;
volatile int32_t x268 = 154;
int8_t x276 = -1;
static uint8_t x288 = UINT8_MAX;
int32_t x291 = INT32_MIN;
static int16_t x292 = -1;
static volatile uint16_t x293 = UINT16_MAX;
volatile uint64_t t67 = 244828322227797LLU;
static volatile uint32_t x305 = 562U;
uint16_t x310 = UINT16_MAX;
uint32_t t73 = 688U;
int16_t x329 = 1;
int32_t t75 = -3450269;
static int64_t x339 = -1LL;
volatile int64_t t77 = 13LL;
uint64_t x342 = 106LLU;
int8_t x344 = INT8_MAX;
int16_t x347 = INT16_MIN;
int64_t x358 = -14667201122LL;
uint32_t x360 = 129U;
volatile int16_t x364 = 756;
volatile uint32_t t83 = 1107683014U;
static uint32_t t84 = 354572U;
volatile uint64_t t85 = 29225LLU;
int8_t x382 = INT8_MAX;
volatile uint64_t x383 = UINT64_MAX;
volatile uint8_t x401 = 4U;
volatile int32_t t91 = 1;
static volatile uint32_t x407 = 46510U;
volatile int32_t t93 = -13;
static int32_t x421 = -850;
int16_t x423 = 10;
int64_t x424 = -1081LL;
static int16_t x443 = INT16_MIN;


void f0(void) {
	volatile int16_t x1 = -1;
	static uint64_t x2 = 1725LLU;
	static int16_t x3 = INT16_MAX;
	static volatile uint64_t t0 = 480LLU;

	t0 = ((x1^(x2&x3))+x4);

	if (t0 != 9223372036854774082LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 0;
	volatile int32_t x6 = -1694;
	int16_t x7 = 52;
	int16_t x8 = INT16_MIN;

	t1 = ((x5^(x6&x7))+x8);

	if (t1 != -32736) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = -1;
	volatile int32_t x15 = -436054;
	volatile uint64_t x16 = UINT64_MAX;

	t2 = ((x13^(x14&x15))+x16);

	if (t2 != 18446744073709115604LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = -382LL;
	volatile int64_t x20 = 33956LL;
	volatile int64_t t3 = -16154750983467LL;

	t3 = ((x17^(x18&x19))+x20);

	if (t3 != 2778078LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	static int16_t x23 = INT16_MIN;
	volatile int32_t t4 = -111531139;

	t4 = ((x21^(x22&x23))+x24);

	if (t4 != -65664) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	uint64_t t5 = 41187LLU;

	t5 = ((x25^(x26&x27))+x28);

	if (t5 != 3835040LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 25179U;
	static int8_t x30 = -34;
	static int16_t x31 = 1394;
	volatile int8_t x32 = -31;
	static volatile uint32_t t6 = 3U;

	t6 = ((x29^(x30&x31))+x32);

	if (t6 != 26346U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile int32_t x34 = INT32_MIN;
	int8_t x35 = 11;
	int32_t x36 = INT32_MAX;
	static int32_t t7 = 1459;

	t7 = ((x33^(x34&x35))+x36);

	if (t7 != 2147483519) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 2642001;
	int8_t x38 = INT8_MIN;
	static uint16_t x39 = 13U;
	uint16_t x40 = 1469U;
	int32_t t8 = 30;

	t8 = ((x37^(x38&x39))+x40);

	if (t8 != 2643470) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	uint8_t x43 = 0U;
	uint8_t x44 = 15U;
	int32_t t9 = -200634592;

	t9 = ((x41^(x42&x43))+x44);

	if (t9 != 17) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	volatile uint32_t x46 = 160U;
	volatile int32_t x47 = 781968247;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t10 = 16984U;

	t10 = ((x45^(x46&x47))+x48);

	if (t10 != 2147450912U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 170;
	volatile uint32_t x50 = 4738U;
	volatile int64_t t11 = 12438949LL;

	t11 = ((x49^(x50&x51))+x52);

	if (t11 != 251855919LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = -83658;
	static int32_t x54 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -324;

	t12 = ((x53^(x54&x55))+x56);

	if (t12 != -2147432759) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 15U;
	uint64_t x60 = UINT64_MAX;
	static uint64_t t13 = 266069813934357LLU;

	t13 = ((x57^(x58&x59))+x60);

	if (t13 != 45113844046LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = INT64_MIN;
	int32_t x62 = 12378147;
	static uint32_t x63 = 379U;
	uint32_t x64 = 34561U;
	int64_t t14 = -116551152102564LL;

	t14 = ((x61^(x62&x63))+x64);

	if (t14 != -9223372036854741212LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 1U;
	static int8_t x66 = INT8_MIN;
	int32_t x68 = 23;
	int32_t t15 = -21;

	t15 = ((x65^(x66&x67))+x68);

	if (t15 != 3992) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = 25139U;
	int16_t x72 = INT16_MAX;
	volatile int64_t t16 = 828LL;

	t16 = ((x69^(x70&x71))+x72);

	if (t16 != 32639LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -301906675809LL;
	int8_t x74 = INT8_MIN;
	volatile int8_t x75 = INT8_MIN;
	static int32_t x76 = -1;
	static volatile int64_t t17 = -1946810086363784836LL;

	t17 = ((x73^(x74&x75))+x76);

	if (t17 != 301906675742LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = -37166333982644LL;
	int32_t x78 = INT32_MIN;
	int64_t x80 = 12217LL;
	volatile int64_t t18 = 700LL;

	t18 = ((x77^(x78&x79))+x80);

	if (t18 != 37164517537797LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	uint8_t x82 = 36U;
	uint64_t x83 = 6386LLU;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t19 = 2805LLU;

	t19 = ((x81^(x82&x83))+x84);

	if (t19 != 9223372036854775775LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = -3;
	uint8_t x87 = 43U;
	volatile uint64_t t20 = 46010532708010940LLU;

	t20 = ((x85^(x86&x87))+x88);

	if (t20 != 7686259325248486009LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	static int32_t x92 = INT32_MIN;
	volatile int64_t t21 = 345346138LL;

	t21 = ((x89^(x90&x91))+x92);

	if (t21 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -46;
	int32_t x94 = INT32_MAX;
	int16_t x96 = 5;
	volatile int64_t t22 = 6119180LL;

	t22 = ((x93^(x94&x95))+x96);

	if (t22 != -101250LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = -55;
	int32_t x99 = -11;
	int8_t x100 = 1;
	volatile int32_t t23 = 14;

	t23 = ((x97^(x98&x99))+x100);

	if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 23U;
	int8_t x102 = -1;
	int32_t x103 = 827205568;
	int8_t x104 = 0;
	int32_t t24 = -1025091206;

	t24 = ((x101^(x102&x103))+x104);

	if (t24 != 827205591) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 3U;
	int8_t x106 = -1;
	int8_t x107 = -1;
	uint32_t x108 = 467873341U;
	volatile uint32_t t25 = 827U;

	t25 = ((x105^(x106&x107))+x108);

	if (t25 != 467873337U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 119;
	int64_t x110 = INT64_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	uint64_t t26 = 55722LLU;

	t26 = ((x109^(x110&x111))+x112);

	if (t26 != 9223372036854742920LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 303932705;
	int16_t x114 = -1;
	int32_t x115 = INT32_MIN;
	int32_t x116 = 251100;
	int32_t t27 = 42714;

	t27 = ((x113^(x114&x115))+x116);

	if (t27 != -1843299843) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	static int32_t x118 = -1;
	volatile int64_t x119 = INT64_MIN;
	volatile uint64_t t28 = 3419395099327LLU;

	t28 = ((x117^(x118&x119))+x120);

	if (t28 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 89659;
	uint64_t x126 = 520873561LLU;
	int8_t x127 = 5;
	int8_t x128 = INT8_MIN;
	uint64_t t29 = 166LLU;

	t29 = ((x125^(x126&x127))+x128);

	if (t29 != 89530LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	uint16_t x130 = 3584U;
	int32_t x131 = INT32_MAX;
	volatile int64_t t30 = -217354394LL;

	t30 = ((x129^(x130&x131))+x132);

	if (t30 != -29185LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = 1U;
	volatile int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	int32_t t31 = -18;

	t31 = ((x133^(x134&x135))+x136);

	if (t31 != -32895) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = 30;
	int16_t x138 = 4864;
	int64_t x139 = INT64_MAX;
	uint32_t x140 = 10774U;
	int64_t t32 = 1LL;

	t32 = ((x137^(x138&x139))+x140);

	if (t32 != 15668LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -7;
	static int8_t x143 = -31;
	uint32_t x144 = UINT32_MAX;
	static uint32_t t33 = 5U;

	t33 = ((x141^(x142&x143))+x144);

	if (t33 != 4294953559U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 5524U;
	uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MAX;
	volatile int64_t x148 = -4670012566098576LL;
	volatile int64_t t34 = 117LL;

	t34 = ((x145^(x146&x147))+x148);

	if (t34 != -4670012566038565LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 1500752845U;
	volatile uint64_t x151 = 12008704LLU;
	int32_t x152 = 1;
	volatile uint64_t t35 = 138289793668552010LLU;

	t35 = ((x149^(x150&x151))+x152);

	if (t35 != 1506055886LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x154 = 1548131LLU;
	static uint64_t x155 = 263575033598562LLU;
	int16_t x156 = -1935;
	uint64_t t36 = 2005LLU;

	t36 = ((x153^(x154&x155))+x156);

	if (t36 != 18446744073708004878LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x161 = INT16_MIN;
	int8_t x162 = -41;
	int64_t x164 = INT64_MIN;
	int64_t t37 = 424909945944584LL;

	t37 = ((x161^(x162&x163))+x164);

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = UINT16_MAX;
	static int16_t x170 = INT16_MIN;
	static int64_t x171 = -117185864937806LL;
	uint16_t x172 = 0U;

	t38 = ((x169^(x170&x171))+x172);

	if (t38 != -117185864957953LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = 2615317496590971371LL;
	static volatile uint16_t x175 = 86U;
	int16_t x176 = 6265;
	volatile int64_t t39 = 204230LL;

	t39 = ((x173^(x174&x175))+x176);

	if (t39 != -2147477317LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	volatile int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;
	int64_t t40 = -113524241591LL;

	t40 = ((x177^(x178&x179))+x180);

	if (t40 != 255LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x181 = -1;
	volatile int16_t x182 = -1;
	uint64_t x183 = 1356393252898947LLU;
	uint8_t x184 = 115U;
	uint64_t t41 = 18480254224LLU;

	t41 = ((x181^(x182&x183))+x184);

	if (t41 != 18445387680456652783LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x186 = 1U;
	uint64_t x187 = 17983LLU;
	int8_t x188 = INT8_MAX;
	static uint64_t t42 = 105913481996644224LLU;

	t42 = ((x185^(x186&x187))+x188);

	if (t42 != 125LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x190 = -46;
	static uint32_t x191 = 1895968223U;
	volatile uint32_t t43 = 963U;

	t43 = ((x189^(x190&x191))+x192);

	if (t43 != 2413667147U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	static uint64_t x196 = 42258830053LLU;
	volatile uint64_t t44 = 116894681348LLU;

	t44 = ((x193^(x194&x195))+x196);

	if (t44 != 42258830053LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -1;
	int32_t x198 = 369;
	int32_t x199 = INT32_MIN;
	static volatile int8_t x200 = INT8_MIN;
	static volatile int32_t t45 = 1647;

	t45 = ((x197^(x198&x199))+x200);

	if (t45 != -129) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 489U;
	int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;
	volatile int64_t t46 = -476691969LL;

	t46 = ((x201^(x202&x203))+x204);

	if (t46 != 9223372034707292521LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = -1LL;
	int64_t x208 = -1LL;
	int64_t t47 = 1217324465724505LL;

	t47 = ((x205^(x206&x207))+x208);

	if (t47 != 28229LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	static int8_t x211 = -1;
	volatile int8_t x212 = INT8_MAX;
	int32_t t48 = -7775;

	t48 = ((x209^(x210&x211))+x212);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x213 = 34U;
	uint16_t x214 = 12598U;
	volatile int16_t x215 = -1;
	static int32_t t49 = 2003723;

	t49 = ((x213^(x214&x215))+x216);

	if (t49 != 78099) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x219 = -685303584;
	int8_t x220 = 25;
	volatile int64_t t50 = -120525464209240412LL;

	t50 = ((x217^(x218&x219))+x220);

	if (t50 != -685309485LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MAX;
	int64_t x222 = -1051174622071LL;
	static uint32_t x223 = 125658376U;
	volatile uint8_t x224 = 23U;
	volatile int64_t t51 = -5340LL;

	t51 = ((x221^(x222&x223))+x224);

	if (t51 != 2128862222LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x225 = 420239158LLU;
	int8_t x228 = -1;
	volatile uint64_t t52 = 165LLU;

	t52 = ((x225^(x226&x227))+x228);

	if (t52 != 9223372037275014965LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = INT64_MIN;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 460358LLU;
	static int64_t x232 = 49286255765LL;

	t53 = ((x229^(x230&x231))+x232);

	if (t53 != 9223372086141031643LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = -1;
	uint32_t x234 = 2U;
	int64_t x235 = INT64_MIN;
	volatile int32_t x236 = INT32_MIN;
	int64_t t54 = 8LL;

	t54 = ((x233^(x234&x235))+x236);

	if (t54 != -2147483649LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x238 = UINT32_MAX;
	int8_t x239 = -1;
	int64_t x240 = -1LL;
	int64_t t55 = 927530478170761LL;

	t55 = ((x237^(x238&x239))+x240);

	if (t55 != -4294967297LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x246 = -1;
	volatile int16_t x248 = -3;
	volatile int32_t t56 = -2674;

	t56 = ((x245^(x246&x247))+x248);

	if (t56 != -5480) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	int8_t x250 = 1;
	int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t57 = 3643290LLU;

	t57 = ((x249^(x250&x251))+x252);

	if (t57 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = UINT64_MAX;
	int32_t x254 = -650130;
	volatile int64_t x255 = -801353346980262LL;
	uint64_t t58 = 320653882071405235LLU;

	t58 = ((x253^(x254&x255))+x256);

	if (t58 != 801353347693492LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x265 = INT32_MIN;
	int64_t x266 = 522916881194LL;
	volatile int64_t x267 = INT64_MIN;
	volatile int64_t t59 = -2105LL;

	t59 = ((x265^(x266&x267))+x268);

	if (t59 != -2147483494LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 499991LLU;
	static int8_t x270 = INT8_MIN;
	static uint64_t x271 = 1399719101011LLU;
	int32_t x272 = INT32_MAX;
	volatile uint64_t t60 = 32059LLU;

	t60 = ((x269^(x270&x271))+x272);

	if (t60 != 1401866756886LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = 31012016LL;
	int32_t x275 = -56003;
	volatile int64_t t61 = -9676LL;

	t61 = ((x273^(x274&x275))+x276);

	if (t61 != -9223372036823768017LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x278 = -1;
	int8_t x279 = INT8_MAX;
	int16_t x280 = -3363;
	static uint32_t t62 = 1U;

	t62 = ((x277^(x278&x279))+x280);

	if (t62 != 4294963805U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MAX;
	int8_t x283 = -1;
	int16_t x284 = -24;
	int64_t t63 = 1687870204567LL;

	t63 = ((x281^(x282&x283))+x284);

	if (t63 != 9223372036854743016LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x285 = INT64_MIN;
	uint8_t x286 = 4U;
	static int16_t x287 = INT16_MIN;
	static volatile int64_t t64 = 10587030060053850LL;

	t64 = ((x285^(x286&x287))+x288);

	if (t64 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x289 = 15231226548527LL;
	int16_t x290 = -51;
	int64_t t65 = -159LL;

	t65 = ((x289^(x290&x291))+x292);

	if (t65 != -15230828998354LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = -1LL;
	static int64_t x296 = 100462589LL;
	volatile uint64_t t66 = 882060482295737489LLU;

	t66 = ((x293^(x294&x295))+x296);

	if (t66 != 100397053LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x297 = 3113LLU;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;

	t67 = ((x297^(x298&x299))+x300);

	if (t67 != 9223372039002262568LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x301 = 142127147264LLU;
	volatile int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint64_t t68 = 24LLU;

	t68 = ((x301^(x302&x303))+x304);

	if (t68 != 18446743935877359871LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x306 = 456605210LL;
	uint8_t x307 = UINT8_MAX;
	static uint32_t x308 = 1442863228U;
	volatile int64_t t69 = 5717041013LL;

	t69 = ((x305^(x306&x307))+x308);

	if (t69 != 1442863780LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x309 = 42U;
	int16_t x311 = -4948;
	volatile int8_t x312 = 1;
	int32_t t70 = -19526259;

	t70 = ((x309^(x310&x311))+x312);

	if (t70 != 60551) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = 78327351682694LL;
	uint8_t x314 = 2U;
	int16_t x315 = -556;
	volatile uint16_t x316 = UINT16_MAX;
	int64_t t71 = -3230LL;

	t71 = ((x313^(x314&x315))+x316);

	if (t71 != 78327351748229LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 154786289304LLU;
	int32_t x318 = -16268767;
	uint32_t x319 = 1097820U;
	int64_t x320 = INT64_MAX;
	static uint64_t t72 = 90575768732553315LLU;

	t72 = ((x317^(x318&x319))+x320);

	if (t72 != 9223372191641081495LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x321 = 1;
	int8_t x322 = INT8_MAX;
	volatile int8_t x323 = INT8_MIN;
	uint32_t x324 = 142U;

	t73 = ((x321^(x322&x323))+x324);

	if (t73 != 143U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = 29U;
	static int64_t x326 = 882LL;
	int8_t x327 = 0;
	int8_t x328 = INT8_MIN;
	volatile int64_t t74 = -534431060LL;

	t74 = ((x325^(x326&x327))+x328);

	if (t74 != -99LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 401U;

	t75 = ((x329^(x330&x331))+x332);

	if (t75 != 402) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x333 = INT8_MIN;
	int32_t x334 = -140858;
	uint32_t x335 = 593567931U;
	int16_t x336 = INT16_MAX;
	uint32_t t76 = 172054386U;

	t76 = ((x333^(x334&x335))+x336);

	if (t76 != 3701440257U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x337 = INT64_MAX;
	uint32_t x338 = UINT32_MAX;
	uint8_t x340 = 111U;

	t77 = ((x337^(x338&x339))+x340);

	if (t77 != 9223372032559808623LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x341 = 36U;
	int16_t x343 = INT16_MAX;
	uint64_t t78 = 926598938270LLU;

	t78 = ((x341^(x342&x343))+x344);

	if (t78 != 205LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 23U;
	static uint64_t x346 = 86510436074LLU;
	static volatile uint64_t x348 = 3841844138402750LLU;
	uint64_t t79 = 1598197783615390413LLU;

	t79 = ((x345^(x346&x347))+x348);

	if (t79 != 3841930648806357LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x353 = INT64_MAX;
	volatile uint64_t x354 = 1672216858008437LLU;
	volatile uint8_t x355 = 3U;
	static int64_t x356 = INT64_MIN;
	volatile uint64_t t80 = 179112454299318385LLU;

	t80 = ((x353^(x354&x355))+x356);

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = INT32_MAX;
	int16_t x359 = 1;
	volatile int64_t t81 = 137101855488412LL;

	t81 = ((x357^(x358&x359))+x360);

	if (t81 != 2147483776LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x361 = -1;
	static uint64_t x362 = UINT64_MAX;
	uint16_t x363 = 7636U;
	uint64_t t82 = 1585222LLU;

	t82 = ((x361^(x362&x363))+x364);

	if (t82 != 18446744073709544735LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 1504U;
	uint16_t x368 = UINT16_MAX;

	t83 = ((x365^(x366&x367))+x368);

	if (t83 != 2147549183U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 204U;
	volatile uint16_t x370 = 6346U;
	int8_t x371 = -1;
	static uint32_t x372 = UINT32_MAX;

	t84 = ((x369^(x370&x371))+x372);

	if (t84 != 6149U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = 711491077888559108LLU;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MAX;

	t85 = ((x373^(x374&x375))+x376);

	if (t85 != 711491077888559103LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = INT64_MIN;
	volatile uint16_t x378 = 9U;
	static uint8_t x379 = 1U;
	volatile uint64_t x380 = 812LLU;
	static uint64_t t86 = 2032093LLU;

	t86 = ((x377^(x378&x379))+x380);

	if (t86 != 9223372036854776621LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = 22U;
	int8_t x384 = -1;
	static uint64_t t87 = 426LLU;

	t87 = ((x381^(x382&x383))+x384);

	if (t87 != 104LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = 31197734920084LL;
	int32_t x391 = -100753;
	uint8_t x392 = 55U;
	int64_t t88 = -8LL;

	t88 = ((x389^(x390&x391))+x392);

	if (t88 != -31197734906309LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = 32883608450LLU;
	uint16_t x394 = 95U;
	int16_t x395 = INT16_MIN;
	int32_t x396 = 1084;
	uint64_t t89 = 3412843441491863LLU;

	t89 = ((x393^(x394&x395))+x396);

	if (t89 != 32883609534LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = 0;
	int8_t x399 = INT8_MAX;
	uint16_t x400 = 961U;
	int32_t t90 = 19093;

	t90 = ((x397^(x398&x399))+x400);

	if (t90 != 833) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x402 = INT8_MAX;
	uint8_t x403 = 1U;
	int32_t x404 = INT32_MIN;

	t91 = ((x401^(x402&x403))+x404);

	if (t91 != -2147483643) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x405 = 20;
	int8_t x406 = -1;
	volatile int8_t x408 = -53;
	static uint32_t t92 = 103172926U;

	t92 = ((x405^(x406&x407))+x408);

	if (t92 != 46469U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x409 = INT8_MIN;
	uint8_t x410 = 52U;
	uint16_t x411 = UINT16_MAX;
	int32_t x412 = -1;

	t93 = ((x409^(x410&x411))+x412);

	if (t93 != -77) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x422 = UINT16_MAX;
	int64_t t94 = 62094569686600000LL;

	t94 = ((x421^(x422&x423))+x424);

	if (t94 != -1941LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x425 = 6185360224LLU;
	volatile int64_t x426 = INT64_MIN;
	int8_t x427 = -1;
	volatile int32_t x428 = 221;
	volatile uint64_t t95 = 40120676618LLU;

	t95 = ((x425^(x426&x427))+x428);

	if (t95 != 9223372043040136253LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -7LL;
	static uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MIN;
	static volatile int32_t x432 = -1;
	uint64_t t96 = 15LLU;

	t96 = ((x429^(x430&x431))+x432);

	if (t96 != 32760LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = INT32_MIN;
	int64_t x434 = -91762774908450430LL;
	int16_t x435 = INT16_MIN;
	static volatile int32_t x436 = INT32_MIN;
	volatile int64_t t97 = -385415110910219730LL;

	t97 = ((x433^(x434&x435))+x436);

	if (t97 != 91762771082477568LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x437 = 977259LLU;
	int16_t x438 = INT16_MIN;
	static volatile uint8_t x439 = 7U;
	volatile int64_t x440 = 2726076LL;
	uint64_t t98 = 8459266860LLU;

	t98 = ((x437^(x438&x439))+x440);

	if (t98 != 3703335LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x441 = INT16_MIN;
	static uint8_t x442 = 70U;
	static uint32_t x444 = 982U;
	volatile uint32_t t99 = 1973U;

	t99 = ((x441^(x442&x443))+x444);

	if (t99 != 4294935510U) { NG(); } else { ; }
	
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

