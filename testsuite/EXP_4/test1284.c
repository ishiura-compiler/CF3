#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x8 = INT8_MAX;
volatile int32_t t1 = 13524;
static int64_t x11 = INT64_MAX;
int8_t x15 = 8;
volatile int32_t t3 = -228536;
int16_t x20 = -470;
volatile int16_t x23 = -1;
int32_t x31 = 556957948;
int64_t x37 = -1LL;
int32_t x40 = -4;
int32_t t10 = -7742541;
static int32_t t11 = 15200741;
static uint8_t x51 = 66U;
uint8_t x61 = UINT8_MAX;
int32_t t16 = -24574;
volatile int8_t x73 = 0;
static int8_t x75 = 3;
int32_t t18 = 2166108;
volatile int32_t t19 = 25;
int16_t x84 = -1;
volatile uint16_t x90 = 15065U;
uint64_t x92 = UINT64_MAX;
volatile int64_t x98 = INT64_MIN;
int64_t x99 = 29638LL;
volatile int32_t t24 = 31;
int16_t x104 = INT16_MIN;
volatile int32_t t26 = 305692;
uint16_t x114 = 0U;
int8_t x125 = 11;
volatile uint64_t x128 = 10314662437294847LLU;
int64_t x136 = 3926LL;
int16_t x138 = 22;
volatile int32_t t35 = -70961450;
int64_t x148 = INT64_MIN;
volatile int32_t x160 = -1;
volatile int32_t t39 = 23;
static int64_t x161 = INT64_MAX;
int8_t x165 = INT8_MIN;
int8_t x167 = 58;
int32_t x168 = 9063;
volatile uint16_t x173 = 909U;
static int32_t t43 = 781321777;
uint32_t x178 = 675415120U;
int16_t x184 = -1;
int32_t x186 = INT32_MIN;
int32_t t46 = -8;
int16_t x201 = -1;
volatile int8_t x202 = INT8_MIN;
volatile int16_t x205 = INT16_MIN;
static int32_t t51 = 114;
uint8_t x210 = 62U;
static int16_t x212 = INT16_MIN;
int32_t t53 = -188387220;
static int8_t x217 = INT8_MIN;
static int8_t x220 = INT8_MAX;
volatile int32_t x225 = -1;
int8_t x228 = -1;
int32_t t57 = -645767600;
int16_t x238 = -1;
static int64_t x240 = INT64_MAX;
static volatile int8_t x243 = -1;
uint32_t x245 = 1980U;
int8_t x246 = -21;
volatile int32_t t62 = 360400;
uint32_t x256 = 6838U;
int32_t x258 = INT32_MIN;
uint64_t x273 = UINT64_MAX;
int32_t x276 = 13049;
int32_t x278 = INT32_MAX;
volatile int32_t t70 = -1568;
int64_t x289 = INT64_MIN;
volatile int64_t x291 = -1LL;
int64_t x292 = -1LL;
static int32_t t72 = -1;
volatile int32_t t75 = 314713;
static int64_t x311 = 18271LL;
volatile int32_t t82 = 506767;
volatile int16_t x340 = 0;
int64_t x341 = -87282851898LL;
int32_t x344 = INT32_MIN;
int64_t x348 = INT64_MAX;
volatile int32_t t87 = 1402538;
uint16_t x362 = UINT16_MAX;
int32_t x373 = INT32_MIN;
int64_t x380 = INT64_MAX;
int32_t x387 = INT32_MAX;
int32_t x395 = 860369;
int32_t t98 = 6482;
int64_t x397 = -1LL;


