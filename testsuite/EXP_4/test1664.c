#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -2232;
uint64_t x2 = UINT64_MAX;
volatile int64_t x6 = INT64_MIN;
static volatile int64_t t1 = -53211755378LL;
int8_t x12 = -1;
static int8_t x31 = INT8_MIN;
static int32_t t7 = -4001995;
int16_t x36 = INT16_MIN;
volatile int32_t t9 = 380514890;
uint8_t x41 = 4U;
volatile int64_t x42 = 324971LL;
uint32_t x43 = 1522U;
uint16_t x49 = 496U;
int64_t x51 = -1LL;
uint32_t x54 = 2U;
int16_t x55 = INT16_MAX;
int32_t x56 = -1;
static int16_t x63 = -1;
static int8_t x64 = -1;
int32_t t15 = 380;
static int8_t x68 = INT8_MIN;
volatile int32_t t16 = 12666;
uint64_t x71 = UINT64_MAX;
volatile uint32_t x75 = 59U;
int64_t x78 = INT64_MIN;
volatile int64_t x84 = -58434515LL;
uint32_t x87 = 2690U;
volatile int32_t t21 = -58;
int32_t x89 = INT32_MIN;
int32_t x109 = -1;
static int64_t x111 = INT64_MAX;
volatile int32_t x120 = INT32_MIN;
uint32_t x122 = 2682453U;
static volatile int64_t x123 = -2159030639744LL;
volatile int64_t t30 = 6710023868059646LL;
uint32_t x127 = UINT32_MAX;
int32_t x132 = -1;
static int64_t x134 = INT64_MIN;
static uint8_t x137 = 124U;
int32_t t35 = INT32_MIN;
int64_t x151 = INT64_MIN;
static int32_t t37 = 1;
volatile int16_t x159 = INT16_MIN;
volatile int64_t x160 = -1LL;
int16_t x162 = INT16_MIN;
int64_t x170 = -1LL;
uint16_t x175 = 7156U;
int16_t x176 = -15;
int8_t x178 = -1;
static volatile int32_t t44 = 3601247;
uint32_t t45 = 390U;
int32_t t47 = -5316;
static volatile int64_t t52 = 155428121163585783LL;
static uint64_t x214 = UINT64_MAX;
int32_t x217 = 36830;
uint16_t x225 = 33U;
uint32_t x228 = 379192975U;
int32_t x233 = INT32_MAX;
uint64_t x240 = 101412512747LLU;
uint32_t x243 = UINT32_MAX;
volatile uint64_t x244 = UINT64_MAX;
static volatile int8_t x249 = 10;
int8_t x251 = -1;
volatile int32_t x253 = INT32_MAX;
int16_t x255 = INT16_MAX;
uint32_t x261 = UINT32_MAX;
int16_t x263 = 27;
int8_t x265 = INT8_MIN;
volatile int32_t x273 = INT32_MAX;
static int8_t x286 = INT8_MAX;
int64_t t72 = 2027LL;
uint32_t x296 = 3U;
int16_t x300 = -398;
volatile uint8_t x311 = 3U;
int8_t x315 = INT8_MAX;
int64_t x320 = INT64_MAX;
volatile int32_t x326 = INT32_MIN;
volatile int32_t t83 = -109436843;
int64_t x342 = INT64_MIN;
int16_t x346 = INT16_MAX;
int64_t x350 = INT64_MIN;
int16_t x364 = INT16_MIN;
int16_t x371 = -889;
uint8_t x374 = UINT8_MAX;
volatile int32_t t93 = -26;
volatile int64_t x378 = -1LL;
volatile int64_t x393 = INT64_MAX;
int16_t x395 = -3921;
static int8_t x396 = -1;


