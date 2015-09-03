#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -6763484850LL;
static int32_t x6 = INT32_MIN;
int8_t x7 = -1;
volatile uint64_t x11 = UINT64_MAX;
uint64_t t2 = 946LLU;
int8_t x13 = INT8_MAX;
static uint32_t x17 = UINT32_MAX;
int16_t x24 = -1;
volatile int64_t x41 = -1LL;
static uint16_t x44 = 2163U;
uint32_t x51 = UINT32_MAX;
int32_t x53 = -258299809;
volatile int16_t x55 = INT16_MIN;
volatile int32_t t10 = -395125965;
uint64_t t11 = 460LLU;
int16_t x63 = 1;
volatile int64_t t12 = 3474503496324384LL;
int32_t x69 = INT32_MAX;
int64_t x73 = -126710104013LL;
uint32_t x75 = UINT32_MAX;
int8_t x81 = INT8_MIN;
int32_t x85 = 6;
uint64_t x89 = 16LLU;
int32_t x93 = INT32_MAX;
int64_t x96 = INT64_MIN;
static volatile int32_t x100 = INT32_MAX;
int64_t t22 = -2003170796LL;
int32_t x119 = -1;
int64_t x120 = INT64_MIN;
volatile uint64_t t25 = 0LLU;
volatile int64_t t27 = -14724LL;
volatile uint32_t t28 = 101800022U;
volatile int32_t t30 = 1;
int16_t x142 = 11;
static int16_t x147 = -1;
volatile int32_t t32 = -3930933;
int32_t x150 = INT32_MAX;
volatile uint8_t x154 = 24U;
static uint8_t x156 = UINT8_MAX;
int16_t x170 = 0;
int8_t x171 = 0;
uint16_t x175 = UINT16_MAX;
int32_t x177 = 5257;
static volatile uint16_t x178 = 136U;
volatile uint64_t t38 = 2312454265714895009LLU;
static int64_t t39 = 235020LL;
int8_t x191 = INT8_MIN;
int32_t x192 = -2;
static uint64_t x196 = 2552LLU;
static uint64_t x199 = 6265119LLU;
static int64_t x208 = -23995209843LL;
volatile int64_t t45 = 118949350LL;
static int16_t x211 = -1843;
int8_t x215 = 37;
uint32_t x221 = 24U;
uint32_t t49 = 13670538U;
int64_t t50 = 238372490LL;
volatile int64_t x232 = -1LL;
int8_t x236 = -1;
int64_t t52 = 16107414313766LL;
static uint64_t t53 = 993021LLU;
uint64_t t59 = 1328717LLU;
static volatile uint32_t x273 = 196953U;
static int64_t x276 = -248644484124371891LL;
uint64_t x283 = 819LLU;
int32_t x284 = -1;
uint8_t x291 = UINT8_MAX;
volatile uint32_t t63 = 28638U;
static uint64_t x295 = UINT64_MAX;
int32_t x303 = -1;
uint16_t x305 = 60U;
uint64_t x307 = 61994221506828244LLU;
uint16_t x312 = UINT16_MAX;
uint64_t t69 = UINT64_MAX;
volatile uint64_t x331 = 8755648074LLU;
int64_t x332 = INT64_MIN;
int64_t x336 = -1LL;
int8_t x337 = INT8_MIN;
int64_t x338 = INT64_MIN;
int32_t x343 = -1;
volatile int32_t x354 = INT32_MIN;
volatile int64_t x357 = INT64_MAX;
volatile uint32_t x359 = 33129063U;
volatile int32_t x370 = INT32_MAX;
int32_t t82 = INT32_MIN;
volatile uint64_t x373 = UINT64_MAX;
static uint64_t t83 = UINT64_MAX;
volatile int16_t x380 = 2219;
volatile int16_t x381 = INT16_MIN;
volatile uint16_t x384 = 21246U;
int64_t x390 = INT64_MIN;
int64_t t87 = 136678184LL;
uint8_t x396 = 0U;
int64_t x403 = -1LL;
volatile int64_t t91 = 3349LL;
static int32_t t92 = -2756853;
int32_t x418 = 45;
int32_t t94 = -155;
int16_t x421 = -4;
uint8_t x422 = UINT8_MAX;
volatile int32_t t95 = 75260059;
int16_t x425 = INT16_MIN;
volatile int8_t x428 = -1;
volatile int64_t t98 = 10LL;
int64_t x439 = 21971702338529LL;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	volatile int16_t x2 = 56;
	volatile int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MIN;

	t0 = (((x1^x2)-x3)|x4);

	if (t0 != -9223372036854677561LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x8 = -1;
	int32_t t1 = 2046555;

	t1 = (((x5^x6)-x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = -2374993;
	volatile uint16_t x12 = 3172U;

	t2 = (((x9^x10)-x11)|x12);

	if (t2 != 2145111796LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 6799407200969756LLU;
	int32_t x15 = -252998;
	volatile int16_t x16 = INT16_MIN;
	uint64_t t3 = 32656038LLU;

	t3 = (((x13^x14)-x15)|x16);

	if (t3 != 18446744073709519017LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = UINT32_MAX;
	int32_t x19 = -1;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

	t4 = (((x17^x18)-x19)|x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 134185233623602LL;
	uint8_t x22 = 13U;
	static int16_t x23 = 26;
	static int64_t t5 = -47546723483LL;

	t5 = (((x21^x22)-x23)|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 1176572580994LLU;
	uint16_t x26 = UINT16_MAX;
	volatile uint64_t x27 = 34069139472LLU;
	static uint32_t x28 = UINT32_MAX;
	uint64_t t6 = 0LLU;

	t6 = (((x25^x26)-x27)|x28);

	if (t6 != 1146756268031LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x42 = 562LL;
	int16_t x43 = 7;
	volatile int64_t t7 = -15LL;

	t7 = (((x41^x42)-x43)|x44);

	if (t7 != -521LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = UINT32_MAX;
	static int64_t x46 = 247LL;
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MAX;
	static volatile int64_t t8 = -1459078469913097919LL;

	t8 = (((x45^x46)-x47)|x48);

	if (t8 != 4294967295LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 3899U;
	static uint32_t x50 = UINT32_MAX;
	volatile uint64_t x52 = 421416873783775LLU;
	uint64_t t9 = 851068084LLU;

	t9 = (((x49^x50)-x51)|x52);

	if (t9 != 421417896112607LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x54 = 0;
	static int8_t x56 = INT8_MIN;

	t10 = (((x53^x54)-x55)|x56);

	if (t10 != -33) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x58 = 12;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = 161;

	t11 = (((x57^x58)-x59)|x60);

	if (t11 != 18446744071562068141LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MAX;
	static int32_t x62 = INT32_MAX;
	uint16_t x64 = 1U;

	t12 = (((x61^x62)-x63)|x64);

	if (t12 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 5U;
	static int16_t x66 = -1;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -206LL;
	volatile int64_t t13 = -104661096254LL;

	t13 = (((x65^x66)-x67)|x68);

	if (t13 != -5LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = -12;
	int16_t x71 = INT16_MIN;
	volatile uint8_t x72 = 6U;
	volatile int32_t t14 = 1481656;

	t14 = (((x69^x70)-x71)|x72);

	if (t14 != -2147450865) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x74 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int64_t t15 = 56036466LL;

	t15 = (((x73^x74)-x75)|x76);

	if (t15 != -130987917313LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = 90554846443073510LLU;
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	static uint64_t x80 = 47505486607LLU;
	uint64_t t16 = 1326LLU;

	t16 = (((x77^x78)-x79)|x80);

	if (t16 != 9132817203540669295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = 3U;
	uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MAX;
	int32_t t17 = -12909635;

	t17 = (((x81^x82)-x83)|x84);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x86 = 176U;
	int64_t x87 = 1857003215620981455LL;
	int32_t x88 = -1;
	volatile int64_t t18 = 60844944468872289LL;

	t18 = (((x85^x86)-x87)|x88);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = 9;
	int32_t x91 = INT32_MIN;
	volatile int16_t x92 = INT16_MAX;
	uint64_t t19 = 2LLU;

	t19 = (((x89^x90)-x91)|x92);

	if (t19 != 2147516415LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x94 = -6271086LL;
	uint16_t x95 = 2U;
	static volatile int64_t t20 = -8LL;

	t20 = (((x93^x94)-x95)|x96);

	if (t20 != -2141212565LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = -11572;
	volatile uint64_t t21 = 44944583LLU;

	t21 = (((x97^x98)-x99)|x100);

	if (t21 != 2147483647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = 330407860LL;
	int16_t x102 = -13;
	int8_t x103 = INT8_MIN;
	volatile int8_t x104 = 1;

	t22 = (((x101^x102)-x103)|x104);

	if (t22 != -330407737LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = 1;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	static uint16_t x108 = 188U;
	volatile int64_t t23 = 23343197671LL;

	t23 = (((x105^x106)-x107)|x108);

	if (t23 != -9223372036854742851LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x113 = 8061172184440274572LLU;
	uint64_t x114 = UINT64_MAX;
	uint32_t x115 = 239522U;
	static uint8_t x116 = UINT8_MAX;
	static uint64_t t24 = 256721102010LLU;

	t24 = (((x113^x114)-x115)|x116);

	if (t24 != 10385571889269037567LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -1LL;
	uint64_t x118 = 6328478341LLU;

	t25 = (((x117^x118)-x119)|x120);

	if (t25 != 18446744067381073275LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MAX;
	int64_t x122 = INT64_MAX;
	int16_t x123 = -1;
	uint64_t x124 = 2LLU;
	volatile uint64_t t26 = 10280LLU;

	t26 = (((x121^x122)-x123)|x124);

	if (t26 != 9223372036854743043LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int64_t x127 = -1LL;
	uint8_t x128 = UINT8_MAX;

	t27 = (((x125^x126)-x127)|x128);

	if (t27 != 2147483903LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = 7725226U;
	static int32_t x130 = INT32_MAX;
	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MAX;

	t28 = (((x129^x130)-x131)|x132);

	if (t28 != 2139758591U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MAX;
	uint64_t x134 = 2687860214863508LLU;
	int8_t x135 = -5;
	uint32_t x136 = UINT32_MAX;
	volatile uint64_t t29 = 106766279304LLU;

	t29 = (((x133^x134)-x135)|x136);

	if (t29 != 2687863548280831LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = 10;
	static int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;

	t30 = (((x137^x138)-x139)|x140);

	if (t30 != -118) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = 68886331674010LLU;
	volatile int16_t x143 = -150;
	static int64_t x144 = INT64_MIN;
	volatile uint64_t t31 = 805LLU;

	t31 = (((x141^x142)-x143)|x144);

	if (t31 != 9223440923186449959LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x145 = INT8_MAX;
	volatile int8_t x146 = 0;
	uint16_t x148 = UINT16_MAX;

	t32 = (((x145^x146)-x147)|x148);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -1;
	volatile int32_t x151 = -74597817;
	int32_t x152 = INT32_MAX;
	static volatile int32_t t33 = -741205;

	t33 = (((x149^x150)-x151)|x152);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = 3937;
	int8_t x155 = 0;
	int32_t t34 = 29642904;

	t34 = (((x153^x154)-x155)|x156);

	if (t34 != 4095) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = 38U;
	volatile int8_t x162 = INT8_MIN;
	int32_t x163 = -108037;
	uint8_t x164 = 30U;
	static volatile uint32_t t35 = 23627U;

	t35 = (((x161^x162)-x163)|x164);

	if (t35 != 107967U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 3U;
	static uint16_t x172 = 321U;
	volatile int32_t t36 = -255004;

	t36 = (((x169^x170)-x171)|x172);

	if (t36 != 323) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	static int64_t x174 = 1980076LL;
	int8_t x176 = 0;
	volatile int64_t t37 = 56LL;

	t37 = (((x173^x174)-x175)|x176);

	if (t37 != -2145569107LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x179 = 1309385708U;
	uint64_t x180 = 48LLU;

	t38 = (((x177^x178)-x179)|x180);

	if (t38 != 2985586741LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;

	t39 = (((x181^x182)-x183)|x184);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -1LL;
	int32_t x186 = INT32_MIN;
	static volatile int64_t x187 = -1LL;
	int8_t x188 = -1;
	volatile int64_t t40 = -111LL;

	t40 = (((x185^x186)-x187)|x188);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = UINT32_MAX;
	volatile uint32_t t41 = 136U;

	t41 = (((x189^x190)-x191)|x192);

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MAX;
	int64_t x194 = 779LL;
	volatile uint64_t x195 = 587LLU;
	static uint64_t t42 = 20883940LLU;

	t42 = (((x193^x194)-x195)|x196);

	if (t42 != 31737LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x197 = INT32_MIN;
	int64_t x198 = 3110243LL;
	int8_t x200 = -13;
	uint64_t t43 = 859240801474892LLU;

	t43 = (((x197^x198)-x199)|x200);

	if (t43 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x201 = -1;
	int32_t x202 = INT32_MAX;
	int8_t x203 = -1;
	int16_t x204 = INT16_MAX;
	volatile int32_t t44 = 32133;

	t44 = (((x201^x202)-x203)|x204);

	if (t44 != -2147450881) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = 423U;
	volatile int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MAX;

	t45 = (((x205^x206)-x207)|x208);

	if (t45 != -22611LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	uint32_t x212 = 105U;
	static uint32_t t46 = 603U;

	t46 = (((x209^x210)-x211)|x212);

	if (t46 != 34555U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x213 = UINT16_MAX;
	int16_t x214 = 15;
	int32_t x216 = -5332;
	volatile int32_t t47 = -1193;

	t47 = (((x213^x214)-x215)|x216);

	if (t47 != -17) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -1;
	int32_t x218 = INT32_MIN;
	volatile int32_t x219 = 0;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t48 = INT32_MAX;

	t48 = (((x217^x218)-x219)|x220);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x222 = 0;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 49U;

	t49 = (((x221^x222)-x223)|x224);

	if (t49 != 32825U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = -1LL;
	int64_t x226 = INT64_MIN;
	static int32_t x227 = 28;
	static uint32_t x228 = 1273U;

	t50 = (((x225^x226)-x227)|x228);

	if (t50 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MAX;
	volatile uint32_t x230 = 761838U;
	uint8_t x231 = 1U;
	volatile int64_t t51 = 95LL;

	t51 = (((x229^x230)-x231)|x232);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x233 = -14762345;
	uint32_t x234 = 1993U;
	int64_t x235 = 1LL;

	t52 = (((x233^x234)-x235)|x236);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x237 = UINT8_MAX;
	int16_t x238 = 47;
	uint64_t x239 = UINT64_MAX;
	static uint32_t x240 = 528742952U;

	t53 = (((x237^x238)-x239)|x240);

	if (t53 != 528743161LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	int8_t x243 = -1;
	volatile uint32_t x244 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

	t54 = (((x241^x242)-x243)|x244);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x245 = 69785391090LLU;
	volatile int64_t x246 = -467148601480639085LL;
	static uint16_t x247 = 1U;
	int16_t x248 = INT16_MAX;
	uint64_t t55 = 395LLU;

	t55 = (((x245^x246)-x247)|x248);

	if (t55 != 17979595402997268479LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x253 = INT8_MAX;
	static volatile int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MAX;
	static int32_t x256 = 705;
	static int64_t t56 = -158492101517818150LL;

	t56 = (((x253^x254)-x255)|x256);

	if (t56 != 9223372034707292097LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x257 = 3LLU;
	uint64_t x258 = UINT64_MAX;
	static int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t57 = 159631998327166204LLU;

	t57 = (((x257^x258)-x259)|x260);

	if (t57 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static uint8_t x262 = 28U;
	uint8_t x263 = 9U;
	int16_t x264 = INT16_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x261^x262)-x263)|x264);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = 415954LL;
	int32_t x266 = INT32_MAX;
	uint32_t x267 = 57U;
	uint64_t x268 = 1LLU;

	t59 = (((x265^x266)-x267)|x268);

	if (t59 != 2147067637LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	uint64_t x270 = 22628287745101698LLU;
	volatile int16_t x271 = INT16_MAX;
	int16_t x272 = -18;
	uint64_t t60 = 877LLU;

	t60 = (((x269^x270)-x271)|x272);

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x274 = INT32_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t t61 = 20785602561LL;

	t61 = (((x273^x274)-x275)|x276);

	if (t61 != -248644482923430417LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = 0U;
	int8_t x282 = INT8_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (((x281^x282)-x283)|x284);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = 5;
	uint32_t x290 = 1844U;
	int8_t x292 = INT8_MIN;

	t63 = (((x289^x290)-x291)|x292);

	if (t63 != 4294967218U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MAX;
	static int16_t x294 = -1;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t64 = 8370831104728401205LLU;

	t64 = (((x293^x294)-x295)|x296);

	if (t64 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = 0;
	int32_t x298 = 570;
	static int16_t x299 = INT16_MIN;
	static int64_t x300 = INT64_MIN;
	volatile int64_t t65 = 289449LL;

	t65 = (((x297^x298)-x299)|x300);

	if (t65 != -9223372036854742470LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x301 = INT8_MAX;
	volatile int64_t x302 = INT64_MIN;
	int16_t x304 = -1;
	int64_t t66 = -2270LL;

	t66 = (((x301^x302)-x303)|x304);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x306 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	volatile uint64_t t67 = 1LLU;

	t67 = (((x305^x306)-x307)|x308);

	if (t67 != 18446744071578150888LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = 16U;
	volatile int32_t x311 = INT32_MIN;
	static volatile int32_t t68 = INT32_MAX;

	t68 = (((x309^x310)-x311)|x312);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = 781563118;
	int8_t x314 = INT8_MIN;
	static uint8_t x315 = 4U;
	uint64_t x316 = UINT64_MAX;

	t69 = (((x313^x314)-x315)|x316);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 1733340633U;
	static int32_t x318 = INT32_MIN;
	int64_t x319 = 12549489LL;
	int64_t x320 = INT64_MIN;
	volatile int64_t t70 = 506326631019336690LL;

	t70 = (((x317^x318)-x319)|x320);

	if (t70 != -9223372032986501016LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = UINT32_MAX;
	static int16_t x324 = -1;
	uint32_t t71 = UINT32_MAX;

	t71 = (((x321^x322)-x323)|x324);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x325 = UINT64_MAX;
	static int8_t x326 = 31;
	uint32_t x327 = 20488U;
	int8_t x328 = INT8_MAX;
	uint64_t t72 = 919130121LLU;

	t72 = (((x325^x326)-x327)|x328);

	if (t72 != 18446744073709531135LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x329 = -1;
	static int8_t x330 = 1;
	static volatile uint64_t t73 = 5148LLU;

	t73 = (((x329^x330)-x331)|x332);

	if (t73 != 18446744064953903540LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x334 = UINT64_MAX;
	static int32_t x335 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (((x333^x334)-x335)|x336);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x339 = 1;
	volatile uint16_t x340 = 1225U;
	static int64_t t75 = INT64_MAX;

	t75 = (((x337^x338)-x339)|x340);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x341 = 164726;
	uint8_t x342 = 0U;
	static uint8_t x344 = UINT8_MAX;
	static int32_t t76 = 906;

	t76 = (((x341^x342)-x343)|x344);

	if (t76 != 164863) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = UINT16_MAX;
	volatile uint8_t x346 = 9U;
	static uint64_t x347 = 7930LLU;
	int16_t x348 = INT16_MIN;
	uint64_t t77 = 3450462963956836318LLU;

	t77 = (((x345^x346)-x347)|x348);

	if (t77 != 18446744073709543676LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = 63869LLU;
	static int32_t x355 = -1;
	uint32_t x356 = 25U;
	volatile uint64_t t78 = 15717176LLU;

	t78 = (((x353^x354)-x355)|x356);

	if (t78 != 18446744071562131839LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x358 = 8733200147LLU;
	volatile int16_t x360 = INT16_MAX;
	volatile uint64_t t79 = 77234396141LLU;

	t79 = (((x357^x358)-x359)|x360);

	if (t79 != 9223372028088451071LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 475LLU;
	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	int8_t x364 = 42;
	uint64_t t80 = 3816571LLU;

	t80 = (((x361^x362)-x363)|x364);

	if (t80 != 507LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x365 = INT8_MIN;
	uint32_t x366 = 13206U;
	int16_t x367 = 31;
	int32_t x368 = INT32_MAX;
	static volatile uint32_t t81 = UINT32_MAX;

	t81 = (((x365^x366)-x367)|x368);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MAX;
	int8_t x371 = 0;
	int32_t x372 = INT32_MIN;

	t82 = (((x369^x370)-x371)|x372);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x374 = INT32_MAX;
	volatile int16_t x375 = -1;
	static volatile int64_t x376 = INT64_MAX;

	t83 = (((x373^x374)-x375)|x376);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x377 = -4;
	int64_t x378 = -1LL;
	volatile int16_t x379 = 2;
	volatile int64_t t84 = 42599313LL;

	t84 = (((x377^x378)-x379)|x380);

	if (t84 != 2219LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x382 = -1;
	int16_t x383 = INT16_MIN;
	int32_t t85 = 3459;

	t85 = (((x381^x382)-x383)|x384);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x385 = -1;
	int64_t x386 = -57914LL;
	static volatile uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	int64_t t86 = -7787778149455LL;

	t86 = (((x385^x386)-x387)|x388);

	if (t86 != -7553LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x389 = UINT8_MAX;
	int8_t x391 = 5;
	int8_t x392 = 1;

	t87 = (((x389^x390)-x391)|x392);

	if (t87 != -9223372036854775557LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 1U;
	int32_t x394 = -1;
	int16_t x395 = INT16_MIN;
	volatile int32_t t88 = 444;

	t88 = (((x393^x394)-x395)|x396);

	if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x397 = 312486LLU;
	int8_t x398 = 4;
	int8_t x399 = 6;
	static int32_t x400 = 62056005;
	volatile uint64_t t89 = 10304755LLU;

	t89 = (((x397^x398)-x399)|x400);

	if (t89 != 62318301LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x401 = 0U;
	uint32_t x402 = 257U;
	uint64_t x404 = 14698847069049LLU;
	uint64_t t90 = 0LLU;

	t90 = (((x401^x402)-x403)|x404);

	if (t90 != 14698847069051LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = INT16_MAX;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	volatile uint32_t x408 = UINT32_MAX;

	t91 = (((x405^x406)-x407)|x408);

	if (t91 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = 1081;
	static int8_t x410 = -1;
	int8_t x411 = -1;
	int8_t x412 = 13;

	t92 = (((x409^x410)-x411)|x412);

	if (t92 != -1073) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x413 = INT64_MAX;
	volatile int16_t x414 = INT16_MIN;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = -1;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (((x413^x414)-x415)|x416);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MIN;
	int32_t x419 = 365;
	volatile int16_t x420 = INT16_MAX;

	t94 = (((x417^x418)-x419)|x420);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x423 = UINT16_MAX;
	static uint8_t x424 = UINT8_MAX;

	t95 = (((x421^x422)-x423)|x424);

	if (t95 != -65537) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x426 = -1LL;
	int16_t x427 = -1;
	volatile int64_t t96 = -248671402LL;

	t96 = (((x425^x426)-x427)|x428);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = 100847198;
	static uint16_t x430 = 3U;
	int8_t x431 = INT8_MAX;
	int16_t x432 = 0;
	static volatile int32_t t97 = -7756;

	t97 = (((x429^x430)-x431)|x432);

	if (t97 != 100847070) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 29;
	int32_t x434 = 43874;
	volatile int8_t x435 = INT8_MIN;
	int64_t x436 = -1LL;

	t98 = (((x433^x434)-x435)|x436);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x437 = INT32_MIN;
	volatile int8_t x438 = 46;
	static int8_t x440 = INT8_MIN;
	int64_t t99 = -1972000049206LL;

	t99 = (((x437^x438)-x439)|x440);

	if (t99 != -51LL) { NG(); } else { ; }
	
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

