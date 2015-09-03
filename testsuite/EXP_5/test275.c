#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = 15675065006430949LL;
int8_t x18 = INT8_MIN;
static int8_t x20 = INT8_MIN;
uint32_t t3 = 4U;
static int8_t x43 = INT8_MAX;
static int16_t x46 = -1;
int64_t t7 = -1367296758LL;
int32_t x49 = INT32_MIN;
int32_t x50 = 2365890;
int32_t t8 = INT32_MIN;
volatile uint16_t x60 = 1907U;
int32_t x63 = INT32_MIN;
static int8_t x64 = 54;
volatile uint16_t x65 = UINT16_MAX;
int8_t x66 = INT8_MIN;
int64_t x71 = -1LL;
static int64_t x73 = 257288560LL;
static int32_t x75 = 1;
static int16_t x76 = -1;
uint32_t x77 = UINT32_MAX;
int8_t x91 = 9;
static volatile int32_t t16 = -514438;
uint64_t x96 = UINT64_MAX;
static int32_t x103 = -1;
static int64_t t19 = -959419027478LL;
volatile uint64_t x110 = UINT64_MAX;
int32_t x112 = INT32_MIN;
int16_t x114 = -1;
volatile int16_t x121 = INT16_MAX;
uint32_t x122 = 128856U;
static uint32_t x132 = 787477U;
int32_t x140 = INT32_MAX;
static volatile int8_t x141 = INT8_MIN;
uint32_t x143 = UINT32_MAX;
int64_t x150 = INT64_MIN;
int16_t x153 = -1;
uint64_t x154 = UINT64_MAX;
int32_t x157 = -1;
volatile uint32_t x175 = UINT32_MAX;
int32_t t35 = 332828079;
int32_t x191 = INT32_MIN;
static int16_t x199 = INT16_MAX;
int32_t t38 = 12446383;
int64_t x201 = INT64_MAX;
int8_t x205 = INT8_MIN;
static int64_t x215 = -8122939944LL;
int32_t x218 = 21727755;
static volatile int8_t x220 = INT8_MIN;
int8_t x225 = INT8_MAX;
int32_t x230 = 5096;
static int64_t x231 = -1LL;
int64_t x240 = -1LL;
static volatile int32_t t45 = -148;
volatile int32_t x246 = INT32_MIN;
volatile int16_t x248 = INT16_MIN;
volatile int32_t t48 = 58740484;
uint16_t x256 = 16U;
uint16_t x259 = 0U;
volatile int64_t x264 = 0LL;
static uint16_t x267 = 0U;
volatile uint64_t x268 = 536178369LLU;
static uint32_t x270 = UINT32_MAX;
volatile int32_t t55 = -1704;
uint8_t x283 = 26U;
int32_t x295 = INT32_MIN;
int32_t t59 = 1152;
int16_t x304 = -1581;
int32_t t60 = INT32_MIN;
volatile int8_t x313 = 24;
int8_t x318 = 0;
uint8_t x321 = 2U;
int8_t x322 = INT8_MIN;
uint32_t x325 = 0U;
static int16_t x327 = -1;
volatile int32_t x329 = 71184;
volatile uint32_t x338 = 127U;
volatile uint64_t x340 = UINT64_MAX;
volatile int32_t t70 = -402581;
uint16_t x362 = UINT16_MAX;
int32_t x364 = INT32_MIN;
uint8_t x371 = 0U;
int64_t x372 = -54289LL;
static uint64_t t73 = 7857914301LLU;
int8_t x387 = INT8_MIN;
int16_t x400 = -1;
static uint64_t x404 = UINT64_MAX;
int32_t x407 = -2994491;
uint16_t x408 = UINT16_MAX;
int8_t x409 = INT8_MIN;
int8_t x415 = INT8_MIN;
int32_t t84 = -10;
int32_t x420 = 219;
volatile int16_t x421 = 0;
int32_t t86 = -715;
volatile int16_t x438 = 5008;
int64_t x441 = INT64_MAX;
int64_t x450 = -907028589072494666LL;
int64_t x451 = 2073724941352032255LL;
int32_t t91 = 7;
int8_t x457 = -2;
int32_t t94 = -85900882;
int8_t x479 = INT8_MIN;
int8_t x480 = INT8_MIN;
volatile int64_t x481 = 1012872770080LL;
int32_t x484 = INT32_MIN;
volatile int32_t t98 = INT32_MIN;
int16_t x492 = INT16_MAX;
volatile uint32_t t99 = 2557830U;


