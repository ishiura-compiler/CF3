#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x8 = -1;
int32_t x20 = -1;
uint64_t x22 = UINT64_MAX;
int16_t x28 = INT16_MAX;
volatile uint64_t x31 = 60723LLU;
uint8_t x36 = UINT8_MAX;
static uint8_t x38 = 13U;
volatile int32_t x39 = INT32_MAX;
volatile int16_t x40 = -5;
uint64_t x41 = 424183LLU;
static volatile int32_t t11 = -20293036;
int32_t x59 = INT32_MIN;
int32_t t14 = -9454123;
uint64_t x61 = UINT64_MAX;
uint64_t t15 = 5793611614LLU;
volatile int64_t x76 = -1LL;
uint16_t x83 = 11314U;
volatile int32_t t21 = 3;
int32_t t22 = -2;
volatile int32_t x94 = INT32_MIN;
int64_t x98 = INT64_MAX;
int16_t x100 = INT16_MAX;
static uint32_t x105 = UINT32_MAX;
uint64_t x112 = 1476253367589LLU;
int32_t x118 = INT32_MIN;
uint32_t x121 = 36039U;
int8_t x122 = -15;
uint32_t x130 = 166205U;
int16_t x131 = INT16_MIN;
uint16_t x136 = 4U;
uint32_t x139 = 5451U;
int64_t x144 = 400112484230LL;
volatile int32_t t35 = 523093;
volatile int8_t x153 = INT8_MIN;
int32_t x158 = -5317134;
uint64_t x160 = UINT64_MAX;
uint32_t x168 = UINT32_MAX;
int32_t x170 = INT32_MIN;
uint64_t x172 = 127049437947195LLU;
int16_t x174 = INT16_MAX;
volatile uint64_t x187 = 1143084670LLU;
int32_t x190 = INT32_MIN;
volatile uint16_t x191 = 27U;
uint64_t x192 = UINT64_MAX;
static int32_t t46 = -401961378;
volatile int8_t x195 = INT8_MIN;
int64_t x198 = -1LL;
volatile int16_t x209 = 1225;
volatile int8_t x210 = INT8_MIN;
volatile int8_t x211 = -1;
int8_t x213 = INT8_MIN;
static uint32_t x214 = 11U;
volatile uint32_t t53 = 132225212U;
volatile uint64_t t54 = 227993458LLU;
int64_t x227 = INT64_MAX;
volatile int32_t t56 = -1;
volatile int8_t x233 = INT8_MIN;
static int64_t x234 = INT64_MAX;
static uint32_t t58 = 44181U;
static int16_t x243 = INT16_MIN;
int16_t x244 = INT16_MIN;
uint32_t x249 = 57U;
int16_t x252 = INT16_MAX;
int64_t x256 = 42856628034448LL;
volatile int64_t x260 = INT64_MAX;
int64_t x263 = INT64_MAX;
static int64_t x268 = -1LL;
volatile int32_t t67 = 0;
static volatile int32_t t68 = -74755953;
int8_t x284 = 2;
volatile int32_t t69 = -45;
volatile int16_t x287 = INT16_MIN;
uint64_t x289 = 0LLU;
uint16_t x295 = 477U;
static uint16_t x297 = 3U;
volatile int64_t x302 = 1045533040074967239LL;
uint64_t x316 = 44091640925773LLU;
int16_t x325 = -1068;
int64_t x326 = -1LL;
int32_t x330 = INT32_MAX;
int32_t x331 = -1;
int32_t x338 = INT32_MAX;
int32_t t83 = 7;
int32_t x342 = 79;
static int16_t x349 = INT16_MIN;
volatile int32_t x352 = INT32_MIN;
int8_t x361 = INT8_MIN;
int64_t x362 = 5469LL;
int16_t x364 = INT16_MAX;
static int32_t x374 = 67971424;
volatile uint32_t x377 = 247670005U;
int8_t x378 = -1;
uint32_t t93 = 673U;
int64_t x381 = -1LL;
uint64_t x382 = UINT64_MAX;
int8_t x387 = INT8_MIN;
uint32_t x391 = UINT32_MAX;
int8_t x392 = -1;
static uint64_t x393 = UINT64_MAX;
uint32_t x396 = UINT32_MAX;
int16_t x397 = INT16_MIN;
uint16_t x404 = 0U;


