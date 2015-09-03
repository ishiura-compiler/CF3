#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 3;
volatile uint64_t t0 = 82016167968486LLU;
uint16_t x6 = UINT16_MAX;
int32_t t1 = -3;
volatile int64_t x12 = INT64_MIN;
volatile uint64_t t4 = 579440155978LLU;
uint16_t x28 = 7U;
int64_t x29 = INT64_MIN;
int16_t x36 = INT16_MAX;
uint8_t x37 = 3U;
int64_t x39 = -1LL;
volatile uint32_t t11 = 1651247454U;
uint64_t x54 = UINT64_MAX;
static volatile int64_t x55 = 47903LL;
int8_t x60 = -1;
static uint16_t x64 = UINT16_MAX;
int8_t x68 = -1;
int64_t x75 = 14968604LL;
int64_t x83 = INT64_MAX;
static int64_t x85 = INT64_MIN;
int64_t x86 = -1LL;
int64_t t20 = 40706477357LL;
int16_t x92 = INT16_MIN;
int16_t x101 = -1;
static volatile uint8_t x102 = 58U;
int16_t x103 = INT16_MAX;
int32_t x104 = 119;
volatile int32_t t23 = -447179;
uint32_t x105 = UINT32_MAX;
volatile uint64_t t25 = 1349823454310LLU;
static int8_t x114 = INT8_MIN;
uint8_t x116 = 36U;
int32_t x118 = 4044414;
static int8_t x124 = INT8_MIN;
int64_t x125 = 1050631308140LL;
int8_t x127 = INT8_MAX;
volatile int16_t x133 = INT16_MIN;
volatile int64_t t31 = -249388102909840LL;
uint16_t x146 = 22U;
volatile int32_t x148 = INT32_MIN;
static volatile int8_t x151 = 1;
int32_t x167 = 2700;
static int64_t x168 = INT64_MIN;
static int8_t x169 = INT8_MIN;
static volatile uint64_t x185 = 15360533LLU;
static int32_t x191 = 54272;
int8_t x192 = INT8_MIN;
static uint32_t t46 = 12129690U;
int8_t x207 = INT8_MAX;
volatile uint64_t t48 = 45388764LLU;
static volatile uint64_t x209 = 37917585380LLU;
int8_t x213 = 0;
static int32_t x217 = 3163;
static uint32_t x224 = 28U;
int16_t x225 = -1;
int8_t x231 = INT8_MAX;
uint32_t x240 = 20556U;
uint8_t x245 = UINT8_MAX;
static uint8_t x255 = UINT8_MAX;
int32_t x267 = -1;
static uint64_t t64 = 15971107343939LLU;
int8_t x273 = INT8_MIN;
int32_t x277 = 5;
volatile int32_t t66 = 119507897;
uint32_t x285 = 1292706U;
int64_t x286 = INT64_MIN;
int8_t x290 = -1;
int32_t t68 = -3;
int8_t x307 = INT8_MIN;
int8_t x308 = -1;
int64_t x309 = -309154473LL;
int32_t x312 = INT32_MAX;
int64_t t73 = -1145342638161LL;
uint32_t x313 = UINT32_MAX;
int64_t x314 = INT64_MAX;
int8_t x320 = -28;
int64_t t75 = 22325334LL;
int16_t x323 = 925;
static uint16_t x324 = 4036U;
int32_t x327 = -7555286;
volatile uint8_t x331 = 0U;
static int64_t x341 = INT64_MIN;
int64_t t81 = -153180278LL;
int8_t x347 = INT8_MIN;
uint8_t x354 = 0U;
volatile int64_t x355 = -461456186639085293LL;
static uint8_t x357 = 40U;
uint8_t x366 = 59U;
static int64_t t87 = 3613857767LL;
uint64_t x371 = 998613020LLU;
volatile uint64_t t88 = 3129951251503LLU;
int32_t x378 = INT32_MAX;
int64_t x381 = -6710585475917445LL;
uint16_t x390 = 5U;
int64_t x394 = -34206199LL;
volatile int16_t x396 = INT16_MIN;
static int32_t x399 = -1;
int32_t x400 = INT32_MIN;
int64_t x401 = 7321002810044657LL;
int32_t x404 = INT32_MIN;
volatile int32_t x406 = INT32_MIN;
static uint32_t t96 = 174795U;
int8_t x417 = INT8_MAX;
static volatile int32_t x419 = -1;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 405058194742167179LLU;
	volatile uint16_t x3 = 3U;

	t0 = (x1^((x2&x3)+x4));

	if (t0 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -39;
	volatile uint16_t x7 = UINT16_MAX;
	static volatile int32_t x8 = 1046;

	t1 = (x5^((x6&x7)+x8));

	if (t1 != -66612) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = 13;
	volatile int64_t x11 = -386300099017LL;
	static volatile int64_t t2 = 117170LL;

	t2 = (x9^((x10&x11)+x12));

	if (t2 != -9223372036854710278LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 139;
	volatile uint32_t x14 = 1U;
	volatile int16_t x15 = INT16_MIN;
	static uint32_t x16 = 21U;
	static uint32_t t3 = 3506103U;

	t3 = (x13^((x14&x15)+x16));

	if (t3 != 158U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 8466U;
	static int8_t x18 = INT8_MIN;
	static uint8_t x19 = 3U;
	static volatile uint64_t x20 = UINT64_MAX;

	t4 = (x17^((x18&x19)+x20));

	if (t4 != 18446744073709543149LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int32_t x22 = INT32_MAX;
	static int16_t x23 = INT16_MAX;
	uint16_t x24 = 1104U;
	volatile int32_t t5 = 8;

	t5 = (x21^((x22&x23)+x24));

	if (t5 != 2147449776) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 10278192LLU;
	static int64_t x26 = INT64_MIN;
	uint16_t x27 = 3822U;
	volatile uint64_t t6 = 437441334589280628LLU;

	t6 = (x25^((x26&x27)+x28));

	if (t6 != 10278199LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	volatile int64_t x31 = 2361832314LL;
	uint8_t x32 = 12U;
	volatile int64_t t7 = -111LL;

	t7 = (x29^((x30&x31)+x32));

	if (t7 != -9223372034707292148LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	volatile uint16_t x35 = 0U;
	volatile int64_t t8 = -17500751537LL;

	t8 = (x33^((x34&x35)+x36));

	if (t8 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MIN;
	uint16_t x40 = 10471U;
	volatile int64_t t9 = -128950189307395004LL;

	t9 = (x37^((x38&x39)+x40));

	if (t9 != -22300LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint32_t x42 = 8600U;
	int8_t x43 = INT8_MAX;
	static int16_t x44 = 0;
	volatile uint32_t t10 = 35149726U;

	t10 = (x41^((x42&x43)+x44));

	if (t10 != 4294934552U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -18087;
	int32_t x46 = -2900075;
	uint16_t x47 = 1130U;
	volatile uint32_t x48 = UINT32_MAX;

	t11 = (x45^((x46&x47)+x48));

	if (t11 != 4294949542U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int32_t x50 = -1;
	volatile uint8_t x51 = UINT8_MAX;
	int32_t x52 = -34374;
	volatile int64_t t12 = -41540455614940822LL;

	t12 = (x49^((x50&x51)+x52));

	if (t12 != -9223372036854741690LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1091U;
	volatile uint32_t x56 = 426U;
	uint64_t t13 = 642LLU;

	t13 = (x53^((x54&x55)+x56));

	if (t13 != 47242LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	volatile uint64_t x58 = 6907911893206298392LLU;
	uint16_t x59 = 397U;
	volatile uint64_t t14 = 22493862725870LLU;

	t14 = (x57^((x58&x59)+x60));

	if (t14 != 9223372036854775544LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int8_t x62 = 4;
	int32_t x63 = -735689;
	int64_t t15 = -52496LL;

	t15 = (x61^((x62&x63)+x64));

	if (t15 != 9223372036854710268LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int64_t x66 = 8398LL;
	volatile int16_t x67 = INT16_MIN;
	int64_t t16 = 493094LL;

	t16 = (x65^((x66&x67)+x68));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	uint16_t x74 = 0U;
	int32_t x76 = -1;
	volatile int64_t t17 = 266780802LL;

	t17 = (x73^((x74&x75)+x76));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -36;
	uint8_t x78 = 12U;
	int32_t x79 = INT32_MIN;
	volatile int32_t x80 = 2;
	int32_t t18 = -3202204;

	t18 = (x77^((x78&x79)+x80));

	if (t18 != -34) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int16_t x82 = INT16_MIN;
	uint32_t x84 = 1949U;
	int64_t t19 = -311983435643963LL;

	t19 = (x81^((x82&x83)+x84));

	if (t19 != 9223372036854741090LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x87 = 1575U;
	uint8_t x88 = UINT8_MAX;

	t20 = (x85^((x86&x87)+x88));

	if (t20 != -9223372036854773978LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -52;
	volatile int64_t x91 = 81407LL;
	static volatile int64_t t21 = 5463LL;

	t21 = (x89^((x90&x91)+x92));

	if (t21 != -9223372036854727220LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = -469LL;
	static uint32_t x95 = 1554680883U;
	int32_t x96 = -1;
	volatile uint64_t t22 = 1LLU;

	t22 = (x93^((x94&x95)+x96));

	if (t22 != 18446744072154870749LLU) { NG(); } else { ; }
	
}

void f23(void) {


	t23 = (x101^((x102&x103)+x104));

	if (t23 != -178) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x106 = INT8_MIN;
	static uint64_t x107 = UINT64_MAX;
	int16_t x108 = 8226;
	uint64_t t24 = 429657LLU;

	t24 = (x105^((x106&x107)+x108));

	if (t24 != 4294959197LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = -15;
	uint64_t x110 = 22067272949LLU;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;

	t25 = (x109^((x110&x111)+x112));

	if (t25 != 18446744051642335217LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 124U;
	static uint8_t x115 = 42U;
	volatile uint32_t t26 = 33537U;

	t26 = (x113^((x114&x115)+x116));

	if (t26 != 88U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = 29;
	static uint64_t x119 = 25LLU;
	int32_t x120 = INT32_MAX;
	uint64_t t27 = 3605030258LLU;

	t27 = (x117^((x118&x119)+x120));

	if (t27 != 2147483658LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 4020LLU;
	int8_t x122 = -1;
	int16_t x123 = -790;
	volatile uint64_t t28 = 69693564LLU;

	t28 = (x121^((x122&x123)+x124));

	if (t28 != 18446744073709548510LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 7U;
	int32_t x128 = INT32_MIN;
	static int64_t t29 = 199376LL;

	t29 = (x125^((x126&x127)+x128));

	if (t29 != -1051755183253LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x129 = UINT8_MAX;
	static volatile int64_t x130 = INT64_MAX;
	static int32_t x131 = INT32_MIN;
	int8_t x132 = -3;
	int64_t t30 = -605069033LL;

	t30 = (x129^((x130&x131)+x132));

	if (t30 != 9223372034707291906LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = -61384;
	int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;

	t31 = (x133^((x134&x135)+x136));

	if (t31 != 36920LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -13;
	int64_t x138 = 14295564464235912LL;
	volatile int32_t x139 = INT32_MIN;
	volatile int8_t x140 = -1;
	volatile int64_t t32 = 1564635128000054LL;

	t32 = (x137^((x138&x139)+x140));

	if (t32 != -14295562421534708LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x141 = INT8_MAX;
	int32_t x142 = -32768137;
	static volatile int8_t x143 = INT8_MIN;
	volatile int16_t x144 = 2274;
	volatile int32_t t33 = 122561;

	t33 = (x141^((x142&x143)+x144));

	if (t33 != -32766051) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int8_t x147 = -37;
	volatile uint32_t t34 = 14989U;

	t34 = (x145^((x146&x147)+x148));

	if (t34 != 2147483629U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	int64_t x150 = INT64_MIN;
	uint8_t x152 = 90U;
	volatile int64_t t35 = -767562LL;

	t35 = (x149^((x150&x151)+x152));

	if (t35 != -91LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = INT64_MIN;
	volatile uint32_t x158 = UINT32_MAX;
	volatile uint32_t x159 = 2212U;
	static int64_t x160 = -1LL;
	volatile int64_t t36 = -275982348530950831LL;

	t36 = (x157^((x158&x159)+x160));

	if (t36 != -9223372036854773597LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = INT64_MAX;
	static uint64_t x162 = 374315LLU;
	int64_t x163 = INT64_MIN;
	int64_t x164 = -1LL;
	uint64_t t37 = 6927646819093512LLU;

	t37 = (x161^((x162&x163)+x164));

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -341618;
	volatile int8_t x166 = INT8_MIN;
	int64_t t38 = -636114959LL;

	t38 = (x165^((x166&x167)+x168));

	if (t38 != 9223372036854432526LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x170 = -1;
	static int64_t x171 = 37533411188869936LL;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t39 = 866407LLU;

	t39 = (x169^((x170&x171)+x172));

	if (t39 != 18409210662520681647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x173 = -114;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = UINT16_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t40 = 44506U;

	t40 = (x173^((x174&x175)+x176));

	if (t40 != 4294934640U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 10;
	volatile uint32_t x178 = 126908U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t41 = -24LL;

	t41 = (x177^((x178&x179)+x180));

	if (t41 != -9223372036854677494LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MAX;
	volatile int16_t x182 = -1;
	static uint32_t x183 = UINT32_MAX;
	int32_t x184 = -1;
	static volatile uint32_t t42 = 1025361U;

	t42 = (x181^((x182&x183)+x184));

	if (t42 != 2147483649U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x186 = 66283U;
	int32_t x187 = INT32_MAX;
	static int8_t x188 = INT8_MIN;
	uint64_t t43 = 14LLU;

	t43 = (x185^((x186&x187)+x188));

	if (t43 != 15425662LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	static uint32_t t44 = 76643601U;

	t44 = (x189^((x190&x191)+x192));

	if (t44 != 2147537792U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	volatile int64_t x194 = -34751201927600050LL;
	int8_t x195 = 1;
	int8_t x196 = -1;
	int64_t t45 = -423LL;

	t45 = (x193^((x194&x195)+x196));

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = -1;
	uint32_t x199 = 11279U;
	int8_t x200 = INT8_MIN;

	t46 = (x197^((x198&x199)+x200));

	if (t46 != 2147494799U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = 575675U;
	static int64_t x203 = INT64_MAX;
	volatile int8_t x204 = INT8_MIN;
	int64_t t47 = -144704141392578776LL;

	t47 = (x201^((x202&x203)+x204));

	if (t47 != -571333LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -306079;
	int8_t x206 = -1;
	uint64_t x208 = UINT64_MAX;

	t48 = (x205^((x206&x207)+x208));

	if (t48 != 18446744073709245471LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x210 = INT16_MIN;
	volatile int16_t x211 = -1;
	int16_t x212 = 15;
	uint64_t t49 = 1873923279855LLU;

	t49 = (x209^((x210&x211)+x212));

	if (t49 != 18446744035791990763LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = 22;
	volatile int16_t x215 = INT16_MAX;
	static volatile int16_t x216 = 0;
	volatile int32_t t50 = -3925;

	t50 = (x213^((x214&x215)+x216));

	if (t50 != 22) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x218 = UINT32_MAX;
	volatile int8_t x219 = INT8_MIN;
	static uint32_t x220 = 1644841144U;
	uint32_t t51 = 96288U;

	t51 = (x217^((x218&x219)+x220));

	if (t51 != 1644840035U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	static int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	uint32_t t52 = 4U;

	t52 = (x221^((x222&x223)+x224));

	if (t52 != 32668U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x226 = 420U;
	volatile int8_t x227 = 11;
	int16_t x228 = INT16_MIN;
	volatile uint32_t t53 = 173388U;

	t53 = (x225^((x226&x227)+x228));

	if (t53 != 32767U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x229 = 676306239LL;
	int8_t x230 = INT8_MIN;
	int64_t x232 = -1LL;
	int64_t t54 = 12923341LL;

	t54 = (x229^((x230&x231)+x232));

	if (t54 != -676306240LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MAX;
	uint16_t x234 = 1252U;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = 37U;
	volatile int32_t t55 = -9967487;

	t55 = (x233^((x234&x235)+x236));

	if (t55 != 1242) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = -1LL;
	uint64_t x238 = 3970040275040LLU;
	int64_t x239 = -98632LL;
	uint64_t t56 = 779474353LLU;

	t56 = (x237^((x238&x239)+x240));

	if (t56 != 18446740103669321619LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x242 = 119U;
	volatile uint8_t x243 = UINT8_MAX;
	int16_t x244 = -9892;
	volatile uint32_t t57 = 0U;

	t57 = (x241^((x242&x243)+x244));

	if (t57 != 22995U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x246 = -1;
	int64_t x247 = 2570839258LL;
	int32_t x248 = INT32_MIN;
	static volatile int64_t t58 = 235958731LL;

	t58 = (x245^((x246&x247)+x248));

	if (t58 != 423355429LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile uint8_t x250 = 23U;
	int16_t x251 = INT16_MIN;
	int8_t x252 = 1;
	static int32_t t59 = 56;

	t59 = (x249^((x250&x251)+x252));

	if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = INT8_MIN;
	int16_t x254 = -107;
	int32_t x256 = -37625260;
	volatile int32_t t60 = 416903120;

	t60 = (x253^((x254&x255)+x256));

	if (t60 != 37625193) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = -7;
	static uint16_t x258 = UINT16_MAX;
	static int8_t x259 = -1;
	static uint8_t x260 = 21U;
	int32_t t61 = -7;

	t61 = (x257^((x258&x259)+x260));

	if (t61 != -65555) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x261 = 113U;
	int32_t x262 = INT32_MIN;
	volatile int16_t x263 = INT16_MIN;
	uint64_t x264 = 31023LLU;
	volatile uint64_t t62 = 2010LLU;

	t62 = (x261^((x262&x263)+x264));

	if (t62 != 18446744071562099038LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -24349581603150LL;
	int8_t x266 = INT8_MIN;
	uint32_t x268 = 811072014U;
	int64_t t63 = 11357LL;

	t63 = (x265^((x266&x267)+x268));

	if (t63 != -24349855615172LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 10U;
	uint32_t x271 = 919514U;
	int8_t x272 = -1;

	t64 = (x269^((x270&x271)+x272));

	if (t64 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	static int64_t x276 = 1463964673397662LL;
	volatile int64_t t65 = -34LL;

	t65 = (x273^((x274&x275)+x276));

	if (t65 != -1463968968365027LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x278 = -29;
	int8_t x279 = 54;
	static int16_t x280 = 1;

	t66 = (x277^((x278&x279)+x280));

	if (t66 != 38) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x287 = 2697;
	int64_t x288 = INT64_MIN;
	static int64_t t67 = -1088LL;

	t67 = (x285^((x286&x287)+x288));

	if (t67 != -9223372036853483102LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 27U;
	int16_t x291 = -252;
	volatile uint8_t x292 = 125U;

	t68 = (x289^((x290&x291)+x292));

	if (t68 != -102) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	int32_t x294 = INT32_MAX;
	int16_t x295 = 2;
	static uint32_t x296 = 1U;
	uint32_t t69 = 284872U;

	t69 = (x293^((x294&x295)+x296));

	if (t69 != 4294967292U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = -1LL;
	uint16_t x298 = 246U;
	static int64_t x299 = INT64_MIN;
	static int16_t x300 = -4032;
	volatile int64_t t70 = -1135774LL;

	t70 = (x297^((x298&x299)+x300));

	if (t70 != 4031LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 76U;
	uint32_t x302 = 1U;
	static int8_t x303 = -1;
	uint8_t x304 = 31U;
	volatile uint32_t t71 = 118351U;

	t71 = (x301^((x302&x303)+x304));

	if (t71 != 108U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = -1;
	volatile int16_t x306 = -1;
	int32_t t72 = -18;

	t72 = (x305^((x306&x307)+x308));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x310 = INT8_MIN;
	int64_t x311 = -107252739306LL;

	t73 = (x309^((x310&x311)+x312));

	if (t73 != 104869117864LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x315 = 41U;
	int32_t x316 = INT32_MIN;
	volatile int64_t t74 = 6291079180809LL;

	t74 = (x313^((x314&x315)+x316));

	if (t74 != -2147483690LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	uint32_t x318 = 6258U;
	int64_t x319 = -4161302876215LL;

	t75 = (x317^((x318&x319)+x320));

	if (t75 != -2085LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -1;
	int64_t x322 = 2200193LL;
	int64_t t76 = -5796944312LL;

	t76 = (x321^((x322&x323)+x324));

	if (t76 != -4678LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x325 = 417151LLU;
	int16_t x326 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t77 = 416463LLU;

	t77 = (x325^((x326&x327)+x328));

	if (t77 != 18446744073709152853LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 1U;
	uint8_t x330 = 6U;
	int8_t x332 = -2;
	int32_t t78 = 3;

	t78 = (x329^((x330&x331)+x332));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 0U;
	int16_t x335 = INT16_MAX;
	volatile int64_t x336 = INT64_MIN;
	int64_t t79 = -121LL;

	t79 = (x333^((x334&x335)+x336));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -1LL;
	int16_t x338 = -1;
	volatile int32_t x339 = INT32_MIN;
	volatile int16_t x340 = INT16_MAX;
	int64_t t80 = -57591115671LL;

	t80 = (x337^((x338&x339)+x340));

	if (t80 != 2147450880LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x342 = 128027499;
	volatile uint32_t x343 = 503126U;
	static int64_t x344 = INT64_MIN;

	t81 = (x341^((x342&x343)+x344));

	if (t81 != 100674LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 4726U;
	int32_t x346 = -1;
	int16_t x348 = -1;
	static int32_t t82 = 472982893;

	t82 = (x345^((x346&x347)+x348));

	if (t82 != -4855) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 7774U;
	int16_t x350 = -1;
	static int32_t x351 = -1;
	int32_t x352 = -6210352;
	int32_t t83 = -637134;

	t83 = (x349^((x350&x351)+x352));

	if (t83 != -6217071) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x353 = INT16_MIN;
	uint8_t x356 = 21U;
	int64_t t84 = -6080932466LL;

	t84 = (x353^((x354&x355)+x356));

	if (t84 != -32747LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t85 = 1713U;

	t85 = (x357^((x358&x359)+x360));

	if (t85 != 4294934487U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x361 = 1U;
	int32_t x362 = INT32_MIN;
	static volatile uint64_t x363 = 41LLU;
	int8_t x364 = INT8_MIN;
	uint64_t t86 = 227529602LLU;

	t86 = (x361^((x362&x363)+x364));

	if (t86 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = -62771244823LL;
	int16_t x367 = 4127;
	static uint16_t x368 = 22624U;

	t87 = (x365^((x366&x367)+x368));

	if (t87 != -62771263342LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = 14126718LL;
	uint32_t x370 = 3834858U;
	volatile uint32_t x372 = 6385U;

	t88 = (x369^((x370&x371)+x372));

	if (t88 != 14096007LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MIN;
	uint32_t x379 = UINT32_MAX;
	uint32_t x380 = UINT32_MAX;
	static volatile uint32_t t89 = 39558642U;

	t89 = (x377^((x378&x379)+x380));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x382 = INT32_MAX;
	uint8_t x383 = 1U;
	int16_t x384 = -1;
	volatile int64_t t90 = -172893422993560LL;

	t90 = (x381^((x382&x383)+x384));

	if (t90 != -6710585475917445LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MAX;
	static uint8_t x386 = 4U;
	int8_t x387 = INT8_MIN;
	static int64_t x388 = INT64_MAX;
	int64_t t91 = -681LL;

	t91 = (x385^((x386&x387)+x388));

	if (t91 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x389 = -7504;
	int64_t x391 = INT64_MAX;
	volatile int64_t x392 = 1629194971LL;
	int64_t t92 = -860591227743LL;

	t92 = (x389^((x390&x391)+x392));

	if (t92 != -1629198256LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = -1;
	volatile int8_t x395 = 1;
	volatile int64_t t93 = -7604255089201LL;

	t93 = (x393^((x394&x395)+x396));

	if (t93 != 32766LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x397 = -499424960253749571LL;
	volatile int64_t x398 = -2698LL;
	int64_t t94 = 2564900242030328LL;

	t94 = (x397^((x398&x399)+x400));

	if (t94 != 499424958106264523LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x402 = 613368797357282496LL;
	volatile int64_t x403 = -27059809490942065LL;
	volatile int64_t t95 = -310500295329544942LL;

	t95 = (x401^((x402&x403)+x404));

	if (t95 != 619560798132270193LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MAX;
	uint32_t x407 = 2952604U;
	int8_t x408 = INT8_MIN;

	t96 = (x405^((x406&x407)+x408));

	if (t96 != 4294934655U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = 599628LLU;
	int32_t x410 = INT32_MIN;
	static volatile uint32_t x411 = 135U;
	volatile int16_t x412 = INT16_MIN;
	volatile uint64_t t97 = 233LLU;

	t97 = (x409^((x410&x411)+x412));

	if (t97 != 4294354508LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = UINT8_MAX;
	uint64_t x415 = 580542730738292060LLU;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t98 = 52877882LLU;

	t98 = (x413^((x414&x415)+x416));

	if (t98 != 32732LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x418 = 0;
	static uint16_t x420 = 2387U;
	volatile int32_t t99 = 27;

	t99 = (x417^((x418&x419)+x420));

	if (t99 != 2348) { NG(); } else { ; }
	
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

