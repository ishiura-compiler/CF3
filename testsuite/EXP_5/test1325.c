#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = -1;
int16_t x23 = INT16_MIN;
uint8_t x29 = UINT8_MAX;
static int64_t t7 = -2482294205LL;
uint8_t x39 = 13U;
int64_t x40 = 1LL;
volatile int64_t t9 = -8140639LL;
volatile uint8_t x48 = 0U;
int16_t x50 = -105;
int16_t x56 = -9;
volatile uint32_t t16 = 1470567U;
volatile int32_t t17 = 1;
int8_t x76 = 14;
int32_t t18 = 15075;
uint64_t x86 = UINT64_MAX;
volatile uint64_t x89 = 0LLU;
volatile int32_t t23 = INT32_MIN;
uint16_t x98 = UINT16_MAX;
int8_t x103 = INT8_MAX;
int64_t x112 = INT64_MIN;
int64_t t27 = 101526669992746378LL;
static volatile uint64_t x114 = 3752LLU;
volatile uint32_t t28 = 364642172U;
int8_t x121 = INT8_MAX;
int64_t x123 = INT64_MAX;
int32_t x131 = INT32_MIN;
volatile uint64_t x138 = UINT64_MAX;
static volatile uint64_t t34 = 124989910046340LLU;
volatile uint16_t x142 = UINT16_MAX;
static uint8_t x143 = 38U;
uint8_t x153 = 13U;
static int32_t t38 = 0;
int8_t x159 = INT8_MAX;
volatile int32_t t41 = -191702905;
int8_t x169 = -1;
int64_t x170 = 128316994500262590LL;
static int64_t x173 = INT64_MIN;
static int64_t x174 = -13249655LL;
uint8_t x181 = UINT8_MAX;
int32_t x186 = INT32_MIN;
int32_t t46 = 398947219;
int8_t x189 = -1;
int8_t x191 = INT8_MIN;
static volatile int64_t x192 = INT64_MIN;
int64_t x201 = 54101076LL;
uint16_t x202 = 6951U;
static volatile int64_t x203 = INT64_MIN;
int16_t x207 = INT16_MIN;
uint8_t x214 = UINT8_MAX;
int32_t t53 = 17067;
uint64_t x218 = 3LLU;
int8_t x229 = -1;
uint8_t x233 = 0U;
volatile uint32_t t58 = 44342771U;
volatile int16_t x239 = INT16_MAX;
int32_t t61 = 2896054;
volatile int16_t x249 = INT16_MIN;
int8_t x250 = -1;
int64_t t65 = 1979680LL;
int32_t x269 = -1;
int32_t x271 = -2252937;
uint32_t x278 = UINT32_MAX;
volatile int64_t t69 = 41597081506627570LL;
static int64_t x282 = INT64_MIN;
uint32_t x288 = 24U;
int16_t x290 = -1;
int16_t x292 = INT16_MIN;
int16_t x293 = -1319;
volatile int32_t x295 = -35986257;
static int32_t t76 = INT32_MIN;
int8_t x309 = -1;
static uint32_t x314 = 2280647U;
int32_t x319 = INT32_MIN;
int8_t x330 = INT8_MAX;
static volatile int64_t x333 = INT64_MIN;
int64_t x335 = -26874468471480LL;
static uint16_t x336 = UINT16_MAX;
int16_t x343 = 12;
int16_t x347 = 4;
uint64_t x358 = 1197LLU;
static int8_t x360 = 59;
int32_t x362 = -1;
int32_t t90 = -103;
static volatile int32_t x374 = INT32_MIN;
static int8_t x375 = INT8_MAX;
int32_t x377 = -1;
volatile uint64_t x380 = 19765406997201LLU;
volatile uint64_t t94 = UINT64_MAX;
int32_t t95 = -3;
uint16_t x386 = 1U;
int16_t x387 = -1;
int32_t x389 = INT32_MIN;
static int32_t x392 = INT32_MIN;
int32_t t97 = INT32_MIN;
int16_t x396 = INT16_MIN;
volatile int32_t x397 = -1;
volatile int8_t x400 = INT8_MIN;


