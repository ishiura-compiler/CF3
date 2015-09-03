#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
int8_t x3 = INT8_MIN;
volatile int32_t t0 = 1724222;
volatile int8_t x6 = INT8_MIN;
int16_t x9 = -1;
volatile int8_t x13 = 33;
int32_t t3 = -100271;
uint32_t x18 = 782979475U;
int32_t x22 = -208123;
volatile int32_t x23 = -1;
uint64_t x31 = 9220162578939LLU;
int32_t t8 = -853630588;
uint16_t x38 = UINT16_MAX;
volatile int32_t t9 = -334;
static volatile int32_t t10 = -1418379;
int32_t x45 = 4948;
volatile uint8_t x46 = UINT8_MAX;
static int8_t x47 = -1;
volatile int16_t x49 = INT16_MIN;
int64_t x71 = INT64_MIN;
int8_t x72 = INT8_MIN;
static int64_t x79 = INT64_MAX;
int16_t x82 = -1;
int64_t x88 = -1LL;
int64_t t21 = 9910031LL;
int32_t t23 = INT32_MIN;
int16_t x105 = INT16_MIN;
static volatile uint32_t x107 = 1177249U;
int16_t x111 = INT16_MIN;
static int64_t x115 = INT64_MIN;
uint16_t x119 = UINT16_MAX;
volatile uint8_t x122 = UINT8_MAX;
volatile uint64_t x125 = 266582674656420LLU;
volatile int32_t x126 = -127197248;
static int64_t t32 = -23112922LL;
uint8_t x135 = UINT8_MAX;
volatile int8_t x136 = -1;
volatile uint32_t x138 = 2U;
volatile int16_t x140 = -5930;
static uint8_t x145 = UINT8_MAX;
int32_t x146 = INT32_MIN;
int16_t x147 = INT16_MIN;
volatile int16_t x150 = -1;
volatile int32_t x152 = -1;
int64_t x154 = INT64_MAX;
static uint16_t x155 = UINT16_MAX;
uint32_t x160 = UINT32_MAX;
int32_t t39 = 34647;
uint8_t x166 = UINT8_MAX;
int32_t x169 = INT32_MIN;
int64_t x182 = -1LL;
int32_t x183 = 1937749;
static uint32_t x192 = UINT32_MAX;
int32_t x194 = INT32_MAX;
static int8_t x195 = -8;
static int8_t x200 = INT8_MAX;
static uint64_t x201 = UINT64_MAX;
int8_t x202 = INT8_MAX;
int16_t x206 = INT16_MIN;
int16_t x207 = INT16_MIN;
int16_t x209 = INT16_MIN;
static volatile uint64_t x212 = 1687280LLU;
volatile uint32_t x214 = 1U;
uint32_t x216 = UINT32_MAX;
uint32_t x222 = 4628U;
uint16_t x226 = UINT16_MAX;
volatile uint64_t x227 = 188727977369LLU;
volatile int32_t t56 = -171936;
int8_t x245 = -4;
volatile int32_t t61 = 6;
static uint32_t x256 = 114U;
volatile uint32_t x259 = 286376018U;
int16_t x261 = -2;
int16_t x263 = -211;
uint8_t x265 = 102U;
int16_t x270 = 329;
static volatile int32_t x271 = INT32_MIN;
uint16_t x272 = 4439U;
int16_t x273 = INT16_MIN;
int64_t x279 = 52186178LL;
int8_t x292 = -1;
volatile int32_t t73 = 279193055;
int64_t t74 = INT64_MIN;
int32_t x304 = -1;
volatile int32_t t75 = 234019;
volatile uint16_t x315 = 6U;
int32_t x322 = INT32_MIN;
volatile int16_t x324 = INT16_MIN;
uint16_t x326 = 17U;
uint8_t x328 = UINT8_MAX;
volatile int64_t x329 = INT64_MAX;
int64_t x334 = INT64_MIN;
int64_t t83 = 1252931468742LL;
int16_t x340 = 219;
static volatile int16_t x342 = -1;
int64_t x346 = INT64_MIN;
int16_t x353 = 1;
int8_t x358 = -2;
static int32_t x369 = -14;
static int16_t x372 = 13;
static volatile int64_t x373 = -250479354917698LL;
static int64_t x376 = -3960674746204LL;
uint64_t x381 = 121307LLU;
int32_t x387 = INT32_MAX;
static int64_t x391 = INT64_MIN;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x4 = 2833U;

	t0 = (x1*(x2<=(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 126U;
	uint32_t x7 = 12688817U;
	volatile uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -23770;

	t1 = (x5*(x6<=(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	static uint32_t x11 = 2080378U;
	volatile int32_t x12 = -1;
	volatile int32_t t2 = -1024937;

	t2 = (x9*(x10<=(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 38U;
	volatile int64_t x16 = -1LL;

	t3 = (x13*(x14<=(x15^x16)));

	if (t3 != 33) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int8_t x19 = -1;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 24;

	t4 = (x17*(x18<=(x19^x20)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -5279995097996LL;
	int16_t x24 = INT16_MAX;
	static volatile int64_t t5 = 54937221200466LL;

	t5 = (x21*(x22<=(x23^x24)));

	if (t5 != -5279995097996LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1U;
	static int64_t x26 = -1LL;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;
	uint32_t t6 = 4U;

	t6 = (x25*(x26<=(x27^x28)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x30 = -3;
	int32_t x32 = -1;
	uint64_t t7 = 261578001338890LLU;

	t7 = (x29*(x30<=(x31^x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 5055;
	volatile int64_t x34 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 201U;

	t8 = (x33*(x34<=(x35^x36)));

	if (t8 != 5055) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	static int64_t x39 = 10259LL;
	int32_t x40 = -1254144;

	t9 = (x37*(x38<=(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 16401U;
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;

	t10 = (x41*(x42<=(x43^x44)));

	if (t10 != 16401) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x48 = 1016U;
	int32_t t11 = -241103706;

	t11 = (x45*(x46<=(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 31U;
	int8_t x52 = -1;
	static volatile int32_t t12 = -246;

	t12 = (x49*(x50<=(x51^x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = 6;
	int8_t x55 = INT8_MIN;
	volatile uint64_t x56 = 137854LLU;
	int32_t t13 = -829889938;

	t13 = (x53*(x54<=(x55^x56)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint32_t x58 = 5957U;
	int16_t x59 = -14166;
	int16_t x60 = 3268;
	int64_t t14 = INT64_MIN;

	t14 = (x57*(x58<=(x59^x60)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	static int64_t x64 = -40168868LL;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (x61*(x62<=(x63^x64)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int64_t x66 = 47LL;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MIN;
	uint32_t t16 = 232U;

	t16 = (x65*(x66<=(x67^x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -2405681;
	volatile uint64_t x70 = 413568LLU;
	int32_t t17 = -1011;

	t17 = (x69*(x70<=(x71^x72)));

	if (t17 != -2405681) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -193;
	volatile int64_t x74 = INT64_MIN;
	static uint64_t x75 = 173226792642LLU;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 7681;

	t18 = (x73*(x74<=(x75^x76)));

	if (t18 != -193) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 7;
	volatile uint64_t x78 = UINT64_MAX;
	volatile int8_t x80 = INT8_MIN;
	int32_t t19 = 1569;

	t19 = (x77*(x78<=(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x81*(x82<=(x83^x84)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	uint64_t x86 = UINT64_MAX;
	volatile int8_t x87 = -4;

	t21 = (x85*(x86<=(x87^x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = UINT64_MAX;
	static volatile uint16_t x90 = 99U;
	int8_t x91 = -4;
	int64_t x92 = -124307LL;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89*(x90<=(x91^x92)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	volatile int8_t x94 = 3;
	uint16_t x95 = UINT16_MAX;
	uint8_t x96 = 3U;

	t23 = (x93*(x94<=(x95^x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 11361659464765LLU;
	uint32_t x100 = 211U;
	int64_t t24 = INT64_MAX;

	t24 = (x97*(x98<=(x99^x100)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 0U;
	int8_t x102 = -1;
	volatile uint32_t x103 = 1U;
	uint32_t x104 = UINT32_MAX;
	static int32_t t25 = 3288268;

	t25 = (x101*(x102<=(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 30U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 0;

	t26 = (x105*(x106<=(x107^x108)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x112 = 0;
	volatile uint64_t t27 = 335983265996LLU;

	t27 = (x109*(x110<=(x111^x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	static uint8_t x114 = UINT8_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = 14341866;

	t28 = (x113*(x114<=(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static int64_t x118 = INT64_MIN;
	static uint8_t x120 = 36U;
	volatile int64_t t29 = -917905652LL;

	t29 = (x117*(x118<=(x119^x120)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 232;
	static int64_t x123 = -1LL;
	volatile int16_t x124 = INT16_MAX;
	int32_t t30 = 1;

	t30 = (x121*(x122<=(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x127 = 301U;
	uint16_t x128 = 4053U;
	static volatile uint64_t t31 = 9193473LLU;

	t31 = (x125*(x126<=(x127^x128)));

	if (t31 != 266582674656420LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -12705LL;
	int64_t x130 = -262723998824160LL;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = 223U;

	t32 = (x129*(x130<=(x131^x132)));

	if (t32 != -12705LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -5;
	static volatile int32_t x134 = INT32_MIN;
	volatile int32_t t33 = 2052;

	t33 = (x133*(x134<=(x135^x136)));

	if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x139 = -141631;
	int32_t t34 = 0;

	t34 = (x137*(x138<=(x139^x140)));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	volatile int64_t x142 = -522491127546343LL;
	uint16_t x143 = 15509U;
	volatile uint64_t x144 = 213889LLU;
	static int32_t t35 = 18748;

	t35 = (x141*(x142<=(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x148 = 20U;
	volatile int32_t t36 = -19220;

	t36 = (x145*(x146<=(x147^x148)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 0LLU;
	int16_t x151 = 7;
	static uint64_t t37 = 13746LLU;

	t37 = (x149*(x150<=(x151^x152)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int32_t x156 = -1;
	int32_t t38 = 303;

	t38 = (x153*(x154<=(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 5U;

	t39 = (x157*(x158<=(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	int8_t x163 = INT8_MAX;
	uint16_t x164 = 4U;
	volatile int32_t t40 = -10464;

	t40 = (x161*(x162<=(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 3U;
	int64_t x167 = INT64_MIN;
	int8_t x168 = 30;
	volatile int32_t t41 = 1337097;

	t41 = (x165*(x166<=(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 27U;
	int8_t x171 = -1;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 16245;

	t42 = (x169*(x170<=(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int16_t x174 = -1;
	static int32_t x175 = 105999;
	int32_t x176 = INT32_MAX;
	int64_t t43 = INT64_MIN;

	t43 = (x173*(x174<=(x175^x176)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	static int8_t x178 = -25;
	int8_t x179 = 0;
	static uint8_t x180 = UINT8_MAX;
	static int32_t t44 = -5546;

	t44 = (x177*(x178<=(x179^x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 4U;
	volatile int8_t x184 = INT8_MAX;
	static int32_t t45 = 252179873;

	t45 = (x181*(x182<=(x183^x184)));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 75U;
	volatile uint16_t x186 = 135U;
	int8_t x187 = INT8_MAX;
	static int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = -2024864;

	t46 = (x185*(x186<=(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MAX;
	volatile int32_t t47 = -89;

	t47 = (x189*(x190<=(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	uint8_t x196 = 105U;
	static int32_t t48 = 420273635;

	t48 = (x193*(x194<=(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	uint64_t x198 = 26784298972524LLU;
	static volatile uint16_t x199 = 27U;
	volatile int32_t t49 = 0;

	t49 = (x197*(x198<=(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x203 = INT64_MAX;
	static int16_t x204 = INT16_MIN;
	volatile uint64_t t50 = 46LLU;

	t50 = (x201*(x202<=(x203^x204)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int16_t x208 = -1;
	int32_t t51 = INT32_MIN;

	t51 = (x205*(x206<=(x207^x208)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x210 = 65660267772272LLU;
	uint8_t x211 = 10U;
	volatile int32_t t52 = 6;

	t52 = (x209*(x210<=(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 19055U;
	static int32_t x215 = INT32_MIN;
	int32_t t53 = -10;

	t53 = (x213*(x214<=(x215^x216)));

	if (t53 != 19055) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = 1;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 5464127U;
	volatile int32_t t54 = -3055078;

	t54 = (x217*(x218<=(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 0;
	volatile uint64_t x223 = UINT64_MAX;
	volatile uint16_t x224 = 3956U;
	volatile int32_t t55 = 2;

	t55 = (x221*(x222<=(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int32_t x228 = -45;

	t56 = (x225*(x226<=(x227^x228)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MIN;
	volatile int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile int32_t t57 = 1;

	t57 = (x229*(x230<=(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MIN;
	volatile int8_t x235 = -1;
	uint32_t x236 = 239U;
	uint64_t t58 = UINT64_MAX;

	t58 = (x233*(x234<=(x235^x236)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = UINT8_MAX;
	volatile int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 234203528295LLU;
	int32_t t59 = 4120575;

	t59 = (x237*(x238<=(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint16_t x242 = 1U;
	volatile int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x241*(x242<=(x243^x244)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 2058;
	static uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;

	t61 = (x245*(x246<=(x247^x248)));

	if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MAX;
	int32_t x250 = INT32_MAX;
	uint32_t x251 = UINT32_MAX;
	static volatile uint32_t x252 = 123U;
	volatile int32_t t62 = -1031706285;

	t62 = (x249*(x250<=(x251^x252)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 2782212;
	int32_t x254 = -502552;
	int8_t x255 = INT8_MAX;
	int32_t t63 = -1;

	t63 = (x253*(x254<=(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = 50U;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t64 = 40143;

	t64 = (x257*(x258<=(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = -41;
	uint8_t x264 = UINT8_MAX;
	static int32_t t65 = 45699816;

	t65 = (x261*(x262<=(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x266 = 327119630LL;
	int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MAX;
	int32_t t66 = -190;

	t66 = (x265*(x266<=(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	static volatile int32_t t67 = 751;

	t67 = (x269*(x270<=(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = INT64_MAX;
	int32_t x275 = -1;
	static int8_t x276 = INT8_MAX;
	volatile int32_t t68 = -31359890;

	t68 = (x273*(x274<=(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = 269859;

	t69 = (x277*(x278<=(x279^x280)));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x282 = 3U;
	uint16_t x283 = 379U;
	int8_t x284 = 0;
	static volatile int32_t t70 = INT32_MIN;

	t70 = (x281*(x282<=(x283^x284)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 983440277338193716LL;
	int32_t x286 = -2;
	uint16_t x287 = 398U;
	static uint64_t x288 = UINT64_MAX;
	volatile int64_t t71 = -829687642601217LL;

	t71 = (x285*(x286<=(x287^x288)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = 422U;
	uint32_t x291 = 1647569U;
	volatile int32_t t72 = INT32_MIN;

	t72 = (x289*(x290<=(x291^x292)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int8_t x294 = INT8_MAX;
	uint32_t x295 = 603902U;
	static int8_t x296 = 3;

	t73 = (x293*(x294<=(x295^x296)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	static uint32_t x299 = 1769548112U;
	volatile uint8_t x300 = 11U;

	t74 = (x297*(x298<=(x299^x300)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;

	t75 = (x301*(x302<=(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = 92304083;
	volatile int64_t x306 = -1LL;
	int32_t x307 = -1;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -1;

	t76 = (x305*(x306<=(x307^x308)));

	if (t76 != 92304083) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = -1;
	static volatile int32_t x311 = 262;
	static volatile int64_t x312 = INT64_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x309*(x310<=(x311^x312)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	int32_t x316 = -1722287;
	int32_t t78 = 1061546;

	t78 = (x313*(x314<=(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 22838272717LL;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = 129U;
	uint32_t x320 = 85U;
	static volatile int64_t t79 = 95051049789811LL;

	t79 = (x317*(x318<=(x319^x320)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static int8_t x323 = INT8_MAX;
	int32_t t80 = INT32_MIN;

	t80 = (x321*(x322<=(x323^x324)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 0U;
	int32_t x327 = -467;
	static volatile int32_t t81 = 3425;

	t81 = (x325*(x326<=(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x330 = -1;
	static int8_t x331 = INT8_MIN;
	volatile int64_t x332 = -101270386655LL;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x329*(x330<=(x331^x332)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = 58230436248776LL;
	volatile int8_t x335 = INT8_MAX;
	uint8_t x336 = 65U;

	t83 = (x333*(x334<=(x335^x336)));

	if (t83 != 58230436248776LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	uint16_t x338 = 17U;
	static uint64_t x339 = 385480605907843LLU;
	int32_t t84 = INT32_MIN;

	t84 = (x337*(x338<=(x339^x340)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	uint32_t x343 = 1815587546U;
	static int16_t x344 = -1;
	volatile int64_t t85 = -829010985LL;

	t85 = (x341*(x342<=(x343^x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MAX;
	int32_t t86 = -93;

	t86 = (x345*(x346<=(x347^x348)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 2U;
	static volatile int16_t x350 = -1;
	static volatile int32_t x351 = -1;
	static int8_t x352 = 9;
	int32_t t87 = -531;

	t87 = (x349*(x350<=(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = -1;
	int32_t x355 = -1;
	uint32_t x356 = 18U;
	volatile int32_t t88 = 60;

	t88 = (x353*(x354<=(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = UINT8_MAX;
	uint32_t x359 = 929U;
	uint16_t x360 = 7U;
	static int32_t t89 = 433240805;

	t89 = (x357*(x358<=(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	static volatile int64_t x362 = INT64_MAX;
	int64_t x363 = 9119306025730LL;
	volatile int64_t x364 = INT64_MAX;
	int32_t t90 = 32826250;

	t90 = (x361*(x362<=(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MIN;
	int32_t t91 = 0;

	t91 = (x365*(x366<=(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = -15929;
	int64_t x371 = 118468197650161LL;
	static int32_t t92 = 482;

	t92 = (x369*(x370<=(x371^x372)));

	if (t92 != -14) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 4251313129067056030LLU;
	int8_t x375 = -1;
	int64_t t93 = -20411924266655901LL;

	t93 = (x373*(x374<=(x375^x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = 2;
	static int32_t x378 = INT32_MIN;
	static int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -7;

	t94 = (x377*(x378<=(x379^x380)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = -29037;
	uint8_t x383 = UINT8_MAX;
	int32_t x384 = -270451164;
	static volatile uint64_t t95 = 769893789263524117LLU;

	t95 = (x381*(x382<=(x383^x384)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	int64_t x386 = 47LL;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 99453;

	t96 = (x385*(x386<=(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 386LLU;
	static int8_t x390 = -1;
	volatile int64_t x392 = -37752690044162046LL;
	static uint64_t t97 = 2140186260906LLU;

	t97 = (x389*(x390<=(x391^x392)));

	if (t97 != 386LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MAX;
	int64_t x395 = -15246LL;
	volatile int32_t x396 = 4253020;
	int64_t t98 = -67843LL;

	t98 = (x393*(x394<=(x395^x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -28;
	int16_t x398 = INT16_MAX;
	static int8_t x399 = INT8_MIN;
	uint32_t x400 = 12637650U;
	int32_t t99 = 209111;

	t99 = (x397*(x398<=(x399^x400)));

	if (t99 != -28) { NG(); } else { ; }
	
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

