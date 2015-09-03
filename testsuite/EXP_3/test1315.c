#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x8 = 1132906179LLU;
int64_t x13 = INT64_MAX;
static int16_t x15 = INT16_MAX;
static int32_t x16 = 28724506;
int32_t x23 = INT32_MAX;
int16_t x25 = INT16_MIN;
uint32_t x27 = UINT32_MAX;
uint16_t x33 = UINT16_MAX;
int32_t t7 = -7056829;
volatile uint8_t x40 = 24U;
static int16_t x45 = 439;
int64_t x49 = 353025LL;
static uint16_t x52 = UINT16_MAX;
volatile int64_t t11 = 1264992LL;
static int32_t x55 = 989518;
uint64_t x60 = 120174299LLU;
volatile uint32_t t13 = 1U;
int8_t x62 = INT8_MAX;
uint16_t x64 = 574U;
uint16_t x85 = UINT16_MAX;
int16_t x88 = -275;
volatile uint64_t x89 = UINT64_MAX;
volatile int32_t x98 = -1197;
volatile int64_t t23 = 1461616LL;
volatile int16_t x101 = 511;
volatile int16_t x105 = INT16_MAX;
static int64_t x107 = INT64_MIN;
static volatile int32_t t25 = -2;
int8_t x109 = -1;
int16_t x111 = 0;
int64_t x115 = INT64_MIN;
uint32_t x117 = 147U;
int32_t x129 = INT32_MAX;
int32_t x130 = INT32_MIN;
int64_t x132 = 7789500810616067LL;
static volatile int64_t x140 = 4213135361856LL;
uint64_t x145 = 3594937LLU;
uint64_t x146 = UINT64_MAX;
uint8_t x149 = 0U;
int8_t x153 = INT8_MIN;
uint64_t x154 = UINT64_MAX;
int64_t x156 = INT64_MIN;
static int8_t x161 = INT8_MAX;
uint64_t x162 = 86LLU;
int64_t x168 = -1LL;
uint16_t x172 = 0U;
int32_t x177 = INT32_MIN;
int16_t x180 = 21;
int64_t x181 = 7LL;
uint8_t x185 = 2U;
int16_t x186 = 78;
int32_t x192 = INT32_MIN;
static int8_t x198 = INT8_MAX;
volatile uint32_t x201 = 120542U;
int32_t x202 = 25190;
volatile int64_t x204 = INT64_MAX;
int16_t x216 = -1;
volatile int8_t x220 = -1;
static int32_t x222 = INT32_MIN;
uint16_t x231 = 13U;
int64_t x234 = 14360480LL;
int32_t x235 = INT32_MIN;
int64_t x239 = INT64_MIN;
uint32_t t58 = 519677U;
static uint64_t x243 = UINT64_MAX;
int64_t x246 = -1LL;
int64_t x262 = INT64_MIN;
uint32_t x264 = 16582479U;
volatile int64_t t64 = -1LL;
volatile int16_t x265 = INT16_MIN;
uint16_t x266 = 768U;
static uint32_t t66 = 24318U;
int16_t x274 = 63;
int64_t x282 = INT64_MAX;
int32_t x286 = INT32_MAX;
volatile int16_t x288 = INT16_MAX;
int8_t x300 = 0;
volatile uint64_t t73 = 1517410555LLU;
int64_t x318 = -1LL;
uint16_t x320 = 7408U;
int32_t x322 = INT32_MIN;
int8_t x323 = INT8_MAX;
volatile int64_t x324 = INT64_MIN;
uint8_t x326 = UINT8_MAX;
int8_t x328 = -4;
int8_t x331 = INT8_MIN;
uint64_t x332 = 9766294550LLU;
volatile int32_t t81 = -22460;
uint32_t x346 = UINT32_MAX;
int64_t x349 = INT64_MIN;
int16_t x351 = INT16_MIN;
static int16_t x355 = INT16_MAX;
int32_t t87 = -7158623;
volatile uint16_t x359 = 9U;
int32_t t88 = 38462;
volatile uint32_t x365 = UINT32_MAX;
volatile int32_t x370 = INT32_MIN;
static volatile int64_t x372 = INT64_MIN;
volatile int32_t t92 = 1;
int64_t x378 = 451667LL;
int64_t x381 = 4LL;
uint8_t x385 = 15U;
int32_t x391 = INT32_MIN;
static uint16_t x395 = 75U;
volatile int8_t x397 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 38U;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -6;

	t0 = ((x1&x2)-(x3==x4));

	if (t0 != 38) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -133598666561382320LL;
	uint16_t x6 = 6559U;
	int8_t x7 = INT8_MAX;
	volatile int64_t t1 = 5LL;

	t1 = ((x5&x6)-(x7==x8));

	if (t1 != 6160LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = INT32_MIN;
	volatile int64_t t2 = -5699810LL;

	t2 = ((x13&x14)-(x15==x16));

	if (t2 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = 42;
	uint32_t x18 = 30892U;
	static int64_t x19 = INT64_MIN;
	int64_t x20 = -1LL;
	volatile uint32_t t3 = 190U;

	t3 = ((x17&x18)-(x19==x20));

	if (t3 != 40U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1019;
	volatile int8_t x22 = -1;
	static int32_t x24 = -61175774;
	volatile int32_t t4 = 289623;

	t4 = ((x21&x22)-(x23==x24));

	if (t4 != -1019) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MIN;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t5 = 4019055;

	t5 = ((x25&x26)-(x27==x28));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = INT64_MAX;
	int16_t x31 = -1;
	int64_t x32 = INT64_MIN;
	int64_t t6 = -24LL;

	t6 = ((x29&x30)-(x31==x32));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	uint32_t x35 = 419355U;
	static uint16_t x36 = UINT16_MAX;

	t7 = ((x33&x34)-(x35==x36));

	if (t7 != 65408) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 1;
	static int16_t x38 = 0;
	int8_t x39 = -1;
	volatile int32_t t8 = 141204;

	t8 = ((x37&x38)-(x39==x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 22040653502798972LL;
	uint32_t x42 = 17U;
	int64_t x43 = -1077213722789531848LL;
	uint8_t x44 = 5U;
	volatile int64_t t9 = 2780811859135655LL;

	t9 = ((x41&x42)-(x43==x44));

	if (t9 != 16LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = -324750357;
	int32_t x47 = -232072247;
	int64_t x48 = -1LL;
	volatile int32_t t10 = -23;

	t10 = ((x45&x46)-(x47==x48));

	if (t10 != 419) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;

	t11 = ((x49&x50)-(x51==x52));

	if (t11 != 353024LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = 35553127444LL;
	int8_t x56 = -1;
	int64_t t12 = 12903587444099256LL;

	t12 = ((x53&x54)-(x55==x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 1599021U;
	static volatile int16_t x58 = INT16_MAX;
	static int8_t x59 = INT8_MIN;

	t13 = ((x57&x58)-(x59==x60));

	if (t13 != 26157U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MIN;
	int16_t x63 = INT16_MAX;
	volatile int32_t t14 = 111203826;

	t14 = ((x61&x62)-(x63==x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -1;
	int8_t x66 = 21;
	volatile int32_t x67 = -1;
	uint64_t x68 = 27286024703978LLU;
	static volatile int32_t t15 = -21019438;

	t15 = ((x65&x66)-(x67==x68));

	if (t15 != 21) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -1;
	static int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -1;
	static volatile int32_t t16 = -12986;

	t16 = ((x69&x70)-(x71==x72));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = UINT64_MAX;
	volatile uint8_t x74 = UINT8_MAX;
	static int32_t x75 = -1;
	int32_t x76 = INT32_MIN;
	uint64_t t17 = 32LLU;

	t17 = ((x73&x74)-(x75==x76));

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 1U;
	static volatile int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	int64_t x80 = INT64_MAX;
	static volatile int32_t t18 = 8575;

	t18 = ((x77&x78)-(x79==x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 1U;
	static uint16_t x82 = 55U;
	int16_t x83 = INT16_MIN;
	int64_t x84 = 86LL;
	int32_t t19 = -7;

	t19 = ((x81&x82)-(x83==x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	volatile int64_t t20 = -1LL;

	t20 = ((x85&x86)-(x87==x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = 308142490U;
	static volatile int64_t x91 = INT64_MIN;
	static volatile int32_t x92 = INT32_MAX;
	uint64_t t21 = 700047093029LLU;

	t21 = ((x89&x90)-(x91==x92));

	if (t21 != 308142490LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 36U;
	int64_t x94 = INT64_MIN;
	static int16_t x95 = 2141;
	int64_t x96 = INT64_MIN;
	int64_t t22 = -3602LL;

	t22 = ((x93&x94)-(x95==x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = -1LL;
	volatile int16_t x99 = -1;
	volatile int64_t x100 = INT64_MIN;

	t23 = ((x97&x98)-(x99==x100));

	if (t23 != -1197LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = INT64_MAX;
	volatile int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	int64_t t24 = -6LL;

	t24 = ((x101&x102)-(x103==x104));

	if (t24 != 510LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = INT8_MAX;
	uint8_t x108 = 10U;

	t25 = ((x105&x106)-(x107==x108));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x110 = INT64_MAX;
	volatile uint32_t x112 = 490191966U;
	static volatile int64_t t26 = INT64_MAX;

	t26 = ((x109&x110)-(x111==x112));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -3;
	volatile int64_t x114 = -1LL;
	int16_t x116 = INT16_MIN;
	int64_t t27 = 3800LL;

	t27 = ((x113&x114)-(x115==x116));

	if (t27 != -3LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x118 = 524;
	static uint64_t x119 = 134651244224LLU;
	volatile uint16_t x120 = 493U;
	volatile uint32_t t28 = 0U;

	t28 = ((x117&x118)-(x119==x120));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = 15802U;
	volatile uint32_t x123 = UINT32_MAX;
	int16_t x124 = -1;
	int32_t t29 = 24766531;

	t29 = ((x121&x122)-(x123==x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	volatile int32_t x126 = INT32_MAX;
	volatile uint16_t x127 = 26720U;
	int16_t x128 = -180;
	int32_t t30 = 2096296;

	t30 = ((x125&x126)-(x127==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x131 = 19U;
	volatile int32_t t31 = 1;

	t31 = ((x129&x130)-(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 3U;
	volatile int32_t t32 = -27;

	t32 = ((x133&x134)-(x135==x136));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	volatile uint16_t x138 = 724U;
	int16_t x139 = INT16_MAX;
	int32_t t33 = -1;

	t33 = ((x137&x138)-(x139==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = -164;
	volatile int16_t x143 = INT16_MIN;
	uint8_t x144 = 57U;
	int32_t t34 = INT32_MIN;

	t34 = ((x141&x142)-(x143==x144));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x147 = -14;
	volatile int16_t x148 = -30;
	uint64_t t35 = 45LLU;

	t35 = ((x145&x146)-(x147==x148));

	if (t35 != 3594937LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x150 = -361267331;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = 76901419510303265LL;
	volatile int32_t t36 = 124;

	t36 = ((x149&x150)-(x151==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x155 = -1;
	uint64_t t37 = 855187LLU;

	t37 = ((x153&x154)-(x155==x156));

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -175;
	static int16_t x158 = INT16_MAX;
	int32_t x159 = 5463920;
	int16_t x160 = INT16_MIN;
	static int32_t t38 = -110;

	t38 = ((x157&x158)-(x159==x160));

	if (t38 != 32593) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x163 = UINT64_MAX;
	uint64_t x164 = 431LLU;
	volatile uint64_t t39 = 3544978497592LLU;

	t39 = ((x161&x162)-(x163==x164));

	if (t39 != 86LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x165 = 9002804611591898LLU;
	uint32_t x166 = 0U;
	volatile int8_t x167 = INT8_MIN;
	volatile uint64_t t40 = 3152614LLU;

	t40 = ((x165&x166)-(x167==x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	static uint64_t x170 = 2208990650330146LLU;
	int32_t x171 = -1429058;
	volatile uint64_t t41 = 2LLU;

	t41 = ((x169&x170)-(x171==x172));

	if (t41 != 2208990650302464LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 409LLU;
	uint16_t x174 = 6469U;
	int64_t x175 = 74260433LL;
	int16_t x176 = -1;
	static volatile uint64_t t42 = 177527331LLU;

	t42 = ((x173&x174)-(x175==x176));

	if (t42 != 257LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x178 = 8671382802LLU;
	volatile int8_t x179 = INT8_MIN;
	volatile uint64_t t43 = 98LLU;

	t43 = ((x177&x178)-(x179==x180));

	if (t43 != 8589934592LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x182 = -58132;
	static uint8_t x183 = 0U;
	int8_t x184 = 2;
	int64_t t44 = -3246247664465385LL;

	t44 = ((x181&x182)-(x183==x184));

	if (t44 != 4LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x187 = -13;
	static int64_t x188 = -1LL;
	volatile int32_t t45 = 3446430;

	t45 = ((x185&x186)-(x187==x188));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	int32_t t46 = INT32_MIN;

	t46 = ((x189&x190)-(x191==x192));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	static int32_t x194 = INT32_MIN;
	static int32_t x195 = 2057278;
	int8_t x196 = INT8_MIN;
	int32_t t47 = 1482;

	t47 = ((x193&x194)-(x195==x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = INT32_MAX;
	volatile int64_t t48 = -1764185188253498582LL;

	t48 = ((x197&x198)-(x199==x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x203 = INT32_MIN;
	volatile uint32_t t49 = 7U;

	t49 = ((x201&x202)-(x203==x204));

	if (t49 != 16966U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	static uint64_t x206 = 801754779896052210LLU;
	uint8_t x207 = 1U;
	volatile int64_t x208 = INT64_MIN;
	volatile uint64_t t50 = 10168824LLU;

	t50 = ((x205&x206)-(x207==x208));

	if (t50 != 801754779896020992LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = UINT16_MAX;
	static volatile uint32_t x211 = 12U;
	static int64_t x212 = -157356954845185864LL;
	static volatile int32_t t51 = 3401952;

	t51 = ((x209&x210)-(x211==x212));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -600;
	volatile int64_t t52 = INT64_MIN;

	t52 = ((x213&x214)-(x215==x216));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = INT32_MAX;
	int16_t x219 = -1;
	static int32_t t53 = -80;

	t53 = ((x217&x218)-(x219==x220));

	if (t53 != 2147483519) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	int8_t x223 = 0;
	int16_t x224 = -16282;
	static volatile int64_t t54 = 0LL;

	t54 = ((x221&x222)-(x223==x224));

	if (t54 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = INT64_MIN;
	int64_t x226 = -35LL;
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = ((x225&x226)-(x227==x228));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	volatile uint8_t x230 = 1U;
	uint32_t x232 = 13989U;
	volatile int32_t t56 = -7;

	t56 = ((x229&x230)-(x231==x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = -12;
	static int8_t x236 = INT8_MIN;
	int64_t t57 = 538146LL;

	t57 = ((x233&x234)-(x235==x236));

	if (t57 != 14360480LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 537364264U;
	int16_t x238 = INT16_MIN;
	static uint8_t x240 = 4U;

	t58 = ((x237&x238)-(x239==x240));

	if (t58 != 537362432U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	volatile uint16_t x242 = 30U;
	int16_t x244 = INT16_MIN;
	static int64_t t59 = -49446LL;

	t59 = ((x241&x242)-(x243==x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = 6U;
	int64_t t60 = -5967LL;

	t60 = ((x245&x246)-(x247==x248));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -498;
	volatile uint32_t x250 = 6539U;
	volatile uint8_t x251 = 3U;
	uint16_t x252 = 0U;
	uint32_t t61 = 48938804U;

	t61 = ((x249&x250)-(x251==x252));

	if (t61 != 6154U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = 11440653;
	int8_t x254 = 32;
	int64_t x255 = -1LL;
	volatile int16_t x256 = INT16_MIN;
	static int32_t t62 = -486865;

	t62 = ((x253&x254)-(x255==x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 1U;
	int16_t x258 = INT16_MAX;
	volatile int16_t x259 = -1588;
	uint8_t x260 = UINT8_MAX;
	int32_t t63 = 5;

	t63 = ((x257&x258)-(x259==x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x261 = 5U;
	int16_t x263 = -1;

	t64 = ((x261&x262)-(x263==x264));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x267 = INT32_MIN;
	volatile int32_t x268 = -1;
	static volatile int32_t t65 = -14036699;

	t65 = ((x265&x266)-(x267==x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = 3;
	uint32_t x270 = 2U;
	int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;

	t66 = ((x269&x270)-(x271==x272));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	int8_t x275 = INT8_MIN;
	volatile int32_t x276 = -441400281;
	int64_t t67 = -1319404138LL;

	t67 = ((x273&x274)-(x275==x276));

	if (t67 != 63LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = 1885U;
	volatile uint8_t x278 = UINT8_MAX;
	int8_t x279 = INT8_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t68 = 27;

	t68 = ((x277&x278)-(x279==x280));

	if (t68 != 93) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = 1;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 684399006U;
	int64_t t69 = 1017240887LL;

	t69 = ((x281&x282)-(x283==x284));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MIN;
	int64_t x287 = 166158882LL;
	static int32_t t70 = 1;

	t70 = ((x285&x286)-(x287==x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = 1127068213787497457LL;
	volatile int64_t x290 = 1064LL;
	int32_t x291 = 22;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int64_t t71 = -2634450LL;

	t71 = ((x289&x290)-(x291==x292));

	if (t71 != 32LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x293 = 10177U;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	uint64_t x296 = 4597970LLU;
	volatile int32_t t72 = 20695;

	t72 = ((x293&x294)-(x295==x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = UINT8_MAX;
	static uint64_t x298 = UINT64_MAX;
	int32_t x299 = -1;

	t73 = ((x297&x298)-(x299==x300));

	if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 2061777U;
	volatile uint32_t x302 = 32119459U;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = 3782679181909468LL;
	static uint32_t t74 = 3306185U;

	t74 = ((x301&x302)-(x303==x304));

	if (t74 != 659585U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x305 = UINT16_MAX;
	static int16_t x306 = -1;
	static volatile int32_t x307 = -1;
	uint32_t x308 = UINT32_MAX;
	int32_t t75 = 15396969;

	t75 = ((x305&x306)-(x307==x308));

	if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	volatile int8_t x311 = -49;
	static volatile uint16_t x312 = UINT16_MAX;
	volatile int32_t t76 = -43561;

	t76 = ((x309&x310)-(x311==x312));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = 60LL;
	static int8_t x314 = -31;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = -1;
	volatile int64_t t77 = 27921787108LL;

	t77 = ((x313&x314)-(x315==x316));

	if (t77 != 32LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x317 = 30486314527949430LL;
	int16_t x319 = INT16_MIN;
	int64_t t78 = 947492LL;

	t78 = ((x317&x318)-(x319==x320));

	if (t78 != 30486314527949430LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x321 = 13U;
	static volatile uint32_t t79 = 11U;

	t79 = ((x321&x322)-(x323==x324));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MIN;
	int32_t x327 = INT32_MIN;
	int64_t t80 = -49030LL;

	t80 = ((x325&x326)-(x327==x328));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -506;
	uint8_t x330 = 0U;

	t81 = ((x329&x330)-(x331==x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 3923706804LL;
	int64_t x334 = INT64_MIN;
	int32_t x335 = 1019572;
	uint32_t x336 = 3994144U;
	int64_t t82 = -4885LL;

	t82 = ((x333&x334)-(x335==x336));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = -89849;
	volatile uint16_t x338 = UINT16_MAX;
	int8_t x339 = -1;
	int8_t x340 = INT8_MIN;
	static int32_t t83 = 4;

	t83 = ((x337&x338)-(x339==x340));

	if (t83 != 41223) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = 3664451U;
	static uint8_t x342 = 0U;
	int32_t x343 = INT32_MIN;
	uint16_t x344 = UINT16_MAX;
	uint32_t t84 = 61758684U;

	t84 = ((x341&x342)-(x343==x344));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = INT16_MIN;
	uint16_t x347 = 3U;
	int16_t x348 = 2;
	static volatile uint32_t t85 = 456795U;

	t85 = ((x345&x346)-(x347==x348));

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x350 = 186706LLU;
	int16_t x352 = INT16_MIN;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x349&x350)-(x351==x352));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = -7;
	uint16_t x354 = 11U;
	int8_t x356 = INT8_MIN;

	t87 = ((x353&x354)-(x355==x356));

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -12266;
	static int16_t x358 = INT16_MIN;
	uint16_t x360 = 310U;

	t88 = ((x357&x358)-(x359==x360));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = -48;
	uint32_t x363 = UINT32_MAX;
	uint16_t x364 = 11U;
	int32_t t89 = -1208688;

	t89 = ((x361&x362)-(x363==x364));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x366 = 423U;
	int32_t x367 = INT32_MAX;
	volatile uint16_t x368 = UINT16_MAX;
	volatile uint32_t t90 = 0U;

	t90 = ((x365&x366)-(x367==x368));

	if (t90 != 423U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -1;
	int16_t x371 = INT16_MIN;
	int32_t t91 = INT32_MIN;

	t91 = ((x369&x370)-(x371==x372));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	volatile int8_t x374 = 47;
	volatile uint64_t x375 = 73757701061876267LLU;
	int64_t x376 = INT64_MAX;

	t92 = ((x373&x374)-(x375==x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x377 = 785477U;
	int8_t x379 = 0;
	int64_t x380 = INT64_MAX;
	int64_t t93 = -1019517533366227LL;

	t93 = ((x377&x378)-(x379==x380));

	if (t93 != 189505LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x382 = -6220342;
	uint32_t x383 = 5844U;
	volatile uint8_t x384 = UINT8_MAX;
	int64_t t94 = -466LL;

	t94 = ((x381&x382)-(x383==x384));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x386 = INT16_MAX;
	volatile uint8_t x387 = 14U;
	int64_t x388 = -1LL;
	int32_t t95 = -15285;

	t95 = ((x385&x386)-(x387==x388));

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = -733547112659LL;
	int8_t x390 = -1;
	int64_t x392 = INT64_MIN;
	int64_t t96 = 76176068LL;

	t96 = ((x389&x390)-(x391==x392));

	if (t96 != -733547112659LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x393 = 1566882205U;
	volatile int64_t x394 = 596776222675195992LL;
	volatile uint16_t x396 = 6U;
	int64_t t97 = -257LL;

	t97 = ((x393&x394)-(x395==x396));

	if (t97 != 140777496LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x398 = -1;
	int16_t x399 = 225;
	int16_t x400 = -1;
	volatile int32_t t98 = -11;

	t98 = ((x397&x398)-(x399==x400));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x401 = -1LL;
	uint16_t x402 = 725U;
	int8_t x403 = INT8_MIN;
	int32_t x404 = -1;
	int64_t t99 = 1368560224452LL;

	t99 = ((x401&x402)-(x403==x404));

	if (t99 != 725LL) { NG(); } else { ; }
	
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

