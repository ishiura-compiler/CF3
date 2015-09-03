#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
int64_t x4 = INT64_MAX;
uint16_t x5 = 9U;
static int8_t x6 = -2;
int64_t x11 = -1LL;
uint32_t x12 = 1872U;
uint32_t x14 = 1U;
uint16_t x16 = 207U;
static int64_t x22 = 1221LL;
int32_t x24 = INT32_MAX;
static volatile int64_t t5 = INT64_MAX;
uint16_t x48 = 2663U;
static uint32_t x52 = 322U;
static volatile uint8_t x53 = 18U;
volatile uint64_t x54 = 9408919LLU;
uint16_t x61 = UINT16_MAX;
int32_t x63 = -1;
int32_t x70 = INT32_MAX;
int32_t x74 = INT32_MAX;
volatile int32_t t18 = 2807458;
uint32_t x85 = 71864U;
static int64_t x91 = 234LL;
volatile uint64_t t22 = 14922129LLU;
int32_t x97 = INT32_MIN;
uint32_t x103 = 15143U;
int64_t t26 = 3LL;
static uint8_t x111 = 29U;
int16_t x114 = 124;
volatile uint8_t x125 = 87U;
int8_t x127 = INT8_MIN;
volatile int32_t t31 = -9;
static uint8_t x129 = 11U;
int64_t t32 = -646527LL;
int32_t x134 = 360540;
int64_t x140 = -284632110545LL;
volatile int16_t x143 = -1;
int16_t x144 = INT16_MAX;
volatile int32_t t36 = -179;
int64_t x150 = -1LL;
uint32_t x154 = 176U;
static int32_t x156 = -1;
volatile int32_t t40 = 309578;
static int32_t x165 = INT32_MIN;
uint8_t x168 = UINT8_MAX;
int64_t t42 = -33548428888838LL;
int64_t x182 = -8427LL;
volatile uint64_t x186 = UINT64_MAX;
uint32_t x187 = UINT32_MAX;
uint32_t x198 = 114U;
volatile int64_t x200 = -1LL;
static uint64_t t50 = 1LLU;
static int16_t x212 = INT16_MIN;
int32_t t52 = 0;
volatile uint32_t x216 = 0U;
uint16_t x218 = 56U;
int32_t x220 = INT32_MIN;
static uint16_t x223 = 0U;
uint16_t x233 = UINT16_MAX;
static int8_t x237 = INT8_MIN;
int32_t x243 = -1;
int32_t t60 = -129863748;
volatile int64_t t61 = -48737425653145394LL;
static int8_t x249 = -6;
static volatile uint32_t t64 = 4350U;
volatile uint32_t t65 = 0U;
int32_t x278 = INT32_MIN;
static int32_t x281 = -1;
static int32_t x284 = 24066;
int64_t x285 = INT64_MAX;
volatile int16_t x286 = INT16_MIN;
int64_t x287 = INT64_MIN;
static int8_t x290 = -1;
static uint32_t x292 = 1481280U;
volatile int8_t x294 = -1;
static int16_t x295 = INT16_MIN;
static int8_t x296 = -1;
uint32_t x303 = 467731352U;
volatile int32_t t76 = 3;
volatile int8_t x311 = INT8_MAX;
static int32_t t77 = 36022;
volatile int64_t x319 = -1LL;
uint32_t x320 = 726569038U;
volatile int64_t t81 = -966179LL;
static uint16_t x331 = UINT16_MAX;
int16_t x335 = INT16_MIN;
int8_t x342 = INT8_MIN;
volatile int64_t x343 = INT64_MIN;
int16_t x347 = -54;
uint32_t t86 = UINT32_MAX;
volatile uint64_t x350 = 11130111LLU;
volatile uint64_t x355 = 31312718235053835LLU;
uint8_t x356 = 6U;
int32_t x358 = INT32_MIN;
static uint32_t x359 = 1697U;
static int64_t x363 = 1669104750LL;
static int32_t x374 = INT32_MAX;
volatile int32_t t95 = -985370538;
uint8_t x392 = 56U;
uint16_t x398 = 998U;
int32_t x400 = INT32_MIN;


