#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x12 = -1;
volatile int32_t t2 = INT32_MIN;
volatile uint64_t x15 = 1541189794LLU;
int64_t x16 = 4081136691845105985LL;
static volatile int32_t x18 = INT32_MIN;
uint8_t x19 = 60U;
static int16_t x34 = INT16_MAX;
uint32_t x35 = UINT32_MAX;
uint8_t x39 = UINT8_MAX;
int32_t x47 = INT32_MIN;
int16_t x54 = INT16_MIN;
int8_t x72 = 0;
static int16_t x74 = INT16_MAX;
uint32_t x75 = 339101U;
int32_t t18 = 5;
uint64_t x82 = 1175718742982239LLU;
static int32_t x85 = INT32_MAX;
volatile uint64_t t22 = 6406671364869LLU;
int8_t x93 = INT8_MAX;
static int64_t t23 = 199649815412425607LL;
volatile int16_t x102 = INT16_MIN;
int64_t t25 = INT64_MIN;
uint32_t x106 = 0U;
volatile int16_t x107 = INT16_MIN;
uint8_t x115 = UINT8_MAX;
uint64_t x118 = 960919453676LLU;
volatile int16_t x120 = INT16_MAX;
int32_t t29 = 753;
static volatile int8_t x121 = INT8_MIN;
uint32_t x129 = UINT32_MAX;
int8_t x133 = 13;
int32_t x135 = INT32_MIN;
static uint8_t x140 = 1U;
int64_t t38 = INT64_MIN;
static int64_t x157 = INT64_MAX;
int16_t x160 = INT16_MIN;
uint8_t x161 = 50U;
volatile int64_t x164 = -1947201671LL;
uint8_t x165 = 36U;
uint32_t x188 = 61U;
int16_t x191 = INT16_MAX;
volatile uint32_t t48 = 4522740U;
int32_t x205 = INT32_MIN;
uint8_t x211 = 92U;
static uint32_t t55 = UINT32_MAX;
volatile int32_t x226 = INT32_MIN;
int32_t x228 = -214;
volatile int64_t t56 = -66404831576011LL;
volatile int8_t x231 = 1;
uint64_t x232 = 1454100857138953764LLU;
int64_t x237 = 1LL;
int16_t x239 = INT16_MIN;
uint16_t x246 = 4U;
int32_t t62 = 56075;
int8_t x257 = INT8_MIN;
static volatile uint8_t x260 = 3U;
static int32_t t64 = -48397;
int16_t x263 = -1;
static volatile int32_t t65 = INT32_MAX;
static volatile uint64_t t66 = 508569214217677952LLU;
static int32_t t69 = -68696;
int8_t x282 = -12;
static int32_t t70 = -2242131;
uint16_t x286 = UINT16_MAX;
int16_t x288 = -2;
static uint32_t x289 = UINT32_MAX;
int64_t x290 = INT64_MAX;
int64_t t72 = 57LL;
volatile uint8_t x294 = 18U;
uint32_t x303 = 0U;
int32_t x308 = -139695236;
int32_t t76 = 22;
static int64_t x313 = INT64_MIN;
static uint16_t x321 = UINT16_MAX;
uint8_t x333 = 12U;
uint64_t x339 = UINT64_MAX;
int32_t x347 = INT32_MIN;
int32_t x353 = INT32_MAX;
int16_t x358 = INT16_MAX;
uint16_t x364 = UINT16_MAX;
int16_t x365 = -10863;
volatile uint32_t t91 = 729901598U;
static uint64_t x377 = 116916933LLU;
int32_t x379 = INT32_MIN;
volatile uint64_t t94 = 451887LLU;
uint32_t t95 = UINT32_MAX;
uint32_t x386 = 713548U;
int64_t x388 = INT64_MIN;
int64_t t96 = -313316511111301464LL;
int64_t t97 = -8494579600151333LL;
static int32_t t99 = INT32_MIN;


