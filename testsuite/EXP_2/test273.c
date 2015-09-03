#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 35U;
volatile uint32_t x6 = 4027U;
uint8_t x8 = 8U;
static int64_t x9 = 683LL;
static volatile uint64_t x12 = UINT64_MAX;
uint64_t x13 = 79845617846711328LLU;
uint16_t x17 = UINT16_MAX;
static uint32_t x20 = UINT32_MAX;
volatile uint32_t t4 = UINT32_MAX;
int32_t x22 = INT32_MAX;
int16_t x26 = 0;
int32_t x28 = 13835139;
volatile int32_t t6 = -174767764;
volatile uint32_t x31 = UINT32_MAX;
uint64_t x39 = 193LLU;
int16_t x43 = 12255;
volatile int8_t x63 = INT8_MIN;
int32_t t12 = 134642;
int8_t x68 = INT8_MAX;
int64_t x76 = INT64_MAX;
volatile uint32_t x101 = 131U;
int64_t x103 = INT64_MIN;
int32_t t20 = -130818585;
volatile int64_t x105 = -71193422LL;
uint64_t x107 = UINT64_MAX;
static int8_t x109 = INT8_MIN;
uint64_t x113 = 1013119405LLU;
uint32_t x115 = 184209U;
static int16_t x116 = INT16_MAX;
int64_t x134 = -868135372205934896LL;
int8_t x138 = INT8_MIN;
uint32_t x142 = 82504U;
int64_t x144 = -1LL;
int64_t x145 = 39896527865925LL;
static int8_t x147 = 0;
int32_t t30 = 321552715;
int8_t x154 = INT8_MIN;
static uint32_t x158 = UINT32_MAX;
int32_t t35 = -234014;
int64_t x183 = 442505LL;
int64_t x185 = INT64_MIN;
static uint8_t x186 = 6U;
int16_t x188 = 287;
static volatile int32_t t38 = 7;
uint8_t x197 = UINT8_MAX;
int32_t x200 = 909519;
int8_t x201 = -1;
uint32_t x203 = UINT32_MAX;
uint64_t x211 = 16507LLU;
uint32_t t43 = UINT32_MAX;
static int8_t x213 = 1;
uint16_t x215 = UINT16_MAX;
uint32_t t44 = UINT32_MAX;
int32_t x218 = INT32_MAX;
int8_t x221 = 48;
volatile int64_t t48 = -68436588991LL;
int16_t x239 = -1;
int32_t t52 = -7;
static int8_t x254 = INT8_MIN;
int64_t t54 = -58095344LL;
static uint8_t x265 = 1U;
volatile int8_t x287 = INT8_MIN;
static uint64_t x291 = 1662169520LLU;
uint64_t x294 = 999205693441299970LLU;
volatile uint32_t x304 = UINT32_MAX;
uint16_t x309 = UINT16_MAX;
int16_t x310 = INT16_MIN;
volatile int32_t x312 = INT32_MIN;
int16_t x314 = -1;
uint16_t x316 = 4U;
int8_t x324 = INT8_MIN;
static uint16_t x325 = UINT16_MAX;
uint64_t x330 = UINT64_MAX;
uint64_t x345 = 38841206215450221LLU;
int32_t t75 = -9;
volatile int32_t t76 = 53985443;
volatile int32_t t78 = 129971;
int32_t t79 = -175058604;
int32_t x371 = INT32_MIN;
int64_t x377 = INT64_MAX;
volatile int64_t x378 = 702061226LL;
int16_t x397 = -7839;
int32_t t86 = 350505;
uint32_t x415 = UINT32_MAX;
static uint64_t x419 = 613074LLU;
uint32_t x421 = 243617U;
int16_t x422 = INT16_MIN;
int8_t x433 = -1;
int64_t x437 = INT64_MIN;
static uint16_t x439 = 19U;
int64_t x448 = 110LL;
uint8_t x449 = UINT8_MAX;
int32_t t95 = INT32_MIN;
int64_t x458 = INT64_MIN;
static int64_t x461 = -1LL;
int16_t x462 = 50;