void f0(void) {
	uint8_t x1 = 46U;
	int32_t x3 = INT32_MIN;
	static volatile int32_t t0 = 1;

	t0 = (x1*(x2&(x3<x4)));

	if (t0 != 46) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 48644U;
	uint32_t x8 = 9889867U;
	int32_t t1 = 289108318;

	t1 = (x5*(x6&(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 4354LLU;
	static volatile int8_t x10 = 0;
	uint64_t t2 = 1037239295549684LLU;

	t2 = (x9*(x10&(x11<x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 56654U;
	static uint64_t x15 = 124416LLU;
	uint32_t t3 = 1541U;

	t3 = (x13*(x14&(x15<x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 307U;
	volatile int64_t x18 = INT64_MIN;
	static int8_t x19 = -1;
	static int8_t x20 = INT8_MAX;
	static int64_t t4 = 21236035794775LL;

	t4 = (x17*(x18&(x19<x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	static volatile int8_t x23 = 3;

	t5 = (x21*(x22&(x23<x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 14U;
	uint16_t x26 = 15U;
	int64_t x27 = 1579LL;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 247846578;

	t6 = (x25*(x26&(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	static uint8_t x30 = UINT8_MAX;
	static int8_t x31 = -3;
	uint32_t x32 = 56U;
	int32_t t7 = 3364;

	t7 = (x29*(x30&(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	int64_t x35 = -1LL;
	static volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 264195;

	t8 = (x33*(x34&(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 7;
	uint32_t x38 = 41585U;
	static int32_t x39 = 46820;
	static volatile uint64_t x40 = UINT64_MAX;
	volatile uint32_t t9 = 10286782U;

	t9 = (x37*(x38&(x39<x40)));

	if (t9 != 7U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = 193230120LL;
	uint16_t x42 = 305U;
	int64_t x43 = -1LL;
	int32_t x44 = -250511936;
	static volatile int64_t t10 = 1LL;

	t10 = (x41*(x42&(x43<x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 205876561;
	static volatile int16_t x46 = 1;
	int8_t x47 = 1;
	int32_t t11 = -3;

	t11 = (x45*(x46&(x47<x48)));

	if (t11 != 205876561) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 18U;
	volatile int8_t x50 = -1;
	int16_t x51 = -59;
	volatile int32_t t12 = 239616;

	t12 = (x49*(x50&(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x55 = 33293822666LLU;
	static uint8_t x56 = 10U;
	uint64_t t13 = 1051572773982502120LLU;

	t13 = (x53*(x54&(x55<x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static uint16_t x58 = UINT16_MAX;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile uint32_t t14 = 2150813U;

	t14 = (x57*(x58&(x59<x60)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 5996443;

	t15 = (x61*(x62&(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static uint8_t x66 = 6U;
	uint32_t x67 = 0U;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 14626279;

	t16 = (x65*(x66&(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile uint8_t x71 = 22U;
	int8_t x72 = INT8_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x69*(x70&(x71<x72)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MIN;

	t18 = (x73*(x74&(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 307;
	uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 0U;
	volatile int16_t x80 = -7;
	int32_t t19 = 31439584;

	t19 = (x77*(x78&(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = 63;
	static int8_t x83 = 12;
	static int64_t x84 = INT64_MIN;
	int32_t t20 = 984507;

	t20 = (x81*(x82&(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = INT64_MAX;
	volatile uint8_t x87 = 77U;
	int64_t x88 = INT64_MAX;
	volatile int64_t t21 = 369650341900959907LL;

	t21 = (x85*(x86&(x87<x88)));

	if (t21 != 71864LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 1779LLU;
	static int64_t x90 = -2LL;
	uint16_t x92 = 4248U;

	t22 = (x89*(x90&(x91<x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 39U;
	int8_t x94 = INT8_MIN;
	volatile int8_t x95 = -6;
	int8_t x96 = -1;
	int32_t t23 = 11;

	t23 = (x93*(x94&(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 307317U;
	uint32_t x99 = 1606947U;
	uint64_t x100 = 13863LLU;
	uint32_t t24 = 25676U;

	t24 = (x97*(x98&(x99<x100)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile uint32_t x102 = UINT32_MAX;
	int8_t x104 = -1;
	static volatile uint32_t t25 = 722U;

	t25 = (x101*(x102&(x103<x104)));

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	volatile int16_t x106 = INT16_MIN;
	int8_t x107 = -2;
	uint8_t x108 = 26U;

	t26 = (x105*(x106&(x107<x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 4075;
	int32_t x110 = 1029;
	volatile int32_t x112 = -1;
	int32_t t27 = -9818231;

	t27 = (x109*(x110&(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x115 = UINT32_MAX;
	static int16_t x116 = INT16_MIN;
	static int32_t t28 = 6243522;

	t28 = (x113*(x114&(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = UINT32_MAX;
	uint8_t x118 = UINT8_MAX;
	static int64_t x119 = -295421LL;
	int16_t x120 = 3157;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117*(x118&(x119<x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -528401952LL;
	int16_t x122 = 7;
	static int16_t x123 = 776;
	static int64_t x124 = 5543425386803LL;
	int64_t t30 = 11423516402439LL;

	t30 = (x121*(x122&(x123<x124)));

	if (t30 != -528401952LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;

	t31 = (x125*(x126&(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	static int16_t x131 = 10226;
	int16_t x132 = 13;

	t32 = (x129*(x130&(x131<x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -2674269558634915LL;
	int64_t x135 = -1LL;
	uint64_t x136 = 251661461654175LLU;
	int64_t t33 = 16378857529183LL;

	t33 = (x133*(x134&(x135<x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 6U;
	int8_t x138 = INT8_MIN;
	static int64_t x139 = -2LL;
	int32_t t34 = 6747559;

	t34 = (x137*(x138&(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static int16_t x142 = 11281;
	int32_t t35 = 205;

	t35 = (x141*(x142&(x143<x144)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 15U;
	volatile int16_t x146 = INT16_MIN;
	int32_t x147 = 204488967;
	int64_t x148 = INT64_MIN;

	t36 = (x145*(x146&(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MIN;
	static volatile int64_t t37 = -279890039343LL;

	t37 = (x149*(x150&(x151<x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 852665050868427466LLU;
	int16_t x155 = INT16_MAX;
	uint64_t t38 = 8228405LLU;

	t38 = (x153*(x154&(x155<x156)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 672358U;
	int16_t x159 = -184;
	uint32_t x160 = 3U;
	uint32_t t39 = 41U;

	t39 = (x157*(x158&(x159<x160)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = 9434360350681LLU;
	int64_t x164 = INT64_MAX;

	t40 = (x161*(x162&(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	int32_t t41 = -17;

	t41 = (x165*(x166&(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 942440LL;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = -48;
	int8_t x172 = 0;

	t42 = (x169*(x170&(x171<x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -5;
	int64_t x174 = INT64_MIN;
	uint8_t x175 = 0U;
	uint8_t x176 = 58U;
	volatile int64_t t43 = -11507484LL;

	t43 = (x173*(x174&(x175<x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	volatile int16_t x178 = INT16_MAX;
	volatile int32_t x179 = INT32_MIN;
	volatile int32_t x180 = INT32_MIN;
	int32_t t44 = -554;

	t44 = (x177*(x178&(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 13U;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = 16236;
	volatile int64_t t45 = 14783886290LL;

	t45 = (x181*(x182&(x183<x184)));

	if (t45 != 13LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -378085;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t46 = 849LLU;

	t46 = (x185*(x186&(x187<x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	volatile int64_t x190 = -34528804582868LL;
	int8_t x191 = 1;
	volatile uint16_t x192 = UINT16_MAX;
	int64_t t47 = -54219973135LL;

	t47 = (x189*(x190&(x191<x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 337284061U;
	static volatile int8_t x194 = 4;
	int16_t x195 = INT16_MAX;
	uint16_t x196 = 11459U;
	static uint32_t t48 = 183036U;

	t48 = (x193*(x194&(x195<x196)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint32_t x199 = 1673U;
	int64_t t49 = 3431427443230500LL;

	t49 = (x197*(x198&(x199<x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static uint64_t x202 = UINT64_MAX;
	static int64_t x203 = -559517356773651019LL;
	volatile int16_t x204 = INT16_MIN;

	t50 = (x201*(x202&(x203<x204)));

	if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 22U;
	static int64_t x206 = -7239LL;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = 164;
	volatile int64_t t51 = 1672971571788653749LL;

	t51 = (x205*(x206&(x207<x208)));

	if (t51 != 22LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 0;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;

	t52 = (x209*(x210&(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 377981336;
	volatile int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	static volatile int32_t t53 = 776638;

	t53 = (x213*(x214&(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	int64_t x219 = 15892732932879LL;
	volatile int32_t t54 = 58729625;

	t54 = (x217*(x218&(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	volatile int8_t x222 = -1;
	volatile int16_t x224 = INT16_MIN;
	int32_t t55 = -937990896;

	t55 = (x221*(x222&(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 2654342U;
	int32_t x226 = 575932;
	uint16_t x227 = UINT16_MAX;
	volatile uint64_t x228 = 1615831907047LLU;
	static uint32_t t56 = 2566U;

	t56 = (x225*(x226&(x227<x228)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	static int32_t x232 = 2235;
	volatile int64_t t57 = -306217LL;

	t57 = (x229*(x230&(x231<x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	int32_t x236 = -1;
	static int32_t t58 = -603171396;

	t58 = (x233*(x234&(x235<x236)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x238 = UINT32_MAX;
	int64_t x239 = -1LL;
	static volatile int8_t x240 = INT8_MIN;
	static uint32_t t59 = 41118U;

	t59 = (x237*(x238&(x239<x240)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	static int16_t x244 = 4481;

	t60 = (x241*(x242&(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 1721672LL;
	int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MAX;
	int16_t x248 = -1;

	t61 = (x245*(x246&(x247<x248)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x250 = UINT16_MAX;
	int16_t x251 = -1;
	static volatile uint64_t x252 = UINT64_MAX;
	volatile int32_t t62 = -15;

	t62 = (x249*(x250&(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = 0;
	int8_t x254 = 1;
	volatile int16_t x255 = INT16_MAX;
	uint32_t x256 = 2009539300U;
	volatile int32_t t63 = 936237;

	t63 = (x253*(x254&(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = -190;
	volatile uint32_t x258 = 134825U;
	static int16_t x259 = -31;
	static int16_t x260 = -3;

	t64 = (x257*(x258&(x259<x260)));

	if (t64 != 4294967106U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint32_t x262 = 230U;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MAX;

	t65 = (x261*(x262&(x263<x264)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -1;
	int32_t x266 = INT32_MAX;
	uint64_t x267 = 980039502916798LLU;
	uint8_t x268 = 0U;
	volatile int32_t t66 = -1407;

	t66 = (x265*(x266&(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 1883U;
	int64_t x270 = 75550169055853737LL;
	static int8_t x271 = -1;
	volatile int8_t x272 = INT8_MAX;
	volatile int64_t t67 = 52LL;

	t67 = (x269*(x270&(x271<x272)));

	if (t67 != 1883LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 1130U;
	volatile uint8_t x274 = UINT8_MAX;
	int16_t x275 = -11543;
	int8_t x276 = INT8_MIN;
	uint32_t t68 = 142463U;

	t68 = (x273*(x274&(x275<x276)));

	if (t68 != 1130U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 342U;
	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t69 = 180537;

	t69 = (x277*(x278&(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x282 = INT64_MAX;
	static uint64_t x283 = 500448940160236LLU;
	volatile int64_t t70 = -35LL;

	t70 = (x281*(x282&(x283<x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x288 = 5U;
	int64_t t71 = 154643LL;

	t71 = (x285*(x286&(x287<x288)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	static int32_t x291 = INT32_MIN;
	int32_t t72 = -93546822;

	t72 = (x289*(x290&(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 37179100U;
	volatile uint32_t t73 = 114429U;

	t73 = (x293*(x294&(x295<x296)));

	if (t73 != 37179100U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = UINT16_MAX;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MIN;
	static uint8_t x300 = 61U;
	static volatile int32_t t74 = 1022;

	t74 = (x297*(x298&(x299<x300)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -86;
	int64_t x302 = INT64_MAX;
	volatile int32_t x304 = -1;
	int64_t t75 = -1683322485080892LL;

	t75 = (x301*(x302&(x303<x304)));

	if (t75 != -86LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = INT32_MIN;
	static uint32_t x307 = 8948U;
	int64_t x308 = 106250LL;

	t76 = (x305*(x306&(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MAX;
	static volatile uint64_t x312 = 281LLU;

	t77 = (x309*(x310&(x311<x312)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MIN;
	static int8_t x314 = INT8_MIN;
	int16_t x315 = -1437;
	int16_t x316 = INT16_MIN;
	int64_t t78 = 5991953284403046LL;

	t78 = (x313*(x314&(x315<x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 1906002U;
	uint64_t x318 = UINT64_MAX;
	uint64_t t79 = 1257LLU;

	t79 = (x317*(x318&(x319<x320)));

	if (t79 != 1906002LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	static uint16_t x322 = 62U;
	uint16_t x323 = 760U;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = 39279;

	t80 = (x321*(x322&(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	uint8_t x327 = UINT8_MAX;
	volatile int64_t x328 = INT64_MIN;

	t81 = (x325*(x326&(x327<x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -488;
	static int16_t x330 = -1;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 17238372;

	t82 = (x329*(x330&(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 732U;
	uint8_t x334 = UINT8_MAX;
	static volatile uint64_t x336 = 60LLU;
	volatile int32_t t83 = -2489739;

	t83 = (x333*(x334&(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = 4U;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	int32_t t84 = 0;

	t84 = (x337*(x338&(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = 1;
	static volatile int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 14295847;

	t85 = (x341*(x342&(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	uint16_t x348 = 18U;

	t86 = (x345*(x346&(x347<x348)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -45;
	static int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	uint64_t t87 = 8295854840LLU;

	t87 = (x349*(x350&(x351<x352)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MAX;
	static volatile uint32_t x354 = 50077U;
	volatile uint32_t t88 = 240U;

	t88 = (x353*(x354&(x355<x356)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	static int16_t x360 = 19;
	volatile int32_t t89 = -1065771241;

	t89 = (x357*(x358&(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MAX;
	volatile int64_t x362 = INT64_MAX;
	static int16_t x364 = -29;
	int64_t t90 = -6645953635LL;

	t90 = (x361*(x362&(x363<x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -1;
	uint32_t x366 = 468U;
	int32_t x367 = 1780831;
	volatile uint8_t x368 = UINT8_MAX;
	volatile uint32_t t91 = 0U;

	t91 = (x365*(x366&(x367<x368)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -2;
	int64_t x370 = -644012592LL;
	int8_t x371 = 1;
	static int8_t x372 = -1;
	int64_t t92 = 29142019142422177LL;

	t92 = (x369*(x370&(x371<x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int8_t x375 = -1;
	static uint8_t x376 = 12U;
	volatile int32_t t93 = 204;

	t93 = (x373*(x374&(x375<x376)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = -1;
	uint32_t x379 = 1802U;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 0;

	t94 = (x377*(x378&(x379<x380)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int32_t x382 = -1;
	static int16_t x383 = 0;
	volatile uint64_t x384 = UINT64_MAX;

	t95 = (x381*(x382&(x383<x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = INT32_MAX;
	int64_t x387 = 33673163314LL;
	int8_t x388 = 29;
	int32_t t96 = -3851;

	t96 = (x385*(x386&(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MAX;
	int64_t x390 = INT64_MAX;
	int64_t x391 = 28226LL;
	volatile int64_t t97 = 101430LL;

	t97 = (x389*(x390&(x391<x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 173;

	t98 = (x393*(x394&(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x399 = 59U;
	static int32_t t99 = 209;

	t99 = (x397*(x398&(x399<x400)));

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