void f0(void) {
	static int16_t x5 = INT16_MAX;
	int8_t x6 = -1;
	int64_t x7 = INT64_MIN;
	static volatile int16_t x8 = INT16_MAX;
	static int32_t t0 = -143334;

	t0 = (x5-((x6-x7)<x8));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = INT16_MIN;
	uint64_t x12 = 68939007987270LLU;
	int32_t t1 = INT32_MIN;

	t1 = (x9-((x10-x11)<x12));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x17 = 27;
	int64_t x19 = -186832469279902083LL;
	int32_t t2 = 35747272;

	t2 = (x17-((x18-x19)<x20));

	if (t2 != 27) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x21 = UINT32_MAX;
	uint16_t x22 = 1U;
	int16_t x23 = INT16_MIN;
	volatile uint32_t x24 = UINT32_MAX;

	t3 = (x21-((x22-x23)<x24));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x25 = 1808;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;
	volatile int32_t t4 = -1959034;

	t4 = (x25-((x26-x27)<x28));

	if (t4 != 1807) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x33 = -1;
	static int16_t x34 = INT16_MAX;
	uint16_t x35 = 3U;
	int64_t x36 = -2805612179988185376LL;
	static int32_t t5 = 197;

	t5 = (x33-((x34-x35)<x36));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 1355532;
	int16_t x42 = -1;
	int32_t x44 = -1018;
	int32_t t6 = 171746;

	t6 = (x41-((x42-x43)<x44));

	if (t6 != 1355532) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MAX;
	static int16_t x47 = -9990;
	static volatile int32_t x48 = 1889897;

	t7 = (x45-((x46-x47)<x48));

	if (t7 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x51 = -125813503;
	uint8_t x52 = 21U;

	t8 = (x49-((x50-x51)<x52));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x57-((x58-x59)<x60));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 33U;
	static int8_t x62 = INT8_MIN;
	volatile int32_t t10 = -3757;

	t10 = (x61-((x62-x63)<x64));

	if (t10 != 33) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x67 = UINT64_MAX;
	static volatile int16_t x68 = 0;
	int32_t t11 = 8;

	t11 = (x65-((x66-x67)<x68));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -12;
	int8_t x70 = -1;
	uint16_t x72 = UINT16_MAX;
	int32_t t12 = 42054;

	t12 = (x69-((x70-x71)<x72));

	if (t12 != -13) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x74 = -1;
	static int64_t t13 = 2824512285LL;

	t13 = (x73-((x74-x75)<x76));

	if (t13 != 257288559LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x78 = INT64_MIN;
	volatile int8_t x79 = -1;
	int8_t x80 = 1;
	volatile uint32_t t14 = 0U;

	t14 = (x77-((x78-x79)<x80));

	if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 60664464LLU;
	volatile int16_t x83 = -1;
	int32_t x84 = 568779;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x81-((x82-x83)<x84));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = 725;
	static volatile uint64_t x90 = 1468469LLU;
	int16_t x92 = INT16_MIN;

	t16 = (x89-((x90-x91)<x92));

	if (t16 != 724) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -1197661;
	uint64_t x94 = 654LLU;
	uint64_t x95 = 1471LLU;
	int32_t t17 = 602967;

	t17 = (x93-((x94-x95)<x96));

	if (t17 != -1197662) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = 1;
	uint64_t x102 = UINT64_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t18 = -3;

	t18 = (x101-((x102-x103)<x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -1LL;
	int8_t x106 = 44;
	int32_t x107 = -1;
	volatile uint64_t x108 = 373288039LLU;

	t19 = (x105-((x106-x107)<x108));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x109 = INT8_MIN;
	static volatile int16_t x111 = INT16_MIN;
	volatile int32_t t20 = 170786073;

	t20 = (x109-((x110-x111)<x112));

	if (t20 != -129) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x113 = 0U;
	int16_t x115 = -1;
	int32_t x116 = INT32_MIN;
	volatile int32_t t21 = 0;

	t21 = (x113-((x114-x115)<x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = 13707U;
	static volatile uint16_t x118 = UINT16_MAX;
	volatile uint32_t x119 = UINT32_MAX;
	uint64_t x120 = UINT64_MAX;
	uint32_t t22 = 133896U;

	t22 = (x117-((x118-x119)<x120));

	if (t22 != 13706U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x123 = -161427999;
	uint32_t x124 = 65554U;
	volatile int32_t t23 = 929725;

	t23 = (x121-((x122-x123)<x124));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x129 = INT8_MIN;
	static uint64_t x130 = 1064240756LLU;
	int32_t x131 = INT32_MIN;
	int32_t t24 = 41346748;

	t24 = (x129-((x130-x131)<x132));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x133 = 113U;
	int16_t x134 = 1;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	static volatile uint32_t t25 = 91801U;

	t25 = (x133-((x134-x135)<x136));

	if (t25 != 113U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = -35;
	static uint32_t x138 = 163U;
	int16_t x139 = INT16_MIN;
	volatile int32_t t26 = 1121991;

	t26 = (x137-((x138-x139)<x140));

	if (t26 != -36) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x142 = -3229385324345LL;
	uint32_t x144 = 76161U;
	volatile int32_t t27 = 3281669;

	t27 = (x141-((x142-x143)<x144));

	if (t27 != -129) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = INT64_MAX;
	volatile int8_t x146 = INT8_MIN;
	uint64_t x147 = 3542357LLU;
	int8_t x148 = INT8_MIN;
	static volatile int64_t t28 = -483880410350240LL;

	t28 = (x145-((x146-x147)<x148));

	if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = 879LLU;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MAX;
	uint64_t t29 = 1LLU;

	t29 = (x149-((x150-x151)<x152));

	if (t29 != 878LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x155 = INT16_MAX;
	int16_t x156 = -1;
	int32_t t30 = -476;

	t30 = (x153-((x154-x155)<x156));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x158 = 1U;
	int16_t x159 = -3772;
	int16_t x160 = INT16_MIN;
	int32_t t31 = 9974684;

	t31 = (x157-((x158-x159)<x160));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 22734U;
	int8_t x162 = INT8_MAX;
	int32_t x163 = -1;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t32 = -4454;

	t32 = (x161-((x162-x163)<x164));

	if (t32 != 22734) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = 5221241064713966392LLU;
	int8_t x170 = INT8_MIN;
	static volatile int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	static uint64_t t33 = 234694895411949LLU;

	t33 = (x169-((x170-x171)<x172));

	if (t33 != 5221241064713966392LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int8_t x174 = -1;
	int8_t x176 = INT8_MAX;
	int32_t t34 = -19851;

	t34 = (x173-((x174-x175)<x176));

	if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = -1;
	int8_t x178 = 0;
	static volatile int8_t x179 = INT8_MIN;
	int8_t x180 = -1;

	t35 = (x177-((x178-x179)<x180));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x190 = -58;
	volatile int8_t x192 = 59;
	int32_t t36 = -260822742;

	t36 = (x189-((x190-x191)<x192));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x193 = 15U;
	static int16_t x194 = INT16_MAX;
	static volatile int8_t x195 = INT8_MIN;
	int32_t x196 = -349598897;
	int32_t t37 = 40198925;

	t37 = (x193-((x194-x195)<x196));

	if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = 27;
	int32_t x198 = INT32_MAX;
	int32_t x200 = INT32_MIN;

	t38 = (x197-((x198-x199)<x200));

	if (t38 != 27) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x202 = 183473442660211882LL;
	int16_t x203 = -1;
	volatile uint64_t x204 = 493528LLU;
	volatile int64_t t39 = INT64_MAX;

	t39 = (x201-((x202-x203)<x204));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x206 = -1;
	static int32_t x207 = INT32_MAX;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t40 = -1;

	t40 = (x205-((x206-x207)<x208));

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x213 = 86U;
	int16_t x214 = -11;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t41 = -261288;

	t41 = (x213-((x214-x215)<x216));

	if (t41 != 86) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = INT64_MAX;
	uint64_t x219 = 62883105LLU;
	volatile int64_t t42 = 1935LL;

	t42 = (x217-((x218-x219)<x220));

	if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x226 = -1;
	int8_t x227 = INT8_MAX;
	int32_t x228 = 200;
	volatile int32_t t43 = -380958;

	t43 = (x225-((x226-x227)<x228));

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = UINT8_MAX;
	static int16_t x232 = INT16_MIN;
	int32_t t44 = -96335994;

	t44 = (x229-((x230-x231)<x232));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x237 = 9U;
	int64_t x238 = 132477243472835LL;
	uint16_t x239 = UINT16_MAX;

	t45 = (x237-((x238-x239)<x240));

	if (t45 != 9) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = -1;
	int32_t x242 = -172;
	int16_t x243 = INT16_MIN;
	int16_t x244 = -25;
	volatile int32_t t46 = -1010;

	t46 = (x241-((x242-x243)<x244));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x245 = 1123195323145390LLU;
	int16_t x247 = -450;
	volatile uint64_t t47 = 1383LLU;

	t47 = (x245-((x246-x247)<x248));

	if (t47 != 1123195323145389LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x249 = 30U;
	int16_t x250 = INT16_MIN;
	volatile uint16_t x251 = 7541U;
	int64_t x252 = -1LL;

	t48 = (x249-((x250-x251)<x252));

	if (t48 != 29) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	static volatile int64_t t49 = INT64_MIN;

	t49 = (x253-((x254-x255)<x256));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = -1;
	volatile uint32_t x258 = 363U;
	int8_t x260 = INT8_MIN;
	int32_t t50 = 29241;

	t50 = (x257-((x258-x259)<x260));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x261 = 62U;
	int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	int32_t t51 = -569560;

	t51 = (x261-((x262-x263)<x264));

	if (t51 != 62) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = INT64_MAX;
	int32_t t52 = 0;

	t52 = (x265-((x266-x267)<x268));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = -15;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t53 = -1479637;

	t53 = (x269-((x270-x271)<x272));

	if (t53 != -15) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = INT8_MIN;
	static volatile int32_t x274 = -56354;
	int8_t x275 = -1;
	static uint64_t x276 = UINT64_MAX;
	volatile int32_t t54 = -1;

	t54 = (x273-((x274-x275)<x276));

	if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x277 = 2U;
	static uint32_t x278 = 53U;
	int32_t x279 = -1824044;
	int64_t x280 = INT64_MAX;

	t55 = (x277-((x278-x279)<x280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = 225997U;
	uint64_t x282 = 7853029808293084747LLU;
	int32_t x284 = INT32_MIN;
	volatile uint32_t t56 = 347U;

	t56 = (x281-((x282-x283)<x284));

	if (t56 != 225996U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	int32_t x292 = 139314863;
	int32_t t57 = 292690511;

	t57 = (x289-((x290-x291)<x292));

	if (t57 != -32769) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x293 = -1LL;
	int32_t x294 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	volatile int64_t t58 = 15313LL;

	t58 = (x293-((x294-x295)<x296));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;

	t59 = (x297-((x298-x299)<x300));

	if (t59 != -32769) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x301 = INT32_MIN;
	int64_t x302 = 13LL;
	uint8_t x303 = 6U;

	t60 = (x301-((x302-x303)<x304));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = 470793891794LL;
	int32_t x310 = -1;
	int32_t x311 = INT32_MAX;
	volatile int16_t x312 = 2;
	volatile int64_t t61 = 4313229789917LL;

	t61 = (x309-((x310-x311)<x312));

	if (t61 != 470793891793LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x314 = -7795;
	int8_t x315 = 1;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t62 = -70305;

	t62 = (x313-((x314-x315)<x316));

	if (t62 != 23) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x317 = UINT8_MAX;
	int64_t x319 = 81LL;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t63 = 16670566;

	t63 = (x317-((x318-x319)<x320));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x323 = -2;
	int8_t x324 = -1;
	volatile int32_t t64 = -75;

	t64 = (x321-((x322-x323)<x324));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x326 = INT32_MIN;
	volatile int16_t x328 = INT16_MIN;
	uint32_t t65 = UINT32_MAX;

	t65 = (x325-((x326-x327)<x328));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x330 = -63;
	volatile int16_t x331 = INT16_MIN;
	uint32_t x332 = 3641125U;
	volatile int32_t t66 = -645;

	t66 = (x329-((x330-x331)<x332));

	if (t66 != 71183) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x337 = -1LL;
	int16_t x339 = INT16_MIN;
	int64_t t67 = -257509095920284LL;

	t67 = (x337-((x338-x339)<x340));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x341 = INT16_MIN;
	int8_t x342 = 1;
	static int8_t x343 = -7;
	int64_t x344 = 15660378128867943LL;
	static int32_t t68 = -150920533;

	t68 = (x341-((x342-x343)<x344));

	if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = -2802;
	uint64_t x346 = 837807766652749169LLU;
	static uint32_t x347 = 3401U;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t69 = -479250113;

	t69 = (x345-((x346-x347)<x348));

	if (t69 != -2802) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x353 = 29U;
	int64_t x354 = -2LL;
	int64_t x355 = -16848866778LL;
	static int64_t x356 = -1LL;

	t70 = (x353-((x354-x355)<x356));

	if (t70 != 29) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x361 = -1;
	int16_t x363 = 12;
	int32_t t71 = -1190;

	t71 = (x361-((x362-x363)<x364));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x365 = INT8_MIN;
	static int64_t x366 = INT64_MAX;
	static volatile int16_t x367 = 1;
	static uint32_t x368 = 944816U;
	volatile int32_t t72 = 60807529;

	t72 = (x365-((x366-x367)<x368));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x369 = 50781471696577839LLU;
	int32_t x370 = INT32_MIN;

	t73 = (x369-((x370-x371)<x372));

	if (t73 != 50781471696577838LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x373 = 4U;
	int64_t x374 = 47452198386LL;
	int16_t x375 = 1;
	int64_t x376 = INT64_MAX;
	static uint32_t t74 = 12011U;

	t74 = (x373-((x374-x375)<x376));

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = INT8_MAX;
	uint64_t x378 = 103102868314797143LLU;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MAX;
	volatile int32_t t75 = 163036;

	t75 = (x377-((x378-x379)<x380));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = -1;
	uint8_t x383 = 52U;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t76 = 1U;

	t76 = (x381-((x382-x383)<x384));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MAX;
	int16_t x388 = INT16_MAX;
	int32_t t77 = 66710909;

	t77 = (x385-((x386-x387)<x388));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x389 = -2690692;
	int16_t x390 = 18;
	uint16_t x391 = UINT16_MAX;
	static volatile int32_t x392 = INT32_MAX;
	volatile int32_t t78 = -72177;

	t78 = (x389-((x390-x391)<x392));

	if (t78 != -2690693) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x393 = 17LL;
	uint64_t x394 = UINT64_MAX;
	volatile uint16_t x395 = UINT16_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	static int64_t t79 = 383965813579415506LL;

	t79 = (x393-((x394-x395)<x396));

	if (t79 != 17LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x397 = INT8_MIN;
	static int64_t x398 = INT64_MIN;
	static int32_t x399 = INT32_MIN;
	volatile int32_t t80 = 220848490;

	t80 = (x397-((x398-x399)<x400));

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x401 = INT8_MAX;
	static int16_t x402 = 6279;
	static volatile int64_t x403 = -95419352LL;
	volatile int32_t t81 = -267;

	t81 = (x401-((x402-x403)<x404));

	if (t81 != 126) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x405 = 4;
	static uint64_t x406 = UINT64_MAX;
	volatile int32_t t82 = 1;

	t82 = (x405-((x406-x407)<x408));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x410 = 3233438U;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = -1;
	int32_t t83 = 287018450;

	t83 = (x409-((x410-x411)<x412));

	if (t83 != -129) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x413 = 15U;
	volatile int32_t x414 = INT32_MIN;
	int16_t x416 = INT16_MIN;

	t84 = (x413-((x414-x415)<x416));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x417 = -1;
	int32_t x418 = -1750;
	int8_t x419 = INT8_MAX;
	static int32_t t85 = -71;

	t85 = (x417-((x418-x419)<x420));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x422 = -1;
	int32_t x423 = INT32_MIN;
	uint8_t x424 = 1U;

	t86 = (x421-((x422-x423)<x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x437 = INT64_MIN;
	volatile int8_t x439 = -1;
	volatile int8_t x440 = INT8_MIN;
	int64_t t87 = INT64_MIN;

	t87 = (x437-((x438-x439)<x440));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x442 = UINT32_MAX;
	static uint64_t x443 = 2184LLU;
	volatile uint32_t x444 = 84109802U;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x441-((x442-x443)<x444));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x445 = INT16_MIN;
	int8_t x446 = INT8_MIN;
	static volatile uint16_t x447 = 7950U;
	int8_t x448 = INT8_MAX;
	volatile int32_t t89 = 719105881;

	t89 = (x445-((x446-x447)<x448));

	if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x449 = 0;
	static uint32_t x452 = 47U;
	static int32_t t90 = 7;

	t90 = (x449-((x450-x451)<x452));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x453 = INT8_MIN;
	int16_t x454 = 0;
	int64_t x455 = 304171LL;
	static int64_t x456 = 411914LL;

	t91 = (x453-((x454-x455)<x456));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x458 = 7U;
	uint64_t x459 = UINT64_MAX;
	uint8_t x460 = 37U;
	int32_t t92 = -9;

	t92 = (x457-((x458-x459)<x460));

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x461 = UINT8_MAX;
	volatile int16_t x462 = 1167;
	static int16_t x463 = -1;
	volatile int8_t x464 = -1;
	int32_t t93 = 1;

	t93 = (x461-((x462-x463)<x464));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x465 = 234U;
	static uint16_t x466 = 1017U;
	int32_t x467 = -1;
	int64_t x468 = INT64_MAX;

	t94 = (x465-((x466-x467)<x468));

	if (t94 != 233) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x469 = 20U;
	uint32_t x470 = 2618635U;
	int64_t x471 = -1451188238936LL;
	static int16_t x472 = INT16_MAX;
	int32_t t95 = 15;

	t95 = (x469-((x470-x471)<x472));

	if (t95 != 20) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x477 = UINT16_MAX;
	int64_t x478 = INT64_MIN;
	int32_t t96 = 38;

	t96 = (x477-((x478-x479)<x480));

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x482 = 14714;
	int64_t x483 = INT64_MAX;
	int64_t t97 = 36172002174354LL;

	t97 = (x481-((x482-x483)<x484));

	if (t97 != 1012872770079LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MAX;
	volatile int16_t x487 = 20;
	volatile int64_t x488 = 5508LL;

	t98 = (x485-((x486-x487)<x488));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x489 = 385U;
	static int16_t x490 = -1;
	int8_t x491 = INT8_MAX;

	t99 = (x489-((x490-x491)<x492));

	if (t99 != 384U) { NG(); } else { ; }
	
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

