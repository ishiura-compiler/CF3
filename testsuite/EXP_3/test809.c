#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 133979LLU;
uint32_t x4 = 67U;
static volatile int32_t x8 = INT32_MAX;
int32_t x9 = INT32_MAX;
static int16_t x11 = -24;
uint32_t x12 = 1551426700U;
int16_t x17 = -1;
int8_t x20 = INT8_MAX;
int32_t x25 = INT32_MIN;
uint32_t x28 = UINT32_MAX;
volatile int16_t x32 = 254;
int64_t t8 = -115981907761463LL;
static int8_t x37 = INT8_MAX;
static int64_t x44 = -1LL;
volatile uint8_t x60 = UINT8_MAX;
uint64_t t14 = 1425028918112681576LLU;
uint32_t x65 = 132U;
uint64_t t15 = 5025LLU;
uint64_t t17 = 224111304LLU;
int64_t x86 = -1LL;
static int16_t x89 = INT16_MAX;
static volatile int64_t x91 = 3453633848516LL;
static int64_t x93 = 8322799445LL;
int32_t x105 = INT32_MAX;
volatile uint16_t x120 = UINT16_MAX;
int16_t x128 = -2050;
int16_t x131 = -7674;
uint64_t x142 = UINT64_MAX;
int16_t x145 = INT16_MIN;
uint64_t x153 = 17495291630578LLU;
int64_t x155 = INT64_MIN;
int32_t x158 = 0;
volatile uint32_t t36 = 130117110U;
volatile uint32_t x166 = UINT32_MAX;
volatile uint64_t t38 = 7589412066173359324LLU;
volatile int16_t x169 = -1;
int16_t x171 = 0;
int64_t x172 = -1LL;
int64_t t39 = -4411736LL;
uint64_t x173 = 25999810974523LLU;
uint64_t t40 = 1030684900626LLU;
volatile int32_t x181 = INT32_MIN;
static uint16_t x188 = UINT16_MAX;
int32_t x191 = -3;
uint8_t x199 = 1U;
uint16_t x203 = UINT16_MAX;
int32_t x225 = 0;
static int8_t x245 = INT8_MAX;
static uint64_t x250 = 745847628075634799LLU;
int64_t x253 = -1LL;
int8_t x262 = 10;
int16_t x265 = -9758;
int16_t x276 = -1;
int32_t x277 = -1;
static int32_t x278 = -1;
uint8_t x281 = UINT8_MAX;
int64_t x289 = INT64_MAX;
int16_t x292 = INT16_MAX;
static int64_t x297 = INT64_MIN;
uint32_t x299 = UINT32_MAX;
int64_t x301 = INT64_MIN;
int8_t x304 = -1;
static volatile int64_t t67 = 581638560707342LL;
volatile uint64_t t68 = 7805LLU;
int64_t x315 = INT64_MIN;
volatile int32_t x320 = 751312423;
int16_t x321 = -3;
int16_t x332 = -4483;
int32_t x335 = INT32_MIN;
int32_t x340 = -1;
int32_t x341 = -22327;
int64_t x346 = 60401109LL;
int16_t x352 = 2961;
uint64_t x363 = 8259517606193LLU;
volatile uint64_t t82 = 242486LLU;
int16_t x369 = -3422;
volatile uint64_t t84 = 1449LLU;
static volatile uint64_t x380 = UINT64_MAX;
uint64_t t86 = 1347472192LLU;
int16_t x383 = -93;
volatile int32_t x384 = INT32_MIN;
volatile int32_t x410 = -1;
uint16_t x417 = 3459U;
uint32_t t94 = 223722865U;
volatile int16_t x425 = 11036;
volatile int32_t t95 = -15378769;
int16_t x438 = -1829;
int32_t t98 = 127666555;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MIN;
	uint64_t t0 = 54522543LLU;

	t0 = ((x1&x2)*(x3%x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -999;
	static int16_t x6 = 5;
	static volatile uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = -2074;

	t1 = ((x5&x6)*(x7%x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	volatile int64_t t2 = -180605807LL;

	t2 = ((x9&x10)*(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 251382471LLU;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 346U;
	uint8_t x16 = UINT8_MAX;
	volatile uint64_t t3 = 3662873495419298LLU;

	t3 = ((x13&x14)*(x15%x16));

	if (t3 != 22875798400LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x18 = UINT64_MAX;
	int32_t x19 = -1;
	static uint64_t t4 = 932056060836LLU;

	t4 = ((x17&x18)*(x19%x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	uint32_t x22 = UINT32_MAX;
	uint32_t x23 = 3U;
	volatile uint64_t x24 = 1LLU;
	uint64_t t5 = 178958384713LLU;

	t5 = ((x21&x22)*(x23%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 6U;
	int16_t x27 = INT16_MAX;
	static uint32_t t6 = 76U;

	t6 = ((x25&x26)*(x27%x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	int8_t x30 = -12;
	uint64_t x31 = UINT64_MAX;
	volatile uint64_t t7 = 586287139058937LLU;

	t7 = ((x29&x30)*(x31%x32));

	if (t7 != 116LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static int16_t x34 = INT16_MIN;
	static volatile int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MAX;

	t8 = ((x33&x34)*(x35%x36));

	if (t8 != -70368744177664LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = 1212U;
	static uint32_t x39 = 30212002U;
	int8_t x40 = INT8_MIN;
	volatile uint32_t t9 = 29U;

	t9 = ((x37&x38)*(x39%x40));

	if (t9 != 1812720120U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	int8_t x42 = 59;
	volatile int16_t x43 = -1;
	int64_t t10 = -219480024956LL;

	t10 = ((x41&x42)*(x43%x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = -1;
	int32_t x47 = 7850367;
	uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t11 = 28993520367LLU;

	t11 = ((x45&x46)*(x47%x48));

	if (t11 != 18446744073701701249LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MIN;
	int64_t x51 = -1LL;
	static int8_t x52 = INT8_MIN;
	static int64_t t12 = 907828510698LL;

	t12 = ((x49&x50)*(x51%x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -764283030257LL;
	uint32_t x56 = 23934052U;
	static int64_t t13 = 3680128219679634LL;

	t13 = ((x53&x54)*(x55%x56));

	if (t13 != 44843309008420864LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 4686;
	uint64_t x58 = 2142887863LLU;
	static int16_t x59 = INT16_MIN;

	t14 = ((x57&x58)*(x59%x60));

	if (t14 != 18446744073708961024LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 96183LLU;

	t15 = ((x65&x66)*(x67%x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 1;
	volatile int64_t x70 = -1901694296LL;
	uint32_t x71 = 105526443U;
	int64_t x72 = -2LL;
	volatile int64_t t16 = 15551119538394817LL;

	t16 = ((x69&x70)*(x71%x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MAX;
	uint64_t x74 = 3018660290535358525LLU;
	int8_t x75 = -1;
	static volatile uint16_t x76 = 686U;

	t17 = ((x73&x74)*(x75%x76));

	if (t17 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = 2;
	static uint64_t x78 = UINT64_MAX;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = -88;
	uint64_t t18 = 13922222LLU;

	t18 = ((x77&x78)*(x79%x80));

	if (t18 != 126LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 6U;
	int32_t x82 = -1;
	uint64_t x83 = 114682064LLU;
	int8_t x84 = -1;
	static uint64_t t19 = 8677LLU;

	t19 = ((x81&x82)*(x83%x84));

	if (t19 != 688092384LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = INT8_MAX;
	int8_t x87 = INT8_MAX;
	static int16_t x88 = INT16_MAX;
	static volatile int64_t t20 = -635486LL;

	t20 = ((x85&x86)*(x87%x88));

	if (t20 != 16129LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = UINT8_MAX;
	int16_t x92 = -1;
	int64_t t21 = 1732286LL;

	t21 = ((x89&x90)*(x91%x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = -1;
	int16_t x95 = -1;
	int8_t x96 = -1;
	volatile int64_t t22 = -17LL;

	t22 = ((x93&x94)*(x95%x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = 1;
	static int64_t x98 = INT64_MAX;
	static int8_t x99 = 10;
	uint64_t x100 = UINT64_MAX;
	uint64_t t23 = 6924865LLU;

	t23 = ((x97&x98)*(x99%x100));

	if (t23 != 10LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	volatile uint16_t x102 = 144U;
	static uint32_t x103 = UINT32_MAX;
	volatile int8_t x104 = -1;
	uint32_t t24 = 0U;

	t24 = ((x101&x102)*(x103%x104));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = INT8_MIN;
	uint16_t x107 = 2792U;
	int64_t x108 = -2947268077346641300LL;
	int64_t t25 = 0LL;

	t25 = ((x105&x106)*(x107%x108));

	if (t25 != 5995773987840LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = 0;
	volatile int8_t x112 = INT8_MIN;
	uint32_t t26 = 946906203U;

	t26 = ((x109&x110)*(x111%x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	uint8_t x118 = 3U;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int32_t t27 = -208559;

	t27 = ((x117&x118)*(x119%x120));

	if (t27 != 765) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -1;
	static int8_t x123 = 17;
	volatile int64_t x124 = -224LL;
	volatile int64_t t28 = -90759LL;

	t28 = ((x121&x122)*(x123%x124));

	if (t28 != -2176LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = 7U;
	uint16_t x126 = 0U;
	uint32_t x127 = 51U;
	volatile uint32_t t29 = 2U;

	t29 = ((x125&x126)*(x127%x128));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = 65755478245496LLU;
	uint64_t x132 = 43602869LLU;
	uint64_t t30 = 54LLU;

	t30 = ((x129&x130)*(x131%x132));

	if (t30 != 10742323561089466368LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 22U;
	int32_t x135 = -1;
	volatile uint8_t x136 = 15U;
	int32_t t31 = -28408;

	t31 = ((x133&x134)*(x135%x136));

	if (t31 != -22) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = 305802;
	static int32_t x138 = INT32_MIN;
	static int64_t x139 = 5703723LL;
	static volatile uint16_t x140 = 27U;
	int64_t t32 = -28809065LL;

	t32 = ((x137&x138)*(x139%x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MAX;
	int8_t x143 = 1;
	static int16_t x144 = INT16_MIN;
	uint64_t t33 = 17810LLU;

	t33 = ((x141&x142)*(x143%x144));

	if (t33 != 32767LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = -16;
	int32_t x147 = -1;
	uint64_t x148 = 34941LLU;
	uint64_t t34 = 408LLU;

	t34 = ((x145&x146)*(x147%x148));

	if (t34 != 18446744072994291712LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x154 = 2990;
	uint32_t x156 = 27464U;
	uint64_t t35 = 227LLU;

	t35 = ((x153&x154)*(x155%x156));

	if (t35 != 18446744073697684816LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 11051U;
	int32_t x159 = -855621017;
	int32_t x160 = INT32_MAX;

	t36 = ((x157&x158)*(x159%x160));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 49570LLU;
	volatile int64_t x162 = INT64_MIN;
	int64_t x163 = -172442071425274LL;
	int32_t x164 = INT32_MIN;
	uint64_t t37 = 6007427016415LLU;

	t37 = ((x161&x162)*(x163%x164));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	static uint64_t x167 = UINT64_MAX;
	volatile int32_t x168 = 271;

	t38 = ((x165&x166)*(x167%x168));

	if (t38 != 1133862715392LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = 11;

	t39 = ((x169&x170)*(x171%x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x174 = 21U;
	static int16_t x175 = INT16_MAX;
	uint16_t x176 = 31956U;

	t40 = ((x173&x174)*(x175%x176));

	if (t40 != 13787LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	volatile int64_t x178 = -1LL;
	static int16_t x179 = -101;
	uint8_t x180 = 11U;
	volatile int64_t t41 = 1397072321387LL;

	t41 = ((x177&x178)*(x179%x180));

	if (t41 != 65536LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x182 = 2028U;
	volatile int8_t x183 = 1;
	uint32_t x184 = UINT32_MAX;
	uint32_t t42 = 1407U;

	t42 = ((x181&x182)*(x183%x184));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	int64_t x186 = -12638048756747LL;
	volatile uint8_t x187 = 2U;
	int64_t t43 = 3937LL;

	t43 = ((x185&x186)*(x187%x188));

	if (t43 != 47082LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = -96755683593804LL;
	int64_t x192 = 3920592121190LL;
	volatile int64_t t44 = -673652020242792543LL;

	t44 = ((x189&x190)*(x191%x192));

	if (t44 != 290267050868736LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MAX;
	volatile int64_t x194 = INT64_MIN;
	uint32_t x195 = 26U;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t45 = 50076LL;

	t45 = ((x193&x194)*(x195%x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x197 = UINT8_MAX;
	static int32_t x198 = INT32_MIN;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t46 = 60;

	t46 = ((x197&x198)*(x199%x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MAX;
	int32_t x204 = INT32_MAX;
	int32_t t47 = 1;

	t47 = ((x201&x202)*(x203%x204));

	if (t47 != 2147385345) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = 6657LL;
	int8_t x208 = INT8_MIN;
	int64_t t48 = INT64_MIN;

	t48 = ((x205&x206)*(x207%x208));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 38799852U;
	static uint8_t x210 = UINT8_MAX;
	int64_t x211 = 3397LL;
	volatile uint8_t x212 = 110U;
	int64_t t49 = -13821802690671460LL;

	t49 = ((x209&x210)*(x211%x212));

	if (t49 != 22892LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MAX;
	uint8_t x214 = 92U;
	uint8_t x215 = 31U;
	int16_t x216 = 5145;
	static volatile int32_t t50 = -439318;

	t50 = ((x213&x214)*(x215%x216));

	if (t50 != 2852) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x226 = -1418323083LL;
	uint64_t x227 = 3359670231584553LLU;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t51 = 4152008LLU;

	t51 = ((x225&x226)*(x227%x228));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = 0;
	volatile int32_t x231 = INT32_MIN;
	static volatile uint32_t x232 = 3U;
	volatile uint32_t t52 = 325U;

	t52 = ((x229&x230)*(x231%x232));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x241 = 3;
	int32_t x242 = -75364384;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MIN;
	volatile int64_t t53 = -180350747799313712LL;

	t53 = ((x241&x242)*(x243%x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x246 = INT8_MIN;
	int64_t x247 = -54123395099LL;
	int16_t x248 = INT16_MIN;
	volatile int64_t t54 = -10543193061LL;

	t54 = ((x245&x246)*(x247%x248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MIN;
	uint64_t t55 = 1276212LLU;

	t55 = ((x249&x250)*(x251%x252));

	if (t55 != 2000864871947698176LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x254 = INT32_MIN;
	uint64_t x255 = UINT64_MAX;
	static uint16_t x256 = 6U;
	volatile uint64_t t56 = 2794904184277LLU;

	t56 = ((x253&x254)*(x255%x256));

	if (t56 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = 86U;
	volatile int8_t x258 = INT8_MAX;
	uint64_t x259 = 64343LLU;
	int32_t x260 = -296996;
	static uint64_t t57 = 1860386LLU;

	t57 = ((x257&x258)*(x259%x260));

	if (t57 != 5533498LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = UINT32_MAX;
	static volatile uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MAX;
	volatile uint64_t t58 = 29766352378274338LLU;

	t58 = ((x261&x262)*(x263%x264));

	if (t58 != 30LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x266 = -1;
	int64_t x267 = -1759416LL;
	static int32_t x268 = INT32_MIN;
	volatile int64_t t59 = 16177011523828LL;

	t59 = ((x265&x266)*(x267%x268));

	if (t59 != 17168381328LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = -30;
	uint16_t x274 = 117U;
	int32_t x275 = INT32_MAX;
	static int32_t t60 = -158775085;

	t60 = ((x273&x274)*(x275%x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x279 = 165U;
	uint32_t x280 = 1823721U;
	uint32_t t61 = 617092U;

	t61 = ((x277&x278)*(x279%x280));

	if (t61 != 4294967131U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;
	static volatile int64_t t62 = -4496LL;

	t62 = ((x281&x282)*(x283%x284));

	if (t62 != 32385LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 113126;
	volatile int8_t x286 = INT8_MAX;
	volatile uint16_t x287 = 1U;
	int64_t x288 = INT64_MAX;
	int64_t t63 = 7LL;

	t63 = ((x285&x286)*(x287%x288));

	if (t63 != 102LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	int64_t t64 = 127803525288871866LL;

	t64 = ((x289&x290)*(x291%x292));

	if (t64 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x293 = 1U;
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t65 = -467;

	t65 = ((x293&x294)*(x295%x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x298 = 1;
	uint8_t x300 = 15U;
	int64_t t66 = 1938929054849LL;

	t66 = ((x297&x298)*(x299%x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x302 = -6;
	int8_t x303 = INT8_MAX;

	t67 = ((x301&x302)*(x303%x304));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -12;
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = -1;
	volatile int64_t x308 = -21LL;

	t68 = ((x305&x306)*(x307%x308));

	if (t68 != 12LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x310 = 0U;
	static volatile uint64_t x311 = 1264214601LLU;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t69 = 14650267724LLU;

	t69 = ((x309&x310)*(x311%x312));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	int8_t x316 = INT8_MIN;
	int64_t t70 = 869945952564597LL;

	t70 = ((x313&x314)*(x315%x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = 0;
	static volatile uint32_t x318 = 478582896U;
	int8_t x319 = 0;
	volatile uint32_t t71 = 359U;

	t71 = ((x317&x318)*(x319%x320));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x322 = UINT8_MAX;
	static int8_t x323 = 2;
	static int16_t x324 = 127;
	static volatile int32_t t72 = -470206187;

	t72 = ((x321&x322)*(x323%x324));

	if (t72 != 506) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t73 = 1166258;

	t73 = ((x325&x326)*(x327%x328));

	if (t73 != -2147450880) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x329 = 98589708U;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	uint32_t t74 = 0U;

	t74 = ((x329&x330)*(x331%x332));

	if (t74 != 854317904U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = 2;
	int8_t x334 = -1;
	uint32_t x336 = 9U;
	uint32_t t75 = 5U;

	t75 = ((x333&x334)*(x335%x336));

	if (t75 != 4U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = -23;
	static int8_t x338 = -1;
	int64_t x339 = INT64_MIN;
	volatile int64_t t76 = -56LL;

	t76 = ((x337&x338)*(x339%x340));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	volatile uint64_t x344 = UINT64_MAX;
	volatile uint64_t t77 = 24346245839LLU;

	t77 = ((x341&x342)*(x343%x344));

	if (t77 != 1073741824LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x345 = 15411157669907LL;
	int32_t x347 = -1;
	int8_t x348 = INT8_MAX;
	static int64_t t78 = -907940LL;

	t78 = ((x345&x346)*(x347%x348));

	if (t78 != -9437201LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = 1U;
	int8_t x350 = -1;
	static int16_t x351 = INT16_MAX;
	volatile uint32_t t79 = 196U;

	t79 = ((x349&x350)*(x351%x352));

	if (t79 != 196U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x353 = 1U;
	int32_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MIN;
	static int64_t t80 = 107031679LL;

	t80 = ((x353&x354)*(x355%x356));

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	int64_t x360 = 1LL;
	volatile int64_t t81 = 46511LL;

	t81 = ((x357&x358)*(x359%x360));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = 215658547147281259LLU;
	static uint64_t x362 = 487648721553941LLU;
	uint8_t x364 = UINT8_MAX;

	t82 = ((x361&x362)*(x363%x364));

	if (t82 != 3651114286851667LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = -7481;
	int16_t x367 = INT16_MIN;
	int8_t x368 = 1;
	int32_t t83 = -5;

	t83 = ((x365&x366)*(x367%x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x370 = 1367454374797433LLU;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = -10707;

	t84 = ((x369&x370)*(x371%x372));

	if (t84 != 17562001093215670048LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x373 = UINT64_MAX;
	volatile int8_t x374 = 2;
	int32_t x375 = INT32_MAX;
	volatile int8_t x376 = INT8_MAX;
	static volatile uint64_t t85 = 257622852152640909LLU;

	t85 = ((x373&x374)*(x375%x376));

	if (t85 != 14LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x377 = 1;
	volatile uint8_t x378 = UINT8_MAX;
	uint8_t x379 = UINT8_MAX;

	t86 = ((x377&x378)*(x379%x380));

	if (t86 != 255LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = 1419599315U;
	int32_t x382 = INT32_MIN;
	uint32_t t87 = 112828278U;

	t87 = ((x381&x382)*(x383%x384));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x389 = 373U;
	static uint16_t x390 = 2U;
	int16_t x391 = -1;
	int16_t x392 = INT16_MIN;
	int32_t t88 = -521121;

	t88 = ((x389&x390)*(x391%x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = -1LL;
	int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MIN;
	static int32_t x396 = 90;
	volatile int64_t t89 = -29356272096908LL;

	t89 = ((x393&x394)*(x395%x396));

	if (t89 != 17179869184LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MIN;
	uint16_t x406 = 2931U;
	int64_t x407 = -1LL;
	volatile int32_t x408 = -1;
	int64_t t90 = 1LL;

	t90 = ((x405&x406)*(x407%x408));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = -1;
	int32_t x411 = INT32_MIN;
	static volatile int64_t x412 = 619LL;
	static volatile int64_t t91 = -514252306LL;

	t91 = ((x409&x410)*(x411%x412));

	if (t91 != 566LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = UINT8_MAX;
	int16_t x414 = INT16_MAX;
	volatile int8_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t92 = -43;

	t92 = ((x413&x414)*(x415%x416));

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x418 = 1;
	int64_t x419 = -1LL;
	static int8_t x420 = INT8_MAX;
	volatile int64_t t93 = 26676678343955LL;

	t93 = ((x417&x418)*(x419%x420));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x421 = INT16_MIN;
	uint8_t x422 = 85U;
	uint32_t x423 = 2U;
	uint8_t x424 = 9U;

	t94 = ((x421&x422)*(x423%x424));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x426 = INT16_MIN;
	int8_t x427 = 5;
	int8_t x428 = INT8_MIN;

	t95 = ((x425&x426)*(x427%x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = 37939U;
	static uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MIN;
	int64_t x432 = INT64_MAX;
	int64_t t96 = 792142753601600926LL;

	t96 = ((x429&x430)*(x431%x432));

	if (t96 != -81473382121472LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = INT16_MIN;
	uint32_t x434 = 23134U;
	int32_t x435 = 1730;
	uint32_t x436 = 141U;
	volatile uint32_t t97 = 2U;

	t97 = ((x433&x434)*(x435%x436));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = UINT8_MAX;
	static int16_t x439 = INT16_MIN;
	uint8_t x440 = UINT8_MAX;

	t98 = ((x437&x438)*(x439%x440));

	if (t98 != -28032) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = UINT16_MAX;
	static int16_t x442 = 258;
	int64_t x443 = INT64_MAX;
	uint64_t x444 = UINT64_MAX;
	static uint64_t t99 = 556652843360325LLU;

	t99 = ((x441&x442)*(x443%x444));

	if (t99 != 18446744073709551358LLU) { NG(); } else { ; }
	
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

