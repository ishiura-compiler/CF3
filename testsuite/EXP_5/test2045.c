#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 38U;
volatile int16_t x14 = INT16_MIN;
uint8_t x15 = UINT8_MAX;
int16_t x16 = 910;
int16_t x21 = INT16_MIN;
int16_t x23 = INT16_MIN;
volatile int8_t x26 = INT8_MIN;
static int32_t x31 = 1;
int16_t x33 = -1;
static volatile uint32_t x48 = 1743437U;
volatile int64_t t13 = 1358764328619925895LL;
volatile int32_t t14 = -738242446;
static int64_t x66 = -1LL;
uint32_t x71 = 29997094U;
static uint32_t x92 = UINT32_MAX;
static int16_t x96 = INT16_MIN;
int16_t x97 = INT16_MIN;
volatile int16_t x99 = 226;
uint16_t x101 = UINT16_MAX;
volatile int64_t x103 = 11232107901LL;
int32_t x104 = -1;
int8_t x119 = -1;
volatile uint64_t t27 = 31LLU;
uint8_t x133 = UINT8_MAX;
static int32_t x136 = INT32_MAX;
int8_t x143 = INT8_MAX;
int64_t t31 = -2008131LL;
static int64_t x181 = -1LL;
int64_t x189 = -1LL;
uint16_t x196 = 8U;
volatile uint32_t t39 = 147442585U;
uint64_t t40 = 50851LLU;
int64_t x206 = INT64_MIN;
uint8_t x208 = UINT8_MAX;
int32_t t42 = -2724;
uint64_t x215 = UINT64_MAX;
static uint64_t t43 = 31LLU;
int32_t x219 = -1;
static int16_t x221 = 11;
int16_t x223 = INT16_MIN;
volatile int32_t x227 = INT32_MIN;
uint64_t x229 = UINT64_MAX;
int16_t x232 = INT16_MIN;
int16_t x235 = -1;
volatile int16_t x237 = INT16_MIN;
volatile int32_t t49 = 871;
uint32_t x249 = 169749U;
static int32_t x252 = INT32_MAX;
static uint8_t x257 = 4U;
int16_t x258 = INT16_MAX;
int64_t x261 = INT64_MIN;
int16_t x265 = INT16_MIN;
int32_t x270 = 5455202;
uint32_t x271 = UINT32_MAX;
static uint64_t x276 = 13178LLU;
volatile int64_t x279 = 6456LL;
volatile int32_t x283 = INT32_MIN;
volatile uint64_t t59 = 11247888320LLU;
static volatile uint8_t x298 = 95U;
uint16_t x301 = 29406U;
static int8_t x309 = 0;
int16_t x315 = INT16_MIN;
int32_t x316 = -1;
uint8_t x325 = 6U;
uint16_t x328 = UINT16_MAX;
int8_t x330 = INT8_MIN;
volatile int32_t x332 = -39674843;
volatile int8_t x337 = -21;
volatile uint32_t x344 = UINT32_MAX;
static int32_t t74 = -407243282;
uint32_t x352 = 2003744U;
volatile int64_t x355 = -531LL;
static uint16_t x357 = 12U;
static int64_t x358 = 95791071123LL;
volatile int16_t x360 = 6669;
uint8_t x361 = UINT8_MAX;
static int16_t x364 = -1;
int8_t x365 = INT8_MAX;
int32_t x368 = -1;
volatile int16_t x372 = INT16_MIN;
static volatile int64_t x383 = INT64_MIN;
static int16_t x384 = 3;
uint32_t x386 = 194680797U;
int16_t x391 = -2;
uint32_t t84 = 205200982U;
static uint32_t x396 = 12583672U;
volatile int8_t x398 = 20;
uint64_t t86 = 2858789262251480LLU;
int64_t t87 = -1960715285462LL;
int16_t x408 = 0;
static int16_t x410 = -1;
int32_t x413 = -1;
int16_t x415 = INT16_MIN;
volatile uint32_t t90 = 340U;
uint16_t x426 = 3425U;
int64_t x427 = 3705012674703086644LL;
volatile uint16_t x428 = 56U;
int16_t x433 = -746;
uint8_t x434 = UINT8_MAX;
int64_t t96 = 18518551840LL;
int32_t x443 = -1;
uint32_t x452 = 46748U;


