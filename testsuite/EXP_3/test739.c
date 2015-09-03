#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
volatile uint8_t x14 = 5U;
static int32_t x25 = INT32_MAX;
static uint8_t x39 = 13U;
volatile int32_t t10 = 7;
int8_t x64 = -1;
static volatile int64_t t13 = -1LL;
int64_t x68 = -1LL;
int32_t x75 = 30;
volatile uint8_t x77 = UINT8_MAX;
uint32_t t17 = 145213934U;
volatile int64_t x85 = -1LL;
uint64_t t19 = 881641LLU;
static volatile int8_t x93 = INT8_MIN;
uint32_t x94 = UINT32_MAX;
int8_t x98 = INT8_MAX;
volatile int32_t x99 = -6045;
uint8_t x104 = 4U;
volatile int16_t x108 = INT16_MAX;
static volatile int64_t t26 = -13451LL;
int16_t x124 = INT16_MIN;
uint64_t x136 = 244274205281068LLU;
int64_t x147 = -1LL;
volatile int64_t t36 = 79LL;
int8_t x165 = INT8_MIN;
int8_t x166 = INT8_MIN;
int64_t x169 = INT64_MAX;
volatile int64_t x172 = INT64_MIN;
int8_t x175 = INT8_MAX;
static volatile uint8_t x188 = UINT8_MAX;
uint64_t x189 = 40232521247LLU;
int64_t x194 = -1LL;
uint8_t x200 = 37U;
static volatile int64_t t44 = -134877050192843LL;
int16_t x201 = INT16_MIN;
uint16_t x209 = 25U;
static uint8_t x210 = 4U;
int32_t t47 = 117;
uint8_t x213 = 13U;
int64_t t49 = 233460LL;
static int64_t x221 = -7LL;
uint64_t x222 = 333133LLU;
int64_t x223 = INT64_MIN;
int64_t x225 = INT64_MIN;
uint64_t x227 = UINT64_MAX;
volatile uint64_t t51 = 2034683953756136202LLU;
int32_t x229 = INT32_MAX;
int8_t x230 = INT8_MIN;
static int16_t x242 = INT16_MIN;
uint8_t x243 = UINT8_MAX;
volatile int64_t x248 = INT64_MAX;
int32_t x249 = INT32_MIN;
static uint16_t x252 = 434U;
int32_t t56 = -1;
int32_t x254 = -1;
int64_t x255 = -1LL;
uint64_t x257 = 232876414908LLU;
int8_t x265 = -1;
int16_t x271 = -1;
int8_t x273 = -55;
int16_t x278 = INT16_MAX;
volatile uint64_t t63 = 2334132188360LLU;
int32_t x291 = INT32_MIN;
static volatile int8_t x294 = -21;
int8_t x306 = -6;
int64_t x307 = -912273819559602LL;
static int16_t x313 = INT16_MIN;
static int16_t x317 = INT16_MIN;
volatile int16_t x318 = 478;
uint64_t x321 = 20550426423184LLU;
volatile uint64_t t74 = 156007059373207933LLU;
volatile int32_t x327 = INT32_MIN;
int32_t x330 = -928476;
volatile int64_t t76 = -1LL;
uint64_t x334 = 1816331LLU;
uint64_t x336 = 56644365989729010LLU;
int32_t x339 = -1;
uint16_t x342 = UINT16_MAX;
volatile int16_t x345 = INT16_MAX;
int8_t x349 = 5;
int16_t x350 = INT16_MIN;
volatile int32_t x357 = -1;
int64_t x359 = -7484980365LL;
uint64_t x363 = UINT64_MAX;
int64_t x373 = INT64_MAX;
int32_t x374 = -25852582;
int64_t t88 = 1272158793LL;
int64_t x386 = -1LL;
static uint64_t x387 = 7020024856584163937LLU;
uint64_t t89 = 20LLU;
int16_t x393 = 4047;
int16_t x398 = INT16_MAX;
static volatile int64_t t92 = -58862073698LL;
int32_t x404 = -1;
int32_t x409 = INT32_MIN;
int8_t x417 = INT8_MIN;
int16_t x420 = 6962;
uint8_t x424 = 3U;
uint64_t t98 = 1049520344035827346LLU;


