#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = 25;
uint16_t x4 = UINT16_MAX;
volatile int8_t x7 = 1;
static int8_t x12 = INT8_MIN;
int64_t x13 = -1LL;
volatile int8_t x16 = INT8_MIN;
int64_t x20 = INT64_MIN;
uint16_t x24 = 13U;
uint16_t x26 = 2U;
int64_t x33 = INT64_MAX;
int16_t x36 = INT16_MAX;
static volatile int64_t t13 = -259656622525LL;
static int64_t x58 = INT64_MIN;
uint32_t t15 = 110674U;
int16_t x75 = INT16_MIN;
static int64_t t18 = 1783226LL;
int8_t x77 = INT8_MAX;
uint32_t x85 = UINT32_MAX;
int64_t x87 = INT64_MIN;
static int8_t x90 = -3;
volatile int32_t t21 = 94415039;
static uint64_t x97 = 218911LLU;
static int16_t x102 = INT16_MAX;
int64_t x103 = 166LL;
int16_t x106 = INT16_MIN;
int64_t x109 = -42187878590953LL;
uint16_t x112 = UINT16_MAX;
uint64_t x115 = UINT64_MAX;
int32_t x122 = 12057176;
volatile uint16_t x127 = 5333U;
volatile int64_t x131 = -1LL;
volatile int8_t x132 = 42;
int16_t x133 = INT16_MAX;
uint64_t x137 = UINT64_MAX;
static int16_t x140 = INT16_MAX;
int8_t x141 = 0;
volatile int8_t x145 = -1;
uint16_t x146 = 1U;
uint8_t x147 = 57U;
static volatile int8_t x151 = -12;
static int8_t x152 = -1;
int32_t x154 = INT32_MIN;
int64_t x155 = INT64_MAX;
int32_t x159 = 922458564;
static volatile int64_t t38 = 23328LL;
int64_t t39 = INT64_MIN;
uint64_t t40 = 27306626LLU;
static int16_t x171 = INT16_MIN;
volatile int8_t x172 = -1;
volatile uint64_t t41 = 132507181051LLU;
uint32_t x176 = 39U;
uint8_t x180 = UINT8_MAX;
volatile int64_t t43 = -178771602832309LL;
static int64_t x189 = INT64_MAX;
uint64_t t45 = 1950072962512481895LLU;
uint64_t x198 = UINT64_MAX;
volatile int16_t x199 = -1;
static int16_t x200 = 2201;
uint8_t x202 = UINT8_MAX;
static uint64_t x206 = 8301188642320547LLU;
int16_t x212 = INT16_MAX;
int32_t x214 = INT32_MAX;
int32_t x216 = INT32_MAX;
volatile int8_t x221 = INT8_MIN;
int64_t x222 = INT64_MIN;
static int32_t x224 = 36380;
uint8_t x226 = UINT8_MAX;
int8_t x233 = 16;
int64_t x234 = INT64_MIN;
uint8_t x238 = 29U;
int8_t x242 = -1;
volatile int8_t x243 = INT8_MAX;
volatile uint8_t x247 = UINT8_MAX;
uint64_t x250 = 2527843LLU;
static volatile uint64_t t60 = 3388118663056LLU;
uint16_t x258 = 59U;
volatile int64_t t61 = -3996239974368883LL;
static int64_t x261 = INT64_MAX;
static int8_t x267 = -1;
uint8_t x270 = 18U;
int16_t x276 = -1;
int16_t x279 = -1;
int64_t t66 = 5260339LL;
int16_t x288 = INT16_MIN;
static uint16_t x289 = 8U;
volatile int32_t t69 = 28218401;
uint16_t x294 = 11068U;
static volatile int64_t t70 = 24LL;
uint8_t x308 = UINT8_MAX;
uint16_t x312 = UINT16_MAX;
volatile uint64_t t73 = 195580LLU;
int8_t x319 = -1;
uint8_t x321 = 0U;
int16_t x323 = -1;
static uint16_t x324 = 38U;
int32_t x325 = INT32_MIN;
int64_t x332 = INT64_MIN;
int32_t x338 = -1;
int8_t x344 = INT8_MIN;
volatile int32_t x345 = INT32_MIN;
static int16_t x346 = -230;
int64_t t82 = -3892799100542307975LL;
int32_t x352 = INT32_MIN;
volatile uint32_t t84 = 704639976U;
int8_t x357 = -42;
uint64_t t85 = 556677137913277LLU;
int64_t x366 = INT64_MAX;
int8_t x368 = INT8_MIN;
static int16_t x369 = INT16_MIN;
uint64_t x371 = UINT64_MAX;
uint16_t x390 = 29861U;
int16_t x391 = -858;
volatile int32_t t93 = -261128921;
static uint64_t x408 = 133396LLU;
int16_t x411 = 2035;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int64_t x2 = INT64_MIN;
	volatile int64_t t0 = -72LL;

	t0 = (x1^((x2|x3)%x4));

	if (t0 != -4294934554LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	volatile int64_t x8 = 52085LL;
	static int64_t t1 = 6215LL;

	t1 = (x5^((x6|x7)%x8));

	if (t1 != -4294934530LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 860799056LLU;
	int32_t x10 = INT32_MAX;
	static uint64_t x11 = 19224821LLU;
	uint64_t t2 = 7237324LLU;

	t2 = (x9^((x10|x11)%x12));

	if (t2 != 1286684591LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	uint32_t x15 = 1U;
	int64_t t3 = 111486LL;

	t3 = (x13^((x14|x15)%x16));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	volatile int64_t t4 = 4162LL;

	t4 = (x17^((x18|x19)%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -7352;
	int32_t x22 = INT32_MAX;
	int64_t x23 = INT64_MIN;
	int64_t t5 = -944238LL;

	t5 = (x21^((x22|x23)%x24));

	if (t5 != 7357LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -104053LL;
	int64_t x27 = 1499571560952LL;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 215439619LL;

	t6 = (x25^((x26|x27)%x28));

	if (t6 != -1499571664783LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 0;
	volatile int8_t x30 = INT8_MAX;
	int32_t x31 = -1;
	static int32_t x32 = -470;
	static int32_t t7 = -995;

	t7 = (x29^((x30|x31)%x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x34 = UINT8_MAX;
	uint16_t x35 = 717U;
	volatile int64_t t8 = 65378694747994523LL;

	t8 = (x33^((x34|x35)%x36));

	if (t8 != 9223372036854775040LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 196;
	static int64_t x38 = 24LL;
	static volatile int64_t x39 = -1LL;
	static uint16_t x40 = 2U;
	volatile int64_t t9 = -1013LL;

	t9 = (x37^((x38|x39)%x40));

	if (t9 != -197LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -105749;
	uint8_t x42 = 24U;
	volatile int16_t x43 = 1;
	int32_t x44 = -9620175;
	int32_t t10 = 25;

	t10 = (x41^((x42|x43)%x44));

	if (t10 != -105742) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 207186LL;
	volatile int64_t x46 = INT64_MAX;
	volatile int8_t x47 = 10;
	static uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 51884146666LLU;

	t11 = (x45^((x46|x47)%x48));

	if (t11 != 9223372036854568621LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 1424668826612404239LLU;
	int8_t x50 = INT8_MIN;
	volatile int64_t x51 = 1007357994113036342LL;
	uint8_t x52 = 4U;
	static uint64_t t12 = 588326951LLU;

	t12 = (x49^((x50|x51)%x52));

	if (t12 != 17022075247097147377LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -48;
	int8_t x54 = INT8_MAX;
	int8_t x55 = INT8_MIN;
	static int64_t x56 = 3501362258742LL;

	t13 = (x53^((x54|x55)%x56));

	if (t13 != 47LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MAX;
	uint16_t x59 = 2U;
	int8_t x60 = -1;
	volatile int64_t t14 = 1539245253037881LL;

	t14 = (x57^((x58|x59)%x60));

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 29;
	volatile uint8_t x62 = UINT8_MAX;
	uint32_t x63 = 183U;
	int16_t x64 = -1;

	t15 = (x61^((x62|x63)%x64));

	if (t15 != 226U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static int8_t x66 = 25;
	uint8_t x67 = 0U;
	volatile uint16_t x68 = 14860U;
	int32_t t16 = 1;

	t16 = (x65^((x66|x67)%x68));

	if (t16 != -103) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	volatile int16_t x70 = INT16_MIN;
	volatile int16_t x71 = -1;
	int8_t x72 = INT8_MIN;
	int64_t t17 = 796935421577222733LL;

	t17 = (x69^((x70|x71)%x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	int32_t x74 = INT32_MIN;
	static uint8_t x76 = 59U;

	t18 = (x73^((x74|x75)%x76));

	if (t18 != 22LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	static int8_t x79 = INT8_MAX;
	volatile int64_t x80 = INT64_MIN;
	int64_t t19 = 1607LL;

	t19 = (x77^((x78|x79)%x80));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x86 = -1LL;
	int8_t x88 = -1;
	volatile int64_t t20 = -557886946082586LL;

	t20 = (x85^((x86|x87)%x88));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile int16_t x91 = INT16_MAX;
	uint8_t x92 = 12U;

	t21 = (x89^((x90|x91)%x92));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = 1942;
	int8_t x94 = 1;
	uint32_t x95 = 274852U;
	volatile int16_t x96 = INT16_MIN;
	uint32_t t22 = 32320U;

	t22 = (x93^((x94|x95)%x96));

	if (t22 != 276019U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MIN;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t23 = 3637LLU;

	t23 = (x97^((x98|x99)%x100));

	if (t23 != 18446744073709332704LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x101 = -1LL;
	uint8_t x104 = 1U;
	static int64_t t24 = -7227796421337658LL;

	t24 = (x101^((x102|x103)%x104));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int64_t x107 = -1LL;
	int8_t x108 = 10;
	static int64_t t25 = 912444LL;

	t25 = (x105^((x106|x107)%x108));

	if (t25 != -256LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = -213;
	int64_t x111 = INT64_MIN;
	int64_t t26 = 2538829LL;

	t26 = (x109^((x110|x111)%x112));

	if (t26 != 42187878590780LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -37;
	int64_t x114 = INT64_MIN;
	int32_t x116 = -1;
	volatile uint64_t t27 = 10327761862212LLU;

	t27 = (x113^((x114|x115)%x116));

	if (t27 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	uint16_t x118 = UINT16_MAX;
	static uint32_t x119 = 7U;
	uint16_t x120 = 493U;
	int64_t t28 = -453LL;

	t28 = (x117^((x118|x119)%x120));

	if (t28 != -460LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	int32_t x123 = INT32_MAX;
	int8_t x124 = 1;
	volatile int32_t t29 = 1;

	t29 = (x121^((x122|x123)%x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	static int8_t x126 = -1;
	static uint16_t x128 = 3023U;
	volatile int32_t t30 = 179;

	t30 = (x125^((x126|x127)%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -1128;
	volatile int64_t t31 = -243495943LL;

	t31 = (x129^((x130|x131)%x132));

	if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MIN;
	static uint8_t x135 = UINT8_MAX;
	static int8_t x136 = INT8_MIN;
	int32_t t32 = 63332808;

	t32 = (x133^((x134|x135)%x136));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x138 = 3U;
	uint8_t x139 = 82U;
	static volatile uint64_t t33 = 19044681LLU;

	t33 = (x137^((x138|x139)%x140));

	if (t33 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	uint64_t t34 = 114459264466450494LLU;

	t34 = (x141^((x142|x143)%x144));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x148 = 313U;
	static int32_t t35 = 4;

	t35 = (x145^((x146|x147)%x148));

	if (t35 != -58) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	int32_t t36 = INT32_MIN;

	t36 = (x149^((x150|x151)%x152));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -2446018;
	volatile uint16_t x156 = UINT16_MAX;
	int64_t t37 = 5346746LL;

	t37 = (x153^((x154|x155)%x156));

	if (t37 != 2446017LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 57471U;
	int64_t x158 = -2610850519593093994LL;
	volatile int32_t x160 = -123876;

	t38 = (x157^((x158|x159)%x160));

	if (t38 != -27991LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MAX;
	static int32_t x162 = -258106;
	int8_t x163 = INT8_MAX;
	volatile uint8_t x164 = 4U;

	t39 = (x161^((x162|x163)%x164));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = UINT32_MAX;
	static int64_t x166 = INT64_MAX;
	int32_t x167 = -11448833;
	static uint64_t x168 = 1036039LLU;

	t40 = (x165^((x166|x167)%x168));

	if (t40 != 4294081131LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 3735772125587LLU;
	int32_t x170 = INT32_MAX;

	t41 = (x169^((x170|x171)%x172));

	if (t41 != 3735772125587LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = INT8_MAX;
	uint32_t x174 = 45423U;
	static int64_t x175 = INT64_MIN;
	volatile int64_t t42 = 14521712979234LL;

	t42 = (x173^((x174|x175)%x176));

	if (t42 != -109LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = INT64_MIN;
	volatile int32_t x179 = INT32_MIN;

	t43 = (x177^((x178|x179)%x180));

	if (t43 != 32640LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	int64_t x186 = -26181722894561LL;
	volatile int32_t x187 = INT32_MIN;
	int64_t x188 = -494470024LL;
	int64_t t44 = 1145185988703623127LL;

	t44 = (x185^((x186|x187)%x188));

	if (t44 != 266331720LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = -1;
	volatile uint64_t x191 = 1704LLU;
	int16_t x192 = -539;

	t45 = (x189^((x190|x191)%x192));

	if (t45 != 9223372036854775269LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 9U;
	uint8_t x194 = 6U;
	static int16_t x195 = -1;
	int64_t x196 = INT64_MAX;
	volatile int64_t t46 = 1147845190617LL;

	t46 = (x193^((x194|x195)%x196));

	if (t46 != -10LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	static uint64_t t47 = 530259900172LLU;

	t47 = (x197^((x198|x199)%x200));

	if (t47 != 9223372036854776598LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	volatile uint32_t x203 = 6442U;
	int32_t x204 = INT32_MAX;
	volatile uint32_t t48 = 52259U;

	t48 = (x201^((x202|x203)%x204));

	if (t48 != 4294960640U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	static volatile int8_t x207 = INT8_MAX;
	int16_t x208 = 20;
	uint64_t t49 = 149772LLU;

	t49 = (x205^((x206|x207)%x208));

	if (t49 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MAX;
	volatile int64_t x210 = 612060741842790576LL;
	int8_t x211 = INT8_MIN;
	volatile int64_t t50 = 194042017713625592LL;

	t50 = (x209^((x210|x211)%x212));

	if (t50 != -32689LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x215 = INT32_MAX;
	int32_t t51 = -10268;

	t51 = (x213^((x214|x215)%x216));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	int64_t x218 = INT64_MIN;
	int64_t x219 = 4LL;
	uint32_t x220 = 2438219U;
	static int64_t t52 = 406LL;

	t52 = (x217^((x218|x219)%x220));

	if (t52 != -4294449419LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x223 = INT32_MAX;
	volatile int64_t t53 = 435313LL;

	t53 = (x221^((x222|x223)%x224));

	if (t53 != 9123LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MAX;
	int32_t x227 = INT32_MIN;
	static uint64_t x228 = 2258302597LLU;
	volatile uint64_t t54 = 1735111693123LLU;

	t54 = (x225^((x226|x227)%x228));

	if (t54 != 9223372035793714791LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = 6516;
	int64_t x230 = INT64_MAX;
	volatile int32_t x231 = 0;
	static int32_t x232 = -153611818;
	int64_t t55 = 4676325634147LL;

	t55 = (x229^((x230|x231)%x232));

	if (t55 != 8815803LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x235 = 50739;
	int64_t x236 = INT64_MIN;
	volatile int64_t t56 = -31641240879901LL;

	t56 = (x233^((x234|x235)%x236));

	if (t56 != -9223372036854725085LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = 334;
	int16_t x239 = 60;
	volatile int16_t x240 = -1;
	int32_t t57 = -6;

	t57 = (x237^((x238|x239)%x240));

	if (t57 != 334) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = INT8_MAX;
	static uint64_t x244 = UINT64_MAX;
	uint64_t t58 = 7728309226LLU;

	t58 = (x241^((x242|x243)%x244));

	if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 64U;
	volatile int64_t x248 = INT64_MIN;
	static volatile int64_t t59 = 421LL;

	t59 = (x245^((x246|x247)%x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 5377U;
	volatile uint64_t x251 = UINT64_MAX;
	uint8_t x252 = UINT8_MAX;

	t60 = (x249^((x250|x251)%x252));

	if (t60 != 5377LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x259 = 5886U;
	static int64_t x260 = INT64_MAX;

	t61 = (x257^((x258|x259)%x260));

	if (t61 != -9223372036854769921LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = INT64_MIN;
	int16_t x263 = -1;
	static uint32_t x264 = 1562727U;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x261^((x262|x263)%x264));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = 0;
	uint16_t x266 = UINT16_MAX;
	int64_t x268 = -170596430LL;
	volatile int64_t t63 = -2852102856802LL;

	t63 = (x265^((x266|x267)%x268));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x269 = INT64_MAX;
	static int8_t x271 = -9;
	static int16_t x272 = -48;
	int64_t t64 = 7LL;

	t64 = (x269^((x270|x271)%x272));

	if (t64 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = 8;
	uint64_t x275 = UINT64_MAX;
	uint64_t t65 = 8387LLU;

	t65 = (x273^((x274|x275)%x276));

	if (t65 != 255LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MAX;
	static int32_t x278 = 750227373;
	static int64_t x280 = INT64_MAX;

	t66 = (x277^((x278|x279)%x280));

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = 200063559035LL;
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MIN;
	uint32_t x284 = UINT32_MAX;
	int64_t t67 = -509327342042425LL;

	t67 = (x281^((x282|x283)%x284));

	if (t67 != -200063559036LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	int64_t t68 = 239958LL;

	t68 = (x285^((x286|x287)%x288));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x290 = 849U;
	static uint8_t x291 = 1U;
	int16_t x292 = INT16_MAX;

	t69 = (x289^((x290|x291)%x292));

	if (t69 != 857) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = -46881895581LL;
	int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MAX;

	t70 = (x293^((x294|x295)%x296));

	if (t70 != 46881895664LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 19U;
	uint64_t x298 = UINT64_MAX;
	static int16_t x299 = -1;
	uint32_t x300 = 379U;
	static uint64_t t71 = 22LLU;

	t71 = (x297^((x298|x299)%x300));

	if (t71 != 263LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = -1;
	int16_t x307 = -45;
	int32_t t72 = -21;

	t72 = (x305^((x306|x307)%x308));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -2292;
	volatile int16_t x310 = 444;
	volatile uint64_t x311 = UINT64_MAX;

	t73 = (x309^((x310|x311)%x312));

	if (t73 != 18446744073709549324LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 10U;
	static int64_t x314 = INT64_MAX;
	uint8_t x315 = 45U;
	volatile int16_t x316 = -1;
	static volatile int64_t t74 = 7LL;

	t74 = (x313^((x314|x315)%x316));

	if (t74 != 10LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x317 = UINT32_MAX;
	static volatile int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	uint32_t t75 = 24866978U;

	t75 = (x317^((x318|x319)%x320));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x322 = 735;
	int32_t t76 = 403;

	t76 = (x321^((x322|x323)%x324));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x326 = -198328847479188515LL;
	int16_t x327 = 125;
	int32_t x328 = 2430;
	volatile int64_t t77 = 31540381424995LL;

	t77 = (x325^((x326|x327)%x328));

	if (t77 != 2147482475LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = -1;
	int16_t x331 = 10;
	static volatile int64_t t78 = -2815392801048LL;

	t78 = (x329^((x330|x331)%x332));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = INT8_MAX;
	uint32_t x334 = 14U;
	uint32_t x335 = UINT32_MAX;
	uint8_t x336 = UINT8_MAX;
	uint32_t t79 = 6447U;

	t79 = (x333^((x334|x335)%x336));

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	static int16_t x339 = INT16_MIN;
	int32_t x340 = -201;
	int64_t t80 = INT64_MAX;

	t80 = (x337^((x338|x339)%x340));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 1648175830LL;
	uint64_t x342 = 863138190805052632LLU;
	volatile int16_t x343 = INT16_MAX;
	uint64_t t81 = 465588213LLU;

	t81 = (x341^((x342|x343)%x344));

	if (t81 != 863138192386118953LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x347 = -1;
	volatile int64_t x348 = -1LL;

	t82 = (x345^((x346|x347)%x348));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = INT16_MAX;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x349^((x350|x351)%x352));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 28232482U;
	static int32_t x354 = -1;
	volatile int8_t x355 = INT8_MAX;
	static uint8_t x356 = 16U;

	t84 = (x353^((x354|x355)%x356));

	if (t84 != 4266734813U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = INT64_MIN;
	uint32_t x359 = UINT32_MAX;
	static uint64_t x360 = 2685804642720040100LLU;

	t85 = (x357^((x358|x359)%x360));

	if (t85 != 17280785960719928773LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = INT64_MIN;
	static uint16_t x362 = UINT16_MAX;
	volatile uint64_t x363 = UINT64_MAX;
	volatile int16_t x364 = INT16_MIN;
	static volatile uint64_t t86 = 178577LLU;

	t86 = (x361^((x362|x363)%x364));

	if (t86 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x367 = -24324570349LL;
	static volatile int64_t t87 = -50888900434486103LL;

	t87 = (x365^((x366|x367)%x368));

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x370 = 17055795892LL;
	static int64_t x372 = INT64_MIN;
	volatile uint64_t t88 = 751833447877LLU;

	t88 = (x369^((x370|x371)%x372));

	if (t88 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x373 = INT8_MIN;
	uint8_t x374 = 29U;
	uint16_t x375 = 7984U;
	volatile int64_t x376 = -56622LL;
	volatile int64_t t89 = -2629174LL;

	t89 = (x373^((x374|x375)%x376));

	if (t89 != -8003LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x377 = 163661048552498LLU;
	int32_t x378 = INT32_MIN;
	static int64_t x379 = INT64_MIN;
	int64_t x380 = 21579820573LL;
	volatile uint64_t t90 = 29231LLU;

	t90 = (x377^((x378|x379)%x380));

	if (t90 != 18446580413152992306LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MAX;
	static uint8_t x382 = 10U;
	uint8_t x383 = 53U;
	int8_t x384 = INT8_MIN;
	int32_t t91 = 1334624;

	t91 = (x381^((x382|x383)%x384));

	if (t91 != 32704) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = -825;
	uint64_t x387 = 15861581167571LLU;
	volatile int64_t x388 = INT64_MIN;
	static uint64_t t92 = 1706195509662920LLU;

	t92 = (x385^((x386|x387)%x388));

	if (t92 != 9223372036854775895LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = INT32_MIN;
	int8_t x392 = INT8_MIN;

	t93 = (x389^((x390|x391)%x392));

	if (t93 != 2147483559) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = 10649634U;
	static int32_t x394 = -287986552;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -1LL;
	volatile int64_t t94 = 2219539081LL;

	t94 = (x393^((x394|x395)%x396));

	if (t94 != 10649634LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = 0;
	int32_t x398 = -1;
	uint8_t x399 = UINT8_MAX;
	int32_t x400 = -1;
	volatile int32_t t95 = -20640;

	t95 = (x397^((x398|x399)%x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = 57U;
	int8_t x402 = -1;
	static volatile int16_t x403 = -1;
	uint16_t x404 = 15U;
	int32_t t96 = -136;

	t96 = (x401^((x402|x403)%x404));

	if (t96 != -58) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = -1LL;
	volatile uint64_t t97 = 11578182LLU;

	t97 = (x405^((x406|x407)%x408));

	if (t97 != 9223372036854886611LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x410 = INT64_MIN;
	static int16_t x412 = 5142;
	int64_t t98 = 3769659470798LL;

	t98 = (x409^((x410|x411)%x412));

	if (t98 != -294LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 10901U;
	int8_t x414 = -1;
	int8_t x415 = INT8_MAX;
	int32_t x416 = -15;
	uint32_t t99 = 1003U;

	t99 = (x413^((x414|x415)%x416));

	if (t99 != 4294956394U) { NG(); } else { ; }
	
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

