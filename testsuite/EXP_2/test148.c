#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 3U;
uint32_t x3 = 969U;
uint8_t x4 = 78U;
volatile uint16_t x14 = UINT16_MAX;
uint8_t x25 = 61U;
int64_t x26 = INT64_MIN;
int32_t x30 = -92381;
uint64_t t5 = 1115994715026LLU;
uint64_t t6 = 111702749041173336LLU;
int16_t x39 = -3;
int8_t x44 = 17;
static int64_t t8 = -137LL;
int32_t x46 = INT32_MIN;
static int64_t t9 = 752723LL;
volatile uint8_t x51 = 3U;
int8_t x61 = INT8_MIN;
uint16_t x62 = 5U;
int64_t x64 = INT64_MAX;
uint16_t x73 = 14497U;
int8_t x76 = -1;
volatile uint32_t x82 = UINT32_MAX;
int64_t x83 = -1LL;
volatile int64_t x87 = 1014LL;
static uint8_t x92 = UINT8_MAX;
static int64_t t18 = 28LL;
int64_t x103 = -54LL;
uint64_t t23 = 24080LLU;
int64_t x117 = -1LL;
uint16_t x131 = 102U;
static uint64_t x141 = UINT64_MAX;
static int16_t x143 = INT16_MAX;
int16_t x153 = INT16_MAX;
int16_t x155 = INT16_MAX;
int32_t x156 = INT32_MAX;
int8_t x164 = -1;
int8_t x169 = INT8_MIN;
int8_t x175 = 0;
int8_t x178 = 17;
int32_t t36 = 231;
int64_t x185 = INT64_MAX;
int16_t x191 = INT16_MIN;
volatile uint64_t x193 = 61949844845323LLU;
static int16_t x203 = INT16_MAX;
int16_t x224 = INT16_MIN;
uint64_t x236 = 48099248LLU;
volatile uint64_t t47 = 916LLU;
static int16_t x237 = INT16_MIN;
int64_t x238 = INT64_MIN;
volatile int64_t t50 = -2257018224253614016LL;
int16_t x259 = 1;
volatile uint8_t x261 = 100U;
uint8_t x264 = UINT8_MAX;
volatile uint64_t t53 = 1740LLU;
volatile int8_t x276 = -1;
int64_t x281 = -1LL;
static volatile int16_t x283 = INT16_MIN;
static int64_t t56 = -253719336LL;
int32_t x299 = INT32_MIN;
uint32_t x310 = UINT32_MAX;
int8_t x317 = INT8_MAX;
int64_t x318 = -405722LL;
int16_t x319 = INT16_MIN;
volatile uint8_t x320 = 13U;
int8_t x321 = INT8_MAX;
volatile uint64_t x322 = 272888550903052286LLU;
uint64_t x323 = UINT64_MAX;
uint64_t t64 = 29925623LLU;
int32_t x329 = INT32_MAX;
int64_t x331 = INT64_MAX;
int16_t x332 = 2;
uint32_t x334 = 23U;
volatile int8_t x338 = -1;
int64_t t68 = -2328LL;
uint32_t x348 = 1347553421U;
int64_t t69 = 1724105LL;
static int16_t x351 = -1;
static int8_t x354 = INT8_MIN;
volatile int8_t x357 = 0;
int64_t x362 = 27039078261942LL;
volatile int8_t x365 = -1;
uint8_t x367 = 0U;
int8_t x372 = INT8_MAX;
static int64_t x376 = INT64_MIN;
int64_t t76 = -3082401397748484LL;
int64_t x378 = INT64_MIN;
int64_t x381 = INT64_MIN;
volatile int32_t x387 = -284;
int8_t x393 = 1;
uint64_t x394 = 956LLU;
uint64_t x395 = 3003611LLU;
volatile int16_t x399 = -1;
int8_t x400 = INT8_MIN;
uint8_t x402 = UINT8_MAX;
static int16_t x403 = -247;
volatile uint64_t t86 = 114868843380860LLU;
int8_t x427 = -1;
int64_t x434 = 1171042LL;
uint16_t x442 = UINT16_MAX;
volatile int8_t x446 = INT8_MIN;
volatile int64_t t93 = 815LL;
static int32_t x456 = INT32_MAX;
static int64_t x458 = INT64_MAX;
static volatile uint64_t t96 = 136266271311793LLU;
volatile int16_t x469 = INT16_MIN;
uint32_t x471 = 92U;


