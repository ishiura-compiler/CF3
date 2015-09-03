#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x6 = UINT32_MAX;
uint16_t x19 = 30U;
volatile uint8_t x21 = 9U;
volatile uint8_t x23 = 0U;
volatile int32_t x35 = INT32_MIN;
static int64_t x40 = INT64_MIN;
uint16_t x48 = 2U;
int16_t x49 = 0;
int32_t x59 = -8113;
uint8_t x64 = 3U;
uint64_t x69 = 1589314776631389LLU;
int16_t x76 = -10282;
static uint64_t x84 = UINT64_MAX;
volatile uint8_t x85 = 28U;
int32_t x113 = -1;
volatile int8_t x123 = INT8_MIN;
uint8_t x124 = 17U;
static uint32_t x126 = 2U;
int64_t x128 = -408LL;
volatile int64_t t31 = -2261783435LL;
static volatile uint64_t t32 = 215505LLU;
static volatile int8_t x135 = -2;
static volatile int16_t x136 = 15;
int64_t t34 = 23376211068325241LL;
int64_t x145 = INT64_MAX;
volatile int32_t x148 = INT32_MIN;
int64_t x149 = -19135089858374464LL;
int8_t x152 = INT8_MAX;
int32_t t38 = 18;
static int64_t x157 = INT64_MAX;
uint32_t x158 = 5062U;
volatile int16_t x162 = -1;
volatile int64_t x165 = 57960172494395822LL;
int64_t t44 = -23LL;
int32_t x194 = 306;
int8_t x195 = INT8_MIN;
int64_t x196 = INT64_MIN;
int32_t t48 = -393571996;
volatile int32_t x205 = INT32_MIN;
int8_t x210 = -1;
int8_t x212 = INT8_MAX;
uint8_t x214 = 0U;
int32_t t54 = 16107954;
uint8_t x224 = UINT8_MAX;
volatile int64_t x232 = 201643LL;
volatile int32_t t58 = -253;
static int8_t x241 = -1;
int32_t x244 = INT32_MIN;
uint16_t x248 = 3397U;
volatile int16_t x250 = -7;
volatile int32_t x253 = -4;
volatile uint64_t x257 = 3662266361LLU;
volatile uint64_t t64 = 13960187LLU;
int32_t x261 = INT32_MIN;
volatile int32_t t65 = -2928;
volatile int32_t t66 = -78;
int8_t x269 = INT8_MIN;
volatile int64_t x271 = INT64_MIN;
uint32_t t68 = 7725817U;
volatile int32_t t71 = -7808697;
static volatile int32_t t73 = 182264;
static uint64_t x303 = UINT64_MAX;
int8_t x305 = INT8_MIN;
int8_t x306 = INT8_MAX;
int64_t x308 = INT64_MAX;
int16_t x310 = INT16_MIN;
int64_t x319 = INT64_MIN;
static int8_t x321 = INT8_MIN;
static volatile int32_t t80 = -7337;
int32_t x327 = INT32_MIN;
uint64_t x332 = UINT64_MAX;
uint8_t x334 = UINT8_MAX;
int16_t x337 = -11;
static int32_t x340 = 29350;
static uint8_t x342 = 22U;
int32_t t85 = -320;
static int64_t x350 = INT64_MIN;
static uint32_t x353 = 566779452U;
int16_t x355 = INT16_MIN;
uint64_t x356 = 1183513108993LLU;
uint32_t x359 = 643132890U;
static uint64_t x362 = 514801LLU;
int32_t x380 = INT32_MIN;
volatile int16_t x384 = INT16_MIN;
int32_t x386 = INT32_MAX;
int64_t x398 = INT64_MAX;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	volatile int32_t x2 = INT32_MAX;
	int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -66;

	t0 = (x1&(x2<(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 1U;
	int16_t x7 = -1;
	volatile int64_t x8 = -1LL;
	static volatile int32_t t1 = 4580;

	t1 = (x5&(x6<(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -11;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -32;

	t2 = (x9&(x10<(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int64_t x14 = INT64_MIN;
	static int32_t x15 = 0;
	static uint16_t x16 = 0U;
	volatile int32_t t3 = 192175;

	t3 = (x13&(x14<(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static uint8_t x18 = 42U;
	int8_t x20 = 49;
	int32_t t4 = 2952;

	t4 = (x17&(x18<(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = 459122828706436LL;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 26583;

	t5 = (x21&(x22<(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = 36547397;
	int16_t x27 = INT16_MIN;
	volatile int32_t x28 = 62;
	volatile int32_t t6 = 57178955;

	t6 = (x25&(x26<(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int32_t x30 = INT32_MAX;
	static int32_t x31 = INT32_MIN;
	volatile int8_t x32 = -1;
	int32_t t7 = -777;

	t7 = (x29&(x30<(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 856U;
	int32_t x34 = INT32_MIN;
	int16_t x36 = INT16_MAX;
	volatile uint32_t t8 = 1U;

	t8 = (x33&(x34<(x35<=x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 327LLU;
	int64_t x38 = -1LL;
	int64_t x39 = INT64_MIN;
	uint64_t t9 = 26352196347LLU;

	t9 = (x37&(x38<(x39<=x40)));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x42 = 10048043445023025LL;
	int16_t x43 = INT16_MIN;
	int64_t x44 = -1LL;
	int32_t t10 = 15378;

	t10 = (x41&(x42<(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = 185U;
	static int32_t x47 = 567;
	int64_t t11 = -598557791408859637LL;

	t11 = (x45&(x46<(x47<=x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = -50301087LL;
	int16_t x51 = -853;
	static int16_t x52 = 10867;
	int32_t t12 = -18;

	t12 = (x49&(x50<(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 3U;
	int32_t x54 = -1;
	static uint16_t x55 = UINT16_MAX;
	volatile uint64_t x56 = UINT64_MAX;
	volatile uint32_t t13 = 47361414U;

	t13 = (x53&(x54<(x55<=x56)));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -1LL;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 1;

	t14 = (x57&(x58<(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MAX;
	uint32_t x63 = 183717U;
	static volatile int32_t t15 = 20308;

	t15 = (x61&(x62<(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	uint64_t x66 = 263615201LLU;
	int64_t x67 = -1LL;
	uint16_t x68 = 3U;
	static volatile int32_t t16 = 90;

	t16 = (x65&(x66<(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = UINT64_MAX;
	static int16_t x71 = -10;
	int16_t x72 = -1;
	static uint64_t t17 = 0LLU;

	t17 = (x69&(x70<(x71<=x72)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	static uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	volatile int32_t t18 = 0;

	t18 = (x73&(x74<(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 3U;
	uint32_t x78 = 1U;
	uint32_t x79 = UINT32_MAX;
	volatile int8_t x80 = 3;
	volatile int32_t t19 = 14265520;

	t19 = (x77&(x78<(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1552U;
	volatile int32_t x82 = 1649;
	uint16_t x83 = UINT16_MAX;
	int32_t t20 = -784371;

	t20 = (x81&(x82<(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MAX;
	uint8_t x87 = 54U;
	volatile uint8_t x88 = 11U;
	volatile int32_t t21 = -7;

	t21 = (x85&(x86<(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 12U;
	uint8_t x90 = 3U;
	volatile uint8_t x91 = 0U;
	static int64_t x92 = -4531981746674839LL;
	volatile int32_t t22 = -364490;

	t22 = (x89&(x90<(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MAX;
	volatile uint16_t x94 = 4U;
	uint16_t x95 = 121U;
	int8_t x96 = 17;
	int32_t t23 = -461;

	t23 = (x93&(x94<(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	volatile int16_t x98 = -1;
	int64_t x99 = INT64_MIN;
	uint8_t x100 = 0U;
	volatile int32_t t24 = -7;

	t24 = (x97&(x98<(x99<=x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 154023771898557214LLU;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;
	static int32_t x104 = INT32_MAX;
	uint64_t t25 = 2430725LLU;

	t25 = (x101&(x102<(x103<=x104)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = 15355202;
	int8_t x106 = -16;
	static int16_t x107 = 11;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -6352346;

	t26 = (x105&(x106<(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	static volatile uint16_t x110 = 1335U;
	volatile int16_t x111 = 61;
	volatile uint64_t x112 = 9016720513133630717LLU;
	volatile int32_t t27 = -85647254;

	t27 = (x109&(x110<(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = 2874;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t28 = -1;

	t28 = (x113&(x114<(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = 0U;
	volatile int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MAX;
	int32_t t29 = -3;

	t29 = (x117&(x118<(x119<=x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	static volatile int8_t x122 = -41;
	int32_t t30 = 0;

	t30 = (x121&(x122<(x123<=x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static int64_t x127 = INT64_MIN;

	t31 = (x125&(x126<(x127<=x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 4784354367LLU;
	static int32_t x130 = 46085;
	uint16_t x131 = 16U;
	int64_t x132 = -1LL;

	t32 = (x129&(x130<(x131<=x132)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int16_t x134 = -1;
	int32_t t33 = 51995;

	t33 = (x133&(x134<(x135<=x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	volatile uint32_t x138 = 677U;
	volatile int8_t x139 = -1;
	int16_t x140 = INT16_MAX;

	t34 = (x137&(x138<(x139<=x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 1960580U;
	int64_t x142 = INT64_MAX;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	uint32_t t35 = 39582714U;

	t35 = (x141&(x142<(x143<=x144)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int64_t x147 = 1693LL;
	volatile int64_t t36 = -578023752031371LL;

	t36 = (x145&(x146<(x147<=x148)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -1;
	static int8_t x151 = -1;
	int64_t t37 = 4172284473290LL;

	t37 = (x149&(x150<(x151<=x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	volatile int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	int16_t x156 = -6;

	t38 = (x153&(x154<(x155<=x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = 1;
	int8_t x160 = INT8_MAX;
	volatile int64_t t39 = -27LL;

	t39 = (x157&(x158<(x159<=x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 105448539U;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = INT64_MIN;
	volatile uint32_t t40 = 639201U;

	t40 = (x161&(x162<(x163<=x164)));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = -1;
	volatile int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	int64_t t41 = -57980860360381LL;

	t41 = (x165&(x166<(x167<=x168)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	static int16_t x170 = 0;
	volatile int32_t x171 = -1;
	uint8_t x172 = UINT8_MAX;
	static int32_t t42 = -66051362;

	t42 = (x169&(x170<(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 114847855627265061LL;
	volatile int8_t x174 = -23;
	int32_t x175 = 816854873;
	uint32_t x176 = UINT32_MAX;
	int64_t t43 = -3238736986015854719LL;

	t43 = (x173&(x174<(x175<=x176)));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MAX;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MAX;

	t44 = (x177&(x178<(x179<=x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = 87U;
	int64_t x183 = -1LL;
	static int32_t x184 = INT32_MIN;
	int32_t t45 = -101882;

	t45 = (x181&(x182<(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 201LL;
	static int32_t x186 = 1;
	static int8_t x187 = INT8_MAX;
	int32_t x188 = INT32_MAX;
	volatile int64_t t46 = -10188LL;

	t46 = (x185&(x186<(x187<=x188)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	volatile int8_t x190 = -1;
	static int16_t x191 = 0;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = -13895;

	t47 = (x189&(x190<(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;

	t48 = (x193&(x194<(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = -15;
	volatile int64_t x199 = -1LL;
	volatile uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = 106;

	t49 = (x197&(x198<(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -21LL;
	volatile int64_t x202 = -47402712974125LL;
	uint16_t x203 = 212U;
	int8_t x204 = INT8_MIN;
	int64_t t50 = -253608LL;

	t50 = (x201&(x202<(x203<=x204)));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = -23;
	uint32_t x207 = 63764U;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = -2575931;

	t51 = (x205&(x206<(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = UINT16_MAX;
	uint32_t x211 = 173159807U;
	volatile int32_t t52 = 116088709;

	t52 = (x209&(x210<(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MAX;
	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	static volatile int64_t t53 = -2042807552LL;

	t53 = (x213&(x214<(x215<=x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -201;
	static uint64_t x218 = 22779030952023547LLU;
	volatile int8_t x219 = 22;
	int8_t x220 = -1;

	t54 = (x217&(x218<(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = 45;
	static volatile int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MAX;
	int32_t t55 = -54;

	t55 = (x221&(x222<(x223<=x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	int8_t x226 = -15;
	uint32_t x227 = 245U;
	int64_t x228 = INT64_MAX;
	int32_t t56 = 31602934;

	t56 = (x225&(x226<(x227<=x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	uint8_t x230 = 6U;
	int64_t x231 = INT64_MIN;
	volatile uint64_t t57 = 1LLU;

	t57 = (x229&(x230<(x231<=x232)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 3852U;
	int32_t x234 = -1;
	int64_t x235 = -10101811193LL;
	int64_t x236 = INT64_MIN;

	t58 = (x233&(x234<(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 2780879090LL;
	int32_t x238 = INT32_MIN;
	int16_t x239 = -219;
	volatile uint64_t x240 = 22943267067LLU;
	volatile int64_t t59 = 820226715968LL;

	t59 = (x237&(x238<(x239<=x240)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = -15LL;
	int64_t x243 = -9309442544648583LL;
	volatile int32_t t60 = -17266;

	t60 = (x241&(x242<(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 209601005;
	volatile uint16_t x246 = 1969U;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t61 = -330;

	t61 = (x245&(x246<(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x249 = 1;
	int64_t x251 = 2938657279LL;
	int64_t x252 = INT64_MIN;
	int32_t t62 = -3;

	t62 = (x249&(x250<(x251<=x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x254 = UINT64_MAX;
	int64_t x255 = -28797900LL;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -1;

	t63 = (x253&(x254<(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = 5U;
	static uint32_t x259 = 151300959U;
	volatile uint8_t x260 = 15U;

	t64 = (x257&(x258<(x259<=x260)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = 295375477LL;
	int32_t x263 = -3;
	uint64_t x264 = UINT64_MAX;

	t65 = (x261&(x262<(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 3;
	static int32_t x266 = INT32_MIN;
	uint16_t x267 = 51U;
	volatile uint8_t x268 = 77U;

	t66 = (x265&(x266<(x267<=x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = -1;
	volatile int8_t x272 = -1;
	int32_t t67 = 9901871;

	t67 = (x269&(x270<(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 8U;
	int8_t x274 = -1;
	uint32_t x275 = 75U;
	volatile int8_t x276 = INT8_MIN;

	t68 = (x273&(x274<(x275<=x276)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x277 = INT64_MIN;
	uint16_t x278 = 7U;
	static int64_t x279 = INT64_MAX;
	volatile uint64_t x280 = 6438831LLU;
	volatile int64_t t69 = -67292698863335036LL;

	t69 = (x277&(x278<(x279<=x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -1;
	volatile int32_t x283 = INT32_MIN;
	uint64_t x284 = 5150296634839LLU;
	int32_t t70 = 2822437;

	t70 = (x281&(x282<(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 50U;
	int16_t x286 = INT16_MIN;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = -1;

	t71 = (x285&(x286<(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	int8_t x291 = 18;
	volatile uint8_t x292 = 13U;
	static volatile int32_t t72 = 90105317;

	t72 = (x289&(x290<(x291<=x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 10U;
	static int32_t x294 = INT32_MIN;
	static volatile int64_t x295 = INT64_MIN;
	static volatile int32_t x296 = -1;

	t73 = (x293&(x294<(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 449U;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = INT64_MIN;
	volatile int16_t x300 = INT16_MIN;
	volatile uint32_t t74 = 17232U;

	t74 = (x297&(x298<(x299<=x300)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 106106058039585LL;
	int64_t x302 = -16109989436200845LL;
	int64_t x304 = -7180LL;
	int64_t t75 = 0LL;

	t75 = (x301&(x302<(x303<=x304)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x307 = 927U;
	int32_t t76 = -37787;

	t76 = (x305&(x306<(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = 2325U;
	int8_t x311 = 61;
	uint64_t x312 = 11448312LLU;
	volatile int32_t t77 = -340;

	t77 = (x309&(x310<(x311<=x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int64_t x315 = -4206453435704392LL;
	int16_t x316 = -1;
	volatile int32_t t78 = 157682202;

	t78 = (x313&(x314<(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	uint64_t x320 = UINT64_MAX;
	int32_t t79 = -429424;

	t79 = (x317&(x318<(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	volatile int16_t x323 = -1;
	int16_t x324 = INT16_MIN;

	t80 = (x321&(x322<(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint8_t x326 = 0U;
	uint16_t x328 = UINT16_MAX;
	static volatile int32_t t81 = 3;

	t81 = (x325&(x326<(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -3;
	int16_t x330 = -1;
	int16_t x331 = -30;
	int32_t t82 = 3495224;

	t82 = (x329&(x330<(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 363LL;
	volatile int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	int64_t t83 = -62031968028966LL;

	t83 = (x333&(x334<(x335<=x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	int8_t x339 = -38;
	static int32_t t84 = 3219147;

	t84 = (x337&(x338<(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	uint64_t x343 = 52708828834LLU;
	int32_t x344 = 29123305;

	t85 = (x341&(x342<(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x346 = INT64_MIN;
	static int32_t x347 = INT32_MIN;
	uint64_t x348 = 2260038966130122LLU;
	int32_t t86 = 51267;

	t86 = (x345&(x346<(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = -1;
	int32_t t87 = -249041063;

	t87 = (x349&(x350<(x351<=x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = UINT64_MAX;
	uint32_t t88 = 21369949U;

	t88 = (x353&(x354<(x355<=x356)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = -1;
	int8_t x358 = -1;
	int64_t x360 = INT64_MAX;
	int32_t t89 = -75108;

	t89 = (x357&(x358<(x359<=x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	static volatile uint16_t x363 = UINT16_MAX;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 62663725;

	t90 = (x361&(x362<(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int64_t x366 = -1LL;
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 81660U;
	static volatile int64_t t91 = 14250702172LL;

	t91 = (x365&(x366<(x367<=x368)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -59;
	static int8_t x370 = INT8_MAX;
	static uint16_t x371 = 93U;
	int16_t x372 = -1;
	static int32_t t92 = -53;

	t92 = (x369&(x370<(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MAX;
	uint16_t x374 = 9891U;
	uint64_t x375 = UINT64_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = 8017;

	t93 = (x373&(x374<(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	int64_t x378 = -1LL;
	int8_t x379 = -1;
	int32_t t94 = -17;

	t94 = (x377&(x378<(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MAX;
	static int16_t x382 = -1;
	uint16_t x383 = 0U;
	volatile int32_t t95 = 28;

	t95 = (x381&(x382<(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 24061491LL;
	static int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	volatile int64_t t96 = 49LL;

	t96 = (x385&(x386<(x387<=x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -43269129564405777LL;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 205U;
	int64_t x392 = -120269639090188669LL;
	static int64_t t97 = 169470898783168100LL;

	t97 = (x389&(x390<(x391<=x392)));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 6735709U;
	volatile uint16_t x394 = 7U;
	int16_t x395 = INT16_MAX;
	uint16_t x396 = 371U;
	volatile uint32_t t98 = 0U;

	t98 = (x393&(x394<(x395<=x396)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	uint8_t x399 = 5U;
	int8_t x400 = -1;
	int32_t t99 = 624019;

	t99 = (x397&(x398<(x399<=x400)));

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