void f0(void) {
	int32_t x1 = -1;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = -1LL;
	uint32_t x4 = 1233U;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (x1|((x2==x3)&x4));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	int64_t x8 = 13300LL;
	int64_t t1 = 129386771164LL;

	t1 = (x5|((x6==x7)&x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = -3;
	int32_t x11 = 1327147;
	static int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 325858374;

	t2 = (x9|((x10==x11)&x12));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile uint8_t x14 = UINT8_MAX;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MAX;
	volatile int64_t t3 = 5341431719842070LL;

	t3 = (x13|((x14==x15)&x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = -115983721;
	int16_t x19 = -91;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 19018797004LLU;

	t4 = (x17|((x18==x19)&x20));

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1008425LL;
	uint16_t x22 = UINT16_MAX;
	static uint16_t x24 = 4U;
	int64_t t5 = 48638905726LL;

	t5 = (x21|((x22==x23)&x24));

	if (t5 != -1008425LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	uint32_t x26 = 5369728U;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -2387;

	t6 = (x25|((x26==x27)&x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 1U;
	volatile int8_t x31 = -1;
	int64_t x32 = INT64_MIN;

	t7 = (x29|((x30==x31)&x32));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 7;
	uint16_t x34 = 87U;
	uint16_t x35 = 61U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -758;

	t8 = (x33|((x34==x35)&x36));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -310025623146259217LL;
	volatile uint16_t x38 = 5U;

	t9 = (x37|((x38==x39)&x40));

	if (t9 != -310025623146259217LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -3;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 136833384LLU;

	t10 = (x41|((x42==x43)&x44));

	if (t10 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	static volatile int32_t t11 = 556505434;

	t11 = (x45|((x46==x47)&x48));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	volatile uint32_t x52 = 279810U;
	uint32_t t12 = 1612457211U;

	t12 = (x49|((x50==x51)&x52));

	if (t12 != 65535U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	int64_t x54 = -2LL;
	int32_t x55 = INT32_MAX;
	int32_t t13 = -25372608;

	t13 = (x53|((x54==x55)&x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -27611985LL;
	static int8_t x58 = INT8_MAX;
	volatile int16_t x59 = INT16_MIN;
	uint32_t x60 = 1U;
	volatile int64_t t14 = 2LL;

	t14 = (x57|((x58==x59)&x60));

	if (t14 != -27611985LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	uint8_t x62 = 4U;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	int32_t t15 = -1;

	t15 = (x61|((x62==x63)&x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = INT32_MIN;
	uint8_t x66 = UINT8_MAX;
	uint32_t x67 = 16687226U;
	uint32_t x68 = 103891901U;

	t16 = (x65|((x66==x67)&x68));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -381179932;
	int64_t x70 = -2750635LL;
	int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = 8916U;

	t17 = (x69|((x70==x71)&x72));

	if (t17 != -381179932) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -2905;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = 1348800245U;

	t18 = (x73|((x74==x75)&x76));

	if (t18 != -2905) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	int16_t x78 = 125;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t19 = 5;

	t19 = (x77|((x78==x79)&x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -33801632909989248LL;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;
	static int16_t x84 = -2380;
	int64_t t20 = -136961LL;

	t20 = (x81|((x82==x83)&x84));

	if (t20 != -33801632909989248LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t21 = -855461780LL;

	t21 = (x85|((x86==x87)&x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 453;
	static uint64_t x91 = 253693LLU;
	static int64_t x92 = INT64_MIN;
	uint64_t t22 = 349621972606074740LLU;

	t22 = (x89|((x90==x91)&x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	volatile uint32_t x95 = UINT32_MAX;
	static int16_t x96 = INT16_MIN;

	t23 = (x93|((x94==x95)&x96));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x99 = -1;
	static int16_t x100 = -7;
	int32_t t24 = -1422956;

	t24 = (x97|((x98==x99)&x100));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 2190U;
	static volatile int32_t x102 = -1;
	int64_t x104 = INT64_MIN;
	static int64_t t25 = 120524520946678LL;

	t25 = (x101|((x102==x103)&x104));

	if (t25 != 2190LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x105 = UINT8_MAX;
	int8_t x106 = 1;
	volatile int64_t x107 = -13309LL;
	static uint32_t x108 = 225652U;
	volatile uint32_t t26 = 151162696U;

	t26 = (x105|((x106==x107)&x108));

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 38U;
	int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;

	t27 = (x109|((x110==x111)&x112));

	if (t27 != 38LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	static int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;

	t28 = (x113|((x114==x115)&x116));

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	uint32_t x118 = UINT32_MAX;
	static volatile int16_t x119 = INT16_MIN;
	static uint16_t x120 = 14U;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x117|((x118==x119)&x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	volatile int8_t x124 = -1;
	int32_t t30 = 777;

	t30 = (x121|((x122==x123)&x124));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	uint16_t x126 = 2U;
	int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t31 = 15916;

	t31 = (x125|((x126==x127)&x128));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 30;
	uint16_t x130 = 2U;
	uint64_t x132 = 23018LLU;
	volatile uint64_t t32 = 74721091661LLU;

	t32 = (x129|((x130==x131)&x132));

	if (t32 != 30LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -1LL;
	int8_t x134 = -1;
	int8_t x135 = -24;
	int32_t x136 = -1;
	static int64_t t33 = 1358409646149405340LL;

	t33 = (x133|((x134==x135)&x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 938372LL;
	int16_t x139 = -8019;
	uint64_t x140 = UINT64_MAX;

	t34 = (x137|((x138==x139)&x140));

	if (t34 != 938372LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = UINT64_MAX;
	volatile uint32_t x144 = 112528654U;
	uint64_t t35 = UINT64_MAX;

	t35 = (x141|((x142==x143)&x144));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	static int8_t x146 = -1;
	static int32_t x147 = -1;
	volatile int8_t x148 = INT8_MIN;
	static int32_t t36 = 266377;

	t36 = (x145|((x146==x147)&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int16_t x152 = 1;
	static volatile uint64_t t37 = UINT64_MAX;

	t37 = (x149|((x150==x151)&x152));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -27;
	int8_t x155 = 0;
	static uint16_t x156 = 2U;

	t38 = (x153|((x154==x155)&x156));

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 1796268;
	int8_t x158 = -10;
	volatile int16_t x160 = INT16_MAX;
	volatile int32_t t39 = 35;

	t39 = (x157|((x158==x159)&x160));

	if (t39 != 1796268) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -12703;
	int16_t x162 = INT16_MAX;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	volatile int32_t t40 = 1;

	t40 = (x161|((x162==x163)&x164));

	if (t40 != -12703) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	static int8_t x167 = -1;
	uint16_t x168 = 1U;

	t41 = (x165|((x166==x167)&x168));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 21151U;
	int32_t t42 = -1;

	t42 = (x169|((x170==x171)&x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x175 = INT64_MIN;
	static volatile int8_t x176 = INT8_MIN;
	int64_t t43 = INT64_MIN;

	t43 = (x173|((x174==x175)&x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	volatile int16_t x178 = 3324;
	int16_t x179 = INT16_MAX;
	uint8_t x180 = 5U;
	int32_t t44 = 191455362;

	t44 = (x177|((x178==x179)&x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 52937726157LLU;
	static uint64_t x184 = 230822101LLU;
	uint64_t t45 = 110LLU;

	t45 = (x181|((x182==x183)&x184));

	if (t45 != 255LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static int8_t x187 = -1;
	int16_t x188 = INT16_MIN;

	t46 = (x185|((x186==x187)&x188));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	volatile int64_t t47 = 101566LL;

	t47 = (x189|((x190==x191)&x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint16_t x194 = 6U;
	static int8_t x195 = INT8_MIN;
	uint32_t x196 = 992U;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x193|((x194==x195)&x196));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 71U;
	static uint8_t x198 = UINT8_MAX;
	volatile int64_t x199 = -140LL;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t49 = 10LLU;

	t49 = (x197|((x198==x199)&x200));

	if (t49 != 71LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x204 = INT8_MIN;
	int64_t t50 = 6LL;

	t50 = (x201|((x202==x203)&x204));

	if (t50 != 54101076LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = -841245;
	int16_t x206 = -1;
	volatile uint8_t x208 = 1U;
	int32_t t51 = -3746;

	t51 = (x205|((x206==x207)&x208));

	if (t51 != -841245) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	volatile int64_t x211 = 16041604183LL;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -508424;

	t52 = (x209|((x210==x211)&x212));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;

	t53 = (x213|((x214==x215)&x216));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int16_t x219 = INT16_MAX;
	volatile uint8_t x220 = 9U;
	int64_t t54 = INT64_MIN;

	t54 = (x217|((x218==x219)&x220));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = INT64_MIN;
	uint16_t x222 = 2478U;
	int16_t x223 = INT16_MAX;
	int16_t x224 = -1;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x221|((x222==x223)&x224));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	int32_t x226 = -1;
	static int64_t x227 = 3730036897289231379LL;
	volatile int32_t x228 = -1;
	volatile int32_t t56 = -38106097;

	t56 = (x225|((x226==x227)&x228));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x230 = UINT8_MAX;
	volatile int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = 0;

	t57 = (x229|((x230==x231)&x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = -1;
	volatile int8_t x235 = INT8_MAX;
	uint32_t x236 = UINT32_MAX;

	t58 = (x233|((x234==x235)&x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	int64_t x238 = INT64_MIN;
	int8_t x240 = -1;
	volatile int32_t t59 = 40773;

	t59 = (x237|((x238==x239)&x240));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = -18;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	static volatile int32_t t60 = 1;

	t60 = (x241|((x242==x243)&x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 1U;
	static uint32_t x246 = UINT32_MAX;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;

	t61 = (x245|((x246==x247)&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x251 = UINT64_MAX;
	static uint32_t x252 = 246145U;
	uint32_t t62 = 75814367U;

	t62 = (x249|((x250==x251)&x252));

	if (t62 != 4294934529U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 111334U;
	int16_t x254 = INT16_MAX;
	static uint16_t x255 = 35U;
	static int32_t x256 = -1;
	uint32_t t63 = 41779685U;

	t63 = (x253|((x254==x255)&x256));

	if (t63 != 111334U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	static uint64_t x260 = 459637029915LLU;
	uint64_t t64 = 13135718130922LLU;

	t64 = (x257|((x258==x259)&x260));

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 0U;
	uint8_t x262 = 61U;
	int64_t x263 = INT64_MAX;
	static int64_t x264 = INT64_MAX;

	t65 = (x261|((x262==x263)&x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 2U;
	int64_t x266 = INT64_MAX;
	static uint8_t x267 = 1U;
	static int16_t x268 = INT16_MIN;
	volatile uint32_t t66 = 106659U;

	t66 = (x265|((x266==x267)&x268));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 3U;
	static int16_t x272 = INT16_MIN;
	int32_t t67 = -3;

	t67 = (x269|((x270==x271)&x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = -1;
	int64_t x275 = -86LL;
	uint32_t x276 = 450971648U;
	volatile uint32_t t68 = 454658U;

	t68 = (x273|((x274==x275)&x276));

	if (t68 != 127U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	uint8_t x279 = 31U;
	uint8_t x280 = 7U;

	t69 = (x277|((x278==x279)&x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	static int32_t x283 = INT32_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -12867;

	t70 = (x281|((x282==x283)&x284));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 7385U;
	uint64_t x286 = 200664853678230615LLU;
	static uint8_t x287 = 0U;
	uint32_t t71 = 38100U;

	t71 = (x285|((x286==x287)&x288));

	if (t71 != 7385U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int32_t x291 = -54;
	volatile int64_t t72 = INT64_MAX;

	t72 = (x289|((x290==x291)&x292));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x294 = -1;
	uint8_t x296 = 59U;
	static int32_t t73 = -41;

	t73 = (x293|((x294==x295)&x296));

	if (t73 != -1319) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -1LL;
	uint64_t x298 = 13060581857824649LLU;
	volatile int8_t x299 = INT8_MIN;
	uint64_t x300 = 7053575640206LLU;
	uint64_t t74 = UINT64_MAX;

	t74 = (x297|((x298==x299)&x300));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 145923;

	t75 = (x301|((x302==x303)&x304));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	int8_t x307 = -2;
	int32_t x308 = INT32_MAX;

	t76 = (x305|((x306==x307)&x308));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 5U;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = (x309|((x310==x311)&x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = -1;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t78 = -22983479;

	t78 = (x313|((x314==x315)&x316));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = INT32_MIN;
	volatile int8_t x318 = INT8_MIN;
	volatile int64_t x320 = -413187665367LL;
	static volatile int64_t t79 = 0LL;

	t79 = (x317|((x318==x319)&x320));

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -86;
	volatile uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 66U;
	uint16_t x324 = 188U;
	static int32_t t80 = -1962;

	t80 = (x321|((x322==x323)&x324));

	if (t80 != -86) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	volatile int32_t x326 = -429123;
	int32_t x327 = -1243619;
	int16_t x328 = 4;
	static volatile int32_t t81 = -44;

	t81 = (x325|((x326==x327)&x328));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 14;
	uint32_t x331 = 109487525U;
	uint16_t x332 = 62U;
	int32_t t82 = 91173997;

	t82 = (x329|((x330==x331)&x332));

	if (t82 != 14) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	static int64_t t83 = INT64_MIN;

	t83 = (x333|((x334==x335)&x336));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	uint16_t x338 = 552U;
	static int32_t x339 = INT32_MIN;
	int8_t x340 = -1;
	volatile int32_t t84 = 848801;

	t84 = (x337|((x338==x339)&x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 6142654U;
	static volatile int8_t x342 = 2;
	int16_t x344 = INT16_MIN;
	volatile uint32_t t85 = 16008866U;

	t85 = (x341|((x342==x343)&x344));

	if (t85 != 6142654U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = UINT64_MAX;
	volatile int32_t x346 = INT32_MIN;
	volatile int64_t x348 = -1LL;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x345|((x346==x347)&x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	uint16_t x350 = 4U;
	int64_t x351 = 555944350LL;
	uint64_t x352 = UINT64_MAX;
	uint64_t t87 = 111LLU;

	t87 = (x349|((x350==x351)&x352));

	if (t87 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	static volatile int8_t x354 = INT8_MIN;
	volatile int64_t x355 = -1LL;
	static volatile uint32_t x356 = 1U;
	volatile uint32_t t88 = 125U;

	t88 = (x353|((x354==x355)&x356));

	if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	int32_t x359 = -5265167;
	int32_t t89 = 1733888;

	t89 = (x357|((x358==x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x361 = INT16_MIN;
	int8_t x363 = 0;
	int32_t x364 = -3488181;

	t90 = (x361|((x362==x363)&x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	int16_t x366 = -1;
	int16_t x367 = INT16_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -302;

	t91 = (x365|((x366==x367)&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	volatile uint32_t x371 = 773960U;
	int64_t x372 = -15310582763LL;
	int64_t t92 = INT64_MIN;

	t92 = (x369|((x370==x371)&x372));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x376 = INT32_MIN;
	uint32_t t93 = UINT32_MAX;

	t93 = (x373|((x374==x375)&x376));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = -1;
	int8_t x379 = -1;

	t94 = (x377|((x378==x379)&x380));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	volatile int64_t x382 = 102LL;
	int64_t x383 = INT64_MAX;
	static uint16_t x384 = 1U;

	t95 = (x381|((x382==x383)&x384));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x385 = 3U;
	static int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -192LL;

	t96 = (x385|((x386==x387)&x388));

	if (t96 != 3LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x390 = -2502;
	uint16_t x391 = 13U;

	t97 = (x389|((x390==x391)&x392));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = -1;
	uint16_t x395 = 12954U;
	int32_t t98 = -7839040;

	t98 = (x393|((x394==x395)&x396));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = 13;
	volatile uint16_t x399 = 184U;
	int32_t t99 = 163415069;

	t99 = (x397|((x398==x399)&x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