void f0(void) {
	static volatile int32_t x1 = -1;
	int8_t x2 = INT8_MAX;
	static int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 2;

	t0 = (x1<=(x2==(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MIN;

	t1 = (x5<=(x6==(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -2;
	int16_t x10 = -8334;
	static volatile int32_t x12 = INT32_MIN;
	static int32_t t2 = -937;

	t2 = (x9<=(x10==(x11==x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	static uint8_t x14 = UINT8_MAX;
	volatile int32_t x16 = -27634192;

	t3 = (x13<=(x14==(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int64_t x18 = 430865840LL;
	uint32_t x19 = UINT32_MAX;
	int32_t t4 = -3;

	t4 = (x17<=(x18==(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 770436717;
	int64_t x22 = INT64_MIN;
	int64_t x24 = -1LL;
	volatile int32_t t5 = -9;

	t5 = (x21<=(x22==(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = -1;
	int16_t x27 = 1;
	volatile int64_t x28 = INT64_MIN;
	int32_t t6 = 260817;

	t6 = (x25<=(x26==(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -3;
	int8_t x30 = INT8_MAX;
	uint32_t x32 = 13U;
	int32_t t7 = 4317570;

	t7 = (x29<=(x30==(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	static int8_t x34 = -3;
	volatile uint16_t x35 = 2U;
	int64_t x36 = -27166535869LL;
	volatile int32_t t8 = 1;

	t8 = (x33<=(x34==(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = INT8_MAX;
	static int32_t x39 = -2370;
	volatile int32_t t9 = 197658;

	t9 = (x37<=(x38==(x39==x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint8_t x42 = UINT8_MAX;
	volatile int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MIN;

	t10 = (x41<=(x42==(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x46 = INT64_MIN;
	volatile uint16_t x47 = 0U;
	int64_t x48 = -2317844LL;

	t11 = (x45<=(x46==(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 53U;
	static int16_t x50 = -29;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -58508617;

	t12 = (x49<=(x50==(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 6U;
	static uint16_t x54 = UINT16_MAX;
	int8_t x55 = -1;
	static uint32_t x56 = 4123608U;
	int32_t t13 = -89671603;

	t13 = (x53<=(x54==(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 38U;
	volatile int32_t x58 = INT32_MAX;
	uint16_t x59 = 507U;
	static int32_t x60 = -1;
	int32_t t14 = 378;

	t14 = (x57<=(x58==(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x62 = 1999997LLU;
	static int64_t x63 = INT64_MAX;
	static uint8_t x64 = 20U;
	volatile int32_t t15 = -16774755;

	t15 = (x61<=(x62==(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 187592405LLU;
	volatile int64_t x66 = INT64_MAX;
	uint16_t x67 = 180U;
	int64_t x68 = -1455577553728LL;

	t16 = (x65<=(x66==(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	uint8_t x71 = 0U;
	uint64_t x72 = 7929865750734303LLU;
	int32_t t17 = 17186;

	t17 = (x69<=(x70==(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = UINT16_MAX;
	static int16_t x76 = INT16_MIN;

	t18 = (x73<=(x74==(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = INT16_MAX;
	uint32_t x79 = 7279U;
	static volatile uint16_t x80 = 418U;

	t19 = (x77<=(x78==(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 33;
	int16_t x82 = INT16_MIN;
	static int16_t x83 = 933;
	volatile int32_t t20 = -4914;

	t20 = (x81<=(x82==(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = 49;
	uint32_t x87 = 99362510U;
	volatile int16_t x88 = -2049;
	volatile int32_t t21 = -39;

	t21 = (x85<=(x86==(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int64_t x91 = -363LL;
	volatile int32_t t22 = -3;

	t22 = (x89<=(x90==(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 3U;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 2785719U;
	volatile int32_t t23 = -359040621;

	t23 = (x93<=(x94==(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = -1;
	int32_t x100 = -218691;

	t24 = (x97<=(x98==(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	volatile int8_t x103 = -1;
	int32_t t25 = 697248;

	t25 = (x101<=(x102==(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = -8190;
	uint8_t x107 = 47U;
	volatile int8_t x108 = INT8_MIN;

	t26 = (x105<=(x106==(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 7129458960846769LL;
	int16_t x110 = -77;
	int64_t x111 = -34680222831826109LL;
	volatile uint64_t x112 = 3LLU;
	static volatile int32_t t27 = -1;

	t27 = (x109<=(x110==(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	static int64_t x115 = 4313268386873188LL;
	volatile uint8_t x116 = UINT8_MAX;
	int32_t t28 = -6674495;

	t28 = (x113<=(x114==(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	int32_t x120 = 253277869;
	volatile int32_t t29 = 15;

	t29 = (x117<=(x118==(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -9;
	int64_t x123 = INT64_MIN;
	static volatile uint32_t x124 = 262369014U;
	volatile int32_t t30 = 4062131;

	t30 = (x121<=(x122==(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x126 = 1U;
	volatile uint32_t x127 = UINT32_MAX;
	static int32_t t31 = -1143;

	t31 = (x125<=(x126==(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 9553U;
	int8_t x130 = INT8_MIN;
	int16_t x131 = -3;
	int8_t x132 = 0;
	int32_t t32 = -25882096;

	t32 = (x129<=(x130==(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MAX;
	int8_t x134 = 0;
	int16_t x135 = INT16_MIN;
	static int32_t t33 = 6347;

	t33 = (x133<=(x134==(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static int8_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -53;

	t34 = (x137<=(x138==(x139==x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	volatile int16_t x142 = 36;
	int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;

	t35 = (x141<=(x142==(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = -1;
	int32_t x147 = -1;
	volatile int32_t t36 = -7812;

	t36 = (x145<=(x146==(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 1933U;
	uint32_t x150 = 9938574U;
	volatile int16_t x151 = 10690;
	static int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 29787;

	t37 = (x149<=(x150==(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 25900U;
	uint16_t x154 = 1U;
	static uint8_t x155 = 6U;
	volatile int64_t x156 = -12LL;
	int32_t t38 = -12533;

	t38 = (x153<=(x154==(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 37LLU;
	int32_t x158 = -2026832;
	volatile uint32_t x159 = 0U;

	t39 = (x157<=(x158==(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = 440596LL;
	uint16_t x163 = 2380U;
	int32_t x164 = INT32_MAX;
	int32_t t40 = 2237923;

	t40 = (x161<=(x162==(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 6U;
	volatile int32_t t41 = 1;

	t41 = (x165<=(x166==(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int64_t x172 = 54011620131LL;
	static volatile int32_t t42 = 3;

	t42 = (x169<=(x170==(x171==x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = INT16_MIN;
	static int32_t x175 = -1015395;
	volatile int64_t x176 = INT64_MIN;

	t43 = (x173<=(x174==(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = 21;
	static int16_t x179 = -514;
	volatile uint8_t x180 = 3U;
	static int32_t t44 = 9;

	t44 = (x177<=(x178==(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 86750U;
	int8_t x182 = INT8_MIN;
	volatile int8_t x183 = INT8_MIN;
	int32_t t45 = 710;

	t45 = (x181<=(x182==(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -3929;
	int16_t x187 = -1;
	volatile uint8_t x188 = 2U;

	t46 = (x185<=(x186==(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	static uint16_t x190 = 1U;
	int16_t x191 = -2;
	volatile int32_t x192 = INT32_MIN;
	int32_t t47 = 1289;

	t47 = (x189<=(x190==(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	volatile int8_t x194 = 11;
	int64_t x195 = -1883LL;
	static uint64_t x196 = 56720797LLU;
	volatile int32_t t48 = 745220;

	t48 = (x193<=(x194==(x195==x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 41U;
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 589770768990754LLU;
	volatile int32_t t49 = -1;

	t49 = (x197<=(x198==(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = INT8_MAX;
	int32_t x204 = 0;
	static int32_t t50 = -94;

	t50 = (x201<=(x202==(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MAX;
	int16_t x207 = 0;
	uint8_t x208 = UINT8_MAX;

	t51 = (x205<=(x206==(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 4;
	int64_t x211 = INT64_MAX;
	int32_t t52 = 1;

	t52 = (x209<=(x210==(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MAX;
	static uint8_t x215 = UINT8_MAX;
	int16_t x216 = 78;

	t53 = (x213<=(x214==(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x218 = 30370790949LL;
	volatile int64_t x219 = INT64_MAX;
	volatile int32_t t54 = 79;

	t54 = (x217<=(x218==(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MAX;
	uint8_t x223 = 32U;
	int32_t x224 = 4062777;
	volatile int32_t t55 = 2188;

	t55 = (x221<=(x222==(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MIN;
	volatile int32_t t56 = 357233668;

	t56 = (x225<=(x226==(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -28;
	static int64_t x230 = -433LL;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = 103U;

	t57 = (x229<=(x230==(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -27;
	int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -2910949;

	t58 = (x233<=(x234==(x235==x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int64_t x239 = -37147895850741LL;
	static volatile int32_t t59 = -541547094;

	t59 = (x237<=(x238==(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	static volatile int32_t x242 = INT32_MIN;
	uint8_t x244 = UINT8_MAX;
	static volatile int32_t t60 = -481422;

	t60 = (x241<=(x242==(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x247 = 13188618217LLU;
	static int16_t x248 = INT16_MIN;
	static int32_t t61 = 2;

	t61 = (x245<=(x246==(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 705799193;
	uint32_t x250 = 10U;
	uint32_t x251 = UINT32_MAX;
	static int8_t x252 = INT8_MAX;

	t62 = (x249<=(x250==(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile int64_t x254 = 2077855853718577LL;
	int8_t x255 = -59;
	int32_t t63 = -772532124;

	t63 = (x253<=(x254==(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int64_t x259 = 7644556628151533LL;
	static int32_t x260 = -167390;
	static int32_t t64 = -189;

	t64 = (x257<=(x258==(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = -36946173;
	int8_t x263 = INT8_MAX;
	volatile uint16_t x264 = 6U;
	int32_t t65 = 482;

	t65 = (x261<=(x262==(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	static int32_t x266 = INT32_MAX;
	int32_t x267 = -11364314;
	volatile int8_t x268 = 0;
	int32_t t66 = 1;

	t66 = (x265<=(x266==(x267==x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	uint32_t x270 = 464U;
	static int16_t x271 = 6;
	static uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = 715780404;

	t67 = (x269<=(x270==(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MAX;
	int16_t x275 = -3557;
	volatile int32_t t68 = 4546778;

	t68 = (x273<=(x274==(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x279 = -1;
	static int32_t x280 = INT32_MIN;
	int32_t t69 = 313;

	t69 = (x277<=(x278==(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x282 = INT64_MAX;
	int16_t x283 = -1;
	int64_t x284 = -3440752800550LL;

	t70 = (x281<=(x282==(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = 73U;
	volatile int8_t x287 = 17;
	volatile uint8_t x288 = 12U;
	volatile int32_t t71 = 1;

	t71 = (x285<=(x286==(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 1U;

	t72 = (x289<=(x290==(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = 2;
	static int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;
	static int32_t t73 = 1723;

	t73 = (x293<=(x294==(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	volatile uint8_t x298 = UINT8_MAX;
	volatile int64_t x299 = INT64_MAX;
	static int16_t x300 = INT16_MAX;
	int32_t t74 = 1962113;

	t74 = (x297<=(x298==(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint64_t x302 = 195131LLU;
	static int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MIN;

	t75 = (x301<=(x302==(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	uint16_t x306 = 174U;
	int32_t x307 = 1439385;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 1536;

	t76 = (x305<=(x306==(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	volatile int8_t x310 = -1;
	int64_t x312 = 999933512764593LL;
	static int32_t t77 = 4;

	t77 = (x309<=(x310==(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 10;
	static volatile int32_t x314 = 5986;
	int32_t x315 = -1;
	volatile int8_t x316 = 0;
	volatile int32_t t78 = 24366962;

	t78 = (x313<=(x314==(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	static uint16_t x318 = 517U;
	uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -4;

	t79 = (x317<=(x318==(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 1;
	static int64_t x322 = INT64_MAX;
	volatile uint16_t x323 = 120U;
	static volatile int16_t x324 = -496;
	int32_t t80 = 173903;

	t80 = (x321<=(x322==(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -1LL;
	uint16_t x326 = 1U;
	uint16_t x327 = 46U;
	static uint16_t x328 = 2U;
	int32_t t81 = 65;

	t81 = (x325<=(x326==(x327==x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 59963360U;
	volatile int32_t x330 = -1;
	volatile int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;

	t82 = (x329<=(x330==(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = -30071056LL;
	volatile uint32_t x335 = 6617U;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = 71397633;

	t83 = (x333<=(x334==(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MIN;
	static int64_t x339 = INT64_MAX;
	static int32_t t84 = -12363;

	t84 = (x337<=(x338==(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = -1;
	static int64_t x343 = INT64_MAX;
	volatile int32_t t85 = 721493547;

	t85 = (x341<=(x342==(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	static int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	volatile int32_t t86 = -22704897;

	t86 = (x345<=(x346==(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MAX;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MAX;

	t87 = (x349<=(x350==(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = 1474809LL;
	int32_t x354 = -1;
	int64_t x355 = -1LL;
	static uint16_t x356 = 3638U;
	static volatile int32_t t88 = 31598;

	t88 = (x353<=(x354==(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 1206663808LLU;
	int8_t x358 = -1;
	uint64_t x359 = 146884083220262197LLU;
	int32_t x360 = -1;
	static volatile int32_t t89 = 13437;

	t89 = (x357<=(x358==(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 158565;

	t90 = (x361<=(x362==(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 4724U;
	static int8_t x366 = INT8_MAX;
	static int64_t x367 = INT64_MIN;
	static uint8_t x368 = 24U;
	volatile int32_t t91 = 4;

	t91 = (x365<=(x366==(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile int32_t x370 = 1;
	uint8_t x371 = 46U;
	uint64_t x372 = 0LLU;
	int32_t t92 = -791;

	t92 = (x369<=(x370==(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = INT16_MIN;
	static volatile uint8_t x375 = 96U;
	volatile int32_t x376 = INT32_MIN;
	static int32_t t93 = -434777;

	t93 = (x373<=(x374==(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	volatile uint8_t x378 = 1U;
	uint8_t x379 = UINT8_MAX;
	static volatile int32_t t94 = 34178029;

	t94 = (x377<=(x378==(x379==x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	volatile int16_t x382 = -1;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;
	int32_t t95 = 290270;

	t95 = (x381<=(x382==(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = UINT64_MAX;
	volatile int32_t x388 = -659248140;
	static int32_t t96 = -674199999;

	t96 = (x385<=(x386==(x387==x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 30;
	static volatile uint32_t x390 = 0U;
	int16_t x391 = -3151;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -34788;

	t97 = (x389<=(x390==(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 65U;
	uint8_t x394 = 11U;
	int8_t x396 = INT8_MIN;

	t98 = (x393<=(x394==(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = -18430295479266792LL;
	int32_t t99 = 0;

	t99 = (x397<=(x398==(x399==x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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

