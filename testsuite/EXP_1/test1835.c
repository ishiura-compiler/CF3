#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 53710284U;
uint8_t x4 = UINT8_MAX;
int32_t t3 = 11;
volatile uint64_t x17 = UINT64_MAX;
int32_t x27 = INT32_MIN;
static int8_t x32 = INT8_MIN;
volatile int8_t x35 = INT8_MIN;
uint8_t x37 = 2U;
int16_t x38 = 3;
static volatile int32_t x40 = -592684;
uint32_t x43 = UINT32_MAX;
volatile int32_t t11 = -13319;
volatile uint32_t x56 = 499149U;
volatile uint64_t t16 = 14234837774697LLU;
int16_t x73 = INT16_MIN;
int16_t x81 = INT16_MIN;
int32_t t19 = 1632;
int32_t x92 = -4887;
static int64_t x96 = INT64_MAX;
int64_t t22 = 98624874275LL;
int8_t x106 = INT8_MIN;
volatile uint32_t t24 = 173U;
uint64_t x110 = 70755344608027795LLU;
uint16_t x120 = 703U;
int8_t x125 = INT8_MIN;
volatile int64_t t29 = 6663057LL;
int8_t x141 = INT8_MAX;
int64_t x143 = 5750732LL;
int64_t t31 = -292592LL;
static int8_t x147 = -1;
static uint8_t x151 = UINT8_MAX;
uint8_t x157 = UINT8_MAX;
uint32_t x161 = 220U;
volatile uint16_t x166 = 1181U;
int32_t x170 = 140297;
uint8_t x171 = 7U;
static uint64_t t39 = 189800042LLU;
uint64_t x181 = UINT64_MAX;
static int64_t x182 = 119522LL;
static int8_t x184 = 1;
volatile int64_t x191 = -70015403164595LL;
volatile uint64_t t46 = 374529LLU;
int8_t x213 = INT8_MIN;
int8_t x218 = -1;
uint64_t x233 = UINT64_MAX;
uint64_t x236 = 43333289083888LLU;
volatile uint64_t t53 = 56608LLU;
int32_t x238 = -1;
uint16_t x243 = UINT16_MAX;
uint32_t x245 = UINT32_MAX;
uint64_t t58 = 12580LLU;
volatile int32_t x257 = INT32_MAX;
int32_t x259 = INT32_MIN;
int16_t x260 = INT16_MIN;
static uint32_t x276 = 15343U;
static uint64_t t63 = 14690352098578237LLU;
int8_t x277 = INT8_MAX;
int8_t x279 = INT8_MIN;
int8_t x282 = INT8_MIN;
int64_t x283 = INT64_MIN;
uint8_t x286 = 0U;
int32_t x293 = INT32_MAX;
static int64_t x298 = -378495022319LL;
uint64_t t69 = 489050145474290LLU;
uint8_t x303 = UINT8_MAX;
int32_t x306 = -1;
int64_t t71 = -295868LL;
int8_t x312 = 3;
volatile int64_t t73 = -23810801LL;
int16_t x319 = INT16_MAX;
int8_t x327 = 53;
int32_t t78 = 1;
uint8_t x337 = 0U;
int8_t x351 = INT8_MIN;
int32_t x357 = INT32_MIN;
int32_t x359 = 21089;
int32_t x360 = INT32_MIN;
int64_t t84 = 93643LL;
volatile int32_t x361 = -147808996;
uint64_t t85 = 116LLU;
int8_t x366 = INT8_MAX;
volatile int16_t x373 = -7;
static volatile int64_t x375 = 2979564424173658LL;
int64_t x380 = INT64_MAX;
int64_t x383 = INT64_MIN;
uint64_t x384 = 49337LLU;
static int8_t x391 = INT8_MIN;
volatile int32_t t91 = 15866;
int8_t x395 = 7;
int8_t x400 = -1;
int32_t x401 = INT32_MIN;
volatile int64_t x407 = INT64_MIN;
int8_t x411 = INT8_MIN;
static int32_t x414 = -1;
int8_t x416 = 1;
volatile uint8_t x418 = 7U;
int64_t x425 = INT64_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int16_t x2 = INT16_MAX;
	uint32_t t0 = 2247U;

	t0 = (((x1&x2)|x3)-x4);

	if (t0 != 53710080U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 4136U;
	uint64_t x6 = UINT64_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	int64_t x8 = 604LL;
	static volatile uint64_t t1 = 41429273428LLU;

	t1 = (((x5&x6)|x7)-x8);

	if (t1 != 64931LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 1470197U;
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 23717LLU;
	static int8_t x12 = INT8_MIN;
	uint64_t t2 = 10224020373LLU;

	t2 = (((x9&x10)|x11)-x12);

	if (t2 != 23925LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static volatile int32_t x14 = INT32_MIN;
	int8_t x15 = 1;
	int16_t x16 = INT16_MIN;

	t3 = (((x13&x14)|x15)-x16);

	if (t3 != -2147450879) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 146U;
	volatile int64_t x19 = -74596713297989LL;
	static uint64_t x20 = 7LLU;
	static uint64_t t4 = 32339893LLU;

	t4 = (((x17&x18)|x19)-x20);

	if (t4 != 18446669476996253620LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MAX;
	volatile int16_t x23 = INT16_MIN;
	int64_t x24 = -129920882028008LL;
	int64_t t5 = -7743LL;

	t5 = (((x21&x22)|x23)-x24);

	if (t5 != 129920881995367LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 20;
	int64_t x26 = -1LL;
	volatile int32_t x28 = -1;
	int64_t t6 = -949518LL;

	t6 = (((x25&x26)|x27)-x28);

	if (t6 != -2147483627LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 22;
	volatile int32_t x30 = INT32_MIN;
	static int64_t x31 = 456849219768341816LL;
	volatile int64_t t7 = -242364502362564LL;

	t7 = (((x29&x30)|x31)-x32);

	if (t7 != 456849219768341944LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = -3620LL;
	int8_t x36 = 0;
	static volatile int64_t t8 = -23115442553019283LL;

	t8 = (((x33&x34)|x35)-x36);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = -1;
	int32_t t9 = -2009614;

	t9 = (((x37&x38)|x39)-x40);

	if (t9 != 592683) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint8_t x42 = UINT8_MAX;
	static uint64_t x44 = 9149LLU;
	uint64_t t10 = 437841LLU;

	t10 = (((x41&x42)|x43)-x44);

	if (t10 != 4294958146LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x46 = -111;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = 6;

	t11 = (((x45&x46)|x47)-x48);

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MAX;
	uint64_t x51 = 888LLU;
	static int8_t x52 = INT8_MIN;
	uint64_t t12 = 52880LLU;

	t12 = (((x49&x50)|x51)-x52);

	if (t12 != 1016LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	int8_t x55 = -1;
	uint32_t t13 = 3038467U;

	t13 = (((x53&x54)|x55)-x56);

	if (t13 != 4294468146U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	int8_t x58 = 8;
	int8_t x59 = INT8_MAX;
	int64_t x60 = 146LL;
	int64_t t14 = 866196960015LL;

	t14 = (((x57&x58)|x59)-x60);

	if (t14 != -19LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 18;
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MIN;
	static volatile uint16_t x64 = 103U;
	static int32_t t15 = 207304097;

	t15 = (((x61&x62)|x63)-x64);

	if (t15 != -231) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 3757684U;
	uint64_t x67 = 586297LLU;
	uint32_t x68 = 17122477U;

	t16 = (((x65&x66)|x67)-x68);

	if (t16 != 18446744073693015436LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x70 = INT32_MAX;
	int64_t x71 = -1LL;
	int16_t x72 = 11032;
	volatile int64_t t17 = 51032270701533LL;

	t17 = (((x69&x70)|x71)-x72);

	if (t17 != -11033LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MAX;
	uint32_t t18 = 4741U;

	t18 = (((x73&x74)|x75)-x76);

	if (t18 != 2147450881U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x82 = UINT16_MAX;
	static int32_t x83 = -4555118;
	static volatile int16_t x84 = -1;

	t19 = (((x81&x82)|x83)-x84);

	if (t19 != -4522349) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	static int16_t x86 = -32;
	int8_t x87 = -5;
	static int32_t x88 = -1;
	volatile int32_t t20 = -98;

	t20 = (((x85&x86)|x87)-x88);

	if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MIN;
	static uint16_t x90 = 10U;
	int8_t x91 = -1;
	int32_t t21 = -500730476;

	t21 = (((x89&x90)|x91)-x92);

	if (t21 != 4886) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = INT8_MIN;
	uint32_t x94 = 125U;
	static uint16_t x95 = UINT16_MAX;

	t22 = (((x93&x94)|x95)-x96);

	if (t22 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	volatile int32_t x103 = 224;
	int8_t x104 = 1;
	volatile int32_t t23 = 182247716;

	t23 = (((x101&x102)|x103)-x104);

	if (t23 != -2147483425) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MIN;
	static int32_t x107 = -1;
	volatile uint32_t x108 = 10900756U;

	t24 = (((x105&x106)|x107)-x108);

	if (t24 != 4284066539U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 124U;
	static uint64_t x111 = UINT64_MAX;
	int64_t x112 = 14901LL;
	volatile uint64_t t25 = 1153LLU;

	t25 = (((x109&x110)|x111)-x112);

	if (t25 != 18446744073709536714LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = 430;
	int8_t x118 = 0;
	static int64_t x119 = -15LL;
	volatile int64_t t26 = -1000427750LL;

	t26 = (((x117&x118)|x119)-x120);

	if (t26 != -718LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 739365346U;
	uint16_t x124 = 71U;
	static volatile uint32_t t27 = 513096142U;

	t27 = (((x121&x122)|x123)-x124);

	if (t27 != 739377080U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x126 = 120U;
	static int32_t x127 = -130927105;
	int8_t x128 = INT8_MAX;
	int32_t t28 = -138209;

	t28 = (((x125&x126)|x127)-x128);

	if (t28 != -130927232) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x129 = 4672391LL;
	volatile int16_t x130 = -3917;
	int16_t x131 = -1;
	uint8_t x132 = 37U;

	t29 = (((x129&x130)|x131)-x132);

	if (t29 != -38LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = -1LL;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = UINT64_MAX;
	static int16_t x136 = -5;
	volatile uint64_t t30 = 2590LLU;

	t30 = (((x133&x134)|x135)-x136);

	if (t30 != 4LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x142 = 113295725;
	uint8_t x144 = 3U;

	t31 = (((x141&x142)|x143)-x144);

	if (t31 != 5750762LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = -1;
	uint16_t x148 = 24U;
	static int32_t t32 = -1750;

	t32 = (((x145&x146)|x147)-x148);

	if (t32 != -25) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int8_t x150 = -1;
	volatile int8_t x152 = 1;
	volatile int32_t t33 = 121809;

	t33 = (((x149&x150)|x151)-x152);

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x153 = -965241654932LL;
	uint64_t x154 = 16LLU;
	uint16_t x155 = 1091U;
	volatile int32_t x156 = INT32_MIN;
	static volatile uint64_t t34 = 2338635LLU;

	t34 = (((x153&x154)|x155)-x156);

	if (t34 != 2147484739LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x158 = INT8_MAX;
	int16_t x159 = 163;
	static int32_t x160 = 492503;
	volatile int32_t t35 = 417;

	t35 = (((x157&x158)|x159)-x160);

	if (t35 != -492248) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = -1LL;
	int64_t x163 = -3626402LL;
	int64_t x164 = INT64_MIN;
	int64_t t36 = 10LL;

	t36 = (((x161&x162)|x163)-x164);

	if (t36 != 9223372036851149534LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = -1LL;
	int64_t x167 = -1LL;
	int32_t x168 = -1;
	volatile int64_t t37 = -1LL;

	t37 = (((x165&x166)|x167)-x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	int32_t x172 = 4564859;
	int32_t t38 = 1;

	t38 = (((x169&x170)|x171)-x172);

	if (t38 != -4433780) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 4049U;
	int8_t x174 = 0;
	uint16_t x175 = UINT16_MAX;
	uint64_t x176 = UINT64_MAX;

	t39 = (((x173&x174)|x175)-x176);

	if (t39 != 65536LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x177 = 65791254459923707LLU;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = -56656087417LL;
	static int8_t x180 = INT8_MIN;
	uint64_t t40 = 3331LLU;

	t40 = (((x177&x178)|x179)-x180);

	if (t40 != 18446744068593071879LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x183 = INT16_MIN;
	uint64_t t41 = 3LLU;

	t41 = (((x181&x182)|x183)-x184);

	if (t41 != 18446744073709540065LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MIN;
	volatile uint8_t x187 = 96U;
	volatile int16_t x188 = -1;
	volatile int64_t t42 = -8539LL;

	t42 = (((x185&x186)|x187)-x188);

	if (t42 != -9223372036854775711LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = UINT32_MAX;
	uint16_t x190 = 1529U;
	static uint32_t x192 = 29U;
	int64_t t43 = -2048434378176LL;

	t43 = (((x189&x190)|x191)-x192);

	if (t43 != -70015403164192LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MAX;
	volatile uint64_t x194 = 67618426121259111LLU;
	uint64_t x195 = 1191LLU;
	uint16_t x196 = 5U;
	static uint64_t t44 = 2011915938LLU;

	t44 = (((x193&x194)|x195)-x196);

	if (t44 != 3298LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x197 = INT64_MAX;
	static int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	volatile uint64_t x200 = UINT64_MAX;
	uint64_t t45 = 50741616LLU;

	t45 = (((x197&x198)|x199)-x200);

	if (t45 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 5619;
	static uint64_t x202 = UINT64_MAX;
	static uint32_t x203 = 1U;
	volatile int16_t x204 = INT16_MIN;

	t46 = (((x201&x202)|x203)-x204);

	if (t46 != 38387LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	volatile int8_t x206 = INT8_MIN;
	static int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t47 = -679706406LL;

	t47 = (((x205&x206)|x207)-x208);

	if (t47 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x214 = 3U;
	volatile int32_t x215 = -2263884;
	static int8_t x216 = 6;
	static volatile int32_t t48 = 87;

	t48 = (((x213&x214)|x215)-x216);

	if (t48 != -2263890) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x217 = INT32_MAX;
	uint64_t x219 = 401LLU;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t49 = 6403LLU;

	t49 = (((x217&x218)|x219)-x220);

	if (t49 != 2147483648LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 16U;
	volatile uint16_t x223 = 1U;
	int16_t x224 = INT16_MIN;
	static uint64_t t50 = 491135081740LLU;

	t50 = (((x221&x222)|x223)-x224);

	if (t50 != 32785LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = UINT16_MAX;
	static int64_t x226 = INT64_MAX;
	static uint32_t x227 = UINT32_MAX;
	int64_t x228 = -100LL;
	volatile int64_t t51 = 1589LL;

	t51 = (((x225&x226)|x227)-x228);

	if (t51 != 4294967395LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x229 = 7444LLU;
	uint16_t x230 = 1187U;
	int32_t x231 = INT32_MIN;
	static volatile uint16_t x232 = 64U;
	volatile uint64_t t52 = 3685LLU;

	t52 = (((x229&x230)|x231)-x232);

	if (t52 != 18446744071562068928LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x234 = -6;
	uint16_t x235 = 14334U;

	t53 = (((x233&x234)|x235)-x236);

	if (t53 != 18446700740420467726LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x237 = 14455827570598790LLU;
	uint8_t x239 = 94U;
	int16_t x240 = INT16_MAX;
	volatile uint64_t t54 = 95813LLU;

	t54 = (((x237&x238)|x239)-x240);

	if (t54 != 14455827570566111LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = -2279;
	int8_t x244 = -1;
	static int32_t t55 = 22;

	t55 = (((x241&x242)|x243)-x244);

	if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x246 = INT64_MAX;
	uint64_t x247 = 104020LLU;
	uint32_t x248 = 8542447U;
	volatile uint64_t t56 = 163708810LLU;

	t56 = (((x245&x246)|x247)-x248);

	if (t56 != 4286424848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -1LL;
	uint64_t x250 = 827952208502LLU;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int32_t x252 = INT32_MAX;
	uint64_t t57 = 276LLU;

	t57 = (((x249&x250)|x251)-x252);

	if (t57 != 825804724992LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = 16;
	static volatile int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MAX;
	static uint64_t x256 = 2575LLU;

	t58 = (((x253&x254)|x255)-x256);

	if (t58 != 2147481072LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x258 = UINT32_MAX;
	uint32_t t59 = 133U;

	t59 = (((x257&x258)|x259)-x260);

	if (t59 != 32767U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 81U;
	uint16_t x262 = 24715U;
	int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	volatile int32_t t60 = -3091078;

	t60 = (((x261&x262)|x263)-x264);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MIN;
	int64_t x266 = -13115986240716LL;
	volatile uint16_t x267 = 3444U;
	int32_t x268 = 197875053;
	int64_t t61 = -3811586699062LL;

	t61 = (((x265&x266)|x267)-x268);

	if (t61 != -13116184119289LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x269 = 4;
	uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 1U;
	static volatile uint8_t x272 = UINT8_MAX;
	static volatile int32_t t62 = 559451015;

	t62 = (((x269&x270)|x271)-x272);

	if (t62 != -250) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = -1;
	static int8_t x274 = INT8_MIN;
	volatile uint64_t x275 = UINT64_MAX;

	t63 = (((x273&x274)|x275)-x276);

	if (t63 != 18446744073709536272LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x278 = 3836163648308562510LLU;
	int8_t x280 = -1;
	uint64_t t64 = 220752376621704939LLU;

	t64 = (((x277&x278)|x279)-x280);

	if (t64 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 18U;
	uint16_t x284 = 0U;
	static volatile int64_t t65 = INT64_MIN;

	t65 = (((x281&x282)|x283)-x284);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x285 = INT32_MAX;
	uint8_t x287 = 9U;
	uint32_t x288 = UINT32_MAX;
	static volatile uint32_t t66 = 1U;

	t66 = (((x285&x286)|x287)-x288);

	if (t66 != 10U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 1958732LLU;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	int8_t x292 = -1;
	static volatile uint64_t t67 = 1234993549642265LLU;

	t67 = (((x289&x290)|x291)-x292);

	if (t67 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x294 = 3;
	volatile int8_t x295 = -1;
	uint8_t x296 = 14U;
	static volatile int32_t t68 = 56185;

	t68 = (((x293&x294)|x295)-x296);

	if (t68 != -15) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x297 = UINT32_MAX;
	volatile uint64_t x299 = UINT64_MAX;
	int32_t x300 = -1;

	t69 = (((x297&x298)|x299)-x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = 990740292887LLU;
	uint8_t x304 = 97U;
	volatile uint64_t t70 = 1959085LLU;

	t70 = (((x301&x302)|x303)-x304);

	if (t70 != 989989961886LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 2160U;
	int16_t x307 = INT16_MIN;
	volatile int64_t x308 = INT64_MIN;

	t71 = (((x305&x306)|x307)-x308);

	if (t71 != 9223372036854745200LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x309 = INT64_MAX;
	volatile int8_t x310 = 0;
	static int16_t x311 = INT16_MIN;
	volatile int64_t t72 = 0LL;

	t72 = (((x309&x310)|x311)-x312);

	if (t72 != -32771LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x313 = 19447038414283579LL;
	int32_t x314 = INT32_MAX;
	int64_t x315 = -15551079894048924LL;
	int64_t x316 = 3LL;

	t73 = (((x313&x314)|x315)-x316);

	if (t73 != -15551078005211268LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x317 = -1433;
	int32_t x318 = 489;
	int16_t x320 = 27;
	volatile int32_t t74 = 1004804819;

	t74 = (((x317&x318)|x319)-x320);

	if (t74 != 32740) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x321 = -173455LL;
	static volatile int8_t x322 = 15;
	int64_t x323 = -1LL;
	int64_t x324 = -11224255231682942LL;
	volatile int64_t t75 = 0LL;

	t75 = (((x321&x322)|x323)-x324);

	if (t75 != 11224255231682941LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x325 = 1;
	int32_t x326 = INT32_MIN;
	int8_t x328 = -1;
	static int32_t t76 = -1;

	t76 = (((x325&x326)|x327)-x328);

	if (t76 != 54) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = 11U;
	uint32_t t77 = 16379586U;

	t77 = (((x329&x330)|x331)-x332);

	if (t77 != 4294967157U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x333 = 2U;
	volatile int8_t x334 = INT8_MAX;
	uint8_t x335 = 11U;
	int8_t x336 = INT8_MIN;

	t78 = (((x333&x334)|x335)-x336);

	if (t78 != 139) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x338 = 2075U;
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	static int64_t t79 = 443980562LL;

	t79 = (((x337&x338)|x339)-x340);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x341 = -1LL;
	static uint64_t x342 = 108976401LLU;
	static int64_t x343 = INT64_MAX;
	volatile int64_t x344 = INT64_MIN;
	uint64_t t80 = UINT64_MAX;

	t80 = (((x341&x342)|x343)-x344);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = 2U;
	static int8_t x346 = INT8_MIN;
	volatile uint32_t x347 = 11828U;
	uint8_t x348 = 0U;
	volatile uint32_t t81 = 69421U;

	t81 = (((x345&x346)|x347)-x348);

	if (t81 != 11828U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x349 = INT32_MAX;
	static uint64_t x350 = 93627071751LLU;
	int64_t x352 = 1086858245513294LL;
	static uint64_t t82 = 1449LLU;

	t82 = (((x349&x350)|x351)-x352);

	if (t82 != 18445657215464038201LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x353 = 13607U;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t83 = 2646387;

	t83 = (((x353&x354)|x355)-x356);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x358 = INT64_MIN;

	t84 = (((x357&x358)|x359)-x360);

	if (t84 != -9223372034707271071LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x362 = 1368745368175LL;
	uint64_t x363 = 1586375186882193005LLU;
	uint32_t x364 = 4U;

	t85 = (((x361&x362)|x363)-x364);

	if (t85 != 1586375376414441065LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MAX;
	int32_t x367 = -26485;
	uint32_t x368 = 191182732U;
	uint32_t t86 = 4673637U;

	t86 = (((x365&x366)|x367)-x368);

	if (t86 != 4103758195U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x369 = 2699;
	volatile int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 6U;
	int32_t t87 = -1;

	t87 = (((x369&x370)|x371)-x372);

	if (t87 != -2147483643) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x374 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	static volatile int64_t t88 = 378870636864087LL;

	t88 = (((x373&x374)|x375)-x376);

	if (t88 != 1729534042LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = 372841U;
	int16_t x378 = INT16_MIN;
	int32_t x379 = 189347102;
	volatile int64_t t89 = 53522517LL;

	t89 = (((x377&x378)|x379)-x380);

	if (t89 != -9223372036665133793LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = 2U;
	volatile uint64_t t90 = 31138779863579LLU;

	t90 = (((x381&x382)|x383)-x384);

	if (t90 != 9223372036854726473LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x389 = -1;
	static int16_t x390 = -1;
	uint8_t x392 = 117U;

	t91 = (((x389&x390)|x391)-x392);

	if (t91 != -118) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = -22026321;
	uint8_t x394 = 106U;
	uint8_t x396 = 4U;
	int32_t t92 = -27647065;

	t92 = (((x393&x394)|x395)-x396);

	if (t92 != 43) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = INT16_MIN;
	static uint32_t x399 = UINT32_MAX;
	volatile uint64_t t93 = 2384755913062LLU;

	t93 = (((x397&x398)|x399)-x400);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x402 = INT32_MIN;
	static uint32_t x403 = 14531402U;
	uint64_t x404 = 80LLU;
	static volatile uint64_t t94 = 2976252LLU;

	t94 = (((x401&x402)|x403)-x404);

	if (t94 != 2162014970LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x405 = INT16_MIN;
	uint64_t x406 = 1922792LLU;
	int64_t x408 = 8306192578299030LL;
	uint64_t t95 = 884LLU;

	t95 = (((x405&x406)|x407)-x408);

	if (t95 != 9215065844278377322LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	static volatile int32_t x410 = -39100489;
	volatile int32_t x412 = 196474484;
	volatile int32_t t96 = -1;

	t96 = (((x409&x410)|x411)-x412);

	if (t96 != -196474612) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = 60;
	static uint32_t x415 = 993U;
	volatile uint32_t t97 = 218031U;

	t97 = (((x413&x414)|x415)-x416);

	if (t97 != 1020U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = 1;
	static int32_t x419 = 1490;
	uint64_t x420 = 129025336709LLU;
	uint64_t t98 = 38111LLU;

	t98 = (((x417&x418)|x419)-x420);

	if (t98 != 18446743944684216398LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x426 = -842;
	int64_t x427 = INT64_MIN;
	int8_t x428 = -1;
	int64_t t99 = -1499807108477487688LL;

	t99 = (((x425&x426)|x427)-x428);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

