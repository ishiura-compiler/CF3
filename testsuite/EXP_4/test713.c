#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x12 = INT8_MAX;
static int64_t x16 = INT64_MIN;
volatile int64_t t2 = 178244909LL;
uint32_t t3 = 1353099750U;
static uint64_t x32 = UINT64_MAX;
static volatile uint64_t t5 = 728066122723385122LLU;
volatile int16_t x40 = -1;
volatile int16_t x42 = INT16_MAX;
uint8_t x51 = UINT8_MAX;
volatile int64_t t9 = 54848868LL;
static volatile uint8_t x58 = 23U;
int8_t x60 = INT8_MIN;
int32_t t10 = -54842267;
static volatile uint8_t x63 = 1U;
int64_t t11 = -261489598LL;
int8_t x66 = INT8_MIN;
int64_t x67 = -63416871231571952LL;
uint64_t x68 = UINT64_MAX;
volatile uint64_t x75 = 34481523430620LLU;
volatile int32_t x76 = -1;
volatile int16_t x79 = 14849;
volatile int64_t t16 = 32504156LL;
int16_t x100 = INT16_MAX;
static uint16_t x118 = 425U;
uint8_t x139 = UINT8_MAX;
static int64_t x140 = 4196278638LL;
int8_t x143 = INT8_MAX;
int32_t x144 = INT32_MAX;
static uint8_t x158 = 3U;
int16_t x159 = 2;
uint16_t x168 = 10452U;
static volatile uint64_t x169 = 104208193213193287LLU;
static int32_t x170 = -598304;
uint16_t x175 = UINT16_MAX;
int32_t x183 = -89892908;
int64_t t40 = -204783697085LL;
int8_t x193 = 1;
int64_t x196 = INT64_MAX;
int32_t x203 = -1;
volatile uint32_t x205 = UINT32_MAX;
uint8_t x208 = UINT8_MAX;
int64_t x211 = -3281220801727043124LL;
volatile uint64_t t45 = 4553066378831868LLU;
uint64_t x214 = UINT64_MAX;
volatile int32_t x215 = INT32_MIN;
int8_t x217 = -21;
static uint16_t x221 = 9111U;
uint64_t x228 = 125161280837479697LLU;
volatile uint64_t t49 = 53499497LLU;
int64_t x229 = -1LL;
static volatile uint64_t t52 = 33518486898485586LLU;
static int64_t x244 = -1LL;
volatile int64_t t54 = -63LL;
static volatile int64_t x250 = INT64_MIN;
static volatile int16_t x253 = INT16_MIN;
int64_t t56 = 94LL;
static uint64_t x271 = 11954972LLU;
volatile int64_t x274 = INT64_MAX;
int64_t t61 = INT64_MIN;
uint32_t x282 = UINT32_MAX;
int32_t x292 = -75167168;
volatile uint32_t x298 = 47968U;
int64_t t67 = 529476LL;
int16_t x304 = -1;
uint32_t t68 = 628354516U;
static volatile uint64_t t69 = 51192800485LLU;
int8_t x310 = 0;
int32_t x314 = INT32_MIN;
int64_t t71 = -5551449505878LL;
uint64_t t72 = 1499955468603401LLU;
static int32_t x324 = -2146587;
int64_t x327 = 39715357023331609LL;
uint32_t x331 = 25068U;
uint16_t x333 = 210U;
static int64_t x345 = 1LL;
int64_t x348 = INT64_MAX;
volatile int64_t t80 = 23284405904371LL;
int32_t x361 = -1;
static uint8_t x375 = UINT8_MAX;
uint32_t t85 = 7560848U;
static int32_t x378 = 596050;
uint16_t x382 = UINT16_MAX;
uint32_t x383 = 2U;
uint32_t x392 = 64U;
static volatile int64_t t89 = 68492507847LL;
uint8_t x393 = UINT8_MAX;
uint8_t x400 = 3U;
uint16_t x405 = 27U;
int32_t x408 = -1;
static volatile uint64_t x409 = 304007879LLU;
int32_t x411 = INT32_MIN;
uint64_t t94 = 2937434846LLU;
uint16_t x413 = UINT16_MAX;
int8_t x422 = -3;
int32_t x429 = -1;
volatile uint64_t x431 = 4LLU;
static volatile uint64_t t98 = 423076LLU;
static int16_t x433 = INT16_MAX;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x6 = -1;
	static uint8_t x7 = 1U;
	int8_t x8 = INT8_MIN;
	int32_t t0 = -1;

	t0 = (x5&(x6*(x7%x8)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 634304545091359LLU;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = 3;
	uint64_t t1 = 15667648257LLU;

	t1 = (x9&(x10*(x11%x12)));

	if (t1 != 634304545091357LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 531787193U;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = 13LL;

	t2 = (x13&(x14*(x15%x16)));

	if (t2 != 531628032LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 1U;
	int8_t x24 = INT8_MAX;

	t3 = (x21&(x22*(x23%x24)));

	if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MAX;
	int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = (x25&(x26*(x27%x28)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -1;
	int16_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;

	t5 = (x29&(x30*(x31%x32)));

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MAX;
	static uint8_t x39 = 123U;
	int32_t t6 = -25;

	t6 = (x37&(x38*(x39%x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = 37517942;
	int8_t x43 = INT8_MAX;
	int64_t x44 = -129183924170446777LL;
	int64_t t7 = -837687642744223LL;

	t7 = (x41&(x42*(x43%x44)));

	if (t7 != 3963392LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = -27;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t8 = INT32_MIN;

	t8 = (x49&(x50*(x51%x52)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	static int64_t x54 = INT64_MIN;
	int16_t x55 = 0;
	static int32_t x56 = INT32_MIN;

	t9 = (x53&(x54*(x55%x56)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x57 = -3;
	volatile int32_t x59 = -1;

	t10 = (x57&(x58*(x59%x60)));

	if (t10 != -23) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 2;
	volatile int64_t x62 = -1LL;
	int64_t x64 = INT64_MIN;

	t11 = (x61&(x62*(x63%x64)));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -120788;
	static volatile uint64_t t12 = 4051371810711660LLU;

	t12 = (x65&(x66*(x67%x68)));

	if (t12 != 8117359517641091072LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = 59LL;
	uint64_t x70 = 8383262566818998LLU;
	int8_t x71 = 0;
	int32_t x72 = INT32_MIN;
	static uint64_t t13 = 8199LLU;

	t13 = (x69&(x70*(x71%x72)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 4LLU;
	int64_t x74 = 3108785LL;
	static uint64_t t14 = 8778622LLU;

	t14 = (x73&(x74*(x75%x76)));

	if (t14 != 4LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -23770;
	volatile int8_t x78 = INT8_MAX;
	int8_t x80 = INT8_MAX;
	volatile int32_t t15 = -186;

	t15 = (x77&(x78*(x79%x80)));

	if (t15 != 8706) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = 6U;
	uint32_t x83 = 1841U;
	volatile int64_t x84 = -14777816LL;

	t16 = (x81&(x82*(x83%x84)));

	if (t16 != 38LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = 977884628254201LL;
	static int32_t x86 = INT32_MIN;
	int64_t x87 = -1LL;
	int64_t x88 = 197265953LL;
	volatile int64_t t17 = 22509LL;

	t17 = (x85&(x86*(x87%x88)));

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 31U;
	int8_t x90 = INT8_MAX;
	int32_t x91 = 348106069;
	static int64_t x92 = INT64_MIN;
	static int64_t t18 = -253719069668384LL;

	t18 = (x89&(x90*(x91%x92)));

	if (t18 != 11LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 375U;
	int16_t x98 = INT16_MIN;
	int32_t x99 = -234;
	static int32_t t19 = 219;

	t19 = (x97&(x98*(x99%x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = -1;
	int64_t x103 = INT64_MAX;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t20 = 73356702LL;

	t20 = (x101&(x102*(x103%x104)));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 19U;
	volatile int32_t x106 = 3;
	static uint8_t x107 = 109U;
	volatile int8_t x108 = -10;
	volatile int32_t t21 = -2494;

	t21 = (x105&(x106*(x107%x108)));

	if (t21 != 19) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x109 = UINT16_MAX;
	volatile int64_t x110 = -1LL;
	uint16_t x111 = 3298U;
	uint16_t x112 = 7U;
	volatile int64_t t22 = -215787420LL;

	t22 = (x109&(x110*(x111%x112)));

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 6U;
	int32_t x119 = INT32_MAX;
	int32_t x120 = -9666347;
	volatile int32_t t23 = 213037;

	t23 = (x117&(x118*(x119%x120)));

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = 8U;
	static int8_t x122 = -17;
	int64_t x123 = INT64_MAX;
	uint32_t x124 = 157U;
	volatile int64_t t24 = -13621131220435083LL;

	t24 = (x121&(x122*(x123%x124)));

	if (t24 != 8LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = 459;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint64_t t25 = 3628637065638LLU;

	t25 = (x125&(x126*(x127%x128)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = UINT8_MAX;
	int16_t x130 = -1283;
	static int8_t x131 = 8;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t26 = 13535806;

	t26 = (x129&(x130*(x131%x132)));

	if (t26 != 232) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = -1;
	static uint8_t x134 = 73U;
	int32_t x135 = -1;
	int16_t x136 = INT16_MAX;
	static volatile int32_t t27 = -9295;

	t27 = (x133&(x134*(x135%x136)));

	if (t27 != -73) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = -525239428;
	uint64_t x138 = 560580108632857LLU;
	volatile uint64_t t28 = 26718750074297428LLU;

	t28 = (x137&(x138*(x139%x140)));

	if (t28 != 142947927633973604LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 37U;
	static int16_t x142 = 9;
	int32_t t29 = -7;

	t29 = (x141&(x142*(x143%x144)));

	if (t29 != 37) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x145 = UINT32_MAX;
	static volatile int8_t x146 = INT8_MIN;
	static int32_t x147 = INT32_MIN;
	volatile uint32_t x148 = 58009U;
	uint32_t t30 = 6534865U;

	t30 = (x145&(x146*(x147%x148)));

	if (t30 != 4288762240U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x153 = UINT64_MAX;
	volatile int32_t x154 = -1926086;
	int16_t x155 = -1;
	int8_t x156 = -25;
	uint64_t t31 = 102961LLU;

	t31 = (x153&(x154*(x155%x156)));

	if (t31 != 1926086LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MAX;
	int16_t x160 = -471;
	volatile int32_t t32 = -2770188;

	t32 = (x157&(x158*(x159%x160)));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x161 = INT8_MAX;
	uint16_t x162 = 7556U;
	uint32_t x163 = 647U;
	static int64_t x164 = INT64_MAX;
	int64_t t33 = 2493206920983LL;

	t33 = (x161&(x162*(x163%x164)));

	if (t33 != 28LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MAX;
	int16_t x166 = -689;
	static uint64_t x167 = 1876730LLU;
	uint64_t t34 = 60222878LLU;

	t34 = (x165&(x166*(x167%x168)));

	if (t34 != 19106LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x171 = 3462931410633LLU;
	int32_t x172 = INT32_MAX;
	uint64_t t35 = 358497137LLU;

	t35 = (x169&(x170*(x171%x172)));

	if (t35 != 103644949037713472LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;
	uint32_t t36 = 74U;

	t36 = (x173&(x174*(x175%x176)));

	if (t36 != 128U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = INT64_MIN;
	uint64_t x178 = 12400938148LLU;
	static int32_t x179 = INT32_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile uint64_t t37 = 5335035447LLU;

	t37 = (x177&(x178*(x179%x180)));

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x181 = 264653330111LLU;
	uint16_t x182 = 1U;
	static int16_t x184 = INT16_MIN;
	uint64_t t38 = 127LLU;

	t38 = (x181&(x182*(x183%x184)));

	if (t38 != 264653330068LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	uint8_t x187 = 9U;
	static int8_t x188 = INT8_MAX;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x185&(x186*(x187%x188)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = 30U;
	static uint8_t x190 = UINT8_MAX;
	int8_t x191 = INT8_MAX;
	int64_t x192 = 31568698LL;

	t40 = (x189&(x190*(x191%x192)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x194 = 67647591381995LL;
	volatile int8_t x195 = INT8_MAX;
	static int64_t t41 = -1242436181LL;

	t41 = (x193&(x194*(x195%x196)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	static int16_t x199 = 0;
	static volatile int16_t x200 = -952;
	volatile int64_t t42 = -1LL;

	t42 = (x197&(x198*(x199%x200)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x201 = INT16_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t43 = -178687731LL;

	t43 = (x201&(x202*(x203%x204)));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x206 = -3220;
	volatile int64_t x207 = INT64_MIN;
	volatile int64_t t44 = -206187048383483LL;

	t44 = (x205&(x206*(x207%x208)));

	if (t44 != 412160LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = 11U;
	int8_t x210 = INT8_MIN;
	uint64_t x212 = UINT64_MAX;

	t45 = (x209&(x210*(x211%x212)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 0U;
	int16_t x216 = -1;
	uint64_t t46 = 10LLU;

	t46 = (x213&(x214*(x215%x216)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x218 = UINT32_MAX;
	uint32_t x219 = 7397104U;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t47 = 3230U;

	t47 = (x217&(x218*(x219%x220)));

	if (t47 != 4287570176U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x222 = INT16_MIN;
	static int64_t x223 = -51LL;
	int16_t x224 = INT16_MIN;
	int64_t t48 = 940LL;

	t48 = (x221&(x222*(x223%x224)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = 340634902;
	uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = 153;

	t49 = (x225&(x226*(x227%x228)));

	if (t49 != 340634886LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = -7555;
	int16_t x232 = -1;
	volatile int64_t t50 = 547716203254444783LL;

	t50 = (x229&(x230*(x231%x232)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = 0U;
	volatile int32_t x234 = 0;
	int16_t x235 = -1419;
	static uint32_t x236 = 10188737U;
	uint32_t t51 = 70648484U;

	t51 = (x233&(x234*(x235%x236)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MIN;
	int32_t x239 = -1468761;
	volatile int64_t x240 = 643429867703209046LL;

	t52 = (x237&(x238*(x239%x240)));

	if (t52 != 3154140230320128LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x241 = 22;
	int64_t x242 = -1LL;
	int8_t x243 = 63;
	volatile int64_t t53 = 12213LL;

	t53 = (x241&(x242*(x243%x244)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -19950;
	int32_t x246 = -95802;
	int64_t x247 = INT64_MIN;
	uint8_t x248 = UINT8_MAX;

	t54 = (x245&(x246*(x247%x248)));

	if (t54 != 12259328LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = 1;
	static int64_t x251 = 227423LL;
	int64_t x252 = -1LL;
	static volatile int64_t t55 = -27129LL;

	t55 = (x249&(x250*(x251%x252)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x254 = 738972469U;
	int64_t x255 = -1LL;
	int8_t x256 = INT8_MIN;

	t56 = (x253&(x254*(x255%x256)));

	if (t56 != -738983936LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	volatile uint64_t x258 = 11887146LLU;
	volatile int64_t x259 = INT64_MAX;
	int16_t x260 = INT16_MIN;
	uint64_t t57 = 6977525454084012LLU;

	t57 = (x257&(x258*(x259%x260)));

	if (t57 != 389506112896LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = 351;
	volatile int16_t x262 = 9287;
	volatile int64_t x263 = -2870LL;
	static int64_t x264 = INT64_MIN;
	volatile int64_t t58 = 15506683943980051LL;

	t58 = (x261&(x262*(x263%x264)));

	if (t58 != 6LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MAX;
	int64_t x267 = -168016809223177LL;
	int16_t x268 = INT16_MAX;
	static int64_t t59 = -29159470LL;

	t59 = (x265&(x266*(x267%x268)));

	if (t59 != 13249LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = 1887;
	int8_t x270 = -1;
	static uint32_t x272 = UINT32_MAX;
	uint64_t t60 = 61665039LLU;

	t60 = (x269&(x270*(x271%x272)));

	if (t60 != 1092LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;

	t61 = (x273&(x274*(x275%x276)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MAX;
	volatile uint32_t x278 = 632295U;
	static int64_t x279 = 759LL;
	static int8_t x280 = 1;
	int64_t t62 = 20734622LL;

	t62 = (x277&(x278*(x279%x280)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x281 = -35;
	int16_t x283 = -51;
	int8_t x284 = INT8_MAX;
	uint32_t t63 = 3128297U;

	t63 = (x281&(x282*(x283%x284)));

	if (t63 != 17U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MAX;
	static uint64_t x286 = 3799960950610LLU;
	uint8_t x287 = 23U;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t64 = 2999007484640569335LLU;

	t64 = (x285&(x286*(x287%x288)));

	if (t64 != 6238LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x289 = 960U;
	int8_t x290 = -29;
	int64_t x291 = -3632144LL;
	int64_t t65 = -27844736781595979LL;

	t65 = (x289&(x290*(x291%x292)));

	if (t65 != 448LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MAX;
	int8_t x295 = 2;
	int16_t x296 = INT16_MAX;
	int64_t t66 = 48LL;

	t66 = (x293&(x294*(x295%x296)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x297 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;

	t67 = (x297&(x298*(x299%x300)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 324944U;
	int16_t x302 = -1;
	volatile int16_t x303 = INT16_MAX;

	t68 = (x301&(x302*(x303%x304)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x305 = -489;
	int64_t x306 = INT64_MAX;
	static uint64_t x307 = 14928745361LLU;
	int8_t x308 = INT8_MAX;

	t69 = (x305&(x306*(x307%x308)));

	if (t69 != 9223372036854775319LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x309 = 236LLU;
	int64_t x311 = -1LL;
	uint32_t x312 = 11552700U;
	uint64_t t70 = 46LLU;

	t70 = (x309&(x310*(x311%x312)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x313 = -81408196582LL;
	uint16_t x315 = 26757U;
	uint32_t x316 = UINT32_MAX;

	t71 = (x313&(x314*(x315%x316)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 1057034711297564664LL;
	int8_t x318 = INT8_MIN;
	volatile uint32_t x319 = 55232U;
	uint64_t x320 = 19660900311300LLU;

	t72 = (x317&(x318*(x319%x320)));

	if (t72 != 1057034711295328256LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x321 = 19877U;
	uint8_t x322 = 0U;
	uint16_t x323 = 388U;
	static volatile uint32_t t73 = 27808365U;

	t73 = (x321&(x322*(x323%x324)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	volatile int64_t t74 = -35508LL;

	t74 = (x325&(x326*(x327%x328)));

	if (t74 != -285704192LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int64_t x330 = -1LL;
	static int8_t x332 = -1;
	uint64_t t75 = 1541635290619502860LLU;

	t75 = (x329&(x330*(x331%x332)));

	if (t75 != 18446744073709526548LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x334 = INT8_MAX;
	uint16_t x335 = 5385U;
	volatile int16_t x336 = -568;
	static volatile int32_t t76 = 59;

	t76 = (x333&(x334*(x335%x336)));

	if (t76 != 66) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = 4790;
	int32_t x338 = 21;
	int8_t x339 = INT8_MAX;
	int32_t x340 = 760370338;
	volatile int32_t t77 = -113471356;

	t77 = (x337&(x338*(x339%x340)));

	if (t77 != 546) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	int64_t x342 = -1LL;
	int8_t x343 = 1;
	int32_t x344 = 24786;
	int64_t t78 = -376852052328LL;

	t78 = (x341&(x342*(x343%x344)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x346 = 7U;
	volatile uint64_t x347 = 40055168361LLU;
	static volatile uint64_t t79 = 264988487LLU;

	t79 = (x345&(x346*(x347%x348)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MIN;
	uint16_t x350 = 1U;
	uint16_t x351 = 268U;
	static volatile int16_t x352 = INT16_MIN;

	t80 = (x349&(x350*(x351%x352)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x353 = UINT64_MAX;
	int16_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int16_t x356 = 16158;
	volatile uint64_t t81 = 15082LLU;

	t81 = (x353&(x354*(x355%x356)));

	if (t81 != 18446744073709546959LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x357 = UINT32_MAX;
	volatile uint64_t x358 = UINT64_MAX;
	uint32_t x359 = 266265U;
	static int16_t x360 = -1323;
	volatile uint64_t t82 = 8584LLU;

	t82 = (x357&(x358*(x359%x360)));

	if (t82 != 4294701031LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x362 = -886LL;
	static volatile int64_t x363 = INT64_MIN;
	static int8_t x364 = -6;
	volatile int64_t t83 = -1797187607979LL;

	t83 = (x361&(x362*(x363%x364)));

	if (t83 != 1772LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int64_t t84 = 261341LL;

	t84 = (x365&(x366*(x367%x368)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = 165U;
	uint8_t x374 = 35U;
	int32_t x376 = INT32_MAX;

	t85 = (x373&(x374*(x375%x376)));

	if (t85 != 133U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = -1LL;
	int8_t x379 = 0;
	static int64_t x380 = INT64_MIN;
	int64_t t86 = 9974365061LL;

	t86 = (x377&(x378*(x379%x380)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x381 = 49U;
	uint64_t x384 = 473LLU;
	uint64_t t87 = 371606028654383LLU;

	t87 = (x381&(x382*(x383%x384)));

	if (t87 != 48LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x385 = 7971026927292817LLU;
	uint64_t x386 = 383LLU;
	int16_t x387 = 0;
	int8_t x388 = -1;
	uint64_t t88 = 6537906619LLU;

	t88 = (x385&(x386*(x387%x388)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MIN;
	static volatile int16_t x390 = 177;
	static int8_t x391 = INT8_MIN;

	t89 = (x389&(x390*(x391%x392)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x394 = 5LL;
	static int8_t x395 = 1;
	int32_t x396 = INT32_MAX;
	int64_t t90 = 280821LL;

	t90 = (x393&(x394*(x395%x396)));

	if (t90 != 5LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = 14;
	int32_t x398 = -131887226;
	int8_t x399 = -1;
	int32_t t91 = 15259;

	t91 = (x397&(x398*(x399%x400)));

	if (t91 != 10) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = -1;
	int8_t x402 = INT8_MIN;
	static int16_t x403 = INT16_MAX;
	uint16_t x404 = UINT16_MAX;
	static int32_t t92 = 1020;

	t92 = (x401&(x402*(x403%x404)));

	if (t92 != -4194176) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x406 = INT8_MIN;
	volatile int64_t x407 = INT64_MAX;
	static volatile int64_t t93 = 2812LL;

	t93 = (x405&(x406*(x407%x408)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x410 = UINT16_MAX;
	int8_t x412 = 54;

	t94 = (x409&(x410*(x411%x412)));

	if (t94 != 303693830LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x414 = -1;
	volatile uint8_t x415 = 40U;
	int8_t x416 = 6;
	int32_t t95 = -1558;

	t95 = (x413&(x414*(x415%x416)));

	if (t95 != 65532) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x417 = UINT8_MAX;
	int32_t x418 = 3;
	volatile int64_t x419 = INT64_MIN;
	uint64_t x420 = 7969LLU;
	volatile uint64_t t96 = 131298644807319661LLU;

	t96 = (x417&(x418*(x419%x420)));

	if (t96 != 169LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -1LL;
	static int32_t x423 = -1;
	volatile int32_t x424 = INT32_MIN;
	volatile int64_t t97 = 490965265619151263LL;

	t97 = (x421&(x422*(x423%x424)));

	if (t97 != 3LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x430 = INT32_MIN;
	volatile uint8_t x432 = 6U;

	t98 = (x429&(x430*(x431%x432)));

	if (t98 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x434 = INT8_MIN;
	int16_t x435 = -1;
	static uint32_t x436 = UINT32_MAX;
	uint32_t t99 = 3U;

	t99 = (x433&(x434*(x435%x436)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