void f0(void) {
	int16_t x1 = 2;
	static uint64_t x2 = UINT64_MAX;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 246205532;

	t0 = (x1&((x2/x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 120171588U;
	int32_t x6 = 496;
	uint32_t x7 = 11537U;
	volatile uint32_t t1 = 0U;

	t1 = (x5&((x6/x7)<x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 8;
	uint8_t x10 = 1U;
	volatile int64_t x11 = 7568655LL;
	int16_t x12 = -1;
	static int32_t t2 = -187540;

	t2 = (x9&((x10/x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	static uint64_t x14 = 27427372975346LLU;
	volatile int64_t x15 = INT64_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -2LL;

	t3 = (x13&((x14/x15)<x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int16_t x18 = -5;
	int8_t x19 = INT8_MAX;
	volatile int32_t t4 = 25;

	t4 = (x17&((x18/x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	static int32_t x23 = 22131;
	int16_t x24 = INT16_MAX;
	static int32_t t5 = 57612;

	t5 = (x21&((x22/x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 25U;
	int8_t x26 = -3;
	volatile int8_t x27 = INT8_MIN;
	int32_t t6 = 4387;

	t6 = (x25&((x26/x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	static uint64_t x30 = 26858627505501LLU;
	int8_t x32 = INT8_MAX;
	static volatile uint64_t t7 = 75945074797152595LLU;

	t7 = (x29&((x30/x31)<x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MAX;
	int32_t t8 = 238721;

	t8 = (x33&((x34/x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int32_t t9 = -227;

	t9 = (x37&((x38/x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 3U;
	static uint16_t x43 = 9U;
	volatile int16_t x44 = INT16_MIN;
	volatile uint64_t t10 = 20824LLU;

	t10 = (x41&((x42/x43)<x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	volatile uint16_t x46 = UINT16_MAX;
	static int16_t x47 = 22;
	static int8_t x48 = INT8_MIN;

	t11 = (x45&((x46/x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 2U;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 5305;

	t12 = (x49&((x50/x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 10390U;
	uint64_t x54 = UINT64_MAX;
	uint16_t x55 = 18U;
	static volatile int16_t x56 = -1;
	int32_t t13 = -16733317;

	t13 = (x53&((x54/x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	static int8_t x58 = INT8_MIN;
	static int8_t x60 = INT8_MIN;

	t14 = (x57&((x58/x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 0;
	static uint16_t x63 = UINT16_MAX;
	volatile int32_t x64 = INT32_MIN;

	t15 = (x61&((x62/x63)<x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int16_t x66 = -13;
	static uint64_t x67 = UINT64_MAX;
	volatile uint32_t x68 = 371526471U;
	volatile int32_t t16 = -12;

	t16 = (x65&((x66/x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 7U;
	static int32_t x70 = INT32_MIN;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -1;

	t17 = (x69&((x70/x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile uint64_t x74 = 223951900LLU;
	volatile int16_t x75 = INT16_MIN;
	int64_t t18 = 813100556453308LL;

	t18 = (x73&((x74/x75)<x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int16_t x78 = -1;
	int16_t x79 = -369;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -1;

	t19 = (x77&((x78/x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1175243077473979073LL;
	int32_t x84 = 1;
	volatile int32_t t20 = 136;

	t20 = (x81&((x82/x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 41U;
	static int32_t x86 = -59266952;
	int16_t x87 = 9986;
	uint32_t x88 = 0U;

	t21 = (x85&((x86/x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 106;
	int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	int16_t x92 = -1;

	t22 = (x89&((x90/x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 950U;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;
	uint32_t t23 = 3U;

	t23 = (x93&((x94/x95)<x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	volatile int32_t t24 = -859619718;

	t24 = (x97&((x98/x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1239U;
	volatile uint32_t x102 = 34U;
	static uint64_t x103 = UINT64_MAX;
	static volatile int16_t x104 = -117;
	volatile uint32_t t25 = 2U;

	t25 = (x101&((x102/x103)<x104));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	static uint32_t x107 = 852601U;
	int16_t x108 = 3822;
	volatile uint32_t t26 = 341U;

	t26 = (x105&((x106/x107)<x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	int64_t x110 = 81LL;
	uint32_t x111 = UINT32_MAX;
	int64_t t27 = -14855515382934LL;

	t27 = (x109&((x110/x111)<x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 39U;
	static int16_t x114 = -8514;
	uint8_t x115 = 2U;
	int16_t x116 = INT16_MAX;
	uint32_t t28 = 744U;

	t28 = (x113&((x114/x115)<x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int64_t x119 = -1LL;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 7587297;

	t29 = (x117&((x118/x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x123 = 742LL;
	int64_t x124 = -1LL;
	volatile uint32_t t30 = 195678U;

	t30 = (x121&((x122/x123)<x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 20818U;
	volatile int64_t x126 = INT64_MAX;
	static int64_t x127 = INT64_MAX;
	uint16_t x128 = 27326U;
	volatile int32_t t31 = -74213;

	t31 = (x125&((x126/x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 0LL;
	int16_t x132 = 1951;
	int64_t t32 = -12733316748LL;

	t32 = (x129&((x130/x131)<x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 61;
	volatile int64_t x134 = 730538021634559LL;
	static int16_t x135 = INT16_MAX;
	static volatile int32_t t33 = -135496086;

	t33 = (x133&((x134/x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 15U;
	static uint16_t x138 = 4U;
	volatile int32_t x140 = -34156740;
	uint32_t t34 = 3721U;

	t34 = (x137&((x138/x139)<x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int32_t x142 = -834558;
	int32_t x143 = INT32_MAX;

	t35 = (x141&((x142/x143)<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	uint16_t x146 = 10U;
	int16_t x147 = INT16_MIN;
	volatile uint64_t x148 = 3LLU;
	volatile int32_t t36 = -178506465;

	t36 = (x145&((x146/x147)<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	static uint16_t x156 = UINT16_MAX;
	int32_t t37 = -42338;

	t37 = (x153&((x154/x155)<x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 2U;
	int16_t x159 = INT16_MIN;
	volatile int32_t t38 = -4;

	t38 = (x157&((x158/x159)<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	static uint64_t x162 = 7873765LLU;
	uint16_t x163 = UINT16_MAX;
	volatile int16_t x164 = -1;
	int32_t t39 = -12779366;

	t39 = (x161&((x162/x163)<x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 9818U;
	int16_t x166 = INT16_MAX;
	volatile uint8_t x167 = 1U;
	static uint32_t t40 = 1830U;

	t40 = (x165&((x166/x167)<x168));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 1U;
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t t41 = -846;

	t41 = (x169&((x170/x171)<x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = UINT32_MAX;
	static volatile int8_t x175 = -56;
	uint32_t x176 = 579168166U;
	volatile uint32_t t42 = 113958U;

	t42 = (x173&((x174/x175)<x176));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 15107U;
	volatile int16_t x178 = INT16_MIN;
	volatile int8_t x179 = -1;
	uint32_t x180 = 4190892U;
	static volatile int32_t t43 = 155978741;

	t43 = (x177&((x178/x179)<x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = INT8_MIN;
	uint16_t x182 = 16952U;
	uint32_t x183 = 152270202U;
	uint64_t x184 = 187154491002797LLU;
	int32_t t44 = -1;

	t44 = (x181&((x182/x183)<x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = INT32_MAX;
	uint64_t x186 = 26290186LLU;
	volatile int64_t x188 = 2867217503470LL;
	volatile int32_t t45 = -46;

	t45 = (x185&((x186/x187)<x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MAX;

	t46 = (x189&((x190/x191)<x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 162;
	static int32_t x194 = 1583356;
	int64_t x196 = INT64_MIN;
	volatile int32_t t47 = -962;

	t47 = (x193&((x194/x195)<x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x197 = 15754U;
	static int32_t x199 = 261941222;
	static uint16_t x200 = UINT16_MAX;
	int32_t t48 = -968058;

	t48 = (x197&((x198/x199)<x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MIN;
	static int8_t x202 = INT8_MAX;
	volatile uint16_t x203 = 6U;
	volatile int32_t x204 = -62;
	volatile int64_t t49 = 246494065654440LL;

	t49 = (x201&((x202/x203)<x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -112534;
	volatile uint32_t x206 = 5518674U;
	static int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t50 = -34;

	t50 = (x205&((x206/x207)<x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x212 = 1856;
	static volatile int32_t t51 = -23;

	t51 = (x209&((x210/x211)<x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x215 = UINT8_MAX;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t52 = -3366488;

	t52 = (x213&((x214/x215)<x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	int64_t x218 = -1LL;
	static int16_t x219 = INT16_MIN;
	int32_t x220 = -1;

	t53 = (x217&((x218/x219)<x220));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x221 = 2349869LLU;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t x224 = INT32_MIN;

	t54 = (x221&((x222/x223)<x224));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = INT64_MIN;
	static int32_t x228 = -1;
	volatile int32_t t55 = -630;

	t55 = (x225&((x226/x227)<x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -10;
	int16_t x230 = INT16_MIN;
	volatile int64_t x231 = INT64_MAX;
	static volatile int64_t x232 = -1LL;

	t56 = (x229&((x230/x231)<x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x235 = 2U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t57 = -11322;

	t57 = (x233&((x234/x235)<x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 99U;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	volatile int16_t x240 = INT16_MAX;

	t58 = (x237&((x238/x239)<x240));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	volatile int32_t t59 = 17487290;

	t59 = (x241&((x242/x243)<x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	volatile int32_t x247 = -1;
	uint32_t x248 = UINT32_MAX;
	static volatile int32_t t60 = 2;

	t60 = (x245&((x246/x247)<x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x250 = 1620397272602930LLU;
	int32_t x251 = INT32_MAX;
	volatile uint32_t t61 = 386U;

	t61 = (x249&((x250/x251)<x252));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 5949368LLU;
	uint64_t x254 = 232564829LLU;
	int32_t x255 = INT32_MAX;
	static volatile uint64_t t62 = 507475933954679846LLU;

	t62 = (x253&((x254/x255)<x256));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 1;
	int64_t x258 = INT64_MIN;
	static int32_t x259 = 972916590;
	static int32_t t63 = 1613;

	t63 = (x257&((x258/x259)<x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint8_t x262 = 99U;
	uint32_t x264 = 113U;
	uint32_t t64 = 491795U;

	t64 = (x261&((x262/x263)<x264));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MAX;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;
	int32_t t65 = -51949;

	t65 = (x265&((x266/x267)<x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = 265219821673471LL;
	static uint64_t x270 = UINT64_MAX;
	int8_t x271 = -1;
	uint64_t x272 = 258515558176413LLU;
	int64_t t66 = 7250754LL;

	t66 = (x269&((x270/x271)<x272));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MAX;
	static uint32_t x274 = UINT32_MAX;
	static uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 7U;

	t67 = (x273&((x274/x275)<x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	uint8_t x278 = 50U;
	static volatile uint16_t x279 = 946U;
	static int8_t x280 = INT8_MIN;

	t68 = (x277&((x278/x279)<x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = -1;

	t69 = (x281&((x282/x283)<x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -1;
	int8_t x286 = -11;
	int64_t x288 = -1LL;
	int32_t t70 = -7;

	t70 = (x285&((x286/x287)<x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x290 = -72LL;
	uint64_t x291 = 18493149737LLU;
	static int32_t x292 = INT32_MAX;
	volatile uint64_t t71 = 1296537287744693LLU;

	t71 = (x289&((x290/x291)<x292));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = 118U;
	volatile uint16_t x294 = UINT16_MAX;
	int8_t x296 = 10;
	int32_t t72 = 7101020;

	t72 = (x293&((x294/x295)<x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x298 = INT8_MIN;
	int64_t x299 = 341LL;
	volatile uint32_t x300 = 25U;
	int32_t t73 = 162371;

	t73 = (x297&((x298/x299)<x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x303 = 8193LLU;
	int32_t x304 = INT32_MIN;
	int32_t t74 = -2;

	t74 = (x301&((x302/x303)<x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	uint8_t x307 = 8U;
	int64_t x308 = INT64_MIN;
	int32_t t75 = -178;

	t75 = (x305&((x306/x307)<x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = 2;
	volatile uint16_t x310 = 1019U;
	int64_t x311 = INT64_MIN;
	volatile uint8_t x312 = 19U;
	int32_t t76 = -97;

	t76 = (x309&((x310/x311)<x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = 2012;
	static int32_t x315 = 196121720;
	int32_t t77 = -484870;

	t77 = (x313&((x314/x315)<x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = -1LL;
	int64_t x318 = -1LL;
	static int16_t x319 = INT16_MAX;
	static int64_t x320 = INT64_MIN;
	int64_t t78 = -383492294643LL;

	t78 = (x317&((x318/x319)<x320));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = 13;
	volatile int32_t x322 = -3795;
	volatile int8_t x323 = 23;
	int8_t x324 = -1;
	static int32_t t79 = -12319;

	t79 = (x321&((x322/x323)<x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x327 = INT32_MIN;
	volatile int32_t x328 = 225640;
	volatile int32_t t80 = 13;

	t80 = (x325&((x326/x327)<x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	static uint64_t x332 = 57LLU;
	volatile int32_t t81 = 240549035;

	t81 = (x329&((x330/x331)<x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 12U;
	static int16_t x336 = -1;
	volatile int32_t t82 = 18752579;

	t82 = (x333&((x334/x335)<x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x337 = -2;
	volatile uint8_t x339 = UINT8_MAX;
	uint8_t x340 = 0U;

	t83 = (x337&((x338/x339)<x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x341 = -1;
	static int8_t x343 = INT8_MIN;
	volatile uint64_t x344 = 11825752175184673LLU;
	int32_t t84 = -26;

	t84 = (x341&((x342/x343)<x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = 28140773390772LLU;
	volatile int64_t x346 = INT64_MAX;
	int8_t x347 = -1;
	int16_t x348 = 126;
	volatile uint64_t t85 = 19LLU;

	t85 = (x345&((x346/x347)<x348));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x350 = INT64_MAX;
	volatile uint16_t x351 = 451U;
	volatile int32_t t86 = -6748;

	t86 = (x349&((x350/x351)<x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = 2972156LLU;
	static volatile int32_t x355 = 94306841;
	int16_t x356 = INT16_MIN;
	volatile int32_t t87 = -2;

	t87 = (x353&((x354/x355)<x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x357 = 26;
	int32_t x358 = -1;
	volatile int32_t x359 = 28;
	int32_t x360 = -55251;
	volatile int32_t t88 = -588;

	t88 = (x357&((x358/x359)<x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x363 = 75356973868460LL;
	volatile int32_t t89 = -4658;

	t89 = (x361&((x362/x363)<x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = 51130451;
	uint32_t x366 = 209U;
	int16_t x367 = -1;
	uint16_t x368 = 103U;
	int32_t t90 = -32216980;

	t90 = (x365&((x366/x367)<x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int16_t x370 = INT16_MIN;
	int16_t x371 = -7;
	volatile int64_t x372 = -1LL;
	int32_t t91 = -7;

	t91 = (x369&((x370/x371)<x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x373 = 19197038871LLU;
	uint64_t x375 = 89804071LLU;
	int8_t x376 = INT8_MIN;
	uint64_t t92 = 64617258026077LLU;

	t92 = (x373&((x374/x375)<x376));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MAX;

	t93 = (x377&((x378/x379)<x380));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int64_t t94 = -646LL;

	t94 = (x381&((x382/x383)<x384));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x385 = -1;
	static volatile uint64_t x386 = 90LLU;
	int64_t x388 = INT64_MAX;
	static volatile int32_t t95 = 450166;

	t95 = (x385&((x386/x387)<x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x389 = UINT64_MAX;
	uint8_t x390 = UINT8_MAX;
	volatile uint64_t t96 = 239168284458972LLU;

	t96 = (x389&((x390/x391)<x392));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x394 = 7187U;
	volatile int32_t x395 = INT32_MAX;
	uint64_t t97 = 1946949093LLU;

	t97 = (x393&((x394/x395)<x396));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x398 = 10110U;
	uint32_t x399 = 104U;
	uint16_t x400 = 3U;
	volatile int32_t t98 = -55;

	t98 = (x397&((x398/x399)<x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x401 = 15U;
	int64_t x402 = -943LL;
	static volatile int16_t x403 = INT16_MIN;
	static int32_t t99 = 310956498;

	t99 = (x401&((x402/x403)<x404));

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

