#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 3322;
int64_t x2 = INT64_MAX;
uint8_t x3 = UINT8_MAX;
uint8_t x4 = 30U;
static int16_t x6 = -1;
int32_t x13 = INT32_MIN;
uint8_t x16 = 28U;
int32_t t3 = 36232;
int8_t x20 = INT8_MAX;
static volatile uint16_t x21 = 170U;
int64_t x26 = 1650LL;
uint64_t x33 = 2020LLU;
uint64_t x39 = UINT64_MAX;
int32_t x51 = -1;
int64_t x60 = INT64_MIN;
uint32_t t15 = 40361202U;
int64_t x66 = INT64_MAX;
uint16_t x84 = UINT16_MAX;
static uint16_t x86 = UINT16_MAX;
int64_t x88 = -14097517711344LL;
int64_t x91 = INT64_MIN;
uint16_t x92 = UINT16_MAX;
volatile int32_t t24 = -125268;
volatile int8_t x106 = INT8_MIN;
volatile int32_t t27 = -1;
volatile int8_t x121 = -1;
volatile int32_t x125 = -1;
static uint64_t x135 = 688LLU;
int64_t x137 = -1LL;
volatile int64_t t35 = -170617032045LL;
int64_t x145 = -1LL;
static volatile uint16_t x146 = UINT16_MAX;
int32_t x147 = 37;
static int8_t x152 = -1;
int32_t t37 = -35940982;
int32_t x159 = INT32_MAX;
uint32_t x167 = 2685U;
int8_t x169 = INT8_MIN;
static int16_t x171 = INT16_MAX;
uint64_t x178 = UINT64_MAX;
int8_t x181 = -1;
uint8_t x182 = UINT8_MAX;
int16_t x187 = -1;
static int32_t t46 = 1379;
static int32_t x189 = INT32_MIN;
uint16_t x190 = UINT16_MAX;
int16_t x193 = INT16_MIN;
uint8_t x195 = UINT8_MAX;
static volatile int8_t x199 = INT8_MAX;
volatile int32_t x204 = INT32_MAX;
uint16_t x206 = UINT16_MAX;
uint16_t x214 = 5138U;
int16_t x215 = INT16_MIN;
static int8_t x219 = INT8_MIN;
int32_t x221 = -809034597;
int16_t x227 = -102;
uint32_t t56 = 18U;
volatile uint64_t x232 = 1546867768754935LLU;
volatile int32_t t59 = -1;
int64_t x243 = 52LL;
int32_t x252 = -1;
int64_t x254 = INT64_MIN;
static uint16_t x255 = UINT16_MAX;
static int8_t x257 = 29;
volatile int32_t x260 = INT32_MAX;
int32_t t64 = 1;
static volatile int32_t t66 = -2;
int8_t x269 = 1;
uint32_t x270 = UINT32_MAX;
int32_t t67 = 1912915;
int8_t x277 = 1;
uint32_t x279 = 85554744U;
volatile int32_t t71 = 1;
int16_t x290 = 113;
uint16_t x297 = 2U;
volatile int32_t x302 = INT32_MIN;
volatile int8_t x321 = 1;
uint32_t x322 = 665796242U;
int32_t x323 = -1;
int16_t x324 = -1;
int8_t x325 = INT8_MIN;
static int32_t x326 = INT32_MIN;
int16_t x344 = -1;
volatile int64_t t86 = -306576361189136533LL;
uint64_t x358 = UINT64_MAX;
static uint16_t x367 = 0U;
int64_t x371 = INT64_MIN;
static int32_t x373 = INT32_MIN;
uint8_t x374 = 48U;
int32_t x375 = 14;


