#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 1U;
int64_t x5 = INT64_MIN;
int8_t x10 = -10;
int8_t x11 = 6;
volatile int32_t t2 = -3107;
volatile uint32_t x13 = 194473678U;
volatile int64_t x17 = INT64_MAX;
static int8_t x21 = -1;
volatile int32_t t7 = -1;
int8_t x33 = 10;
static volatile int16_t x53 = -1;
static int32_t x63 = INT32_MAX;
uint8_t x66 = 40U;
int16_t x72 = INT16_MIN;
int32_t x73 = 1531345;
volatile uint32_t x77 = 2089901357U;
static volatile int16_t x79 = INT16_MIN;
volatile int32_t t19 = 1;
int32_t x81 = INT32_MAX;
int32_t x84 = INT32_MAX;
static int8_t x86 = INT8_MAX;
static int64_t x87 = INT64_MAX;
int8_t x88 = 6;
int64_t x94 = 1131330604558567630LL;
int64_t x95 = -206710463LL;
static volatile int32_t t25 = 43;
static volatile int16_t x107 = 0;
int64_t x108 = INT64_MIN;
int64_t x119 = -1LL;
int16_t x122 = INT16_MAX;
int16_t x132 = INT16_MIN;
uint64_t x140 = 0LLU;
int32_t x145 = -1;
static int64_t x147 = 57779LL;
int32_t x149 = 0;
static int32_t x150 = 74428587;
static volatile int32_t t37 = -267285868;
int16_t x153 = INT16_MAX;
static int16_t x156 = 252;
volatile uint16_t x168 = UINT16_MAX;
static int32_t x169 = INT32_MAX;
volatile int32_t t42 = 1190434;
int64_t x179 = INT64_MAX;
volatile int32_t t45 = -9524;
uint8_t x194 = 4U;
static int16_t x195 = INT16_MAX;
int64_t x204 = -1LL;
int8_t x208 = -25;
static volatile int64_t x210 = 484LL;
volatile int32_t t52 = 1317;
static volatile int32_t t53 = -40;
volatile int32_t t55 = -20849104;
int64_t x229 = -28919851075LL;
int64_t x233 = -51825947822549LL;
volatile int16_t x236 = INT16_MAX;
uint32_t x237 = 10U;
static volatile uint16_t x238 = 2876U;
volatile int8_t x239 = -1;
volatile int32_t x241 = INT32_MAX;
int16_t x244 = INT16_MIN;
uint32_t x247 = UINT32_MAX;
uint32_t x249 = 1876989U;
volatile int32_t t64 = 52;
static int8_t x274 = INT8_MAX;
int16_t x275 = INT16_MAX;
uint16_t x287 = 0U;
int16_t x296 = 10;
int16_t x301 = 0;
volatile uint8_t x302 = UINT8_MAX;
int64_t x320 = INT64_MIN;
uint8_t x322 = UINT8_MAX;
int32_t x324 = -1;
int64_t x325 = INT64_MAX;
int16_t x326 = -2703;
int32_t t81 = 231980141;
static int8_t x330 = -1;
static int32_t x336 = INT32_MIN;
static int32_t t84 = 374;
int8_t x342 = -1;
int64_t x344 = -1LL;
static int32_t x351 = INT32_MAX;
static volatile int32_t t88 = 1668;
uint32_t x357 = UINT32_MAX;
uint32_t x358 = 2U;
static int8_t x363 = -1;
int8_t x368 = INT8_MIN;
int32_t t91 = 8753678;
int32_t t92 = 0;
static int64_t x373 = 74241LL;
volatile uint8_t x377 = UINT8_MAX;
int16_t x378 = 7666;
int32_t t94 = 1;
int32_t x381 = INT32_MIN;
volatile int64_t x385 = 18LL;
int32_t x390 = INT32_MIN;
volatile int8_t x394 = -1;
int16_t x398 = INT16_MAX;


