#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
int8_t x3 = -1;
static uint64_t t0 = 113868LLU;
int32_t x12 = -32088;
int8_t x13 = -62;
uint8_t x14 = 42U;
static int64_t x19 = -1LL;
uint64_t x26 = 31881832LLU;
volatile uint64_t t5 = 7362347531254042106LLU;
volatile int16_t x36 = -427;
static uint64_t x48 = 1224194673LLU;
uint64_t x53 = 2257466415962LLU;
int16_t x55 = -200;
volatile int64_t x56 = -1LL;
static int8_t x65 = 34;
static int16_t x72 = INT16_MAX;
int8_t x74 = INT8_MIN;
uint64_t x75 = 1003290332LLU;
uint64_t t13 = 412LLU;
static uint16_t x77 = UINT16_MAX;
volatile int32_t t14 = -3331;
int64_t x83 = 26484006973527389LL;
volatile int64_t t17 = -24LL;
volatile uint64_t x96 = UINT64_MAX;
int8_t x100 = 6;
int32_t t19 = 1969492;
uint16_t x103 = 16U;
volatile int8_t x105 = -28;
uint8_t x113 = 15U;
static uint32_t x119 = UINT32_MAX;
static volatile uint32_t t23 = 4275U;
uint32_t x121 = UINT32_MAX;
volatile int64_t t29 = 0LL;
int16_t x149 = INT16_MAX;
uint64_t x152 = 83LLU;
int32_t x153 = 2;
static volatile int64_t t31 = -479LL;
static int8_t x161 = -1;
uint64_t t32 = 9020958LLU;
int64_t x168 = INT64_MIN;
int16_t x170 = -1;
static uint32_t t34 = 33970U;
int8_t x182 = -1;
volatile uint64_t x185 = 2524173682641LLU;
int32_t x186 = INT32_MIN;
volatile uint32_t x199 = 60068U;
int16_t x205 = INT16_MIN;
uint8_t x208 = 6U;
volatile int8_t x209 = INT8_MIN;
int32_t x219 = -1;
static int32_t t43 = 0;
volatile int8_t x227 = INT8_MIN;
static int64_t x228 = -9687LL;
int16_t x248 = INT16_MIN;
uint32_t t46 = 502603299U;
uint16_t x249 = 0U;
static int32_t x258 = INT32_MIN;
static int32_t t49 = -3;
int8_t x274 = -1;
static volatile uint64_t t50 = 3576587805071152399LLU;
int8_t x278 = -3;
int32_t t52 = -211;
int16_t x292 = -1;
static volatile int8_t x308 = INT8_MAX;
static uint8_t x311 = 47U;
static volatile uint8_t x322 = 0U;
uint64_t t60 = 4480789585595953LLU;
int64_t x329 = -137LL;
int16_t x332 = 3;
static volatile int32_t x356 = 2146;
uint64_t t63 = 58260094111696LLU;
int64_t x357 = INT64_MIN;
static uint32_t t66 = 0U;
int16_t x381 = INT16_MIN;
int32_t t70 = 3;
uint32_t x390 = UINT32_MAX;
uint64_t x391 = 14228391035LLU;
uint32_t x399 = 4038U;
uint64_t t73 = 7797344098939235LLU;
uint32_t x413 = UINT32_MAX;
volatile uint32_t t75 = UINT32_MAX;
volatile int64_t x417 = -1LL;
uint64_t x418 = UINT64_MAX;
int64_t x420 = INT64_MIN;
uint64_t t76 = 93LLU;
uint64_t x423 = UINT64_MAX;
uint8_t x425 = 1U;
static int64_t x429 = -1LL;
int16_t x437 = 51;
int32_t x451 = -30738;
static uint64_t x458 = 62686495LLU;
volatile int64_t t84 = 32801207055669898LL;
uint16_t x468 = UINT16_MAX;
int32_t t87 = -3;
volatile int32_t x479 = INT32_MAX;
int16_t x480 = -1;
int32_t x486 = -1;
volatile int32_t x498 = -1;
uint16_t x500 = 3U;
int32_t x503 = -1;
static int32_t x525 = 9;
int32_t t96 = -962221;
volatile uint32_t x536 = 3U;
int8_t x546 = 2;
uint32_t x547 = 3093U;
static int16_t x551 = -48;
uint64_t t99 = 435501405854448LLU;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	volatile uint64_t x4 = 5995LLU;

	t0 = ((x1*x2)&(x3%x4));

	if (t0 != 5377LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = -2077865LL;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = 824LL;
	int64_t t1 = 109825064LL;

	t1 = ((x9*x10)&(x11%x12));

	if (t1 != 808LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MAX;
	int32_t t2 = -7384497;

	t2 = ((x13*x14)&(x15%x16));

	if (t2 != -2608) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int8_t x18 = -2;
	volatile int8_t x20 = INT8_MAX;
	int64_t t3 = -1107365848LL;

	t3 = ((x17*x18)&(x19%x20));

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x22 = -53;
	int16_t x23 = -1;
	volatile int32_t x24 = INT32_MIN;
	int32_t t4 = -38260914;

	t4 = ((x21*x22)&(x23%x24));

	if (t4 != 6784) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x27 = 0U;
	int64_t x28 = -1LL;

	t5 = ((x25*x26)&(x27%x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	static volatile int16_t x32 = -435;
	int64_t t6 = -61889198LL;

	t6 = ((x29*x30)&(x31%x32));

	if (t6 != -8355840LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 59U;
	static uint64_t x34 = 185948215244954527LLU;
	int16_t x35 = INT16_MIN;
	volatile uint64_t t7 = 69492294824235009LLU;

	t7 = ((x33*x34)&(x35%x36));

	if (t7 != 10970944699452316804LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = -1;
	uint64_t x46 = 7503561090155270LLU;
	int8_t x47 = 24;
	uint64_t t8 = 346457464106LLU;

	t8 = ((x45*x46)&(x47%x48));

	if (t8 != 24LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	int64_t x50 = 2180LL;
	uint16_t x51 = 5U;
	int8_t x52 = -1;
	volatile int64_t t9 = -3791LL;

	t9 = ((x49*x50)&(x51%x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x54 = -1;
	uint64_t t10 = 435336932968LLU;

	t10 = ((x53*x54)&(x55%x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x66 = INT16_MIN;
	static uint32_t x67 = UINT32_MAX;
	static int16_t x68 = INT16_MIN;
	volatile uint32_t t11 = 1U;

	t11 = ((x65*x66)&(x67%x68));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x69 = 47LL;
	int16_t x70 = 148;
	static uint8_t x71 = UINT8_MAX;
	int64_t t12 = 993LL;

	t12 = ((x69*x70)&(x71%x72));

	if (t12 != 44LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x73 = 28U;
	volatile int64_t x76 = -1LL;

	t13 = ((x73*x74)&(x75%x76));

	if (t13 != 1003287040LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x78 = 16U;
	uint16_t x79 = 2750U;
	static int8_t x80 = -1;

	t14 = ((x77*x78)&(x79%x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = 18723929412020992LLU;
	uint8_t x84 = 26U;
	volatile uint64_t t15 = 7106093288629LLU;

	t15 = ((x81*x82)&(x83%x84));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -1LL;
	int16_t x86 = -3878;
	int64_t x87 = INT64_MAX;
	int16_t x88 = INT16_MAX;
	int64_t t16 = 2547731858912642LL;

	t16 = ((x85*x86)&(x87%x88));

	if (t16 != 6LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 693U;
	int16_t x90 = INT16_MIN;
	volatile int64_t x91 = INT64_MAX;
	int8_t x92 = INT8_MAX;

	t17 = ((x89*x90)&(x91%x92));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MAX;
	static uint64_t t18 = 4236552419692724749LLU;

	t18 = ((x93*x94)&(x95%x96));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = -1;
	volatile int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MAX;

	t19 = ((x97*x98)&(x99%x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x101 = 478796946999LLU;
	static int64_t x102 = INT64_MIN;
	int8_t x104 = 1;
	static volatile uint64_t t20 = 51442284553476498LLU;

	t20 = ((x101*x102)&(x103%x104));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x106 = -10561;
	static int32_t x107 = INT32_MIN;
	int8_t x108 = -1;
	static volatile int32_t t21 = 19329842;

	t21 = ((x105*x106)&(x107%x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x114 = -1;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t22 = -7;

	t22 = ((x113*x114)&(x115%x116));

	if (t22 != 32753) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = -58;
	static uint32_t x118 = 3U;
	volatile uint8_t x120 = 32U;

	t23 = ((x117*x118)&(x119%x120));

	if (t23 != 18U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MAX;
	volatile int16_t x124 = INT16_MIN;
	volatile uint32_t t24 = 847311332U;

	t24 = ((x121*x122)&(x123%x124));

	if (t24 != 128U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x125 = 4U;
	static int16_t x126 = 9809;
	volatile int64_t x127 = INT64_MIN;
	static int32_t x128 = -1;
	volatile int64_t t25 = -567598409741805618LL;

	t25 = ((x125*x126)&(x127%x128));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = 211LL;
	static int8_t x130 = -28;
	int16_t x131 = 1;
	volatile uint32_t x132 = 1977U;
	volatile int64_t t26 = 104830374LL;

	t26 = ((x129*x130)&(x131%x132));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = 11305368855569081LL;
	int8_t x138 = -1;
	int32_t x139 = -251519;
	static uint8_t x140 = 39U;
	volatile int64_t t27 = -306979839961635LL;

	t27 = ((x137*x138)&(x139%x140));

	if (t27 != -11305368855569088LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x141 = INT8_MAX;
	int8_t x142 = 17;
	static volatile uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MIN;
	volatile uint32_t t28 = 29471611U;

	t28 = ((x141*x142)&(x143%x144));

	if (t28 != 2159U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = 30426597775LL;
	volatile uint8_t x146 = 0U;
	int64_t x147 = INT64_MIN;
	static int32_t x148 = -3;

	t29 = ((x145*x146)&(x147%x148));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x150 = 10U;
	static volatile int8_t x151 = INT8_MIN;
	static uint64_t t30 = 30084LLU;

	t30 = ((x149*x150)&(x151%x152));

	if (t30 != 66LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x154 = -1;
	int8_t x155 = -1;
	int64_t x156 = -621LL;

	t31 = ((x153*x154)&(x155%x156));

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x162 = 237355070049LLU;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = -1;

	t32 = ((x161*x162)&(x163%x164));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 3917U;
	volatile int16_t x166 = -70;
	static volatile int16_t x167 = INT16_MIN;
	int64_t t33 = 2187480000LL;

	t33 = ((x165*x166)&(x167%x168));

	if (t33 != -294912LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x169 = -1;
	int8_t x171 = 3;
	uint32_t x172 = 8859U;

	t34 = ((x169*x170)&(x171%x172));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1;
	int32_t x178 = -120817168;
	uint8_t x179 = UINT8_MAX;
	static volatile int32_t x180 = INT32_MAX;
	volatile int32_t t35 = 2394895;

	t35 = ((x177*x178)&(x179%x180));

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = 6038106LLU;
	int32_t x183 = -56747;
	static int8_t x184 = INT8_MIN;
	uint64_t t36 = 1LLU;

	t36 = ((x181*x182)&(x183%x184));

	if (t36 != 18446744073703513476LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MAX;
	uint64_t t37 = 53676LLU;

	t37 = ((x185*x186)&(x187%x188));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 234U;
	uint16_t x198 = 1173U;
	static volatile int64_t x200 = INT64_MIN;
	volatile int64_t t38 = 3426256307954LL;

	t38 = ((x197*x198)&(x199%x200));

	if (t38 != 8224LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 2LLU;
	uint8_t x202 = UINT8_MAX;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	volatile uint64_t t39 = 288834046530471LLU;

	t39 = ((x201*x202)&(x203%x204));

	if (t39 != 126LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x206 = 6069U;
	int8_t x207 = INT8_MIN;
	int32_t t40 = 46;

	t40 = ((x205*x206)&(x207%x208));

	if (t40 != -198868992) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x210 = UINT16_MAX;
	volatile uint16_t x211 = UINT16_MAX;
	static uint64_t x212 = UINT64_MAX;
	volatile uint64_t t41 = 377LLU;

	t41 = ((x209*x210)&(x211%x212));

	if (t41 != 128LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 1637U;
	static int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t42 = 3591294;

	t42 = ((x213*x214)&(x215%x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 1U;
	static int8_t x218 = -1;
	volatile uint8_t x220 = UINT8_MAX;

	t43 = ((x217*x218)&(x219%x220));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x225 = UINT32_MAX;
	volatile uint16_t x226 = 42U;
	volatile int64_t t44 = -10550924593981LL;

	t44 = ((x225*x226)&(x227%x228));

	if (t44 != 4294967168LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x238 = UINT16_MAX;
	static int64_t x239 = -142LL;
	int32_t x240 = INT32_MIN;
	static volatile int64_t t45 = 19LL;

	t45 = ((x237*x238)&(x239%x240));

	if (t45 != -8388608LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x245 = 0U;
	static volatile int32_t x246 = 837;
	uint32_t x247 = 124899325U;

	t46 = ((x245*x246)&(x247%x248));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x250 = INT64_MAX;
	static int64_t x251 = -1LL;
	uint8_t x252 = UINT8_MAX;
	int64_t t47 = 38035476433863LL;

	t47 = ((x249*x250)&(x251%x252));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 2U;
	uint16_t x259 = 1U;
	int64_t x260 = INT64_MAX;
	int64_t t48 = 35204387126296614LL;

	t48 = ((x257*x258)&(x259%x260));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x261 = -1;
	static volatile int16_t x262 = 0;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MIN;

	t49 = ((x261*x262)&(x263%x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x273 = -1;
	static int64_t x275 = -1507614444LL;
	uint64_t x276 = 22914LLU;

	t50 = ((x273*x274)&(x275%x276));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x277 = 8;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MAX;
	volatile int64_t t51 = 35651570436098930LL;

	t51 = ((x277*x278)&(x279%x280));

	if (t51 != -24LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = 480054108;
	int32_t x282 = 0;
	volatile int16_t x283 = -39;
	volatile int8_t x284 = INT8_MAX;

	t52 = ((x281*x282)&(x283%x284));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x285 = -8;
	volatile int32_t x286 = -1;
	static uint64_t x287 = 208114664795LLU;
	int8_t x288 = -7;
	volatile uint64_t t53 = 22165LLU;

	t53 = ((x285*x286)&(x287%x288));

	if (t53 != 8LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x289 = 502141LLU;
	int64_t x290 = INT64_MIN;
	uint16_t x291 = 4315U;
	uint64_t t54 = 101396270183845LLU;

	t54 = ((x289*x290)&(x291%x292));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = -15LL;
	static int16_t x300 = -32;
	uint64_t t55 = 10175685256087880LLU;

	t55 = ((x297*x298)&(x299%x300));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x305 = 21636;
	uint64_t x306 = 10895423722437LLU;
	uint8_t x307 = 12U;
	uint64_t t56 = 4556555563246LLU;

	t56 = ((x305*x306)&(x307%x308));

	if (t56 != 4LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x309 = -38244LL;
	uint64_t x310 = 3442LLU;
	int8_t x312 = INT8_MAX;
	static volatile uint64_t t57 = 224LLU;

	t57 = ((x309*x310)&(x311%x312));

	if (t57 != 40LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = 12U;
	static volatile int32_t x314 = -1120;
	int32_t x315 = -1;
	volatile int64_t x316 = INT64_MIN;
	int64_t t58 = 25LL;

	t58 = ((x313*x314)&(x315%x316));

	if (t58 != -13440LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x321 = 117U;
	volatile int16_t x323 = -1;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t59 = -57388;

	t59 = ((x321*x322)&(x323%x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x325 = 19309956U;
	int8_t x326 = INT8_MIN;
	uint32_t x327 = UINT32_MAX;
	static uint64_t x328 = 31986LLU;

	t60 = ((x325*x326)&(x327%x328));

	if (t60 != 14848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x330 = 250LL;
	int64_t x331 = 113225040LL;
	static volatile int64_t t61 = -107LL;

	t61 = ((x329*x330)&(x331%x332));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = -1;
	int16_t x342 = -1;
	uint64_t x343 = 2599499181678290054LLU;
	volatile uint16_t x344 = 14U;
	static uint64_t t62 = 263348839876996668LLU;

	t62 = ((x341*x342)&(x343%x344));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x353 = 8U;
	int32_t x354 = -1;
	static volatile uint64_t x355 = 6349685762LLU;

	t63 = ((x353*x354)&(x355%x356));

	if (t63 != 96LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x358 = 1U;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	int64_t t64 = -139271290999LL;

	t64 = ((x357*x358)&(x359%x360));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x361 = INT32_MIN;
	uint8_t x362 = 0U;
	int8_t x363 = 3;
	int64_t x364 = INT64_MAX;
	int64_t t65 = 0LL;

	t65 = ((x361*x362)&(x363%x364));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x365 = 968U;
	uint32_t x366 = 1988U;
	int8_t x367 = -4;
	int8_t x368 = INT8_MIN;

	t66 = ((x365*x366)&(x367%x368));

	if (t66 != 1924384U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x369 = 40007582;
	static volatile uint8_t x370 = 5U;
	volatile int8_t x371 = -1;
	volatile int16_t x372 = INT16_MAX;
	int32_t t67 = 1;

	t67 = ((x369*x370)&(x371%x372));

	if (t67 != 200037910) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = -1LL;
	uint8_t x375 = 6U;
	int32_t x376 = -6855024;
	int64_t t68 = -260348943LL;

	t68 = ((x373*x374)&(x375%x376));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x382 = -1;
	uint32_t x383 = 643424551U;
	int8_t x384 = INT8_MIN;
	uint32_t t69 = 309960U;

	t69 = ((x381*x382)&(x383%x384));

	if (t69 != 32768U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x385 = -3162;
	int8_t x386 = -1;
	int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MAX;

	t70 = ((x385*x386)&(x387%x388));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x389 = -3995621LL;
	int32_t x392 = INT32_MIN;
	uint64_t t71 = 1LLU;

	t71 = ((x389*x390)&(x391%x392));

	if (t71 != 12886213729LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = 0;
	static volatile int8_t x400 = INT8_MAX;
	volatile uint64_t t72 = 647959285448015909LLU;

	t72 = ((x397*x398)&(x399%x400));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x401 = 6724988LLU;
	volatile uint8_t x402 = 17U;
	int64_t x403 = 539992139890994LL;
	int32_t x404 = -1;

	t73 = ((x401*x402)&(x403%x404));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = 5U;
	int8_t x406 = -1;
	int64_t x407 = -1280017LL;
	static int32_t x408 = INT32_MAX;
	int64_t t74 = -22281622306LL;

	t74 = ((x405*x406)&(x407%x408));

	if (t74 != -1280021LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x414 = 1;
	volatile int8_t x415 = -1;
	int16_t x416 = INT16_MAX;

	t75 = ((x413*x414)&(x415%x416));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x419 = 37U;

	t76 = ((x417*x418)&(x419%x420));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x421 = -391950462856574LL;
	uint8_t x422 = 1U;
	static int32_t x424 = INT32_MIN;
	uint64_t t77 = 677663LLU;

	t77 = ((x421*x422)&(x423%x424));

	if (t77 != 1810125442LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x426 = UINT16_MAX;
	volatile int8_t x427 = -6;
	int16_t x428 = 30;
	int32_t t78 = -58;

	t78 = ((x425*x426)&(x427%x428));

	if (t78 != 65530) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x430 = -1LL;
	static volatile int32_t x431 = INT32_MIN;
	volatile int8_t x432 = INT8_MAX;
	static int64_t t79 = 92570838LL;

	t79 = ((x429*x430)&(x431%x432));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x438 = INT16_MAX;
	static uint8_t x439 = 1U;
	int32_t x440 = 3;
	volatile int32_t t80 = 0;

	t80 = ((x437*x438)&(x439%x440));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x445 = INT16_MAX;
	int16_t x446 = INT16_MIN;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = -1LL;
	volatile int64_t t81 = -1LL;

	t81 = ((x445*x446)&(x447%x448));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x449 = -1LL;
	int16_t x450 = INT16_MIN;
	static uint64_t x452 = 45937120202LLU;
	volatile uint64_t t82 = 1805LLU;

	t82 = ((x449*x450)&(x451%x452));

	if (t82 != 32768LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x457 = 7760567LL;
	uint64_t x459 = 3632273LLU;
	uint32_t x460 = 2U;
	uint64_t t83 = 292LLU;

	t83 = ((x457*x458)&(x459%x460));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x461 = -2011LL;
	uint16_t x462 = UINT16_MAX;
	volatile int16_t x463 = -1;
	int16_t x464 = INT16_MAX;

	t84 = ((x461*x462)&(x463%x464));

	if (t84 != -131790885LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x465 = 4;
	int8_t x466 = INT8_MAX;
	int64_t x467 = 8192815LL;
	int64_t t85 = -1LL;

	t85 = ((x465*x466)&(x467%x468));

	if (t85 != 428LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x469 = -131;
	volatile int8_t x470 = INT8_MIN;
	static uint8_t x471 = 0U;
	uint64_t x472 = 524640LLU;
	static volatile uint64_t t86 = 800079157027LLU;

	t86 = ((x469*x470)&(x471%x472));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x473 = 0;
	int16_t x474 = 3;
	int32_t x475 = -1;
	uint16_t x476 = UINT16_MAX;

	t87 = ((x473*x474)&(x475%x476));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x477 = UINT32_MAX;
	volatile int8_t x478 = 50;
	volatile uint32_t t88 = 1387554U;

	t88 = ((x477*x478)&(x479%x480));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x485 = 529U;
	static volatile uint32_t x487 = 261801U;
	static volatile int32_t x488 = -578623666;
	uint32_t t89 = 16072U;

	t89 = ((x485*x486)&(x487%x488));

	if (t89 != 261289U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x493 = -1;
	volatile int16_t x494 = INT16_MIN;
	int32_t x495 = 382723945;
	volatile uint64_t x496 = UINT64_MAX;
	volatile uint64_t t90 = 42150899084LLU;

	t90 = ((x493*x494)&(x495%x496));

	if (t90 != 32768LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x497 = UINT64_MAX;
	static int64_t x499 = INT64_MAX;
	uint64_t t91 = 26375430LLU;

	t91 = ((x497*x498)&(x499%x500));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x501 = 922011106519LLU;
	static int16_t x502 = INT16_MAX;
	int16_t x504 = -1;
	uint64_t t92 = 13LLU;

	t92 = ((x501*x502)&(x503%x504));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x505 = -9706690058LL;
	int8_t x506 = INT8_MIN;
	static int64_t x507 = INT64_MIN;
	static int16_t x508 = INT16_MAX;
	static volatile int64_t t93 = 13028642862120LL;

	t93 = ((x505*x506)&(x507%x508));

	if (t93 != 1242456327424LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x513 = INT16_MAX;
	static volatile int64_t x514 = 837919LL;
	uint8_t x515 = UINT8_MAX;
	volatile int8_t x516 = INT8_MIN;
	int64_t t94 = 313799943LL;

	t94 = ((x513*x514)&(x515%x516));

	if (t94 != 97LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x521 = INT16_MIN;
	uint64_t x522 = UINT64_MAX;
	volatile int64_t x523 = INT64_MAX;
	volatile int64_t x524 = INT64_MIN;
	uint64_t t95 = 354865LLU;

	t95 = ((x521*x522)&(x523%x524));

	if (t95 != 32768LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x526 = INT8_MIN;
	int8_t x527 = -7;
	volatile int32_t x528 = INT32_MIN;

	t96 = ((x525*x526)&(x527%x528));

	if (t96 != -1152) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = -1;
	uint16_t x534 = 736U;
	int64_t x535 = INT64_MAX;
	static volatile int64_t t97 = 1841484820LL;

	t97 = ((x533*x534)&(x535%x536));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x545 = 2580U;
	volatile uint32_t x548 = UINT32_MAX;
	static uint32_t t98 = 9956731U;

	t98 = ((x545*x546)&(x547%x548));

	if (t98 != 1024U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x549 = 1752725315LLU;
	int8_t x550 = 7;
	uint32_t x552 = 321375U;

	t99 = ((x549*x550)&(x551%x552));

	if (t99 != 65668LLU) { NG(); } else { ; }
	
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