void f0(void) {
	volatile int32_t t0 = 55;

	t0 = (x1*(x2<(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x7 = -476023239204927413LL;
	static uint8_t x8 = 0U;
	volatile int32_t t1 = 33793;

	t1 = (x5*(x6<(x7<=x8)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	static volatile uint64_t x10 = UINT64_MAX;
	volatile int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 6202;

	t2 = (x9*(x10<(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x14 = 500598U;
	int8_t x15 = INT8_MIN;

	t3 = (x13*(x14<(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	uint32_t x18 = 23U;
	uint32_t x19 = UINT32_MAX;
	volatile int32_t t4 = -1510;

	t4 = (x17*(x18<(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x22 = 1U;
	int64_t x23 = INT64_MIN;
	static int64_t x24 = -250051LL;
	volatile int32_t t5 = -23;

	t5 = (x21*(x22<(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int64_t x27 = -210395LL;
	uint16_t x28 = UINT16_MAX;
	static volatile int32_t t6 = 1;

	t6 = (x25*(x26<(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = 193882148110556LL;
	uint64_t x32 = 1135199194471LLU;
	int64_t t7 = INT64_MIN;

	t7 = (x29*(x30<(x31<=x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x34 = 33U;
	int8_t x35 = -1;
	int16_t x36 = -4059;
	volatile uint64_t t8 = 592751742775LLU;

	t8 = (x33*(x34<(x35<=x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static volatile int32_t x38 = -1;
	int8_t x40 = 0;
	volatile int32_t t9 = 473565933;

	t9 = (x37*(x38<(x39<=x40)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 9936263333925LLU;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -695748699;

	t10 = (x41*(x42<(x43<=x44)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 3;
	int32_t x46 = 24;
	volatile int8_t x47 = -1;
	volatile uint16_t x48 = 15296U;
	volatile int32_t t11 = 23747;

	t11 = (x45*(x46<(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = 4673U;
	int64_t x52 = 519794619869LL;
	static volatile int32_t t12 = -4547;

	t12 = (x49*(x50<(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MIN;
	static uint32_t x55 = 1U;
	static uint8_t x56 = 19U;
	uint32_t t13 = UINT32_MAX;

	t13 = (x53*(x54<(x55<=x56)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -2;
	int64_t x58 = 448056420815204LL;
	int16_t x59 = -1;
	volatile int32_t t14 = -1;

	t14 = (x57*(x58<(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 35542021U;
	int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MIN;

	t15 = (x61*(x62<(x63<=x64)));

	if (t15 != 35542021U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = INT8_MAX;
	int32_t t16 = 1319901;

	t16 = (x65*(x66<(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	static volatile int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	volatile int8_t x72 = INT8_MIN;
	int64_t t17 = -69993486578459978LL;

	t17 = (x69*(x70<(x71<=x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = -898;
	uint32_t x75 = 172U;
	uint32_t x76 = 81106287U;
	volatile int32_t t18 = 76098410;

	t18 = (x73*(x74<(x75<=x76)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 2480U;
	uint64_t x80 = 141892783880383LLU;
	volatile uint64_t t19 = 132590023089234LLU;

	t19 = (x77*(x78<(x79<=x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 29622LL;
	uint64_t x82 = 270802312319LLU;
	int16_t x83 = INT16_MIN;
	volatile int64_t t20 = -1918000866454LL;

	t20 = (x81*(x82<(x83<=x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 102U;
	uint8_t x87 = UINT8_MAX;
	static volatile int32_t t21 = -34927;

	t21 = (x85*(x86<(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = 1;
	uint64_t t22 = 8651890173430978LLU;

	t22 = (x89*(x90<(x91<=x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MAX;
	uint8_t x94 = 12U;
	int32_t x95 = -48361;
	static int64_t x96 = INT64_MIN;
	int64_t t23 = -2LL;

	t23 = (x93*(x94<(x95<=x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 2;
	int32_t x98 = -620228952;
	static int8_t x99 = INT8_MAX;
	static int16_t x100 = -21;

	t24 = (x97*(x98<(x99<=x100)));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	int8_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	volatile uint64_t x104 = 431498LLU;
	static int32_t t25 = 1863292;

	t25 = (x101*(x102<(x103<=x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1470;
	int32_t x107 = -1;
	volatile uint32_t x108 = 1U;
	int32_t t26 = 1;

	t26 = (x105*(x106<(x107<=x108)));

	if (t26 != 1470) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = 183541781U;

	t27 = (x109*(x110<(x111<=x112)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile int8_t x114 = INT8_MAX;
	uint16_t x115 = 2U;
	int16_t x116 = INT16_MIN;
	int32_t t28 = -16;

	t28 = (x113*(x114<(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static uint32_t x118 = 7U;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -1;
	int64_t t29 = -11816077809970LL;

	t29 = (x117*(x118<(x119<=x120)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = 0;
	int16_t x123 = -1;
	int64_t x124 = INT64_MAX;
	volatile int32_t t30 = -3;

	t30 = (x121*(x122<(x123<=x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 1315354060U;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -9426263;

	t31 = (x125*(x126<(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	int64_t x130 = -919LL;
	uint8_t x131 = 97U;
	static volatile int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 5327958;

	t32 = (x129*(x130<(x131<=x132)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	static int64_t x134 = INT64_MIN;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 988;

	t33 = (x133*(x134<(x135<=x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = -1;
	volatile int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MAX;
	int64_t t34 = -19LL;

	t34 = (x137*(x138<(x139<=x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	static int8_t x143 = -1;
	int64_t x144 = -159698025LL;

	t35 = (x141*(x142<(x143<=x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x148 = 60;
	int64_t t36 = -3853955LL;

	t36 = (x145*(x146<(x147<=x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int64_t x150 = 470899LL;
	static int32_t x151 = 0;

	t37 = (x149*(x150<(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = -1;
	uint8_t x155 = 4U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -2730;

	t38 = (x153*(x154<(x155<=x156)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint32_t x158 = 294661519U;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 108;

	t39 = (x157*(x158<(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	int32_t x162 = 0;
	uint32_t x163 = 110834U;
	uint8_t x164 = UINT8_MAX;
	volatile int64_t t40 = -85766636129046LL;

	t40 = (x161*(x162<(x163<=x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = 0;
	volatile int8_t x166 = -31;
	int32_t x168 = INT32_MIN;
	int32_t t41 = -927581742;

	t41 = (x165*(x166<(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x170 = -1;
	int32_t x172 = INT32_MAX;
	static int32_t t42 = -50676;

	t42 = (x169*(x170<(x171<=x172)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 25222857880LLU;
	static int64_t x174 = -484914036LL;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -1;
	uint64_t t43 = 14119341764741231LLU;

	t43 = (x173*(x174<(x175<=x176)));

	if (t43 != 25222857880LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 3069;

	t44 = (x177*(x178<(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x183 = 456;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 0;

	t45 = (x181*(x182<(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int8_t x188 = -12;

	t46 = (x185*(x186<(x187<=x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x191 = -1;
	int16_t x192 = 0;
	volatile int32_t t47 = 319;

	t47 = (x189*(x190<(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = 252U;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 8259;

	t48 = (x193*(x194<(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	static uint32_t x198 = UINT32_MAX;
	int16_t x200 = -482;
	int32_t t49 = -1285;

	t49 = (x197*(x198<(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 15606;
	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MAX;
	volatile int32_t t50 = 733999897;

	t50 = (x201*(x202<(x203<=x204)));

	if (t50 != 15606) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	static int64_t x207 = INT64_MAX;
	uint8_t x208 = 4U;
	static int32_t t51 = -1;

	t51 = (x205*(x206<(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 11449U;
	volatile int16_t x210 = 3;
	int64_t x211 = INT64_MIN;
	static int64_t x212 = -1LL;
	int32_t t52 = 9879;

	t52 = (x209*(x210<(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 24U;
	int16_t x216 = -1;
	int32_t t53 = 947675949;

	t53 = (x213*(x214<(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	volatile int16_t x218 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = -29442615;

	t54 = (x217*(x218<(x219<=x220)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = 68U;
	int32_t x223 = INT32_MAX;
	uint16_t x224 = 10352U;
	int32_t t55 = -14901;

	t55 = (x221*(x222<(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 356352621U;
	static volatile uint8_t x226 = 35U;
	int16_t x228 = -1405;

	t56 = (x225*(x226<(x227<=x228)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = -1;
	int64_t x231 = -89883107920931325LL;
	volatile int32_t t57 = INT32_MIN;

	t57 = (x229*(x230<(x231<=x232)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 3U;
	int16_t x234 = 1;
	volatile int8_t x235 = -1;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t58 = -33296;

	t58 = (x233*(x234<(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	uint64_t x238 = 2688205LLU;
	uint8_t x239 = 1U;
	static uint64_t x240 = UINT64_MAX;

	t59 = (x237*(x238<(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int8_t x242 = INT8_MIN;
	uint16_t x244 = 61U;
	int64_t t60 = 1503148LL;

	t60 = (x241*(x242<(x243<=x244)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 22U;
	static uint8_t x248 = 21U;
	int32_t t61 = 862321;

	t61 = (x245*(x246<(x247<=x248)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int32_t x250 = INT32_MAX;
	uint32_t x251 = 181329U;
	int32_t t62 = -3;

	t62 = (x249*(x250<(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 143448280003429475LLU;
	int16_t x256 = -1;
	volatile uint64_t t63 = 125729LLU;

	t63 = (x253*(x254<(x255<=x256)));

	if (t63 != 143448280003429475LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;

	t64 = (x257*(x258<(x259<=x260)));

	if (t64 != 29) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 2;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = 23;
	int16_t x264 = 56;
	int32_t t65 = -252;

	t65 = (x261*(x262<(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = -1LL;
	uint8_t x267 = 24U;
	static int64_t x268 = INT64_MIN;

	t66 = (x265*(x266<(x267<=x268)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MAX;

	t67 = (x269*(x270<(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 972LLU;
	int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MAX;
	uint64_t t68 = 1837777352119LLU;

	t68 = (x273*(x274<(x275<=x276)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 376904631507LLU;
	volatile uint64_t x280 = 14404504617992LLU;
	int32_t t69 = 6210;

	t69 = (x277*(x278<(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	volatile int64_t x284 = INT64_MIN;
	int64_t t70 = 2798LL;

	t70 = (x281*(x282<(x283<=x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int16_t x286 = -310;
	uint8_t x287 = 1U;
	int16_t x288 = 1;

	t71 = (x285*(x286<(x287<=x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int16_t x291 = -1;
	volatile uint8_t x292 = UINT8_MAX;
	int64_t t72 = 20928422LL;

	t72 = (x289*(x290<(x291<=x292)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MAX;
	volatile int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t73 = -46775053;

	t73 = (x293*(x294<(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = 1587U;
	int16_t x299 = -1;
	int32_t x300 = 0;
	int32_t t74 = 0;

	t74 = (x297*(x298<(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -194;

	t75 = (x301*(x302<(x303<=x304)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -520954243;
	volatile int64_t x306 = -1LL;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -7726;

	t76 = (x305*(x306<(x307<=x308)));

	if (t76 != -520954243) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = 143;
	uint8_t x312 = 10U;
	static volatile int32_t t77 = 7;

	t77 = (x309*(x310<(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	static int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	uint8_t x316 = 1U;
	int32_t t78 = 8;

	t78 = (x313*(x314<(x315<=x316)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;
	static int16_t x318 = -239;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t79 = 1;

	t79 = (x317*(x318<(x319<=x320)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t t80 = -2;

	t80 = (x321*(x322<(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x327 = 1;
	volatile uint64_t x328 = 7658741964254LLU;
	int32_t t81 = 0;

	t81 = (x325*(x326<(x327<=x328)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = 4U;
	uint8_t x331 = 117U;
	uint32_t x332 = 83508719U;
	volatile int32_t t82 = -3;

	t82 = (x329*(x330<(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	int8_t x334 = 18;
	static volatile int64_t x335 = 0LL;
	uint8_t x336 = 6U;
	static volatile int32_t t83 = -4;

	t83 = (x333*(x334<(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -278168929LL;
	static int8_t x338 = INT8_MAX;
	uint32_t x339 = 1290818U;
	uint32_t x340 = UINT32_MAX;
	volatile int64_t t84 = -16340383LL;

	t84 = (x337*(x338<(x339<=x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = -1;
	static uint16_t x343 = 12354U;
	volatile int32_t t85 = -283458994;

	t85 = (x341*(x342<(x343<=x344)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int16_t x346 = -1;
	uint32_t x347 = UINT32_MAX;
	static volatile int16_t x348 = -1;

	t86 = (x345*(x346<(x347<=x348)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 65U;
	int8_t x350 = 1;
	static int8_t x351 = INT8_MIN;
	static int32_t x352 = -244;
	volatile int32_t t87 = 1;

	t87 = (x349*(x350<(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	uint64_t x354 = 133666211942634090LLU;
	int32_t x355 = 64062429;
	volatile int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -414154;

	t88 = (x353*(x354<(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 44U;
	static int64_t x359 = 11LL;
	uint16_t x360 = 5145U;
	volatile int32_t t89 = -618725358;

	t89 = (x357*(x358<(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int32_t x362 = 1;
	int32_t x363 = -1;
	int64_t x364 = INT64_MIN;
	static int64_t t90 = -355LL;

	t90 = (x361*(x362<(x363<=x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x365 = UINT8_MAX;
	static int16_t x366 = INT16_MAX;
	static int8_t x368 = -18;
	volatile int32_t t91 = -1;

	t91 = (x365*(x366<(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t92 = 8659147;

	t92 = (x369*(x370<(x371<=x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x376 = INT16_MIN;
	int32_t t93 = 3511;

	t93 = (x373*(x374<(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 8705U;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = -1418;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = 2421924;

	t94 = (x377*(x378<(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	volatile uint8_t x382 = UINT8_MAX;
	int32_t x383 = 15;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 7564933;

	t95 = (x381*(x382<(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 13213U;
	volatile uint64_t x386 = 0LLU;
	int16_t x387 = INT16_MIN;
	int32_t x388 = 63348589;
	volatile int32_t t96 = -28;

	t96 = (x385*(x386<(x387<=x388)));

	if (t96 != 13213) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	uint64_t x391 = 1851LLU;
	uint16_t x392 = 787U;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x389*(x390<(x391<=x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int16_t x394 = INT16_MIN;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t98 = 1037564;

	t98 = (x393*(x394<(x395<=x396)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -11;
	int16_t x398 = -254;
	volatile int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	int32_t t99 = -82;

	t99 = (x397*(x398<(x399<=x400)));

	if (t99 != -11) { NG(); } else { ; }
	
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

