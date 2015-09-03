#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -20;
int8_t x9 = INT8_MIN;
volatile int8_t x15 = -1;
int16_t x27 = INT16_MIN;
int32_t x35 = 416146;
static uint8_t x38 = 74U;
int64_t x40 = -599982977272446925LL;
uint16_t x42 = 1968U;
int64_t x52 = -2658023862470428248LL;
int64_t x55 = INT64_MIN;
volatile int32_t t13 = -77075883;
int32_t x62 = INT32_MIN;
uint64_t x71 = UINT64_MAX;
volatile int32_t x93 = INT32_MAX;
int8_t x109 = INT8_MIN;
int32_t x110 = INT32_MIN;
int16_t x117 = INT16_MAX;
volatile int32_t t29 = -96298;
uint64_t x124 = 725500LLU;
int64_t x132 = -13762772950625LL;
int64_t t33 = -112391745LL;
volatile int8_t x149 = -1;
volatile uint64_t x154 = 1355426350LLU;
int8_t x157 = 19;
int64_t x159 = INT64_MAX;
int32_t x165 = 44762481;
int32_t t41 = 602585693;
uint8_t x173 = 1U;
int64_t x180 = INT64_MAX;
volatile int32_t x182 = INT32_MIN;
int64_t x188 = INT64_MIN;
uint8_t x191 = UINT8_MAX;
uint8_t x195 = 13U;
int32_t x199 = INT32_MIN;
volatile uint64_t t51 = 3464764880263701976LLU;
volatile int32_t x212 = INT32_MAX;
uint8_t x217 = 63U;
volatile int8_t x218 = INT8_MAX;
uint8_t x225 = 6U;
int32_t x228 = INT32_MIN;
static uint32_t x244 = UINT32_MAX;
uint32_t t59 = UINT32_MAX;
uint64_t x245 = 8946756225556634LLU;
int32_t x252 = INT32_MAX;
uint16_t x255 = UINT16_MAX;
volatile int8_t x262 = 15;
volatile int64_t x263 = 7812148854LL;
volatile uint32_t x268 = 7484U;
volatile int32_t x274 = INT32_MAX;
static uint8_t x277 = UINT8_MAX;
int32_t x284 = INT32_MIN;
uint32_t t70 = 38U;
int16_t x291 = INT16_MIN;
static uint64_t x294 = UINT64_MAX;
int16_t x305 = -1;
volatile int32_t t77 = 29;
int8_t x324 = INT8_MIN;
static volatile uint16_t x338 = 475U;
volatile int32_t x340 = -1;
int16_t x342 = INT16_MIN;
static int32_t x345 = -1;
static int8_t x353 = -1;
int16_t x356 = -1;
volatile int32_t t86 = -5261249;
int32_t t87 = -45330104;
volatile uint64_t t89 = 28LLU;
volatile int16_t x376 = 4452;
volatile int32_t t93 = INT32_MIN;
int64_t x389 = INT64_MAX;
uint8_t x399 = UINT8_MAX;
int64_t x400 = INT64_MAX;
int8_t x403 = -1;


