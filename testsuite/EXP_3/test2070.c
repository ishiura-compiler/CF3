#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MIN;
int16_t x5 = INT16_MIN;
int16_t x8 = INT16_MIN;
int32_t x11 = INT32_MIN;
int64_t x12 = 17923710643LL;
static int32_t x16 = 436046111;
static volatile uint64_t x17 = UINT64_MAX;
static volatile uint8_t x18 = UINT8_MAX;
volatile uint64_t x19 = UINT64_MAX;
int32_t x22 = INT32_MIN;
int16_t x27 = INT16_MIN;
uint64_t x29 = UINT64_MAX;
int16_t x32 = -1;
uint64_t x36 = UINT64_MAX;
uint32_t x46 = 111U;
static uint64_t t10 = 0LLU;
static int8_t x56 = -1;
volatile uint32_t t13 = 149190U;
uint8_t x63 = 6U;
int16_t x65 = -1;
volatile int64_t x68 = INT64_MAX;
volatile uint32_t t19 = 122U;
volatile int32_t x92 = INT32_MAX;
volatile int64_t x106 = INT64_MIN;
static int64_t t24 = -1161880385547LL;
uint32_t t25 = 647948U;
uint16_t x117 = UINT16_MAX;
uint16_t x122 = 5U;
static volatile uint32_t x123 = 1875U;
volatile int32_t x126 = -1;
int32_t x127 = INT32_MAX;
int8_t x128 = INT8_MIN;
static uint32_t t28 = 142614U;
static int8_t x129 = INT8_MAX;
int32_t x130 = INT32_MAX;
volatile uint32_t t29 = 20641U;
uint8_t x136 = 1U;
volatile int16_t x139 = -37;
uint8_t x140 = 11U;
static int64_t x148 = 670015LL;
uint16_t x149 = 3U;
static int64_t x153 = -1LL;
uint64_t x158 = 65007061762LLU;
int16_t x164 = -1;
volatile int32_t t37 = -18055;
static volatile int64_t x177 = INT64_MIN;
int8_t x178 = INT8_MIN;
uint64_t x185 = UINT64_MAX;
uint32_t x200 = UINT32_MAX;
volatile int8_t x210 = 8;
static int64_t x212 = 367339254807850712LL;
int16_t x214 = INT16_MIN;
int8_t x219 = 1;
static uint8_t x220 = UINT8_MAX;
int64_t x221 = INT64_MIN;
int32_t x235 = INT32_MAX;
int64_t x245 = -1LL;
int64_t t54 = -1679129LL;
volatile uint32_t x250 = 30603U;
volatile int32_t t57 = 3;
uint16_t x285 = UINT16_MAX;
volatile uint32_t t63 = 30U;
volatile int8_t x292 = INT8_MIN;
uint64_t t64 = 644062683LLU;
uint32_t x294 = 45693919U;
volatile int16_t x295 = INT16_MIN;
uint32_t t66 = 16U;
static int32_t x302 = INT32_MIN;
int16_t x308 = -1;
int16_t x310 = 16;
int16_t x313 = INT16_MIN;
int16_t x320 = INT16_MIN;
int8_t x329 = INT8_MIN;
uint32_t x330 = 179778688U;
static int8_t x331 = -1;
uint32_t t74 = 4818367U;
int64_t x333 = INT64_MAX;
int8_t x338 = -1;
int16_t x340 = INT16_MAX;
int32_t x342 = INT32_MIN;
volatile int64_t t77 = 1484155282553913483LL;
int8_t x346 = -2;
static volatile uint64_t t78 = 8234139494LLU;
uint64_t x379 = 771308283925LLU;
int8_t x380 = -7;
static uint64_t t86 = 0LLU;
int8_t x386 = 14;
volatile int64_t t88 = 1866311499LL;
uint8_t x393 = UINT8_MAX;
int64_t x401 = 38302349LL;
volatile int64_t x406 = -286716881LL;
uint16_t x412 = 855U;
static uint64_t x413 = 27106841016LLU;
int64_t x428 = INT64_MAX;
int8_t x429 = INT8_MIN;
volatile uint8_t x431 = UINT8_MAX;
static int64_t x432 = 85479671LL;
volatile int64_t t98 = 332540214LL;
int64_t x433 = 13806066LL;
volatile int64_t x435 = INT64_MAX;


