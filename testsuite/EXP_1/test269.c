#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static int16_t x4 = INT16_MIN;
int32_t t0 = -993;
static int16_t x8 = INT16_MIN;
int32_t x23 = INT32_MIN;
uint8_t x27 = 49U;
int32_t x30 = INT32_MIN;
volatile uint8_t x31 = UINT8_MAX;
int32_t t6 = 6051726;
volatile int64_t x35 = -1875416099LL;
int32_t x39 = INT32_MIN;
int8_t x41 = 0;
static uint64_t x44 = UINT64_MAX;
volatile int32_t t10 = -6;
int32_t x57 = -385670;
static uint16_t x62 = 1690U;
volatile int32_t t13 = 1;
volatile uint32_t x66 = UINT32_MAX;
volatile int32_t x68 = -1;
volatile int32_t t14 = 183;
uint8_t x69 = 0U;
int32_t t15 = -13208595;
volatile uint16_t x75 = 1048U;
uint64_t x76 = 398663LLU;
static uint16_t x77 = UINT16_MAX;
volatile uint32_t x83 = 54U;
uint8_t x86 = UINT8_MAX;
static int16_t x88 = INT16_MAX;
volatile int16_t x96 = 68;
static int8_t x98 = INT8_MAX;
int8_t x106 = -1;
int16_t x112 = 767;
uint8_t x114 = 120U;
int32_t x122 = 1;
static int16_t x124 = INT16_MIN;
int8_t x131 = 0;
int32_t x137 = INT32_MAX;
volatile int32_t t30 = -18518;
int8_t x146 = INT8_MAX;
int8_t x149 = INT8_MIN;
uint8_t x150 = UINT8_MAX;
int32_t x158 = -1;
int8_t x163 = 22;
uint32_t x164 = UINT32_MAX;
volatile int32_t t36 = -9047;
uint8_t x165 = 5U;
int64_t x172 = INT64_MIN;
volatile int32_t t38 = 38;
int64_t x178 = INT64_MIN;
uint16_t x182 = UINT16_MAX;
volatile uint16_t x191 = UINT16_MAX;
uint32_t x200 = 1522191U;
int16_t x201 = INT16_MIN;
uint32_t x208 = 5U;
int32_t t46 = -45;
static int32_t x210 = 162;
static volatile int16_t x217 = INT16_MAX;
int32_t x221 = -131912722;
int8_t x233 = -1;
int8_t x240 = INT8_MAX;
int16_t x247 = INT16_MIN;
int32_t x251 = INT32_MIN;
uint16_t x255 = UINT16_MAX;
int16_t x256 = INT16_MAX;
int8_t x257 = INT8_MAX;
uint32_t x278 = 461776005U;
volatile int32_t x279 = -1;
int32_t t60 = 3;
int16_t x285 = INT16_MIN;
static uint32_t x287 = 0U;
static volatile uint16_t x289 = 27217U;
int8_t x293 = INT8_MAX;
uint32_t x294 = 4073U;
int32_t x299 = -1;
uint8_t x300 = UINT8_MAX;
int64_t x314 = INT64_MAX;
static volatile int64_t x319 = INT64_MAX;
int32_t x320 = INT32_MAX;
volatile int64_t x321 = -1LL;
int64_t x322 = 1952715401432LL;
uint32_t x323 = UINT32_MAX;
uint32_t x327 = UINT32_MAX;
int8_t x329 = 31;
int64_t x330 = INT64_MAX;
int8_t x331 = INT8_MIN;
static int16_t x340 = 0;
int32_t t74 = -22;
int8_t x342 = INT8_MIN;
int64_t x344 = INT64_MAX;
volatile int64_t x352 = 5955365665812LL;
int32_t t77 = 53769505;
int8_t x364 = -14;
static volatile int32_t t79 = 54099705;
int8_t x367 = -1;
uint64_t x368 = UINT64_MAX;
int32_t t80 = 340;
volatile int32_t t81 = -478;
int16_t x374 = -1;
volatile int32_t t82 = 607;
int64_t x378 = -1LL;
static int8_t x382 = INT8_MIN;
int32_t t84 = -200504;
int8_t x390 = INT8_MAX;
static int8_t x392 = INT8_MAX;
int32_t t86 = 20907;
uint64_t x409 = UINT64_MAX;
volatile int64_t x411 = 794046LL;
uint16_t x412 = UINT16_MAX;
int16_t x413 = -1;
int32_t x414 = INT32_MIN;
int16_t x421 = INT16_MAX;
static int8_t x424 = 1;
int16_t x425 = INT16_MIN;
int16_t x434 = 1;
static uint32_t x442 = 27U;
int16_t x444 = 2048;
int32_t x445 = INT32_MAX;
volatile uint16_t x451 = 13U;
uint8_t x454 = 5U;
uint64_t x456 = 11546763230960LLU;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;

	t0 = (((x1-x2)==x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	static volatile int32_t t1 = 8;

	t1 = (((x5-x6)==x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	volatile int64_t x14 = -17054180952LL;
	int16_t x15 = -2030;
	uint8_t x16 = UINT8_MAX;
	int32_t t2 = 92851212;

	t2 = (((x13-x14)==x15)<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MAX;
	int8_t x18 = 17;
	int32_t x19 = 249;
	uint16_t x20 = 2726U;
	static volatile int32_t t3 = 81340;

	t3 = (((x17-x18)==x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 2261;
	int16_t x22 = -6515;
	int32_t x24 = 11350251;
	int32_t t4 = 6;

	t4 = (((x21-x22)==x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MIN;
	uint64_t x26 = UINT64_MAX;
	uint8_t x28 = 3U;
	volatile int32_t t5 = 1;

	t5 = (((x25-x26)==x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -12799;
	static uint8_t x32 = 0U;

	t6 = (((x29-x30)==x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static uint8_t x34 = 10U;
	int64_t x36 = INT64_MIN;
	volatile int32_t t7 = -263;

	t7 = (((x33-x34)==x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x38 = 162977517758171LL;
	int64_t x40 = INT64_MIN;
	volatile int32_t t8 = 3450;

	t8 = (((x37-x38)==x39)<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 68U;
	int32_t x43 = 4199;
	volatile int32_t t9 = -30565;

	t9 = (((x41-x42)==x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	static int8_t x50 = -1;
	volatile int32_t x51 = INT32_MAX;
	uint32_t x52 = 22U;

	t10 = (((x49-x50)==x51)<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x54 = -158380;
	uint16_t x55 = 1036U;
	volatile int32_t x56 = INT32_MAX;
	int32_t t11 = -110;

	t11 = (((x53-x54)==x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = INT16_MAX;
	static uint8_t x59 = 0U;
	static int8_t x60 = -16;
	int32_t t12 = -105;

	t12 = (((x57-x58)==x59)<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -217177453LL;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;

	t13 = (((x61-x62)==x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = UINT16_MAX;
	uint32_t x67 = 372U;

	t14 = (((x65-x66)==x67)<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MAX;
	static volatile int8_t x71 = -1;
	int32_t x72 = -95;

	t15 = (((x69-x70)==x71)<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	int32_t t16 = -2;

	t16 = (((x73-x74)==x75)<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = -1;
	uint8_t x79 = 0U;
	int32_t x80 = -1;
	int32_t t17 = 246;

	t17 = (((x77-x78)==x79)<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = 76U;
	int8_t x84 = -46;
	volatile int32_t t18 = -9;

	t18 = (((x81-x82)==x83)<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = 187516427LL;
	int8_t x87 = -17;
	volatile int32_t t19 = 1;

	t19 = (((x85-x86)==x87)<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 76U;
	uint64_t x94 = 624734674LLU;
	static int16_t x95 = INT16_MAX;
	int32_t t20 = 358968;

	t20 = (((x93-x94)==x95)<x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x97 = UINT8_MAX;
	static int16_t x99 = -1;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t21 = 0;

	t21 = (((x97-x98)==x99)<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MAX;
	int64_t x103 = 14151LL;
	int8_t x104 = INT8_MAX;
	int32_t t22 = -24;

	t22 = (((x101-x102)==x103)<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x107 = -25;
	int64_t x108 = INT64_MAX;
	int32_t t23 = 0;

	t23 = (((x105-x106)==x107)<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = 0;
	static volatile int64_t x111 = INT64_MAX;
	volatile int32_t t24 = -403;

	t24 = (((x109-x110)==x111)<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = UINT8_MAX;
	static int8_t x115 = INT8_MIN;
	uint16_t x116 = 8036U;
	int32_t t25 = -23786;

	t25 = (((x113-x114)==x115)<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MIN;
	int8_t x118 = -1;
	uint8_t x119 = 3U;
	volatile int16_t x120 = 0;
	int32_t t26 = 9;

	t26 = (((x117-x118)==x119)<x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x121 = 9U;
	static volatile uint64_t x123 = 822856LLU;
	static volatile int32_t t27 = 68;

	t27 = (((x121-x122)==x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	volatile int16_t x132 = 7;
	volatile int32_t t28 = 1;

	t28 = (((x129-x130)==x131)<x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	volatile int8_t x134 = 0;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -956958813;
	volatile int32_t t29 = 1;

	t29 = (((x133-x134)==x135)<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x138 = 73LL;
	volatile uint32_t x139 = UINT32_MAX;
	volatile uint32_t x140 = 290U;

	t30 = (((x137-x138)==x139)<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = 13;
	volatile int16_t x142 = -297;
	static uint8_t x143 = 14U;
	uint16_t x144 = 30U;
	volatile int32_t t31 = -15935944;

	t31 = (((x141-x142)==x143)<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x145 = 0;
	uint8_t x147 = 2U;
	uint16_t x148 = 0U;
	volatile int32_t t32 = 62082;

	t32 = (((x145-x146)==x147)<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x151 = -115LL;
	int16_t x152 = -11652;
	volatile int32_t t33 = 951959;

	t33 = (((x149-x150)==x151)<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 0U;
	static uint16_t x154 = 206U;
	static volatile int32_t x155 = INT32_MIN;
	uint64_t x156 = 98522924691030LLU;
	volatile int32_t t34 = 714;

	t34 = (((x153-x154)==x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = -55791669249126930LL;
	uint16_t x159 = 21U;
	volatile uint32_t x160 = UINT32_MAX;
	int32_t t35 = 4367991;

	t35 = (((x157-x158)==x159)<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -649;
	int8_t x162 = 3;

	t36 = (((x161-x162)==x163)<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = 56;
	int32_t x167 = INT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	int32_t t37 = -57393;

	t37 = (((x165-x166)==x167)<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 3U;
	static int32_t x170 = -1;
	static int64_t x171 = 0LL;

	t38 = (((x169-x170)==x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 2261U;
	volatile int32_t t39 = -4;

	t39 = (((x177-x178)==x179)<x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -131631528;
	uint32_t x183 = UINT32_MAX;
	static uint64_t x184 = 9439391994695658LLU;
	volatile int32_t t40 = 134;

	t40 = (((x181-x182)==x183)<x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x185 = 3LLU;
	static int8_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = 115LL;
	volatile int32_t t41 = 19078;

	t41 = (((x185-x186)==x187)<x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	volatile int32_t x190 = INT32_MIN;
	int64_t x192 = 65195266341822LL;
	volatile int32_t t42 = 3;

	t42 = (((x189-x190)==x191)<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 62U;
	uint8_t x194 = 4U;
	static int16_t x195 = 8;
	volatile int64_t x196 = -3192674835LL;
	int32_t t43 = 3;

	t43 = (((x193-x194)==x195)<x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 46;
	volatile int8_t x198 = 7;
	uint16_t x199 = UINT16_MAX;
	static int32_t t44 = 19;

	t44 = (((x197-x198)==x199)<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x202 = UINT32_MAX;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 0;
	static int32_t t45 = -308;

	t45 = (((x201-x202)==x203)<x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = -1;
	volatile uint32_t x206 = 135473U;
	int64_t x207 = INT64_MIN;

	t46 = (((x205-x206)==x207)<x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	static int16_t x211 = 6790;
	int64_t x212 = -1LL;
	static int32_t t47 = 28425821;

	t47 = (((x209-x210)==x211)<x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MAX;
	static volatile int32_t x214 = 63931;
	uint64_t x215 = 789135271540LLU;
	uint64_t x216 = 3362643408LLU;
	volatile int32_t t48 = 941;

	t48 = (((x213-x214)==x215)<x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x218 = INT8_MIN;
	int32_t x219 = -1;
	uint32_t x220 = 7U;
	static int32_t t49 = -229418656;

	t49 = (((x217-x218)==x219)<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x222 = -1;
	int64_t x223 = -1LL;
	static uint64_t x224 = 128528LLU;
	volatile int32_t t50 = -761;

	t50 = (((x221-x222)==x223)<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x234 = INT8_MIN;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = -1;
	volatile int32_t t51 = 22494;

	t51 = (((x233-x234)==x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	static int32_t t52 = 0;

	t52 = (((x237-x238)==x239)<x240);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x245 = 595U;
	int32_t x246 = -1;
	int32_t x248 = 221148011;
	static volatile int32_t t53 = -55;

	t53 = (((x245-x246)==x247)<x248);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = -3090;
	static uint64_t x250 = UINT64_MAX;
	static uint32_t x252 = 9U;
	static int32_t t54 = -200367501;

	t54 = (((x249-x250)==x251)<x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = -1;
	volatile uint16_t x254 = 234U;
	volatile int32_t t55 = -9655;

	t55 = (((x253-x254)==x255)<x256);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x258 = -1;
	int64_t x259 = -69035070945909LL;
	static int64_t x260 = -4122661425LL;
	int32_t t56 = -57;

	t56 = (((x257-x258)==x259)<x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = -6;
	volatile uint32_t x262 = 863288U;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = -1;
	int32_t t57 = 31419;

	t57 = (((x261-x262)==x263)<x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x265 = 15539090747LL;
	int8_t x266 = INT8_MIN;
	uint8_t x267 = UINT8_MAX;
	volatile int8_t x268 = -2;
	static volatile int32_t t58 = -16354;

	t58 = (((x265-x266)==x267)<x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = INT16_MIN;
	static int16_t x270 = 579;
	volatile int64_t x271 = -1LL;
	volatile int8_t x272 = INT8_MIN;
	static int32_t t59 = 35078;

	t59 = (((x269-x270)==x271)<x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = INT16_MIN;
	int16_t x280 = -1;

	t60 = (((x277-x278)==x279)<x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = 9249LLU;
	static uint32_t x282 = 2302274U;
	int64_t x283 = INT64_MIN;
	volatile int16_t x284 = 513;
	volatile int32_t t61 = -54376355;

	t61 = (((x281-x282)==x283)<x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x286 = 77U;
	static uint16_t x288 = 37U;
	volatile int32_t t62 = 0;

	t62 = (((x285-x286)==x287)<x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x290 = 1;
	int32_t x291 = INT32_MAX;
	int8_t x292 = -4;
	volatile int32_t t63 = 263996168;

	t63 = (((x289-x290)==x291)<x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x295 = -1;
	static int64_t x296 = -1LL;
	volatile int32_t t64 = -955;

	t64 = (((x293-x294)==x295)<x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x297 = 83807872291LLU;
	int64_t x298 = -1LL;
	int32_t t65 = -1074831;

	t65 = (((x297-x298)==x299)<x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = UINT8_MAX;
	uint16_t x302 = UINT16_MAX;
	uint16_t x303 = 0U;
	int16_t x304 = -1;
	int32_t t66 = 175532;

	t66 = (((x301-x302)==x303)<x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	uint8_t x308 = 0U;
	volatile int32_t t67 = -6530;

	t67 = (((x305-x306)==x307)<x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x313 = 53U;
	int64_t x315 = -1LL;
	int32_t x316 = 12;
	static int32_t t68 = -646462;

	t68 = (((x313-x314)==x315)<x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = 13;
	static int64_t x318 = INT64_MAX;
	volatile int32_t t69 = -10;

	t69 = (((x317-x318)==x319)<x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x324 = 0;
	static volatile int32_t t70 = -5;

	t70 = (((x321-x322)==x323)<x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x325 = 1U;
	volatile uint8_t x326 = 60U;
	static int32_t x328 = -1;
	int32_t t71 = 12923355;

	t71 = (((x325-x326)==x327)<x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x332 = INT8_MAX;
	int32_t t72 = 1;

	t72 = (((x329-x330)==x331)<x332);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x333 = INT8_MAX;
	int32_t x334 = -8420159;
	volatile int64_t x335 = -1LL;
	int32_t x336 = INT32_MAX;
	volatile int32_t t73 = -47054348;

	t73 = (((x333-x334)==x335)<x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x337 = -1;
	int32_t x338 = -2;
	volatile uint8_t x339 = 20U;

	t74 = (((x337-x338)==x339)<x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = 0U;
	uint64_t x343 = UINT64_MAX;
	volatile int32_t t75 = 15874825;

	t75 = (((x341-x342)==x343)<x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x345 = INT16_MAX;
	static volatile uint64_t x346 = 2460139605LLU;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t76 = -1;

	t76 = (((x345-x346)==x347)<x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = 4;
	int8_t x350 = -1;
	int64_t x351 = -1LL;

	t77 = (((x349-x350)==x351)<x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x353 = 94442LLU;
	volatile int16_t x354 = INT16_MIN;
	static uint32_t x355 = 3942U;
	int8_t x356 = INT8_MAX;
	static volatile int32_t t78 = 79198;

	t78 = (((x353-x354)==x355)<x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x361 = 0;
	uint32_t x362 = 13210U;
	int16_t x363 = -1;

	t79 = (((x361-x362)==x363)<x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = 6;
	volatile int8_t x366 = INT8_MAX;

	t80 = (((x365-x366)==x367)<x368);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x369 = UINT32_MAX;
	int8_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;

	t81 = (((x369-x370)==x371)<x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x373 = 217;
	uint32_t x375 = 3U;
	uint64_t x376 = 215942LLU;

	t82 = (((x373-x374)==x375)<x376);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x377 = 12U;
	int16_t x379 = INT16_MIN;
	static volatile int16_t x380 = 301;
	volatile int32_t t83 = -7772;

	t83 = (((x377-x378)==x379)<x380);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;

	t84 = (((x381-x382)==x383)<x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x385 = 91U;
	uint16_t x386 = 5230U;
	static volatile int16_t x387 = -1;
	uint8_t x388 = 1U;
	static volatile int32_t t85 = 111;

	t85 = (((x385-x386)==x387)<x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x389 = INT32_MAX;
	volatile int64_t x391 = INT64_MAX;

	t86 = (((x389-x390)==x391)<x392);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MIN;
	volatile int16_t x394 = -1;
	int64_t x395 = -185863LL;
	volatile uint64_t x396 = 15154594LLU;
	int32_t t87 = 39;

	t87 = (((x393-x394)==x395)<x396);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x397 = 276638033958613440LLU;
	int16_t x398 = 0;
	static volatile uint8_t x399 = 5U;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t88 = -6448;

	t88 = (((x397-x398)==x399)<x400);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x410 = 3U;
	static volatile int32_t t89 = 32;

	t89 = (((x409-x410)==x411)<x412);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x415 = INT8_MAX;
	int8_t x416 = -1;
	volatile int32_t t90 = 58200413;

	t90 = (((x413-x414)==x415)<x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x422 = UINT64_MAX;
	uint16_t x423 = UINT16_MAX;
	volatile int32_t t91 = 2352;

	t91 = (((x421-x422)==x423)<x424);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x426 = -1LL;
	int16_t x427 = INT16_MIN;
	volatile int64_t x428 = -1762432917063156497LL;
	int32_t t92 = 1247;

	t92 = (((x425-x426)==x427)<x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MAX;
	uint16_t x430 = 1U;
	uint8_t x431 = 0U;
	volatile uint16_t x432 = UINT16_MAX;
	int32_t t93 = 0;

	t93 = (((x429-x430)==x431)<x432);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	uint32_t x435 = 562U;
	int32_t x436 = INT32_MAX;
	volatile int32_t t94 = -6;

	t94 = (((x433-x434)==x435)<x436);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MAX;
	static uint64_t x438 = 90367794LLU;
	int32_t x439 = -31;
	volatile int8_t x440 = 5;
	static int32_t t95 = -13366769;

	t95 = (((x437-x438)==x439)<x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = UINT16_MAX;
	int16_t x443 = INT16_MAX;
	volatile int32_t t96 = -2051533;

	t96 = (((x441-x442)==x443)<x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x446 = UINT64_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile uint32_t x448 = 525216256U;
	static int32_t t97 = 1;

	t97 = (((x445-x446)==x447)<x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x449 = INT8_MIN;
	int32_t x450 = -1;
	int8_t x452 = 0;
	int32_t t98 = -43085;

	t98 = (((x449-x450)==x451)<x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x453 = INT8_MAX;
	static volatile int64_t x455 = INT64_MAX;
	int32_t t99 = 3920;

	t99 = (((x453-x454)==x455)<x456);

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

