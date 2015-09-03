#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int64_t x4 = -1507365309726LL;
uint8_t x9 = 0U;
int64_t x25 = 2680LL;
uint64_t x27 = UINT64_MAX;
volatile int32_t x45 = 1681;
volatile int8_t x48 = -1;
static int32_t x52 = INT32_MIN;
volatile int32_t t9 = INT32_MIN;
volatile uint16_t x53 = UINT16_MAX;
int32_t x67 = 0;
int64_t x90 = -1LL;
static volatile int32_t t18 = INT32_MAX;
int8_t x95 = INT8_MIN;
uint16_t x96 = 609U;
int32_t x100 = INT32_MAX;
int8_t x105 = INT8_MIN;
int64_t x106 = -1256LL;
volatile int64_t x114 = 11LL;
int32_t x119 = 269;
uint8_t x121 = UINT8_MAX;
int64_t x124 = 1257696282LL;
volatile int64_t t25 = -14045872288720LL;
volatile uint8_t x133 = UINT8_MAX;
uint32_t x134 = 700731214U;
uint64_t x136 = 3833LLU;
static volatile uint64_t t28 = UINT64_MAX;
int32_t x144 = INT32_MIN;
int32_t t29 = -116;
volatile int32_t t30 = -3565739;
static int64_t t35 = 288LL;
int8_t x187 = INT8_MIN;
int32_t x191 = -1;
static int8_t x193 = INT8_MIN;
static volatile int16_t x203 = INT16_MIN;
volatile uint8_t x205 = 0U;
volatile int32_t t44 = -1487493;
static int8_t x213 = 41;
int32_t t46 = -3529;
int32_t x220 = 1;
uint32_t x227 = UINT32_MAX;
int16_t x229 = INT16_MIN;
int8_t x231 = -4;
volatile int32_t t50 = -27;
int64_t x239 = -1LL;
uint16_t x246 = 12243U;
static uint64_t x248 = UINT64_MAX;
volatile int8_t x249 = 3;
static int32_t x251 = INT32_MIN;
int64_t x271 = INT64_MIN;
uint8_t x279 = 5U;
int16_t x280 = INT16_MIN;
int16_t x286 = 598;
int16_t x288 = INT16_MIN;
static int32_t t59 = 205392;
static uint64_t x289 = 165488443685946LLU;
uint32_t x294 = 10460082U;
uint32_t x295 = 32064886U;
int64_t x300 = INT64_MAX;
int32_t x310 = INT32_MIN;
static int8_t x312 = INT8_MAX;
int64_t x317 = -1LL;
static int16_t x319 = INT16_MIN;
int8_t x320 = -1;
int16_t x329 = -1;
static int64_t t68 = -6258979605698LL;
volatile uint8_t x337 = 15U;
volatile int64_t x339 = INT64_MAX;
int8_t x346 = INT8_MIN;
int32_t x348 = 0;
int32_t x359 = -1;
volatile int64_t t72 = 122LL;
int16_t x361 = -1;
volatile int32_t t73 = 105;
static int8_t x365 = INT8_MIN;
volatile int64_t t76 = 18LL;
int16_t x386 = INT16_MIN;
int8_t x389 = 2;
int8_t x398 = INT8_MIN;
static int32_t t80 = INT32_MAX;
uint32_t x404 = 13909868U;
int64_t t83 = INT64_MIN;
uint32_t x419 = 659166782U;
int64_t x427 = 3155472LL;
static int32_t t86 = 77186;
uint32_t x429 = 15283U;
static int64_t x430 = -1LL;
uint32_t x441 = 79661914U;
int8_t x444 = -2;
static int32_t x455 = INT32_MIN;
static int8_t x456 = -1;
volatile int32_t t92 = -18212860;
int64_t x476 = 3570282LL;
static int16_t x480 = INT16_MIN;
uint32_t t98 = UINT32_MAX;


