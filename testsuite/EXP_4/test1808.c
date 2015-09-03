#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -435;
int16_t x12 = INT16_MIN;
int64_t x20 = -1LL;
int8_t x21 = INT8_MIN;
int8_t x25 = -6;
int8_t x30 = INT8_MIN;
volatile int32_t x31 = INT32_MAX;
uint16_t x32 = 7750U;
volatile int32_t t7 = 6580828;
uint64_t x33 = 2694942LLU;
static uint16_t x40 = 1U;
uint32_t x41 = UINT32_MAX;
static int16_t x46 = INT16_MAX;
int8_t x50 = -1;
uint64_t x56 = UINT64_MAX;
static int32_t x65 = INT32_MIN;
int32_t t18 = -5489;
uint32_t t19 = 10178542U;
int64_t x86 = -1LL;
volatile uint8_t x87 = UINT8_MAX;
volatile int64_t t22 = -54196LL;
volatile int32_t t25 = -6023;
int8_t x105 = -56;
int8_t x109 = INT8_MIN;
int32_t x110 = INT32_MIN;
static volatile int16_t x111 = INT16_MAX;
volatile int32_t t27 = -60035430;
volatile int64_t x124 = INT64_MAX;
int32_t t30 = -6;
static int32_t x126 = INT32_MIN;
static int8_t x127 = INT8_MIN;
volatile int32_t t31 = 3909981;
int8_t x130 = 0;
int64_t x136 = -5294326959083LL;
uint64_t x142 = UINT64_MAX;
int32_t x145 = INT32_MIN;
int32_t t37 = 554;
uint32_t x155 = UINT32_MAX;
volatile int32_t t38 = -179151042;
uint64_t x165 = UINT64_MAX;
uint64_t x180 = 368054LLU;
static int32_t x182 = INT32_MIN;
static int8_t x193 = INT8_MIN;
int64_t x200 = -4762803286417LL;
static uint8_t x202 = UINT8_MAX;
static int32_t t50 = -3845350;
int8_t x206 = -6;
int8_t x211 = INT8_MAX;
volatile uint32_t x212 = UINT32_MAX;
int32_t x215 = 13;
int64_t x216 = INT64_MIN;
static uint64_t x217 = 33673820711592LLU;
int8_t x220 = -1;
volatile int64_t x224 = -1LL;
volatile int32_t t55 = -4366903;
uint64_t x232 = 9183081287766018689LLU;
static int32_t x243 = 2;
volatile int32_t t62 = 6995737;
static uint32_t x253 = 21171U;
volatile uint32_t t63 = 37134979U;
int64_t x258 = INT64_MAX;
volatile int64_t t65 = -53040LL;
int8_t x269 = INT8_MAX;
int64_t x272 = 0LL;
int16_t x281 = INT16_MAX;
static uint8_t x288 = 0U;
volatile int32_t t71 = -1;
uint8_t x294 = UINT8_MAX;
int32_t t73 = 15;
volatile int16_t x299 = -1;
uint32_t x300 = 31562U;
static volatile int16_t x307 = -1;
int8_t x309 = INT8_MIN;
uint16_t x312 = 2664U;
int32_t t76 = -470341;
static uint8_t x313 = UINT8_MAX;
int32_t t79 = -1;
uint16_t x326 = 241U;
static uint8_t x333 = 6U;
int16_t x350 = -1;
uint16_t x354 = 35U;
static uint64_t x360 = 7437758428LLU;
int32_t t87 = 3;
static volatile uint64_t x366 = 111LLU;
static volatile int8_t x371 = INT8_MIN;
volatile int32_t t90 = 47;
int32_t x379 = -1;
int32_t t93 = -3;
int32_t x385 = INT32_MIN;
uint32_t x389 = UINT32_MAX;
uint32_t t95 = UINT32_MAX;
uint64_t t96 = 7358431250LLU;
int8_t x397 = -45;
static uint32_t x403 = 114145650U;
int16_t x404 = INT16_MIN;
static uint32_t x406 = 201226935U;