void f0(void) {
	int16_t x1 = -1;
	volatile int8_t x2 = 12;
	int16_t x3 = INT16_MIN;
	static volatile int32_t t0 = 493635;

	t0 = ((x1/x2)*(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -7;
	static uint16_t x7 = UINT16_MAX;
	static int32_t t1 = -167;

	t1 = ((x5/x6)*(x7^x8));

	if (t1 != -153391689) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x10 = INT64_MIN;
	volatile int64_t t2 = -44605523584310LL;

	t2 = ((x9/x10)*(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	int8_t x14 = 63;
	int32_t x15 = INT32_MIN;
	int64_t t3 = 21089534573LL;

	t3 = ((x13/x14)*(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x20 = 1U;
	volatile uint64_t t4 = 7217LLU;

	t4 = ((x17/x18)*(x19^x20));

	if (t4 != 18302063728033398270LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 251LL;
	uint16_t x23 = 26U;
	static int32_t x24 = INT32_MIN;
	int64_t t5 = 8441722197723LL;

	t5 = ((x21/x22)*(x23^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int64_t x26 = -27876417896LL;
	uint16_t x28 = 1U;
	volatile uint64_t t6 = 5483943305664348LLU;

	t6 = ((x25/x26)*(x27^x28));

	if (t6 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = 5377;
	int64_t x31 = INT64_MIN;
	volatile uint64_t t7 = 2LLU;

	t7 = ((x29/x30)*(x31^x32));

	if (t7 != 9219941360999520173LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	int64_t x34 = -1LL;
	static int32_t x35 = INT32_MIN;
	uint64_t t8 = 32931317LLU;

	t8 = ((x33/x34)*(x35^x36));

	if (t8 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	uint32_t x43 = 15U;
	static volatile uint16_t x44 = UINT16_MAX;
	volatile uint32_t t9 = 9738946U;

	t9 = ((x41/x42)*(x43^x44));

	if (t9 != 65520U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = 90422876978058733LLU;

	t10 = ((x45/x46)*(x47^x48));

	if (t10 != 16267448512960134046LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = -1LL;
	volatile uint32_t x50 = 1013316U;
	int16_t x51 = INT16_MIN;
	int16_t x52 = 3;
	volatile int64_t t11 = -3759095280062346LL;

	t11 = ((x49/x50)*(x51^x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 23;
	int32_t x54 = INT32_MIN;
	int8_t x55 = -5;
	int32_t t12 = 7;

	t12 = ((x53/x54)*(x55^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	uint32_t x58 = 44849U;
	static uint16_t x59 = 1976U;
	uint16_t x60 = UINT16_MAX;

	t13 = ((x57/x58)*(x59^x60));

	if (t13 != 1791696780U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = UINT64_MAX;
	static uint64_t x62 = UINT64_MAX;
	int16_t x64 = 687;
	static uint64_t t14 = 250158LLU;

	t14 = ((x61/x62)*(x63^x64));

	if (t14 != 681LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = -1080;
	uint16_t x67 = 1002U;
	volatile int64_t t15 = 2136998298324LL;

	t15 = ((x65/x66)*(x67^x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 197313607191414699LLU;
	int16_t x70 = -1;
	int32_t x71 = 826387006;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t16 = 2215823LLU;

	t16 = ((x69/x70)*(x71^x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MAX;
	uint64_t x76 = 641388572403415316LLU;
	static uint64_t t17 = 913084114209LLU;

	t17 = ((x73/x74)*(x75^x76));

	if (t17 != 641388572403418859LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	volatile int16_t x82 = INT16_MIN;
	uint8_t x83 = 45U;
	int16_t x84 = -12;
	int32_t t18 = 84064272;

	t18 = ((x81/x82)*(x83^x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = -1;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = 0;
	volatile uint32_t x88 = 15747933U;

	t19 = ((x85/x86)*(x87^x88));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = -27;
	static int32_t x90 = INT32_MIN;
	int32_t x91 = -1;
	int32_t t20 = -18062;

	t20 = ((x89/x90)*(x91^x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x94 = 298109607991120592LL;
	int32_t x95 = -1;
	uint32_t x96 = 147U;
	int64_t t21 = 43118025504184463LL;

	t21 = ((x93/x94)*(x95^x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1;
	uint8_t x98 = 14U;
	uint64_t x99 = 235595LLU;
	int8_t x100 = -1;
	volatile uint64_t t22 = 30160503057475974LLU;

	t22 = ((x97/x98)*(x99^x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 56611U;
	int8_t x102 = -1;
	static volatile int64_t x103 = -1353LL;
	int16_t x104 = 6;
	volatile int64_t t23 = 1035717374355LL;

	t23 = ((x101/x102)*(x103^x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	int32_t x108 = -1;

	t24 = ((x105/x106)*(x107^x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -1;
	uint32_t x116 = 1509945U;

	t25 = ((x113/x114)*(x115^x116));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x118 = 5U;
	int64_t x119 = 1001664LL;
	static volatile int16_t x120 = 2;
	volatile int64_t t26 = 6LL;

	t26 = ((x117/x118)*(x119^x120));

	if (t26 != 13128836262LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x124 = -1;
	volatile uint32_t t27 = 388376104U;

	t27 = ((x121/x122)*(x123^x124));

	if (t27 != 4270378564U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;

	t28 = ((x125/x126)*(x127^x128));

	if (t28 != 2147483775U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 74651289U;

	t29 = ((x129/x130)*(x131^x132));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 13U;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 7371U;
	volatile uint32_t t30 = 15120U;

	t30 = ((x133/x134)*(x135^x136));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -6;
	static int64_t x138 = INT64_MAX;
	volatile int64_t t31 = 1394474589732502LL;

	t31 = ((x137/x138)*(x139^x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -28;
	int16_t x146 = -6;
	static int32_t x147 = INT32_MIN;
	int64_t t32 = 29894621162799LL;

	t32 = ((x145/x146)*(x147^x148));

	if (t32 != -8587254532LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x150 = UINT8_MAX;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = 0U;
	static int32_t t33 = -772174809;

	t33 = ((x149/x150)*(x151^x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MAX;
	int16_t x156 = 0;
	volatile uint64_t t34 = 5893287961LLU;

	t34 = ((x153/x154)*(x155^x156));

	if (t34 != 2147483647LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = -31034LL;
	int64_t x159 = 483LL;
	int8_t x160 = -52;
	volatile uint64_t t35 = 3643882LLU;

	t35 = ((x157/x158)*(x159^x160));

	if (t35 != 18446743941758718271LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = UINT16_MAX;
	uint8_t x163 = 117U;
	int32_t t36 = -588;

	t36 = ((x161/x162)*(x163^x164));

	if (t36 != -118) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = -1;
	int32_t x166 = INT32_MIN;
	static int32_t x167 = INT32_MAX;
	volatile int8_t x168 = INT8_MIN;

	t37 = ((x165/x166)*(x167^x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = UINT8_MAX;
	int16_t x174 = -1;
	volatile int16_t x175 = 40;
	int8_t x176 = -27;
	int32_t t38 = 18;

	t38 = ((x173/x174)*(x175^x176));

	if (t38 != 13005) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x179 = INT16_MIN;
	uint64_t x180 = 30440003246LLU;
	uint64_t t39 = 8284693059LLU;

	t39 = ((x177/x178)*(x179^x180));

	if (t39 != 12538021362599460864LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int32_t x182 = INT32_MAX;
	int16_t x183 = -1;
	volatile uint8_t x184 = 98U;
	static uint64_t t40 = 71182752044287385LLU;

	t40 = ((x181/x182)*(x183^x184));

	if (t40 != 18446743223306026612LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x186 = INT64_MAX;
	uint32_t x187 = 853068U;
	volatile int32_t x188 = -1;
	volatile uint64_t t41 = 474099082402226923LLU;

	t41 = ((x185/x186)*(x187^x188));

	if (t41 != 8588228454LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	uint16_t x190 = 2522U;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = 15;
	volatile int64_t t42 = -172LL;

	t42 = ((x189/x190)*(x191^x192));

	if (t42 != -413259730437981516LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = INT8_MIN;
	static volatile int32_t x194 = INT32_MIN;
	volatile int64_t x195 = INT64_MIN;
	int16_t x196 = -152;
	int64_t t43 = -395766467LL;

	t43 = ((x193/x194)*(x195^x196));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 4670978979839630LL;
	static volatile int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MIN;
	volatile int64_t t44 = -1692LL;

	t44 = ((x197/x198)*(x199^x200));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = 1;
	int32_t x206 = INT32_MIN;
	volatile int8_t x207 = 26;
	int32_t x208 = -1;
	int32_t t45 = 3603810;

	t45 = ((x205/x206)*(x207^x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x209 = -13;
	int64_t x211 = INT64_MIN;
	volatile int64_t t46 = 1040051087338LL;

	t46 = ((x209/x210)*(x211^x212));

	if (t46 != 8856032782046925096LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = UINT8_MAX;
	static int64_t x215 = INT64_MAX;
	static uint32_t x216 = 31421U;
	volatile int64_t t47 = -930LL;

	t47 = ((x213/x214)*(x215^x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x217 = INT8_MIN;
	static uint16_t x218 = UINT16_MAX;
	volatile int32_t t48 = -463420;

	t48 = ((x217/x218)*(x219^x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x222 = 119;
	int64_t x223 = -1LL;
	static int32_t x224 = -1;
	volatile int64_t t49 = -1362221387979LL;

	t49 = ((x221/x222)*(x223^x224));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	int32_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t50 = 40U;

	t50 = ((x225/x226)*(x227^x228));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x233 = UINT64_MAX;
	static volatile uint64_t x234 = 817846047LLU;
	int16_t x236 = 12416;
	volatile uint64_t t51 = 241432191LLU;

	t51 = ((x233/x234)*(x235^x236));

	if (t51 != 11543320158404012674LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -3;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = -4;
	int32_t x240 = -771307;
	uint64_t t52 = 76LLU;

	t52 = ((x237/x238)*(x239^x240));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x241 = 37;
	int16_t x242 = INT16_MIN;
	volatile int8_t x243 = 0;
	int8_t x244 = 54;
	volatile int32_t t53 = 0;

	t53 = ((x241/x242)*(x243^x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	int64_t x248 = INT64_MIN;

	t54 = ((x245/x246)*(x247^x248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = -69071;
	volatile int16_t x251 = -1;
	int32_t x252 = -3181672;
	static volatile uint32_t t55 = 1584728U;

	t55 = ((x249/x250)*(x251^x252));

	if (t55 != 4140439994U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x253 = 19LLU;
	volatile int64_t x254 = 5527089011568LL;
	int32_t x255 = 77283886;
	int8_t x256 = 20;
	uint64_t t56 = 2601928LLU;

	t56 = ((x253/x254)*(x255^x256));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;

	t57 = ((x257/x258)*(x259^x260));

	if (t57 != -32640) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t58 = -533838LL;

	t58 = ((x261/x262)*(x263^x264));

	if (t58 != -139642271694848LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = -2;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MAX;
	uint64_t x268 = 897816953807518LLU;
	static volatile uint64_t t59 = 3014368117482242911LLU;

	t59 = ((x265/x266)*(x267^x268));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 135070543505157LLU;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	static int64_t x272 = INT64_MAX;
	static volatile uint64_t t60 = 340433LLU;

	t60 = ((x269/x270)*(x271^x272));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = -1LL;
	static volatile int16_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	uint64_t t61 = 7455LLU;

	t61 = ((x277/x278)*(x279^x280));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -969866LL;
	volatile int8_t x282 = INT8_MIN;
	static uint8_t x283 = 3U;
	uint8_t x284 = 0U;
	int64_t t62 = 38500826LL;

	t62 = ((x281/x282)*(x283^x284));

	if (t62 != 22731LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -1;

	t63 = ((x285/x286)*(x287^x288));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = UINT64_MAX;

	t64 = ((x289/x290)*(x291^x292));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = 85;
	uint8_t x296 = UINT8_MAX;
	uint32_t t65 = 6U;

	t65 = ((x293/x294)*(x295^x296));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x297 = 5849571U;
	int32_t x298 = INT32_MAX;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;

	t66 = ((x297/x298)*(x299^x300));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x301 = 245809355070213LLU;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = -1;
	static volatile uint64_t t67 = 96571140827816425LLU;

	t67 = ((x301/x302)*(x303^x304));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	static int64_t x307 = INT64_MAX;
	int64_t t68 = -1954642903567LL;

	t68 = ((x305/x306)*(x307^x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = -1LL;
	uint16_t x311 = 450U;
	int64_t x312 = INT64_MIN;
	volatile int64_t t69 = -8097933263300578LL;

	t69 = ((x309/x310)*(x311^x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MAX;
	volatile int64_t x316 = -1LL;
	int64_t t70 = 20358LL;

	t70 = ((x313/x314)*(x315^x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	static int8_t x319 = INT8_MIN;
	static uint32_t t71 = 0U;

	t71 = ((x317/x318)*(x319^x320));

	if (t71 != 32640U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x321 = 120958767056LLU;
	int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	int16_t x324 = -1;
	volatile uint64_t t72 = 6180925992LLU;

	t72 = ((x321/x322)*(x323^x324));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = -5999449461310LL;
	int16_t x326 = INT16_MAX;
	static volatile int32_t x327 = INT32_MIN;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t73 = 9040443LLU;

	t73 = ((x325/x326)*(x327^x328));

	if (t73 != 18053552155237403631LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x332 = INT16_MAX;

	t74 = ((x329/x330)*(x331^x332));

	if (t74 != 4294213632U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x334 = INT64_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	static int32_t x336 = INT32_MAX;
	volatile uint64_t t75 = 409LLU;

	t75 = ((x333/x334)*(x335^x336));

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x337 = -1;
	static volatile int8_t x339 = INT8_MIN;
	int32_t t76 = -51;

	t76 = ((x337/x338)*(x339^x340));

	if (t76 != -32641) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x341 = -1;
	static int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MAX;

	t77 = ((x341/x342)*(x343^x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = 277LLU;
	uint8_t x347 = 0U;
	static int32_t x348 = INT32_MIN;

	t78 = ((x345/x346)*(x347^x348));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = UINT8_MAX;
	int64_t x350 = 8079652826881036LL;
	uint16_t x351 = 8078U;
	static int8_t x352 = 7;
	int64_t t79 = 3072102LL;

	t79 = ((x349/x350)*(x351^x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x353 = 9U;
	static int16_t x354 = -4228;
	int64_t x355 = INT64_MIN;
	int16_t x356 = -1;
	int64_t t80 = 1691175923503053LL;

	t80 = ((x353/x354)*(x355^x356));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = 126650952775LLU;
	uint32_t x358 = 145646885U;
	uint16_t x359 = UINT16_MAX;
	static int16_t x360 = INT16_MAX;
	static uint64_t t81 = 24888014069519602LLU;

	t81 = ((x357/x358)*(x359^x360));

	if (t81 != 28475392LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x361 = 238U;
	uint64_t x362 = 119239119LLU;
	volatile uint16_t x363 = 1043U;
	int32_t x364 = INT32_MAX;
	static uint64_t t82 = 83999927324339LLU;

	t82 = ((x361/x362)*(x363^x364));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = -1LL;
	int32_t x366 = 145077143;
	int32_t x367 = -1;
	int32_t x368 = 46;
	static volatile int64_t t83 = -10LL;

	t83 = ((x365/x366)*(x367^x368));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -11;
	volatile uint64_t x372 = 144135743154LLU;
	volatile uint64_t t84 = 35606486027287LLU;

	t84 = ((x369/x370)*(x371^x372));

	if (t84 != 18446743929573808455LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = -1;
	uint8_t x375 = 0U;
	uint8_t x376 = 9U;
	int32_t t85 = 765;

	t85 = ((x373/x374)*(x375^x376));

	if (t85 != 1152) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x377 = 11392U;
	int8_t x378 = INT8_MIN;

	t86 = ((x377/x378)*(x379^x380));

	if (t86 != 68646437269236LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x381 = 0U;
	uint8_t x382 = UINT8_MAX;
	static volatile uint32_t x383 = 959515993U;
	int16_t x384 = 1;
	static uint32_t t87 = 10U;

	t87 = ((x381/x382)*(x383^x384));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = -7;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;

	t88 = ((x385/x386)*(x387^x388));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = 1765U;
	int8_t x390 = INT8_MIN;
	int8_t x391 = 2;
	int64_t x392 = INT64_MIN;
	volatile int64_t t89 = 14732218LL;

	t89 = ((x389/x390)*(x391^x392));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x394 = INT16_MAX;
	static int16_t x395 = INT16_MIN;
	uint16_t x396 = 19444U;
	volatile int32_t t90 = -1;

	t90 = ((x393/x394)*(x395^x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = -55;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t91 = -85LL;

	t91 = ((x397/x398)*(x399^x400));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x402 = -1;
	static volatile uint64_t x403 = UINT64_MAX;
	volatile int16_t x404 = -23;
	uint64_t t92 = 24822LLU;

	t92 = ((x401/x402)*(x403^x404));

	if (t92 != 18446744072866899938LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = INT32_MIN;
	uint16_t x407 = 19U;
	int32_t x408 = INT32_MAX;
	volatile int64_t t93 = 242503807884808LL;

	t93 = ((x405/x406)*(x407^x408));

	if (t93 != 15032385396LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = -156365;
	uint64_t x410 = 191LLU;
	int64_t x411 = -13400LL;
	static volatile uint64_t t94 = 104841689LLU;

	t94 = ((x409/x410)*(x411^x412));

	if (t94 != 5118730030936174233LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x414 = 3209667;
	uint32_t x415 = 1442160104U;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t95 = 1426626926LLU;

	t95 = ((x413/x414)*(x415^x416));

	if (t95 != 5956457320635LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = INT64_MIN;
	volatile int8_t x422 = 6;
	uint64_t x423 = 111708327075742LLU;
	int64_t x424 = -1LL;
	static volatile uint64_t t96 = 472790713677131LLU;

	t96 = ((x421/x422)*(x423^x424));

	if (t96 != 16909478164791397067LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x425 = -1;
	int8_t x426 = -22;
	volatile int32_t x427 = INT32_MAX;
	static volatile int64_t t97 = 7230740582LL;

	t97 = ((x425/x426)*(x427^x428));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x430 = -1;

	t98 = ((x429/x430)*(x431^x432));

	if (t98 != 10941367296LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x434 = 7052U;
	static int64_t x436 = INT64_MIN;
	volatile int64_t t99 = -9738797946441LL;

	t99 = ((x433/x434)*(x435^x436));

	if (t99 != -1957LL) { NG(); } else { ; }
	
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