void f0(void) {
	uint16_t x5 = 158U;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 26569072156678LLU;
	uint64_t t0 = 4105928LLU;

	t0 = ((x5%x6)&(x7%x8));

	if (t0 != 130LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 1588402U;
	uint32_t x10 = UINT32_MAX;
	uint8_t x11 = UINT8_MAX;
	volatile int16_t x12 = INT16_MIN;
	uint32_t t1 = 19U;

	t1 = ((x9%x10)&(x11%x12));

	if (t1 != 178U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile int8_t x15 = 7;
	int16_t x16 = -1;
	volatile int32_t t2 = 1120987;

	t2 = ((x13%x14)&(x15%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t3 = 4008434445230LL;

	t3 = ((x17%x18)&(x19%x20));

	if (t3 != 4294934528LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	uint8_t x22 = 49U;
	static int64_t x23 = -1LL;
	uint32_t x24 = 136220U;
	int64_t t4 = 32890564477393LL;

	t4 = ((x21%x22)&(x23%x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 16244486069655630LL;

	t5 = ((x25%x26)&(x27%x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int8_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;
	uint32_t t6 = 1174989079U;

	t6 = ((x29%x30)&(x31%x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static uint64_t x34 = 16LLU;
	static uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t7 = 5775LLU;

	t7 = ((x33%x34)&(x35%x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	volatile uint64_t x38 = 521324105345567LLU;
	int32_t x40 = -1;
	uint64_t t8 = 990253950413LLU;

	t8 = ((x37%x38)&(x39%x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 1370U;
	int32_t x42 = -778893;
	static int32_t x43 = -1;
	volatile int8_t x44 = -57;
	static volatile int32_t t9 = 3622;

	t9 = ((x41%x42)&(x43%x44));

	if (t9 != 1370) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	static int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	int8_t x52 = -1;

	t10 = ((x49%x50)&(x51%x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = 28;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 27644438027089LLU;
	uint8_t x56 = 3U;
	uint64_t t11 = 7104LLU;

	t11 = ((x53%x54)&(x55%x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	uint16_t x58 = 891U;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t12 = 46219LLU;

	t12 = ((x57%x58)&(x59%x60));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MAX;
	int64_t x63 = -1LL;

	t13 = ((x61%x62)&(x63%x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	volatile int64_t x66 = -1LL;
	static volatile int16_t x67 = INT16_MIN;
	volatile int64_t t14 = -113054017897780LL;

	t14 = ((x65%x66)&(x67%x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	volatile int8_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -1;
	static int32_t t15 = 356489327;

	t15 = ((x69%x70)&(x71%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	static int64_t x74 = INT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int64_t t16 = -118513009LL;

	t16 = ((x73%x74)&(x75%x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = INT32_MIN;
	uint32_t x79 = 13012U;
	static int8_t x80 = -1;

	t17 = ((x77%x78)&(x79%x80));

	if (t17 != 212U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x86 = 42U;
	static int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MAX;
	volatile int64_t t18 = -159894798619LL;

	t18 = ((x85%x86)&(x87%x88));

	if (t18 != -8LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -55138;
	static int64_t x90 = 197095839328LL;
	uint64_t x91 = 310324091851247LLU;
	int8_t x92 = 6;

	t19 = ((x89%x90)&(x91%x92));

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x95 = 13377;
	int32_t x96 = INT32_MAX;
	static volatile uint32_t t20 = 1133345104U;

	t20 = ((x93%x94)&(x95%x96));

	if (t20 != 13312U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = INT32_MIN;
	volatile int64_t x100 = INT64_MAX;
	static int64_t t21 = 6LL;

	t21 = ((x97%x98)&(x99%x100));

	if (t21 != -6048LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 100;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = 15U;
	volatile int32_t t22 = 965833;

	t22 = ((x101%x102)&(x103%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = -3;
	static int32_t x106 = -1;
	static int64_t x107 = INT64_MIN;
	int64_t t23 = -53305651291LL;

	t23 = ((x105%x106)&(x107%x108));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 15774776U;
	volatile int32_t x110 = -72;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -1LL;
	volatile uint64_t t24 = 68647LLU;

	t24 = ((x109%x110)&(x111%x112));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 0U;
	int64_t x114 = INT64_MAX;
	int16_t x115 = INT16_MAX;
	static int32_t x116 = INT32_MAX;
	int64_t t25 = 4310LL;

	t25 = ((x113%x114)&(x115%x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 6;
	uint32_t x118 = 66375U;
	int16_t x119 = -468;
	int64_t x120 = INT64_MAX;

	t26 = ((x117%x118)&(x119%x120));

	if (t26 != 4LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x121 = 122624;
	int8_t x122 = INT8_MAX;
	volatile int64_t x123 = -1LL;
	volatile int64_t t27 = 1131LL;

	t27 = ((x121%x122)&(x123%x124));

	if (t27 != 69LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x125 = INT16_MIN;
	uint32_t x126 = 5U;
	int64_t x127 = INT64_MIN;
	static int32_t x128 = -28137376;
	static int64_t t28 = -142365201998269094LL;

	t28 = ((x125%x126)&(x127%x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t29 = 136411256;

	t29 = ((x129%x130)&(x131%x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	int64_t x135 = INT64_MIN;
	static volatile uint64_t t30 = 14346908241LLU;

	t30 = ((x133%x134)&(x135%x136));

	if (t30 != 66593852210264LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -7425;
	int64_t x138 = INT64_MIN;
	static volatile int8_t x139 = 3;
	static int32_t x140 = INT32_MIN;
	int64_t t31 = -7467965788LL;

	t31 = ((x137%x138)&(x139%x140));

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -12LL;
	int64_t x144 = -2339525452094981713LL;
	volatile int64_t t32 = -3752639826844LL;

	t32 = ((x141%x142)&(x143%x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	static volatile int64_t t33 = 0LL;

	t33 = ((x145%x146)&(x147%x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	static volatile uint8_t x151 = 2U;
	volatile int32_t x152 = INT32_MIN;
	static int32_t t34 = -1;

	t34 = ((x149%x150)&(x151%x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = 4274251362LL;
	volatile uint16_t x158 = UINT16_MAX;
	uint8_t x159 = 11U;
	static int64_t x160 = -13778LL;
	int64_t t35 = -614LL;

	t35 = ((x157%x158)&(x159%x160));

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 89975321662387541LL;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	static volatile int64_t x164 = -57892304052LL;

	t36 = ((x161%x162)&(x163%x164));

	if (t36 != 85LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x167 = 15782U;
	uint8_t x168 = 6U;
	uint32_t t37 = 129777825U;

	t37 = ((x165%x166)&(x167%x168));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = -2;
	int64_t x171 = INT64_MIN;
	static volatile int64_t t38 = -3153995150867884LL;

	t38 = ((x169%x170)&(x171%x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = 384394353839598LL;
	uint8_t x174 = 9U;
	uint64_t x176 = 53123248193569902LLU;
	volatile uint64_t t39 = 55958289563597LLU;

	t39 = ((x173%x174)&(x175%x176));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 164210392U;
	uint16_t x182 = 93U;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = -1;
	static volatile uint32_t t40 = 207485114U;

	t40 = ((x181%x182)&(x183%x184));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = INT8_MIN;
	uint16_t x186 = 7367U;
	int32_t x187 = INT32_MIN;
	int32_t t41 = -1688;

	t41 = ((x185%x186)&(x187%x188));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = 111U;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t42 = 65854106111LLU;

	t42 = ((x189%x190)&(x191%x192));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x193 = 170607324033585369LLU;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t43 = 439033416878774LLU;

	t43 = ((x193%x194)&(x195%x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	int64_t x199 = 59095LL;

	t44 = ((x197%x198)&(x199%x200));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = -31520651;
	volatile uint8_t x203 = 11U;
	static volatile int16_t x204 = -529;
	int32_t t45 = -1;

	t45 = ((x201%x202)&(x203%x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x205 = 4U;
	int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	static uint16_t x208 = 15094U;
	static int32_t t46 = -217242745;

	t46 = ((x205%x206)&(x207%x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x211 = INT8_MAX;
	static int8_t x212 = -1;

	t47 = ((x209%x210)&(x211%x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = 3;
	static volatile int16_t x216 = -1;
	static volatile int32_t t48 = 154;

	t48 = ((x213%x214)&(x215%x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	uint32_t x218 = 3781U;
	int64_t x219 = INT64_MIN;
	volatile int16_t x220 = -255;

	t49 = ((x217%x218)&(x219%x220));

	if (t49 != 768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x224 = INT32_MIN;
	static uint64_t t50 = 36326479516952192LLU;

	t50 = ((x221%x222)&(x223%x224));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x226 = 51U;
	uint8_t x228 = 6U;

	t51 = ((x225%x226)&(x227%x228));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x231 = INT64_MAX;
	int32_t x232 = -1;
	volatile int64_t t52 = -1LL;

	t52 = ((x229%x230)&(x231%x232));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = 0;
	uint16_t x238 = 2225U;
	static volatile int8_t x239 = -27;
	static uint8_t x240 = 11U;
	volatile int32_t t53 = -8207701;

	t53 = ((x237%x238)&(x239%x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = INT64_MIN;
	int64_t x244 = -115168060785LL;
	volatile int64_t t54 = 261908LL;

	t54 = ((x241%x242)&(x243%x244));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x245 = 61U;
	volatile uint16_t x246 = 3U;
	static int32_t x247 = INT32_MAX;
	static int64_t t55 = 1803976517357538LL;

	t55 = ((x245%x246)&(x247%x248));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x250 = -1;
	volatile int8_t x251 = 3;

	t56 = ((x249%x250)&(x251%x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x253 = INT32_MIN;
	static volatile int64_t x256 = INT64_MAX;
	int64_t t57 = -2202556573305453340LL;

	t57 = ((x253%x254)&(x255%x256));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x258 = 139U;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MAX;
	uint64_t t58 = 604605326369641654LLU;

	t58 = ((x257%x258)&(x259%x260));

	if (t58 != 59LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = -1;
	volatile int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	static volatile uint32_t x264 = UINT32_MAX;
	volatile uint32_t t59 = 122U;

	t59 = ((x261%x262)&(x263%x264));

	if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x266 = -1;
	uint16_t x267 = 15U;
	int64_t x268 = INT64_MIN;
	int64_t t60 = 3158825LL;

	t60 = ((x265%x266)&(x267%x268));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 701709133427321LL;
	static int32_t x270 = INT32_MIN;
	int64_t x272 = INT64_MAX;
	volatile int64_t t61 = 6586912844LL;

	t61 = ((x269%x270)&(x271%x272));

	if (t61 != 1671574137LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x274 = -1;
	volatile int64_t x275 = -1LL;
	uint32_t x276 = UINT32_MAX;
	volatile int64_t t62 = -131255954LL;

	t62 = ((x273%x274)&(x275%x276));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = -1;
	uint64_t x279 = UINT64_MAX;
	int16_t x280 = INT16_MAX;

	t63 = ((x277%x278)&(x279%x280));

	if (t63 != 15LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = 7120087910808LLU;
	static uint16_t x282 = 7363U;
	uint32_t x283 = 12920221U;
	static int64_t x284 = INT64_MIN;
	uint64_t t64 = 92823100158663LLU;

	t64 = ((x281%x282)&(x283%x284));

	if (t64 != 1177LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = -542880675370LL;
	int64_t x286 = INT64_MAX;
	int8_t x287 = INT8_MIN;
	static volatile int8_t x288 = 30;
	int64_t t65 = 5LL;

	t65 = ((x285%x286)&(x287%x288));

	if (t65 != -542880675376LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x289 = 217270369480LL;
	static uint16_t x290 = UINT16_MAX;
	volatile int32_t x292 = INT32_MIN;
	volatile int64_t t66 = -32LL;

	t66 = ((x289%x290)&(x291%x292));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x293 = 6188709LLU;
	int32_t x295 = INT32_MAX;
	int8_t x296 = -6;
	volatile uint64_t t67 = 4LLU;

	t67 = ((x293%x294)&(x295%x296));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = -692;
	uint8_t x298 = 7U;
	static uint32_t x299 = 10U;
	int16_t x300 = 5495;
	volatile uint32_t t68 = 23003U;

	t68 = ((x297%x298)&(x299%x300));

	if (t68 != 10U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = 446U;
	uint32_t x302 = 357266U;
	int32_t x303 = -1;
	static int32_t x304 = INT32_MIN;
	volatile uint32_t t69 = 516867866U;

	t69 = ((x301%x302)&(x303%x304));

	if (t69 != 446U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = UINT32_MAX;
	static int16_t x308 = -1;
	static volatile int64_t t70 = -32204735228LL;

	t70 = ((x305%x306)&(x307%x308));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = 21021806LLU;
	int64_t x310 = INT64_MIN;
	int16_t x311 = 4;
	int32_t x312 = INT32_MAX;
	volatile uint64_t t71 = 426444845066208LLU;

	t71 = ((x309%x310)&(x311%x312));

	if (t71 != 4LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x314 = -1;
	static volatile int16_t x315 = -4;
	static volatile int32_t x316 = -1;
	static volatile int32_t t72 = -9288749;

	t72 = ((x313%x314)&(x315%x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 3229218U;
	uint32_t t73 = 212U;

	t73 = ((x317%x318)&(x319%x320));

	if (t73 != 107224U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x322 = INT16_MIN;
	uint16_t x323 = 246U;
	int16_t x324 = -1;

	t74 = ((x321%x322)&(x323%x324));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = -1;
	static uint8_t x328 = 67U;
	int32_t t75 = -1;

	t75 = ((x325%x326)&(x327%x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = INT64_MIN;
	static uint32_t x331 = 8036025U;
	static int32_t x332 = -1;

	t76 = ((x329%x330)&(x331%x332));

	if (t76 != 7372944LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = INT32_MIN;
	int64_t x335 = -786LL;
	uint64_t t77 = 28021865LLU;

	t77 = ((x333%x334)&(x335%x336));

	if (t77 != 558100LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MAX;
	static uint64_t x340 = 1016615478044LLU;
	uint64_t t78 = 681542368LLU;

	t78 = ((x337%x338)&(x339%x340));

	if (t78 != 37500704512LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = -1;
	volatile int32_t x343 = -29888;
	static int32_t x344 = 7842447;
	volatile int32_t t79 = -249005973;

	t79 = ((x341%x342)&(x343%x344));

	if (t79 != -29888) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x346 = 2;
	static uint8_t x347 = 0U;
	uint8_t x348 = 21U;
	int32_t t80 = 707877257;

	t80 = ((x345%x346)&(x347%x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x351 = UINT32_MAX;
	uint32_t x352 = 12023U;
	uint32_t t81 = 118U;

	t81 = ((x349%x350)&(x351%x352));

	if (t81 != 4U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = 34;
	volatile uint16_t x355 = UINT16_MAX;
	int32_t x356 = 20799;
	int64_t t82 = -823383357LL;

	t82 = ((x353%x354)&(x355%x356));

	if (t82 != 3138LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x358 = -7141;
	volatile int64_t x360 = -3300602849LL;
	volatile int64_t t83 = 1LL;

	t83 = ((x357%x358)&(x359%x360));

	if (t83 != -883774667LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MAX;
	uint64_t x364 = 556535472034936482LLU;
	uint64_t t84 = 505363304222179131LLU;

	t84 = ((x361%x362)&(x363%x364));

	if (t84 != 81073496556647709LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x365 = 434U;
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = 12502071098LL;
	int16_t x368 = INT16_MIN;
	static int64_t t85 = 22065LL;

	t85 = ((x365%x366)&(x367%x368));

	if (t85 != 306LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x369 = 16302;
	uint8_t x370 = 5U;
	int32_t x371 = 4975380;
	uint32_t x372 = 934U;
	uint32_t t86 = 13U;

	t86 = ((x369%x370)&(x371%x372));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = UINT32_MAX;
	int64_t t87 = -39665497527165241LL;

	t87 = ((x373%x374)&(x375%x376));

	if (t87 != 20995712LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = -17;
	int64_t x382 = INT64_MIN;
	int16_t x383 = 11;
	int16_t x384 = 1822;

	t88 = ((x381%x382)&(x383%x384));

	if (t88 != 11LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = 1U;
	int16_t x388 = INT16_MIN;

	t89 = ((x385%x386)&(x387%x388));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = 4005U;
	int64_t x391 = 5333LL;
	int32_t x392 = 5341;
	static volatile int64_t t90 = 0LL;

	t90 = ((x389%x390)&(x391%x392));

	if (t90 != 213LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x394 = 441U;
	uint8_t x395 = 5U;
	uint64_t x396 = 233305LLU;
	volatile uint64_t t91 = 4334943804454759LLU;

	t91 = ((x393%x394)&(x395%x396));

	if (t91 != 4LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = 2709031875752124LL;
	static int64_t x399 = INT64_MIN;
	static uint32_t x400 = 1U;

	t92 = ((x397%x398)&(x399%x400));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x401 = 11U;
	int64_t x402 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	int64_t t93 = -7407LL;

	t93 = ((x401%x402)&(x403%x404));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -56;
	int64_t x406 = 10142842LL;
	static volatile uint16_t x407 = UINT16_MAX;
	int8_t x408 = INT8_MAX;
	int64_t t94 = -1854874070608055LL;

	t94 = ((x405%x406)&(x407%x408));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = INT16_MIN;
	uint8_t x411 = 8U;
	volatile int8_t x412 = INT8_MIN;
	int32_t t95 = 1;

	t95 = ((x409%x410)&(x411%x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = 10U;
	int8_t x414 = -19;
	volatile int16_t x415 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t96 = 23;

	t96 = ((x413%x414)&(x415%x416));

	if (t96 != 10) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x418 = INT64_MIN;
	static int32_t x419 = INT32_MIN;
	volatile int64_t t97 = -1574726LL;

	t97 = ((x417%x418)&(x419%x420));

	if (t97 != -6016LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x421 = 92U;
	static int16_t x422 = -2303;
	uint64_t x423 = UINT64_MAX;

	t98 = ((x421%x422)&(x423%x424));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = 387126910996696564LL;
	int16_t x426 = -638;
	int64_t x427 = INT64_MAX;
	uint64_t x428 = 33936LLU;
	volatile uint64_t t99 = 2729150LLU;

	t99 = ((x425%x426)&(x427%x428));

	if (t99 != 258LLU) { NG(); } else { ; }
	
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

