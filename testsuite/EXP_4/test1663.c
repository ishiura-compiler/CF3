#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
uint32_t t1 = 85095802U;
int8_t x15 = -1;
static int16_t x21 = INT16_MAX;
static volatile int16_t x24 = 10324;
volatile int64_t t5 = 862299080370014722LL;
uint64_t x36 = UINT64_MAX;
int32_t t8 = -10;
uint32_t x40 = 3186878U;
int16_t x46 = INT16_MIN;
int8_t x55 = 24;
volatile int32_t t13 = -640843;
int32_t x58 = INT32_MIN;
volatile int32_t x65 = -1;
volatile uint32_t x67 = 10945857U;
volatile int32_t t17 = 2;
int8_t x74 = INT8_MIN;
static uint16_t x75 = UINT16_MAX;
static int32_t x77 = INT32_MAX;
volatile uint32_t x78 = UINT32_MAX;
uint32_t x83 = 4596401U;
int64_t x84 = -1LL;
volatile uint16_t x86 = 10U;
int32_t t21 = -823696743;
int32_t x107 = INT32_MAX;
int16_t x115 = INT16_MIN;
static int32_t x124 = 12214;
static int8_t x125 = INT8_MAX;
int32_t t31 = -20224;
int32_t x132 = -1;
uint16_t x133 = 1558U;
uint32_t x135 = 640798131U;
int32_t x139 = 0;
int32_t x148 = INT32_MAX;
uint16_t x153 = 1470U;
int32_t x158 = 112054228;
int8_t x166 = -1;
int32_t x168 = 8;
uint8_t x169 = UINT8_MAX;
uint8_t x173 = UINT8_MAX;
volatile int32_t t45 = -629;
uint64_t t47 = UINT64_MAX;
volatile int8_t x193 = -1;
int16_t x194 = -255;
int32_t t48 = -6774039;
int32_t x200 = -1;
int16_t x204 = INT16_MIN;
volatile int8_t x214 = 12;
int64_t x216 = INT64_MIN;
uint16_t x221 = UINT16_MAX;
uint32_t x222 = 491U;
int64_t x224 = 6807158882034824LL;
int16_t x228 = 0;
static volatile int32_t t56 = -433667;
int16_t x229 = INT16_MIN;
int64_t x231 = -1LL;
volatile int16_t x235 = INT16_MIN;
static volatile int8_t x243 = -1;
volatile int32_t t60 = 26;
uint32_t x245 = 862334820U;
volatile uint32_t t61 = 13220U;
volatile int32_t x253 = INT32_MIN;
int16_t x257 = INT16_MIN;
int32_t t66 = INT32_MAX;
volatile uint64_t t68 = 303732163663632798LLU;
int16_t x277 = -3;
int8_t x278 = -1;
int8_t x282 = INT8_MIN;
volatile int32_t t71 = INT32_MIN;
int32_t t72 = -34470711;
volatile int64_t x293 = INT64_MIN;
volatile int64_t t73 = INT64_MIN;
static volatile int8_t x300 = INT8_MIN;
int32_t x301 = INT32_MAX;
int8_t x303 = INT8_MAX;
int32_t t75 = INT32_MAX;
volatile int16_t x311 = INT16_MIN;
uint16_t x313 = 3314U;
uint64_t x321 = 8617229971772088055LLU;
static volatile int16_t x324 = -1;
volatile uint16_t x325 = UINT16_MAX;
static volatile int32_t t81 = -1;
int16_t x334 = INT16_MAX;
int32_t x340 = 0;
static volatile int32_t t84 = -25820;
uint64_t x342 = UINT64_MAX;
volatile int64_t t87 = -342700926495LL;
int32_t x355 = INT32_MAX;
volatile uint64_t t92 = 4268108222552932LLU;
int32_t x373 = INT32_MAX;
static int32_t x376 = INT32_MIN;
int32_t x378 = -1863525;
static int16_t x392 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 5U;
	int8_t x3 = 0;
	int16_t x4 = INT16_MAX;
	static volatile int64_t t0 = -11LL;

	t0 = (x1|(x2&(x3<=x4)));

	if (t0 != 5LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 38095081U;
	int8_t x6 = INT8_MIN;
	static volatile int64_t x7 = -17435980513075LL;
	static uint32_t x8 = 104558100U;

	t1 = (x5|(x6&(x7<=x8)));

	if (t1 != 38095081U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint64_t x10 = UINT64_MAX;
	static uint16_t x11 = 4U;
	int64_t x12 = -35980484706LL;
	static uint64_t t2 = UINT64_MAX;

	t2 = (x9|(x10&(x11<=x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	uint16_t x16 = 11U;
	int32_t t3 = 375715406;

	t3 = (x13|(x14&(x15<=x16)));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int16_t x18 = INT16_MIN;
	static int16_t x19 = INT16_MIN;
	int32_t x20 = 1768;
	int32_t t4 = 43;

	t4 = (x17|(x18&(x19<=x20)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	static int64_t x23 = 1LL;

	t5 = (x21|(x22&(x23<=x24)));

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 3U;
	volatile int32_t x27 = -1;
	static uint8_t x28 = UINT8_MAX;
	int32_t t6 = -20;

	t6 = (x25|(x26&(x27<=x28)));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 1693;
	static int8_t x30 = INT8_MIN;
	int8_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 522249811;

	t7 = (x29|(x30&(x31<=x32)));

	if (t7 != 1693) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static int8_t x34 = INT8_MIN;
	uint8_t x35 = 1U;

	t8 = (x33|(x34&(x35<=x36)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile uint16_t x38 = 14U;
	uint8_t x39 = 5U;
	volatile int32_t t9 = 0;

	t9 = (x37|(x38&(x39<=x40)));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int16_t x42 = INT16_MAX;
	static uint32_t x43 = 17415037U;
	int16_t x44 = 10;
	int32_t t10 = INT32_MAX;

	t10 = (x41|(x42&(x43<=x44)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint8_t x47 = 1U;
	volatile int64_t x48 = 1838609452350003LL;
	volatile int32_t t11 = 6321;

	t11 = (x45|(x46&(x47<=x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	static int64_t x50 = 505618680898LL;
	int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = UINT8_MAX;
	int64_t t12 = -2127941974014283483LL;

	t12 = (x49|(x50&(x51<=x52)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 249U;
	uint16_t x54 = 5068U;
	int32_t x56 = INT32_MAX;

	t13 = (x53|(x54&(x55<=x56)));

	if (t13 != 249) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	volatile uint8_t x59 = UINT8_MAX;
	int64_t x60 = INT64_MAX;
	static int64_t t14 = 5854736575965769LL;

	t14 = (x57|(x58&(x59<=x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = 415;
	int8_t x62 = INT8_MIN;
	volatile int8_t x63 = -7;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = -20291;

	t15 = (x61|(x62&(x63<=x64)));

	if (t15 != 415) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = -1;
	uint32_t x68 = 5025431U;
	static int32_t t16 = -8150482;

	t16 = (x65|(x66&(x67<=x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = INT32_MIN;
	static volatile int32_t x70 = -4259;
	uint8_t x71 = 2U;
	uint8_t x72 = 98U;

	t17 = (x69|(x70&(x71<=x72)));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint32_t x76 = 3396977U;
	int32_t t18 = INT32_MAX;

	t18 = (x73|(x74&(x75<=x76)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 1U;
	uint32_t t19 = 100951228U;

	t19 = (x77|(x78&(x79<=x80)));

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 113372LL;
	static volatile int64_t x82 = -958137LL;
	static int64_t t20 = -52920886278459LL;

	t20 = (x81|(x82&(x83<=x84)));

	if (t20 != 113372LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x87 = 8;
	static volatile int8_t x88 = -1;

	t21 = (x85|(x86&(x87<=x88)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 16U;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = 1043628U;
	static int32_t x92 = -3939469;
	int32_t t22 = -5661;

	t22 = (x89|(x90&(x91<=x92)));

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = 11;
	int32_t x94 = -1;
	uint16_t x95 = 20862U;
	volatile int32_t x96 = -1;
	static int32_t t23 = -105026;

	t23 = (x93|(x94&(x95<=x96)));

	if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -2;
	int8_t x98 = -1;
	static uint16_t x99 = 0U;
	static int64_t x100 = INT64_MAX;
	int32_t t24 = 718;

	t24 = (x97|(x98&(x99<=x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	static int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = -1;
	volatile int32_t t25 = 4580087;

	t25 = (x101|(x102&(x103<=x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	static int16_t x106 = INT16_MIN;
	int32_t x108 = -1;
	static int32_t t26 = -163115;

	t26 = (x105|(x106&(x107<=x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -3024;
	static uint32_t x110 = 231957U;
	int32_t x111 = INT32_MAX;
	int16_t x112 = -1;
	static uint32_t t27 = 102332845U;

	t27 = (x109|(x110&(x111<=x112)));

	if (t27 != 4294964272U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int64_t x114 = INT64_MIN;
	uint64_t x116 = 12111924265LLU;
	int64_t t28 = 21665189844327380LL;

	t28 = (x113|(x114&(x115<=x116)));

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int16_t x118 = -1;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117|(x118&(x119<=x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint32_t x122 = 2018U;
	static int8_t x123 = -6;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (x121|(x122&(x123<=x124)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	int64_t x128 = -29062108401628199LL;

	t31 = (x125|(x126&(x127<=x128)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 1287U;
	int8_t x130 = -1;
	uint16_t x131 = 20144U;
	static volatile uint32_t t32 = 192353127U;

	t32 = (x129|(x130&(x131<=x132)));

	if (t32 != 1287U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x134 = INT8_MIN;
	static volatile int32_t x136 = -41893029;
	static int32_t t33 = 4291;

	t33 = (x133|(x134&(x135<=x136)));

	if (t33 != 1558) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = -14;
	uint16_t x140 = 717U;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x137|(x138&(x139<=x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	volatile uint64_t x142 = 96787069186LLU;
	static uint64_t x143 = 540466797350016697LLU;
	uint64_t x144 = 472511416LLU;
	uint64_t t35 = 441287679287LLU;

	t35 = (x141|(x142&(x143<=x144)));

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	volatile uint16_t x146 = 1U;
	int8_t x147 = -1;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x145|(x146&(x147<=x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 58U;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	volatile int64_t x152 = INT64_MIN;
	int64_t t37 = 1122825450183077LL;

	t37 = (x149|(x150&(x151<=x152)));

	if (t37 != 58LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -122LL;
	uint8_t x155 = 3U;
	uint8_t x156 = 7U;
	volatile int64_t t38 = -267697487587449851LL;

	t38 = (x153|(x154&(x155<=x156)));

	if (t38 != 1470LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	uint32_t x159 = 1U;
	int64_t x160 = -50960124191LL;
	static volatile int32_t t39 = -37660216;

	t39 = (x157|(x158&(x159<=x160)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -56;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -1LL;
	uint64_t x164 = 3LLU;
	int32_t t40 = 42;

	t40 = (x161|(x162&(x163<=x164)));

	if (t40 != -56) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int32_t x167 = INT32_MIN;
	int64_t t41 = INT64_MAX;

	t41 = (x165|(x166&(x167<=x168)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = 1851711548090034LLU;
	volatile int32_t x171 = -42500123;
	int64_t x172 = 16827LL;
	uint64_t t42 = 458LLU;

	t42 = (x169|(x170&(x171<=x172)));

	if (t42 != 255LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = 11405;
	uint16_t x176 = UINT16_MAX;
	int32_t t43 = -2167;

	t43 = (x173|(x174&(x175<=x176)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 14583547323198642LLU;
	uint16_t x178 = 16038U;
	uint64_t x179 = 6564LLU;
	volatile uint64_t x180 = 105212LLU;
	volatile uint64_t t44 = 220LLU;

	t44 = (x177|(x178&(x179<=x180)));

	if (t44 != 14583547323198642LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = -1;
	int16_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;

	t45 = (x181|(x182&(x183<=x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 2U;
	int16_t x186 = -208;
	int64_t x187 = -1LL;
	int64_t x188 = -1LL;
	volatile int32_t t46 = 276;

	t46 = (x185|(x186&(x187<=x188)));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	int32_t x192 = 0;

	t47 = (x189|(x190&(x191<=x192)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x195 = 4U;
	int8_t x196 = -2;

	t48 = (x193|(x194&(x195<=x196)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 8U;
	volatile int64_t x198 = 322546279218175LL;
	int64_t x199 = INT64_MAX;
	static int64_t t49 = 12387958050LL;

	t49 = (x197|(x198&(x199<=x200)));

	if (t49 != 8LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = 9LLU;
	static int32_t t50 = -3021618;

	t50 = (x201|(x202&(x203<=x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	uint64_t x206 = 1431687LLU;
	int8_t x207 = INT8_MAX;
	int32_t x208 = INT32_MAX;
	volatile uint64_t t51 = 643592642745152751LLU;

	t51 = (x205|(x206&(x207<=x208)));

	if (t51 != 4294967295LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	uint64_t x210 = 6819169LLU;
	uint64_t x211 = 6202599485LLU;
	static int64_t x212 = 4037418535LL;
	volatile uint64_t t52 = 44000LLU;

	t52 = (x209|(x210&(x211<=x212)));

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -146299048;
	uint16_t x215 = 0U;
	volatile int32_t t53 = 1;

	t53 = (x213|(x214&(x215<=x216)));

	if (t53 != -146299048) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 71U;
	static int16_t x218 = -1;
	int64_t x219 = INT64_MAX;
	int64_t x220 = -2615536LL;
	int32_t t54 = 0;

	t54 = (x217|(x218&(x219<=x220)));

	if (t54 != 71) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x223 = -2283001;
	uint32_t t55 = 1536409509U;

	t55 = (x221|(x222&(x223<=x224)));

	if (t55 != 65535U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	static int32_t x226 = -1;
	uint8_t x227 = 1U;

	t56 = (x225|(x226&(x227<=x228)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	uint32_t x232 = 1344425761U;
	int32_t t57 = -776016;

	t57 = (x229|(x230&(x231<=x232)));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -227429559800380LL;
	uint64_t x234 = 17351915LLU;
	volatile uint64_t x236 = UINT64_MAX;
	uint64_t t58 = 68458708594LLU;

	t58 = (x233|(x234&(x235<=x236)));

	if (t58 != 18446516644149751237LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 222567LLU;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MAX;
	volatile int16_t x240 = -1;
	uint64_t t59 = 55LLU;

	t59 = (x237|(x238&(x239<=x240)));

	if (t59 != 222567LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	int16_t x242 = -1;
	static int64_t x244 = -28386937413LL;

	t60 = (x241|(x242&(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MIN;

	t61 = (x245|(x246&(x247<=x248)));

	if (t61 != 862334820U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = 30;
	int32_t t62 = 1;

	t62 = (x249|(x250&(x251<=x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x254 = -1;
	static int8_t x255 = INT8_MAX;
	uint8_t x256 = UINT8_MAX;
	int32_t t63 = 3486721;

	t63 = (x253|(x254&(x255<=x256)));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MIN;
	volatile int64_t x259 = INT64_MAX;
	int8_t x260 = -11;
	static int32_t t64 = 1;

	t64 = (x257|(x258&(x259<=x260)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	static volatile int8_t x262 = INT8_MIN;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = -76674;

	t65 = (x261|(x262&(x263<=x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	volatile int8_t x266 = INT8_MAX;
	static int8_t x267 = -4;
	int64_t x268 = -48966LL;

	t66 = (x265|(x266&(x267<=x268)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -6240435;
	volatile int16_t x270 = -1;
	int32_t x271 = 1;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t67 = -898;

	t67 = (x269|(x270&(x271<=x272)));

	if (t67 != -6240435) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 180LLU;
	uint32_t x274 = 5239U;
	int32_t x275 = INT32_MIN;
	volatile int32_t x276 = 4130406;

	t68 = (x273|(x274&(x275<=x276)));

	if (t68 != 181LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x279 = 0LL;
	uint16_t x280 = 13828U;
	int32_t t69 = -72590;

	t69 = (x277|(x278&(x279<=x280)));

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 27U;
	static uint16_t x283 = 5U;
	int8_t x284 = -1;
	volatile int32_t t70 = 0;

	t70 = (x281|(x282&(x283<=x284)));

	if (t70 != 27) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	static int32_t x286 = INT32_MIN;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = INT32_MIN;

	t71 = (x285|(x286&(x287<=x288)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	int32_t x290 = -1;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = INT64_MAX;

	t72 = (x289|(x290&(x291<=x292)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MIN;
	volatile int8_t x295 = INT8_MAX;
	uint8_t x296 = UINT8_MAX;

	t73 = (x293|(x294&(x295<=x296)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = 22996;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x297|(x298&(x299<=x300)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 13;
	int32_t x304 = 1620488;

	t75 = (x301|(x302&(x303<=x304)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	volatile int32_t x306 = INT32_MIN;
	uint8_t x307 = 0U;
	int8_t x308 = INT8_MAX;
	int64_t t76 = INT64_MAX;

	t76 = (x305|(x306&(x307<=x308)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MAX;
	volatile int16_t x312 = INT16_MAX;
	int64_t t77 = -50497018LL;

	t77 = (x309|(x310&(x311<=x312)));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = 3;
	volatile uint64_t t78 = 3713320721712395LLU;

	t78 = (x313|(x314&(x315<=x316)));

	if (t78 != 3315LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 3089105U;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 12U;
	int8_t x320 = -1;
	uint32_t t79 = 990U;

	t79 = (x317|(x318&(x319<=x320)));

	if (t79 != 3089105U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x322 = 448U;
	int16_t x323 = INT16_MIN;
	volatile uint64_t t80 = 308304002490LLU;

	t80 = (x321|(x322&(x323<=x324)));

	if (t80 != 8617229971772088055LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x326 = UINT8_MAX;
	static volatile int64_t x327 = INT64_MIN;
	uint64_t x328 = 294LLU;

	t81 = (x325|(x326&(x327<=x328)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = 1649U;
	int8_t x332 = -5;
	uint32_t t82 = UINT32_MAX;

	t82 = (x329|(x330&(x331<=x332)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 103U;
	int8_t x335 = INT8_MIN;
	volatile int8_t x336 = 5;
	volatile int32_t t83 = 14847;

	t83 = (x333|(x334&(x335<=x336)));

	if (t83 != 103) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -24;
	int16_t x338 = -1;
	int64_t x339 = INT64_MAX;

	t84 = (x337|(x338&(x339<=x340)));

	if (t84 != -24) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 16U;
	int64_t x343 = INT64_MAX;
	volatile int16_t x344 = -1;
	volatile uint64_t t85 = 1817017962200LLU;

	t85 = (x341|(x342&(x343<=x344)));

	if (t85 != 16LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -1;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	uint16_t x348 = UINT16_MAX;
	int64_t t86 = 1023848910LL;

	t86 = (x345|(x346&(x347<=x348)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MAX;
	int64_t x351 = -1LL;
	int8_t x352 = 9;

	t87 = (x349|(x350&(x351<=x352)));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -27;
	uint8_t x354 = 5U;
	uint16_t x356 = 23695U;
	volatile int32_t t88 = -222852;

	t88 = (x353|(x354&(x355<=x356)));

	if (t88 != -27) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MAX;
	static uint64_t x358 = UINT64_MAX;
	int16_t x359 = -14;
	int8_t x360 = -1;
	volatile uint64_t t89 = 1LLU;

	t89 = (x357|(x358&(x359<=x360)));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 49515869U;
	int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	volatile uint32_t t90 = 1316107993U;

	t90 = (x361|(x362&(x363<=x364)));

	if (t90 != 49515869U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MAX;
	int32_t x367 = 81;
	static int8_t x368 = INT8_MIN;
	int32_t t91 = 14;

	t91 = (x365|(x366&(x367<=x368)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = INT64_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = -1;
	static volatile uint64_t x372 = 97410940087941LLU;

	t92 = (x369|(x370&(x371<=x372)));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = 127U;
	static uint8_t x375 = 63U;
	volatile int32_t t93 = INT32_MAX;

	t93 = (x373|(x374&(x375<=x376)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 117548;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MAX;
	int32_t t94 = -19832439;

	t94 = (x377|(x378&(x379<=x380)));

	if (t94 != 117549) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 0U;
	int8_t x382 = INT8_MIN;
	int32_t x383 = 1;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 102;

	t95 = (x381|(x382&(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 4482;
	int64_t x386 = INT64_MIN;
	static int64_t x387 = INT64_MIN;
	volatile int32_t x388 = INT32_MIN;
	static int64_t t96 = 6912LL;

	t96 = (x385|(x386&(x387<=x388)));

	if (t96 != 4482LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = -4;
	int64_t x390 = INT64_MAX;
	int16_t x391 = -1;
	volatile int64_t t97 = 108LL;

	t97 = (x389|(x390&(x391<=x392)));

	if (t97 != -4LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int16_t x394 = INT16_MAX;
	uint32_t x395 = 48U;
	int8_t x396 = 0;
	static int32_t t98 = -55705;

	t98 = (x393|(x394&(x395<=x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	static int16_t x398 = 0;
	static int16_t x399 = 468;
	int64_t x400 = INT64_MAX;
	static int32_t t99 = 19;

	t99 = (x397|(x398&(x399<=x400)));

	if (t99 != -1) { NG(); } else { ; }
	
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