void f0(void) {
	int64_t x1 = 251578LL;
	volatile int64_t x2 = 27386304274325149LL;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x1==(x2-x3))^x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 77355LL;
	int16_t x7 = 59;
	volatile int32_t t1 = 440049;

	t1 = ((x5==(x6-x7))^x8);

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x9==(x10-x11))^x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int16_t x15 = -1;
	int64_t x16 = -1LL;
	static int64_t t3 = 133256954LL;

	t3 = ((x13==(x14-x15))^x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x18 = INT16_MAX;
	static int8_t x19 = -10;

	t4 = ((x17==(x18-x19))^x20);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 9365;
	volatile uint64_t x23 = UINT64_MAX;
	int64_t x24 = -1LL;
	static volatile int64_t t5 = 6292637809210LL;

	t5 = ((x21==(x22-x23))^x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -31424;
	static int32_t x27 = 0;

	t6 = ((x25==(x26-x27))^x28);

	if (t6 != 13835139) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = 0;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29==(x30-x31))^x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MIN;
	volatile uint16_t x40 = 4009U;
	volatile int32_t t8 = -22;

	t8 = ((x37==(x38-x39))^x40);

	if (t8 != 4009) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	int16_t x42 = -1;
	uint64_t x44 = 14360125446LLU;
	static volatile uint64_t t9 = 1135300339395LLU;

	t9 = ((x41==(x42-x43))^x44);

	if (t9 != 14360125446LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 66342460768081024LLU;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = -1;
	int16_t x48 = -1;
	int32_t t10 = 140338765;

	t10 = ((x45==(x46-x47))^x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -553;
	static int16_t x58 = 12;
	int16_t x59 = -1;
	volatile uint8_t x60 = UINT8_MAX;
	int32_t t11 = -1;

	t11 = ((x57==(x58-x59))^x60);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -319;
	int16_t x62 = 172;
	volatile int32_t x64 = -1;

	t12 = ((x61==(x62-x63))^x64);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = 8410616U;
	volatile int64_t x67 = -1LL;
	static int32_t t13 = -12;

	t13 = ((x65==(x66-x67))^x68);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -431196253;
	int16_t x70 = 1;
	uint16_t x71 = 310U;
	int16_t x72 = INT16_MIN;
	volatile int32_t t14 = 3;

	t14 = ((x69==(x70-x71))^x72);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 0U;
	int32_t x74 = INT32_MIN;
	int64_t x75 = -38478LL;
	int64_t t15 = INT64_MAX;

	t15 = ((x73==(x74-x75))^x76);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = UINT32_MAX;
	static int64_t x78 = -80873LL;
	uint32_t x79 = 6U;
	static volatile int16_t x80 = -8057;
	static volatile int32_t t16 = -623;

	t16 = ((x77==(x78-x79))^x80);

	if (t16 != -8057) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	static uint64_t x90 = UINT64_MAX;
	int8_t x91 = -1;
	int16_t x92 = INT16_MAX;
	int32_t t17 = 2671;

	t17 = ((x89==(x90-x91))^x92);

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int32_t x96 = -1;
	static int32_t t18 = 1262655;

	t18 = ((x93==(x94-x95))^x96);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = 50383329;
	static int8_t x98 = INT8_MAX;
	int16_t x99 = -1;
	static int32_t x100 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = ((x97==(x98-x99))^x100);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x102 = INT64_MIN;
	static volatile int8_t x104 = INT8_MIN;

	t20 = ((x101==(x102-x103))^x104);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = -3;
	uint8_t x108 = 31U;
	int32_t t21 = 44;

	t21 = ((x105==(x106-x107))^x108);

	if (t21 != 31) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = -1LL;
	int16_t x111 = INT16_MAX;
	int16_t x112 = 1411;
	int32_t t22 = -126257614;

	t22 = ((x109==(x110-x111))^x112);

	if (t22 != 1411) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x114 = 115U;
	static volatile int32_t t23 = -31752428;

	t23 = ((x113==(x114-x115))^x116);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = 1LLU;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = 47289673292389071LLU;
	volatile uint64_t t24 = 12924185331449LLU;

	t24 = ((x125==(x126-x127))^x128);

	if (t24 != 47289673292389071LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x129 = INT16_MAX;
	volatile int32_t x130 = INT32_MIN;
	volatile uint32_t x131 = 143210U;
	int8_t x132 = 1;
	static int32_t t25 = 285;

	t25 = ((x129==(x130-x131))^x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = -137093554102037LL;
	uint8_t x135 = 25U;
	uint16_t x136 = UINT16_MAX;
	int32_t t26 = -323;

	t26 = ((x133==(x134-x135))^x136);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x139 = -204LL;
	int32_t x140 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

	t27 = ((x137==(x138-x139))^x140);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = 101347U;
	int32_t x143 = -5291;
	volatile int64_t t28 = -3LL;

	t28 = ((x141==(x142-x143))^x144);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x146 = -1;
	uint32_t x148 = 44439409U;
	volatile uint32_t t29 = 1244493179U;

	t29 = ((x145==(x146-x147))^x148);

	if (t29 != 44439409U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = UINT8_MAX;
	static uint32_t x150 = 584848U;
	static uint16_t x151 = 3577U;
	static int16_t x152 = -5597;

	t30 = ((x149==(x150-x151))^x152);

	if (t30 != -5597) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t31 = -1615674;

	t31 = ((x153==(x154-x155))^x156);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = UINT32_MAX;
	volatile int8_t x159 = -1;
	uint8_t x160 = 25U;
	static volatile int32_t t32 = 225;

	t32 = ((x157==(x158-x159))^x160);

	if (t32 != 25) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x161 = -12;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = -1;
	static volatile uint64_t x164 = 171910960209LLU;
	static uint64_t t33 = 198366044277058792LLU;

	t33 = ((x161==(x162-x163))^x164);

	if (t33 != 171910960209LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int8_t x166 = -1;
	int16_t x167 = -7;
	volatile int32_t x168 = INT32_MAX;
	int32_t t34 = INT32_MAX;

	t34 = ((x165==(x166-x167))^x168);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x169 = INT64_MIN;
	static int16_t x170 = INT16_MIN;
	int16_t x171 = -1;
	static int16_t x172 = -1;

	t35 = ((x169==(x170-x171))^x172);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x181 = 1;
	int64_t x182 = -317213151235389LL;
	int64_t x184 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = ((x181==(x182-x183))^x184);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x187 = 63LLU;
	static volatile int32_t t37 = 5080;

	t37 = ((x185==(x186-x187))^x188);

	if (t37 != 287) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = 73U;
	int64_t x190 = -272216961455377LL;
	int64_t x191 = -1LL;
	uint16_t x192 = 9U;

	t38 = ((x189==(x190-x191))^x192);

	if (t38 != 9) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = -8019984LL;
	uint16_t x194 = 9208U;
	volatile int64_t x195 = -1LL;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t39 = 610801813;

	t39 = ((x193==(x194-x195))^x196);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 28788199152LLU;
	int32_t t40 = 14839189;

	t40 = ((x197==(x198-x199))^x200);

	if (t40 != 909519) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x202 = 7U;
	uint16_t x204 = 78U;
	int32_t t41 = 454;

	t41 = ((x201==(x202-x203))^x204);

	if (t41 != 78) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x205 = 10816199910LLU;
	volatile uint16_t x206 = 13701U;
	int64_t x207 = 281956035LL;
	uint8_t x208 = UINT8_MAX;
	int32_t t42 = 599;

	t42 = ((x205==(x206-x207))^x208);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = INT8_MIN;
	static int64_t x210 = INT64_MIN;
	volatile uint32_t x212 = UINT32_MAX;

	t43 = ((x209==(x210-x211))^x212);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x214 = 15383054396745LL;
	uint32_t x216 = UINT32_MAX;

	t44 = ((x213==(x214-x215))^x216);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x217 = 1065911847LLU;
	uint16_t x219 = 14412U;
	volatile uint16_t x220 = 20967U;
	int32_t t45 = 3936630;

	t45 = ((x217==(x218-x219))^x220);

	if (t45 != 20967) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x222 = -1;
	int32_t x223 = INT32_MAX;
	int8_t x224 = 1;
	volatile int32_t t46 = -3588;

	t46 = ((x221==(x222-x223))^x224);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x229 = INT64_MIN;
	int64_t x230 = -18804165LL;
	volatile int64_t x231 = INT64_MIN;
	volatile int64_t x232 = INT64_MAX;
	volatile int64_t t47 = INT64_MAX;

	t47 = ((x229==(x230-x231))^x232);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = UINT8_MAX;
	static int32_t x234 = INT32_MAX;
	uint32_t x235 = 76093790U;
	int64_t x236 = 70136887LL;

	t48 = ((x233==(x234-x235))^x236);

	if (t48 != 70136887LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 156197899U;
	volatile int32_t x238 = -6882952;
	volatile int8_t x240 = -1;
	volatile int32_t t49 = 1;

	t49 = ((x237==(x238-x239))^x240);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x241 = 116U;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MIN;
	volatile int16_t x244 = INT16_MIN;
	static int32_t t50 = -410532;

	t50 = ((x241==(x242-x243))^x244);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = -979;
	static volatile uint8_t x246 = 0U;
	int16_t x247 = -11124;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t51 = -32835420;

	t51 = ((x245==(x246-x247))^x248);

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x249 = -1;
	volatile int16_t x250 = INT16_MAX;
	int16_t x251 = INT16_MAX;
	int16_t x252 = -1;

	t52 = ((x249==(x250-x251))^x252);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x253 = -435;
	volatile uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MIN;
	int64_t t53 = INT64_MIN;

	t53 = ((x253==(x254-x255))^x256);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = -3;
	static int16_t x262 = 3096;
	int8_t x263 = 4;
	volatile int64_t x264 = -1LL;

	t54 = ((x261==(x262-x263))^x264);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x266 = -118896;
	int8_t x267 = -6;
	int64_t x268 = -1LL;
	volatile int64_t t55 = -32933189609LL;

	t55 = ((x265==(x266-x267))^x268);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x269 = 212357LLU;
	int32_t x270 = -1;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;
	int32_t t56 = -201319345;

	t56 = ((x269==(x270-x271))^x272);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	int16_t x275 = -9520;
	int64_t x276 = INT64_MIN;
	int64_t t57 = INT64_MIN;

	t57 = ((x273==(x274-x275))^x276);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = UINT64_MAX;
	static volatile int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static int32_t x280 = INT32_MIN;
	static int32_t t58 = INT32_MIN;

	t58 = ((x277==(x278-x279))^x280);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = 137U;
	static uint32_t x283 = 13U;
	uint32_t x284 = 13468607U;
	uint32_t t59 = 24623672U;

	t59 = ((x281==(x282-x283))^x284);

	if (t59 != 13468607U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x285 = UINT16_MAX;
	uint16_t x286 = 6U;
	volatile int16_t x288 = 45;
	volatile int32_t t60 = -369218;

	t60 = ((x285==(x286-x287))^x288);

	if (t60 != 45) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x289 = 3897U;
	volatile int8_t x290 = -1;
	static int16_t x292 = -1;
	volatile int32_t t61 = 85358;

	t61 = ((x289==(x290-x291))^x292);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	volatile uint16_t x296 = UINT16_MAX;
	int32_t t62 = -3724176;

	t62 = ((x293==(x294-x295))^x296);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x297 = INT32_MIN;
	uint8_t x298 = 1U;
	uint32_t x299 = UINT32_MAX;
	static int16_t x300 = 398;
	volatile int32_t t63 = -7;

	t63 = ((x297==(x298-x299))^x300);

	if (t63 != 398) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = 32211792;
	int64_t x302 = -30LL;
	int16_t x303 = INT16_MAX;
	static volatile uint32_t t64 = UINT32_MAX;

	t64 = ((x301==(x302-x303))^x304);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = INT8_MIN;
	static uint8_t x306 = 1U;
	int8_t x307 = -1;
	int32_t x308 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = ((x305==(x306-x307))^x308);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x311 = INT8_MIN;
	int32_t t66 = INT32_MIN;

	t66 = ((x309==(x310-x311))^x312);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x313 = -1LL;
	int8_t x315 = 1;
	static int32_t t67 = -7132;

	t67 = ((x313==(x314-x315))^x316);

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x317 = UINT64_MAX;
	uint16_t x318 = 5U;
	static uint8_t x319 = 1U;
	uint8_t x320 = UINT8_MAX;
	int32_t t68 = -169332418;

	t68 = ((x317==(x318-x319))^x320);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x321 = 40;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	int32_t t69 = -1425603;

	t69 = ((x321==(x322-x323))^x324);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x326 = 2U;
	int8_t x327 = INT8_MAX;
	static volatile uint16_t x328 = 15U;
	volatile int32_t t70 = 84208029;

	t70 = ((x325==(x326-x327))^x328);

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = 31;
	uint64_t x331 = UINT64_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t71 = -6249858;

	t71 = ((x329==(x330-x331))^x332);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -408;
	int16_t x334 = INT16_MIN;
	static int16_t x335 = INT16_MIN;
	int64_t x336 = -13413915659995LL;
	int64_t t72 = -1699LL;

	t72 = ((x333==(x334-x335))^x336);

	if (t72 != -13413915659995LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MIN;
	int8_t x339 = -1;
	int64_t x340 = INT64_MAX;
	static volatile int64_t t73 = INT64_MAX;

	t73 = ((x337==(x338-x339))^x340);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x341 = UINT64_MAX;
	uint16_t x342 = 19U;
	int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t74 = INT32_MAX;

	t74 = ((x341==(x342-x343))^x344);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x346 = UINT32_MAX;
	volatile int32_t x347 = 16233;
	int16_t x348 = -1;

	t75 = ((x345==(x346-x347))^x348);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = UINT8_MAX;
	static int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	static volatile int8_t x352 = -2;

	t76 = ((x349==(x350-x351))^x352);

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 14626U;
	int64_t x354 = -1LL;
	static int8_t x355 = INT8_MIN;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t77 = INT32_MIN;

	t77 = ((x353==(x354-x355))^x356);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = INT64_MIN;
	static int16_t x358 = -9;
	int8_t x359 = INT8_MAX;
	int32_t x360 = -15;

	t78 = ((x357==(x358-x359))^x360);

	if (t78 != -15) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 61U;
	int16_t x362 = 2441;
	volatile uint8_t x363 = 3U;
	static uint16_t x364 = 15U;

	t79 = ((x361==(x362-x363))^x364);

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	int64_t x372 = -1192954951316482LL;
	int64_t t80 = -15613LL;

	t80 = ((x369==(x370-x371))^x372);

	if (t80 != -1192954951316482LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x373 = INT16_MIN;
	volatile uint32_t x374 = 912U;
	uint32_t x375 = 91922U;
	int32_t x376 = INT32_MAX;
	int32_t t81 = INT32_MAX;

	t81 = ((x373==(x374-x375))^x376);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x379 = 44939023339235223LLU;
	volatile uint64_t x380 = 1LLU;
	uint64_t t82 = 2302017752245LLU;

	t82 = ((x377==(x378-x379))^x380);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = INT32_MAX;
	int32_t x386 = -478;
	uint64_t x387 = UINT64_MAX;
	static uint64_t x388 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = ((x385==(x386-x387))^x388);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MAX;
	volatile int64_t x390 = -1077261003911792LL;
	static volatile uint32_t x391 = 710087132U;
	int8_t x392 = 1;
	volatile int32_t t84 = 3;

	t84 = ((x389==(x390-x391))^x392);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MAX;
	volatile int16_t x395 = INT16_MIN;
	static int8_t x396 = INT8_MIN;
	int32_t t85 = -73261;

	t85 = ((x393==(x394-x395))^x396);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x398 = -1LL;
	volatile uint32_t x399 = UINT32_MAX;
	int16_t x400 = -1;

	t86 = ((x397==(x398-x399))^x400);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x405 = 11718143U;
	static int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MIN;
	int64_t x408 = 113841610203LL;
	volatile int64_t t87 = 49387250721LL;

	t87 = ((x405==(x406-x407))^x408);

	if (t87 != 113841610203LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = -1LL;
	uint16_t x414 = 9U;
	static uint32_t x416 = UINT32_MAX;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = ((x413==(x414-x415))^x416);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x417 = INT16_MIN;
	static volatile int32_t x418 = 113665;
	int8_t x420 = INT8_MIN;
	int32_t t89 = 911;

	t89 = ((x417==(x418-x419))^x420);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x423 = 1386432149U;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t90 = 96640;

	t90 = ((x421==(x422-x423))^x424);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = 148;
	int8_t x430 = 0;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = -1;
	volatile int32_t t91 = 4051;

	t91 = ((x429==(x430-x431))^x432);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x434 = 0;
	int16_t x435 = -1;
	volatile uint8_t x436 = UINT8_MAX;
	volatile int32_t t92 = -1161;

	t92 = ((x433==(x434-x435))^x436);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x438 = -1;
	int32_t x440 = -1;
	static int32_t t93 = -78707;

	t93 = ((x437==(x438-x439))^x440);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = INT8_MAX;
	uint8_t x446 = 31U;
	int8_t x447 = INT8_MIN;
	static volatile int64_t t94 = 1839629469687472LL;

	t94 = ((x445==(x446-x447))^x448);

	if (t94 != 110LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x450 = -1LL;
	volatile int16_t x451 = -3;
	int32_t x452 = INT32_MIN;

	t95 = ((x449==(x450-x451))^x452);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = INT32_MAX;
	volatile int32_t x454 = 0;
	int64_t x455 = -17325802LL;
	static volatile int8_t x456 = INT8_MIN;
	volatile int32_t t96 = 26;

	t96 = ((x453==(x454-x455))^x456);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = INT64_MAX;
	int16_t x459 = INT16_MIN;
	volatile int8_t x460 = -1;
	int32_t t97 = 180547;

	t97 = ((x457==(x458-x459))^x460);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x463 = INT16_MIN;
	int32_t x464 = -1;
	int32_t t98 = -7;

	t98 = ((x461==(x462-x463))^x464);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x465 = 103909;
	volatile int8_t x466 = INT8_MIN;
	int16_t x467 = INT16_MIN;
	uint16_t x468 = UINT16_MAX;
	int32_t t99 = 0;

	t99 = ((x465==(x466-x467))^x468);

	if (t99 != 65535) { NG(); } else { ; }
	
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