void f0(void) {
	volatile int8_t x1 = -1;
	uint32_t x3 = 96271U;
	int64_t t0 = 1451920683LL;

	t0 = (((x1*x2)<=x3)|x4);

	if (t0 != -1507365309725LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x10 = 864932064335333623LL;
	volatile int8_t x11 = INT8_MIN;
	uint16_t x12 = 1U;
	static int32_t t1 = 200;

	t1 = (((x9*x10)<=x11)|x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int32_t x14 = 1;
	int64_t x15 = -1LL;
	int64_t x16 = 82LL;
	volatile int64_t t2 = -9035029163039732LL;

	t2 = (((x13*x14)<=x15)|x16);

	if (t2 != 83LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 1U;
	uint16_t x18 = 16U;
	static uint16_t x19 = 1U;
	static int32_t x20 = INT32_MIN;
	int32_t t3 = INT32_MIN;

	t3 = (((x17*x18)<=x19)|x20);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = UINT64_MAX;
	uint8_t x23 = 2U;
	static volatile int32_t x24 = -1;
	volatile int32_t t4 = -182720;

	t4 = (((x21*x22)<=x23)|x24);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x26 = 31U;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = 6140;

	t5 = (((x25*x26)<=x27)|x28);

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 1U;
	static uint32_t x30 = UINT32_MAX;
	int32_t x31 = 149002;
	int8_t x32 = -9;
	int32_t t6 = -257692487;

	t6 = (((x29*x30)<=x31)|x32);

	if (t6 != -9) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 12U;
	static uint8_t x42 = 0U;
	volatile uint8_t x43 = 2U;
	int8_t x44 = INT8_MAX;
	int32_t t7 = 130686220;

	t7 = (((x41*x42)<=x43)|x44);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x46 = 487U;
	static int32_t x47 = 1009;
	static volatile int32_t t8 = 1043366;

	t8 = (((x45*x46)<=x47)|x48);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 2080U;
	int16_t x50 = INT16_MIN;
	static int64_t x51 = INT64_MIN;

	t9 = (((x49*x50)<=x51)|x52);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x54 = INT8_MIN;
	static int16_t x55 = 1;
	uint8_t x56 = 73U;
	static volatile int32_t t10 = 1650810;

	t10 = (((x53*x54)<=x55)|x56);

	if (t10 != 73) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x61 = 503U;
	int16_t x62 = INT16_MAX;
	static int8_t x63 = -1;
	static volatile int64_t x64 = INT64_MIN;
	volatile int64_t t11 = -93LL;

	t11 = (((x61*x62)<=x63)|x64);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 823419080U;
	int64_t x66 = -1LL;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t12 = -1592;

	t12 = (((x65*x66)<=x67)|x68);

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = -1LL;
	int16_t x70 = -1;
	static uint8_t x71 = 1U;
	static uint64_t x72 = 116962752299238LLU;
	volatile uint64_t t13 = 416LLU;

	t13 = (((x69*x70)<=x71)|x72);

	if (t13 != 116962752299239LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	static uint64_t x74 = UINT64_MAX;
	uint8_t x75 = 17U;
	uint32_t x76 = 133722744U;
	uint32_t t14 = 0U;

	t14 = (((x73*x74)<=x75)|x76);

	if (t14 != 133722744U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = INT32_MIN;
	static int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	int32_t t15 = 77;

	t15 = (((x77*x78)<=x79)|x80);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -1;
	uint32_t x82 = 57378U;
	int32_t x83 = -565398;
	int8_t x84 = INT8_MAX;
	int32_t t16 = -55;

	t16 = (((x81*x82)<=x83)|x84);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	uint32_t x86 = 95U;
	static int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = (((x85*x86)<=x87)|x88);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -3;
	int8_t x91 = 1;
	volatile int32_t x92 = INT32_MAX;

	t18 = (((x89*x90)<=x91)|x92);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 282U;
	volatile int32_t t19 = -30459706;

	t19 = (((x93*x94)<=x95)|x96);

	if (t19 != 609) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = INT32_MAX;
	uint32_t x98 = UINT32_MAX;
	uint16_t x99 = 22U;
	volatile int32_t t20 = INT32_MAX;

	t20 = (((x97*x98)<=x99)|x100);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -324620969LL;
	int32_t x102 = INT32_MIN;
	int8_t x103 = -1;
	volatile int16_t x104 = -1;
	volatile int32_t t21 = -3;

	t21 = (((x101*x102)<=x103)|x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x107 = -5857247472434LL;
	int32_t x108 = INT32_MAX;
	volatile int32_t t22 = INT32_MAX;

	t22 = (((x105*x106)<=x107)|x108);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = -1;
	volatile int16_t x115 = -1875;
	static uint64_t x116 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (((x113*x114)<=x115)|x116);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x117 = 9505146316LLU;
	int64_t x118 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t24 = -300929904;

	t24 = (((x117*x118)<=x119)|x120);

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x122 = 9299LLU;
	int32_t x123 = INT32_MIN;

	t25 = (((x121*x122)<=x123)|x124);

	if (t25 != 1257696283LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = UINT32_MAX;
	int16_t x126 = 2;
	static int64_t x127 = INT64_MAX;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t26 = -747;

	t26 = (((x125*x126)<=x127)|x128);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x135 = 0;
	volatile uint64_t t27 = 14065LLU;

	t27 = (((x133*x134)<=x135)|x136);

	if (t27 != 3833LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 144LLU;
	int32_t x139 = -1;
	uint64_t x140 = UINT64_MAX;

	t28 = (((x137*x138)<=x139)|x140);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -328;
	int32_t x142 = -1;
	uint16_t x143 = 940U;

	t29 = (((x141*x142)<=x143)|x144);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 50U;
	int8_t x146 = 63;
	static volatile uint32_t x147 = 35U;
	static uint8_t x148 = UINT8_MAX;

	t30 = (((x145*x146)<=x147)|x148);

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x155 = 21;
	uint64_t x156 = 1728879450929468LLU;
	volatile uint64_t t31 = 568473241565043LLU;

	t31 = (((x153*x154)<=x155)|x156);

	if (t31 != 1728879450929469LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x157 = INT8_MIN;
	static uint8_t x158 = 65U;
	static int16_t x159 = 1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t32 = -1;

	t32 = (((x157*x158)<=x159)|x160);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = -1;
	static volatile int64_t x162 = 197094481205956LL;
	static int32_t x163 = INT32_MAX;
	static int64_t x164 = INT64_MAX;
	volatile int64_t t33 = INT64_MAX;

	t33 = (((x161*x162)<=x163)|x164);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = UINT8_MAX;
	volatile int64_t x167 = -443852364093LL;
	uint32_t x168 = UINT32_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = (((x165*x166)<=x167)|x168);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x169 = -7LL;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = 15325U;
	int64_t x172 = -255821532LL;

	t35 = (((x169*x170)<=x171)|x172);

	if (t35 != -255821531LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x173 = 1322;
	int64_t x174 = -1LL;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -1LL;
	static int64_t t36 = -3LL;

	t36 = (((x173*x174)<=x175)|x176);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 78982U;
	int32_t x178 = -1;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t x180 = -1;
	int32_t t37 = 2;

	t37 = (((x177*x178)<=x179)|x180);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	volatile int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int8_t x184 = -1;
	int32_t t38 = 2;

	t38 = (((x181*x182)<=x183)|x184);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MIN;
	volatile int16_t x188 = -16180;
	volatile int32_t t39 = -9052073;

	t39 = (((x185*x186)<=x187)|x188);

	if (t39 != -16179) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	volatile int8_t x192 = INT8_MAX;
	int32_t t40 = -1303;

	t40 = (((x189*x190)<=x191)|x192);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = 7;
	int64_t x195 = INT64_MAX;
	int16_t x196 = 170;
	int32_t t41 = -1081416;

	t41 = (((x193*x194)<=x195)|x196);

	if (t41 != 171) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MAX;
	int64_t x198 = -1LL;
	static int8_t x199 = INT8_MIN;
	static uint8_t x200 = 1U;
	volatile int32_t t42 = 25;

	t42 = (((x197*x198)<=x199)|x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = 0LLU;
	int16_t x202 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	static int32_t t43 = -9774;

	t43 = (((x201*x202)<=x203)|x204);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x206 = 833;
	uint8_t x207 = 56U;
	static int16_t x208 = INT16_MIN;

	t44 = (((x205*x206)<=x207)|x208);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 46U;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 15U;
	static int32_t x212 = -48366236;
	volatile int32_t t45 = -17;

	t45 = (((x209*x210)<=x211)|x212);

	if (t45 != -48366236) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x214 = 308;
	static int8_t x215 = -1;
	static uint16_t x216 = UINT16_MAX;

	t46 = (((x213*x214)<=x215)|x216);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MAX;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MAX;
	int32_t t47 = -15903;

	t47 = (((x217*x218)<=x219)|x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x221 = 2087881LLU;
	int16_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = (((x221*x222)<=x223)|x224);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = -219926;
	static volatile uint16_t x226 = 91U;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (((x225*x226)<=x227)|x228);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x230 = 12707;
	static int8_t x232 = INT8_MIN;

	t50 = (((x229*x230)<=x231)|x232);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x237 = -1;
	int16_t x238 = -7;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x237*x238)<=x239)|x240);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MAX;
	int32_t x243 = INT32_MAX;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t52 = -210911301;

	t52 = (((x241*x242)<=x243)|x244);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x245 = -1;
	int32_t x247 = -240751;
	static uint64_t t53 = UINT64_MAX;

	t53 = (((x245*x246)<=x247)|x248);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x250 = 11083109919LLU;
	int8_t x252 = INT8_MIN;
	static int32_t t54 = -3;

	t54 = (((x249*x250)<=x251)|x252);

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x253 = INT16_MIN;
	int16_t x254 = -1;
	volatile uint8_t x255 = 22U;
	int16_t x256 = -3;
	static volatile int32_t t55 = -437760243;

	t55 = (((x253*x254)<=x255)|x256);

	if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x269 = 7U;
	int16_t x270 = INT16_MAX;
	volatile int16_t x272 = INT16_MIN;
	int32_t t56 = 14;

	t56 = (((x269*x270)<=x271)|x272);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = -1;
	int16_t x278 = INT16_MAX;
	int32_t t57 = -464;

	t57 = (((x277*x278)<=x279)|x280);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x281 = UINT8_MAX;
	static int32_t x282 = 6403;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = -1LL;
	volatile int64_t t58 = -85985091215LL;

	t58 = (((x281*x282)<=x283)|x284);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = UINT8_MAX;
	static uint64_t x287 = UINT64_MAX;

	t59 = (((x285*x286)<=x287)|x288);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = 0;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (((x289*x290)<=x291)|x292);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	static volatile int64_t t61 = -3551LL;

	t61 = (((x293*x294)<=x295)|x296);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x297 = 53974650LLU;
	int8_t x298 = -5;
	int32_t x299 = INT32_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (((x297*x298)<=x299)|x300);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = 6LLU;
	int32_t x311 = INT32_MIN;
	int32_t t63 = -201;

	t63 = (((x309*x310)<=x311)|x312);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x318 = 7U;
	int32_t t64 = -285532;

	t64 = (((x317*x318)<=x319)|x320);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x321 = 1210U;
	int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = 44900209U;
	uint32_t t65 = 14U;

	t65 = (((x321*x322)<=x323)|x324);

	if (t65 != 44900209U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x325 = 1336;
	volatile int64_t x326 = -47955818LL;
	int32_t x327 = 465;
	int32_t x328 = INT32_MIN;
	int32_t t66 = -126;

	t66 = (((x325*x326)<=x327)|x328);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x330 = 1U;
	static int64_t x331 = INT64_MAX;
	volatile int32_t x332 = INT32_MAX;
	int32_t t67 = INT32_MAX;

	t67 = (((x329*x330)<=x331)|x332);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x333 = 0;
	uint32_t x334 = UINT32_MAX;
	static int8_t x335 = -1;
	int64_t x336 = INT64_MIN;

	t68 = (((x333*x334)<=x335)|x336);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x338 = 12537U;
	static int32_t x340 = -1;
	int32_t t69 = 1;

	t69 = (((x337*x338)<=x339)|x340);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = INT64_MIN;
	static uint64_t x342 = 5305LLU;
	uint64_t x343 = UINT64_MAX;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t70 = -2;

	t70 = (((x341*x342)<=x343)|x344);

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x345 = UINT64_MAX;
	static int32_t x347 = -1;
	int32_t t71 = 57986132;

	t71 = (((x345*x346)<=x347)|x348);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = -1;
	volatile int64_t x358 = INT64_MAX;
	int64_t x360 = -1LL;

	t72 = (((x357*x358)<=x359)|x360);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x362 = -1;
	static int32_t x363 = INT32_MAX;
	uint16_t x364 = 260U;

	t73 = (((x361*x362)<=x363)|x364);

	if (t73 != 261) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x366 = 306885589174391LLU;
	int32_t x367 = -1;
	int64_t x368 = INT64_MIN;
	static int64_t t74 = -828467701280269LL;

	t74 = (((x365*x366)<=x367)|x368);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = INT16_MIN;
	static uint16_t x370 = UINT16_MAX;
	uint64_t x371 = 96852LLU;
	volatile int64_t x372 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (((x369*x370)<=x371)|x372);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x381 = 1U;
	volatile int32_t x382 = -275027;
	volatile int32_t x383 = INT32_MIN;
	int64_t x384 = -2LL;

	t76 = (((x381*x382)<=x383)|x384);

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = -3;
	uint16_t x387 = UINT16_MAX;
	volatile int64_t x388 = 6382639486LL;
	int64_t t77 = 17391237LL;

	t77 = (((x385*x386)<=x387)|x388);

	if (t77 != 6382639486LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x390 = 2LL;
	int8_t x391 = INT8_MAX;
	uint16_t x392 = 13263U;
	volatile int32_t t78 = -26;

	t78 = (((x389*x390)<=x391)|x392);

	if (t78 != 13263) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x393 = INT64_MIN;
	uint64_t x394 = 199637986LLU;
	uint8_t x395 = 0U;
	int8_t x396 = INT8_MIN;
	static int32_t t79 = -10;

	t79 = (((x393*x394)<=x395)|x396);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x397 = 11935U;
	static volatile int16_t x399 = 17;
	static volatile int32_t x400 = INT32_MAX;

	t80 = (((x397*x398)<=x399)|x400);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x401 = 66569512LLU;
	static int32_t x402 = INT32_MAX;
	uint32_t x403 = 0U;
	volatile uint32_t t81 = 7022U;

	t81 = (((x401*x402)<=x403)|x404);

	if (t81 != 13909868U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MIN;
	int16_t x407 = -1;
	volatile int64_t x408 = INT64_MIN;
	int64_t t82 = 2602LL;

	t82 = (((x405*x406)<=x407)|x408);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x413 = -168;
	volatile int64_t x414 = -14687922890208307LL;
	int32_t x415 = INT32_MAX;
	volatile int64_t x416 = INT64_MIN;

	t83 = (((x413*x414)<=x415)|x416);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = 26;
	static uint16_t x418 = 15U;
	uint32_t x420 = 6U;
	volatile uint32_t t84 = 140217492U;

	t84 = (((x417*x418)<=x419)|x420);

	if (t84 != 7U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x421 = -1;
	volatile int64_t x422 = 1082098975308827964LL;
	uint16_t x423 = 175U;
	uint16_t x424 = 37U;
	volatile int32_t t85 = -501073665;

	t85 = (((x421*x422)<=x423)|x424);

	if (t85 != 37) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x425 = -4;
	uint16_t x426 = UINT16_MAX;
	int16_t x428 = 1;

	t86 = (((x425*x426)<=x427)|x428);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x431 = 452979U;
	volatile uint8_t x432 = 0U;
	static int32_t t87 = 421459;

	t87 = (((x429*x430)<=x431)|x432);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x437 = 198U;
	static int8_t x438 = INT8_MIN;
	static int64_t x439 = INT64_MIN;
	volatile int8_t x440 = -13;
	int32_t t88 = -340384;

	t88 = (((x437*x438)<=x439)|x440);

	if (t88 != -13) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MIN;
	volatile int32_t t89 = -54171;

	t89 = (((x441*x442)<=x443)|x444);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x445 = UINT16_MAX;
	static int32_t x446 = -1;
	uint32_t x447 = 1698098946U;
	int8_t x448 = 0;
	int32_t t90 = 9;

	t90 = (((x445*x446)<=x447)|x448);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x449 = -1;
	int32_t x450 = 33730;
	volatile uint64_t x451 = 4901LLU;
	static uint32_t x452 = 6U;
	uint32_t t91 = 32U;

	t91 = (((x449*x450)<=x451)|x452);

	if (t91 != 6U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x453 = 78U;
	int64_t x454 = -1LL;

	t92 = (((x453*x454)<=x455)|x456);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x457 = INT8_MIN;
	static volatile int8_t x458 = INT8_MIN;
	int16_t x459 = -1;
	static uint32_t x460 = UINT32_MAX;
	uint32_t t93 = UINT32_MAX;

	t93 = (((x457*x458)<=x459)|x460);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = -226000971LL;
	int32_t x462 = INT32_MAX;
	volatile uint32_t x463 = 3U;
	int32_t x464 = INT32_MIN;
	int32_t t94 = -16265;

	t94 = (((x461*x462)<=x463)|x464);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x469 = INT8_MAX;
	uint16_t x470 = UINT16_MAX;
	static int64_t x471 = -1LL;
	static uint8_t x472 = 2U;
	int32_t t95 = -83430;

	t95 = (((x469*x470)<=x471)|x472);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = INT8_MAX;
	static uint16_t x474 = 1437U;
	static int64_t x475 = INT64_MIN;
	volatile int64_t t96 = -17561799849590LL;

	t96 = (((x473*x474)<=x475)|x476);

	if (t96 != 3570282LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x477 = 52;
	int64_t x478 = 58140955LL;
	volatile int64_t x479 = INT64_MIN;
	static int32_t t97 = -2910;

	t97 = (((x477*x478)<=x479)|x480);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x481 = 48U;
	int8_t x482 = INT8_MIN;
	int32_t x483 = 118;
	uint32_t x484 = UINT32_MAX;

	t98 = (((x481*x482)<=x483)|x484);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x489 = -5726LL;
	uint8_t x490 = 126U;
	static uint16_t x491 = 453U;
	int64_t x492 = 13974993791LL;
	static volatile int64_t t99 = -4548073299541LL;

	t99 = (((x489*x490)<=x491)|x492);

	if (t99 != 13974993791LL) { NG(); } else { ; }
	
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