void f0(void) {
	uint64_t x1 = 3755815124415LLU;
	uint64_t t0 = 173464470590450647LLU;

	t0 = ((x1|(x2+x3))%x4);

	if (t0 != 33LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 1385277814896984292LL;
	volatile int8_t x10 = INT8_MIN;
	int32_t x11 = 229984;
	int64_t x12 = INT64_MIN;
	int64_t t1 = -7337LL;

	t1 = ((x9|(x10+x11))%x12);

	if (t1 != 1385277814897082852LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 24935U;
	int16_t x15 = 52;
	static uint16_t x16 = 30887U;
	volatile uint32_t t2 = 3440U;

	t2 = ((x13|(x14+x15))%x16);

	if (t2 != 28713U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x18 = 0LL;
	uint64_t x19 = 3644312657851LLU;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t3 = 3325924569477881LLU;

	t3 = ((x17|(x18+x19))%x20);

	if (t3 != 2147459006LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x27 = 16281LL;
	uint64_t x28 = 3LLU;
	static volatile uint64_t t4 = 2LLU;

	t4 = ((x25|(x26+x27))%x28);

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MAX;
	uint64_t x31 = 283422505442707980LLU;
	int32_t x32 = -1;

	t5 = ((x29|(x30+x31))%x32);

	if (t5 != 283422505442639871LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x33 = 25LLU;
	uint64_t x34 = 564022123716379301LLU;
	static int64_t x35 = -63LL;
	int32_t x36 = -1;

	t6 = ((x33|(x34+x35))%x36);

	if (t6 != 564022123716379263LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 7184;
	uint32_t x38 = UINT32_MAX;
	volatile int64_t x40 = INT64_MAX;
	int64_t t7 = -2040763367796LL;

	t7 = ((x37|(x38+x39))%x40);

	if (t7 != 4294967292LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	int64_t x43 = INT64_MAX;

	t8 = ((x41|(x42+x43))%x44);

	if (t8 != 8LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	volatile uint32_t x47 = 26971420U;
	int64_t x48 = -1LL;

	t9 = ((x45|(x46+x47))%x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 137361;
	volatile int16_t x50 = -11;
	uint32_t x52 = 53337U;
	uint32_t t10 = 14788335U;

	t10 = ((x49|(x50+x51))%x52);

	if (t10 != 5364U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	static int16_t x59 = -1;
	int16_t x60 = INT16_MAX;
	static volatile int32_t t11 = 131148;

	t11 = ((x57|(x58+x59))%x60);

	if (t11 != -129) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x63 = 3;
	volatile int64_t t12 = -91432433LL;

	t12 = ((x61|(x62+x63))%x64);

	if (t12 != -120LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = -12096869833LL;
	int16_t x70 = INT16_MIN;
	int32_t x71 = 0;
	volatile uint16_t x72 = UINT16_MAX;
	volatile int64_t t13 = -61918LL;

	t13 = ((x69|(x70+x71))%x72);

	if (t13 != -5577LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = 6046814;
	int16_t x75 = -4566;
	static int32_t t14 = -238812388;

	t14 = ((x73|(x74+x75))%x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x81 = -1LL;
	int32_t x84 = -2645370;
	volatile int64_t t15 = 392345972081LL;

	t15 = ((x81|(x82+x83))%x84);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x85 = 13061U;
	int64_t x86 = INT64_MIN;
	uint16_t x88 = 3066U;
	int64_t t16 = -22LL;

	t16 = ((x85|(x86+x87))%x88);

	if (t16 != -2539LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x89 = 1U;
	uint64_t x90 = UINT64_MAX;
	volatile int16_t x91 = INT16_MAX;
	uint64_t t17 = 1002932LLU;

	t17 = ((x89|(x90+x91))%x92);

	if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = INT32_MIN;
	int16_t x94 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	static volatile int64_t x96 = INT64_MIN;

	t18 = ((x93|(x94+x95))%x96);

	if (t18 != -2147450881LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 63198297192LLU;
	int32_t x98 = -1;
	volatile uint8_t x99 = UINT8_MAX;
	int64_t x100 = INT64_MAX;
	uint64_t t19 = 129933460283384LLU;

	t19 = ((x97|(x98+x99))%x100);

	if (t19 != 63198297342LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 53;
	static int8_t x102 = INT8_MIN;
	uint32_t x104 = UINT32_MAX;
	static volatile int64_t t20 = -130808940399LL;

	t20 = ((x101|(x102+x103))%x104);

	if (t20 != -129LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = 791;
	int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MAX;
	static int16_t x108 = -1;
	int32_t t21 = 14;

	t21 = ((x105|(x106+x107))%x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x110 = 36U;
	uint32_t x111 = 1368735208U;
	static uint16_t x112 = 18688U;
	int64_t t22 = -24178463055LL;

	t22 = ((x109|(x110+x111))%x112);

	if (t22 != -11764LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = 2157527676839LLU;
	static int64_t x115 = INT64_MIN;
	int64_t x116 = -1LL;

	t23 = ((x113|(x114+x115))%x116);

	if (t23 != 18446744073016162215LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x118 = 12258U;
	int16_t x119 = -1;
	uint8_t x120 = 76U;
	volatile int64_t t24 = -6LL;

	t24 = ((x117|(x118+x119))%x120);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MAX;
	volatile uint8_t x123 = 6U;
	int64_t x124 = -62013558320LL;
	volatile int64_t t25 = -246LL;

	t25 = ((x121|(x122+x123))%x124);

	if (t25 != 7041363007LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x129 = 156771200LLU;
	volatile int64_t x130 = -1122LL;
	uint16_t x132 = UINT16_MAX;
	uint64_t t26 = 118LLU;

	t26 = ((x129|(x130+x131))%x132);

	if (t26 != 65412LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x137 = UINT64_MAX;
	uint32_t x138 = 28962U;
	static int64_t x139 = 266LL;
	volatile int32_t x140 = 198;
	uint64_t t27 = 1984LLU;

	t27 = ((x137|(x138+x139))%x140);

	if (t27 != 15LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x142 = 2264721181391461695LLU;
	static volatile int16_t x144 = INT16_MIN;
	volatile uint64_t t28 = 9052900LLU;

	t28 = ((x141|(x142+x143))%x144);

	if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MAX;
	int8_t x147 = INT8_MIN;
	int16_t x148 = -364;
	static volatile int64_t t29 = 1417693846084LL;

	t29 = ((x145|(x146+x147))%x148);

	if (t29 != -129LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x154 = 1031488LLU;
	uint64_t t30 = 22304712LLU;

	t30 = ((x153|(x154+x155))%x156);

	if (t30 != 1081343LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MAX;
	int32_t x159 = -29;
	int16_t x160 = INT16_MAX;
	int32_t t31 = -779346;

	t31 = ((x157|(x158+x159))%x160);

	if (t31 != -31) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = -21;
	uint8_t x162 = 3U;
	int64_t x163 = INT64_MIN;
	int64_t t32 = 5039604897315LL;

	t32 = ((x161|(x162+x163))%x164);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x170 = 420U;
	static int64_t x171 = -7542490368077989LL;
	uint32_t x172 = 27253U;
	static volatile int64_t t33 = -6LL;

	t33 = ((x169|(x170+x171))%x172);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -1;
	uint8_t x176 = UINT8_MAX;
	int64_t t34 = -214112LL;

	t34 = ((x173|(x174+x175))%x176);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x177 = -1;
	static uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 62U;
	int32_t t35 = 149;

	t35 = ((x177|(x178+x179))%x180);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = -1;
	int32_t x182 = -1;
	int8_t x183 = 0;
	int8_t x184 = -29;

	t36 = ((x181|(x182+x183))%x184);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x186 = UINT64_MAX;
	static int32_t x187 = -7075;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t37 = 3831820LLU;

	t37 = ((x185|(x186+x187))%x188);

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = INT16_MAX;
	uint8_t x190 = 4U;
	int64_t x192 = INT64_MIN;
	volatile int64_t t38 = -8354657LL;

	t38 = ((x189|(x190+x191))%x192);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MAX;
	int32_t x196 = -1;
	volatile uint64_t t39 = 1937134312677074866LLU;

	t39 = ((x193|(x194+x195))%x196);

	if (t39 != 61949844848639LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 0U;
	volatile int32_t x198 = INT32_MIN;
	volatile uint8_t x199 = 16U;
	volatile uint32_t x200 = 3646644U;
	static volatile uint32_t t40 = 1880U;

	t40 = ((x197|(x198+x199))%x200);

	if (t40 != 3256992U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x201 = 19365U;
	int16_t x202 = 2999;
	uint8_t x204 = UINT8_MAX;
	uint32_t t41 = 1U;

	t41 = ((x201|(x202+x203))%x204);

	if (t41 != 131U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = 28587LLU;
	uint32_t x210 = 168783U;
	int64_t x211 = -145621157LL;
	volatile int64_t x212 = INT64_MIN;
	volatile uint64_t t42 = 15426761LLU;

	t42 = ((x209|(x210+x211))%x212);

	if (t42 != 9223372036709351339LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x213 = UINT16_MAX;
	int8_t x214 = 2;
	int8_t x215 = -1;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t43 = 29747U;

	t43 = ((x213|(x214+x215))%x216);

	if (t43 != 65535U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MIN;
	volatile int8_t x218 = -4;
	int64_t x219 = 859827LL;
	int8_t x220 = INT8_MIN;
	volatile int64_t t44 = 519216595548LL;

	t44 = ((x217|(x218+x219))%x220);

	if (t44 != -81LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x221 = 803517664045512LL;
	volatile int64_t x222 = 5799100LL;
	static uint8_t x223 = UINT8_MAX;
	int64_t t45 = 1020256105LL;

	t45 = ((x221|(x222+x223))%x224);

	if (t45 != 32251LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = 112U;
	static int16_t x227 = INT16_MAX;
	int32_t x228 = -231121506;
	volatile int32_t t46 = -1095522;

	t46 = ((x225|(x226+x227))%x228);

	if (t46 != -32657) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x233 = 3U;
	uint8_t x234 = 115U;
	int8_t x235 = INT8_MIN;

	t47 = ((x233|(x234+x235))%x236);

	if (t47 != 5652499LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x239 = 122112905LL;
	int64_t x240 = INT64_MIN;
	volatile int64_t t48 = 7559819182760LL;

	t48 = ((x237|(x238+x239))%x240);

	if (t48 != -13431LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = INT16_MAX;
	volatile uint32_t x246 = 221867U;
	int8_t x247 = -49;
	int8_t x248 = INT8_MIN;
	uint32_t t49 = 230328509U;

	t49 = ((x245|(x246+x247))%x248);

	if (t49 != 229375U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = 1282746476633311077LL;
	static uint16_t x251 = 505U;
	volatile int64_t x252 = 108053998600LL;

	t50 = ((x249|(x250+x251))%x252);

	if (t50 != -34LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = 244214483726206LLU;
	uint8_t x258 = UINT8_MAX;
	static int64_t x260 = -1LL;
	volatile uint64_t t51 = 1322355803748366595LLU;

	t51 = ((x257|(x258+x259))%x260);

	if (t51 != 244214483726206LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x262 = 0U;
	uint64_t x263 = 41435LLU;
	static volatile uint64_t t52 = 0LLU;

	t52 = ((x261|(x262+x263))%x264);

	if (t52 != 161LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x265 = 0U;
	static int32_t x266 = -1;
	volatile uint64_t x267 = 106685618631LLU;
	int64_t x268 = INT64_MIN;

	t53 = ((x265|(x266+x267))%x268);

	if (t53 != 106685618630LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x273 = INT32_MAX;
	int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	volatile int32_t t54 = -218716;

	t54 = ((x273|(x274+x275))%x276);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MIN;
	static volatile int64_t x279 = 239855947346881LL;
	int32_t x280 = 13;
	int64_t t55 = 5429LL;

	t55 = ((x277|(x278+x279))%x280);

	if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x282 = 106677376;
	static int64_t x284 = INT64_MIN;

	t56 = ((x281|(x282+x283))%x284);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	static int8_t x287 = 29;
	uint8_t x288 = 10U;
	static int32_t t57 = 757741;

	t57 = ((x285|(x286+x287))%x288);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = -1;
	static uint32_t x294 = 127072259U;
	uint16_t x295 = 15650U;
	static int16_t x296 = -1;
	volatile uint32_t t58 = 288358U;

	t58 = ((x293|(x294+x295))%x296);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x297 = 3;
	static uint16_t x298 = UINT16_MAX;
	int16_t x300 = -1;
	int32_t t59 = 194177;

	t59 = ((x297|(x298+x299))%x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	uint32_t x303 = 173929U;
	int32_t x304 = 308515;
	static int64_t t60 = 13870440LL;

	t60 = ((x301|(x302+x303))%x304);

	if (t60 != -61039LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x309 = INT32_MIN;
	int8_t x311 = 27;
	static uint64_t x312 = 221795157LLU;
	uint64_t t61 = 40LLU;

	t61 = ((x309|(x310+x311))%x312);

	if (t61 != 151327261LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t t62 = 100571538487388LL;

	t62 = ((x317|(x318+x319))%x320);

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t63 = 24718767LLU;

	t63 = ((x321|(x322+x323))%x324);

	if (t63 != 272888550903052287LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x325 = 43630LLU;
	volatile uint16_t x326 = 7661U;
	static uint64_t x327 = 1547631941449709LLU;
	volatile int8_t x328 = -1;

	t64 = ((x325|(x326+x327))%x328);

	if (t64 != 1547631941500926LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x330 = -550;
	volatile int64_t t65 = -3415342LL;

	t65 = ((x329|(x330+x331))%x332);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x335 = 53U;
	uint8_t x336 = 2U;
	volatile uint32_t t66 = 637649891U;

	t66 = ((x333|(x334+x335))%x336);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x337 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	static int64_t x340 = INT64_MAX;
	uint64_t t67 = 884131LLU;

	t67 = ((x337|(x338+x339))%x340);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x341 = 0;
	volatile int16_t x342 = 6477;
	int64_t x343 = -4461921585LL;
	uint16_t x344 = UINT16_MAX;

	t68 = ((x341|(x342+x343))%x344);

	if (t68 != -30168LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x345 = INT64_MIN;
	int16_t x346 = -2;
	int64_t x347 = INT64_MAX;

	t69 = ((x345|(x346+x347))%x348);

	if (t69 != -3LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = INT32_MIN;
	uint8_t x350 = 0U;
	int16_t x352 = -16097;
	volatile int32_t t70 = 2;

	t70 = ((x349|(x350+x351))%x352);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x353 = INT64_MIN;
	uint32_t x355 = UINT32_MAX;
	uint8_t x356 = 5U;
	static volatile int64_t t71 = -2534052096334383390LL;

	t71 = ((x353|(x354+x355))%x356);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = 13LL;
	int64_t x360 = -115756694LL;
	int64_t t72 = 10LL;

	t72 = ((x357|(x358+x359))%x360);

	if (t72 != 268LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x361 = -1;
	int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MIN;
	volatile int64_t t73 = -717738LL;

	t73 = ((x361|(x362+x363))%x364);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x366 = 29336U;
	uint16_t x368 = UINT16_MAX;
	volatile uint32_t t74 = 194U;

	t74 = ((x365|(x366+x367))%x368);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x369 = UINT16_MAX;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = -1;
	uint32_t t75 = 1U;

	t75 = ((x369|(x370+x371))%x372);

	if (t75 != 15U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x373 = 11U;
	static int16_t x374 = -3;
	volatile int64_t x375 = -1LL;

	t76 = ((x373|(x374+x375))%x376);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x377 = -1343112LL;
	int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	int64_t t77 = -354LL;

	t77 = ((x377|(x378+x379))%x380);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x382 = INT64_MIN;
	volatile int32_t x383 = INT32_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t78 = 9445LLU;

	t78 = ((x381|(x382+x383))%x384);

	if (t78 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x385 = 15LLU;
	int64_t x386 = -8383479LL;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t79 = 8261934731LLU;

	t79 = ((x385|(x386+x387))%x388);

	if (t79 != 18446744073701167855LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -1;
	uint32_t x390 = 1U;
	uint16_t x391 = 13U;
	volatile uint16_t x392 = 142U;
	volatile uint32_t t80 = 168U;

	t80 = ((x389|(x390+x391))%x392);

	if (t80 != 79U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x396 = UINT8_MAX;
	static volatile uint64_t t81 = 13324686846342995LLU;

	t81 = ((x393|(x394+x395))%x396);

	if (t81 != 157LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MAX;
	int64_t t82 = -1LL;

	t82 = ((x397|(x398+x399))%x400);

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = -7371;
	static int32_t x404 = INT32_MIN;
	static int32_t t83 = 764522406;

	t83 = ((x401|(x402+x403))%x404);

	if (t83 != -7363) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x405 = INT8_MIN;
	static volatile int32_t x406 = INT32_MAX;
	uint32_t x407 = UINT32_MAX;
	static int16_t x408 = -1;
	uint32_t t84 = 544961888U;

	t84 = ((x405|(x406+x407))%x408);

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x409 = INT16_MAX;
	int16_t x410 = -1265;
	uint32_t x411 = 220053523U;
	int32_t x412 = INT32_MAX;
	volatile uint32_t t85 = 3912U;

	t85 = ((x409|(x410+x411))%x412);

	if (t85 != 220069887U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x413 = 1;
	uint32_t x414 = 57U;
	int64_t x415 = -1LL;
	static uint64_t x416 = UINT64_MAX;

	t86 = ((x413|(x414+x415))%x416);

	if (t86 != 57LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x417 = -1;
	uint32_t x418 = 0U;
	uint16_t x419 = 10363U;
	int64_t x420 = INT64_MIN;
	int64_t t87 = 3836469834024LL;

	t87 = ((x417|(x418+x419))%x420);

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = -1;
	static int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	static volatile uint64_t x424 = 16822LLU;
	static volatile uint64_t t88 = 58676120403055LLU;

	t88 = ((x421|(x422+x423))%x424);

	if (t88 != 379LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x425 = UINT64_MAX;
	int16_t x426 = INT16_MIN;
	int8_t x428 = INT8_MAX;
	static volatile uint64_t t89 = 1872459390934LLU;

	t89 = ((x425|(x426+x427))%x428);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x433 = INT32_MIN;
	int8_t x435 = -1;
	static uint64_t x436 = 14566515894162LLU;
	uint64_t t90 = 752245656LLU;

	t90 = ((x433|(x434+x435))%x436);

	if (t90 != 14240030259611LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x437 = -32;
	int32_t x438 = -306805139;
	static uint32_t x439 = 47U;
	volatile int8_t x440 = -1;
	volatile uint32_t t91 = 35502U;

	t91 = ((x437|(x438+x439))%x440);

	if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x441 = INT64_MAX;
	uint64_t x443 = 4950726LLU;
	uint8_t x444 = UINT8_MAX;
	uint64_t t92 = 53000916832LLU;

	t92 = ((x441|(x442+x443))%x444);

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x445 = INT8_MIN;
	volatile int64_t x447 = 4199132527904LL;
	int32_t x448 = INT32_MIN;

	t93 = ((x445|(x446+x447))%x448);

	if (t93 != -96LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = -997158644;
	uint32_t x450 = UINT32_MAX;
	static uint16_t x451 = UINT16_MAX;
	volatile uint8_t x452 = 1U;
	uint32_t t94 = 1175800215U;

	t94 = ((x449|(x450+x451))%x452);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x453 = 105862025100919003LLU;
	int8_t x454 = -1;
	int8_t x455 = 12;
	volatile uint64_t t95 = 5116LLU;

	t95 = ((x453|(x454+x455))%x456);

	if (t95 != 1950888641LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x457 = 3785972LLU;
	static int64_t x459 = INT64_MIN;
	uint64_t x460 = 880295382LLU;

	t96 = ((x457|(x458+x459))%x460);

	if (t96 != 829930173LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x465 = 29LL;
	volatile int8_t x466 = INT8_MAX;
	int16_t x467 = INT16_MIN;
	static int16_t x468 = INT16_MIN;
	int64_t t97 = -225532165276362845LL;

	t97 = ((x465|(x466+x467))%x468);

	if (t97 != -32641LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x470 = 238596;
	uint64_t x472 = 57550511LLU;
	volatile uint64_t t98 = 7576799035630277LLU;

	t98 = ((x469|(x470+x471))%x472);

	if (t98 != 36206026LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x473 = 3620990730LLU;
	int32_t x474 = -1;
	static volatile int32_t x475 = INT32_MAX;
	static int64_t x476 = INT64_MIN;
	volatile uint64_t t99 = 112179LLU;

	t99 = ((x473|(x474+x475))%x476);

	if (t99 != 4294967294LLU) { NG(); } else { ; }
	
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

