#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x10 = -1;
int64_t x11 = -1LL;
volatile int32_t t3 = -249715;
static volatile uint64_t x18 = UINT64_MAX;
static int64_t x26 = 3668599259203514LL;
int16_t x30 = 468;
int32_t t9 = -179189261;
int8_t x47 = INT8_MAX;
uint8_t x48 = 19U;
static int64_t x50 = INT64_MIN;
int32_t t12 = -501;
int8_t x53 = INT8_MIN;
volatile uint64_t x54 = 4LLU;
static int32_t t14 = -17228979;
volatile int32_t x61 = -3225462;
int32_t x62 = INT32_MIN;
int32_t x68 = -1;
uint32_t x70 = UINT32_MAX;
uint64_t x71 = 614626882LLU;
static int32_t x78 = 5;
int16_t x80 = INT16_MIN;
static volatile int32_t t22 = -1311;
uint8_t x97 = 9U;
uint64_t x99 = 934LLU;
int32_t t24 = -140261332;
int16_t x101 = -1;
volatile int32_t t26 = 1381806;
static int8_t x115 = 10;
static int32_t x125 = INT32_MAX;
int8_t x130 = INT8_MIN;
volatile int32_t t31 = 29;
volatile int32_t t32 = 4;
uint64_t x144 = 16704LLU;
volatile int32_t t33 = -7604430;
static int32_t x151 = INT32_MAX;
uint16_t x157 = 9U;
int8_t x158 = 1;
volatile uint8_t x170 = UINT8_MAX;
int8_t x171 = INT8_MIN;
uint32_t x172 = UINT32_MAX;
volatile int32_t t37 = 226831;
static uint32_t x175 = UINT32_MAX;
volatile int64_t x180 = INT64_MIN;
int8_t x189 = INT8_MIN;
volatile int32_t x190 = INT32_MIN;
uint16_t x191 = 1U;
volatile int16_t x193 = INT16_MAX;
int32_t x195 = 54316417;
uint32_t x196 = 179U;
static uint8_t x198 = 59U;
int16_t x199 = INT16_MAX;
volatile int64_t x200 = INT64_MIN;
uint64_t x209 = 796537571418785LLU;
uint32_t x214 = 30200U;
int32_t t48 = -54270;
static int8_t x222 = 0;
static volatile int64_t x229 = INT64_MAX;
volatile uint16_t x245 = 1U;
volatile uint64_t x258 = 7248454902478636982LLU;
int16_t x263 = 520;
int32_t t58 = -99308;
int64_t x266 = 66010LL;
int64_t x270 = -1LL;
static int16_t x273 = -4047;
int16_t x274 = INT16_MAX;
uint32_t x282 = 371595U;
int16_t x284 = 1;
int64_t x288 = INT64_MIN;
int32_t t63 = 24;
int8_t x294 = INT8_MIN;
volatile int32_t t65 = 22957;
volatile uint64_t x308 = UINT64_MAX;
volatile int32_t t66 = -8425;
volatile int64_t x310 = INT64_MIN;
int64_t x314 = INT64_MAX;
uint64_t x316 = UINT64_MAX;
int16_t x322 = INT16_MIN;
int8_t x323 = -1;
uint32_t x333 = 45241U;
static volatile uint64_t x335 = 1003484LLU;
int32_t t72 = -143849;
volatile uint16_t x338 = UINT16_MAX;
volatile int32_t x346 = INT32_MIN;
int8_t x353 = INT8_MIN;
int32_t t79 = 245291;
int32_t x382 = INT32_MAX;
uint8_t x388 = UINT8_MAX;
volatile int32_t t83 = -19058;
int16_t x389 = -1;
uint16_t x398 = 5748U;
volatile int32_t t85 = 127;
int16_t x404 = INT16_MAX;
int16_t x411 = 4061;
int16_t x412 = -1;
uint8_t x422 = 98U;
volatile int32_t t90 = -165843834;
static volatile int32_t t91 = 184790;
int8_t x435 = INT8_MAX;
volatile int8_t x439 = INT8_MIN;
static int8_t x441 = 1;
int32_t x445 = INT32_MIN;
int32_t t96 = -79237393;
uint32_t x453 = 2784U;
int32_t x455 = -1104848;
uint64_t x459 = 418310LLU;


