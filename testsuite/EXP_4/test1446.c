#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
int8_t x6 = 2;
int32_t x9 = -14;
static volatile int32_t t2 = 677714195;
uint64_t x15 = 259630445508053LLU;
int8_t x26 = -7;
uint32_t t6 = 64680913U;
static int32_t x31 = -1;
int16_t x35 = -280;
uint64_t x36 = 9647752546682LLU;
int32_t x40 = 312;
uint16_t x41 = 0U;
int8_t x42 = INT8_MIN;
volatile int32_t t10 = 5;
int64_t x45 = -1LL;
volatile int32_t x47 = 307790;
uint8_t x48 = UINT8_MAX;
volatile uint16_t x49 = 9U;
volatile int16_t x52 = -500;
static int16_t x56 = -1146;
volatile int64_t t13 = 415903884646LL;
int16_t x61 = -39;
uint32_t x63 = 7989U;
static volatile int32_t t15 = -3491000;
static uint16_t x70 = 0U;
int32_t t20 = -174;
int8_t x90 = INT8_MIN;
uint16_t x109 = 74U;
int8_t x118 = -1;
static int8_t x122 = 19;
int32_t x123 = -1;
int32_t x126 = INT32_MIN;
int64_t x127 = INT64_MAX;
int32_t x129 = INT32_MIN;
volatile int32_t t32 = 212273033;
volatile int8_t x133 = INT8_MAX;
int32_t x139 = -1;
static volatile int8_t x140 = INT8_MAX;
uint32_t x146 = UINT32_MAX;
uint8_t x151 = 58U;
int8_t x152 = -1;
int32_t t38 = -558;
int8_t x158 = -5;
int16_t x166 = -2;
uint64_t x167 = UINT64_MAX;
volatile int64_t x175 = 0LL;
int64_t x176 = INT64_MIN;
int8_t x184 = INT8_MIN;
volatile int32_t t47 = 7428337;
int64_t t49 = 3052247856LL;
static int32_t x203 = INT32_MIN;
volatile uint16_t x213 = 1028U;
int64_t x219 = 1912617LL;
static int8_t x220 = 0;
static uint8_t x222 = 1U;
static int16_t x224 = 111;
volatile int32_t t56 = 2208;
static volatile uint32_t t61 = 29829U;
uint64_t x250 = UINT64_MAX;
int32_t x252 = INT32_MIN;
int64_t x253 = 396277866249936168LL;
int64_t x261 = -1295643867019918765LL;
static int32_t x269 = INT32_MIN;
volatile int8_t x274 = -1;
static volatile int64_t x276 = 19026LL;
volatile uint16_t x279 = 1U;
volatile int32_t t71 = -4;
volatile int16_t x292 = -6074;
static int32_t t72 = -1617460;
volatile int32_t x307 = 70;
int16_t x310 = INT16_MIN;
int8_t x318 = INT8_MIN;
int8_t x327 = -16;
int32_t t82 = 9810;
static uint64_t x343 = UINT64_MAX;
int32_t x349 = INT32_MIN;
volatile int32_t t87 = -2125388;
int8_t x354 = INT8_MAX;
int32_t t88 = -1;
int8_t x357 = INT8_MAX;
uint16_t x367 = 6U;
int16_t x378 = INT16_MIN;
volatile uint16_t x383 = UINT16_MAX;
int32_t x384 = -1;
int64_t x390 = -1LL;
uint64_t x392 = 8LLU;
static int16_t x397 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = -30427199;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -719471234;

	t0 = (x1*(x2==(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x7 = INT8_MIN;
	int16_t x8 = -1;
	static int32_t t1 = -1452797;

	t1 = (x5*(x6==(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 48LL;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 1U;

	t2 = (x9*(x10==(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 3;
	uint32_t x14 = 698313U;
	int32_t x16 = 61366;
	static int32_t t3 = -75601;

	t3 = (x13*(x14==(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int32_t x18 = -949894096;
	int16_t x19 = 0;
	static int8_t x20 = -1;
	static int64_t t4 = -356406LL;

	t4 = (x17*(x18==(x19<x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = 17U;
	uint64_t x23 = 117908LLU;
	static int32_t x24 = INT32_MIN;
	int32_t t5 = 1;

	t5 = (x21*(x22==(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 53U;
	volatile uint64_t x27 = 14137173973152LLU;
	int64_t x28 = INT64_MAX;

	t6 = (x25*(x26==(x27<x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = 1138U;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -13685803;

	t7 = (x29*(x30==(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 242LLU;
	volatile int64_t t8 = -34752708640348425LL;

	t8 = (x33*(x34==(x35<x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static uint8_t x38 = UINT8_MAX;
	static int32_t x39 = -65753746;
	volatile uint32_t t9 = 17739U;

	t9 = (x37*(x38==(x39<x40)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = INT16_MAX;
	static int64_t x44 = INT64_MIN;

	t10 = (x41*(x42==(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = UINT16_MAX;
	volatile int64_t t11 = -79657349498568957LL;

	t11 = (x45*(x46==(x47<x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	int8_t x51 = -1;
	volatile int32_t t12 = 6154926;

	t12 = (x49*(x50==(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MIN;

	t13 = (x53*(x54==(x55<x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	int8_t x58 = 0;
	volatile int64_t x59 = INT64_MIN;
	static int64_t x60 = -1LL;
	static volatile int32_t t14 = -158;

	t14 = (x57*(x58==(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = 6699;
	static uint32_t x64 = 921301976U;

	t15 = (x61*(x62==(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static int16_t x66 = -2;
	int32_t x67 = INT32_MIN;
	static uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -298647;

	t16 = (x65*(x66==(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 305888LLU;
	volatile int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t17 = 46832762007LLU;

	t17 = (x69*(x70==(x71<x72)));

	if (t17 != 305888LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile int16_t x74 = INT16_MAX;
	static int8_t x75 = INT8_MIN;
	static int32_t x76 = INT32_MIN;
	int64_t t18 = 2353LL;

	t18 = (x73*(x74==(x75<x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	uint16_t x78 = 0U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;
	static int32_t t19 = 462227227;

	t19 = (x77*(x78==(x79<x80)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	volatile uint64_t x82 = 606478173120776LLU;
	volatile uint16_t x83 = UINT16_MAX;
	uint64_t x84 = UINT64_MAX;

	t20 = (x81*(x82==(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 614015743574LL;
	static uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MAX;
	int64_t x88 = INT64_MAX;
	volatile int64_t t21 = 6LL;

	t21 = (x85*(x86==(x87<x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -3;
	uint32_t x91 = 577U;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -53;

	t22 = (x89*(x90==(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	int32_t x94 = -16178;
	volatile int8_t x95 = 1;
	volatile int8_t x96 = -1;
	volatile int32_t t23 = 1;

	t23 = (x93*(x94==(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -21;
	uint16_t x98 = 90U;
	uint32_t x99 = 250U;
	int16_t x100 = -1;
	int32_t t24 = 35036933;

	t24 = (x97*(x98==(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = -4;
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 19161;

	t25 = (x101*(x102==(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 232102392287499322LLU;
	static uint16_t x106 = 11992U;
	int16_t x107 = 10693;
	int32_t x108 = 10;
	uint64_t t26 = 2194192629411681000LLU;

	t26 = (x105*(x106==(x107<x108)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = -1;
	static uint16_t x111 = UINT16_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = -8975;

	t27 = (x109*(x110==(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	uint32_t x114 = 367310U;
	int8_t x115 = INT8_MIN;
	static volatile int8_t x116 = -9;
	static volatile int32_t t28 = 373;

	t28 = (x113*(x114==(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 59712U;
	static int8_t x119 = INT8_MAX;
	volatile int16_t x120 = 53;
	volatile uint32_t t29 = 0U;

	t29 = (x117*(x118==(x119<x120)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t30 = -408321802;

	t30 = (x121*(x122==(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 91U;
	int8_t x128 = INT8_MIN;
	volatile uint32_t t31 = 5681990U;

	t31 = (x125*(x126==(x127<x128)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;

	t32 = (x129*(x130==(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1;
	int32_t x135 = -20794366;
	int32_t x136 = -13384;
	static int32_t t33 = -1;

	t33 = (x133*(x134==(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -14;
	int8_t x138 = INT8_MIN;
	int32_t t34 = -11836;

	t34 = (x137*(x138==(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 16U;
	uint16_t x142 = 50U;
	int16_t x143 = 61;
	uint32_t x144 = 764U;
	volatile int32_t t35 = 3;

	t35 = (x141*(x142==(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MIN;
	static volatile uint64_t t36 = 119LLU;

	t36 = (x145*(x146==(x147<x148)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 357008U;
	int32_t x150 = INT32_MAX;
	uint32_t t37 = 3U;

	t37 = (x149*(x150==(x151<x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = -1;
	uint8_t x156 = UINT8_MAX;

	t38 = (x153*(x154==(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 1;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = 7385050U;
	int32_t t39 = -504281641;

	t39 = (x157*(x158==(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 6879704U;
	int32_t x162 = INT32_MIN;
	int8_t x163 = -1;
	int64_t x164 = 13443785139LL;
	uint32_t t40 = 11U;

	t40 = (x161*(x162==(x163<x164)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 44458980072310922LLU;
	uint8_t x168 = UINT8_MAX;
	volatile uint64_t t41 = 72534816967883LLU;

	t41 = (x165*(x166==(x167<x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 2148U;
	uint8_t x170 = 59U;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 47U;

	t42 = (x169*(x170==(x171<x172)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t x174 = 1047369LL;
	static volatile int64_t t43 = 254LL;

	t43 = (x173*(x174==(x175<x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 928LLU;
	volatile int16_t x178 = -1;
	static uint16_t x179 = 33U;
	int64_t x180 = 263806281LL;
	static volatile uint64_t t44 = 80387799LLU;

	t44 = (x177*(x178==(x179<x180)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 14U;
	static int32_t x182 = INT32_MAX;
	static volatile int16_t x183 = -1;
	volatile int32_t t45 = 1611;

	t45 = (x181*(x182==(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -7;

	t46 = (x185*(x186==(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 773358059U;
	uint64_t x191 = 55LLU;
	int8_t x192 = INT8_MAX;

	t47 = (x189*(x190==(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -165747688955832LL;
	uint64_t x194 = 116241336248960LLU;
	int64_t x195 = 20032211LL;
	int8_t x196 = 6;
	int64_t t48 = -121706LL;

	t48 = (x193*(x194==(x195<x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -125469076133LL;
	volatile int8_t x198 = INT8_MAX;
	volatile int16_t x199 = -31;
	int32_t x200 = INT32_MIN;

	t49 = (x197*(x198==(x199<x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 83U;
	int32_t x202 = INT32_MAX;
	volatile int32_t x204 = 75819483;
	static volatile int32_t t50 = -7;

	t50 = (x201*(x202==(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 113U;
	static int64_t x206 = 365244472710LL;
	uint32_t x207 = 418U;
	uint64_t x208 = UINT64_MAX;
	volatile uint32_t t51 = 3U;

	t51 = (x205*(x206==(x207<x208)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -3;
	static int64_t x210 = -1LL;
	uint32_t x211 = 0U;
	static volatile int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 1;

	t52 = (x209*(x210==(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 1U;
	int64_t x215 = -1LL;
	static uint8_t x216 = UINT8_MAX;
	int32_t t53 = -393293;

	t53 = (x213*(x214==(x215<x216)));

	if (t53 != 1028) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	int64_t x218 = -1LL;
	static volatile int32_t t54 = 6;

	t54 = (x217*(x218==(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 2U;
	volatile int8_t x223 = -1;
	volatile int32_t t55 = 374932;

	t55 = (x221*(x222==(x223<x224)));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static int32_t x226 = 372418941;
	int8_t x227 = -1;
	volatile int32_t x228 = -1;

	t56 = (x225*(x226==(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x229 = 38313408LL;
	static volatile uint16_t x230 = 471U;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = 172LL;

	t57 = (x229*(x230==(x231<x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = UINT64_MAX;
	int64_t x234 = INT64_MIN;
	volatile int8_t x235 = -1;
	uint64_t x236 = 11598334309320LLU;
	uint64_t t58 = 1074721161129LLU;

	t58 = (x233*(x234==(x235<x236)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 0;
	int16_t x238 = INT16_MAX;
	static int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -1;

	t59 = (x237*(x238==(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -50;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	static int32_t t60 = 9611;

	t60 = (x241*(x242==(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 1930758U;
	static uint8_t x246 = 6U;
	int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;

	t61 = (x245*(x246==(x247<x248)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 3U;
	int8_t x251 = INT8_MIN;
	static int32_t t62 = 6430602;

	t62 = (x249*(x250==(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = INT8_MAX;
	uint32_t x255 = 14118U;
	uint64_t x256 = UINT64_MAX;
	volatile int64_t t63 = 60950879397561LL;

	t63 = (x253*(x254==(x255<x256)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 120376U;
	uint8_t x258 = 35U;
	uint8_t x259 = UINT8_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = 5191872U;

	t64 = (x257*(x258==(x259<x260)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x262 = 4611641U;
	int32_t x263 = INT32_MIN;
	static volatile int64_t x264 = -338314564311LL;
	volatile int64_t t65 = 1LL;

	t65 = (x261*(x262==(x263<x264)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = 6548U;
	volatile int64_t x267 = 1613662072062221815LL;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 1;

	t66 = (x265*(x266==(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = 902LL;
	static volatile int64_t x271 = 117LL;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -885290449;

	t67 = (x269*(x270==(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	static int32_t x275 = INT32_MIN;
	int32_t t68 = -7467878;

	t68 = (x273*(x274==(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -1;
	volatile int64_t x280 = -4645LL;
	static volatile int32_t t69 = 322;

	t69 = (x277*(x278==(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = -1;
	uint8_t x283 = 71U;
	int16_t x284 = INT16_MIN;
	static int64_t t70 = -121504357733436648LL;

	t70 = (x281*(x282==(x283<x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	static uint8_t x286 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	uint16_t x288 = 170U;

	t71 = (x285*(x286==(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int32_t x290 = INT32_MAX;
	uint16_t x291 = UINT16_MAX;

	t72 = (x289*(x290==(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -157822854247LL;
	volatile int32_t x295 = -655397849;
	uint32_t x296 = 1U;
	int32_t t73 = 5;

	t73 = (x293*(x294==(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -219;
	int8_t x298 = 0;
	int64_t x299 = -1LL;
	static uint16_t x300 = 1U;
	volatile int32_t t74 = -3104850;

	t74 = (x297*(x298==(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -3LL;
	uint16_t x302 = 522U;
	static int32_t x303 = INT32_MIN;
	uint8_t x304 = UINT8_MAX;
	volatile int64_t t75 = 98349LL;

	t75 = (x301*(x302==(x303<x304)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 1;
	int8_t x306 = INT8_MAX;
	int16_t x308 = INT16_MAX;
	static int32_t t76 = 0;

	t76 = (x305*(x306==(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	int8_t x311 = -2;
	int8_t x312 = INT8_MIN;
	int32_t t77 = 1;

	t77 = (x309*(x310==(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 3U;
	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MIN;
	static volatile uint32_t x316 = UINT32_MAX;
	int32_t t78 = -447429615;

	t78 = (x313*(x314==(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	static int64_t x320 = -1LL;
	volatile int32_t t79 = 0;

	t79 = (x317*(x318==(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	static uint64_t x322 = 77507550030LLU;
	int32_t x323 = -1851953;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = -22778988726441267LL;

	t80 = (x321*(x322==(x323<x324)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	static int64_t x326 = 3720LL;
	int16_t x328 = -2099;
	volatile int32_t t81 = -7718511;

	t81 = (x325*(x326==(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = -35598;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = 79310122476710LL;
	int16_t x332 = -15;

	t82 = (x329*(x330==(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = 196528LL;
	int16_t x335 = INT16_MAX;
	int8_t x336 = -1;
	volatile int64_t t83 = 314577828078852357LL;

	t83 = (x333*(x334==(x335<x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 50;
	int32_t x338 = -1;
	int8_t x339 = 31;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = 0;

	t84 = (x337*(x338==(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 36;
	int8_t x342 = INT8_MAX;
	uint16_t x344 = 0U;
	static volatile int32_t t85 = 428;

	t85 = (x341*(x342==(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1867700LL;
	int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	int64_t x348 = 30LL;
	int64_t t86 = -67LL;

	t86 = (x345*(x346==(x347<x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -4671;
	static uint32_t x351 = UINT32_MAX;
	int32_t x352 = -1;

	t87 = (x349*(x350==(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x355 = 960;
	int64_t x356 = INT64_MIN;

	t88 = (x353*(x354==(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = 15U;
	volatile int32_t t89 = 123;

	t89 = (x357*(x358==(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -861743;

	t90 = (x361*(x362==(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 1914U;
	int64_t x366 = INT64_MIN;
	int32_t x368 = -474707404;
	static int32_t t91 = 105077197;

	t91 = (x365*(x366==(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 8U;
	int32_t x370 = -3533357;
	volatile int64_t x371 = INT64_MAX;
	uint8_t x372 = 24U;
	static volatile int32_t t92 = -55043;

	t92 = (x369*(x370==(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MAX;
	volatile uint32_t x375 = 67U;
	int64_t x376 = -148551647LL;
	int32_t t93 = 504501543;

	t93 = (x373*(x374==(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 21483;
	static uint64_t x379 = UINT64_MAX;
	uint8_t x380 = 1U;
	volatile int32_t t94 = -30146;

	t94 = (x377*(x378==(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x382 = 106619LLU;
	int64_t t95 = 35782180832150LL;

	t95 = (x381*(x382==(x383<x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 5;
	int32_t x386 = -1;
	int8_t x387 = -1;
	volatile uint8_t x388 = UINT8_MAX;
	static int32_t t96 = 48059;

	t96 = (x385*(x386==(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int64_t x391 = 4123LL;
	int32_t t97 = 1182;

	t97 = (x389*(x390==(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -914919684LL;
	static int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = 4368140113274578LL;

	t98 = (x393*(x394==(x395<x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 81U;
	static int8_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -7309;

	t99 = (x397*(x398==(x399<x400)));

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

