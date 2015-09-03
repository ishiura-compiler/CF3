#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int64_t x6 = INT64_MAX;
volatile uint64_t t2 = 1079151120044335214LLU;
static uint64_t x15 = UINT64_MAX;
static int8_t x16 = INT8_MIN;
int32_t x17 = INT32_MIN;
volatile int64_t x18 = 2LL;
uint16_t x21 = UINT16_MAX;
static volatile int64_t x31 = INT64_MAX;
static uint8_t x37 = 8U;
volatile int64_t t10 = 625223254826515810LL;
volatile uint32_t x49 = 19U;
int8_t x52 = 1;
int64_t x53 = 980989683002LL;
static int64_t x55 = -308538614759738LL;
uint64_t x57 = 11331LLU;
uint64_t t14 = 2944791193LLU;
static uint8_t x63 = 35U;
static int32_t x64 = 19688061;
int64_t t15 = 23691324408567496LL;
int8_t x71 = -1;
static uint32_t x72 = UINT32_MAX;
uint8_t x83 = 33U;
uint64_t x87 = 21LLU;
static volatile int64_t t22 = 1614LL;
volatile int16_t x94 = -12;
int64_t x95 = -1LL;
int16_t x99 = INT16_MIN;
static volatile int8_t x104 = 3;
volatile int64_t t26 = -285553316886578997LL;
int16_t x113 = INT16_MIN;
int8_t x114 = -63;
volatile uint64_t t28 = 15LLU;
int16_t x117 = INT16_MIN;
int8_t x119 = 28;
int16_t x124 = INT16_MIN;
static int16_t x142 = INT16_MIN;
static int16_t x146 = 1;
volatile uint64_t t37 = 7851718LLU;
int32_t x156 = INT32_MIN;
int64_t t38 = -154LL;
int64_t x158 = INT64_MIN;
int64_t t42 = 4501676102260643LL;
volatile int16_t x175 = INT16_MAX;
uint16_t x178 = 6480U;
uint16_t x189 = 16155U;
uint32_t x191 = 1536972719U;
int32_t x192 = 545554;
int32_t x198 = -1386235;
int32_t t50 = -35373676;
static int16_t x215 = INT16_MIN;
int32_t x217 = 0;
volatile int16_t x221 = INT16_MAX;
int16_t x227 = INT16_MIN;
volatile int64_t t58 = 0LL;
int16_t x241 = INT16_MAX;
static uint32_t x243 = UINT32_MAX;
int8_t x245 = INT8_MIN;
uint8_t x246 = 7U;
uint64_t t61 = 11237245945507LLU;
static volatile int32_t t62 = 1;
int64_t x254 = 205455604713LL;
int8_t x259 = -1;
int8_t x270 = INT8_MIN;
volatile int8_t x272 = INT8_MAX;
uint64_t x274 = UINT64_MAX;
int32_t t69 = 66996090;
int64_t x283 = INT64_MIN;
int64_t t70 = 1283070033LL;
int32_t x290 = -9145979;
int8_t x293 = INT8_MAX;
int32_t x298 = 50;
uint64_t x303 = 1027702LLU;
static int16_t x308 = -1;
static volatile uint64_t t76 = 81437145301792LLU;
uint16_t x309 = 5964U;
int8_t x311 = 9;
int8_t x319 = -31;
int8_t x320 = INT8_MIN;
uint16_t x328 = 46U;
int16_t x334 = -1;
uint16_t x335 = 15360U;
static int64_t x336 = INT64_MIN;
int64_t t83 = 276420447111621LL;
volatile int16_t x338 = 62;
int8_t x341 = INT8_MIN;
int64_t t87 = 8LL;
int64_t x355 = INT64_MIN;
static int64_t t88 = 13669LL;
int32_t x357 = -123221352;
volatile uint64_t x361 = 126364LLU;
int64_t x363 = INT64_MAX;
int16_t x373 = -1;
int32_t x378 = -29447;
int8_t x385 = INT8_MAX;
int32_t t96 = 23680;
int64_t x389 = 423894160370LL;
int64_t x398 = INT64_MIN;
int32_t x399 = INT32_MIN;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 1U;
	static volatile int64_t x4 = INT64_MIN;
	int64_t t0 = 1810104LL;

	t0 = (x1%(x2|(x3^x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x7 = -1;
	int16_t x8 = INT16_MIN;
	static volatile uint64_t t1 = 32305224891LLU;

	t1 = (x5%(x6|(x7^x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 11U;
	uint64_t x10 = 3439518426955020LLU;
	int32_t x11 = -478007;
	uint16_t x12 = 13U;

	t2 = (x9%(x10|(x11^x12)));

	if (t2 != 11LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	uint8_t x14 = 0U;
	uint64_t t3 = 486208681567010022LLU;

	t3 = (x13%(x14|(x15^x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = 37;
	int64_t t4 = -7265445480905197LL;

	t4 = (x17%(x18|(x19^x20)));

	if (t4 != -92LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	volatile uint8_t x23 = 6U;
	int16_t x24 = 5814;
	volatile int32_t t5 = -214;

	t5 = (x21%(x22|(x23^x24)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2U;
	uint64_t x26 = 2671550585930814220LLU;
	uint8_t x27 = 1U;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 173LLU;

	t6 = (x25%(x26|(x27^x28)));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -1LL;
	int16_t x30 = -1;
	int16_t x32 = INT16_MIN;
	static int64_t t7 = -208LL;

	t7 = (x29%(x30|(x31^x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	int16_t x34 = INT16_MAX;
	uint64_t x35 = 636LLU;
	static int16_t x36 = 14065;
	static volatile uint64_t t8 = 28613177265LLU;

	t8 = (x33%(x34|(x35^x36)));

	if (t8 != 15LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -976221596355726LL;

	t9 = (x37%(x38|(x39^x40)));

	if (t9 != 8LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	int16_t x43 = -1;
	static int64_t x44 = 60130062764LL;

	t10 = (x41%(x42|(x43^x44)));

	if (t10 != -2378767643LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 10083LL;
	int64_t x46 = -1289677LL;
	static int16_t x47 = INT16_MAX;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -6LL;

	t11 = (x45%(x46|(x47^x48)));

	if (t11 != 10083LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	int8_t x51 = 0;
	volatile uint32_t t12 = 64739554U;

	t12 = (x49%(x50|(x51^x52)));

	if (t12 != 19U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -35835791059041705LL;

	t13 = (x53%(x54|(x55^x56)));

	if (t13 != 980989683002LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = 19;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = INT64_MIN;

	t14 = (x57%(x58|(x59^x60)));

	if (t14 != 11331LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 18550235LL;
	int64_t x62 = INT64_MIN;

	t15 = (x61%(x62|(x63^x64)));

	if (t15 != 18550235LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	volatile int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MAX;
	static int16_t x68 = -407;
	volatile int64_t t16 = 29402181993773LL;

	t16 = (x65%(x66|(x67^x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 3638U;
	int64_t x70 = INT64_MIN;
	static volatile int64_t t17 = -13LL;

	t17 = (x69%(x70|(x71^x72)));

	if (t17 != 3638LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1037917635U;
	uint32_t x74 = 919U;
	static uint16_t x75 = UINT16_MAX;
	static int16_t x76 = 21;
	uint32_t t18 = 3116009U;

	t18 = (x73%(x74|(x75^x76)));

	if (t18 != 39840U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -1;
	static uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 22U;
	uint32_t x80 = 9U;
	volatile uint32_t t19 = 561220248U;

	t19 = (x77%(x78|(x79^x80)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int32_t x82 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int64_t t20 = 49358367LL;

	t20 = (x81%(x82|(x83^x84)));

	if (t20 != -2178LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	static uint64_t x86 = 5260983164872684562LLU;
	uint16_t x88 = UINT16_MAX;
	volatile uint64_t t21 = 281LLU;

	t21 = (x85%(x86|(x87^x88)));

	if (t21 != 3962388871982088197LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int16_t x90 = INT16_MAX;
	volatile int32_t x91 = 619505417;
	int64_t x92 = INT64_MIN;

	t22 = (x89%(x90|(x91^x92)));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -55142;
	int8_t x96 = 1;
	volatile int64_t t23 = 12596471922LL;

	t23 = (x93%(x94|(x95^x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	static uint16_t x98 = 0U;
	uint32_t x100 = UINT32_MAX;
	volatile int64_t t24 = -12259160119451LL;

	t24 = (x97%(x98|(x99^x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = -1980710;
	uint32_t x103 = 45939U;
	uint32_t t25 = 27052769U;

	t25 = (x101%(x102|(x103^x104)));

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -89032LL;
	int64_t x106 = -1832164051723LL;
	uint8_t x107 = 0U;
	volatile uint16_t x108 = UINT16_MAX;

	t26 = (x105%(x106|(x107^x108)));

	if (t26 != -89032LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	static int32_t x110 = -1;
	int16_t x111 = INT16_MIN;
	volatile int32_t x112 = -1;
	static int32_t t27 = 5727675;

	t27 = (x109%(x110|(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x115 = 1190410LLU;
	static int16_t x116 = -37;

	t28 = (x113%(x114|(x115^x116)));

	if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = INT32_MAX;
	int8_t x120 = -1;
	static volatile int32_t t29 = -333;

	t29 = (x117%(x118|(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	static int16_t x123 = INT16_MIN;
	volatile uint64_t t30 = 517448062261543077LLU;

	t30 = (x121%(x122|(x123^x124)));

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int16_t x126 = INT16_MAX;
	int32_t x127 = -1;
	int64_t x128 = INT64_MIN;
	int64_t t31 = -27695999LL;

	t31 = (x125%(x126|(x127^x128)));

	if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	int16_t x130 = INT16_MIN;
	volatile uint64_t x131 = 76214LLU;
	static int8_t x132 = -1;
	static volatile uint64_t t32 = 777634908625154LLU;

	t32 = (x129%(x130|(x131^x132)));

	if (t32 != 10678LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MAX;
	int32_t x134 = INT32_MIN;
	static uint16_t x135 = 39U;
	int64_t x136 = 72770997375LL;
	volatile int64_t t33 = -28668030LL;

	t33 = (x133%(x134|(x135^x136)));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MAX;
	static uint32_t x139 = 2U;
	int16_t x140 = 279;
	uint32_t t34 = 1562066478U;

	t34 = (x137%(x138|(x139^x140)));

	if (t34 != 3U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 0;
	uint8_t x143 = 1U;
	int64_t x144 = INT64_MAX;
	int64_t t35 = 129200000632545LL;

	t35 = (x141%(x142|(x143^x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 125U;
	int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MIN;
	int64_t t36 = 120464157619560969LL;

	t36 = (x145%(x146|(x147^x148)));

	if (t36 != 125LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 67767397448LLU;
	uint32_t x150 = 1606U;
	uint16_t x151 = 1U;
	uint32_t x152 = UINT32_MAX;

	t37 = (x149%(x150|(x151^x152)));

	if (t37 != 3342888038LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int64_t x154 = -3810327954214349164LL;
	volatile int8_t x155 = -1;

	t38 = (x153%(x154|(x155^x156)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x159 = INT8_MIN;
	volatile int16_t x160 = INT16_MIN;
	int64_t t39 = 527692516824LL;

	t39 = (x157%(x158|(x159^x160)));

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint64_t x162 = 50196561186LLU;
	int16_t x163 = -4867;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t40 = 324LLU;

	t40 = (x161%(x162|(x163^x164)));

	if (t40 != 255LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 15U;
	static uint8_t x166 = 1U;
	static int16_t x167 = 1;
	int64_t x168 = INT64_MIN;
	int64_t t41 = -2512309845LL;

	t41 = (x165%(x166|(x167^x168)));

	if (t41 != 15LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 217948474733316LL;
	int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MAX;
	uint16_t x172 = UINT16_MAX;

	t42 = (x169%(x170|(x171^x172)));

	if (t42 != 20136LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x174 = INT16_MIN;
	int16_t x176 = 4;
	volatile uint32_t t43 = 439242U;

	t43 = (x173%(x174|(x175^x176)));

	if (t43 != 4U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 122919142LLU;
	int32_t x179 = -239;
	int64_t x180 = -1LL;
	uint64_t t44 = 7365583LLU;

	t44 = (x177%(x178|(x179^x180)));

	if (t44 != 6454LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -3136;
	int64_t x182 = -52299474178721LL;
	static int32_t x183 = 250529106;
	int16_t x184 = -1;
	volatile int64_t t45 = 31678LL;

	t45 = (x181%(x182|(x183^x184)));

	if (t45 != -3136LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -12;
	int8_t x186 = -3;
	static int32_t x187 = -956729160;
	int32_t x188 = INT32_MIN;
	int32_t t46 = -105670226;

	t46 = (x185%(x186|(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x190 = 223806046LLU;
	volatile uint64_t t47 = 479507596LLU;

	t47 = (x189%(x190|(x191^x192)));

	if (t47 != 16155LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 51U;
	int32_t x194 = INT32_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	static volatile int16_t x196 = INT16_MAX;
	uint64_t t48 = 171340960LLU;

	t48 = (x193%(x194|(x195^x196)));

	if (t48 != 51LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x199 = -1;
	int16_t x200 = 62;
	volatile int32_t t49 = 452206;

	t49 = (x197%(x198|(x199^x200)));

	if (t49 != 19) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	volatile uint16_t x202 = UINT16_MAX;
	volatile int32_t x203 = INT32_MAX;
	volatile int32_t x204 = INT32_MIN;

	t50 = (x201%(x202|(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	static int64_t x206 = 4144671LL;
	static int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MAX;
	volatile int64_t t51 = 110472LL;

	t51 = (x205%(x206|(x207^x208)));

	if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -1;
	volatile int64_t x211 = -1LL;
	int64_t x212 = -1LL;
	int64_t t52 = 425LL;

	t52 = (x209%(x210|(x211^x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 162873LL;
	volatile int16_t x214 = -1;
	static int8_t x216 = INT8_MIN;
	volatile int64_t t53 = -498338LL;

	t53 = (x213%(x214|(x215^x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -59;
	volatile int32_t x219 = -13328665;
	static volatile uint8_t x220 = UINT8_MAX;
	static volatile int32_t t54 = 3943;

	t54 = (x217%(x218|(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x222 = 17U;
	static uint8_t x223 = 15U;
	int32_t x224 = INT32_MAX;
	uint32_t t55 = 147742880U;

	t55 = (x221%(x222|(x223^x224)));

	if (t55 != 32767U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile int64_t x226 = -91542LL;
	volatile uint64_t x228 = 5858949273564713LLU;
	uint64_t t56 = 2528LLU;

	t56 = (x225%(x226|(x227^x228)));

	if (t56 != 82197LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile uint16_t x230 = 6U;
	static int8_t x231 = -1;
	int8_t x232 = -13;
	static int64_t t57 = 69407344889049LL;

	t57 = (x229%(x230|(x231^x232)));

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -1LL;
	uint16_t x234 = UINT16_MAX;
	int32_t x235 = 77701;
	uint16_t x236 = 15U;

	t58 = (x233%(x234|(x235^x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 12283636U;
	static uint16_t x238 = 1112U;
	static int32_t x239 = -1;
	int16_t x240 = INT16_MIN;
	uint32_t t59 = 336U;

	t59 = (x237%(x238|(x239^x240)));

	if (t59 != 28778U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MIN;
	uint64_t x244 = UINT64_MAX;
	uint64_t t60 = 98508842745127LLU;

	t60 = (x241%(x242|(x243^x244)));

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x247 = 176904LLU;
	uint16_t x248 = 1U;

	t61 = (x245%(x246|(x247^x248)));

	if (t61 != 119000LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = -1;
	int16_t x250 = -1;
	static int16_t x251 = INT16_MIN;
	uint16_t x252 = UINT16_MAX;

	t62 = (x249%(x250|(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 99U;
	uint32_t x255 = 1U;
	static uint8_t x256 = UINT8_MAX;
	volatile int64_t t63 = -72272022LL;

	t63 = (x253%(x254|(x255^x256)));

	if (t63 != 99LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 3U;
	int8_t x258 = -8;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = -4370817;

	t64 = (x257%(x258|(x259^x260)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	uint16_t x262 = 177U;
	int8_t x263 = -59;
	int8_t x264 = -1;
	int32_t t65 = 203575;

	t65 = (x261%(x262|(x263^x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 169U;
	static int32_t x266 = -103510;
	uint8_t x267 = 40U;
	int64_t x268 = 4938010472LL;
	int64_t t66 = 7LL;

	t66 = (x265%(x266|(x267^x268)));

	if (t66 != 169LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile uint32_t x271 = 4825U;
	volatile int64_t t67 = 212334326561813464LL;

	t67 = (x269%(x270|(x271^x272)));

	if (t67 != -4050LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = 271830062LL;
	uint64_t t68 = 22004786812LLU;

	t68 = (x273%(x274|(x275^x276)));

	if (t68 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	volatile int32_t x278 = -1;
	int8_t x279 = INT8_MAX;
	volatile int8_t x280 = -1;

	t69 = (x277%(x278|(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 882637;
	static int16_t x282 = -1;
	uint8_t x284 = 10U;

	t70 = (x281%(x282|(x283^x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x285 = -3;
	volatile uint8_t x286 = 7U;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MIN;
	volatile int64_t t71 = -744252573593399989LL;

	t71 = (x285%(x286|(x287^x288)));

	if (t71 != -3LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -10LL;
	static int16_t x291 = INT16_MAX;
	uint32_t x292 = 207U;
	volatile int64_t t72 = -3LL;

	t72 = (x289%(x290|(x291^x292)));

	if (t72 != -10LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -142;
	static int32_t x295 = INT32_MAX;
	int8_t x296 = 1;
	volatile int32_t t73 = 7;

	t73 = (x293%(x294|(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 85U;
	static int64_t x299 = INT64_MIN;
	static int64_t x300 = -375793506907902LL;
	int64_t t74 = -11616LL;

	t74 = (x297%(x298|(x299^x300)));

	if (t74 != 85LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	static int32_t x302 = -1;
	static volatile int64_t x304 = -1LL;
	volatile uint64_t t75 = 5250078373288097LLU;

	t75 = (x301%(x302|(x303^x304)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 0U;
	static uint8_t x306 = 18U;
	static uint64_t x307 = 1877250LLU;

	t76 = (x305%(x306|(x307^x308)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	int8_t x312 = INT8_MIN;
	uint64_t t77 = 19LLU;

	t77 = (x309%(x310|(x311^x312)));

	if (t77 != 5964LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 5U;
	int64_t x314 = INT64_MIN;
	uint32_t x315 = 29U;
	volatile int64_t x316 = -8109053411699447LL;
	static volatile int64_t t78 = 2275LL;

	t78 = (x313%(x314|(x315^x316)));

	if (t78 != 5LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 2534;
	volatile uint32_t x318 = 124U;
	uint32_t t79 = 137U;

	t79 = (x317%(x318|(x319^x320)));

	if (t79 != 34U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = -2;
	int32_t t80 = 381;

	t80 = (x321%(x322|(x323^x324)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 871611U;
	int32_t x326 = -8053812;
	static volatile uint32_t x327 = 20U;
	static volatile uint32_t t81 = 9U;

	t81 = (x325%(x326|(x327^x328)));

	if (t81 != 871611U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 16479314546LLU;
	static int16_t x330 = -1;
	volatile int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	uint64_t t82 = 62132LLU;

	t82 = (x329%(x330|(x331^x332)));

	if (t82 != 16479314546LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;

	t83 = (x333%(x334|(x335^x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int16_t x339 = 1;
	volatile int32_t x340 = -1;
	int32_t t84 = -61131091;

	t84 = (x337%(x338|(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 458;
	uint8_t x343 = 1U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 8373001;

	t85 = (x341%(x342|(x343^x344)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	volatile uint8_t x346 = 11U;
	int16_t x347 = -1;
	int64_t x348 = INT64_MIN;
	int64_t t86 = 331559LL;

	t86 = (x345%(x346|(x347^x348)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MAX;
	static uint8_t x351 = 77U;
	int32_t x352 = -1;

	t87 = (x349%(x350|(x351^x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MIN;
	uint16_t x354 = 56U;
	int64_t x356 = 126431113589LL;

	t88 = (x353%(x354|(x355^x356)));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = 8U;
	static int64_t x359 = 38854621LL;
	int8_t x360 = INT8_MIN;
	static int64_t t89 = 5129848296870LL;

	t89 = (x357%(x358|(x359^x360)));

	if (t89 != -6657663LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MIN;
	static int32_t x364 = INT32_MIN;
	static volatile uint64_t t90 = 28387254190828905LLU;

	t90 = (x361%(x362|(x363^x364)));

	if (t90 != 126364LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = INT32_MAX;
	int64_t x366 = -228024443013LL;
	int16_t x367 = INT16_MIN;
	int32_t x368 = 8796042;
	static volatile int64_t t91 = -156475253878990552LL;

	t91 = (x365%(x366|(x367^x368)));

	if (t91 != 199LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = 35;
	volatile int64_t x371 = INT64_MIN;
	uint8_t x372 = 67U;
	int64_t t92 = 8696245802823921LL;

	t92 = (x369%(x370|(x371^x372)));

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	static int32_t t93 = -105379;

	t93 = (x373%(x374|(x375^x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 3;
	uint8_t x379 = 40U;
	volatile int64_t x380 = INT64_MIN;
	static int64_t t94 = 2075743355112LL;

	t94 = (x377%(x378|(x379^x380)));

	if (t94 != 3LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MIN;
	static int8_t x382 = INT8_MAX;
	int16_t x383 = 1;
	uint32_t x384 = 127U;
	volatile uint32_t t95 = 12528U;

	t95 = (x381%(x382|(x383^x384)));

	if (t95 != 15U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -1;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;

	t96 = (x385%(x386|(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MIN;
	volatile int8_t x392 = INT8_MIN;
	volatile int64_t t97 = -4080157513382395LL;

	t97 = (x389%(x390|(x391^x392)));

	if (t97 != 423894160370LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 961131025688486LLU;
	static int16_t x394 = -71;
	int16_t x395 = -1099;
	int8_t x396 = INT8_MIN;
	volatile uint64_t t98 = 4976052005362641704LLU;

	t98 = (x393%(x394|(x395^x396)));

	if (t98 != 961131025688486LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 42U;
	int32_t x400 = INT32_MAX;
	volatile int64_t t99 = -5574LL;

	t99 = (x397%(x398|(x399^x400)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