void f0(void) {
	uint64_t x1 = 1956853LLU;
	static uint64_t x2 = UINT64_MAX;
	volatile int16_t x3 = 401;
	uint32_t x4 = 1555407806U;
	int32_t t0 = 1;

	t0 = (((x1==x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = 6U;
	int64_t x7 = -1LL;
	static int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -257889760;

	t1 = (((x5==x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int32_t x12 = -486153;
	int32_t t2 = 620473;

	t2 = (((x9==x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -3;
	static volatile uint8_t x14 = UINT8_MAX;
	int32_t x15 = -22;
	uint64_t x16 = 67448330LLU;

	t3 = (((x13==x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 86124971U;
	int16_t x19 = INT16_MAX;
	volatile uint64_t x20 = 243LLU;
	int32_t t4 = -37820327;

	t4 = (((x17==x18)-x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint16_t x22 = UINT16_MAX;
	volatile int64_t x23 = 1366486231844563533LL;
	uint64_t x24 = 364387809659810721LLU;
	static volatile int32_t t5 = 25;

	t5 = (((x21==x22)-x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 0U;
	int64_t x27 = 258459375434225951LL;
	int8_t x28 = 19;
	int32_t t6 = 1110631;

	t6 = (((x25==x26)-x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 11U;
	int32_t x31 = 12400394;
	uint64_t x32 = 29224LLU;
	static volatile int32_t t7 = -35;

	t7 = (((x29==x30)-x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 83U;
	int8_t x34 = INT8_MIN;
	int8_t x35 = 0;
	int16_t x36 = 80;
	int32_t t8 = -117265897;

	t8 = (((x33==x34)-x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	int8_t x38 = INT8_MAX;
	int64_t x39 = -245359015171766LL;
	volatile int64_t x40 = INT64_MAX;

	t9 = (((x37==x38)-x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 12U;
	int32_t x42 = INT32_MIN;
	int16_t x43 = 13;
	int64_t x44 = -1LL;
	volatile int32_t t10 = 13;

	t10 = (((x41==x42)-x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 0;
	uint32_t x46 = UINT32_MAX;
	static volatile int32_t t11 = 1;

	t11 = (((x45==x46)-x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int16_t x51 = -1;
	uint16_t x52 = 0U;

	t12 = (((x49==x50)-x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x55 = -1;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = 171472;

	t13 = (((x53==x54)-x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	int64_t x58 = -1LL;
	int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;

	t14 = (((x57==x58)-x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x63 = 17;
	int8_t x64 = -1;
	volatile int32_t t15 = -56885386;

	t15 = (((x61==x62)-x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 3U;
	int64_t x66 = INT64_MIN;
	volatile int16_t x67 = -1;
	static volatile int32_t t16 = -620;

	t16 = (((x65==x66)-x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	static int32_t t17 = -3188527;

	t17 = (((x69==x70)-x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MAX;
	volatile int64_t x75 = INT64_MAX;
	uint64_t x76 = 24898708653145290LLU;
	volatile int32_t t18 = 1;

	t18 = (((x73==x74)-x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	static int16_t x79 = -114;
	static int32_t t19 = -9892;

	t19 = (((x77==x78)-x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	static uint64_t x83 = UINT64_MAX;
	static volatile int8_t x84 = -24;
	int32_t t20 = -2;

	t20 = (((x81==x82)-x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	int32_t x86 = -755;
	uint8_t x87 = 3U;
	uint64_t x88 = 61144742LLU;
	int32_t t21 = -33;

	t21 = (((x85==x86)-x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 492U;
	int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MIN;

	t22 = (((x89==x90)-x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 26;
	uint32_t x94 = 21U;
	static int8_t x95 = INT8_MIN;
	uint32_t x96 = 14U;
	int32_t t23 = -13799;

	t23 = (((x93==x94)-x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;

	t24 = (((x97==x98)-x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = 29047636692LL;
	static volatile int16_t x103 = INT16_MIN;
	static int16_t x104 = -148;
	int32_t t25 = -18029;

	t25 = (((x101==x102)-x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -723;
	int8_t x110 = -1;
	int8_t x111 = 6;
	static uint16_t x112 = UINT16_MAX;

	t26 = (((x109==x110)-x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 30U;
	static int64_t x114 = INT64_MIN;
	int8_t x116 = -1;
	volatile int32_t t27 = 117;

	t27 = (((x113==x114)-x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	static uint64_t x123 = 109994LLU;
	int8_t x124 = INT8_MAX;
	volatile int32_t t28 = -10720;

	t28 = (((x121==x122)-x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x126 = UINT64_MAX;
	uint64_t x127 = 86970731462LLU;
	uint16_t x128 = 7U;
	static int32_t t29 = 0;

	t29 = (((x125==x126)-x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = -325;
	uint8_t x131 = 30U;
	uint8_t x132 = 6U;
	volatile int32_t t30 = 1361;

	t30 = (((x129==x130)-x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 0U;
	int8_t x134 = INT8_MIN;
	int32_t x135 = 106569254;
	int64_t x136 = 194606LL;

	t31 = (((x133==x134)-x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 0U;
	volatile uint16_t x138 = 31758U;
	static volatile int32_t x139 = -1;
	int16_t x140 = -1;

	t32 = (((x137==x138)-x139)==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = -1;
	uint64_t x143 = 122649608016100LLU;

	t33 = (((x141==x142)-x143)==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = -1;
	uint16_t x152 = 123U;
	int32_t t34 = 467760069;

	t34 = (((x149==x150)-x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MAX;
	int64_t x155 = -4076769035814652LL;
	int8_t x156 = -1;
	int32_t t35 = -4260423;

	t35 = (((x153==x154)-x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x159 = 4152U;
	int8_t x160 = INT8_MIN;
	volatile int32_t t36 = -26;

	t36 = (((x157==x158)-x159)==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x169 = 2607072043285494022LLU;

	t37 = (((x169==x170)-x171)==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = 1;
	volatile int8_t x174 = INT8_MIN;
	int16_t x176 = 912;
	volatile int32_t t38 = 291768117;

	t38 = (((x173==x174)-x175)==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	static int8_t x179 = 14;
	static int32_t t39 = 139468;

	t39 = (((x177==x178)-x179)==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 91091060248581310LLU;
	int32_t x182 = INT32_MAX;
	uint64_t x183 = 1LLU;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t40 = -1;

	t40 = (((x181==x182)-x183)==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x185 = 4U;
	int32_t x186 = INT32_MIN;
	static uint16_t x187 = 25U;
	int64_t x188 = -1LL;
	int32_t t41 = 29;

	t41 = (((x185==x186)-x187)==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x192 = INT64_MIN;
	volatile int32_t t42 = -29;

	t42 = (((x189==x190)-x191)==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x194 = UINT32_MAX;
	volatile int32_t t43 = -6675;

	t43 = (((x193==x194)-x195)==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -1;
	volatile int32_t t44 = 1;

	t44 = (((x197==x198)-x199)==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MIN;
	int8_t x206 = -14;
	static int8_t x207 = -3;
	volatile uint32_t x208 = 232U;
	volatile int32_t t45 = 69;

	t45 = (((x205==x206)-x207)==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	static int16_t x212 = -51;
	volatile int32_t t46 = -108;

	t46 = (((x209==x210)-x211)==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = INT32_MAX;
	int8_t x215 = 18;
	static volatile uint32_t x216 = UINT32_MAX;
	int32_t t47 = 2363;

	t47 = (((x213==x214)-x215)==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = 18LL;
	volatile uint32_t x219 = 1U;
	static uint8_t x220 = 23U;

	t48 = (((x217==x218)-x219)==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = 1780U;
	static int16_t x223 = -1;
	int64_t x224 = INT64_MIN;
	static int32_t t49 = 182126350;

	t49 = (((x221==x222)-x223)==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MAX;
	int16_t x227 = INT16_MIN;
	volatile int32_t x228 = -1;
	volatile int32_t t50 = 6;

	t50 = (((x225==x226)-x227)==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x230 = -133;
	int16_t x231 = INT16_MIN;
	int8_t x232 = 1;
	int32_t t51 = -163679;

	t51 = (((x229==x230)-x231)==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = -1;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 242340476U;
	int32_t t52 = 47;

	t52 = (((x237==x238)-x239)==x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 41;
	uint32_t x242 = 236U;
	volatile int32_t x243 = INT32_MAX;
	uint32_t x244 = 7691U;
	volatile int32_t t53 = 0;

	t53 = (((x241==x242)-x243)==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x246 = -1;
	static int16_t x247 = -1;
	uint64_t x248 = 852128107744297LLU;
	static int32_t t54 = -45;

	t54 = (((x245==x246)-x247)==x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	volatile int32_t x250 = 11593;
	int32_t x251 = -74611269;
	volatile int32_t x252 = -1;
	int32_t t55 = -379;

	t55 = (((x249==x250)-x251)==x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = 506;
	uint8_t x254 = 36U;
	int8_t x255 = -45;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t56 = 36930133;

	t56 = (((x253==x254)-x255)==x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x257 = -8;
	uint8_t x259 = 1U;
	int16_t x260 = 13;
	static int32_t t57 = 79430;

	t57 = (((x257==x258)-x259)==x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = INT8_MIN;
	static uint32_t x262 = 6112U;
	volatile int64_t x264 = INT64_MIN;

	t58 = (((x261==x262)-x263)==x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = INT32_MIN;
	int32_t t59 = 7654;

	t59 = (((x265==x266)-x267)==x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x269 = INT16_MIN;
	volatile uint32_t x271 = 2U;
	int16_t x272 = -4;
	volatile int32_t t60 = -1;

	t60 = (((x269==x270)-x271)==x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x275 = -1;
	static volatile int64_t x276 = -1LL;
	int32_t t61 = 651664;

	t61 = (((x273==x274)-x275)==x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x281 = 13814U;
	int8_t x283 = -22;
	static volatile int32_t t62 = -81504;

	t62 = (((x281==x282)-x283)==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x285 = UINT8_MAX;
	volatile int64_t x286 = -1LL;
	uint32_t x287 = UINT32_MAX;

	t63 = (((x285==x286)-x287)==x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x289 = UINT64_MAX;
	static uint64_t x290 = 435946195092959LLU;
	uint8_t x291 = 1U;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t64 = 17;

	t64 = (((x289==x290)-x291)==x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = INT64_MIN;

	t65 = (((x293==x294)-x295)==x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = UINT16_MAX;
	uint8_t x307 = 1U;

	t66 = (((x305==x306)-x307)==x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = INT64_MAX;
	uint16_t x311 = 579U;
	uint64_t x312 = UINT64_MAX;
	int32_t t67 = -313;

	t67 = (((x309==x310)-x311)==x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	volatile int16_t x315 = -461;
	static volatile int32_t t68 = -35268341;

	t68 = (((x313==x314)-x315)==x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = 18152;
	static uint64_t x318 = 199371499902LLU;
	static int8_t x319 = -7;
	int64_t x320 = -1LL;
	int32_t t69 = 203782781;

	t69 = (((x317==x318)-x319)==x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x321 = UINT32_MAX;
	int16_t x324 = -6936;
	volatile int32_t t70 = 1;

	t70 = (((x321==x322)-x323)==x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = -5;
	int8_t x326 = INT8_MIN;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = 44U;
	volatile int32_t t71 = 5;

	t71 = (((x325==x326)-x327)==x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x334 = UINT64_MAX;
	volatile uint32_t x336 = 104040U;

	t72 = (((x333==x334)-x335)==x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = -1;
	int16_t x339 = -6197;
	int32_t x340 = INT32_MIN;
	int32_t t73 = -5639;

	t73 = (((x337==x338)-x339)==x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = INT16_MIN;
	static int32_t x342 = -751518;
	int16_t x343 = 484;
	int32_t x344 = INT32_MIN;
	volatile int32_t t74 = -12445;

	t74 = (((x341==x342)-x343)==x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x347 = -1LL;
	int16_t x348 = -1;
	int32_t t75 = 42850;

	t75 = (((x345==x346)-x347)==x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x350 = -1LL;
	int64_t x351 = INT64_MAX;
	int8_t x352 = 8;
	int32_t t76 = -1;

	t76 = (((x349==x350)-x351)==x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x354 = 2;
	static uint32_t x355 = 14445197U;
	int64_t x356 = INT64_MAX;
	int32_t t77 = 217416677;

	t77 = (((x353==x354)-x355)==x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = -1LL;
	static int8_t x358 = INT8_MAX;
	static int64_t x359 = -1LL;
	uint8_t x360 = UINT8_MAX;
	static int32_t t78 = 78359632;

	t78 = (((x357==x358)-x359)==x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x365 = UINT16_MAX;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = 61U;
	int8_t x368 = INT8_MIN;

	t79 = (((x365==x366)-x367)==x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = INT32_MIN;
	int8_t x371 = 0;
	uint8_t x372 = 47U;
	volatile int32_t t80 = -2701;

	t80 = (((x369==x370)-x371)==x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 19U;
	uint16_t x375 = 14U;
	volatile uint32_t x376 = 531552837U;
	static int32_t t81 = 236636;

	t81 = (((x373==x374)-x375)==x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = -3;
	uint16_t x383 = 0U;
	static int16_t x384 = -1274;
	int32_t t82 = -191;

	t82 = (((x381==x382)-x383)==x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = INT32_MAX;
	static int8_t x386 = 20;
	uint32_t x387 = UINT32_MAX;

	t83 = (((x385==x386)-x387)==x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x390 = 13222U;
	volatile uint16_t x391 = UINT16_MAX;
	int32_t x392 = INT32_MIN;
	int32_t t84 = -7608;

	t84 = (((x389==x390)-x391)==x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x397 = -186714LL;
	uint32_t x399 = 0U;
	uint32_t x400 = 8379U;

	t85 = (((x397==x398)-x399)==x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x401 = UINT32_MAX;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = 25;
	volatile int32_t t86 = 100224936;

	t86 = (((x401==x402)-x403)==x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x409 = -1;
	int8_t x410 = -1;
	static int32_t t87 = -70871582;

	t87 = (((x409==x410)-x411)==x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 14;
	static int32_t x414 = 3621;
	int16_t x415 = 322;
	uint8_t x416 = 45U;
	int32_t t88 = -312;

	t88 = (((x413==x414)-x415)==x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x421 = -1;
	int8_t x423 = 3;
	static int16_t x424 = 14680;
	int32_t t89 = -133107058;

	t89 = (((x421==x422)-x423)==x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x425 = 597438092553280LL;
	static int64_t x426 = 217LL;
	uint8_t x427 = 88U;
	int32_t x428 = INT32_MIN;

	t90 = (((x425==x426)-x427)==x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MIN;
	static int16_t x430 = INT16_MIN;
	int8_t x431 = -29;
	int8_t x432 = -1;

	t91 = (((x429==x430)-x431)==x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x433 = 400U;
	int32_t x434 = INT32_MAX;
	uint8_t x436 = 1U;
	int32_t t92 = -61;

	t92 = (((x433==x434)-x435)==x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = 1963931699LLU;
	int8_t x438 = -1;
	int32_t x440 = INT32_MIN;
	int32_t t93 = 89840065;

	t93 = (((x437==x438)-x439)==x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x442 = INT8_MAX;
	int64_t x443 = -200976003LL;
	uint8_t x444 = 15U;
	int32_t t94 = 137983890;

	t94 = (((x441==x442)-x443)==x444);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x446 = INT64_MIN;
	uint64_t x447 = 167LLU;
	static int16_t x448 = -37;
	int32_t t95 = 3702;

	t95 = (((x445==x446)-x447)==x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x450 = 142;
	int8_t x451 = INT8_MAX;
	int64_t x452 = -1204996LL;

	t96 = (((x449==x450)-x451)==x452);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x454 = 74U;
	static uint32_t x456 = 2184U;
	int32_t t97 = -999;

	t97 = (((x453==x454)-x455)==x456);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = INT16_MIN;
	uint32_t x458 = 1386785U;
	int64_t x460 = INT64_MIN;
	static volatile int32_t t98 = -11;

	t98 = (((x457==x458)-x459)==x460);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x461 = UINT32_MAX;
	uint16_t x462 = 8435U;
	static volatile uint16_t x463 = 59U;
	int16_t x464 = INT16_MAX;
	static int32_t t99 = -1;

	t99 = (((x461==x462)-x463)==x464);

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

