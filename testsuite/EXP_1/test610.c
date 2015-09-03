#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = INT16_MIN;
volatile uint32_t x7 = UINT32_MAX;
int64_t x8 = -101343LL;
volatile int32_t x12 = INT32_MIN;
volatile int8_t x13 = -1;
uint64_t x15 = 152977247576LLU;
volatile int16_t x16 = -1;
static int8_t x17 = INT8_MIN;
volatile int8_t x22 = INT8_MIN;
uint64_t t5 = UINT64_MAX;
int32_t t6 = -78943;
volatile int32_t t9 = -2670;
static int32_t x41 = INT32_MAX;
int32_t x46 = 2;
uint32_t x47 = 944666U;
uint64_t x51 = 333467423253LLU;
int16_t x52 = INT16_MAX;
volatile int32_t t12 = 0;
static int8_t x54 = -1;
uint64_t t16 = 233273781LLU;
static volatile int32_t x69 = INT32_MIN;
uint32_t x71 = 1605754U;
volatile int8_t x72 = -55;
int8_t x74 = -1;
volatile int64_t x75 = INT64_MIN;
static volatile uint32_t t18 = 19286U;
volatile int8_t x87 = INT8_MAX;
int16_t x88 = -1;
static uint64_t x96 = UINT64_MAX;
int64_t x99 = INT64_MIN;
int8_t x100 = 0;
int8_t x104 = INT8_MAX;
int64_t x110 = -3LL;
static uint8_t x113 = 2U;
int64_t x123 = INT64_MIN;
uint16_t x124 = 0U;
int32_t x134 = -1;
uint32_t x135 = 106390U;
volatile int8_t x136 = INT8_MAX;
int8_t x140 = 57;
int8_t x149 = INT8_MIN;
uint16_t x154 = 29836U;
volatile int64_t x155 = -1LL;
int64_t x162 = INT64_MAX;
volatile int64_t x164 = -6LL;
volatile int64_t t39 = -1953LL;
uint64_t x171 = 621342099LLU;
static volatile int32_t x175 = -1;
uint64_t t44 = 1LLU;
uint8_t x197 = 3U;
volatile int16_t x205 = INT16_MIN;
int32_t x210 = 15151;
uint16_t x220 = UINT16_MAX;
int16_t x225 = -1;
int16_t x228 = INT16_MIN;
volatile int64_t x230 = INT64_MIN;
uint64_t x232 = 12815661373843135LLU;
int32_t t56 = -155;
int64_t x245 = -1LL;
uint16_t x248 = UINT16_MAX;
int8_t x251 = INT8_MAX;
static int8_t x254 = INT8_MIN;
int32_t t61 = 943772005;
int64_t x257 = -3LL;
int16_t x261 = -1;
static volatile int32_t x265 = INT32_MAX;
uint32_t x267 = UINT32_MAX;
int8_t x268 = INT8_MIN;
int16_t x270 = 8;
int8_t x275 = -57;
volatile uint32_t t66 = 730954927U;
volatile uint32_t x277 = 808610543U;
int32_t x278 = INT32_MIN;
static int32_t x282 = INT32_MIN;
static int16_t x286 = INT16_MAX;
volatile int8_t x291 = 1;
int64_t x293 = INT64_MIN;
int32_t x296 = -1;
static volatile int32_t t71 = -2;
static uint32_t x298 = 607411U;
int8_t x305 = INT8_MIN;
int8_t x306 = 1;
uint16_t x309 = UINT16_MAX;
static int64_t x310 = -1LL;
static uint64_t x324 = 1002LLU;
static uint16_t x325 = UINT16_MAX;
int64_t x326 = INT64_MIN;
static int64_t x329 = -1LL;
int8_t x330 = INT8_MIN;
volatile uint32_t x332 = 109560541U;
int16_t x333 = INT16_MIN;
int64_t x334 = INT64_MAX;
static uint64_t x339 = 2238698790775957121LLU;
int16_t x341 = INT16_MIN;
uint16_t x345 = 1U;
static int16_t x350 = INT16_MIN;
static int8_t x353 = INT8_MIN;
volatile int8_t x354 = INT8_MIN;
int8_t x356 = -1;
static volatile uint16_t x366 = 2U;
int64_t x367 = -630630191LL;
volatile int64_t t89 = -1351LL;
volatile int32_t t91 = -997738;
int32_t x380 = INT32_MIN;
int32_t t93 = -887;
int8_t x386 = 18;
volatile int32_t t94 = 1;
int8_t x392 = -7;
int64_t x399 = -3378370280841732508LL;
static int8_t x402 = INT8_MIN;
uint32_t x404 = 6936U;
static uint8_t x408 = 1U;