void f0(void) {
	int8_t x1 = 3;
	volatile int32_t x2 = INT32_MAX;
	uint32_t x3 = 945U;
	volatile int8_t x4 = -11;
	volatile int32_t t0 = -1;

	t0 = (x1|((x2<x3)*x4));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MIN;
	volatile int8_t x7 = -1;
	volatile int16_t x8 = -1;
	static int32_t t1 = -22399606;

	t1 = (x5|((x6<x7)*x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 31344719232LLU;

	t2 = (x9|((x10<x11)*x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	uint16_t x14 = 48U;
	int64_t t3 = -5251225LL;

	t3 = (x13|((x14<x15)*x16));

	if (t3 != 4081136691845105985LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 64641LLU;
	static int32_t x20 = INT32_MIN;
	uint64_t t4 = 337003220433568980LLU;

	t4 = (x17|((x18<x19)*x20));

	if (t4 != 18446744071562132609LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MAX;
	static int32_t x22 = INT32_MIN;
	uint16_t x23 = 309U;
	static uint64_t x24 = 41926LLU;
	static volatile uint64_t t5 = 5291624357425900540LLU;

	t5 = (x21|((x22<x23)*x24));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	uint8_t x26 = UINT8_MAX;
	static volatile uint8_t x27 = 45U;
	uint16_t x28 = UINT16_MAX;
	uint32_t t6 = UINT32_MAX;

	t6 = (x25|((x26<x27)*x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 87U;
	int32_t x30 = INT32_MIN;
	volatile int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 1;

	t7 = (x29|((x30<x31)*x32));

	if (t7 != -41) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 779U;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33|((x34<x35)*x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = 118093512664LLU;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -60111000;

	t9 = (x37|((x38<x39)*x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 1;
	static uint64_t x42 = UINT64_MAX;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;
	volatile int64_t t10 = 190030246726991LL;

	t10 = (x41|((x42<x43)*x44));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int16_t x46 = -1;
	static uint16_t x48 = 492U;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x45|((x46<x47)*x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 51LL;
	static int8_t x50 = 2;
	uint8_t x51 = UINT8_MAX;
	int16_t x52 = -1;
	int64_t t12 = 37914620786276653LL;

	t12 = (x49|((x50<x51)*x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 2U;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 1853506107763LL;
	int64_t t13 = -1003877957447242LL;

	t13 = (x53|((x54<x55)*x56));

	if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = UINT32_MAX;
	uint8_t x58 = 60U;
	int64_t x59 = INT64_MIN;
	static uint16_t x60 = 18U;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x57|((x58<x59)*x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = 33;
	volatile uint8_t x63 = UINT8_MAX;
	volatile int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -37;

	t15 = (x61|((x62<x63)*x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 676840154641967LLU;
	uint16_t x66 = 1U;
	int32_t x67 = INT32_MAX;
	int32_t x68 = 130;
	volatile uint64_t t16 = 41726719190538258LLU;

	t16 = (x65|((x66<x67)*x68));

	if (t16 != 676840154642095LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static uint32_t x70 = 131052U;
	static volatile int32_t x71 = -6;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x69|((x70<x71)*x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 11U;
	volatile uint8_t x76 = 106U;

	t18 = (x73|((x74<x75)*x76));

	if (t18 != 107) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 12U;
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	volatile uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 2U;

	t19 = (x77|((x78<x79)*x80));

	if (t19 != 12U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MAX;
	int64_t x83 = -7861LL;
	int64_t x84 = INT64_MIN;
	static int64_t t20 = -373949LL;

	t20 = (x81|((x82<x83)*x84));

	if (t20 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = INT32_MIN;
	uint16_t x87 = UINT16_MAX;
	volatile int16_t x88 = -49;
	int32_t t21 = 7952266;

	t21 = (x85|((x86<x87)*x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	int16_t x90 = -1;
	volatile int8_t x91 = -1;
	uint64_t x92 = UINT64_MAX;

	t22 = (x89|((x90<x91)*x92));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = INT32_MAX;
	static uint32_t x95 = UINT32_MAX;
	volatile int64_t x96 = INT64_MIN;

	t23 = (x93|((x94<x95)*x96));

	if (t23 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint8_t x98 = 58U;
	uint16_t x99 = 337U;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x97|((x98<x99)*x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	static uint16_t x104 = 4U;

	t25 = (x101|((x102<x103)*x104));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 0U;
	int16_t x108 = -1;
	uint32_t t26 = UINT32_MAX;

	t26 = (x105|((x106<x107)*x108));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 47825LL;
	uint32_t x110 = 246935784U;
	int64_t x111 = -1LL;
	int16_t x112 = 0;
	int64_t t27 = -12192591130056LL;

	t27 = (x109|((x110<x111)*x112));

	if (t27 != 47825LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -789;
	volatile uint32_t x114 = 3391784U;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 68LL;

	t28 = (x113|((x114<x115)*x116));

	if (t28 != -789LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -5;
	static int32_t x119 = -1;

	t29 = (x117|((x118<x119)*x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 915756706U;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 1LL;

	t30 = (x121|((x122<x123)*x124));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x126 = -2443LL;
	uint64_t x127 = 3093166959927033LLU;
	static int64_t x128 = INT64_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x125|((x126<x127)*x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MAX;
	int8_t x132 = INT8_MIN;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x129|((x130<x131)*x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = 1266;
	int64_t x136 = -1LL;
	int64_t t33 = -5LL;

	t33 = (x133|((x134<x135)*x136));

	if (t33 != 13LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 93U;
	static int64_t x138 = -1LL;
	static int64_t x139 = INT64_MIN;
	volatile int32_t t34 = 147368;

	t34 = (x137|((x138<x139)*x140));

	if (t34 != 93) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = 10;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = -125618457;

	t35 = (x141|((x142<x143)*x144));

	if (t35 != -118) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	int64_t x147 = -46088826LL;
	volatile int16_t x148 = 0;
	int32_t t36 = 15159081;

	t36 = (x145|((x146<x147)*x148));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 24017733LLU;
	int8_t x150 = -7;
	int8_t x151 = -1;
	int32_t x152 = 6;
	uint64_t t37 = 83869LLU;

	t37 = (x149|((x150<x151)*x152));

	if (t37 != 24017735LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	uint8_t x154 = 4U;
	int64_t x155 = -1364152LL;
	volatile uint8_t x156 = 4U;

	t38 = (x153|((x154<x155)*x156));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	uint16_t x159 = 34U;
	volatile int64_t t39 = INT64_MAX;

	t39 = (x157|((x158<x159)*x160));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -1LL;
	int64_t x163 = 4206272770036LL;
	int64_t t40 = -71666416044544803LL;

	t40 = (x161|((x162<x163)*x164));

	if (t40 != -1947201669LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = 218464;
	int64_t x167 = INT64_MAX;
	volatile int8_t x168 = -1;
	static volatile int32_t t41 = 2;

	t41 = (x165|((x166<x167)*x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	volatile uint16_t x170 = UINT16_MAX;
	int16_t x171 = INT16_MIN;
	static uint16_t x172 = 1971U;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x169|((x170<x171)*x172));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = 3;
	int16_t x175 = 31;
	uint32_t x176 = 136U;
	volatile uint32_t t43 = 3U;

	t43 = (x173|((x174<x175)*x176));

	if (t43 != 4294967176U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -53;
	volatile int8_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	volatile int8_t x180 = 1;
	int32_t t44 = -29014857;

	t44 = (x177|((x178<x179)*x180));

	if (t44 != -53) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	uint16_t x182 = 0U;
	int64_t x183 = INT64_MAX;
	volatile int32_t x184 = INT32_MIN;
	static int32_t t45 = -1;

	t45 = (x181|((x182<x183)*x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 5610758085909073LL;
	uint8_t x187 = 3U;
	volatile uint32_t t46 = 1403U;

	t46 = (x185|((x186<x187)*x188));

	if (t46 != 4294934528U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	static int16_t x190 = 0;
	static uint8_t x192 = 7U;
	static volatile int64_t t47 = INT64_MAX;

	t47 = (x189|((x190<x191)*x192));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile uint64_t x194 = 14797LLU;
	uint16_t x195 = 321U;
	uint32_t x196 = 3296U;

	t48 = (x193|((x194<x195)*x196));

	if (t48 != 4294934528U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static volatile int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -2019;
	static volatile int64_t t49 = INT64_MIN;

	t49 = (x197|((x198<x199)*x200));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 4U;
	uint16_t x202 = 33U;
	uint64_t x203 = 18388921580LLU;
	volatile int8_t x204 = -1;
	volatile int32_t t50 = 0;

	t50 = (x201|((x202<x203)*x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	uint16_t x207 = 32235U;
	uint64_t x208 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = (x205|((x206<x207)*x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = 58;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x209|((x210<x211)*x212));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = 563277;
	volatile uint32_t x214 = 0U;
	int8_t x215 = -3;
	static volatile int32_t x216 = INT32_MAX;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x213|((x214<x215)*x216));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 2LLU;
	int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	volatile uint64_t t54 = 642259947320720LLU;

	t54 = (x217|((x218<x219)*x220));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int64_t x222 = -3306772589529LL;
	int16_t x223 = INT16_MAX;
	static uint32_t x224 = UINT32_MAX;

	t55 = (x221|((x222<x223)*x224));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	int8_t x227 = INT8_MIN;

	t56 = (x225|((x226<x227)*x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 461383;
	uint64_t x230 = UINT64_MAX;
	volatile uint64_t t57 = 8079881993777612476LLU;

	t57 = (x229|((x230<x231)*x232));

	if (t57 != 461383LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static int32_t x234 = INT32_MIN;
	int8_t x235 = -11;
	int64_t x236 = INT64_MIN;
	int64_t t58 = 61526225LL;

	t58 = (x233|((x234<x235)*x236));

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -1LL;
	static volatile int8_t x240 = -12;
	volatile int64_t t59 = -267871197727LL;

	t59 = (x237|((x238<x239)*x240));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 14U;
	static int16_t x244 = -1;
	uint32_t t60 = UINT32_MAX;

	t60 = (x241|((x242<x243)*x244));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	volatile int16_t x247 = -1;
	int8_t x248 = INT8_MIN;
	int32_t t61 = 22482851;

	t61 = (x245|((x246<x247)*x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -5898;
	int16_t x250 = 989;
	static int64_t x251 = -1LL;
	uint16_t x252 = 1U;

	t62 = (x249|((x250<x251)*x252));

	if (t62 != -5898) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -2498387;
	volatile int32_t x254 = INT32_MAX;
	int16_t x255 = INT16_MIN;
	static int32_t x256 = INT32_MIN;
	int32_t t63 = 2475399;

	t63 = (x253|((x254<x255)*x256));

	if (t63 != -2498387) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x258 = INT8_MIN;
	int16_t x259 = -1;

	t64 = (x257|((x258<x259)*x260));

	if (t64 != -125) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	int16_t x262 = INT16_MIN;
	int32_t x264 = INT32_MAX;

	t65 = (x261|((x262<x263)*x264));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 24LLU;
	int16_t x266 = 0;
	uint32_t x267 = 64765U;
	uint8_t x268 = 3U;

	t66 = (x265|((x266<x267)*x268));

	if (t66 != 27LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = 0;
	static volatile uint64_t x271 = UINT64_MAX;
	int32_t x272 = INT32_MIN;
	static uint64_t t67 = UINT64_MAX;

	t67 = (x269|((x270<x271)*x272));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MAX;
	uint8_t x275 = 0U;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 3992775049LL;

	t68 = (x273|((x274<x275)*x276));

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 1U;
	volatile int32_t x278 = -1;
	volatile uint8_t x279 = UINT8_MAX;
	int32_t x280 = -1;

	t69 = (x277|((x278<x279)*x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	int16_t x283 = 8051;
	int8_t x284 = 0;

	t70 = (x281|((x282<x283)*x284));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	static int64_t t71 = INT64_MIN;

	t71 = (x285|((x286<x287)*x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x291 = 40U;
	static int64_t x292 = 618471308894184543LL;

	t72 = (x289|((x290<x291)*x292));

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1494U;
	uint32_t x295 = 44U;
	int8_t x296 = 1;
	uint32_t t73 = 10563435U;

	t73 = (x293|((x294<x295)*x296));

	if (t73 != 1495U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static uint32_t x298 = 20098351U;
	uint16_t x299 = 6311U;
	static uint8_t x300 = 80U;
	static volatile int32_t t74 = -3640971;

	t74 = (x297|((x298<x299)*x300));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 2;
	static int16_t x302 = -17;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = 11934382;

	t75 = (x301|((x302<x303)*x304));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	uint16_t x306 = 14204U;
	static volatile int64_t x307 = -1LL;

	t76 = (x305|((x306<x307)*x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -1;
	int64_t x310 = -1LL;
	int8_t x311 = -50;
	int64_t x312 = INT64_MAX;
	int64_t t77 = -6LL;

	t77 = (x309|((x310<x311)*x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = -23554LL;
	uint8_t x315 = 15U;
	volatile int64_t x316 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x313|((x314<x315)*x316));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 61124397;
	int32_t x318 = INT32_MIN;
	volatile uint16_t x319 = 0U;
	int8_t x320 = INT8_MIN;
	static int32_t t79 = 925773;

	t79 = (x317|((x318<x319)*x320));

	if (t79 != -83) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = 18U;
	static int32_t x323 = 770869;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = -3365;

	t80 = (x321|((x322<x323)*x324));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -1093677232972472874LL;
	uint64_t x326 = 502640143873681LLU;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	volatile int64_t t81 = 46878641881749LL;

	t81 = (x325|((x326<x327)*x328));

	if (t81 != -440508970LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = -1918732;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	static int64_t x332 = -1LL;
	int64_t t82 = 8527090598903LL;

	t82 = (x329|((x330<x331)*x332));

	if (t82 != -1918732LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = 327866967LLU;
	static volatile uint32_t x335 = 42842U;
	int8_t x336 = INT8_MAX;
	int32_t t83 = -336;

	t83 = (x333|((x334<x335)*x336));

	if (t83 != 12) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -35086431017780LL;
	int64_t x338 = INT64_MIN;
	volatile int16_t x340 = INT16_MIN;
	volatile int64_t t84 = -33LL;

	t84 = (x337|((x338<x339)*x340));

	if (t84 != -23348LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint8_t x342 = 108U;
	uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = INT16_MAX;
	volatile int64_t t85 = 3445716377758328LL;

	t85 = (x341|((x342<x343)*x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	uint64_t x346 = 1464195795018340LLU;
	volatile int32_t x348 = -1;
	static int32_t t86 = 447;

	t86 = (x345|((x346<x347)*x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	volatile uint8_t x350 = 37U;
	uint32_t x351 = UINT32_MAX;
	volatile int16_t x352 = INT16_MAX;
	volatile int64_t t87 = INT64_MAX;

	t87 = (x349|((x350<x351)*x352));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 7981U;
	static volatile int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	static int32_t t88 = INT32_MAX;

	t88 = (x353|((x354<x355)*x356));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = 8;
	int32_t t89 = -1;

	t89 = (x357|((x358<x359)*x360));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile uint32_t x362 = 1U;
	int64_t x363 = -2135505374993618LL;
	static int64_t t90 = INT64_MIN;

	t90 = (x361|((x362<x363)*x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	volatile int32_t x367 = -12;
	uint32_t x368 = 432132U;

	t91 = (x365|((x366<x367)*x368));

	if (t91 != 4294956433U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile uint16_t x370 = UINT16_MAX;
	static int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	static int32_t t92 = -1;

	t92 = (x369|((x370<x371)*x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int8_t x374 = 0;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 1;
	volatile int32_t t93 = 3092937;

	t93 = (x373|((x374<x375)*x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	static int64_t x380 = -1LL;

	t94 = (x377|((x378<x379)*x380));

	if (t94 != 116916933LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	volatile uint8_t x382 = 2U;
	int64_t x383 = -208270307228LL;
	uint32_t x384 = 2352108U;

	t95 = (x381|((x382<x383)*x384));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MAX;
	uint8_t x387 = UINT8_MAX;

	t96 = (x385|((x386<x387)*x388));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 11U;
	int16_t x390 = -18;
	uint32_t x391 = 327999428U;
	int64_t x392 = 8575130969LL;

	t97 = (x389|((x390<x391)*x392));

	if (t97 != 11LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MAX;
	volatile int16_t x394 = -117;
	uint8_t x395 = 76U;
	int8_t x396 = -5;
	int32_t t98 = 90379725;

	t98 = (x393|((x394<x395)*x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static uint64_t x398 = 248LLU;
	uint16_t x399 = 133U;
	int8_t x400 = INT8_MIN;

	t99 = (x397|((x398<x399)*x400));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