void f0(void) {
	int32_t x1 = 1;
	int64_t x2 = 2042457657026759LL;
	uint16_t x3 = 3407U;
	int16_t x4 = INT16_MAX;

	t0 = (x1+(x2<=(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 473874940U;
	volatile uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 10U;
	volatile int64_t x8 = -13625502750415784LL;
	volatile uint32_t t1 = 2U;

	t1 = (x5+(x6<=(x7&x8)));

	if (t1 != 473874940U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 39U;
	int32_t x10 = -31;
	static int32_t x11 = INT32_MIN;
	volatile int32_t t2 = 6708;

	t2 = (x9+(x10<=(x11&x12)));

	if (t2 != 39) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint64_t x14 = 9224125LLU;
	volatile uint8_t x15 = 103U;
	uint32_t x16 = 4662540U;
	int32_t t3 = -4820;

	t3 = (x13+(x14<=(x15&x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint16_t x18 = 1067U;
	static volatile int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -881350;

	t4 = (x17+(x18<=(x19&x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	static int8_t x23 = INT8_MIN;
	uint16_t x24 = 11U;
	static volatile int32_t t5 = 63;

	t5 = (x21+(x22<=(x23&x24)));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = -30;
	static int16_t x27 = -1;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 36745101;

	t6 = (x25+(x26<=(x27&x28)));

	if (t6 != -6) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;

	t7 = (x29+(x30<=(x31&x32)));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 1U;
	static int64_t x35 = -8305364096LL;
	static int64_t x36 = -202350789887LL;
	static volatile uint64_t t8 = 5142LLU;

	t8 = (x33+(x34<=(x35&x36)));

	if (t8 != 2694942LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 11811635LL;
	volatile int32_t x38 = 7167;
	int8_t x39 = INT8_MIN;
	static int64_t t9 = -893597374LL;

	t9 = (x37+(x38<=(x39&x40)));

	if (t9 != 11811635LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 3227U;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x41+(x42<=(x43&x44)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 9572U;
	uint32_t x47 = UINT32_MAX;
	uint8_t x48 = 36U;
	int32_t t11 = 24116;

	t11 = (x45+(x46<=(x47&x48)));

	if (t11 != 9572) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int32_t x51 = -1202;
	static int32_t x52 = INT32_MAX;
	int64_t t12 = 5228154LL;

	t12 = (x49+(x50<=(x51&x52)));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 191539295903LL;
	volatile int8_t x54 = INT8_MAX;
	int32_t x55 = INT32_MIN;
	int64_t t13 = -1621656176LL;

	t13 = (x53+(x54<=(x55&x56)));

	if (t13 != 191539295904LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 1;
	static uint8_t x58 = 12U;
	volatile int8_t x59 = -1;
	static volatile uint16_t x60 = 453U;
	volatile int32_t t14 = 1272;

	t14 = (x57+(x58<=(x59&x60)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 4215026404069LLU;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 46;
	int32_t x64 = 1938;
	volatile uint64_t t15 = 2061830795393LLU;

	t15 = (x61+(x62<=(x63&x64)));

	if (t15 != 4215026404070LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 59U;
	volatile int32_t x67 = -1;
	static int16_t x68 = 1;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x65+(x66<=(x67&x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	volatile int64_t x70 = INT64_MIN;
	uint32_t x71 = 98516U;
	int8_t x72 = -1;
	int32_t t17 = -871;

	t17 = (x69+(x70<=(x71&x72)));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 2U;
	int32_t x75 = INT32_MIN;
	static int16_t x76 = -1;

	t18 = (x73+(x74<=(x75&x76)));

	if (t18 != 256) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 130U;
	uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = INT64_MAX;
	static int32_t x80 = -1;

	t19 = (x77+(x78<=(x79&x80)));

	if (t19 != 131U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	static int8_t x82 = -1;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = -24610134447027LL;
	static volatile int32_t t20 = INT32_MAX;

	t20 = (x81+(x82<=(x83&x84)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -275386;
	volatile int16_t x88 = INT16_MAX;
	int32_t t21 = -19;

	t21 = (x85+(x86<=(x87&x88)));

	if (t21 != -275385) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = -64323LL;
	uint64_t x90 = 51748737543423LLU;
	int32_t x91 = 17;
	volatile uint64_t x92 = 24644LLU;

	t22 = (x89+(x90<=(x91&x92)));

	if (t22 != -64323LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = 0LLU;
	static int8_t x96 = INT8_MIN;
	uint64_t t23 = UINT64_MAX;

	t23 = (x93+(x94<=(x95&x96)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	static int64_t x98 = INT64_MAX;
	static int16_t x99 = -65;
	int8_t x100 = INT8_MIN;
	int32_t t24 = -304305;

	t24 = (x97+(x98<=(x99&x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	uint16_t x102 = 31373U;
	uint64_t x103 = 159LLU;
	int16_t x104 = INT16_MAX;

	t25 = (x101+(x102<=(x103&x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = 9447;
	int32_t x107 = INT32_MAX;
	int8_t x108 = -1;
	static volatile int32_t t26 = -75643;

	t26 = (x105+(x106<=(x107&x108)));

	if (t26 != -55) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x112 = UINT64_MAX;

	t27 = (x109+(x110<=(x111&x112)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	uint64_t x114 = 757088042768043484LLU;
	uint32_t x115 = 14U;
	volatile uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = 1183043;

	t28 = (x113+(x114<=(x115&x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 16U;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -1;
	int16_t x120 = 13784;
	volatile int32_t t29 = -142;

	t29 = (x117+(x118<=(x119&x120)));

	if (t29 != 17) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	volatile int16_t x122 = INT16_MAX;
	static int16_t x123 = 0;

	t30 = (x121+(x122<=(x123&x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -1;
	uint32_t x128 = UINT32_MAX;

	t31 = (x125+(x126<=(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	int16_t x131 = 0;
	uint32_t x132 = 7565U;
	static volatile int32_t t32 = -55899324;

	t32 = (x129+(x130<=(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -118117432;
	uint64_t x134 = UINT64_MAX;
	volatile int32_t x135 = INT32_MAX;
	int32_t t33 = 2;

	t33 = (x133+(x134<=(x135&x136)));

	if (t33 != -118117432) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	int32_t x138 = 32992345;
	volatile int32_t x139 = INT32_MIN;
	static uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 153904903;

	t34 = (x137+(x138<=(x139&x140)));

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	static int32_t x143 = -1;
	uint8_t x144 = UINT8_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x141+(x142<=(x143&x144)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MIN;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t36 = -32846;

	t36 = (x145+(x146<=(x147&x148)));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 1U;
	volatile uint8_t x150 = UINT8_MAX;
	volatile int16_t x151 = -1;
	static int16_t x152 = INT16_MIN;

	t37 = (x149+(x150<=(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	volatile uint64_t x154 = 11LLU;
	int64_t x156 = -8295596718592116LL;

	t38 = (x153+(x154<=(x155&x156)));

	if (t38 != 256) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static int8_t x158 = INT8_MAX;
	int16_t x159 = 2;
	static int32_t x160 = 646606;
	int32_t t39 = 2221;

	t39 = (x157+(x158<=(x159&x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	volatile int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	static volatile uint64_t x164 = UINT64_MAX;
	static int32_t t40 = -14558;

	t40 = (x161+(x162<=(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 146435LL;
	int32_t x167 = -9721057;
	int32_t x168 = -1;
	uint64_t t41 = UINT64_MAX;

	t41 = (x165+(x166<=(x167&x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -5911;
	int64_t x170 = -1LL;
	static int8_t x171 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = -449983;

	t42 = (x169+(x170<=(x171&x172)));

	if (t42 != -5911) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int16_t x174 = -1;
	int8_t x175 = INT8_MAX;
	uint32_t x176 = 154U;
	uint64_t t43 = UINT64_MAX;

	t43 = (x173+(x174<=(x175&x176)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -39008748;
	uint8_t x178 = 45U;
	static int32_t x179 = 1590;
	static int32_t t44 = -16820704;

	t44 = (x177+(x178<=(x179&x180)));

	if (t44 != -39008747) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 5U;
	int32_t x183 = INT32_MAX;
	static int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -212;

	t45 = (x181+(x182<=(x183&x184)));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint32_t x186 = UINT32_MAX;
	uint32_t x187 = 1885141U;
	static int32_t x188 = 10878;
	volatile int32_t t46 = 271175041;

	t46 = (x185+(x186<=(x187&x188)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = -1;
	uint16_t x191 = 3895U;
	int64_t x192 = INT64_MAX;
	static volatile int64_t t47 = -4889847568544501LL;

	t47 = (x189+(x190<=(x191&x192)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x194 = 3394934U;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = 2389U;
	static volatile int32_t t48 = 532464837;

	t48 = (x193+(x194<=(x195&x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 45U;
	uint8_t x198 = 1U;
	uint64_t x199 = 61396928604350493LLU;
	static int32_t t49 = 307659390;

	t49 = (x197+(x198<=(x199&x200)));

	if (t49 != 46) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -2446;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = -322;

	t50 = (x201+(x202<=(x203&x204)));

	if (t50 != -2445) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 0U;
	static int16_t x207 = 0;
	int16_t x208 = -1;
	int32_t t51 = 1;

	t51 = (x205+(x206<=(x207&x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 24176U;
	int64_t x210 = -1LL;
	volatile uint32_t t52 = 1605479408U;

	t52 = (x209+(x210<=(x211&x212)));

	if (t52 != 24177U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = -1;
	int16_t x214 = INT16_MAX;
	static int32_t t53 = 2;

	t53 = (x213+(x214<=(x215&x216)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = 5U;
	int32_t x219 = INT32_MIN;
	uint64_t t54 = 229954116774555072LLU;

	t54 = (x217+(x218<=(x219&x220)));

	if (t54 != 33673820711592LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int16_t x222 = INT16_MAX;
	int8_t x223 = -1;

	t55 = (x221+(x222<=(x223&x224)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = 0;
	int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 22928;

	t56 = (x225+(x226<=(x227&x228)));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	volatile int64_t x230 = -11LL;
	volatile int8_t x231 = INT8_MAX;
	int32_t t57 = 6;

	t57 = (x229+(x230<=(x231&x232)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int32_t x234 = -746112;
	uint32_t x235 = 33U;
	volatile int8_t x236 = INT8_MAX;
	int64_t t58 = -1656151513LL;

	t58 = (x233+(x234<=(x235&x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	int32_t x239 = 447649201;
	int64_t x240 = -338453LL;
	int64_t t59 = 4808195LL;

	t59 = (x237+(x238<=(x239&x240)));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int64_t x242 = 11089683046348LL;
	int8_t x244 = INT8_MIN;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x241+(x242<=(x243&x244)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -9LL;
	volatile uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MIN;
	static int32_t x248 = INT32_MAX;
	volatile int64_t t61 = 1372880666LL;

	t61 = (x245+(x246<=(x247&x248)));

	if (t61 != -8LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	volatile int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;

	t62 = (x249+(x250<=(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MIN;
	volatile int8_t x256 = -28;

	t63 = (x253+(x254<=(x255&x256)));

	if (t63 != 21171U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	static int16_t x259 = -3;
	static uint16_t x260 = UINT16_MAX;
	int32_t t64 = INT32_MIN;

	t64 = (x257+(x258<=(x259&x260)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int16_t x262 = -51;
	int16_t x263 = -1;
	int16_t x264 = -6;

	t65 = (x261+(x262<=(x263&x264)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	static uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 59U;
	int8_t x268 = -2;
	int32_t t66 = 1733684;

	t66 = (x265+(x266<=(x267&x268)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -32253071;
	static uint64_t x271 = UINT64_MAX;
	int32_t t67 = -866;

	t67 = (x269+(x270<=(x271&x272)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	static int8_t x274 = -1;
	int64_t x275 = -1LL;
	static int8_t x276 = -1;
	volatile int32_t t68 = 0;

	t68 = (x273+(x274<=(x275&x276)));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 2623;

	t69 = (x277+(x278<=(x279&x280)));

	if (t69 != 65536) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	uint64_t x283 = 500439539127966LLU;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 9;

	t70 = (x281+(x282<=(x283&x284)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	volatile uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MIN;

	t71 = (x285+(x286<=(x287&x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	volatile int32_t x291 = INT32_MAX;
	int64_t x292 = -1LL;
	volatile int64_t t72 = -23456570909882022LL;

	t72 = (x289+(x290<=(x291&x292)));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	static uint64_t x295 = 266488LLU;
	int16_t x296 = INT16_MIN;

	t73 = (x293+(x294<=(x295&x296)));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = INT32_MIN;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x297+(x298<=(x299&x300)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x305 = -5;
	static int64_t x306 = INT64_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t75 = 7255051;

	t75 = (x305+(x306<=(x307&x308)));

	if (t75 != -5) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = 8961167853007515515LLU;

	t76 = (x309+(x310<=(x311&x312)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x314 = INT64_MIN;
	static int32_t x315 = INT32_MAX;
	volatile int16_t x316 = INT16_MAX;
	volatile int32_t t77 = -53;

	t77 = (x313+(x314<=(x315&x316)));

	if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x317 = 35347122062117LLU;
	static int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	static int16_t x320 = -1;
	static volatile uint64_t t78 = 7010508LLU;

	t78 = (x317+(x318<=(x319&x320)));

	if (t78 != 35347122062118LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -678;
	static int8_t x322 = INT8_MIN;
	volatile int8_t x323 = INT8_MIN;
	static uint64_t x324 = UINT64_MAX;

	t79 = (x321+(x322<=(x323&x324)));

	if (t79 != -677) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MIN;
	static int64_t x327 = -1LL;
	uint16_t x328 = 3U;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x325+(x326<=(x327&x328)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MAX;
	int8_t x330 = INT8_MIN;
	volatile int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = UINT64_MAX;
	int64_t t81 = INT64_MAX;

	t81 = (x329+(x330<=(x331&x332)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x334 = 539;
	int32_t x335 = INT32_MIN;
	int64_t x336 = 895634LL;
	volatile int32_t t82 = 64446529;

	t82 = (x333+(x334<=(x335&x336)));

	if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	int64_t x342 = 11970005865851218LL;
	static int16_t x343 = -1;
	int64_t x344 = INT64_MAX;
	int64_t t83 = 9020893230050LL;

	t83 = (x341+(x342<=(x343&x344)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x345 = -38434783;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -1;
	uint32_t x348 = 4216246U;
	volatile int32_t t84 = 1;

	t84 = (x345+(x346<=(x347&x348)));

	if (t84 != -38434783) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t85 = -1;

	t85 = (x349+(x350<=(x351&x352)));

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 29208U;
	int32_t x355 = INT32_MAX;
	static int32_t x356 = INT32_MAX;
	static volatile int32_t t86 = -57545366;

	t86 = (x353+(x354<=(x355&x356)));

	if (t86 != 29209) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x357 = 4082U;
	static int16_t x358 = -1;
	volatile int64_t x359 = INT64_MAX;

	t87 = (x357+(x358<=(x359&x360)));

	if (t87 != 4082) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = -5;
	uint16_t x362 = 9466U;
	volatile int32_t x363 = -31;
	int64_t x364 = 8100411076873042LL;
	volatile int32_t t88 = -74469;

	t88 = (x361+(x362<=(x363&x364)));

	if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x365 = INT32_MAX;
	volatile int8_t x367 = 4;
	int8_t x368 = -1;
	int32_t t89 = INT32_MAX;

	t89 = (x365+(x366<=(x367&x368)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x369 = -1;
	int32_t x370 = -1;
	int32_t x372 = INT32_MAX;

	t90 = (x369+(x370<=(x371&x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 11U;
	volatile uint32_t t91 = 125549302U;

	t91 = (x373+(x374<=(x375&x376)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 108136386U;
	int64_t x378 = 21287270277LL;
	static int8_t x380 = -6;
	uint32_t t92 = 92847U;

	t92 = (x377+(x378<=(x379&x380)));

	if (t92 != 108136386U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = 4;
	int64_t x382 = -1LL;
	int16_t x383 = INT16_MAX;
	int64_t x384 = 4LL;

	t93 = (x381+(x382<=(x383&x384)));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x386 = -4;
	int8_t x387 = INT8_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x385+(x386<=(x387&x388)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x390 = 1839U;
	int64_t x391 = 1973749537LL;
	int16_t x392 = 3510;

	t95 = (x389+(x390<=(x391&x392)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x393 = UINT64_MAX;
	static volatile int32_t x394 = 2447;
	uint64_t x395 = UINT64_MAX;
	static int32_t x396 = INT32_MIN;

	t96 = (x393+(x394<=(x395&x396)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = -1;
	int64_t x399 = 30LL;
	static int16_t x400 = 1;
	static volatile int32_t t97 = 18929759;

	t97 = (x397+(x398<=(x399&x400)));

	if (t97 != -44) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 135U;
	uint16_t x402 = UINT16_MAX;
	volatile int32_t t98 = 6;

	t98 = (x401+(x402<=(x403&x404)));

	if (t98 != 136) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MAX;
	int32_t x407 = 195;
	static int16_t x408 = INT16_MAX;
	volatile int32_t t99 = -6;

	t99 = (x405+(x406<=(x407&x408)));

	if (t99 != 127) { NG(); } else { ; }
	
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