void f0(void) {
	volatile int8_t x1 = 11;
	volatile int8_t x2 = INT8_MAX;
	volatile int32_t x3 = -1;
	static int32_t x4 = 102;
	volatile int32_t t0 = -3;

	t0 = (((x1/x2)==x3)|x4);

	if (t0 != 102) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int64_t t1 = -1LL;

	t1 = (((x5/x6)==x7)|x8);

	if (t1 != -101343LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 324U;
	static uint8_t x10 = 126U;
	int8_t x11 = INT8_MAX;
	volatile int32_t t2 = INT32_MIN;

	t2 = (((x9/x10)==x11)|x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = 15409253014343LLU;
	volatile int32_t t3 = 1144;

	t3 = (((x13/x14)==x15)|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MAX;
	int32_t x19 = INT32_MAX;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 9974;

	t4 = (((x17/x18)==x19)|x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 13599U;
	int8_t x23 = INT8_MIN;
	uint64_t x24 = UINT64_MAX;

	t5 = (((x21/x22)==x23)|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 22546U;
	uint8_t x26 = UINT8_MAX;
	volatile int8_t x27 = -1;
	static int32_t x28 = -1;

	t6 = (((x25/x26)==x27)|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = -12259731;
	static uint8_t x32 = UINT8_MAX;
	static int32_t t7 = 186439;

	t7 = (((x29/x30)==x31)|x32);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MAX;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = -14;
	volatile int32_t t8 = -13978;

	t8 = (((x33/x34)==x35)|x36);

	if (t8 != -14) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int64_t x38 = -1LL;
	static uint16_t x39 = 2U;
	uint8_t x40 = 10U;

	t9 = (((x37/x38)==x39)|x40);

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = -7113868;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = 1;
	volatile int32_t t10 = -26178;

	t10 = (((x41/x42)==x43)|x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x48 = -1;
	int32_t t11 = 190973699;

	t11 = (((x45/x46)==x47)|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MAX;

	t12 = (((x49/x50)==x51)|x52);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 3U;
	static int8_t x55 = -1;
	volatile int16_t x56 = -1;
	static volatile int32_t t13 = -74;

	t13 = (((x53/x54)==x55)|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	volatile int16_t x58 = -1;
	int16_t x59 = INT16_MIN;
	volatile int64_t x60 = -1LL;
	volatile int64_t t14 = 345284249357944635LL;

	t14 = (((x57/x58)==x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MAX;
	volatile int8_t x64 = -1;
	int32_t t15 = -1;

	t15 = (((x61/x62)==x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	uint64_t x66 = 2967497426LLU;
	static int16_t x67 = INT16_MIN;
	uint64_t x68 = 16430504957LLU;

	t16 = (((x65/x66)==x67)|x68);

	if (t16 != 16430504957LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	volatile int32_t t17 = -30173160;

	t17 = (((x69/x70)==x71)|x72);

	if (t17 != -55) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -5190;
	static volatile uint32_t x76 = 445U;

	t18 = (((x73/x74)==x75)|x76);

	if (t18 != 445U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int32_t x78 = -1;
	int64_t x79 = -1LL;
	uint16_t x80 = 1942U;
	int32_t t19 = -4406157;

	t19 = (((x77/x78)==x79)|x80);

	if (t19 != 1942) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 945819;
	static int64_t x86 = INT64_MIN;
	volatile int32_t t20 = 416;

	t20 = (((x85/x86)==x87)|x88);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	static volatile int16_t x90 = -4206;
	int64_t x91 = -1LL;
	static int32_t x92 = INT32_MIN;
	int32_t t21 = INT32_MIN;

	t21 = (((x89/x90)==x91)|x92);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x93 = 75U;
	static int8_t x94 = INT8_MIN;
	uint32_t x95 = 167779381U;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (((x93/x94)==x95)|x96);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 0U;
	int16_t x98 = -1;
	int32_t t23 = 907;

	t23 = (((x97/x98)==x99)|x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -99350964;
	uint32_t x102 = 78614132U;
	uint8_t x103 = UINT8_MAX;
	int32_t t24 = -26;

	t24 = (((x101/x102)==x103)|x104);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MAX;
	uint64_t x107 = 3182189682170279482LLU;
	uint32_t x108 = 0U;
	volatile uint32_t t25 = 1062160U;

	t25 = (((x105/x106)==x107)|x108);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -5;
	volatile int32_t x111 = -1;
	int8_t x112 = -1;
	int32_t t26 = 114591918;

	t26 = (((x109/x110)==x111)|x112);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MAX;
	uint64_t x116 = 1081LLU;
	uint64_t t27 = 287899LLU;

	t27 = (((x113/x114)==x115)|x116);

	if (t27 != 1081LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	volatile int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	volatile int32_t t28 = 82;

	t28 = (((x117/x118)==x119)|x120);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = 1;
	static int16_t x122 = -1;
	int32_t t29 = -29403319;

	t29 = (((x121/x122)==x123)|x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 3144U;
	int32_t x126 = 143361814;
	uint32_t x127 = UINT32_MAX;
	static uint8_t x128 = 72U;
	volatile int32_t t30 = -65;

	t30 = (((x125/x126)==x127)|x128);

	if (t30 != 72) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = 3991856;
	uint64_t x130 = 1LLU;
	volatile uint64_t x131 = UINT64_MAX;
	int32_t x132 = -19;
	volatile int32_t t31 = -62150416;

	t31 = (((x129/x130)==x131)|x132);

	if (t31 != -19) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int32_t t32 = 174559787;

	t32 = (((x133/x134)==x135)|x136);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int64_t x139 = INT64_MIN;
	int32_t t33 = -187897;

	t33 = (((x137/x138)==x139)|x140);

	if (t33 != 57) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = 1;
	static volatile uint32_t x144 = UINT32_MAX;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (((x141/x142)==x143)|x144);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MAX;
	volatile int16_t x146 = INT16_MIN;
	static volatile int64_t x147 = INT64_MAX;
	int64_t x148 = -1LL;
	int64_t t35 = -1756LL;

	t35 = (((x145/x146)==x147)|x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x150 = UINT32_MAX;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = 1;
	volatile int32_t t36 = 1314;

	t36 = (((x149/x150)==x151)|x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x153 = 0;
	uint16_t x156 = UINT16_MAX;
	int32_t t37 = 91107;

	t37 = (((x153/x154)==x155)|x156);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x157 = INT32_MAX;
	uint16_t x158 = 1001U;
	volatile uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t38 = 1529048;

	t38 = (((x157/x158)==x159)|x160);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x161 = -132;
	int8_t x163 = INT8_MIN;

	t39 = (((x161/x162)==x163)|x164);

	if (t39 != -6LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 3;
	volatile uint16_t x166 = UINT16_MAX;
	static volatile int64_t x167 = 125LL;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = 122;

	t40 = (((x165/x166)==x167)|x168);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 1275U;
	int8_t x170 = 23;
	uint8_t x172 = 79U;
	int32_t t41 = 3;

	t41 = (((x169/x170)==x171)|x172);

	if (t41 != 79) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x173 = -1LL;
	int16_t x174 = INT16_MIN;
	int64_t x176 = 9699LL;
	volatile int64_t t42 = -311386223173023019LL;

	t42 = (((x173/x174)==x175)|x176);

	if (t42 != 9699LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 24661758190934LLU;
	static int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MIN;
	volatile int32_t x180 = -1;
	int32_t t43 = 28932;

	t43 = (((x177/x178)==x179)|x180);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 148LLU;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = INT8_MIN;
	uint64_t x184 = 1LLU;

	t44 = (((x181/x182)==x183)|x184);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 0;
	int16_t x186 = INT16_MIN;
	volatile int8_t x187 = -1;
	int64_t x188 = -317LL;
	volatile int64_t t45 = 388LL;

	t45 = (((x185/x186)==x187)|x188);

	if (t45 != -317LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x193 = UINT8_MAX;
	int32_t x194 = 1;
	static uint8_t x195 = 18U;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t46 = UINT64_MAX;

	t46 = (((x193/x194)==x195)|x196);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x198 = UINT64_MAX;
	volatile uint32_t x199 = UINT32_MAX;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x197/x198)==x199)|x200);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x201 = 8;
	static int8_t x202 = INT8_MIN;
	static int64_t x203 = INT64_MIN;
	uint64_t x204 = 107549532745LLU;
	static volatile uint64_t t48 = 23472454791LLU;

	t48 = (((x201/x202)==x203)|x204);

	if (t48 != 107549532745LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x206 = 11355817574LLU;
	static uint16_t x207 = 0U;
	uint32_t x208 = 25U;
	uint32_t t49 = 380U;

	t49 = (((x205/x206)==x207)|x208);

	if (t49 != 25U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 126LLU;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = 5;
	static volatile int32_t t50 = 1616298;

	t50 = (((x209/x210)==x211)|x212);

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 10;
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (((x213/x214)==x215)|x216);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x217 = 0LLU;
	static uint8_t x218 = 5U;
	int16_t x219 = INT16_MIN;
	int32_t t52 = 23;

	t52 = (((x217/x218)==x219)|x220);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MAX;
	int64_t x222 = -1LL;
	volatile int64_t x223 = -1LL;
	static volatile int64_t x224 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

	t53 = (((x221/x222)==x223)|x224);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x226 = INT16_MIN;
	int64_t x227 = INT64_MAX;
	int32_t t54 = 66337152;

	t54 = (((x225/x226)==x227)|x228);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	static int64_t x231 = INT64_MIN;
	uint64_t t55 = 224226148LLU;

	t55 = (((x229/x230)==x231)|x232);

	if (t55 != 12815661373843135LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 36U;
	int16_t x234 = -1;
	uint32_t x235 = 18517U;
	volatile int32_t x236 = -1;

	t56 = (((x233/x234)==x235)|x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 1U;
	uint64_t x238 = UINT64_MAX;
	static int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	volatile int32_t t57 = -11;

	t57 = (((x237/x238)==x239)|x240);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MAX;
	static uint16_t x242 = 15017U;
	volatile int16_t x243 = INT16_MIN;
	volatile uint16_t x244 = 0U;
	volatile int32_t t58 = 5046629;

	t58 = (((x241/x242)==x243)|x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x246 = 595U;
	static volatile int64_t x247 = INT64_MAX;
	volatile int32_t t59 = -355140075;

	t59 = (((x245/x246)==x247)|x248);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t60 = 22525LL;

	t60 = (((x249/x250)==x251)|x252);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	volatile uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 17943U;

	t61 = (((x253/x254)==x255)|x256);

	if (t61 != 17943) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x258 = 11523LL;
	static int16_t x259 = 1921;
	uint8_t x260 = 9U;
	int32_t t62 = -1175538;

	t62 = (((x257/x258)==x259)|x260);

	if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	static uint64_t x264 = 0LLU;
	volatile uint64_t t63 = 27656311299LLU;

	t63 = (((x261/x262)==x263)|x264);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x266 = -2;
	static volatile int32_t t64 = 36660793;

	t64 = (((x265/x266)==x267)|x268);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -4;
	int16_t x271 = INT16_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t65 = -62110268;

	t65 = (((x269/x270)==x271)|x272);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x273 = 20U;
	uint32_t x274 = 47411U;
	uint32_t x276 = 115U;

	t66 = (((x273/x274)==x275)|x276);

	if (t66 != 115U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x279 = 21LL;
	int16_t x280 = -1;
	int32_t t67 = 2562178;

	t67 = (((x277/x278)==x279)|x280);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = -996;
	volatile uint8_t x283 = UINT8_MAX;
	uint64_t x284 = 48549497484292LLU;
	volatile uint64_t t68 = 24025534663479938LLU;

	t68 = (((x281/x282)==x283)|x284);

	if (t68 != 48549497484292LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = -896846;
	static int64_t x287 = -3728894028404LL;
	int16_t x288 = -7510;
	volatile int32_t t69 = 36965;

	t69 = (((x285/x286)==x287)|x288);

	if (t69 != -7510) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -42717105131LL;
	volatile uint32_t x290 = 1710172443U;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t70 = INT64_MIN;

	t70 = (((x289/x290)==x291)|x292);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x294 = -5054080LL;
	int32_t x295 = -1;

	t71 = (((x293/x294)==x295)|x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	static volatile int8_t x300 = -1;
	volatile int32_t t72 = -6421;

	t72 = (((x297/x298)==x299)|x300);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -1LL;
	uint16_t x302 = 46U;
	uint32_t x303 = 32U;
	static int16_t x304 = -1;
	int32_t t73 = -232376224;

	t73 = (((x301/x302)==x303)|x304);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t74 = INT64_MIN;

	t74 = (((x305/x306)==x307)|x308);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x311 = 38U;
	int8_t x312 = INT8_MAX;
	volatile int32_t t75 = -300076576;

	t75 = (((x309/x310)==x311)|x312);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = -386;
	uint32_t x314 = 5858904U;
	volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = INT32_MAX;
	int32_t t76 = INT32_MAX;

	t76 = (((x313/x314)==x315)|x316);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -60;
	int16_t x318 = -3;
	uint32_t x319 = 1411931470U;
	int16_t x320 = 13935;
	int32_t t77 = -209719;

	t77 = (((x317/x318)==x319)|x320);

	if (t77 != 13935) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 11;
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	uint64_t t78 = 27625042761174632LLU;

	t78 = (((x321/x322)==x323)|x324);

	if (t78 != 1002LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x327 = -1;
	int64_t x328 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (((x325/x326)==x327)|x328);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x331 = 248U;
	static uint32_t t80 = 1U;

	t80 = (((x329/x330)==x331)|x332);

	if (t80 != 109560541U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x335 = 19;
	uint64_t x336 = 1LLU;
	uint64_t t81 = 2115634343903511LLU;

	t81 = (((x333/x334)==x335)|x336);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = 45017;
	uint8_t x340 = 114U;
	int32_t t82 = -2;

	t82 = (((x337/x338)==x339)|x340);

	if (t82 != 114) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x342 = 240236U;
	int16_t x343 = -1;
	uint8_t x344 = 1U;
	int32_t t83 = 3846;

	t83 = (((x341/x342)==x343)|x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x346 = -55714;
	static int16_t x347 = INT16_MIN;
	int8_t x348 = -14;
	int32_t t84 = 742;

	t84 = (((x345/x346)==x347)|x348);

	if (t84 != -14) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 522470751075703575LLU;
	uint64_t x351 = 4409LLU;
	static int32_t x352 = -1;
	static volatile int32_t t85 = 226197;

	t85 = (((x349/x350)==x351)|x352);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x355 = -1041021LL;
	volatile int32_t t86 = -1350729;

	t86 = (((x353/x354)==x355)|x356);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -288;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = -3;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (((x357/x358)==x359)|x360);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	static uint8_t x363 = 0U;
	volatile uint8_t x364 = 1U;
	int32_t t88 = 1;

	t88 = (((x361/x362)==x363)|x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x368 = -3LL;

	t89 = (((x365/x366)==x367)|x368);

	if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MAX;
	static int8_t x370 = INT8_MIN;
	int32_t x371 = -1;
	volatile int32_t x372 = INT32_MAX;
	int32_t t90 = INT32_MAX;

	t90 = (((x369/x370)==x371)|x372);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x373 = 2U;
	int32_t x374 = -1;
	uint8_t x375 = 0U;
	uint16_t x376 = 7U;

	t91 = (((x373/x374)==x375)|x376);

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MIN;
	int8_t x379 = 1;
	static volatile int32_t t92 = INT32_MIN;

	t92 = (((x377/x378)==x379)|x380);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 2723U;
	volatile int8_t x382 = 16;
	volatile uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MIN;

	t93 = (((x381/x382)==x383)|x384);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = 236;
	uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 835U;

	t94 = (((x385/x386)==x387)|x388);

	if (t94 != 835) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = -1;
	volatile int32_t x390 = -1;
	uint8_t x391 = UINT8_MAX;
	static int32_t t95 = 30839249;

	t95 = (((x389/x390)==x391)|x392);

	if (t95 != -7) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x393 = INT16_MAX;
	int8_t x394 = INT8_MIN;
	uint16_t x395 = UINT16_MAX;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t96 = -52821;

	t96 = (((x393/x394)==x395)|x396);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MIN;
	static uint16_t x398 = 20360U;
	volatile uint32_t x400 = 125845U;
	static uint32_t t97 = 88U;

	t97 = (((x397/x398)==x399)|x400);

	if (t97 != 125845U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MIN;
	uint64_t x403 = 5067LLU;
	static uint32_t t98 = 2485156U;

	t98 = (((x401/x402)==x403)|x404);

	if (t98 != 6936U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MAX;
	int16_t x406 = INT16_MIN;
	static int64_t x407 = INT64_MIN;
	int32_t t99 = -50062;

	t99 = (((x405/x406)==x407)|x408);

	if (t99 != 1) { NG(); } else { ; }
	
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