void f0(void) {
	int16_t x3 = INT16_MIN;
	static int64_t x4 = 615656LL;
	uint64_t t0 = 192199719LLU;

	t0 = (x1^(x2&(x3<=x4)));

	if (t0 != 18446744073709549385LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 390969U;
	int8_t x7 = INT8_MAX;
	static int64_t x8 = -299306LL;

	t1 = (x5^(x6&(x7<=x8)));

	if (t1 != 390969LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int16_t x10 = -1;
	uint16_t x11 = 115U;
	static volatile int64_t t2 = INT64_MAX;

	t2 = (x9^(x10&(x11<=x12)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = 1221LL;
	int32_t x15 = 4;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -732139LL;

	t3 = (x13^(x14&(x15<=x16)));

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 12;
	static int64_t x18 = 3705LL;
	uint8_t x19 = 14U;
	int8_t x20 = -1;
	volatile int64_t t4 = -66419861LL;

	t4 = (x17^(x18&(x19<=x20)));

	if (t4 != 12LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -63;
	int32_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = -12;
	volatile int32_t t5 = -2862;

	t5 = (x21^(x22&(x23<=x24)));

	if (t5 != -63) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 477U;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MAX;
	static volatile int64_t t6 = 16744823207674LL;

	t6 = (x25^(x26&(x27<=x28)));

	if (t6 != 477LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 6U;
	uint16_t x30 = 43U;
	int64_t x32 = 18LL;

	t7 = (x29^(x30&(x31<=x32)));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -1LL;
	uint32_t x35 = 84U;
	volatile int64_t t8 = -2278964850LL;

	t8 = (x33^(x34&(x35<=x36)));

	if (t8 != -127LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -55;
	int8_t x38 = INT8_MIN;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = -1;

	t9 = (x37^(x38&(x39<=x40)));

	if (t9 != -55) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x44 = 3262U;
	volatile int64_t t10 = 3821348950290278709LL;

	t10 = (x41^(x42&(x43<=x44)));

	if (t10 != 5LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 6U;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = 2105U;
	int16_t x48 = 76;
	static volatile int32_t t11 = 343962342;

	t11 = (x45^(x46&(x47<=x48)));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = UINT8_MAX;
	static uint8_t x52 = UINT8_MAX;
	int32_t t12 = -446194;

	t12 = (x49^(x50&(x51<=x52)));

	if (t12 != 497) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint32_t t13 = UINT32_MAX;

	t13 = (x53^(x54&(x55<=x56)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int8_t x58 = -1;
	static uint16_t x59 = UINT16_MAX;
	static int32_t x60 = -1904588;
	int64_t t14 = -2223033LL;

	t14 = (x57^(x58&(x59<=x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int32_t x62 = INT32_MAX;

	t15 = (x61^(x62&(x63<=x64)));

	if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	volatile int8_t x66 = -10;
	int64_t x67 = INT64_MIN;

	t16 = (x65^(x66&(x67<=x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MAX;
	int8_t x72 = -1;
	int64_t t17 = -88821037LL;

	t17 = (x69^(x70&(x71<=x72)));

	if (t17 != 126LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1525458;
	int16_t x74 = -1;
	static int16_t x76 = -1;
	int32_t t18 = -1825;

	t18 = (x73^(x74&(x75<=x76)));

	if (t18 != -1525457) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 234U;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;
	int64_t t19 = -641800508455527928LL;

	t19 = (x77^(x78&(x79<=x80)));

	if (t19 != 234LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = 2443;
	volatile int32_t x83 = INT32_MAX;
	int32_t t20 = INT32_MIN;

	t20 = (x81^(x82&(x83<=x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	volatile int16_t x86 = INT16_MIN;
	volatile int32_t x88 = -1;

	t21 = (x85^(x86&(x87<=x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = INT8_MIN;
	uint32_t x91 = 0U;
	int32_t x92 = 151158610;
	static volatile int32_t t22 = INT32_MIN;

	t22 = (x89^(x90&(x91<=x92)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2003329780U;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MAX;
	static uint32_t x96 = 160198604U;
	uint32_t t23 = 560088169U;

	t23 = (x93^(x94&(x95<=x96)));

	if (t23 != 2003329780U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 30515U;
	uint16_t x99 = UINT16_MAX;
	static int8_t x100 = -29;
	int32_t t24 = -316;

	t24 = (x97^(x98&(x99<=x100)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile uint8_t x102 = 11U;
	volatile int16_t x103 = INT16_MIN;
	volatile int16_t x104 = 7810;
	static volatile int64_t t25 = 37775908527LL;

	t25 = (x101^(x102&(x103<=x104)));

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	static volatile uint64_t x106 = 227870617444822754LLU;
	uint64_t x107 = 2971527763156081055LLU;
	int32_t x108 = INT32_MAX;
	volatile uint64_t t26 = 2502897542LLU;

	t26 = (x105^(x106&(x107<=x108)));

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	int8_t x112 = 5;
	int64_t t27 = -76869LL;

	t27 = (x109^(x110&(x111<=x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	volatile uint32_t x114 = 11770U;
	int32_t x115 = 6029113;
	static uint8_t x116 = 0U;
	volatile uint32_t t28 = 1125U;

	t28 = (x113^(x114&(x115<=x116)));

	if (t28 != 4294967168U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 2576914827LL;
	int64_t x118 = -12431LL;
	uint16_t x119 = 0U;
	volatile int64_t t29 = -61578623521551LL;

	t29 = (x117^(x118&(x119<=x120)));

	if (t29 != 2576914827LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x124 = UINT8_MAX;

	t30 = (x121^(x122&(x123<=x124)));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -1;
	int32_t x126 = INT32_MIN;
	volatile uint64_t x128 = 103108421805443988LLU;
	int32_t t31 = -383;

	t31 = (x125^(x126&(x127<=x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 14033779U;
	int8_t x130 = -1;
	static int32_t x131 = INT32_MIN;
	volatile uint32_t t32 = 83U;

	t32 = (x129^(x130&(x131<=x132)));

	if (t32 != 14033778U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 5U;
	uint8_t x135 = 1U;
	int32_t x136 = 4591920;
	volatile int64_t t33 = -1869LL;

	t33 = (x133^(x134&(x135<=x136)));

	if (t33 != 5LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	static volatile uint16_t x140 = 506U;
	static int32_t t34 = 158872024;

	t34 = (x137^(x138&(x139<=x140)));

	if (t34 != 124) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	static int32_t x144 = INT32_MAX;

	t35 = (x141^(x142&(x143<=x144)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x146 = UINT8_MAX;
	static volatile int8_t x147 = 1;
	uint64_t x148 = 55540610LLU;
	static int32_t t36 = 184424;

	t36 = (x145^(x146&(x147<=x148)));

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 48U;
	volatile int32_t x150 = INT32_MIN;
	int64_t x152 = INT64_MIN;

	t37 = (x149^(x150&(x151<=x152)));

	if (t37 != 48) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MAX;
	static int8_t x156 = INT8_MIN;
	static volatile int32_t t38 = INT32_MIN;

	t38 = (x153^(x154&(x155<=x156)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = 2884;
	int8_t x158 = INT8_MAX;
	volatile int32_t t39 = -112659;

	t39 = (x157^(x158&(x159<=x160)));

	if (t39 != 2885) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 3488363591LLU;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 27U;
	volatile uint64_t t40 = 11446LLU;

	t40 = (x161^(x162&(x163<=x164)));

	if (t40 != 3488363591LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MIN;
	volatile int32_t x167 = -24;
	int16_t x168 = INT16_MIN;
	uint32_t t41 = UINT32_MAX;

	t41 = (x165^(x166&(x167<=x168)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int32_t x171 = 864;
	int16_t x172 = -343;
	static int64_t t42 = INT64_MIN;

	t42 = (x169^(x170&(x171<=x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 94125963978LLU;
	int32_t x174 = -1;
	volatile uint64_t t43 = 756772549512LLU;

	t43 = (x173^(x174&(x175<=x176)));

	if (t43 != 94125963978LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int32_t x179 = -2655577;
	int16_t x180 = INT16_MAX;

	t44 = (x177^(x178&(x179<=x180)));

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = INT8_MAX;
	volatile uint8_t x183 = 4U;
	uint32_t x184 = 3046U;

	t45 = (x181^(x182&(x183<=x184)));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -61455392;
	uint64_t x186 = UINT64_MAX;
	volatile uint64_t x187 = 1449LLU;
	int64_t x188 = -1LL;
	volatile uint64_t t46 = 21222256293123LLU;

	t46 = (x185^(x186&(x187<=x188)));

	if (t46 != 18446744073648096225LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = 25;
	int16_t x191 = INT16_MAX;
	static int8_t x192 = INT8_MIN;

	t47 = (x189^(x190&(x191<=x192)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -3;
	int8_t x194 = 4;
	int8_t x195 = INT8_MAX;
	uint8_t x196 = 23U;
	volatile int32_t t48 = -309680855;

	t48 = (x193^(x194&(x195<=x196)));

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MAX;
	static uint32_t x198 = 14971U;
	int64_t x199 = INT64_MIN;
	int64_t x200 = 2869434285629333472LL;
	uint32_t t49 = 183122U;

	t49 = (x197^(x198&(x199<=x200)));

	if (t49 != 32766U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 52697621U;
	int16_t x202 = -1938;
	int64_t x203 = INT64_MIN;
	int32_t x204 = -1;
	uint32_t t50 = 7886328U;

	t50 = (x201^(x202&(x203<=x204)));

	if (t50 != 52697621U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 258U;
	int8_t x206 = -38;
	volatile int8_t x207 = -3;
	volatile uint16_t x208 = 995U;
	uint32_t t51 = 1560U;

	t51 = (x205^(x206&(x207<=x208)));

	if (t51 != 258U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 14865093771LL;
	volatile int64_t x210 = 0LL;
	static volatile uint32_t x211 = 157155U;
	int64_t x212 = INT64_MAX;

	t52 = (x209^(x210&(x211<=x212)));

	if (t52 != 14865093771LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int32_t x215 = INT32_MIN;
	static uint8_t x216 = 0U;
	volatile uint64_t t53 = 828961629430LLU;

	t53 = (x213^(x214&(x215<=x216)));

	if (t53 != 4294967294LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = -1LL;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;
	volatile int64_t t54 = 1770141784673504127LL;

	t54 = (x217^(x218&(x219<=x220)));

	if (t54 != 36830LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	int16_t x222 = -28;
	volatile int8_t x223 = INT8_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = INT32_MIN;

	t55 = (x221^(x222&(x223<=x224)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x226 = 3U;
	uint64_t x227 = 23108589433LLU;
	int32_t t56 = -324141469;

	t56 = (x225^(x226&(x227<=x228)));

	if (t56 != 33) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = 5U;
	int32_t x231 = INT32_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x229^(x230&(x231<=x232)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = INT32_MAX;

	t58 = (x233^(x234&(x235<=x236)));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int8_t x238 = INT8_MIN;
	static volatile int16_t x239 = -1;
	static int32_t t59 = 92918;

	t59 = (x237^(x238&(x239<=x240)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 1LL;
	int32_t x242 = INT32_MIN;
	static volatile int64_t t60 = 0LL;

	t60 = (x241^(x242&(x243<=x244)));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MIN;
	int32_t x246 = -50402794;
	static int16_t x247 = INT16_MAX;
	static uint16_t x248 = UINT16_MAX;
	static int32_t t61 = -52;

	t61 = (x245^(x246&(x247<=x248)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = INT8_MIN;
	uint16_t x252 = 484U;
	int32_t t62 = 176895;

	t62 = (x249^(x250&(x251<=x252)));

	if (t62 != 10) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MAX;
	int64_t x256 = -1LL;
	volatile int64_t t63 = -20LL;

	t63 = (x253^(x254&(x255<=x256)));

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 713507196U;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = INT8_MIN;
	volatile int32_t x260 = INT32_MAX;
	volatile uint32_t t64 = 1U;

	t64 = (x257^(x258&(x259<=x260)));

	if (t64 != 713507196U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x262 = 3450LL;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t65 = -43142923689204042LL;

	t65 = (x261^(x262&(x263<=x264)));

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 5U;
	int32_t x267 = INT32_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = 436;

	t66 = (x265^(x266&(x267<=x268)));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -1;
	uint8_t x270 = 5U;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -53;

	t67 = (x269^(x270&(x271<=x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x274 = INT32_MIN;
	int32_t x275 = 3;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x273^(x274&(x275<=x276)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static volatile int64_t x278 = -1LL;
	static int32_t x279 = INT32_MIN;
	volatile int32_t x280 = INT32_MAX;
	int64_t t69 = 24533029963LL;

	t69 = (x277^(x278&(x279<=x280)));

	if (t69 != 254LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	volatile uint16_t x282 = 735U;
	uint8_t x283 = UINT8_MAX;
	static int64_t x284 = -67957065842LL;
	volatile int64_t t70 = 123406572024354LL;

	t70 = (x281^(x282&(x283<=x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 15;
	volatile uint32_t x287 = 933143U;
	int8_t x288 = 47;
	volatile int32_t t71 = 27;

	t71 = (x285^(x286&(x287<=x288)));

	if (t71 != 15) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MIN;
	int16_t x291 = 7702;
	static volatile int64_t x292 = INT64_MIN;

	t72 = (x289^(x290&(x291<=x292)));

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MAX;
	int32_t x295 = -976368;
	volatile int32_t t73 = 1338058;

	t73 = (x293^(x294&(x295<=x296)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MAX;
	uint8_t x298 = UINT8_MAX;
	int32_t x299 = INT32_MIN;
	volatile int32_t t74 = -526512409;

	t74 = (x297^(x298&(x299<=x300)));

	if (t74 != 2147483646) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	int16_t x304 = -1;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x301^(x302&(x303<=x304)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	uint8_t x306 = 5U;
	static volatile uint32_t x307 = 2183U;
	static volatile int16_t x308 = -2586;
	volatile int64_t t76 = 87912LL;

	t76 = (x305^(x306&(x307<=x308)));

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	uint32_t x312 = UINT32_MAX;
	int32_t t77 = 0;

	t77 = (x309^(x310&(x311<=x312)));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	int16_t x314 = -206;
	uint8_t x316 = 0U;
	uint32_t t78 = UINT32_MAX;

	t78 = (x313^(x314&(x315<=x316)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -1;
	volatile int64_t x318 = -1LL;
	uint16_t x319 = 107U;
	volatile int64_t t79 = 984398453877995LL;

	t79 = (x317^(x318&(x319<=x320)));

	if (t79 != -2LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1689U;
	volatile int32_t x322 = -1;
	int64_t x323 = -2456846617114869041LL;
	int8_t x324 = -1;
	static uint32_t t80 = 1682949U;

	t80 = (x321^(x322&(x323<=x324)));

	if (t80 != 1688U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 18U;
	int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -59946934;

	t81 = (x325^(x326&(x327<=x328)));

	if (t81 != 18) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MAX;
	volatile uint8_t x330 = 13U;
	uint16_t x331 = 16631U;
	uint32_t x332 = UINT32_MAX;
	volatile int64_t t82 = -51228040849082681LL;

	t82 = (x329^(x330&(x331<=x332)));

	if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	volatile int8_t x335 = -1;
	uint32_t x336 = 222410U;

	t83 = (x333^(x334&(x335<=x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = UINT8_MAX;
	static volatile int16_t x339 = -3088;
	uint64_t x340 = 28571613565822822LLU;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x337^(x338&(x339<=x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 741U;
	int32_t x343 = INT32_MIN;
	int64_t x344 = -1LL;
	volatile int64_t t85 = 4763081925LL;

	t85 = (x341^(x342&(x343<=x344)));

	if (t85 != 741LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	uint32_t x347 = 754U;
	volatile int8_t x348 = INT8_MIN;
	int32_t t86 = -1934;

	t86 = (x345^(x346&(x347<=x348)));

	if (t86 != 126) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	static int64_t x351 = 600448749483350016LL;
	volatile int64_t x352 = 206LL;
	int64_t t87 = 8802961848LL;

	t87 = (x349^(x350&(x351<=x352)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MAX;
	int16_t x355 = 2;
	static volatile int16_t x356 = -1;
	static volatile int32_t t88 = INT32_MIN;

	t88 = (x353^(x354&(x355<=x356)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static uint16_t x358 = 392U;
	uint16_t x359 = 6U;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -1;

	t89 = (x357^(x358&(x359<=x360)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	static volatile uint32_t x362 = UINT32_MAX;
	int8_t x363 = 23;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (x361^(x362&(x363<=x364)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	static int32_t x367 = INT32_MAX;
	uint64_t x368 = 113395876LLU;
	uint32_t t91 = 1971468U;

	t91 = (x365^(x366&(x367<=x368)));

	if (t91 != 4294967168U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	volatile uint16_t x370 = 899U;
	uint16_t x372 = 3744U;
	volatile int32_t t92 = 266482836;

	t92 = (x369^(x370&(x371<=x372)));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -4;
	static int16_t x375 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;

	t93 = (x373^(x374&(x375<=x376)));

	if (t93 != -3) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x379 = -9329830LL;
	int64_t x380 = INT64_MIN;
	static int64_t t94 = 170738872LL;

	t94 = (x377^(x378&(x379<=x380)));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = 147445938LLU;
	int16_t x382 = -15573;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MAX;
	volatile uint64_t t95 = 104143680023107LLU;

	t95 = (x381^(x382&(x383<=x384)));

	if (t95 != 147445939LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MIN;
	volatile int16_t x387 = 5675;
	static int32_t x388 = INT32_MAX;
	int32_t t96 = INT32_MAX;

	t96 = (x385^(x386&(x387<=x388)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 3U;
	static uint8_t x390 = 23U;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 12230LLU;
	volatile int32_t t97 = -12967;

	t97 = (x389^(x390&(x391<=x392)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -1;
	int64_t t98 = 11232434611073586LL;

	t98 = (x393^(x394&(x395<=x396)));

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -5;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	static int64_t x400 = -86113962927824LL;
	volatile int32_t t99 = -11;

	t99 = (x397^(x398&(x399<=x400)));

	if (t99 != -5) { NG(); } else { ; }
	
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