void f0(void) {
	uint8_t x2 = 2U;
	int8_t x3 = -3;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = -6989;

	t0 = (x1<(x2^(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -3;
	int8_t x7 = INT8_MAX;
	volatile uint16_t x8 = 1418U;
	volatile int32_t t1 = -1997;

	t1 = (x5<(x6^(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	volatile uint32_t x12 = UINT32_MAX;

	t2 = (x9<(x10^(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = 12U;
	volatile int16_t x15 = INT16_MIN;
	static int64_t x16 = INT64_MIN;
	int32_t t3 = -15400329;

	t3 = (x13<(x14^(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = 2;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -5;

	t4 = (x17<(x18^(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = 1U;
	uint64_t x23 = 8549568437445LLU;
	static uint32_t x24 = 1751886307U;
	volatile int32_t t5 = 256216;

	t5 = (x21<(x22^(x23<=x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	static volatile uint16_t x26 = UINT16_MAX;
	static int16_t x27 = -1;
	volatile int16_t x28 = -1;
	volatile int32_t t6 = -3976;

	t6 = (x25<(x26^(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile int8_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = INT16_MIN;

	t7 = (x29<(x30^(x31<=x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = 3332;
	static int32_t x35 = -1;
	int32_t x36 = -1;
	int32_t t8 = 3440719;

	t8 = (x33<(x34^(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 7348215U;
	static int16_t x38 = INT16_MIN;
	int64_t x39 = -570341455694543967LL;
	static uint8_t x40 = 21U;
	static int32_t t9 = 0;

	t9 = (x37<(x38^(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint32_t x42 = 35160908U;
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 6;

	t10 = (x41<(x42^(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = 14984904;
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = 2;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t11 = -179343;

	t11 = (x45<(x46^(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MAX;
	uint64_t x51 = 113967259LLU;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = 548936;

	t12 = (x49<(x50^(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	static int32_t x55 = INT32_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 355832;

	t13 = (x53<(x54^(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -3;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -415215;

	t14 = (x57<(x58^(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 29827U;
	static uint64_t x62 = 304016372LLU;
	int16_t x64 = 0;
	volatile int32_t t15 = -4075;

	t15 = (x61<(x62^(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1004LL;
	static int32_t x67 = -2703;
	static volatile int32_t x68 = -983;
	int32_t t16 = 1;

	t16 = (x65<(x66^(x67<=x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	uint8_t x70 = UINT8_MAX;
	int32_t x71 = -114739;
	volatile int32_t t17 = -1454647;

	t17 = (x69<(x70^(x71<=x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 11083U;
	int64_t x75 = INT64_MIN;
	int8_t x76 = -1;
	int32_t t18 = -28058906;

	t18 = (x73<(x74^(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 318U;
	int64_t x80 = 27512801085942LL;

	t19 = (x77<(x78^(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = INT32_MIN;
	uint16_t x83 = 14414U;
	int32_t t20 = -55608008;

	t20 = (x81<(x82^(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1024127U;
	static int32_t t21 = 25;

	t21 = (x85<(x86^(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 5860U;
	int16_t x90 = INT16_MIN;
	uint32_t x91 = 1656U;
	static int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 3827;

	t22 = (x89<(x90^(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int16_t x96 = -846;
	volatile int32_t t23 = 15189150;

	t23 = (x93<(x94^(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	volatile int16_t x98 = INT16_MIN;
	volatile int8_t x99 = INT8_MIN;
	int8_t x100 = 1;
	volatile int32_t t24 = -201;

	t24 = (x97<(x98^(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -7;
	static volatile int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;

	t25 = (x101<(x102^(x103<=x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 129357203602051LLU;
	int32_t x106 = INT32_MAX;
	volatile int32_t t26 = 166023;

	t26 = (x105<(x106^(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 122U;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	static volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 803258848;

	t27 = (x109<(x110^(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int8_t x114 = INT8_MAX;
	int64_t x115 = -27LL;
	volatile int16_t x116 = INT16_MIN;
	static int32_t t28 = 4;

	t28 = (x113<(x114^(x115<=x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 225594113;
	static int16_t x118 = -1;
	uint16_t x120 = 467U;
	volatile int32_t t29 = 319;

	t29 = (x117<(x118^(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 25U;
	volatile int16_t x123 = INT16_MAX;
	volatile uint16_t x124 = 28979U;
	int32_t t30 = 1231749;

	t30 = (x121<(x122^(x123<=x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 2U;
	int64_t x126 = -49163465481394286LL;
	uint64_t x127 = 23205610253299LLU;
	volatile int8_t x128 = INT8_MIN;
	static int32_t t31 = -6578188;

	t31 = (x125<(x126^(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 20U;
	int16_t x130 = INT16_MIN;
	volatile int16_t x131 = -1;
	volatile int32_t t32 = -55696156;

	t32 = (x129<(x130^(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 87546385U;
	volatile uint64_t x134 = 29070182347LLU;
	static int8_t x135 = INT8_MAX;
	uint8_t x136 = 7U;
	int32_t t33 = -13113;

	t33 = (x133<(x134^(x135<=x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 2806989417849346542LLU;
	static int64_t x138 = 4396873098LL;
	volatile int64_t x139 = 3085580562412970099LL;
	static int32_t t34 = 0;

	t34 = (x137<(x138^(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 59633342U;
	static int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;
	volatile int64_t x144 = INT64_MIN;
	int32_t t35 = 355070558;

	t35 = (x141<(x142^(x143<=x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	static uint64_t x148 = 643437LLU;
	int32_t t36 = 350484;

	t36 = (x145<(x146^(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = INT32_MIN;
	volatile uint8_t x152 = 2U;

	t37 = (x149<(x150^(x151<=x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 4031U;
	int16_t x155 = -13095;
	static volatile int32_t t38 = -627681;

	t38 = (x153<(x154^(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = 3394;
	static int32_t x159 = INT32_MAX;
	int8_t x160 = 0;
	volatile int32_t t39 = 150;

	t39 = (x157<(x158^(x159<=x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	static int64_t x162 = 697LL;
	volatile uint8_t x163 = UINT8_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t40 = 33323357;

	t40 = (x161<(x162^(x163<=x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MAX;
	uint16_t x167 = 16554U;
	volatile int32_t t41 = 4445;

	t41 = (x165<(x166^(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x170 = 0;
	volatile int64_t x171 = 95789080474LL;
	uint32_t x172 = UINT32_MAX;

	t42 = (x169<(x170^(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static volatile int64_t x174 = -518547284995457LL;
	int64_t x175 = 2LL;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 703;

	t43 = (x173<(x174^(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	uint32_t x180 = 56U;
	static int32_t t44 = 729654228;

	t44 = (x177<(x178^(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = -1;
	volatile int16_t x183 = INT16_MAX;
	volatile int16_t x184 = 0;

	t45 = (x181<(x182^(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 85124LLU;
	int32_t x186 = INT32_MIN;
	static int8_t x187 = INT8_MIN;
	int32_t x188 = 325925286;
	volatile int32_t t46 = -6655630;

	t46 = (x185<(x186^(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	uint8_t x190 = 22U;
	uint16_t x191 = 347U;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -13153702;

	t47 = (x189<(x190^(x191<=x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	static uint32_t x196 = 6637591U;
	static volatile int32_t t48 = -77;

	t48 = (x193<(x194^(x195<=x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = 3843409141408493LL;
	int32_t x198 = 183630075;
	static int8_t x199 = -15;
	uint8_t x200 = 3U;
	int32_t t49 = -54417407;

	t49 = (x197<(x198^(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -9;
	int8_t x202 = -3;
	uint64_t x203 = 62922LLU;
	volatile int32_t t50 = -484;

	t50 = (x201<(x202^(x203<=x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	int32_t t51 = 0;

	t51 = (x205<(x206^(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 12978658439333LLU;
	int8_t x211 = INT8_MAX;
	static volatile uint8_t x212 = 58U;

	t52 = (x209<(x210^(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 8U;
	int32_t x214 = -27551395;
	uint16_t x215 = 77U;
	int32_t x216 = INT32_MIN;

	t53 = (x213<(x214^(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	volatile int8_t x219 = INT8_MAX;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -233853;

	t54 = (x217<(x218^(x219<=x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = 184244;
	volatile int16_t x223 = -1;
	int32_t x224 = INT32_MIN;

	t55 = (x221<(x222^(x223<=x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1LL;
	volatile int64_t x226 = 3LL;
	int64_t x227 = -771350349851998424LL;
	int32_t x228 = 10543883;
	static int32_t t56 = 237;

	t56 = (x225<(x226^(x227<=x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MAX;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 36179;

	t57 = (x229<(x230^(x231<=x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 982819526272500271LLU;
	int64_t x235 = INT64_MIN;
	int32_t t58 = 5526559;

	t58 = (x233<(x234^(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x240 = INT64_MIN;
	int32_t t59 = 490;

	t59 = (x237<(x238^(x239<=x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 0;
	volatile int8_t x243 = INT8_MIN;
	int32_t t60 = -670;

	t60 = (x241<(x242^(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 3440;

	t61 = (x245<(x246^(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x250 = 6U;
	static uint16_t x251 = 73U;
	volatile int16_t x252 = -202;
	static volatile int32_t t62 = -24;

	t62 = (x249<(x250^(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	static uint8_t x254 = UINT8_MAX;
	static volatile int64_t x255 = -1LL;
	int8_t x256 = 5;
	int32_t t63 = -22799120;

	t63 = (x253<(x254^(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 34U;

	t64 = (x257<(x258^(x259<=x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -3;
	static int32_t x262 = INT32_MAX;
	uint32_t x263 = 3634U;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = 278870;

	t65 = (x261<(x262^(x263<=x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -4615;
	uint8_t x266 = 1U;
	static int64_t x267 = -1LL;
	static volatile int32_t x268 = INT32_MIN;
	static int32_t t66 = -13;

	t66 = (x265<(x266^(x267<=x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 1808LLU;
	static uint64_t x270 = 1973063LLU;
	int8_t x271 = -3;
	volatile uint16_t x272 = 1U;
	static volatile int32_t t67 = 1;

	t67 = (x269<(x270^(x271<=x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int32_t x276 = -233;
	static volatile int32_t t68 = 6;

	t68 = (x273<(x274^(x275<=x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = -13068;
	int32_t x278 = INT32_MAX;
	uint32_t x279 = 1975109U;
	uint8_t x280 = UINT8_MAX;
	static volatile int32_t t69 = 0;

	t69 = (x277<(x278^(x279<=x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	static int64_t x282 = INT64_MIN;
	int8_t x283 = 14;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 5;

	t70 = (x281<(x282^(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	uint64_t x288 = 8063116343151809100LLU;
	static volatile int32_t t71 = 1585126;

	t71 = (x285<(x286^(x287<=x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	volatile uint64_t x290 = 2104LLU;
	int8_t x291 = INT8_MAX;
	int64_t x292 = 514790070487LL;
	volatile int32_t t72 = -128149438;

	t72 = (x289<(x290^(x291<=x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 147LLU;
	volatile uint16_t x294 = UINT16_MAX;
	static int16_t x295 = -1;
	int32_t t73 = -20724;

	t73 = (x293<(x294^(x295<=x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -32268300;
	static int16_t x298 = -1;
	int16_t x299 = -1;
	uint32_t x300 = 52U;
	int32_t t74 = 3;

	t74 = (x297<(x298^(x299<=x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = INT32_MAX;
	uint32_t x304 = 12249692U;
	volatile int32_t t75 = 3773533;

	t75 = (x301<(x302^(x303<=x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 1LLU;
	static int8_t x306 = INT8_MIN;
	int16_t x307 = -1;
	uint16_t x308 = 7U;
	int32_t t76 = 26816;

	t76 = (x305<(x306^(x307<=x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	int64_t x311 = -578LL;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = 262791499;

	t77 = (x309<(x310^(x311<=x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = INT64_MIN;
	int32_t x314 = INT32_MIN;
	volatile int32_t x315 = -1;
	volatile int64_t x316 = INT64_MAX;
	volatile int32_t t78 = -11;

	t78 = (x313<(x314^(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 7U;
	volatile int8_t x318 = -1;
	static uint16_t x319 = 6339U;
	static volatile int32_t t79 = 22;

	t79 = (x317<(x318^(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int32_t x323 = 483004;
	int32_t t80 = 180;

	t80 = (x321<(x322^(x323<=x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x327 = 30U;
	uint8_t x328 = 0U;

	t81 = (x325<(x326^(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	int8_t x331 = -12;
	uint8_t x332 = 2U;
	int32_t t82 = -83;

	t82 = (x329<(x330^(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 25637U;
	uint32_t x334 = 16U;
	volatile int64_t x335 = 94196316517LL;
	int32_t t83 = 3683;

	t83 = (x333<(x334^(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 1LL;
	int64_t x338 = 4602072865173214LL;
	int16_t x339 = -1;
	static volatile int32_t x340 = INT32_MIN;

	t84 = (x337<(x338^(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 6472U;
	uint64_t x343 = 123055215166718LLU;
	int32_t t85 = 1330;

	t85 = (x341<(x342^(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MAX;
	int32_t x347 = 55965;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 211;

	t86 = (x345<(x346^(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x350 = 2010372452U;
	int8_t x352 = 1;
	int32_t t87 = 49150;

	t87 = (x349<(x350^(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	int8_t x354 = -1;
	int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MAX;

	t88 = (x353<(x354^(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = INT32_MAX;
	static int64_t x360 = INT64_MAX;
	volatile int32_t t89 = -40040540;

	t89 = (x357<(x358^(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	uint16_t x364 = 22480U;
	static volatile int32_t t90 = -106112;

	t90 = (x361<(x362^(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 3U;
	int8_t x366 = -1;
	uint32_t x367 = UINT32_MAX;

	t91 = (x365<(x366^(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 1604466LLU;
	int64_t x370 = -352661299980LL;
	int8_t x371 = -14;
	static int16_t x372 = -23;

	t92 = (x369<(x370^(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = INT8_MAX;
	static int64_t x376 = INT64_MIN;
	int32_t t93 = 9361;

	t93 = (x373<(x374^(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x379 = 2U;
	uint64_t x380 = 140833220714440823LLU;

	t94 = (x377<(x378^(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	int32_t x383 = INT32_MIN;
	uint32_t x384 = 820757486U;
	volatile int32_t t95 = 9;

	t95 = (x381<(x382^(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = INT32_MAX;
	static volatile int32_t t96 = 16344;

	t96 = (x385<(x386^(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 15075609903LL;
	uint64_t x391 = 4303LLU;
	static int16_t x392 = INT16_MAX;
	int32_t t97 = 64200;

	t97 = (x389<(x390^(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 9993U;
	static int16_t x395 = -1;
	int64_t x396 = -554613434LL;
	int32_t t98 = 27355;

	t98 = (x393<(x394^(x395<=x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 117U;
	volatile int64_t x399 = -1LL;
	int64_t x400 = -1LL;
	int32_t t99 = -214554;

	t99 = (x397<(x398^(x399<=x400)));

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