void f0(void) {
	volatile int16_t x1 = -6;
	uint32_t x2 = 31910U;
	int16_t x3 = 1244;
	static int32_t x4 = -1;
	volatile int32_t t0 = 28725568;

	t0 = (x1-(x2<(x3<=x4)));

	if (t0 != -6) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 386U;
	volatile int8_t x6 = INT8_MIN;
	uint8_t x7 = 5U;
	static uint64_t x8 = UINT64_MAX;

	t1 = (x5-(x6<(x7<=x8)));

	if (t1 != 385) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x10 = INT64_MIN;
	uint8_t x11 = 28U;
	static int64_t x12 = -10514717LL;
	static int32_t t2 = 26547299;

	t2 = (x9-(x10<(x11<=x12)));

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	uint32_t x14 = 0U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 1890570;

	t3 = (x13-(x14<(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 29U;
	static volatile uint64_t x18 = 20071021859197941LLU;
	int8_t x19 = -1;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -3674;

	t4 = (x17-(x18<(x19<=x20)));

	if (t4 != 29) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 508LLU;
	int8_t x22 = 4;
	static uint32_t x23 = 697U;
	volatile int32_t x24 = INT32_MAX;
	static uint64_t t5 = 57124LLU;

	t5 = (x21-(x22<(x23<=x24)));

	if (t5 != 508LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	uint16_t x26 = 38U;
	int8_t x28 = -10;
	uint32_t t6 = UINT32_MAX;

	t6 = (x25-(x26<(x27<=x28)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static int8_t x30 = 7;
	int8_t x31 = -1;
	static uint32_t x32 = 16572264U;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x29-(x30<(x31<=x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = -1LL;
	int16_t x36 = INT16_MIN;
	uint64_t t8 = 57450LLU;

	t8 = (x33-(x34<(x35<=x36)));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	static uint32_t x39 = 231U;
	static int64_t t9 = INT64_MIN;

	t9 = (x37-(x38<(x39<=x40)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 1397445779LL;
	int16_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t10 = 867797908965165LL;

	t10 = (x41-(x42<(x43<=x44)));

	if (t10 != 1397445779LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 58U;
	int32_t x46 = -1;
	static int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 1620278;

	t11 = (x45-(x46<(x47<=x48)));

	if (t11 != 57) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -2659743;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile int32_t t12 = 260730265;

	t12 = (x49-(x50<(x51<=x52)));

	if (t12 != -2659744) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	volatile uint16_t x54 = 3419U;
	static int8_t x56 = INT8_MAX;

	t13 = (x53-(x54<(x55<=x56)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 126771U;
	static int8_t x58 = -11;
	volatile int64_t x59 = 212352LL;
	volatile uint64_t x60 = 94330069971777325LLU;
	volatile uint32_t t14 = 421295972U;

	t14 = (x57-(x58<(x59<=x60)));

	if (t14 != 126770U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 161295097U;
	static uint8_t x63 = UINT8_MAX;
	static uint32_t x64 = 2530170U;
	volatile uint32_t t15 = 42674U;

	t15 = (x61-(x62<(x63<=x64)));

	if (t15 != 161295096U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MAX;
	uint8_t x68 = 0U;
	int32_t t16 = INT32_MIN;

	t16 = (x65-(x66<(x67<=x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -182030635726244173LL;
	volatile uint64_t x70 = UINT64_MAX;
	uint32_t x72 = 521429065U;
	int64_t t17 = -818398981LL;

	t17 = (x69-(x70<(x71<=x72)));

	if (t17 != -182030635726244173LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	uint32_t x75 = 1961U;
	static int64_t x76 = INT64_MAX;
	static int32_t t18 = 7606;

	t18 = (x73-(x74<(x75<=x76)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 1118U;
	int16_t x78 = 1;
	int32_t x79 = -5664568;
	uint16_t x80 = 172U;
	uint32_t t19 = 343U;

	t19 = (x77-(x78<(x79<=x80)));

	if (t19 != 1118U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 58127119U;
	static volatile int32_t x82 = -7903827;
	volatile int64_t x83 = INT64_MIN;
	volatile int64_t x84 = INT64_MAX;
	volatile uint32_t t20 = 1577459U;

	t20 = (x81-(x82<(x83<=x84)));

	if (t20 != 58127118U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	static volatile int32_t x86 = 7108795;
	int32_t x87 = INT32_MIN;
	int8_t x88 = 22;
	volatile int32_t t21 = 72;

	t21 = (x85-(x86<(x87<=x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile uint8_t x90 = UINT8_MAX;
	uint64_t x91 = 8374875738606LLU;
	static int32_t x92 = -2409;
	int64_t t22 = INT64_MIN;

	t22 = (x89-(x90<(x91<=x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = 1069U;
	static int64_t x95 = -504701LL;
	uint64_t x96 = 113652213LLU;
	int32_t t23 = INT32_MAX;

	t23 = (x93-(x94<(x95<=x96)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = 674U;
	static int64_t x98 = INT64_MIN;
	uint16_t x99 = 197U;
	uint64_t x100 = UINT64_MAX;
	int32_t t24 = -23405;

	t24 = (x97-(x98<(x99<=x100)));

	if (t24 != 673) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1044LL;
	int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;
	static int16_t x104 = -1386;
	volatile int64_t t25 = 4509154134LL;

	t25 = (x101-(x102<(x103<=x104)));

	if (t25 != -1044LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 3620U;
	volatile int64_t x106 = INT64_MAX;
	int32_t x107 = 484947;
	int8_t x108 = -4;
	int32_t t26 = 16142;

	t26 = (x105-(x106<(x107<=x108)));

	if (t26 != 3620) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x111 = -13326252262456LL;
	uint32_t x112 = 707881U;
	int32_t t27 = 2;

	t27 = (x109-(x110<(x111<=x112)));

	if (t27 != -129) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static uint32_t x114 = UINT32_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x113-(x114<(x115<=x116)));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MAX;
	static uint16_t x119 = UINT16_MAX;
	static uint64_t x120 = 1815161LLU;

	t29 = (x117-(x118<(x119<=x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 31989LL;
	int8_t x122 = INT8_MAX;
	int8_t x123 = -1;
	int64_t t30 = -812527152880458279LL;

	t30 = (x121-(x122<(x123<=x124)));

	if (t30 != 31989LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x125 = 23357U;
	volatile int32_t x126 = 355451350;
	int64_t x127 = 3882045821192LL;
	int8_t x128 = 1;
	volatile uint32_t t31 = 1293448286U;

	t31 = (x125-(x126<(x127<=x128)));

	if (t31 != 23357U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 1;
	volatile int32_t x130 = INT32_MIN;
	volatile int64_t x131 = -8LL;
	volatile int32_t t32 = -690338;

	t32 = (x129-(x130<(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -3886061999429154LL;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;

	t33 = (x133-(x134<(x135<=x136)));

	if (t33 != -3886061999429154LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	int16_t x140 = -119;
	volatile int32_t t34 = 2;

	t34 = (x137-(x138<(x139<=x140)));

	if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	volatile int32_t x142 = -1;
	static int8_t x143 = INT8_MIN;
	uint64_t x144 = 33LLU;
	int64_t t35 = 2070547083128382LL;

	t35 = (x141-(x142<(x143<=x144)));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -159;
	static volatile uint32_t x146 = 206U;
	int32_t x147 = 6926354;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -4;

	t36 = (x145-(x146<(x147<=x148)));

	if (t36 != -159) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x150 = INT64_MIN;
	int32_t x151 = -53;
	int8_t x152 = -1;
	int32_t t37 = 116859696;

	t37 = (x149-(x150<(x151<=x152)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x155 = 162LLU;
	static uint64_t x156 = 3646380141458832LLU;
	int32_t t38 = INT32_MIN;

	t38 = (x153-(x154<(x155<=x156)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MAX;
	int8_t x160 = -1;
	volatile int32_t t39 = 4695860;

	t39 = (x157-(x158<(x159<=x160)));

	if (t39 != 19) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	uint64_t x162 = 5645266446429LLU;
	int64_t x163 = -16844984560LL;
	int32_t x164 = -1;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x161-(x162<(x163<=x164)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	static uint64_t x167 = UINT64_MAX;
	uint16_t x168 = UINT16_MAX;

	t41 = (x165-(x166<(x167<=x168)));

	if (t41 != 44762480) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -1;

	t42 = (x169-(x170<(x171<=x172)));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 52U;
	static volatile int16_t x175 = INT16_MIN;
	int64_t x176 = -1LL;
	volatile int32_t t43 = 0;

	t43 = (x173-(x174<(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 4LL;
	int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	volatile int64_t t44 = -23349LL;

	t44 = (x177-(x178<(x179<=x180)));

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 48LL;
	int64_t x183 = -1LL;
	int16_t x184 = 4;
	int64_t t45 = -1443942071000LL;

	t45 = (x181-(x182<(x183<=x184)));

	if (t45 != 47LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 2014953U;
	int16_t x186 = -45;
	int32_t x187 = 17;
	volatile uint32_t t46 = 168U;

	t46 = (x185-(x186<(x187<=x188)));

	if (t46 != 2014952U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 158U;
	uint8_t x190 = UINT8_MAX;
	int8_t x192 = -1;
	volatile int32_t t47 = 1;

	t47 = (x189-(x190<(x191<=x192)));

	if (t47 != 158) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MAX;
	int64_t x196 = 65122031LL;
	int32_t t48 = 215274;

	t48 = (x193-(x194<(x195<=x196)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -2;
	int64_t x198 = 499358LL;
	static uint32_t x200 = 1U;
	static volatile int32_t t49 = 545;

	t49 = (x197-(x198<(x199<=x200)));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = 326955;
	volatile uint8_t x202 = UINT8_MAX;
	uint64_t x203 = 4048953472917451LLU;
	static int64_t x204 = -473504LL;
	volatile int32_t t50 = -1302;

	t50 = (x201-(x202<(x203<=x204)));

	if (t50 != 326955) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 28569262339LLU;
	int32_t x206 = INT32_MIN;
	static uint16_t x207 = 1U;
	volatile int64_t x208 = -1LL;

	t51 = (x205-(x206<(x207<=x208)));

	if (t51 != 28569262338LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 132103899LLU;
	int16_t x210 = 422;
	volatile int32_t x211 = -127284;
	static volatile uint64_t t52 = 532502048492LLU;

	t52 = (x209-(x210<(x211<=x212)));

	if (t52 != 132103899LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 11;
	int8_t x214 = INT8_MAX;
	static int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = 30710898;

	t53 = (x213-(x214<(x215<=x216)));

	if (t53 != 11) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 903;

	t54 = (x217-(x218<(x219<=x220)));

	if (t54 != 63) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -9870212627LL;
	int32_t x222 = -1;
	volatile int16_t x223 = INT16_MAX;
	int32_t x224 = INT32_MIN;
	int64_t t55 = 56299381LL;

	t55 = (x221-(x222<(x223<=x224)));

	if (t55 != -9870212628LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = -1;
	uint16_t x227 = 5340U;
	int32_t t56 = 4009663;

	t56 = (x225-(x226<(x227<=x228)));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	static uint8_t x234 = 47U;
	int64_t x235 = INT64_MIN;
	volatile uint8_t x236 = UINT8_MAX;
	static volatile int64_t t57 = INT64_MAX;

	t57 = (x233-(x234<(x235<=x236)));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MAX;
	static volatile uint64_t x240 = 194LLU;
	uint32_t t58 = UINT32_MAX;

	t58 = (x237-(x238<(x239<=x240)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = UINT32_MAX;
	static uint8_t x242 = 1U;
	uint32_t x243 = 990056998U;

	t59 = (x241-(x242<(x243<=x244)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x246 = -727799462435LL;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	static volatile uint64_t t60 = 1180610881932434LLU;

	t60 = (x245-(x246<(x247<=x248)));

	if (t60 != 8946756225556633LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	static uint16_t x250 = 6571U;
	static volatile int32_t x251 = -1;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x249-(x250<(x251<=x252)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = 401696LL;
	static volatile int16_t x254 = 100;
	static int16_t x256 = INT16_MIN;
	int64_t t62 = -227216385600LL;

	t62 = (x253-(x254<(x255<=x256)));

	if (t62 != 401696LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	int8_t x258 = -1;
	int32_t x259 = 60292;
	int8_t x260 = -1;
	volatile int32_t t63 = -1;

	t63 = (x257-(x258<(x259<=x260)));

	if (t63 != 2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	int16_t x264 = INT16_MAX;
	int32_t t64 = 23431844;

	t64 = (x261-(x262<(x263<=x264)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 14U;
	int16_t x266 = 179;
	int8_t x267 = INT8_MIN;
	int32_t t65 = 25656757;

	t65 = (x265-(x266<(x267<=x268)));

	if (t65 != 14) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MAX;
	static int8_t x270 = 32;
	volatile uint32_t x271 = 113947769U;
	int32_t x272 = INT32_MIN;
	int32_t t66 = 751;

	t66 = (x269-(x270<(x271<=x272)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 122U;
	int64_t x275 = 749955417877827833LL;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t67 = 1;

	t67 = (x273-(x274<(x275<=x276)));

	if (t67 != 122) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x278 = -61;
	volatile int8_t x279 = INT8_MIN;
	uint16_t x280 = 1972U;
	static int32_t t68 = -1;

	t68 = (x277-(x278<(x279<=x280)));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 28U;
	static uint32_t x282 = UINT32_MAX;
	uint8_t x283 = UINT8_MAX;
	int32_t t69 = -60013;

	t69 = (x281-(x282<(x283<=x284)));

	if (t69 != 28) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x285 = 320376732U;
	int64_t x286 = INT64_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	static int32_t x288 = INT32_MAX;

	t70 = (x285-(x286<(x287<=x288)));

	if (t70 != 320376731U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -1LL;
	static int16_t x290 = INT16_MIN;
	int16_t x292 = -1;
	static int64_t t71 = 5044LL;

	t71 = (x289-(x290<(x291<=x292)));

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	static int64_t x295 = INT64_MAX;
	uint32_t x296 = 22712U;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x293-(x294<(x295<=x296)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MAX;
	volatile int64_t x299 = 4066840952316LL;
	uint32_t x300 = 272762U;
	int32_t t73 = INT32_MAX;

	t73 = (x297-(x298<(x299<=x300)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 36763901LLU;
	static int32_t x302 = 1;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;
	uint64_t t74 = 403845LLU;

	t74 = (x301-(x302<(x303<=x304)));

	if (t74 != 36763901LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x306 = 504U;
	int32_t x307 = 997301453;
	uint16_t x308 = 147U;
	volatile int32_t t75 = 6804;

	t75 = (x305-(x306<(x307<=x308)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = -3;
	static int32_t x314 = INT32_MIN;
	uint32_t x315 = 445228U;
	volatile uint32_t x316 = 568U;
	int32_t t76 = -2297467;

	t76 = (x313-(x314<(x315<=x316)));

	if (t76 != -4) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = 15;
	uint64_t x318 = UINT64_MAX;
	uint64_t x319 = 6039858LLU;
	int64_t x320 = 7872045286609898LL;

	t77 = (x317-(x318<(x319<=x320)));

	if (t77 != 15) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = 3669587296LLU;
	uint8_t x322 = UINT8_MAX;
	volatile int32_t x323 = -342794;
	uint64_t t78 = 211461LLU;

	t78 = (x321-(x322<(x323<=x324)));

	if (t78 != 3669587296LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MAX;
	int32_t x327 = 85802;
	int8_t x328 = INT8_MIN;
	volatile int32_t t79 = 18;

	t79 = (x325-(x326<(x327<=x328)));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -35LL;
	int16_t x330 = -334;
	static int16_t x331 = -1;
	static int8_t x332 = 13;
	volatile int64_t t80 = 2809719001757985571LL;

	t80 = (x329-(x330<(x331<=x332)));

	if (t80 != -36LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	static volatile uint8_t x335 = UINT8_MAX;
	uint8_t x336 = UINT8_MAX;
	int32_t t81 = 1;

	t81 = (x333-(x334<(x335<=x336)));

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MAX;
	int32_t x339 = -1;
	int64_t t82 = INT64_MAX;

	t82 = (x337-(x338<(x339<=x340)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	volatile uint32_t x343 = UINT32_MAX;
	int64_t x344 = -18LL;
	int32_t t83 = 27;

	t83 = (x341-(x342<(x343<=x344)));

	if (t83 != -32769) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x346 = -168829580;
	static volatile int32_t x347 = 235336;
	uint16_t x348 = 352U;
	int32_t t84 = 4235444;

	t84 = (x345-(x346<(x347<=x348)));

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MAX;
	volatile int16_t x350 = INT16_MAX;
	static int64_t x351 = INT64_MIN;
	uint16_t x352 = 0U;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x349-(x350<(x351<=x352)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x354 = -1;
	static volatile uint32_t x355 = UINT32_MAX;

	t86 = (x353-(x354<(x355<=x356)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = 0;
	static uint64_t x358 = 17935082740004474LLU;
	uint8_t x359 = 112U;
	volatile int8_t x360 = INT8_MIN;

	t87 = (x357-(x358<(x359<=x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = INT32_MAX;
	volatile int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t88 = 1222565;

	t88 = (x361-(x362<(x363<=x364)));

	if (t88 != 2147483646) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 3350554345LLU;
	static int32_t x366 = -431465;
	uint64_t x367 = 536143686520977688LLU;
	int32_t x368 = -1003881;

	t89 = (x365-(x366<(x367<=x368)));

	if (t89 != 3350554344LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = -4;
	uint32_t x370 = UINT32_MAX;
	uint32_t x371 = 143639U;
	int64_t x372 = -319828184836878459LL;
	int32_t t90 = 44;

	t90 = (x369-(x370<(x371<=x372)));

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 0;
	int8_t x374 = -1;
	uint8_t x375 = 14U;
	static volatile int32_t t91 = 825703;

	t91 = (x373-(x374<(x375<=x376)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -6392651;
	static int16_t x378 = -1;
	volatile int8_t x379 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;
	int32_t t92 = 225292710;

	t92 = (x377-(x378<(x379<=x380)));

	if (t92 != -6392652) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = INT32_MIN;
	volatile uint16_t x382 = UINT16_MAX;
	volatile int64_t x383 = -1LL;
	int64_t x384 = -39396720420560920LL;

	t93 = (x381-(x382<(x383<=x384)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = -8115394;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MAX;
	volatile int32_t t94 = -42683;

	t94 = (x385-(x386<(x387<=x388)));

	if (t94 != -8115395) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 118U;
	int64_t t95 = INT64_MAX;

	t95 = (x389-(x390<(x391<=x392)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = 17;
	uint64_t x394 = 1818029118597LLU;
	static uint8_t x395 = 29U;
	int8_t x396 = -1;
	int32_t t96 = -31;

	t96 = (x393-(x394<(x395<=x396)));

	if (t96 != 17) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 9861597553524889LLU;
	int32_t t97 = INT32_MIN;

	t97 = (x397-(x398<(x399<=x400)));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	volatile int64_t x402 = INT64_MAX;
	uint32_t x404 = 1282328U;
	static int64_t t98 = INT64_MIN;

	t98 = (x401-(x402<(x403<=x404)));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x405 = INT64_MAX;
	volatile int64_t x406 = INT64_MAX;
	static uint64_t x407 = 72LLU;
	uint8_t x408 = UINT8_MAX;
	static int64_t t99 = INT64_MAX;

	t99 = (x405-(x406<(x407<=x408)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

