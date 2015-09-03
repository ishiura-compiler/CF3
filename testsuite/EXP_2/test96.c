#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 66U;
uint32_t x14 = UINT32_MAX;
uint32_t x18 = UINT32_MAX;
static uint8_t x25 = UINT8_MAX;
int64_t x28 = 1LL;
volatile int32_t t8 = -9227336;
volatile int16_t x38 = INT16_MIN;
int64_t x40 = -1LL;
volatile int64_t t9 = 131857776LL;
int32_t t10 = 3;
int32_t x54 = -1;
int32_t x63 = -72;
uint8_t x64 = UINT8_MAX;
volatile int32_t t13 = -5;
volatile int16_t x72 = -1;
volatile int32_t t15 = -19;
volatile uint8_t x77 = UINT8_MAX;
int32_t x83 = INT32_MIN;
static uint32_t x88 = 200658288U;
uint32_t t18 = 63823581U;
volatile uint32_t x90 = UINT32_MAX;
int32_t x93 = 1;
volatile uint8_t x94 = 6U;
uint16_t x101 = UINT16_MAX;
uint32_t x102 = UINT32_MAX;
static uint8_t x106 = UINT8_MAX;
static int32_t t22 = -37;
int32_t x113 = INT32_MIN;
int64_t x116 = 2305322671063254436LL;
int16_t x118 = INT16_MIN;
static int32_t x124 = -1;
uint64_t x134 = 142243321615517538LLU;
uint64_t x139 = 2314196122LLU;
int8_t x140 = INT8_MIN;
volatile int32_t x141 = INT32_MIN;
static uint64_t x146 = 34429LLU;
uint64_t x150 = 2223483261LLU;
int64_t x151 = -1LL;
uint32_t x161 = 23347098U;
int32_t t33 = 481;
int64_t x167 = 0LL;
int64_t t34 = 170041028478185176LL;
int8_t x171 = -16;
static int8_t x173 = INT8_MAX;
int32_t x175 = INT32_MIN;
int32_t t36 = 1;
int16_t x178 = 0;
uint32_t t38 = 45U;
static int64_t x189 = INT64_MIN;
int64_t x207 = -573224LL;
volatile uint64_t t43 = 281188321035504LLU;
static int16_t x213 = 713;
uint16_t x218 = 1U;
volatile int32_t t48 = 270;
static int8_t x248 = 22;
volatile int16_t x250 = INT16_MIN;
int8_t x251 = INT8_MIN;
static uint16_t x252 = 340U;
int64_t x254 = -1LL;
volatile int64_t t51 = -2956997LL;
int16_t x269 = -13016;
volatile uint16_t x278 = UINT16_MAX;
int64_t x281 = INT64_MIN;
static int32_t x282 = 8035;
uint32_t x287 = UINT32_MAX;
uint64_t t59 = 838LLU;
int32_t t60 = -86;
volatile int32_t x299 = 96486017;
int32_t x306 = INT32_MIN;
int64_t x311 = 310659443450LL;
int16_t x313 = 28;
int64_t x314 = 117LL;
volatile int32_t x317 = INT32_MIN;
static volatile int32_t t65 = 85246185;
int16_t x327 = -497;
int16_t x329 = INT16_MAX;
static int16_t x338 = 0;
uint64_t x344 = UINT64_MAX;
static volatile int64_t x348 = INT64_MAX;
int8_t x349 = INT8_MIN;
int8_t x357 = 0;
uint32_t x365 = UINT32_MAX;
int16_t x371 = INT16_MIN;
uint32_t t77 = 3U;
int32_t x385 = -86;
int16_t x387 = -7339;
int32_t t81 = 108;
int16_t x389 = INT16_MIN;
volatile uint32_t x391 = UINT32_MAX;
int32_t x395 = -20;
int8_t x396 = -1;
int16_t x398 = -1;
int32_t x406 = INT32_MIN;
volatile int64_t x408 = -1LL;
volatile int64_t t86 = -1213LL;
int16_t x412 = -1;
int32_t x419 = INT32_MAX;
uint16_t x424 = 199U;
uint16_t x434 = 11U;
int64_t x440 = -133799242573214LL;
volatile int64_t x442 = 18530578LL;
int32_t t94 = -812;
volatile int32_t x449 = -12284;
static int64_t x452 = -1LL;
uint64_t x456 = UINT64_MAX;
int64_t t98 = 196292061155924LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x2 = 3U;
	static int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 42385;

	t0 = ((x1==(x2+x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int32_t x6 = 1;
	int32_t x7 = 4;
	int16_t x8 = -11;
	volatile int32_t t1 = 892;

	t1 = ((x5==(x6+x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 3583931U;
	volatile uint64_t x11 = UINT64_MAX;
	int32_t x12 = -233179;
	volatile int32_t t2 = 2044201;

	t2 = ((x9==(x10+x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	int16_t x15 = INT16_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 5010593U;

	t3 = ((x13==(x14+x15))%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	int64_t x19 = -47751LL;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 28662709;

	t4 = ((x17==(x18+x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 179U;
	uint8_t x22 = 1U;
	int32_t x23 = -11269;
	int64_t x24 = -1LL;
	static int64_t t5 = -472335199LL;

	t5 = ((x21==(x22+x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 20;
	int32_t x27 = 400631;
	int64_t t6 = 1586760850554LL;

	t6 = ((x25==(x26+x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -24;
	uint64_t x30 = UINT64_MAX;
	static uint64_t x31 = 62122921347312LLU;
	static int32_t x32 = INT32_MAX;
	static int32_t t7 = 862847;

	t7 = ((x29==(x30+x31))%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 25U;
	static int32_t x34 = INT32_MAX;
	static int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MIN;

	t8 = ((x33==(x34+x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static volatile uint32_t x39 = 5968253U;

	t9 = ((x37==(x38+x39))%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int32_t x42 = -1;
	uint32_t x43 = UINT32_MAX;
	volatile int8_t x44 = -1;

	t10 = ((x41==(x42+x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -3795;
	volatile uint64_t x50 = 159181LLU;
	static int16_t x51 = INT16_MIN;
	int64_t x52 = -1LL;
	static volatile int64_t t11 = -167811752875751LL;

	t11 = ((x49==(x50+x51))%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 2U;
	static int8_t x55 = INT8_MIN;
	int16_t x56 = 377;
	int32_t t12 = 1;

	t12 = ((x53==(x54+x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -33;
	volatile uint16_t x62 = UINT16_MAX;

	t13 = ((x61==(x62+x63))%x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = -3;
	static uint64_t x66 = UINT64_MAX;
	uint8_t x67 = 7U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 3;

	t14 = ((x65==(x66+x67))%x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	static int8_t x70 = 47;
	int32_t x71 = -1;

	t15 = ((x69==(x70+x71))%x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x78 = 17U;
	static int64_t x79 = 1140207LL;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t16 = 0;

	t16 = ((x77==(x78+x79))%x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 12651LLU;
	int16_t x84 = -2;
	volatile int32_t t17 = 778;

	t17 = ((x81==(x82+x83))%x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1041345626;
	volatile uint64_t x86 = 6LLU;
	int8_t x87 = -1;

	t18 = ((x85==(x86+x87))%x88);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = -10031;
	int16_t x91 = INT16_MAX;
	uint32_t x92 = 6718584U;
	static volatile uint32_t t19 = 3644U;

	t19 = ((x89==(x90+x91))%x92);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x95 = 1662054737LLU;
	int16_t x96 = INT16_MAX;
	volatile int32_t t20 = -3147;

	t20 = ((x93==(x94+x95))%x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x103 = 12;
	int16_t x104 = INT16_MIN;
	volatile int32_t t21 = 11227;

	t21 = ((x101==(x102+x103))%x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -1;
	static volatile int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;

	t22 = ((x105==(x106+x107))%x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = INT64_MIN;
	int64_t x115 = 0LL;
	static int64_t t23 = 28264LL;

	t23 = ((x113==(x114+x115))%x116);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x117 = INT8_MIN;
	static int8_t x119 = 12;
	int16_t x120 = INT16_MAX;
	volatile int32_t t24 = 29471;

	t24 = ((x117==(x118+x119))%x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = INT32_MAX;
	volatile int16_t x122 = 651;
	int8_t x123 = INT8_MAX;
	volatile int32_t t25 = 1322457;

	t25 = ((x121==(x122+x123))%x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	static int32_t x131 = 8356;
	int8_t x132 = INT8_MIN;
	volatile int32_t t26 = 47099892;

	t26 = ((x129==(x130+x131))%x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x135 = 7U;
	uint16_t x136 = 1U;
	volatile int32_t t27 = 2058;

	t27 = ((x133==(x134+x135))%x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = 27U;
	uint16_t x138 = 4705U;
	volatile int32_t t28 = -5;

	t28 = ((x137==(x138+x139))%x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x142 = 4154U;
	uint32_t x143 = 793242U;
	uint8_t x144 = 16U;
	int32_t t29 = 19477267;

	t29 = ((x141==(x142+x143))%x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x145 = 12;
	volatile uint64_t x147 = 154022957115814LLU;
	static int8_t x148 = 56;
	int32_t t30 = -56;

	t30 = ((x145==(x146+x147))%x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x149 = 3272617265013341438LLU;
	volatile int16_t x152 = INT16_MIN;
	int32_t t31 = -1;

	t31 = ((x149==(x150+x151))%x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 48U;
	int64_t x154 = 106563274451LL;
	volatile int16_t x155 = -132;
	int16_t x156 = 5743;
	static volatile int32_t t32 = -1;

	t32 = ((x153==(x154+x155))%x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = -41;
	int8_t x163 = INT8_MAX;
	uint16_t x164 = UINT16_MAX;

	t33 = ((x161==(x162+x163))%x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x165 = INT32_MAX;
	int32_t x166 = -31;
	int64_t x168 = INT64_MIN;

	t34 = ((x165==(x166+x167))%x168);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -937641514;
	int32_t x170 = -7308;
	static uint64_t x172 = 6881183LLU;
	uint64_t t35 = 7319054811908976LLU;

	t35 = ((x169==(x170+x171))%x172);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x174 = INT8_MAX;
	static int32_t x176 = -1;

	t36 = ((x173==(x174+x175))%x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MIN;
	static int32_t t37 = -475;

	t37 = ((x177==(x178+x179))%x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = UINT16_MAX;
	static int32_t x182 = 85220587;
	volatile int8_t x183 = 3;
	uint32_t x184 = 61554U;

	t38 = ((x181==(x182+x183))%x184);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MAX;
	static int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = 4U;
	volatile uint16_t x188 = UINT16_MAX;
	int32_t t39 = 714;

	t39 = ((x185==(x186+x187))%x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x190 = -1;
	int8_t x191 = 0;
	int8_t x192 = INT8_MIN;
	volatile int32_t t40 = 89650;

	t40 = ((x189==(x190+x191))%x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = UINT8_MAX;
	uint8_t x203 = 18U;
	volatile int8_t x204 = INT8_MAX;
	static int32_t t41 = 237;

	t41 = ((x201==(x202+x203))%x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = 1U;
	volatile int32_t x206 = 1;
	static uint16_t x208 = UINT16_MAX;
	int32_t t42 = -295126;

	t42 = ((x205==(x206+x207))%x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = 47;
	uint16_t x210 = 13408U;
	int8_t x211 = -1;
	uint64_t x212 = UINT64_MAX;

	t43 = ((x209==(x210+x211))%x212);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x214 = INT32_MIN;
	static uint16_t x215 = UINT16_MAX;
	static volatile uint8_t x216 = 1U;
	static int32_t t44 = -205;

	t44 = ((x213==(x214+x215))%x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x217 = -1;
	int16_t x219 = 0;
	uint8_t x220 = 1U;
	int32_t t45 = -5;

	t45 = ((x217==(x218+x219))%x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = UINT8_MAX;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = INT16_MIN;
	volatile int32_t x224 = -1;
	int32_t t46 = 1512380;

	t46 = ((x221==(x222+x223))%x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = -1LL;
	uint8_t x226 = 6U;
	static uint16_t x227 = 4U;
	static volatile int64_t x228 = INT64_MAX;
	volatile int64_t t47 = -71055266101738LL;

	t47 = ((x225==(x226+x227))%x228);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = -1;
	int32_t x243 = -69;
	uint8_t x244 = UINT8_MAX;

	t48 = ((x241==(x242+x243))%x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = -1;
	static int32_t x246 = -256;
	uint8_t x247 = 3U;
	volatile int32_t t49 = 14789;

	t49 = ((x245==(x246+x247))%x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x249 = INT8_MAX;
	int32_t t50 = 10696765;

	t50 = ((x249==(x250+x251))%x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = INT8_MAX;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;

	t51 = ((x253==(x254+x255))%x256);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x257 = 958U;
	static int64_t x258 = INT64_MAX;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MAX;
	int32_t t52 = -14410;

	t52 = ((x257==(x258+x259))%x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = -4;
	uint16_t x268 = UINT16_MAX;
	int32_t t53 = -5137;

	t53 = ((x265==(x266+x267))%x268);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x270 = INT16_MIN;
	static int8_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t54 = 34544;

	t54 = ((x269==(x270+x271))%x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint64_t x274 = 493530LLU;
	uint16_t x275 = 6U;
	volatile uint32_t x276 = 1057900706U;
	uint32_t t55 = 0U;

	t55 = ((x273==(x274+x275))%x276);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x277 = 12769177467214391LLU;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = 23358U;
	static int32_t t56 = -227;

	t56 = ((x277==(x278+x279))%x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x283 = -1LL;
	volatile int32_t x284 = 31;
	volatile int32_t t57 = -1;

	t57 = ((x281==(x282+x283))%x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = -1664;
	int8_t x286 = -1;
	int64_t x288 = INT64_MIN;
	volatile int64_t t58 = -61665415558LL;

	t58 = ((x285==(x286+x287))%x288);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x289 = UINT64_MAX;
	int64_t x290 = -81200LL;
	static int64_t x291 = INT64_MAX;
	static uint64_t x292 = UINT64_MAX;

	t59 = ((x289==(x290+x291))%x292);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x293 = INT32_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1;
	static int32_t x296 = INT32_MIN;

	t60 = ((x293==(x294+x295))%x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x297 = 21U;
	int16_t x298 = 6;
	uint32_t x300 = 200026U;
	volatile uint32_t t61 = 7U;

	t61 = ((x297==(x298+x299))%x300);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x305 = 245U;
	static uint16_t x307 = 3U;
	static uint64_t x308 = UINT64_MAX;
	uint64_t t62 = 42833859282954496LLU;

	t62 = ((x305==(x306+x307))%x308);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = -221188114573365882LL;
	volatile int64_t x312 = INT64_MAX;
	int64_t t63 = 28154202LL;

	t63 = ((x309==(x310+x311))%x312);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x315 = INT64_MIN;
	static uint16_t x316 = UINT16_MAX;
	static volatile int32_t t64 = 1;

	t64 = ((x313==(x314+x315))%x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x318 = -13;
	int16_t x319 = INT16_MAX;
	int32_t x320 = INT32_MAX;

	t65 = ((x317==(x318+x319))%x320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x321 = 119386592LL;
	volatile int32_t x322 = -1;
	volatile uint64_t x323 = 5334698935392225LLU;
	volatile uint32_t x324 = UINT32_MAX;
	volatile uint32_t t66 = 668258U;

	t66 = ((x321==(x322+x323))%x324);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = INT64_MAX;
	static int16_t x326 = -92;
	volatile uint32_t x328 = 2134990877U;
	static uint32_t t67 = 91772600U;

	t67 = ((x325==(x326+x327))%x328);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x330 = 1544205464LLU;
	int32_t x331 = -1;
	int8_t x332 = INT8_MIN;
	int32_t t68 = -891231068;

	t68 = ((x329==(x330+x331))%x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x337 = 38U;
	static volatile int16_t x339 = INT16_MAX;
	volatile uint8_t x340 = UINT8_MAX;
	volatile int32_t t69 = 1045712;

	t69 = ((x337==(x338+x339))%x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x341 = 4U;
	int16_t x342 = -1;
	volatile uint32_t x343 = 3U;
	static volatile uint64_t t70 = 125LLU;

	t70 = ((x341==(x342+x343))%x344);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	int64_t t71 = -131370492736LL;

	t71 = ((x345==(x346+x347))%x348);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = -1;
	uint8_t x352 = 10U;
	int32_t t72 = 1006;

	t72 = ((x349==(x350+x351))%x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	int16_t x355 = 1;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t73 = -10748492;

	t73 = ((x353==(x354+x355))%x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x358 = -9;
	int64_t x359 = 8443308301118LL;
	uint8_t x360 = 8U;
	int32_t t74 = 318411283;

	t74 = ((x357==(x358+x359))%x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = -1;
	static int16_t x362 = -878;
	uint16_t x363 = 15U;
	int32_t x364 = INT32_MAX;
	static int32_t t75 = 51;

	t75 = ((x361==(x362+x363))%x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x366 = INT16_MIN;
	uint16_t x367 = 32356U;
	static volatile int64_t x368 = -48660647743003LL;
	int64_t t76 = 1LL;

	t76 = ((x365==(x366+x367))%x368);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	uint32_t x372 = 52U;

	t77 = ((x369==(x370+x371))%x372);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x373 = 31U;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = 219U;
	static uint8_t x376 = 11U;
	int32_t t78 = -121006105;

	t78 = ((x373==(x374+x375))%x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -6881555;
	uint64_t x378 = 15970439576377LLU;
	int32_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	static uint32_t t79 = 14606U;

	t79 = ((x377==(x378+x379))%x380);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = 139LLU;
	uint16_t x382 = 1U;
	int16_t x383 = 237;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t80 = 4056885U;

	t80 = ((x381==(x382+x383))%x384);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x386 = 5U;
	uint8_t x388 = UINT8_MAX;

	t81 = ((x385==(x386+x387))%x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x390 = INT32_MIN;
	volatile uint32_t x392 = UINT32_MAX;
	volatile uint32_t t82 = 537U;

	t82 = ((x389==(x390+x391))%x392);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x393 = INT16_MIN;
	static volatile int8_t x394 = -1;
	int32_t t83 = 262;

	t83 = ((x393==(x394+x395))%x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x397 = 546341LLU;
	int16_t x399 = INT16_MIN;
	int8_t x400 = 2;
	volatile int32_t t84 = 40334;

	t84 = ((x397==(x398+x399))%x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x401 = UINT32_MAX;
	int32_t x402 = -503460411;
	int16_t x403 = 20;
	int16_t x404 = INT16_MAX;
	volatile int32_t t85 = -4239;

	t85 = ((x401==(x402+x403))%x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = INT16_MAX;
	uint32_t x407 = 191U;

	t86 = ((x405==(x406+x407))%x408);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = 29;
	static volatile int8_t x410 = -12;
	int8_t x411 = INT8_MAX;
	static volatile int32_t t87 = -15664;

	t87 = ((x409==(x410+x411))%x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = -1LL;
	int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 101U;
	int32_t t88 = 2;

	t88 = ((x413==(x414+x415))%x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = -1;
	int8_t x418 = -1;
	int64_t x420 = INT64_MIN;
	static volatile int64_t t89 = 931862LL;

	t89 = ((x417==(x418+x419))%x420);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x421 = INT16_MIN;
	static volatile int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MAX;
	volatile int32_t t90 = 2;

	t90 = ((x421==(x422+x423))%x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MIN;
	volatile uint16_t x426 = 6813U;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = UINT32_MAX;
	static uint32_t t91 = 32317U;

	t91 = ((x425==(x426+x427))%x428);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x433 = -4227LL;
	volatile int32_t x435 = INT32_MIN;
	int16_t x436 = 2;
	volatile int32_t t92 = 299415;

	t92 = ((x433==(x434+x435))%x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = -4782LL;
	int32_t x438 = 0;
	int64_t x439 = INT64_MIN;
	volatile int64_t t93 = -779841LL;

	t93 = ((x437==(x438+x439))%x440);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = -1;
	uint8_t x443 = 14U;
	volatile int32_t x444 = INT32_MIN;

	t94 = ((x441==(x442+x443))%x444);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x445 = UINT8_MAX;
	static int32_t x446 = -1;
	static int16_t x447 = INT16_MIN;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t95 = 27;

	t95 = ((x445==(x446+x447))%x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x450 = 605938345474818LL;
	int16_t x451 = INT16_MAX;
	static volatile int64_t t96 = -507492086321LL;

	t96 = ((x449==(x450+x451))%x452);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x453 = 3749697U;
	int64_t x454 = 32346661303837LL;
	static uint32_t x455 = 110U;
	uint64_t t97 = 1645LLU;

	t97 = ((x453==(x454+x455))%x456);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = -1;
	uint8_t x458 = UINT8_MAX;
	static int8_t x459 = INT8_MIN;
	volatile int64_t x460 = INT64_MAX;

	t98 = ((x457==(x458+x459))%x460);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = -1;
	volatile int8_t x462 = -6;
	int8_t x463 = -1;
	int8_t x464 = INT8_MAX;
	static volatile int32_t t99 = -240240;

	t99 = ((x461==(x462+x463))%x464);

	if (t99 != 0) { NG(); } else { ; }
	
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

