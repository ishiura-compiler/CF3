#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MIN;
volatile int32_t x3 = INT32_MIN;
int64_t t1 = 36907LL;
int8_t x12 = -1;
volatile int64_t t2 = -29255472652045608LL;
uint32_t x19 = 731381001U;
volatile uint16_t x22 = UINT16_MAX;
static int16_t x24 = -1;
uint8_t x27 = 4U;
static volatile int64_t x29 = INT64_MAX;
volatile uint32_t x36 = 20U;
int16_t x42 = 581;
volatile int64_t t11 = -43116825LL;
int16_t x50 = -1;
uint64_t x52 = UINT64_MAX;
uint64_t x54 = 82366023367748960LLU;
uint64_t x57 = UINT64_MAX;
int16_t x62 = -146;
int16_t x67 = -1;
uint16_t x69 = 5057U;
volatile uint64_t t17 = 13936532264106LLU;
int32_t x79 = INT32_MIN;
static volatile int32_t t19 = 109620;
volatile int32_t x81 = -30089400;
int64_t x86 = -1LL;
int16_t x87 = INT16_MIN;
uint64_t x88 = 1305884244LLU;
int64_t x89 = INT64_MAX;
static int16_t x90 = INT16_MAX;
int8_t x93 = INT8_MIN;
int64_t x97 = INT64_MIN;
volatile int64_t x104 = INT64_MIN;
int32_t t27 = 5246856;
volatile int32_t x113 = INT32_MIN;
int16_t x114 = INT16_MIN;
uint16_t x117 = 13U;
int32_t x120 = -654;
static int32_t t29 = 25069;
volatile int64_t t31 = -105LL;
static int32_t x129 = INT32_MAX;
int64_t x133 = INT64_MIN;
static volatile int64_t t34 = -12530756179699LL;
int64_t t36 = INT64_MAX;
int32_t x150 = INT32_MIN;
int8_t x151 = -1;
int64_t x153 = -1LL;
static int32_t x158 = -75146;
static volatile uint32_t x159 = 186596911U;
uint32_t x163 = 75163U;
int32_t x165 = -799154;
int32_t x168 = INT32_MIN;
volatile int64_t t43 = 1644LL;
static uint16_t x177 = 1678U;
volatile int32_t x179 = INT32_MIN;
int64_t x182 = INT64_MIN;
static int64_t x184 = -1LL;
volatile int32_t x200 = INT32_MIN;
volatile int8_t x203 = -1;
int32_t t50 = 1;
int16_t x213 = -1;
uint16_t x214 = UINT16_MAX;
uint64_t x215 = 258611353LLU;
int16_t x218 = 4;
uint8_t x223 = UINT8_MAX;
volatile int64_t t56 = 123LL;
uint8_t x241 = UINT8_MAX;
volatile uint16_t x242 = UINT16_MAX;
int32_t x244 = 615550068;
volatile int16_t x247 = INT16_MIN;
int8_t x256 = INT8_MAX;
int64_t x257 = -1LL;
volatile uint32_t x258 = 996958300U;
int32_t x263 = INT32_MIN;
volatile uint8_t x264 = UINT8_MAX;
static int64_t x267 = INT64_MIN;
int64_t x268 = INT64_MIN;
static int64_t x269 = INT64_MIN;
volatile int64_t t67 = -2LL;
volatile uint64_t t70 = 2158168373118284961LLU;
int8_t x291 = -1;
int8_t x296 = INT8_MIN;
volatile int32_t t73 = INT32_MAX;
volatile int32_t t74 = 6977004;
static volatile int32_t x305 = -803;
int8_t x314 = INT8_MIN;
int64_t x319 = INT64_MAX;
volatile int32_t t79 = 37233;
uint32_t x329 = 616U;
static int8_t x336 = INT8_MIN;
uint32_t t86 = 1038238151U;
int16_t x352 = -1;
uint32_t x354 = UINT32_MAX;
volatile uint32_t x355 = 1044U;
int8_t x362 = INT8_MIN;
int32_t t90 = -96677504;
static int8_t x365 = -1;
int8_t x368 = -1;
static uint8_t x374 = 7U;
volatile int64_t t94 = 27353004579033706LL;
uint64_t x384 = 61650LLU;
uint16_t x388 = 11U;
volatile int32_t t96 = 4053;
uint16_t x391 = 93U;
volatile uint16_t x393 = 6585U;
int32_t x397 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	int64_t t0 = -209507973617289172LL;

	t0 = ((x1^x2)^(x3==x4));

	if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	volatile int16_t x6 = INT16_MIN;
	uint8_t x7 = 1U;
	int32_t x8 = INT32_MIN;

	t1 = ((x5^x6)^(x7==x8));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	uint8_t x10 = 68U;
	uint32_t x11 = 214U;

	t2 = ((x9^x10)^(x11==x12));

	if (t2 != -69LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	static int32_t x14 = -33574;
	static uint32_t x15 = 230U;
	int8_t x16 = INT8_MAX;
	static volatile int32_t t3 = 15047;

	t3 = ((x13^x14)^(x15==x16));

	if (t3 != -33573) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 510819592U;
	static volatile int8_t x18 = -1;
	static int16_t x20 = -1;
	volatile uint32_t t4 = 26039U;

	t4 = ((x17^x18)^(x19==x20));

	if (t4 != 3784147703U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int16_t x23 = INT16_MIN;
	int64_t t5 = 7106463213856852LL;

	t5 = ((x21^x22)^(x23==x24));

	if (t5 != -65536LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	volatile uint32_t x26 = 609938612U;
	uint32_t x28 = 1U;
	volatile uint32_t t6 = 0U;

	t6 = ((x25^x26)^(x27==x28));

	if (t6 != 609882955U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint32_t x31 = 22376505U;
	uint32_t x32 = 27U;
	static int64_t t7 = -3891217797LL;

	t7 = ((x29^x30)^(x31==x32));

	if (t7 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = -9810800;
	static volatile int64_t x35 = INT64_MAX;
	volatile uint32_t t8 = 39U;

	t8 = ((x33^x34)^(x35==x36));

	if (t8 != 9810799U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MAX;
	static volatile uint32_t x39 = 3U;
	int64_t x40 = -3600768121LL;
	int32_t t9 = -126;

	t9 = ((x37^x38)^(x39==x40));

	if (t9 != 32512) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	static uint32_t x43 = 108729591U;
	int64_t x44 = -912914792LL;
	volatile int32_t t10 = 24512;

	t10 = ((x41^x42)^(x43==x44));

	if (t10 != 2147483066) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 3;
	static int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MAX;
	static uint64_t x48 = 202842446LLU;

	t11 = ((x45^x46)^(x47==x48));

	if (t11 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	volatile int32_t x51 = INT32_MAX;
	int32_t t12 = -29296929;

	t12 = ((x49^x50)^(x51==x52));

	if (t12 != -256) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = UINT8_MAX;
	static volatile uint64_t t13 = 1006514151391LLU;

	t13 = ((x53^x54)^(x55==x56));

	if (t13 != 9305738060222524769LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = UINT8_MAX;
	static int64_t x59 = 42882936LL;
	int16_t x60 = INT16_MIN;
	static volatile uint64_t t14 = 12542385590LLU;

	t14 = ((x57^x58)^(x59==x60));

	if (t14 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	volatile uint64_t x63 = 85196LLU;
	uint64_t x64 = 659LLU;
	uint64_t t15 = 3261609894822LLU;

	t15 = ((x61^x62)^(x63==x64));

	if (t15 != 145LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 29U;
	static int16_t x66 = -1;
	int16_t x68 = -1807;
	volatile int32_t t16 = 28358;

	t16 = ((x65^x66)^(x67==x68));

	if (t16 != -30) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 23137751454447349LLU;
	uint32_t x71 = UINT32_MAX;
	volatile uint64_t x72 = 66059386511601386LLU;

	t17 = ((x69^x70)^(x71==x72));

	if (t17 != 23137751454442804LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	static int32_t x75 = INT32_MAX;
	volatile int64_t x76 = 1844582425239192LL;
	volatile uint64_t t18 = 1LLU;

	t18 = ((x73^x74)^(x75==x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	volatile int16_t x78 = INT16_MAX;
	static uint32_t x80 = UINT32_MAX;

	t19 = ((x77^x78)^(x79==x80));

	if (t19 != -2147450881) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	int16_t x84 = -1491;
	static int32_t t20 = 152930;

	t20 = ((x81^x82)^(x83==x84));

	if (t20 != 2117394248) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 6LLU;
	volatile uint64_t t21 = 1297690LLU;

	t21 = ((x85^x86)^(x87==x88));

	if (t21 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x91 = UINT32_MAX;
	int16_t x92 = INT16_MIN;
	volatile int64_t t22 = 4170690595768670LL;

	t22 = ((x89^x90)^(x91==x92));

	if (t22 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 6631;
	int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MAX;
	int32_t t23 = 20;

	t23 = ((x93^x94)^(x95==x96));

	if (t23 != -6553) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	static int8_t x99 = INT8_MIN;
	uint8_t x100 = 3U;
	volatile int64_t t24 = INT64_MAX;

	t24 = ((x97^x98)^(x99==x100));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 59U;
	uint8_t x102 = 2U;
	int8_t x103 = INT8_MAX;
	int32_t t25 = -834336;

	t25 = ((x101^x102)^(x103==x104));

	if (t25 != 57) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	static int16_t x106 = -1;
	volatile int32_t x107 = -1;
	volatile int8_t x108 = 35;
	int64_t t26 = INT64_MAX;

	t26 = ((x105^x106)^(x107==x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int8_t x110 = -10;
	uint64_t x111 = 62705107LLU;
	int32_t x112 = 5131;

	t27 = ((x109^x110)^(x111==x112));

	if (t27 != 9) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x115 = 681U;
	int16_t x116 = INT16_MIN;
	int32_t t28 = -100729;

	t28 = ((x113^x114)^(x115==x116));

	if (t28 != 2147450880) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = UINT16_MAX;
	uint32_t x119 = 21641394U;

	t29 = ((x117^x118)^(x119==x120));

	if (t29 != 65522) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 42036604LL;
	uint8_t x122 = 23U;
	volatile int16_t x123 = -1547;
	int32_t x124 = 2;
	static int64_t t30 = 131792953590964LL;

	t30 = ((x121^x122)^(x123==x124));

	if (t30 != 42036587LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 3033963LL;
	static uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = 584227LL;
	int64_t x128 = -5119513772848910LL;

	t31 = ((x125^x126)^(x127==x128));

	if (t31 != 3034004LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MAX;
	static int32_t x131 = 152;
	volatile int16_t x132 = INT16_MIN;
	int32_t t32 = 342164;

	t32 = ((x129^x130)^(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x134 = UINT16_MAX;
	int32_t x135 = -1;
	uint64_t x136 = 21LLU;
	int64_t t33 = 29646LL;

	t33 = ((x133^x134)^(x135==x136));

	if (t33 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int64_t x138 = 545275668094953206LL;
	int64_t x139 = INT64_MAX;
	static volatile int16_t x140 = -1;

	t34 = ((x137^x138)^(x139==x140));

	if (t34 != -545275668094953098LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MAX;
	static int16_t x142 = -1186;
	volatile uint64_t x143 = UINT64_MAX;
	int64_t x144 = -1LL;
	int32_t t35 = -93702609;

	t35 = ((x141^x142)^(x143==x144));

	if (t35 != -2147482464) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = -1;
	static uint16_t x147 = 13100U;
	int16_t x148 = INT16_MIN;

	t36 = ((x145^x146)^(x147==x148));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 660LL;
	uint8_t x152 = 22U;
	volatile int64_t t37 = -789810541837885LL;

	t37 = ((x149^x150)^(x151==x152));

	if (t37 != -2147482988LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = -1;
	int64_t x155 = INT64_MAX;
	int16_t x156 = 12;
	volatile int64_t t38 = -196134LL;

	t38 = ((x153^x154)^(x155==x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 118LL;
	uint8_t x160 = 120U;
	int64_t t39 = -14764057437558417LL;

	t39 = ((x157^x158)^(x159==x160));

	if (t39 != -75264LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	static int16_t x162 = INT16_MAX;
	uint8_t x164 = 4U;
	volatile uint32_t t40 = 6729U;

	t40 = ((x161^x162)^(x163==x164));

	if (t40 != 4294934528U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = -1;
	volatile int16_t x167 = -1;
	static volatile int32_t t41 = 16;

	t41 = ((x165^x166)^(x167==x168));

	if (t41 != 799153) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 111537178U;
	volatile int32_t x170 = INT32_MAX;
	static volatile int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	uint32_t t42 = 15847789U;

	t42 = ((x169^x170)^(x171==x172));

	if (t42 != 2035946469U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -1LL;
	uint8_t x174 = UINT8_MAX;
	uint8_t x175 = 0U;
	volatile int64_t x176 = INT64_MIN;

	t43 = ((x173^x174)^(x175==x176));

	if (t43 != -256LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = 1716U;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = 0;

	t44 = ((x177^x178)^(x179==x180));

	if (t44 != 58) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 121U;
	uint32_t x183 = UINT32_MAX;
	int64_t t45 = -67645641031565777LL;

	t45 = ((x181^x182)^(x183==x184));

	if (t45 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint32_t x186 = 218U;
	static int32_t x187 = INT32_MAX;
	int16_t x188 = 1479;
	volatile uint32_t t46 = 61U;

	t46 = ((x185^x186)^(x187==x188));

	if (t46 != 165U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	int64_t x191 = 43435312LL;
	int16_t x192 = -96;
	volatile int32_t t47 = -72567712;

	t47 = ((x189^x190)^(x191==x192));

	if (t47 != 2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 47850;
	int64_t x194 = INT64_MIN;
	uint32_t x195 = 51304485U;
	volatile int16_t x196 = 2775;
	static int64_t t48 = -960708776829453LL;

	t48 = ((x193^x194)^(x195==x196));

	if (t48 != -9223372036854727958LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 6539924343202678LLU;
	int64_t t49 = -1137LL;

	t49 = ((x197^x198)^(x199==x200));

	if (t49 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = INT16_MIN;
	int32_t x204 = -5067;

	t50 = ((x201^x202)^(x203==x204));

	if (t50 != -32769) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	volatile int64_t x206 = 75023149662LL;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MAX;
	volatile int64_t t51 = -1LL;

	t51 = ((x205^x206)^(x207==x208));

	if (t51 != -9223371961831626146LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = -3690;
	int16_t x211 = -1740;
	uint64_t x212 = 0LLU;
	volatile int32_t t52 = -72;

	t52 = ((x209^x210)^(x211==x212));

	if (t52 != 3606) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x216 = 273687390LLU;
	volatile int32_t t53 = -2095845;

	t53 = ((x213^x214)^(x215==x216));

	if (t53 != -65536) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int8_t x219 = 14;
	int16_t x220 = -1;
	volatile int32_t t54 = 1;

	t54 = ((x217^x218)^(x219==x220));

	if (t54 != 32763) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = INT16_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int64_t t55 = 67841803294LL;

	t55 = ((x221^x222)^(x223==x224));

	if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	volatile int64_t x226 = 2967452LL;
	uint8_t x227 = 2U;
	int8_t x228 = INT8_MAX;

	t56 = ((x225^x226)^(x227==x228));

	if (t56 != 4291999843LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -1;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = -1;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x229^x230)^(x231==x232));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	volatile uint8_t x234 = UINT8_MAX;
	uint16_t x235 = 10U;
	static uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 65219835;

	t58 = ((x233^x234)^(x235==x236));

	if (t58 != -129) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -3;
	int16_t x238 = INT16_MAX;
	uint16_t x239 = UINT16_MAX;
	volatile int64_t x240 = INT64_MIN;
	int32_t t59 = 235245;

	t59 = ((x237^x238)^(x239==x240));

	if (t59 != -32766) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = -1;
	int32_t t60 = 947760;

	t60 = ((x241^x242)^(x243==x244));

	if (t60 != 65280) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	volatile int16_t x246 = INT16_MAX;
	int32_t x248 = 61;
	int32_t t61 = 12935484;

	t61 = ((x245^x246)^(x247==x248));

	if (t61 != 32640) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = UINT8_MAX;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -487491157;
	int64_t x252 = -21731162890529LL;
	static volatile uint32_t t62 = 20U;

	t62 = ((x249^x250)^(x251==x252));

	if (t62 != 4294967040U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	static uint32_t x254 = 378U;
	static int16_t x255 = INT16_MAX;
	volatile uint32_t t63 = 12U;

	t63 = ((x253^x254)^(x255==x256));

	if (t63 != 4294967034U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x259 = UINT64_MAX;
	static volatile uint8_t x260 = 30U;
	static volatile int64_t t64 = 4409663966226922539LL;

	t64 = ((x257^x258)^(x259==x260));

	if (t64 != -996958301LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -228107120246005LL;
	static volatile uint16_t x262 = 107U;
	int64_t t65 = -42628LL;

	t65 = ((x261^x262)^(x263==x264));

	if (t65 != -228107120245920LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = INT16_MAX;
	int32_t t66 = -3;

	t66 = ((x265^x266)^(x267==x268));

	if (t66 != 32513) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -1072;
	uint64_t x271 = 103986LLU;
	int32_t x272 = 375190;

	t67 = ((x269^x270)^(x271==x272));

	if (t67 != 9223372036854774736LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = -568487;
	int64_t x275 = -1399LL;
	static int64_t x276 = -329888202991072LL;
	volatile int32_t t68 = -30;

	t68 = ((x273^x274)^(x275==x276));

	if (t68 != -578394) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 1203U;
	static volatile uint8_t x279 = 0U;
	volatile uint32_t x280 = 113757U;
	static int32_t t69 = -12437361;

	t69 = ((x277^x278)^(x279==x280));

	if (t69 != 1100) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 63707260503957109LLU;
	uint64_t x282 = 104LLU;
	int64_t x283 = INT64_MIN;
	static uint16_t x284 = UINT16_MAX;

	t70 = ((x281^x282)^(x283==x284));

	if (t70 != 63707260503957021LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	uint8_t x286 = 1U;
	int32_t x287 = -1;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 0;

	t71 = ((x285^x286)^(x287==x288));

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static volatile int64_t x290 = -229LL;
	int8_t x292 = 1;
	volatile int64_t t72 = -4930LL;

	t72 = ((x289^x290)^(x291==x292));

	if (t72 != 32539LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = -2;
	int8_t x295 = INT8_MIN;

	t73 = ((x293^x294)^(x295==x296));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int16_t x298 = INT16_MAX;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = 787776147;

	t74 = ((x297^x298)^(x299==x300));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = INT32_MIN;
	static volatile uint32_t x304 = UINT32_MAX;
	uint64_t t75 = 1LLU;

	t75 = ((x301^x302)^(x303==x304));

	if (t75 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x306 = INT16_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	int32_t t76 = -212055;

	t76 = ((x305^x306)^(x307==x308));

	if (t76 != -31966) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	int8_t x310 = 10;
	int64_t x311 = -1LL;
	uint32_t x312 = 15015U;
	int32_t t77 = -1147529;

	t77 = ((x309^x310)^(x311==x312));

	if (t77 != -11) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 343;
	int32_t x315 = INT32_MIN;
	static uint8_t x316 = UINT8_MAX;
	int32_t t78 = -320416;

	t78 = ((x313^x314)^(x315==x316));

	if (t78 != -297) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MAX;
	int32_t x320 = INT32_MAX;

	t79 = ((x317^x318)^(x319==x320));

	if (t79 != 2147483520) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 13U;
	static int64_t x322 = 1LL;
	static int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MAX;
	volatile int64_t t80 = 4275192971956166095LL;

	t80 = ((x321^x322)^(x323==x324));

	if (t80 != 12LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 180071391U;
	static volatile int32_t x326 = -1;
	int64_t x327 = INT64_MIN;
	int32_t x328 = 4;
	uint32_t t81 = 591U;

	t81 = ((x325^x326)^(x327==x328));

	if (t81 != 4114895904U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = -1;
	static int64_t x331 = INT64_MIN;
	int8_t x332 = -39;
	static volatile uint32_t t82 = 5U;

	t82 = ((x329^x330)^(x331==x332));

	if (t82 != 4294966679U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 4U;
	static uint8_t x334 = UINT8_MAX;
	int64_t x335 = -1LL;
	int32_t t83 = 14139;

	t83 = ((x333^x334)^(x335==x336));

	if (t83 != 251) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	uint8_t x339 = 37U;
	int16_t x340 = 3;
	volatile int32_t t84 = INT32_MIN;

	t84 = ((x337^x338)^(x339==x340));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 52;
	uint16_t x342 = 0U;
	volatile int8_t x343 = -4;
	int16_t x344 = INT16_MAX;
	int32_t t85 = -950249;

	t85 = ((x341^x342)^(x343==x344));

	if (t85 != 52) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 2U;
	static int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MAX;
	int32_t x348 = -1;

	t86 = ((x345^x346)^(x347==x348));

	if (t86 != 4294967170U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	uint64_t x350 = 3823LLU;
	static volatile int64_t x351 = 345015834339LL;
	volatile uint64_t t87 = 10075379226580966LLU;

	t87 = ((x349^x350)^(x351==x352));

	if (t87 != 18446744071562071791LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile uint8_t x356 = 5U;
	static uint32_t t88 = 85024290U;

	t88 = ((x353^x354)^(x355==x356));

	if (t88 != 127U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 12U;
	int64_t x360 = INT64_MIN;
	int32_t t89 = 96;

	t89 = ((x357^x358)^(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -1;
	uint16_t x363 = UINT16_MAX;
	int64_t x364 = 27137288023941LL;

	t90 = ((x361^x362)^(x363==x364));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = INT16_MAX;
	volatile int32_t x367 = INT32_MAX;
	int32_t t91 = 0;

	t91 = ((x365^x366)^(x367==x368));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 3046U;
	int32_t x370 = 42;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = 283469;

	t92 = ((x369^x370)^(x371==x372));

	if (t92 != 3020) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x373 = 15U;
	uint32_t x375 = UINT32_MAX;
	static volatile int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 206583143;

	t93 = ((x373^x374)^(x375==x376));

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = 62798571U;

	t94 = ((x377^x378)^(x379==x380));

	if (t94 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 3U;
	static volatile int64_t x382 = -1LL;
	static volatile int16_t x383 = INT16_MIN;
	static volatile int64_t t95 = -66249861467LL;

	t95 = ((x381^x382)^(x383==x384));

	if (t95 != -4LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	int8_t x386 = 0;
	volatile uint16_t x387 = 3U;

	t96 = ((x385^x386)^(x387==x388));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint16_t x390 = UINT16_MAX;
	int32_t x392 = -1;
	static int32_t t97 = 159907768;

	t97 = ((x389^x390)^(x391==x392));

	if (t97 != -65409) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MAX;
	static int8_t x395 = INT8_MAX;
	uint64_t x396 = UINT64_MAX;
	int64_t t98 = -427LL;

	t98 = ((x393^x394)^(x395==x396));

	if (t98 != 9223372036854769222LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -1;
	volatile int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int32_t t99 = INT32_MAX;

	t99 = ((x397^x398)^(x399==x400));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