void f0(void) {
	int8_t x1 = 0;
	static int64_t x2 = 23436LL;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 134186437927LLU;

	t0 = (x1/((x2^x3)-x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	volatile uint64_t x10 = UINT64_MAX;
	static uint16_t x11 = UINT16_MAX;
	static int16_t x12 = INT16_MAX;
	volatile uint64_t t1 = 6273734417180372412LLU;

	t1 = (x9/((x10^x11)-x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MIN;
	int64_t t2 = -2581219775LL;

	t2 = (x13/((x14^x15)-x16));

	if (t2 != 275958831847972LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int64_t x18 = INT64_MIN;
	static int32_t x19 = INT32_MIN;
	uint64_t x20 = 658893569LLU;
	volatile uint64_t t3 = 6290951453410919LLU;

	t3 = (x17/((x18^x19)-x20));

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MIN;
	volatile int16_t x24 = -1;
	int32_t t4 = -37;

	t4 = (x21/((x22^x23)-x24));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -8;
	volatile uint32_t x27 = 620U;
	uint64_t x28 = UINT64_MAX;
	uint64_t t5 = 6558959LLU;

	t5 = (x25/((x26^x27)-x28));

	if (t5 != 4294967827LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	int32_t x30 = 8;
	static int64_t x32 = -1LL;
	volatile int64_t t6 = 352056314689435LL;

	t6 = (x29/((x30^x31)-x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = 1036386;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 348175U;
	uint32_t t7 = 53397367U;

	t7 = (x33/((x34^x35)-x36));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	volatile uint16_t x38 = 9U;
	volatile int32_t x39 = INT32_MIN;
	int16_t x40 = -81;
	volatile int32_t t8 = 0;

	t8 = (x37/((x38^x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 847U;
	volatile int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	volatile int16_t x44 = 6090;
	volatile int64_t t9 = -534804608LL;

	t9 = (x41/((x42^x43)-x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = 7;
	uint32_t x47 = 3847322U;
	static volatile int64_t t10 = -3662028LL;

	t10 = (x45/((x46^x47)-x48));

	if (t10 != -4383965323655LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1LL;
	volatile int16_t x50 = INT16_MAX;
	static int16_t x51 = -1;
	int64_t x52 = -1LL;
	volatile int64_t t11 = -45406618026025LL;

	t11 = (x49/((x50^x51)-x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	uint32_t x54 = 138587U;
	uint16_t x55 = 342U;
	uint8_t x56 = 15U;
	volatile uint32_t t12 = 113U;

	t12 = (x53/((x54^x55)-x56));

	if (t12 != 31069U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -1;
	int16_t x58 = INT16_MAX;
	static int64_t x59 = INT64_MAX;
	volatile int16_t x60 = -3418;

	t13 = (x57/((x58^x59)-x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = INT16_MIN;
	volatile int32_t x62 = INT32_MIN;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;

	t14 = (x61/((x62^x63)-x64));

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	uint8_t x67 = UINT8_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t15 = 1LLU;

	t15 = (x65/((x66^x67)-x68));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = 8;
	int32_t x70 = INT32_MAX;
	uint32_t x72 = 86U;
	volatile uint32_t t16 = 5U;

	t16 = (x69/((x70^x71)-x72));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	volatile uint16_t x74 = 886U;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 0;

	t17 = (x73/((x74^x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 7U;
	int16_t x91 = -84;
	uint32_t t18 = 212U;

	t18 = (x89/((x90^x91)-x92));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x93 = UINT64_MAX;
	static int8_t x94 = INT8_MAX;
	static int64_t x95 = INT64_MIN;
	uint64_t t19 = 15009515145019190LLU;

	t19 = (x93/((x94^x95)-x96));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = UINT32_MAX;
	int8_t x100 = INT8_MIN;
	uint32_t t20 = 44810U;

	t20 = (x97/((x98^x99)-x100));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x102 = INT16_MAX;
	int64_t t21 = 2LL;

	t21 = (x101/((x102^x103)-x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x105 = 10U;
	volatile uint8_t x106 = 2U;
	static volatile int16_t x107 = INT16_MAX;
	int16_t x108 = -224;
	volatile int32_t t22 = 8136;

	t22 = (x105/((x106^x107)-x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	static uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 151237LLU;
	int32_t x112 = 56896274;
	volatile uint64_t t23 = 1912267LLU;

	t23 = (x109/((x110^x111)-x112));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = UINT16_MAX;
	int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MAX;
	static uint16_t x116 = 1U;
	int32_t t24 = 891923179;

	t24 = (x113/((x114^x115)-x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 3784U;
	static uint16_t x118 = UINT16_MAX;
	uint64_t x120 = 207416404494095LLU;
	volatile uint64_t t25 = 232939380095084330LLU;

	t25 = (x117/((x118^x119)-x120));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = -1;
	int8_t x127 = INT8_MIN;
	volatile uint32_t x128 = 87916892U;
	volatile uint32_t t26 = 3330U;

	t26 = (x125/((x126^x127)-x128));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x130 = -1LL;
	uint32_t x131 = 7197U;
	uint64_t x132 = 67028048LLU;

	t27 = (x129/((x130^x131)-x132));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x134 = 49674U;
	int32_t x135 = -1;
	uint32_t t28 = 109U;

	t28 = (x133/((x134^x135)-x136));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = 12U;
	int8_t x139 = 0;
	static uint8_t x140 = 0U;
	volatile int64_t t29 = 239745LL;

	t29 = (x137/((x138^x139)-x140));

	if (t29 != -768614336404564650LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	int16_t x142 = -359;
	int32_t x144 = INT32_MIN;
	volatile int32_t t30 = 50665;

	t30 = (x141/((x142^x143)-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -99274623;
	int16_t x146 = -9824;
	static int64_t x147 = 1512028693771673500LL;
	volatile int8_t x148 = -44;

	t31 = (x145/((x146^x147)-x148));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 1209U;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = -1;
	uint16_t x152 = 32593U;
	volatile int32_t t32 = 0;

	t32 = (x149/((x150^x151)-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x165 = INT16_MIN;
	uint8_t x166 = 31U;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t33 = -186;

	t33 = (x165/((x166^x167)-x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = -1;
	static int64_t x170 = INT64_MAX;
	volatile int32_t x171 = -95;
	static uint8_t x172 = 0U;
	volatile int64_t t34 = -2736201234272LL;

	t34 = (x169/((x170^x171)-x172));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MIN;
	volatile int32_t x174 = INT32_MIN;
	uint32_t x175 = 580U;
	int8_t x176 = INT8_MIN;
	uint32_t t35 = 44262916U;

	t35 = (x173/((x174^x175)-x176));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MAX;
	volatile int32_t x178 = INT32_MIN;
	int16_t x179 = -904;
	uint64_t x180 = 313604811509117LLU;
	volatile uint64_t t36 = 53604941LLU;

	t36 = (x177/((x178^x179)-x180));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = 1364025063168067155LL;
	static uint16_t x184 = 8U;
	volatile int64_t t37 = 1582LL;

	t37 = (x181/((x182^x183)-x184));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x190 = -1;
	uint64_t x191 = 4917120119664438LLU;
	uint8_t x192 = 7U;
	volatile uint64_t t38 = 6164108937824920LLU;

	t38 = (x189/((x190^x191)-x192));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = -887;
	volatile int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = UINT32_MAX;

	t39 = (x193/((x194^x195)-x196));

	if (t39 != 131107U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	static volatile uint64_t x199 = 425314LLU;
	static int16_t x200 = INT16_MIN;

	t40 = (x197/((x198^x199)-x200));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x205 = UINT16_MAX;
	uint16_t x207 = UINT16_MAX;
	volatile int64_t t41 = 1353539015303396671LL;

	t41 = (x205/((x206^x207)-x208));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 0U;

	t42 = (x209/((x210^x211)-x212));

	if (t42 != 32831) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = 3;
	uint64_t x216 = UINT64_MAX;

	t43 = (x213/((x214^x215)-x216));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x217 = UINT16_MAX;
	int16_t x218 = -1;
	int16_t x220 = INT16_MIN;
	volatile int32_t t44 = 856;

	t44 = (x217/((x218^x219)-x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x222 = -684925083116229052LL;
	uint64_t x224 = 584115983399582429LLU;
	static uint64_t t45 = 221281LLU;

	t45 = (x221/((x222^x223)-x224));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = INT64_MAX;
	uint32_t x226 = 1199U;
	int16_t x228 = -1;
	volatile int64_t t46 = -8427LL;

	t46 = (x225/((x226^x227)-x228));

	if (t46 != 4294964896LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x230 = -1LL;
	int32_t x231 = INT32_MAX;
	volatile uint64_t t47 = 2304876624218711339LLU;

	t47 = (x229/((x230^x231)-x232));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x233 = UINT32_MAX;
	int8_t x234 = -44;
	uint64_t x236 = 16792246869368LLU;
	volatile uint64_t t48 = 242566606937602812LLU;

	t48 = (x233/((x234^x235)-x236));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x238 = -107948569;
	uint16_t x239 = 0U;
	volatile uint8_t x240 = 43U;

	t49 = (x237/((x238^x239)-x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x241 = INT64_MIN;
	int32_t x242 = -1;
	static uint64_t x243 = UINT64_MAX;
	uint64_t x244 = UINT64_MAX;
	uint64_t t50 = 1169193307586LLU;

	t50 = (x241/((x242^x243)-x244));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x250 = -1;
	static int16_t x251 = -1;
	volatile uint32_t t51 = 189751411U;

	t51 = (x249/((x250^x251)-x252));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x253 = 266U;
	int64_t x254 = INT64_MAX;
	volatile int16_t x255 = 0;
	int16_t x256 = 0;
	volatile int64_t t52 = -1518025891483087703LL;

	t52 = (x253/((x254^x255)-x256));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x259 = INT64_MIN;
	int64_t x260 = -1LL;
	int64_t t53 = 1280441944LL;

	t53 = (x257/((x258^x259)-x260));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x262 = 958896LLU;
	int8_t x263 = 7;
	volatile int8_t x264 = -1;
	static uint64_t t54 = 201158457435661704LLU;

	t54 = (x261/((x262^x263)-x264));

	if (t54 != 9618660509138LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x266 = 5U;
	uint8_t x267 = 1U;
	int32_t x268 = INT32_MIN;
	volatile uint32_t t55 = 1143U;

	t55 = (x265/((x266^x267)-x268));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = 7;
	static int8_t x272 = INT8_MAX;
	volatile uint32_t t56 = 31U;

	t56 = (x269/((x270^x271)-x272));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	int32_t x275 = -1;
	volatile uint64_t t57 = 0LLU;

	t57 = (x273/((x274^x275)-x276));

	if (t57 != 941688910802466LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = -28;
	uint16_t x280 = 8728U;
	int64_t t58 = 611581341467294LL;

	t58 = (x277/((x278^x279)-x280));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x281 = INT64_MAX;
	uint64_t x282 = UINT64_MAX;
	static volatile int64_t x284 = -1LL;

	t59 = (x281/((x282^x283)-x284));

	if (t59 != 4294967295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 7U;
	static uint16_t x292 = 595U;
	uint32_t t60 = 9U;

	t60 = (x289/((x290^x291)-x292));

	if (t60 != 66144U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x293 = UINT16_MAX;
	static int16_t x294 = INT16_MAX;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = -22;
	int32_t t61 = -67;

	t61 = (x293/((x294^x295)-x296));

	if (t61 != 3120) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	volatile int8_t x299 = -1;
	uint16_t x300 = 31U;
	int32_t t62 = -48;

	t62 = (x297/((x298^x299)-x300));

	if (t62 != 16909320) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x302 = INT64_MIN;
	volatile uint32_t x303 = 39674U;
	int16_t x304 = INT16_MIN;
	int64_t t63 = -68211930393805LL;

	t63 = (x301/((x302^x303)-x304));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x305 = -1;
	int8_t x306 = 0;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MAX;
	int32_t t64 = -12290727;

	t64 = (x305/((x306^x307)-x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 2357820768LLU;
	uint64_t t65 = 18LLU;

	t65 = (x309/((x310^x311)-x312));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x313 = INT32_MIN;
	volatile int64_t x314 = INT64_MAX;
	static int64_t t66 = -21295126LL;

	t66 = (x313/((x314^x315)-x316));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = -1;
	uint16_t x318 = 4068U;
	volatile int8_t x319 = -31;
	int32_t x320 = INT32_MIN;
	volatile int32_t t67 = 1290231;

	t67 = (x317/((x318^x319)-x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x321 = 6LL;
	static int64_t x322 = INT64_MAX;
	uint8_t x323 = 23U;
	int8_t x324 = 1;
	volatile int64_t t68 = 18374784LL;

	t68 = (x321/((x322^x323)-x324));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x326 = UINT8_MAX;
	static volatile int32_t x327 = -1;
	int32_t t69 = 5916068;

	t69 = (x325/((x326^x327)-x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = INT64_MIN;
	int16_t x331 = -1;
	volatile int64_t t70 = 239500LL;

	t70 = (x329/((x330^x331)-x332));

	if (t70 != -232473321009LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	static int16_t x336 = -1;
	int64_t t71 = -16LL;

	t71 = (x333/((x334^x335)-x336));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x338 = UINT32_MAX;
	static int16_t x339 = INT16_MAX;
	uint8_t x340 = 2U;
	uint32_t t72 = 3632U;

	t72 = (x337/((x338^x339)-x340));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = -1;
	static int32_t x342 = INT32_MIN;
	uint8_t x343 = 2U;
	uint32_t t73 = 2723U;

	t73 = (x341/((x342^x343)-x344));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x346 = UINT8_MAX;
	static int32_t x347 = INT32_MIN;
	static int16_t x348 = -1;

	t74 = (x345/((x346^x347)-x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = UINT16_MAX;
	uint8_t x350 = 11U;
	static uint64_t x351 = 1265423861366613LLU;
	volatile uint64_t t75 = 6LLU;

	t75 = (x349/((x350^x351)-x352));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t76 = 513683911170108645LLU;

	t76 = (x353/((x354^x355)-x356));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x359 = -7896594;
	volatile int64_t t77 = -22871876390945534LL;

	t77 = (x357/((x358^x359)-x360));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x362 = 0U;
	int32_t x363 = -4632681;
	int32_t t78 = -63;

	t78 = (x361/((x362^x363)-x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x366 = 42619442586LL;
	uint16_t x367 = 18U;
	int64_t t79 = -106128LL;

	t79 = (x365/((x366^x367)-x368));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x369 = UINT64_MAX;
	static uint64_t x370 = 3190517LLU;
	static uint16_t x371 = 8038U;
	volatile uint64_t t80 = 28693839761012LLU;

	t80 = (x369/((x370^x371)-x372));

	if (t80 != 5721774675424LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 6636760592399937569LLU;
	uint32_t x374 = UINT32_MAX;
	static int8_t x375 = -2;
	int16_t x376 = INT16_MAX;
	volatile uint64_t t81 = 14106LLU;

	t81 = (x373/((x374^x375)-x376));

	if (t81 != 1545253029LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x381 = 1211207LL;
	int64_t x382 = INT64_MIN;
	int64_t t82 = -12737603591760LL;

	t82 = (x381/((x382^x383)-x384));

	if (t82 != -403735LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = -7;
	int8_t x387 = INT8_MAX;
	static volatile int64_t x388 = -67095317326783660LL;
	int64_t t83 = -12962027200LL;

	t83 = (x385/((x386^x387)-x388));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = INT32_MAX;
	int16_t x390 = -1;
	uint32_t x392 = 3131U;

	t84 = (x389/((x390^x391)-x392));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x393 = 2U;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = -24944;
	volatile uint32_t t85 = 2U;

	t85 = (x393/((x394^x395)-x396));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x397 = INT16_MIN;
	static uint64_t x399 = 7095LLU;
	uint16_t x400 = UINT16_MAX;

	t86 = (x397/((x398^x399)-x400));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = -1;
	int32_t x402 = 1;
	static uint8_t x403 = 1U;
	int64_t x404 = INT64_MAX;

	t87 = (x401/((x402^x403)-x404));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	static volatile int32_t x406 = INT32_MIN;
	static int8_t x407 = INT8_MAX;
	int32_t t88 = 3933546;

	t88 = (x405/((x406^x407)-x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x409 = -714;
	int32_t x411 = -404363;
	int16_t x412 = 11398;
	int32_t t89 = -1393527;

	t89 = (x409/((x410^x411)-x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x414 = 97U;
	uint32_t x416 = 653870U;

	t90 = (x413/((x414^x415)-x416));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x417 = -1;
	int64_t x418 = 6506826965485187LL;
	int32_t x419 = -1;
	static int8_t x420 = INT8_MAX;
	int64_t t91 = -188107584585LL;

	t91 = (x417/((x418^x419)-x420));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = UINT8_MAX;
	int8_t x422 = 2;
	static int32_t x423 = 912;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t92 = 12;

	t92 = (x421/((x422^x423)-x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MAX;
	static volatile int64_t t93 = -7551694384813147LL;

	t93 = (x425/((x426^x427)-x428));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x429 = 7U;
	uint8_t x430 = 15U;
	uint8_t x431 = UINT8_MAX;
	static volatile int8_t x432 = INT8_MIN;
	int32_t t94 = -105563262;

	t94 = (x429/((x430^x431)-x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x435 = INT64_MIN;
	int8_t x436 = -1;
	int64_t t95 = 363765172LL;

	t95 = (x433/((x434^x435)-x436));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MIN;
	static int64_t x440 = -33276142736LL;

	t96 = (x437/((x438^x439)-x440));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x441 = 4U;
	int16_t x442 = -1;
	uint16_t x444 = 3077U;
	volatile uint32_t t97 = 1015380U;

	t97 = (x441/((x442^x443)-x444));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x445 = 16LLU;
	static volatile int16_t x446 = INT16_MIN;
	int8_t x447 = -1;
	int8_t x448 = INT8_MAX;
	uint64_t t98 = 57982601913732299LLU;

	t98 = (x445/((x446^x447)-x448));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x449 = INT32_MIN;
	uint8_t x450 = 10U;
	volatile uint32_t x451 = UINT32_MAX;
	volatile uint32_t t99 = 22812236U;

	t99 = (x449/((x450^x451)-x452));

	if (t99 != 0U) { NG(); } else { ; }
	
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

